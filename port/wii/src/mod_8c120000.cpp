//@unit 8c120078
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120078_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120078");
  return (unsigned)sh4_interp(0x8c120078, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120078\n.set FUN_8c120078, FUN_8c120078_def\n");
}
//@unit 8c12007c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12007c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12007c");
  return (unsigned)sh4_interp(0x8c12007c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12007c\n.set FUN_8c12007c, FUN_8c12007c_def\n");
}
//@unit 8c1200f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1200f4_def(le<ushort>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1200f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)ar4[1];
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*ar4)) {
    return *(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(ar4 + 2));
  }
  return 0;
}

__asm__(".globl FUN_8c1200f4\n.set FUN_8c1200f4, FUN_8c1200f4_def\n");

}
//@unit 8c12011a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c12011a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12011a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (ar5 & 0xff) - (uint)*(le<ushort>* )(unsigned)(ar4 + 10);
  if ((-1 < iVar1) && (iVar1 < (int)(uint)*(le<ushort>* )(unsigned)(ar4 + 8))) {
    return *(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(ar4 + 0xc));
  }
  return 0;
}

__asm__(".globl FUN_8c12011a\n.set FUN_8c12011a, FUN_8c12011a_def\n");

}
//@unit 8c120148
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120148_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120148");
  return (unsigned)sh4_interp(0x8c120148, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120148\n.set FUN_8c120148, FUN_8c120148_def\n");
}
//@unit 8c1201e6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1201e6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1201e6");
  return (unsigned)sh4_interp(0x8c1201e6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1201e6\n.set FUN_8c1201e6, FUN_8c1201e6_def\n");
}
//@unit 8c1201ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1201ea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1201ea");
  return (unsigned)sh4_interp(0x8c1201ea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1201ea\n.set FUN_8c1201ea, FUN_8c1201ea_def\n");
}
//@unit 8c12025e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c12025e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12025e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ffa8(ar4,ar5,ar6,ar7));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c12025e\n.set FUN_8c12025e, FUN_8c12025e_def\n");

}
//@unit 8c120284
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120284_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120284");
  return (unsigned)sh4_interp(0x8c120284, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120284\n.set FUN_8c120284, FUN_8c120284_def\n");
}
//@unit 8c120348
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120348_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120348");
  return (unsigned)sh4_interp(0x8c120348, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120348\n.set FUN_8c120348, FUN_8c120348_def\n");
}
//@unit 8c1204c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1204c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1204c4");
  return (unsigned)sh4_interp(0x8c1204c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1204c4\n.set FUN_8c1204c4, FUN_8c1204c4_def\n");
}
//@unit 8c12050a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12050a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12050a");
  return (unsigned)sh4_interp(0x8c12050a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12050a\n.set FUN_8c12050a, FUN_8c12050a_def\n");
}
//@unit 8c120550
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120550_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120550");
  return (unsigned)sh4_interp(0x8c120550, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120550\n.set FUN_8c120550, FUN_8c120550_def\n");
}
//@unit 8c120580
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120580_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120580");
  return (unsigned)sh4_interp(0x8c120580, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120580\n.set FUN_8c120580, FUN_8c120580_def\n");
}
//@unit 8c120668
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120668_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120668");
  return (unsigned)sh4_interp(0x8c120668, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120668\n.set FUN_8c120668, FUN_8c120668_def\n");
}
//@unit 8c1206ba
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1206ba_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1206ba");
  return (unsigned)sh4_interp(0x8c1206ba, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1206ba\n.set FUN_8c1206ba, FUN_8c1206ba_def\n");
}
//@unit 8c1206cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1206cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1206cc");
  return (unsigned)sh4_interp(0x8c1206cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1206cc\n.set FUN_8c1206cc, FUN_8c1206cc_def\n");
}
//@unit 8c12071a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12071a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12071a");
  return (unsigned)sh4_interp(0x8c12071a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12071a\n.set FUN_8c12071a, FUN_8c12071a_def\n");
}
//@unit 8c12072a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12072a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12072a");
  return (unsigned)sh4_interp(0x8c12072a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12072a\n.set FUN_8c12072a, FUN_8c12072a_def\n");
}
//@unit 8c120798
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c120798_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c120798");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1206ba(ar4,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c1206b6));
  if ((uVar2 & 0xff) != 0) {
    return 1;
  }
  if (((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x18)) != (&(*(undefined1 *)(unsigned)0x8c1206b6))) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x24) = *(le<undefined4>* )(unsigned)(ar4 + 0x18);
    *(le<unsigned>* )(unsigned)(ar4 + 0x18) = puVar1;
  }
  return 0;
}

__asm__(".globl FUN_8c120798\n.set FUN_8c120798, FUN_8c120798_def\n");

}
//@unit 8c1207c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1207c6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1207c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12071a(ar4,ar5,ar6,ar7));
  if ((uVar1 & 0xff) != 0) {
    return 1;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
  return 0;
}

__asm__(".globl FUN_8c1207c6\n.set FUN_8c1207c6, FUN_8c1207c6_def\n");

}
//@unit 8c1207e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1207e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1207e8");
  return (unsigned)sh4_interp(0x8c1207e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1207e8\n.set FUN_8c1207e8, FUN_8c1207e8_def\n");
}
//@unit 8c1207f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1207f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1207f0");
  return (unsigned)sh4_interp(0x8c1207f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1207f0\n.set FUN_8c1207f0, FUN_8c1207f0_def\n");
}
//@unit 8c120890
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120890_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120890");
  return (unsigned)sh4_interp(0x8c120890, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120890\n.set FUN_8c120890, FUN_8c120890_def\n");
}
//@unit 8c1208fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1208fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1208fc");
  return (unsigned)sh4_interp(0x8c1208fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1208fc\n.set FUN_8c1208fc, FUN_8c1208fc_def\n");
}
//@unit 8c120948
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120948_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120948");
  return (unsigned)sh4_interp(0x8c120948, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120948\n.set FUN_8c120948, FUN_8c120948_def\n");
}
//@unit 8c12095c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12095c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12095c");
  return (unsigned)sh4_interp(0x8c12095c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12095c\n.set FUN_8c12095c, FUN_8c12095c_def\n");
}
//@unit 8c1209be
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1209be_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1209be");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined1 *puVar1;
  
  if (ar5 < *ar4 + -1) {
    do {
      puVar1 = (undefined1 *)(unsigned)((int)ar4 + ar5 * 2 + 8);
      ar5 = ar5 + 1;
      *puVar1 = puVar1[2];
      in_r0 = (int)(char)puVar1[3];
      puVar1[1] = puVar1[3];
    } while (ar5 < *ar4 + -1);
  }
  *ar4 = *ar4 + -1;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1209be\n.set FUN_8c1209be, FUN_8c1209be_def\n");

}
//@unit 8c1209ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1209ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1209ec");
  return (unsigned)sh4_interp(0x8c1209ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1209ec\n.set FUN_8c1209ec, FUN_8c1209ec_def\n");
}
//@unit 8c120b1a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c120b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c120b1a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1113d0(ar5,(int)0xf8,ar4,ar6));
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl FUN_8c120b1a\n.set FUN_8c120b1a, FUN_8c120b1a_def\n");

}
//@unit 8c120b48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120b48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120b48");
  return (unsigned)sh4_interp(0x8c120b48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120b48\n.set FUN_8c120b48, FUN_8c120b48_def\n");
}
//@unit 8c120c7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120c7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120c7c");
  return (unsigned)sh4_interp(0x8c120c7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120c7c\n.set FUN_8c120c7c, FUN_8c120c7c_def\n");
}
//@unit 8c120e12
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c120e12_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c120e12");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<short>* psVar3;
  le<ushort>* puVar4;
  int iVar5;
  le<ushort>* puVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  le<int>* piVar12;
  
  piVar12 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x284 + ar4));
  uVar11 = (uint)*(le<ushort>* )(unsigned)(0x284 + 4 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(0x108 + ar4) + 8))))(*(le<int>* )(unsigned)(0x108 + ar4),ar5,ar6,ar7));
  (*(le<ushort>* )(fr0_ - 0x28)) = 0;
  iVar2 = *(le<int>* )(unsigned)(0x2b0 + ar4);
  puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + (ar6 * 3 + ar5) * 4));
  for (; piVar12 != (le<int>* )(unsigned)0x0; piVar12 = (le<int>* )(unsigned)piVar12[4]) {
    iVar5 = *piVar12;
    uVar10 = 0;
    iVar7 = 0;
    iVar2 = piVar12[2];
    iVar8 = *puVar4 - 1;
    pbVar9 = (byte *)(unsigned)(*(le<int>* )(unsigned)(0x118 + ar4 + ar5 * 4) + (uVar1 & 0xffff) * iVar8 +
                     (uint)(*(le<ushort>* )(fr0_ - 0x28)));
    puVar6 = puVar4;
    if (uVar11 != 0) {
      do {
        puVar6 = puVar6 + 1;
        if ((int)(uint)*puVar6 <= iVar8) {
          do {
            iVar8 = iVar8 + -1;
            psVar3 = (le<short>* )(unsigned)(*pbVar9 * uVar11 * 2 + iVar7 + iVar5);
            *psVar3 = *psVar3 + 0x32;
            *(le<short>* )(unsigned)(iVar2 + iVar7) = *(le<short>* )(unsigned)(iVar2 + iVar7) + 0x32;
            pbVar9 = pbVar9 + -(uVar1 & 0xffff);
          } while ((int)(uint)*puVar6 <= iVar8);
        }
        uVar10 = uVar10 + 1;
        iVar7 = iVar7 + 2;
      } while (uVar10 < uVar11);
    }
    iVar2 = (short)(*(le<ushort>* )(fr0_ - 0x28)) + 1;
    (*(le<ushort>* )(fr0_ - 0x28)) = (ushort)iVar2;
  }
  return iVar2;
}

__asm__(".globl FUN_8c120e12\n.set FUN_8c120e12, FUN_8c120e12_def\n");

}
//@unit 8c120f04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c120f04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c120f04");
  return (unsigned)sh4_interp(0x8c120f04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c120f04\n.set FUN_8c120f04, FUN_8c120f04_def\n");
}
//@unit 8c121124
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121124_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121124");
  return (unsigned)sh4_interp(0x8c121124, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121124\n.set FUN_8c121124, FUN_8c121124_def\n");
}
//@unit 8c12112c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12112c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12112c");
  return (unsigned)sh4_interp(0x8c12112c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12112c\n.set FUN_8c12112c, FUN_8c12112c_def\n");
}
//@unit 8c1211ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1211ac_def(byte *ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1211ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  uVar1 = 0;
  if (ar5 != 0) {
    do {
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + (uint)*ar4 * 4);
      ar4 = ar4 + ar6;
    } while (uVar1 < ar5);
  }
  return iVar2;
}

__asm__(".globl FUN_8c1211ac\n.set FUN_8c1211ac, FUN_8c1211ac_def\n");

}
//@unit 8c1211f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * FUN_8c1211f0_def(le<int>* ar4,byte *ar5,int ar6,le<ushort>* ar7)

{
  TRACE_ENTER("FUN_8c1211f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  ushort uVar2;
  undefined *in_r0 = (undefined *)(unsigned long)vin0;
  uint uVar3;
  le<int>* piVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  iVar5 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1293e0));
  uVar3 = 0;
  if (s4 != 0) {
    do {
      bVar1 = *ar5;
      ar5 = ar5 + ar6;
      uVar7 = (uint)bVar1;
      iVar5 = iVar5 + uVar7 * -2;
      uVar6 = 0;
      piVar4 = ar4;
      if (s0 != 0) {
        do {
          in_r0 = (&(*(undefined1 *)(unsigned)0x8c1293e4));
          uVar2 = *ar7;
          ar7 = ar7 + 1;
          uVar6 = uVar6 + 1;
          *piVar4 = *piVar4 + *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) +
                                      ((int)*(le<short>* )(unsigned)((uint)uVar2 * 2 + iVar5) + uVar7) * 4);
          piVar4 = piVar4 + 1;
        } while (uVar6 < s0);
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + uVar7 * 2;
    } while (uVar3 < s4);
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1211f0\n.set FUN_8c1211f0, FUN_8c1211f0_def\n");

}
//@unit 8c121260
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c121260_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c121260");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = ar7 + 1U >> 1;
  iVar3 = 0;
  if (ar5 == 0) {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + ((uint)*ar4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  else {
    uVar1 = 0;
    if (ar6 != 0) {
      do {
        uVar1 = uVar1 + 1;
        iVar3 = iVar3 + *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1293e4)) + ((uint)*ar4 << 4 & (int)0xf0) * 4);
        ar4 = ar4 + uVar2;
      } while (uVar1 < ar6);
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c121260\n.set FUN_8c121260, FUN_8c121260_def\n");

}
//@unit 8c1212d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c1212d4_def(le<int>* ar4,byte *ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1212d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<ushort>*  s0 = (le<ushort>* )(unsigned long)*(le<unsigned>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);
  uint s8 = *(le<uint>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  le<ushort>* puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c1293e4));
  uVar5 = ar7 + 1U >> 1;
  uVar6 = (uint)0xf0;
  iVar8 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1293e0));
  if (ar6 == 0) {
    (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = bVar1 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(ar4));
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(le<short>* )(unsigned)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + *(le<int>* )(unsigned)(puVar2 + in_r0);
            s0 = puVar3;
            (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + 1));
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<int>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1)));
      } while (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) < s8);
    }
  }
  else {
    (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
    if (s8 != 0) {
      do {
        bVar1 = *ar5;
        ar5 = ar5 + uVar5;
        uVar4 = (uint)bVar1 << 4 & uVar6;
        iVar8 = iVar8 + uVar4 * -2;
        uVar7 = 0;
        (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(ar4));
        if (s4 != 0) {
          do {
            uVar7 = uVar7 + 1;
            puVar3 = s0 + 1;
            in_r0 = ((int)*(le<short>* )(unsigned)((uint)*s0 * 2 + iVar8) + uVar4) * 4;
            *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + *(le<int>* )(unsigned)(puVar2 + in_r0);
            s0 = puVar3;
            (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) + 1));
          } while (uVar7 < s4);
        }
        iVar8 = iVar8 + uVar4 * 2;
        (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)((le<int>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) + 1)));
      } while (((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) < s8);
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c1212d4\n.set FUN_8c1212d4, FUN_8c1212d4_def\n");

}
//@unit 8c1213d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1213d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1213d0");
  return (unsigned)sh4_interp(0x8c1213d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1213d0\n.set FUN_8c1213d0, FUN_8c1213d0_def\n");
}
//@unit 8c121690
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121690_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121690");
  return (unsigned)sh4_interp(0x8c121690, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121690\n.set FUN_8c121690, FUN_8c121690_def\n");
}
//@unit 8c12169e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12169e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12169e");
  return (unsigned)sh4_interp(0x8c12169e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12169e\n.set FUN_8c12169e, FUN_8c12169e_def\n");
}
//@unit 8c121710
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121710_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121710");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x30) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x34) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x3c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x45) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl FUN_8c121710\n.set FUN_8c121710, FUN_8c121710_def\n");

}
//@unit 8c12172e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12172e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12172e");
  return (unsigned)sh4_interp(0x8c12172e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12172e\n.set FUN_8c12172e, FUN_8c12172e_def\n");
}
//@unit 8c121736
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121736_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121736");
  return (unsigned)sh4_interp(0x8c121736, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121736\n.set FUN_8c121736, FUN_8c121736_def\n");
}
//@unit 8c12182e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12182e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12182e");
  return (unsigned)sh4_interp(0x8c12182e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12182e\n.set FUN_8c12182e, FUN_8c12182e_def\n");
}
//@unit 8c121896
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121896_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121896");
  return (unsigned)sh4_interp(0x8c121896, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121896\n.set FUN_8c121896, FUN_8c121896_def\n");
}
//@unit 8c1219f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1219f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1219f4");
  return (unsigned)sh4_interp(0x8c1219f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1219f4\n.set FUN_8c1219f4, FUN_8c1219f4_def\n");
}
//@unit 8c121b40
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121b40_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121b40");
  return (unsigned)sh4_interp(0x8c121b40, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121b40\n.set FUN_8c121b40, FUN_8c121b40_def\n");
}
//@unit 8c121c50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121c50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121c50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c121896)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c121b38))); unsigned long t2_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1219f2))); unsigned long t3_ = (unsigned long)(0x68); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,2,0); });
  return uVar1;
}

__asm__(".globl FUN_8c121c50\n.set FUN_8c121c50, FUN_8c121c50_def\n");

}
//@unit 8c121cc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121cc0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121cc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar5 == 1) {
    if ((uint)*(le<ushort>* )(unsigned)(0x244 + ar4) == *(le<int>* )(unsigned)(0x244 + -4 + ar4) - 1U) {
      uVar1 = 0x16;
    }
    else {
      uVar1 = 10;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,uVar1,0,0));
  }
  else {
    if (ar5 == 2) {
      uVar1 = 0xc;
    }
    else {
      if (ar5 != 3) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,3,ar6,ar7));
        return uVar1;
      }
      uVar1 = 0xb;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,uVar1,0,0));
  }
  return uVar1;
}

__asm__(".globl FUN_8c121cc0\n.set FUN_8c121cc0, FUN_8c121cc0_def\n");

}
//@unit 8c121d36
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121d36_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121d36");
  return (unsigned)sh4_interp(0x8c121d36, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121d36\n.set FUN_8c121d36, FUN_8c121d36_def\n");
}
//@unit 8c121d3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121d3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121d3c");
  return (unsigned)sh4_interp(0x8c121d3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121d3c\n.set FUN_8c121d3c, FUN_8c121d3c_def\n");
}
//@unit 8c121d8a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121d8a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121d8a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  
  *(le<undefined4>* )(unsigned)(in_r0 + ar4) = ar5;
  *(le<undefined4>* )(unsigned)(in_r0 + 4 + ar4) = ar5;
  if ((*(char *)(unsigned)(in_r0 + -4 + ar4) != '\0') &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c122060(ar4,ar5,ar6,ar7)), (uVar1 & 0xff) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c121d8a\n.set FUN_8c121d8a, FUN_8c121d8a_def\n");

}
//@unit 8c121dc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121dc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c121dc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(le<int>* )(unsigned)(0xfc + ar4);
  iVar1 = (int)0x244;
  iVar3 = (uint)*(le<ushort>* )(unsigned)(0x244 + ar4) * 4;
  iVar4 = (int)0xf4;
  *(le<undefined4>* )(unsigned)(0x124 + ar4 + iVar3) = *(le<undefined4>* )(unsigned)(0x118 + ar4 + iVar3);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar2 + 0x18))))
            (*(le<undefined4>* )(unsigned)((uint)*(le<ushort>* )(unsigned)(iVar1 + ar4) * 8 + 0x268 + ar4 + 4),
             iVar4 + ar4,ar6,ar7));
  iVar1 = (int)0x148;
  *(le<undefined4>* )(unsigned)((uint)*(le<ushort>* )(unsigned)(0x244 + ar4) * 8 + 0x268 + ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(iVar1 + ar4) = 0;
  return 0;
}

__asm__(".globl FUN_8c121dc8\n.set FUN_8c121dc8, FUN_8c121dc8_def\n");

}
//@unit 8c121e40
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121e40_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121e40");
  return (unsigned)sh4_interp(0x8c121e40, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121e40\n.set FUN_8c121e40, FUN_8c121e40_def\n");
}
//@unit 8c121ef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c121ef0_def(int ar4,undefined4 ar5,undefined4 ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("FUN_8c121ef0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  
  if (s0 != 2) {
    return 1;
  }
  puVar1 = (le<undefined4>* )(unsigned)(0x24c + ar4);
  *puVar1 = *ar7;
  puVar1[1] = ar7[1];
  puVar1[2] = ar7[2];
  puVar1[3] = ar7[3];
  puVar1[4] = ar7[4];
  puVar1[5] = ar7[5];
  puVar1[6] = ar7[6];
  return 0;
}

__asm__(".globl FUN_8c121ef0\n.set FUN_8c121ef0, FUN_8c121ef0_def\n");

}
//@unit 8c121f38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121f38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121f38");
  return (unsigned)sh4_interp(0x8c121f38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121f38\n.set FUN_8c121f38, FUN_8c121f38_def\n");
}
//@unit 8c121f72
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c121f72_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c121f72");
  return (unsigned)sh4_interp(0x8c121f72, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c121f72\n.set FUN_8c121f72, FUN_8c121f72_def\n");
}
//@unit 8c122060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122060");
  return (unsigned)sh4_interp(0x8c122060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122060\n.set FUN_8c122060, FUN_8c122060_def\n");
}
//@unit 8c122070
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122070_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122070");
  return (unsigned)sh4_interp(0x8c122070, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122070\n.set FUN_8c122070, FUN_8c122070_def\n");
}
//@unit 8c12212e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c12212e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12212e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,0x1f,0,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c12212e\n.set FUN_8c12212e, FUN_8c12212e_def\n");

}
//@unit 8c12215c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12215c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12215c");
  return (unsigned)sh4_interp(0x8c12215c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12215c\n.set FUN_8c12215c, FUN_8c12215c_def\n");
}
//@unit 8c122230
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122230_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122230");
  return (unsigned)sh4_interp(0x8c122230, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122230\n.set FUN_8c122230, FUN_8c122230_def\n");
}
//@unit 8c1222b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1222b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1222b4");
  return (unsigned)sh4_interp(0x8c1222b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1222b4\n.set FUN_8c1222b4, FUN_8c1222b4_def\n");
}
//@unit 8c122312
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122312_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122312");
  return (unsigned)sh4_interp(0x8c122312, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122312\n.set FUN_8c122312, FUN_8c122312_def\n");
}
//@unit 8c122358
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122358_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122358");
  return (unsigned)sh4_interp(0x8c122358, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122358\n.set FUN_8c122358, FUN_8c122358_def\n");
}
//@unit 8c1225fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1225fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1225fc");
  return (unsigned)sh4_interp(0x8c1225fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1225fc\n.set FUN_8c1225fc, FUN_8c1225fc_def\n");
}
//@unit 8c122604
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122604_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122604");
  return (unsigned)sh4_interp(0x8c122604, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122604\n.set FUN_8c122604, FUN_8c122604_def\n");
}
//@unit 8c122630
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122630_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122630");
  return (unsigned)sh4_interp(0x8c122630, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122630\n.set FUN_8c122630, FUN_8c122630_def\n");
}
//@unit 8c122638
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122638_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122638");
  return (unsigned)sh4_interp(0x8c122638, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122638\n.set FUN_8c122638, FUN_8c122638_def\n");
}
//@unit 8c122664
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122664_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122664");
  return (unsigned)sh4_interp(0x8c122664, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122664\n.set FUN_8c122664, FUN_8c122664_def\n");
}
//@unit 8c122e7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c122e7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c122e7c");
  return (unsigned)sh4_interp(0x8c122e7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c122e7c\n.set FUN_8c122e7c, FUN_8c122e7c_def\n");
}
//@unit 8c12356c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c12356c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12356c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (int)0x4d4;
  *(le<undefined2>* )(unsigned)(iVar1 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(iVar1 + 2 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(iVar1 + -0x14 + ar4) = 0;
  return iVar1 + -0x14;
}

__asm__(".globl FUN_8c12356c\n.set FUN_8c12356c, FUN_8c12356c_def\n");

}
//@unit 8c12357c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c12357c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12357c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4,0xc,*(undefined1 *)(unsigned)(ar4 + 4),ar5));
  return uVar1;
}

__asm__(".globl FUN_8c12357c\n.set FUN_8c12357c, FUN_8c12357c_def\n");

}
//@unit 8c123594
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123594_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123594");
  return (unsigned)sh4_interp(0x8c123594, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123594\n.set FUN_8c123594, FUN_8c123594_def\n");
}
//@unit 8c12359a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12359a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12359a");
  return (unsigned)sh4_interp(0x8c12359a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12359a\n.set FUN_8c12359a, FUN_8c12359a_def\n");
}
//@unit 8c1235fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1235fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1235fc");
  return (unsigned)sh4_interp(0x8c1235fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1235fc\n.set FUN_8c1235fc, FUN_8c1235fc_def\n");
}
//@unit 8c123602
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123602_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123602");
  return (unsigned)sh4_interp(0x8c123602, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123602\n.set FUN_8c123602, FUN_8c123602_def\n");
}
//@unit 8c12381c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12381c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12381c");
  return (unsigned)sh4_interp(0x8c12381c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12381c\n.set FUN_8c12381c, FUN_8c12381c_def\n");
}
//@unit 8c123822
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123822_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123822");
  return (unsigned)sh4_interp(0x8c123822, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123822\n.set FUN_8c123822, FUN_8c123822_def\n");
}
//@unit 8c1238a6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1238a6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1238a6");
  return (unsigned)sh4_interp(0x8c1238a6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1238a6\n.set FUN_8c1238a6, FUN_8c1238a6_def\n");
}
//@unit 8c1238ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1238ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1238ac");
  return (unsigned)sh4_interp(0x8c1238ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1238ac\n.set FUN_8c1238ac, FUN_8c1238ac_def\n");
}
//@unit 8c12394c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12394c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12394c");
  return (unsigned)sh4_interp(0x8c12394c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12394c\n.set FUN_8c12394c, FUN_8c12394c_def\n");
}
//@unit 8c123954
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123954_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123954");
  return (unsigned)sh4_interp(0x8c123954, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123954\n.set FUN_8c123954, FUN_8c123954_def\n");
}
//@unit 8c1239f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1239f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1239f0");
  return (unsigned)sh4_interp(0x8c1239f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1239f0\n.set FUN_8c1239f0, FUN_8c1239f0_def\n");
}
//@unit 8c123bac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123bac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123bac");
  return (unsigned)sh4_interp(0x8c123bac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123bac\n.set FUN_8c123bac, FUN_8c123bac_def\n");
}
//@unit 8c123d00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123d00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123d00");
  return (unsigned)sh4_interp(0x8c123d00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123d00\n.set FUN_8c123d00, FUN_8c123d00_def\n");
}
//@unit 8c123e4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123e4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123e4c");
  return (unsigned)sh4_interp(0x8c123e4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123e4c\n.set FUN_8c123e4c, FUN_8c123e4c_def\n");
}
//@unit 8c123e54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123e54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123e54");
  return (unsigned)sh4_interp(0x8c123e54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123e54\n.set FUN_8c123e54, FUN_8c123e54_def\n");
}
//@unit 8c123ea6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123ea6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123ea6");
  return (unsigned)sh4_interp(0x8c123ea6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123ea6\n.set FUN_8c123ea6, FUN_8c123ea6_def\n");
}
//@unit 8c123eae
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c123eae_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c123eae");
  return (unsigned)sh4_interp(0x8c123eae, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c123eae\n.set FUN_8c123eae, FUN_8c123eae_def\n");
}
//@unit 8c1244f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1244f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1244f8");
  return (unsigned)sh4_interp(0x8c1244f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1244f8\n.set FUN_8c1244f8, FUN_8c1244f8_def\n");
}
//@unit 8c12462c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12462c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12462c");
  return (unsigned)sh4_interp(0x8c12462c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12462c\n.set FUN_8c12462c, FUN_8c12462c_def\n");
}
//@unit 8c1247d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1247d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1247d4");
  return (unsigned)sh4_interp(0x8c1247d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1247d4\n.set FUN_8c1247d4, FUN_8c1247d4_def\n");
}
//@unit 8c124b0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124b0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124b0c");
  return (unsigned)sh4_interp(0x8c124b0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124b0c\n.set FUN_8c124b0c, FUN_8c124b0c_def\n");
}
//@unit 8c124ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124ba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124ba0");
  return (unsigned)sh4_interp(0x8c124ba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124ba0\n.set FUN_8c124ba0, FUN_8c124ba0_def\n");
}
//@unit 8c124bd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124bd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124bd0");
  return (unsigned)sh4_interp(0x8c124bd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124bd0\n.set FUN_8c124bd0, FUN_8c124bd0_def\n");
}
//@unit 8c124bd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124bd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124bd8");
  return (unsigned)sh4_interp(0x8c124bd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124bd8\n.set FUN_8c124bd8, FUN_8c124bd8_def\n");
}
//@unit 8c124d10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
float FUN_8c124d10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124d10");
  sh4_interp(0x8c124d10, ar4, ar5, ar6, ar7); return sh4_fpu_fr0();
}
__asm__(".globl FUN_8c124d10\n.set FUN_8c124d10, FUN_8c124d10_def\n");
}
//@unit 8c124e28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124e28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124e28");
  return (unsigned)sh4_interp(0x8c124e28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124e28\n.set FUN_8c124e28, FUN_8c124e28_def\n");
}
//@unit 8c124edc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c124edc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c124edc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar5 & 0xff) == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124bd0(ar4,ar6,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      *(le<unsigned>* )(unsigned)(ar4 + 0x18) = ((void *)(unsigned)0x8c124e28);
    }
    else {
      *(le<unsigned>* )(unsigned)(ar4 + 0x18) = (&(*(undefined1 *)(unsigned)0x8c124e24));
    }
  }
  else {
    if ((ar5 & 0xff) != (int)0xff) {
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c124f54(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c124edc\n.set FUN_8c124edc, FUN_8c124edc_def\n");

}
//@unit 8c124f2a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c124f2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c124f2a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<short>* )(unsigned)(ar5 + 0x34) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((ar4 + 0x18))))(ar4,*(le<undefined4>* )(unsigned)(ar5 + 0x30),ar6,ar7));
    *(le<undefined2>* )(unsigned)(ar5 + 0x34) = 0;
  }
  return 0x34;
}

__asm__(".globl FUN_8c124f2a\n.set FUN_8c124f2a, FUN_8c124f2a_def\n");

}
//@unit 8c124f54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124f54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124f54");
  return (unsigned)sh4_interp(0x8c124f54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124f54\n.set FUN_8c124f54, FUN_8c124f54_def\n");
}
//@unit 8c124f5a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124f5a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124f5a");
  return (unsigned)sh4_interp(0x8c124f5a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124f5a\n.set FUN_8c124f5a, FUN_8c124f5a_def\n");
}
//@unit 8c124faa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c124faa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c124faa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c124e24))); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c124b9c))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c124edc)); unsigned long t3_ = (unsigned long)(0x40); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl FUN_8c124faa\n.set FUN_8c124faa, FUN_8c124faa_def\n");

}
//@unit 8c124fe8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c124fe8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c124fe8");
  return (unsigned)sh4_interp(0x8c124fe8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c124fe8\n.set FUN_8c124fe8, FUN_8c124fe8_def\n");
}
//@unit 8c12516c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c12516c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c12516c");
  return (unsigned)sh4_interp(0x8c12516c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c12516c\n.set FUN_8c12516c, FUN_8c12516c_def\n");
}
//@unit 8c1251e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c1251e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c1251e4");
  return (unsigned)sh4_interp(0x8c1251e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c1251e4\n.set FUN_8c1251e4, FUN_8c1251e4_def\n");
}
//@unit 8c12538e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c12538e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c12538e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(((void *)(unsigned)0x8c124fe8)); unsigned long t1_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1251dc))); unsigned long t2_ = (unsigned long)(((void *)(unsigned)0x8c12516c)); unsigned long t3_ = (unsigned long)(0x48); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 12) = (unsigned)t3_; vsp = (((unsigned long)(fr0_ - 0)) - 16); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c120580))))
                    (ar4,ar5,1,1); });
  return uVar1;
}

__asm__(".globl FUN_8c12538e\n.set FUN_8c12538e, FUN_8c12538e_def\n");

}
