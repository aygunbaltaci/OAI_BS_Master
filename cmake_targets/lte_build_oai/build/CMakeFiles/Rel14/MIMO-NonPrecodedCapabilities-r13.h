/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_MIMO_NonPrecodedCapabilities_r13_H_
#define	_MIMO_NonPrecodedCapabilities_r13_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MIMO_NonPrecodedCapabilities_r13__config1_r13 {
	MIMO_NonPrecodedCapabilities_r13__config1_r13_supported	= 0
} e_MIMO_NonPrecodedCapabilities_r13__config1_r13;
typedef enum MIMO_NonPrecodedCapabilities_r13__config2_r13 {
	MIMO_NonPrecodedCapabilities_r13__config2_r13_supported	= 0
} e_MIMO_NonPrecodedCapabilities_r13__config2_r13;
typedef enum MIMO_NonPrecodedCapabilities_r13__config3_r13 {
	MIMO_NonPrecodedCapabilities_r13__config3_r13_supported	= 0
} e_MIMO_NonPrecodedCapabilities_r13__config3_r13;
typedef enum MIMO_NonPrecodedCapabilities_r13__config4_r13 {
	MIMO_NonPrecodedCapabilities_r13__config4_r13_supported	= 0
} e_MIMO_NonPrecodedCapabilities_r13__config4_r13;

/* MIMO-NonPrecodedCapabilities-r13 */
typedef struct MIMO_NonPrecodedCapabilities_r13 {
	long	*config1_r13	/* OPTIONAL */;
	long	*config2_r13	/* OPTIONAL */;
	long	*config3_r13	/* OPTIONAL */;
	long	*config4_r13	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MIMO_NonPrecodedCapabilities_r13_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_config1_r13_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_config2_r13_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_config3_r13_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_config4_r13_8;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_MIMO_NonPrecodedCapabilities_r13;

#ifdef __cplusplus
}
#endif

#endif	/* _MIMO_NonPrecodedCapabilities_r13_H_ */
#include <asn_internal.h>
