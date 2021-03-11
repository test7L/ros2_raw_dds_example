

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from UUID.idl using "rtiddsgen".
The rtiddsgen tool is part of the RTI Connext distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the RTI Connext manual.
*/

#ifndef NDDS_STANDALONE_TYPE
#ifndef ndds_cpp_h
#include "ndds/ndds_cpp.h"
#endif
#ifndef dds_c_log_impl_h              
#include "dds_c/dds_c_log_impl.h"                                
#endif        

#ifndef cdr_type_h
#include "cdr/cdr_type.h"
#endif    

#ifndef osapi_heap_h
#include "osapi/osapi_heap.h" 
#endif
#else
#include "ndds_standalone_type.h"
#endif

#include "UUID.h"

#include <new>

/* ========================================================================= */
const char *unique_identifier_msgs_msg_UUIDTYPENAME = "unique_identifier_msgs::msg::dds_::UUID_";

DDS_TypeCode* unique_identifier_msgs_msg_UUID_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode unique_identifier_msgs_msg_UUID_g_tc_uuid_array =DDS_INITIALIZE_ARRAY_TYPECODE(1,16, NULL,NULL);
    static DDS_TypeCode_Member unique_identifier_msgs_msg_UUID_g_tc_members[1]=
    {

        {
            (char *)"uuid",/* Member name */
            {
                0,/* Representation ID */          
                DDS_BOOLEAN_FALSE,/* Is a pointer? */
                -1, /* Bitfield bits */
                NULL/* Member type code is assigned later */
            },
            0, /* Ignored */
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL/* Ignored */
        }
    };

    static DDS_TypeCode unique_identifier_msgs_msg_UUID_g_tc =
    {{
            DDS_TK_STRUCT,/* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"unique_identifier_msgs::msg::dds_::UUID_", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            1, /* Number of members */
            unique_identifier_msgs_msg_UUID_g_tc_members, /* Members */
            DDS_VM_NONE  /* Ignored */         
        }}; /* Type code for unique_identifier_msgs_msg_UUID*/

    if (is_initialized) {
        return &unique_identifier_msgs_msg_UUID_g_tc;
    }

    unique_identifier_msgs_msg_UUID_g_tc_uuid_array._data._typeCode =(RTICdrTypeCode *)&DDS_g_tc_octet;

    unique_identifier_msgs_msg_UUID_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)& unique_identifier_msgs_msg_UUID_g_tc_uuid_array;

    is_initialized = RTI_TRUE;

    return &unique_identifier_msgs_msg_UUID_g_tc;
}

RTIBool unique_identifier_msgs_msg_UUID_initialize(
    unique_identifier_msgs_msg_UUID* sample) {
    return unique_identifier_msgs_msg_UUID_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool unique_identifier_msgs_msg_UUID_initialize_ex(
    unique_identifier_msgs_msg_UUID* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return unique_identifier_msgs_msg_UUID_initialize_w_params(
        sample,&allocParams);

}

RTIBool unique_identifier_msgs_msg_UUID_initialize_w_params(
    unique_identifier_msgs_msg_UUID* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (!RTICdrType_initArray(
        sample->uuid, (16), RTI_CDR_OCTET_SIZE)) {
        return RTI_FALSE;
    }
    return RTI_TRUE;
}

void unique_identifier_msgs_msg_UUID_finalize(
    unique_identifier_msgs_msg_UUID* sample)
{

    unique_identifier_msgs_msg_UUID_finalize_ex(sample,RTI_TRUE);
}

void unique_identifier_msgs_msg_UUID_finalize_ex(
    unique_identifier_msgs_msg_UUID* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    unique_identifier_msgs_msg_UUID_finalize_w_params(
        sample,&deallocParams);
}

void unique_identifier_msgs_msg_UUID_finalize_w_params(
    unique_identifier_msgs_msg_UUID* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

}

void unique_identifier_msgs_msg_UUID_finalize_optional_members(
    unique_identifier_msgs_msg_UUID* sample, RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParamsTmp =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;
    struct DDS_TypeDeallocationParams_t * deallocParams =
    &deallocParamsTmp;

    if (sample==NULL) {
        return;
    } 
    if (deallocParams) {} /* To avoid warnings */

    deallocParamsTmp.delete_pointers = (DDS_Boolean)deletePointers;
    deallocParamsTmp.delete_optional_members = DDS_BOOLEAN_TRUE;

}

RTIBool unique_identifier_msgs_msg_UUID_copy(
    unique_identifier_msgs_msg_UUID* dst,
    const unique_identifier_msgs_msg_UUID* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyArray(
            dst->uuid ,src->uuid,(16), RTI_CDR_OCTET_SIZE)) {
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'unique_identifier_msgs_msg_UUID' sequence class.
*/
#define T unique_identifier_msgs_msg_UUID
#define TSeq unique_identifier_msgs_msg_UUIDSeq

#define T_initialize_w_params unique_identifier_msgs_msg_UUID_initialize_w_params

#define T_finalize_w_params   unique_identifier_msgs_msg_UUID_finalize_w_params
#define T_copy       unique_identifier_msgs_msg_UUID_copy

#ifndef NDDS_STANDALONE_TYPE
#include "dds_c/generic/dds_c_sequence_TSeq.gen"
#include "dds_cpp/generic/dds_cpp_sequence_TSeq.gen"
#else
#include "dds_c_sequence_TSeq.gen"
#include "dds_cpp_sequence_TSeq.gen"
#endif

#undef T_copy
#undef T_finalize_w_params

#undef T_initialize_w_params

#undef TSeq
#undef T

