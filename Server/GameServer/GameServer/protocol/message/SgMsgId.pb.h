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


enum NetMsgId {
  CS_PbTest = 1
};
bool NetMsgId_IsValid(int value);
const NetMsgId NetMsgId_MIN = CS_PbTest;
const NetMsgId NetMsgId_MAX = CS_PbTest;
const int NetMsgId_ARRAYSIZE = NetMsgId_MAX + 1;

const ::google::protobuf::EnumDescriptor* NetMsgId_descriptor();
inline const ::std::string& NetMsgId_Name(NetMsgId value) {
  return ::google::protobuf::internal::NameOfEnum(
    NetMsgId_descriptor(), value);
}
inline bool NetMsgId_Parse(
    const ::std::string& name, NetMsgId* value) {
  return ::google::protobuf::internal::ParseNamedEnum<NetMsgId>(
    NetMsgId_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::NetMsgId> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::NetMsgId>() {
  return ::NetMsgId_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_SgMsgId_2eproto__INCLUDED