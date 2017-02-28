/*
 * Code for class AUDIO_SND_FILES_EXTERNAL
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F1048_10671(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10672(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10673(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10674(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10675(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10676(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10677(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10678(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10679(EIF_REFERENCE);
extern void F1048_10680(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10681(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10682(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10683(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10684(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10685(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10686(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F1048_10687(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10688(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10689(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10690(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10691(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10692(EIF_REFERENCE);
extern EIF_TYPED_VALUE F1048_10693(EIF_REFERENCE);
extern void EIF_Minit1048(void);

#ifdef __cplusplus
}
#endif

#include <stdint.h>
#include <sndfile.h>
#include <sndfile_additions.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F1048_10671
static EIF_INTEGER_32 inline_F1048_10671 (void)
{
	return (EIF_INTEGER_32) (sizeof(sf_count_t))
	;
}
#define INLINE_F1048_10671
#endif
#ifndef INLINE_F1048_10679
static EIF_INTEGER_32 inline_F1048_10679 (void)
{
	return (EIF_INTEGER_32) (sizeof(SF_VIRTUAL_IO))
	;
}
#define INLINE_F1048_10679
#endif
#ifndef INLINE_F1048_10681
static EIF_INTEGER_32 inline_F1048_10681 (void)
{
	return (EIF_INTEGER_32) (sizeof(SF_INFO))
	;
}
#define INLINE_F1048_10681
#endif
#ifndef INLINE_F1048_10687
static EIF_INTEGER_32 inline_F1048_10687 (void)
{
	return (EIF_INTEGER_32) (SFM_READ)
	;
}
#define INLINE_F1048_10687
#endif
#ifndef INLINE_F1048_10688
static EIF_INTEGER_32 inline_F1048_10688 (void)
{
	return (EIF_INTEGER_32) (SFM_WRITE)
	;
}
#define INLINE_F1048_10688
#endif
#ifndef INLINE_F1048_10689
static EIF_INTEGER_32 inline_F1048_10689 (void)
{
	return (EIF_INTEGER_32) (SFM_RDWR)
	;
}
#define INLINE_F1048_10689
#endif
#ifndef INLINE_F1048_10690
static EIF_INTEGER_32 inline_F1048_10690 (void)
{
	return (EIF_INTEGER_32) (SEEK_SET)
	;
}
#define INLINE_F1048_10690
#endif
#ifndef INLINE_F1048_10691
static EIF_INTEGER_32 inline_F1048_10691 (void)
{
	return (EIF_INTEGER_32) (SEEK_CUR)
	;
}
#define INLINE_F1048_10691
#endif
#ifndef INLINE_F1048_10692
static EIF_INTEGER_32 inline_F1048_10692 (void)
{
	return (EIF_INTEGER_32) (SEEK_END)
	;
}
#define INLINE_F1048_10692
#endif
#ifndef INLINE_F1048_10693
static EIF_INTEGER_32 inline_F1048_10693 (void)
{
	return (EIF_INTEGER_32) (SFC_GET_LOG_INFO)
	;
}
#define INLINE_F1048_10693
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {AUDIO_SND_FILES_EXTERNAL}.c_sizeof_sf_count_t */
EIF_TYPED_VALUE F1048_10671 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_sf_count_t";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16830);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16830);
	RTIV(Current, RTAL);
	Result = inline_F1048_10671 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_open */
EIF_TYPED_VALUE F1048_10672 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_open";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 3, 16831);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16831);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sf_open((const char *) arg1, (int) arg2, (SF_INFO *) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_open_virtual */
EIF_TYPED_VALUE F1048_10673 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "sf_open_virtual";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 4, 16832);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16832);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sf_open_virtual((SF_VIRTUAL_IO *) arg1, (int) arg2, (SF_INFO *) arg3, (void *) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_close */
EIF_TYPED_VALUE F1048_10674 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sf_close";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16833);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16833);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sf_close((SNDFILE *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_strerror */
EIF_TYPED_VALUE F1048_10675 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "sf_strerror";
	RTEX;
#define arg1 arg1x.it_p
	EIF_POINTER Result = ((EIF_POINTER) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_POINTER, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16834);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16834);
	RTIV(Current, RTAL);Result = (EIF_POINTER) sf_strerror((SNDFILE *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_POINTER; r.it_p = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_seek */
EIF_TYPED_VALUE F1048_10676 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_seek";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i8
#define arg3 arg3x.it_i4
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i4 = * (EIF_INTEGER_32 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i8 = * (EIF_INTEGER_64 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT64,&arg2);
	RTLU(SK_INT32,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 3, 16835);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16835);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) sf_seek((SNDFILE *) arg1, (sf_count_t) arg2, (int) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_command */
EIF_TYPED_VALUE F1048_10677 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "sf_command";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_i4
#define arg3 arg3x.it_p
#define arg4 arg4x.it_i4
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_i4 = * (EIF_INTEGER_32 *) arg4x.it_r;
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_p = * (EIF_POINTER *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_i4 = * (EIF_INTEGER_32 *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_INT32,&arg2);
	RTLU(SK_POINTER,&arg3);
	RTLU(SK_INT32,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 4, 16836);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16836);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) sf_command((SNDFILE *) arg1, (int) arg2, (void *) arg3, (int) arg4);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(6);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sf_read_short */
EIF_TYPED_VALUE F1048_10678 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x)
{
	GTCX
	char *l_feature_name = "sf_read_short";
	RTEX;
#define arg1 arg1x.it_p
#define arg2 arg2x.it_p
#define arg3 arg3x.it_i8
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg3x.type & SK_HEAD) == SK_REF) arg3x.it_i8 = * (EIF_INTEGER_64 *) arg3x.it_r;
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU(SK_INT64,&arg3);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 3, 16837);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16837);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) sf_read_short((SNDFILE *) arg1, (short *) arg2, (sf_count_t) arg3);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg3
#undef arg2
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.c_sizeof_snd_file_virtual_io */
EIF_TYPED_VALUE F1048_10679 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_snd_file_virtual_io";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16838);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16838);
	RTIV(Current, RTAL);
	Result = inline_F1048_10679 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.set_snd_file_virtual_io */
void F1048_10680 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "set_snd_file_virtual_io";
	RTEX;
#define arg1 arg1x.it_p
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_VOID, NULL);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16839);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16839);
	RTIV(Current, RTAL);setSndFileVirtualIo((SF_VIRTUAL_IO *) arg1);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.c_sizeof_sf_info */
EIF_TYPED_VALUE F1048_10681 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "c_sizeof_sf_info";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16840);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16840);
	RTIV(Current, RTAL);
	Result = inline_F1048_10681 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.get_sf_info_struct_channels */
EIF_TYPED_VALUE F1048_10682 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_channels";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16841);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16841);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->channels);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.get_sf_info_struct_frames */
EIF_TYPED_VALUE F1048_10683 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_frames";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_64 Result = ((EIF_INTEGER_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT64, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16842);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16842);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_64) (((SF_INFO *)arg1)->frames);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT64; r.it_i8 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.get_sf_info_struct_format */
EIF_TYPED_VALUE F1048_10684 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_format";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16843);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16843);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->format);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.get_sf_info_struct_samplerate */
EIF_TYPED_VALUE F1048_10685 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_samplerate";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16844);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16844);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->samplerate);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.get_sf_info_struct_seekable */
EIF_TYPED_VALUE F1048_10686 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "get_sf_info_struct_seekable";
	RTEX;
#define arg1 arg1x.it_p
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_p = * (EIF_POINTER *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU(SK_POINTER,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 1, 16845);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16845);
	RTIV(Current, RTAL);Result = (EIF_INTEGER_32) (((SF_INFO *)arg1)->seekable);
	
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef arg1
}

/* {AUDIO_SND_FILES_EXTERNAL}.sfm_read */
EIF_TYPED_VALUE F1048_10687 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_read";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16846);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16846);
	RTIV(Current, RTAL);
	Result = inline_F1048_10687 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.sfm_write */
EIF_TYPED_VALUE F1048_10688 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_write";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16847);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16847);
	RTIV(Current, RTAL);
	Result = inline_F1048_10688 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.sfm_rdwr */
EIF_TYPED_VALUE F1048_10689 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfm_rdwr";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16848);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16848);
	RTIV(Current, RTAL);
	Result = inline_F1048_10689 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.seek_set */
EIF_TYPED_VALUE F1048_10690 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_set";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16849);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16849);
	RTIV(Current, RTAL);
	Result = inline_F1048_10690 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.seek_cur */
EIF_TYPED_VALUE F1048_10691 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_cur";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16850);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16850);
	RTIV(Current, RTAL);
	Result = inline_F1048_10691 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.seek_end */
EIF_TYPED_VALUE F1048_10692 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "seek_end";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16851);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16851);
	RTIV(Current, RTAL);
	Result = inline_F1048_10692 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {AUDIO_SND_FILES_EXTERNAL}.sfc_get_log_info */
EIF_TYPED_VALUE F1048_10693 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "sfc_get_log_info";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 1047, Current, 0, 0, 16852);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(1047, Current, 16852);
	RTIV(Current, RTAL);
	Result = inline_F1048_10693 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

void EIF_Minit1048 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
