// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pbc_extension.proto

#include "pbc_extension.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace PBCExt {
}  // namespace PBCExt
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_pbc_5fextension_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_pbc_5fextension_2eproto = nullptr;
const uint32_t TableStruct_pbc_5fextension_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_pbc_5fextension_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023pbc_extension.proto\022\006PBCExt\032 google/pr"
  "otobuf/descriptor.proto:.\n\006select\022\035.goog"
  "le.protobuf.OneofOptions\030\351\007 \001(\t:1\n\tmax_l"
  "en_1\022\035.google.protobuf.FieldOptions\030\351\007 \001"
  "(\t:1\n\tmax_len_2\022\035.google.protobuf.FieldO"
  "ptions\030\352\007 \001(\t:1\n\tmax_len_3\022\035.google.prot"
  "obuf.FieldOptions\030\353\007 \001(\005:-\n\005refer\022\035.goog"
  "le.protobuf.FieldOptions\030\354\007 \001(\t:0\n\010oneof"
  "_id\022\035.google.protobuf.FieldOptions\030\355\007 \001("
  "\t:.\n\006c_type\022\035.google.protobuf.FieldOptio"
  "ns\030\356\007 \001(\t:9\n\021tdr_default_value\022\035.google."
  "protobuf.FieldOptions\030\357\007 \001(\t:0\n\010tdr_type"
  "\022\035.google.protobuf.FieldOptions\030\360\007 \001(\t:1"
  "\n\tfill_full\022\035.google.protobuf.FieldOptio"
  "ns\030\361\007 \001(\010:1\n\005cname\022!.google.protobuf.Enu"
  "mValueOptions\030\351\007 \001(\t:;\n\021print_tlog_strin"
  "g\022\037.google.protobuf.MessageOptions\030\351\007 \001("
  "\010:@\n\026print_oneof_field_name\022\037.google.pro"
  "tobuf.MessageOptions\030\352\007 \001(\010b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_pbc_5fextension_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_pbc_5fextension_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_pbc_5fextension_2eproto = {
    false, false, 755, descriptor_table_protodef_pbc_5fextension_2eproto,
    "pbc_extension.proto",
    &descriptor_table_pbc_5fextension_2eproto_once, descriptor_table_pbc_5fextension_2eproto_deps, 1, 0,
    schemas, file_default_instances, TableStruct_pbc_5fextension_2eproto::offsets,
    nullptr, file_level_enum_descriptors_pbc_5fextension_2eproto,
    file_level_service_descriptors_pbc_5fextension_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_pbc_5fextension_2eproto_getter() {
  return &descriptor_table_pbc_5fextension_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_pbc_5fextension_2eproto(&descriptor_table_pbc_5fextension_2eproto);
namespace PBCExt {
const std::string select_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::OneofOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  select(kSelectFieldNumber, select_default, nullptr);
const std::string max_len_1_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  max_len_1(kMaxLen1FieldNumber, max_len_1_default, nullptr);
const std::string max_len_2_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  max_len_2(kMaxLen2FieldNumber, max_len_2_default, nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< int32_t >, 5, false>
  max_len_3(kMaxLen3FieldNumber, 0, nullptr);
const std::string refer_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  refer(kReferFieldNumber, refer_default, nullptr);
const std::string oneof_id_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  oneof_id(kOneofIdFieldNumber, oneof_id_default, nullptr);
const std::string c_type_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  c_type(kCTypeFieldNumber, c_type_default, nullptr);
const std::string tdr_default_value_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  tdr_default_value(kTdrDefaultValueFieldNumber, tdr_default_value_default, nullptr);
const std::string tdr_type_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  tdr_type(kTdrTypeFieldNumber, tdr_type_default, nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false>
  fill_full(kFillFullFieldNumber, false, nullptr);
const std::string cname_default("");
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::EnumValueOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::StringTypeTraits, 9, false>
  cname(kCnameFieldNumber, cname_default, nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false>
  print_tlog_string(kPrintTlogStringFieldNumber, false, nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::PrimitiveTypeTraits< bool >, 8, false>
  print_oneof_field_name(kPrintOneofFieldNameFieldNumber, false, nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace PBCExt
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
