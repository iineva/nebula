// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: misc.proto

#include "misc.pb.h"

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
class VoidRspDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<VoidRsp>
      _instance;
} _VoidRsp_default_instance_;
class SeqRspDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SeqRsp>
      _instance;
} _SeqRsp_default_instance_;
class SeqDateRspDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<SeqDateRsp>
      _instance;
} _SeqDateRsp_default_instance_;
class BoolRspDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<BoolRsp>
      _instance;
} _BoolRsp_default_instance_;
class ConfigDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Config>
      _instance;
} _Config_default_instance_;
class ExtensionDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Extension>
      _instance;
} _Extension_default_instance_;
class ConfigNotifyDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ConfigNotify>
      _instance;
} _ConfigNotify_default_instance_;
}  // namespace zproto
namespace protobuf_misc_2eproto {
void InitDefaultsVoidRspImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_VoidRsp_default_instance_;
    new (ptr) ::zproto::VoidRsp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::VoidRsp::InitAsDefaultInstance();
}

void InitDefaultsVoidRsp() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsVoidRspImpl);
}

void InitDefaultsSeqRspImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_SeqRsp_default_instance_;
    new (ptr) ::zproto::SeqRsp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::SeqRsp::InitAsDefaultInstance();
}

void InitDefaultsSeqRsp() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSeqRspImpl);
}

void InitDefaultsSeqDateRspImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_SeqDateRsp_default_instance_;
    new (ptr) ::zproto::SeqDateRsp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::SeqDateRsp::InitAsDefaultInstance();
}

void InitDefaultsSeqDateRsp() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsSeqDateRspImpl);
}

void InitDefaultsBoolRspImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_BoolRsp_default_instance_;
    new (ptr) ::zproto::BoolRsp();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::BoolRsp::InitAsDefaultInstance();
}

void InitDefaultsBoolRsp() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsBoolRspImpl);
}

void InitDefaultsConfigImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_Config_default_instance_;
    new (ptr) ::zproto::Config();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::Config::InitAsDefaultInstance();
}

void InitDefaultsConfig() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsConfigImpl);
}

void InitDefaultsExtensionImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_Extension_default_instance_;
    new (ptr) ::zproto::Extension();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::Extension::InitAsDefaultInstance();
}

void InitDefaultsExtension() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsExtensionImpl);
}

void InitDefaultsConfigNotifyImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_misc_2eproto::InitDefaultsConfig();
  {
    void* ptr = &::zproto::_ConfigNotify_default_instance_;
    new (ptr) ::zproto::ConfigNotify();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::ConfigNotify::InitAsDefaultInstance();
}

void InitDefaultsConfigNotify() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsConfigNotifyImpl);
}

::google::protobuf::Metadata file_level_metadata[7];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::VoidRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::SeqRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::SeqRsp, seq_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::SeqDateRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::SeqDateRsp, seq_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::SeqDateRsp, date_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::BoolRsp, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::BoolRsp, value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Config, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Config, max_group_size_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Extension, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Extension, id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::Extension, data_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::ConfigNotify, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::ConfigNotify, config_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zproto::VoidRsp)},
  { 5, -1, sizeof(::zproto::SeqRsp)},
  { 11, -1, sizeof(::zproto::SeqDateRsp)},
  { 18, -1, sizeof(::zproto::BoolRsp)},
  { 24, -1, sizeof(::zproto::Config)},
  { 30, -1, sizeof(::zproto::Extension)},
  { 37, -1, sizeof(::zproto::ConfigNotify)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_VoidRsp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_SeqRsp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_SeqDateRsp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_BoolRsp_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Config_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_Extension_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_ConfigNotify_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "misc.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 7);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\nmisc.proto\022\006zproto\"\t\n\007VoidRsp\"\025\n\006SeqRs"
      "p\022\013\n\003seq\030\001 \001(\003\"\'\n\nSeqDateRsp\022\013\n\003seq\030\001 \001("
      "\003\022\014\n\004date\030\002 \001(\003\"\030\n\007BoolRsp\022\r\n\005value\030\001 \001("
      "\010\" \n\006Config\022\026\n\016max_group_size\030\001 \001(\005\"%\n\tE"
      "xtension\022\n\n\002id\030\001 \001(\005\022\014\n\004data\030\002 \001(\014\".\n\014Co"
      "nfigNotify\022\036\n\006config\030\001 \001(\0132\016.zproto.Conf"
      "ig*\222\001\n\022UpdateOptimization\022\010\n\004NONE\020\000\022\022\n\016S"
      "TRIP_ENTITIES\020\001\022\023\n\017ENABLE_COMBINED\020\002\022\023\n\017"
      "FASTER_MESSAGES\020\003\022\022\n\016STRIP_COUNTERS\020\004\022\021\n"
      "\rCOMPACT_USERS\020\005\022\r\n\tGROUPS_V2\020\006B\'\n\027com.z"
      "chat.engine.zprotoB\nZProtoMiscH\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 440);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "misc.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_misc_2eproto
namespace zproto {
const ::google::protobuf::EnumDescriptor* UpdateOptimization_descriptor() {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_misc_2eproto::file_level_enum_descriptors[0];
}
bool UpdateOptimization_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void VoidRsp::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VoidRsp::VoidRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsVoidRsp();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.VoidRsp)
}
VoidRsp::VoidRsp(const VoidRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:zproto.VoidRsp)
}

void VoidRsp::SharedCtor() {
  _cached_size_ = 0;
}

VoidRsp::~VoidRsp() {
  // @@protoc_insertion_point(destructor:zproto.VoidRsp)
  SharedDtor();
}

void VoidRsp::SharedDtor() {
}

void VoidRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VoidRsp::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const VoidRsp& VoidRsp::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsVoidRsp();
  return *internal_default_instance();
}

VoidRsp* VoidRsp::New(::google::protobuf::Arena* arena) const {
  VoidRsp* n = new VoidRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VoidRsp::Swap(VoidRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VoidRsp::InternalSwap(VoidRsp* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata VoidRsp::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SeqRsp::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SeqRsp::kSeqFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SeqRsp::SeqRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsSeqRsp();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.SeqRsp)
}
SeqRsp::SeqRsp(const SeqRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  seq_ = from.seq_;
  // @@protoc_insertion_point(copy_constructor:zproto.SeqRsp)
}

void SeqRsp::SharedCtor() {
  seq_ = GOOGLE_LONGLONG(0);
  _cached_size_ = 0;
}

SeqRsp::~SeqRsp() {
  // @@protoc_insertion_point(destructor:zproto.SeqRsp)
  SharedDtor();
}

void SeqRsp::SharedDtor() {
}

void SeqRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SeqRsp::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SeqRsp& SeqRsp::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsSeqRsp();
  return *internal_default_instance();
}

SeqRsp* SeqRsp::New(::google::protobuf::Arena* arena) const {
  SeqRsp* n = new SeqRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SeqRsp::Swap(SeqRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SeqRsp::InternalSwap(SeqRsp* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata SeqRsp::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void SeqDateRsp::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SeqDateRsp::kSeqFieldNumber;
const int SeqDateRsp::kDateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SeqDateRsp::SeqDateRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsSeqDateRsp();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.SeqDateRsp)
}
SeqDateRsp::SeqDateRsp(const SeqDateRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&seq_, &from.seq_,
    static_cast<size_t>(reinterpret_cast<char*>(&date_) -
    reinterpret_cast<char*>(&seq_)) + sizeof(date_));
  // @@protoc_insertion_point(copy_constructor:zproto.SeqDateRsp)
}

void SeqDateRsp::SharedCtor() {
  ::memset(&seq_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&date_) -
      reinterpret_cast<char*>(&seq_)) + sizeof(date_));
  _cached_size_ = 0;
}

SeqDateRsp::~SeqDateRsp() {
  // @@protoc_insertion_point(destructor:zproto.SeqDateRsp)
  SharedDtor();
}

void SeqDateRsp::SharedDtor() {
}

void SeqDateRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SeqDateRsp::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const SeqDateRsp& SeqDateRsp::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsSeqDateRsp();
  return *internal_default_instance();
}

SeqDateRsp* SeqDateRsp::New(::google::protobuf::Arena* arena) const {
  SeqDateRsp* n = new SeqDateRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SeqDateRsp::Swap(SeqDateRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SeqDateRsp::InternalSwap(SeqDateRsp* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata SeqDateRsp::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void BoolRsp::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int BoolRsp::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

BoolRsp::BoolRsp()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsBoolRsp();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.BoolRsp)
}
BoolRsp::BoolRsp(const BoolRsp& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  value_ = from.value_;
  // @@protoc_insertion_point(copy_constructor:zproto.BoolRsp)
}

void BoolRsp::SharedCtor() {
  value_ = false;
  _cached_size_ = 0;
}

BoolRsp::~BoolRsp() {
  // @@protoc_insertion_point(destructor:zproto.BoolRsp)
  SharedDtor();
}

void BoolRsp::SharedDtor() {
}

void BoolRsp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* BoolRsp::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const BoolRsp& BoolRsp::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsBoolRsp();
  return *internal_default_instance();
}

BoolRsp* BoolRsp::New(::google::protobuf::Arena* arena) const {
  BoolRsp* n = new BoolRsp;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void BoolRsp::Swap(BoolRsp* other) {
  if (other == this) return;
  InternalSwap(other);
}
void BoolRsp::InternalSwap(BoolRsp* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata BoolRsp::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Config::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Config::kMaxGroupSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Config::Config()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsConfig();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Config)
}
Config::Config(const Config& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  max_group_size_ = from.max_group_size_;
  // @@protoc_insertion_point(copy_constructor:zproto.Config)
}

void Config::SharedCtor() {
  max_group_size_ = 0;
  _cached_size_ = 0;
}

Config::~Config() {
  // @@protoc_insertion_point(destructor:zproto.Config)
  SharedDtor();
}

void Config::SharedDtor() {
}

void Config::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Config::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Config& Config::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsConfig();
  return *internal_default_instance();
}

Config* Config::New(::google::protobuf::Arena* arena) const {
  Config* n = new Config;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Config::Swap(Config* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Config::InternalSwap(Config* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Config::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void Extension::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Extension::kIdFieldNumber;
const int Extension::kDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Extension::Extension()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsExtension();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.Extension)
}
Extension::Extension(const Extension& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.data().size() > 0) {
    data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.data_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:zproto.Extension)
}

void Extension::SharedCtor() {
  data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
  _cached_size_ = 0;
}

Extension::~Extension() {
  // @@protoc_insertion_point(destructor:zproto.Extension)
  SharedDtor();
}

void Extension::SharedDtor() {
  data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Extension::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Extension::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Extension& Extension::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsExtension();
  return *internal_default_instance();
}

Extension* Extension::New(::google::protobuf::Arena* arena) const {
  Extension* n = new Extension;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Extension::Swap(Extension* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Extension::InternalSwap(Extension* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata Extension::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ConfigNotify::InitAsDefaultInstance() {
  ::zproto::_ConfigNotify_default_instance_._instance.get_mutable()->config_ = const_cast< ::zproto::Config*>(
      ::zproto::Config::internal_default_instance());
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ConfigNotify::kConfigFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ConfigNotify::ConfigNotify()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_misc_2eproto::InitDefaultsConfigNotify();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.ConfigNotify)
}
ConfigNotify::ConfigNotify(const ConfigNotify& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_config()) {
    config_ = new ::zproto::Config(*from.config_);
  } else {
    config_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:zproto.ConfigNotify)
}

void ConfigNotify::SharedCtor() {
  config_ = NULL;
  _cached_size_ = 0;
}

ConfigNotify::~ConfigNotify() {
  // @@protoc_insertion_point(destructor:zproto.ConfigNotify)
  SharedDtor();
}

void ConfigNotify::SharedDtor() {
  if (this != internal_default_instance()) delete config_;
}

void ConfigNotify::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ConfigNotify::descriptor() {
  ::protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ConfigNotify& ConfigNotify::default_instance() {
  ::protobuf_misc_2eproto::InitDefaultsConfigNotify();
  return *internal_default_instance();
}

ConfigNotify* ConfigNotify::New(::google::protobuf::Arena* arena) const {
  ConfigNotify* n = new ConfigNotify;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ConfigNotify::Swap(ConfigNotify* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ConfigNotify::InternalSwap(ConfigNotify* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata ConfigNotify::GetMetadata() const {
  protobuf_misc_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_misc_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zproto

// @@protoc_insertion_point(global_scope)