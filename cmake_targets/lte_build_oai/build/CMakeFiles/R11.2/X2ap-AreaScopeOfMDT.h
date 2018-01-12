/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "/home/airbustx2w/openairinterface5g/openair2/X2AP/MESSAGES/ASN1/R11.2/X2AP-IEs.asn"
 * 	`asn1c -gen-PER`
 */

#ifndef	_X2ap_AreaScopeOfMDT_H_
#define	_X2ap_AreaScopeOfMDT_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2ap-CellBasedMDT.h"
#include "X2ap-TABasedMDT.h"
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum X2ap_AreaScopeOfMDT_PR {
	X2ap_AreaScopeOfMDT_PR_NOTHING,	/* No components present */
	X2ap_AreaScopeOfMDT_PR_cellBased,
	X2ap_AreaScopeOfMDT_PR_tABased,
	X2ap_AreaScopeOfMDT_PR_pLMNWide,
	/* Extensions may appear below */
	
} X2ap_AreaScopeOfMDT_PR;

/* X2ap-AreaScopeOfMDT */
typedef struct X2ap_AreaScopeOfMDT {
	X2ap_AreaScopeOfMDT_PR present;
	union X2ap_AreaScopeOfMDT_u {
		X2ap_CellBasedMDT_t	 cellBased;
		X2ap_TABasedMDT_t	 tABased;
		NULL_t	 pLMNWide;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2ap_AreaScopeOfMDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2ap_AreaScopeOfMDT;

#ifdef __cplusplus
}
#endif

#endif	/* _X2ap_AreaScopeOfMDT_H_ */
#include <asn_internal.h>
