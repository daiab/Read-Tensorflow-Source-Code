// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/protobuf/queue_runner.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "tensorflow/core/protobuf/queue_runner.pb.h"

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
class QueueRunnerDefDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<QueueRunnerDef> {};
QueueRunnerDefDefaultTypeInternal _QueueRunnerDef_default_instance_;

namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace


const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() GOOGLE_ATTRIBUTE_COLD;
const ::google::protobuf::uint32* protobuf_Offsets_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  static const ::google::protobuf::uint32 offsets[] = {
    ~0u,  // no _has_bits_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, queue_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, enqueue_op_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, close_op_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, cancel_op_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueRunnerDef, queue_closed_exception_types_),
  };
  return offsets;
}

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, -1, sizeof(QueueRunnerDef)},
};

static const ::google::protobuf::internal::DefaultInstanceData file_default_instances[] = {
  {reinterpret_cast<const ::google::protobuf::Message*>(&_QueueRunnerDef_default_instance_), NULL},
};

namespace {

void protobuf_AssignDescriptors() {
  protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "tensorflow/core/protobuf/queue_runner.proto", schemas, file_default_instances, protobuf_Offsets_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto(), factory,
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

void protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  _QueueRunnerDef_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::tensorflow::error::protobuf_InitDefaults_tensorflow_2fcore_2flib_2fcore_2ferror_5fcodes_2eproto();
  ::google::protobuf::internal::InitProtobufDefaults();
  _QueueRunnerDef_default_instance_.DefaultConstruct();
}

void protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_impl);
}
void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_impl() {
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  static const char descriptor[] = {
      "\n+tensorflow/core/protobuf/queue_runner."
      "proto\022\ntensorflow\032*tensorflow/core/lib/c"
      "ore/error_codes.proto\"\252\001\n\016QueueRunnerDef"
      "\022\022\n\nqueue_name\030\001 \001(\t\022\027\n\017enqueue_op_name\030"
      "\002 \003(\t\022\025\n\rclose_op_name\030\003 \001(\t\022\026\n\016cancel_o"
      "p_name\030\004 \001(\t\022<\n\034queue_closed_exception_t"
      "ypes\030\005 \003(\0162\026.tensorflow.error.CodeB2\n\030or"
      "g.tensorflow.frameworkB\021QueueRunnerProto"
      "sP\001\370\001\001b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 334);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "tensorflow/core/protobuf/queue_runner.proto", &protobuf_RegisterTypes);
  ::tensorflow::error::protobuf_AddDesc_tensorflow_2fcore_2flib_2fcore_2ferror_5fcodes_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_once_);
void protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_once_,
                 &protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto {
  StaticDescriptorInitializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto() {
    protobuf_AddDesc_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  }
} static_descriptor_initializer_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QueueRunnerDef::kQueueNameFieldNumber;
const int QueueRunnerDef::kEnqueueOpNameFieldNumber;
const int QueueRunnerDef::kCloseOpNameFieldNumber;
const int QueueRunnerDef::kCancelOpNameFieldNumber;
const int QueueRunnerDef::kQueueClosedExceptionTypesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QueueRunnerDef::QueueRunnerDef()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:tensorflow.QueueRunnerDef)
}
QueueRunnerDef::QueueRunnerDef(::google::protobuf::Arena* arena)
  : ::google::protobuf::Message(),
  _internal_metadata_(arena),
  enqueue_op_name_(arena),
  queue_closed_exception_types_(arena) {
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:tensorflow.QueueRunnerDef)
}
QueueRunnerDef::QueueRunnerDef(const QueueRunnerDef& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      enqueue_op_name_(from.enqueue_op_name_),
      queue_closed_exception_types_(from.queue_closed_exception_types_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  queue_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.queue_name().size() > 0) {
    queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.queue_name(),
      GetArenaNoVirtual());
  }
  close_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.close_op_name().size() > 0) {
    close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.close_op_name(),
      GetArenaNoVirtual());
  }
  cancel_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.cancel_op_name().size() > 0) {
    cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.cancel_op_name(),
      GetArenaNoVirtual());
  }
  // @@protoc_insertion_point(copy_constructor:tensorflow.QueueRunnerDef)
}

void QueueRunnerDef::SharedCtor() {
  queue_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  close_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cancel_op_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _cached_size_ = 0;
}

QueueRunnerDef::~QueueRunnerDef() {
  // @@protoc_insertion_point(destructor:tensorflow.QueueRunnerDef)
  SharedDtor();
}

void QueueRunnerDef::SharedDtor() {
  ::google::protobuf::Arena* arena = GetArenaNoVirtual();
  if (arena != NULL) {
    return;
  }

  queue_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  close_op_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
  cancel_op_name_.Destroy(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), arena);
}

void QueueRunnerDef::ArenaDtor(void* object) {
  QueueRunnerDef* _this = reinterpret_cast< QueueRunnerDef* >(object);
  (void)_this;
}
void QueueRunnerDef::RegisterArenaDtor(::google::protobuf::Arena* arena) {
}
void QueueRunnerDef::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QueueRunnerDef::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0].descriptor;
}

const QueueRunnerDef& QueueRunnerDef::default_instance() {
  protobuf_InitDefaults_tensorflow_2fcore_2fprotobuf_2fqueue_5frunner_2eproto();
  return *internal_default_instance();
}

QueueRunnerDef* QueueRunnerDef::New(::google::protobuf::Arena* arena) const {
  return ::google::protobuf::Arena::CreateMessage<QueueRunnerDef>(arena);
}

void QueueRunnerDef::Clear() {
// @@protoc_insertion_point(message_clear_start:tensorflow.QueueRunnerDef)
  enqueue_op_name_.Clear();
  queue_closed_exception_types_.Clear();
  queue_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  close_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
  cancel_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}

bool QueueRunnerDef::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tensorflow.QueueRunnerDef)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string queue_name = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_queue_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->queue_name().data(), this->queue_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.queue_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string enqueue_op_name = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_enqueue_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->enqueue_op_name(this->enqueue_op_name_size() - 1).data(),
            this->enqueue_op_name(this->enqueue_op_name_size() - 1).length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.enqueue_op_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string close_op_name = 3;
      case 3: {
        if (tag == 26u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_close_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->close_op_name().data(), this->close_op_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.close_op_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string cancel_op_name = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cancel_op_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->cancel_op_name().data(), this->cancel_op_name().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tensorflow.QueueRunnerDef.cancel_op_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .tensorflow.error.Code queue_closed_exception_types = 5;
      case 5: {
        if (tag == 42u) {
          ::google::protobuf::uint32 length;
          DO_(input->ReadVarint32(&length));
          ::google::protobuf::io::CodedInputStream::Limit limit = input->PushLimit(length);
          while (input->BytesUntilLimit() > 0) {
            int value;
            DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
            add_queue_closed_exception_types(static_cast< ::tensorflow::error::Code >(value));
          }
          input->PopLimit(limit);
        } else if (tag == 40u) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          add_queue_closed_exception_types(static_cast< ::tensorflow::error::Code >(value));
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
  // @@protoc_insertion_point(parse_success:tensorflow.QueueRunnerDef)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tensorflow.QueueRunnerDef)
  return false;
#undef DO_
}

void QueueRunnerDef::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tensorflow.QueueRunnerDef)
  // string queue_name = 1;
  if (this->queue_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->queue_name().data(), this->queue_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.queue_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->queue_name(), output);
  }

  // repeated string enqueue_op_name = 2;
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->enqueue_op_name(i).data(), this->enqueue_op_name(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.enqueue_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->enqueue_op_name(i), output);
  }

  // string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->close_op_name().data(), this->close_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.close_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->close_op_name(), output);
  }

  // string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cancel_op_name().data(), this->cancel_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.cancel_op_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->cancel_op_name(), output);
  }

  // repeated .tensorflow.error.Code queue_closed_exception_types = 5;
  if (this->queue_closed_exception_types_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      output);
    output->WriteVarint32(_queue_closed_exception_types_cached_byte_size_);
  }
  for (int i = 0; i < this->queue_closed_exception_types_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteEnumNoTag(
      this->queue_closed_exception_types(i), output);
  }

  // @@protoc_insertion_point(serialize_end:tensorflow.QueueRunnerDef)
}

::google::protobuf::uint8* QueueRunnerDef::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:tensorflow.QueueRunnerDef)
  // string queue_name = 1;
  if (this->queue_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->queue_name().data(), this->queue_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.queue_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->queue_name(), target);
  }

  // repeated string enqueue_op_name = 2;
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->enqueue_op_name(i).data(), this->enqueue_op_name(i).length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.enqueue_op_name");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->enqueue_op_name(i), target);
  }

  // string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->close_op_name().data(), this->close_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.close_op_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->close_op_name(), target);
  }

  // string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->cancel_op_name().data(), this->cancel_op_name().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tensorflow.QueueRunnerDef.cancel_op_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->cancel_op_name(), target);
  }

  // repeated .tensorflow.error.Code queue_closed_exception_types = 5;
  if (this->queue_closed_exception_types_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      5,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(    _queue_closed_exception_types_cached_byte_size_, target);
  }
  for (int i = 0; i < this->queue_closed_exception_types_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumNoTagToArray(
      this->queue_closed_exception_types(i), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tensorflow.QueueRunnerDef)
  return target;
}

size_t QueueRunnerDef::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tensorflow.QueueRunnerDef)
  size_t total_size = 0;

  // repeated string enqueue_op_name = 2;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->enqueue_op_name_size());
  for (int i = 0; i < this->enqueue_op_name_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->enqueue_op_name(i));
  }

  // repeated .tensorflow.error.Code queue_closed_exception_types = 5;
  {
    size_t data_size = 0;
    unsigned int count = this->queue_closed_exception_types_size();for (unsigned int i = 0; i < count; i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::EnumSize(
        this->queue_closed_exception_types(i));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _queue_closed_exception_types_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // string queue_name = 1;
  if (this->queue_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->queue_name());
  }

  // string close_op_name = 3;
  if (this->close_op_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->close_op_name());
  }

  // string cancel_op_name = 4;
  if (this->cancel_op_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->cancel_op_name());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void QueueRunnerDef::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tensorflow.QueueRunnerDef)
  GOOGLE_DCHECK_NE(&from, this);
  const QueueRunnerDef* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QueueRunnerDef>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tensorflow.QueueRunnerDef)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tensorflow.QueueRunnerDef)
    MergeFrom(*source);
  }
}

void QueueRunnerDef::MergeFrom(const QueueRunnerDef& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tensorflow.QueueRunnerDef)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  enqueue_op_name_.MergeFrom(from.enqueue_op_name_);
  queue_closed_exception_types_.MergeFrom(from.queue_closed_exception_types_);
  if (from.queue_name().size() > 0) {
    set_queue_name(from.queue_name());
  }
  if (from.close_op_name().size() > 0) {
    set_close_op_name(from.close_op_name());
  }
  if (from.cancel_op_name().size() > 0) {
    set_cancel_op_name(from.cancel_op_name());
  }
}

void QueueRunnerDef::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tensorflow.QueueRunnerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QueueRunnerDef::CopyFrom(const QueueRunnerDef& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tensorflow.QueueRunnerDef)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool QueueRunnerDef::IsInitialized() const {
  return true;
}

void QueueRunnerDef::Swap(QueueRunnerDef* other) {
  if (other == this) return;
  if (GetArenaNoVirtual() == other->GetArenaNoVirtual()) {
    InternalSwap(other);
  } else {
    QueueRunnerDef* temp = New(GetArenaNoVirtual());
    temp->MergeFrom(*other);
    other->CopyFrom(*this);
    InternalSwap(temp);
    if (GetArenaNoVirtual() == NULL) {
      delete temp;
    }
  }
}
void QueueRunnerDef::UnsafeArenaSwap(QueueRunnerDef* other) {
  if (other == this) return;
  GOOGLE_DCHECK(GetArenaNoVirtual() == other->GetArenaNoVirtual());
  InternalSwap(other);
}
void QueueRunnerDef::InternalSwap(QueueRunnerDef* other) {
  enqueue_op_name_.UnsafeArenaSwap(&other->enqueue_op_name_);
  queue_closed_exception_types_.UnsafeArenaSwap(&other->queue_closed_exception_types_);
  queue_name_.Swap(&other->queue_name_);
  close_op_name_.Swap(&other->close_op_name_);
  cancel_op_name_.Swap(&other->cancel_op_name_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QueueRunnerDef::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  return file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QueueRunnerDef

// string queue_name = 1;
void QueueRunnerDef::clear_queue_name() {
  queue_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& QueueRunnerDef::queue_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.queue_name)
  return queue_name_.Get();
}
void QueueRunnerDef::set_queue_name(const ::std::string& value) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.queue_name)
}
void QueueRunnerDef::set_queue_name(const char* value) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.queue_name)
}
void QueueRunnerDef::set_queue_name(const char* value,
    size_t size) {
  
  queue_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.queue_name)
}
::std::string* QueueRunnerDef::mutable_queue_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.queue_name)
  return queue_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::release_queue_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.queue_name)
  
  return queue_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::unsafe_arena_release_queue_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.queue_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return queue_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void QueueRunnerDef::set_allocated_queue_name(::std::string* queue_name) {
  if (queue_name != NULL) {
    
  } else {
    
  }
  queue_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), queue_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.queue_name)
}
void QueueRunnerDef::unsafe_arena_set_allocated_queue_name(
    ::std::string* queue_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (queue_name != NULL) {
    
  } else {
    
  }
  queue_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      queue_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.queue_name)
}

// repeated string enqueue_op_name = 2;
int QueueRunnerDef::enqueue_op_name_size() const {
  return enqueue_op_name_.size();
}
void QueueRunnerDef::clear_enqueue_op_name() {
  enqueue_op_name_.Clear();
}
const ::std::string& QueueRunnerDef::enqueue_op_name(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Get(index);
}
::std::string* QueueRunnerDef::mutable_enqueue_op_name(int index) {
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Mutable(index);
}
void QueueRunnerDef::set_enqueue_op_name(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.enqueue_op_name)
  enqueue_op_name_.Mutable(index)->assign(value);
}
void QueueRunnerDef::set_enqueue_op_name(int index, const char* value) {
  enqueue_op_name_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.enqueue_op_name)
}
void QueueRunnerDef::set_enqueue_op_name(int index, const char* value, size_t size) {
  enqueue_op_name_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.enqueue_op_name)
}
::std::string* QueueRunnerDef::add_enqueue_op_name() {
  // @@protoc_insertion_point(field_add_mutable:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_.Add();
}
void QueueRunnerDef::add_enqueue_op_name(const ::std::string& value) {
  enqueue_op_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:tensorflow.QueueRunnerDef.enqueue_op_name)
}
void QueueRunnerDef::add_enqueue_op_name(const char* value) {
  enqueue_op_name_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:tensorflow.QueueRunnerDef.enqueue_op_name)
}
void QueueRunnerDef::add_enqueue_op_name(const char* value, size_t size) {
  enqueue_op_name_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:tensorflow.QueueRunnerDef.enqueue_op_name)
}
const ::google::protobuf::RepeatedPtrField< ::std::string>&
QueueRunnerDef::enqueue_op_name() const {
  // @@protoc_insertion_point(field_list:tensorflow.QueueRunnerDef.enqueue_op_name)
  return enqueue_op_name_;
}
::google::protobuf::RepeatedPtrField< ::std::string>*
QueueRunnerDef::mutable_enqueue_op_name() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.QueueRunnerDef.enqueue_op_name)
  return &enqueue_op_name_;
}

// string close_op_name = 3;
void QueueRunnerDef::clear_close_op_name() {
  close_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& QueueRunnerDef::close_op_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.close_op_name)
  return close_op_name_.Get();
}
void QueueRunnerDef::set_close_op_name(const ::std::string& value) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.close_op_name)
}
void QueueRunnerDef::set_close_op_name(const char* value) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.close_op_name)
}
void QueueRunnerDef::set_close_op_name(const char* value,
    size_t size) {
  
  close_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.close_op_name)
}
::std::string* QueueRunnerDef::mutable_close_op_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.close_op_name)
  return close_op_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::release_close_op_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.close_op_name)
  
  return close_op_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::unsafe_arena_release_close_op_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.close_op_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return close_op_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void QueueRunnerDef::set_allocated_close_op_name(::std::string* close_op_name) {
  if (close_op_name != NULL) {
    
  } else {
    
  }
  close_op_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), close_op_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.close_op_name)
}
void QueueRunnerDef::unsafe_arena_set_allocated_close_op_name(
    ::std::string* close_op_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (close_op_name != NULL) {
    
  } else {
    
  }
  close_op_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      close_op_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.close_op_name)
}

// string cancel_op_name = 4;
void QueueRunnerDef::clear_cancel_op_name() {
  cancel_op_name_.ClearToEmpty(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
const ::std::string& QueueRunnerDef::cancel_op_name() const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.cancel_op_name)
  return cancel_op_name_.Get();
}
void QueueRunnerDef::set_cancel_op_name(const ::std::string& value) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.cancel_op_name)
}
void QueueRunnerDef::set_cancel_op_name(const char* value) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value),
              GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_char:tensorflow.QueueRunnerDef.cancel_op_name)
}
void QueueRunnerDef::set_cancel_op_name(const char* value,
    size_t size) {
  
  cancel_op_name_.Set(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(
      reinterpret_cast<const char*>(value), size), GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_pointer:tensorflow.QueueRunnerDef.cancel_op_name)
}
::std::string* QueueRunnerDef::mutable_cancel_op_name() {
  
  // @@protoc_insertion_point(field_mutable:tensorflow.QueueRunnerDef.cancel_op_name)
  return cancel_op_name_.Mutable(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::release_cancel_op_name() {
  // @@protoc_insertion_point(field_release:tensorflow.QueueRunnerDef.cancel_op_name)
  
  return cancel_op_name_.Release(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), GetArenaNoVirtual());
}
::std::string* QueueRunnerDef::unsafe_arena_release_cancel_op_name() {
  // @@protoc_insertion_point(field_unsafe_arena_release:tensorflow.QueueRunnerDef.cancel_op_name)
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  
  return cancel_op_name_.UnsafeArenaRelease(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      GetArenaNoVirtual());
}
void QueueRunnerDef::set_allocated_cancel_op_name(::std::string* cancel_op_name) {
  if (cancel_op_name != NULL) {
    
  } else {
    
  }
  cancel_op_name_.SetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cancel_op_name,
      GetArenaNoVirtual());
  // @@protoc_insertion_point(field_set_allocated:tensorflow.QueueRunnerDef.cancel_op_name)
}
void QueueRunnerDef::unsafe_arena_set_allocated_cancel_op_name(
    ::std::string* cancel_op_name) {
  GOOGLE_DCHECK(GetArenaNoVirtual() != NULL);
  if (cancel_op_name != NULL) {
    
  } else {
    
  }
  cancel_op_name_.UnsafeArenaSetAllocated(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      cancel_op_name, GetArenaNoVirtual());
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tensorflow.QueueRunnerDef.cancel_op_name)
}

// repeated .tensorflow.error.Code queue_closed_exception_types = 5;
int QueueRunnerDef::queue_closed_exception_types_size() const {
  return queue_closed_exception_types_.size();
}
void QueueRunnerDef::clear_queue_closed_exception_types() {
  queue_closed_exception_types_.Clear();
}
::tensorflow::error::Code QueueRunnerDef::queue_closed_exception_types(int index) const {
  // @@protoc_insertion_point(field_get:tensorflow.QueueRunnerDef.queue_closed_exception_types)
  return static_cast< ::tensorflow::error::Code >(queue_closed_exception_types_.Get(index));
}
void QueueRunnerDef::set_queue_closed_exception_types(int index, ::tensorflow::error::Code value) {
  queue_closed_exception_types_.Set(index, value);
  // @@protoc_insertion_point(field_set:tensorflow.QueueRunnerDef.queue_closed_exception_types)
}
void QueueRunnerDef::add_queue_closed_exception_types(::tensorflow::error::Code value) {
  queue_closed_exception_types_.Add(value);
  // @@protoc_insertion_point(field_add:tensorflow.QueueRunnerDef.queue_closed_exception_types)
}
const ::google::protobuf::RepeatedField<int>&
QueueRunnerDef::queue_closed_exception_types() const {
  // @@protoc_insertion_point(field_list:tensorflow.QueueRunnerDef.queue_closed_exception_types)
  return queue_closed_exception_types_;
}
::google::protobuf::RepeatedField<int>*
QueueRunnerDef::mutable_queue_closed_exception_types() {
  // @@protoc_insertion_point(field_mutable_list:tensorflow.QueueRunnerDef.queue_closed_exception_types)
  return &queue_closed_exception_types_;
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

// @@protoc_insertion_point(global_scope)
