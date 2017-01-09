// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/framework/allocation_description.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/framework/allocation_description.pb.h"

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
// @@protoc_insertion_point(includes)

namespace tensorflow {
class AllocationDescriptionDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<AllocationDescription> {};
AllocationDescriptionDefaultTypeInternal _AllocationDescription_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, requested_bytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, allocated_bytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, allocator_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, allocation_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, has_single_reference_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(AllocationDescription, ptr_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(AllocationDescription)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_AllocationDescription_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/framework/allocation_description.proto", schemas, file_default_instances, protobuf_Offsets_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto(), factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
  _AllocationDescription_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _AllocationDescription_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_impl() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
  static const char descriptor[] = {
      "\n6tensorflow/core/framework/allocation_d"
      "escription.proto\022\ntensorflow\"\243\001\n\025Allocat"
      "ionDescription\022\027\n\017requested_bytes\030\001 \001(\003\022"
      "\027\n\017allocated_bytes\030\002 \001(\003\022\026\n\016allocator_na"
      "me\030\003 \001(\t\022\025\n\rallocation_id\030\004 \001(\003\022\034\n\024has_s"
      "ingle_reference\030\005 \001(\010\022\013\n\003ptr\030\006 \001(\004B<\n\030or"
      "g.tensorflow.frameworkB\033AllocationDescri"
      "ptionProtosP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 304);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/framework/allocation_description.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int AllocationDescription::kRequestedBytesFieldNumber;
const int AllocationDescription::kAllocatedBytesFieldNumber;
const int AllocationDescription::kAllocatorNameFieldNumber;
const int AllocationDescription::kAllocationIdFieldNumber;
const int AllocationDescription::kHasSingleReferenceFieldNumber;
const int AllocationDescription::kPtrFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

AllocationDescription::AllocationDescription()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.AllocationDescription)
}
AllocationDescription::AllocationDescription(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.AllocationDescription)
}
AllocationDescription::AllocationDescription(const AllocationDescription& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  allocator_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.allocator_name().size() > 0) {
    allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.allocator_name(),
      GetArenaNoVirtual());
  }
  ::memcpy(&requested_bytes_, &from.requested_bytes_,
    reinterpret_cast<char*>(&has_single_reference_) -
    reinterpret_cast<char*>(&requested_bytes_) + sizeof(has_single_reference_));
  // @@protoc_insertion_point(copy_constructor:tensorflow.AllocationDescription)
}

void AllocationDescription::SharedCtor() {
  allocator_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&requested_bytes_, 0, reinterpret_cast<char*>(&has_single_reference_) -
    reinterpret_cast<char*>(&requested_bytes_) + sizeof(has_single_reference_));
  _cached_size_ = 0;
}

AllocationDescription::~AllocationDescription() {
  // @@protoc_insertion_point(destructor:tensorflow.AllocationDescription)
  SharedDtor();
}

void AllocationDescription::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  allocator_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void AllocationDescription::ArenaDtor(void* object) {
  AllocationDescription* _this = reinterpret_cast< AllocationDescription* >(object);
  (void)_this;
}
void AllocationDescription::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void AllocationDescription::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* AllocationDescription::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const AllocationDescription& AllocationDescription::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fframework_2fallocation_5fdescription_2eproto();
  return *internal_default_instance();
}

AllocationDescription* AllocationDescription::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<AllocationDescription>(arena);
}

void AllocationDescription::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.AllocationDescription)
  allocator_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  ::memset(&requested_bytes_, 0, reinterpret_cast<char*>(&has_single_reference_) -
    reinterpret_cast<char*>(&requested_bytes_) + sizeof(has_single_reference_));
}

bool AllocationDescription::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.AllocationDescription)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // int64 requested_bytes = 1;
      case 1: {
        if (tag == 8u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &requested_bytes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 allocated_bytes = 2;
      case 2: {
        if (tag == 16u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &allocated_bytes_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string allocator_name = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_allocator_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->allocator_name().data(), this->allocator_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.AllocationDescription.allocator_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int64 allocation_id = 4;
      case 4: {
        if (tag == 32u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &allocation_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool has_single_reference = 5;
      case 5: {
        if (tag == 40u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &has_single_reference_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // uint64 ptr = 6;
      case 6: {
        if (tag == 48u) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &ptr_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tensorflow.AllocationDescription)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.AllocationDescription)
  return false;
#undef DO_
}

void AllocationDescription::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.AllocationDescription)
  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->requested_bytes(), output);
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->allocated_bytes(), output);
  }

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->allocator_name().data(), this->allocator_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.AllocationDescription.allocator_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->allocator_name(), output);
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(4, this->allocation_id(), output);
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->has_single_reference(), output);
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(6, this->ptr(), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.AllocationDescription)
}

::google::protobuf::uint8* AllocationDescription::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.AllocationDescription)
  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->requested_bytes(), target);
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->allocated_bytes(), target);
  }

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->allocator_name().data(), this->allocator_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.AllocationDescription.allocator_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->allocator_name(), target);
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(4, this->allocation_id(), target);
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->has_single_reference(), target);
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(6, this->ptr(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.AllocationDescription)
  return target;
}

size_t AllocationDescription::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.AllocationDescription)
  size_t total_size = 0;

  // string allocator_name = 3;
  if (this->allocator_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->allocator_name());
  }

  // int64 requested_bytes = 1;
  if (this->requested_bytes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->requested_bytes());
  }

  // int64 allocated_bytes = 2;
  if (this->allocated_bytes() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->allocated_bytes());
  }

  // int64 allocation_id = 4;
  if (this->allocation_id() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int64Size(
        this->allocation_id());
  }

  // uint64 ptr = 6;
  if (this->ptr() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->ptr());
  }

  // bool has_single_reference = 5;
  if (this->has_single_reference() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void AllocationDescription::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  const AllocationDescription* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const AllocationDescription>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.AllocationDescription)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.AllocationDescription)
    MergeFrom(*source);
  }
}

void AllocationDescription::MergeFrom(const AllocationDescription& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.AllocationDescription)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.allocator_name().size() > 0) {
    set_allocator_name(from.allocator_name());
  }
  if (from.requested_bytes() != 0) {
    set_requested_bytes(from.requested_bytes());
  }
  if (from.allocated_bytes() != 0) {
    set_allocated_bytes(from.allocated_bytes());
  }
  if (from.allocation_id() != 0) {
    set_allocation_id(from.allocation_id());
  }
  if (from.ptr() != 0) {
    set_ptr(from.ptr());
  }
  if (from.has_single_reference() != 0) {
    set_has_single_reference(from.has_single_reference());
  }
}

void AllocationDescription::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void AllocationDescription::CopyFrom(const AllocationDescription& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.AllocationDescription)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AllocationDescription::IsInitialized() const {
  return true;
}

void AllocationDescription::Swap(AllocationDescription* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    AllocationDescription* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void AllocationDescription::UnsafeArenaSwap(AllocationDescription* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void AllocationDescription::InternalSwap(AllocationDescription* other) {
  allocator_name_.Swap(&other->allocator_name_);
  std::swap(requested_bytes_, other->requested_bytes_);
  std::swap(allocated_bytes_, other->allocated_bytes_);
  std::swap(allocation_id_, other->allocation_id_);
  std::swap(ptr_, other->ptr_);
  std::swap(has_single_reference_, other->has_single_reference_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata AllocationDescription::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// AllocationDescription

// int64 requested_bytes = 1;
void AllocationDescription::clear_requested_bytes() {
  requested_bytes_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 AllocationDescription::requested_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.requested_bytes)
  return requested_bytes_;
}
void AllocationDescription::set_requested_bytes(::google::protobuf::int64 value) {
  
  requested_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.requested_bytes)
}

// int64 allocated_bytes = 2;
void AllocationDescription::clear_allocated_bytes() {
  allocated_bytes_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 AllocationDescription::allocated_bytes() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocated_bytes)
  return allocated_bytes_;
}
void AllocationDescription::set_allocated_bytes(::google::protobuf::int64 value) {
  
  allocated_bytes_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocated_bytes)
}

// string allocator_name = 3;
void AllocationDescription::clear_allocator_name() {
  allocator_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& AllocationDescription::allocator_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocator_name)
  return allocator_name_.Get();
}
void AllocationDescription::set_allocator_name(const ::std::string& value) {
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocator_name)
}
void AllocationDescription::set_allocator_name(const char* value) {
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.AllocationDescription.allocator_name)
}
void AllocationDescription::set_allocator_name(const char* value,
    size_t size) {
  
  allocator_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.AllocationDescription.allocator_name)
}
::std::string* AllocationDescription::mutable_allocator_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.AllocationDescription.allocator_name)
  return allocator_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* AllocationDescription::release_allocator_name() {
  // @@protoc_insertion_point(field_release:tensorflow.AllocationDescription.allocator_name)
  
  return allocator_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* AllocationDescription::unsafe_arena_release_allocator_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.AllocationDescription.allocator_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return allocator_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void AllocationDescription::set_allocated_allocator_name(::std::string* allocator_name) {
  if (allocator_name != NULL) {
    
  } else {
    
  }
  allocator_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), allocator_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.AllocationDescription.allocator_name)
}
void AllocationDescription::unsafe_arena_set_allocated_allocator_name(
    ::std::string* allocator_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (allocator_name != NULL) {
    
  } else {
    
  }
  allocator_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      allocator_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.AllocationDescription.allocator_name)
}

// int64 allocation_id = 4;
void AllocationDescription::clear_allocation_id() {
  allocation_id_ = GOOGLE_LONGLONG(0);
}
::google::protobuf::int64 AllocationDescription::allocation_id() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.allocation_id)
  return allocation_id_;
}
void AllocationDescription::set_allocation_id(::google::protobuf::int64 value) {
  
  allocation_id_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.allocation_id)
}

// bool has_single_reference = 5;
void AllocationDescription::clear_has_single_reference() {
  has_single_reference_ = false;
}
bool AllocationDescription::has_single_reference() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.has_single_reference)
  return has_single_reference_;
}
void AllocationDescription::set_has_single_reference(bool value) {
  
  has_single_reference_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.has_single_reference)
}

// uint64 ptr = 6;
void AllocationDescription::clear_ptr() {
  ptr_ = GOOGLE_ULONGLONG(0);
}
::google::protobuf::uint64 AllocationDescription::ptr() const {
  // @@protoc_insertion_point(field_get:tensorflow.AllocationDescription.ptr)
  return ptr_;
}
void AllocationDescription::set_ptr(::google::protobuf::uint64 value) {
  
  ptr_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.AllocationDescription.ptr)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
