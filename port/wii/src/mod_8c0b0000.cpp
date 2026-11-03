//@unit 8c0b0784
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b0784_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b0784");
  return (unsigned)sh4_interp(0x8c0b0784, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b0784\n.set FUN_8c0b0784, FUN_8c0b0784_def\n");
}
//@unit 8c0b0ad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b0ad4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b0ad4");
  return (unsigned)sh4_interp(0x8c0b0ad4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b0ad4\n.set FUN_8c0b0ad4, FUN_8c0b0ad4_def\n");
}
//@unit 8c0b0eec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b0eec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b0eec");
  return (unsigned)sh4_interp(0x8c0b0eec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b0eec\n.set FUN_8c0b0eec, FUN_8c0b0eec_def\n");
}
//@unit 8c0b1ac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b1ac0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b1ac0");
  return (unsigned)sh4_interp(0x8c0b1ac0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b1ac0\n.set FUN_8c0b1ac0, FUN_8c0b1ac0_def\n");
}
//@unit 8c0b3184
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b3184_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b3184");
  return (unsigned)sh4_interp(0x8c0b3184, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b3184\n.set FUN_8c0b3184, FUN_8c0b3184_def\n");
}
//@unit 8c0b3604
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b3604_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b3604");
  return (unsigned)sh4_interp(0x8c0b3604, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b3604\n.set FUN_8c0b3604, FUN_8c0b3604_def\n");
}
//@unit 8c0b4ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b4ba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b4ba0");
  return (unsigned)sh4_interp(0x8c0b4ba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b4ba0\n.set FUN_8c0b4ba0, FUN_8c0b4ba0_def\n");
}
//@unit 8c0b4c7c
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
undefined4 FUN_8c0b4c7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b4c7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(le<int>* )(unsigned)(0x12c + ar4) == 0) {
    ar5_00 = 5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034148(ar4 + 0xb0,5,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    *(le<int>* )(unsigned)(0x12c + ar4) = *(le<int>* )(unsigned)(0x12c + ar4) + 1;
  }
  else if ((*(le<int>* )(unsigned)(0x12c + ar4) == 1) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                             (ar4 + 0xb0,ar5,ar6,ar7)), iVar1 == 1)) {
    uVar2 = 0;
    *(le<undefined4>* )(unsigned)(0x12c + ar4) = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b4c7c\n.set FUN_8c0b4c7c, FUN_8c0b4c7c_def\n");

}
//@unit 8c0b4d14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b4d14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b4d14");
  return (unsigned)sh4_interp(0x8c0b4d14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b4d14\n.set FUN_8c0b4d14, FUN_8c0b4d14_def\n");
}
//@unit 8c0b5098
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b5098_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b5098");
  return (unsigned)sh4_interp(0x8c0b5098, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b5098\n.set FUN_8c0b5098, FUN_8c0b5098_def\n");
}
//@unit 8c0b5344
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b5344_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b5344");
  return (unsigned)sh4_interp(0x8c0b5344, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b5344\n.set FUN_8c0b5344, FUN_8c0b5344_def\n");
}
//@unit 8c0b54f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b54f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b54f4");
  return (unsigned)sh4_interp(0x8c0b54f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b54f4\n.set FUN_8c0b54f4, FUN_8c0b54f4_def\n");
}
//@unit 8c0b58d0
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
undefined4 get_field_314_0b58d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_314_0b58d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x314 + ar4);
}

__asm__(".globl get_field_314_0b58d0\n.set get_field_314_0b58d0, get_field_314_0b58d0_def\n");

}
//@unit 8c0b58dc
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
int FUN_8c0b58dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b58dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x314;
  *(le<undefined4>* )(unsigned)(0x314 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0b58dc\n.set FUN_8c0b58dc, FUN_8c0b58dc_def\n");

}
//@unit 8c0b58e8
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
int Class_12b2ac_m7_0b58e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b2ac_m7_0b58e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031684(ar4,ar5,ar6,ar7));
  iVar1 = 0x348;
  *(le<undefined4>* )(unsigned)(0x348 + ar4) = 0;
  return iVar1;
}

__asm__(".globl Class_12b2ac_m7_0b58e8\n.set Class_12b2ac_m7_0b58e8, Class_12b2ac_m7_0b58e8_def\n");

}
//@unit 8c0b590c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b590c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b590c");
  return (unsigned)sh4_interp(0x8c0b590c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b590c\n.set FUN_8c0b590c, FUN_8c0b590c_def\n");
}
//@unit 8c0b5a30
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
le<undefined4>*  FUN_8c0b5a30_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b5a30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f064(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b2e8));
  *(undefined1 *)(unsigned)(0x9c + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0xa4 + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0x9d + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa0 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0b5a30\n.set FUN_8c0b5a30, FUN_8c0b5a30_def\n");

}
//@unit 8c0b5a88
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
le<undefined4>*  Class_12b2e8_m0_0b5a88_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b2e8_m0_0b5a88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b2e8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), Class_129c70_m0_02f1b8(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b2e8_m0_0b5a88\n.set Class_12b2e8_m0_0b5a88, Class_12b2e8_m0_0b5a88_def\n");

}
//@unit 8c0b5ad0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b2e8_m1_0b5ad0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b2e8_m1_0b5ad0");
  return (unsigned)sh4_interp(0x8c0b5ad0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b2e8_m1_0b5ad0\n.set Class_12b2e8_m1_0b5ad0, Class_12b2e8_m1_0b5ad0_def\n");
}
//@unit 8c0b6028
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b2e8_m2_0b6028_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b2e8_m2_0b6028");
  return (unsigned)sh4_interp(0x8c0b6028, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b2e8_m2_0b6028\n.set Class_12b2e8_m2_0b6028, Class_12b2e8_m2_0b6028_def\n");
}
//@unit 8c0b61bc
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
undefined4 FUN_8c0b61bc_def(int ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c0b61bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  le<int>* ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 2) {
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13bb4c) + *(le<int>* )(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b63e0(ar4,ar5,ar6,ar7));
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fdd8(ar4,ar5,ar6_00,ar7));
    }
    else if (iVar1 == 2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(*ar6,uVar3,ar6_00,ar7));
      }
    }
    else if (iVar1 == 4) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        if (*(le<int>* )(unsigned)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar6[6],7,0x1b,ar7));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
          if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                      (*(le<int>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
          }
          *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}

__asm__(".globl FUN_8c0b61bc\n.set FUN_8c0b61bc, FUN_8c0b61bc_def\n");

}
//@unit 8c0b6328
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
int FUN_8c0b6328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x3c) == 0) {
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b6440(ar4,ar5,ar6,ar7));
    *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + 1;
    (*(le<int>* )(fr0_ - 0x1c)) = *(le<int>* )(unsigned)(ar4 + 0xc);
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13bb4c) + (*(le<int>* )(fr0_ - 0x1c)) * 4 + *(le<int>* )(unsigned)(ar4 + 4) * 0xc);
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 9) || (*(le<int>* )(unsigned)(ar4 + 0xc) == 3)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,0,ar6_00,ar7); });
      ar6 = ar6_00;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b63e0(ar4,ar5,ar6,ar7));
    }
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x3c);
  if (iVar1 == 2) {
    iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl FUN_8c0b6328\n.set FUN_8c0b6328, FUN_8c0b6328_def\n");

}
//@unit 8c0b63e0
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
int FUN_8c0b63e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b63e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b6604(ar4,ar5,ar6,ar7));
  }
  else if (((iVar1 != 2) && (iVar1 == 4)) && (iVar1 = *(le<int>* )(unsigned)(ar4 + 0x6c), iVar1 == 0)) {
    *(le<int>* )(unsigned)(ar4 + 0xc) = *(le<int>* )(unsigned)(ar4 + 0xc) + -1;
    iVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,2,ar6,ar7); });
  }
  return iVar1;
}

__asm__(".globl FUN_8c0b63e0\n.set FUN_8c0b63e0, FUN_8c0b63e0_def\n");

}
//@unit 8c0b6440
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
undefined * FUN_8c0b6440_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0x7;
  if ((iVar2 < 8) && (puVar1 = (undefined *)(unsigned)0x2, 1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0b6474))[iVar2 + -2];
                    
    switch(iVar2) {
    case 2:
      puVar1 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x8c));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0x8c;
        *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5,ar6,ar7));
      if ((puVar1 == (undefined *)(unsigned)0x1) &&
         (puVar1 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x88)), puVar1 == (undefined *)(unsigned)0x1)) {
        ar6_00 = 0x1b;
        uVar3 = 7;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(*(le<undefined4>* )(unsigned)(ar6 + 0x18),7,0x1b,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
        if (*(char *)(unsigned)(ar4 + 0x9c) == '\b') {
          uVar3 = 1;
          ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(*(le<int>* )(unsigned)(ar6 + 4) + 0xa8,1,ar6_00,ar7); });
        }
        if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                    (*(le<int>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
          *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
        }
        puVar1 = (undefined *)(unsigned)0x88;
        *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
      }
      break;
    case 5:
      puVar1 = (undefined *)(unsigned)0x9d;
      *(char *)(unsigned)(ar4 + 0x9d) = *(char *)(unsigned)(ar4 + 0x9d) + '\x01';
      break;
    case 6:
      puVar1 = (undefined *)(unsigned)0x2;
      if ('\x01' < *(char *)(unsigned)(ar4 + 0x9d)) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      }
      break;
    case 7:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 6;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl FUN_8c0b6440\n.set FUN_8c0b6440, FUN_8c0b6440_def\n");

}
//@unit 8c0b65b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b65b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b65b0");
  return (unsigned)sh4_interp(0x8c0b65b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b65b0\n.set FUN_8c0b65b0, FUN_8c0b65b0_def\n");
}
//@unit 8c0b6604
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b6604_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b6604");
  return (unsigned)sh4_interp(0x8c0b6604, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b6604\n.set FUN_8c0b6604, FUN_8c0b6604_def\n");
}
//@unit 8c0b67cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b67cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b67cc");
  return (unsigned)sh4_interp(0x8c0b67cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b67cc\n.set FUN_8c0b67cc, FUN_8c0b67cc_def\n");
}
//@unit 8c0b6af8
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
int FUN_8c0b6af8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  iVar1 = 0x9c;
  *(char *)(unsigned)(0x9c + ar4) = (char)*(le<undefined4>* )(unsigned)(ar5 + 4);
  return iVar1;
}

__asm__(".globl FUN_8c0b6af8\n.set FUN_8c0b6af8, FUN_8c0b6af8_def\n");

}
//@unit 8c0b6b10
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
int FUN_8c0b6b10_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6b10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  cVar1 = *(char *)(unsigned)(0x9c + ar4);
  *(le<int>* )(unsigned)(ar5 + 4) = (int)cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c0b6b10\n.set FUN_8c0b6b10, FUN_8c0b6b10_def\n");

}
//@unit 8c0b6b2c
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
int FUN_8c0b6b2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6b2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x9c + ar4);
}

__asm__(".globl FUN_8c0b6b2c\n.set FUN_8c0b6b2c, FUN_8c0b6b2c_def\n");

}
//@unit 8c0b6b3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b6b3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b6b3c");
  return (unsigned)sh4_interp(0x8c0b6b3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b6b3c\n.set FUN_8c0b6b3c, FUN_8c0b6b3c_def\n");
}
//@unit 8c0b6bf4
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
undefined4 FUN_8c0b6bf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6bf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f594(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b6bf4\n.set FUN_8c0b6bf4, FUN_8c0b6bf4_def\n");

}
//@unit 8c0b6c10
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
undefined4 FUN_8c0b6c10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6c10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0x8c286ebc;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(uVar1,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b6c10\n.set FUN_8c0b6c10, FUN_8c0b6c10_def\n");

}
//@unit 8c0b6c3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b6c3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b6c3c");
  return (unsigned)sh4_interp(0x8c0b6c3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b6c3c\n.set FUN_8c0b6c3c, FUN_8c0b6c3c_def\n");
}
//@unit 8c0b6e04
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
undefined4 FUN_8c0b6e04_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b6e04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl FUN_8c0b6e04\n.set FUN_8c0b6e04, FUN_8c0b6e04_def\n");

}
//@unit 8c0b6e6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b6e6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b6e6c");
  return (unsigned)sh4_interp(0x8c0b6e6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b6e6c\n.set FUN_8c0b6e6c, FUN_8c0b6e6c_def\n");
}
//@unit 8c0b726c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b726c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b726c");
  return (unsigned)sh4_interp(0x8c0b726c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b726c\n.set FUN_8c0b726c, FUN_8c0b726c_def\n");
}
//@unit 8c0b7454
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
undefined4 FUN_8c0b7454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7454");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined *ar7_00;
  undefined4 uVar4;
  
  uVar2 = ar5;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar4 = 1;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      uVar3 = 0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01f520(0x8c3dd7dc,uVar2,uVar3,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bba0(uVar2,ar4,uVar3,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),uVar3,ar7_00));
        if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b5f8(uVar2,ar4,ar5,ar6)), iVar1 == 1)) {
          uVar4 = 0;
        }
      }
      else {
        ar6_00 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
          if ((iVar1 == 0) &&
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b7b0(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6)), iVar1 == 1)) {
            uVar4 = 0;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,ar4));
        }
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  return uVar4;
}

__asm__(".globl FUN_8c0b7454\n.set FUN_8c0b7454, FUN_8c0b7454_def\n");

}
//@unit 8c0b7628
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
undefined4 FUN_8c0b7628_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7628");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  ar6_00 = ar6;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,ar6_00,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01b5f8(ar4_00,ar4,ar5,ar6));
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b6e04))))
                      (ar4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f,ar6_00,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01b7b0))))
                        (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,ar5,ar6));
      if (iVar1 == 1) {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b7628\n.set FUN_8c0b7628, FUN_8c0b7628_def\n");

}
//@unit 8c0b76d8
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
uint s_SEAMANDC_USR_0b76dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SEAMANDC_USR_0b76dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  uVar3 = 0;
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,puVar2,ar7));
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = ((undefined1 *)(fr0_ - 0x20));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76,puVar2,ar7));
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bba0))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,puVar2,ar7));
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01bc2c))))
                    (ar4_00,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c,((undefined1 *)(fr0_ - 0x20)),ar7));
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}

__asm__(".globl s_SEAMANDC_USR_0b76dc\n.set s_SEAMANDC_USR_0b76dc, s_SEAMANDC_USR_0b76dc_def\n");

}
//@unit 8c0b77a0
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
uint FUN_8c0b77a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b77a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ((le<int>* )(fr0_ - 0x8))[0] = 0;
  (*(le<int>* )(fr0_ - 0xc)) = 0;
  ar6_00 = 0x4208;
  (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7454))))
            ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(ar4,((le<int>* )(fr0_ - 0x8)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(le<int>* )(fr0_ - 0xc)),ar6_00,ar7));
  return (uint)(((le<int>* )(fr0_ - 0x8))[0] == (*(le<int>* )(fr0_ - 0xc)));
}

__asm__(".globl FUN_8c0b77a0\n.set FUN_8c0b77a0, FUN_8c0b77a0_def\n");

}
//@unit 8c0b7804
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
undefined4 FUN_8c0b7804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((le<int>* )(fr0_ - 0xc))[0] = 0;
  (*(le<int>* )(fr0_ - 0x10)) = 0;
  uVar2 = 0x4208;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b7628))))
                    ((&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42,0x8c431a68,0x4208,ar7))
  ;
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(ar4,((le<int>* )(fr0_ - 0xc)),uVar2,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(0x8c431a68 + 0x1e,&(*(le<int>* )(fr0_ - 0x10)),uVar2,ar7));
    if (((le<int>* )(fr0_ - 0xc))[0] == (*(le<int>* )(fr0_ - 0x10))) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b7804\n.set FUN_8c0b7804, FUN_8c0b7804_def\n");

}
//@unit 8c0b787c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b787c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b787c");
  return (unsigned)sh4_interp(0x8c0b787c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b787c\n.set FUN_8c0b787c, FUN_8c0b787c_def\n");
}
//@unit 8c0b7920
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b7920_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b7920");
  return (unsigned)sh4_interp(0x8c0b7920, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b7920\n.set FUN_8c0b7920, FUN_8c0b7920_def\n");
}
//@unit 8c0b79f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b79f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b79f0");
  return (unsigned)sh4_interp(0x8c0b79f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b79f0\n.set FUN_8c0b79f0, FUN_8c0b79f0_def\n");
}
//@unit 8c0b7a54
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
int FUN_8c0b7a54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7a54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1027c0(ar4 + 0xac,ar5,ar6,ar7));
  *(undefined1 *)(unsigned)(0xa0 + ar4) = *(le<undefined4>* )(unsigned)0x8c436548;
  *(le<undefined2>* )(unsigned)(0xa2 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xac + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xae + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb0 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xb2 + ar4) = 0;
  *(undefined1 *)(unsigned)(0xb4 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b936c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0b7a54\n.set FUN_8c0b7a54, FUN_8c0b7a54_def\n");

}
//@unit 8c0b7ad0
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
undefined4 FUN_8c0b7ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7ad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b34(0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xcc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x83,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xd6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x8e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xe0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x99,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xa4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xf4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xaf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0xfe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xba,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x108,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xc5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x112,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xd0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x11c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xdb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x126,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xe6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x130,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xf1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x13a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0xfc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x144,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x107,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x14e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x112,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x158,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x11d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x162,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x128,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x16c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x133,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x176,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x13e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x180,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x149,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x18a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x154,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x194,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x15f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x19e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x16a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x175,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x180,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x18b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x196,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1a1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ac,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1b7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1c2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x1f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1cd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x202,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1d8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x20c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1e3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x216,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1ee,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x220,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x1f9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x22a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x204,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x234,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x20f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x23e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x21a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x248,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x225,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x252,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x230,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x25c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x23b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x266,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x246,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x270,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x251,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x27a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x25c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x284,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x267,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x28e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x272,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x298,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x27d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x288,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x293,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x29e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2c0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2a9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2ca,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2b4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2d4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2bf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2de,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2ca,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2e8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2d5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2f2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2e0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x2fc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2eb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x306,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x2f6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x310,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x301,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x31a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x30c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x324,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x317,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x32e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x322,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x338,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x32d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x342,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x338,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x34c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x343,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x356,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x34e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x360,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x359,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x36a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x364,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x374,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x36f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x37e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x37a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x388,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x385,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x392,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x390,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x39c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x39b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3a6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3a6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3b0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3b1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ba,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3bc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3c4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3c7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ce,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3d2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3d8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3dd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3e2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3e8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3ec,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3f3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x3f6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x3fe,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x400,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x409,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x40a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x414,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x414,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x41f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x41e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x42a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x428,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x435,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x432,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x440,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x43c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x44b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x446,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x456,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x450,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x461,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x464,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x46c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x46e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x477,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x478,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x482,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x482,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x48d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x48c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x498,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x496,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4a3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4a0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4ae,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4aa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4b9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4b4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4c4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4be,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4cf,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4c8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4da,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4d2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4e5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4dc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4f0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4e6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x4fb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4f0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x506,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x4fa,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x511,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x504,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x51c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x50e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x527,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x518,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x532,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x522,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x53d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x52c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x548,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x536,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x553,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x540,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x55e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x54a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x569,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x554,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x574,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x55e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x57f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x568,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x58a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x572,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x595,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x57c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5a0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x586,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ab,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x590,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5b6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x59a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5c1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5a4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5cc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ae,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5d7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5b8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5e2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5c2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5ed,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5cc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x5f8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5d6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x603,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5e0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x60e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5ea,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x619,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5f4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x624,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x5fe,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x62f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x608,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x63a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x612,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x645,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x61c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x650,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x626,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x65b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x630,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x666,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x63a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x671,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x644,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x67c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x64e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x687,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x658,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x692,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x662,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x69d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x66c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6a8,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x676,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6b3,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x680,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6be,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x68a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6c9,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x694,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6d4,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x69e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6df,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6a8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6ea,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6b2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x6f5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6bc,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x700,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6c6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x70b,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6d0,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x716,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6da,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x721,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6e4,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x72c,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6ee,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x737,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x6f8,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x742,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x702,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x74d,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x70c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x758,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x716,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x763,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x720,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x76e,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x72a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x779,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x734,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x784,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x73e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x78f,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x748,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x79a,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x752,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7a5,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x75c,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7b0,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x766,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7bb,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x770,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7c6,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x77a,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7d1,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x784,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7dc,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x78e,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7e7,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x798,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7f2,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7a2,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x7fd,10,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (ar4 + 0x7ac,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x808,10,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
                    (ar4 + 0x7b6,(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x813,10,
                     ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b7ad0\n.set FUN_8c0b7ad0, FUN_8c0b7ad0_def\n");

}
//@unit 8c0b9230
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
undefined4 FUN_8c0b9230_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9230");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8a64(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b9230\n.set FUN_8c0b9230, FUN_8c0b9230_def\n");

}
//@unit 8c0b9244
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
undefined4 FUN_8c0b9244_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9244");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined4 ar5_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b88(ar4,ar5,ar6,ar7));
  ar5_00 = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8b92(uVar1,0,ar6,ar7));
  if (0xf4240 <= uVar2) {
    *(le<int>* )(unsigned)(0xa8 + ar4) = *(le<int>* )(unsigned)(0xa8 + ar4) + 1;
    *(le<short>* )(unsigned)(0xa4 + ar4) = *(le<short>* )(unsigned)(0xa4 + ar4) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f8b6e(0,ar5_00,ar6,ar7));
    *(le<uint>* )(unsigned)(0xb8 + ar4) = *(le<int>* )(unsigned)(0xb8 + ar4) + uVar2 + 0xfff0bdc0;
    if (0xf4240 <= *(le<uint>* )(unsigned)(0xb8 + ar4)) {
      *(le<int>* )(unsigned)(0xa8 + ar4) = *(le<int>* )(unsigned)(0xa8 + ar4) + 1;
      *(le<short>* )(unsigned)(0xa4 + ar4) = *(le<short>* )(unsigned)(0xa4 + ar4) + 1;
      *(le<undefined4>* )(unsigned)(0xb8 + ar4) = 0;
    }
  }
  if (*(le<ushort>* )(unsigned)(0xa4 + ar4) < 0x3840) {
    uVar1 = 0;
  }
  else {
    *(le<short>* )(unsigned)(0xa2 + ar4) = *(le<short>* )(unsigned)(0xa2 + ar4) + 1;
    if (0xfffa <= *(le<ushort>* )(unsigned)(0xa2 + ar4)) {
      *(le<short>* )(unsigned)(0xa2 + ar4) = (short)0xfffa;
    }
    *(le<undefined2>* )(unsigned)(0xa4 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5_00,ar6,ar7));
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0b9244\n.set FUN_8c0b9244, FUN_8c0b9244_def\n");

}
//@unit 8c0b936c
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
int FUN_8c0b936c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b936c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined1 *)(unsigned)(0xa1 + (int)ar4) = *(le<undefined4>* )(unsigned)0x8c436548;
  *(le<undefined2>* )(unsigned)(0xa4 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb8 + (int)ar4) = 0;
  *ar4 = 0;
  *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = 0;
  iVar1 = 0x84;
  *(le<undefined4>* )(unsigned)(0x84 + (int)ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0b936c\n.set FUN_8c0b936c, FUN_8c0b936c_def\n");

}
//@unit 8c0b93c0
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
int FUN_8c0b93c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b93c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(unsigned)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(unsigned)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x16)); unsigned long t1_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x1a)); *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar1 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x20)); unsigned long t1_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x24)); *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(le<int>* )(unsigned)(0xbc + ar4) != iVar6)))) &&
       (*(le<int>* )(unsigned)(0xbc + ar4) != iVar1)) {
      iVar2 = 0;
    }
    (*(le<int>* )(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013adc(iVar3 - *(le<int>* )(unsigned)(0xbc + ar4),ar5,ar6,ar7));
    if (4 < (*(le<int>* )(fr0_ - 0x2c))) {
      (*(le<int>* )(fr0_ - 0x2c)) = 8 - (*(le<int>* )(fr0_ - 0x2c));
    }
    if (iVar2 == 4) {
      if ((*(le<int>* )(fr0_ - 0x2c)) == 0) {
        iVar2 = 1;
      }
      else if ((*(le<int>* )(fr0_ - 0x2c)) == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0b93c0\n.set FUN_8c0b93c0, FUN_8c0b93c0_def\n");

}
//@unit 8c0b951c
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
undefined4 FUN_8c0b951c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b951c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 10;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
            (((undefined1 *)(fr0_ - 0x18)),(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x836,10,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b95a0(ar4,((undefined1 *)(fr0_ - 0x18)),uVar2,ar7));
  if (iVar1 < 1) {
    uVar2 = 10;
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c013ef4))))
              (((undefined1 *)(fr0_ - 0x18)),(&(*(undefined1 *)(unsigned)0x8c13bfe4)) + 0x841,10,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0b95a0(ar4,((undefined1 *)(fr0_ - 0x18)),uVar2,ar7));
    if (iVar1 < 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b951c\n.set FUN_8c0b951c, FUN_8c0b951c_def\n");

}
//@unit 8c0b95a0
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
uint FUN_8c0b95a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b95a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined1 *ar5_00;
  undefined4 uVar5;
  undefined4 ar7_00;
  undefined1 *ain0;
  
  uVar5 = ar5;
  (*(le<int>* )(fr0_ - 0x11c)) = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x10000,ar5,ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x11c)) == 0) {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10287c(0x3c,uVar5,ar6,ar7));
    (*(le<unsigned>* )(fr0_ - 0x120) = (unsigned)(unsigned long)(puVar2));
    if (puVar2 == (undefined1 *)(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),uVar5,ar6,ar7));
      uVar1 = 0;
    }
    else {
      uVar1 = 0;
      ar7_00 = 0;
      uVar5 = 0;
      iVar4 = (*(le<int>* )(fr0_ - 0x11c));
      ain0 = puVar2;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f6f20((*(le<int>* )(fr0_ - 0x11c)),puVar2,0,0));
      if (iVar3 != 0) {
        (vsp = ((unsigned long)(fr0_ - 288)), memset(((undefined1 *)(fr0_ - 0x10c)),0,0xf0,ar7_00));
        uVar5 = 10;
        (vsp = ((unsigned long)(fr0_ - 288)), memmove(((undefined1 *)(fr0_ - 0x1c)),ar5,10,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f7b64(((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x10c)),uVar5,ar7_00));
        uVar5 = 10;
        ar5_00 = ((undefined1 *)(fr0_ - 0x10a));
        puVar2 = ((undefined1 *)(fr0_ - 0x1c));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c013ec0(puVar2,ar5_00,10,ar7_00));
        if (iVar4 != 0) {
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(puVar2,ar5_00,uVar5,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),ar5_00,uVar5,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),ar5_00,uVar5,ar7_00));
          return 0;
        }
        puVar2 = ((undefined1 *)(fr0_ - 0x118));
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1f8300((*(le<int>* )(fr0_ - 0xa0)),puVar2,uVar5,ar7_00));
        uVar1 = (uint)(*(byte *)(fr0_ - 0x116));
        iVar4 = (*(le<int>* )(fr0_ - 0xa0));
      }
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 288)); FUN_8c1f710c(iVar4,puVar2,uVar5,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(&(*(le<int>* )(fr0_ - 0x11c)),puVar2,uVar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c10289c(((undefined1 * *)(fr0_ - 0x120)),puVar2,uVar5,ar7_00));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c0b95a0\n.set FUN_8c0b95a0, FUN_8c0b95a0_def\n");

}
//@unit 8c0b96e4
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
int FUN_8c0b96e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b96e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 296; for (int i_ = 0; i_ < 296; i_++) z_[i_] = 0; }
  int iVar1;
  char *ar4_00;
  int iVar2;
  int iVar3;
  char *ar4_01;
  le<uint>* ar5_00;
  char *ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  ushort uVar4;
  uint unaff_r12 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f8176(((char *)(fr0_ - 0x30)) + 10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(((char *)(fr0_ - 0x30)) + 10,&(*(le<uint>* )(fr0_ - 0x124)),ar6,ar7));
  ar5_00 = &(*(le<uint>* )(fr0_ - 0x128));
  (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f826c(ar5,ar5_00,ar6,ar7));
  if ((*(le<uint>* )(fr0_ - 0x128)) < (*(le<uint>* )(fr0_ - 0x124))) {
    *(le<unsigned>* )0x8c4365f0 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x10000,ar5_00,ar6,ar7)));
    if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0) == (char *)(unsigned)0x0) {
      iVar1 = 0xb6;
    }
    else {
      *(le<unsigned>* )0x8c4365f4 = (unsigned)(unsigned long)((char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x3c,ar5_00,ar6,ar7)));
      if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f4) == (char *)(unsigned)0x0) {
        (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0),ar5_00,ar6,ar7));
        iVar1 = 0xb6;
      }
      else {
        ar4_00 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 296)), malloc_thunk(0x44c,ar5_00,ar6,ar7));
        if (ar4_00 == (char *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0),ar5_00,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f4),ar5_00,ar6,ar7));
          iVar1 = 0xb6;
        }
        else {
          iVar1 = 0xb6;
          ar7_00 = 0;
          ar6_00 = 0;
          ar4_01 = (char*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0));
          ar5_01 = (char*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f4));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f6f20(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0),((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f4),0,0));
          if (iVar2 != 0) {
            for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
              ((char *)(fr0_ - 0x30))[iVar2] = ' ';
            }
            uVar4 = 0;
            ar4_01 = ar4_00;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7c40(ar4_00,ar5_01,ar6_00,ar7_00));
            if (iVar2 != 0) {
              for (iVar2 = 0; iVar2 < 100; iVar2 = iVar2 + 1) {
                if (ar4_00[iVar2 * 0xb] != -1) {
                  ar5_01 = ((char *)(fr0_ - 0x120));
                  ar4_01 = ar4_00 + iVar2 * 0xb;
                  iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1f7b64(ar4_01,ar5_01,ar6_00,ar7_00));
                  if (iVar3 != 0) {
                    ar6_00 = 10;
                    ar5_01 = ((char *)(fr0_ - 0x11e));
                    ar4_01 = ((undefined1 *)(unsigned)0x8c13c830);
                    iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c830),ar5_01,10,ar7_00));
                    if (iVar3 != 0) {
                      ar6_00 = 10;
                      ar5_01 = ((char *)(fr0_ - 0x11e));
                      ar4_01 = ((undefined1 *)(unsigned)0x8c13c59a);
                      iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c59a),ar5_01,10,ar7_00));
                      if (iVar3 != 0) {
                        ar6_00 = 10;
                        ar5_01 = ((char *)(fr0_ - 0x11e));
                        ar4_01 = ((undefined1 *)(unsigned)0x8c13c5a5);
                        iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5a5),ar5_01,10,ar7_00));
                        if (iVar3 != 0) {
                          ar6_00 = 10;
                          ar5_01 = ((char *)(fr0_ - 0x11e));
                          ar4_01 = ((undefined1 *)(unsigned)0x8c13c5b0);
                          iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5b0),ar5_01,10,ar7_00));
                          if (iVar3 != 0) {
                            ar6_00 = 10;
                            ar5_01 = ((char *)(fr0_ - 0x11e));
                            ar4_01 = ((undefined1 *)(unsigned)0x8c13c5bb);
                            iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(((undefined1 *)(unsigned)0x8c13c5bb),ar5_01,10,ar7_00));
                            if ((((iVar3 != 0) && ((*(le<uint>* )(fr0_ - 0xa8)) < (*(le<uint>* )(fr0_ - 0x124)))) &&
                                ((*(le<uint>* )(fr0_ - 0x128)) < (*(le<uint>* )(fr0_ - 0xa8)))) && (uVar4 < (*(le<ushort>* )(fr0_ - 0xa4)))) {
                              ar6_00 = 10;
                              ar5_01 = ((char *)(fr0_ - 0x11e));
                              ar4_01 = ((char *)(fr0_ - 0x30));
                              (vsp = ((unsigned long)(fr0_ - 296)), memmove(ar4_01,ar5_01,10,ar7_00));
                              unaff_r12 = (*(le<uint>* )(fr0_ - 0xb8));
                              uVar4 = (*(le<ushort>* )(fr0_ - 0xa4));
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              for (iVar2 = 0; iVar2 < 0xb2; iVar2 = iVar2 + 1) {
                ar6_00 = 10;
                ar5_01 = ((char *)(fr0_ - 0x30));
                ar4_01 = (char *)(unsigned)(iVar2 * 10 + ar4 + 0xcc);
                iVar3 = (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c013ec0(ar4_01,ar5_01,10,ar7_00));
                if (iVar3 == 0) {
                  iVar1 = iVar2;
                }
              }
              if (iVar1 == 0xb6) {
                if ((unaff_r12 & 0x400) != 0) {
                  iVar1 = 0xb3;
                }
                if ((unaff_r12 & 0x200) != 0) {
                  iVar1 = 0xb4;
                }
                if ((unaff_r12 & 0x100) != 0) {
                  iVar1 = 0xb5;
                }
                if ((unaff_r12 & 0x80) != 0) {
                  iVar1 = 0xb6;
                }
                if ((unaff_r12 & 0x40) != 0) {
                  iVar1 = 0xb7;
                }
                if ((unaff_r12 & 0x20) != 0) {
                  iVar1 = 0xb8;
                }
                if ((unaff_r12 & 0x10) != 0) {
                  iVar1 = 0xb9;
                }
                if ((unaff_r12 & 8) != 0) {
                  iVar1 = 0xba;
                }
                if ((unaff_r12 & 4) != 0) {
                  iVar1 = 0xbb;
                }
                if ((unaff_r12 & 2) != 0) {
                  iVar1 = 0xbc;
                }
                if ((unaff_r12 & 1) != 0) {
                  iVar1 = 0xbd;
                }
              }
            }
          }
          ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 296)); FUN_8c1f710c(ar4_01,ar5_01,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f0),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4365f4),ar5_01,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 296)), FUN_8c1fb57c(ar4_00,ar5_01,ar6_00,ar7_00));
        }
      }
    }
  }
  else {
    iVar1 = 0xb6;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0b96e4\n.set FUN_8c0b96e4, FUN_8c0b96e4_def\n");

}
//@unit 8c0b9afc
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
FUN_8c0b9afc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9afc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0x17 < (byte)s4) {
    return 8;
  }
                    
  switch((byte)s4) {
  case 0:
  case 1:
    return 6;
  default:
    return 7;
  case 5:
  case 6:
  case 7:
    return 0;
  case 8:
  case 9:
  case 10:
    return 1;
  case 0xb:
  case 0xc:
  case 0xd:
    return 2;
  case 0xe:
  case 0xf:
  case 0x10:
    return 3;
  case 0x11:
  case 0x12:
  case 0x13:
    return 4;
  case 0x14:
    return 5;
  }
}

__asm__(".globl FUN_8c0b9afc\n.set FUN_8c0b9afc, FUN_8c0b9afc_def\n");

}
//@unit 8c0b9bb0
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
uint FUN_8c0b9bb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9bb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  *(le<undefined2>* )(unsigned)(ar4 + 0x20) = *(le<undefined2>* )(unsigned)(ar4 + 0x16);
  *(le<undefined2>* )(unsigned)(ar4 + 0x22) = *(le<undefined2>* )(unsigned)(ar4 + 0x18);
  *(le<undefined2>* )(unsigned)(ar4 + 0x24) = *(le<undefined2>* )(unsigned)(ar4 + 0x1a);
  *(le<undefined2>* )(unsigned)(ar4 + 0x26) = *(le<undefined2>* )(unsigned)(ar4 + 0x1c);
  *(le<undefined2>* )(unsigned)(ar4 + 0x28) = *(le<undefined2>* )(unsigned)(ar4 + 0x1e);
  *(le<undefined2>* )(unsigned)(ar4 + 0x16) = *(le<undefined2>* )(unsigned)(ar4 + 0xc);
  *(le<undefined2>* )(unsigned)(ar4 + 0x18) = *(le<undefined2>* )(unsigned)(ar4 + 0xe);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1a) = *(le<undefined2>* )(unsigned)(ar4 + 0x10);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1c) = *(le<undefined2>* )(unsigned)(ar4 + 0x12);
  *(le<undefined2>* )(unsigned)(ar4 + 0x1e) = *(le<undefined2>* )(unsigned)(ar4 + 0x14);
  iVar3 = ar4 + 0xc;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d14(ar4,iVar3,ar6,ar7));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0xc)); unsigned long t1_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar4 + 0x10)); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                    (ar4,iVar3,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = uVar1;
  iVar3 = ar4 + *(le<int>* )(unsigned)(0xbc + ar4);
  *(char *)(unsigned)(iVar3 + 4) = *(char *)(unsigned)(iVar3 + 4) + '\x01';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0b9d30(ar4,((undefined1 *)(fr0_ - 0x1c)),0x8c431a68 + 0x14,ar7));
  *(le<undefined4>* )(unsigned)(0xc8 + ar4) = uVar1;
  iVar3 = 0;
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar4 + 4) + iVar3;
  }
  if (((*(le<short>* )(unsigned)(ar4 + 0xc) == *(le<short>* )(unsigned)(ar4 + 0x16)) &&
      (*(char *)(unsigned)(ar4 + 0xe) == *(char *)(unsigned)(ar4 + 0x18))) &&
     (*(char *)(unsigned)(ar4 + 0xf) == *(char *)(unsigned)(ar4 + 0x19))) {
    *(char *)(unsigned)(ar4 + 0x2c) = *(char *)(unsigned)(ar4 + 0x2c) + '\x01';
  }
  else {
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 1;
  }
  uVar2 = *(le<uint>* )(unsigned)(0xc8 + ar4);
  if (((uVar2 == 0) && (uVar2 = (uint)*(byte *)(unsigned)(ar4 + 0x2c), uVar2 == 1)) && (uVar2 = 1, iVar3 != 1)
     ) {
    uVar2 = 0x2c;
    *(undefined1 *)(unsigned)(ar4 + 0x2c) = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0b9bb0\n.set FUN_8c0b9bb0, FUN_8c0b9bb0_def\n");

}
//@unit 8c0b9d14
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
undefined4 FUN_8c0b9d14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9d14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f8176(ar5,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0b9d14\n.set FUN_8c0b9d14, FUN_8c0b9d14_def\n");

}
//@unit 8c0b9d30
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
int FUN_8c0b9d30_def(undefined4 ar4,le<ushort>* ar5,le<ushort>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9d30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  int iVar2;
  le<ushort>* ar6_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar3 = 0;
  ar6_00 = ar6;
  for (iVar7 = 0x79e; iVar7 < (int)(uint)*ar5; iVar7 = iVar7 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar7,4,ar6_00,ar7));
    if (iVar2 == 0) {
      iVar5 = iVar5 + 0x16e;
    }
    else {
      iVar5 = iVar5 + 0x16d;
    }
  }
  bVar1 = (byte)ar5[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar7 = iVar5;
                    
    switch(bVar1) {
    case 0xc:
      iVar5 = iVar5 + 0x1e;
    case 0xb:
      iVar5 = iVar5 + 0x1f;
    case 10:
      iVar5 = iVar5 + 0x1e;
    case 9:
      iVar5 = iVar5 + 0x1f;
    case 8:
      iVar5 = iVar5 + 0x1f;
    case 7:
      iVar5 = iVar5 + 0x1e;
    case 6:
      iVar5 = iVar5 + 0x1f;
    case 5:
      iVar5 = iVar5 + 0x1e;
    case 4:
      iVar7 = iVar5 + 0x1f;
    case 3:
      iVar5 = iVar7 + 0x1c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c((uint)*ar5,4,ar6_00,ar7));
      if (iVar2 == 0) {
        iVar5 = iVar7 + 0x1d;
      }
    case 2:
      iVar5 = iVar5 + 0x1f;
    }
  }
  uVar6 = iVar5 + (uint)*(byte *)(unsigned)((int)ar5 + 3);
  for (iVar5 = 0x79e; iVar5 < (int)(uint)*ar6; iVar5 = iVar5 + 1) {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar5,4,ar6_00,ar7));
    if (iVar7 == 0) {
      iVar3 = iVar3 + 0x16e;
    }
    else {
      iVar3 = iVar3 + 0x16d;
    }
  }
  bVar1 = (byte)ar6[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar5 = iVar3;
                    
    switch(bVar1) {
    case 0xc:
      iVar3 = iVar3 + 0x1e;
    case 0xb:
      iVar3 = iVar3 + 0x1f;
    case 10:
      iVar3 = iVar3 + 0x1e;
    case 9:
      iVar3 = iVar3 + 0x1f;
    case 8:
      iVar3 = iVar3 + 0x1f;
    case 7:
      iVar3 = iVar3 + 0x1e;
    case 6:
      iVar3 = iVar3 + 0x1f;
    case 5:
      iVar3 = iVar3 + 0x1e;
    case 4:
      iVar5 = iVar3 + 0x1f;
    case 3:
      iVar3 = iVar5 + 0x1c;
      iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c((uint)*ar6,4,ar6_00,ar7));
      if (iVar7 == 0) {
        iVar3 = iVar5 + 0x1d;
      }
    case 2:
      iVar3 = iVar3 + 0x1f;
    }
  }
  uVar4 = iVar3 + (uint)*(byte *)(unsigned)((int)ar6 + 3);
  if (uVar6 < uVar4) {
    iVar3 = 0xffff;
  }
  else {
    iVar3 = uVar6 - uVar4;
  }
  return iVar3;
}

__asm__(".globl FUN_8c0b9d30\n.set FUN_8c0b9d30, FUN_8c0b9d30_def\n");

}
//@unit 8c0b9ed4
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
undefined4 FUN_8c0b9ed4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9ed4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(unsigned)(ar4 + ar5 + 0x44) == '\0') {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      if (*(le<int>* )(unsigned)(ar4 + iVar2 * 4 + 0x30) == ar5) {
        return 0;
      }
    }
    iVar2 = ar4 + *(le<int>* )(unsigned)(ar4 + 0x40);
    *(char *)(unsigned)(iVar2 + 0x44) = *(char *)(unsigned)(iVar2 + 0x44) + '\x01';
    for (iVar2 = 4; 0 < iVar2; iVar2 = iVar2 + -1) {
      *(le<undefined4>* )(unsigned)(ar4 + iVar2 * 4 + 0x30) = *(le<undefined4>* )(unsigned)(ar4 + (iVar2 + -1) * 4 + 0x30);
    }
    *(le<int>* )(unsigned)(ar4 + 0x30) = ar5;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0b9ed4\n.set FUN_8c0b9ed4, FUN_8c0b9ed4_def\n");

}
//@unit 8c0b9f5c
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
undefined1 * FUN_8c0b9f5c_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b9f5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = *ar5;
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + iVar1 * 4 + 4) = *(le<undefined4>* )(unsigned)(ar5 + iVar1 * 4 + 4);
  }
  for (iVar1 = 0; iVar1 < 0x3e; iVar1 = iVar1 + 1) {
    ar4[iVar1 + 0x18] = ar5[iVar1 + 0x18];
  }
  return ar4;
}

__asm__(".globl FUN_8c0b9f5c\n.set FUN_8c0b9f5c, FUN_8c0b9f5c_def\n");

}
//@unit 8c0b9fb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0b9fb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0b9fb4");
  return (unsigned)sh4_interp(0x8c0b9fb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0b9fb4\n.set FUN_8c0b9fb4, FUN_8c0b9fb4_def\n");
}
//@unit 8c0ba180
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
int FUN_8c0ba180_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba180");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c02441c(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ba180\n.set FUN_8c0ba180, FUN_8c0ba180_def\n");

}
//@unit 8c0ba1c0
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
undefined4 FUN_8c0ba1c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba1c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0xc); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0ba284),((void *)(unsigned)0x8c0ba1f4),0x80); });
  return ar4;
}

__asm__(".globl FUN_8c0ba1c0\n.set FUN_8c0ba1c0, FUN_8c0ba1c0_def\n");

}
//@unit 8c0ba1f4
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
int FUN_8c0ba1f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba1f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ba234(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ba1f4\n.set FUN_8c0ba1f4, FUN_8c0ba1f4_def\n");

}
//@unit 8c0ba234
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
int FUN_8c0ba234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba234");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ba234\n.set FUN_8c0ba234, FUN_8c0ba234_def\n");

}
//@unit 8c0ba284
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
int FUN_8c0ba284_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba284");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f3e84(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d5b8(ar4 + 0x24,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff40(ar4 + 0x48,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036058(ar4 + 0x58,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0ba284\n.set FUN_8c0ba284, FUN_8c0ba284_def\n");

}
//@unit 8c0ba2cc
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
int FUN_8c0ba2cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba2cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b7a54(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x7cc + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d0 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7d4 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7dc + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x7e0 + ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0ba2cc\n.set FUN_8c0ba2cc, FUN_8c0ba2cc_def\n");

}
//@unit 8c0ba324
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
undefined4 FUN_8c0ba324_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba324");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0ba34c(ar4,ar5,ar6,ar7); });
  return ar4;
}

__asm__(".globl FUN_8c0ba324\n.set FUN_8c0ba324, FUN_8c0ba324_def\n");

}
//@unit 8c0ba34c
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
undefined4 FUN_8c0ba34c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba34c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0ba34c\n.set FUN_8c0ba34c, FUN_8c0ba34c_def\n");

}
//@unit 8c0ba354
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
undefined4 FUN_8c0ba354_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba354");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba5bc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0ba354\n.set FUN_8c0ba354, FUN_8c0ba354_def\n");

}
//@unit 8c0ba37c
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
undefined4 FUN_8c0ba37c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba37c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba5bc(ar4,ar5,ar6,ar7));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0xff000000); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                    (0x8c2b5628,0xff000000,0xff000000,0xff000000); });
  return uVar1;
}

__asm__(".globl FUN_8c0ba37c\n.set FUN_8c0ba37c, FUN_8c0ba37c_def\n");

}
//@unit 8c0ba3b8
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
int FUN_8c0ba3b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba3b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x154 + ar4) = ar5;
  *(le<undefined4>* )(unsigned)(0x158 + ar4) = ar6;
  *(le<undefined4>* )(unsigned)(0x15c + ar4) = ar7;
  iVar1 = 0x160;
  *(le<undefined4>* )(unsigned)(0x160 + ar4) = s0;
  return iVar1;
}

__asm__(".globl FUN_8c0ba3b8\n.set FUN_8c0ba3b8, FUN_8c0ba3b8_def\n");

}
//@unit 8c0ba3e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba3e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba3e0");
  return (unsigned)sh4_interp(0x8c0ba3e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba3e0\n.set FUN_8c0ba3e0, FUN_8c0ba3e0_def\n");
}
//@unit 8c0ba494
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba494_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba494");
  return (unsigned)sh4_interp(0x8c0ba494, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba494\n.set FUN_8c0ba494, FUN_8c0ba494_def\n");
}
//@unit 8c0ba5bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba5bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba5bc");
  return (unsigned)sh4_interp(0x8c0ba5bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba5bc\n.set FUN_8c0ba5bc, FUN_8c0ba5bc_def\n");
}
//@unit 8c0ba5e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba5e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba5e0");
  return (unsigned)sh4_interp(0x8c0ba5e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba5e0\n.set FUN_8c0ba5e0, FUN_8c0ba5e0_def\n");
}
//@unit 8c0ba6bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba6bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba6bc");
  return (unsigned)sh4_interp(0x8c0ba6bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba6bc\n.set FUN_8c0ba6bc, FUN_8c0ba6bc_def\n");
}
//@unit 8c0ba844
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba844_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba844");
  return (unsigned)sh4_interp(0x8c0ba844, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba844\n.set FUN_8c0ba844, FUN_8c0ba844_def\n");
}
//@unit 8c0ba870
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba870_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba870");
  return (unsigned)sh4_interp(0x8c0ba870, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba870\n.set FUN_8c0ba870, FUN_8c0ba870_def\n");
}
//@unit 8c0ba898
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
le<undefined4>*  FUN_8c0ba898_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba898");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b36c));
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl FUN_8c0ba898\n.set FUN_8c0ba898, FUN_8c0ba898_def\n");

}
//@unit 8c0ba8ac
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
le<undefined4>* 
free_if_nonnull_wrap_0ba8ac_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0ba8ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c12b36c), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0ba8ac\n.set free_if_nonnull_wrap_0ba8ac, free_if_nonnull_wrap_0ba8ac_def\n");

}
//@unit 8c0ba8e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ba8e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ba8e4");
  return (unsigned)sh4_interp(0x8c0ba8e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ba8e4\n.set FUN_8c0ba8e4, FUN_8c0ba8e4_def\n");
}
//@unit 8c0ba9c8
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
int FUN_8c0ba9c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ba9c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ba9c8\n.set FUN_8c0ba9c8, FUN_8c0ba9c8_def\n");

}
//@unit 8c0baa08
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
le<undefined4>*  Class_12b350_m0_0baa08_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b350_m0_0baa08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b350);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ba9c8(ar4 + 0x56,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0x14,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x12,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b350_m0_0baa08\n.set Class_12b350_m0_0baa08, Class_12b350_m0_0baa08_def\n");

}
//@unit 8c0baa84
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
undefined4 Class_12b350_m1_0baa84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b350_m1_0baa84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  { extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); uVar1 = (undefined4)host_pmf_call((unsigned long)(unsigned)(ar4 + 12 + 12 * *(le<int>* )(unsigned)(unsigned)(ar4 + 8)),(unsigned long)(unsigned)ar4,(unsigned long)(unsigned)ar5,ar6,ar7); }
  return uVar1;
}

__asm__(".globl Class_12b350_m1_0baa84\n.set Class_12b350_m1_0baa84, Class_12b350_m1_0baa84_def\n");

}
//@unit 8c0baab8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_0baac0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_0baac0");
  return (unsigned)sh4_interp(0x8c0baab8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_0baac0\n.set s_GRAPHICS_0baac0, s_GRAPHICS_0baac0_def\n");
}
//@unit 8c0bad68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bad68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bad68");
  return (unsigned)sh4_interp(0x8c0bad68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bad68\n.set FUN_8c0bad68, FUN_8c0bad68_def\n");
}
//@unit 8c0bb158
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
uint FUN_8c0bb158_def(int ar4,le<undefined2>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bb158");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  
  *ar5 = *(le<undefined2>* )(unsigned)(0x96 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 1) = *(undefined1 *)(unsigned)(0x98 + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 3) = *(undefined1 *)(unsigned)(0x99 + ar4);
  *(undefined1 *)(unsigned)(ar5 + 2) = *(undefined1 *)(unsigned)(0x9a + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 5) = *(undefined1 *)(unsigned)(0x9b + ar4);
  *(undefined1 *)(unsigned)(ar5 + 3) = *(undefined1 *)(unsigned)(0x9c + ar4);
  *(undefined1 *)(unsigned)((int)ar5 + 7) = *(undefined1 *)(unsigned)(0x9d + ar4);
  bVar1 = *(byte *)(unsigned)(0x9e + ar4);
  *(byte *)(unsigned)(ar5 + 4) = bVar1;
  return (uint)bVar1;
}

__asm__(".globl FUN_8c0bb158\n.set FUN_8c0bb158, FUN_8c0bb158_def\n");

}
//@unit 8c0bb1bc
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
undefined4 FUN_8c0bb1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bb1bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0bb1bc\n.set FUN_8c0bb1bc, FUN_8c0bb1bc_def\n");

}
//@unit 8c0bb1e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_AMB_FOREST_0bb1f2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_AMB_FOREST_0bb1f2");
  return (unsigned)sh4_interp(0x8c0bb1e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_AMB_FOREST_0bb1f2\n.set s_AMB_FOREST_0bb1f2, s_AMB_FOREST_0bb1f2_def\n");
}
//@unit 8c0bced0
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
undefined4 get_field_c8_0bced0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c8_0bced0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc8 + ar4);
}

__asm__(".globl get_field_c8_0bced0\n.set get_field_c8_0bced0, get_field_c8_0bced0_def\n");

}
//@unit 8c0bcedc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bcedc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bcedc");
  return (unsigned)sh4_interp(0x8c0bcedc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bcedc\n.set FUN_8c0bcedc, FUN_8c0bcedc_def\n");
}
//@unit 8c0bf064
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf064_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf064");
  return (unsigned)sh4_interp(0x8c0bf064, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf064\n.set FUN_8c0bf064, FUN_8c0bf064_def\n");
}
//@unit 8c0bf0ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf0ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf0ac");
  return (unsigned)sh4_interp(0x8c0bf0ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf0ac\n.set FUN_8c0bf0ac, FUN_8c0bf0ac_def\n");
}
//@unit 8c0bf0bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf0bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf0bc");
  return (unsigned)sh4_interp(0x8c0bf0bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf0bc\n.set FUN_8c0bf0bc, FUN_8c0bf0bc_def\n");
}
//@unit 8c0bf0e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf0e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf0e8");
  return (unsigned)sh4_interp(0x8c0bf0e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf0e8\n.set FUN_8c0bf0e8, FUN_8c0bf0e8_def\n");
}
//@unit 8c0bf0f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf0f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf0f0");
  return (unsigned)sh4_interp(0x8c0bf0f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf0f0\n.set FUN_8c0bf0f0, FUN_8c0bf0f0_def\n");
}
//@unit 8c0bf11c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf11c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf11c");
  return (unsigned)sh4_interp(0x8c0bf11c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf11c\n.set FUN_8c0bf11c, FUN_8c0bf11c_def\n");
}
//@unit 8c0bf124
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
undefined4 get_field_28_0bf124_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_28_0bf124");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x28);
}

__asm__(".globl get_field_28_0bf124\n.set get_field_28_0bf124, get_field_28_0bf124_def\n");

}
//@unit 8c0bf12c
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
undefined4 FUN_8c0bf12c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf12c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0bf12c\n.set FUN_8c0bf12c, FUN_8c0bf12c_def\n");

}
//@unit 8c0bf154
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
undefined4 get_field_300_0bf154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_300_0bf154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x300 + ar4);
}

__asm__(".globl get_field_300_0bf154\n.set get_field_300_0bf154, get_field_300_0bf154_def\n");

}
//@unit 8c0bf160
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
undefined4 FUN_8c0bf160_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + ar5 * 4 + 8);
}

__asm__(".globl FUN_8c0bf160\n.set FUN_8c0bf160, FUN_8c0bf160_def\n");

}
//@unit 8c0bf170
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
undefined4 FUN_8c0bf170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf170");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4362f0) = 0;
  ar6_00 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362a0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(0x8c4362c0,ar6,ar6_00,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c43627c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8320(0x8c35468c,6,0x8c436280,ar7));
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c43627c);
}

__asm__(".globl FUN_8c0bf170\n.set FUN_8c0bf170, FUN_8c0bf170_def\n");

}
//@unit 8c0bf1c8
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
int FUN_8c0bf1c8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf1c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ar5 + 0x30;
  for (iVar3 = 4; -1 < iVar3; iVar3 = iVar3 + -1) {
    if ((0x29 < *(le<int>* )(unsigned)(iVar3 * 4 + iVar2)) && (*(le<int>* )(unsigned)(iVar3 * 4 + iVar2) < 0x30)) {
      *(le<undefined4>* )(unsigned)(iVar3 * 4 + iVar2) = 0;
    }
    pcVar1 = (char *)(unsigned)(*(le<int>* )(unsigned)(iVar3 * 4 + iVar2) + ar5 + 0x44);
    in_r0 = *pcVar1 + 1;
    *pcVar1 = (char)in_r0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0bf1c8\n.set FUN_8c0bf1c8, FUN_8c0bf1c8_def\n");

}
//@unit 8c0bf22c
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
undefined4 FUN_8c0bf22c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf22c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* a4;
  undefined4 uVar1;
  undefined4 ar6_00;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0bf160(*(le<undefined4>* )(unsigned)(0x7d8 + ar5),iVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *a4))))(a4,0,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c021ce8))))
            (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x144 + ar4),ar6,ar7));
  uVar1 = *(le<undefined4>* )(unsigned)(0x148 + ar4);
  (vsp = ((unsigned long)(fr0_ - 4)), pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fa2b8(0x8c35468c,uVar1,ar6,ar7));
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,uVar1,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)(0x154 + ar4) = 0xffffff;
  ar6_00 = 0;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0c3e78(0x8c2b5628,0xffffffff,0,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), s_Failed_s_015312(ar4 + 0x48,uVar1,ar6_00,ar7));
  *(le<undefined4>* )(unsigned)(0x14c + ar4) = 4;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 0x12;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0ba5bc(ar4 + 0x158,uVar1,ar6_00,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined4>* )(unsigned)(0x7dc + ar5) = 1;
  return 1;
}

__asm__(".globl FUN_8c0bf22c\n.set FUN_8c0bf22c, FUN_8c0bf22c_def\n");

}
//@unit 8c0bf338
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
le<undefined4>*  FUN_8c0bf338_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba898(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12b334));
  ar4[2] = 0;
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13be20));
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13be20)) + 4);
  ar4[3] = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13be20));
  ar4[4] = uVar2;
  ar4[5] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13be2c));
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13be2c)) + 4);
  ar4[6] = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13be2c));
  ar4[7] = uVar2;
  ar4[8] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  return ar4;
}

__asm__(".globl FUN_8c0bf338\n.set FUN_8c0bf338, FUN_8c0bf338_def\n");

}
//@unit 8c0bf38c
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
le<undefined4>*  Class_12b334_m0_0bf38c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b334_m0_0bf38c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b334);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0ba8ac(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12b334_m0_0bf38c\n.set Class_12b334_m0_0bf38c, Class_12b334_m0_0bf38c_def\n");

}
//@unit 8c0bf3d4
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
int Class_12b334_m1_0bf3d4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b334_m1_0bf3d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((ar4 + 0x8)) << 1) + *(le<int>* )(unsigned)((ar4 + 0x8))) << 2) + ar4) + 0xc)),ar4,ar5,ar6,ar7); }));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bb1bc(*(le<undefined4>* )(unsigned)(0x7cc + ar5),iVar1,ar6,ar7));
  if (iVar1 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
    iVar1 = 0x7dc;
    *(le<undefined4>* )(unsigned)(0x7dc + ar5) = 0;
  }
  return iVar1;
}

__asm__(".globl Class_12b334_m1_0bf3d4\n.set Class_12b334_m1_0bf3d4, Class_12b334_m1_0bf3d4_def\n");

}
//@unit 8c0bf440
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
undefined4 s_EPILOG_0bf440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_EPILOG_0bf440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); noop_102824(((undefined1 *)(unsigned)0x8c13c990),300,0x1d6,0xd); });
  return 1;
}

__asm__(".globl s_EPILOG_0bf440\n.set s_EPILOG_0bf440, s_EPILOG_0bf440_def\n");

}
//@unit 8c0bf478
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
int FUN_8c0bf478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf478");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1026ec(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf7a8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0bf478\n.set FUN_8c0bf478, FUN_8c0bf478_def\n");

}
//@unit 8c0bf4a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf4a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf4a4");
  return (unsigned)sh4_interp(0x8c0bf4a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf4a4\n.set FUN_8c0bf4a4, FUN_8c0bf4a4_def\n");
}
//@unit 8c0bf548
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
undefined4 FUN_8c0bf548_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c0bf548\n.set FUN_8c0bf548, FUN_8c0bf548_def\n");

}
//@unit 8c0bf550
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
undefined4 FUN_8c0bf550_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf550");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf804(ar4,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bfa78(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0bf550\n.set FUN_8c0bf550, FUN_8c0bf550_def\n");

}
//@unit 8c0bf588
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
undefined4 FUN_8c0bf588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (*(le<int>* )(unsigned)(ar4 + 4) == 0) {
    ar5_00 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf708(ar5,ar5,ar6,ar7));
    if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x24) == 1)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf690(ar5,ar5_00,ar6,ar7));
      if ((iVar1 == 1) && (*(le<int>* )(unsigned)(ar4 + 0x24) == 0)) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 1;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf618(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      if (*(le<int>* )(unsigned)(ar4 + 0x24) == 0) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0bf588\n.set FUN_8c0bf588, FUN_8c0bf588_def\n");

}
//@unit 8c0bf618
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
undefined4 FUN_8c0bf618_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf618");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01edcc(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c0bf618\n.set FUN_8c0bf618, FUN_8c0bf618_def\n");

}
//@unit 8c0bf690
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
undefined4 FUN_8c0bf690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf690");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1e8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ec20(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c0bf690\n.set FUN_8c0bf690, FUN_8c0bf690_def\n");

}
//@unit 8c0bf708
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
undefined4 FUN_8c0bf708_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf708");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 1) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f538))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 2)) {
    return 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f118(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ecf8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 == 0)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c0bf708\n.set FUN_8c0bf708, FUN_8c0bf708_def\n");

}
//@unit 8c0bf780
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
undefined4 FUN_8c0bf780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01eb94(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0bf780\n.set FUN_8c0bf780, FUN_8c0bf780_def\n");

}
//@unit 8c0bf7a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf7a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf7a8");
  return (unsigned)sh4_interp(0x8c0bf7a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf7a8\n.set FUN_8c0bf7a8, FUN_8c0bf7a8_def\n");
}
//@unit 8c0bf7c8
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
undefined4 FUN_8c0bf7c8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bf7c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 1;
  return 1;
}

__asm__(".globl FUN_8c0bf7c8\n.set FUN_8c0bf7c8, FUN_8c0bf7c8_def\n");

}
//@unit 8c0bf7d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf7d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf7d0");
  return (unsigned)sh4_interp(0x8c0bf7d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf7d0\n.set FUN_8c0bf7d0, FUN_8c0bf7d0_def\n");
}
//@unit 8c0bf804
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bf804_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bf804");
  return (unsigned)sh4_interp(0x8c0bf804, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bf804\n.set FUN_8c0bf804, FUN_8c0bf804_def\n");
}
//@unit 8c0bfa78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0bfa78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0bfa78");
  return (unsigned)sh4_interp(0x8c0bfa78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0bfa78\n.set FUN_8c0bfa78, FUN_8c0bfa78_def\n");
}
//@unit 8c0bff8c
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
le<int>*  FUN_8c0bff8c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0bff8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba8e4(ar4 + 3,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c5340((int)ar4 + 0x17c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf338((int)ar4 + 0x2d578,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba2cc((int)ar4 + 0x2d59c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410((int)ar4 + 0x2ddc4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffb98((int)ar4 + 0x2de08,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fed18((int)ar4 + 0x2e3a8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224((int)ar4 + 0x2e64c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0bf478((int)ar4 + 0x2e710,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dd88);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bee8)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bee8));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dd94);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bef4)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bef4));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2dda0);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf00)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf00));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2ddac);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf0c)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf0c));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + 0x2ddb8);
  uVar2 = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bf18)) + 4);
  *puVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bf18));
  puVar3[1] = uVar2;
  puVar3[2] = *(le<undefined4>* )(unsigned)(puVar1 + 8);
  *ar4 = (int)(ar4 + 3);
  ar4[1] = (int)ar4 + 0x17c;
  ar4[2] = (int)ar4 + 0x2d578;
  *(le<int>* )(unsigned)(0x2dd68 + (int)ar4) = (int)ar4 + 0x2de08;
  *(le<int>* )(unsigned)(0x2dd6c + (int)ar4) = (int)ar4 + 0x2e3a8;
  *(le<int>* )(unsigned)(0x2dd74 + (int)ar4) = (int)ar4 + 0x17c;
  *(le<undefined4>* )(unsigned)(0x2dd7c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2e75c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd84 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd78 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2dd80 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0bff8c\n.set FUN_8c0bff8c, FUN_8c0bff8c_def\n");

}
