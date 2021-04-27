

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from ShapeType.idl using "rtiddsgen".
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
#ifndef dds_c_log_infrastructure_h                      
#include "dds_c/dds_c_infrastructure_impl.h"       
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

#include "ShapeType.h"

#ifndef NDDS_STANDALONE_TYPE
#include "ShapeTypePlugin.h"
#endif

#include <new>

/* ========================================================================= */
const char *ShapeTypeTYPENAME = "ShapeType";

#ifndef NDDS_STANDALONE_TYPE
DDS_TypeCode* ShapeType_get_typecode()
{
    static RTIBool is_initialized = RTI_FALSE;

    static DDS_TypeCode ShapeType_g_tc_color_string = DDS_INITIALIZE_STRING_TYPECODE((128));

    static DDS_TypeCode_Member ShapeType_g_tc_members[4]=
    {

        {
            (char *)"color",/* Member name */
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
            RTI_CDR_KEY_MEMBER , /* Is a key? */
            DDS_PUBLIC_MEMBER,/* Member visibility */
            1,
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"x",/* Member name */
            {
                1,/* Representation ID */
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
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"y",/* Member name */
            {
                2,/* Representation ID */
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
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }, 
        {
            (char *)"shapesize",/* Member name */
            {
                3,/* Representation ID */
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
            NULL, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER
        }
    };

    static DDS_TypeCode ShapeType_g_tc =
    {{
            DDS_TK_STRUCT, /* Kind */
            DDS_BOOLEAN_FALSE, /* Ignored */
            -1, /*Ignored*/
            (char *)"ShapeType", /* Name */
            NULL, /* Ignored */      
            0, /* Ignored */
            0, /* Ignored */
            NULL, /* Ignored */
            4, /* Number of members */
            ShapeType_g_tc_members, /* Members */
            DDS_VM_NONE, /* Ignored */
            RTICdrTypeCodeAnnotations_INITIALIZER,
            DDS_BOOLEAN_TRUE, /* _isCopyable */
            NULL, /* _sampleAccessInfo: assigned later */
            NULL /* _typePlugin: assigned later */
        }}; /* Type code for ShapeType*/

    if (is_initialized) {
        return &ShapeType_g_tc;
    }

    ShapeType_g_tc._data._annotations._allowedDataRepresentationMask = 5;

    ShapeType_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&ShapeType_g_tc_color_string;
    ShapeType_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
    ShapeType_g_tc_members[2]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;
    ShapeType_g_tc_members[3]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_long_w_new;

    /* Initialize the values for member annotations. */
    ShapeType_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
    ShapeType_g_tc_members[0]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

    ShapeType_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[1]._annotations._defaultValue._u.long_value = 0;
    ShapeType_g_tc_members[1]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[1]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    ShapeType_g_tc_members[1]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[1]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    ShapeType_g_tc_members[2]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[2]._annotations._defaultValue._u.long_value = 0;
    ShapeType_g_tc_members[2]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[2]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    ShapeType_g_tc_members[2]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[2]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    ShapeType_g_tc_members[3]._annotations._defaultValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[3]._annotations._defaultValue._u.long_value = 0;
    ShapeType_g_tc_members[3]._annotations._minValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[3]._annotations._minValue._u.long_value = RTIXCdrLong_MIN;
    ShapeType_g_tc_members[3]._annotations._maxValue._d = RTI_XCDR_TK_LONG;
    ShapeType_g_tc_members[3]._annotations._maxValue._u.long_value = RTIXCdrLong_MAX;

    ShapeType_g_tc._data._sampleAccessInfo =
    ShapeType_get_sample_access_info();
    ShapeType_g_tc._data._typePlugin =
    ShapeType_get_type_plugin_info();    

    is_initialized = RTI_TRUE;

    return &ShapeType_g_tc;
}

#define TSeq ShapeTypeSeq
#define T ShapeType
#include "dds_cpp/generic/dds_cpp_data_TInterpreterSupport.gen"
#undef T
#undef TSeq

RTIXCdrSampleAccessInfo *ShapeType_get_sample_seq_access_info()
{
    static RTIXCdrSampleAccessInfo ShapeType_g_seqSampleAccessInfo = {
        RTI_XCDR_TYPE_BINDING_CPP, \
        {sizeof(ShapeTypeSeq),0,0,0}, \
        RTI_XCDR_FALSE, \
        DDS_Sequence_get_member_value_pointer, \
        ShapeTypeSeq_set_member_element_count, \
        NULL, \
        NULL, \
        NULL \
    };

    return &ShapeType_g_seqSampleAccessInfo;
}

RTIXCdrSampleAccessInfo *ShapeType_get_sample_access_info()
{
    static RTIBool is_initialized = RTI_FALSE;

    ShapeType *sample;

    static RTIXCdrMemberAccessInfo ShapeType_g_memberAccessInfos[4] =
    {RTIXCdrMemberAccessInfo_INITIALIZER};

    static RTIXCdrSampleAccessInfo ShapeType_g_sampleAccessInfo = 
    RTIXCdrSampleAccessInfo_INITIALIZER;

    if (is_initialized) {
        return (RTIXCdrSampleAccessInfo*) &ShapeType_g_sampleAccessInfo;
    }

    RTIXCdrHeap_allocateStruct(
        &sample, 
        ShapeType);
    if (sample == NULL) {
        return NULL;
    }

    ShapeType_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->color - (char *)sample);

    ShapeType_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->x - (char *)sample);

    ShapeType_g_memberAccessInfos[2].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->y - (char *)sample);

    ShapeType_g_memberAccessInfos[3].bindingMemberValueOffset[0] = 
    (RTIXCdrUnsignedLong) ((char *)&sample->shapesize - (char *)sample);

    ShapeType_g_sampleAccessInfo.memberAccessInfos = 
    ShapeType_g_memberAccessInfos;

    {
        size_t candidateTypeSize = sizeof(ShapeType);

        if (candidateTypeSize > RTIXCdrUnsignedLong_MAX) {
            ShapeType_g_sampleAccessInfo.typeSize[0] =
            RTIXCdrUnsignedLong_MAX;
        } else {
            ShapeType_g_sampleAccessInfo.typeSize[0] =
            (RTIXCdrUnsignedLong) candidateTypeSize;
        }
    }

    ShapeType_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
    RTI_XCDR_TRUE;

    ShapeType_g_sampleAccessInfo.getMemberValuePointerFcn = 
    ShapeType_get_member_value_pointer;

    ShapeType_g_sampleAccessInfo.languageBinding = 
    RTI_XCDR_TYPE_BINDING_CPP ;

    RTIXCdrHeap_freeStruct(sample);
    is_initialized = RTI_TRUE;
    return (RTIXCdrSampleAccessInfo*) &ShapeType_g_sampleAccessInfo;
}

RTIXCdrTypePlugin *ShapeType_get_type_plugin_info()
{
    static RTIXCdrTypePlugin ShapeType_g_typePlugin = 
    {
        NULL, /* serialize */
        NULL, /* serialize_key */
        NULL, /* deserialize_sample */
        NULL, /* deserialize_key_sample */
        NULL, /* skip */
        NULL, /* get_serialized_sample_size */
        NULL, /* get_serialized_sample_max_size_ex */
        NULL, /* get_serialized_key_max_size_ex */
        NULL, /* get_serialized_sample_min_size */
        NULL, /* serialized_sample_to_key */
        (RTIXCdrTypePluginInitializeSampleFunction) 
        ShapeType_initialize_ex,
        NULL,
        (RTIXCdrTypePluginFinalizeSampleFunction)
        ShapeType_finalize_w_return,
        NULL
    };

    return &ShapeType_g_typePlugin;
}
#endif

RTIBool ShapeType_initialize(
    ShapeType* sample) {
    return ShapeType_initialize_ex(sample,RTI_TRUE,RTI_TRUE);
}

RTIBool ShapeType_initialize_ex(
    ShapeType* sample,RTIBool allocatePointers, RTIBool allocateMemory)
{

    struct DDS_TypeAllocationParams_t allocParams =
    DDS_TYPE_ALLOCATION_PARAMS_DEFAULT;

    allocParams.allocate_pointers =  (DDS_Boolean)allocatePointers;
    allocParams.allocate_memory = (DDS_Boolean)allocateMemory;

    return ShapeType_initialize_w_params(
        sample,&allocParams);

}

RTIBool ShapeType_initialize_w_params(
    ShapeType* sample, const struct DDS_TypeAllocationParams_t * allocParams)
{

    if (sample == NULL) {
        return RTI_FALSE;
    }
    if (allocParams == NULL) {
        return RTI_FALSE;
    }

    if (allocParams->allocate_memory) {
        sample->color = DDS_String_alloc((128));
        RTICdrType_copyStringEx(
            &sample->color,
            "",
            (128),
            RTI_FALSE);
        if (sample->color == NULL) {
            return RTI_FALSE;
        }
    } else {
        if (sample->color != NULL) {
            RTICdrType_copyStringEx(
                &sample->color,
                "",
                (128),
                RTI_FALSE);
            if (sample->color == NULL) {
                return RTI_FALSE;
            }
        }
    }

    sample->x = 0;

    sample->y = 0;

    sample->shapesize = 0;

    return RTI_TRUE;
}

RTIBool ShapeType_finalize_w_return(
    ShapeType* sample)
{
    ShapeType_finalize_ex(sample, RTI_TRUE);

    return RTI_TRUE;
}

void ShapeType_finalize(
    ShapeType* sample)
{

    ShapeType_finalize_ex(sample,RTI_TRUE);
}

void ShapeType_finalize_ex(
    ShapeType* sample,RTIBool deletePointers)
{
    struct DDS_TypeDeallocationParams_t deallocParams =
    DDS_TYPE_DEALLOCATION_PARAMS_DEFAULT;

    if (sample==NULL) {
        return;
    } 

    deallocParams.delete_pointers = (DDS_Boolean)deletePointers;

    ShapeType_finalize_w_params(
        sample,&deallocParams);
}

void ShapeType_finalize_w_params(
    ShapeType* sample,const struct DDS_TypeDeallocationParams_t * deallocParams)
{

    if (sample==NULL) {
        return;
    }

    if (deallocParams == NULL) {
        return;
    }

    if (sample->color != NULL) {
        DDS_String_free(sample->color);
        sample->color=NULL;

    }

}

void ShapeType_finalize_optional_members(
    ShapeType* sample, RTIBool deletePointers)
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

RTIBool ShapeType_copy(
    ShapeType* dst,
    const ShapeType* src)
{
    try {

        if (dst == NULL || src == NULL) {
            return RTI_FALSE;
        }

        if (!RTICdrType_copyStringEx (
            &dst->color, src->color, 
            (128) + 1, RTI_FALSE)){
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->x, &src->x)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->y, &src->y)) { 
            return RTI_FALSE;
        }
        if (!RTICdrType_copyLong (
            &dst->shapesize, &src->shapesize)) { 
            return RTI_FALSE;
        }

        return RTI_TRUE;

    } catch (const std::bad_alloc&) {
        return RTI_FALSE;
    }
}

/**
* <<IMPLEMENTATION>>
*
* Defines:  TSeq, T
*
* Configure and implement 'ShapeType' sequence class.
*/
#define T ShapeType
#define TSeq ShapeTypeSeq

#define T_initialize_w_params ShapeType_initialize_w_params

#define T_finalize_w_params   ShapeType_finalize_w_params
#define T_copy       ShapeType_copy

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

#ifndef NDDS_STANDALONE_TYPE
namespace rti { 
    namespace xcdr {
        const RTIXCdrTypeCode * type_code<ShapeType>::get() 
        {
            return (const RTIXCdrTypeCode *) ShapeType_get_typecode();
        }

    } 
}
#endif
