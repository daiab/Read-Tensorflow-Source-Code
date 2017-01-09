// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/python/training/checkpoint_state.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/python/training/checkpoint_state.pb.h"

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
class CheckpointStateDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CheckpointState> {};
CheckpointStateDefaultTypeInternal _CheckpointState_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, model_checkpoint_path_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CheckpointState, all_model_checkpoint_paths_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(CheckpointState)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_CheckpointState_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/python/training/checkpoint_state.proto", schemas, file_default_instances, protobuf_Offsets_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto(), factory,
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

void protobuf_ShutdownFile_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  _CheckpointState_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _CheckpointState_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl() {
  protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  static const char descriptor[] = {
      "\n1tensorflow/python/training/checkpoint_"
      "state.proto\022\ntensorflow\"T\n\017CheckpointSta"
      "te\022\035\n\025model_checkpoint_path\030\001 \001(\t\022\"\n\032all"
      "_model_checkpoint_paths\030\002 \003(\tB\003\370\001\001b\006prot"
      "o3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 162);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/python/training/checkpoint_state.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto {
  StaticDescriptorInitializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto() {
    protobuf_AddDesc_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CheckpointState::kModelCheckpointPathFieldNumber;
const int CheckpointState::kAllModelCheckpointPathsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CheckpointState::CheckpointState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.CheckpointState)
}
CheckpointState::CheckpointState(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  all_model_checkpoint_paths_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.CheckpointState)
}
CheckpointState::CheckpointState(const CheckpointState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      all_model_checkpoint_paths_(from.all_model_checkpoint_paths_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  model_checkpoint_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.model_checkpoint_path().size() > 0) {
    model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.model_checkpoint_path(),
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.CheckpointState)
}

void CheckpointState::SharedCtor() {
  model_checkpoint_path_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

CheckpointState::~CheckpointState() {
  // @@protoc_insertion_point(destructor:tensorflow.CheckpointState)
  SharedDtor();
}

void CheckpointState::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  model_checkpoint_path_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void CheckpointState::ArenaDtor(void* object) {
  CheckpointState* _this = reinterpret_cast< CheckpointState* >(object);
  (void)_this;
}
void CheckpointState::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void CheckpointState::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CheckpointState::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const CheckpointState& CheckpointState::default_instance() {
  protobuf_InitDefaults_tensorflow_2fpython_2ftraining_2fcheckpoint_5fstate_2eproto();
  return *internal_default_instance();
}

CheckpointState* CheckpointState::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<CheckpointState>(arena);
}

void CheckpointState::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.CheckpointState)
  all_model_checkpoint_paths_.Clear();
  model_checkpoint_path_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool CheckpointState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.CheckpointState)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string model_checkpoint_path = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_model_checkpoint_path()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.CheckpointState.model_checkpoint_path"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string all_model_checkpoint_paths = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_all_model_checkpoint_paths()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->all_model_checkpoint_paths(this->all_model_checkpoint_paths_size() - 1).data(),
            this->all_model_checkpoint_paths(this->all_model_checkpoint_paths_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.CheckpointState.all_model_checkpoint_paths"));
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
  // @@protoc_insertion_point(parse_success:tensorflow.CheckpointState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.CheckpointState)
  return false;
#undef DO_
}

void CheckpointState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.CheckpointState)
  // string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.model_checkpoint_path");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->model_checkpoint_path(), output);
  }

  // repeated string all_model_checkpoint_paths = 2;
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->all_model_checkpoint_paths(i).data(), this->all_model_checkpoint_paths(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.all_model_checkpoint_paths");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->all_model_checkpoint_paths(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.CheckpointState)
}

::google::protobuf::uint8* CheckpointState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.CheckpointState)
  // string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->model_checkpoint_path().data(), this->model_checkpoint_path().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.model_checkpoint_path");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->model_checkpoint_path(), target);
  }

  // repeated string all_model_checkpoint_paths = 2;
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->all_model_checkpoint_paths(i).data(), this->all_model_checkpoint_paths(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.CheckpointState.all_model_checkpoint_paths");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->all_model_checkpoint_paths(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.CheckpointState)
  return target;
}

size_t CheckpointState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.CheckpointState)
  size_t total_size = 0;

  // repeated string all_model_checkpoint_paths = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->all_model_checkpoint_paths_size());
  for (int i = 0; i < this->all_model_checkpoint_paths_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->all_model_checkpoint_paths(i));
  }

  // string model_checkpoint_path = 1;
  if (this->model_checkpoint_path().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->model_checkpoint_path());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CheckpointState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.CheckpointState)
  GOOGLE_DCHECK_NE(&from, this);
  const CheckpointState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CheckpointState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.CheckpointState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.CheckpointState)
    MergeFrom(*source);
  }
}

void CheckpointState::MergeFrom(const CheckpointState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.CheckpointState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  all_model_checkpoint_paths_.MergeFrom(from.all_model_checkpoint_paths_);
  if (from.model_checkpoint_path().size() > 0) {
    set_model_checkpoint_path(from.model_checkpoint_path());
  }
}

void CheckpointState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.CheckpointState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CheckpointState::CopyFrom(const CheckpointState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.CheckpointState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CheckpointState::IsInitialized() const {
  return true;
}

void CheckpointState::Swap(CheckpointState* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    CheckpointState* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void CheckpointState::UnsafeArenaSwap(CheckpointState* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void CheckpointState::InternalSwap(CheckpointState* other) {
  all_model_checkpoint_paths_.UnsafeArenaSwap(&other->all_model_checkpoint_paths_);
  model_checkpoint_path_.Swap(&other->model_checkpoint_path_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CheckpointState::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CheckpointState

// string model_checkpoint_path = 1;
void CheckpointState::clear_model_checkpoint_path() {
  model_checkpoint_path_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& CheckpointState::model_checkpoint_path() const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.Get();
}
void CheckpointState::set_model_checkpoint_path(const ::std::string& value) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.model_checkpoint_path)
}
void CheckpointState::set_model_checkpoint_path(const char* value) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.model_checkpoint_path)
}
void CheckpointState::set_model_checkpoint_path(const char* value,
    size_t size) {
  
  model_checkpoint_path_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.model_checkpoint_path)
}
::std::string* CheckpointState::mutable_model_checkpoint_path() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.model_checkpoint_path)
  return model_checkpoint_path_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* CheckpointState::release_model_checkpoint_path() {
  // @@protoc_insertion_point(field_release:tensorflow.CheckpointState.model_checkpoint_path)
  
  return model_checkpoint_path_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* CheckpointState::unsafe_arena_release_model_checkpoint_path() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.CheckpointState.model_checkpoint_path)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return model_checkpoint_path_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void CheckpointState::set_allocated_model_checkpoint_path(::std::string* model_checkpoint_path) {
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), model_checkpoint_path,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.CheckpointState.model_checkpoint_path)
}
void CheckpointState::unsafe_arena_set_allocated_model_checkpoint_path(
    ::std::string* model_checkpoint_path) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (model_checkpoint_path != NULL) {
    
  } else {
    
  }
  model_checkpoint_path_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      model_checkpoint_path, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.CheckpointState.model_checkpoint_path)
}

// repeated string all_model_checkpoint_paths = 2;
int CheckpointState::all_model_checkpoint_paths_size() const {
  return all_model_checkpoint_paths_.size();
}
void CheckpointState::clear_all_model_checkpoint_paths() {
  all_model_checkpoint_paths_.Clear();
}
const ::std::string& CheckpointState::all_model_checkpoint_paths(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Get(index);
}
::std::string* CheckpointState::mutable_all_model_checkpoint_paths(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Mutable(index);
}
void CheckpointState::set_all_model_checkpoint_paths(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.CheckpointState.all_model_checkpoint_paths)
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
}
void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value) {
  all_model_checkpoint_paths_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
void CheckpointState::set_all_model_checkpoint_paths(int index, const char* value, size_t size) {
  all_model_checkpoint_paths_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
::std::string* CheckpointState::add_all_model_checkpoint_paths() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_.Add();
}
void CheckpointState::add_all_model_checkpoint_paths(const ::std::string& value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
void CheckpointState::add_all_model_checkpoint_paths(const char* value) {
  all_model_checkpoint_paths_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
void CheckpointState::add_all_model_checkpoint_paths(const char* value, size_t size) {
  all_model_checkpoint_paths_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.CheckpointState.all_model_checkpoint_paths)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
CheckpointState::all_model_checkpoint_paths() const {
  // @@protoc_insertion_point(field_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return all_model_checkpoint_paths_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
CheckpointState::mutable_all_model_checkpoint_paths() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.CheckpointState.all_model_checkpoint_paths)
  return &all_model_checkpoint_paths_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
