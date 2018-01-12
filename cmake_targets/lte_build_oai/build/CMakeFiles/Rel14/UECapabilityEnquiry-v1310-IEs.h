/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_UECapabilityEnquiry_v1310_IEs_H_
#define	_UECapabilityEnquiry_v1310_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13 {
	UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13_true	= 0
} e_UECapabilityEnquiry_v1310_IEs__requestReducedFormat_r13;
typedef enum UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13 {
	UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13_true	= 0
} e_UECapabilityEnquiry_v1310_IEs__requestSkipFallbackComb_r13;
typedef enum UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13 {
	UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13_true	= 0
} e_UECapabilityEnquiry_v1310_IEs__requestReducedIntNonContComb_r13;

/* UECapabilityEnquiry-v1310-IEs */
typedef struct UECapabilityEnquiry_v1310_IEs {
	long	*requestReducedFormat_r13	/* OPTIONAL */;
	long	*requestSkipFallbackComb_r13	/* OPTIONAL */;
	long	*requestedMaxCCsDL_r13	/* OPTIONAL */;
	long	*requestedMaxCCsUL_r13	/* OPTIONAL */;
	long	*requestReducedIntNonContComb_r13	/* OPTIONAL */;
	struct UECapabilityEnquiry_v1310_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityEnquiry_v1310_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_requestReducedFormat_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_requestSkipFallbackComb_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_requestReducedIntNonContComb_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityEnquiry_v1310_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityEnquiry_v1310_IEs_H_ */
#include <asn_internal.h>
