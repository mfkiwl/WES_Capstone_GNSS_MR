/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "ULP-Components"
 * 	found in "../supl-common.asn"
 */

#ifndef _PrimaryCPICH_Info_H_
#define _PrimaryCPICH_Info_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C"
{
#endif

    /* PrimaryCPICH-Info */
    typedef struct PrimaryCPICH_Info
    {
        long primaryScramblingCode;

        /* Context for parsing across buffer boundaries */
        asn_struct_ctx_t _asn_ctx;
    } PrimaryCPICH_Info_t;

    /* Implementation */
    extern asn_TYPE_descriptor_t asn_DEF_PrimaryCPICH_Info;

#ifdef __cplusplus
}
#endif

#endif /* _PrimaryCPICH_Info_H_ */
#include <asn_internal.h>
