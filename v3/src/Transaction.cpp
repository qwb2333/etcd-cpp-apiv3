/*
 * Transaction.cpp
 *
 *  Created on: Jun 21, 2016
 *      Author: ubuntu
 */

#include "v3/include/Transaction.hpp"

using etcdserverpb::Compare;
using etcdserverpb::RangeRequest;
using etcdserverpb::PutRequest;
using etcdserverpb::RequestOp;
using etcdserverpb::DeleteRangeRequest;

etcdv3::Transaction::Transaction() {
}

etcdv3::Transaction::Transaction(const std::string& key) : key(key) {
}

void etcdv3::Transaction::init_compare(Compare::CompareResult result, Compare::CompareTarget target){
	Compare* compare = txn_request.add_compare();
	compare->set_result(result);
	compare->set_target(target);
	compare->set_key(key);

	compare->set_version(0);
}

void etcdv3::Transaction::init_compare(std::string const& old_value, Compare::CompareResult result, Compare::CompareTarget target){
	Compare* compare = txn_request.add_compare();
	compare->set_result(result);
	compare->set_target(target);
	compare->set_key(key);

	compare->set_value(old_value);
}

void etcdv3::Transaction::init_compare(int old_index, Compare::CompareResult result, Compare::CompareTarget target){
	Compare* compare = txn_request.add_compare();
	compare->set_result(result);
	compare->set_target(target);
	compare->set_key(key);

	compare->set_mod_revision(old_index);
}

/**
 * get key on failure
 */
void etcdv3::Transaction::setup_basic_failure_operation(std::string const& key) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest()); //then this can be just a raw pointer
	get_request->set_key(key);
	RequestOp* req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_range(get_request.release()); //why not get()?
}

/**
 * get key on failure, get key before put, modify and then get updated key
 */
void etcdv3::Transaction::setup_set_failure_operation(std::string const &key, std::string const &value) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	get_request->set_key(key);
	RequestOp* req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_range(get_request.release());

	std::unique_ptr<PutRequest> put_request(new PutRequest());
	put_request->set_key(key);
	put_request->set_value(value);
	req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_put(put_request.release());

	get_request.reset(new RangeRequest());
	get_request->set_key(key);
	req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_range(get_request.release());
}

/**
 * get key, delete
 */
void etcdv3::Transaction::setup_delete_failure_operation(std::string const &key, std::string const &range_end, bool recursive) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	std::unique_ptr<DeleteRangeRequest> del_request(new DeleteRangeRequest());
	get_request.reset(new RangeRequest());
	get_request->set_key(key);
	if(recursive)
	{
		get_request->set_range_end(range_end);
		get_request->set_sort_target(RangeRequest::SortTarget::RangeRequest_SortTarget_KEY);
		get_request->set_sort_order(RangeRequest::SortOrder::RangeRequest_SortOrder_ASCEND);
	}
	RequestOp* req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_range(get_request.release());

	del_request.reset(new DeleteRangeRequest());
	del_request->set_key(key);
	if(recursive)
	{
		del_request->set_range_end(range_end);
	}

	req_failure = txn_request.add_failure();
	req_failure->set_allocated_request_delete_range(del_request.release());
}

/**
 * add key and then get new value of key
 */
void etcdv3::Transaction::setup_basic_create_sequence(std::string const& key, std::string const& value) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	std::unique_ptr<PutRequest> put_request(new PutRequest());
	put_request->set_key(key);
	put_request->set_value(value);
	RequestOp* req_success = txn_request.add_success();
	req_success->set_allocated_request_put(put_request.release());
	get_request->set_key(key);
	req_success = txn_request.add_success();
	req_success->set_allocated_request_range(get_request.release());
}

/**
 * get key value then modify and get new value
 */
void etcdv3::Transaction::setup_compare_and_swap_sequence(std::string const& value) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	get_request.reset(new RangeRequest());
	get_request->set_key(key);
	RequestOp* req_success = txn_request.add_success();
	req_success->set_allocated_request_range(get_request.release());

	std::unique_ptr<PutRequest> put_request(new PutRequest());
	put_request->set_key(key);
	put_request->set_value(value);
	req_success = txn_request.add_success();
	req_success->set_allocated_request_put(put_request.release());

	get_request.reset(new RangeRequest());
	get_request->set_key(key);
	req_success = txn_request.add_success();
	req_success->set_allocated_request_range(get_request.release());
}

/**
 * get key, delete
 */
void etcdv3::Transaction::setup_delete_sequence(std::string const &key, std::string const &range_end, bool recursive) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	get_request->set_key(key);
	if(recursive)
	{
		get_request->set_range_end(range_end);
		get_request->set_sort_target(RangeRequest::SortTarget::RangeRequest_SortTarget_KEY);
		get_request->set_sort_order(RangeRequest::SortOrder::RangeRequest_SortOrder_ASCEND);
	}

	RequestOp* req_success = txn_request.add_success();
	req_success->set_allocated_request_range(get_request.release());

	std::unique_ptr<DeleteRangeRequest> del_request(new DeleteRangeRequest());
	del_request->set_key(key);
	if(recursive)
	{
		del_request->set_range_end(range_end);
	}

	req_success = txn_request.add_success();
	req_success->set_allocated_request_delete_range(del_request.release());
}

void etcdv3::Transaction::setup_compare_and_delete_operation(std::string const& key) {
	std::unique_ptr<RangeRequest> get_request(new RangeRequest());
	get_request->set_key(key);
	RequestOp* req_success = txn_request.add_success();
	req_success->set_allocated_request_range(get_request.release());

	std::unique_ptr<DeleteRangeRequest> del_request(new DeleteRangeRequest());
	del_request->set_key(key);
	req_success = txn_request.add_success();
	req_success->set_allocated_request_delete_range(del_request.release());
}


etcdv3::Transaction::~Transaction() {
}