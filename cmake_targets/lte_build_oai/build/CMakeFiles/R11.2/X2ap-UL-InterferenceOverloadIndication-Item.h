/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/oainuc2/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_UL_InterferenceOverloadIndication_Item_H_
#define	_X2ap_UL_InterferenceOverloadIndication_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_UL_InterferenceOverloadIndication_Item {
	X2ap_UL_InterferenceOverloadIndication_Item_high_interference	= 0,
	X2ap_UL_InterferenceOverloadIndication_Item_medium_interference	= 1,
	X2ap_UL_InterferenceOverloadIndication_Item_low_interference	= 2
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_UL_InterferenceOverloadIndication_Item;

/* X2ap-UL-InterferenceOverloadIndication-Item */
typedef long	 X2ap_UL_InterferenceOverloadIndication_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_UL_InterferenceOverloadIndication_Item;
asn_struct_free_f X2ap_UL_InterferenceOverloadIndication_Item_free;
asn_struct_print_f X2ap_UL_InterferenceOverloadIndication_Item_print;
asn_constr_check_f X2ap_UL_InterferenceOverloadIndication_Item_constraint;
ber_type_decoder_f X2ap_UL_InterferenceOverloadIndication_Item_decode_ber;
der_type_encoder_f X2ap_UL_InterferenceOverloadIndication_Item_encode_der;
xer_type_decoder_f X2ap_UL_InterferenceOverloadIndication_Item_decode_xer;
xer_type_encoder_f X2ap_UL_InterferenceOverloadIndication_Item_encode_xer;
per_type_decoder_f X2ap_UL_InterferenceOverloadIndication_Item_decode_uper;
per_type_encoder_f X2ap_UL_InterferenceOverloadIndication_Item_encode_uper;
per_type_decoder_f X2ap_UL_InterferenceOverloadIndication_Item_decode_aper;
per_type_encoder_f X2ap_UL_InterferenceOverloadIndication_Item_encode_aper;
type_compare_f     X2ap_UL_InterferenceOverloadIndication_Item_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_UL_InterferenceOverloadIndication_Item_H_ */
#include <asn_internal.h>
