/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "SspDef"
 * 	found in "ssp.asn1"
 * 	`asn1c -S skeletons -fskeletons-copy -fnative-types`
 */

#include <asn_internal.h>

#include "Asn1cTestSeqOf.h"

static asn_TYPE_member_t asn_MBR_Asn1cTestSeqOf_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (19 << 2)),
		0,
		&asn_DEF_PrintableString,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static ber_tlv_tag_t asn_DEF_Asn1cTestSeqOf_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_Asn1cTestSeqOf_specs_1 = {
	sizeof(struct Asn1cTestSeqOf),
	offsetof(struct Asn1cTestSeqOf, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_Asn1cTestSeqOf = {
	"Asn1cTestSeqOf",
	"Asn1cTestSeqOf",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	SEQUENCE_OF_decode_aper,
	SEQUENCE_OF_encode_aper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_Asn1cTestSeqOf_tags_1,
	sizeof(asn_DEF_Asn1cTestSeqOf_tags_1)
		/sizeof(asn_DEF_Asn1cTestSeqOf_tags_1[0]), /* 1 */
	asn_DEF_Asn1cTestSeqOf_tags_1,	/* Same as above */
	sizeof(asn_DEF_Asn1cTestSeqOf_tags_1)
		/sizeof(asn_DEF_Asn1cTestSeqOf_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Asn1cTestSeqOf_1,
	1,	/* Single element */
	&asn_SPC_Asn1cTestSeqOf_specs_1	/* Additional specs */
};

