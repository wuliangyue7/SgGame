// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SgMsgId.proto

#ifndef PROTOBUF_SgMsgId_2eproto__INCLUDED
#define PROTOBUF_SgMsgId_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_SgMsgId_2eproto();
void protobuf_AssignDesc_SgMsgId_2eproto();
void protobuf_ShutdownFile_SgMsgId_2eproto();


enum MsgId {
  CS_PbTest = 1
};
bool MsgId_IsValid(int value);
const MsgId MsgId_MIN = CS_PbTest;
const MsgId MsgId_MAX = CS_PbTest;
const int MsgId_ARRAYSIZE = MsgId_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgId_descriptor();
inline const ::std::string& MsgId_Name(MsgId value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgId_descriptor(), value);
}
inline bool MsgId_Parse(
    const ::std::string& name, MsgId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgId>(
    MsgId_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MsgId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MsgId>() {
  return ::MsgId_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SgMsgId_2eproto__INCLUDED
