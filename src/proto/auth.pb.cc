// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: auth.proto

#include "etcd/proto/auth.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace authpb {
class UserDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<User>
      _instance;
} _User_default_instance_;
class PermissionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Permission>
      _instance;
} _Permission_default_instance_;
class RoleDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Role>
      _instance;
} _Role_default_instance_;
}  // namespace authpb
namespace protobuf_auth_2eproto {
void InitDefaultsUserImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::authpb::_User_default_instance_;
    new (ptr) ::authpb::User();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::authpb::User::InitAsDefaultInstance();
}

void InitDefaultsUser() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsUserImpl);
}

void InitDefaultsPermissionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::authpb::_Permission_default_instance_;
    new (ptr) ::authpb::Permission();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::authpb::Permission::InitAsDefaultInstance();
}

void InitDefaultsPermission() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPermissionImpl);
}

void InitDefaultsRoleImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_auth_2eproto::InitDefaultsPermission();
  {
    void* ptr = &::authpb::_Role_default_instance_;
    new (ptr) ::authpb::Role();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::authpb::Role::InitAsDefaultInstance();
}

void InitDefaultsRole() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRoleImpl);
}

::google::protobuf::Metadata file_level_metadata[3];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::User, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::User, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::User, password_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::User, roles_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Permission, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Permission, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Permission, permtype_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Role, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Role, name_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::authpb::Role, keypermission_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::authpb::User)},
  { 8, -1, sizeof(::authpb::Permission)},
  { 15, -1, sizeof(::authpb::Role)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::authpb::_User_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::authpb::_Permission_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::authpb::_Role_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "auth.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 3);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nauth.proto\022\006authpb\"5\n\004User\022\014\n\004name\030\001 \001"
      "(\014\022\020\n\010password\030\002 \001(\014\022\r\n\005roles\030\003 \003(\t\"p\n\nP"
      "ermission\022\013\n\003key\030\001 \001(\014\022)\n\010permType\030\002 \001(\016"
      "2\027.authpb.Permission.Type\"*\n\004Type\022\010\n\004REA"
      "D\020\000\022\t\n\005WRITE\020\001\022\r\n\tREADWRITE\020\002\"\?\n\004Role\022\014\n"
      "\004name\030\001 \001(\014\022)\n\rkeyPermission\030\002 \003(\0132\022.aut"
      "hpb.Permissionb\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 262);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "auth.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_auth_2eproto
namespace authpb {
const ::google::protobuf::EnumDescriptor* Permission_Type_descriptor() {
  protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_auth_2eproto::file_level_enum_descriptors[0];
}
bool Permission_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Permission_Type Permission::READ;
const Permission_Type Permission::WRITE;
const Permission_Type Permission::READWRITE;
const Permission_Type Permission::Type_MIN;
const Permission_Type Permission::Type_MAX;
const int Permission::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void User::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int User::kNameFieldNumber;
const int User::kPasswordFieldNumber;
const int User::kRolesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

User::User()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_auth_2eproto::InitDefaultsUser();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:authpb.User)
}
User::User(const User& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      roles_(from.roles_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.password().size() > 0) {
    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
  // @@protoc_insertion_point(copy_constructor:authpb.User)
}

void User::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

User::~User() {
  // @@protoc_insertion_point(destructor:authpb.User)
  SharedDtor();
}

void User::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void User::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* User::descriptor() {
  ::protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const User& User::default_instance() {
  ::protobuf_auth_2eproto::InitDefaultsUser();
  return *internal_default_instance();
}

User* User::New(::google::protobuf::Arena* arena) const {
  User* n = new User;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void User::Clear() {
// @@protoc_insertion_point(message_clear_start:authpb.User)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  roles_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool User::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:authpb.User)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes password = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_password()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string roles = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_roles()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->roles(this->roles_size() - 1).data(),
            static_cast<int>(this->roles(this->roles_size() - 1).length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "authpb.User.roles"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:authpb.User)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:authpb.User)
  return false;
#undef DO_
}

void User::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:authpb.User)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->name(), output);
  }

  // bytes password = 2;
  if (this->password().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->password(), output);
  }

  // repeated string roles = 3;
  for (int i = 0, n = this->roles_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->roles(i).data(), static_cast<int>(this->roles(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "authpb.User.roles");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->roles(i), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:authpb.User)
}

::google::protobuf::uint8* User::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:authpb.User)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->name(), target);
  }

  // bytes password = 2;
  if (this->password().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->password(), target);
  }

  // repeated string roles = 3;
  for (int i = 0, n = this->roles_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->roles(i).data(), static_cast<int>(this->roles(i).length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "authpb.User.roles");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->roles(i), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:authpb.User)
  return target;
}

size_t User::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:authpb.User)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated string roles = 3;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->roles_size());
  for (int i = 0, n = this->roles_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->roles(i));
  }

  // bytes name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->name());
  }

  // bytes password = 2;
  if (this->password().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->password());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void User::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:authpb.User)
  GOOGLE_DCHECK_NE(&from, this);
  const User* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const User>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:authpb.User)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:authpb.User)
    MergeFrom(*source);
  }
}

void User::MergeFrom(const User& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:authpb.User)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  roles_.MergeFrom(from.roles_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  if (from.password().size() > 0) {

    password_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.password_);
  }
}

void User::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:authpb.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void User::CopyFrom(const User& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:authpb.User)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool User::IsInitialized() const {
  return true;
}

void User::Swap(User* other) {
  if (other == this) return;
  InternalSwap(other);
}
void User::InternalSwap(User* other) {
  using std::swap;
  roles_.InternalSwap(&other->roles_);
  name_.Swap(&other->name_);
  password_.Swap(&other->password_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata User::GetMetadata() const {
  protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Permission::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Permission::kKeyFieldNumber;
const int Permission::kPermTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Permission::Permission()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_auth_2eproto::InitDefaultsPermission();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:authpb.Permission)
}
Permission::Permission(const Permission& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.key().size() > 0) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  permtype_ = from.permtype_;
  // @@protoc_insertion_point(copy_constructor:authpb.Permission)
}

void Permission::SharedCtor() {
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  permtype_ = 0;
  _cached_size_ = 0;
}

Permission::~Permission() {
  // @@protoc_insertion_point(destructor:authpb.Permission)
  SharedDtor();
}

void Permission::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Permission::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Permission::descriptor() {
  ::protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Permission& Permission::default_instance() {
  ::protobuf_auth_2eproto::InitDefaultsPermission();
  return *internal_default_instance();
}

Permission* Permission::New(::google::protobuf::Arena* arena) const {
  Permission* n = new Permission;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Permission::Clear() {
// @@protoc_insertion_point(message_clear_start:authpb.Permission)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  permtype_ = 0;
  _internal_metadata_.Clear();
}

bool Permission::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:authpb.Permission)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes key = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_key()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .authpb.Permission.Type permType = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_permtype(static_cast< ::authpb::Permission_Type >(value));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:authpb.Permission)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:authpb.Permission)
  return false;
#undef DO_
}

void Permission::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:authpb.Permission)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->key(), output);
  }

  // .authpb.Permission.Type permType = 2;
  if (this->permtype() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->permtype(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:authpb.Permission)
}

::google::protobuf::uint8* Permission::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:authpb.Permission)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes key = 1;
  if (this->key().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->key(), target);
  }

  // .authpb.Permission.Type permType = 2;
  if (this->permtype() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->permtype(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:authpb.Permission)
  return target;
}

size_t Permission::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:authpb.Permission)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // bytes key = 1;
  if (this->key().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->key());
  }

  // .authpb.Permission.Type permType = 2;
  if (this->permtype() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->permtype());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Permission::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:authpb.Permission)
  GOOGLE_DCHECK_NE(&from, this);
  const Permission* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Permission>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:authpb.Permission)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:authpb.Permission)
    MergeFrom(*source);
  }
}

void Permission::MergeFrom(const Permission& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:authpb.Permission)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.key().size() > 0) {

    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  if (from.permtype() != 0) {
    set_permtype(from.permtype());
  }
}

void Permission::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:authpb.Permission)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Permission::CopyFrom(const Permission& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:authpb.Permission)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Permission::IsInitialized() const {
  return true;
}

void Permission::Swap(Permission* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Permission::InternalSwap(Permission* other) {
  using std::swap;
  key_.Swap(&other->key_);
  swap(permtype_, other->permtype_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Permission::GetMetadata() const {
  protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Role::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Role::kNameFieldNumber;
const int Role::kKeyPermissionFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Role::Role()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_auth_2eproto::InitDefaultsRole();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:authpb.Role)
}
Role::Role(const Role& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      keypermission_(from.keypermission_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.name().size() > 0) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  // @@protoc_insertion_point(copy_constructor:authpb.Role)
}

void Role::SharedCtor() {
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

Role::~Role() {
  // @@protoc_insertion_point(destructor:authpb.Role)
  SharedDtor();
}

void Role::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Role::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Role::descriptor() {
  ::protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Role& Role::default_instance() {
  ::protobuf_auth_2eproto::InitDefaultsRole();
  return *internal_default_instance();
}

Role* Role::New(::google::protobuf::Arena* arena) const {
  Role* n = new Role;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Role::Clear() {
// @@protoc_insertion_point(message_clear_start:authpb.Role)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  keypermission_.Clear();
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

bool Role::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:authpb.Role)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // bytes name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_name()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .authpb.Permission keyPermission = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_keypermission()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:authpb.Role)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:authpb.Role)
  return false;
#undef DO_
}

void Role::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:authpb.Role)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      1, this->name(), output);
  }

  // repeated .authpb.Permission keyPermission = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->keypermission_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->keypermission(static_cast<int>(i)), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:authpb.Role)
}

::google::protobuf::uint8* Role::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:authpb.Role)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // bytes name = 1;
  if (this->name().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        1, this->name(), target);
  }

  // repeated .authpb.Permission keyPermission = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->keypermission_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        2, this->keypermission(static_cast<int>(i)), deterministic, target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:authpb.Role)
  return target;
}

size_t Role::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:authpb.Role)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // repeated .authpb.Permission keyPermission = 2;
  {
    unsigned int count = static_cast<unsigned int>(this->keypermission_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->keypermission(static_cast<int>(i)));
    }
  }

  // bytes name = 1;
  if (this->name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Role::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:authpb.Role)
  GOOGLE_DCHECK_NE(&from, this);
  const Role* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Role>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:authpb.Role)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:authpb.Role)
    MergeFrom(*source);
  }
}

void Role::MergeFrom(const Role& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:authpb.Role)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  keypermission_.MergeFrom(from.keypermission_);
  if (from.name().size() > 0) {

    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
}

void Role::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:authpb.Role)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Role::CopyFrom(const Role& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:authpb.Role)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Role::IsInitialized() const {
  return true;
}

void Role::Swap(Role* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Role::InternalSwap(Role* other) {
  using std::swap;
  keypermission_.InternalSwap(&other->keypermission_);
  name_.Swap(&other->name_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Role::GetMetadata() const {
  protobuf_auth_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_auth_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace authpb

// @@protoc_insertion_point(global_scope)
