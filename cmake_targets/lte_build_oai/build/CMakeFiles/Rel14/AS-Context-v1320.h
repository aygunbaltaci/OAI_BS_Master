/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-InterNodeDefinitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AS_Context_v1320_H_
#define	_AS_Context_v1320_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AS-Context-v1320 */
typedef struct AS_Context_v1320 {
	OCTET_STRING_t	*wlanConnectionStatusReport_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AS_Context_v1320_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AS_Context_v1320;

#ifdef __cplusplus
}
#endif

#endif	/* _AS_Context_v1320_H_ */
#include <asn_internal.h>
