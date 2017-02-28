/*
 * Code for class PLAYER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F1016_9752(EIF_REFERENCE);
extern void F1016_9753(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9754(EIF_REFERENCE);
extern void F1016_9755(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1016_9756(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1016_9757(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1016_9758(EIF_REFERENCE);
extern void F1016_9759(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9760(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9761(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9762(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9763(EIF_REFERENCE);
extern void F1016_9764(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void F1016_9765(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1016_9766(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9767(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9768(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9769(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9770(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9771(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9772(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9773(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9774(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9775(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1016_9776(EIF_REFERENCE);
extern void EIF_Minit1016(void);

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

/* {PLAYER}.default_create */
void F1016_9752 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "default_create";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur8_1x = {{0}, SK_REAL64};
#define ur8_1 ur8_1x.it_r8
	EIF_TYPED_VALUE ur8_2x = {{0}, SK_REAL64};
#define ur8_2 ur8_2x.it_r8
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REAL_64 tr8_1;
	EIF_REAL_64 tr8_2;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 1015, Current, 1, 0, 15970);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15970);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7539, 0x04000000, 1); /* has_error */
	*(EIF_BOOLEAN *)(Current + RTWA(7539, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000409, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(1033, 0x01).id);
	tr2 = RTMS_EX_H("gaben.png",9,566615143);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7992, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6584, "is_openable", loc1))(loc1)).it_b);
	if (tb1) {
		RTHOOK(4);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(6585, "open", loc1))(loc1);
		RTHOOK(5);
		tb1 = *(EIF_BOOLEAN *)(loc1 + RTVA(6586, "is_open", loc1));
		if (tb1) {
			RTHOOK(6);
			RTDBGAA(Current, dtype, 7561, 0xF80003FC, 0); /* right_surface */
			tr1 = RTLNSMART(RTWCT(7561, dtype, Dftype(Current)).id);
			ur1 = RTCCL(loc1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(7650, Dtype(tr1)))(tr1, ur1x);
			RTNHOOK(6,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7561, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(7);
			RTDBGAA(Current, dtype, 7560, 0xF80003FC, 0); /* left_surface */
			tr1 = RTLN(eif_new_type(1021, 0x01).id);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr2);
			tr8_1 = (EIF_REAL_64) (((EIF_INTEGER_32) -1L));
			ur8_1 = tr8_1;
			tr8_2 = (EIF_REAL_64) (((EIF_INTEGER_32) 1L));
			ur8_2 = tr8_2;
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7690, Dtype(tr1)))(tr1, ur1x, ur8_1x, ur8_2x, ub1x);
			RTNHOOK(7,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7560, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(8);
			RTDBGAA(Current, dtype, 7553, 0x10000000, 1); /* sub_image_width */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(8,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7677, "width", tr1))(tr1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(7553, dtype)) = (EIF_INTEGER_32) (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L));
			RTHOOK(9);
			RTDBGAA(Current, dtype, 7554, 0x10000000, 1); /* sub_image_height */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(9,1);
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7676, "height", tr1))(tr1)).it_i4);
			*(EIF_INTEGER_32 *)(Current + RTWA(7554, dtype)) = (EIF_INTEGER_32) ti4_1;
		} else {
			RTHOOK(10);
			RTDBGAA(Current, dtype, 7539, 0x04000000, 1); /* has_error */
			*(EIF_BOOLEAN *)(Current + RTWA(7539, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
			RTHOOK(11);
			RTDBGAA(Current, dtype, 7561, 0xF80003FC, 0); /* right_surface */
			tr1 = RTLNSMART(RTWCT(7561, dtype, Dftype(Current)).id);
			ui4_1 = ((EIF_INTEGER_32) 1L);
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7655, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
			RTNHOOK(11,1);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7561, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(12);
			RTDBGAA(Current, dtype, 7560, 0xF80003FC, 0); /* left_surface */
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTAR(Current, tr1);
			*(EIF_REFERENCE *)(Current + RTWA(7560, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		}
	} else {
		RTHOOK(13);
		RTDBGAA(Current, dtype, 7539, 0x04000000, 1); /* has_error */
		*(EIF_BOOLEAN *)(Current + RTWA(7539, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
		RTHOOK(14);
		RTDBGAA(Current, dtype, 7561, 0xF80003FC, 0); /* right_surface */
		tr1 = RTLNSMART(RTWCT(7561, dtype, Dftype(Current)).id);
		ui4_1 = ((EIF_INTEGER_32) 1L);
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(7655, Dtype(tr1)))(tr1, ui4_1x, ui4_2x);
		RTNHOOK(14,1);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7561, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(15);
		RTDBGAA(Current, dtype, 7560, 0xF80003FC, 0); /* left_surface */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTAR(Current, tr1);
		*(EIF_REFERENCE *)(Current + RTWA(7560, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(16);
	RTDBGAA(Current, dtype, 7555, 0xF80003FC, 0); /* surface */
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7555, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(17);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(7538, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef up1
#undef ur1
#undef ur8_1
#undef ur8_2
#undef ui4_1
#undef ui4_2
#undef ub1
}

/* {PLAYER}.initialize_animation_coordinate */
void F1016_9753 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "initialize_animation_coordinate";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_INTEGER_32 ti4_1;
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(5);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLR(3,tr3);
	RTLR(4,ur1);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 15971);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15971);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7556, 0xF8000112, 0); /* animation_coordinates */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,245,0xFF01,0xFFF9,2,181,213,213,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(2935, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(1,1);
	RTAR(Current, tr1);
	*(EIF_REFERENCE *)(Current + RTWA(7556, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(2,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,181,213,213,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7555, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(2,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7677, "width", tr3))(tr3)).it_i4);
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "extend", tr1))(tr1, ur1x);
	RTHOOK(3);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(3,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,181,213,213,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "extend", tr1))(tr1, ur1x);
	RTHOOK(4);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(4,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,181,213,213,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7555, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
	RTNHOOK(4,2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(7677, "width", tr3))(tr3)).it_i4);
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) (ti4_1 / ((EIF_INTEGER_32) 3L)) * ((EIF_INTEGER_32) 2L));
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = RTCCL(tr2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "extend", tr1))(tr1, ur1x);
	RTHOOK(5);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(5,1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,0xFFF9,2,181,213,213,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLNTS(typres0.id, 3, 1);
	}
	((EIF_TYPED_VALUE *)tr2+1)->it_i4 = ((EIF_INTEGER_32) 0L);
	((EIF_TYPED_VALUE *)tr2+2)->it_i4 = ((EIF_INTEGER_32) 0L);
	ur1 = tr2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1710, "extend", tr1))(tr1, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
}

/* {PLAYER}.has_error */
EIF_TYPED_VALUE F1016_9754 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7539,Dtype(Current)));
	return r;
}


/* {PLAYER}.update */
void F1016_9755 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "update";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_NATURAL_32 loc2 = (EIF_NATURAL_32) 0;
#define arg1 arg1x.it_n4
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,Current);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_UINT32, &loc2);
	
	RTEAA(l_feature_name, 1015, Current, 2, 1, 15973);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15973);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7545, dtype));
	tb2 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
	if ((EIF_BOOLEAN) (tb1 || tb2)) {
		RTHOOK(2);
		RTDBGAL(Current, 1, 0xF80000B5, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7559, dtype))(Current)).it_n4);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(2,2);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1757, "count", tr2))(tr2)).it_i4);
		RTNHOOK(2,3);
		tu4_2 = (EIF_NATURAL_32) ti4_1;
		ti4_1 = (EIF_INTEGER_32) ((EIF_NATURAL_32) (((EIF_NATURAL_32) ((EIF_NATURAL_32) (arg1 / tu4_1) % tu4_2)) + (EIF_NATURAL_32) ((EIF_INTEGER_32) 1L)));
		ui4_1 = ti4_1;
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1741, "at", tr1))(tr1, ui4_1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7551, 0x10000000, 1); /* sub_image_x */
		ti4_1 = eif_integer_32_item(RTCW(loc1),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(7551, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7552, 0x10000000, 1); /* sub_image_y */
		ti4_1 = eif_integer_32_item(RTCW(loc1),2);
		*(EIF_INTEGER_32 *)(Current + RTWA(7552, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(5);
		RTDBGAL(Current, 2, 0x38000000, 1, 0); /* loc2 */
		loc2 = *(EIF_NATURAL_32 *)(Current + RTWA(7557, dtype));
		loc2 = (EIF_NATURAL_32) (EIF_NATURAL_32) (arg1 - loc2);
		RTHOOK(6);
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7558, dtype))(Current)).it_n4);
		if ((EIF_BOOLEAN) ((EIF_NATURAL_32) (loc2 / tu4_1) > (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L))) {
			RTHOOK(7);
			tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
			if (tb1) {
				RTHOOK(8);
				RTDBGAA(Current, dtype, 7555, 0xF80003FC, 0); /* surface */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7561, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(7555, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(9);
				RTDBGAA(Current, dtype, 7547, 0x10000000, 1); /* x */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7558, dtype))(Current)).it_n4);
				ti4_2 = (EIF_INTEGER_32) (EIF_NATURAL_32) (loc2 / tu4_1);
				(*(EIF_INTEGER_32 *)(Current + RTWA(7547, dtype))) += ti4_2;
			} else {
				RTHOOK(10);
				RTDBGAA(Current, dtype, 7555, 0xF80003FC, 0); /* surface */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7560, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTAR(Current, tr1);
				*(EIF_REFERENCE *)(Current + RTWA(7555, dtype)) = (EIF_REFERENCE) RTCCL(tr1);
				RTHOOK(11);
				RTDBGAA(Current, dtype, 7547, 0x10000000, 1); /* x */
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7558, dtype))(Current)).it_n4);
				ti4_2 = (EIF_INTEGER_32) (EIF_NATURAL_32) (loc2 / tu4_1);
				(*(EIF_INTEGER_32 *)(Current + RTWA(7547, dtype))) -= ti4_2;
			}
			RTHOOK(12);
			RTDBGAA(Current, dtype, 7557, 0x38000000, 1); /* old_timestamp */
			tu4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7558, dtype))(Current)).it_n4);
			tu4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7558, dtype))(Current)).it_n4);
			(*(EIF_NATURAL_32 *)(Current + RTWA(7557, dtype))) += (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc2 / tu4_2) * tu4_3);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef up2
#undef ui4_1
#undef arg1
}

/* {PLAYER}.go_left */
void F1016_9756 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_left";
	RTEX;
#define arg1 arg1x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 1, 15974);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15974);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7557, 0x38000000, 1); /* old_timestamp */
	*(EIF_NATURAL_32 *)(Current + RTWA(7557, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7545, 0x04000000, 1); /* going_left */
	*(EIF_BOOLEAN *)(Current + RTWA(7545, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PLAYER}.go_right */
void F1016_9757 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "go_right";
	RTEX;
#define arg1 arg1x.it_n4
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 1, 15975);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15975);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7557, 0x38000000, 1); /* old_timestamp */
	*(EIF_NATURAL_32 *)(Current + RTWA(7557, dtype)) = (EIF_NATURAL_32) arg1;
	RTHOOK(2);
	RTDBGAA(Current, dtype, 7546, 0x04000000, 1); /* going_right */
	*(EIF_BOOLEAN *)(Current + RTWA(7546, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PLAYER}.stop_left */
void F1016_9758 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_left";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 15976);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15976);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7545, 0x04000000, 1); /* going_left */
	*(EIF_BOOLEAN *)(Current + RTWA(7545, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7546, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7551, 0x10000000, 1); /* sub_image_x */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2484, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ti4_1 = eif_integer_32_item(RTCW(tr2),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(7551, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7552, 0x10000000, 1); /* sub_image_y */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2484, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,2);
		ti4_1 = eif_integer_32_item(RTCW(tr2),2);
		*(EIF_INTEGER_32 *)(Current + RTWA(7552, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {PLAYER}.stop_right */
void F1016_9759 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "stop_right";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(3);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLR(2,tr2);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 0, 15977);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15977);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7546, 0x04000000, 1); /* going_right */
	*(EIF_BOOLEAN *)(Current + RTWA(7546, dtype)) = (EIF_BOOLEAN) (EIF_BOOLEAN) 0;
	RTHOOK(2);
	tb1 = *(EIF_BOOLEAN *)(Current + RTWA(7545, dtype));
	if ((EIF_BOOLEAN) !tb1) {
		RTHOOK(3);
		RTDBGAA(Current, dtype, 7551, 0x10000000, 1); /* sub_image_x */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2484, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(3,2);
		ti4_1 = eif_integer_32_item(RTCW(tr2),1);
		*(EIF_INTEGER_32 *)(Current + RTWA(7551, dtype)) = (EIF_INTEGER_32) ti4_1;
		RTHOOK(4);
		RTDBGAA(Current, dtype, 7552, 0x10000000, 1); /* sub_image_y */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(7556, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(4,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2484, "first", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		RTNHOOK(4,2);
		ti4_1 = eif_integer_32_item(RTCW(tr2),2);
		*(EIF_INTEGER_32 *)(Current + RTWA(7552, dtype)) = (EIF_INTEGER_32) ti4_1;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef up2
}

/* {PLAYER}.going_left */
EIF_TYPED_VALUE F1016_9760 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7545,Dtype(Current)));
	return r;
}


/* {PLAYER}.going_right */
EIF_TYPED_VALUE F1016_9761 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_BOOL;
	r.it_b = *(EIF_BOOLEAN *)(Current + RTWA(7546,Dtype(Current)));
	return r;
}


/* {PLAYER}.x */
EIF_TYPED_VALUE F1016_9762 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7547,Dtype(Current)));
	return r;
}


/* {PLAYER}.y */
EIF_TYPED_VALUE F1016_9763 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7548,Dtype(Current)));
	return r;
}


/* {PLAYER}.set_x */
void F1016_9764 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_x";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 1, 15982);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15982);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7547, 0x10000000, 1); /* x */
	*(EIF_INTEGER_32 *)(Current + RTWA(7547, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_assign", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7547, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PLAYER}.set_y */
void F1016_9765 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_y";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1015, Current, 0, 1, 15958);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(1015, Current, 15958);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, dtype, 7548, 0x10000000, 1); /* y */
	*(EIF_INTEGER_32 *)(Current + RTWA(7548, dtype)) = (EIF_INTEGER_32) arg1;
	if (RTAL & CK_ENSURE) {
		RTHOOK(2);
		RTCT("is_assign", EX_POST);
		ti4_1 = *(EIF_INTEGER_32 *)(Current + RTWA(7548, dtype));
		if ((EIF_BOOLEAN)(ti4_1 == arg1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {PLAYER}.sub_image_x */
EIF_TYPED_VALUE F1016_9766 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7551,Dtype(Current)));
	return r;
}


/* {PLAYER}.sub_image_y */
EIF_TYPED_VALUE F1016_9767 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7552,Dtype(Current)));
	return r;
}


/* {PLAYER}.sub_image_width */
EIF_TYPED_VALUE F1016_9768 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7553,Dtype(Current)));
	return r;
}


/* {PLAYER}.sub_image_height */
EIF_TYPED_VALUE F1016_9769 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = *(EIF_INTEGER_32 *)(Current + RTWA(7554,Dtype(Current)));
	return r;
}


/* {PLAYER}.surface */
EIF_TYPED_VALUE F1016_9770 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7555,Dtype(Current)));
	return r;
}


/* {PLAYER}.animation_coordinates */
EIF_TYPED_VALUE F1016_9771 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7556,Dtype(Current)));
	return r;
}


/* {PLAYER}.old_timestamp */
EIF_TYPED_VALUE F1016_9772 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = *(EIF_NATURAL_32 *)(Current + RTWA(7557,Dtype(Current)));
	return r;
}


/* {PLAYER}.movement_delta */
EIF_TYPED_VALUE F1016_9773 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 10U);
	return r;
}

/* {PLAYER}.animation_delta */
EIF_TYPED_VALUE F1016_9774 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT32;
	r.it_n4 = (EIF_NATURAL_32) ((EIF_NATURAL_32) 100U);
	return r;
}

/* {PLAYER}.left_surface */
EIF_TYPED_VALUE F1016_9775 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7560,Dtype(Current)));
	return r;
}


/* {PLAYER}.right_surface */
EIF_TYPED_VALUE F1016_9776 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(7561,Dtype(Current)));
	return r;
}


void EIF_Minit1016 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
