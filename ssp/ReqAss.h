/*
 * Generated by asn1c-0.9.21 (http://lionet.info/asn1c)
 * From ASN.1 module "SspDef"
 * 	found in "ssp.asn1"
 * 	`asn1c -S skeletons -fskeletons-copy -fnative-types`
 */

#ifndef	_ReqAss_H_
#define	_ReqAss_H_


#include <asn_application.h>

/* Including external dependencies */
#include <PrintableString.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* ReqAss */
typedef struct ReqAss {
	PrintableString_t	 assServerAccPointRef;
	long	 assPduSize;
	PrintableString_t	 assAuthPara;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ReqAss_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ReqAss;

#ifdef __cplusplus
}
#endif

#endif	/* _ReqAss_H_ */
