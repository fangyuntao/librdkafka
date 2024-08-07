/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.8-dev */

#ifndef PB_OPENTELEMETRY_PROTO_COMMON_V1_OPENTELEMETRY_PROTO_COMMON_V1_COMMON_PB_H_INCLUDED
#define PB_OPENTELEMETRY_PROTO_COMMON_V1_OPENTELEMETRY_PROTO_COMMON_V1_COMMON_PB_H_INCLUDED
#include <nanopb/pb.h>

#if PB_PROTO_HEADER_VERSION != 40
#error Regenerate this file with the current version of nanopb generator.
#endif

/* Struct definitions */
/* ArrayValue is a list of AnyValue messages. We need ArrayValue as a message
 since oneof in AnyValue does not allow repeated fields. */
typedef struct _opentelemetry_proto_common_v1_ArrayValue {
    /* Array of values. The array may be empty (contain 0 elements). */
    pb_callback_t values;
} opentelemetry_proto_common_v1_ArrayValue;

/* KeyValueList is a list of KeyValue messages. We need KeyValueList as a message
 since `oneof` in AnyValue does not allow repeated fields. Everywhere else where we need
 a list of KeyValue messages (e.g. in Span) we use `repeated KeyValue` directly to
 avoid unnecessary extra wrapping (which slows down the protocol). The 2 approaches
 are semantically equivalent. */
typedef struct _opentelemetry_proto_common_v1_KeyValueList {
    /* A collection of key/value pairs of key-value pairs. The list may be empty (may
 contain 0 elements).
 The keys MUST be unique (it is not allowed to have more than one
 value with the same key). */
    pb_callback_t values;
} opentelemetry_proto_common_v1_KeyValueList;

/* AnyValue is used to represent any type of attribute value. AnyValue may contain a
 primitive value such as a string or integer or it may contain an arbitrary nested
 object containing arrays, key-value lists and primitives. */
typedef struct _opentelemetry_proto_common_v1_AnyValue {
    pb_size_t which_value;
    union {
        pb_callback_t string_value;
        bool bool_value;
        int64_t int_value;
        double double_value;
        opentelemetry_proto_common_v1_ArrayValue array_value;
        opentelemetry_proto_common_v1_KeyValueList kvlist_value;
        pb_callback_t bytes_value;
    } value;
} opentelemetry_proto_common_v1_AnyValue;

/* KeyValue is a key-value pair that is used to store Span attributes, Link
 attributes, etc. */
typedef struct _opentelemetry_proto_common_v1_KeyValue {
    pb_callback_t key;
    bool has_value;
    opentelemetry_proto_common_v1_AnyValue value;
} opentelemetry_proto_common_v1_KeyValue;

/* InstrumentationScope is a message representing the instrumentation scope information
 such as the fully qualified name and version. */
typedef struct _opentelemetry_proto_common_v1_InstrumentationScope {
    /* An empty instrumentation scope name means the name is unknown. */
    pb_callback_t name;
    pb_callback_t version;
    /* Additional attributes that describe the scope. [Optional].
 Attribute keys MUST be unique (it is not allowed to have more than one
 attribute with the same key). */
    pb_callback_t attributes;
    uint32_t dropped_attributes_count;
} opentelemetry_proto_common_v1_InstrumentationScope;


#ifdef __cplusplus
extern "C" {
#endif

/* Initializer values for message structs */
#define opentelemetry_proto_common_v1_AnyValue_init_default {0, {{{NULL}, NULL}}}
#define opentelemetry_proto_common_v1_ArrayValue_init_default {{{NULL}, NULL}}
#define opentelemetry_proto_common_v1_KeyValueList_init_default {{{NULL}, NULL}}
#define opentelemetry_proto_common_v1_KeyValue_init_default {{{NULL}, NULL}, false, opentelemetry_proto_common_v1_AnyValue_init_default}
#define opentelemetry_proto_common_v1_InstrumentationScope_init_default {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}
#define opentelemetry_proto_common_v1_AnyValue_init_zero {0, {{{NULL}, NULL}}}
#define opentelemetry_proto_common_v1_ArrayValue_init_zero {{{NULL}, NULL}}
#define opentelemetry_proto_common_v1_KeyValueList_init_zero {{{NULL}, NULL}}
#define opentelemetry_proto_common_v1_KeyValue_init_zero {{{NULL}, NULL}, false, opentelemetry_proto_common_v1_AnyValue_init_zero}
#define opentelemetry_proto_common_v1_InstrumentationScope_init_zero {{{NULL}, NULL}, {{NULL}, NULL}, {{NULL}, NULL}, 0}

/* Field tags (for use in manual encoding/decoding) */
#define opentelemetry_proto_common_v1_ArrayValue_values_tag 1
#define opentelemetry_proto_common_v1_KeyValueList_values_tag 1
#define opentelemetry_proto_common_v1_AnyValue_string_value_tag 1
#define opentelemetry_proto_common_v1_AnyValue_bool_value_tag 2
#define opentelemetry_proto_common_v1_AnyValue_int_value_tag 3
#define opentelemetry_proto_common_v1_AnyValue_double_value_tag 4
#define opentelemetry_proto_common_v1_AnyValue_array_value_tag 5
#define opentelemetry_proto_common_v1_AnyValue_kvlist_value_tag 6
#define opentelemetry_proto_common_v1_AnyValue_bytes_value_tag 7
#define opentelemetry_proto_common_v1_KeyValue_key_tag 1
#define opentelemetry_proto_common_v1_KeyValue_value_tag 2
#define opentelemetry_proto_common_v1_InstrumentationScope_name_tag 1
#define opentelemetry_proto_common_v1_InstrumentationScope_version_tag 2
#define opentelemetry_proto_common_v1_InstrumentationScope_attributes_tag 3
#define opentelemetry_proto_common_v1_InstrumentationScope_dropped_attributes_count_tag 4

/* Struct field encoding specification for nanopb */
#define opentelemetry_proto_common_v1_AnyValue_FIELDLIST(X, a) \
X(a, CALLBACK, ONEOF,    STRING,   (value,string_value,value.string_value),   1) \
X(a, STATIC,   ONEOF,    BOOL,     (value,bool_value,value.bool_value),   2) \
X(a, STATIC,   ONEOF,    INT64,    (value,int_value,value.int_value),   3) \
X(a, STATIC,   ONEOF,    DOUBLE,   (value,double_value,value.double_value),   4) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,array_value,value.array_value),   5) \
X(a, STATIC,   ONEOF,    MESSAGE,  (value,kvlist_value,value.kvlist_value),   6) \
X(a, CALLBACK, ONEOF,    BYTES,    (value,bytes_value,value.bytes_value),   7)
#define opentelemetry_proto_common_v1_AnyValue_CALLBACK pb_default_field_callback
#define opentelemetry_proto_common_v1_AnyValue_DEFAULT NULL
#define opentelemetry_proto_common_v1_AnyValue_value_array_value_MSGTYPE opentelemetry_proto_common_v1_ArrayValue
#define opentelemetry_proto_common_v1_AnyValue_value_kvlist_value_MSGTYPE opentelemetry_proto_common_v1_KeyValueList

#define opentelemetry_proto_common_v1_ArrayValue_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  values,            1)
#define opentelemetry_proto_common_v1_ArrayValue_CALLBACK pb_default_field_callback
#define opentelemetry_proto_common_v1_ArrayValue_DEFAULT NULL
#define opentelemetry_proto_common_v1_ArrayValue_values_MSGTYPE opentelemetry_proto_common_v1_AnyValue

#define opentelemetry_proto_common_v1_KeyValueList_FIELDLIST(X, a) \
X(a, CALLBACK, REPEATED, MESSAGE,  values,            1)
#define opentelemetry_proto_common_v1_KeyValueList_CALLBACK pb_default_field_callback
#define opentelemetry_proto_common_v1_KeyValueList_DEFAULT NULL
#define opentelemetry_proto_common_v1_KeyValueList_values_MSGTYPE opentelemetry_proto_common_v1_KeyValue

#define opentelemetry_proto_common_v1_KeyValue_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   key,               1) \
X(a, STATIC,   OPTIONAL, MESSAGE,  value,             2)
#define opentelemetry_proto_common_v1_KeyValue_CALLBACK pb_default_field_callback
#define opentelemetry_proto_common_v1_KeyValue_DEFAULT NULL
#define opentelemetry_proto_common_v1_KeyValue_value_MSGTYPE opentelemetry_proto_common_v1_AnyValue

#define opentelemetry_proto_common_v1_InstrumentationScope_FIELDLIST(X, a) \
X(a, CALLBACK, SINGULAR, STRING,   name,              1) \
X(a, CALLBACK, SINGULAR, STRING,   version,           2) \
X(a, CALLBACK, REPEATED, MESSAGE,  attributes,        3) \
X(a, STATIC,   SINGULAR, UINT32,   dropped_attributes_count,   4)
#define opentelemetry_proto_common_v1_InstrumentationScope_CALLBACK pb_default_field_callback
#define opentelemetry_proto_common_v1_InstrumentationScope_DEFAULT NULL
#define opentelemetry_proto_common_v1_InstrumentationScope_attributes_MSGTYPE opentelemetry_proto_common_v1_KeyValue

extern const pb_msgdesc_t opentelemetry_proto_common_v1_AnyValue_msg;
extern const pb_msgdesc_t opentelemetry_proto_common_v1_ArrayValue_msg;
extern const pb_msgdesc_t opentelemetry_proto_common_v1_KeyValueList_msg;
extern const pb_msgdesc_t opentelemetry_proto_common_v1_KeyValue_msg;
extern const pb_msgdesc_t opentelemetry_proto_common_v1_InstrumentationScope_msg;

/* Defines for backwards compatibility with code written before nanopb-0.4.0 */
#define opentelemetry_proto_common_v1_AnyValue_fields &opentelemetry_proto_common_v1_AnyValue_msg
#define opentelemetry_proto_common_v1_ArrayValue_fields &opentelemetry_proto_common_v1_ArrayValue_msg
#define opentelemetry_proto_common_v1_KeyValueList_fields &opentelemetry_proto_common_v1_KeyValueList_msg
#define opentelemetry_proto_common_v1_KeyValue_fields &opentelemetry_proto_common_v1_KeyValue_msg
#define opentelemetry_proto_common_v1_InstrumentationScope_fields &opentelemetry_proto_common_v1_InstrumentationScope_msg

/* Maximum encoded size of messages (where known) */
/* opentelemetry_proto_common_v1_AnyValue_size depends on runtime parameters */
/* opentelemetry_proto_common_v1_ArrayValue_size depends on runtime parameters */
/* opentelemetry_proto_common_v1_KeyValueList_size depends on runtime parameters */
/* opentelemetry_proto_common_v1_KeyValue_size depends on runtime parameters */
/* opentelemetry_proto_common_v1_InstrumentationScope_size depends on runtime parameters */

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
