/*
 * Class GAME_EVENTS
 */

#include "eif_macros.h"


#ifdef __cplusplus
extern "C" {
#endif

static const EIF_TYPE_INDEX egt_0_999 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_1_999 [] = {0xFF01,244,998,0xFFFF};
static const EIF_TYPE_INDEX egt_2_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_3_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_4_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_5_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_6_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_7_999 [] = {0,0xFFFF};
static const EIF_TYPE_INDEX egt_8_999 [] = {0xFF01,14,0xFFFF};
static const EIF_TYPE_INDEX egt_9_999 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_10_999 [] = {0xFF01,227,0xFFFF};
static const EIF_TYPE_INDEX egt_11_999 [] = {0xFF01,15,0xFFFF};
static const EIF_TYPE_INDEX egt_12_999 [] = {0xFF01,998,0xFFFF};
static const EIF_TYPE_INDEX egt_13_999 [] = {0xFF01,912,198,0xFFFF};
static const EIF_TYPE_INDEX egt_14_999 [] = {0xFF01,224,0xFFFF};
static const EIF_TYPE_INDEX egt_15_999 [] = {0xFF01,1029,0xFFFF};


static const struct desc_info desc_999[] = {
	{EIF_GENERIC(NULL), 0xFFFFFFFF, 0xFFFFFFFF},
	{EIF_GENERIC(egt_0_999), 0, 0xFFFFFFFF},
	{EIF_GENERIC(egt_1_999), 1, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 2, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 3, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 4, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 5, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 6, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 7, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 8, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 9, 0xFFFFFFFF},
	{EIF_GENERIC(egt_2_999), 10, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 11, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 12, 0xFFFFFFFF},
	{EIF_GENERIC(egt_3_999), 13, 0xFFFFFFFF},
	{EIF_GENERIC(egt_4_999), 14, 0xFFFFFFFF},
	{EIF_GENERIC(egt_5_999), 15, 0xFFFFFFFF},
	{EIF_GENERIC(egt_6_999), 16, 0xFFFFFFFF},
	{EIF_GENERIC(egt_7_999), 17, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 18, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 19, 0xFFFFFFFF},
	{EIF_GENERIC(egt_8_999), 20, 0xFFFFFFFF},
	{EIF_GENERIC(egt_9_999), 21, 0xFFFFFFFF},
	{EIF_GENERIC(egt_10_999), 22, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 23, 0xFFFFFFFF},
	{EIF_GENERIC(egt_11_999), 24, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 25, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 26, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 27, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x07CD /*998*/), 28, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01BD /*222*/), 29, 0xFFFFFFFF},
	{EIF_GENERIC(egt_12_999), 30, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15022, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15026, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x01C1 /*224*/), 14956, 0},
	{EIF_GENERIC(egt_13_999), 14957, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 14958, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14959, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14960, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 14961, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 14962, 8},
	{EIF_GENERIC(egt_14_999), 15028, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15023, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15024, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15025, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 15027, 9},
	{EIF_GENERIC(NULL), 15582, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 15583, 0xFFFFFFFF},
	{EIF_GENERIC(NULL), 0x00, 0xFFFFFFFF},
	{EIF_NON_GENERIC(0x018D /*198*/), 15584, 10},
	{EIF_GENERIC(egt_15_999), 0x00, 0xFFFFFFFF},
};
void Init999(void)
{
	IDSC(desc_999, 0, 998);
	IDSC(desc_999 + 1, 1, 998);
	IDSC(desc_999 + 32, 401, 998);
	IDSC(desc_999 + 42, 377, 998);
	IDSC(desc_999 + 46, 402, 998);
}


#ifdef __cplusplus
}
#endif
