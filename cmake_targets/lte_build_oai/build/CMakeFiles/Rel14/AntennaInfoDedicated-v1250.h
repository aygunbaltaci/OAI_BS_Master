/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_AntennaInfoDedicated_v1250_H_
#define	_AntennaInfoDedicated_v1250_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* AntennaInfoDedicated-v1250 */
typedef struct AntennaInfoDedicated_v1250 {
	BOOLEAN_t	 alternativeCodebookEnabledFor4TX_r12;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AntennaInfoDedicated_v1250_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AntennaInfoDedicated_v1250;

#ifdef __cplusplus
}
#endif

#endif	/* _AntennaInfoDedicated_v1250_H_ */
#include <asn_internal.h>
