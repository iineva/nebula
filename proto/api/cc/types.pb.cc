// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: types.proto

#include "types.pb.h"

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
class RawValueDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RawValue>
      _instance;
} _RawValue_default_instance_;
class RawArrayValueDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<RawArrayValue>
      _instance;
} _RawArrayValue_default_instance_;
}  // namespace zproto
namespace protobuf_types_2eproto {
void InitDefaultsRawValueImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  {
    void* ptr = &::zproto::_RawValue_default_instance_;
    new (ptr) ::zproto::RawValue();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::RawValue::InitAsDefaultInstance();
}

void InitDefaultsRawValue() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRawValueImpl);
}

void InitDefaultsRawArrayValueImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_types_2eproto::InitDefaultsRawValue();
  {
    void* ptr = &::zproto::_RawArrayValue_default_instance_;
    new (ptr) ::zproto::RawArrayValue();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::zproto::RawArrayValue::InitAsDefaultInstance();
}

void InitDefaultsRawArrayValue() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsRawArrayValueImpl);
}

::google::protobuf::Metadata file_level_metadata[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[1];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, type_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, int32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, int64_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, uint32_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, uint64_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, float_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, double_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, bool_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, date_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, datetime_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, binary_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, string_value_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawValue, data_type_value_),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawArrayValue, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::zproto::RawArrayValue, array_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::zproto::RawValue)},
  { 18, -1, sizeof(::zproto::RawArrayValue)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_RawValue_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::zproto::_RawArrayValue_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "types.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\013types.proto\022\006zproto\"\302\002\n\010RawValue\022\036\n\004ty"
      "pe\030\001 \001(\0162\020.zproto.DataType\022\023\n\013int32_valu"
      "e\030\002 \001(\005\022\023\n\013int64_value\030\003 \001(\003\022\024\n\014uint32_v"
      "alue\030\004 \001(\r\022\024\n\014uint64_value\030\005 \001(\004\022\023\n\013floa"
      "t_value\030\006 \001(\002\022\024\n\014double_value\030\007 \001(\001\022\022\n\nb"
      "ool_value\030\010 \001(\010\022\022\n\ndate_value\030\t \001(\005\022\026\n\016d"
      "atetime_value\030\n \001(\003\022\024\n\014binary_value\030\013 \001("
      "\014\022\024\n\014string_value\030\014 \001(\t\022)\n\017data_type_val"
      "ue\030\r \001(\0162\020.zproto.DataType\"0\n\rRawArrayVa"
      "lue\022\037\n\005array\030\001 \003(\0132\020.zproto.RawValue*\242\001\n"
      "\010DataType\022\t\n\005INT32\020\000\022\t\n\005INT64\020\001\022\n\n\006UINT3"
      "2\020\002\022\n\n\006UINT64\020\003\022\t\n\005FLOAT\020\004\022\n\n\006DOUBLE\020\005\022\010"
      "\n\004BOOL\020\006\022\010\n\004DATE\020\007\022\014\n\010DATETIME\020\010\022\n\n\006STRI"
      "NG\020\t\022\n\n\006BINARY\020\n\022\010\n\004ENUM\020\013\022\r\n\tDATA_TYPE\020"
      "\014B.\n\027com.zchat.engine.zprotoB\021ZProtoColl"
      "ectionsH\002b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 617);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "types.proto", &protobuf_RegisterTypes);
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
}  // namespace protobuf_types_2eproto
namespace zproto {
const ::google::protobuf::EnumDescriptor* DataType_descriptor() {
  protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_types_2eproto::file_level_enum_descriptors[0];
}
bool DataType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
      return true;
    default:
      return false;
  }
}


// ===================================================================

void RawValue::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RawValue::kTypeFieldNumber;
const int RawValue::kInt32ValueFieldNumber;
const int RawValue::kInt64ValueFieldNumber;
const int RawValue::kUint32ValueFieldNumber;
const int RawValue::kUint64ValueFieldNumber;
const int RawValue::kFloatValueFieldNumber;
const int RawValue::kDoubleValueFieldNumber;
const int RawValue::kBoolValueFieldNumber;
const int RawValue::kDateValueFieldNumber;
const int RawValue::kDatetimeValueFieldNumber;
const int RawValue::kBinaryValueFieldNumber;
const int RawValue::kStringValueFieldNumber;
const int RawValue::kDataTypeValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RawValue::RawValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_types_2eproto::InitDefaultsRawValue();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RawValue)
}
RawValue::RawValue(const RawValue& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  binary_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.binary_value().size() > 0) {
    binary_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.binary_value_);
  }
  string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.string_value().size() > 0) {
    string_value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.string_value_);
  }
  ::memcpy(&type_, &from.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&data_type_value_) -
    reinterpret_cast<char*>(&type_)) + sizeof(data_type_value_));
  // @@protoc_insertion_point(copy_constructor:zproto.RawValue)
}

void RawValue::SharedCtor() {
  binary_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  string_value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&data_type_value_) -
      reinterpret_cast<char*>(&type_)) + sizeof(data_type_value_));
  _cached_size_ = 0;
}

RawValue::~RawValue() {
  // @@protoc_insertion_point(destructor:zproto.RawValue)
  SharedDtor();
}

void RawValue::SharedDtor() {
  binary_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  string_value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void RawValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RawValue::descriptor() {
  ::protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_types_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RawValue& RawValue::default_instance() {
  ::protobuf_types_2eproto::InitDefaultsRawValue();
  return *internal_default_instance();
}

RawValue* RawValue::New(::google::protobuf::Arena* arena) const {
  RawValue* n = new RawValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RawValue::Swap(RawValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RawValue::InternalSwap(RawValue* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RawValue::GetMetadata() const {
  protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_types_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void RawArrayValue::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RawArrayValue::kArrayFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RawArrayValue::RawArrayValue()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_types_2eproto::InitDefaultsRawArrayValue();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:zproto.RawArrayValue)
}
RawArrayValue::RawArrayValue(const RawArrayValue& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      array_(from.array_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:zproto.RawArrayValue)
}

void RawArrayValue::SharedCtor() {
  _cached_size_ = 0;
}

RawArrayValue::~RawArrayValue() {
  // @@protoc_insertion_point(destructor:zproto.RawArrayValue)
  SharedDtor();
}

void RawArrayValue::SharedDtor() {
}

void RawArrayValue::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RawArrayValue::descriptor() {
  ::protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_types_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const RawArrayValue& RawArrayValue::default_instance() {
  ::protobuf_types_2eproto::InitDefaultsRawArrayValue();
  return *internal_default_instance();
}

RawArrayValue* RawArrayValue::New(::google::protobuf::Arena* arena) const {
  RawArrayValue* n = new RawArrayValue;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RawArrayValue::Swap(RawArrayValue* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RawArrayValue::InternalSwap(RawArrayValue* other) {
  using std::swap;
  GetReflection()->Swap(this, other);}

::google::protobuf::Metadata RawArrayValue::GetMetadata() const {
  protobuf_types_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_types_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace zproto

// @@protoc_insertion_point(global_scope)