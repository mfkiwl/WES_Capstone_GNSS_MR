/*
 * SPDX-FileCopyrightText: (c) 2003, 2004 Lev Walkin <vlm@lionet.info>. All rights reserved.
 * SPDX-License-Identifier: BSD-1-Clause
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "RRLP-Components"
 *     found in "../rrlp-components.asn"
 */

#include "CalcAssistanceBTS.h"

static asn_TYPE_member_t asn_MBR_CalcAssistanceBTS_1[] = {
    {ATF_NOFLAGS, 0, offsetof(struct CalcAssistanceBTS, fineRTD),
        (ASN_TAG_CLASS_CONTEXT | (0 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_FineRTD, 0,                    /* Defer constraints checking to the member type */
        0,                                      /* No PER visible constraints */
        0, "fineRTD"},
    {ATF_NOFLAGS, 0, offsetof(struct CalcAssistanceBTS, referenceWGS84),
        (ASN_TAG_CLASS_CONTEXT | (1 << 2)), -1, /* IMPLICIT tag at current level */
        &asn_DEF_ReferenceWGS84,
        0, /* Defer constraints checking to the member type */
        0, /* No PER visible constraints */
        0, "referenceWGS84"},
};
static ber_tlv_tag_t asn_DEF_CalcAssistanceBTS_tags_1[] = {
    (ASN_TAG_CLASS_UNIVERSAL | (16 << 2))};
static asn_TYPE_tag2member_t asn_MAP_CalcAssistanceBTS_tag2el_1[] = {
    {(ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0}, /* fineRTD at 241 */
    {(ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0}  /* referenceWGS84 at 243 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CalcAssistanceBTS_specs_1 = {
    sizeof(struct CalcAssistanceBTS),
    offsetof(struct CalcAssistanceBTS, _asn_ctx),
    asn_MAP_CalcAssistanceBTS_tag2el_1,
    2, /* Count of tags in the map */
    0,
    0,
    0,  /* Optional elements (not needed) */
    -1, /* Start extensions */
    -1  /* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CalcAssistanceBTS = {
    "CalcAssistanceBTS",
    "CalcAssistanceBTS",
    SEQUENCE_free,
    SEQUENCE_print,
    SEQUENCE_constraint,
    SEQUENCE_decode_ber,
    SEQUENCE_encode_der,
    SEQUENCE_decode_xer,
    SEQUENCE_encode_xer,
    SEQUENCE_decode_uper,
    SEQUENCE_encode_uper,
    0, /* Use generic outmost tag fetcher */
    asn_DEF_CalcAssistanceBTS_tags_1,
    sizeof(asn_DEF_CalcAssistanceBTS_tags_1) /
        sizeof(asn_DEF_CalcAssistanceBTS_tags_1[0]), /* 1 */
    asn_DEF_CalcAssistanceBTS_tags_1,                /* Same as above */
    sizeof(asn_DEF_CalcAssistanceBTS_tags_1) /
        sizeof(asn_DEF_CalcAssistanceBTS_tags_1[0]), /* 1 */
    0,                                               /* No PER visible constraints */
    asn_MBR_CalcAssistanceBTS_1,
    2,                                 /* Elements count */
    &asn_SPC_CalcAssistanceBTS_specs_1 /* Additional specs */
};
