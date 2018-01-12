/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "fixed_grammar.asn"
 * 	`asn1c -gen-PER`
 */

#include "SL-V2X-ConfigDedicated-r14.h"

static int
memb_mcs_r14_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_mcs_r14_constr_9 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_setup_constr_4 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_commTxResources_r14_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_scheduled_r14_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, sl_D_RNTI_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sl-D-RNTI-r14"
		},
	{ ATF_POINTER, 3, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, mac_MainConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_MainConfigSL_r12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mac-MainConfig-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, v2x_SchedulingPool_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommResourcePoolV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-SchedulingPool-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, mcs_r14),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_mcs_r14_constraint_5,
		&asn_PER_memb_mcs_r14_constr_9,
		0,
		"mcs-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, logicalChGroupInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_LogicalChGroupInfoList_r13,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"logicalChGroupInfoList-r14"
		},
};
static int asn_MAP_scheduled_r14_oms_5[] = { 1, 2, 3 };
static ber_tlv_tag_t asn_DEF_scheduled_r14_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_scheduled_r14_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-D-RNTI-r14 at 9539 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* mac-MainConfig-r14 at 9540 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* v2x-SchedulingPool-r14 at 9541 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* mcs-r14 at 9542 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* logicalChGroupInfoList-r14 at 9544 */
};
static asn_SEQUENCE_specifics_t asn_SPC_scheduled_r14_specs_5 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__scheduled_r14, _asn_ctx),
	asn_MAP_scheduled_r14_tag2el_5,
	5,	/* Count of tags in the map */
	asn_MAP_scheduled_r14_oms_5,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_scheduled_r14_5 = {
	"scheduled-r14",
	"scheduled-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_scheduled_r14_tags_5,
	sizeof(asn_DEF_scheduled_r14_tags_5)
		/sizeof(asn_DEF_scheduled_r14_tags_5[0]) - 1, /* 1 */
	asn_DEF_scheduled_r14_tags_5,	/* Same as above */
	sizeof(asn_DEF_scheduled_r14_tags_5)
		/sizeof(asn_DEF_scheduled_r14_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_scheduled_r14_5,
	5,	/* Elements count */
	&asn_SPC_scheduled_r14_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v2x_CommTxPoolNormalDedicated_r14_12[] = {
	{ ATF_POINTER, 3, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14, poolToReleaseList_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxPoolToReleaseListV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"poolToReleaseList-r14"
		},
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14, poolToAddModList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_TxPoolToAddModListV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"poolToAddModList-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14, v2x_CommTxPoolSensingConfig_r14),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_CommTxPoolSensingConfig_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-CommTxPoolSensingConfig-r14"
		},
};
static int asn_MAP_v2x_CommTxPoolNormalDedicated_r14_oms_12[] = { 0, 1, 2 };
static ber_tlv_tag_t asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v2x_CommTxPoolNormalDedicated_r14_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* poolToReleaseList-r14 at 9548 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* poolToAddModList-r14 at 9549 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v2x-CommTxPoolSensingConfig-r14 at 9551 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v2x_CommTxPoolNormalDedicated_r14_specs_12 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14__v2x_CommTxPoolNormalDedicated_r14, _asn_ctx),
	asn_MAP_v2x_CommTxPoolNormalDedicated_r14_tag2el_12,
	3,	/* Count of tags in the map */
	asn_MAP_v2x_CommTxPoolNormalDedicated_r14_oms_12,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v2x_CommTxPoolNormalDedicated_r14_12 = {
	"v2x-CommTxPoolNormalDedicated-r14",
	"v2x-CommTxPoolNormalDedicated-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12,
	sizeof(asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12)
		/sizeof(asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12[0]) - 1, /* 1 */
	asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12,	/* Same as above */
	sizeof(asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12)
		/sizeof(asn_DEF_v2x_CommTxPoolNormalDedicated_r14_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v2x_CommTxPoolNormalDedicated_r14_12,
	3,	/* Elements count */
	&asn_SPC_v2x_CommTxPoolNormalDedicated_r14_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ue_Selected_r14_11[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14, v2x_CommTxPoolNormalDedicated_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_v2x_CommTxPoolNormalDedicated_r14_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-CommTxPoolNormalDedicated-r14"
		},
};
static ber_tlv_tag_t asn_DEF_ue_Selected_r14_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_ue_Selected_r14_tag2el_11[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* v2x-CommTxPoolNormalDedicated-r14 at 9548 */
};
static asn_SEQUENCE_specifics_t asn_SPC_ue_Selected_r14_specs_11 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup__ue_Selected_r14, _asn_ctx),
	asn_MAP_ue_Selected_r14_tag2el_11,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ue_Selected_r14_11 = {
	"ue-Selected-r14",
	"ue-Selected-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_ue_Selected_r14_tags_11,
	sizeof(asn_DEF_ue_Selected_r14_tags_11)
		/sizeof(asn_DEF_ue_Selected_r14_tags_11[0]) - 1, /* 1 */
	asn_DEF_ue_Selected_r14_tags_11,	/* Same as above */
	sizeof(asn_DEF_ue_Selected_r14_tags_11)
		/sizeof(asn_DEF_ue_Selected_r14_tags_11[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ue_Selected_r14_11,
	1,	/* Elements count */
	&asn_SPC_ue_Selected_r14_specs_11	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_setup_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup, choice.scheduled_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_scheduled_r14_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scheduled-r14"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup, choice.ue_Selected_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_ue_Selected_r14_11,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-Selected-r14"
		},
};
static asn_TYPE_tag2member_t asn_MAP_setup_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scheduled-r14 at 9539 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ue-Selected-r14 at 9553 */
};
static asn_CHOICE_specifics_t asn_SPC_setup_specs_4 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup, _asn_ctx),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup, present),
	sizeof(((struct SL_V2X_ConfigDedicated_r14__commTxResources_r14__setup *)0)->present),
	asn_MAP_setup_tag2el_4,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_setup_4 = {
	"setup",
	"setup",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_setup_constr_4,
	asn_MBR_setup_4,
	2,	/* Elements count */
	&asn_SPC_setup_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_commTxResources_r14_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14, choice.release),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"release"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14, choice.setup),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_setup_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"setup"
		},
};
static asn_TYPE_tag2member_t asn_MAP_commTxResources_r14_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* release at 9536 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* setup at 9544 */
};
static asn_CHOICE_specifics_t asn_SPC_commTxResources_r14_specs_2 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14, _asn_ctx),
	offsetof(struct SL_V2X_ConfigDedicated_r14__commTxResources_r14, present),
	sizeof(((struct SL_V2X_ConfigDedicated_r14__commTxResources_r14 *)0)->present),
	asn_MAP_commTxResources_r14_tag2el_2,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_commTxResources_r14_2 = {
	"commTxResources-r14",
	"commTxResources-r14",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_decode_aper,
	CHOICE_encode_aper,
	CHOICE_compare,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_commTxResources_r14_constr_2,
	asn_MBR_commTxResources_r14_2,
	2,	/* Elements count */
	&asn_SPC_commTxResources_r14_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SL_V2X_ConfigDedicated_r14_1[] = {
	{ ATF_POINTER, 2, offsetof(struct SL_V2X_ConfigDedicated_r14, commTxResources_r14),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_commTxResources_r14_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commTxResources-r14"
		},
	{ ATF_POINTER, 1, offsetof(struct SL_V2X_ConfigDedicated_r14, v2x_InterFreqInfoList_r14),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SL_InterFreqInfoListV2X_r14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v2x-InterFreqInfoList-r14"
		},
};
static int asn_MAP_SL_V2X_ConfigDedicated_r14_oms_1[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SL_V2X_ConfigDedicated_r14_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* commTxResources-r14 at 9536 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v2x-InterFreqInfoList-r14 at 9556 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SL_V2X_ConfigDedicated_r14_specs_1 = {
	sizeof(struct SL_V2X_ConfigDedicated_r14),
	offsetof(struct SL_V2X_ConfigDedicated_r14, _asn_ctx),
	asn_MAP_SL_V2X_ConfigDedicated_r14_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SL_V2X_ConfigDedicated_r14_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	1,	/* Start extensions */
	3	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SL_V2X_ConfigDedicated_r14 = {
	"SL-V2X-ConfigDedicated-r14",
	"SL-V2X-ConfigDedicated-r14",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	SEQUENCE_decode_aper,
	SEQUENCE_encode_aper,
	SEQUENCE_compare,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1,
	sizeof(asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1[0]), /* 1 */
	asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1,	/* Same as above */
	sizeof(asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1)
		/sizeof(asn_DEF_SL_V2X_ConfigDedicated_r14_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SL_V2X_ConfigDedicated_r14_1,
	2,	/* Elements count */
	&asn_SPC_SL_V2X_ConfigDedicated_r14_specs_1	/* Additional specs */
};
