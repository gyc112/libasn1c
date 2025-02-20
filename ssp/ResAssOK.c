/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "SspDef"
 * 	found in "ssp.asn1"
 * 	`asn1c -S skeletons -fskeletons-copy -fnative-types`
 */

#include <asn_internal.h>

#include "ResAssOK.h"

static asn_TYPE_member_t asn_MBR_ResAssOK_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ResAssOK, assId),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResAssOK, assPduSize),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"assPduSize"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ResAssOK, reserr),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_ResErr,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reserr"
		},
};
static ber_tlv_tag_t asn_DEF_ResAssOK_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ResAssOK_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, 0, 1 }, /* assPduSize at 35 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -1, 0 }, /* reserr at 37 */
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 } /* assId at 34 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ResAssOK_specs_1 = {
	sizeof(struct ResAssOK),
	offsetof(struct ResAssOK, _asn_ctx),
	asn_MAP_ResAssOK_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_ResAssOK = {
	"ResAssOK",
	"ResAssOK",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ResAssOK_tags_1,
	sizeof(asn_DEF_ResAssOK_tags_1)
		/sizeof(asn_DEF_ResAssOK_tags_1[0]), /* 1 */
	asn_DEF_ResAssOK_tags_1,	/* Same as above */
	sizeof(asn_DEF_ResAssOK_tags_1)
		/sizeof(asn_DEF_ResAssOK_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_ResAssOK_1,
	3,	/* Elements count */
	&asn_SPC_ResAssOK_specs_1	/* Additional specs */
};

