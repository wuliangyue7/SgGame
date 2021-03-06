// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SgMsg.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SgMsg.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* PbTest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PbTest_reflection_ = NULL;
const ::google::protobuf::Descriptor* UseItem_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  UseItem_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SgMsg_2eproto() {
  protobuf_AddDesc_SgMsg_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SgMsg.proto");
  GOOGLE_CHECK(file != NULL);
  PbTest_descriptor_ = file->message_type(0);
  static const int PbTest_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbTest, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbTest, name_),
  };
  PbTest_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      PbTest_descriptor_,
      PbTest::default_instance_,
      PbTest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbTest, _has_bits_[0]),
      -1,
      -1,
      sizeof(PbTest),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PbTest, _internal_metadata_),
      -1);
  UseItem_descriptor_ = file->message_type(1);
  static const int UseItem_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItem, usecommond_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItem, pktid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItem, itemindex_),
  };
  UseItem_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      UseItem_descriptor_,
      UseItem::default_instance_,
      UseItem_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItem, _has_bits_[0]),
      -1,
      -1,
      sizeof(UseItem),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(UseItem, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SgMsg_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      PbTest_descriptor_, &PbTest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      UseItem_descriptor_, &UseItem::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SgMsg_2eproto() {
  delete PbTest::default_instance_;
  delete PbTest_reflection_;
  delete UseItem::default_instance_;
  delete UseItem_reflection_;
}

void protobuf_AddDesc_SgMsg_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013SgMsg.proto\"\"\n\006PbTest\022\n\n\002id\030\001 \002(\005\022\014\n\004n"
    "ame\030\002 \002(\t\"\?\n\007UseItem\022\022\n\nuseCommond\030\001 \002(\005"
    "\022\r\n\005pktId\030\002 \002(\005\022\021\n\titemIndex\030\003 \002(\005", 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SgMsg.proto", &protobuf_RegisterTypes);
  PbTest::default_instance_ = new PbTest();
  UseItem::default_instance_ = new UseItem();
  PbTest::default_instance_->InitAsDefaultInstance();
  UseItem::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SgMsg_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SgMsg_2eproto {
  StaticDescriptorInitializer_SgMsg_2eproto() {
    protobuf_AddDesc_SgMsg_2eproto();
  }
} static_descriptor_initializer_SgMsg_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#ifndef _MSC_VER
const int PbTest::kIdFieldNumber;
const int PbTest::kNameFieldNumber;
#endif  // !_MSC_VER

PbTest::PbTest()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:PbTest)
}

void PbTest::InitAsDefaultInstance() {
}

PbTest::PbTest(const PbTest& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:PbTest)
}

void PbTest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  id_ = 0;
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PbTest::~PbTest() {
  // @@protoc_insertion_point(destructor:PbTest)
  SharedDtor();
}

void PbTest::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void PbTest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PbTest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PbTest_descriptor_;
}

const PbTest& PbTest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SgMsg_2eproto();
  return *default_instance_;
}

PbTest* PbTest::default_instance_ = NULL;

PbTest* PbTest::New(::google::protobuf::Arena* arena) const {
  PbTest* n = new PbTest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PbTest::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    id_ = 0;
    if (has_name()) {
      name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool PbTest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:PbTest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 id = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_name;
        break;
      }

      // required string name = 2;
      case 2: {
        if (tag == 18) {
         parse_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "PbTest.name");
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
  // @@protoc_insertion_point(parse_success:PbTest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:PbTest)
  return false;
#undef DO_
}

void PbTest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:PbTest)
  // required int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PbTest.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:PbTest)
}

::google::protobuf::uint8* PbTest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:PbTest)
  // required int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // required string name = 2;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "PbTest.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PbTest)
  return target;
}

int PbTest::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_id()) {
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  if (has_name()) {
    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  return total_size;
}
int PbTest::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 id = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

    // required string name = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PbTest::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const PbTest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PbTest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PbTest::MergeFrom(const PbTest& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_name()) {
      set_has_name();
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void PbTest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PbTest::CopyFrom(const PbTest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PbTest::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PbTest::Swap(PbTest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PbTest::InternalSwap(PbTest* other) {
  std::swap(id_, other->id_);
  name_.Swap(&other->name_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata PbTest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PbTest_descriptor_;
  metadata.reflection = PbTest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int UseItem::kUseCommondFieldNumber;
const int UseItem::kPktIdFieldNumber;
const int UseItem::kItemIndexFieldNumber;
#endif  // !_MSC_VER

UseItem::UseItem()
  : ::google::protobuf::Message() , _internal_metadata_(NULL)  {
  SharedCtor();
  // @@protoc_insertion_point(constructor:UseItem)
}

void UseItem::InitAsDefaultInstance() {
}

UseItem::UseItem(const UseItem& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:UseItem)
}

void UseItem::SharedCtor() {
  _cached_size_ = 0;
  usecommond_ = 0;
  pktid_ = 0;
  itemindex_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

UseItem::~UseItem() {
  // @@protoc_insertion_point(destructor:UseItem)
  SharedDtor();
}

void UseItem::SharedDtor() {
  if (this != default_instance_) {
  }
}

void UseItem::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* UseItem::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return UseItem_descriptor_;
}

const UseItem& UseItem::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_SgMsg_2eproto();
  return *default_instance_;
}

UseItem* UseItem::default_instance_ = NULL;

UseItem* UseItem::New(::google::protobuf::Arena* arena) const {
  UseItem* n = new UseItem;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void UseItem::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<UseItem*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(usecommond_, itemindex_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool UseItem::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:UseItem)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 useCommond = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &usecommond_)));
          set_has_usecommond();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_pktId;
        break;
      }

      // required int32 pktId = 2;
      case 2: {
        if (tag == 16) {
         parse_pktId:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &pktid_)));
          set_has_pktid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_itemIndex;
        break;
      }

      // required int32 itemIndex = 3;
      case 3: {
        if (tag == 24) {
         parse_itemIndex:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &itemindex_)));
          set_has_itemindex();
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
  // @@protoc_insertion_point(parse_success:UseItem)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:UseItem)
  return false;
#undef DO_
}

void UseItem::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:UseItem)
  // required int32 useCommond = 1;
  if (has_usecommond()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->usecommond(), output);
  }

  // required int32 pktId = 2;
  if (has_pktid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->pktid(), output);
  }

  // required int32 itemIndex = 3;
  if (has_itemindex()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->itemindex(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:UseItem)
}

::google::protobuf::uint8* UseItem::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:UseItem)
  // required int32 useCommond = 1;
  if (has_usecommond()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->usecommond(), target);
  }

  // required int32 pktId = 2;
  if (has_pktid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->pktid(), target);
  }

  // required int32 itemIndex = 3;
  if (has_itemindex()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->itemindex(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:UseItem)
  return target;
}

int UseItem::RequiredFieldsByteSizeFallback() const {
  int total_size = 0;

  if (has_usecommond()) {
    // required int32 useCommond = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->usecommond());
  }

  if (has_pktid()) {
    // required int32 pktId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->pktid());
  }

  if (has_itemindex()) {
    // required int32 itemIndex = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->itemindex());
  }

  return total_size;
}
int UseItem::ByteSize() const {
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000007) ^ 0x00000007) == 0) {  // All required fields are present.
    // required int32 useCommond = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->usecommond());

    // required int32 pktId = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->pktid());

    // required int32 itemIndex = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->itemindex());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void UseItem::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const UseItem* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const UseItem*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void UseItem::MergeFrom(const UseItem& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_usecommond()) {
      set_usecommond(from.usecommond());
    }
    if (from.has_pktid()) {
      set_pktid(from.pktid());
    }
    if (from.has_itemindex()) {
      set_itemindex(from.itemindex());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void UseItem::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void UseItem::CopyFrom(const UseItem& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UseItem::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void UseItem::Swap(UseItem* other) {
  if (other == this) return;
  InternalSwap(other);
}
void UseItem::InternalSwap(UseItem* other) {
  std::swap(usecommond_, other->usecommond_);
  std::swap(pktid_, other->pktid_);
  std::swap(itemindex_, other->itemindex_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata UseItem::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = UseItem_descriptor_;
  metadata.reflection = UseItem_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
