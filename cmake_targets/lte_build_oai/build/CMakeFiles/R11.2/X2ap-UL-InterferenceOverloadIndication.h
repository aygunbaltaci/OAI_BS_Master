/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/airbustx2w/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_UL_InterferenceOverloadIndication_H_
#define	_X2ap_UL_InterferenceOverloadIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-UL-InterferenceOverloadIndication-Item.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2ap-UL-InterferenceOverloadIndication */
typedef struct X2ap_UL_InterferenceOverloadIndication {
	A_SEQUENCE_OF(X2ap_UL_InterferenceOverloadIndication_Item_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_UL_InterferenceOverloadIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_UL_InterferenceOverloadIndication;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_UL_InterferenceOverloadIndication_H_ */
#include <asn_internal.h>