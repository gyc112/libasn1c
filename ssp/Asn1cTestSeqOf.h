/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "SspDef"
 * 	found in "ssp.asn1"
 * 	`asn1c -S skeletons -fskeletons-copy -fnative-types`
 */

#ifndef	_Asn1cTestSeqOf_H_
#define	_Asn1cTestSeqOf_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Asn1cTestSeqOf */
typedef struct Asn1cTestSeqOf {
	A_SEQUENCE_OF(PrintableString_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Asn1cTestSeqOf_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Asn1cTestSeqOf;

#ifdef __cplusplus
}
#endif

#endif	/* _Asn1cTestSeqOf_H_ */
