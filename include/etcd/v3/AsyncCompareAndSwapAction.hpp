#ifndef __ASYNC_COMPAREANDSWAP_HPP__
#define __ASYNC_COMPAREANDSWAP_HPP__

#include <grpc++/grpc++.h>
#include "etcd/proto/rpc.grpc.pb.h"
#include "Action.hpp"
#include "AsyncTxnResponse.hpp"


using grpc::ClientAsyncResponseReader;
using etcdserverpb::TxnResponse;
using etcdserverpb::KV;

namespace etcdv3
{
  class AsyncCompareAndSwapAction : public etcdv3::Action
  {
    public:
      AsyncCompareAndSwapAction(etcdv3::ActionParameters param, etcdv3::Atomicity_Type type);
      AsyncTxnResponse ParseResponse();
    private:
      TxnResponse reply;
      std::unique_ptr<ClientAsyncResponseReader<TxnResponse>> response_reader;
  };
}

#endif
