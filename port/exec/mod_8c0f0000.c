//@unit 8c0f3df8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f3df8_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f3df8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  ar4[4] = ar5[4];
  return ar4;
}

__asm__(".globl _FUN_8c0f3df8\n.set _FUN_8c0f3df8, _FUN_8c0f3df8_def\n");
//@unit 8c0f3e30
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f3e30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_set_zero(ar4 + 0x2c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023dac(ar4 + 0x38,ar5,ar6,ar7));
  *ar4 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0x32;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f3e30\n.set _FUN_8c0f3e30, _FUN_8c0f3e30_def\n");
//@unit 8c0f3e84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f3e84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f3e84";
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

__asm__(".globl _FUN_8c0f3e84\n.set _FUN_8c0f3e84, _FUN_8c0f3e84_def\n");
//@unit 8c0f3ebc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f3ebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12c1f0));
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

__asm__(".globl _FUN_8c0f3ebc\n.set _FUN_8c0f3ebc, _FUN_8c0f3ebc_def\n");
//@unit 8c0f3f58
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f3f58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0f3f58\n.set _FUN_8c0f3f58, _FUN_8c0f3f58_def\n");
//@unit 8c0f3ffc
#include "../decls.h"
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
  ring[rp++ & 255] = "free_if_nonnull_wrap_0f3ffc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0f3ffc\n.set _free_if_nonnull_wrap_0f3ffc, _free_if_nonnull_wrap_0f3ffc_def\n");
//@unit 8c0f402c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f402c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f402c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f402c\n.set _FUN_8c0f402c, _FUN_8c0f402c_def\n");
//@unit 8c0f4040
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0f4040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c1f0);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x30,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x40,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x50,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x5c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x80,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102800(ar4 + 0x90,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f78d8(ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f50b4(ar4,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x24) = ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = ar6;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = s0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = ar7;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x78) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x7c) = (ulonglong)extraout_fr1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f4040\n.set _FUN_8c0f4040, _FUN_8c0f4040_def\n");
//@unit 8c0f4108
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12c1f0_m0_0f4108";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c1f0);
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

__asm__(".globl _Class_12c1f0_m0_0f4108\n.set _Class_12c1f0_m0_0f4108, _Class_12c1f0_m0_0f4108_def\n");
//@unit 8c0f41c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m1_0f41c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m1_0f41c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  undefined8 in_dr10 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr4;
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)in_dr6 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr6;
  (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_dr8 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr8;
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_dr10 >> 0x20);
  (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)in_dr10;
  (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44(ar5,((undefined1 *)(unsigned)0x8c1401fa));
  (*(undefined4 *)(fr0_ - 0x2c)) = ar5;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1401fa)); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c014334(ar4 + 0xc,ar5,ar6,ar7); });
  if (cVar3 == '\0') {
    puVar2 = &(*(undefined4 *)(fr0_ - 0x30));
    (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(undefined4 *)(fr0_ + 0x00000000)),(undefined4)(*(undefined8 *)(fr0_ - 0x34)));
  }
  else {
    (*(undefined8 *)(fr0_ - 0x34)) = CONCAT44((*(undefined4 *)(fr0_ + 0x00000004)),(*(undefined4 *)(fr0_ + 0x00000000)));
    puVar2 = (undefined4 *)(unsigned)(fr0_ + (int)0xffffffcc);
  }
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*puVar2); unsigned long t1_ = (unsigned long)(puVar2[1]); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0f528c(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _CAnimal_m1_0f41c8\n.set _CAnimal_m1_0f41c8, _CAnimal_m1_0f41c8_def\n");
//@unit 8c0f4250
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f4250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f4250\n.set _noop_0f4250, _noop_0f4250_def\n");
//@unit 8c0f4254
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f4254";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f4254\n.set _noop_0f4254, _noop_0f4254_def\n");
//@unit 8c0f4258
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4258_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4258";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  int iVar3;
  int *a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_bb4_0e06e4(ar5,ar5,ar6,ar7));
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x118 + *ar5))))(ar5,ar5_00,ar6,ar7));
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db864(ar5,ar4,ar6,ar7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,iVar1,ar6,ar7));
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a4_032154(uVar2,iVar1,ar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + 0x14))))
                            (((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)),iVar1,ar6,ar7));
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
    ar5_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x104 + *ar5))))(ar5,iVar4,ar6,ar7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + 0x14))))
                      (((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)),(int)ar5_00 + 0xc4,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e1c(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    a5 = (int *)(unsigned)((int)ar5_00 + 0xc4);
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x14))))
                      ((int *)(unsigned)(ar4 + 0xa8),a5,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e28(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}

__asm__(".globl _FUN_8c0f4258\n.set _FUN_8c0f4258, _FUN_8c0f4258_def\n");
//@unit 8c0f43bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f43bc_def(int ar4,int *ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0f43bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *ar5_00;
  float *a6;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar10;
  ulonglong uVar7;
  undefined8 uVar8;
  double dVar9;
  float fVar11;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x90)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0xa0)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0xb0)),ar5_00,ar6,ar7));
  fVar11 = 0.0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1d4))))(ar5,ar5_00,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_026024(ar5,ar5_00,ar6,ar7));
  a6 = &(*(float *)(fr0_ - 0xa0));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x90)),a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x38))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),((float *)(fr0_ - 0x80)),a6,ar7));
  pfVar4 = ((float *)(fr0_ - 0x80));
  iVar5 = 0;
  do {
    if (7 < iVar5) {
LAB_8c0f4912:
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(float *)(fr0_ - 0xb0)),0xffffffff,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(float *)(fr0_ - 0xa0)),0xffffffff,a6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x90)),0xffffffff,a6,ar7));
      return uVar1;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),*pfVar4);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && fVar6 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x140) = CONCAT44(0x3f800000,fVar6);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x90)),fVar6);
        *(undefined4 *)(unsigned)(ar4 + 0x150) = (*(undefined4 *)(fr0_ - 0x90));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = uVar7 & 0xffffffff;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    fVar6 = (*(float *)(fr0_ - 0xa0));
    fVar10 = (*(float *)(fr0_ - 0x9c));
    if (cVar14 == '\0') {
      fVar6 = *pfVar4;
      fVar10 = (*(float *)(fr0_ - 0xa0));
    }
    if (cVar13 == '\0' && fVar10 < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0xbf800000;
      }
      else {
        fVar6 = -1.0;
        *(undefined8 *)(unsigned)(ar4 + 0x140) = 0x144bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0xa0)),fVar6);
        *(float *)(unsigned)(ar4 + 0x150) = (*(float *)(fr0_ - 0xa0));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),(*(float *)(fr0_ - 0xa0)));
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x88)),pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
    }
    if (cVar13 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x148) = CONCAT44(0x3f800000,(float)uVar7);
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = (*(undefined4 *)(fr0_ - 0x88));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(unsigned)(ar4 + 0x158) = CONCAT44((*(undefined4 *)(fr0_ - 0x84)),(*(undefined4 *)(fr0_ - 0x88)));
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),pfVar4[2]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),(*(undefined4 *)(fr0_ - 0x98)));
    }
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < (float)uVar7) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
        uVar7 = CONCAT44(0xbf800000,(float)uVar7);
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = uVar7 & 0xffffffff;
        uVar7 = 0x150bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x148) = 0x150bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = uVar7 & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = (*(undefined4 *)(fr0_ - 0x98));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7 & 0xffffffff;
        *(ulonglong *)(unsigned)(ar4 + 0x158) = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),(*(undefined4 *)(fr0_ - 0x98)));
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),pfVar4[1]);
    }
    else {
      uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),(*(float *)(fr0_ - 0x9c)));
    }
    fVar6 = (float)uVar7;
    if (cVar13 == '\0' && (float)(uVar7 >> 0x20) < fVar6) {
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = uVar7 & 0xffffffff;
        fVar6 = -1.0;
        *(undefined8 *)(unsigned)(ar4 + 0x144) = 0x148bf800000;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = (ulonglong)(uint)fVar6;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
        uVar7 = CONCAT44((*(float *)(fr0_ - 0x9c)),fVar6);
        *(float *)(unsigned)(ar4 + 0x154) = (*(float *)(fr0_ - 0x9c));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x150) = (ulonglong)(uint)fVar6;
        uVar7 = CONCAT44((*(undefined4 *)(fr0_ - 0x98)),(*(float *)(fr0_ - 0x9c)));
        *(ulonglong *)(unsigned)(ar4 + 0x154) = uVar7;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x158) = uVar7 & 0xffffffff;
      }
      *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
      goto LAB_8c0f4912;
    }
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0xb0)) = *pfVar4;
      (*(float *)(fr0_ - 0xac)) = pfVar4[1];
      (*(float *)(fr0_ - 0xa8)) = pfVar4[2];
      uVar8 = CONCAT44((*(float *)(fr0_ - 0xa8)),fVar6);
    }
    else {
      (*(float *)(fr0_ - 0xb0)) = (float)*(undefined8 *)(unsigned)pfVar4;
      (*(float *)(fr0_ - 0xac)) = (float)*(undefined8 *)(unsigned)(pfVar4 + 1);
      uVar8 = *(undefined8 *)(unsigned)(pfVar4 + 2);
      (*(float *)(fr0_ - 0xa8)) = (float)uVar8;
      (*(undefined4 *)(fr0_ - 0xa4)) = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    if (iVar2 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x130))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
      if (iVar3 == 2) {
        ar7 = ar4 + 0x150;
        a6 = (float *)(unsigned)(ar4 + 0x140);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c017900(uVar1,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
        if (iVar3 == 1) {
          *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
        if (cVar14 == '\0') {
          fVar11 = F32HI(uVar8);
          dVar9 = CONCAT44D(pfVar4[1],(int)uVar8);
        }
        else {
          dVar9 = *(double *)(unsigned)(pfVar4 + 1);
          in_xd14 = uVar8;
        }
        if (cVar13 == '\0') {
          bVar12 = F32HI(dVar9) < fVar11;
        }
        else {
          bVar12 = dVar9 < CONCAT44D(in_fr14,fVar11);
        }
        if (bVar12) {
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x144) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
            *(float *)(unsigned)(ar4 + 0x154) = fVar11;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x150) = D2U(dVar9) & 0xffffffff;
            *(undefined8 *)(unsigned)(ar4 + 0x154) = in_xd14;
          }
          if (cVar14 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x158) = D2U(dVar9) & 0xffffffff;
          }
          *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
          goto LAB_8c0f4912;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x144) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x150) = 0xbf800000;
          *(undefined4 *)(unsigned)(ar4 + 0x154) = 0xbf800000;
          *(undefined4 *)(unsigned)(ar4 + 0x158) = 0xbf800000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x150) = 0x154bf800000;
          *(undefined8 *)(unsigned)(ar4 + 0x154) = 0x154bf800000;
          *(undefined8 *)(unsigned)(ar4 + 0x158) = 0x154bf800000;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
      }
    }
    else if ((iVar2 == 1) || (iVar2 == 2)) {
      (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,&(*(float *)(fr0_ - 0xb0)),a6,ar7));
      if (cVar14 == '\0') {
        fVar11 = F32HI(uVar8);
        dVar9 = CONCAT44D(pfVar4[1],(int)uVar8);
      }
      else {
        dVar9 = *(double *)(unsigned)(pfVar4 + 1);
        in_xd14 = uVar8;
      }
      if (cVar13 == '\0') {
        bVar12 = F32HI(dVar9) < fVar11;
      }
      else {
        bVar12 = dVar9 < CONCAT44D(in_fr14,fVar11);
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x144) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x144) = CONCAT44(0x3f800000,SUB84(dVar9,0));
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
          *(float *)(unsigned)(ar4 + 0x154) = fVar11;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x150) = D2U(dVar9) & 0xffffffff;
          *(undefined8 *)(unsigned)(ar4 + 0x154) = in_xd14;
        }
        if (cVar14 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x158) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x158) = D2U(dVar9) & 0xffffffff;
        }
        *(int *)(unsigned)(ar4 + 0x13c) = iVar5;
        goto LAB_8c0f4912;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x140) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x140) = D2U(dVar9) & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x144) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x144) = D2U(dVar9) & 0xffffffff;
      }
      if (cVar14 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x148) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0xbf800000;
        *(undefined4 *)(unsigned)(ar4 + 0x154) = 0xbf800000;
        *(undefined4 *)(unsigned)(ar4 + 0x158) = 0xbf800000;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x148) = D2U(dVar9) & 0xffffffff;
        *(undefined8 *)(unsigned)(ar4 + 0x150) = 0x154bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x154) = 0x154bf800000;
        *(undefined8 *)(unsigned)(ar4 + 0x158) = 0x154bf800000;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x13c) = 0xffffffff;
    }
    iVar5 = iVar5 + 1;
    pfVar4 = pfVar4 + 3;
  } while( true );
}

__asm__(".globl _FUN_8c0f43bc\n.set _FUN_8c0f43bc, _FUN_8c0f43bc_def\n");
//@unit 8c0f4974
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4974";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a5;
  
  a5 = ar4 + 0xa0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x194 + *(int *)(unsigned)(ar4 + 8)))))(ar4,a5,ar5,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,a5,ar5,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0f4974\n.set _FUN_8c0f4974, _FUN_8c0f4974_def\n");
//@unit 8c0f49b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m7_0f49b8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_0f49b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a6;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  double dVar5;
  float fVar6;
  double in_dr12 = 0;
  undefined4 in_fr15 = 0;
  double dVar7;
  double in_xd12 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x38)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7));
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar10 == '\0') {
    in_fr15 = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x38));
  }
  (*(undefined4 *)(fr0_ - 0x38)) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,ar5_00,ar6,ar7));
  dVar7 = in_dr0;
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    dVar7 = CONCAT44D(0x3f800000,SUB84(dVar7,0));
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,&(*(undefined4 *)(fr0_ - 0x28)),a6,ar7));
  if (cVar10 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar7);
  if (cVar9 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
    }
    if (cVar9 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x38)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x34)),(*(undefined4 *)(fr0_ - 0x38)));
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar9 == '\0') {
    fVar3 = F32LO(dVar4) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar7,0);
  }
  if (cVar10 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar9 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar9 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar7,0);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
    }
    if (cVar9 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar7;
      }
      if (cVar10 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar7;
    }
    if (cVar10 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
  if (cVar10 == '\0') {
    in_dr12 = CONCAT44D((int)((ulonglong)in_dr12 >> 0x20),(int)(D2U(dVar4) >> 0x20));
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar4,0));
    dVar4 = in_xd12;
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x34);
  }
  fVar6 = F32HI(dVar7);
  if (cVar9 == '\0') {
    bVar8 = SUB84(in_dr12,0) < F32HI(dVar5) - fVar6;
  }
  else {
    bVar8 = in_dr12 < dVar5 - dVar7;
  }
  if (bVar8) {
    fVar6 = (*(float *)(fr0_ - 0x34));
    fVar3 = (*(float *)(fr0_ - 0x30));
    if (cVar10 == '\0') {
      fVar6 = *(float *)(unsigned)(ar4 + 0x34);
      fVar3 = (*(float *)(fr0_ - 0x34));
    }
    if (cVar9 != '\0' || fVar3 <= fVar6) {
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x34));
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x30)),(*(float *)(fr0_ - 0x34)));
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      fVar6 = F32LO(in_dr12) + fVar6;
    }
    else {
      fVar6 = SUB84(in_dr12 + dVar7,0);
    }
    if (cVar10 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x38)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x28)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _CAnimal_m7_0f49b8\n.set _CAnimal_m7_0f49b8, _CAnimal_m7_0f49b8_def\n");
//@unit 8c0f4b44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4b44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4b44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr4 = 0;
  
  *(int *)(unsigned)(ar4 + 0x78) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(unsigned)(ar4 + 0x7c) = (int)in_dr4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b44\n.set _FUN_8c0f4b44, _FUN_8c0f4b44_def\n");
//@unit 8c0f4b94
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f4b94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f4b94\n.set _noop_0f4b94, _noop_0f4b94_def\n");
//@unit 8c0f4b98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4b98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  ar5_00 = ar4 + 0x5c;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e24(((undefined1 *)(fr0_ - 0x14)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c08a9b8(ar4 + 0x5c,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x34))))(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023e04(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), free_if_nonnull_wrap_016ac4(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f4b98\n.set _FUN_8c0f4b98, _FUN_8c0f4b98_def\n");
//@unit 8c0f4bf0
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f4bf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f4bf0\n.set _noop_0f4bf0, _noop_0f4bf0_def\n");
//@unit 8c0f4bf4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x34))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f4bf4\n.set _FUN_8c0f4bf4, _FUN_8c0f4bf4_def\n");
//@unit 8c0f4c0c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4c0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0f4c0c\n.set _FUN_8c0f4c0c, _FUN_8c0f4c0c_def\n");
//@unit 8c0f4c5c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4c5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x70);
  *(int *)(unsigned)(ar4 + 0x70) = iVar1 + 1;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4c5c\n.set _FUN_8c0f4c5c, _FUN_8c0f4c5c_def\n");
//@unit 8c0f4c78
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CItem_BeNotReference_0f4c7a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(int *)(unsigned)(ar4 + 0x70) = *(int *)(unsigned)(ar4 + 0x70) + -1;
  if (*(int *)(unsigned)(ar4 + 0x70) < 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x19,
               (&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x36,1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x70);
}

__asm__(".globl _s_CItem_BeNotReference_0f4c7a\n.set _s_CItem_BeNotReference_0f4c7a, _s_CItem_BeNotReference_0f4c7a_def\n");
//@unit 8c0f4cd0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4cd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023aa0(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f4cd0\n.set _FUN_8c0f4cd0, _FUN_8c0f4cd0_def\n");
//@unit 8c0f4cf0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c0f4cf0_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4cf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(float *)(unsigned)(ar4 + 0x50) = *(float *)(unsigned)(ar4 + 0x50) + *ar5;
  *(float *)(unsigned)(ar4 + 0x54) = *(float *)(unsigned)(ar4 + 0x54) + ar5[1];
  *(float *)(unsigned)(ar4 + 0x58) = *(float *)(unsigned)(ar4 + 0x58) + ar5[2];
  return (float *)(unsigned)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c0f4cf0\n.set _FUN_8c0f4cf0, _FUN_8c0f4cf0_def\n");
//@unit 8c0f4d34
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4d34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x80000000) == 0x80000000) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0f4d34\n.set _FUN_8c0f4d34, _FUN_8c0f4d34_def\n");
//@unit 8c0f4d54
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_0f4d54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0f4d54\n.set _ret_const_1_0f4d54, _ret_const_1_0f4d54_def\n");
//@unit 8c0f4d5c
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0f4d5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0f4d5c\n.set _ret_const_0_0f4d5c, _ret_const_0_0f4d5c_def\n");
//@unit 8c0f4d64
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0f4d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0f4d64\n.set _ret_const_0_0f4d64, _ret_const_0_0f4d64_def\n");
//@unit 8c0f4d6c
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0f4d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0f4d6c\n.set _ret_const_0_0f4d6c, _ret_const_0_0f4d6c_def\n");
//@unit 8c0f4d74
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_0f4d74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0f4d74\n.set _ret_const_1_0f4d74, _ret_const_1_0f4d74_def\n");
//@unit 8c0f4d7c
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0f4d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0f4d7c\n.set _ret_const_0_0f4d7c, _ret_const_0_0f4d7c_def\n");
//@unit 8c0f4d84
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4d84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  return 1;
}

__asm__(".globl _FUN_8c0f4d84\n.set _FUN_8c0f4d84, _FUN_8c0f4d84_def\n");
//@unit 8c0f4da4
#include "../decls.h"
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
  ring[rp++ & 255] = "Vec3_assign_wrap_0f4da4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x40,ar4 + 0x30,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_0f4da4\n.set _Vec3_assign_wrap_0f4da4, _Vec3_assign_wrap_0f4da4_def\n");
//@unit 8c0f4dc4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4dc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(unsigned)(0x104 + ar4);
  if (*(int *)(unsigned)(0x104 + ar4) != 3) {
    puVar3 = (undefined4 *)(unsigned)(ar4 + *(int *)(unsigned)(0x104 + ar4) * 8 + 0xec);
    *puVar3 = 1;
    puVar3[1] = ar5;
    *(int *)(unsigned)(0x104 + ar4) = *(int *)(unsigned)(0x104 + ar4) + 1;
    iVar1 = 0x104;
    iVar2 = 3;
    if (3 < *(int *)(unsigned)(0x104 + ar4)) {
      *(undefined4 *)(unsigned)(0x104 + ar4) = 3;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f4dc4\n.set _FUN_8c0f4dc4, _FUN_8c0f4dc4_def\n");
//@unit 8c0f4e1c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x108;
  *(undefined4 *)(unsigned)(0x108 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4e1c\n.set _FUN_8c0f4e1c, _FUN_8c0f4e1c_def\n");
//@unit 8c0f4e28
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f4e28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(undefined4 *)(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0f4e28\n.set _FUN_8c0f4e28, _FUN_8c0f4e28_def\n");
//@unit 8c0f4e34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4e34_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4e34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x16); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x20) = *(undefined4 *)(unsigned)(ar5 + 0x14);
  *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar5 + 0x18);
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 0x2c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar4 + 0x5c,ar5 + 0x38,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar5 + 0x44);
  *(undefined4 *)(unsigned)(ar4 + 0x74) = *(undefined4 *)(unsigned)(ar5 + 0x48);
  return 0x74;
}

__asm__(".globl _FUN_8c0f4e34\n.set _FUN_8c0f4e34, _FUN_8c0f4e34_def\n");
//@unit 8c0f4ebc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4ebc_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4ebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x24) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = ar5[7];
  *(undefined4 *)(unsigned)(ar4 + 0x74) = ar5[8];
  return 0x74;
}

__asm__(".globl _FUN_8c0f4ebc\n.set _FUN_8c0f4ebc, _FUN_8c0f4ebc_def\n");
//@unit 8c0f4f0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f4f0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4f0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1401e4)) + 0x16); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c014334(ar5,ar5,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar5 + 0x14) = *(undefined4 *)(unsigned)(ar4 + 0x20);
  *(undefined4 *)(unsigned)(ar5 + 0x18) = *(undefined4 *)(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar5 + 0x1c,ar4 + 0x30,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar5 + 0x2c,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar5 + 0x38,ar4 + 0x5c,ar6,ar7));
  *(undefined4 *)(unsigned)(ar5 + 0x44) = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  *(uint *)(unsigned)(ar5 + 0x48) = *(uint *)(unsigned)(ar4 + 0x74) & 0xfffffffd;
  return 0x48;
}

__asm__(".globl _FUN_8c0f4f0c\n.set _FUN_8c0f4f0c, _FUN_8c0f4f0c_def\n");
//@unit 8c0f4fa4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0f4fa4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f4fa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7));
  ar5[7] = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  uVar1 = *(uint *)(unsigned)(ar4 + 0x74) & 0xfffffffd;
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0f4fa4\n.set _FUN_8c0f4fa4, _FUN_8c0f4fa4_def\n");
//@unit 8c0f5004
#include "../decls.h"
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
s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_No_2ld_kind_d_cat_d_food_d_r_0f5008";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 400; for (int i_ = 0; i_ < 400; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined4 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined8 *)(unsigned)(ar4 + 0x6c);
  (*(undefined4 *)(fr0_ - 0xbc)) = *(undefined4 *)(unsigned)(ar4 + 0x28);
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140230)); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0xac)),ar5,ar6,ar7); });
  (*(undefined4 *)(fr0_ - 0xb8)) = CONCAT44(0xffffffff,(*(undefined4 *)(fr0_ - 0xb8)));
  ar7_00 = 0xd;
  uVar1 = ar6;
  ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 400)); noop_102824(((undefined1 *)(fr0_ - 0xac)),ar5,ar6,0xd); });
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0xb8)) = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x38),(*(undefined4 *)(fr0_ - 0xb8)));
                    
    (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    (*(undefined4 *)(fr0_ - 0xbc)) = *(undefined4 *)(unsigned)(ar4 + 0x30);
    puVar2 = &(*(undefined4 *)(fr0_ - 0xbc));
  }
  else {
    (*(undefined4 *)(fr0_ - 0xb8)) = *(undefined8 *)(unsigned)(ar4 + 0x38);
    (*(undefined4 *)(fr0_ - 0xbc)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x34) >> 0x20);
    puVar2 = (undefined4 *)(unsigned)(fr0_ + (int)0xffffff38);
  }
  *(unsigned *)(unsigned)((int)puVar2 + -4) = ((undefined1 *)(unsigned)0x8c140256);
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar2 + -4)
              ); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c014334((undefined1 *)(unsigned)((int)puVar2 + 0x10),ar5,uVar1,ar7_00); });
  *(undefined4 *)(unsigned)((int)puVar2 + 8) = 0xffffffff;
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(
                      *(undefined4 *)(unsigned)((int)puVar2 + 8)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 400)); noop_102824((undefined1 *)(unsigned)((int)puVar2 + 0x10),0xfa,ar6,0xd); });
  return uVar1;
}

__asm__(".globl _s_No_2ld_kind_d_cat_d_food_d_r_0f5008\n.set _s_No_2ld_kind_d_cat_d_food_d_r_0f5008, _s_No_2ld_kind_d_cat_d_food_d_r_0f5008_def\n");
//@unit 8c0f50b4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f50b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0x32;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(0x168 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x164 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x16c + ar4) = 1;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x80000000;
  return 0x74;
}

__asm__(".globl _FUN_8c0f50b4\n.set _FUN_8c0f50b4, _FUN_8c0f50b4_def\n");
//@unit 8c0f511c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
double * CAnimal_m8_0f511c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m8_0f511c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  double *pdVar1;
  int a5;
  undefined4 uVar2;
  double in_dr0 = 0;
  float fVar4;
  double dVar3;
  float in_fr13 = 0;
  undefined4 in_fr12 = 0;
  undefined4 in_fr15 = 0;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x184))))(ar5,ar5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr13 = F32HI(in_dr0);
  }
  a5 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,a5,ar6,ar7));
  if (cVar9 == '\0') {
    in_fr15 = (int)((ulonglong)in_dr0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,a5,ar6,ar7));
  uVar2 = SUB84(in_dr0,0);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  if (cVar9 == '\0') {
    fVar4 = 1.1754944e-38;
  }
  else {
    uVar2 = 0x800000;
    fVar4 = -NAN;
  }
  fVar5 = F32LO(in_dr0);
  fVar6 = F32HI(in_dr0);
  if (in_fr13 == fVar4) {
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
    }
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
    }
    else {
      bVar7 = in_dr0 < dVar3;
    }
    if (bVar7) {
      pdVar1 = (double *)(unsigned)0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
    }
    else {
      pdVar1 = (double *)(unsigned)0x74;
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),uVar2);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0x34);
    }
    if (cVar8 == '\0') {
      bVar7 = in_fr13 < F32HI(dVar3);
    }
    else {
      bVar7 = CONCAT44D(in_fr12,in_fr13) < dVar3;
    }
    if (bVar7) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar3,0));
      }
      else {
        dVar3 = *(double *)(unsigned)(ar4 + 0x34);
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (bVar7) {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
      }
      else {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
      }
    }
    else {
      *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(fVar6,fVar5 + fVar6);
      }
      else {
        in_dr0 = in_dr0 + in_dr0;
      }
      pdVar1 = (double *)(unsigned)(ar4 + 0x34);
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)pdVar1,SUB84(dVar3,0));
      }
      else {
        dVar3 = *pdVar1;
      }
      if (cVar8 == '\0') {
        bVar7 = SUB84(in_dr0,0) < F32HI(dVar3);
      }
      else {
        bVar7 = in_dr0 < dVar3;
      }
      if (!bVar7) {
        pdVar1 = (double *)(unsigned)0x74;
        *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _CAnimal_m8_0f511c\n.set _CAnimal_m8_0f511c, _CAnimal_m8_0f511c_def\n");
//@unit 8c0f528c
#include "../decls.h"
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
FUN_8c0f528c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f528c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = in_fr6;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = in_fr9;
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = in_fr10;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = in_fr11;
  *(undefined4 *)(unsigned)(ar4 + 100) = s0;
  return 0;
}

__asm__(".globl _FUN_8c0f528c\n.set _FUN_8c0f528c, _FUN_8c0f528c_def\n");
//@unit 8c0f52c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f52c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f52c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f52c8\n.set _FUN_8c0f52c8, _FUN_8c0f52c8_def\n");
//@unit 8c0f5308
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f5308_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5308\n.set _FUN_8c0f5308, _FUN_8c0f5308_def\n");
//@unit 8c0f532c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f532c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(0xa0 + ar4) = ar5;
  *(undefined4 *)(unsigned)(0xa4 + ar4) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + 0x24))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)),*(undefined4 *)(unsigned)(0xa0 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f532c\n.set _FUN_8c0f532c, _FUN_8c0f532c_def\n");
//@unit 8c0f5368
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5368";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)) + 0xc))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0xa4 + ar4)),ar4 + 0x30,ar4 + 0x50,
                     *(undefined4 *)(unsigned)(0xa0 + ar4)));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5368\n.set _FUN_8c0f5368, _FUN_8c0f5368_def\n");
//@unit 8c0f5398
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f5398_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5398";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1 = 0;
  undefined4 uVar4;
  double dVar5;
  double in_dr12 = 0;
  double in_dr14 = 0;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 2.508760045925733e+21;
    in_dr12 = 3.062442976448328e+17;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)(unsigned)ar5 = 0;
    puVar3 = (undefined4 *)(unsigned)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(unsigned)(ar5 + 1) = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)ar5 = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar1,iVar6,ar6,ar7));
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)F32HI(in_dr12);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar2 = (int)F32HI(in_dr14);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar5 + 1) = (int)(D2U(dVar5) >> 0x20);
      *(undefined4 *)(unsigned)((int)ar5 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)(unsigned)((int)ar5 + 4) = *(undefined8 *)(unsigned)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(unsigned)(ar4 + 0x34);
  }
  return puVar3;
}

__asm__(".globl _FUN_8c0f5398\n.set _FUN_8c0f5398, _FUN_8c0f5398_def\n");
//@unit 8c0f54b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f54b8_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0f54b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = 0;
  *ar6 = 0;
  *ar7 = 0x42c80000;
  return ((undefined4 *)(unsigned)0x8c0f54cc);
}

__asm__(".globl _FUN_8c0f54b8\n.set _FUN_8c0f54b8, _FUN_8c0f54b8_def\n");
//@unit 8c0f54d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f54d0_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c0f54d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0x38);
  return (undefined4 *)(unsigned)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c0f54d0\n.set _FUN_8c0f54d0, _FUN_8c0f54d0_def\n");
//@unit 8c0f54ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0f54ec_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f54ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint *puVar1;
  char cVar2;
  uint uStackY_38;
  
  cVar2 = '\0';
  uStackY_38 = (ulonglong)uStackY_38;
  ar7_00 = 0xffffffff;
  ar6_00 = 2;
  ar5_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0f4040(ar4,ar6,2,0xffffffff); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c058);
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c015224(ar4 + 0x170,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c015ab8(ar4 + 0x178,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c016fcc(ar4 + 0x17c,ar5_00,ar6_00,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); noop_0f58a0(ar4,ar5_00,ar6_00,ar7_00); });
  if (cVar2 == '\0') {
    puVar1 = (uint *)(unsigned)(fr0_ + (int)0xffffffcc);
    uStackY_38 = CONCAT44(s0,uStackY_38);
  }
  else {
    uStackY_38 = CONCAT44(s4,s0);
    puVar1 = &uStackY_38;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Class_12c058_m1_0f5660(ar4,*(undefined4 *)(unsigned)((int)puVar1 + 4),ar6_00,ar7_00));
  if (ar6 == 0x10) {
    *(undefined4 *)(unsigned)(ar4 + 0x16c) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f54ec\n.set _FUN_8c0f54ec, _FUN_8c0f54ec_def\n");
//@unit 8c0f55d8
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12c058_m0_0f55d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12c058);
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

__asm__(".globl _Class_12c058_m0_0f55d8\n.set _Class_12c058_m0_0f55d8, _Class_12c058_m0_0f55d8_def\n");
//@unit 8c0f5660
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12c058_m1_0f5660_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12c058_m1_0f5660";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), CAnimal_m1_0f41c8(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,0x8c43b2a4,ar4 + 0x17c,ar7));
  return uVar1;
}

__asm__(".globl _Class_12c058_m1_0f5660\n.set _Class_12c058_m1_0f5660, _Class_12c058_m1_0f5660_def\n");
//@unit 8c0f56e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f56e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f56e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - 0.1;
  if (*(float *)(unsigned)(ar4 + 0x34) <= -100.0) {
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c0f56e8\n.set _FUN_8c0f56e8, _FUN_8c0f56e8_def\n");
//@unit 8c0f5730
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x170) + 8))))((int *)(unsigned)(ar4 + 0x170),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5730\n.set _FUN_8c0f5730, _FUN_8c0f5730_def\n");
//@unit 8c0f5754
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0x178,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0f5754\n.set _FUN_8c0f5754, _FUN_8c0f5754_def\n");
//@unit 8c0f577c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f577c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f577c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019088(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f577c\n.set _FUN_8c0f577c, _FUN_8c0f577c_def\n");
//@unit 8c0f57f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f57f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f57f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x170,ar5,ar6,ar7));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019088(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x178,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f57f0\n.set _FUN_8c0f57f0, _FUN_8c0f57f0_def\n");
//@unit 8c0f5878
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_24_0f5878";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_0f5878\n.set _get_field_24_0f5878, _get_field_24_0f5878_def\n");
//@unit 8c0f5880
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5880";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x170;
}

__asm__(".globl _FUN_8c0f5880\n.set _FUN_8c0f5880, _FUN_8c0f5880_def\n");
//@unit 8c0f5890
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x178;
}

__asm__(".globl _FUN_8c0f5890\n.set _FUN_8c0f5890, _FUN_8c0f5890_def\n");
//@unit 8c0f58a0
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f58a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f58a0\n.set _noop_0f58a0, _noop_0f58a0_def\n");
//@unit 8c0f58a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0f58a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f58a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = 3;
  ar5_00 = 0xf;
  ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0f4040(ar4,0xf,3,ar5); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12bec0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016410(ar4 + 0x170,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x1b4,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x1bc,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1dc,ar5_00,ar6_00,ar5));
  *(undefined1 *)(unsigned)(0x1d8 + ar4) = 0;
  *(undefined4 *)(unsigned)0x8c43b338 = 0;
  ((undefined1 *)(unsigned)1)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)2)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)3)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)4)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)5)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)6)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)7)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)8)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)9)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)10)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0xb)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0xc)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0xd)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0xe)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0xf)[0x8c43b338] = 0x7f;
  ((undefined1 *)(unsigned)0x10)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0x11)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x12)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x13)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x14)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x15)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x16)[0x8c43b338] = 0;
  ((undefined1 *)(unsigned)0x17)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x18)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x19)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1a)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1b)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1c)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1d)[0x8c43b338] = (short)0xff;
  ((undefined1 *)(unsigned)0x1e)[0x8c43b338] = (short)0x80;
  ((undefined1 *)(unsigned)0x1f)[0x8c43b338] = (short)0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f5ad0(ar4,ar5_00,ar6_00,ar5));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,0x8c43b47c,ar4 + 0x1dc,ar5));
  return ar4;
}

__asm__(".globl _FUN_8c0f58a4\n.set _FUN_8c0f58a4, _FUN_8c0f58a4_def\n");
//@unit 8c0f5a48
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12bec0_m0_0f5a48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12bec0);
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

__asm__(".globl _Class_12bec0_m0_0f5a48\n.set _Class_12bec0_m0_0f5a48, _Class_12bec0_m0_0f5a48_def\n");
//@unit 8c0f5ad0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f5ad0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5ad0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 1;
  return 0x74;
}

__asm__(".globl _FUN_8c0f5ad0\n.set _FUN_8c0f5ad0, _FUN_8c0f5ad0_def\n");
//@unit 8c0f5b10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_Failed_to_load_textuer_FOOD_0f5b18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_load_textuer_FOOD_0f5b18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined1 *ar5_01;
  undefined **ar5_02;
  undefined *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  uint uVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar7_00 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c1401b4);
  ar5_00 = ((undefined1 *)(unsigned)0x8c140184);
  iVar1 = ar4 + 0x170;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016464(iVar1,((undefined1 *)(unsigned)0x8c140184),((undefined1 *)(unsigned)0x8c1401b4),4));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar1,ar5_00,ar6_00,ar7_00));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 512.0001354217529;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40800000,fVar3);
  }
  else {
    dVar4 = -1.3757563587465766e-249;
  }
  if (cVar5 == '\0') {
    iVar1 = (int)(F32LO(dVar4) * F32HI(dVar4));
  }
  else {
    iVar1 = (int)(dVar4 * dVar4);
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    ar6_01 = 4;
    ar5_01 = ((undefined1 *)(unsigned)0x8c43b338) + iVar1 * 0x10;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0164c8(ar4 + 0x170,ar5_01,4,ar7_00));
  }
  else {
    ar6_01 = 4;
    ar5_01 = ((undefined1 *)(unsigned)0x8c43b368);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0164c8(ar4 + 0x170,((undefined1 *)(unsigned)0x8c43b368),4,ar7_00));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014790(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014764(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a64(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  ar5_02 = &(*(undefined4 *)(unsigned)(unsigned)0x8c1401d0);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x1b4) + 8))))((int *)(unsigned)(ar4 + 0x1b4),&(*(undefined4 *)(unsigned)(unsigned)0x8c1401d0),ar6_01,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x1b4,ar5_02,ar6_01,ar7_00));
  for (uVar2 = 0; uVar2 < *(uint *)(unsigned)(iVar1 + 4); uVar2 = uVar2 + 1) {
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c14026d),((undefined1 *)(unsigned)0x8c1401e2) + 2,iVar1));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c140272),((undefined1 *)(unsigned)0x8c140291),0,2));
  }
  return iVar1;
}

__asm__(".globl _s_Failed_to_load_textuer_FOOD_0f5b18\n.set _s_Failed_to_load_textuer_FOOD_0f5b18, _s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
//@unit 8c0f5c88
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Failed_to_load_textuer_FO_wrap_0f5c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_textuer_FOOD_0f5b18(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_load_textuer_FO_wrap_0f5c88\n.set _s_Failed_to_load_textuer_FO_wrap_0f5c88, _s_Failed_to_load_textuer_FO_wrap_0f5c88_def\n");
//@unit 8c0f5ca8
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12bec0_m2_0f5ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x28))))(ar4,ar7,ar6,ar7));
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

__asm__(".globl _Class_12bec0_m2_0f5ca8\n.set _Class_12bec0_m2_0f5ca8, _Class_12bec0_m2_0f5ca8_def\n");
//@unit 8c0f5d1c
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12bec0_m3_0f5d1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x28))))(ar4,ar7,ar6,ar7));
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

__asm__(".globl _Class_12bec0_m3_0f5d1c\n.set _Class_12bec0_m3_0f5d1c, _Class_12bec0_m3_0f5d1c_def\n");
//@unit 8c0f5d80
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5d80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5d80\n.set _FUN_8c0f5d80, _FUN_8c0f5d80_def\n");
//@unit 8c0f5d98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5d98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0f5d98\n.set _FUN_8c0f5d98, _FUN_8c0f5d98_def\n");
//@unit 8c0f5de8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5de8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4c0c(ar4,ar5,ar6,ar7));
  iVar1 = 0x1cc;
  *(undefined4 *)(unsigned)(0x1cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f5de8\n.set _FUN_8c0f5de8, _FUN_8c0f5de8_def\n");
//@unit 8c0f5e0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f5e0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5e0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  double dVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0191c8((undefined1 *)(unsigned)((int)register0x0000003c + -0x48),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256328(0,ar5,ar6,ar7); });
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c013b3c(uVar1,ar5,ar6,ar7));
  if (cVar6 == '\0') {
    uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x4c))+0)) = uVar1;
    dVar3 = CONCAT44D(0x47800000,uVar1);
  }
  else {
    dVar3 = 12831.689682006836;
    (*(undefined8 *)(fr0_ - 0x4c)) = in_dr0;
  }
  if (cVar5 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x40c90fd8,fVar2);
  }
  else {
    dVar3 = 1.0382059669001045e+34;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x46fffe00,(float)iVar4);
  }
  else {
    dVar3 = -3.738952064572566e-250;
  }
  if (cVar5 == '\0') {
    iVar4 = (int)(F32LO(dVar3) - F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 - dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256a78(0,iVar4,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((undefined4)(*(undefined8 *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c256fec(0,iVar4,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c01538c(ar4 + 0x1b4,iVar4,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c014a94(ar4 + 0x1b4,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c016524(ar4 + 0x170,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c256210(1,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5e0c\n.set _FUN_8c0f5e0c, _FUN_8c0f5e0c_def\n");
//@unit 8c0f5f08
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5f08";
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

__asm__(".globl _FUN_8c0f5f08\n.set _FUN_8c0f5f08, _FUN_8c0f5f08_def\n");
//@unit 8c0f5f50
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5f50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x40))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f50\n.set _FUN_8c0f5f50, _FUN_8c0f5f50_def\n");
//@unit 8c0f5f6c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5f6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x40))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5f6c\n.set _FUN_8c0f5f6c, _FUN_8c0f5f6c_def\n");
//@unit 8c0f5f88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f5f88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5f88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0f5f90);
}

__asm__(".globl _FUN_8c0f5f88\n.set _FUN_8c0f5f88, _FUN_8c0f5f88_def\n");
//@unit 8c0f5f94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f5f94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5f94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0f5f9c);
}

__asm__(".globl _FUN_8c0f5f94\n.set _FUN_8c0f5f94, _FUN_8c0f5f94_def\n");
//@unit 8c0f5fa0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f5fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5fa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0f5fa8);
}

__asm__(".globl _FUN_8c0f5fa0\n.set _FUN_8c0f5fa0, _FUN_8c0f5fa0_def\n");
//@unit 8c0f5fac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f5fac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5fac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0f5fb4);
}

__asm__(".globl _FUN_8c0f5fac\n.set _FUN_8c0f5fac, _FUN_8c0f5fac_def\n");
//@unit 8c0f5fb8
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f5fb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f5fb8\n.set _noop_0f5fb8, _noop_0f5fb8_def\n");
//@unit 8c0f5fbc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f5fbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4fa4(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f5fbc\n.set _FUN_8c0f5fbc, _FUN_8c0f5fbc_def\n");
//@unit 8c0f5fdc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f5fdc_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f5fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 168; for (int i_ = 0; i_ < 168; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  float *ar5_00;
  undefined *puVar7;
  float *a6;
  undefined4 uVar8;
  float fVar9;
  float fVar12;
  double dVar10;
  ulonglong uVar11;
  double in_dr14 = 0;
  double dVar13;
  undefined8 in_xd0 = 0;
  char cVar14;
  char cVar15;
  
  cVar15 = '\0';
  cVar14 = '\0';
  pfVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  uVar8 = 0;
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x38)),pfVar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x48)),pfVar5,ar6,ar7));
  a6 = &(*(float *)(fr0_ - 0x48));
  pfVar5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x124))))(ar5,&(*(float *)(fr0_ - 0x38)),a6,ar7));
  if (cVar15 == '\0') {
    fVar9 = *(float *)(unsigned)(ar4 + 0x30);
    fVar12 = (*(float *)(fr0_ - 0x38));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x30);
    fVar9 = (*(float *)(fr0_ - 0x38));
    fVar12 = (*(float *)(fr0_ - 0x34));
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    pfVar5 = (float *)(unsigned)(ar4 + 0x30);
    if (cVar15 == '\0') {
      fVar9 = *pfVar5;
      fVar12 = (*(float *)(fr0_ - 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar5;
      fVar9 = (*(float *)(fr0_ - 0x48));
      fVar12 = (*(float *)(fr0_ - 0x44));
    }
    if (cVar14 != '\0' || fVar12 <= fVar9) {
      if (cVar15 != '\0') {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
        (*(float *)(fr0_ - 0x48)) = fVar9;
      }
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x48)) - 1.0;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x48))) -
                          CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x48))),0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x30) = (*(float *)(fr0_ - 0x48));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
      }
    }
  }
  else {
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x34)),(*(float *)(fr0_ - 0x38)));
      (*(float *)(fr0_ - 0x38)) = fVar9;
    }
    if (cVar14 == '\0') {
      (*(float *)(fr0_ - 0x38)) = (*(float *)(fr0_ - 0x38)) + 1.0;
    }
    else {
      (*(float *)(fr0_ - 0x38)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x38))) +
                        CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x38))),0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = (*(float *)(fr0_ - 0x38));
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd0;
    }
  }
  ar5_00 = (float *)(unsigned)(ar4 + 0x38);
  if (cVar15 == '\0') {
    fVar9 = *ar5_00;
    fVar12 = (*(float *)(fr0_ - 0x30));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)ar5_00;
    fVar9 = (*(float *)(fr0_ - 0x30));
    fVar12 = (*(float *)(fr0_ - 0x2c));
  }
  if (cVar14 == '\0' && fVar12 < fVar9) {
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D((*(uint *)(fr0_ - 0x40)),*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x38);
      dVar10 = CONCAT44D((*(undefined4 *)(fr0_ - 0x3c)),(*(uint *)(fr0_ - 0x40)));
    }
    if (cVar14 != '\0' || F32HI(dVar10) <= SUB84(dVar10,0)) {
      if (cVar15 == '\0') {
        dVar10 = (double)(ulonglong)(*(uint *)(fr0_ - 0x40));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c)),(*(uint *)(fr0_ - 0x40)));
      }
      dVar13 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(0x3f800000,F32LO(dVar10) - 1.0);
      }
      else {
        dVar10 = dVar13 - dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = SUB84(dVar10,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x38) = in_xd0;
      }
    }
  }
  else {
    pfVar5 = (float *)(unsigned)(ar4 + 0x38);
    if (cVar15 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
      (*(float *)(fr0_ - 0x30)) = fVar9;
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30)) + 1.0);
    }
    else {
      dVar10 = CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30))) + CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x30)));
    }
    if (cVar15 == '\0') {
      *pfVar5 = SUB84(dVar10,0);
    }
    else {
      *(undefined8 *)(unsigned)pfVar5 = in_xd0;
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x1cc);
  if (iVar1 == 0) {
    if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      uVar3 = SUB84(in_dr14,0);
      fVar9 = F32LO(dVar10);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7));
      uVar4 = 0x14;
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar2,0x14,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7));
      puVar7 = ((undefined1 *)(unsigned)0x8c1401d8);
      iVar1 = ar4 + 0x1bc;
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023c98(iVar1,((undefined1 *)(unsigned)0x8c1401d8),a6,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar1,puVar7,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1bc);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c4);
          dVar10 = 2.81690796727611e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = (undefined4)uVar11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x14,a6,ar7));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,uVar2);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) /
                                   F32HI(dVar10),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d4) = in_dr14;
      }
      *(int *)(unsigned)(ar4 + 0x1cc) = *(int *)(unsigned)(ar4 + 0x1cc) + 1;
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      uVar3 = SUB84(in_dr14,0);
      fVar9 = F32LO(dVar10);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 168)), rand(pfVar5,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,0x32,a6,ar7));
      uVar4 = 0x32;
      (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar2,0x32,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(ar4 + 0x1bc,uVar4,a6,ar7));
      puVar7 = ((undefined1 *)(unsigned)0x8c1401dc);
      iVar1 = ar4 + 0x1bc;
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023c98(iVar1,((undefined1 *)(unsigned)0x8c1401dc),a6,ar7));
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar1,puVar7,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1bc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1bc);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1bc) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1bc) = in_xd0;
        }
      }
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar2 = 2;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,2,a6,ar7));
      if (iVar1 == 0) {
        if (cVar15 == '\0') {
          dVar10 = CONCAT44D(0xbf800000,*(undefined4 *)(unsigned)(ar4 + 0x1c4));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1c4);
          dVar10 = 9.60729449836498e-312;
        }
        if (cVar14 == '\0') {
          fVar9 = F32LO(dVar10) * F32HI(dVar10);
        }
        else {
          fVar9 = SUB84(dVar10 * dVar10,0);
        }
        if (cVar15 == '\0') {
          *(float *)(unsigned)(ar4 + 0x1c4) = fVar9;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1c4) = in_xd0;
        }
      }
      uVar11 = (ulonglong)(uint)fVar9;
      if (cVar15 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
      }
      (*(undefined4 *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 168)), rand(uVar4,uVar2,a6,ar7));
      uVar4 = (undefined4)uVar11;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c((*(undefined4 *)(fr0_ - 0x94)),0x14,a6,ar7));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D((float)iVar1,uVar3);
      }
      else {
        in_dr14 = (double)iVar1;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x41200000,uVar4);
      }
      else {
        dVar10 = 9.76657887968582e-312;
      }
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) /
                                   F32HI(dVar10),SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 / dVar10;
      }
      dVar10 = CONCAT44D(0x3f800000,SUB84(dVar10,0));
      if (cVar14 == '\0') {
        in_dr14 = CONCAT44D(F32HI(in_dr14) + 1.0,SUB84(in_dr14,0));
      }
      else {
        in_dr14 = in_dr14 + dVar10;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d4) = (int)((ulonglong)in_dr14 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d4) = in_dr14;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 2;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      iVar1 = ar4 + 0x30;
      (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x128))))(ar5,iVar1,a6,ar7));
      uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
      if (cVar15 != '\0') {
        (*(undefined4 *)(fr0_ - 0xa4)) = SUB84(dVar10,0);
        (*(undefined4 *)(fr0_ - 0xa0)) = uVar4;
      }
      iVar6 = ar4;
      (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,iVar1,a6,ar7));
      uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(uVar4,(*(undefined4 *)(fr0_ - 0xa4)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xa0)),uVar4);
      }
      if (cVar14 == '\0') {
        fVar9 = F32LO(dVar10) + F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 + dVar10,0);
      }
      if (cVar15 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar9);
      }
      else {
        uVar11 = *(ulonglong *)(unsigned)(ar4 + 0x34);
      }
      if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
        iVar6 = ar4 + 0x1bc;
        (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(iVar6,iVar1,a6,ar7));
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
        }
        uVar8 = 1;
        uVar11 = uVar11 & 0xffffffff;
        if (cVar15 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
        }
      }
      uVar3 = (undefined4)uVar11;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar6,iVar1,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar4,100,a6,ar7));
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(0x461c4000,uVar3);
      }
      else {
        dVar10 = 3.23124508159998e-312;
      }
      if (cVar14 == '\0') {
        dVar13 = CONCAT44D(uVar2,(float)iVar1 / F32HI(dVar10));
      }
      else {
        dVar13 = CONCAT44D(uVar2,(float)iVar1) / dVar10;
      }
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),SUB84(dVar10,0));
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar13),
                                  SUB84(dVar10,0));
      }
      else {
        dVar10 = dVar10 + dVar13;
      }
      if (cVar15 == '\0') {
        *(int *)(unsigned)(ar4 + 0x1d0) = (int)(D2U(dVar10) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x1d0) = dVar10;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7); });
      uVar4 = SUB84(dVar10,0);
      (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x68)),a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,a6,ar7));
      if (cVar15 == '\0') {
        uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x34);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      }
      a6 = (float *)(unsigned)0x1d0;
      if (cVar15 == '\0') {
        dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),uVar4);
      }
      else {
        dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
      }
      if (cVar14 == '\0') {
        fVar9 = F32LO(dVar10) - F32HI(dVar10);
      }
      else {
        fVar9 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar15 == '\0') {
        *(float *)(unsigned)(ar4 + 0x34) = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
      }
    }
    goto LAB_8c0f6620;
  }
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  iVar1 = ar4 + 0x30;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)*ar5 + 0x128))))(ar5,iVar1,a6,ar7));
  uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
  (*(undefined4 *)(fr0_ - 0x98)) = uVar4;
  if (cVar15 != '\0') {
    (*(undefined4 *)(fr0_ - 0x98)) = SUB84(dVar10,0);
    (*(undefined4 *)(fr0_ - 0x94)) = uVar4;
  }
  iVar6 = ar4;
  (vsp = ((unsigned long)(fr0_ - 168)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x174))))(ar4,iVar1,a6,ar7));
  uVar4 = (undefined4)(D2U(dVar10) >> 0x20);
  if (cVar15 == '\0') {
    dVar10 = CONCAT44D(uVar4,(*(undefined4 *)(fr0_ - 0x98)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),uVar4);
  }
  if (cVar14 == '\0') {
    fVar9 = F32LO(dVar10) + F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 + dVar10,0);
  }
  if (cVar15 == '\0') {
    uVar11 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x34),fVar9);
  }
  else {
    uVar11 = *(ulonglong *)(unsigned)(ar4 + 0x34);
  }
  if (cVar14 != '\0' || (float)(uVar11 >> 0x20) <= (float)uVar11) {
    iVar6 = ar4 + 0x1bc;
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c022d04(iVar6,iVar1,a6,ar7));
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    uVar8 = 1;
    uVar11 = uVar11 & 0xffffffff;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11;
    }
  }
  uVar4 = (undefined4)uVar11;
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x10) == 0x10) {
    *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 2;
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d4) = uVar11 & 0xffffffff;
    }
    if (cVar15 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x1d0) = uVar11 & 0xffffffff;
    }
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023bf4(ar4 + 0x1bc,((undefined1 *)(unsigned)0x8c1401e0),a6,ar7));
  }
  else {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 168)), rand(iVar6,iVar1,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 168)), libgcc_divide_helper_01031c(uVar3,100,a6,ar7));
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(0x42c80000,uVar4);
    }
    else {
      dVar10 = 9.85159599864978e-312;
    }
    if (cVar14 == '\0') {
      dVar13 = CONCAT44D(uVar2,(float)iVar1 / F32HI(dVar10));
    }
    else {
      dVar13 = CONCAT44D(uVar2,(float)iVar1) / dVar10;
    }
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),SUB84(dVar10,0));
    }
    else {
      dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      dVar10 = CONCAT44D(F32HI(dVar10) + F32LO(dVar13),SUB84(dVar10,0)
                               );
    }
    else {
      dVar10 = dVar10 + dVar13;
    }
    if (cVar15 == '\0') {
      *(int *)(unsigned)(ar4 + 0x1d0) = (int)(D2U(dVar10) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x1d0) = dVar10;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 168)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 168)) - 8); Vec3_scale(ar4 + 0x1bc,ar4 + 0x1d4,a6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 168)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x58)),a6,ar7));
    (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,a6,ar7));
    if (cVar15 == '\0') {
      dVar10 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x1d0),*(undefined4 *)(unsigned)(ar4 + 0x34));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x34);
      dVar10 = *(double *)(unsigned)(ar4 + 0x1d0);
    }
    if (cVar14 == '\0') {
      fVar9 = F32LO(dVar10) - F32HI(dVar10);
    }
    else {
      fVar9 = SUB84(dVar10 - dVar10,0);
    }
    if (cVar15 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x34) = in_xd0;
    }
  }
LAB_8c0f6620:
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(&(*(float *)(fr0_ - 0x38)),0xffffffff,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 168)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,ar7));
  return uVar8;
}

__asm__(".globl _FUN_8c0f5fdc\n.set _FUN_8c0f5fdc, _FUN_8c0f5fdc_def\n");
//@unit 8c0f66ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f66ac_def(int ar4,double *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f66ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 in_fr1 = 0;
  undefined4 uVar4;
  double dVar5;
  double in_dr12 = 0;
  double in_dr14 = 0;
  int iVar6;
  int iVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  if (ar6 == 0) {
    in_dr14 = 8.854438670043751e+20;
    in_dr12 = 5.879900608187177e+19;
  }
  else if (ar6 == 1) {
    in_dr14 = 5.879900592671609e+19;
    in_dr12 = 1.1709360855239885e+17;
  }
  else if (ar6 == 2) {
    in_dr14 = 1.9172811027428727e+24;
    in_dr12 = 1924145626640.0;
  }
  if (ar6 == 3) {
    *(undefined4 *)(unsigned)ar5 = 0;
    puVar3 = (undefined4 *)(unsigned)((int)ar5 + 4);
    *puVar3 = 0;
    *(undefined4 *)(unsigned)(ar5 + 1) = 0;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
    if (cVar8 == '\0') {
      iVar6 = (int)SUB84(in_dr12,0);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar7 = (int)SUB84(in_dr14,0);
    }
    else {
      iVar7 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar7 + iVar2),in_fr1);
    }
    else {
      dVar5 = (double)(iVar7 + iVar2);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)ar5 = (int)(D2U(dVar5) >> 0x20);
    }
    else {
      *ar5 = dVar5;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(uVar1,iVar6,ar6,ar7));
    uVar4 = SUB84(dVar5,0);
    if (cVar8 == '\0') {
      iVar6 = (int)F32HI(in_dr12);
    }
    else {
      iVar6 = (int)in_dr12;
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,iVar6,ar6,ar7));
    if (cVar8 == '\0') {
      iVar2 = (int)F32HI(in_dr14);
    }
    else {
      iVar2 = (int)in_dr14;
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D((float)(iVar2 + iVar6),uVar4);
    }
    else {
      dVar5 = (double)(iVar2 + iVar6);
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar5 + 1) = (int)(D2U(dVar5) >> 0x20);
      *(undefined4 *)(unsigned)((int)ar5 + 4) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    else {
      ar5[1] = dVar5;
      *(undefined8 *)(unsigned)((int)ar5 + 4) = *(undefined8 *)(unsigned)(ar4 + 0x34);
    }
    puVar3 = (undefined4 *)(unsigned)(ar4 + 0x34);
  }
  return puVar3;
}

__asm__(".globl _FUN_8c0f66ac\n.set _FUN_8c0f66ac, _FUN_8c0f66ac_def\n");
//@unit 8c0f67e0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f67e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f67e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0f67e8);
}

__asm__(".globl _FUN_8c0f67e0\n.set _FUN_8c0f67e0, _FUN_8c0f67e0_def\n");
//@unit 8c0f67ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f67ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f67ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(ar4,ar5,ar6,ar7));
  uVar2 = 3;
  (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_01031c(uVar1,3,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), rand(uVar1,uVar2,ar6,ar7));
  uVar2 = 3;
  (vsp = ((unsigned long)(fr0_ - 32)), libgcc_divide_helper_01031c(uVar1,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1c)),uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c023aa0(ar4 + 0x30,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f67ec\n.set _FUN_8c0f67ec, _FUN_8c0f67ec_def\n");
//@unit 8c0f6870
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f6870";
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

__asm__(".globl _FUN_8c0f6870\n.set _FUN_8c0f6870, _FUN_8c0f6870_def\n");
//@unit 8c0f68c0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f68c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0f68c0\n.set _FUN_8c0f68c0, _FUN_8c0f68c0_def\n");
//@unit 8c0f692c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f692c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f692c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x48) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a1fc(ar4 + 0x10,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c08a9b8(ar4 + 0x1c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  return 100;
}

__asm__(".globl _FUN_8c0f692c\n.set _FUN_8c0f692c, _FUN_8c0f692c_def\n");
//@unit 8c0f69ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0f69ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f69ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 in_fr1 = 0;
  undefined4 uVar3;
  undefined8 uVar4;
  double dVar5;
  undefined4 in_fr4 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = in_fr4;
    *(undefined4 *)(unsigned)(ar4 + 0x20) = in_fr4;
    uVar4 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = in_fr4;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x24) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    *(ulonglong *)(unsigned)(ar4 + 0x20) = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    uVar4 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),in_fr4);
    *(undefined8 *)(unsigned)(ar4 + 0x1c) = uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_length_sq(ar6,ar5,ar6_00,ar7));
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x30) = (int)((ulonglong)uVar4 >> 0x20);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x30) = uVar4;
  }
  uVar3 = (undefined4)uVar4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), Vec3_length(ar6,ar5,ar6_00,ar7));
  iVar2 = ar4 + 0x34;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(iVar2,uVar1,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), rand(iVar2,uVar1,ar6_00,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), libgcc_divide_helper_01031c(uVar1,0x28,ar6_00,ar7));
  iVar2 = iVar2 + -0x14;
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D((float)iVar2,uVar3);
  }
  else {
    dVar5 = (double)iVar2;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x18) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x18) = dVar5;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0f69ec\n.set _FUN_8c0f69ec, _FUN_8c0f69ec_def\n");
//@unit 8c0f6ab0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f6ab0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(ar4 + 0x2c) != 0) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0f6ab0\n.set _FUN_8c0f6ab0, _FUN_8c0f6ab0_def\n");
//@unit 8c0f6ac4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f6ac4_def(ulonglong *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f6ac4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  int *piVar2;
  uint *a5;
  float *a6;
  float *a7;
  uint uVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  double dVar5;
  float fVar9;
  ulonglong uVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 in_fr15 = 0;
  ulonglong in_xd0 = 0;
  ulonglong in_xd14 = 0;
  bool bVar10;
  undefined4 in_PR = 0;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  piVar2 = ar5;
  (*(undefined4 *)(fr0_ - 0x18)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c102748(&(*(uint *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x34)),piVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x44)),piVar2,ar6,ar7));
  a7 = &(*(float *)(fr0_ - 0x1c));
  a6 = &(*(float *)(fr0_ - 0x20));
  a5 = &(*(uint *)(fr0_ - 0x24));
  piVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  dVar8 = CONCAT44D(0x3f800000,in_fr15);
  uVar3 = (uint)in_dr0;
  if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
    if (cVar12 == '\0') {
      dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 0x44),uVar3);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 0x44);
    }
    if (cVar11 == '\0') {
      dVar5 = CONCAT44D(F32HI(dVar5) + 1.0,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 + dVar8;
    }
    if (cVar12 == '\0') {
      *(uint *)(unsigned)((int)ar4 + 0x44) = (uint)(D2U(dVar5) >> 0x20);
    }
    else {
      *(double *)(unsigned)((int)ar4 + 0x44) = dVar5;
    }
  }
  else {
    *(uint *)(unsigned)(ar4 + 5) = (uint)ar4[5] + 1;
    if ((int)(uint)ar4[5] < 0xb5) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = in_dr0 & 0xffffffff;
      }
    }
    else {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 104)), rand(piVar2,a5,a6,a7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), libgcc_divide_helper_01031c(ar4_00,10,a6,a7));
      if ((iVar1 == 0) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0f72ec(ar4,ar5,a6,a7)), iVar1 != 0)) {
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)uVar3;
        }
      }
      else {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3dcccccd,*(uint *)(unsigned)((int)ar4 + 0x44));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x44);
          dVar5 = 4.07935454911844e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) + F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 + dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x44) = fVar4;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = in_xd0;
        }
      }
    }
    if (*(uint *)(unsigned)((int)ar4 + 100) == 0) {
      a7 = ((float *)(fr0_ - 0x2c));
      a6 = &(*(float *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x13c))))(ar5,((undefined1 *)(fr0_ - 0x34)),a6,a7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_sub(ar4,((undefined1 *)(fr0_ - 0x34)),a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_assign(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x54)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c02174c(0x8c2b59d0,0x28,a6,a7));
      *(uint *)(unsigned)((int)ar4 + 100) = 1;
    }
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_scale((uint *)(unsigned)((int)ar4 + 0x34),ar4 + 6,a6,a7); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c023aa0(ar4,((undefined1 *)(fr0_ - 0x64)),a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,a6,a7));
  if (cVar12 == '\0') {
    dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 0x44),*(uint *)(unsigned)((int)ar4 + 4));
  }
  else {
    in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 4);
    dVar5 = *(double *)(unsigned)((int)ar4 + 0x44);
  }
  if (cVar11 == '\0') {
    fVar4 = F32LO(dVar5) - F32HI(dVar5);
  }
  else {
    fVar4 = SUB84(dVar5 - dVar5,0);
  }
  if (cVar12 == '\0') {
    *(float *)(unsigned)((int)ar4 + 4) = fVar4;
    uVar6 = CONCAT44((*(uint *)(fr0_ - 0x24)),(uint)*ar4);
  }
  else {
    *(ulonglong *)(unsigned)((int)ar4 + 4) = in_xd0;
    in_xd0 = *ar4;
    uVar6 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(uint *)(fr0_ - 0x24)));
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)*ar4;
    }
    else {
      in_xd0 = *ar4;
    }
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)ar4 = 0;
      }
      else {
        *ar4 = uVar6 & 0xffffffff;
      }
      fVar4 = (float)(int)(uint)ar4[9];
      if (cVar12 == '\0') {
        fVar9 = 3.0;
      }
      else {
        fVar4 = 3.0;
        fVar9 = 1.8;
      }
      if (cVar11 == '\0' && fVar4 < fVar9) {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) / F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 4) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
        }
        else {
          ar4[4] = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
          dVar5 = 4.41904794563714e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(unsigned)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(unsigned)(ar4 + 9) = (uint)ar4[9] + 1;
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(uint *)(unsigned)ar4 = (*(uint *)(fr0_ - 0x24));
    }
    else {
      *ar4 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(uint *)(fr0_ - 0x24)));
    }
    fVar4 = (float)(int)(uint)ar4[9];
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar5 = -1.4876824575960095e+234;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)(ar4 + 9) = (uint)ar4[9] + 1;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  if (cVar12 == '\0') {
    uVar6 = CONCAT44((*(float *)(fr0_ - 0x1c)),(uint)ar4[1]);
  }
  else {
    in_xd0 = ar4[1];
    uVar6 = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
  }
  if (cVar11 == '\0' && (float)uVar6 < (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      uVar6 = (ulonglong)(uint)ar4[1];
    }
    else {
      in_xd0 = ar4[1];
    }
    uVar7 = uVar6 & 0xffffffff;
    if (cVar11 != '\0' || (float)uVar6 <= 0.0) {
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 1) = 0;
      }
      else {
        ar4[1] = uVar6 & 0xffffffff;
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
      }
      else {
        uVar7 = 0x3fe6666640400000;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
        }
        else {
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) / F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 / dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
          in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
          dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
          in_xd0 = ar4[4];
          dVar5 = 6.28640424168658e-312;
        }
        if (cVar11 == '\0') {
          fVar4 = F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          fVar4 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 4) = fVar4;
        }
        else {
          ar4[4] = in_xd0;
        }
        if (cVar12 == '\0') {
          *(uint *)(unsigned)(ar4 + 6) = 0;
        }
        else {
          ar4[6] = (ulonglong)(uint)fVar4;
        }
        *(uint *)(unsigned)(ar4 + 10) = (uint)ar4[10] + 1;
        uVar7 = (ulonglong)(uint)fVar4;
        if (cVar12 == '\0') {
          *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
        }
        else {
          *(ulonglong *)(unsigned)((int)ar4 + 0x44) = uVar7;
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(unsigned)(ar4 + 1) = (*(float *)(fr0_ - 0x1c));
    }
    else {
      ar4[1] = CONCAT44((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar12 == '\0') {
      uVar7 = CONCAT44(0x40400000,(float)(int)(uint)ar4[10]);
    }
    else {
      uVar7 = 0x3fe6666640400000;
    }
    if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
      if (cVar12 == '\0') {
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 / dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar5 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = ar4[4];
        dVar5 = 4.41904794563714e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar4 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
      }
      else {
        ar4[4] = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)(ar4 + 10) = (uint)ar4[10] + 1;
      uVar7 = (ulonglong)(uint)fVar4;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = uVar7;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4,a6,a7));
  if (cVar12 == '\0') {
    dVar8 = CONCAT44D((int)(D2U(dVar8) >> 0x20),(int)(uVar7 >> 0x20));
    uVar7 = in_xd14;
    fVar4 = *(float *)(unsigned)((int)ar4 + 4);
    fVar9 = (*(float *)(fr0_ - 0x20));
  }
  else {
    in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 4);
    fVar4 = (*(float *)(fr0_ - 0x20));
    fVar9 = (*(float *)(fr0_ - 0x1c));
  }
  if (cVar11 == '\0' && fVar4 < fVar9) {
    if (cVar12 == '\0') {
      dVar5 = CONCAT44D(*(uint *)(unsigned)((int)ar4 + 4),fVar4);
    }
    else {
      dVar5 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (cVar11 == '\0') {
      bVar10 = SUB84(dVar8,0) < F32HI(dVar5);
    }
    else {
      bVar10 = dVar8 < dVar5;
    }
    if (!bVar10) {
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 4) = SUB84(dVar8,0);
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 4) = uVar7;
      }
      *(uint *)(unsigned)((int)ar4 + 0x2c) = *(uint *)(unsigned)((int)ar4 + 0x2c) + 1;
      if (((uint)ar4[9] == 0) && ((uint)ar4[10] == 0)) {
        fVar4 = (float)(int)*(uint *)(unsigned)((int)ar4 + 0x4c);
        if (cVar12 == '\0') {
          fVar9 = 3.0;
        }
        else {
          fVar4 = 3.0;
          fVar9 = 1.8;
        }
        if (cVar11 == '\0' && fVar4 < fVar9) {
          if (cVar12 == '\0') {
            dVar8 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
          }
          else {
            in_xd0 = ar4[4];
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) / F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)(ar4 + 4) = fVar4;
            dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
          }
          else {
            ar4[4] = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
            dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
            in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
            dVar8 = 2.80633114450354e-312;
          }
          if (cVar11 == '\0') {
            fVar4 = F32LO(dVar8) * F32HI(dVar8);
          }
          else {
            fVar4 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar12 == '\0') {
            *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
          }
          if (cVar12 == '\0') {
            *(uint *)(unsigned)(ar4 + 6) = 0;
          }
          else {
            ar4[6] = (ulonglong)(uint)fVar4;
          }
          *(uint *)(unsigned)((int)ar4 + 0x4c) = *(uint *)(unsigned)((int)ar4 + 0x4c) + 1;
          if (cVar12 == '\0') {
            *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
          }
          else {
            *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
          }
        }
      }
    }
  }
  else {
    if (cVar12 == '\0') {
      *(float *)(unsigned)((int)ar4 + 4) = (*(float *)(fr0_ - 0x20));
    }
    else {
      *(ulonglong *)(unsigned)((int)ar4 + 4) = CONCAT44((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
    }
    fVar4 = (float)(int)*(uint *)(unsigned)((int)ar4 + 0x4c);
    if (cVar12 == '\0') {
      fVar9 = 3.0;
    }
    else {
      fVar4 = 3.0;
      fVar9 = 1.8;
    }
    if (cVar11 == '\0' && fVar4 < fVar9) {
      if (cVar12 == '\0') {
        dVar8 = CONCAT44D(0x3fe66666,(uint)ar4[4]);
      }
      else {
        in_xd0 = ar4[4];
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 / dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 4) = fVar4;
        dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x1c));
      }
      else {
        ar4[4] = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x1c);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x1c) = fVar4;
        dVar8 = CONCAT44D(0x3fe66666,*(uint *)(unsigned)((int)ar4 + 0x24));
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x1c) = in_xd0;
        in_xd0 = *(ulonglong *)(unsigned)((int)ar4 + 0x24);
        dVar8 = 6.28640424168658e-312;
      }
      if (cVar11 == '\0') {
        fVar4 = F32LO(dVar8) * F32HI(dVar8);
      }
      else {
        fVar4 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)((int)ar4 + 0x24) = fVar4;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x24) = in_xd0;
      }
      if (cVar12 == '\0') {
        *(uint *)(unsigned)(ar4 + 6) = 0;
      }
      else {
        ar4[6] = (ulonglong)(uint)fVar4;
      }
      *(uint *)(unsigned)((int)ar4 + 0x4c) = *(uint *)(unsigned)((int)ar4 + 0x4c) + 1;
      if (cVar12 == '\0') {
        *(uint *)(unsigned)((int)ar4 + 0x44) = 0;
      }
      else {
        *(ulonglong *)(unsigned)((int)ar4 + 0x44) = (ulonglong)(uint)fVar4;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,a7));
  (vsp = ((unsigned long)(fr0_ - 104)), free_if_nonnull_wrap_102790(&(*(uint *)(fr0_ - 0x24)),0xffffffff,a6,a7));
  return 0;
}

__asm__(".globl _FUN_8c0f6ac4\n.set _FUN_8c0f6ac4, _FUN_8c0f6ac4_def\n");
//@unit 8c0f7118
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f7118_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f7118";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 ain0;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = ar6;
  ain0 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac(ar4 + 0x54,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,uVar1,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25b5d0(0,ar5,uVar1,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x18));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x14));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x10));
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(0,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar6,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ain0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c140174),ar5_00,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _FUN_8c0f7118\n.set _FUN_8c0f7118, _FUN_8c0f7118_def\n");
//@unit 8c0f7204
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7204";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(ar4 + 0x2c);
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

__asm__(".globl _FUN_8c0f7204\n.set _FUN_8c0f7204, _FUN_8c0f7204_def\n");
//@unit 8c0f7258
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7258";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0f7258\n.set _FUN_8c0f7258, _FUN_8c0f7258_def\n");
//@unit 8c0f7278
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c0f7278_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f7278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float fVar2;
  
  fVar2 = *(float *)(unsigned)(ar4 + 0x60) - 0.00018518518;
  *(float *)(unsigned)(ar4 + 0x60) = fVar2;
  *(float *)(unsigned)(ar4 + 0x5c) = fVar2;
  *(float *)(unsigned)(ar4 + 0x58) = fVar2;
  *(float *)(unsigned)(ar4 + 0x54) = fVar2;
  pfVar1 = (float *)(unsigned)(ar4 + 0x60);
  if (*pfVar1 <= 0.0) {
    pfVar1 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + 1);
    *(unsigned *)(unsigned)(ar4 + 0x2c) = pfVar1;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0f7278\n.set _FUN_8c0f7278, _FUN_8c0f7278_def\n");
//@unit 8c0f72ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f72ec_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f72ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  double in_dr0 = 0;
  double in_dr14 = 0;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x1a0))))(ar5,ar5,ar6,ar7));
  iVar3 = 0;
  do {
    if (7 < iVar3) {
      return 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0f6ab0(iVar1 + iVar3 * 0x68,ar5,ar6,ar7));
    if ((iVar2 == 1) && (iVar1 + iVar3 * 0x68 != ar4)) {
      if (cVar6 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(unsigned)(iVar1 + iVar3 * 0x68 + 0x1c));
        in_dr0 = CONCAT44D(0x3fc00000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.956826979325289e-251;
      }
      if (cVar5 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 * in_dr0;
      }
      iVar2 = iVar1 + iVar3 * 0x68;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2c))); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); Vec3_sub(ar4,iVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_length_sq(((undefined1 *)(fr0_ - 0x2c)),iVar2,ar6,ar7));
      if (cVar5 == '\0') {
        bVar4 = SUB84(in_dr14,0) < F32HI(in_dr0);
      }
      else {
        bVar4 = in_dr14 < in_dr0;
      }
      ar5 = (int *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      if (!bVar4) {
        if (cVar6 == '\0') {
          in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),
                                    *(undefined4 *)(unsigned)(iVar1 + iVar3 * 0x68 + 4));
        }
        else {
          in_dr0 = *(double *)(unsigned)(ar4 + 4);
        }
        if (cVar5 != '\0' || SUB84(in_dr0,0) <= F32HI(in_dr0)) {
          return 1;
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0f72ec\n.set _FUN_8c0f72ec, _FUN_8c0f72ec_def\n");
//@unit 8c0f7408
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7408";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x1bc,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f7408\n.set _FUN_8c0f7408, _FUN_8c0f7408_def\n");
//@unit 8c0f7430
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f7430";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f7430\n.set _noop_0f7430, _noop_0f7430_def\n");
//@unit 8c0f7434
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f7434";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f7434\n.set _noop_0f7434, _noop_0f7434_def\n");
//@unit 8c0f7438
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0f7438";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0f7438\n.set _noop_0f7438, _noop_0f7438_def\n");
//@unit 8c0f743c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f743c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x170,ar5,ar6,ar7));
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f743c\n.set _FUN_8c0f743c, _FUN_8c0f743c_def\n");
//@unit 8c0f7470
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7470";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(ar4 + 0x178,ar5,ar6,ar7));
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f7470\n.set _FUN_8c0f7470, _FUN_8c0f7470_def\n");
//@unit 8c0f74a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f74a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f74a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126548)),ar5,ar6,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b188;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b188,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126558)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b194;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b194,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126568)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1a0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1a0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126578)),puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1ac,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1c4,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1b8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1b8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1e0,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1d4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1d4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b1fc,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b1f0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b1f0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b218,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b20c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b20c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b234,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b228;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b228,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b250,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b244;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b244,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b26c,puVar4,uVar2,ar7));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b260;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b260,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b288,puVar4,uVar2,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c43b27c,ar7));
  uVar1 = 0x8c43b1fc;
  uVar3 = ({ unsigned long t0_ = (unsigned long)(0x8c43b218); unsigned long t1_ = (unsigned long)(
                     0x8c43b234); unsigned long t2_ = (unsigned long)(0x8c43b250); unsigned long t3_ = (unsigned long)(0x8c43b26c); unsigned long t4_ = (unsigned long)(0x8c43b288); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c017010))))
                    (0x8c43b2a4,0x8c43b1c4,0x8c43b1e0,0x8c43b1fc); });
  puVar4 = ((void *)(unsigned)0x8c017084);
  uVar2 = 0x8c43b298;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
            (uVar3,((void *)(unsigned)0x8c017084),0x8c43b298,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b39c,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b390;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b390,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3b8,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3ac;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3ac,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3d4,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3c8;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3c8,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b3f0,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b3e4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b3e4,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b40c,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b400;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b400,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b428,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b41c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b41c,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b444,puVar4,uVar2,uVar1));
  puVar4 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b438;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)(unsigned)0x8c022cb0),0x8c43b438,uVar1));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c43b460,puVar4,uVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c43b454,uVar1));
  uVar2 = 0x8c43b3d4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c43b3f0); unsigned long t1_ = (unsigned long)(0x8c43b40c); unsigned long t2_ = (unsigned long)(
                     0x8c43b428); unsigned long t3_ = (unsigned long)(0x8c43b444); unsigned long t4_ = (unsigned long)(0x8c43b460); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c017010))))
                    (0x8c43b47c,0x8c43b39c,0x8c43b3b8,0x8c43b3d4); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
                    (uVar1,((void *)(unsigned)0x8c017084),0x8c43b470,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c0f74a4\n.set _FUN_8c0f74a4, _FUN_8c0f74a4_def\n");
//@unit 8c0f78b0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f78b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f78cc(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0f78b0\n.set _FUN_8c0f78b0, _FUN_8c0f78b0_def\n");
//@unit 8c0f78cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f78cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f78cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0f78cc\n.set _FUN_8c0f78cc, _FUN_8c0f78cc_def\n");
//@unit 8c0f78d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0f78d8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f78d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *ar5_00;
  undefined *ar6_00;
  undefined4 ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0db304(ar4 + 2,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x13,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  ar7_00 = 8;
  ar5_00 = ((void *)(unsigned)0x8c0f78b0);
  ar6_00 = ((void *)(unsigned)0x8c0f3ffc);
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c010120))))
            (ar4 + 0x1b,((void *)(unsigned)0x8c0f78b0),((void *)(unsigned)0x8c0f3ffc),8); });
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_ctor_zero((int)ar4 + 0xb0,ar5_00,ar6_00,ar7_00));
  ar4[1] = 0;
  *ar4 = 0;
  ar4[0x19] = 0;
  ar4[0x1a] = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0x8c,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(0x9c + (int)ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear((int)ar4 + 0xa0,ar5_00,ar6_00,ar7_00));
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0f78d8\n.set _FUN_8c0f78d8, _FUN_8c0f78d8_def\n");
//@unit 8c0f79b8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f79b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(unsigned)(ar4 + 100);
  for (iVar2 = ar4 + 0x4c; iVar2 != ar4 + iVar1 * 8 + 0x4c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0x8c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x9c + ar4) = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_clear(ar4 + 0xa0,ar5,ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x84 + ar4);
  for (iVar2 = ar4 + 0x6c; iVar2 != ar4 + iVar1 * 8 + 0x6c; iVar2 = iVar2 + 8) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f78cc(iVar2,ar5,ar6,ar7));
  }
  *(undefined4 *)(unsigned)(0x84 + ar4) = 0;
  iVar1 = 0x88;
  *(undefined4 *)(unsigned)(0x88 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f79b8\n.set _FUN_8c0f79b8, _FUN_8c0f79b8_def\n");
//@unit 8c0f7a78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f7a78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f7a78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126588)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b510;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b510,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c126598)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b51c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b51c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1265a8)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c43b528;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c43b528,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c1265b8)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c43b534,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0f7a78\n.set _FUN_8c0f7a78, _FUN_8c0f7a78_def\n");
//@unit 8c0f7b20
#include "../decls.h"
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
  ring[rp++ & 255] = "main";
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

__asm__(".globl _game_main\n.set _game_main, _main_def\n");
//@unit 8c0f7b70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 game_init_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "game_init";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(unsigned)(unsigned)0x8c14029c);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c1402a0);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c1402a4);
  (*(undefined4 *)(fr0_ - 0xc)) = (*(undefined1 *)(unsigned)0x8c1402a8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(unsigned)(unsigned)0x8c1402ac);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c1402b0);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c1402b4);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c1402b8);
  *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = (undefined *)(unsigned)((uint)(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) | 0xa0000000);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f7ea8(&(*(undefined4 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  if (iVar1 == 0) {
    uVar3 = 2;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c102bd0(0x31,0,2,ar7));
  }
  else {
    uVar3 = 1;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c102bd0(0x34,0,1,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259a1c(0,uVar2,uVar3,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b578) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x2b000,uVar2,uVar3,ar7));
  uVar2 = 0x2b000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c25b334((*(undefined4 *)(unsigned)(unsigned)0x8c43b578),0x2b000,uVar3,ar7); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b57c) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x1db000,uVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c236250((*(undefined4 *)(unsigned)(unsigned)0x8c43b57c),0x1db000,uVar3,ar7));
  ar7_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c258b26(0xfffaf6f0,0,0x4b320,0));
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233f98(0,0,0,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c2570ec(uVar2,uVar3,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b570) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x1000,uVar3,uVar4,ar7_00));
  uVar4 = 0;
  uVar2 = 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c23633c((*(undefined4 *)(unsigned)(unsigned)0x8c43b570),0x40,0,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c255bea(0x8c42d408,uVar2,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b574) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0xabe00,uVar2,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233d6c((*(undefined4 *)(unsigned)(unsigned)0x8c43b574),11000,uVar4,ar7_00));
  uVar3 = 0x15e;
  uVar2 = 0x8c43b584;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c25b34a(0x8c43b584,0x15e,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c213ee4(uVar2,uVar3,uVar4,ar7_00));
  uVar4 = 0xff000000;
  uVar2 = 0xff000000;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259046(0xff000000,0xff000000,0xff000000,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c233d9c(0x820,uVar2,uVar4,ar7_00); });
  uVar3 = 0x800;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c233da2(0xffffffff,0x800,uVar4,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c233dac(&(*(undefined4 *)(fr0_ - 0x28)),uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259358(3,uVar3,uVar4,ar7_00));
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2593ac(1,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), thunk_FUN_8c20a13a(uVar2,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259556(2,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c259274(1,uVar3,uVar4,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c014370(5,uVar3,uVar4,ar7_00); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c43b580) = (vsp = ((unsigned long)(fr0_ - 68)), malloc_thunk(0x4000,uVar3,uVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f7ecc((*(undefined4 *)(unsigned)(unsigned)0x8c43b580),uVar3,uVar4,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 68)), s_Tmcpack_idx_0c0448(0x8c286ebc,uVar3,uVar4,ar7_00));
  return uVar2;
}

__asm__(".globl _game_init\n.set _game_init, _game_init_def\n");
//@unit 8c0f7df8
#include "../decls.h"
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
  ring[rp++ & 255] = "game_shutdown_a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = 0x8c286ebc;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c09a4(0x8c286ebc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b37c(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23403e(ar4_00,ar5,ar6,ar7));
  if (*(undefined4 *)(unsigned)0x8c43b570 != 0) {
    ar4_00 = *(undefined4 *)(unsigned)0x8c43b570;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c43b574 != 0) {
    ar4_00 = *(undefined4 *)(unsigned)0x8c43b574;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c43b578 != 0) {
    ar4_00 = *(undefined4 *)(unsigned)0x8c43b578;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c43b57c != 0) {
    ar4_00 = *(undefined4 *)(unsigned)0x8c43b57c;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  if (*(undefined4 *)(unsigned)0x8c43b580 != 0) {
    ar4_00 = *(undefined4 *)(unsigned)0x8c43b580;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4_00,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102d40(ar4_00,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _game_shutdown_a\n.set _game_shutdown_a, _game_shutdown_a_def\n");
//@unit 8c0f7ea0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7ea0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b4ea(0x8c43b584,0x15e,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f7ea0\n.set _FUN_8c0f7ea0, _FUN_8c0f7ea0_def\n");
//@unit 8c0f7ec0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0f7ec0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0f7ec0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1265c8),ar5,ar6,ar7));
  uVar3 = 0x8c43b540;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43b540,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1265d8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43b54c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43b54c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1265e8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43b558;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43b558,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1265f8),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43b564,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126608) = CONCAT44((*(undefined1 *)(unsigned)0x8c12660c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126608) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0f7ec0\n.set _FUN_8c0f7ec0, _FUN_8c0f7ec0_def\n");
//@unit 8c0f7f78
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7f78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdc20(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa804(ar4 + 0x1054,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0f7f78\n.set _FUN_8c0f7f78, _FUN_8c0f7f78_def\n");
//@unit 8c0f7fa8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7fa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0fa80c(ar4 + 0x1054,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0f7fa8\n.set _FUN_8c0f7fa8, _FUN_8c0f7fa8_def\n");
//@unit 8c0f7ff0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f7ff0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(0x89134 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x8913c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x89140 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1034 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa83c(ar4 + 0x1054,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f7ff0\n.set _FUN_8c0f7ff0, _FUN_8c0f7ff0_def\n");
//@unit 8c0f803c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f803c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar5_00;
  
  *(undefined4 *)(unsigned)(0x89140 + ar4) = ar5;
  ar5_00 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b93c0(*(undefined4 *)(unsigned)(0x89140 + ar4),0,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1028 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bced0))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1030 + ar4) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8128))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1038 + ar4) = uVar1;
  if (*(int *)(unsigned)(0x1038 + ar4) < 0xb2) {
    *(int *)(unsigned)(0x1038 + ar4) = *(int *)(unsigned)(0x1038 + ar4) + 1;
  }
  else {
    *(undefined4 *)(unsigned)(0x1038 + ar4) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b951c(*(undefined4 *)(unsigned)(0x89140 + ar4),ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(0x103c + ar4) = uVar1;
  *(undefined4 *)(unsigned)(0x1040 + ar4) = 0;
  if (*(char *)(unsigned)(*(int *)(unsigned)(0x89140 + ar4) + 0x2c) == '\x01') {
    *(undefined4 *)(unsigned)(0x1040 + ar4) = 1;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0bb158))))
                    (*(undefined4 *)(unsigned)(0x89140 + ar4),ar4 + 0x101c,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f803c\n.set _FUN_8c0f803c, _FUN_8c0f803c_def\n");
//@unit 8c0f8128
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_c4_0f8128";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xc4 + ar4);
}

__asm__(".globl _get_field_c4_0f8128\n.set _get_field_c4_0f8128, _get_field_c4_0f8128_def\n");
//@unit 8c0f8134
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f8134";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa688(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa910(ar4 + 0x1054,ar5,ar6,ar7));
  iVar1 = 0x1014;
  *(undefined4 *)(unsigned)(0x1014 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8134\n.set _FUN_8c0f8134, _FUN_8c0f8134_def\n");
//@unit 8c0f816c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f816c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_0faa98(ar4 + 0x1054,ar5,ar6,ar7));
  iVar4 = 0;
  if (*(int *)(unsigned)(0x89134 + ar4) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_REQUEST_HOT_0f9780(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(0x89134 + ar4) = uVar2;
    iVar4 = 0;
    if (*(int *)(unsigned)(0x89140 + ar4) != 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(*(undefined4 *)(unsigned)(0x89140 + ar4),ar5,ar6,ar7));
      *(uint *)(unsigned)(0x102c + ar4) = uVar3 & 0xffff;
      *(undefined4 *)(unsigned)(0x1034 + ar4) = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1011b0))))
                        (*(undefined4 *)(unsigned)(0x7cc + *(int *)(unsigned)(0x89140 + ar4)),ar5,ar6,ar7));
      iVar1 = 0x1034;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(undefined4 *)(unsigned)(0x1034 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

__asm__(".globl _FUN_8c0f816c\n.set _FUN_8c0f816c, _FUN_8c0f816c_def\n");
//@unit 8c0f8214
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f8214";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa9fc(ar4 + 0x1054,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa70c(ar4,ar5,ar6,ar7));
  iVar1 = 0x89134;
  *(undefined4 *)(unsigned)(0x89134 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0f8214\n.set _FUN_8c0f8214, _FUN_8c0f8214_def\n");
//@unit 8c0f824c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f824c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fa944))))
                    (ar4 + 0x1054,ar4 + 0x1010,*(undefined4 *)(unsigned)(0x89138 + ar4),ar7));
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(0x89138 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x89134 + ar4) = 0;
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c0f824c\n.set _FUN_8c0f824c, _FUN_8c0f824c_def\n");
//@unit 8c0f82a4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f82a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  
  if (*(int *)(unsigned)(0x1014 + ar4) != 0) {
    if (*(int *)(unsigned)(0x1014 + ar4) != 1) {
      return 0;
    }
    uVar1 = ar5;
    ar6_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f8214(ar4,ar5,ar6,ar7));
    if (*(int *)(unsigned)(0x8913c + ar4) == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa6c8(ar4,uVar1,ar6_00,ar7));
    }
  }
  *(undefined4 *)(unsigned)(0x89138 + ar4) = 2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0f82a4\n.set _FUN_8c0f82a4, _FUN_8c0f82a4_def\n");
//@unit 8c0f8320
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0f8320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(int *)(unsigned)(0x1014 + ar4) == 0) {
    *(undefined4 *)(unsigned)(0x89138 + ar4) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HIGYOLINE0_0f8370(ar4,ar5,ar6,ar7));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0f8320\n.set _FUN_8c0f8320, _FUN_8c0f8320_def\n");
//@unit 8c0f8368
#include "../decls.h"
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
  ring[rp++ & 255] = "s_HIGYOLINE0_0f8370";
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
  *(int *)(unsigned)(ar4 + 0x89130) = ar5;
  *(int *)(unsigned)(ar4 + 0x104c) = ar4;
  *(int *)(unsigned)(ar4 + 0x1050) = ar6;
  *(undefined4 *)(unsigned)(ar4 + 0x89134) = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1408e4),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  if (ar5 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408ea),ar6_00,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x1044) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1408f5),ar6_00,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x1044) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x1044) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
          if ((((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
             ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
            *(undefined4 *)(unsigned)(ar4 + 0x1044) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
            if (((iVar1 == 0) ||
                (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
               || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0
                  )) {
              *(undefined4 *)(unsigned)(ar4 + 0x1044) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
              if ((iVar1 == 0) ||
                 (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0)
                 ) {
                *(undefined4 *)(unsigned)(ar4 + 0x1044) = 5;
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                if (iVar1 != 0) {
                  return 0;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x1044) = 6;
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
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
      if (iVar1 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 1;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7));
        if (iVar1 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 2;
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7));
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1048) = 3;
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7));
            if (iVar1 == 0) {
              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 4;
            }
            else {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7));
              if (iVar1 == 0) {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,0,ar6_00,ar7));
                if (iVar1 == 5) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 5;
                  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) = *(undefined4 *)(unsigned)(ar4 + 0x102c);
                }
                else if ((iVar1 == 6) &&
                        (*(undefined4 *)(unsigned)(ar4 + 0x1048) = 5,
                        *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) < *(int *)(unsigned)(ar4 + 0x102c))) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 6;
                }
              }
              else {
                iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
                if (iVar1 == 0) {
                  *(undefined4 *)(unsigned)(ar4 + 0x1048) = 7;
                }
                else {
                  iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7));
                  if (iVar1 == 0) {
                    *(undefined4 *)(unsigned)(ar4 + 0x1048) = 8;
                  }
                  else {
                    iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7));
                    if (iVar1 == 0) {
                      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 10;
                    }
                    else {
                      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
                      if (iVar1 == 0) {
                        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xc;
                      }
                      else {
                        pcVar3 = ((undefined1 *)(unsigned)0x8c14098e);
                        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7));
                        if (iVar1 == 0) {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0fa658(ar4,pcVar3,ar6_00,ar7));
                          if ((iVar1 < 0x13) && (0xc < iVar1)) {
                    
                            switch(iVar1) {
                            default:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xe;
                              *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) =
                                   *(undefined4 *)(unsigned)(ar4 + 0x102c);
                              break;
                            case 0xf:
                            case 0x10:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0xe;
                              if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) + 1 < *(int *)(unsigned)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x10;
                              }
                              break;
                            case 0x11:
                              *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x10;
                              if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x104c) + 8) + 2 < *(int *)(unsigned)(ar4 + 0x102c))
                              {
                                *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x12;
                              }
                            }
                          }
                        }
                        else {
                          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c1409e7),ar6_00,ar7));
                          if (iVar1 != 0) {
                            return 0;
                          }
                          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x12;
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
    iVar1 = *(int *)(unsigned)(ar4 + 0x1044);
    if ((iVar1 < 7) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ee),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1409fa),ar6_00,ar7); });
        break;
      case 1:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409fe),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a0a),ar6_00,ar7); });
        break;
      case 2:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a0e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a1a),ar6_00,ar7); });
        break;
      case 3:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a1e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a2a),ar6_00,ar7); });
        break;
      case 4:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a2e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a3a),ar6_00,ar7); });
        break;
      case 5:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a3e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a4a),ar6_00,ar7); });
        break;
      case 6:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a4e),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5a),ar6_00,ar7); });
      }
    }
    if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x94) == 1) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a5e),ar6_00,ar7));
    }
    else if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x68) < 2) {
      (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a63),ar6_00,ar7));
    }
    else {
      iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c);
      if ((9 < iVar1) || (iVar1 < 0)) {
switchD_8c0f933e_caseD_6:
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
        return 0;
      }
                    
      switch(iVar1) {
      case 0:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a68),ar6_00,ar7));
        }
        break;
      case 1:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a73),ar6_00,ar7));
        }
        break;
      case 2:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a78),ar6_00,ar7));
        }
        break;
      case 3:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a6c),ar6_00,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a7f),ar6_00,ar7));
        }
        break;
      case 4:
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60) < 1) {
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
        if ((1 < iVar1) && (*(undefined4 *)(unsigned)(ar4 + 0x1040) = 0, *(int *)(unsigned)(ar4 + 0xc) == 0)) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140a8f),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c140a98),ar6_00,ar7); });
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
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140900),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c140911),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14094e),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14097b),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c14099b),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
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
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409a1),ar6_00,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140906),ar6_00,ar7));
      if (iVar1 == 0) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409ad),ar6_00,ar7); });
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140917),ar6_00,ar7));
        if ((((iVar1 == 0) ||
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140922),ar6_00,ar7)), iVar1 == 0)) ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14092d),ar6_00,ar7)), iVar1 == 0)) ||
           ((iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140938),ar6_00,ar7)), iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140943),ar6_00,ar7)), iVar1 == 0)))) {
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409b9),ar6_00,ar7); });
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140954),ar6_00,ar7));
          if (((iVar1 == 0) ||
              (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140961),ar6_00,ar7)), iVar1 == 0))
             || (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14096e),ar6_00,ar7)), iVar1 == 0))
          {
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409c5),ar6_00,ar7); });
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c140981),ar6_00,ar7));
            if ((iVar1 == 0) ||
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 348)), s_FROGMANLINE2_0f970c(ar6,((undefined1 *)(unsigned)0x8c14098e),ar6_00,ar7)), iVar1 == 0))
            {
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409d1),ar6_00,ar7); });
              ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
            }
          }
        }
      }
    }
  }
  else if (ar5 == 6) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c1409dd),ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x54)),ar6 + 0x20,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(((undefined1 *)(fr0_ - 0x74)),ar6 + 0x40,ar6_00,ar7); });
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(undefined4 *)(unsigned)(ar4 + 0x1050),((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x20,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7); });
  ar5_00 = ((undefined1 *)(fr0_ - 0x74));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x15c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 348)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x40,ar5_00,ar6_00,ar7); });
  uVar2 = (vsp = ((unsigned long)(fr0_ - 348)), FUN_8c0f824c(ar4,ar5_00,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _s_HIGYOLINE0_0f8370\n.set _s_HIGYOLINE0_0f8370, _s_HIGYOLINE0_0f8370_def\n");
//@unit 8c0f970c
#include "../decls.h"
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
  ring[rp++ & 255] = "s_FROGMANLINE2_0f970c";
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

__asm__(".globl _s_FROGMANLINE2_0f970c\n.set _s_FROGMANLINE2_0f970c, _s_FROGMANLINE2_0f970c_def\n");
//@unit 8c0f9774
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_REQUEST_HOT_0f9780_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_REQUEST_HOT_0f9780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 116; for (int i_ = 0; i_ < 116; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  code *ar5_00;
  char *pcVar3;
  uint uVar4;
  int ar4_00;
  undefined4 uVar5;
  bool bVar6;
  
  if (0 < *(int *)(unsigned)(ar4 + 0x1014)) {
    return 1;
  }
  uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x1050);
  ar4_00 = *(int *)(unsigned)(ar4 + 0x1050) + 0x20;
  ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x40,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
  uVar4 = 0;
  iVar1 = *(int *)(unsigned)(ar4 + 0x89130);
  if (iVar1 == 0) goto LAB_8c0fa1a8;
  if ((iVar1 != 1) && (iVar1 != 2)) {
    if (iVar1 == 3) {
      pcVar3 = (char *)(unsigned)0x1050;
      bVar6 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) == 0x11;
      if (bVar6) {
        pcVar3 = ((undefined1 *)(unsigned)0x8c140bb2);
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140bb2),ar6,ar7); });
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      }
      uVar4 = (uint)bVar6;
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,pcVar3,ar6,ar7));
      ar5_00 = (code *)pcVar3;
      if ((((int)pcVar2 < 0x13) &&
          (ar5_00 = (code *)0x1, *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x78) != 1)) &&
         (ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048)), (int)pcVar2 <= (int)((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048)))) {
        ar6 = (code *)((undefined1 *)(unsigned)0x8c140ba6);
        (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140ba6),ar7));
        uVar4 = 1;
        ar5_00 = pcVar2;
      }
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) == 0xb) {
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
    if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) {
      pcVar2 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c));
      ar5_00 = pcVar2;
      if (((int)pcVar2 < 10) && (-1 < (int)pcVar2)) {
        ar5_00 = (code *)(&(*(undefined1 *)(unsigned)0x8c0f9840))[(int)pcVar2];
                    
        switch((unsigned long)pcVar2) {
        case 0x0:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140aaa);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140aaa),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x1:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ab6);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ab6),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x2:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ac3);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ac3),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x3:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ad2);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ad2),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x4:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140ae3);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140ae3),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x5:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140af2);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140af2),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x8:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140afe);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140afe),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 0x9:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b0c);
          ar6 = ((void *)0x8c0101d4);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b0c),((void *)0x8c0101d4),ar7); });
          ar5_00 = (code *)pcVar3;
        }
      }
      iVar1 = *(int *)(unsigned)(ar4 + 0x1044);
      if ((iVar1 < 7) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        case 0:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140900);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140900),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 1:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140900);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140900),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 2:
          pcVar3 = ((undefined1 *)(unsigned)0x8c140911);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140911),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 3:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 4:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 5:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
          break;
        case 6:
          pcVar3 = ((undefined1 *)(unsigned)0x8c14094e);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c14094e),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
        }
      }
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) &&
      (0 < *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x60))) ||
     (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x68) < 2)) goto LAB_8c0fa1a8;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,ar5_00,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0xc) == 0) && (1 < iVar1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7));
    if (iVar1 == 0) {
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c140a98);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(ar4_00,((undefined1 *)(unsigned)0x8c140a98),ar6,ar7));
      if (iVar1 == 0) {
        if ((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x74) == 1) || (*(int *)(unsigned)(ar4 + 0x1034) == 1)) {
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b19);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b19),ar6,ar7); });
          uVar4 = 1;
          ar5_00 = (code *)pcVar3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x1018) = 1;
        }
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7));
    if (iVar1 == 0) {
      pcVar3 = ((undefined1 *)(unsigned)0x8c140b19);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(ar4_00,((undefined1 *)(unsigned)0x8c140b19),ar6,ar7));
      if (iVar1 == 0) {
        (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f8176(((ushort *)(fr0_ - 0x28)),pcVar3,ar6,ar7));
        if ((((ushort *)(fr0_ - 0x28))[0] < 0x7d5) && (0x7ce < ((ushort *)(fr0_ - 0x28))[0])) {
                    
          switch(((ushort *)(fr0_ - 0x28))[0]) {
          case 1999:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b22);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b22),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 2000:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b2f);
            ar6 = ((void *)0x8c0101d4);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b2f),((void *)0x8c0101d4),ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d1:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b3c);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b3c),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d2:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b49);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b49),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d3:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b56);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b56),ar6,ar7));
            ar5_00 = (code *)pcVar3;
            break;
          case 0x7d4:
            pcVar3 = ((undefined1 *)(unsigned)0x8c140b63);
            (vsp = ((unsigned long)(fr0_ - 116)), strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b63),ar6,ar7));
            ar5_00 = (code *)pcVar3;
          }
        }
        else {
          pcVar3 = ((undefined1 *)(unsigned)0x8c140b70);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b70),ar6,ar7); });
          ar5_00 = (code *)pcVar3;
        }
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140b7d)); *(unsigned *)((((unsigned long)(fr0_ - 116)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 116)) - 8); FUN_8c014334(ar4_00,ar5_00,ar6,ar7); });
        uVar4 = 1;
        goto LAB_8c0fa1a8;
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b22),ar6,ar7));
    if (((((iVar1 == 0) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b2f),ar6,ar7)), iVar1 == 0)) ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b3c),ar6,ar7)), iVar1 == 0)) ||
        ((iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b49),ar6,ar7)), iVar1 == 0 ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b56),ar6,ar7)), iVar1 == 0)))) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b63),ar6,ar7)), iVar1 == 0 ||
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), s_FROGMANLINE2_0f970c(uVar5,((undefined1 *)(unsigned)0x8c140b70),ar6,ar7)), iVar1 == 0)))) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7); });
      pcVar3 = ((undefined1 *)(unsigned)0x8c140b82);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140b82),ar6,ar7); });
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x1018) = 1;
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140a8f),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c140a98);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140a98),ar6,ar7); });
      uVar4 = 1;
    }
    goto LAB_8c0fa1a8;
  }
  if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x7c) != 7) goto LAB_8c0fa1a8;
  iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70);
  if ((iVar1 < 0x12) && (8 < iVar1)) {
                    
    switch(iVar1) {
    case 9:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ar5_00 = (code *)0x1048;
      if (0 < *(int *)(unsigned)(ar4 + 0x1048)) {
        ar5_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,((void *)0x8c0fa658),ar6,ar7));
        if (*(int *)(unsigned)(ar4 + 0x1048) < (int)ar5_00) {
          ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048));
        }
        ar6 = (code *)((undefined1 *)(unsigned)0x8c140ba6);
        (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,ar5_00,((undefined1 *)(unsigned)0x8c140ba6),ar7));
        uVar4 = 1;
      }
      break;
    case 10:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140ba9),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    default:
      goto switchD_8c0f9e5a_caseD_b;
    case 0xc:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b93),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    case 0xd:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(uVar5,((undefined1 *)(unsigned)0x8c140b99),ar6,ar7); });
      ar5_00 = (code *)((undefined1 *)(unsigned)0x8c1408e9);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c1408e9),ar6,ar7); });
      uVar4 = 1;
      break;
    case 0x11:
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
      pcVar3 = ((undefined1 *)(unsigned)0x8c140bb2);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x74))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 116)); strcpy(ar4_00,((undefined1 *)(unsigned)0x8c140bb2),ar6,ar7); });
      uVar4 = 1;
      ar5_00 = (code *)pcVar3;
    }
  }
  else {
switchD_8c0f9e5a_caseD_b:
    ar5_00 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1048));
    if (0 < (int)ar5_00) {
      ar5_00 = ((void *)0x8c0fa658);
      iVar1 = ar4;
      pcVar2 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa658(ar4,((void *)0x8c0fa658),ar6,ar7));
      if ((int)pcVar2 <= *(int *)(unsigned)(ar4 + 0x1048)) {
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x74) == 1) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 116)), rand(iVar1,ar5_00,ar6,ar7));
          ar5_00 = (code *)0x4;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 116)), libgcc_divide_helper_01031c(uVar5,4,ar6,ar7));
          if (iVar1 == 0) {
            ar6 = (code *)((undefined1 *)(unsigned)0x8c140bb9);
            (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140bb9),ar7));
            uVar4 = 1;
            ar5_00 = pcVar2;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f8176(((ushort *)(fr0_ - 0x28)),((ushort *)(fr0_ - 0x28)),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c1f826c(((ushort *)(fr0_ - 0x28)),&(*(uint *)(fr0_ - 0x2c)),ar6,ar7));
          ar5_00 = (code *)(vsp = ((unsigned long)(fr0_ - 116)), get_field_c8_0fc440(ar4 + 0x1054,ar4 + 0x1054,ar6,ar7));
          (*(uint *)(fr0_ - 0x2c)) = (*(uint *)(fr0_ - 0x2c)) - (int)ar5_00;
          if (600 < (*(uint *)(fr0_ - 0x2c))) {
            if (*(int *)(unsigned)(ar4 + 0x1034) == 1) {
              ar6 = (code *)((undefined1 *)(unsigned)0x8c140bb9);
              (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140bb9),ar7));
            }
            else {
              ar6 = (code *)((undefined1 *)(unsigned)0x8c140a98);
              (vsp = ((unsigned long)(fr0_ - 116)), s_CHAPTER_02d_0fa206(ar4,pcVar2,((undefined1 *)(unsigned)0x8c140a98),ar7));
            }
            ar5_00 = ((void *)0x8c0fc40c);
            (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fc40c(ar4 + 0x1054,((void *)0x8c0fc40c),ar6,ar7));
            uVar4 = 1;
          }
        }
      }
    }
  }
LAB_8c0fa1a8:
  if (uVar4 == 1) {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0f824c(ar4,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 116)), FUN_8c0fa70c(ar4,ar5_00,ar6,ar7));
  }
  return uVar4;
}

__asm__(".globl _s_REQUEST_HOT_0f9780\n.set _s_REQUEST_HOT_0f9780, _s_REQUEST_HOT_0f9780_def\n");
//@unit 8c0fa204
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CHAPTER_02d_0fa206_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CHAPTER_02d_0fa206";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c140bbd)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(*(undefined4 *)(unsigned)(ar4 + 0x1050),ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x20,*(undefined4 *)(unsigned)(ar4 + 0x1050),ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01437c(*(int *)(unsigned)(ar4 + 0x1050) + 0x20,((undefined1 *)(unsigned)0x8c140bc9),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01437c(*(int *)(unsigned)(ar4 + 0x1050) + 0x20,ar6,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(ar4 + 0x1050) + 0x40,((undefined1 *)(unsigned)0x8c1408e9),ar6_00,ar7); });
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1050) + 0x70) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fda28(ar4 + 0x1054,0,ar6_00,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x89130) = 3;
  return 0x89130;
}

__asm__(".globl _s_CHAPTER_02d_0fa206\n.set _s_CHAPTER_02d_0fa206, _s_CHAPTER_02d_0fa206_def\n");
//@unit 8c0fa2b8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa2b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(0x1014 + ar4) == 0) {
    return 0;
  }
  return *(undefined4 *)(unsigned)(0x89134 + ar4);
}

__asm__(".globl _FUN_8c0fa2b8\n.set _FUN_8c0fa2b8, _FUN_8c0fa2b8_def\n");
//@unit 8c0fa2d8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa2d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(0x1014 + ar4) == 0) {
    return 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c0fa2d8\n.set _FUN_8c0fa2d8, _FUN_8c0fa2d8_def\n");
//@unit 8c0fa2f0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa2f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa310(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fa2f0\n.set _FUN_8c0fa2f0, _FUN_8c0fa2f0_def\n");
//@unit 8c0fa310
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa310";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,ar4,0x1010,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fa310\n.set _FUN_8c0fa310, _FUN_8c0fa310_def\n");
//@unit 8c0fa334
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa334";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  
  ar6_00 = 0x1010;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4,ar5,0x1010,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
  iVar1 = *(int *)(unsigned)(0x1040 + ar4);
  if (iVar1 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6_00,ar7));
    iVar1 = 1;
    if (1 < iVar2) {
      iVar1 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa334\n.set _FUN_8c0fa334, _FUN_8c0fa334_def\n");
//@unit 8c0fa388
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa388";
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

__asm__(".globl _FUN_8c0fa388\n.set _FUN_8c0fa388, _FUN_8c0fa388_def\n");
//@unit 8c0fa538
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa538";
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

__asm__(".globl _FUN_8c0fa538\n.set _FUN_8c0fa538, _FUN_8c0fa538_def\n");
//@unit 8c0fa5b4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa5b4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa5b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl _FUN_8c0fa5b4\n.set _FUN_8c0fa5b4, _FUN_8c0fa5b4_def\n");
//@unit 8c0fa5bc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa5bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa5bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1408d4)) + 0x2f9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                    (ar4 + 0x10,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0fa5bc\n.set _FUN_8c0fa5bc, _FUN_8c0fa5bc_def\n");
//@unit 8c0fa5f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa5f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa5f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1408d4)) + 0x2f9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                    (ar4 + 0x14,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0fa5f0\n.set _FUN_8c0fa5f0, _FUN_8c0fa5f0_def\n");
//@unit 8c0fa624
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa624_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa624";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1408d4)) + 0x2f9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                    (ar4 + 0x18,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0fa624\n.set _FUN_8c0fa624, _FUN_8c0fa624_def\n");
//@unit 8c0fa658
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa658";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar4 + 0x4ac,ar5,ar6,ar7));
  return iVar1 + 1;
}

__asm__(".globl _FUN_8c0fa658\n.set _FUN_8c0fa658, _FUN_8c0fa658_def\n");
//@unit 8c0fa688
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa688";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c944(ar4_00,ar5,ar6,ar7));
  iVar1 = 0x8913c;
  *(undefined4 *)(unsigned)(0x8913c + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0fa688\n.set _FUN_8c0fa688, _FUN_8c0fa688_def\n");
//@unit 8c0fa6c8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa6c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c964(ar4_00,(&(*(undefined1 *)(unsigned)0x8c1402d0)),ar6,ar7));
  iVar1 = 0x8913c;
  *(undefined4 *)(unsigned)(0x8913c + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c0fa6c8\n.set _FUN_8c0fa6c8, _FUN_8c0fa6c8_def\n");
//@unit 8c0fa70c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa70c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(int *)(unsigned)(0x1018 + ar4);
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(0x1018 + ar4) = 0;
    iVar1 = 0x89130;
    *(undefined4 *)(unsigned)(0x89130 + ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fa70c\n.set _FUN_8c0fa70c, _FUN_8c0fa70c_def\n");
//@unit 8c0fa740
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_89130_0fa740";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x89130 + ar4);
}

__asm__(".globl _get_field_89130_0fa740\n.set _get_field_89130_0fa740, _get_field_89130_0fa740_def\n");
//@unit 8c0fa74c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa74c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa74c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126610),ar5,ar6,ar7));
  uVar3 = 0x8c441280;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c441280,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126620),pcVar2,uVar3,ar7));
  uVar3 = 0x8c44128c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c44128c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126630),pcVar2,uVar3,ar7));
  uVar3 = 0x8c441298;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c441298,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126640),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4412a4,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126650) = CONCAT44((*(undefined1 *)(unsigned)0x8c126654),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126650) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0fa74c\n.set _FUN_8c0fa74c, _FUN_8c0fa74c_def\n");
//@unit 8c0fa804
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fa804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl _FUN_8c0fa804\n.set _FUN_8c0fa804, _FUN_8c0fa804_def\n");
//@unit 8c0fa80c
#include "../decls.h"
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
  ring[rp++ & 255] = "free_if_nonnull_wrap_0fa80c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0fa80c\n.set _free_if_nonnull_wrap_0fa80c, _free_if_nonnull_wrap_0fa80c_def\n");
//@unit 8c0fa83c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa83c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa83c";
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
  *(undefined4 *)(unsigned)(0x84 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0x88 + (int)ar4) = 0;
  *(undefined1 *)(unsigned)(0x90 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb4 + (int)ar4) = 0;
  *(undefined4 *)(unsigned)(0xb0 + (int)ar4) = 0;
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

__asm__(".globl _FUN_8c0fa83c\n.set _FUN_8c0fa83c, _FUN_8c0fa83c_def\n");
//@unit 8c0fa910
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa910_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa910";
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

__asm__(".globl _FUN_8c0fa910\n.set _FUN_8c0fa910, _FUN_8c0fa910_def\n");
//@unit 8c0fa944
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa944_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa944";
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
      *(undefined4 *)(unsigned)(ar4[4] + 4) = ar6;
      *(undefined4 *)(unsigned)(ar4[4] + 8) = 0;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x3c) + 4) = 0;
      *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x3c) + 0x28) = 0;
      *(undefined1 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x3c) + 0x2c) = 0;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x70) = 0;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x74) = 0;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x78) = 0;
      *(undefined4 *)(unsigned)(0x880d4 + (int)ar4) = 0;
      *(undefined4 *)(unsigned)(0x880d8 + (int)ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01c970(ar4[3],(int)ar4 + 0xc4,uVar1,ar7));
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa944\n.set _FUN_8c0fa944, _FUN_8c0fa944_def\n");
//@unit 8c0fa9fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fa9fc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa9fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((1 < *ar4) && (uVar1 = 1, *(int *)(unsigned)(0xb0 + (int)ar4) != 1)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faa40(ar4,ar5,ar6,ar7));
    *ar4 = 1;
    *(undefined4 *)(unsigned)(ar4[4] + 4) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fa9fc\n.set _FUN_8c0fa9fc, _FUN_8c0fa9fc_def\n");
//@unit 8c0faa40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0faa40_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0faa40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if (1 < *ar4) {
    if (*ar4 == 7) {
      ar5 = *(undefined4 *)(unsigned)(0xb4 + (int)ar4);
      (vsp = ((unsigned long)(fr0_ - 0)), pack_release_entry_handle(0x8c2b59d0,ar5,ar6,ar7));
      *ar4 = 6;
    }
    *(undefined4 *)(unsigned)(0xc0 + (int)ar4) = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0faa40\n.set _FUN_8c0faa40, _FUN_8c0faa40_def\n");
//@unit 8c0faa94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * s_SPEECH_0faa98_def(int *ar4,undefined4 ar5,char *ar6,int *ar7)

{
  ring[rp++ & 255] = "s_SPEECH_0faa98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  char *ar6_00;
  int *ar7_00;
  
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
      *(undefined4 *)(unsigned)(ar4[4] + 4) = 0;
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
    iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02126c(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),ar7));
    if (iVar2 == 2) {
      return (undefined *)(unsigned)2;
    }
    if (iVar2 == 0) {
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      *ar4 = 2;
      return (undefined *)(unsigned)2;
    }
    ar4[0xd] = 0;
    while ((*(int *)(fr0_ - 0x4c)) = ar4[0xd], *(char *)(unsigned)(ar4[0xe] + (*(int *)(fr0_ - 0x4c)) * 0x28) != '\0') {
      ar4[0xd] = ar4[0xd] + 1;
    }
    *ar4 = 4;
  case 4:
    if (ar4[0x2c] == 1) {
      puVar1 = (undefined *)(unsigned)0x2;
      *ar4 = 2;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), s_SPEECH_0faf9e(ar4,*(int *)(unsigned)(ar4[4] + 0x40) + 0x20,ar6,ar7));
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
          iVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02126c(0x8c3eb334,ar4 + 0xf,((undefined1 *)(unsigned)0x8c141dd0),ar7_00));
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
            ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); strcpy(((char *)(fr0_ - 0x2c)),*(int *)(unsigned)(ar4[4] + 0x40) + 0x40,ar6_00,ar7_00); });
            if (((char *)(fr0_ - 0x2c))[0] == '\0') {
              ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); strcpy(((char *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c141dd7),ar6_00,ar7_00); });
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
      iVar2 = *(int *)(unsigned)(ar4[0x22] + 0x20);
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

__asm__(".globl _s_SPEECH_0faa98\n.set _s_SPEECH_0faa98, _s_SPEECH_0faa98_def\n");
//@unit 8c0fae24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SPEECH_0fae26_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SPEECH_0fae26";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  
  ar4[0x2e] = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x28)),*(undefined4 *)(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c141dd9),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(((undefined1 *)(fr0_ - 0x48)),*(undefined4 *)(unsigned)(ar4[4] + 0x40),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(unsigned)0x8c141dde),ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0faf30(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 5) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),1));
      ar7 = 1;
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021338(0x8c3eb334,ar4 + 0xf,((undefined1 *)(unsigned)0x8c141dd0),1));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 5,((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); strcpy(ar4 + 0xf,((undefined1 *)(fr0_ - 0x48)),ar6,ar7); });
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c02126c(0x8c3eb334,ar4 + 5,((undefined1 *)(unsigned)0x8c141dd0),ar4 + 0xe));
    if (iVar1 == 0) {
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      return 0;
    }
  }
  *ar4 = 3;
  return 1;
}

__asm__(".globl _s_SPEECH_0fae26\n.set _s_SPEECH_0fae26, _s_SPEECH_0fae26_def\n");
//@unit 8c0faf30
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0faf30";
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

__asm__(".globl _FUN_8c0faf30\n.set _FUN_8c0faf30, _FUN_8c0faf30_def\n");
//@unit 8c0faf98
#include "../decls.h"
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
  ring[rp++ & 255] = "s_SPEECH_0faf9e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (*(int *)(unsigned)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),*(undefined4 *)(unsigned)(ar4 + 0x38),ar6,ar7); });
    iVar2 = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7); });
    iVar2 = 0;
    while ((iVar2 < *(int *)(unsigned)(ar4 + 0x34) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x38),((undefined1 *)(fr0_ - 0x30)),ar6,ar7)), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(int *)(unsigned)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(unsigned)(ar4 + 0x5c) != '\0') &&
     ((*(int *)(unsigned)(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x38) + 0x20) != *(int *)(unsigned)(ar4 + 0x7c) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x5c,ar6,ar7)), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c021338(0x8c3eb334,ar4 + 0x3c,((undefined1 *)(unsigned)0x8c141dd0),1));
    *(undefined1 *)(unsigned)(ar4 + 0x5c) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = *(undefined4 *)(unsigned)(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x38) + 0x20);
  *(undefined4 *)(unsigned)(ar4 + 0x80) = *(undefined4 *)(unsigned)(iVar2 * 0x28 + *(int *)(unsigned)(ar4 + 0x38) + 0x24);
  return 1;
}

__asm__(".globl _s_SPEECH_0faf9e\n.set _s_SPEECH_0faf9e, _s_SPEECH_0faf9e_def\n");
//@unit 8c0fb0d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_ERROR_0fb0de_def(undefined4 *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_ERROR_0fb0de";
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
  else if (*((char *)(unsigned long)*(unsigned *)(unsigned)(0x84 + (int)ar4)) == '\0') {
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
      *(undefined4 *)(unsigned)(0x88 + (int)ar4) = *(undefined4 *)(unsigned)(0x84 + (int)ar4);
      uVar1 = 6;
      *ar4 = 6;
    }
    else if (*ar5 == '$') {
      iVar2 = *(int *)(unsigned)(0x88 + (int)ar4) +
              *(int *)(unsigned)(*(int *)(unsigned)(0x88 + (int)ar4) + 0x24) + 0x28;
      if (*(int *)(unsigned)(iVar2 + 0x20) == 0) {
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        *(int *)(unsigned)(0x88 + (int)ar4) = iVar2;
        uVar1 = 6;
        *ar4 = 6;
      }
    }
    else {
      for (ar4_00 = ((char *)(unsigned long)*(unsigned *)(unsigned)(0x84 + (int)ar4));
          (*(int *)(unsigned)(ar4_00 + 0x20) != 0 && (*ar4_00 != '\0'));
          ar4_00 = ar4_00 + *(int *)(unsigned)(ar4_00 + 0x24) + 0x28) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0faf30(ar4_00,ar5,ar6,ar7));
        if (iVar2 == 0) {
          *(unsigned *)(unsigned)(0x88 + (int)ar4) = ar4_00;
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

__asm__(".globl _s_ERROR_0fb0de\n.set _s_ERROR_0fb0de, _s_ERROR_0fb0de_def\n");
//@unit 8c0fb1d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_ERR_wrap_0fb1d4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_ERR_wrap_0fb1d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(int *)(unsigned)(0xb0 + (int)ar4) == 1) {
    uVar1 = 2;
    *ar4 = 2;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,(&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x1a,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _s_ERR_wrap_0fb1d4\n.set _s_ERR_wrap_0fb1d4, _s_ERR_wrap_0fb1d4_def\n");
//@unit 8c0fb20c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fb20c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fb20c";
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
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(ar4[4] + 0x40) + 0x20,iVar2 + 0x28,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(ar4[4] + 0x40) + 0x40,iVar2 + 0x48,ar6,ar7); });
    uVar1 = 4;
    *ar4 = 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fb20c\n.set _FUN_8c0fb20c, _FUN_8c0fb20c_def\n");
//@unit 8c0fb268
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fb268_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fb268";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int iVar3;
  
  iVar3 = ar4[0x22];
  ar4[0x2d] = 0xffffffff;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x78) = 1;
  if (*(char *)(unsigned)(iVar3 + 0x48) == '#') {
    ar4[0x23] = 0;
  }
  else if (*(char *)(unsigned)(iVar3 + 0x48) == '@') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01031c(uVar1,*(undefined4 *)(unsigned)(iVar3 + 0x4c),ar6,ar7));
    ar4[0x23] = uVar1;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fcd2c(ar4,iVar3 + 0x48,ar6,ar7));
    ar4[0x23] = uVar1;
    if ((int)ar4[0x23] < 0) {
      ar4[0x23] = 0;
    }
    if (*(int *)(unsigned)(iVar3 + 0x4c) <= (int)ar4[0x23]) {
      ar4[0x23] = *(int *)(unsigned)(iVar3 + 0x4c) + -1;
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
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c021d90(0x8c2b59d0,ar4[0x2d],*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0xc0),0));
  *ar4 = 7;
  return 7;
}

__asm__(".globl _FUN_8c0fb268\n.set _FUN_8c0fb268, _FUN_8c0fb268_def\n");
//@unit 8c0fb494
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * FUN_8c0fb494_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fb494";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int ar5_00;
  undefined *ar5_01;
  uint *ar6_00;
  uint *puVar2;
  undefined4 ar6_01;
  int *ar7_00;
  undefined4 ar7_01;
  int iVar3;
  
  puVar2 = ((uint *)(fr0_ - 0x50));
  if (ar4[0x2c] == 1) {
    (vsp = ((unsigned long)(fr0_ - 80)), pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6,ar7));
    puVar1 = (undefined *)(unsigned)0x2;
    *ar4 = 2;
  }
  else {
    iVar3 = ar4[0x22];
    ar7_00 = &(*(int *)(fr0_ - 0x18));
    ar6_00 = ((uint *)(fr0_ - 0x14));
    ar5_01 = (undefined *)(unsigned)(uint)ar4[0x2d];
    ar5_00 = ({ unsigned long t0_ = (unsigned long)(&(*(int *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c021f4c(0x8c2b59d0,ar5_01,ar6_00,ar7_00); });
    puVar1 = (undefined *)(unsigned)0x8;
    if ((ar5_00 < 9) && (-1 < ar5_00)) {
      puVar1 = (&(*(undefined1 *)(unsigned)0x8c0fb500))[ar5_00];
      (*(int *)(fr0_ - 0x20)) = ar5_00;
                    
      switch((uint)ar5_00) {
      default:
        break;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 80)), pack_release_entry_handle(0x8c2b59d0,ar4[0x2d],ar6_00,ar7_00));
      case 1:
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fb780(ar4,4,ar6_00,ar7_00));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), s_ERROR_0fb0de(ar4,ar4[0x22] + 0x28,ar6_00,ar7_00));
        break;
      case 4:
        break;
      case 5:
        if ((((uint *)(fr0_ - 0x14))[0] < 0xb) && (-1 < (int)((uint *)(fr0_ - 0x14))[0])) {
                    
          switch(((uint *)(fr0_ - 0x14))[0]) {
          case 1:
            (*(int *)(fr0_ - 0x24)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x24)) * 0x24 + iVar3 + 0x50) = 0x4e;
            break;
          case 2:
            (*(int *)(fr0_ - 0x28)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x28)) * 0x24 + iVar3 + 0x50) = 0x41;
            break;
          case 3:
            (*(int *)(fr0_ - 0x2c)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x2c)) * 0x24 + iVar3 + 0x50) = 0x4c;
            break;
          case 4:
            (*(int *)(fr0_ - 0x30)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x30)) * 0x24 + iVar3 + 0x50) = 0x50;
            break;
          case 5:
            (*(int *)(fr0_ - 0x34)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x34)) * 0x24 + iVar3 + 0x50) = 0x43;
            break;
          case 6:
            (*(int *)(fr0_ - 0x38)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x38)) * 0x24 + iVar3 + 0x50) = 0x46;
            break;
          case 7:
            (*(int *)(fr0_ - 0x3c)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x3c)) * 0x24 + iVar3 + 0x50) = 0x53;
            break;
          case 8:
            (*(int *)(fr0_ - 0x40)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x40)) * 0x24 + iVar3 + 0x50) = 0x49;
            break;
          case 9:
            (*(int *)(fr0_ - 0x44)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x44)) * 0x24 + iVar3 + 0x50) = 0x48;
            break;
          case 10:
            (*(int *)(fr0_ - 0x48)) = ar4[0x23];
            *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x48)) * 0x24 + iVar3 + 0x50) = 0x55;
          }
        }
        if ((*(int *)(fr0_ - 0x18)) != 0) {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c014334(((uint *)(fr0_ - 0x50)),ar5_01,ar6_00,ar7_00); });
          ar5_01 = ((undefined1 *)(unsigned)0x8c141e13);
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fc94c(ar4,((undefined1 *)(unsigned)0x8c141e13),((uint *)(fr0_ - 0x50)),ar7_00));
          ar6_00 = puVar2;
        }
        if ((*(int *)(fr0_ - 0x1c)) != 0) {
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); FUN_8c014334(((uint *)(fr0_ - 0x50)),ar5_01,ar6_00,ar7_00); });
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fc94c(ar4,((undefined1 *)(unsigned)0x8c141e15),((uint *)(fr0_ - 0x50)),ar7_00));
        }
        ar7_01 = 0;
        ar6_01 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0xc0);
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c021d90(0x8c2b59d0,ar4[0x2d],ar6_01,0));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0fb780(ar4,ar5_00,ar6_01,ar7_01));
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0fb494\n.set _FUN_8c0fb494, _FUN_8c0fb494_def\n");
//@unit 8c0fb780
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fb780";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fb83c))))
                    (ar4,*(undefined4 *)(unsigned)
                          (*(int *)(unsigned)(0x8c + ar4) * 0x24 + *(int *)(unsigned)(0x88 + ar4) + 0x50
                          ),ar5,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fb780\n.set _FUN_8c0fb780, _FUN_8c0fb780_def\n");
//@unit 8c0fb7d0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fb7d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x68);
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

__asm__(".globl _FUN_8c0fb7d0\n.set _FUN_8c0fb7d0, _FUN_8c0fb7d0_def\n");
//@unit 8c0fb83c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fb83c";
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
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 5;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x14;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x19;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x28;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x23;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 10;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xf;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1e;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2d;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0;
      return 0xb8;
    case 5:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 6;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x15;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1a;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x29;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x24;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xb;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x10;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1f;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2e;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 1;
      return 0xb8;
    case 6:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 7;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x16;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1b;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2a;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x25;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xc;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x11;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x20;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2f;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 2;
      return 0xb8;
    case 7:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 8;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x17;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1c;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2b;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x26;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xd;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x12;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x21;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x30;
          return 0xb8;
        }
      }
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 3;
      return 0xb8;
    case 8:
      if ((ar5 < 0x56) && (0x40 < ar5)) {
                    
        switch((uint)ar5) {
        case 0x41:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 9;
          return 0xb8;
        case 0x43:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x18;
          return 0xb8;
        case 0x46:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x1d;
          return 0xb8;
        case 0x48:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x2c;
          return 0xb8;
        case 0x49:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x27;
          return 0xb8;
        case 0x4c:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0xe;
          return 0xb8;
        case 0x50:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x13;
          return 0xb8;
        case 0x53:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x22;
          return 0xb8;
        case 0x55:
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 0x31;
          return 0xb8;
        }
      }
      uVar1 = 0xb8;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb8) = 4;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fb83c\n.set _FUN_8c0fb83c, _FUN_8c0fb83c_def\n");
//@unit 8c0fbdfc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SPEECH_0fbe00_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SPEECH_0fbe00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  char *ar6_00;
  int ar5_01;
  
  ar5_01 = ar4[0x22];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 0x24) != '\0') {
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d658(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7); });
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
      if ((iVar1 == 1) || (*(int *)(unsigned)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(int *)(unsigned)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(int *)(unsigned)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}

__asm__(".globl _s_SPEECH_0fbe00\n.set _s_SPEECH_0fbe00, _s_SPEECH_0fbe00_def\n");
//@unit 8c0fbf28
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SPEECH_0fbf2e_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_SPEECH_0fbf2e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *ar5_00;
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
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((undefined1 *)(fr0_ - 0x11c)),ar4 + 0x24,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141e17),ar6,ar7));
      ar7 = ((undefined1 *)(fr0_ - 0x120));
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c02126c(0x8c3eb334,((undefined1 *)(fr0_ - 0x11c)),((undefined1 *)(unsigned)0x8c141dd0),ar7));
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
    ((int *)(fr0_ - 0x9c))[0] = 0;
    if ((int)ar4[0x2e] < 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e1c),ar6,ar7); });
      ((int *)(fr0_ - 0x9c))[0] = 1;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d684(ar4[2],((int *)(fr0_ - 0x9c)),ar6,ar7));
      if (((int *)(fr0_ - 0x9c))[0] != 0) {
        *(int *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x3c) + 4) = *(int *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x3c) + 4) + 1;
      }
    }
    if (((int *)(fr0_ - 0x9c))[0] == 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ((undefined1 *)(unsigned)0x8c141e20);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e20),ar6,ar7));
      if (((iVar2 == 0) && (0 < *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4[4] + 0x3c)))) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 100) != *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4[4] + 0x3c)))) {
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        uVar1 = 2;
        *ar4 = 2;
      }
      else {
        for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
          ar5_01 = ar5_03 + iVar2 * 0x68 + 0x70;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0faf30(((char *)(fr0_ - 0x90)),ar5_01,ar6,ar7));
          if (iVar3 == 0) break;
        }
        if (*(int *)(unsigned)(ar5_03 + 0x6c) <= iVar2) {
          ar5_01 = ((undefined1 *)(unsigned)0x8c141e26);
          ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x16c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 364)); strcpy(((char *)(fr0_ - 0x90)),((undefined1 *)(unsigned)0x8c141e26),ar6,ar7); });
          for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar5_03 + 0x6c); iVar2 = iVar2 + 1) {
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
        if (iVar2 < *(int *)(unsigned)(ar5_03 + 0x6c)) {
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
          ar5_01 = ((char *)(unsigned long)*(unsigned *)(unsigned)(ar5_03 + iVar2 * 0x68 + 0xd4));
          (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c0fdd68(*(undefined4 *)(unsigned)(ar4[4] + 0x40),ar5_01,ar6,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c01d868(ar4[2],ar5_01,ar6,ar7));
        if (((char *)(fr0_ - 0x90))[0] == '!') {
          ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
          (vsp = ((unsigned long)(fr0_ - 364)), asr_register_strings(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
        }
        if (*(int *)(unsigned)(*(int *)(unsigned)(ar4[4] + 0x40) + 0x70) == 0x11) {
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

__asm__(".globl _s_SPEECH_0fbf2e\n.set _s_SPEECH_0fbf2e, _s_SPEECH_0fbf2e_def\n");
//@unit 8c0fc3e4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc3e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x74) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fc40c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fc3e4\n.set _FUN_8c0fc3e4, _FUN_8c0fc3e4_def\n");
//@unit 8c0fc40c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc40c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f826c(((undefined1 *)(fr0_ - 0x10)),ar4 + 0xc8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fc40c\n.set _FUN_8c0fc40c, _FUN_8c0fc40c_def\n");
//@unit 8c0fc440
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_c8_0fc440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xc8 + ar4);
}

__asm__(".globl _get_field_c8_0fc440\n.set _get_field_c8_0fc440, _get_field_c8_0fc440_def\n");
//@unit 8c0fc44c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc44c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0xf; 0 < iVar2; iVar2 = iVar2 + -1) {
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + iVar2 * 0x20 + 200,
           *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + (iVar2 + -1) * 0x20 + 200,ar6,ar7); });
  }
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0fc44c\n.set _FUN_8c0fc44c, _FUN_8c0fc44c_def\n");
//@unit 8c0fc4c4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc4c4";
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

__asm__(".globl _FUN_8c0fc4c4\n.set _FUN_8c0fc4c4, _FUN_8c0fc4c4_def\n");
//@unit 8c0fc4fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fc4fc_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fc4fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  
  if ((*(int *)(unsigned)(ar5 + 0x28) != 1) && (*(int *)(unsigned)(ar5 + 0x28) != 2)) {
    for (iVar2 = 0; iVar2 < *(int *)(unsigned)(ar5 + 0x6c); iVar2 = iVar2 + 1) {
      ar5_00 = ar5 + iVar2 * 0x68 + 0x70;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0faf30((&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x4c,ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c141dd0)) + 0x40); *(unsigned *)((((unsigned long)(fr0_ - 24)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 24)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x18)),ar5_00,ar6,ar7); });
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0faf30(((undefined1 *)(fr0_ - 0x18)),ar5 + iVar2 * 0x68 + 0xb0,ar6,ar7));
        if (iVar1 == 0) {
          return 1;
        }
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0fc4fc\n.set _FUN_8c0fc4fc, _FUN_8c0fc4fc_def\n");
//@unit 8c0fc5ac
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc5ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(unsigned)(0x88 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    (uVar1,*(undefined4 *)(unsigned)(iVar3 + 0x28),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_ERROR_0fb0de(ar4,iVar3 + iVar2 * 0x20 + 0x2c,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fc5ac\n.set _FUN_8c0fc5ac, _FUN_8c0fc5ac_def\n");
//@unit 8c0fc608
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc608";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = *(int *)(unsigned)(0x88 + ar4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar4 + 0x28,ar6,ar7));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (*(int *)(unsigned)(iVar4 + 0x30) <= iVar1) {
    iVar1 = *(int *)(unsigned)(iVar4 + 0x30) + -1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,iVar4 + 0x2c,ar6,ar7));
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  if (*(int *)(unsigned)(iVar4 + 0x34) <= iVar2) {
    iVar2 = *(int *)(unsigned)(iVar4 + 0x34) + -1;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fb0d4))))
                    (ar4,iVar4 + (iVar2 * *(int *)(unsigned)(iVar4 + 0x30) + iVar1) * 0x20 + 0x38,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c0fc608\n.set _FUN_8c0fc608, _FUN_8c0fc608_def\n");
//@unit 8c0fc69c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fc69c";
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
  
  iVar4 = *(int *)(unsigned)(ar4 + 0x88);
  for (iVar5 = 0; iVar5 < *(int *)(unsigned)(iVar4 + 0x68); iVar5 = iVar5 + 1) {
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
    iVar6 = *(int *)(unsigned)(iVar6 + 0x6c);
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

__asm__(".globl _FUN_8c0fc69c\n.set _FUN_8c0fc69c, _FUN_8c0fc69c_def\n");
//@unit 8c0fc7c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fc7c4_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fc7c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_00;
  int ar5_01;
  
  iVar3 = *(int *)(unsigned)(ar4 + 0x88);
  for (iVar4 = 0; iVar4 < *(int *)(unsigned)(iVar3 + 0x48); iVar4 = iVar4 + 1) {
    iVar5 = iVar3 + iVar4 * 0x2c;
    ar5_00 = iVar5 + 0x4c;
    if (*(char *)(unsigned)(iVar5 + 0x74) == '\0') {
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x38))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); strcpy((fr0_ + (int)0xffffffc8),iVar5 + 0x54,ar6,ar7); });
    }
    else {
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fd764(ar4,iVar5 + 0x74,(fr0_ + (int)0xffffffc8),ar7));
    }
    if (*(int *)(unsigned)(iVar5 + 0x50) == 0) {
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fc94c(ar4,ar5_00,(fr0_ + (int)0xffffffc8),ar7));
    }
    else {
      ar5_01 = ar5_00;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fcd2c(ar4,ar5_00,ar6,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c013bdc((fr0_ + (int)0xffffffc8),ar5_01,ar6,ar7));
      iVar5 = *(int *)(unsigned)(iVar5 + 0x50);
      if ((iVar5 < 6) && (0 < iVar5)) {
                    
        switch(iVar5) {
        case 1:
          break;
        case 2:
          break;
        case 3:
          break;
        case 4:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_0101e4(uVar1,ar5_01,ar6,ar7));
          break;
        case 5:
          ar5_01 = iVar2;
          if (iVar2 < 0) {
            ar5_01 = 1;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1,ar5_01,ar6,ar7));
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c014334((fr0_ + (int)0xffffffc8),ar5_01,ar6,ar7); });
      ar6 = (fr0_ + (int)0xffffffc8);
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fc94c(ar4,ar5_00,(fr0_ + (int)0xffffffc8),ar7));
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), s_ERROR_0fb0de(ar4,iVar3 + 0x28,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fc7c4\n.set _FUN_8c0fc7c4, _FUN_8c0fc7c4_def\n");
//@unit 8c0fc94c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fc94c_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fc94c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *ar5_00;
  char *ar6_00;
  
  iVar4 = (int)*ar5;
  if (iVar4 < 0x4a) {
    if (0x48 < iVar4) {
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 8) = 1;
      return 1;
    }
    if ((iVar4 < 0x44) && (0x40 < iVar4)) {
      if (iVar4 == 0x41) {
        return 0x41;
      }
      if (iVar4 == 0x43) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        if (8 < iVar4) {
          return 8;
        }
        if (iVar4 < 1) {
          return 1;
        }
                    
        switch(iVar4) {
        case 1:
          *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb4) = iVar4;
          return 0xb4;
        }
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) = 1;
        iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0);
        if (iVar4 != 1) {
          return iVar4;
        }
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = 600;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
        return uVar3;
      }
    }
  }
  else if (iVar4 < 0x57) {
    if (0x4a < iVar4) {
                    
      switch(iVar4) {
      case 0x4b:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fdd98(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40),uVar3,ar6,ar7));
        return uVar3;
      case 0x50:
        return (&(*(undefined1 *)(unsigned)0x8c0fc9c0))[iVar4 + -0x4b];
      case 0x52:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fda28(ar4,uVar3,ar6,ar7));
        return uVar3;
      case 0x55:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(ar4 + 0xc0) = uVar3;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
        return uVar3;
      case 0x56:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x70) = uVar3;
        return 0x70;
      }
    }
  }
  else if (iVar4 == 100) {
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2a)),ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x26)) = 0;
    (*(undefined1 *)(fr0_ - 0x25)) = 0;
    (*(undefined1 *)(fr0_ - 0x24)) = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x32)) = (undefined1)uVar3;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc4,ar5,ar6,ar7));
    (*(undefined1 *)(fr0_ - 0x31)) = (undefined1)uVar3;
    (*(undefined1 *)(fr0_ - 0x30)) = 0;
    (*(undefined1 *)(fr0_ - 0x2f)) = 0;
    (*(undefined1 *)(fr0_ - 0x2e)) = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xbc,ar5,ar6,ar7));
    ar5_00 = ((undefined1 *)(fr0_ - 0x34));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f823a(((undefined1 *)(fr0_ - 0x2a)),ar5_00,ar6,ar7));
    uVar3 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c014334(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7); })
    ;
    return uVar3;
  }
  ar6_00 = ar6;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7));
  if (*ar6 == '+') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7));
    iVar1 = iVar1 + iVar2;
  }
  else if (*ar6 == '-') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6 + 1,ar5,ar6_00,ar7));
    iVar1 = iVar1 - iVar2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(ar6,ar5,ar6_00,ar7));
  }
  if (999 < iVar1) {
    iVar1 = 999;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  if (((iVar4 == 6) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x28,ar5,ar6_00,ar7)),
      iVar2 == iVar1)) && (0 < iVar2)) {
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x70) = 0x11;
  }
  uVar3 = ({ unsigned long t0_ = (unsigned long)(
                       ((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 52)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 52)) - 8); FUN_8c014334(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar4 * 4 + 0x10,ar5,ar6_00,ar7); });
  return uVar3;
}

__asm__(".globl _FUN_8c0fc94c\n.set _FUN_8c0fc94c, _FUN_8c0fc94c_def\n");
//@unit 8c0fcd2c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0fcd2c_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fcd2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *ar5_00;
  uint uVar7;
  
  uVar7 = 0;
  iVar6 = (int)*ar5;
  if ((iVar6 < 0x74) && (0x40 < iVar6)) {
                    
    switch(iVar6) {
    case 0x41:
    case 0x4f:
    case 0x50:
    case 0x67:
    case 0x68:
      break;
    case 0x42:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x18);
      break;
    case 0x43:
      if ((*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) == 1) &&
         (*(int *)(unsigned)(ar4 + 0xbc) < 1)) {
        *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0) = 0;
      }
      iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xb0);
      if (iVar6 == 0) {
        uVar7 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0xbc) = 0;
      }
      else if (iVar6 == 1) {
        uVar7 = 2;
      }
      break;
    case 0x44:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1f));
      break;
    case 0x45:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x7c);
      break;
    case 0x46:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x1c);
      break;
    case 0x47:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1a));
      break;
    case 0x48:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1e));
      break;
    default:
      goto switchD_8c0fcd62_caseD_49;
    case 0x4b:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x68);
      break;
    case 0x4c:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x60);
      break;
    case 0x4d:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x20));
      break;
    case 0x4e:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1d));
      break;
    case 0x51:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c((*(ushort *)(fr0_ - 0x22)) - 0x7a8,0xc,ar6,ar7));
      if ((iVar6 < 0xc) && (-1 < iVar6)) {
                    
        switch(iVar6) {
        case 0:
          uVar7 = 0;
          break;
        case 1:
          uVar7 = 0xb;
          break;
        case 2:
          uVar7 = 10;
          break;
        case 3:
          uVar7 = 9;
          break;
        case 4:
          uVar7 = 8;
          break;
        case 5:
          uVar7 = 7;
          break;
        case 6:
          uVar7 = 6;
          break;
        case 7:
          uVar7 = 5;
          break;
        case 8:
          uVar7 = 4;
          break;
        case 9:
          uVar7 = 3;
          break;
        case 10:
          uVar7 = 2;
          break;
        case 0xb:
          uVar7 = 1;
        }
      }
      break;
    case 0x52:
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        iVar6 = 1;
        while ((iVar6 < 0x10 &&
               (iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0faf30(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200,
                                     *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,
                                     ar7)), iVar2 == 0))) {
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 1;
        }
      }
      break;
    case 0x53:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),((void *)0x8c1f8176),ar6,ar7));
      uVar3 = (uint)(*(ushort *)(fr0_ - 0x22));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar3,4,ar6,ar7));
      if (iVar6 == 0) {
        uVar7 = 1;
        iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
        if (iVar6 == 0) {
          uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_0101e4(uVar3,100,ar6,ar7));
          iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), libgcc_divide_helper_01031c(uVar5,4,ar6,ar7));
          if (iVar6 != 0) {
            uVar7 = 0;
          }
        }
      }
      break;
    case 0x54:
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200) != '\0') {
        for (iVar6 = 1; iVar6 < 0x10; iVar6 = iVar6 + 1) {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0faf30(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 200,
                               *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + iVar6 * 0x20 + 200,ar6,ar7));
          if (iVar2 == 0) {
            uVar7 = uVar7 + 1;
          }
        }
      }
      break;
    case 0x55:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0fd8d0(ar4,ar5,ar6,ar7));
      uVar7 = *(uint *)(unsigned)(ar4 + 0xc0);
      break;
    case 0x57:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (uint)(*(byte *)(fr0_ - 0x1b));
      break;
    case 0x58:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xac) != '\0') {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xac,ar5,ar6,ar7));
        if (uVar3 == (*(byte *)(fr0_ - 0x1b))) {
          return 2;
        }
        uVar4 = (*(byte *)(fr0_ - 0x1b)) + 1;
        if (6 < uVar4) {
          uVar4 = 0;
        }
        if (uVar3 == uVar4) {
          uVar7 = 1;
        }
      }
      if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xb0) != '\0') {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xb0,ar5,ar6,ar7));
        if (uVar3 == (*(byte *)(fr0_ - 0x1b))) {
          return 2;
        }
        uVar4 = (*(byte *)(fr0_ - 0x1b)) + 1;
        if (6 < uVar4) {
          uVar4 = 0;
        }
        if (uVar3 == uVar4) {
          uVar7 = 1;
        }
      }
      break;
    case 0x59:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      uVar7 = (*(ushort *)(fr0_ - 0x22)) - 0x7ce;
      if ((int)uVar7 < 0) {
        uVar7 = 0;
      }
      break;
    case 0x5a:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x20);
      break;
    case 0x61:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x28);
      break;
    case 0x62:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x2c);
      break;
    case 99:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x24);
      break;
    case 100:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5,ar6,ar7));
      (*(byte *)(fr0_ - 0x1e)) = 0;
      (*(byte *)(fr0_ - 0x1d)) = 0;
      (*(undefined1 *)(fr0_ - 0x1c)) = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc0,ar5,ar6,ar7));
      (*(byte *)(fr0_ - 0x2a)) = (byte)uVar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0xc4,((void *)0x8c013bdc),ar6,ar7));
      (*(byte *)(fr0_ - 0x29)) = (byte)uVar5;
      (*(undefined1 *)(fr0_ - 0x28)) = 0;
      (*(undefined1 *)(fr0_ - 0x27)) = 0;
      (*(undefined1 *)(fr0_ - 0x26)) = 0;
      ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f823a(&(*(ushort *)(fr0_ - 0x22)),ar5_00,ar6,ar7));
      if (((*(byte *)(fr0_ - 0x2a)) != '\0') && ((*(byte *)(fr0_ - 0x29)) != '\0')) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x1c4,ar5_00,ar6,ar7));
        ar5_00 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 48)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 48)) - 8); FUN_8c014334(ar5_00 + 0xbc,ar5_00,ar6,ar7); });
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(&(*(ushort *)(fr0_ - 0x22)),ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x1e)) = 0xc;
      (*(byte *)(fr0_ - 0x1d)) = 0;
      (*(undefined1 *)(fr0_ - 0x1c)) = 0;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,ar7));
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x10,ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x2a)) = (byte)uVar5;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x14,ar5_00,ar6,ar7));
      (*(byte *)(fr0_ - 0x29)) = (byte)uVar5;
      (*(undefined1 *)(fr0_ - 0x28)) = 0xc;
      (*(undefined1 *)(fr0_ - 0x27)) = 0;
      (*(undefined1 *)(fr0_ - 0x26)) = 0;
      if (((*(byte *)(fr0_ - 0x2a)) == 0) || ((*(byte *)(fr0_ - 0x29)) == 0)) {
        return 0;
      }
      iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f823a(&(*(ushort *)(fr0_ - 0x22)),((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
      if (iVar6 == 0) {
        return 2;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f826c(&(*(ushort *)(fr0_ - 0x22)),&(*(int *)(fr0_ - 0x30)),ar6,ar7));
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 0x15180;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1f8300((*(int *)(fr0_ - 0x30)),&(*(ushort *)(fr0_ - 0x22)),ar6,ar7));
      if (((*(byte *)(fr0_ - 0x2a)) == (*(byte *)(fr0_ - 0x20))) && ((*(byte *)(fr0_ - 0x29)) == (*(byte *)(fr0_ - 0x1f)))) {
        return 1;
      }
      break;
    case 0x65:
      iVar6 = (int)ar5[1];
      if ((iVar6 < 0x6a) && (0x60 < iVar6)) {
                    
        switch(iVar6) {
        case 0x61:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x80);
          break;
        case 0x62:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x84);
          break;
        case 99:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x88);
          break;
        case 100:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x8c);
          break;
        case 0x65:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x90);
          break;
        case 0x66:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0x94);
          break;
        case 0x67:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xa0);
          break;
        case 0x68:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xa4);
          break;
        case 0x69:
          uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xac);
        }
      }
      break;
    case 0x69:
      if (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) < 1) {
        if (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 0xc0) < 900) {
          uVar7 = 0;
        }
        else {
          uVar7 = 2;
        }
      }
      else {
        uVar7 = 1;
      }
      break;
    case 0x6c:
      uVar7 = *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x34);
      break;
    case 0x6d:
      uVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0fc4c4(ar4,ar5,ar6,ar7));
      break;
    case 0x6e:
      uVar7 = 0;
      if ((0 < *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c))) &&
         (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) ==
          *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c)))) {
        uVar7 = 1;
      }
      break;
    case 0x73:
      cVar1 = ar5[1];
      if (cVar1 == 'd') {
        uVar7 = (uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xf);
      }
      else if (cVar1 == 'm') {
        uVar7 = (uint)*(byte *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xe);
      }
      else if (cVar1 == 'y') {
        uVar7 = *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0xc) - 1999;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        if (6 < (int)uVar7) {
          uVar7 = 0;
        }
      }
    }
  }
  else {
switchD_8c0fcd62_caseD_49:
    iVar6 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    uVar7 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c013bdc(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar6 * 4 + 0x10,ar5,ar6,ar7));
  }
  return uVar7;
}

__asm__(".globl _FUN_8c0fcd2c\n.set _FUN_8c0fcd2c, _FUN_8c0fcd2c_def\n");
//@unit 8c0fd764
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fd764_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fd764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (int)*ar5;
  if ((iVar2 < 0x74) && (0x40 < iVar2)) {
                    
    switch(iVar2) {
    default:
      uVar1 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fcd2c(ar4,ar5,ar6,ar7));
      uVar1 = ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c141e10)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar6,ar5,uVar1,ar7); });
      return uVar1;
    case 0x49:
      break;
    }
  }
  uVar1 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013bdc(ar5,ar5,ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar6,*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + iVar2 * 4 + 0x10,uVar1,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0fd764\n.set _FUN_8c0fd764, _FUN_8c0fd764_def\n");
//@unit 8c0fd8d0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fd8d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if ((*(int *)(unsigned)(0xb0 + ar4) == 1) || (*(int *)(unsigned)(0xc0 + ar4) == 0)) {
    if (*(int *)(unsigned)(ar4 + 4) == 0) {
      return 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (iVar1 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d754(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7));
    iVar1 = 0xc0;
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)(0xc0 + ar4) = 0;
    }
    else {
      iVar1 = 1;
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    }
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(0xc0 + ar4) = 2;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bcf4(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01bd88(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01c964(*(undefined4 *)(unsigned)(ar4 + 0xc),(&(*(undefined1 *)(unsigned)0x8c140bd0)),ar6,ar7));
    *(undefined4 *)(unsigned)(0xb8 + ar4) = 0x12c;
    iVar1 = 2;
    *(undefined4 *)(unsigned)(ar4 + 4) = 2;
  }
  else if (iVar1 == 2) {
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d684(*(undefined4 *)(unsigned)(ar4 + 8),((undefined1 *)(fr0_ - 0x94)),ar6,ar7));
    if ((*(int *)(fr0_ - 0x8c)) != 0) {
      if ((*(int *)(fr0_ - 0x8c)) == 2) {
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 3;
        *(undefined4 *)(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      if ((*(int *)(fr0_ - 0x8c)) != 3) {
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 4;
        if (0 < *(int *)(unsigned)(0xb8 + ar4)) {
          return *(int *)(unsigned)(0xb8 + ar4);
        }
        *(undefined4 *)(unsigned)(0xc0 + ar4) = 5;
        *(undefined4 *)(unsigned)(ar4 + 4) = 1;
        return 1;
      }
      *(undefined4 *)(unsigned)(0xc0 + ar4) = 6;
      piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
      *piVar3 = *piVar3 + 1;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + 100) =
           *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c));
    }
    iVar1 = 3;
    *(undefined4 *)(unsigned)(ar4 + 4) = 3;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(unsigned)(0xc0 + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c01d8a0(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c0fda5c(ar4,ar5,ar6,ar7));
    iVar1 = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0fd8d0\n.set _FUN_8c0fd8d0, _FUN_8c0fd8d0_def\n");
//@unit 8c0fda28
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fda28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  for (; ar5 < 0x10; ar5 = ar5 + 1) {
    *(undefined1 *)(unsigned)(0xc8 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x40) + ar5 * 0x20) = 0;
  }
  return 0x10;
}

__asm__(".globl _FUN_8c0fda28\n.set _FUN_8c0fda28, _FUN_8c0fda28_def\n");
//@unit 8c0fda5c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fda5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01c964))))
                    (*(undefined4 *)(unsigned)(ar4 + 0xc),*(undefined4 *)(unsigned)(0xc4 + ar4),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fda5c\n.set _FUN_8c0fda5c, _FUN_8c0fda5c_def\n");
//@unit 8c0fda80
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fda80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memset(ar4 + 0xd0,0,0x88001,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fda80\n.set _FUN_8c0fda80, _FUN_8c0fda80_def\n");
//@unit 8c0fdaac
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdaac";
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
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8d1,ar4 + 0x14,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x8f1,ar4 + 0x3c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x911,ar4 + 0x5c,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x40))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(uVar1 * 0x880 + ar4 + 0x931,ar5,ar6,ar7); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c013fb4(uVar1 * 0x880 + ar4 + 0xd1,*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x10) + 0x3c) + 0x10,
                         0x800,ar7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0fdaac\n.set _FUN_8c0fdaac, _FUN_8c0fdaac_def\n");
//@unit 8c0fdc20
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0fdc20_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fdc20";
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
    (*(int *)(fr0_ - 0x10)) = iVar2;
    iVar1 = iVar2 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2b,((undefined1 *)(unsigned)0x8c141e2a),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x10))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); strcpy(ar4 + 0x2c,((undefined1 *)(unsigned)0x8c141e2c),ar6,ar7); });
  return ar4;
}

__asm__(".globl _FUN_8c0fdc20\n.set _FUN_8c0fdc20, _FUN_8c0fdc20_def\n");
//@unit 8c0fdc98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdc98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0;
  ar4[0x20] = 0;
  ar4[0x40] = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x74) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x78) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x7c) = 7;
  for (iVar1 = 0; iVar1 < 0xc; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x80 + iVar1 * 4) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0xb0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xbc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    ar4[0xc8 + iVar1 * 0x20] = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdc98\n.set _FUN_8c0fdc98, _FUN_8c0fdc98_def\n");
//@unit 8c0fdd68
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdd68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdd98(ar4,*(int *)(unsigned)(ar4 + 0x68) + ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fdd68\n.set _FUN_8c0fdd68, _FUN_8c0fdd68_def\n");
//@unit 8c0fdd98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdd98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(ar4 + 0x68) = ar5;
  if (*(int *)(unsigned)(ar4 + 0x68) < 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  }
  uVar1 = 4;
  if (4 < *(int *)(unsigned)(ar4 + 0x68)) {
    uVar1 = 0x68;
    *(undefined4 *)(unsigned)(ar4 + 0x68) = 4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0fdd98\n.set _FUN_8c0fdd98, _FUN_8c0fdd98_def\n");
//@unit 8c0fddc4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fddc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fddc4\n.set _FUN_8c0fddc4, _FUN_8c0fddc4_def\n");
//@unit 8c0fdde4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0fdde4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fdde4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ff0(ar4 + 0x2c,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x40400000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4f222fe640400000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdde4\n.set _FUN_8c0fdde4, _FUN_8c0fdde4_def\n");
//@unit 8c0fde34
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fde34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f402c(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fde34\n.set _FUN_8c0fde34, _FUN_8c0fde34_def\n");
//@unit 8c0fde5c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fde5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0f3ebc(ar4 + 0x170,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x170,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x170,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x2e0,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x2e1) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fde5c\n.set _FUN_8c0fde5c, _FUN_8c0fde5c_def\n");
//@unit 8c0fdf08
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdf08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0fdf08\n.set _FUN_8c0fdf08, _FUN_8c0fdf08_def\n");
//@unit 8c0fdf10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fdf10_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fdf10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0fdf10\n.set _FUN_8c0fdf10, _FUN_8c0fdf10_def\n");
//@unit 8c0fdf18
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdf18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0fdf18\n.set _FUN_8c0fdf18, _FUN_8c0fdf18_def\n");
//@unit 8c0fdf74
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fdf74";
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
  *(int *)(unsigned)(ar4 + 0x300) = *(int *)(unsigned)(ar4 + 0x300) + 1;
  return ar4;
}

__asm__(".globl _FUN_8c0fdf74\n.set _FUN_8c0fdf74, _FUN_8c0fdf74_def\n");
//@unit 8c0fe018
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Item_pointer_is_NULL_CItemLi_0fe01c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0x300) != 0) {
    if (ar5 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_102824(((undefined1 *)(unsigned)0x8c141e8f),0,0,0xd); });
      report_error_message
                (((undefined1 *)(unsigned)0x8c141ebb),((undefined1 *)(unsigned)0x8c141ed2),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(int *)(unsigned)(ar4 + 0x300) = *(int *)(unsigned)(ar4 + 0x300) + -1;
    }
  }
  return ar4;
}

__asm__(".globl _s_Item_pointer_is_NULL_CItemLi_0fe01c\n.set _s_Item_pointer_is_NULL_CItemLi_0fe01c, _s_Item_pointer_is_NULL_CItemLi_0fe01c_def\n");
//@unit 8c0fe108
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Invalid_Item_number_CItemLis_0fe110";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(int *)(unsigned)(ar4 + 0x300) < ar5)) {
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

__asm__(".globl _s_Invalid_Item_number_CItemLis_0fe110\n.set _s_Invalid_Item_number_CItemLis_0fe110, _s_Invalid_Item_number_CItemLis_0fe110_def\n");
//@unit 8c0fe1b8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe1b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fddc4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fddc4(ar4 + 0xc,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x18,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x19) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fe1b8\n.set _FUN_8c0fe1b8, _FUN_8c0fe1b8_def\n");
//@unit 8c0fe250
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0fe250\n.set _FUN_8c0fe250, _FUN_8c0fe250_def\n");
//@unit 8c0fe2a0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe2a0";
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
  *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + 1;
  return ar4;
}

__asm__(".globl _FUN_8c0fe2a0\n.set _FUN_8c0fe2a0, _FUN_8c0fe2a0_def\n");
//@unit 8c0fe334
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Item_pointer_is_NULL_CNodePt_0fe338";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0x38) != 0) {
    if (ar5 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); noop_102824(((undefined1 *)(unsigned)0x8c141f84),0,0,0xd); });
      report_error_message
                (((undefined1 *)(unsigned)0x8c141ebb),((undefined1 *)(unsigned)0x8c141fb3),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 36)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(int *)(unsigned)(ar4 + 0x38) = *(int *)(unsigned)(ar4 + 0x38) + -1;
    }
  }
  return ar4;
}

__asm__(".globl _s_Item_pointer_is_NULL_CNodePt_0fe338\n.set _s_Item_pointer_is_NULL_CNodePt_0fe338, _s_Item_pointer_is_NULL_CNodePt_0fe338_def\n");
//@unit 8c0fe41c
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Invalid_Item_number_CNodePtr_0fe424";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 4)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(int *)(unsigned)(ar4 + 0x38) < ar5)) {
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

__asm__(".globl _s_Invalid_Item_number_CNodePtr_0fe424\n.set _s_Invalid_Item_number_CNodePtr_0fe424, _s_Invalid_Item_number_CNodePtr_0fe424_def\n");
//@unit 8c0fe4c4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe4c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0xc,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0xc,ar4,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fe4c4\n.set _FUN_8c0fe4c4, _FUN_8c0fe4c4_def\n");
//@unit 8c0fe4f8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe4f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fdde4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fdde4(ar4 + 0x58,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0xb0,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0xb1) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xd0) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fe4f8\n.set _FUN_8c0fe4f8, _FUN_8c0fe4f8_def\n");
//@unit 8c0fe59c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe59c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0fe59c\n.set _FUN_8c0fe59c, _FUN_8c0fe59c_def\n");
//@unit 8c0fe5f0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe5f0";
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
  *(int *)(unsigned)(ar4 + 0xd0) = *(int *)(unsigned)(ar4 + 0xd0) + 1;
  return ar4;
}

__asm__(".globl _FUN_8c0fe5f0\n.set _FUN_8c0fe5f0, _FUN_8c0fe5f0_def\n");
//@unit 8c0fe690
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CWaterSnowList_TakeOut_0fe694";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0xd0) != 0) {
    if (ar5 == 0) {
      report_error_message
                (((undefined1 *)(unsigned)0x8c14201a),((undefined1 *)(unsigned)0x8c142031),1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(int *)(unsigned)(ar4 + 0xd0) = *(int *)(unsigned)(ar4 + 0xd0) + -1;
    }
  }
  return ar4;
}

__asm__(".globl _s_CWaterSnowList_TakeOut_0fe694\n.set _s_CWaterSnowList_TakeOut_0fe694, _s_CWaterSnowList_TakeOut_0fe694_def\n");
//@unit 8c0fe764
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CWaterSnowList_GetWaterSnowO_0fe76c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(int *)(unsigned)(0xd0 + ar4) < ar5)) {
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

__asm__(".globl _s_CWaterSnowList_GetWaterSnowO_0fe76c\n.set _s_CWaterSnowList_GetWaterSnowO_0fe76c, _s_CWaterSnowList_GetWaterSnowO_0fe76c_def\n");
//@unit 8c0fe7f4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe7f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0x58,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0x58,ar4,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0xd0) = 0;
  return 0xd0;
}

__asm__(".globl _FUN_8c0fe7f4\n.set _FUN_8c0fe7f4, _FUN_8c0fe7f4_def\n");
//@unit 8c0fe82c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe82c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 ar5_00;
  int ar5_01;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fde34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0fde34(ar4 + 0x14,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7); });
  ar5_01 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7); });
  ar6_00 = (vsp = ((unsigned long)(fr0_ - 24)), log_message(ar5,ar5_01,ar6,ar7));
  if (0x1d < ar6_00) {
    ar6_00 = 0x1d;
  }
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0143c0(ar4 + 0x28,ar5,ar6_00,ar7));
  *(undefined1 *)(unsigned)(ar4 + ar6_00 + 0x29) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fe82c\n.set _FUN_8c0fe82c, _FUN_8c0fe82c_def\n");
//@unit 8c0fe8c4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fe8c4";
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
  *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + 1;
  return ar4;
}

__asm__(".globl _FUN_8c0fe8c4\n.set _FUN_8c0fe8c4, _FUN_8c0fe8c4_def\n");
//@unit 8c0fe95c
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CItemGLoadRequestList_TakeOu_0fe960";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0x48) != 0) {
    if (ar5 == 0) {
      report_error_message
                (((undefined1 *)(unsigned)0x8c142084),((undefined1 *)(unsigned)0x8c1420a1)
                 ,1,2);
    }
    else {
      ar5_00 = ar5;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,ar5,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,ar5_00,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(uVar1,uVar2,ar6,ar7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_4_0dac48(ar5,uVar2,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(ar5,uVar2,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(uVar1,uVar2,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf08(ar5,0,ar6,ar7); });
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0fdf10(ar5,0,ar6,ar7); });
      *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + -1;
    }
  }
  return ar4;
}

__asm__(".globl _s_CItemGLoadRequestList_TakeOu_0fe960\n.set _s_CItemGLoadRequestList_TakeOu_0fe960, _s_CItemGLoadRequestList_TakeOu_0fe960_def\n");
//@unit 8c0fea2c
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CItemGLoadRequestList_GetPtr_0fea34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int ar5_00;
  int iVar1;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  if ((ar5 < 0) || (*(int *)(unsigned)(ar4 + 0x48) < ar5)) {
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

__asm__(".globl _s_CItemGLoadRequestList_GetPtr_0fea34\n.set _s_CItemGLoadRequestList_GetPtr_0fea34, _s_CItemGLoadRequestList_GetPtr_0fea34_def\n");
//@unit 8c0feab8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feab8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf10(ar4,ar4 + 0x14,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fdf08(ar4 + 0x14,ar4,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  return 0x48;
}

__asm__(".globl _FUN_8c0feab8\n.set _FUN_8c0feab8, _FUN_8c0feab8_def\n");
//@unit 8c0feaec
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feaec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fddc4(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0feaec\n.set _FUN_8c0feaec, _FUN_8c0feaec_def\n");
//@unit 8c0feb0c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feb0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x23); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0feaec),((void *)(unsigned)0x8c0da130),0x10); });
  return ar4;
}

__asm__(".globl _FUN_8c0feb0c\n.set _FUN_8c0feb0c, _FUN_8c0feb0c_def\n");
//@unit 8c0feb3c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feb3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x22 < iVar1) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + iVar1 * 0x10 + 0xc) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(unsigned)(ar4 + iVar1 * 0x10 + 0xc) = 1;
  return ar4 + iVar1 * 0x10;
}

__asm__(".globl _FUN_8c0feb3c\n.set _FUN_8c0feb3c, _FUN_8c0feb3c_def\n");
//@unit 8c0feb88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0feb88_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0feb88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(*ar5 + 0xc) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0feb88\n.set _FUN_8c0feb88, _FUN_8c0feb88_def\n");
//@unit 8c0feb98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feb98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdde4(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0feb98\n.set _FUN_8c0feb98, _FUN_8c0feb98_def\n");
//@unit 8c0febbc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0febbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x96); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0feb98),((void *)(unsigned)0x8c0c4a90),0x5c); });
  return ar4;
}

__asm__(".globl _FUN_8c0febbc\n.set _FUN_8c0febbc, _FUN_8c0febbc_def\n");
//@unit 8c0febf0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0febf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x96 <= iVar1) {
      return 0;
    }
    if (*(int *)(unsigned)(ar4 + iVar1 * 0x5c + 0x58) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(unsigned)(ar4 + iVar1 * 0x5c + 0x58) = 1;
  return ar4 + iVar1 * 0x5c;
}

__asm__(".globl _FUN_8c0febf0\n.set _FUN_8c0febf0, _FUN_8c0febf0_def\n");
//@unit 8c0fec4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fec4c_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fec4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(*ar5 + 0x58) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fec4c\n.set _FUN_8c0fec4c, _FUN_8c0fec4c_def\n");
//@unit 8c0fec60
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fec60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fde34(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0fec60\n.set _FUN_8c0fec60, _FUN_8c0fec60_def\n");
//@unit 8c0fec80
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fec80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long t0_ = (unsigned long)(0x19); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4,((void *)(unsigned)0x8c0fec60),((void *)(unsigned)0x8c0c02e8),0x18); });
  return ar4;
}

__asm__(".globl _FUN_8c0fec80\n.set _FUN_8c0fec80, _FUN_8c0fec80_def\n");
//@unit 8c0fecb0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fecb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x18 < iVar1) {
      return 0;
    }
    if (*(int *)(unsigned)(iVar1 * 0x18 + ar4 + 0x14) == 0) break;
    iVar1 = iVar1 + 1;
  }
  *(undefined4 *)(unsigned)(iVar1 * 0x18 + ar4 + 0x14) = 1;
  return iVar1 * 0x18 + ar4;
}

__asm__(".globl _FUN_8c0fecb0\n.set _FUN_8c0fecb0, _FUN_8c0fecb0_def\n");
//@unit 8c0fed08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fed08_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fed08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(*ar5 + 0x14) = 0;
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0fed08\n.set _FUN_8c0fed08, _FUN_8c0fed08_def\n");
//@unit 8c0fed18
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fed18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fed44(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fec80(ar4 + 0x4c,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0fed18\n.set _FUN_8c0fed18, _FUN_8c0fed18_def\n");
//@unit 8c0fed44
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fed44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe82c(ar4,(&(*(undefined1 *)(unsigned)0x8c141e34)) + 0x2c8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fed44\n.set _FUN_8c0fed44, _FUN_8c0fed44_def\n");
//@unit 8c0fed70
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CItemGLoader_RegistToLoad_0fed74";
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
    *(undefined4 *)(unsigned)(ar5_00 + 8) = ar5;
    *(undefined4 *)(unsigned)(ar5_00 + 0xc) = ar6;
    *(undefined4 *)(unsigned)(ar5_00 + 0x10) = 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fe8c4(ar4,ar5_00,ar6_00,ar7));
  }
  return ar5_00;
}

__asm__(".globl _s_CItemGLoader_RegistToLoad_0fed74\n.set _s_CItemGLoader_RegistToLoad_0fed74, _s_CItemGLoader_RegistToLoad_0fed74_def\n");
//@unit 8c0fedf4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fedf4";
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
      if (*(int *)(unsigned)(ar4_00 + 0x10) != 2) {
        ar6 = *(undefined4 *)(unsigned)(ar4_00 + 0xc);
        ar5_00 = ar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xdc + *(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8)))))
                          (*(int *)(unsigned)(ar4_00 + 8),ar5,ar6,ar7));
        if (iVar2 == 1) {
          *(undefined4 *)(unsigned)(ar4_00 + 0x10) = 2;
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0fedf4\n.set _FUN_8c0fedf4, _FUN_8c0fedf4_def\n");
//@unit 8c0fee88
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fee88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fee88\n.set _FUN_8c0fee88, _FUN_8c0fee88_def\n");
//@unit 8c0feea8
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_48_0feea8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x48);
}

__asm__(".globl _get_field_48_0feea8\n.set _get_field_48_0feea8, _get_field_48_0feea8_def\n");
//@unit 8c0feeb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0feeb0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0feeb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ((int *)(fr0_ - 0x14))[0] = *ar5;
  uVar1 = *(undefined4 *)(unsigned)(((int *)(fr0_ - 0x14))[0] + 8);
  *ar5 = 0;
  (vsp = ((unsigned long)(fr0_ - 20)), s_CItemGLoadRequestList_TakeOu_0fe960(ar4,((int *)(fr0_ - 0x14))[0],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0fed08(ar4 + 0x4c,((int *)(fr0_ - 0x14)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0feeb0\n.set _FUN_8c0feeb0, _FUN_8c0feeb0_def\n");
//@unit 8c0feef8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0feef8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)(*(int *)(unsigned)(ar5 + 0x10) == 2);
}

__asm__(".globl _FUN_8c0feef8\n.set _FUN_8c0feef8, _FUN_8c0feef8_def\n");
//@unit 8c0fef10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fef10_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fef10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  ((undefined4 *)(fr0_ - 0xc))[0] = 0;
  while( true ) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) break;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), get_field_48_0feea8(ar4,ar5,ar6,ar7));
    ((undefined4 *)(fr0_ - 0xc))[0] = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fea2c))))
                             (ar4,iVar1 + -1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 12)), s_CItemGLoadRequestList_TakeOu_0fe960(ar4,((undefined4 *)(fr0_ - 0xc))[0],ar6,ar7));
    ar5 = ((undefined4 *)(fr0_ - 0xc));
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0fed08(ar4 + 0x4c,ar5,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0feab8(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0fef10\n.set _FUN_8c0fef10, _FUN_8c0fef10_def\n");
//@unit 8c0fef8c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fef8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl _FUN_8c0fef8c\n.set _FUN_8c0fef8c, _FUN_8c0fef8c_def\n");
//@unit 8c0fef94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_Shell_0fef9c_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Shell_0fef9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  char *a5;
  int a4;
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  puVar2 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
  if (((int)ar5 < 0x11) && (-1 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x0:
      (*(int *)(fr0_ - 0x88)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x9d8,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x88));
      (*(int *)(fr0_ - 0x18)) = (*(int *)(fr0_ - 0x88));
      if ((*(int *)(fr0_ - 0x88)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MUSHROOMERLINE_09b8e8((*(int *)(fr0_ - 0x88)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x18));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x18)) + 8) + 0x54))))((*(int *)(fr0_ - 0x18)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0x1:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0xfd4,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x8c)) = a4;
      (*(int *)(fr0_ - 0x54)) = a4;
      (*(int *)(fr0_ - 0x1c)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MUSHROOMERLINE_09d9c2(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x1c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x2:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x1718,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x90)) = a4;
      (*(int *)(fr0_ - 0x58)) = a4;
      (*(int *)(fr0_ - 0x20)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_SQUIDLINE_0ac6a4(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x20));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x3:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x10dc,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xac)) = a4;
      (*(int *)(fr0_ - 0x74)) = a4;
      (*(int *)(fr0_ - 0x3c)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_HIGYOLINE_0851fa(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x3c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x4:
      (*(int *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7e4,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x94));
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x94));
      if ((*(int *)(fr0_ - 0x94)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_HIGYOLINE_087ed2((*(int *)(fr0_ - 0x94)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x24));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x24)) + 8) + 0x54))))((*(int *)(fr0_ - 0x24)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0x5:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x1150,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xb0)) = a4;
      (*(int *)(fr0_ - 0x78)) = a4;
      (*(int *)(fr0_ - 0x40)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_FROGMANLINE_036266(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x40));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x6:
      (*(int *)(fr0_ - 0x98)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7e4,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x98));
      (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x98));
      if ((*(int *)(fr0_ - 0x98)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_FROGMANLINE_0384fa((*(int *)(fr0_ - 0x98)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x28)) + 8) + 0x54))))((*(int *)(fr0_ - 0x28)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    default:
      goto switchD_8c0fefc4_caseD_7;
    case 0xa:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x92c,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xb4)) = a4;
      (*(int *)(fr0_ - 0x7c)) = a4;
      (*(int *)(fr0_ - 0x44)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_08a182(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x44));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xb:
      (*(int *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7ec,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x9c));
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x9c));
      if ((*(int *)(fr0_ - 0x9c)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_099e76((*(int *)(fr0_ - 0x9c)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x2c)) + 8) + 0x54))))((*(int *)(fr0_ - 0x2c)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0xc:
      (*(int *)(fr0_ - 0xa0)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7ec,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0xa0));
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0xa0));
      if ((*(int *)(fr0_ - 0xa0)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_0a4dea((*(int *)(fr0_ - 0xa0)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x30)) + 8) + 0x54))))((*(int *)(fr0_ - 0x30)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0xd:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x2790,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xa4)) = a4;
      (*(int *)(fr0_ - 0x6c)) = a4;
      (*(int *)(fr0_ - 0x34)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_SPIDERLINE_0a4592(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x34));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xe:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x294,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xa8)) = a4;
      (*(int *)(fr0_ - 0x70)) = a4;
      (*(int *)(fr0_ - 0x38)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c06740c(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x38));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xf:
      (*(int *)(fr0_ - 0xbc)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x270,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0xbc));
      a4 = (*(int *)(fr0_ - 0x4c));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x84)) = (*(int *)(fr0_ - 0xbc));
      if ((*(int *)(fr0_ - 0xbc)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0f58a4((*(int *)(fr0_ - 0xbc)),0,0,ar7));
        a4 = (*(int *)(fr0_ - 0x4c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x10:
      a5 = ar5;
      (*(int *)(fr0_ - 0xb8)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x210,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x48)) = (*(int *)(fr0_ - 0xb8));
      (*(int *)(fr0_ - 0x80)) = (*(int *)(fr0_ - 0xb8));
      if ((*(int *)(fr0_ - 0xb8)) != 0) {
        if (cVar4 == '\0') {
          puVar1 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xcc)) + 4);
          (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(0x3f800000,(undefined4)(*(undefined8 *)(fr0_ - 0xcc)));
        }
        else {
          puVar1 = &(*(undefined8 *)(fr0_ - 0xcc));
          (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(0x3f800000,extraout_fr1);
        }
        ar6 = 0x10;
        a5 = ((undefined1 *)(unsigned)0x8c14212e);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)puVar1); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar1 + 4)); *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 204)) - 8); FUN_8c0f54ec(*(undefined4 *)(unsigned)((int)puVar1 + 0x80),((undefined1 *)(unsigned)0x8c14212e),0x10,ar7); });
        puVar2 = (undefined4 *)(unsigned)((int)puVar1 + 4);
      }
      a4 = *(int *)(unsigned)((int)puVar2 + 0x7c);
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xf8))))(a4,a5,ar6,ar7));
      piVar3 = puVar2;
    }
  }
  else {
switchD_8c0fefc4_caseD_7:
    (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(5,(undefined4)(*(undefined8 *)(fr0_ - 0xcc)));
    (vsp = ((unsigned long)(fr0_ - 204)), report_error_message(((undefined1 *)(unsigned)0x8c142134),((undefined1 *)(unsigned)0x8c142144),1,2));
    a4 = 0;
    piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
  }
  if (a4 == 0) {
    piVar3[-1] = 5;
    (vsp = ((unsigned long)(fr0_ - 204)), report_error_message(((undefined1 *)(unsigned)0x8c14215e),((undefined1 *)(unsigned)0x8c14216f),1,2));
  }
  *piVar3 = (int)ar5;
  piVar3[1] = *piVar3 * 4 + -0x73bbecb8;
  *(int *)(unsigned)piVar3[1] = *(int *)(unsigned)piVar3[1] + 1;
  return a4;
}

__asm__(".globl _s_Shell_0fef9c\n.set _s_Shell_0fef9c, _s_Shell_0fef9c_def\n");
//@unit 8c0ff500
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ff500_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff500";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_05c284(*ar5,ar5,ar6,ar7));
  piVar2 = (int *)(unsigned)(iVar1 * 4 + 0x8c441348);
  *piVar2 = *piVar2 + -1;
  iVar1 = *ar5;
  if (iVar1 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 8))))(iVar1,1,ar6,ar7));
  }
  *ar5 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ff500\n.set _FUN_8c0ff500, _FUN_8c0ff500_def\n");
//@unit 8c0ff558
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ff558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff558";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126658),ar5,ar6,ar7));
  uVar3 = 0x8c4412b8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4412b8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126668),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4412c4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4412c4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126678),pcVar2,uVar3,ar7));
  uVar3 = 0x8c4412d0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4412d0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126688),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c4412dc,ar7));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c4412f4,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0ff6a0),0x8c4412e8,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(9); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c441324,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c0ff67c),0x8c441318,uVar1));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126698) = CONCAT44((*(undefined1 *)(unsigned)0x8c12669c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126698) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0ff558\n.set _FUN_8c0ff558, _FUN_8c0ff558_def\n");
//@unit 8c0ff67c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ff67c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c441324,((void *)0x8c03a3dc),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ff67c\n.set _FUN_8c0ff67c, _FUN_8c0ff67c_def\n");
//@unit 8c0ff6a0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ff6a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c4412f4,((void *)0x8c0247b0),4,9); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ff6a0\n.set _FUN_8c0ff6a0, _FUN_8c0ff6a0_def\n");
//@unit 8c0ff6c4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ff6c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(ar4 + 0xc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0ffb90(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c0ff6c4\n.set _FUN_8c0ff6c4, _FUN_8c0ff6c4_def\n");
//@unit 8c0ff6f0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ff6f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0151a0(ar4 + 0xc,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0ff6f0\n.set _FUN_8c0ff6f0, _FUN_8c0ff6f0_def\n");
//@unit 8c0ff730
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ff730_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff730";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x43f00000;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44200000;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x44200000;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0x43f00000;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0xff000000;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0xff000000;
  uVar1 = 4;
  ar6_00 = ar4 + 0x40;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c016318(ar4 + 0xc,ar4 + 0x20,ar6_00,4); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015198(ar4 + 0xc,0x20,ar6_00,uVar1); });
  return uVar1;
}

__asm__(".globl _FUN_8c0ff730\n.set _FUN_8c0ff730, _FUN_8c0ff730_def\n");
//@unit 8c0ff7d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0ff7d4_def(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff7d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined1 *ar5_00;
  float fVar3;
  code *pcVar5;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  iVar1 = *ar4;
  if (iVar1 == 0) {
    piVar2 = ar4 + 2;
    if (cVar7 == '\0') {
      *piVar2 = -0x3de00000;
    }
    else {
      piVar2[0] = -0x3de00000;
      piVar2[1] = -0x73fc9678;
    }
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c036988(ar4[1],ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c078fb8(ar4[1],ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x6c))))(ar4[1],ar5_00,ar6,ar7));
    *ar4 = 1;
  }
  else if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = in_xd0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1001e0(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      *ar4 = 3;
    }
    if (cVar7 == '\0') {
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0x41700000;
    }
    else {
      fVar3 = 15.0;
      pcVar5 = ((void *)0x8c2595aa);
    }
    if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
      piVar2 = ar4 + 2;
      if (cVar7 == '\0') {
        *piVar2 = 0x41700000;
      }
      else {
        piVar2[0] = 0x41700000;
        piVar2[1] = -0x73da6a56;
      }
      *ar4 = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1001e0(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      *ar4 = 3;
    }
  }
  else if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0xc2200000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = in_xd0;
      fVar3 = -40.0;
      pcVar5 = ((void *)0x8c036988);
    }
    if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x6c))))(ar4[1],ar5_00,ar6,ar7));
      *ar4 = 4;
      ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c2595aa(0,ar5_00,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x1c))))(ar4[1],ar5_00,ar6,ar7));
  iVar1 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return iVar1;
}

__asm__(".globl _FUN_8c0ff7d4\n.set _FUN_8c0ff7d4, _FUN_8c0ff7d4_def\n");
//@unit 8c0ff928
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ff928_def(int ar4,undefined8 *ar5,undefined8 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff928";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined8 *a5;
  undefined4 uVar4;
  undefined8 *a6;
  undefined4 in_fr1 = 0;
  undefined8 uVar5;
  char cVar6;
  undefined2 uVar7;
  
  cVar6 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c4413c8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413c4) = 0xc1700000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413c8) = CONCAT31((*(undefined1 *)(unsigned)0x8c4413c8),1);
  }
  if ((*(undefined1 *)(unsigned)0x8c4413d0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413cc) = 0xc1400000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4413d0) = CONCAT31((*(undefined1 *)(unsigned)0x8c4413d0),1);
  }
  a5 = ar5;
  a6 = ar6;
  uVar3 = ar7;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c2363e8(((undefined4 *)(fr0_ - 0x90)),ar5,ar6,ar7); });
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0xa0)) = *(undefined4 *)(unsigned)ar5;
    (*(undefined4 *)(fr0_ - 0x9c)) = *(undefined4 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0x98)) = *(undefined4 *)(unsigned)ar6;
    (*(undefined4 *)(fr0_ - 0x94)) = *(undefined4 *)(unsigned)((int)ar6 + 4);
    uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x94)),in_fr1);
  }
  else {
    (*(undefined4 *)(fr0_ - 0xa0)) = (undefined4)*ar5;
    (*(undefined4 *)(fr0_ - 0x9c)) = (undefined4)*(undefined8 *)(unsigned)((int)ar5 + 4);
    (*(undefined4 *)(fr0_ - 0x98)) = (undefined4)*ar6;
    uVar5 = *(undefined8 *)(unsigned)((int)ar6 + 4);
    (*(undefined4 *)(fr0_ - 0x94)) = (undefined4)uVar5;
    ((undefined4 *)(fr0_ - 0x90))[0] = (undefined4)((ulonglong)uVar5 >> 0x20);
  }
  (*(undefined4 *)(fr0_ - 0xa4)) = 0x42c80000;
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x120))))(*(int *)(unsigned)(ar4 + 4),a5,a6,uVar3));
  uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x48)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x48))+4)),uVar4);
    uVar4 = (*(undefined4 *)(fr0_ - 0xa4));
    uVar5 = (*(undefined8 *)(fr0_ - 0x48));
  }
  (*(undefined8 *)(fr0_ - 0x48)) = uVar5;
  (*(undefined4 *)(fr0_ - 0xa4)) = uVar4;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257170(&(*(undefined4 *)(fr0_ - 0xa4)),a5,a6,uVar3));
  uVar4 = ar7;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2595aa(2,ar7,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257148(0x2e38,uVar4,a6,uVar3));
  ar4_00 = ((undefined4 *)(fr0_ - 0x90));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2572ec(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219038(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c219070(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c21907e(ar4_00,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c256328(0,uVar4,a6,uVar3); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 176)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  if (iVar1 == 0xd) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
  }
  uVar7 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0xb0)) >> 0x10);
  if (iVar1 == 10) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x148))))(*(int *)(unsigned)(ar4 + 4),uVar4,a6,uVar3))
    ;
    if ((short)uVar2 != 3) {
      ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar7,(short)uVar2)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c25b5d0(0,uVar4,a6,uVar3); });
    }
  }
  (vsp = ((unsigned long)(fr0_ - 176)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8) + 0x38))))(*(int *)(unsigned)(ar4 + 4),uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c256210(1,uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c016340(ar4 + 0xc,uVar4,a6,uVar3));
  if (cVar6 != '\0') {
    ((undefined4 *)(fr0_ - 0x90))[0] = 0xff000000;
  }
  (*(undefined4 *)(fr0_ - 0x94)) = 0x43700000;
  (*(undefined4 *)(fr0_ - 0x98)) = 0x43a00000;
  (*(undefined4 *)(fr0_ - 0x9c)) = 0x43f00000;
  (*(undefined4 *)(fr0_ - 0xa0)) = 0x44200000;
  (*(undefined4 *)(fr0_ - 0xa4)) = 0x43fa0000;
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c257170(&(*(undefined4 *)(fr0_ - 0xa4)),uVar4,a6,uVar3));
  (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c2595aa(0,ar7,a6,uVar3));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 176)), FUN_8c259046(0xff000000,0xff000000,0xff000000,uVar3));
  return uVar3;
}

__asm__(".globl _FUN_8c0ff928\n.set _FUN_8c0ff928, _FUN_8c0ff928_def\n");
//@unit 8c0ffb84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ffb84_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ffb84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[1] = ar5;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c0ffb84\n.set _FUN_8c0ffb84, _FUN_8c0ffb84_def\n");
//@unit 8c0ffb90
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_0ffb90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0ffb90\n.set _ret_const_1_0ffb90, _ret_const_1_0ffb90_def\n");
//@unit 8c0ffb98
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ffb98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff6c4(ar4 + 0xd8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x12c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x13c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x14c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015c2c(ar4 + 0x15c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101250(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xcc + ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0ffb98\n.set _FUN_8c0ffb98, _FUN_8c0ffb98_def\n");
//@unit 8c0ffc1c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ffc1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c0ffc1c\n.set _FUN_8c0ffc1c, _FUN_8c0ffc1c_def\n");
//@unit 8c0ffcb4
#include "../decls.h"
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
  ring[rp++ & 255] = "s_GRAPHICS_0ffcb6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  wchar16 *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = 2;
  uVar2 = 0x8c4413f4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(0x8c4413d4,0x8c4413dc,0x8c4413f4,2));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x15c,0x8c4413d4,uVar2,ar7_00); });
  ar5_00 = ((undefined1 *)(unsigned)0x8c1421cc);
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x15c,((undefined1 *)(unsigned)0x8c1421cc),uVar2,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a0c(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_0ffd74(ar4 + 0x15c,ar5_00,uVar2,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c142254),((undefined1 *)(unsigned)0x8c142263),uVar2));
  if (iVar1 == -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c14226c),((undefined1 *)(unsigned)0x8c142292),1,2));
  }
  return 1;
}

__asm__(".globl _s_GRAPHICS_0ffcb6\n.set _s_GRAPHICS_0ffcb6, _s_GRAPHICS_0ffcb6_def\n");
//@unit 8c0ffd74
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_1c_0ffd74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x1c);
}

__asm__(".globl _get_field_1c_0ffd74\n.set _get_field_1c_0ffd74, _get_field_1c_0ffd74_def\n");
//@unit 8c0ffd7c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ffd7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(0xcc + ar4) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff730(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0ffd7c\n.set _FUN_8c0ffd7c, _FUN_8c0ffd7c_def\n");
//@unit 8c0ffdb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0ffdb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ffdb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0))
      && (*(int *)(unsigned)(ar4 + 0x59c) == 0)) && (*(int *)(unsigned)(ar4 + 0x188) != 6)) {
    *(undefined4 *)(unsigned)(ar4 + 0x188) = 0;
  }
  if (((-1 < *(short *)(unsigned)(ar4 + 0x18c)) && (*(int *)(unsigned)(ar4 + 0x188) == 0)) &&
     ((*(short *)(unsigned)(ar4 + 0x18c) = *(short *)(unsigned)(ar4 + 0x18c) + -1, *(int *)(unsigned)(ar4 + 0x188) == 0 &&
      (*(short *)(unsigned)(ar4 + 0x18c) < 1)))) {
    *(undefined4 *)(unsigned)(ar4 + 0x188) = 6;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a538(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a53c(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x42fe0000,(float)iVar1);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x14c) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x14c) = in_xd0;
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x42fe0000,(float)iVar2);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x150) = fVar3;
    dVar4 = CONCAT44D(0x41000000,*(undefined4 *)(unsigned)(ar4 + 0x14c));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x150) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x14c);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x13c) = fVar3;
    dVar4 = CONCAT44D(0x41000000,*(undefined4 *)(unsigned)(ar4 + 0x150));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x13c) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x150);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x140) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x140) = in_xd0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f398(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (iVar1 == 0) {
    *(short *)(unsigned)(ar4 + 0x18e) = *(short *)(unsigned)(ar4 + 0x18e) + 1;
  }
  else {
    *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1016f0(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0ffdb0\n.set _FUN_8c0ffdb0, _FUN_8c0ffdb0_def\n");
//@unit 8c0fff28
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fff28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff7d4(ar4 + 0xd8,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fff28\n.set _FUN_8c0fff28, _FUN_8c0fff28_def\n");
//@unit 8c0fff54
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fff54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff928(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0fff54\n.set _FUN_8c0fff54, _FUN_8c0fff54_def\n");
//@unit 8c0fff84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0fff84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fff84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 in_PR = 0;
  
  if (*(int *)(unsigned)(ar4 + 0x188) != 6) {
    ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x188);
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0fffec(ar4 + 0x15c,ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x15c) + 0x14))))((int *)(unsigned)(ar4 + 0x15c),ar5_00,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0fff84\n.set _FUN_8c0fff84, _FUN_8c0fff84_def\n");
//@unit 8c0fffec
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0fffec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x24) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0fffec\n.set _FUN_8c0fffec, _FUN_8c0fffec_def\n");
//@unit 8c0ffff4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0ffff4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c100030))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return (uint)((uVar1 & 0x60e) == 0x60e);
}

__asm__(".globl _FUN_8c0ffff4\n.set _FUN_8c0ffff4, _FUN_8c0ffff4_def\n");
