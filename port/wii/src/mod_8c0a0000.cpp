//@unit 8c0a0040
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
int FUN_8c0a0040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a0040");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0a0184(ar4,ar5,ar6,ar7));
    *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + 1;
    (*(le<int>* )(fr0_ - 0x1c)) = *(le<int>* )(unsigned)(ar4 + 0xc);
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13adfc) + (*(le<int>* )(fr0_ - 0x1c)) * 4 + *(le<int>* )(unsigned)(ar4 + 4) * 0xc);
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0xf) || (*(le<int>* )(unsigned)(ar4 + 0xc) == 3)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0a00f8(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl FUN_8c0a0040\n.set FUN_8c0a0040, FUN_8c0a0040_def\n");

}
//@unit 8c0a00f8
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
int FUN_8c0a00f8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a00f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) && (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0278(ar4,ar5,ar6_00,ar7));
  }
  else if ((((iVar1 != 6) && (iVar1 == 10)) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5_00,ar6_00,ar7)),
           iVar1 != 0)) && (iVar1 == 1)) {
    iVar1 = 0x40;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0xe;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0a00f8\n.set FUN_8c0a00f8, FUN_8c0a00f8_def\n");

}
//@unit 8c0a0184
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
undefined * FUN_8c0a0184_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a0184");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0xc;
  if ((iVar2 < 0xd) && (puVar1 = (undefined *)(unsigned)0x5, 4 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0a01a4))[iVar2 + -5];
                    
    switch(iVar2) {
    case 5:
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      puVar1 = (undefined *)(unsigned)0x1e;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x1e;
      break;
    case 8:
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x1e;
      puVar1 = (undefined *)(unsigned)0x9c;
      *(le<int>* )(unsigned)(ar4 + 0x9c) = *(le<int>* )(unsigned)(ar4 + 0x9c) + 1;
      break;
    case 9:
      *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + -1;
      puVar1 = (undefined *)(unsigned)0xf;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0xf;
      break;
    case 0xc:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)(unsigned)0xf;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0xf;
    }
  }
  return puVar1;
}

__asm__(".globl FUN_8c0a0184\n.set FUN_8c0a0184, FUN_8c0a0184_def\n");

}
//@unit 8c0a0224
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0224_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0224");
  return (unsigned)sh4_interp(0x8c0a0224, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0224\n.set FUN_8c0a0224, FUN_8c0a0224_def\n");
}
//@unit 8c0a0278
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0278_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0278");
  return (unsigned)sh4_interp(0x8c0a0278, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0278\n.set FUN_8c0a0278, FUN_8c0a0278_def\n");
}
//@unit 8c0a06c0
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
undefined4 FUN_8c0a06c0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a06c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0xa8,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a06c0\n.set FUN_8c0a06c0, FUN_8c0a06c0_def\n");

}
//@unit 8c0a06f8
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
undefined4 FUN_8c0a06f8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a06f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0xa8,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a06f8\n.set FUN_8c0a06f8, FUN_8c0a06f8_def\n");

}
//@unit 8c0a0730
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0730_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0730");
  return (unsigned)sh4_interp(0x8c0a0730, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0730\n.set FUN_8c0a0730, FUN_8c0a0730_def\n");
}
//@unit 8c0a0818
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
le<undefined4>*  FUN_8c0a0818_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a0818");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12ad14));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x238,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x250,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x260,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a0890(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0a0818\n.set FUN_8c0a0818, FUN_8c0a0818_def\n");

}
//@unit 8c0a0890
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0890_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0890");
  return (unsigned)sh4_interp(0x8c0a0890, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0890\n.set FUN_8c0a0890, FUN_8c0a0890_def\n");
}
//@unit 8c0a0950
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
le<undefined4>*  Class_12ad14_m0_0a0950_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad14_m0_0a0950");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12ad14);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x98,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x94,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x8e,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12ad14_m0_0a0950\n.set Class_12ad14_m0_0a0950, Class_12ad14_m0_0a0950_def\n");

}
//@unit 8c0a09e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12ad14_m1_0a09e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12ad14_m1_0a09e8");
  return (unsigned)sh4_interp(0x8c0a09e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12ad14_m1_0a09e8\n.set Class_12ad14_m1_0a09e8, Class_12ad14_m1_0a09e8_def\n");
}
//@unit 8c0a0c4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0c4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0c4c");
  return (unsigned)sh4_interp(0x8c0a0c4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0c4c\n.set FUN_8c0a0c4c, FUN_8c0a0c4c_def\n");
}
//@unit 8c0a0c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a0c88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a0c88");
  return (unsigned)sh4_interp(0x8c0a0c88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a0c88\n.set FUN_8c0a0c88, FUN_8c0a0c88_def\n");
}
//@unit 8c0a14d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a14d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a14d8");
  return (unsigned)sh4_interp(0x8c0a14d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a14d8\n.set FUN_8c0a14d8, FUN_8c0a14d8_def\n");
}
//@unit 8c0a1828
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a1828_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a1828");
  return (unsigned)sh4_interp(0x8c0a1828, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a1828\n.set FUN_8c0a1828, FUN_8c0a1828_def\n");
}
//@unit 8c0a1cdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a1cdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a1cdc");
  return (unsigned)sh4_interp(0x8c0a1cdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a1cdc\n.set FUN_8c0a1cdc, FUN_8c0a1cdc_def\n");
}
//@unit 8c0a1ec4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CMushroomerBody_AwayFrom_0a1ed0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CMushroomerBody_AwayFrom_0a1ed0");
  return (unsigned)sh4_interp(0x8c0a1ec4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CMushroomerBody_AwayFrom_0a1ed0\n.set s_CMushroomerBody_AwayFrom_0a1ed0, s_CMushroomerBody_AwayFrom_0a1ed0_def\n");
}
//@unit 8c0a23c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a23c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a23c4");
  return (unsigned)sh4_interp(0x8c0a23c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a23c4\n.set FUN_8c0a23c4, FUN_8c0a23c4_def\n");
}
//@unit 8c0a2bf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a2bf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a2bf4");
  return (unsigned)sh4_interp(0x8c0a2bf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a2bf4\n.set FUN_8c0a2bf4, FUN_8c0a2bf4_def\n");
}
//@unit 8c0a3624
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a3624_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a3624");
  return (unsigned)sh4_interp(0x8c0a3624, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a3624\n.set FUN_8c0a3624, FUN_8c0a3624_def\n");
}
//@unit 8c0a37c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a37c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a37c8");
  return (unsigned)sh4_interp(0x8c0a37c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a37c8\n.set FUN_8c0a37c8, FUN_8c0a37c8_def\n");
}
//@unit 8c0a3aac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a3aac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a3aac");
  return (unsigned)sh4_interp(0x8c0a3aac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a3aac\n.set FUN_8c0a3aac, FUN_8c0a3aac_def\n");
}
//@unit 8c0a3d08
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
uint FUN_8c0a3d08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a3d08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  
  uVar3 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c023cd4(ar4 + 0x250,ar6,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f460(((undefined1 *)(fr0_ - 0x1c)),ar7,uVar3,ar7_00));
    ar7_01 = ((undefined1 *)(fr0_ - 0x1c));
    uVar3 = ar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0a1828(ar4,ar5,ar6,ar7_01));
    (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,uVar3,ar7_01));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign(ar4 + 0x250,ar6,uVar3,ar7_01));
    }
    uVar2 = (uint)(iVar1 != 0);
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c031de8(ar4,0,uVar3,ar7_00));
  }
  return uVar2;
}

__asm__(".globl FUN_8c0a3d08\n.set FUN_8c0a3d08, FUN_8c0a3d08_def\n");

}
//@unit 8c0a3dc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a3dc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a3dc0");
  return (unsigned)sh4_interp(0x8c0a3dc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a3dc0\n.set FUN_8c0a3dc0, FUN_8c0a3dc0_def\n");
}
//@unit 8c0a3f4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a3f4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a3f4c");
  return (unsigned)sh4_interp(0x8c0a3f4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a3f4c\n.set FUN_8c0a3f4c, FUN_8c0a3f4c_def\n");
}
//@unit 8c0a427c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12ad14_m3_0a427c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12ad14_m3_0a427c");
  return (unsigned)sh4_interp(0x8c0a427c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12ad14_m3_0a427c\n.set Class_12ad14_m3_0a427c, Class_12ad14_m3_0a427c_def\n");
}
//@unit 8c0a43d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12ad14_m4_0a43d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12ad14_m4_0a43d4");
  return (unsigned)sh4_interp(0x8c0a43d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12ad14_m4_0a43d4\n.set Class_12ad14_m4_0a43d4, Class_12ad14_m4_0a43d4_def\n");
}
//@unit 8c0a4448
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a4448_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a4448");
  return (unsigned)sh4_interp(0x8c0a4448, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a4448\n.set FUN_8c0a4448, FUN_8c0a4448_def\n");
}
//@unit 8c0a4590
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_SPIDERLINE_0a4592_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_SPIDERLINE_0a4592");
  return (unsigned)sh4_interp(0x8c0a4590, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_SPIDERLINE_0a4592\n.set s_GRAPHICS_SPIDERLINE_0a4592, s_GRAPHICS_SPIDERLINE_0a4592_def\n");
}
//@unit 8c0a4694
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
int Class_12aeec_m0_0a4694_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m0_0a4694");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12aeec);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x26fc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b088_m0_0a62cc(ar4 + 0x53c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b0c4_m0_0ab7ac(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12aeec_m0_0a4694\n.set Class_12aeec_m0_0a4694, Class_12aeec_m0_0a4694_def\n");

}
//@unit 8c0a471c
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
undefined4 Class_12aeec_m2_0a471c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m2_0a471c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl Class_12aeec_m2_0a471c\n.set Class_12aeec_m2_0a471c, Class_12aeec_m2_0a471c_def\n");

}
//@unit 8c0a4744
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
undefined4 Class_12aeec_m3_0a4744_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m3_0a4744");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl Class_12aeec_m3_0a4744\n.set Class_12aeec_m3_0a4744, Class_12aeec_m3_0a4744_def\n");

}
//@unit 8c0a476c
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
undefined4 Class_12aeec_m4_0a476c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m4_0a476c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12aeec_m4_0a476c\n.set Class_12aeec_m4_0a476c, Class_12aeec_m4_0a476c_def\n");

}
//@unit 8c0a4784
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
undefined4 Class_12aeec_m5_0a4784_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m5_0a4784");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x14))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12aeec_m5_0a4784\n.set Class_12aeec_m5_0a4784, Class_12aeec_m5_0a4784_def\n");

}
//@unit 8c0a47f0
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
undefined4 Class_12aeec_m6_0a47f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12aeec_m6_0a47f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12aeec_m6_0a47f0\n.set Class_12aeec_m6_0a47f0, Class_12aeec_m6_0a47f0_def\n");

}
//@unit 8c0a481c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a481c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a481c");
  return (unsigned)sh4_interp(0x8c0a481c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a481c\n.set FUN_8c0a481c, FUN_8c0a481c_def\n");
}
//@unit 8c0a4a34
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
undefined4 FUN_8c0a4a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a4a34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c02b5fc(s0,ar4 + 0x21a8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a4a34\n.set FUN_8c0a4a34, FUN_8c0a4a34_def\n");

}
//@unit 8c0a4a5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a4a5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a4a5c");
  return (unsigned)sh4_interp(0x8c0a4a5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a4a5c\n.set FUN_8c0a4a5c, FUN_8c0a4a5c_def\n");
}
//@unit 8c0a4af0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Sp_Home_njd_0a4af0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Sp_Home_njd_0a4af0");
  return (unsigned)sh4_interp(0x8c0a4af0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Sp_Home_njd_0a4af0\n.set s_Sp_Home_njd_0a4af0, s_Sp_Home_njd_0a4af0_def\n");
}
//@unit 8c0a4de8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_MOTHLINE_0a4dea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_MOTHLINE_0a4dea");
  return (unsigned)sh4_interp(0x8c0a4de8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_MOTHLINE_0a4dea\n.set s_GRAPHICS_MOTHLINE_0a4dea, s_GRAPHICS_MOTHLINE_0a4dea_def\n");
}
//@unit 8c0a4f54
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
int Class_12ad50_m0_0a4f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m0_0a4f54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12ad50);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x5cc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x530,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12ad50_m0_0a4f54\n.set Class_12ad50_m0_0a4f54, Class_12ad50_m0_0a4f54_def\n");

}
//@unit 8c0a4fdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12ad50_m2_0a4fdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12ad50_m2_0a4fdc");
  return (unsigned)sh4_interp(0x8c0a4fdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12ad50_m2_0a4fdc\n.set Class_12ad50_m2_0a4fdc, Class_12ad50_m2_0a4fdc_def\n");
}
//@unit 8c0a5308
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
undefined4 Class_12ad50_m6_0a5308_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m6_0a5308");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12ad50_m6_0a5308\n.set Class_12ad50_m6_0a5308, Class_12ad50_m6_0a5308_def\n");

}
//@unit 8c0a5328
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
undefined4
Class_12ad50_m5_0a5328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m5_0a5328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = -0x7d0;
  *(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x4)) + iVar1) = ar4;
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0b7a54((int)&s0 + iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c0294c0(*(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x4)) + iVar1),(int)&s0 + iVar1,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c068818((int)&s0 + iVar1,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl Class_12ad50_m5_0a5328\n.set Class_12ad50_m5_0a5328, Class_12ad50_m5_0a5328_def\n");

}
//@unit 8c0a536c
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
undefined4 Class_12ad50_m4_0a536c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m4_0a536c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0294c0(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12ad50_m4_0a536c\n.set Class_12ad50_m4_0a536c, Class_12ad50_m4_0a536c_def\n");

}
//@unit 8c0a538c
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
undefined4 FUN_8c0a538c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a538c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a538c\n.set FUN_8c0a538c, FUN_8c0a538c_def\n");

}
//@unit 8c0a53a8
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
undefined4 noop_0a53a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0a53a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0a53a8\n.set noop_0a53a8, noop_0a53a8_def\n");

}
//@unit 8c0a53ac
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
undefined4 noop_0a53ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0a53ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0a53ac\n.set noop_0a53ac, noop_0a53ac_def\n");

}
//@unit 8c0a53b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a53b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a53b0");
  return (unsigned)sh4_interp(0x8c0a53b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a53b0\n.set FUN_8c0a53b0, FUN_8c0a53b0_def\n");
}
//@unit 8c0a54dc
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
undefined4 FUN_8c0a54dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a54dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(*(le<int>* )(unsigned)(0x328 + ar4) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(*(le<int>* )(unsigned)(0x328 + ar4) + 0x70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x330 + ar4) + 8) + 0x3c))))
                      (*(le<int>* )(unsigned)(0x330 + ar4),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a54dc\n.set FUN_8c0a54dc, FUN_8c0a54dc_def\n");

}
//@unit 8c0a5538
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
undefined4 FUN_8c0a5538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x3c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a5538\n.set FUN_8c0a5538, FUN_8c0a5538_def\n");

}
//@unit 8c0a5550
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
undefined4 FUN_8c0a5550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5550");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_038c8c(ar4,ar5,ar6,ar7); });
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(ar4 + 0x330) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x330) + 8) + 0x5c))))
                      (*(le<int>* )(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a5550\n.set FUN_8c0a5550, FUN_8c0a5550_def\n");

}
//@unit 8c0a5588
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
undefined4 FUN_8c0a5588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,0xd,0x18,ar7));
  uVar1 = 0;
  if (a6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a5588\n.set FUN_8c0a5588, FUN_8c0a5588_def\n");

}
//@unit 8c0a55d4
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
int FUN_8c0a55d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a55d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(le<undefined4>* )(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c0a55d4\n.set FUN_8c0a55d4, FUN_8c0a55d4_def\n");

}
//@unit 8c0a55e0
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
undefined4 FUN_8c0a55e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a55e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a55e0\n.set FUN_8c0a55e0, FUN_8c0a55e0_def\n");

}
//@unit 8c0a5614
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
undefined4 FUN_8c0a5614_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5614");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a5614\n.set FUN_8c0a5614, FUN_8c0a5614_def\n");

}
//@unit 8c0a5674
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
undefined4 FUN_8c0a5674_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5674");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a5674\n.set FUN_8c0a5674, FUN_8c0a5674_def\n");

}
//@unit 8c0a56cc
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
undefined4 FUN_8c0a56cc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a56cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a56cc\n.set FUN_8c0a56cc, FUN_8c0a56cc_def\n");

}
//@unit 8c0a572c
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
undefined4 FUN_8c0a572c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a572c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0a572c\n.set FUN_8c0a572c, FUN_8c0a572c_def\n");

}
//@unit 8c0a5784
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
undefined4 s_CSpiderEgg_LoadGRReq_0a578a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CSpiderEgg_LoadGRReq_0a578a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(le<int>* )(unsigned)(0x420 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(le<undefined4>* )(unsigned)(0x420 + ar4) = 1;
    }
  }
  else if (*(le<int>* )(unsigned)(0x420 + ar4) == 1) {
    if (*(le<int>* )(unsigned)(0x330 + ar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c13b100)) + 0x14e,
                 (&(*(undefined1 *)(unsigned)0x8c13b100)) + 0x160,0,2));
      *(le<undefined4>* )(unsigned)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xdc + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x330 + ar4) + 8)))))
                        (*(le<int>* )(unsigned)(0x330 + ar4),ar5,0,ar7));
      if (iVar1 == 1) {
        *(le<undefined2>* )(unsigned)(0x41c + ar4) = 0;
        *(le<undefined4>* )(unsigned)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl s_CSpiderEgg_LoadGRReq_0a578a\n.set s_CSpiderEgg_LoadGRReq_0a578a, s_CSpiderEgg_LoadGRReq_0a578a_def\n");

}
//@unit 8c0a5854
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
undefined4 FUN_8c0a5854_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5854");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x330 + ar4) + 8)))))
                      (*(le<int>* )(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a5854\n.set FUN_8c0a5854, FUN_8c0a5854_def\n");

}
//@unit 8c0a58a4
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
undefined4 FUN_8c0a58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a58a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(le<int>* )(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xec + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x330 + ar4) + 8)))))
                      (*(le<int>* )(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0a58a4\n.set FUN_8c0a58a4, FUN_8c0a58a4_def\n");

}
//@unit 8c0a58f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Cpe_Home_nj_0a58f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Cpe_Home_nj_0a58f4");
  return (unsigned)sh4_interp(0x8c0a58f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Cpe_Home_nj_0a58f4\n.set s_Cpe_Home_nj_0a58f4, s_Cpe_Home_nj_0a58f4_def\n");
}
//@unit 8c0a5af4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12aeec_m7_0a5af4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12aeec_m7_0a5af4");
  return (unsigned)sh4_interp(0x8c0a5af4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12aeec_m7_0a5af4\n.set Class_12aeec_m7_0a5af4, Class_12aeec_m7_0a5af4_def\n");
}
//@unit 8c0a5c2c
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
uint FUN_8c0a5c2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a5c2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fc8c(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return (uint)(iVar1 == 1);
}

__asm__(".globl FUN_8c0a5c2c\n.set FUN_8c0a5c2c, FUN_8c0a5c2c_def\n");

}
//@unit 8c0a5c60
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
undefined4 Class_12ad50_m3_0a5c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12ad50_m3_0a5c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12ad50_m3_0a5c60\n.set Class_12ad50_m3_0a5c60, Class_12ad50_m3_0a5c60_def\n");

}
//@unit 8c0a5c88
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
undefined4 ret_const_1_0a5c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0a5c88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0a5c88\n.set ret_const_1_0a5c88, ret_const_1_0a5c88_def\n");

}
//@unit 8c0a5c90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a5c90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a5c90");
  return (unsigned)sh4_interp(0x8c0a5c90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a5c90\n.set FUN_8c0a5c90, FUN_8c0a5c90_def\n");
}
//@unit 8c0a60d4
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
undefined4 FUN_8c0a60d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a60d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285340,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0a60d4\n.set FUN_8c0a60d4, FUN_8c0a60d4_def\n");

}
//@unit 8c0a60f8
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
undefined4 FUN_8c0a60f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a60f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285310,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0a60f8\n.set FUN_8c0a60f8, FUN_8c0a60f8_def\n");

}
//@unit 8c0a611c
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
undefined4 FUN_8c0a611c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a611c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28528c,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0a611c\n.set FUN_8c0a611c, FUN_8c0a611c_def\n");

}
//@unit 8c0a6140
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
undefined4 FUN_8c0a6140_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a6140");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28525c,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0a6140\n.set FUN_8c0a6140, FUN_8c0a6140_def\n");

}
//@unit 8c0a6164
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
le<undefined4>*  FUN_8c0a6164_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a6164");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b088));
  ar7_00 = 0x10;
  ar5_00 = ((void *)(unsigned)0x8c022c4c);
  ar6_00 = ((void *)(unsigned)0x8c022cb0);
  ({ unsigned long t0_ = (unsigned long)(
             0x1f4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            ((int)ar4 + 0x234,((void *)(unsigned)0x8c022c4c),((void *)(unsigned)0x8c022cb0),0x10); });
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2174,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2184,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x21a8,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0a61f8(ar4,0,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl FUN_8c0a6164\n.set FUN_8c0a6164, FUN_8c0a6164_def\n");

}
//@unit 8c0a61f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a61f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a61f8");
  return (unsigned)sh4_interp(0x8c0a61f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a61f8\n.set FUN_8c0a61f8, FUN_8c0a61f8_def\n");
}
//@unit 8c0a62cc
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
le<undefined4>*  Class_12b088_m0_0a62cc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b088_m0_0a62cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b088);
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x86a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x861,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x85d,0xffffffff,ar6,ar7));
    ar7_00 = 500;
    ar6_00 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x8d,((void *)0x8c022cb0),0x10,500); });
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b088_m0_0a62cc\n.set Class_12b088_m0_0a62cc, Class_12b088_m0_0a62cc_def\n");

}
//@unit 8c0a6370
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a6370_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a6370");
  return (unsigned)sh4_interp(0x8c0a6370, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a6370\n.set FUN_8c0a6370, FUN_8c0a6370_def\n");
}
//@unit 8c0a6430
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
int FUN_8c0a6430_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0a6430");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x21b8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x21bc + ar4) = 0;
  iVar1 = 0x21b4;
  *(le<undefined4>* )(unsigned)(0x21b4 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0a6430\n.set FUN_8c0a6430, FUN_8c0a6430_def\n");

}
//@unit 8c0a6468
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
undefined4 Class_12b088_m1_0a6468_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b088_m1_0a6468");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 92; for (int i_ = 0; i_ < 92; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* a5;
  undefined1 *ar6_00;
  undefined4 uVar2;
  
  a5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 92)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  uVar2 = 1;
  if ((*(le<int>* )(unsigned)(ar4 + 0x21a4) == 2) || (*(le<int>* )(unsigned)(ar4 + 0x2198) != 0)) {
    if (*(le<int>* )(unsigned)(ar4 + 0x2198) != 8) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 92)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(uint)ar5[6] + 0x1a8))))((le<int>* )(unsigned)(uint)ar5[6],a5,ar6,ar7));
      if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x124) != 4)) {
        ar7 = *(le<undefined4>* )(unsigned)(ar5[1] + 4);
        ar6 = ar5[6];
        (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0aa70c(ar4,*(le<undefined4>* )(unsigned)(uint)ar5[1],ar6,ar7));
        goto LAB_8c0a64f8;
      }
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a6628(ar4,ar5,ar6,ar7));
    (*(le<undefined4>* )(fr0_ - 0x58)) = uVar2;
  }
  else {
    ar7 = *(le<undefined4>* )(unsigned)(ar5[1] + 4);
    ar6 = ar5[4];
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c0a99c4(ar4,*(le<undefined4>* )(unsigned)(uint)ar5[1],ar6,ar7));
  }
LAB_8c0a64f8:
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,uVar2,ar6,ar7); });
  if (*(le<int>* )(unsigned)(ar4 + 0x178) == 1) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 92)); FUN_8c02f2c0(*ar5,1,ar6,ar7); });
  }
  if ((*(le<int>* )(unsigned)(ar4 + 0x2198) == 0) && (*(le<int>* )(unsigned)(ar4 + 0x2198) != 8)) {
    (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c031ab4(ar4,*(le<undefined4>* )(unsigned)(ar5[1] + 4),ar6,ar7));
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x20)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x6c,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(le<unsigned>* )((((unsigned long)(fr0_ - 92)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 92)) - 8); FUN_8c03f480(*ar5,uVar2,ar6,ar7); });
  ar6_00 = ((undefined1 *)(fr0_ - 0x50));
  (vsp = ((unsigned long)(fr0_ - 92)), FUN_8c03220c(ar4,ar5[1],ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 92)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl Class_12b088_m1_0a6468\n.set Class_12b088_m1_0a6468, Class_12b088_m1_0a6468_def\n");

}
//@unit 8c0a6628
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a6628_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a6628");
  return (unsigned)sh4_interp(0x8c0a6628, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a6628\n.set FUN_8c0a6628, FUN_8c0a6628_def\n");
}
//@unit 8c0a6974
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a6974_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a6974");
  return (unsigned)sh4_interp(0x8c0a6974, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a6974\n.set FUN_8c0a6974, FUN_8c0a6974_def\n");
}
//@unit 8c0a72b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a72b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a72b4");
  return (unsigned)sh4_interp(0x8c0a72b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a72b4\n.set FUN_8c0a72b4, FUN_8c0a72b4_def\n");
}
//@unit 8c0a77c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a77c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a77c8");
  return (unsigned)sh4_interp(0x8c0a77c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a77c8\n.set FUN_8c0a77c8, FUN_8c0a77c8_def\n");
}
//@unit 8c0a8464
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a8464_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a8464");
  return (unsigned)sh4_interp(0x8c0a8464, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a8464\n.set FUN_8c0a8464, FUN_8c0a8464_def\n");
}
//@unit 8c0a861c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a861c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a861c");
  return (unsigned)sh4_interp(0x8c0a861c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a861c\n.set FUN_8c0a861c, FUN_8c0a861c_def\n");
}
//@unit 8c0a8c0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a8c0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a8c0c");
  return (unsigned)sh4_interp(0x8c0a8c0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a8c0c\n.set FUN_8c0a8c0c, FUN_8c0a8c0c_def\n");
}
//@unit 8c0a8f94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a8f94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a8f94");
  return (unsigned)sh4_interp(0x8c0a8f94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a8f94\n.set FUN_8c0a8f94, FUN_8c0a8f94_def\n");
}
//@unit 8c0a9578
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a9578_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a9578");
  return (unsigned)sh4_interp(0x8c0a9578, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a9578\n.set FUN_8c0a9578, FUN_8c0a9578_def\n");
}
//@unit 8c0a98cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a98cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a98cc");
  return (unsigned)sh4_interp(0x8c0a98cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a98cc\n.set FUN_8c0a98cc, FUN_8c0a98cc_def\n");
}
//@unit 8c0a99c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0a99c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0a99c4");
  return (unsigned)sh4_interp(0x8c0a99c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0a99c4\n.set FUN_8c0a99c4, FUN_8c0a99c4_def\n");
}
//@unit 8c0aa11c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0aa11c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0aa11c");
  return (unsigned)sh4_interp(0x8c0aa11c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0aa11c\n.set FUN_8c0aa11c, FUN_8c0aa11c_def\n");
}
//@unit 8c0aa70c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0aa70c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0aa70c");
  return (unsigned)sh4_interp(0x8c0aa70c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0aa70c\n.set FUN_8c0aa70c, FUN_8c0aa70c_def\n");
}
//@unit 8c0aad1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0aad1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0aad1c");
  return (unsigned)sh4_interp(0x8c0aad1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0aad1c\n.set FUN_8c0aad1c, FUN_8c0aad1c_def\n");
}
//@unit 8c0ab0d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ab0d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ab0d8");
  return (unsigned)sh4_interp(0x8c0ab0d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ab0d8\n.set FUN_8c0ab0d8, FUN_8c0ab0d8_def\n");
}
//@unit 8c0ab5c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ab5c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ab5c0");
  return (unsigned)sh4_interp(0x8c0ab5c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ab5c0\n.set FUN_8c0ab5c0, FUN_8c0ab5c0_def\n");
}
//@unit 8c0ab718
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
undefined4 FUN_8c0ab718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ab718");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2858ac,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0ab718\n.set FUN_8c0ab718, FUN_8c0ab718_def\n");

}
//@unit 8c0ab73c
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
undefined4 FUN_8c0ab73c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ab73c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c28587c,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0ab73c\n.set FUN_8c0ab73c, FUN_8c0ab73c_def\n");

}
//@unit 8c0ab760
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
le<undefined4>*  FUN_8c0ab760_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ab760");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b0c4));
  *(le<undefined4>* )(unsigned)(0x9c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa0 + (int)ar4) = 6;
  *(le<undefined4>* )(unsigned)(0xa4 + (int)ar4) = 6;
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = 6;
  return ar4;
}

__asm__(".globl FUN_8c0ab760\n.set FUN_8c0ab760, FUN_8c0ab760_def\n");

}
//@unit 8c0ab7ac
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
le<undefined4>*  Class_12b0c4_m0_0ab7ac_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b0c4_m0_0ab7ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b0c4);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b0c4_m0_0ab7ac\n.set Class_12b0c4_m0_0ab7ac, Class_12b0c4_m0_0ab7ac_def\n");

}
//@unit 8c0ab7f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b0c4_m1_0ab7f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b0c4_m1_0ab7f4");
  return (unsigned)sh4_interp(0x8c0ab7f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b0c4_m1_0ab7f4\n.set Class_12b0c4_m1_0ab7f4, Class_12b0c4_m1_0ab7f4_def\n");
}
//@unit 8c0abc1c
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
undefined1 * FUN_8c0abc1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0abc1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = 0x8c438470;
  *(le<undefined4>* )(unsigned)0x8c438470 = (undefined1)ar5;
  return puVar1;
}

__asm__(".globl FUN_8c0abc1c\n.set FUN_8c0abc1c, FUN_8c0abc1c_def\n");

}
//@unit 8c0abc28
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
undefined4 get_field_48_0abc28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_48_0abc28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x48);
}

__asm__(".globl get_field_48_0abc28\n.set get_field_48_0abc28, get_field_48_0abc28_def\n");

}
//@unit 8c0abc30
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
int FUN_8c0abc30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0abc30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x45);
}

__asm__(".globl FUN_8c0abc30\n.set FUN_8c0abc30, FUN_8c0abc30_def\n");

}
//@unit 8c0abc38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b0c4_m2_0abc38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b0c4_m2_0abc38");
  return (unsigned)sh4_interp(0x8c0abc38, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b0c4_m2_0abc38\n.set Class_12b0c4_m2_0abc38, Class_12b0c4_m2_0abc38_def\n");
}
//@unit 8c0abe7c
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
undefined4 ret_const_0_0abe7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0abe7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0abe7c\n.set ret_const_0_0abe7c, ret_const_0_0abe7c_def\n");

}
//@unit 8c0abe84
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
undefined4 FUN_8c0abe84_def(int ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c0abe84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar5_00;
  le<int>* ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 2) {
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13b2ec) + *(le<int>* )(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac068(ar4,ar5,ar6,ar7));
    ar5_00 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac1f0(ar4,ar5,ar6_00,ar7));
  }
  else if (iVar1 == 1) {
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
  }
  else if (iVar1 == 3) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6_00,ar7));
    if ((iVar2 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x88) == 1)) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),iVar2 + -1,ar6_00,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
    }
  }
  else if ((iVar1 == 4) &&
          (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    iVar2 = *ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(iVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(iVar2,ar5_00,ar6_00,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c0abe84\n.set FUN_8c0abe84, FUN_8c0abe84_def\n");

}
//@unit 8c0abfb0
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
int FUN_8c0abfb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0abfb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0ac124(ar4,ar5,ar6,ar7));
    *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + 1;
    (*(le<int>* )(fr0_ - 0x1c)) = *(le<int>* )(unsigned)(ar4 + 0xc);
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13b2ec) + (*(le<int>* )(fr0_ - 0x1c)) * 4 + *(le<int>* )(unsigned)(ar4 + 4) * 0xc);
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 6) || (*(le<int>* )(unsigned)(ar4 + 0xc) == 3)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0ac068(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl FUN_8c0abfb0\n.set FUN_8c0abfb0, FUN_8c0abfb0_def\n");

}
//@unit 8c0ac068
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
int FUN_8c0ac068_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ac068");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  le<int>* a5;
  undefined4 ar5_00;
  
  a5 = ar5;
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) && (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ac1f0(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 == 4) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *ar5))))(ar5,a5,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0abc1c(ar4_00,0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (iVar1 = 0, *(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
      iVar1 = 0x6c;
      *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ac068\n.set FUN_8c0ac068, FUN_8c0ac068_def\n");

}
//@unit 8c0ac124
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
int FUN_8c0ac124_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ac124");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 3) {
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c099850(*(le<undefined4>* )(unsigned)(ar6 + 0xc),0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                  (*(le<int>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
      }
      iVar1 = 0x88;
      *(le<undefined4>* )(unsigned)(0x88 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ac124\n.set FUN_8c0ac124, FUN_8c0ac124_def\n");

}
//@unit 8c0ac19c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ac19c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ac19c");
  return (unsigned)sh4_interp(0x8c0ac19c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ac19c\n.set FUN_8c0ac19c, FUN_8c0ac19c_def\n");
}
//@unit 8c0ac1f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ac1f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ac1f0");
  return (unsigned)sh4_interp(0x8c0ac1f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ac1f0\n.set FUN_8c0ac1f0, FUN_8c0ac1f0_def\n");
}
//@unit 8c0ac598
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
int FUN_8c0ac598_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ac598");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0ac598\n.set FUN_8c0ac598, FUN_8c0ac598_def\n");

}
//@unit 8c0ac5a8
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
int FUN_8c0ac5a8_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ac5a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = *(char *)(unsigned)(0x98 + ar4);
  *ar5 = cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c0ac5a8\n.set FUN_8c0ac5a8, FUN_8c0ac5a8_def\n");

}
//@unit 8c0ac5b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ac5b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ac5b8");
  return (unsigned)sh4_interp(0x8c0ac5b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ac5b8\n.set FUN_8c0ac5b8, FUN_8c0ac5b8_def\n");
}
//@unit 8c0ac6a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_SQUIDLINE_0ac6a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_SQUIDLINE_0ac6a4");
  return (unsigned)sh4_interp(0x8c0ac6a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_SQUIDLINE_0ac6a4\n.set s_GRAPHICS_SQUIDLINE_0ac6a4, s_GRAPHICS_SQUIDLINE_0ac6a4_def\n");
}
//@unit 8c0aca4c
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
int CAnimal_m0_0aca4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimal_m0_0aca4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12b110);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x9bc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x894,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b2ac_m0_0afbcc(ar4 + 0x53c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12b2e8_m0_0b5a88(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl CAnimal_m0_0aca4c\n.set CAnimal_m0_0aca4c, CAnimal_m0_0aca4c_def\n");

}
//@unit 8c0acaec
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
undefined4 CAnimal_m2_0acaec_def(int ar4,le<int>* ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("CAnimal_m2_0acaec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* a4;
  le<int>* ar5_00;
  le<int>* ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((((char)uVar1 == '\x01') && (*(le<int>* )(unsigned)(0x948 + ar4) == 0)) &&
       (*(le<int>* )(unsigned)(0x94c + ar4) == 0)) &&
      ((*(le<int>* )(unsigned)(0x950 + ar4) == 0 && (*(le<int>* )(unsigned)(0x954 + ar4) == 0)))) &&
     (((*(le<int>* )(unsigned)(0x958 + ar4) == 0 &&
       ((*(le<int>* )(unsigned)(0x95c + ar4) == 0 && (*(le<int>* )(unsigned)(0x960 + ar4) == 0)))) &&
      (*(le<int>* )(unsigned)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad050(ar4,ar5,ar6,ar7_00));
  }
  if ((((*(le<int>* )(unsigned)(0x948 + ar4) != 0) || (*(le<int>* )(unsigned)(0x94c + ar4) != 0)) ||
      (*(le<int>* )(unsigned)(0x950 + ar4) != 0)) ||
     (((*(le<int>* )(unsigned)(0x954 + ar4) != 0 || (*(le<int>* )(unsigned)(0x958 + ar4) != 0)) ||
      ((*(le<int>* )(unsigned)(0x95c + ar4) != 0 ||
       ((*(le<int>* )(unsigned)(0x960 + ar4) != 0 || (*(le<int>* )(unsigned)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x44))))
                        (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
      if (iVar2 < iVar3) {
        if (*(char *)(unsigned)(0x968 + ar4) == '\0') {
          *(undefined1 *)(unsigned)(0x968 + ar4) = 1;
          *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
        }
        ar5_00 = ar7;
        (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00));
        ar6 = ar5;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    a4 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 0x44))))(a4,ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x968 + ar4) == '\x01')) {
      *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 1;
      *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(a4,ar5_00,ar6,ar7_00));
    }
  }
  if (*(le<int>* )(unsigned)(0x77c + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0x170c + ar4) = 1;
  }
  if (*(le<int>* )(unsigned)(0x75c + ar4) == 1) {
    if ((*(le<int>* )(unsigned)(0x88c + ar4) != 0) && (*(le<int>* )(unsigned)(0x890 + ar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb8 + *ar7))))
                (ar7,*(le<undefined4>* )(unsigned)(0x88c + ar4),*(le<undefined4>* )(unsigned)(0x890 + ar4),
                 ar4 + 0x760));
      *(le<undefined4>* )(unsigned)(0x88c + ar4) = 0;
      *(le<undefined4>* )(unsigned)(0x890 + ar4) = 0;
    }
    *(le<undefined4>* )(unsigned)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl CAnimal_m2_0acaec\n.set CAnimal_m2_0acaec, CAnimal_m2_0acaec_def\n");

}
//@unit 8c0acd64
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
undefined4 noop_0acd64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0acd64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0acd64\n.set noop_0acd64, noop_0acd64_def\n");

}
//@unit 8c0acd68
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
undefined4 get_field_328_0acd68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_328_0acd68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x328 + ar4);
}

__asm__(".globl get_field_328_0acd68\n.set get_field_328_0acd68, get_field_328_0acd68_def\n");

}
//@unit 8c0acd74
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
undefined4 CAnimal_m3_0acd74_def(int ar4,le<int>* ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("CAnimal_m3_0acd74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* ar5_00;
  le<int>* ar7_00;
  
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((((((char)uVar1 == '\x01') && (*(le<int>* )(unsigned)(0x948 + ar4) == 0)) &&
       (*(le<int>* )(unsigned)(0x94c + ar4) == 0)) &&
      ((*(le<int>* )(unsigned)(0x950 + ar4) == 0 && (*(le<int>* )(unsigned)(0x954 + ar4) == 0)))) &&
     (((*(le<int>* )(unsigned)(0x958 + ar4) == 0 &&
       ((*(le<int>* )(unsigned)(0x95c + ar4) == 0 && (*(le<int>* )(unsigned)(0x960 + ar4) == 0)))) &&
      (*(le<int>* )(unsigned)(0x964 + ar4) == 0)))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad050(ar4,ar5,ar6,ar7_00));
  }
  if ((((*(le<int>* )(unsigned)(0x948 + ar4) != 0) || (*(le<int>* )(unsigned)(0x94c + ar4) != 0)) ||
      (*(le<int>* )(unsigned)(0x950 + ar4) != 0)) ||
     (((*(le<int>* )(unsigned)(0x954 + ar4) != 0 || (*(le<int>* )(unsigned)(0x958 + ar4) != 0)) ||
      ((*(le<int>* )(unsigned)(0x95c + ar4) != 0 ||
       ((*(le<int>* )(unsigned)(0x960 + ar4) != 0 || (*(le<int>* )(unsigned)(0x964 + ar4) != 0)))))))) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ad0e0(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    if (iVar2 != -1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x44))))
                        (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
      if (iVar2 < iVar3) {
        if (*(char *)(unsigned)(0x968 + ar4) == '\0') {
          *(undefined1 *)(unsigned)(0x968 + ar4) = 1;
          *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 0;
        }
        ar5_00 = ar7;
        (vsp = ((unsigned long)(fr0_ - 0)), s_CSquidLine_0ad244(ar4,ar7,ar5,ar7_00));
        ar6 = ar5;
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_328_0acd68(ar4 + 0x53c,ar5_00,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x44))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5_00,ar6,ar7_00));
    if ((iVar3 + -1 <= iVar2) && (*(char *)(unsigned)(0x968 + ar4) == '\x01')) {
      *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bcc4)) = 1;
      *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x77c + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0x170c + ar4) = 1;
  }
  if (*(le<int>* )(unsigned)(0x75c + ar4) == 1) {
    if ((*(le<int>* )(unsigned)(0x88c + ar4) != 0) && (*(le<int>* )(unsigned)(0x890 + ar4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb8 + *ar7))))
                (ar7,*(le<undefined4>* )(unsigned)(0x88c + ar4),*(le<undefined4>* )(unsigned)(0x890 + ar4),
                 ar4 + 0x760));
      *(le<undefined4>* )(unsigned)(0x88c + ar4) = 0;
      *(le<undefined4>* )(unsigned)(0x890 + ar4) = 0;
    }
    *(le<undefined4>* )(unsigned)(0x75c + ar4) = 0;
  }
  return 1;
}

__asm__(".globl CAnimal_m3_0acd74\n.set CAnimal_m3_0acd74, CAnimal_m3_0acd74_def\n");

}
//@unit 8c0acfe4
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
undefined4 CAnimal_m4_0acfe4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimal_m4_0acfe4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x1c))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimal_m4_0acfe4\n.set CAnimal_m4_0acfe4, CAnimal_m4_0acfe4_def\n");

}
//@unit 8c0ad050
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
undefined4 FUN_8c0ad050_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ad050");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,3,2,ar7));
    *(le<undefined4>* )(unsigned)(0x928 + ar4 + iVar2 * 4) = uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),
                       *(le<undefined4>* )(unsigned)(0x928 + ar4 + iVar2 * 4),0,ar7));
    *(le<undefined4>* )(unsigned)(0x948 + ar4 + iVar2 * 4) = uVar1;
  }
  return 8;
}

__asm__(".globl FUN_8c0ad050\n.set FUN_8c0ad050, FUN_8c0ad050_def\n");

}
//@unit 8c0ad0e0
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
int FUN_8c0ad0e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ad0e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  for (iVar3 = 0; iVar3 < 7; iVar3 = iVar3 + 1) {
    if (*(le<int>* )(unsigned)(0x948 + ar4 + iVar3 * 4) != 0) {
      ar5_00 = *(le<int>* )(unsigned)(0x948 + ar4 + iVar3 * 4);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      if (iVar1 == 1) {
        ar5_00 = ar4 + iVar3 * 4 + 0x948;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
        *(le<undefined4>* )(unsigned)(0x928 + ar4 + iVar3 * 4) = uVar2;
      }
    }
  }
  if (*(le<int>* )(unsigned)(0x964 + ar4) != 0) {
    ar5_00 = *(le<int>* )(unsigned)(0x964 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feef8(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
    if (iVar3 == 1) {
      ar5_00 = ar4 + 0x964;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0feeb0(*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar5_00,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0x944 + ar4) = uVar2;
    }
  }
  iVar3 = *(le<int>* )(unsigned)(0x948 + ar4);
  if (((((iVar3 == 0) && (iVar3 = *(le<int>* )(unsigned)(0x94c + ar4), iVar3 == 0)) &&
       (iVar3 = *(le<int>* )(unsigned)(0x950 + ar4), iVar3 == 0)) &&
      ((iVar3 = *(le<int>* )(unsigned)(0x954 + ar4), iVar3 == 0 &&
       (iVar3 = *(le<int>* )(unsigned)(0x958 + ar4), iVar3 == 0)))) &&
     ((iVar3 = *(le<int>* )(unsigned)(0x95c + ar4), iVar3 == 0 &&
      ((iVar3 = *(le<int>* )(unsigned)(0x960 + ar4), iVar3 == 0 &&
       (iVar3 = *(le<int>* )(unsigned)(0x964 + ar4), iVar3 == 0)))))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7));
    iVar3 = (int)(char)uVar2;
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c0ad0e0\n.set FUN_8c0ad0e0, FUN_8c0ad0e0_def\n");

}
//@unit 8c0ad240
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CSquidLine_0ad244_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CSquidLine_0ad244");
  return (unsigned)sh4_interp(0x8c0ad240, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CSquidLine_0ad244\n.set s_CSquidLine_0ad244, s_CSquidLine_0ad244_def\n");
}
//@unit 8c0ad354
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ad354_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ad354");
  return (unsigned)sh4_interp(0x8c0ad354, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ad354\n.set FUN_8c0ad354, FUN_8c0ad354_def\n");
}
//@unit 8c0ad7ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ad7ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ad7ec");
  return (unsigned)sh4_interp(0x8c0ad7ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ad7ec\n.set FUN_8c0ad7ec, FUN_8c0ad7ec_def\n");
}
//@unit 8c0adc0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0adc0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0adc0c");
  return (unsigned)sh4_interp(0x8c0adc0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0adc0c\n.set FUN_8c0adc0c, FUN_8c0adc0c_def\n");
}
//@unit 8c0add00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0add00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0add00");
  return (unsigned)sh4_interp(0x8c0add00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0add00\n.set FUN_8c0add00, FUN_8c0add00_def\n");
}
//@unit 8c0ade84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m7_0ade84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m7_0ade84");
  return (unsigned)sh4_interp(0x8c0ade84, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m7_0ade84\n.set CAnimal_m7_0ade84, CAnimal_m7_0ade84_def\n");
}
//@unit 8c0ae0b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ae0b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ae0b0");
  return (unsigned)sh4_interp(0x8c0ae0b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ae0b0\n.set FUN_8c0ae0b0, FUN_8c0ae0b0_def\n");
}
//@unit 8c0ae160
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
int FUN_8c0ae160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ae160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x460 + ar4);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ae544))))
                      (ar5,0x2ee0,ar4 + 0x88c,ar4 + 0x890));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ae160\n.set FUN_8c0ae160, FUN_8c0ae160_def\n");

}
//@unit 8c0ae1bc
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
undefined4 s_Squid_FreeGraphicResource_0ae1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Squid_FreeGraphicResource_0ae1c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  if ((*(le<int>* )(unsigned)(0x88c + ar4) != 0) && (*(le<int>* )(unsigned)(0x890 + ar4) != 0)) {
    ar6 = *(le<undefined4>* )(unsigned)(0x890 + ar4);
    uVar2 = 0x2ee0;
    (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_SQUIDLINE_0ae646(ar5,0x2ee0,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x9bc,uVar2,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x38c,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x39f,1,2));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x9bc,uVar2,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl s_Squid_FreeGraphicResource_0ae1c0\n.set s_Squid_FreeGraphicResource_0ae1c0, s_Squid_FreeGraphicResource_0ae1c0_def\n");

}
//@unit 8c0ae270
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
undefined4 FUN_8c0ae270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ae270");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_314_0b58d0(ar4 + 0x53c,ar5,ar6,ar7));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)(0x460 + ar4) = 0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028f60(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0ae270\n.set FUN_8c0ae270, FUN_8c0ae270_def\n");

}
//@unit 8c0ae2b8
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
int FUN_8c0ae2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ae2b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ccc(ar4,ar5,ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x460 + ar4);
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b58dc(ar4 + 0x53c,3,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0ae2b8\n.set FUN_8c0ae2b8, FUN_8c0ae2b8_def\n");

}
//@unit 8c0ae2fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Sq_Bone_Home_njd_0ae2fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Sq_Bone_Home_njd_0ae2fc");
  return (unsigned)sh4_interp(0x8c0ae2fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Sq_Bone_Home_njd_0ae2fc\n.set s_Sq_Bone_Home_njd_0ae2fc, s_Sq_Bone_Home_njd_0ae2fc_def\n");
}
//@unit 8c0ae544
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
int s_GRAPHICS_SQUIDLINE_0ae54a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("s_GRAPHICS_SQUIDLINE_0ae54a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0209fc))))
                    (ar4,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar6));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3bc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020af4))))
                    (ar4,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3dc,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x3fe,
                     *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),*ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x406,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x297,1,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_SQUIDLINE_0ae54a\n.set s_GRAPHICS_SQUIDLINE_0ae54a, s_GRAPHICS_SQUIDLINE_0ae54a_def\n");

}
//@unit 8c0ae640
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
undefined4 s_GRAPHICS_SQUIDLINE_0ae646_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_SQUIDLINE_0ae646");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar4,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4)),ar5));
  ar6_00 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4));
  ar5_00 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b5d8));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(ar4,ar5_00,ar6_00,ar5));
  if (ar6 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256670(ar6,ar5_00,ar6_00,ar5));
  }
  return uVar1;
}

__asm__(".globl s_GRAPHICS_SQUIDLINE_0ae646\n.set s_GRAPHICS_SQUIDLINE_0ae646, s_GRAPHICS_SQUIDLINE_0ae646_def\n");

}
//@unit 8c0ae6a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Nautilus_0ae6a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Nautilus_0ae6a4");
  return (unsigned)sh4_interp(0x8c0ae6a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Nautilus_0ae6a4\n.set s_Nautilus_0ae6a4, s_Nautilus_0ae6a4_def\n");
}
//@unit 8c0ae7a4
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
undefined4 FUN_8c0ae7a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ae7a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0xc;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x19) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x28) = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x2a) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x30) = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(unsigned)(iVar1 * 0xc + ar4 + 0x34) = (char)iVar1;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x35) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 0xc + ar4 + 0x38) = 0;
    *(undefined1 *)(unsigned)(iVar1 * 0xc + ar4 + 0x3c) = 0;
  }
  return 6;
}

__asm__(".globl FUN_8c0ae7a4\n.set FUN_8c0ae7a4, FUN_8c0ae7a4_def\n");

}
//@unit 8c0ae84c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ae84c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ae84c");
  return (unsigned)sh4_interp(0x8c0ae84c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ae84c\n.set FUN_8c0ae84c, FUN_8c0ae84c_def\n");
}
//@unit 8c0af2b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0af2b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0af2b8");
  return (unsigned)sh4_interp(0x8c0af2b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0af2b8\n.set FUN_8c0af2b8, FUN_8c0af2b8_def\n");
}
//@unit 8c0af368
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
int FUN_8c0af368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0af368");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0af368\n.set FUN_8c0af368, FUN_8c0af368_def\n");

}
//@unit 8c0af3c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0af3c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0af3c4");
  return (unsigned)sh4_interp(0x8c0af3c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0af3c4\n.set FUN_8c0af3c4, FUN_8c0af3c4_def\n");
}
//@unit 8c0af978
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
undefined4 FUN_8c0af978_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0af978");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286b1c,((void *)0x8c03a3dc),4,3); });
  return uVar1;
}

__asm__(".globl FUN_8c0af978\n.set FUN_8c0af978, FUN_8c0af978_def\n");

}
//@unit 8c0af99c
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
undefined4 FUN_8c0af99c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0af99c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286b04,((void *)0x8c0247b0),4,3); });
  return uVar1;
}

__asm__(".globl FUN_8c0af99c\n.set FUN_8c0af99c, FUN_8c0af99c_def\n");

}
//@unit 8c0af9c0
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
undefined4 FUN_8c0af9c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0af9c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286a94,((void *)0x8c03a3dc),4,0x19); });
  return uVar1;
}

__asm__(".globl FUN_8c0af9c0\n.set FUN_8c0af9c0, FUN_8c0af9c0_def\n");

}
//@unit 8c0af9e4
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
undefined4 FUN_8c0af9e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0af9e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c286a24,((void *)0x8c0247b0),4,0x19); });
  return uVar1;
}

__asm__(".globl FUN_8c0af9e4\n.set FUN_8c0af9e4, FUN_8c0af9e4_def\n");

}
//@unit 8c0afa08
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
undefined4 FUN_8c0afa08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0afa08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285c78,((void *)0x8c0af368),0x4c,0x28); });
  return uVar1;
}

__asm__(".globl FUN_8c0afa08\n.set FUN_8c0afa08, FUN_8c0afa08_def\n");

}
//@unit 8c0afa2c
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
undefined4 FUN_8c0afa2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0afa2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c285974,((void *)0x8c0af368),0x4c,10); });
  return uVar1;
}

__asm__(".globl FUN_8c0afa2c\n.set FUN_8c0afa2c, FUN_8c0afa2c_def\n");

}
//@unit 8c0afa50
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
le<undefined4>*  FUN_8c0afa50_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0afa50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b2ac));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x224,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x234,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c033954((int)ar4 + 0x248,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2e4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2f4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x304,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x338,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0afb1c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0afa50\n.set FUN_8c0afa50, FUN_8c0afa50_def\n");

}
//@unit 8c0afb1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0afb1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0afb1c");
  return (unsigned)sh4_interp(0x8c0afb1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0afb1c\n.set FUN_8c0afb1c, FUN_8c0afb1c_def\n");
}
//@unit 8c0afbcc
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
le<undefined4>*  Class_12b2ac_m0_0afbcc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b2ac_m0_0afbcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b2ac);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xce,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xc1,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xbd,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb9,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb5,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_033978(ar4 + 0x92,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x8d,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b2ac_m0_0afbcc\n.set Class_12b2ac_m0_0afbcc, Class_12b2ac_m0_0afbcc_def\n");

}
//@unit 8c0afcc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b2ac_m6_0afcc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b2ac_m6_0afcc0");
  return (unsigned)sh4_interp(0x8c0afcc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b2ac_m6_0afcc0\n.set Class_12b2ac_m6_0afcc0, Class_12b2ac_m6_0afcc0_def\n");
}
//@unit 8c0afddc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b2ac_m5_0afddc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b2ac_m5_0afddc");
  return (unsigned)sh4_interp(0x8c0afddc, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b2ac_m5_0afddc\n.set Class_12b2ac_m5_0afddc, Class_12b2ac_m5_0afddc_def\n");
}
//@unit 8c0aff3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b2ac_m1_0aff3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b2ac_m1_0aff3c");
  return (unsigned)sh4_interp(0x8c0aff3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b2ac_m1_0aff3c\n.set Class_12b2ac_m1_0aff3c, Class_12b2ac_m1_0aff3c_def\n");
}
