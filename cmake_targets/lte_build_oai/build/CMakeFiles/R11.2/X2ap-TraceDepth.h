/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/oainuc2/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_TraceDepth_H_
#define	_X2ap_TraceDepth_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_TraceDepth {
	X2ap_TraceDepth_minimum	= 0,
	X2ap_TraceDepth_medium	= 1,
	X2ap_TraceDepth_maximum	= 2,
	X2ap_TraceDepth_minimumWithoutVendorSpecificExtension	= 3,
	X2ap_TraceDepth_mediumWithoutVendorSpecificExtension	= 4,
	X2ap_TraceDepth_maximumWithoutVendorSpecificExtension	= 5
	/*
	 * Enumeration is extensible
	 */
} e_X2ap_TraceDepth;

/* X2ap-TraceDepth */
typedef long	 X2ap_TraceDepth_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_TraceDepth;
asn_struct_free_f X2ap_TraceDepth_free;
asn_struct_print_f X2ap_TraceDepth_print;
asn_constr_check_f X2ap_TraceDepth_constraint;
ber_type_decoder_f X2ap_TraceDepth_decode_ber;
der_type_encoder_f X2ap_TraceDepth_encode_der;
xer_type_decoder_f X2ap_TraceDepth_decode_xer;
xer_type_encoder_f X2ap_TraceDepth_encode_xer;
per_type_decoder_f X2ap_TraceDepth_decode_uper;
per_type_encoder_f X2ap_TraceDepth_encode_uper;
per_type_decoder_f X2ap_TraceDepth_decode_aper;
per_type_encoder_f X2ap_TraceDepth_encode_aper;
type_compare_f     X2ap_TraceDepth_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_TraceDepth_H_ */
#include <asn_internal.h>
