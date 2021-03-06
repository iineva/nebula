// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: peers.proto

#include "peers.pb.h"

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
namespace zproto {
class PeerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Peer>
      _instance;
} _Peer_default_instance_;
class OutPeerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<OutPeer>
      _instance;
} _OutPeer_default_instance_;
class UserOutPeerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<UserOutPeer>
      _instance;
} _UserOutPeer_default_instance_;
class GroupOutPeerDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<GroupOutPeer>
      _instance;
} _GroupOutPeer_default_instance_;
}  // namespace zproto
namespace protobuf_peers_2eproto {
void InitDefaultsPeerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_Peer_default_instance_;
    new (ptr) ::zproto::Peer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::Peer::InitAsDefaultInstance();
}

void InitDefaultsPeer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPeerImpl);
}

void InitDefaultsOutPeerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_OutPeer_default_instance_;
    new (ptr) ::zproto::OutPeer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::OutPeer::InitAsDefaultInstance();
}

void InitDefaultsOutPeer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsOutPeerImpl);
}

void InitDefaultsUserOutPeerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_UserOutPeer_default_instance_;
    new (ptr) ::zproto::UserOutPeer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::UserOutPeer::InitAsDefaultInstance();
}

void InitDefaultsUserOutPeer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsUserOutPeerImpl);
}

void InitDefaultsGroupOutPeerImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_GroupOutPeer_default_instance_;
    new (ptr) ::zproto::GroupOutPeer();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::GroupOutPeer::InitAsDefaultInstance();
}

void InitDefaultsGroupOutPeer() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsGroupOutPeerImpl);
}

::google::protobuf::Metadata file_level_metadata[4];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Peer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Peer, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Peer, id_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::OutPeer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::OutPeer, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::OutPeer, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::OutPeer, access_hash_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::UserOutPeer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::UserOutPeer, uid_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::UserOutPeer, access_hash_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupOutPeer, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupOutPeer, group_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::GroupOutPeer, access_hash_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zproto::Peer)},
  { 7, -1, sizeof(::zproto::OutPeer)},
  { 15, -1, sizeof(::zproto::UserOutPeer)},
  { 22, -1, sizeof(::zproto::GroupOutPeer)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Peer_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_OutPeer_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_UserOutPeer_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_GroupOutPeer_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "peers.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 4);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013peers.proto\022\006zproto\"2\n\004Peer\022\036\n\004type\030\001 "
      "\001(\0162\020.zproto.PeerType\022\n\n\002id\030\002 \001(\t\"J\n\007Out"
      "Peer\022\036\n\004type\030\001 \001(\0162\020.zproto.PeerType\022\n\n\002"
      "id\030\002 \001(\t\022\023\n\013access_hash\030\003 \001(\004\"/\n\013UserOut"
      "Peer\022\013\n\003uid\030\001 \001(\t\022\023\n\013access_hash\030\002 \001(\004\"5"
      "\n\014GroupOutPeer\022\020\n\010group_id\030\001 \001(\t\022\023\n\013acce"
      "ss_hash\030\002 \001(\004*9\n\010PeerType\022\013\n\007PRIVATE\020\000\022\t"
      "\n\005GROUP\020\001\022\025\n\021ENCRYPTED_PRIVATE\020\002B(\n\027com."
      "zchat.engine.zprotoB\013ZProtoPeersH\002b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 362);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "peers.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_peers_2eproto
namespace zproto {
const ::google::protobuf::EnumDescriptor* PeerType_descriptor() {
  protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_peers_2eproto::file_level_enum_descriptors[0];
}
bool PeerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void Peer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Peer::kTypeFieldNumber;
const int Peer::kIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Peer::Peer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_peers_2eproto::InitDefaultsPeer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Peer)
}
Peer::Peer(const Peer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:zproto.Peer)
}

void Peer::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
  _cached_size_ = 0;
}

Peer::~Peer() {
  // @@protoc_insertion_point(destructor:zproto.Peer)
  SharedDtor();
}

void Peer::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Peer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Peer::descriptor() {
  ::protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Peer& Peer::default_instance() {
  ::protobuf_peers_2eproto::InitDefaultsPeer();
  return *internal_default_instance();
}

Peer* Peer::New(::google::protobuf::Arena* arena) const {
  Peer* n = new Peer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Peer::Swap(Peer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Peer::InternalSwap(Peer* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Peer::GetMetadata() const {
  protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void OutPeer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int OutPeer::kTypeFieldNumber;
const int OutPeer::kIdFieldNumber;
const int OutPeer::kAccessHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

OutPeer::OutPeer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_peers_2eproto::InitDefaultsOutPeer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.OutPeer)
}
OutPeer::OutPeer(const OutPeer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  ::memcpy(&access_hash_, &from.access_hash_,
    static_cast<size_t>(reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&access_hash_)) + sizeof(type_));
  // @@protoc_insertion_point(copy_constructor:zproto.OutPeer)
}

void OutPeer::SharedCtor() {
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&access_hash_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&type_) -
      reinterpret_cast<char*>(&access_hash_)) + sizeof(type_));
  _cached_size_ = 0;
}

OutPeer::~OutPeer() {
  // @@protoc_insertion_point(destructor:zproto.OutPeer)
  SharedDtor();
}

void OutPeer::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void OutPeer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* OutPeer::descriptor() {
  ::protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const OutPeer& OutPeer::default_instance() {
  ::protobuf_peers_2eproto::InitDefaultsOutPeer();
  return *internal_default_instance();
}

OutPeer* OutPeer::New(::google::protobuf::Arena* arena) const {
  OutPeer* n = new OutPeer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void OutPeer::Swap(OutPeer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void OutPeer::InternalSwap(OutPeer* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata OutPeer::GetMetadata() const {
  protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void UserOutPeer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int UserOutPeer::kUidFieldNumber;
const int UserOutPeer::kAccessHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

UserOutPeer::UserOutPeer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_peers_2eproto::InitDefaultsUserOutPeer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.UserOutPeer)
}
UserOutPeer::UserOutPeer(const UserOutPeer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.uid().size() > 0) {
    uid_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.uid_);
  }
  access_hash_ = from.access_hash_;
  // @@protoc_insertion_point(copy_constructor:zproto.UserOutPeer)
}

void UserOutPeer::SharedCtor() {
  uid_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  access_hash_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

UserOutPeer::~UserOutPeer() {
  // @@protoc_insertion_point(destructor:zproto.UserOutPeer)
  SharedDtor();
}

void UserOutPeer::SharedDtor() {
  uid_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void UserOutPeer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UserOutPeer::descriptor() {
  ::protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const UserOutPeer& UserOutPeer::default_instance() {
  ::protobuf_peers_2eproto::InitDefaultsUserOutPeer();
  return *internal_default_instance();
}

UserOutPeer* UserOutPeer::New(::google::protobuf::Arena* arena) const {
  UserOutPeer* n = new UserOutPeer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UserOutPeer::Swap(UserOutPeer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UserOutPeer::InternalSwap(UserOutPeer* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata UserOutPeer::GetMetadata() const {
  protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void GroupOutPeer::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GroupOutPeer::kGroupIdFieldNumber;
const int GroupOutPeer::kAccessHashFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GroupOutPeer::GroupOutPeer()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_peers_2eproto::InitDefaultsGroupOutPeer();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.GroupOutPeer)
}
GroupOutPeer::GroupOutPeer(const GroupOutPeer& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  group_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.group_id().size() > 0) {
    group_id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.group_id_);
  }
  access_hash_ = from.access_hash_;
  // @@protoc_insertion_point(copy_constructor:zproto.GroupOutPeer)
}

void GroupOutPeer::SharedCtor() {
  group_id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  access_hash_ = GOOGLE_ULONGLONG(0);
  _cached_size_ = 0;
}

GroupOutPeer::~GroupOutPeer() {
  // @@protoc_insertion_point(destructor:zproto.GroupOutPeer)
  SharedDtor();
}

void GroupOutPeer::SharedDtor() {
  group_id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void GroupOutPeer::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GroupOutPeer::descriptor() {
  ::protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GroupOutPeer& GroupOutPeer::default_instance() {
  ::protobuf_peers_2eproto::InitDefaultsGroupOutPeer();
  return *internal_default_instance();
}

GroupOutPeer* GroupOutPeer::New(::google::protobuf::Arena* arena) const {
  GroupOutPeer* n = new GroupOutPeer;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GroupOutPeer::Swap(GroupOutPeer* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GroupOutPeer::InternalSwap(GroupOutPeer* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata GroupOutPeer::GetMetadata() const {
  protobuf_peers_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_peers_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zproto

// @@protoc_insertion_point(global_scope)
