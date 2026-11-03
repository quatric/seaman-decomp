//@unit 8c0f3df8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f3df8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f3df8");
  return (unsigned)sh4_interp(0x8c0f3df8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f3df8\n.set FUN_8c0f3df8, FUN_8c0f3df8_def\n");
}
//@unit 8c0f3e30
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
undefined1 * FUN_8c0f3e30_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f3e30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_set_zero(ar4 + 0x2c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 0x38,ar5,ar6,ar7));
  *ar4 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0xffffffff;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = 0x32;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0f3e30\n.set FUN_8c0f3e30, FUN_8c0f3e30_def\n");

}
//@unit 8c0f3e84
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
le<undefined4>*  FUN_8c0f3e84_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f3e84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_set_zero(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 4,ar5,ar6,ar7));
  *ar4 = 0xffffffff;
  ar4[7] = 0x32;
  ar4[8] = 1;
  return ar4;
}

__asm__(".globl FUN_8c0f3e84\n.set FUN_8c0f3e84, FUN_8c0f3e84_def\n");

}
//@unit 8c0f3ebc
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
int FUN_8c0f3ebc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f3ebc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(le<unsigned>* )(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12c1f0));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x30,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x40,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x50,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x5c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x80,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x90,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f78d8(ar4 + 0xa0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f50b4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0f3ebc\n.set FUN_8c0f3ebc, FUN_8c0f3ebc_def\n");

}
//@unit 8c0f3f58
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
int FUN_8c0f3f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f3f58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x6c,((void *)0x8c0f3ffc),8,3); });
    ar7_00 = 3;
    ar6_00 = 8;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x4c,((void *)0x8c0f3ffc),8,3); });
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129974_m0_016c2c(ar4 + 8,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0f3f58\n.set FUN_8c0f3f58, FUN_8c0f3f58_def\n");

}
//@unit 8c0f3ffc
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
int free_if_nonnull_wrap_0f3ffc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0f3ffc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0f3ffc\n.set free_if_nonnull_wrap_0f3ffc, free_if_nonnull_wrap_0f3ffc_def\n");

}
//@unit 8c0f402c
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
le<undefined4>*  FUN_8c0f402c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f402c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl FUN_8c0f402c\n.set FUN_8c0f402c, FUN_8c0f402c_def\n");

}
//@unit 8c0f4040
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f4040_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f4040");
  return (unsigned)sh4_interp(0x8c0f4040, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f4040\n.set FUN_8c0f4040, FUN_8c0f4040_def\n");
}
//@unit 8c0f4108
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
int Class_12c1f0_m0_0f4108_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12c1f0_m0_0f4108");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c1f0);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0f3f58(ar4 + 0xa0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d8168(ar4 + 0x90,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d8168(ar4 + 0x80,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x5c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x50,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x40,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0c0264(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12c1f0_m0_0f4108\n.set Class_12c1f0_m0_0f4108, Class_12c1f0_m0_0f4108_def\n");

}
//@unit 8c0f41c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m1_0f41c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m1_0f41c8");
  return (unsigned)sh4_interp(0x8c0f41c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m1_0f41c8\n.set CAnimal_m1_0f41c8, CAnimal_m1_0f41c8_def\n");
}
//@unit 8c0f4250
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
undefined4 noop_0f4250_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f4250");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f4250\n.set noop_0f4250, noop_0f4250_def\n");

}
//@unit 8c0f4254
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
undefined4 noop_0f4254_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f4254");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f4254\n.set noop_0f4254, noop_0f4254_def\n");

}
//@unit 8c0f4258
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
undefined4 FUN_8c0f4258_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4258");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  undefined4 uVar2;
  int iVar3;
  le<int>* a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_bb4_0e06e4(ar5,ar5,ar6,ar7));
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x118 + *ar5))))(ar5,ar5_00,ar6,ar7));
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db864(ar5,ar4,ar6,ar7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,iVar1,ar6,ar7));
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a4_032154(uVar2,iVar1,ar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0x14))))
                            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),iVar1,ar6,ar7));
          if (iVar3 == 1) {
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4dc4(ar4,uVar2,ar6,ar7));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4dc4(uVar2,ar4,ar6,ar7));
            return uVar2;
          }
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,iVar1,ar6,ar7));
        }
      }
      return uVar2;
    }
    ar5_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x104 + *ar5))))(ar5,iVar4,ar6,ar7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0x14))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),(int)ar5_00 + 0xc4,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e1c(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    a5 = (le<int>* )(unsigned)((int)ar5_00 + 0xc4);
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0xa8) + 0x14))))
                      ((le<int>* )(unsigned)(ar4 + 0xa8),a5,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e28(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}

__asm__(".globl FUN_8c0f4258\n.set FUN_8c0f4258, FUN_8c0f4258_def\n");

}
//@unit 8c0f43bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f43bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f43bc");
  return (unsigned)sh4_interp(0x8c0f43bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f43bc\n.set FUN_8c0f43bc, FUN_8c0f43bc_def\n");
}
//@unit 8c0f4974
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
undefined4 FUN_8c0f4974_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4974");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a5;
  
  a5 = ar4 + 0xa0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x194 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,a5,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,a5,ar5,ar7));
  return 1;
}

__asm__(".globl FUN_8c0f4974\n.set FUN_8c0f4974, FUN_8c0f4974_def\n");

}
//@unit 8c0f49b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m7_0f49b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m7_0f49b8");
  return (unsigned)sh4_interp(0x8c0f49b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m7_0f49b8\n.set CAnimal_m7_0f49b8, CAnimal_m7_0f49b8_def\n");
}
//@unit 8c0f4b44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f4b44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f4b44");
  return (unsigned)sh4_interp(0x8c0f4b44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f4b44\n.set FUN_8c0f4b44, FUN_8c0f4b44_def\n");
}
//@unit 8c0f4b94
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
undefined4 noop_0f4b94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f4b94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f4b94\n.set noop_0f4b94, noop_0f4b94_def\n");

}
//@unit 8c0f4b98
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
undefined4 FUN_8c0f4b98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4b98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = ar4 + 0x5c;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e24(((undefined1 *)(fr0_ - 0x14)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x34))))(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e04(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f4b98\n.set FUN_8c0f4b98, FUN_8c0f4b98_def\n");

}
//@unit 8c0f4bf0
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
undefined4 noop_0f4bf0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f4bf0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f4bf0\n.set noop_0f4bf0, noop_0f4bf0_def\n");

}
//@unit 8c0f4bf4
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
undefined4 FUN_8c0f4bf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4bf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x34))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f4bf4\n.set FUN_8c0f4bf4, FUN_8c0f4bf4_def\n");

}
//@unit 8c0f4c0c
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
undefined4 FUN_8c0f4c0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4c0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl FUN_8c0f4c0c\n.set FUN_8c0f4c0c, FUN_8c0f4c0c_def\n");

}
//@unit 8c0f4c5c
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
int FUN_8c0f4c5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4c5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x70);
  *(le<int>* )(unsigned)(ar4 + 0x70) = iVar1 + 1;
  return iVar1;
}

__asm__(".globl FUN_8c0f4c5c\n.set FUN_8c0f4c5c, FUN_8c0f4c5c_def\n");

}
//@unit 8c0f4c78
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
undefined4 s_CItem_BeNotReference_0f4c7a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CItem_BeNotReference_0f4c7a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<int>* )(unsigned)(ar4 + 0x70) = *(le<int>* )(unsigned)(ar4 + 0x70) + -1;
  if (*(le<int>* )(unsigned)(ar4 + 0x70) < 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x19,
               (&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x36,1,2));
    *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x70);
}

__asm__(".globl s_CItem_BeNotReference_0f4c7a\n.set s_CItem_BeNotReference_0f4c7a, s_CItem_BeNotReference_0f4c7a_def\n");

}
//@unit 8c0f4cd0
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
undefined4 FUN_8c0f4cd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4cd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023aa0(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f4cd0\n.set FUN_8c0f4cd0, FUN_8c0f4cd0_def\n");

}
//@unit 8c0f4cf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f4cf0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f4cf0");
  return (unsigned)sh4_interp(0x8c0f4cf0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f4cf0\n.set FUN_8c0f4cf0, FUN_8c0f4cf0_def\n");
}
//@unit 8c0f4d34
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
undefined4 FUN_8c0f4d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4d34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x74) & 0x80000000) == 0x80000000) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0f4d34\n.set FUN_8c0f4d34, FUN_8c0f4d34_def\n");

}
//@unit 8c0f4d54
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
undefined4 ret_const_1_0f4d54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0f4d54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0f4d54\n.set ret_const_1_0f4d54, ret_const_1_0f4d54_def\n");

}
//@unit 8c0f4d5c
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
undefined4 ret_const_0_0f4d5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0f4d5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0f4d5c\n.set ret_const_0_0f4d5c, ret_const_0_0f4d5c_def\n");

}
//@unit 8c0f4d64
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
undefined4 ret_const_0_0f4d64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0f4d64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0f4d64\n.set ret_const_0_0f4d64, ret_const_0_0f4d64_def\n");

}
//@unit 8c0f4d6c
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
undefined4 ret_const_0_0f4d6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0f4d6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0f4d6c\n.set ret_const_0_0f4d6c, ret_const_0_0f4d6c_def\n");

}
//@unit 8c0f4d74
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
undefined4 ret_const_1_0f4d74_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0f4d74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0f4d74\n.set ret_const_1_0f4d74, ret_const_1_0f4d74_def\n");

}
//@unit 8c0f4d7c
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
undefined4 ret_const_0_0f4d7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0f4d7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0f4d7c\n.set ret_const_0_0f4d7c, ret_const_0_0f4d7c_def\n");

}
//@unit 8c0f4d84
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
undefined4 FUN_8c0f4d84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4d84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0x7fffffff;
  return 1;
}

__asm__(".globl FUN_8c0f4d84\n.set FUN_8c0f4d84, FUN_8c0f4d84_def\n");

}
//@unit 8c0f4da4
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
undefined4 Vec3_assign_wrap_0f4da4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Vec3_assign_wrap_0f4da4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x40,ar4 + 0x30,ar6,ar7));
  return uVar1;
}

__asm__(".globl Vec3_assign_wrap_0f4da4\n.set Vec3_assign_wrap_0f4da4, Vec3_assign_wrap_0f4da4_def\n");

}
//@unit 8c0f4dc4
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
int FUN_8c0f4dc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4dc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<undefined4>* puVar3;
  
  iVar2 = *(le<int>* )(unsigned)(0x104 + ar4);
  if (*(le<int>* )(unsigned)(0x104 + ar4) != 3) {
    puVar3 = (le<undefined4>* )(unsigned)(ar4 + *(le<int>* )(unsigned)(0x104 + ar4) * 8 + 0xec);
    *puVar3 = 1;
    puVar3[1] = ar5;
    *(le<int>* )(unsigned)(0x104 + ar4) = *(le<int>* )(unsigned)(0x104 + ar4) + 1;
    iVar1 = 0x104;
    iVar2 = 3;
    if (3 < *(le<int>* )(unsigned)(0x104 + ar4)) {
      *(le<undefined4>* )(unsigned)(0x104 + ar4) = 3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0f4dc4\n.set FUN_8c0f4dc4, FUN_8c0f4dc4_def\n");

}
//@unit 8c0f4e1c
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
int FUN_8c0f4e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4e1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x108;
  *(le<undefined4>* )(unsigned)(0x108 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0f4e1c\n.set FUN_8c0f4e1c, FUN_8c0f4e1c_def\n");

}
//@unit 8c0f4e28
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
int FUN_8c0f4e28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4e28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(le<undefined4>* )(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0f4e28\n.set FUN_8c0f4e28, FUN_8c0f4e28_def\n");

}
//@unit 8c0f4e34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f4e34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f4e34");
  return (unsigned)sh4_interp(0x8c0f4e34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f4e34\n.set FUN_8c0f4e34, FUN_8c0f4e34_def\n");
}
//@unit 8c0f4ebc
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
undefined4 FUN_8c0f4ebc_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4ebc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = ar5[7];
  *(le<undefined4>* )(unsigned)(ar4 + 0x74) = ar5[8];
  return 0x74;
}

__asm__(".globl FUN_8c0f4ebc\n.set FUN_8c0f4ebc, FUN_8c0f4ebc_def\n");

}
//@unit 8c0f4f0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f4f0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f4f0c");
  return (unsigned)sh4_interp(0x8c0f4f0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f4f0c\n.set FUN_8c0f4f0c, FUN_8c0f4f0c_def\n");
}
//@unit 8c0f4fa4
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
uint FUN_8c0f4fa4_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4fa4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  *ar5 = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7));
  ar5[7] = *(le<undefined4>* )(unsigned)(ar4 + 0x6c);
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xfffffffd;
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0f4fa4\n.set FUN_8c0f4fa4, FUN_8c0f4fa4_def\n");

}
//@unit 8c0f5004
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_No_2ld_kind_d_cat_d_food_d_r_0f5008");
  return (unsigned)sh4_interp(0x8c0f5004, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set s_No_2ld_kind_d_cat_d_food_d_r_0f5008, s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
}
//@unit 8c0f50b4
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
undefined4 FUN_8c0f50b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f50b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0xffffffff;
  *(le<undefined4>* )(unsigned)(ar4 + 0x28) = 0xffffffff;
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0x32;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x74) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  *(le<undefined4>* )(unsigned)(0x168 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x164 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x16c + ar4) = 1;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x80000000;
  return 0x74;
}

__asm__(".globl FUN_8c0f50b4\n.set FUN_8c0f50b4, FUN_8c0f50b4_def\n");

}
//@unit 8c0f511c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m8_0f511c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m8_0f511c");
  return (unsigned)sh4_interp(0x8c0f511c, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m8_0f511c\n.set CAnimal_m8_0f511c, CAnimal_m8_0f511c_def\n");
}
//@unit 8c0f528c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f528c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f528c");
  return (unsigned)sh4_interp(0x8c0f528c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f528c\n.set FUN_8c0f528c, FUN_8c0f528c_def\n");
}
//@unit 8c0f52c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f52c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f52c8");
  return (unsigned)sh4_interp(0x8c0f52c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f52c8\n.set FUN_8c0f52c8, FUN_8c0f52c8_def\n");
}
//@unit 8c0f5308
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5308_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5308");
  return (unsigned)sh4_interp(0x8c0f5308, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5308\n.set FUN_8c0f5308, FUN_8c0f5308_def\n");
}
//@unit 8c0f532c
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
undefined4 FUN_8c0f532c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f532c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0xa0 + ar4) = ar5;
  *(le<undefined4>* )(unsigned)(0xa4 + ar4) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0x24))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),*(le<undefined4>* )(unsigned)(0xa0 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f532c\n.set FUN_8c0f532c, FUN_8c0f532c_def\n");

}
//@unit 8c0f5368
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
undefined4 FUN_8c0f5368_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5368");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0xc))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),ar4 + 0x30,ar4 + 0x50,
                     *(le<undefined4>* )(unsigned)(0xa0 + ar4)));
  return uVar1;
}

__asm__(".globl FUN_8c0f5368\n.set FUN_8c0f5368, FUN_8c0f5368_def\n");

}
//@unit 8c0f5398
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5398_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5398");
  return (unsigned)sh4_interp(0x8c0f5398, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5398\n.set FUN_8c0f5398, FUN_8c0f5398_def\n");
}
//@unit 8c0f54b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f54b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f54b8");
  return (unsigned)sh4_interp(0x8c0f54b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f54b8\n.set FUN_8c0f54b8, FUN_8c0f54b8_def\n");
}
//@unit 8c0f54d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f54d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f54d0");
  return (unsigned)sh4_interp(0x8c0f54d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f54d0\n.set FUN_8c0f54d0, FUN_8c0f54d0_def\n");
}
//@unit 8c0f54ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f54ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f54ec");
  return (unsigned)sh4_interp(0x8c0f54ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f54ec\n.set FUN_8c0f54ec, FUN_8c0f54ec_def\n");
}
//@unit 8c0f55d8
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
int Class_12c058_m0_0f55d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12c058_m0_0f55d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c058);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x17c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x178,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x170,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12c058_m0_0f55d8\n.set Class_12c058_m0_0f55d8, Class_12c058_m0_0f55d8_def\n");

}
//@unit 8c0f5660
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12c058_m1_0f5660_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12c058_m1_0f5660");
  return (unsigned)sh4_interp(0x8c0f5660, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12c058_m1_0f5660\n.set Class_12c058_m1_0f5660, Class_12c058_m1_0f5660_def\n");
}
//@unit 8c0f56e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f56e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f56e8");
  return (unsigned)sh4_interp(0x8c0f56e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f56e8\n.set FUN_8c0f56e8, FUN_8c0f56e8_def\n");
}
//@unit 8c0f5730
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
undefined4 FUN_8c0f5730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5730");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x170) + 8))))((le<int>* )(unsigned)(ar4 + 0x170),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5730\n.set FUN_8c0f5730, FUN_8c0f5730_def\n");

}
//@unit 8c0f5754
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
undefined4 FUN_8c0f5754_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5754");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0x178,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0f5754\n.set FUN_8c0f5754, FUN_8c0f5754_def\n");

}
//@unit 8c0f577c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f577c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f577c");
  return (unsigned)sh4_interp(0x8c0f577c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f577c\n.set FUN_8c0f577c, FUN_8c0f577c_def\n");
}
//@unit 8c0f57f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f57f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f57f0");
  return (unsigned)sh4_interp(0x8c0f57f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f57f0\n.set FUN_8c0f57f0, FUN_8c0f57f0_def\n");
}
//@unit 8c0f5878
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
undefined4 get_field_24_0f5878_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_24_0f5878");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x24);
}

__asm__(".globl get_field_24_0f5878\n.set get_field_24_0f5878, get_field_24_0f5878_def\n");

}
//@unit 8c0f5880
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
int FUN_8c0f5880_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5880");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x170;
}

__asm__(".globl FUN_8c0f5880\n.set FUN_8c0f5880, FUN_8c0f5880_def\n");

}
//@unit 8c0f5890
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
int FUN_8c0f5890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5890");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x178;
}

__asm__(".globl FUN_8c0f5890\n.set FUN_8c0f5890, FUN_8c0f5890_def\n");

}
//@unit 8c0f58a0
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
undefined4 noop_0f58a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f58a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f58a0\n.set noop_0f58a0, noop_0f58a0_def\n");

}
//@unit 8c0f58a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f58a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f58a4");
  return (unsigned)sh4_interp(0x8c0f58a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f58a4\n.set FUN_8c0f58a4, FUN_8c0f58a4_def\n");
}
//@unit 8c0f5a48
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
int Class_12bec0_m0_0f5a48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bec0_m0_0f5a48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12bec0);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x1dc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x1bc,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x1b4,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12bec0_m0_0f5a48\n.set Class_12bec0_m0_0f5a48, Class_12bec0_m0_0f5a48_def\n");

}
//@unit 8c0f5ad0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5ad0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5ad0");
  return (unsigned)sh4_interp(0x8c0f5ad0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5ad0\n.set FUN_8c0f5ad0, FUN_8c0f5ad0_def\n");
}
//@unit 8c0f5b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Failed_to_load_textuer_FOOD_0f5b18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Failed_to_load_textuer_FOOD_0f5b18");
  return (unsigned)sh4_interp(0x8c0f5b10, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Failed_to_load_textuer_FOOD_0f5b18\n.set s_Failed_to_load_textuer_FOOD_0f5b18, s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
}
//@unit 8c0f5c88
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
s_Failed_to_load_textuer_FO_wrap_0f5c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Failed_to_load_textuer_FO_wrap_0f5c88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_textuer_FOOD_0f5b18(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_load_textuer_FO_wrap_0f5c88\n.set s_Failed_to_load_textuer_FO_wrap_0f5c88, s_Failed_to_load_textuer_FO_wrap_0f5c88_def\n");

}
//@unit 8c0f5ca8
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
undefined4 Class_12bec0_m2_0f5ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bec0_m2_0f5ca8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x28))))(ar4,ar7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5fdc(ar4,ar7,ar6,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(ar4,ar7,ar6,ar7_00));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_70_05f490(ar4,ar7,ar6,ar7_00));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(ar4,ar7,ar6,ar7_00));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5368(ar4,ar7,ar6,ar7_00));
  return 1;
}

__asm__(".globl Class_12bec0_m2_0f5ca8\n.set Class_12bec0_m2_0f5ca8, Class_12bec0_m2_0f5ca8_def\n");

}
//@unit 8c0f5d1c
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
undefined4 Class_12bec0_m3_0f5d1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12bec0_m3_0f5d1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x28))))(ar4,ar7,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(ar4,ar7,ar6,ar7_00));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_70_05f490(ar4,ar7,ar6,ar7_00));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(ar4,ar7,ar6,ar7_00));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5368(ar4,ar7,ar6,ar7_00));
  return 1;
}

__asm__(".globl Class_12bec0_m3_0f5d1c\n.set Class_12bec0_m3_0f5d1c, Class_12bec0_m3_0f5d1c_def\n");

}
//@unit 8c0f5d80
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
undefined4 FUN_8c0f5d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5d80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5d80\n.set FUN_8c0f5d80, FUN_8c0f5d80_def\n");

}
//@unit 8c0f5d98
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
undefined4 FUN_8c0f5d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5d98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl FUN_8c0f5d98\n.set FUN_8c0f5d98, FUN_8c0f5d98_def\n");

}
//@unit 8c0f5de8
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
int FUN_8c0f5de8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5de8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  iVar1 = 0x1cc;
  *(le<undefined4>* )(unsigned)(0x1cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0f5de8\n.set FUN_8c0f5de8, FUN_8c0f5de8_def\n");

}
//@unit 8c0f5e0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5e0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5e0c");
  return (unsigned)sh4_interp(0x8c0f5e0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5e0c\n.set FUN_8c0f5e0c, FUN_8c0f5e0c_def\n");
}
//@unit 8c0f5f08
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
undefined4 FUN_8c0f5f08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5f08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x1b4,ar5,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5f08\n.set FUN_8c0f5f08, FUN_8c0f5f08_def\n");

}
//@unit 8c0f5f50
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
undefined4 FUN_8c0f5f50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5f50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x40))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5f50\n.set FUN_8c0f5f50, FUN_8c0f5f50_def\n");

}
//@unit 8c0f5f6c
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
undefined4 FUN_8c0f5f6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5f6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x40))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5f6c\n.set FUN_8c0f5f6c, FUN_8c0f5f6c_def\n");

}
//@unit 8c0f5f88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5f88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5f88");
  return (unsigned)sh4_interp(0x8c0f5f88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5f88\n.set FUN_8c0f5f88, FUN_8c0f5f88_def\n");
}
//@unit 8c0f5f94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5f94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5f94");
  return (unsigned)sh4_interp(0x8c0f5f94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5f94\n.set FUN_8c0f5f94, FUN_8c0f5f94_def\n");
}
//@unit 8c0f5fa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5fa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5fa0");
  return (unsigned)sh4_interp(0x8c0f5fa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5fa0\n.set FUN_8c0f5fa0, FUN_8c0f5fa0_def\n");
}
//@unit 8c0f5fac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5fac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5fac");
  return (unsigned)sh4_interp(0x8c0f5fac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5fac\n.set FUN_8c0f5fac, FUN_8c0f5fac_def\n");
}
//@unit 8c0f5fb8
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
undefined4 noop_0f5fb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f5fb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f5fb8\n.set noop_0f5fb8, noop_0f5fb8_def\n");

}
//@unit 8c0f5fbc
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
undefined4 FUN_8c0f5fbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f5fbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f5fbc\n.set FUN_8c0f5fbc, FUN_8c0f5fbc_def\n");

}
//@unit 8c0f5fdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f5fdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f5fdc");
  return (unsigned)sh4_interp(0x8c0f5fdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f5fdc\n.set FUN_8c0f5fdc, FUN_8c0f5fdc_def\n");
}
//@unit 8c0f66ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f66ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f66ac");
  return (unsigned)sh4_interp(0x8c0f66ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f66ac\n.set FUN_8c0f66ac, FUN_8c0f66ac_def\n");
}
//@unit 8c0f67e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f67e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f67e0");
  return (unsigned)sh4_interp(0x8c0f67e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f67e0\n.set FUN_8c0f67e0, FUN_8c0f67e0_def\n");
}
//@unit 8c0f67ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f67ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f67ec");
  return (unsigned)sh4_interp(0x8c0f67ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f67ec\n.set FUN_8c0f67ec, FUN_8c0f67ec_def\n");
}
//@unit 8c0f6870
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
int FUN_8c0f6870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f6870");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x34,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f692c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0f6870\n.set FUN_8c0f6870, FUN_8c0f6870_def\n");

}
//@unit 8c0f68c0
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
int FUN_8c0f68c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f68c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x34,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x1c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0f68c0\n.set FUN_8c0f68c0, FUN_8c0f68c0_def\n");

}
//@unit 8c0f692c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f692c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f692c");
  return (unsigned)sh4_interp(0x8c0f692c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f692c\n.set FUN_8c0f692c, FUN_8c0f692c_def\n");
}
//@unit 8c0f69ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f69ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f69ec");
  return (unsigned)sh4_interp(0x8c0f69ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f69ec\n.set FUN_8c0f69ec, FUN_8c0f69ec_def\n");
}
//@unit 8c0f6ab0
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
undefined4 FUN_8c0f6ab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f6ab0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(ar4 + 0x2c) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0f6ab0\n.set FUN_8c0f6ab0, FUN_8c0f6ab0_def\n");

}
//@unit 8c0f6ac4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f6ac4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f6ac4");
  return (unsigned)sh4_interp(0x8c0f6ac4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f6ac4\n.set FUN_8c0f6ac4, FUN_8c0f6ac4_def\n");
}
//@unit 8c0f7118
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f7118_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f7118");
  return (unsigned)sh4_interp(0x8c0f7118, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f7118\n.set FUN_8c0f7118, FUN_8c0f7118_def\n");
}
//@unit 8c0f7204
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
int FUN_8c0f7204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7204");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x2c);
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ac4(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7278(ar4,ar5,ar6,ar7));
  }
  else if (iVar1 == 4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f692c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c0f7204\n.set FUN_8c0f7204, FUN_8c0f7204_def\n");

}
//@unit 8c0f7258
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
undefined4 FUN_8c0f7258_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7258");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0f7258\n.set FUN_8c0f7258, FUN_8c0f7258_def\n");

}
//@unit 8c0f7278
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f7278_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f7278");
  return (unsigned)sh4_interp(0x8c0f7278, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f7278\n.set FUN_8c0f7278, FUN_8c0f7278_def\n");
}
//@unit 8c0f72ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f72ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f72ec");
  return (unsigned)sh4_interp(0x8c0f72ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f72ec\n.set FUN_8c0f72ec, FUN_8c0f72ec_def\n");
}
//@unit 8c0f7408
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
undefined4 FUN_8c0f7408_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7408");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x1bc,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f7408\n.set FUN_8c0f7408, FUN_8c0f7408_def\n");

}
//@unit 8c0f7430
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
undefined4 noop_0f7430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f7430");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f7430\n.set noop_0f7430, noop_0f7430_def\n");

}
//@unit 8c0f7434
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
undefined4 noop_0f7434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f7434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f7434\n.set noop_0f7434, noop_0f7434_def\n");

}
//@unit 8c0f7438
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
undefined4 noop_0f7438_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0f7438");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0f7438\n.set noop_0f7438, noop_0f7438_def\n");

}
//@unit 8c0f743c
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
uint FUN_8c0f743c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f743c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x170,ar5,ar6,ar7));
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c0f743c\n.set FUN_8c0f743c, FUN_8c0f743c_def\n");

}
//@unit 8c0f7470
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
uint FUN_8c0f7470_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7470");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(ar4 + 0x178,ar5,ar6,ar7));
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c0f7470\n.set FUN_8c0f7470, FUN_8c0f7470_def\n");

}
//@unit 8c0f74a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f74a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f74a4");
  return (unsigned)sh4_interp(0x8c0f74a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f74a4\n.set FUN_8c0f74a4, FUN_8c0f74a4_def\n");
}
//@unit 8c0f78b0
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
undefined4 FUN_8c0f78b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f78b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f78cc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0f78b0\n.set FUN_8c0f78b0, FUN_8c0f78b0_def\n");

}
//@unit 8c0f78cc
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
undefined4 FUN_8c0f78cc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f78cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  return 0;
}

__asm__(".globl FUN_8c0f78cc\n.set FUN_8c0f78cc, FUN_8c0f78cc_def\n");

}
//@unit 8c0f78d8
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
le<undefined4>*  FUN_8c0f78d8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f78d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0db304(ar4 + 2,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(3); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x13,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  ar7_00 = 8;
  ar5_00 = ((void *)(unsigned)0x8c0f78b0);
  ar6_00 = ((void *)(unsigned)0x8c0f3ffc);
  ({ unsigned long t0_ = (unsigned long)(3); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x1b,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  *(le<undefined4>* )(unsigned)(0x9c + (int)ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  *(le<undefined4>* )(unsigned)(0x84 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0f78d8\n.set FUN_8c0f78d8, FUN_8c0f78d8_def\n");

}
//@unit 8c0f79b8
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
int FUN_8c0f79b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f79b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x8c,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x9c + ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0xa0,ar5,ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x84 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)(0x84 + ar4) = 0;
  iVar1 = 0x88;
  *(le<undefined4>* )(unsigned)(0x88 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0f79b8\n.set FUN_8c0f79b8, FUN_8c0f79b8_def\n");

}
//@unit 8c0f7a78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f7a78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f7a78");
  return (unsigned)sh4_interp(0x8c0f7a78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f7a78\n.set FUN_8c0f7a78, FUN_8c0f7a78_def\n");
}
//@unit 8c0f7b20
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
undefined4 main_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("main");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), game_init(ar4,ar5,ar6,ar7));
  while( true ) {
    uVar2 = 0x8c286ebc;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), game_poll_exit(0x8c286ebc,ar5,ar6,ar7));
    if (iVar1 < 0) break;
    (vsp = ((unsigned long)(fr0_ - 0)), game_frame(uVar2,ar5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_a(uVar2,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), game_shutdown_b(uVar2,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl game_main\n.set game_main, main_def\n");

}
//@unit 8c0f7b70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned game_init_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("game_init");
  return (unsigned)sh4_interp(0x8c0f7b70, ar4, ar5, ar6, ar7);
}
__asm__(".globl game_init\n.set game_init, game_init_def\n");
}
//@unit 8c0f7df8
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
undefined4 game_shutdown_a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_shutdown_a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = 0x8c286ebc;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b37c(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23403e(ar4_00,ar5,ar6,ar7));
  if (*(le<undefined4>* )(unsigned)0x8c43b570 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b570;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b574 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b574;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b578 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b578;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b57c != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b57c;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c43b580 != 0) {
    ar4_00 = *(le<undefined4>* )(unsigned)0x8c43b580;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(ar4_00,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl game_shutdown_a\n.set game_shutdown_a, game_shutdown_a_def\n");

}
//@unit 8c0f7ea0
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
undefined4 FUN_8c0f7ea0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7ea0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b4ea(0x8c43b584,0x15e,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f7ea0\n.set FUN_8c0f7ea0, FUN_8c0f7ea0_def\n");

}
//@unit 8c0f7ec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0f7ec0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0f7ec0");
  return (unsigned)sh4_interp(0x8c0f7ec0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0f7ec0\n.set FUN_8c0f7ec0, FUN_8c0f7ec0_def\n");
}
//@unit 8c0f7f78
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
int FUN_8c0f7f78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7f78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdc20(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa804(ar4 + 0x1054,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0f7f78\n.set FUN_8c0f7f78, FUN_8c0f7f78_def\n");

}
//@unit 8c0f7fa8
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
int FUN_8c0f7fa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7fa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0fa80c(ar4 + 0x1054,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0f7fa8\n.set FUN_8c0f7fa8, FUN_8c0f7fa8_def\n");

}
//@unit 8c0f7ff0
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
undefined4 FUN_8c0f7ff0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f7ff0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0x89134 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x8913c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x89140 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x1034 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa83c(ar4 + 0x1054,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f7ff0\n.set FUN_8c0f7ff0, FUN_8c0f7ff0_def\n");

}
//@unit 8c0f803c
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
undefined4 FUN_8c0f803c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f803c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  *(le<undefined4>* )(unsigned)(0x89140 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b93c0(*(le<undefined4>* )(unsigned)(0x89140 + ar4),0,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x1028 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bced0))))
                    (*(le<undefined4>* )(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x1030 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8128))))
                    (*(le<undefined4>* )(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x1038 + ar4) = uVar1;
  if (*(le<int>* )(unsigned)(0x1038 + ar4) < 0xb2) {
    *(le<int>* )(unsigned)(0x1038 + ar4) = *(le<int>* )(unsigned)(0x1038 + ar4) + 1;
  }
  else {
    *(le<undefined4>* )(unsigned)(0x1038 + ar4) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b951c(*(le<undefined4>* )(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x103c + ar4) = uVar1;
  *(le<undefined4>* )(unsigned)(0x1040 + ar4) = 0;
  if (*(char *)(unsigned)(*(le<int>* )(unsigned)(0x89140 + ar4) + 0x2c) == '\x01') {
    *(le<undefined4>* )(unsigned)(0x1040 + ar4) = 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bb158))))
                    (*(le<undefined4>* )(unsigned)(0x89140 + ar4),ar4 + 0x101c,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f803c\n.set FUN_8c0f803c, FUN_8c0f803c_def\n");

}
//@unit 8c0f8128
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
undefined4 get_field_c4_0f8128_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c4_0f8128");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc4 + ar4);
}

__asm__(".globl get_field_c4_0f8128\n.set get_field_c4_0f8128, get_field_c4_0f8128_def\n");

}
//@unit 8c0f8134
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
int FUN_8c0f8134_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f8134");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa688(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa910(ar4 + 0x1054,ar5,ar6,ar7));
  iVar1 = 0x1014;
  *(le<undefined4>* )(unsigned)(0x1014 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0f8134\n.set FUN_8c0f8134, FUN_8c0f8134_def\n");

}
//@unit 8c0f816c
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
int FUN_8c0f816c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f816c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0faa98(ar4 + 0x1054,ar5,ar6,ar7));
  iVar4 = 0;
  if (*(le<int>* )(unsigned)(0x89134 + ar4) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_REQUEST_HOT_0f9780(ar4,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x89134 + ar4) = uVar2;
    iVar4 = 0;
    if (*(le<int>* )(unsigned)(0x89140 + ar4) != 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(*(le<undefined4>* )(unsigned)(0x89140 + ar4),ar5,ar6,ar7));
      *(le<uint>* )(unsigned)(0x102c + ar4) = uVar3 & 0xffff;
      *(le<undefined4>* )(unsigned)(0x1034 + ar4) = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1011b0))))
                        (*(le<undefined4>* )(unsigned)(0x7cc + *(le<int>* )(unsigned)(0x89140 + ar4)),ar5,ar6,ar7));
      iVar1 = 0x1034;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(le<undefined4>* )(unsigned)(0x1034 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

__asm__(".globl FUN_8c0f816c\n.set FUN_8c0f816c, FUN_8c0f816c_def\n");

}
//@unit 8c0f8214
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
int FUN_8c0f8214_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f8214");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa9fc(ar4 + 0x1054,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa70c(ar4,ar5,ar6,ar7));
  iVar1 = 0x89134;
  *(le<undefined4>* )(unsigned)(0x89134 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0f8214\n.set FUN_8c0f8214, FUN_8c0f8214_def\n");

}
//@unit 8c0f824c
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
uint FUN_8c0f824c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f824c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fa944))))
                    (ar4 + 0x1054,ar4 + 0x1010,*(le<undefined4>* )(unsigned)(0x89138 + ar4),ar7));
  if (iVar1 == 0) {
    *(le<undefined4>* )(unsigned)(0x89138 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x89134 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl FUN_8c0f824c\n.set FUN_8c0f824c, FUN_8c0f824c_def\n");

}
//@unit 8c0f82a4
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
undefined4 FUN_8c0f82a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f82a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  
  if (*(le<int>* )(unsigned)(0x1014 + ar4) != 0) {
    if (*(le<int>* )(unsigned)(0x1014 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8214(ar4,ar5,ar6,ar7));
    if (*(le<int>* )(unsigned)(0x8913c + ar4) == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa6c8(ar4,uVar1,ar6_00,ar7));
    }
  }
  *(le<undefined4>* )(unsigned)(0x89138 + ar4) = 2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0f82a4\n.set FUN_8c0f82a4, FUN_8c0f82a4_def\n");

}
//@unit 8c0f8320
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
undefined4 FUN_8c0f8320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f8320");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(le<int>* )(unsigned)(0x1014 + ar4) == 0) {
    *(le<undefined4>* )(unsigned)(0x89138 + ar4) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0f8320\n.set FUN_8c0f8320, FUN_8c0f8320_def\n");

}
//@unit 8c0f8368
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
undefined4 s_HIGYOLINE0_0f8370_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_HIGYOLINE0_0f8370");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 348; for (int i_ = 0; i_ < 348; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined1 *ar5_00;
  int ar6_00;
  
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fda80(ar4 + 0x1054,0x1054,ar6,ar7));
  *(le<int>* )(unsigned)(ar4 + 0x89130) = ar5;
  *(le<int>* )(unsigned)(ar4 + 0x104c) = ar4;
  *(le<int>* )(unsigned)(ar4 + 0x1050) = ar6;
  *(le<undefined4>* )(unsigned)(ar4 + 0x89134) = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1408e4),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  if (ar5 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7));
      if (iVar1 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
        if (iVar1 == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
          if ((((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
             ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
            if (((iVar1 == 0) ||
                (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
               || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0
                  )) {
              *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
              if ((iVar1 == 0) ||
                 (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0)
                 ) {
                *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 5;
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                if (iVar1 != 0) {
                  return 0;
                }
                *(le<undefined4>* )(unsigned)(ar4 + 0x1044) = 6;
              }
            }
          }
        }
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if (((iVar1 == 0) ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7)), iVar1 == 0)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
      if (iVar1 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7));
        if (iVar1 == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7));
          if (iVar1 == 0) {
            *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7));
            if (iVar1 == 0) {
              *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7));
              if (iVar1 == 0) {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,0,ar6_00,ar7));
                if (iVar1 == 5) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 5;
                  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x104c) + 8) = *(le<undefined4>* )(unsigned)(ar4 + 0x102c);
                }
                else if ((iVar1 == 6) &&
                        (*(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 5,
                        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x104c) + 8) < *(le<int>* )(unsigned)(ar4 + 0x102c))) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 6;
                }
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
                if (iVar1 == 0) {
                  *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 7;
                }
                else {
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7));
                  if (iVar1 == 0) {
                    *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 8;
                  }
                  else {
                    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7));
                    if (iVar1 == 0) {
                      *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 10;
                    }
                    else {
                      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
                      if (iVar1 == 0) {
                        *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0xc;
                      }
                      else {
                        pcVar3 = ((undefined1 *)(unsigned)0x8c14098e);
                        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7));
                        if (iVar1 == 0) {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7));
                          if ((iVar1 < 0x13) && (0xc < iVar1)) {
                    
                            switch(iVar1) {
                            default:
                              *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0xe;
                              *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x104c) + 8) =
                                   *(le<undefined4>* )(unsigned)(ar4 + 0x102c);
                              break;
                            case 0xf:
                            case 0x10:
                              *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0xe;
                              if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x104c) + 8) + 1 < *(le<int>* )(unsigned)(ar4 + 0x102c))
                              {
                                *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0x10;
                              }
                              break;
                            case 0x11:
                              *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0x10;
                              if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x104c) + 8) + 2 < *(le<int>* )(unsigned)(ar4 + 0x102c))
                              {
                                *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0x12;
                              }
                            }
                          }
                        }
                        else {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(le<undefined4>* )(unsigned)(ar4 + 0x1048) = 0x12;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0x1044);
    if ((iVar1 < 7) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ee),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1409fa),ar6_00,ar7); });
        break;
      case 1:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409fe),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a0a),ar6_00,ar7); });
        break;
      case 2:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a0e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a1a),ar6_00,ar7); });
        break;
      case 3:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a1e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a2a),ar6_00,ar7); });
        break;
      case 4:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a2e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a3a),ar6_00,ar7); });
        break;
      case 5:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a3e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a4a),ar6_00,ar7); });
        break;
      case 6:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a4e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5a),ar6_00,ar7); });
      }
    }
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x94) == 1) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5e),ar6_00,ar7));
    }
    else if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x68) < 2) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a63),ar6_00,ar7));
    }
    else {
      iVar1 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x7c);
      if ((9 < iVar1) || (iVar1 < 0)) {
switchD_8c0f933e_caseD_6:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
        return 0;
      }
                    
      switch(iVar1) {
      case 0:
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a68),ar6_00,ar7));
        }
        break;
      case 1:
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a73),ar6_00,ar7));
        }
        break;
      case 2:
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a78),ar6_00,ar7));
        }
        break;
      case 3:
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a7f),ar6_00,ar7));
        }
        break;
      case 4:
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a88),ar6_00,ar7));
        }
        break;
      case 5:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5e),ar6_00,ar7));
        break;
      case 6:
        goto switchD_8c0f933e_caseD_6;
      case 7:
        pcVar3 = ((undefined1 *)(unsigned)0x8c140a6c);
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7));
        if ((1 < iVar1) && (*(le<undefined4>* )(unsigned)(ar4 + 0x1040) = 0, *(le<int>* )(unsigned)(ar4 + 0xc) == 0)) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a8f),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a98),ar6_00,ar7); });
        }
        break;
      case 8:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a9d),ar6_00,ar7));
        break;
      case 9:
        (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140aa4),ar6_00,ar7));
      }
    }
  }
  else if (ar5 == 4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if ((iVar1 == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140900),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140911),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14094e),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14097b),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14099b),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
            }
          }
        }
      }
    }
  }
  else if (ar5 == 5) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if ((iVar1 == 0) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7)), iVar1 == 0)) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409a1),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ad),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409b9),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409c5),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409d1),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
            }
          }
        }
      }
    }
  }
  else if (ar5 == 6) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409dd),ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),ar6 + 0x40,ar6_00,ar7); });
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(le<undefined4>* )(unsigned)(ar4 + 0x1050),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
  ar5_00 = ((undefined1 *)(fr0_ - 0x74));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(le<int>* )(unsigned)(ar4 + 0x1050) + 0x40,ar5_00,ar6_00,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0f824c(ar4,ar5_00,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl s_HIGYOLINE0_0f8370\n.set s_HIGYOLINE0_0f8370, s_HIGYOLINE0_0f8370_def\n");

}
//@unit 8c0f970c
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
undefined4 s_FROGMANLINE2_0f970c_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_FROGMANLINE2_0f970c");
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

__asm__(".globl s_FROGMANLINE2_0f970c\n.set s_FROGMANLINE2_0f970c, s_FROGMANLINE2_0f970c_def\n");

}
//@unit 8c0f9774
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REQUEST_HOT_0f9780_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REQUEST_HOT_0f9780");
  return (unsigned)sh4_interp(0x8c0f9774, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REQUEST_HOT_0f9780\n.set s_REQUEST_HOT_0f9780, s_REQUEST_HOT_0f9780_def\n");
}
//@unit 8c0fa204
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CHAPTER_02d_0fa206_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CHAPTER_02d_0fa206");
  return (unsigned)sh4_interp(0x8c0fa204, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CHAPTER_02d_0fa206\n.set s_CHAPTER_02d_0fa206, s_CHAPTER_02d_0fa206_def\n");
}
//@unit 8c0fa2b8
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
undefined4 FUN_8c0fa2b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa2b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(0x1014 + ar4) == 0) {
    return 0;
  }
  return *(le<undefined4>* )(unsigned)(0x89134 + ar4);
}

__asm__(".globl FUN_8c0fa2b8\n.set FUN_8c0fa2b8, FUN_8c0fa2b8_def\n");

}
//@unit 8c0fa2d8
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
undefined4 FUN_8c0fa2d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa2d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(0x1014 + ar4) == 0) {
    return 0;
  }
  return 0;
}

__asm__(".globl FUN_8c0fa2d8\n.set FUN_8c0fa2d8, FUN_8c0fa2d8_def\n");

}
//@unit 8c0fa2f0
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
undefined4 FUN_8c0fa2f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa2f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa310(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fa2f0\n.set FUN_8c0fa2f0, FUN_8c0fa2f0_def\n");

}
//@unit 8c0fa310
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
undefined4 FUN_8c0fa310_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa310");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,ar4,0x1010,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fa310\n.set FUN_8c0fa310, FUN_8c0fa310_def\n");

}
//@unit 8c0fa334
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
int FUN_8c0fa334_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa334");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  
  ar6_00 = 0x1010;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4,ar5,0x1010,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 1;
  iVar1 = *(le<int>* )(unsigned)(0x1040 + ar4);
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6_00,ar7));
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c0fa334\n.set FUN_8c0fa334, FUN_8c0fa334_def\n");

}
//@unit 8c0fa388
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
undefined4 FUN_8c0fa388_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa388");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar5 < 0xd) && (-1 < ar5)) {
                    
    switch((uint)ar5) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (0 < iVar1) {
        return 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (3 < iVar1) {
        return 1;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (4 < iVar1) {
        return 1;
      }
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (6 < iVar1) {
        return 1;
      }
      break;
    case 8:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (7 < iVar1) {
        return 1;
      }
      break;
    case 9:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (8 < iVar1) {
        return 1;
      }
      break;
    case 10:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (10 < iVar1) {
        return 1;
      }
      break;
    case 0xb:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (0xc < iVar1) {
        return 1;
      }
      break;
    case 0xc:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (0x12 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl FUN_8c0fa388\n.set FUN_8c0fa388, FUN_8c0fa388_def\n");

}
//@unit 8c0fa538
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
int FUN_8c0fa538_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ain0;
  
  iVar2 = 0;
  for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar4 + ain0 * 4 + 0x10,ar5,ar6,ar7));
    if (99 < iVar1) {
      ar5 = ((undefined1 *)(unsigned)0x8c140bcb);
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + ain0 * 4 + 0x10,((undefined1 *)(unsigned)0x8c140bcb),ar6,ar7); });
    }
    if (2 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0fa538\n.set FUN_8c0fa538, FUN_8c0fa538_def\n");

}
//@unit 8c0fa5b4
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
undefined4 FUN_8c0fa5b4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa5b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c0fa5b4\n.set FUN_8c0fa5b4, FUN_8c0fa5b4_def\n");

}
//@unit 8c0fa5bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fa5bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fa5bc");
  return (unsigned)sh4_interp(0x8c0fa5bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fa5bc\n.set FUN_8c0fa5bc, FUN_8c0fa5bc_def\n");
}
//@unit 8c0fa5f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fa5f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fa5f0");
  return (unsigned)sh4_interp(0x8c0fa5f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fa5f0\n.set FUN_8c0fa5f0, FUN_8c0fa5f0_def\n");
}
//@unit 8c0fa624
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fa624_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fa624");
  return (unsigned)sh4_interp(0x8c0fa624, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fa624\n.set FUN_8c0fa624, FUN_8c0fa624_def\n");
}
//@unit 8c0fa658
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
int FUN_8c0fa658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa658");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar4 + 0x4ac,ar5,ar6,ar7));
  return iVar1 + 1;
}

__asm__(".globl FUN_8c0fa658\n.set FUN_8c0fa658, FUN_8c0fa658_def\n");

}
//@unit 8c0fa688
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
int FUN_8c0fa688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa688");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c944(ar4_00,ar5,ar6,ar7));
  iVar1 = 0x8913c;
  *(le<undefined4>* )(unsigned)(0x8913c + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0fa688\n.set FUN_8c0fa688, FUN_8c0fa688_def\n");

}
//@unit 8c0fa6c8
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
int FUN_8c0fa6c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa6c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c964(ar4_00,(&(*(undefined1 *)(unsigned)0x8c1402d0)),ar6,ar7));
  iVar1 = 0x8913c;
  *(le<undefined4>* )(unsigned)(0x8913c + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c0fa6c8\n.set FUN_8c0fa6c8, FUN_8c0fa6c8_def\n");

}
//@unit 8c0fa70c
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
int FUN_8c0fa70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa70c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(0x1018 + ar4);
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x1018 + ar4) = 0;
    iVar1 = 0x89130;
    *(le<undefined4>* )(unsigned)(0x89130 + ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0fa70c\n.set FUN_8c0fa70c, FUN_8c0fa70c_def\n");

}
//@unit 8c0fa740
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
undefined4 get_field_89130_0fa740_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_89130_0fa740");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x89130 + ar4);
}

__asm__(".globl get_field_89130_0fa740\n.set get_field_89130_0fa740, get_field_89130_0fa740_def\n");

}
//@unit 8c0fa74c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fa74c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fa74c");
  return (unsigned)sh4_interp(0x8c0fa74c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fa74c\n.set FUN_8c0fa74c, FUN_8c0fa74c_def\n");
}
//@unit 8c0fa804
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
undefined4 FUN_8c0fa804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c0fa804\n.set FUN_8c0fa804, FUN_8c0fa804_def\n");

}
//@unit 8c0fa80c
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
int free_if_nonnull_wrap_0fa80c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0fa80c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0fa80c\n.set free_if_nonnull_wrap_0fa80c, free_if_nonnull_wrap_0fa80c_def\n");

}
//@unit 8c0fa83c
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
undefined4 FUN_8c0fa83c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa83c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  *(undefined1 *)(unsigned)(ar4 + 5) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xf) = 0;
  ar4[0xe] = 0;
  ar4[0xd] = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x17) = 0;
  *(le<undefined4>* )(unsigned)(0x84 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0x90 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb4 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb0 + (int)ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
  ar5_00 = (int)ar4 + 0xc8;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x14)),ar5_00,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01f528(0x8c3dd7dc,ar5_00,ar6,ar7));
  ar4[2] = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01f520(0x8c3dd7dc,ar5_00,ar6,ar7));
  ar4[3] = uVar1;
  *ar4 = 1;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0fda80(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0fa83c\n.set FUN_8c0fa83c, FUN_8c0fa83c_def\n");

}
//@unit 8c0fa910
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
undefined4 FUN_8c0fa910_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa910");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa9fc(ar4,ar5,ar6,ar7));
  while (*ar4 != 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0faa98(ar4,ar5,ar6,ar7));
  }
  *ar4 = 1;
  return 1;
}

__asm__(".globl FUN_8c0fa910\n.set FUN_8c0fa910, FUN_8c0fa910_def\n");

}
//@unit 8c0fa944
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
undefined4 FUN_8c0fa944_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa944");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*ar4 == 1) {
    ar4[4] = ar5;
    uVar1 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0fae26(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      *(le<undefined4>* )(unsigned)(ar4[4] + 4) = ar6;
      *(le<undefined4>* )(unsigned)(ar4[4] + 8) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) = 0;
      *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 0x28) = 0;
      *(undefined1 *)(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 0x2c) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x70) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x74) = 0;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x78) = 0;
      *(le<undefined4>* )(unsigned)(0x880d4 + (int)ar4) = 0;
      *(le<undefined4>* )(unsigned)(0x880d8 + (int)ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,uVar1,ar7));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fa944\n.set FUN_8c0fa944, FUN_8c0fa944_def\n");

}
//@unit 8c0fa9fc
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
undefined4 FUN_8c0fa9fc_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fa9fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((1 < *ar4) && (uVar1 = 1, *(le<int>* )(unsigned)(0xb0 + (int)ar4) != 1)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faa40(ar4,ar5,ar6,ar7));
    *ar4 = 1;
    *(le<undefined4>* )(unsigned)(ar4[4] + 4) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fa9fc\n.set FUN_8c0fa9fc, FUN_8c0fa9fc_def\n");

}
//@unit 8c0faa40
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
undefined4 FUN_8c0faa40_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0faa40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *ar4) {
    if (*ar4 == 7) {
      ar5 = *(le<undefined4>* )(unsigned)(0xb4 + (int)ar4);
      (vsp = ((unsigned long)(fr0_ - 0)), pack_release_entry_handle(0x8c2b59d0,ar5,ar6,ar7));
      *ar4 = 6;
    }
    *(le<undefined4>* )(unsigned)(0xc0 + (int)ar4) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c0faa40\n.set FUN_8c0faa40, FUN_8c0faa40_def\n");

}
//@unit 8c0faa94
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
undefined * s_SPEECH_0faa98_def(le<int>* ar4,undefined4 ar5,char *ar6,le<int>* ar7)

{
  TRACE_ENTER("s_SPEECH_0faa98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  char *ar6_00;
  le<int>* ar7_00;
  
  if (0 < ar4[0x2e]) {
    ar4[0x2e] = ar4[0x2e] + -1;
  }
  if (0 < ar4[0x2f]) {
    ar4[0x2f] = ar4[0x2f] + -1;
  }
  if ((ar4[0x22035] == 0) && (0 < ar4[0x22036])) {
    ar4[0x22036] = ar4[0x22036] + -1;
  }
  iVar2 = *ar4;
  if (8 < iVar2) {
    return (undefined *)(unsigned)8;
  }
  if (iVar2 < 1) {
    return (undefined *)(unsigned)1;
  }
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c0fab28))[iVar2 + -1];
                    
  switch(iVar2) {
  case 1:
    break;
  case 2:
    *ar4 = 1;
    ar4[0x2c] = 0;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
    puVar1 = (undefined *)(unsigned)0x0;
    if (ar4[4] != 0) {
      *(le<undefined4>* )(unsigned)(ar4[4] + 4) = 0;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fb7d0(ar4,ar5,ar6,ar7));
    }
    break;
  case 3:
    if (ar4[0x2c] == 1) {
      *ar4 = 2;
      return (undefined *)(unsigned)2;
    }
    ar7 = ar4 + 0xe;
    ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
    iVar2 = ({ extern void host_log(const char*,...); int r_ = (int)((*(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 12) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 8) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 4) = 1, vsp = ((unsigned long)(fr0_ - 76)) - 12, FUN_8c02126c(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),ar7))); static int n_; if (n_++ < 30) host_log("02126c %s r=%d\n", (const char*)(unsigned long)(ar4 + 5), r_); r_; });
    if (iVar2 == 2) {
      return (undefined *)(unsigned)2;
    }
    if (iVar2 == 0) {
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      *ar4 = 2;
      return (undefined *)(unsigned)2;
    }
    ar4[0xd] = 0;
    while ((*(le<int>* )(fr0_ - 0x4c)) = ar4[0xd], *(char *)(unsigned)(ar4[0xe] + (*(le<int>* )(fr0_ - 0x4c)) * 0x28) != '\0') {
      ar4[0xd] = ar4[0xd] + 1;
    }
    *ar4 = 4;
  case 4:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)(unsigned)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), s_SPEECH_0faf9e(ar4,*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x20,ar6,ar7));
      if (iVar2 == 0) {
        puVar1 = (undefined *)(unsigned)0x2;
        *ar4 = 2;
      }
      else {
        *ar4 = 5;
switchD_8c0fab12_caseD_5:
        if (ar4[0x2c] == 1) {
          puVar1 = (undefined *)(unsigned)0x2;
          *ar4 = 2;
        }
        else {
          ar7_00 = ar4 + 0x21;
          ar6_00 = ((undefined1 *)(unsigned)0x8c141dd0);
          iVar2 = ({ extern void host_log(const char*,...); int r_ = (int)((*(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 12) = (unsigned)ar4[0x1f], *(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 8) = (unsigned)ar4[0x20], *(le<unsigned>* )(((unsigned long)(fr0_ - 76)) - 4) = 1, vsp = ((unsigned long)(fr0_ - 76)) - 12, FUN_8c02126c(0x8c3eb334,ar4 + 0xf,((undefined1 *)(unsigned)0x8c141dd0),ar7_00))); static int n_; if (n_++ < 30) host_log("02126c %s r=%d\n", (const char*)(unsigned long)(ar4 + 0xf), r_); r_; });
          if (iVar2 == 2) {
            puVar1 = (undefined *)(unsigned)0x2;
          }
          else if (iVar2 == 0) {
            *(undefined1 *)(unsigned)(ar4 + 0x17) = 0;
            puVar1 = (undefined *)(unsigned)0x2;
            *ar4 = 2;
          }
          else {
            *ar4 = 6;
            ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); strcpy(((char *)(fr0_ - 0x2c)),*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x40,ar6_00,ar7_00); });
            if (((char *)(fr0_ - 0x2c))[0] == '\0') {
              ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); strcpy(((char *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c141dd7),ar6_00,ar7_00); });
            }
            puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), s_ERROR_0fb0de(ar4,((char *)(fr0_ - 0x2c)),ar6_00,ar7_00));
          }
        }
      }
    }
    break;
  case 5:
    goto switchD_8c0fab12_caseD_5;
  case 6:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)(unsigned)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = *(le<int>* )(unsigned)(ar4[0x22] + 0x20);
      if ((iVar2 < 9) && (0 < iVar2)) {
                    
        switch(iVar2) {
        case 1:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), s_ERR_wrap_0fb1d4(ar4,ar5,ar6,ar7));
          break;
        case 2:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fb20c(ar4,ar5,ar6,ar7));
          break;
        case 3:
          (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fb268(ar4,ar5,ar6,ar7));
          break;
        case 4:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), s_SPEECH_0fbe00(ar4,ar5,ar6,ar7));
          break;
        case 5:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fc5ac(ar4,ar5,ar6,ar7));
          break;
        case 6:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fc608(ar4,ar5,ar6,ar7));
          break;
        case 7:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fc69c(ar4,ar5,ar6,ar7));
          break;
        case 8:
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fc7c4(ar4,ar5,ar6,ar7));
        }
      }
      else {
        puVar1 = (undefined *)(unsigned)0x2;
        *ar4 = 2;
      }
    }
    break;
  case 7:
    puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0fb494(ar4,ar5,ar6,ar7));
    break;
  case 8:
    puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), s_SPEECH_0fbf2e(ar4,ar5,ar6,ar7));
  }
  return puVar1;
}

__asm__(".globl s_SPEECH_0faa98\n.set s_SPEECH_0faa98, s_SPEECH_0faa98_def\n");

}
//@unit 8c0fae24
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
undefined4 s_SPEECH_0fae26_def(le<undefined4>* ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_0fae26");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  
  ar4[0x2e] = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x28)),*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c141dd9),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x48)),*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(unsigned)0x8c141dde),ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0faf30(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 5) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),1));
      ar7 = 1;
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 0xf,((undefined1 *)(unsigned)0x8c141dd0),1));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 0xf,((undefined1 *)(fr0_ - 0x48)),ar6,ar7); });
    iVar1 = ({ extern void host_log(const char*,...); int r_ = (int)((*(le<unsigned>* )(((unsigned long)(fr0_ - 80)) - 12) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 80)) - 8) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 80)) - 4) = 1, vsp = ((unsigned long)(fr0_ - 80)) - 12, FUN_8c02126c(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),ar4 + 0xe))); static int n_; if (n_++ < 30) host_log("02126c-b %s r=%d\n", (const char*)(unsigned long)(ar4 + 5), r_); r_; });
    if (iVar1 == 0) {
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}

__asm__(".globl s_SPEECH_0fae26\n.set s_SPEECH_0fae26, s_SPEECH_0fae26_def\n");

}
//@unit 8c0faf30
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
undefined4 FUN_8c0faf30_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0faf30");
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

__asm__(".globl FUN_8c0faf30\n.set FUN_8c0faf30, FUN_8c0faf30_def\n");

}
//@unit 8c0faf98
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
undefined4 s_SPEECH_0faf9e_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_0faf9e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),*(le<undefined4>* )(unsigned)(ar4 + 0x38),ar6,ar7); });
    iVar2 = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7); });
    iVar2 = 0;
    while ((iVar2 < *(le<int>* )(unsigned)(ar4 + 0x34) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38),((undefined1 *)(fr0_ - 0x30)),ar6,ar7)), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(le<int>* )(unsigned)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(unsigned)(ar4 + 0x5c) != '\0') &&
     ((*(le<int>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x20) != *(le<int>* )(unsigned)(ar4 + 0x7c) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x5c,ar6,ar7)), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c021338(0x8c3eb334,ar4 + 0x3c,((undefined1 *)(unsigned)0x8c141dd0),1));
    *(undefined1 *)(unsigned)(ar4 + 0x5c) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x7c) = *(le<undefined4>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x20);
  *(le<undefined4>* )(unsigned)(ar4 + 0x80) = *(le<undefined4>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x24);
  return 1;
}

__asm__(".globl s_SPEECH_0faf9e\n.set s_SPEECH_0faf9e, s_SPEECH_0faf9e_def\n");

}
//@unit 8c0fb0d4
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
undefined4 s_ERROR_0fb0de_def(le<undefined4>* ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_ERROR_0fb0de");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar4_00;
  
  if (*ar5 == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(0x84 + (int)ar4)) == '\0') {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faf30(ar5,(&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x13,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = 2;
      *ar4 = 2;
    }
    else if (*ar5 == '#') {
      *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = *(le<undefined4>* )(unsigned)(0x84 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(le<int>* )(unsigned)(0x88 + (int)ar4) +
              *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x88 + (int)ar4) + 0x24) + 0x28;
      if (*(le<int>* )(unsigned)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(le<int>* )(unsigned)(0x88 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (ar4_00 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(0x84 + (int)ar4));
          (*(le<int>* )(unsigned)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(le<int>* )(unsigned)(ar4_00 + 0x24) + 0x28) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faf30(ar4_00,ar5,ar6,ar7));
        if (iVar2 == 0) {
          *(le<unsigned>* )(unsigned)(0x88 + (int)ar4) = ar4_00;
          *ar4 = 6;
          return 6;
        }
      }
      uVar1 = 2;
      *ar4 = 2;
    }
  }
  return uVar1;
}

__asm__(".globl s_ERROR_0fb0de\n.set s_ERROR_0fb0de, s_ERROR_0fb0de_def\n");

}
//@unit 8c0fb1d4
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
undefined4 s_ERR_wrap_0fb1d4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_ERR_wrap_0fb1d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(le<int>* )(unsigned)(0xb0 + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,(&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x1a,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl s_ERR_wrap_0fb1d4\n.set s_ERR_wrap_0fb1d4, s_ERR_wrap_0fb1d4_def\n");

}
//@unit 8c0fb20c
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
undefined4 FUN_8c0fb20c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb20c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 in_PR = 0;
  
  if (ar4[0x2c] == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    iVar2 = ar4[0x22];
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7); });
    uVar1 = 4;
    *ar4 = 4;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fb20c\n.set FUN_8c0fb20c, FUN_8c0fb20c_def\n");

}
//@unit 8c0fb268
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
undefined4 FUN_8c0fb268_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb268");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int iVar3;
  
  iVar3 = ar4[0x22];
  ar4[0x2d] = 0xffffffff;
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(unsigned)(iVar3 + 0x48) == '#') {
    ar4[0x23] = 0;
  }
  else if (*(char *)(unsigned)(iVar3 + 0x48) == '@') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,*(le<undefined4>* )(unsigned)(iVar3 + 0x4c),ar6,ar7));
    ar4[0x23] = uVar1;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fcd2c(ar4,iVar3 + 0x48,ar6,ar7));
    ar4[0x23] = uVar1;
    if ((int)ar4[0x23] < 0) {
      ar4[0x23] = 0;
    }
    if (*(le<int>* )(unsigned)(iVar3 + 0x4c) <= (int)ar4[0x23]) {
      ar4[0x23] = *(le<int>* )(unsigned)(iVar3 + 0x4c) + -1;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0faf30(ar4[0x23] * 0x24 + iVar3 + 0x54,((undefined1 *)(unsigned)0x8c141dec),ar6,ar7));
  if (iVar2 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7));
    return uVar1;
  }
  iVar3 = ar4[0x23] * 0x24 + iVar3 + 0x54;
  ar4_00 = 0x8c2b59d0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,iVar3,ar6,ar7));
  ar4[0x2d] = uVar1;
  if (-1 < (int)ar4[0x2d]) goto LAB_8c0fb436;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,iVar3,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,5,ar6,ar7));
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141df2),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141df8),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141dfe),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141e04),ar6,ar7));
      ar4[0x2d] = uVar1;
      break;
    case 4:
      goto switchD_8c0fb390_caseD_4;
    }
  }
  else {
switchD_8c0fb390_caseD_4:
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), pack_acquire_entry_handle(0x8c2b59d0,((undefined1 *)(unsigned)0x8c141e0a),ar6,ar7));
    ar4[0x2d] = uVar1;
  }
  if ((int)ar4[0x2d] < 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6,ar7));
    return uVar1;
  }
LAB_8c0fb436:
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021d90(0x8c2b59d0,ar4[0x2d],*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0xc0),0));
  *ar4 = 7;
  return 7;
}

__asm__(".globl FUN_8c0fb268\n.set FUN_8c0fb268, FUN_8c0fb268_def\n");

}
//@unit 8c0fb494
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fb494_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fb494");
  return (unsigned)sh4_interp(0x8c0fb494, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fb494\n.set FUN_8c0fb494, FUN_8c0fb494_def\n");
}
//@unit 8c0fb780
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
undefined4 FUN_8c0fb780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fb83c))))
                    (ar4,*(le<undefined4>* )(unsigned)
                          (*(le<int>* )(unsigned)(0x8c + ar4) * 0x24 + *(le<int>* )(unsigned)(0x88 + ar4) + 0x50
                          ),ar5,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fb780\n.set FUN_8c0fb780, FUN_8c0fb780_def\n");

}
//@unit 8c0fb7d0
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
undefined4 FUN_8c0fb7d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb7d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0x68);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      uVar2 = 0x43;
      break;
    case 1:
      uVar2 = 0x55;
      break;
    default:
      goto switchD_8c0fb7f2_caseD_2;
    case 4:
      uVar2 = 0x53;
    }
  }
  else {
switchD_8c0fb7f2_caseD_2:
    uVar2 = 0x4e;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fb83c(ar4,uVar2,4,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0fb7d0\n.set FUN_8c0fb7d0, FUN_8c0fb7d0_def\n");

}
//@unit 8c0fb83c
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
undefined4 FUN_8c0fb83c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fb83c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 8;
  if ((ar6 < 9) && (3 < ar6)) {
                    
    switch((uint)ar6) {
    case 4:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 5;
          return 0xb8;
        case 0x43:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x14;
          return 0xb8;
        case 0x46:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x19;
          return 0xb8;
        case 0x48:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x28;
          return 0xb8;
        case 0x49:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x23;
          return 0xb8;
        case 0x4c:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 10;
          return 0xb8;
        case 0x50:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xf;
          return 0xb8;
        case 0x53:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1e;
          return 0xb8;
        case 0x55:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2d;
          return 0xb8;
        }
      }
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0;
      return 0xb8;
    case 5:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 6;
          return 0xb8;
        case 0x43:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x15;
          return 0xb8;
        case 0x46:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1a;
          return 0xb8;
        case 0x48:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x29;
          return 0xb8;
        case 0x49:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x24;
          return 0xb8;
        case 0x4c:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xb;
          return 0xb8;
        case 0x50:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x10;
          return 0xb8;
        case 0x53:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1f;
          return 0xb8;
        case 0x55:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2e;
          return 0xb8;
        }
      }
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 1;
      return 0xb8;
    case 6:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 7;
          return 0xb8;
        case 0x43:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x16;
          return 0xb8;
        case 0x46:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1b;
          return 0xb8;
        case 0x48:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2a;
          return 0xb8;
        case 0x49:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x25;
          return 0xb8;
        case 0x4c:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xc;
          return 0xb8;
        case 0x50:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x11;
          return 0xb8;
        case 0x53:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x20;
          return 0xb8;
        case 0x55:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2f;
          return 0xb8;
        }
      }
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 2;
      return 0xb8;
    case 7:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 8;
          return 0xb8;
        case 0x43:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x17;
          return 0xb8;
        case 0x46:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1c;
          return 0xb8;
        case 0x48:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2b;
          return 0xb8;
        case 0x49:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x26;
          return 0xb8;
        case 0x4c:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xd;
          return 0xb8;
        case 0x50:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x12;
          return 0xb8;
        case 0x53:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x21;
          return 0xb8;
        case 0x55:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x30;
          return 0xb8;
        }
      }
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 3;
      return 0xb8;
    case 8:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 9;
          return 0xb8;
        case 0x43:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x18;
          return 0xb8;
        case 0x46:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1d;
          return 0xb8;
        case 0x48:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2c;
          return 0xb8;
        case 0x49:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x27;
          return 0xb8;
        case 0x4c:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xe;
          return 0xb8;
        case 0x50:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x13;
          return 0xb8;
        case 0x53:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x22;
          return 0xb8;
        case 0x55:
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x31;
          return 0xb8;
        }
      }
      uVar1 = 0xb8;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 4;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fb83c\n.set FUN_8c0fb83c, FUN_8c0fb83c_def\n");

}
//@unit 8c0fbdfc
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
undefined4 s_SPEECH_0fbe00_def(le<undefined4>* ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_0fbe00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<undefined4>* ar5_00;
  char *ar6_00;
  int ar5_01;
  
  ar5_01 = ar4[0x22];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 0x24) != '\0') {
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d658(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7); });
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c141dd0);
  ar5_00 = ar4 + 0x24;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), asr_register_strings(ar4[2],ar5_00,((undefined1 *)(unsigned)0x8c141dd0),ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d868(ar4[2],ar5_00,ar6_00,ar7));
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d71c(ar4[2],ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      ar4[0x2e] = 0x96;
      ar4[0x33] = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0fc4fc(ar4,ar5_01,ar6_00,ar7));
      if ((iVar1 == 1) || (*(le<int>* )(unsigned)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(le<int>* )(unsigned)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(le<int>* )(unsigned)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}

__asm__(".globl s_SPEECH_0fbe00\n.set s_SPEECH_0fbe00, s_SPEECH_0fbe00_def\n");

}
//@unit 8c0fbf28
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
undefined4 s_SPEECH_0fbf2e_def(le<undefined4>* ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  TRACE_ENTER("s_SPEECH_0fbf2e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<undefined4>* ar5_00;
  char *ar5_01;
  undefined *ar5_02;
  char *ar5_03;
  
  if (ar4[0x2c] == 1) {
    (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5,ar6,ar7));
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    if (ar4[0x22035] == 1) {
      ar4[0x2e] = 0;
      ar4[0x22035] = 0;
    }
    if (ar4[0x33] == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((undefined1 *)(fr0_ - 0x11c)),ar4 + 0x24,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141e17),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x120));
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      iVar2 = (*(le<unsigned>* )(((unsigned long)(fr0_ - 364)) - 12) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 364)) - 8) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 364)) - 4) = 1, vsp = ((unsigned long)(fr0_ - 364)) - 12, FUN_8c02126c(0x8c3eb334,((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141dd0),ar7));
      if (iVar2 == 1) {
        ar7 = (undefined1 *)(unsigned)0x1;
        ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
        ar5_00 = ar4 + 0x24;
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c021338(0x8c3eb334,ar5_00,((undefined1 *)(unsigned)0x8c141dd0),1));
        if (ar4[0x22035] == 0) {
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01bcf4(ar4[3],ar5_00,ar6,ar7));
        }
        if (ar4[0x22035] == 0) {
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01bd88(ar4[3],ar5_00,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c964(ar4[3],((undefined1 *)(unsigned)0x8c140bd0),ar6,ar7));
        ar4[0x33] = 0;
      }
    }
    ar5_03 = (char *)(unsigned)(uint)ar4[0x22];
    ((char *)(fr0_ - 0x90))[0] = '\0';
    ((le<int>* )(fr0_ - 0x9c))[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e1c),ar6,ar7); });
      ((le<int>* )(fr0_ - 0x9c))[0] = 1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d684(ar4[2],((le<int>* )(fr0_ - 0x9c)),ar6,ar7));
      if (((le<int>* )(fr0_ - 0x9c))[0] != 0) {
        *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (((le<int>* )(fr0_ - 0x9c))[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ((undefined1 *)(unsigned)0x8c141e20);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e20),ar6,ar7));
      if (((iVar2 == 0) && (0 < *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4[4] + 0x3c)))) &&
         (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 100) != *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4[4] + 0x3c)))) {
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),ar5_01,ar6,ar7));
          if (iVar3 == 0) break;
        }
        if (*(le<int>* )(unsigned)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = ((undefined1 *)(unsigned)0x8c141e26);
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e26),ar6,ar7); });
          for (iVar2 = 0; iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
            ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),ar5_01,ar6,ar7));
            if (iVar3 == 0) break;
          }
        }
        if (((char *)(fr0_ - 0x90))[0] != '-') {
          if (((char *)(fr0_ - 0x90))[0] == '?') {
            ar5_01 = ((undefined1 *)(unsigned)0x8c1417d0);
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c978(ar4[3],((undefined1 *)(unsigned)0x8c1417d0),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc3e4(ar4,ar5_01,ar6,ar7));
          }
          else {
            ar5_02 = ((undefined1 *)(unsigned)0x8c1411d0);
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01c978(ar4[3],((undefined1 *)(unsigned)0x8c1411d0),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc3e4(ar4,ar5_02,ar6,ar7));
            ar5_01 = ar5_03;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc4fc(ar4,ar5_03,ar6,ar7));
            if (iVar3 == 1) {
              ar5_01 = ar5_03;
              (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fdaac(ar4,ar5_03,ar6,ar7));
            }
          }
        }
        if (iVar2 < *(le<int>* )(unsigned)(ar5_03 + 0x6c)) {
          if (ar5_03[iVar2 * 0x68 + 0xb0] == '\0') {
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7));
          }
          else if (ar5_03[iVar2 * 0x68 + 0x90] == '\0') {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x70;
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x70,ar6,ar7));
          }
          else {
            ar6 = ar5_03 + iVar2 * 0x68 + 0x90;
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc94c(ar4,ar5_03 + iVar2 * 0x68 + 0xb0,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fc44c(ar4,ar5_03 + iVar2 * 0x68 + 0x90,ar6,ar7));
          }
          ar5_01 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(ar5_03 + iVar2 * 0x68 + 0xd4));
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fdd68(*(le<undefined4>* )(unsigned)(ar4[4] + 0x40),ar5_01,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        if (((char *)(fr0_ - 0x90))[0] == '!') {
          ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
          (vsp = ((unsigned long)(fr0_ - 364)), asr_register_strings(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
        }
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[4] + 0x40) + 0x70) == 0x11) {
          uVar1 = 2;
          *ar4 = 2;
        }
        else {
          uVar1 = (vsp = ((unsigned long)(fr0_ - 364)), s_ERROR_0fb0de(ar4,ar5_03 + iVar2 * 0x68 + 0xb4,ar6,ar7));
        }
      }
    }
  }
  return uVar1;
}

__asm__(".globl s_SPEECH_0fbf2e\n.set s_SPEECH_0fbf2e, s_SPEECH_0fbf2e_def\n");

}
//@unit 8c0fc3e4
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
undefined4 FUN_8c0fc3e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc3e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 0x74) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fc40c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fc3e4\n.set FUN_8c0fc3e4, FUN_8c0fc3e4_def\n");

}
//@unit 8c0fc40c
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
undefined4 FUN_8c0fc40c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc40c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x10)),ar4 + 0xc8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fc40c\n.set FUN_8c0fc40c, FUN_8c0fc40c_def\n");

}
//@unit 8c0fc440
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
undefined4 get_field_c8_0fc440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c8_0fc440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc8 + ar4);
}

__asm__(".globl get_field_c8_0fc440\n.set get_field_c8_0fc440, get_field_c8_0fc440_def\n");

}
//@unit 8c0fc44c
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
undefined4 FUN_8c0fc44c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc44c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
           *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200,ar6,ar7); });
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 200,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0fc44c\n.set FUN_8c0fc44c, FUN_8c0fc44c_def\n");

}
//@unit 8c0fc4c4
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
undefined4 FUN_8c0fc4c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  if (((iVar1 == 1) || (iVar1 == 4)) || (iVar1 == 5)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c0fc4c4\n.set FUN_8c0fc4c4, FUN_8c0fc4c4_def\n");

}
//@unit 8c0fc4fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fc4fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fc4fc");
  return (unsigned)sh4_interp(0x8c0fc4fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fc4fc\n.set FUN_8c0fc4fc, FUN_8c0fc4fc_def\n");
}
//@unit 8c0fc5ac
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
undefined4 FUN_8c0fc5ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc5ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(le<int>* )(unsigned)(0x88 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    (uVar1,*(le<undefined4>* )(unsigned)(iVar3 + 0x28),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar3 + iVar2 * 0x20 + 0x2c,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fc5ac\n.set FUN_8c0fc5ac, FUN_8c0fc5ac_def\n");

}
//@unit 8c0fc608
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
undefined4 FUN_8c0fc608_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc608");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(le<int>* )(unsigned)(0x88 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar4 + 0x28,ar6,ar7));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (*(le<int>* )(unsigned)(iVar4 + 0x30) <= iVar1) {
    iVar1 = *(le<int>* )(unsigned)(iVar4 + 0x30) + -1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar4 + 0x2c,ar6,ar7));
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(le<int>* )(unsigned)(iVar4 + 0x34) <= iVar2) {
    iVar2 = *(le<int>* )(unsigned)(iVar4 + 0x34) + -1;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fb0d4))))
                    (ar4,iVar4 + (iVar2 * *(le<int>* )(unsigned)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,ar6,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c0fc608\n.set FUN_8c0fc608, FUN_8c0fc608_def\n");

}
//@unit 8c0fc69c
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
undefined4 FUN_8c0fc69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fc69c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int unaff_r14 = 0;
  
  iVar4 = *(le<int>* )(unsigned)(ar4 + 0x88);
  for (iVar5 = 0; iVar5 < *(le<int>* )(unsigned)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
    unaff_r14 = 0;
    iVar6 = iVar4 + iVar5 * 0x2c;
    iVar3 = iVar6 + 0x70;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar3,ar6,ar7));
    if (*(char *)(unsigned)(iVar6 + 0x74) < '\x01') {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(iVar6 + 0x78,iVar3,ar6,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar6 + 0x74,ar6,ar7));
    }
    iVar6 = *(le<int>* )(unsigned)(iVar6 + 0x6c);
    if ((iVar6 < 6) && (-1 < iVar6)) {
                    
      switch(iVar6) {
      case 0:
        if (iVar1 == iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 1:
        if (iVar1 != iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 2:
        if (iVar1 < iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 3:
        if (iVar1 <= iVar3) {
          unaff_r14 = 1;
        }
        break;
      case 4:
        if (iVar3 < iVar1) {
          unaff_r14 = 1;
        }
        break;
      case 5:
        if (iVar3 <= iVar1) {
          unaff_r14 = 1;
        }
      }
    }
    if (unaff_r14 == 0) break;
  }
  if (unaff_r14 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar4 + 0x28,ar6,ar7));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar4 + 0x48,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl FUN_8c0fc69c\n.set FUN_8c0fc69c, FUN_8c0fc69c_def\n");

}
//@unit 8c0fc7c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fc7c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fc7c4");
  return (unsigned)sh4_interp(0x8c0fc7c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fc7c4\n.set FUN_8c0fc7c4, FUN_8c0fc7c4_def\n");
}
//@unit 8c0fc94c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fc94c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fc94c");
  return (unsigned)sh4_interp(0x8c0fc94c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fc94c\n.set FUN_8c0fc94c, FUN_8c0fc94c_def\n");
}
//@unit 8c0fcd2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fcd2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fcd2c");
  return (unsigned)sh4_interp(0x8c0fcd2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fcd2c\n.set FUN_8c0fcd2c, FUN_8c0fcd2c_def\n");
}
//@unit 8c0fd764
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fd764_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fd764");
  return (unsigned)sh4_interp(0x8c0fd764, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fd764\n.set FUN_8c0fd764, FUN_8c0fd764_def\n");
}
//@unit 8c0fd8d0
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
int FUN_8c0fd8d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fd8d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<int>* piVar3;
  
  if ((*(le<int>* )(unsigned)(0xb0 + ar4) == 1) || (*(le<int>* )(unsigned)(0xc0 + ar4) == 0)) {
    if (*(le<int>* )(unsigned)(ar4 + 4) == 0) {
      return 0;
    }
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 3;
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d754(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7));
    iVar1 = 0xc0;
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 2;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bcf4(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bd88(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01c964(*(le<undefined4>* )(unsigned)(ar4 + 0xc),(&(*(undefined1 *)(unsigned)0x8c140bd0)),ar6,ar7));
    *(le<undefined4>* )(unsigned)(0xb8 + ar4) = 0x12c;
    iVar1 = 2;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d684(*(le<undefined4>* )(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x94)),ar6,ar7));
    if ((*(le<int>* )(fr0_ - 0x8c)) != 0) {
      if ((*(le<int>* )(fr0_ - 0x8c)) == 2) {
        *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 3;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      if ((*(le<int>* )(fr0_ - 0x8c)) != 3) {
        *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 4;
        if (0 < *(le<int>* )(unsigned)(0xb8 + ar4)) {
          return *(le<int>* )(unsigned)(0xb8 + ar4);
        }
        *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 5;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 6;
      piVar3 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x3c));
      *piVar3 = *piVar3 + 1;
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + 100) =
           *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x3c));
    }
    iVar1 = 3;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(le<undefined4>* )(unsigned)(0xc0 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d8a0(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
    iVar1 = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0fd8d0\n.set FUN_8c0fd8d0, FUN_8c0fd8d0_def\n");

}
//@unit 8c0fda28
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
undefined4 FUN_8c0fda28_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fda28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  for (; ar5 < 0x10; ar5 = ar5 + 1) {
    *(undefined1 *)(unsigned)(0xc8 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x40) + ar5 * 0x20) = 0;
  }
  return 0x10;
}

__asm__(".globl FUN_8c0fda28\n.set FUN_8c0fda28, FUN_8c0fda28_def\n");

}
//@unit 8c0fda5c
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
undefined4 FUN_8c0fda5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fda5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01c964))))
                    (*(le<undefined4>* )(unsigned)(ar4 + 0xc),*(le<undefined4>* )(unsigned)(0xc4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fda5c\n.set FUN_8c0fda5c, FUN_8c0fda5c_def\n");

}
//@unit 8c0fda80
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
undefined4 FUN_8c0fda80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fda80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4 + 0xd0,0,0x88001,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fda80\n.set FUN_8c0fda80, FUN_8c0fda80_def\n");

}
//@unit 8c0fdaac
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
undefined4 FUN_8c0fdaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdaac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)*(byte *)(unsigned)(ar4 + 0xd0);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7));
  if (((iVar2 != 0) ||
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7)), iVar2 != 0)) ||
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0faf30(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7)), uVar3 = 0, iVar2 != 0)) {
    uVar1 = (uint)*(byte *)(unsigned)(ar4 + 0xd0);
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7));
  }
  return uVar3;
}

__asm__(".globl FUN_8c0fdaac\n.set FUN_8c0fdaac, FUN_8c0fdaac_def\n");

}
//@unit 8c0fdc20
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
le<undefined4>*  FUN_8c0fdc20_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdc20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0xffffffff;
  iVar1 = 0;
  while (iVar2 = iVar1, iVar2 < 0x400) {
    *(undefined1 *)(unsigned)(ar4 + iVar2 + 4) = 0;
    (*(le<int>* )(fr0_ - 0x10)) = iVar2;
    iVar1 = iVar2 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2b,((undefined1 *)(unsigned)0x8c141e2a),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2c,((undefined1 *)(unsigned)0x8c141e2c),ar6,ar7); });
  return ar4;
}

__asm__(".globl FUN_8c0fdc20\n.set FUN_8c0fdc20, FUN_8c0fdc20_def\n");

}
//@unit 8c0fdc98
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
undefined1 * FUN_8c0fdc98_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdc98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0;
  ar4[0x20] = 0;
  ar4[0x40] = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x74) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x78) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x7c) = 7;
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x80 + iVar1 * 4) = 0;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0xb0) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xb4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xb8) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xbc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc0) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[0xc8 + iVar1 * 0x20] = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c0fdc98\n.set FUN_8c0fdc98, FUN_8c0fdc98_def\n");

}
//@unit 8c0fdd68
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
undefined4 FUN_8c0fdd68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdd68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdd98(ar4,*(le<int>* )(unsigned)(ar4 + 0x68) + ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fdd68\n.set FUN_8c0fdd68, FUN_8c0fdd68_def\n");

}
//@unit 8c0fdd98
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
undefined4 FUN_8c0fdd98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdd98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = ar5;
  if (*(le<int>* )(unsigned)(ar4 + 0x68) < 0) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 0;
  }
  uVar1 = 4;
  if (4 < *(le<int>* )(unsigned)(ar4 + 0x68)) {
    uVar1 = 0x68;
    *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 4;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0fdd98\n.set FUN_8c0fdd98, FUN_8c0fdd98_def\n");

}
//@unit 8c0fddc4
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
int FUN_8c0fddc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fddc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fddc4\n.set FUN_8c0fddc4, FUN_8c0fddc4_def\n");

}
//@unit 8c0fdde4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fdde4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fdde4");
  return (unsigned)sh4_interp(0x8c0fdde4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fdde4\n.set FUN_8c0fdde4, FUN_8c0fdde4_def\n");
}
//@unit 8c0fde34
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
int FUN_8c0fde34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fde34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fde34\n.set FUN_8c0fde34, FUN_8c0fde34_def\n");

}
//@unit 8c0fde5c
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
int FUN_8c0fde5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fde5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4 + 0x170,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x170,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x170,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x2e0,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x2e1) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x300) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fde5c\n.set FUN_8c0fde5c, FUN_8c0fde5c_def\n");

}
//@unit 8c0fdf08
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
undefined4 FUN_8c0fdf08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdf08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0fdf08\n.set FUN_8c0fdf08, FUN_8c0fdf08_def\n");

}
//@unit 8c0fdf10
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
undefined4 FUN_8c0fdf10_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdf10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0fdf10\n.set FUN_8c0fdf10, FUN_8c0fdf10_def\n");

}
//@unit 8c0fdf18
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
int FUN_8c0fdf18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdf18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(unsigned)(ar4 + 0x2e0) = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4 + 0x170,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0fdf18\n.set FUN_8c0fdf18, FUN_8c0fdf18_def\n");

}
//@unit 8c0fdf74
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
int FUN_8c0fdf74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fdf74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0x170,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(uVar2,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar5,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(uVar1,ar5,ar6,ar7); });
  *(le<int>* )(unsigned)(ar4 + 0x300) = *(le<int>* )(unsigned)(ar4 + 0x300) + 1;
  return ar4;
}

__asm__(".globl FUN_8c0fdf74\n.set FUN_8c0fdf74, FUN_8c0fdf74_def\n");

}
//@unit 8c0fe018
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
int s_Item_pointer_is_NULL_CItemLi_0fe01c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Item_pointer_is_NULL_CItemLi_0fe01c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x300) != 0) {
    if (ar5 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_102824(((undefined1 *)(unsigned)0x8c141e8f),0,0,0xd); });
      report_error_message
                (((undefined1 *)(unsigned)0x8c141ebb),((undefined1 *)(unsigned)0x8c141ed2),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(le<int>* )(unsigned)(ar4 + 0x300) = *(le<int>* )(unsigned)(ar4 + 0x300) + -1;
    }
  }
  return ar4;
}

__asm__(".globl s_Item_pointer_is_NULL_CItemLi_0fe01c\n.set s_Item_pointer_is_NULL_CItemLi_0fe01c, s_Item_pointer_is_NULL_CItemLi_0fe01c_def\n");

}
//@unit 8c0fe108
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
undefined4 s_Invalid_Item_number_CItemLis_0fe110_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Invalid_Item_number_CItemLis_0fe110");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(le<int>* )(unsigned)(ar4 + 0x300) < ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); noop_102824(((undefined1 *)(unsigned)0x8c141eeb),0,0,0xd); });
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c141f18),((undefined1 *)(unsigned)0x8c141f2c),1,2));
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl s_Invalid_Item_number_CItemLis_0fe110\n.set s_Invalid_Item_number_CItemLis_0fe110, s_Invalid_Item_number_CItemLis_0fe110_def\n");

}
//@unit 8c0fe1b8
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
int FUN_8c0fe1b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe1b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fddc4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fddc4(ar4 + 0xc,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x18,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x19) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fe1b8\n.set FUN_8c0fe1b8, FUN_8c0fe1b8_def\n");

}
//@unit 8c0fe250
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
int FUN_8c0fe250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe250");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(unsigned)(ar4 + 0x18) = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da170(ar4 + 0xc,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0da170(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0fe250\n.set FUN_8c0fe250, FUN_8c0fe250_def\n");

}
//@unit 8c0fe2a0
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
int FUN_8c0fe2a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe2a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0xc,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(uVar2,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar5,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(uVar1,ar5,ar6,ar7); });
  *(le<int>* )(unsigned)(ar4 + 0x38) = *(le<int>* )(unsigned)(ar4 + 0x38) + 1;
  return ar4;
}

__asm__(".globl FUN_8c0fe2a0\n.set FUN_8c0fe2a0, FUN_8c0fe2a0_def\n");

}
//@unit 8c0fe334
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
int s_Item_pointer_is_NULL_CNodePt_0fe338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Item_pointer_is_NULL_CNodePt_0fe338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_102824(((undefined1 *)(unsigned)0x8c141f84),0,0,0xd); });
      report_error_message
                (((undefined1 *)(unsigned)0x8c141ebb),((undefined1 *)(unsigned)0x8c141fb3),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(le<int>* )(unsigned)(ar4 + 0x38) = *(le<int>* )(unsigned)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}

__asm__(".globl s_Item_pointer_is_NULL_CNodePt_0fe338\n.set s_Item_pointer_is_NULL_CNodePt_0fe338, s_Item_pointer_is_NULL_CNodePt_0fe338_def\n");

}
//@unit 8c0fe41c
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
undefined4 s_Invalid_Item_number_CNodePtr_0fe424_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Invalid_Item_number_CNodePtr_0fe424");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(le<int>* )(unsigned)(ar4 + 0x38) < ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); noop_102824(((undefined1 *)(unsigned)0x8c141fcf),0,0,0xd); });
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c141f18),((undefined1 *)(unsigned)0x8c141fff),1,2));
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl s_Invalid_Item_number_CNodePtr_0fe424\n.set s_Invalid_Item_number_CNodePtr_0fe424, s_Invalid_Item_number_CNodePtr_0fe424_def\n");

}
//@unit 8c0fe4c4
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
undefined4 FUN_8c0fe4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 0;
  return 0;
}

__asm__(".globl FUN_8c0fe4c4\n.set FUN_8c0fe4c4, FUN_8c0fe4c4_def\n");

}
//@unit 8c0fe4f8
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
int FUN_8c0fe4f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe4f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fdde4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fdde4(ar4 + 0x58,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0xb0,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0xb1) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0xd0) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fe4f8\n.set FUN_8c0fe4f8, FUN_8c0fe4f8_def\n");

}
//@unit 8c0fe59c
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
int FUN_8c0fe59c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe59c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined1 *)(unsigned)(ar4 + 0xb0) = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4ad0(ar4 + 0x58,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0c4ad0(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0fe59c\n.set FUN_8c0fe59c, FUN_8c0fe59c_def\n");

}
//@unit 8c0fe5f0
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
int FUN_8c0fe5f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe5f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0x58,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(uVar2,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar5,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(uVar1,ar5,ar6,ar7); });
  *(le<int>* )(unsigned)(ar4 + 0xd0) = *(le<int>* )(unsigned)(ar4 + 0xd0) + 1;
  return ar4;
}

__asm__(".globl FUN_8c0fe5f0\n.set FUN_8c0fe5f0, FUN_8c0fe5f0_def\n");

}
//@unit 8c0fe690
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
int s_CWaterSnowList_TakeOut_0fe694_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CWaterSnowList_TakeOut_0fe694");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0xd0) != 0) {
    if (ar5 == 0) {
      report_error_message
                (((undefined1 *)(unsigned)0x8c14201a),((undefined1 *)(unsigned)0x8c142031),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(le<int>* )(unsigned)(ar4 + 0xd0) = *(le<int>* )(unsigned)(ar4 + 0xd0) + -1;
    }
  }
  return ar4;
}

__asm__(".globl s_CWaterSnowList_TakeOut_0fe694\n.set s_CWaterSnowList_TakeOut_0fe694, s_CWaterSnowList_TakeOut_0fe694_def\n");

}
//@unit 8c0fe764
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
undefined4 s_CWaterSnowList_GetWaterSnowO_0fe76c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CWaterSnowList_GetWaterSnowO_0fe76c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(le<int>* )(unsigned)(0xd0 + ar4) < ar5)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x217,
               (&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x22b,1,2));
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl s_CWaterSnowList_GetWaterSnowO_0fe76c\n.set s_CWaterSnowList_GetWaterSnowO_0fe76c, s_CWaterSnowList_GetWaterSnowO_0fe76c_def\n");

}
//@unit 8c0fe7f4
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
undefined4 FUN_8c0fe7f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe7f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0xd0) = 0;
  return 0xd0;
}

__asm__(".globl FUN_8c0fe7f4\n.set FUN_8c0fe7f4, FUN_8c0fe7f4_def\n");

}
//@unit 8c0fe82c
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
int FUN_8c0fe82c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe82c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fde34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fde34(ar4 + 0x14,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x28,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x29) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fe82c\n.set FUN_8c0fe82c, FUN_8c0fe82c_def\n");

}
//@unit 8c0fe8c4
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
int FUN_8c0fe8c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fe8c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar4 + 0x14,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar5,uVar1,ar6,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0dac48(ar5,uVar1,ar6,ar7));
  uVar1 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(uVar2,ar5,ar6,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar5,uVar1,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(uVar1,ar5,ar6,ar7); });
  *(le<int>* )(unsigned)(ar4 + 0x48) = *(le<int>* )(unsigned)(ar4 + 0x48) + 1;
  return ar4;
}

__asm__(".globl FUN_8c0fe8c4\n.set FUN_8c0fe8c4, FUN_8c0fe8c4_def\n");

}
//@unit 8c0fe95c
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
int s_CItemGLoadRequestList_TakeOu_0fe960_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CItemGLoadRequestList_TakeOu_0fe960");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      report_error_message
                (((undefined1 *)(unsigned)0x8c142084),((undefined1 *)(unsigned)0x8c1420a1)
                 ,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(le<int>* )(unsigned)(ar4 + 0x48) = *(le<int>* )(unsigned)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}

__asm__(".globl s_CItemGLoadRequestList_TakeOu_0fe960\n.set s_CItemGLoadRequestList_TakeOu_0fe960, s_CItemGLoadRequestList_TakeOu_0fe960_def\n");

}
//@unit 8c0fea2c
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
undefined4 s_CItemGLoadRequestList_GetPtr_0fea34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CItemGLoadRequestList_GetPtr_0fea34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(le<int>* )(unsigned)(ar4 + 0x48) < ar5)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x28e,
               (&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2a2,1,2));
    ar4_00 = 0;
  }
  else {
    for (iVar1 = 0; iVar1 < ar5; iVar1 = iVar1 + 1) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl s_CItemGLoadRequestList_GetPtr_0fea34\n.set s_CItemGLoadRequestList_GetPtr_0fea34, s_CItemGLoadRequestList_GetPtr_0fea34_def\n");

}
//@unit 8c0feab8
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
undefined4 FUN_8c0feab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feab8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl FUN_8c0feab8\n.set FUN_8c0feab8, FUN_8c0feab8_def\n");

}
//@unit 8c0feaec
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
int FUN_8c0feaec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feaec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fddc4(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0feaec\n.set FUN_8c0feaec, FUN_8c0feaec_def\n");

}
//@unit 8c0feb0c
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
undefined4 FUN_8c0feb0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feb0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x23); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0feaec),((void *)(unsigned)0x8c0da130),0x10); });
  return ar4;
}

__asm__(".globl FUN_8c0feb0c\n.set FUN_8c0feb0c, FUN_8c0feb0c_def\n");

}
//@unit 8c0feb3c
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
undefined4 FUN_8c0feb3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feb3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x22 < iVar1) {
      return 0;
    }
    if (*(le<int>* )(unsigned)(ar4 + iVar1 * 0x10 + 0xc) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(le<undefined4>* )(unsigned)(ar4 + iVar1 * 0x10 + 0xc) = 1;
  return ar4 + iVar1 * 0x10;
}

__asm__(".globl FUN_8c0feb3c\n.set FUN_8c0feb3c, FUN_8c0feb3c_def\n");

}
//@unit 8c0feb88
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
undefined4 FUN_8c0feb88_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feb88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(*ar5 + 0xc) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl FUN_8c0feb88\n.set FUN_8c0feb88, FUN_8c0feb88_def\n");

}
//@unit 8c0feb98
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
int FUN_8c0feb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feb98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdde4(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x58) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0feb98\n.set FUN_8c0feb98, FUN_8c0feb98_def\n");

}
//@unit 8c0febbc
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
undefined4 FUN_8c0febbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0febbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x96); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0feb98),((void *)(unsigned)0x8c0c4a90),0x5c); });
  return ar4;
}

__asm__(".globl FUN_8c0febbc\n.set FUN_8c0febbc, FUN_8c0febbc_def\n");

}
//@unit 8c0febf0
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
undefined4 FUN_8c0febf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0febf0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x96 <= iVar1) {
      return 0;
    }
    if (*(le<int>* )(unsigned)(ar4 + iVar1 * 0x5c + 0x58) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(le<undefined4>* )(unsigned)(ar4 + iVar1 * 0x5c + 0x58) = 1;
  return ar4 + iVar1 * 0x5c;
}

__asm__(".globl FUN_8c0febf0\n.set FUN_8c0febf0, FUN_8c0febf0_def\n");

}
//@unit 8c0fec4c
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
undefined4 FUN_8c0fec4c_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fec4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(*ar5 + 0x58) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl FUN_8c0fec4c\n.set FUN_8c0fec4c, FUN_8c0fec4c_def\n");

}
//@unit 8c0fec60
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
int FUN_8c0fec60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fec60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fde34(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0fec60\n.set FUN_8c0fec60, FUN_8c0fec60_def\n");

}
//@unit 8c0fec80
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
undefined4 FUN_8c0fec80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fec80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x19); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0fec60),((void *)(unsigned)0x8c0c02e8),0x18); });
  return ar4;
}

__asm__(".globl FUN_8c0fec80\n.set FUN_8c0fec80, FUN_8c0fec80_def\n");

}
//@unit 8c0fecb0
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
undefined4 FUN_8c0fecb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fecb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x18 < iVar1) {
      return 0;
    }
    if (*(le<int>* )(unsigned)(iVar1 * 0x18 + ar4 + 0x14) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(le<undefined4>* )(unsigned)(iVar1 * 0x18 + ar4 + 0x14) = 1;
  return iVar1 * 0x18 + ar4;
}

__asm__(".globl FUN_8c0fecb0\n.set FUN_8c0fecb0, FUN_8c0fecb0_def\n");

}
//@unit 8c0fed08
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
undefined4 FUN_8c0fed08_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fed08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(*ar5 + 0x14) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl FUN_8c0fed08\n.set FUN_8c0fed08, FUN_8c0fed08_def\n");

}
//@unit 8c0fed18
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
int FUN_8c0fed18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fed18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fed44(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fec80(ar4 + 0x4c,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0fed18\n.set FUN_8c0fed18, FUN_8c0fed18_def\n");

}
//@unit 8c0fed44
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
undefined4 FUN_8c0fed44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fed44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe82c(ar4,(&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2c8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fed44\n.set FUN_8c0fed44, FUN_8c0fed44_def\n");

}
//@unit 8c0fed70
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
int s_CItemGLoader_RegistToLoad_0fed74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CItemGLoader_RegistToLoad_0fed74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fecb0(ar4 + 0x4c,ar5,ar6,ar7));
  if (ar5_00 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2c9,
               (&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2dd,1,2));
  }
  else {
    *(le<undefined4>* )(unsigned)(ar5_00 + 8) = ar5;
    *(le<undefined4>* )(unsigned)(ar5_00 + 0xc) = ar6;
    *(le<undefined4>* )(unsigned)(ar5_00 + 0x10) = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe8c4(ar4,ar5_00,ar6_00,ar7));
  }
  return ar5_00;
}

__asm__(".globl s_CItemGLoader_RegistToLoad_0fed74\n.set s_CItemGLoader_RegistToLoad_0fed74, s_CItemGLoader_RegistToLoad_0fed74_def\n");

}
//@unit 8c0fedf4
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
int FUN_8c0fedf4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fedf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
  ar4_00 = 0;
  if (iVar1 != 0) {
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fee88(ar4,ar5_00,ar6,ar7));
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      if (*(le<int>* )(unsigned)(ar4_00 + 0x10) != 2) {
        ar6 = *(le<undefined4>* )(unsigned)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xdc + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4_00 + 8) + 8)))))
                          (*(le<int>* )(unsigned)(ar4_00 + 8),ar5,ar6,ar7));
        if (iVar2 == 1) {
          *(le<undefined4>* )(unsigned)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl FUN_8c0fedf4\n.set FUN_8c0fedf4, FUN_8c0fedf4_def\n");

}
//@unit 8c0fee88
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
undefined4 FUN_8c0fee88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fee88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fee88\n.set FUN_8c0fee88, FUN_8c0fee88_def\n");

}
//@unit 8c0feea8
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
undefined4 get_field_48_0feea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_48_0feea8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x48);
}

__asm__(".globl get_field_48_0feea8\n.set get_field_48_0feea8, get_field_48_0feea8_def\n");

}
//@unit 8c0feeb0
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
undefined4 FUN_8c0feeb0_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feeb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((le<int>* )(fr0_ - 0x14))[0] = *ar5;
  uVar1 = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x14))[0] + 8);
  *ar5 = 0;
  (vsp = ((unsigned long)(fr0_ - 20)), s_CItemGLoadRequestList_TakeOu_0fe960(ar4,((le<int>* )(fr0_ - 0x14))[0],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0fed08(ar4 + 0x4c,((le<int>* )(fr0_ - 0x14)),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0feeb0\n.set FUN_8c0feeb0, FUN_8c0feeb0_def\n");

}
//@unit 8c0feef8
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
uint FUN_8c0feef8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0feef8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)(*(le<int>* )(unsigned)(ar5 + 0x10) == 2);
}

__asm__(".globl FUN_8c0feef8\n.set FUN_8c0feef8, FUN_8c0feef8_def\n");

}
//@unit 8c0fef10
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
undefined4 FUN_8c0fef10_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fef10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((le<undefined4>* )(fr0_ - 0xc))[0] = 0;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    ((le<undefined4>* )(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fea2c))))
                             (ar4,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 12)), s_CItemGLoadRequestList_TakeOu_0fe960(ar4,((le<undefined4>* )(fr0_ - 0xc))[0],ar6,ar7));
    ar5 = ((le<undefined4>* )(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0fed08(ar4 + 0x4c,ar5,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0feab8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0fef10\n.set FUN_8c0fef10, FUN_8c0fef10_def\n");

}
//@unit 8c0fef8c
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
undefined4 FUN_8c0fef8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fef8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c0fef8c\n.set FUN_8c0fef8c, FUN_8c0fef8c_def\n");

}
//@unit 8c0fef94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Shell_0fef9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Shell_0fef9c");
  return (unsigned)sh4_interp(0x8c0fef94, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Shell_0fef9c\n.set s_Shell_0fef9c, s_Shell_0fef9c_def\n");
}
//@unit 8c0ff500
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
undefined4 FUN_8c0ff500_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ff500");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(*ar5,ar5,ar6,ar7));
  piVar2 = (le<int>* )(unsigned)(iVar1 * 4 + 0x8c441348);
  *piVar2 = *piVar2 + -1;
  iVar1 = *ar5;
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 8))))(iVar1,1,ar6,ar7));
  }
  *ar5 = 0;
  return 0;
}

__asm__(".globl FUN_8c0ff500\n.set FUN_8c0ff500, FUN_8c0ff500_def\n");

}
//@unit 8c0ff558
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ff558_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ff558");
  return (unsigned)sh4_interp(0x8c0ff558, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ff558\n.set FUN_8c0ff558, FUN_8c0ff558_def\n");
}
//@unit 8c0ff67c
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
undefined4 FUN_8c0ff67c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ff67c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c441324,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0ff67c\n.set FUN_8c0ff67c, FUN_8c0ff67c_def\n");

}
//@unit 8c0ff6a0
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
undefined4 FUN_8c0ff6a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ff6a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c4412f4,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl FUN_8c0ff6a0\n.set FUN_8c0ff6a0, FUN_8c0ff6a0_def\n");

}
//@unit 8c0ff6c4
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
int FUN_8c0ff6c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ff6c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0ffb90(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0ff6c4\n.set FUN_8c0ff6c4, FUN_8c0ff6c4_def\n");

}
//@unit 8c0ff6f0
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
int FUN_8c0ff6f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ff6f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ff6f0\n.set FUN_8c0ff6f0, FUN_8c0ff6f0_def\n");

}
//@unit 8c0ff730
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ff730_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ff730");
  return (unsigned)sh4_interp(0x8c0ff730, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ff730\n.set FUN_8c0ff730, FUN_8c0ff730_def\n");
}
//@unit 8c0ff7d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ff7d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ff7d4");
  return (unsigned)sh4_interp(0x8c0ff7d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ff7d4\n.set FUN_8c0ff7d4, FUN_8c0ff7d4_def\n");
}
//@unit 8c0ff928
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ff928_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ff928");
  return (unsigned)sh4_interp(0x8c0ff928, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ff928\n.set FUN_8c0ff928, FUN_8c0ff928_def\n");
}
//@unit 8c0ffb84
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
undefined4 FUN_8c0ffb84_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ffb84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = ar5;
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c0ffb84\n.set FUN_8c0ffb84, FUN_8c0ffb84_def\n");

}
//@unit 8c0ffb90
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
undefined4 ret_const_1_0ffb90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_0ffb90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0ffb90\n.set ret_const_1_0ffb90, ret_const_1_0ffb90_def\n");

}
//@unit 8c0ffb98
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
int FUN_8c0ffb98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ffb98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff6c4(ar4 + 0xd8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x12c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x13c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x14c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015c2c(ar4 + 0x15c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101250(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xcc + ar4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c0ffb98\n.set FUN_8c0ffb98, FUN_8c0ffb98_def\n");

}
//@unit 8c0ffc1c
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
int FUN_8c0ffc1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ffc1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_015c94(ar4 + 0x15c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x14c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x13c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 300,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0ff6f0(ar4 + 0xd8,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0ffc1c\n.set FUN_8c0ffc1c, FUN_8c0ffc1c_def\n");

}
//@unit 8c0ffcb4
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
undefined4 s_GRAPHICS_0ffcb6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_0ffcb6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<wchar16>* ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00); });
  ar5_00 = (le<short unsigned int>*)(((undefined1 *)(unsigned)0x8c1421cc));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),uVar2,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c142254),((undefined1 *)(unsigned)0x8c142263),uVar2));
  if (iVar1 == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c14226c),((undefined1 *)(unsigned)0x8c142292),1,2));
  }
  return 1;
}

__asm__(".globl s_GRAPHICS_0ffcb6\n.set s_GRAPHICS_0ffcb6, s_GRAPHICS_0ffcb6_def\n");

}
//@unit 8c0ffd74
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
undefined4 get_field_1c_0ffd74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_1c_0ffd74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
}

__asm__(".globl get_field_1c_0ffd74\n.set get_field_1c_0ffd74, get_field_1c_0ffd74_def\n");

}
//@unit 8c0ffd7c
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
undefined4 FUN_8c0ffd7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ffd7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0xcc + ar4) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff730(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0ffd7c\n.set FUN_8c0ffd7c, FUN_8c0ffd7c_def\n");

}
//@unit 8c0ffdb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0ffdb0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0ffdb0");
  return (unsigned)sh4_interp(0x8c0ffdb0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0ffdb0\n.set FUN_8c0ffdb0, FUN_8c0ffdb0_def\n");
}
//@unit 8c0fff28
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
undefined4 FUN_8c0fff28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fff28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff7d4(ar4 + 0xd8,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fff28\n.set FUN_8c0fff28, FUN_8c0fff28_def\n");

}
//@unit 8c0fff54
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
undefined4 FUN_8c0fff54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fff54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff928(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0fff54\n.set FUN_8c0fff54, FUN_8c0fff54_def\n");

}
//@unit 8c0fff84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0fff84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0fff84");
  return (unsigned)sh4_interp(0x8c0fff84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0fff84\n.set FUN_8c0fff84, FUN_8c0fff84_def\n");
}
//@unit 8c0fffec
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
undefined4 FUN_8c0fffec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0fffec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0fffec\n.set FUN_8c0fffec, FUN_8c0fffec_def\n");

}
//@unit 8c0ffff4
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
uint FUN_8c0ffff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0ffff4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c100030))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)((uVar1 & 0x60e) == 0x60e);
}

__asm__(".globl FUN_8c0ffff4\n.set FUN_8c0ffff4, FUN_8c0ffff4_def\n");

}
