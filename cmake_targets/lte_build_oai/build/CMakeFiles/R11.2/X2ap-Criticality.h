/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-CommonDataTypes"
 * 	found in "/home/airbustx2w/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-CommonDataTypes.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_Criticality_H_
#define	_X2ap_Criticality_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_Criticality {
	X2ap_Criticality_reject	= 0,
	X2ap_Criticality_ignore	= 1,
	X2ap_Criticality_notify	= 2
} e_X2ap_Criticality;

/* X2ap-Criticality */
typedef long	 X2ap_Criticality_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_Criticality;
asn_struct_free_f X2ap_Criticality_free;
asn_struct_print_f X2ap_Criticality_print;
asn_constr_check_f X2ap_Criticality_constraint;
ber_type_decoder_f X2ap_Criticality_decode_ber;
der_type_encoder_f X2ap_Criticality_encode_der;
xer_type_decoder_f X2ap_Criticality_decode_xer;
xer_type_encoder_f X2ap_Criticality_encode_xer;
per_type_decoder_f X2ap_Criticality_decode_uper;
per_type_encoder_f X2ap_Criticality_encode_uper;
per_type_decoder_f X2ap_Criticality_decode_aper;
per_type_encoder_f X2ap_Criticality_encode_aper;
type_compare_f     X2ap_Criticality_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_Criticality_H_ */
#include <asn_internal.h>