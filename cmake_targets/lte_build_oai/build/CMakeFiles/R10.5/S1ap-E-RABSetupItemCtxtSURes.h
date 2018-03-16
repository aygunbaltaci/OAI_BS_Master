/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "/home/oainuc2/openairinterface5g/openair3/S1AP/MESSAGES/ASN1/R10.5/S1AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_S1ap_E_RABSetupItemCtxtSURes_H_
#define	_S1ap_E_RABSetupItemCtxtSURes_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1ap-E-RAB-ID.h"
#include "S1ap-TransportLayerAddress.h"
#include "S1ap-GTP-TEID.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct S1ap_IE_Extensions;

/* S1ap-E-RABSetupItemCtxtSURes */
typedef struct S1ap_E_RABSetupItemCtxtSURes {
	S1ap_E_RAB_ID_t	 e_RAB_ID;
	S1ap_TransportLayerAddress_t	 transportLayerAddress;
	S1ap_GTP_TEID_t	 gTP_TEID;
	struct S1ap_IE_Extensions	*iE_Extensions	/* OPTIONAL */;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1ap_E_RABSetupItemCtxtSURes_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1ap_E_RABSetupItemCtxtSURes;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "S1ap-IE-Extensions.h"

#endif	/* _S1ap_E_RABSetupItemCtxtSURes_H_ */
#include <asn_internal.h>
