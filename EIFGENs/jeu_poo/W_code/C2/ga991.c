/*
 * Code for class GAME_FINGER_EVENT_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F991_8861(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F991_8862(EIF_REFERENCE);
extern EIF_TYPED_VALUE F991_8863(EIF_REFERENCE);
extern void EIF_Minit991(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {GAME_FINGER_EVENT_STATE}.make */
void F991_8861 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x, EIF_TYPED_VALUE arg5x, EIF_TYPED_VALUE arg6x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_i8
#define arg2 arg2x.it_r4
#define arg3 arg3x.it_r4
#define arg4 arg4x.it_r4
#define arg5 arg5x.it_r4
#define arg6 arg6x.it_r4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg6x.type & SK_HEAD) == SK_REF) arg6x.it_r4 = * (EIF_REAL_32 *) arg6x.it_r;
	if ((arg5x.type & SK_HEAD) == SK_REF) arg5x.it_r4 = * (EIF_REAL_32 *) arg5x.it_r;
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_r4 = * (EIF_REAL_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_r4 = * (EIF_REAL_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_r4 = * (EIF_REAL_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i8 = * (EIF_INTEGER_64 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT64,&arg1);
	RTLU(SK_REAL32,&arg2);
	RTLU(SK_REAL32,&arg3);
	RTLU(SK_REAL32,&arg4);
	RTLU(SK_REAL32,&arg5);
	RTLU(SK_REAL32,&arg6);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 990, Current, 0, 6, 15044);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(990, Current, 15044);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 6697, 0x24000000, 1); /* index */
	*(EIF_INTEGER_64 *)(Current + RTWA(6697, dtype)) = (EIF_INTEGER_64) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 6698, 0x18000000, 1); /* x */
	*(EIF_REAL_32 *)(Current + RTWA(6698, dtype)) = (EIF_REAL_32) arg2;
	RTHOOK(3);
	RTDBGAA(Current, dtype, 6699, 0x18000000, 1); /* y */
	*(EIF_REAL_32 *)(Current + RTWA(6699, dtype)) = (EIF_REAL_32) arg3;
	RTHOOK(4);
	RTDBGAA(Current, dtype, 6700, 0x18000000, 1); /* pressure */
	*(EIF_REAL_32 *)(Current + RTWA(6700, dtype)) = (EIF_REAL_32) arg6;
	RTHOOK(5);
	RTDBGAA(Current, dtype, 6702, 0x18000000, 1); /* relative_x */
	*(EIF_REAL_32 *)(Current + RTWA(6702, dtype)) = (EIF_REAL_32) arg4;
	RTHOOK(6);
	RTDBGAA(Current, dtype, 6703, 0x18000000, 1); /* relative_y */
	*(EIF_REAL_32 *)(Current + RTWA(6703, dtype)) = (EIF_REAL_32) arg5;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(8);
	RTEE;
#undef arg6
#undef arg5
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {GAME_FINGER_EVENT_STATE}.relative_x */
EIF_TYPED_VALUE F991_8862 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(6702,Dtype(Current)));
	return r;
}


/* {GAME_FINGER_EVENT_STATE}.relative_y */
EIF_TYPED_VALUE F991_8863 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REAL32;
	r.it_r4 = *(EIF_REAL_32 *)(Current + RTWA(6703,Dtype(Current)));
	return r;
}


void EIF_Minit991 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
