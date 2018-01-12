/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/airbustx2w/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_CauseProtocol_H_
#define	_S1ap_CauseProtocol_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1ap_CauseProtocol {
	S1ap_CauseProtocol_transfer_syntax_error	= 0,
	S1ap_CauseProtocol_abstract_syntax_error_reject	= 1,
	S1ap_CauseProtocol_abstract_syntax_error_ignore_and_notify	= 2,
	S1ap_CauseProtocol_message_not_compatible_with_receiver_state	= 3,
	S1ap_CauseProtocol_semantic_error	= 4,
	S1ap_CauseProtocol_abstract_syntax_error_falsely_constructed_message	= 5,
	S1ap_CauseProtocol_unspecified	= 6
	/*
	 * Enumeration is extensible
	 */
} e_S1ap_CauseProtocol;

/* S1ap-CauseProtocol */
typedef long	 S1ap_CauseProtocol_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_CauseProtocol;
asn_struct_free_f S1ap_CauseProtocol_free;
asn_struct_print_f S1ap_CauseProtocol_print;
asn_constr_check_f S1ap_CauseProtocol_constraint;
ber_type_decoder_f S1ap_CauseProtocol_decode_ber;
der_type_encoder_f S1ap_CauseProtocol_encode_der;
xer_type_decoder_f S1ap_CauseProtocol_decode_xer;
xer_type_encoder_f S1ap_CauseProtocol_encode_xer;
per_type_decoder_f S1ap_CauseProtocol_decode_uper;
per_type_encoder_f S1ap_CauseProtocol_encode_uper;
per_type_decoder_f S1ap_CauseProtocol_decode_aper;
per_type_encoder_f S1ap_CauseProtocol_encode_aper;
type_compare_f     S1ap_CauseProtocol_compare;

#ifdef __cplusplus
}
#endif

#endif	/* _S1ap_CauseProtocol_H_ */
#include <asn_internal.h>
