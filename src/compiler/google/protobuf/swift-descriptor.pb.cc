// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/protobuf/swift-descriptor.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "google/protobuf/swift-descriptor.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace google {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* SwiftFileOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SwiftFileOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto() {
  protobuf_AddDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "google/protobuf/swift-descriptor.proto");
  GOOGLE_CHECK(file != NULL);
  SwiftFileOptions_descriptor_ = file->message_type(0);
  static const int SwiftFileOptions_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SwiftFileOptions, package_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SwiftFileOptions, class_prefix_),
  };
  SwiftFileOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SwiftFileOptions_descriptor_,
      SwiftFileOptions::default_instance_,
      SwiftFileOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SwiftFileOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SwiftFileOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SwiftFileOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SwiftFileOptions_descriptor_, &SwiftFileOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_google_2fprotobuf_2fswift_2ddescriptor_2eproto() {
  delete SwiftFileOptions::default_instance_;
  delete SwiftFileOptions_reflection_;
}

void protobuf_AddDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fdescriptor_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n&google/protobuf/swift-descriptor.proto"
    "\022\017google.protobuf\032 google/protobuf/descr"
    "iptor.proto\"9\n\020SwiftFileOptions\022\017\n\007packa"
    "ge\030\001 \001(\t\022\024\n\014class_prefix\030\002 \001(\t:\\\n\022swift_"
    "file_options\022\034.google.protobuf.FileOptio"
    "ns\030\352\007 \001(\0132!.google.protobuf.SwiftFileOpt"
    "ions", 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "google/protobuf/swift-descriptor.proto", &protobuf_RegisterTypes);
  SwiftFileOptions::default_instance_ = new SwiftFileOptions();
  ::google::protobuf::internal::ExtensionSet::RegisterMessageExtension(
    &::google::protobuf::FileOptions::default_instance(),
    1002, 11, false, false,
    &::google::protobuf::SwiftFileOptions::default_instance());
  SwiftFileOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_google_2fprotobuf_2fswift_2ddescriptor_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_google_2fprotobuf_2fswift_2ddescriptor_2eproto {
  StaticDescriptorInitializer_google_2fprotobuf_2fswift_2ddescriptor_2eproto() {
    protobuf_AddDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto();
  }
} static_descriptor_initializer_google_2fprotobuf_2fswift_2ddescriptor_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SwiftFileOptions::kPackageFieldNumber;
const int SwiftFileOptions::kClassPrefixFieldNumber;
#endif  // !_MSC_VER

SwiftFileOptions::SwiftFileOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:google.protobuf.SwiftFileOptions)
}

void SwiftFileOptions::InitAsDefaultInstance() {
}

SwiftFileOptions::SwiftFileOptions(const SwiftFileOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:google.protobuf.SwiftFileOptions)
}

void SwiftFileOptions::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  package_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  class_prefix_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SwiftFileOptions::~SwiftFileOptions() {
  // @@protoc_insertion_point(destructor:google.protobuf.SwiftFileOptions)
  SharedDtor();
}

void SwiftFileOptions::SharedDtor() {
  if (package_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete package_;
  }
  if (class_prefix_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete class_prefix_;
  }
  if (this != default_instance_) {
  }
}

void SwiftFileOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SwiftFileOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SwiftFileOptions_descriptor_;
}

const SwiftFileOptions& SwiftFileOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_google_2fprotobuf_2fswift_2ddescriptor_2eproto();
  return *default_instance_;
}

SwiftFileOptions* SwiftFileOptions::default_instance_ = NULL;

SwiftFileOptions* SwiftFileOptions::New() const {
  return new SwiftFileOptions;
}

void SwiftFileOptions::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_package()) {
      if (package_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        package_->clear();
      }
    }
    if (has_class_prefix()) {
      if (class_prefix_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        class_prefix_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SwiftFileOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:google.protobuf.SwiftFileOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string package = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_package()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->package().data(), this->package().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "package");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_class_prefix;
        break;
      }

      // optional string class_prefix = 2;
      case 2: {
        if (tag == 18) {
         parse_class_prefix:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_class_prefix()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->class_prefix().data(), this->class_prefix().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "class_prefix");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:google.protobuf.SwiftFileOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:google.protobuf.SwiftFileOptions)
  return false;
#undef DO_
}

void SwiftFileOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:google.protobuf.SwiftFileOptions)
  // optional string package = 1;
  if (has_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package().data(), this->package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "package");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->package(), output);
  }

  // optional string class_prefix = 2;
  if (has_class_prefix()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->class_prefix().data(), this->class_prefix().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "class_prefix");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->class_prefix(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:google.protobuf.SwiftFileOptions)
}

::google::protobuf::uint8* SwiftFileOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.protobuf.SwiftFileOptions)
  // optional string package = 1;
  if (has_package()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->package().data(), this->package().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "package");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->package(), target);
  }

  // optional string class_prefix = 2;
  if (has_class_prefix()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->class_prefix().data(), this->class_prefix().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "class_prefix");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->class_prefix(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.protobuf.SwiftFileOptions)
  return target;
}

int SwiftFileOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string package = 1;
    if (has_package()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->package());
    }

    // optional string class_prefix = 2;
    if (has_class_prefix()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->class_prefix());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SwiftFileOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SwiftFileOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SwiftFileOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SwiftFileOptions::MergeFrom(const SwiftFileOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_package()) {
      set_package(from.package());
    }
    if (from.has_class_prefix()) {
      set_class_prefix(from.class_prefix());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SwiftFileOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SwiftFileOptions::CopyFrom(const SwiftFileOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SwiftFileOptions::IsInitialized() const {

  return true;
}

void SwiftFileOptions::Swap(SwiftFileOptions* other) {
  if (other != this) {
    std::swap(package_, other->package_);
    std::swap(class_prefix_, other->class_prefix_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SwiftFileOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SwiftFileOptions_descriptor_;
  metadata.reflection = SwiftFileOptions_reflection_;
  return metadata;
}

::google::protobuf::internal::ExtensionIdentifier< ::google::protobuf::FileOptions,
    ::google::protobuf::internal::MessageTypeTraits< ::google::protobuf::SwiftFileOptions >, 11, false >
  swift_file_options(kSwiftFileOptionsFieldNumber, ::google::protobuf::SwiftFileOptions::default_instance());

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)