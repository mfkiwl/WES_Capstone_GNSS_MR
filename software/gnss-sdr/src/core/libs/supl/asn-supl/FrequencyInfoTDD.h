/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 */

#ifndef _FrequencyInfoTDD_H_
#define _FrequencyInfoTDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UARFCN.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* FrequencyInfoTDD */
    typedef struct FrequencyInfoTDD
    {
        UARFCN_t uarfcn_Nt;
        /*
	 * This type is extensible,
	 * possible extensions are below.
	 */

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } FrequencyInfoTDD_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_FrequencyInfoTDD;

#ifdef __cplusplus
}
#endif

#endif /* _FrequencyInfoTDD_H_ */
#include <asn_internal.h>
