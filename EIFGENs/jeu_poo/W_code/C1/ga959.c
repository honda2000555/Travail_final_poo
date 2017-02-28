/*
 * Code for class GAME_JOYSTICK_HAT_STATE
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F959_7056(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F959_7057(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7058(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7059(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7060(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7061(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7062(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7063(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7064(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7065(EIF_REFERENCE);
extern EIF_TYPED_VALUE F959_7066(EIF_REFERENCE);
extern void EIF_Minit959(void);

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

/* {GAME_JOYSTICK_HAT_STATE}.make */
void F959_7056 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_n1
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n1 = * (EIF_NATURAL_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 1, 13252);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13252);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAA(Current, Dtype(Current), 4937, 0x30000000, 1); /* state */
	*(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current))) = (EIF_NATURAL_8) arg1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {GAME_JOYSTICK_HAT_STATE}.is_centered */
EIF_TYPED_VALUE F959_7057 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_centered";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13253);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13253);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5882, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_up */
EIF_TYPED_VALUE F959_7058 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13254);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13254);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5883, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right */
EIF_TYPED_VALUE F959_7059 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13255);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13255);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5884, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_down */
EIF_TYPED_VALUE F959_7060 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13256);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13256);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5885, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left */
EIF_TYPED_VALUE F959_7061 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13257);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13257);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5886, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right_up */
EIF_TYPED_VALUE F959_7062 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13258);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13258);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5887, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_right_down */
EIF_TYPED_VALUE F959_7063 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_right_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13259);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13259);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5888, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left_up */
EIF_TYPED_VALUE F959_7064 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_up";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13260);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13260);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5889, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.is_left_down */
EIF_TYPED_VALUE F959_7065 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "is_left_down";
	RTEX;
	EIF_NATURAL_8 tu1_1;
	EIF_NATURAL_8 tu1_2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 958, Current, 0, 0, 13261);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(958, Current, 13261);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tu1_1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937, Dtype(Current)));
	tu1_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5890, 962))(Current)).it_n1);
	Result = (EIF_BOOLEAN) (EIF_BOOLEAN)(tu1_1 == tu1_2);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
}

/* {GAME_JOYSTICK_HAT_STATE}.state */
EIF_TYPED_VALUE F959_7066 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_UINT8;
	r.it_n1 = *(EIF_NATURAL_8 *)(Current + RTWA(4937,Dtype(Current)));
	return r;
}


void EIF_Minit959 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
