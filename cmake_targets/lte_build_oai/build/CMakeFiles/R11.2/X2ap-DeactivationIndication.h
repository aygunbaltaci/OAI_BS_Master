/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/oainuc2/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_DeactivationIndication_H_
#define	_X2ap_DeactivationIndication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_DeactivationIndication {
	X2ap_DeactivationIndication_deactivated	= 0
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_DeactivationIndication;

/* X2ap-DeactivationIndication */
typedef long	 X2ap_DeactivationIndication_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_DeactivationIndication;
asn_struct_free_f X2ap_DeactivationIndication_free;
asn_struct_print_f X2ap_DeactivationIndication_print;
asn_constr_check_f X2ap_DeactivationIndication_constraint;
ber_type_decoder_f X2ap_DeactivationIndication_decode_ber;
der_type_encoder_f X2ap_DeactivationIndication_encode_der;
xer_type_decoder_f X2ap_DeactivationIndication_decode_xer;
xer_type_encoder_f X2ap_DeactivationIndication_encode_xer;
per_type_decoder_f X2ap_DeactivationIndication_decode_uper;
per_type_encoder_f X2ap_DeactivationIndication_encode_uper;
per_type_decoder_f X2ap_DeactivationIndication_decode_aper;
per_type_encoder_f X2ap_DeactivationIndication_encode_aper;
type_compare_f     X2ap_DeactivationIndication_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_DeactivationIndication_H_ */
#include <asn_internal.h>
