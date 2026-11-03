//@unit 8c0e000c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e000c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e000c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1458(ar4 + 0x13b8c,ar5,ar6,ar7));
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0e000c\n.set _FUN_8c0e000c, _FUN_8c0e000c_def\n");
//@unit 8c0e004c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e004c_def(int *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e004c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  uint a5;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db008(ar4,ar5,ar6,ar7));
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d064c(ar4 + 0x4ec9,ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d98f4(ar4 + 0x89c1,ar5_00,ar6,ar7); });
  a5 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50ec(ar4 + 0x42b,ar5,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1c4))))(ar4,a5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x7c))))(ar4,a5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0e004c\n.set _FUN_8c0e004c, _FUN_8c0e004c_def\n");
//@unit 8c0e00ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e00ec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e00ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d09f8(ar4 + 0x4edc,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0e00ec\n.set _FUN_8c0e00ec, _FUN_8c0e00ec_def\n");
//@unit 8c0e0124
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0124_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1468(ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0e0124\n.set _FUN_8c0e0124, _FUN_8c0e0124_def\n");
//@unit 8c0e015c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e015c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e015c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xeb44;
  *(undefined4 *)(unsigned)(0xeb44 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e015c\n.set _FUN_8c0e015c, _FUN_8c0e015c_def\n");
//@unit 8c0e0168
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e0168_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e0168";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e0168\n.set _noop_0e0168, _noop_0e0168_def\n");
//@unit 8c0e016c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e016c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e016c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50a0((int)ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d0bd2((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d14b0((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1024 + (int)ar4) = 3;
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538((int)ar4 + 0x13b24,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0714((int)ar4 + 0x13b24,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x15c + *ar4))))(ar4,uVar1,ar6,ar7));
  *(undefined4 *)(unsigned)(0x9d4 + (int)ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6980((int)ar4 + 0xa68,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e016c\n.set _FUN_8c0e016c, _FUN_8c0e016c_def\n");
//@unit 8c0e021c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e021c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e021c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50b4(ar4 + 0x10ac,ar5,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0714(ar4 + 0x13b24,uVar1,ar6,ar7));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1024 + ar4) = 3;
  *(undefined4 *)(unsigned)(0x9d4 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6980(ar4 + 0xa68,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e021c\n.set _FUN_8c0e021c, _FUN_8c0e021c_def\n");
//@unit 8c0e02ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e02ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e02ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e02ac\n.set _noop_0e02ac, _noop_0e02ac_def\n");
//@unit 8c0e02b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e02b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e02b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined4 *)(unsigned)(0x1020 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d5220(ar4 + 0x10ac,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e02b0\n.set _FUN_8c0e02b0, _FUN_8c0e02b0_def\n");
//@unit 8c0e02e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e02e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e02e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e02e4\n.set _noop_0e02e4, _noop_0e02e4_def\n");
//@unit 8c0e02e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e02e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e02e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0xa6c) = 0x43d6fe14;
  *(undefined4 *)(unsigned)(ar4 + 0xa70) = 0x4523bfd7;
  return ((undefined4 *)(unsigned)0x8c0e031c);
}

__asm__(".globl _FUN_8c0e02e8\n.set _FUN_8c0e02e8, _FUN_8c0e02e8_def\n");
//@unit 8c0e0320
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0320_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9b60(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x106c,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d068c(ar4 + 0x13b24,uVar2,ar6,ar7));
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5578(ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d97b4(ar4 + 0x22704,uVar2,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d09fc(ar4 + 0x13b70,uVar2,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d14b0(ar4 + 0x13b8c,uVar2,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 4,uVar2,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e0320\n.set _FUN_8c0e0320, _FUN_8c0e0320_def\n");
//@unit 8c0e03d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e03d4_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e03d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x106c,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d06a8(ar4 + 0x13b24,uVar2,ar6,ar7));
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d55a4(ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d97d0(ar4 + 0x22704,uVar2,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d0a18(ar4 + 0x13b70,uVar2,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d14cc(ar4 + 0x13b8c,uVar2,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 4,uVar2,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e03d4\n.set _FUN_8c0e03d4, _FUN_8c0e03d4_def\n");
//@unit 8c0e0488
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0488_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0488";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db090(ar4,ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5614(ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d06c4(ar4 + 0x13b24,ar5_00,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d0a34(ar4 + 0x13b70,ar5_00,ar6,ar7); });
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d14e8(ar4 + 0x13b8c,ar5_00,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0488\n.set _FUN_8c0e0488, _FUN_8c0e0488_def\n");
//@unit 8c0e0508
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0508_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0508";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR = 0;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d55d0(ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d06ec(ar4 + 0x13b24,ar5_00,ar6,ar7));
  if ((ar5 & 0xff) < 2) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d0a38(ar4 + 0x13b70,ar5_00,ar6,ar7); });
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1518(ar4 + 0x13b8c,ar5_00,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0508\n.set _FUN_8c0e0508, _FUN_8c0e0508_def\n");
//@unit 8c0e057c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e057c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e057c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  a4 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,0x10,0x1b,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x30))))(a4,ar5,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x2c))))(a4,ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(a4,ar6,uVar1,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c078fb8(a4,ar6,uVar1,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0df998(ar4,a4,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e057c\n.set _FUN_8c0e057c, _FUN_8c0e057c_def\n");
//@unit 8c0e0614
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0614";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  
  uVar3 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_bb4_0e06e4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0db304(((undefined1 *)(fr0_ - 0x5c)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c018f80(((undefined1 *)(fr0_ - 0x5c)),ar5,ar6,ar7));
  iVar4 = 0;
  while( true ) {
    if (iVar1 <= iVar4) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0db224(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 96)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      return uVar3;
    }
    a4 = (int *)(unsigned)(ar4 + iVar4 * 0x16c + 0x22e0c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x14))))(a4,((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
    if (iVar2 == 1) break;
    iVar4 = iVar4 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 96)), Class_129974_m0_016c2c(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
  return 2;
}

__asm__(".globl _FUN_8c0e0614\n.set _FUN_8c0e0614, _FUN_8c0e0614_def\n");
//@unit 8c0e06e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_bb4_0e06e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_bb4_0e06e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xbb4 + ar4);
}

__asm__(".globl _get_field_bb4_0e06e4\n.set _get_field_bb4_0e06e4, _get_field_bb4_0e06e4_def\n");
//@unit 8c0e06f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e06f0_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e06f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(unsigned)(ar4 + 0x1698);
  uVar1 = ar5[1];
  *puVar2 = *ar5;
  puVar2[1] = uVar1;
  uVar1 = ar5[3];
  puVar2[2] = ar5[2];
  puVar2[3] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c0e06f0\n.set _FUN_8c0e06f0, _FUN_8c0e06f0_def\n");
//@unit 8c0e070c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e070c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e070c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(unsigned)(0x23254 + ar4) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,*(undefined4 *)(unsigned)(0x23258 + ar4),ar6,ar7));
  *(undefined4 *)(unsigned)(0x2325c + ar4) = uVar1;
  iVar2 = *(int *)(unsigned)(0x2325c + ar4);
  if (iVar2 != -1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(undefined4 *)(unsigned)(0x2325c + ar4),ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e070c\n.set _FUN_8c0e070c, _FUN_8c0e070c_def\n");
//@unit 8c0e0764
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined8 * FUN_8c0e0764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  
  if ((*(undefined1 *)(unsigned)0x8c438258) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = 0;
    (*(undefined1 *)(unsigned)0x8c438258) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c438260) == '\0') {
    *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x0);
    (*(undefined1 *)(unsigned)0x8c438260) = '\x01';
  }
  if (((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c) == (undefined8 *)(unsigned)0x0) {
    *(float *)(unsigned)(ar4 + 0x2324c) = *(float *)(unsigned)(ar4 + 0x2324c) - 8.9;
    puVar1 = ((undefined1 *)(unsigned)0x8c0e0860);
    if (*(float *)(unsigned)(ar4 + 0x2324c) < -1314.45) {
      *(undefined4 *)(unsigned)(ar4 + 0x2324c) = 0xc4a214cc;
      (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = 0;
      *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x1);
      puVar1 = (undefined8 *)(unsigned)0x1;
    }
  }
  else {
    puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c);
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c) == (undefined8 *)(unsigned)0x1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = (*(undefined4 *)(unsigned)(unsigned)0x8c438254) + 1;
      puVar1 = (undefined8 *)(unsigned)0x5a;
      if (0x5a < (*(undefined4 *)(unsigned)(unsigned)0x8c438254)) {
        *(undefined4 *)(unsigned)(ar4 + 0x23254) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2324c) = 0xc4a44e66;
        puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2325c));
        if (((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2325c)) != (undefined8 *)(unsigned)0xffffffff) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x2325c),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x2325c),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x2325c) = 0xffffffff;
          *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x0);
          puVar1 = (undefined8 *)(unsigned)0x0;
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0e0764\n.set _FUN_8c0e0764, _FUN_8c0e0764_def\n");
//@unit 8c0e087c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e087c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e087c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (-1314.45 < *(float *)(unsigned)(ar4 + 0x2324c)) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e087c\n.set _FUN_8c0e087c, _FUN_8c0e087c_def\n");
//@unit 8c0e08a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e08a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e08a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x10ac) = in_fr4;
  return 0x10ac;
}

__asm__(".globl _FUN_8c0e08a0\n.set _FUN_8c0e08a0, _FUN_8c0e08a0_def\n");
//@unit 8c0e08b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e08b0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e08b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = 0x22810;
    *(undefined4 *)(unsigned)(0x22810 + ar4) = 1;
    return iVar1;
  }
  iVar1 = 0x22810;
  *(undefined4 *)(unsigned)(0x22810 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0e08b0\n.set _FUN_8c0e08b0, _FUN_8c0e08b0_def\n");
//@unit 8c0e08d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e08d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e08d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = 0x22814;
    *(undefined4 *)(unsigned)(0x22814 + ar4) = 1;
    return iVar1;
  }
  iVar1 = 0x22814;
  *(undefined4 *)(unsigned)(0x22814 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0e08d0\n.set _FUN_8c0e08d0, _FUN_8c0e08d0_def\n");
//@unit 8c0e08f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0e08f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e08f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * s0 = (uint *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) & 0xfffffffc;
  if (*(int *)(unsigned)(0x22814 + ar4) == 1) {
    (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) | 2;
  }
  if (*(int *)(unsigned)(0x22810 + ar4) == 1) {
    (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) | 1;
  }
  *s0 = (*(undefined4 *)(fr0_ - 0x4));
  return (*(undefined4 *)(fr0_ - 0x4));
}

__asm__(".globl _FUN_8c0e08f0\n.set _FUN_8c0e08f0, _FUN_8c0e08f0_def\n");
//@unit 8c0e0950
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e0950_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0950";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x22d48;
}

__asm__(".globl _FUN_8c0e0950\n.set _FUN_8c0e0950, _FUN_8c0e0950_def\n");
//@unit 8c0e0960
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0960_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0960";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_164_0d5c94(ar4 + 0x22d48,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e0960\n.set _FUN_8c0e0960, _FUN_8c0e0960_def\n");
//@unit 8c0e0988
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0988_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 *ar6_00;
  double dVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  puVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x38)),puVar2,ar6,ar7));
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43608ba3,*ar5);
  }
  else {
    dVar3 = 1548112654508776.8;
  }
  if (cVar6 == '\0') {
    iVar4 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar4 = (int)(dVar3 / dVar3);
  }
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43160000,ar5[2]);
  }
  else {
    dVar3 = 2.999234411734574e-309;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(F32LO(dVar3) / F32HI(dVar3));
  }
  else {
    iVar5 = (int)(dVar3 / dVar3);
  }
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  else if (10 < iVar4) {
    iVar4 = 10;
  }
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (9 < iVar5) {
    iVar5 = 9;
  }
  if ((*(int *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 0) ||
     (*(int *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x2281c) == 1)) {
    if (cVar7 != '\0') {
      ((undefined4 *)(fr0_ - 0x38))[0] =
           (undefined4)
           ((ulonglong)*(undefined8 *)(unsigned)(iVar4 * 0x78 + ar4 + iVar5 * 0xc + 0x22818) >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
    uVar1 = 0x20;
  }
  else {
    puVar2 = ((undefined4 *)(fr0_ - 0x38));
    ar6_00 = ((undefined1 *)(fr0_ - 0x28));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0185a4(ar4 + 0x2274c,ar5,ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c016a20(((undefined1 *)(fr0_ - 0x28)),((undefined4 *)(fr0_ - 0x38)),ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined4 *)(fr0_ - 0x38)),0xffffffff,ar6_00,puVar2));
    (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,puVar2));
    uVar1 = 0x1c;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0988\n.set _FUN_8c0e0988, _FUN_8c0e0988_def\n");
//@unit 8c0e0b2c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0b2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0b2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar5 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e0bd0(ar4 + 0x13b24,0,ar6,ar7));
  }
  else if (ar5 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e0bb8(ar4 + 0x13b70,1,ar6,ar7));
  }
  else if (ar5 == 4) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e0ba8(ar4 + 0x13b8c,4,ar6,ar7));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e0b2c\n.set _FUN_8c0e0b2c, _FUN_8c0e0b2c_def\n");
//@unit 8c0e0ba8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0e0ba8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0ba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)(*(int *)(unsigned)(0xeb44 + ar4) == 1);
}

__asm__(".globl _FUN_8c0e0ba8\n.set _FUN_8c0e0ba8, _FUN_8c0e0ba8_def\n");
//@unit 8c0e0bb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0bb8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0bb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(int *)(unsigned)(ar4 + 0x18) == 1) && (*(int *)(unsigned)(ar4 + 0x14) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e0bb8\n.set _FUN_8c0e0bb8, _FUN_8c0e0bb8_def\n");
//@unit 8c0e0bd0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0bd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0bd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(float *)(unsigned)(ar4 + 0x10) <= 0.0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e0bd0\n.set _FUN_8c0e0bd0, _FUN_8c0e0bd0_def\n");
//@unit 8c0e0be8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e0bee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e0bee";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar6_00;
  undefined4 uVar1;
  int ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5ff,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x5ff,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x609,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x609,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x625,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x625,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x641,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x641,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x65d,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x65d,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x671,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  ar6_00 = (uint)(byte)ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d57ee(ar4 + 0x10ac,ar5,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d076c(ar4 + 0x13b24,ar5,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d9912(ar4 + 0x22704,ar5,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e0bee\n.set _s_GRAPHICS_ENV_0e0bee, _s_GRAPHICS_ENV_0e0bee_def\n");
//@unit 8c0e0d6c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e0d6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x22704;
}

__asm__(".globl _FUN_8c0e0d6c\n.set _FUN_8c0e0d6c, _FUN_8c0e0d6c_def\n");
//@unit 8c0e0d7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0d7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e0d7c\n.set _FUN_8c0e0d7c, _FUN_8c0e0d7c_def\n");
//@unit 8c0e0da4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0da4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0da4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1b0 + *ar4))))(ar4,1,ar6,ar7));
  *(undefined4 *)(unsigned)(0x22814 + (int)ar4) = 1;
  *(undefined4 *)(unsigned)(0x22810 + (int)ar4) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c((int)ar4 + 0xb10,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c((int)ar4 + 0xb30,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c((int)ar4 + 0xad0,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c((int)ar4 + 0xaf0,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c((int)ar4 + 0xb50,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974((int)ar4 + 0xb70,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e0da4\n.set _FUN_8c0e0da4, _FUN_8c0e0da4_def\n");
//@unit 8c0e0f48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e0f48_def(int *ar4,undefined4 ar5,float *ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0f48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  int *ar5_00;
  float *ar5_01;
  undefined4 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  double in_dr0 = 0;
  double dVar7;
  uint uVar9;
  double dVar8;
  undefined4 in_fr3 = 0;
  double in_dr14 = 0;
  double in_xd0 = 0;
  double dVar10;
  double in_xd14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0x29,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0da588(ar4 + 0x29,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x40)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_set_xyz(((float *)(fr0_ - 0x4c)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023040(ar4 + 0x8bae,ar5,ar6,ar7));
  if (cVar13 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
    dVar7 = CONCAT44D(0x3f400000,ar4[0x8c03]);
  }
  else {
    in_xd0 = *(double *)(unsigned)(ar4 + 0x8c03);
    dVar7 = 7.38978817419112e-312;
  }
  if (cVar12 == '\0') {
    fVar6 = F32HI(dVar7);
    fVar5 = F32LO(dVar7) * fVar6;
    dVar7 = CONCAT44D(fVar6,fVar5);
    bVar11 = F32HI(in_dr0) < fVar5;
  }
  else {
    dVar7 = dVar7 * dVar7;
    bVar11 = in_dr0 < dVar7;
  }
  if (bVar11) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d56b4(ar4 + 0x42b,ar5,ar6,ar7));
  }
  ar5_00 = ar4 + 0x8bad;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d3d6c(ar4 + 0x42b,ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e1320(ar4 + 0x4edc,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d0aac(ar4 + 0x4edc,ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d568c(ar4 + 0x42b,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d08c0(ar4 + 0x4edc,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_14_0e1318(ar4 + 0x4edc,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_300_0bf154(ar4 + 0x29,ar5_00,ar6,ar7));
    for (iVar4 = 0; uVar3 = SUB84(in_dr14,0), iVar4 < iVar1; iVar4 = iVar4 + 1) {
      ar7 = &(*(float *)(fr0_ - 0x28));
      ar6 = &(*(float *)(fr0_ - 0x2c));
      ar5_01 = &(*(float *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0507a4(ar4_00,ar5_01,ar6,ar7));
      if (cVar13 == '\0') {
        in_dr14 = CONCAT44D((*(float *)(fr0_ - 0x2c)),uVar3);
      }
      else {
        in_dr14 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0e130c(ar4 + 0x42b,ar5_01,ar6,ar7));
      if (cVar12 == '\0') {
        bVar11 = F32HI(dVar7) < F32HI(in_dr14);
      }
      else {
        bVar11 = dVar7 < in_dr14;
      }
      if ((!bVar11) &&
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 200))))(ar4_00,ar5_01,ar6,ar7)), iVar2 == 1)) {
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x44861000,(*(float *)(fr0_ - 0x30)));
        }
        else {
          in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
          dVar7 = 3.03513869969298e-309;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x30)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x43320000,(*(float *)(fr0_ - 0x2c)));
        }
        else {
          (*(float *)(fr0_ - 0x30)) = SUB84(in_xd0,0);
          (*(float *)(fr0_ - 0x2c)) = F32HI(in_xd0);
          in_xd0 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
          dVar7 = 1.3023403680263821e+22;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x2c)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x44358000,(*(float *)(fr0_ - 0x28)));
        }
        else {
          (*(float *)(fr0_ - 0x2c)) = SUB84(in_xd0,0);
          (*(float *)(fr0_ - 0x28)) = F32HI(in_xd0);
          in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
          dVar7 = 5066550725148672.0;
        }
        if (cVar12 == '\0') {
          (*(float *)(fr0_ - 0x28)) = F32LO(dVar7) - F32HI(dVar7);
        }
        else {
          (*(float *)(fr0_ - 0x28)) = SUB84(dVar7 - dVar7,0);
        }
        if (cVar13 == '\0') {
          (*(double *)(fr0_ - 0x38)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x38))+4)),(*(float *)(fr0_ - 0x28)));
          dVar10 = CONCAT44D((*(float *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x28)));
        }
        else {
          (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          dVar10 = in_xd0;
          (*(double *)(fr0_ - 0x38)) = in_xd0;
          (*(float *)(fr0_ - 0x3c)) = (*(float *)(fr0_ - 0x2c));
        }
        (*(float *)(fr0_ - 0x40)) = CONCAT44((*(float *)(fr0_ - 0x3c)),(*(float *)(fr0_ - 0x30)));
        (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length_sq(&(*(float *)(fr0_ - 0x40)),ar5_01,ar6,ar7));
        uVar3 = SUB84(in_dr0,0);
        if (cVar13 == '\0') {
          dVar7 = CONCAT44D(0x443b8000,(int)(D2U(dVar10) >> 0x20));
        }
        else {
          dVar7 = -7.937140160381387e-251;
          in_xd0 = dVar10;
        }
        if (cVar12 == '\0' && SUB84(dVar7,0) < F32HI(dVar7)) {
          (vsp = ((unsigned long)(fr0_ - 80)), Vec3_length(&(*(float *)(fr0_ - 0x30)),ar5_01,ar6,ar7));
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x43320000,SUB84(dVar7,0));
          }
          else {
            dVar7 = 1.3023403680263821e+22;
          }
          fVar5 = F32HI(dVar7);
          if (cVar12 == '\0') {
            in_dr14 = CONCAT44D(F32HI(in_dr14) - fVar5,SUB84(in_dr14,0))
            ;
          }
          else {
            in_dr14 = in_dr14 - dVar7;
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(fVar5,0x44348000);
          }
          else {
            in_xd0 = 0.008437501388982582;
          }
          fVar5 = F32HI(in_dr14);
          if (cVar12 == '\0') {
            fVar6 = F32LO(dVar7) - fVar5;
          }
          else {
            fVar6 = SUB84(dVar7 - in_dr14,0);
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x44348000,fVar6);
          }
          else {
            dVar7 = 0.008437501388982582;
          }
          if (cVar12 == '\0') {
            fVar6 = F32LO(dVar7) / F32HI(dVar7);
          }
          else {
            fVar6 = SUB84(dVar7 / dVar7,0);
          }
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x3f8147ae,fVar6);
          }
          else {
            dVar7 = 5.377642808889976e-19;
          }
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar7),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 - dVar7;
          }
          dVar10 = dVar7;
          dVar8 = dVar7;
          if (cVar13 == '\0') {
            uVar9 = (uint)(D2U(dVar7) >> 0x20);
            in_dr14 = CONCAT44D(fVar5,uVar9);
            dVar7 = (double)(ulonglong)uVar9;
            dVar10 = in_xd0;
            dVar8 = in_xd14;
          }
          in_xd14 = dVar8;
          if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
            if (cVar13 == '\0') {
              in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),0x3c23d70a);
            }
            else {
              in_xd14 = 134217758.07;
            }
          }
          fVar5 = F32LO(in_dr14);
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D((*(float *)(fr0_ - 0x30)),uVar3);
            dVar8 = CONCAT44D(fVar5,0x41a00000);
          }
          else {
            dVar7 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar10 = -1.362436379967432e-249;
            dVar8 = in_xd14;
          }
          if (cVar12 == '\0') {
            dVar7 = CONCAT44D(F32HI(dVar7) *
                                     F32HI(dVar8) * F32LO(dVar8),
                                     SUB84(dVar7,0));
          }
          else {
            dVar7 = dVar7 * dVar8 * dVar8;
          }
          (*(float *)(fr0_ - 0x30)) = SUB84(dVar7,0);
          fVar6 = F32HI(dVar7);
          if (cVar13 == '\0') {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
            dVar7 = CONCAT44D(fVar5,0x41a00000);
            (*(float *)(fr0_ - 0x30)) = fVar6;
          }
          else {
            in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar6);
            dVar10 = -1.362436379967432e-249;
            dVar7 = in_xd14;
          }
          if (cVar12 == '\0') {
            in_dr0 = CONCAT44D(F32HI(in_dr0) *
                                      F32HI(dVar7) * F32LO(dVar7),
                                      SUB84(in_dr0,0));
          }
          else {
            in_dr0 = in_dr0 * dVar7 * dVar7;
          }
          fVar6 = F32HI(in_dr0);
          if (cVar13 == '\0') {
            dVar7 = CONCAT44D(0x41a00000,(*(float *)(fr0_ - 0x28)));
            in_xd0 = dVar10;
            (*(float *)(fr0_ - 0x2c)) = fVar6;
          }
          else {
            (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr0,0);
            in_xd0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar6);
            dVar7 = -1.362436379967432e-249;
          }
          fVar6 = F32HI(dVar7);
          if (cVar12 == '\0') {
            fVar5 = fVar5 * fVar6;
            in_dr14 = (double)(ulonglong)(uint)fVar5;
            dVar7 = CONCAT44D(fVar6,F32LO(dVar7) * fVar5);
          }
          else {
            in_dr14 = in_dr14 * dVar7;
            dVar7 = dVar7 * in_dr14;
          }
          if (cVar13 == '\0') {
            (*(float *)(fr0_ - 0x28)) = SUB84(dVar7,0);
          }
          else {
            (*(float *)(fr0_ - 0x28)) = SUB84(in_xd0,0);
            (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
          }
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c023bf4(&(*(float *)(fr0_ - 0x30)),((undefined1 *)(unsigned)0x8c438264),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x9c))))(ar4_00,&(*(float *)(fr0_ - 0x30)),ar6,ar7));
          ar5_01 = ((float *)(fr0_ - 0x4c));
          (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xa0))))(ar4_00,ar5_01,ar6,ar7));
        }
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), list_node_next(ar4_00,ar5_01,ar6,ar7));
    }
    dVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    if (cVar13 == '\0') {
      dVar7 = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c438264) & 0xffffffff);
      dVar10 = in_xd0;
    }
    dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    if (cVar12 == '\0' && SUB84(dVar7,0) < 1.0) {
      if (cVar13 == '\0') {
        dVar7 = CONCAT44D(0x3dcccccd,SUB84((*(undefined4 *)(unsigned)(unsigned)0x8c438264),0));
      }
      else {
        dVar7 = -1.2971028142978771e-250;
        dVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
      }
      if (cVar12 == '\0') {
        fVar5 = F32LO(dVar7) + F32HI(dVar7);
      }
      else {
        fVar5 = SUB84(dVar7 + dVar7,0);
      }
      dVar8 = dVar10;
      if (cVar13 == '\0') {
        (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c438268),fVar5);
        dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
      }
    }
  }
  else {
    dVar8 = (double)(D2U(dVar7) & 0xffffffff);
    if (cVar13 == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = (double)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c438264) & 0xffffffff00000000);
      dVar8 = (*(undefined4 *)(unsigned)(unsigned)0x8c438264);
    }
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c438264) = dVar8;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db7d4(ar4,1,ar6,ar7));
  uVar3 = 3;
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0db7d4(ar4,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0d0a44(ar4 + 0x4edc,uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), object_dtor_delete(((float *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(float *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 80)), Vec3_dtor(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c0e0f48\n.set _FUN_8c0e0f48, _FUN_8c0e0f48_def\n");
//@unit 8c0e130c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e130c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e130c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e1314);
}

__asm__(".globl _FUN_8c0e130c\n.set _FUN_8c0e130c, _FUN_8c0e130c_def\n");
//@unit 8c0e1318
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_14_0e1318_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_14_0e1318";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x14);
}

__asm__(".globl _get_field_14_0e1318\n.set _get_field_14_0e1318, _get_field_14_0e1318_def\n");
//@unit 8c0e1320
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e1320_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e1320";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0e1320\n.set _FUN_8c0e1320, _FUN_8c0e1320_def\n");
//@unit 8c0e132c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e132c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e132c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0910(ar4 + 0x13b70,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db7d4(ar4,1,ar6,ar7));
  uVar1 = 3;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db7d4(ar4,3,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0a44(ar4 + 0x13b70,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e132c\n.set _FUN_8c0e132c, _FUN_8c0e132c_def\n");
//@unit 8c0e1398
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e1398_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e1398";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 in_dr0 = 0;
  undefined4 uVar5;
  undefined8 uVar4;
  char cVar6;
  char cVar7;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar2 = ar4 + 0x22eb4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d3d6c(ar4 + 0x10ac,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7));
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x2300c),uVar5);
  }
  else {
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x2300c);
  }
  if (cVar6 == '\0' && (float)uVar4 < F32HI(uVar4)) {
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0d1c(ar4 + 0x13b8c,uVar2,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101154(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar2,ar6,ar7));
  if (ar4_00 == 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,uVar2,ar6,ar7));
    ar4_00 = 0;
    if (iVar1 != 0) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,uVar2,ar6,ar7));
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_b8_101178(*(undefined4 *)(unsigned)(ar5 + 0x7cc),uVar2,ar6,ar7));
        uVar2 = uVar2 & 0xff;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8) + 0x50))))(*(int *)(unsigned)(ar4_00 + 8),uVar2,ar6,ar7))
        ;
        ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,uVar2,ar6,ar7));
      }
    }
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0e1398\n.set _FUN_8c0e1398, _FUN_8c0e1398_def\n");
//@unit 8c0e14d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e14d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e14d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1060(ar4 + 0x13b8c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e14d8\n.set _FUN_8c0e14d8, _FUN_8c0e14d8_def\n");
//@unit 8c0e14fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e14fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e14fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b14(ar4 + 0x1074,ar5,ar6,ar7));
  ar4_00 = ar4 + 0x107c;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b14(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f14(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b14(ar4 + 0x1078,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b14(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e14fc\n.set _FUN_8c0e14fc, _FUN_8c0e14fc_def\n");
//@unit 8c0e157c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e157c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e157c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7));
  ar4_00 = ar4 + 0x107c;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235f14(ar4_00,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e157c\n.set _FUN_8c0e157c, _FUN_8c0e157c_def\n");
//@unit 8c0e15fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e15fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e15fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x106c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x107c,ar5,ar6,ar7));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c019058(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x1074,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x1078,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e15fc\n.set _FUN_8c0e15fc, _FUN_8c0e15fc_def\n");
//@unit 8c0e1698
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e16a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e16a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint a7;
  code *pcVar6;
  int *piVar7;
  code *ar7_00;
  uint uVar8;
  undefined4 in_fr1 = 0;
  char cVar9;
  
  cVar9 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 160)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((int *)(fr0_ - 0x38)) + 2,uVar3,ar6,ar7));
  ((int *)(fr0_ - 0x38))[1] = 0;
  ((int *)(fr0_ - 0x38))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 160)), report_error_message(((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13fe45),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 160)), report_error_message(((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13fe6b),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x30,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  uVar5 = 5;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c239170(0x8c437554,0x8c43755c,0x8c4312a8,5));
  for (uVar8 = 0; uVar8 < 5; uVar8 = uVar8 + 1) {
    uVar5 = 0x8c43755c;
    *(uint *)(unsigned)(uVar8 * 0xc + -0x73bc8aa0) = *(uint *)(unsigned)(uVar8 * 0xc + -0x73bc8aa0) | 0x80000000;
  }
  ar5_00 = 0x8c437554;
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437554,uVar3,uVar5));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,uVar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13fe91),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe9c),((undefined1 *)(unsigned)0x8c13fec0),0,2)
    ;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x1074,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x1078,((int *)(fr0_ - 0x38))[0],0x1078,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x107c,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  a7 = 3;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c239170(ar4 + 0x1080,ar4 + 0x1088,0x8c4312a8,3));
  uVar8 = 0;
  while (uVar8 < 3) {
    *(uint *)(unsigned)(uVar8 * 0xc + ar4 + 0x108c) = *(uint *)(unsigned)(uVar8 * 0xc + ar4 + 0x108c) | 0x80000000;
    a7 = uVar8 + 1;
    uVar8 = a7;
  }
  iVar1 = ar4 + 0x1080;
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x106c) + 8))))((int *)(unsigned)(ar4 + 0x106c),iVar1,3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x106c,iVar1,((void *)0x8c0253e4),ar4 + 0x106c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13feda),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13feea),((undefined1 *)(unsigned)0x8c13fec0),0,2
              );
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13fe45),0,2);
  }
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x3c))));
  if (iVar1 == 0) {
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13fe6b),0,2);
  }
  pcVar6 = ((void *)0x8c015ad4);
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c015ad4(ar4 + 0x226f8,((int *)(fr0_ - 0x38))[0],pcVar2,((void *)0x8c015ad4)));
  uVar3 = (*(undefined4 *)(fr0_ - 0x3c));
  uVar5 = (*(undefined4 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x226fc) + 8))))((int *)(unsigned)(ar4 + 0x226fc),(*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x3c)),pcVar6));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x226fc,uVar3,uVar5,pcVar6));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13ff14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13ff14),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = ((undefined1 *)(unsigned)0x8c13fec0);
    report_error_message
              (((undefined1 *)(unsigned)0x8c13ff20),((undefined1 *)(unsigned)0x8c13fec0),0,2)
    ;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x22d40,pcVar2,((void *)0x8c0253e4),uVar3));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13ff45),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13ff50),((undefined1 *)(unsigned)0x8c13fec0),0,2);
  }
  piVar7 = ((int *)(fr0_ - 0x38));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe31),((undefined1 *)(unsigned)0x8c13f8cb),piVar7));
  if (iVar1 == 0) {
    piVar7 = (int *)(unsigned)0x2;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe31),((undefined1 *)(unsigned)0x8c13fe45),0,2);
  }
  uVar3 = 0x2274c;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0178b4(ar4 + 0x2274c,*(undefined4 *)(unsigned)(((int *)(fr0_ - 0x38))[0] + 4),0x2274c,piVar7));
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d0006(ar4 + 0x13b24,ar5,uVar3,piVar7));
  pcVar6 = ((void *)0x8c0d07ec);
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d07f2(ar4 + 0x13b70,ar5,uVar3,((void *)0x8c0d07ec)));
  uVar3 = 0x22704;
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d93b0(ar4 + 0x22704,ar5,0x22704,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,uVar3,pcVar6));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    uVar3 = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0x80;
    uVar3 = 0xc23c0000;
    (*(undefined4 *)(fr0_ - 0x20)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  ((int *)(fr0_ - 0x38))[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
  }
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x227d0,((int *)(fr0_ - 0x38)) + 2,pcVar6));
  if (cVar9 != '\0') {
    uVar3 = 0x423c0000;
  }
  ((int *)(fr0_ - 0x38))[2] = 0x423c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x24));
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(puVar4,ar4 + 0x227e0,((int *)(fr0_ - 0x38)) + 2,puVar4));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    uVar5 = uVar3;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0x80;
    uVar5 = 0xc23c0000;
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  ((int *)(fr0_ - 0x38))[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar5;
  }
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x227f0,((int *)(fr0_ - 0x38)) + 2,puVar4));
  (*(undefined4 *)(fr0_ - 0x28)) = uVar5;
  if (cVar9 != '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0x423c0000;
  }
  ((int *)(fr0_ - 0x38))[2] = 0x423c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
  }
  ar7_00 = ((void *)0x8c0d167c);
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x22800,((int *)(fr0_ - 0x38)) + 2,((void *)0x8c0d167c)));
  pcVar6 = (code *)0x0;
  while (pcVar6 < (code *)0x3) {
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d70e4(ar4 + (int)pcVar6 * 0x16c + 0x22d48,(int)pcVar6 * 0x16c,3,ar7_00));
    ar7_00 = pcVar6 + 1;
    pcVar6 = ar7_00;
  }
  piVar7 = ((int *)(fr0_ - 0x38)) + 2;
  (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(piVar7,0xffffffff,piVar7,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,piVar7,ar7_00));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e16a0\n.set _s_GRAPHICS_ENV_0e16a0, _s_GRAPHICS_ENV_0e16a0_def\n");
//@unit 8c0e1f90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e1f90_def(int ar4,undefined4 *ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e1f90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined8 *puVar2;
  double *pdVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined4 *puVar6;
  float fVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  bool bVar11;
  undefined4 in_PR = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (*(undefined4 *)(fr0_ - 0x1c)) = 0;
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c43826c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT35((int3)((*(undefined4 *)(unsigned)(unsigned)0x8c438268) >> 0x28),0x100000000);
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0;
  if ((*(undefined1 *)(unsigned)0x8c438270) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = (*(undefined4 *)(unsigned)(unsigned)0x8c438268) & 0xffffffffffff;
    (*(undefined1 *)(unsigned)0x8c438270) = '\x01';
  }
  puVar6 = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc61c(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1003b0(ar5,puVar6,ar6,ar7));
  if ((iVar1 != 1) && (*(int *)(unsigned)(ar4 + 0x9d8) != 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x9d8) = 0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100ce8(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))(*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
  }
  puVar6 = &(*(undefined4 *)(fr0_ - 0x28));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100e4c(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))(*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7))
    ;
  }
  else {
    puVar6 = &(*(undefined4 *)(fr0_ - 0x28));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100e4c(ar5,puVar6,ar6,ar7));
    if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                (*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
  puVar6 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c10031c(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 200))))
                      (*(int *)(unsigned)(ar4 + 0x9d4),puVar6,ar6,ar7));
    if (iVar1 == 1) {
      puVar6 = ar5;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4298(ar4,ar5,ar6,ar7));
    }
    else {
      puVar6 = (undefined4 *)(unsigned)0x2;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021720(0x8c2b59d0,2,ar6,ar7));
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1003b0(ar5,puVar6,ar6,ar7));
  if (((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d8) != 0)) && (*(int *)(unsigned)(ar4 + 0x9d4) == 0)) {
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 8);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*puVar2;
    }
    puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
    if (cVar13 == '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)puVar2;
    }
    else {
      uVar8 = *puVar2;
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)uVar8;
      (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)uVar8 >> 0x20);
    }
    ar6 = ((undefined1 *)(fr0_ - 0x30));
    puVar6 = &(*(undefined4 *)(fr0_ - 0x18));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c256294(0,puVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c90d0(ar5,puVar6,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d723c(ar4 + 0x22d48,puVar6,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x9d8) == 0) || (*(int *)(unsigned)(ar4 + 0x9d8) == ar4 + 0x22d48)) {
    if (*(int *)(unsigned)(ar4 + 0x9d8) == ar4 + 0x22d48) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100850(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7));
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100874(ar5,puVar6,ar6,ar7));
        if (iVar1 == 1) {
          (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0d74cc(ar4 + 0x22d48,puVar6,ar6,ar7));
        }
      }
      if (cVar13 == '\0') {
        uVar8 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x22d74),(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
      }
      else {
        uVar8 = *(undefined8 *)(unsigned)(ar4 + 0x22d74);
      }
      if (((float)uVar8 != F32HI(uVar8)) && ((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) == 0)) {
        (*(undefined4 *)(fr0_ - 0x24)) = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c02190c(0x8c2b59d0,puVar6,ar6,ar7));
        ar6 = (undefined1 *)(unsigned)0x10;
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021994(0x8c2b59d0,(*(undefined4 *)(fr0_ - 0x24)),0x10,ar7));
        puVar6 = &(*(undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c021a8c(0x8c2b59d0,puVar6,ar6,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT26(8,(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
      }
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100808(ar5,puVar6,ar6,ar7));
    if (iVar1 == 1) {
      pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 - dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
      if (cVar13 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *pdVar3;
      }
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = -1.701787568380408e+78;
      }
      if (cVar12 == '\0') {
        bVar11 = F32HI(in_dr2) <
                 F32LO(dVar9) - F32HI(dVar9);
      }
      else {
        bVar11 = in_dr2 < dVar9 - dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.701787568380408e+78;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c10082c(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
        if (cVar13 == '\0') {
          in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *pdVar3;
        }
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          bVar11 = F32LO(dVar9) + F32HI(dVar9) <
                   F32HI(in_dr2);
        }
        else {
          bVar11 = dVar9 + dVar9 < in_dr2;
        }
        if (bVar11) {
          pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0xc);
          puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x1c);
          if (cVar13 == '\0') {
            dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = -1.3995363365918915e-250;
          }
          if (cVar12 == '\0') {
            fVar7 = F32LO(dVar9) + F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 + dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)pfVar5 = in_xd0;
          }
        }
      }
    }
    uVar4 = SUB84(in_dr2,0);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100850(ar5,puVar6,ar6,ar7));
    if (iVar1 == 1) {
      pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar9 = 3848291215769.6;
      }
      if (cVar12 == '\0') {
        fVar7 = F32LO(dVar9) + F32HI(dVar9);
      }
      else {
        fVar7 = SUB84(dVar9 + dVar9,0);
      }
      if (cVar13 == '\0') {
        *pfVar5 = fVar7;
      }
      else {
        *(undefined8 *)(unsigned)pfVar5 = in_xd0;
      }
      pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar4);
      }
      else {
        dVar9 = *pdVar3;
      }
      puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
      if (cVar13 == '\0') {
        dVar10 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
      }
      else {
        in_xd0 = *puVar2;
        dVar10 = -1.3995363365918915e-250;
      }
      if (cVar12 == '\0') {
        bVar11 = F32LO(dVar10) + F32HI(dVar10) <
                 F32HI(dVar9);
      }
      else {
        bVar11 = dVar10 + dVar10 < dVar9;
      }
      if (bVar11) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = -1.3995363365918915e-250;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c100874(ar5,puVar6,ar6,ar7));
      if (iVar1 == 1) {
        pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar9 = 3848291215769.6;
        }
        if (cVar12 == '\0') {
          fVar7 = F32LO(dVar9) - F32HI(dVar9);
        }
        else {
          fVar7 = SUB84(dVar9 - dVar9,0);
        }
        if (cVar13 == '\0') {
          *pfVar5 = fVar7;
        }
        else {
          *(undefined8 *)(unsigned)pfVar5 = in_xd0;
        }
        pdVar3 = (double *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,uVar4);
        }
        else {
          dVar9 = *pdVar3;
        }
        puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
        if (cVar13 == '\0') {
          dVar10 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
        }
        else {
          in_xd0 = *puVar2;
          dVar10 = 9.880610002640478e-290;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar9) <
                   F32LO(dVar10) - F32HI(dVar10);
        }
        else {
          bVar11 = dVar9 < dVar10 - dVar10;
        }
        if (bVar11) {
          pfVar5 = (float *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 4);
          puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d8) + 0x14);
          if (cVar13 == '\0') {
            dVar9 = CONCAT44D(0x428c0000,*(undefined4 *)(unsigned)puVar2);
          }
          else {
            in_xd0 = *puVar2;
            dVar9 = 9.880610002640478e-290;
          }
          if (cVar12 == '\0') {
            fVar7 = F32LO(dVar9) - F32HI(dVar9);
          }
          else {
            fVar7 = SUB84(dVar9 - dVar9,0);
          }
          if (cVar13 == '\0') {
            *pfVar5 = fVar7;
          }
          else {
            *(undefined8 *)(unsigned)pfVar5 = in_xd0;
          }
        }
      }
    }
  }
  if (cVar13 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c43826c),*(undefined4 *)(unsigned)(ar4 + 0x22d74));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = *(undefined8 *)(unsigned)(ar4 + 0x22d74);
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) != 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438268) = CONCAT26((*(undefined4 *)(unsigned)(unsigned)0x8c43826e) + -1,(*(undefined4 *)(unsigned)(unsigned)0x8c438268));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e2554(ar5,puVar6,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d8) == 0)) {
    puVar6 = ar5;
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e4348(ar4,ar5,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0e252c(ar5,puVar6,ar6,ar7));
  if (iVar1 == 1) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_cc_0dfee8(ar5,puVar6,ar6,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01f528(uVar4,puVar6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01d9e0(uVar4,puVar6,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e1f90\n.set _FUN_8c0e1f90, _FUN_8c0e1f90_def\n");
//@unit 8c0e252c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e252c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e252c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01edcc(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e252c\n.set _FUN_8c0e252c, _FUN_8c0e252c_def\n");
//@unit 8c0e2554
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e2554_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e2554";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (((iVar1 == 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                         (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 1)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e2554\n.set _FUN_8c0e2554, _FUN_8c0e2554_def\n");
//@unit 8c0e25c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e25c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e25c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *ar5_00;
  int iVar4;
  
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  if (*(int *)(unsigned)(ar4 + 0xac8) != 0) {
    uVar3 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 0xac8),ar5,ar6,ar7));
    if (((iVar1 == 3) || (iVar1 == 5)) || (iVar1 == 7)) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 0x84))))(*(int *)(unsigned)(ar4 + 0xac8),0,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100cb4(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,uVar3,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,uVar3,ar6,ar7));
      for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
        uVar3 = 2;
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x84))))(a4,2,ar6,ar7));
        a4 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(a4,uVar3,ar6,ar7));
      }
    }
    ar5_00 = ((undefined4 *)(fr0_ - 0x20));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    else {
      ar5_00 = ((undefined4 *)(fr0_ - 0x20));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
      if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                  (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100ce8(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
    uVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c10031c(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 200))))
                        (*(int *)(unsigned)(ar4 + 0xac8),uVar3,ar6,ar7));
      if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) == *(int *)(unsigned)(ar4 + 0xac8))) {
        uVar3 = ar5;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e4298(ar4,ar5,ar6,ar7));
        for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e2838(ar4 + iVar1 * 0x16c + 0x22d48,0,ar6,ar7));
        }
      }
      else {
        uVar3 = 2;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c021720(0x8c2b59d0,2,ar6,ar7));
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e252c(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_cc_0dfee8(ar5,uVar3,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01f528(uVar2,uVar3,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01d9e0(uVar2,uVar3,ar6,ar7));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e25c0\n.set _FUN_8c0e25c0, _FUN_8c0e25c0_def\n");
//@unit 8c0e2838
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e2838_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e2838";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x160;
  *(undefined4 *)(unsigned)(0x160 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e2838\n.set _FUN_8c0e2838, _FUN_8c0e2838_def\n");
//@unit 8c0e2844
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e2844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e2844";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0dc548(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e2838(ar4 + iVar1 * 0x16c + 0x22d48,0,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e2844\n.set _FUN_8c0e2844, _FUN_8c0e2844_def\n");
//@unit 8c0e28a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e28a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e28a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  float fVar2;
  undefined8 in_dr0 = 0;
  undefined4 uVar5;
  double dVar3;
  float fVar6;
  double dVar4;
  undefined4 uVar7;
  double in_dr2 = 0;
  char cVar8;
  char cVar9;
  
  uVar5 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b20(ar5,ar5,ar6,ar7));
  uVar7 = SUB84(in_dr2,0);
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa70),uVar7);
      dVar3 = CONCAT44D(0x40000000,uVar5);
    }
    else {
      in_dr2 = *(double *)(unsigned)(ar4 + 0xa70);
      dVar3 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      fVar6 = F32HI(dVar3);
      fVar2 = F32LO(dVar3) * fVar6;
      dVar3 = CONCAT44D(fVar6,fVar2);
      in_dr2 = CONCAT44D(F32HI(in_dr2) + fVar2,SUB84(in_dr2,0));
    }
    else {
      dVar3 = dVar3 * dVar3;
      in_dr2 = in_dr2 + dVar3;
    }
    uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa70) = in_dr2;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100b84(ar5,ar5_00,ar6,ar7));
    uVar7 = SUB84(in_dr2,0);
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc27c(ar5,ar5_00,ar6,ar7));
      if (cVar9 == '\0') {
        in_dr2 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa70),uVar7);
        dVar3 = CONCAT44D(0x40000000,uVar5);
      }
      else {
        in_dr2 = *(double *)(unsigned)(ar4 + 0xa70);
        dVar3 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        fVar6 = F32HI(dVar3);
        fVar2 = F32LO(dVar3) * fVar6;
        dVar3 = CONCAT44D(fVar6,fVar2);
        in_dr2 = CONCAT44D(F32HI(in_dr2) + fVar2,SUB84(in_dr2,0));
      }
      else {
        dVar3 = dVar3 * dVar3;
        in_dr2 = in_dr2 + dVar3;
      }
      uVar5 = (undefined4)(D2U(dVar3) >> 0x20);
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0xa70) = (int)((ulonglong)in_dr2 >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xa70) = in_dr2;
      }
    }
  }
  uVar7 = SUB84(in_dr2,0);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100be8(ar5,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,ar5_00,ar6,ar7));
    if (cVar9 == '\0') {
      dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa68),uVar7);
      dVar4 = CONCAT44D(0x40000000,uVar5);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 0xa68);
      dVar4 = -1.400628561984079e-250;
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(F32HI(dVar3) +
                               F32LO(dVar4) * F32HI(dVar4),SUB84(dVar3,0));
    }
    else {
      dVar3 = dVar3 + dVar4 * dVar4;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0xa68) = (int)(D2U(dVar3) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa68) = dVar3;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c100c34(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc26c(ar5,ar5_00,ar6,ar7));
      if (cVar9 == '\0') {
        dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xa68),uVar7);
        dVar4 = CONCAT44D(0x40000000,uVar5);
      }
      else {
        dVar3 = *(double *)(unsigned)(ar4 + 0xa68);
        dVar4 = -1.400628561984079e-250;
      }
      if (cVar8 == '\0') {
        dVar3 = CONCAT44D(F32HI(dVar3) +
                                 F32LO(dVar4) * F32HI(dVar4),SUB84(dVar3,0));
      }
      else {
        dVar3 = dVar3 + dVar4 * dVar4;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0xa68) = (int)(D2U(dVar3) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0xa68) = dVar3;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dc558(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e28a0\n.set _FUN_8c0e28a0, _FUN_8c0e28a0_def\n");
//@unit 8c0e29dc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e29dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e29dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e2554(ar5,ar5,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e4348(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e29dc\n.set _FUN_8c0e29dc, _FUN_8c0e29dc_def\n");
//@unit 8c0e2a14
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e2a14_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e2a14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  double in_dr0 = 0;
  double dVar6;
  undefined4 in_fr3 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar5 = 0;
  uVar4 = 0x80;
  iVar1 = ar4[0x409];
  if (iVar1 == 0) {
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e31e8(ar5,uVar3,ar6,ar7));
    if (iVar1 == 1) {
      ar4[0x409] = 1;
      piVar2 = ar4 + 0x412;
      if (cVar9 == '\0') {
        *piVar2 = 0x43df8000;
        in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar2[0] = 0x43df8000;
        piVar2[1] = 0x1050;
        in_dr0 = 8.86201702588265e-311;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
        ar4[0x409] = 1;
        piVar2 = ar4 + 0x412;
        if (cVar9 == '\0') {
          *piVar2 = 0x43df8000;
          in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
          ar4[0x414] = 0x43df8000;
        }
        else {
          piVar2[0] = 0x43df8000;
          piVar2[1] = 0x1050;
          in_dr0 = 8.86201702588265e-311;
          ar4[0x414] = 0x43df8000;
          ar4[0x415] = 0x1050;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar3,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
          ar4[0x409] = 1;
          piVar2 = ar4 + 0x412;
          if (cVar9 == '\0') {
            *piVar2 = 0x43df8000;
            in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
            ar4[0x414] = 0x43df8000;
          }
          else {
            piVar2[0] = 0x43df8000;
            piVar2[1] = 0x1050;
            in_dr0 = 8.86201702588265e-311;
            ar4[0x414] = 0x43df8000;
            ar4[0x415] = 0x1050;
          }
        }
      }
    }
  }
  else {
    uVar3 = ar5;
    if (iVar1 == 1) {
      in_dr0 = CONCAT44D(0x43c58000,ar4[0x412]);
      if (((float)ar4[0x412] == 395.0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30f0(ar5,ar5,ar6,ar7)), iVar1 == 1)) {
        ar4[0x409] = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,ar5,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = ar4[0x408];
        if (iVar1 == 0) {
          ar4[0x408] = 1;
        }
        else if (iVar1 == 1) {
          ar4[0x408] = 3;
        }
        else if (iVar1 == 3) {
          ar4[0x408] = 0;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar3,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = ar4[0x408];
          if (iVar1 == 0) {
            ar4[0x408] = 3;
          }
          else if (iVar1 == 1) {
            ar4[0x408] = 0;
          }
          else if (iVar1 == 3) {
            ar4[0x408] = 1;
          }
        }
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30c8(ar5,uVar3,ar6,ar7));
  if (iVar1 == 1) {
    ar4[0x409] = 3;
  }
  if (ar4[0x409] == 2) {
    if (ar4[0x408] == 3) {
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    }
    if ((ar4[0x408] == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30a0(ar5,uVar3,ar6,ar7)), iVar1 == 1)) {
      if ((ar4[0x8a04] == 1) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 1;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 1)) {
        ar4[0x8a04] = 0;
        ar4[0x8a05] = 0;
      }
      else if ((ar4[0x8a04] == 0) && (ar4[0x8a05] == 0)) {
        ar4[0x8a04] = 1;
        ar4[0x8a05] = 1;
      }
      if ((ar4[0x8a04] == 1) || (ar4[0x8a05] == 1)) {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d4f3c(ar4 + 0x42b,uVar3,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d4f70(ar4 + 0x42b,uVar3,ar6,ar7));
      }
      uVar5 = 0x80;
      uVar4 = 0xff;
      ((undefined4 *)(fr0_ - 0x18))[0] = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02190c(0x8c2b59d0,uVar3,ar6,ar7));
      uVar3 = 3;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18))[0],3,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18)),uVar3,ar7));
    }
    else if (ar4[0x408] == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3078(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        uVar3 = 1;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,1,ar6,ar7));
        uVar5 = 0x80;
        uVar4 = 0xff;
      }
      else {
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
    }
    else if (ar4[0x408] == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3050(ar5,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x158))))(ar4,uVar3,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023040(ar4 + 0x8bae,uVar3,ar6,ar7));
        if (cVar9 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar6 = CONCAT44D(0x3f400000,ar4[0x8c03]);
        }
        else {
          dVar6 = 3.03505338272344e-309;
        }
        if (cVar8 == '\0') {
          bVar7 = F32HI(in_dr0) <
                  F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          bVar7 = in_dr0 < dVar6 * dVar6;
        }
        uVar5 = 0x80;
        uVar4 = 0xff;
        if (bVar7) {
          (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7508(ar4 + 0x8bad,uVar3,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x15c))))(ar4,uVar3,ar6,ar7));
        uVar5 = 0;
        uVar4 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x4ec9,0,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (ar4[0x409] != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x417) = uVar5;
    *(undefined2 *)(unsigned)(ar4 + 0x418) = uVar5;
    *(undefined2 *)(unsigned)(ar4 + 0x419) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x41a) = uVar4;
    iVar1 = ar4[0x408];
    if (iVar1 == 0) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x40;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x20;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 1) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x60;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x40;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x40;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x60;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x20;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0;
      *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x20;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e2a14\n.set _FUN_8c0e2a14, _FUN_8c0e2a14_def\n");
//@unit 8c0e3050
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3050";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f2b4))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e3050\n.set _FUN_8c0e3050, _FUN_8c0e3050_def\n");
//@unit 8c0e3078
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3078_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f2b4))))
                    (*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e3078\n.set _FUN_8c0e3078, _FUN_8c0e3078_def\n");
//@unit 8c0e30a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e30a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e30a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e30a0\n.set _FUN_8c0e30a0, _FUN_8c0e30a0_def\n");
//@unit 8c0e30c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e30c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e30c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f270(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e30c8\n.set _FUN_8c0e30c8, _FUN_8c0e30c8_def\n");
//@unit 8c0e30f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e30f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e30f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (((iVar1 != 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f0d0(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 != 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1a4(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e30f0\n.set _FUN_8c0e30f0, _FUN_8c0e30f0_def\n");
//@unit 8c0e3150
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3150_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3150";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1e8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e3150\n.set _FUN_8c0e3150, _FUN_8c0e3150_def\n");
//@unit 8c0e319c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e319c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e319c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f118(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e319c\n.set _FUN_8c0e319c, _FUN_8c0e319c_def\n");
//@unit 8c0e31e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e31e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e31e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e31e8\n.set _FUN_8c0e31e8, _FUN_8c0e31e8_def\n");
//@unit 8c0e3210
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e3210_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  double in_dr0 = 0;
  double dVar5;
  undefined4 in_fr3 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar4 = 0;
  uVar3 = 0x80;
  iVar1 = *(int *)(unsigned)(ar4 + 0x1024);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e31e8(ar5,uVar2,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
        in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
        *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
        in_dr0 = 8.86201702588265e-311;
        *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
      }
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
        if (cVar8 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
          in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
          in_dr0 = 8.86201702588265e-311;
          *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x1024) = 1;
          if (cVar8 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
            in_dr0 = CONCAT44D(0x43df8000,SUB84(in_dr0,0));
            *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x1048) = 0x105043df8000;
            in_dr0 = 8.86201702588265e-311;
            *(undefined8 *)(unsigned)(ar4 + 0x1050) = 0x105043df8000;
          }
        }
      }
    }
  }
  else {
    uVar2 = ar5;
    if (iVar1 == 1) {
      in_dr0 = CONCAT44D(0x43c58000,*(float *)(unsigned)(ar4 + 0x1048));
      if ((*(float *)(unsigned)(ar4 + 0x1048) == 395.0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30f0(ar5,ar5,ar6,ar7)), iVar1 == 1)
         ) {
        *(undefined4 *)(unsigned)(ar4 + 0x1024) = 2;
      }
    }
    else if (iVar1 == 2) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e319c(ar5,ar5,ar6,ar7));
      if (iVar1 == 1) {
        iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
        if (iVar1 == 0) {
          if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
        }
        else if (iVar1 == 3) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
        }
        else if (iVar1 == 4) {
          *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3150(ar5,uVar2,ar6,ar7));
        if (iVar1 == 1) {
          iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
          if (iVar1 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 3;
          }
          else if (iVar1 == 3) {
            if (*(int *)(unsigned)(ar4 + 0x226f4) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 4;
            }
            else {
              *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
            }
          }
          else if (iVar1 == 4) {
            *(undefined4 *)(unsigned)(ar4 + 0x1020) = 0;
          }
        }
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30c8(ar5,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x1024) = 3;
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    if (*(int *)(unsigned)(ar4 + 0x1020) == 3) {
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    }
    if ((*(int *)(unsigned)(ar4 + 0x1020) == 3) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e30a0(ar5,uVar2,ar6,ar7)), iVar1 == 1)) {
      if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 1;
      }
      else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 0;
      }
      else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x22810) = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x22814) = 1;
      }
      uVar4 = 0x80;
      uVar3 = 0xff;
      ((undefined4 *)(fr0_ - 0x18))[0] = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02190c(0x8c2b59d0,uVar2,ar6,ar7));
      uVar2 = 3;
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18))[0],3,ar7));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021a8c(0x8c2b59d0,((undefined4 *)(fr0_ - 0x18)),uVar2,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3078(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,1,ar6,ar7));
        uVar4 = 0x80;
        uVar3 = 0xff;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
        uVar4 = 0;
        uVar3 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4 + 0x1020) == 4) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e3050(ar5,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = 1;
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c023040(ar4 + 0x22eb8,uVar2,ar6,ar7));
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
          dVar5 = CONCAT44D(0x3f400000,*(undefined4 *)(unsigned)(ar4 + 0x2300c));
        }
        else {
          dVar5 = 3.03505338272344e-309;
        }
        if (cVar7 == '\0') {
          bVar6 = F32HI(in_dr0) <
                  F32LO(dVar5) * F32HI(dVar5);
        }
        else {
          bVar6 = in_dr0 < dVar5 * dVar5;
        }
        uVar4 = 0x80;
        uVar3 = 0xff;
        if (bVar6) {
          (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d7508(ar4 + 0x22eb4,uVar2,ar6,ar7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
        uVar4 = 0;
        uVar3 = 0x80;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0d0538(ar4 + 0x13b24,0,ar6,ar7));
    }
  }
  iVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x105c) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x1060) = uVar4;
    *(undefined2 *)(unsigned)(ar4 + 0x1064) = uVar3;
    *(undefined2 *)(unsigned)(ar4 + 0x1068) = uVar3;
    iVar1 = *(int *)(unsigned)(ar4 + 0x1020);
    if (iVar1 == 0) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0x40;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0x20;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0x20;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0x40;
    }
    else if (iVar1 == 3) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0x20;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0x20;
    }
    else if (iVar1 == 4) {
      *(undefined2 *)(unsigned)(ar4 + 0x105e) = 0xa0;
      *(undefined2 *)(unsigned)(ar4 + 0x1062) = 0x80;
      *(undefined2 *)(unsigned)(ar4 + 0x1066) = 0x80;
      iVar1 = 0x106a;
      *(undefined2 *)(unsigned)(ar4 + 0x106a) = 0xa0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e3210\n.set _FUN_8c0e3210, _FUN_8c0e3210_def\n");
//@unit 8c0e389c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e389c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e389c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  float fVar2;
  
  puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x1024));
  if (puVar1 == (undefined4 *)(unsigned)0x1) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x1050) - 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar2;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar2;
    puVar1 = ((undefined4 *)(unsigned)0x8c0e398c);
    if (*(float *)(unsigned)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43c58000;
      puVar1 = (undefined4 *)(unsigned)0xc;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (puVar1 == (undefined4 *)(unsigned)0x3) {
    fVar2 = *(float *)(unsigned)(ar4 + 0x1050) + 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar2;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar2;
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c0e3990);
    if (447.0 <= *(float *)(unsigned)(ar4 + 0x1048)) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
      puVar1 = (undefined4 *)(unsigned)0x1024;
      *(undefined4 *)(unsigned)(ar4 + 0x1024) = 0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0e389c\n.set _FUN_8c0e389c, _FUN_8c0e389c_def\n");
//@unit 8c0e3994
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3994_def(int ar4,code *ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *a4;
  int iVar4;
  code *ar5_00;
  int iVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar9;
  double dVar8;
  double in_dr2 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0da588(ar4 + 0xa4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),ar5_00,ar6,ar7));
  if ((*(undefined1 *)(unsigned)0x8c438280) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_xyz(0x8c438284,ar5_00,ar6,ar7));
    ar6 = 0x8c438274;
    ar5_00 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 112)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c438274,ar7));
    (*(undefined1 *)(unsigned)0x8c438280) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4382a0) == '\0') {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_zero(0x8c4382a4,ar5_00,ar6,ar7));
    ar6 = 0x8c438294;
    ar5_00 = ((void *)0x8c022cb0);
    (vsp = ((unsigned long)(fr0_ - 112)), global_list_push(uVar2,((void *)0x8c022cb0),0x8c438294,ar7));
    (*(undefined1 *)(unsigned)0x8c4382a0) = '\x01';
  }
  iVar5 = 0;
  do {
    if (iVar1 <= iVar5) {
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
      return uVar2;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_24_05c284(ar4_00,ar5_00,ar6,ar7));
    if (iVar3 != 0xe) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c02f670(ar4_00,ar5_00,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0e3e98(ar4_00,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x13c))))(ar4_00,uVar2,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign(0x8c4382a4,((undefined1 *)(fr0_ - 0x6c)),ar6,ar7));
      ar5_00 = (code *)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || F32HI(uVar7) <= (float)uVar7) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)ar5;
        }
        if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
          iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xb4))))(ar4_00,ar5_00,ar6,ar7));
          fVar6 = F32HI(uVar7);
          if (iVar4 == 1) {
            iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x16c))))(ar4_00,ar5_00,ar6,ar7));
            if (iVar4 != 0) {
              a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x16c))))(ar4_00,ar5_00,ar6,ar7));
              iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x28))))(a4,ar5_00,ar6,ar7));
              if (iVar4 == 1) {
                (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                ar6 = 4;
                ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                ar7 = ar4_00;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,4,ar4_00));
                goto LAB_8c0e3d7e;
              }
            }
            if (iVar3 == 5) {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              ar6 = 3;
              ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
              ar7 = ar4_00;
              (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,3,ar4_00));
            }
            else {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 0.8;
              }
              else {
                fVar6 = 0.8;
                fVar9 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7));
                if (cVar12 == '\0') {
                  fVar6 = fVar9;
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                  ar6 = 3;
                  ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                  ar7 = ar4_00;
                  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,3,ar4_00));
                  goto LAB_8c0e3d7e;
                }
              }
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              if (cVar12 == '\0') {
                fVar6 = 0.8;
              }
              else {
                fVar9 = 0.8;
                fVar6 = -1.5061567e-31;
              }
              if (cVar11 == '\0' && fVar9 < fVar6) {
                ar5_00 = (code *)0x8c4382a4;
                (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c022dac(0x8c438284,0x8c4382a4,ar6,ar7));
                if (cVar12 == '\0') {
                  fVar9 = 10.0;
                }
                else {
                  fVar6 = 10.0;
                  fVar9 = 2.18603e-43;
                }
                if (cVar11 == '\0' && fVar6 < fVar9) {
                  (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
                  ar6 = 2;
                  ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
                  ar7 = ar4_00;
                  (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,2,ar4_00));
                  goto LAB_8c0e3d7e;
                }
              }
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
              ar6 = 0;
              ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
              ar7 = ar4_00;
              (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,0,ar4_00));
            }
          }
        }
      }
LAB_8c0e3d7e:
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x38)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
        }
        else {
          uVar7 = *(undefined8 *)(unsigned)ar5;
        }
        if ((cVar11 != '\0' || F32HI(uVar7) <= (float)uVar7) &&
           (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0xb4))))(ar4_00,ar5_00,ar6,ar7)), iVar4 == 1))
        {
          if (iVar3 == 5) {
            (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
            ar6 = 1;
            ar5_00 = (code *)((undefined1 *)(fr0_ - 0x3c));
            ar7 = ar4_00;
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,1,ar4_00));
          }
          goto LAB_8c0e3e34;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(*(undefined4 *)(unsigned)ar5,(*(undefined4 *)(fr0_ - 0x28)));
      }
      else {
        uVar7 = *(undefined8 *)(unsigned)ar5;
      }
      if (cVar11 != '\0' || (float)uVar7 <= F32HI(uVar7)) {
        if (cVar12 == '\0') {
          in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),SUB84(in_dr2,0));
          dVar8 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)ar5);
        }
        else {
          in_dr2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),(*(undefined4 *)(fr0_ - 0x28)));
          dVar8 = 5.94698645594833e-312;
        }
        if (cVar11 == '\0') {
          bVar10 = F32HI(in_dr2) <
                   F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          bVar10 = in_dr2 < dVar8 - dVar8;
        }
        if (!bVar10) {
          (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x118))))(ar4_00,ar5_00,ar6,ar7));
          ar6 = 0;
          ar5_00 = (code *)((undefined1 *)(fr0_ - 0x2c));
          ar7 = ar4_00;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0d4c74(ar5,ar5_00,0,ar4_00));
        }
      }
    }
LAB_8c0e3e34:
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 112)), list_node_next(ar4_00,ar5_00,ar6,ar7));
    iVar5 = iVar5 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0e3994\n.set _FUN_8c0e3994, _FUN_8c0e3994_def\n");
//@unit 8c0e3e98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3e98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3e98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x40,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e3e98\n.set _FUN_8c0e3e98, _FUN_8c0e3e98_def\n");
//@unit 8c0e3ebc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e3ebc_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3ebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f800000;
    *ar6 = 0x3e99999a;
    return ((undefined4 *)(unsigned)0x8c0e3f14);
  }
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    *ar5 = 0x3f666666;
    *ar6 = 0x3e3851ec;
    return ((undefined4 *)(unsigned)0x8c0e3f1c);
  }
  *ar5 = 0x3dcccccd;
  *ar6 = 0x3dcccccd;
  return ((undefined4 *)(unsigned)0x8c0e3f20);
}

__asm__(".globl _FUN_8c0e3ebc\n.set _FUN_8c0e3ebc, _FUN_8c0e3ebc_def\n");
//@unit 8c0e3f24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e3f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e3f24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = (fr0_ + (int)0xffffffd8);
  iVar1 = ar4;
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  if ((*(int *)(unsigned)(ar4 + 0x22810) == 1) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x227f8);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f8);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x227f8) >> 0x20);
    }
  }
  else if ((*(int *)(unsigned)(ar4 + 0x22810) == 0) && (*(int *)(unsigned)(ar4 + 0x22814) == 1)) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x22800);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x22804);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x22808);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22800);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22804);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x22808);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x22808) >> 0x20);
    }
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219a8(ar4,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c214158(iVar1,ar5,ar6,ar7); });
    if (cVar3 == '\0') {
      (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x227f8);
    }
    else {
      (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f0);
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f4);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x227f8);
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x227f8) >> 0x20);
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c22194e(iVar1,ar5,ar6,ar7); });
  uVar2 = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c22195c(1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2140fe(uVar2,ar5,ar6,ar7); });
  uVar2 = 1;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c21410c(1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2219f6(uVar2,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2141a6(uVar2,ar5,ar6,ar7); });
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x1c));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c21279c(0,ar5_00,(fr0_ + (int)0xffffffd8),ar7); });
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c219038(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c21907e(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c219070(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217ebc(uVar2,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217f02(uVar2,ar5_00,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c217ef4(uVar2,ar5_00,ar6_00,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0e3f24\n.set _FUN_8c0e3f24, _FUN_8c0e3f24_def\n");
//@unit 8c0e4198
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double *pdVar3;
  double *pdVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c015bb8(ar5,ar5,ar6,ar7));
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar1 + 0x2c) + 4));
  if (cVar8 == '\0') {
    in_fr15 = *(undefined4 *)(unsigned)(iVar1 + 0x24);
  }
  else {
    in_xd14 = *(double *)(unsigned)(iVar1 + 0x24);
  }
  pdVar3 = (double *)(unsigned)(iVar1 + 0x24);
  pdVar4 = (double *)(unsigned)(iVar1 + 0x54);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5_00,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,in_fr3);
    dVar5 = CONCAT44D(0x4101999a,uVar2);
  }
  else {
    dVar6 = *pdVar3;
    dVar5 = 2.99312289147034e-309;
  }
  if (cVar7 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) +
                             F32LO(dVar5) * F32HI(dVar5),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5 * dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)pdVar3 = (int)(D2U(dVar6) >> 0x20);
    *(undefined4 *)(unsigned)pdVar4 = *(undefined4 *)(unsigned)pdVar3;
  }
  else {
    *pdVar3 = dVar6;
    *pdVar4 = *pdVar3;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01538c(ar4 + 0x226fc,ar5_00,ar6,ar7));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c256328(0,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c019058(uVar2,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c015af8(ar5,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c256210(1,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    (*(double *)(fr0_ - 0x30)) = CONCAT44D(pdVar3,in_fr15);
    *(undefined4 *)(unsigned)pdVar4 = in_fr15;
  }
  else {
    *pdVar4 = in_xd14;
    (*(double *)(fr0_ - 0x30)) = in_xd14;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)pdVar3 = (*(undefined4 *)(fr0_ - 0x30));
  }
  else {
    *pdVar3 = (*(double *)(fr0_ - 0x30));
  }
  return 0;
}

__asm__(".globl _FUN_8c0e4198\n.set _FUN_8c0e4198, _FUN_8c0e4198_def\n");
//@unit 8c0e4298
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4298_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4298";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05c284))))
                    (*(undefined4 *)(unsigned)(0x9d4 + (int)ar4),ar5,ar6,ar7));
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x58))))(ar4,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e433c(ar5,uVar2,ar6,ar7));
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e4330(ar5,0,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1006bc(ar5,uVar2,ar6,ar7));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,2,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0e4298\n.set _FUN_8c0e4298, _FUN_8c0e4298_def\n");
//@unit 8c0e4330
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e4330_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4330";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(undefined4 *)(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e4330\n.set _FUN_8c0e4330, _FUN_8c0e4330_def\n");
//@unit 8c0e433c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e433c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e433c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xd4;
  *(undefined4 *)(unsigned)(0xd4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e433c\n.set _FUN_8c0e433c, _FUN_8c0e433c_def\n");
//@unit 8c0e4348
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4348_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4348";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6a20(ar4 + 0xa68,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e4348\n.set _FUN_8c0e4348, _FUN_8c0e4348_def\n");
//@unit 8c0e4378
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * s_SoilTank_0e437e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SoilTank_0e437e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 in_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9c80(ar4,((undefined1 *)(unsigned)0x8c13ff6e),1,0));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b758);
  uVar3 = 0x24;
  pcVar2 = ((void *)0x8c0e468c);
  pcVar1 = ((void *)0x8c0d611c);
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x41c,((void *)0x8c0d611c),((void *)0x8c0e468c),0x24); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x437,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x439,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x43b,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x43f,pcVar1,pcVar2,uVar3));
  uVar3 = 0xc;
  pcVar2 = ((void *)0x8c0d6ef8);
  pcVar1 = ((void *)0x8c0d6ee0);
  ({ unsigned long t0_ = (unsigned long)(100); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x443,((void *)0x8c0d6ee0),((void *)0x8c0d6ef8),0xc); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d5e9c(ar4 + 0x56f,pcVar1,pcVar2,uVar3));
  uVar3 = 0x18;
  pcVar2 = ((void *)0x8c0cffc8);
  pcVar1 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x578,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e5c4c(ar4,pcVar1,pcVar2,uVar3));
  if (cVar6 == '\0') {
    ar4[0x2e9] = 0x41f00000;
    ar4[0x2af] = 0x45176000;
    ar4[0x2b0] = 0x44898000;
    ar4[0x2b1] = 0x44c80000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e9) = 0xabc41f00000;
    *(undefined8 *)(unsigned)(ar4 + 0x2af) = 0xac045176000;
    *(undefined8 *)(unsigned)(ar4 + 0x2b0) = 0xac444898000;
    in_fr1 = 0x44c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x2b1) = 0x42c8000044c80000;
  }
  for (iVar4 = 0; iVar4 < 10; iVar4 = iVar4 + 1) {
    for (iVar5 = 0; iVar5 < 10; iVar5 = iVar5 + 1) {
      if (cVar6 == '\0') {
        ar4[iVar4 * 0x1e + iVar5 * 3 + 0x443] = 0x42c80000;
      }
      else {
        in_fr1 = 0x42c80000;
        *(undefined8 *)(unsigned)(ar4 + iVar4 * 0x1e + iVar5 * 3 + 0x443) = 0x111042c80000;
      }
    }
    ar4[iVar4 * 0x1e + iVar5 * 3 + 0x444] = 0;
  }
  if (cVar6 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x111042c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9043a00000;
    in_fr1 = 0x42e00000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x10e842e00000;
  }
  ar4[0x43a] = 0;
  if (cVar6 == '\0') {
    ar4[0x25] = 0x41000000;
  }
  else {
    in_fr1 = 0x41000000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar6 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4f222fe640400000;
  }
  return ar4;
}

__asm__(".globl _s_SoilTank_0e437e\n.set _s_SoilTank_0e437e, _s_SoilTank_0e437e_def\n");
//@unit 8c0e462c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e462c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e462c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 8,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0e462c\n.set _FUN_8c0e462c, _FUN_8c0e462c_def\n");
//@unit 8c0e468c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e468c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e468c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0e468c\n.set _FUN_8c0e468c, _FUN_8c0e468c_def\n");
//@unit 8c0e46cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b758_m0_0e46cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b758_m0_0e46cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b758);
    uVar2 = 1;
    uVar1 = 0x18;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x578,((void *)0x8c0cffc8),0x18,1); });
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0e462c(ar4 + 0x56f,0xffffffff,uVar1,uVar2));
    uVar2 = 100;
    uVar1 = 0xc;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x443,((void *)0x8c0d6ef8),0xc,100); });
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x43f,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x43b,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x439,0xffffffff,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x437,0xffffffff,uVar1,uVar2));
    ar7_00 = 3;
    uVar2 = 0x24;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x41c,((void *)0x8c0e468c),0x24,3); });
    uVar1 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bb08_m0_0da208(ar4,0,uVar2,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,uVar1,uVar2,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b758_m0_0e46cc\n.set _Class_12b758_m0_0e46cc, _Class_12b758_m0_0e46cc_def\n");
//@unit 8c0e47d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e47de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e47de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 124; for (int i_ = 0; i_ < 124; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  undefined **ar5_01;
  undefined *ar5_02;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  undefined4 in_fr1 = 0;
  char cVar7;
  
  cVar7 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x3c)),uVar3,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x40)) = 0;
  (*(undefined4 *)(fr0_ - 0x44)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x40))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13ff83),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x44));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13ffa6),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c015ad4(ar4 + 0x30,(*(undefined4 *)(fr0_ - 0x40)),pcVar2,puVar4); });
  a7 = 8;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c239170(0x8c437598,0x8c4375a0,0x8c4312a8,8));
  for (uVar5 = 0; uVar5 < 8; uVar5 = uVar5 + 1) {
    *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc8a5c) = *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc8a5c) | 0x80000000;
  }
  ar5_00 = 0x8c437598;
  (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437598,uVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13ffc6),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ffd3),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 124)), s_GRAPHICS_ENV_0d5ee6(ar4 + 0x15bc,ar5,pcVar2,uVar3));
  ar5_01 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13f1a4);
  (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x10dc) + 8))))((int *)(unsigned)(ar4 + 0x10dc),&(*(undefined4 *)(unsigned)(unsigned)0x8c13f1a4),pcVar2,uVar3));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x10dc,ar5_01,pcVar2,uVar3));
  uVar5 = 0;
  while (uVar6 = uVar5, uVar6 < (uint)ar7_00[1]) {
    *(uint *)(unsigned)(uVar6 * 0xc + *ar7_00 + 4) = *(uint *)(unsigned)(uVar6 * 0xc + *ar7_00 + 4) | 0x80000000;
    (*(uint *)(fr0_ - 0x78)) = uVar6;
    uVar5 = uVar6 + 1;
  }
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fff5),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    ar7_00 = (int *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c140000),((undefined1 *)(unsigned)0x8c14001e),0,2);
  }
  ar5_02 = ((undefined1 *)(unsigned)0x8c13f268);
  ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c015ad4(ar4 + 0x10e4,((undefined1 *)(unsigned)0x8c13f268),pcVar2,ar7_00); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c015bb8(ar4 + 0x10e4,ar5_02,pcVar2,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), thunk_FUN_8c0151e8(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar1 + 4) + 4),0x17,pcVar2,ar7_00));
  *(int *)(unsigned)(ar4 + 0x10e8) = iVar1 + 4;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    uVar3 = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xc2700000;
    uVar3 = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x2c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0xc2700000;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x34)) = 0;
    (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = 0;
    (*(undefined4 *)(fr0_ - 0x34)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x30)),ar4 + 0x10fc,&(*(undefined4 *)(fr0_ - 0x3c)),ar7_00));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    (*(undefined4 *)(fr0_ - 0x34)) = uVar3;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x34)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0xc2700000;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x34)) = 0;
    (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = 0;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x30)),ar4 + 0x10ec,puVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 124)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,puVar4,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 124)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,puVar4,ar7_00));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e47de\n.set _s_GRAPHICS_ENV_0e47de, _s_GRAPHICS_ENV_0e47de_def\n");
//@unit 8c0e4b5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b758_m1_0e4b5c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b758_m1_0e4b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 in_xd0 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1024) == 1) {
    fVar1 = *(float *)(unsigned)(ar4 + 0x1050) - 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar1;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar1;
    if (*(float *)(unsigned)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43c58000;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x1024) == 3) {
    fVar1 = *(float *)(unsigned)(ar4 + 0x1050) + 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar1;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar1;
    if (447.0 <= *(float *)(unsigned)(ar4 + 0x1048)) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
      *(undefined4 *)(unsigned)(ar4 + 0x1024) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e4d64(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x3a03126f,*(undefined4 *)(unsigned)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) - F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(unsigned)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d64a0(ar4 + 0xa68,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b758_m1_0e4b5c\n.set _Class_12b758_m1_0e4b5c, _Class_12b758_m1_0e4b5c_def\n");
//@unit 8c0e4ce4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b758_m2_0e4ce4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b758_m2_0e4ce4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 in_xd0 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e4d64(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x3a03126f,*(undefined4 *)(unsigned)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) - F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(unsigned)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b758_m2_0e4ce4\n.set _Class_12b758_m2_0e4ce4, _Class_12b758_m2_0e4ce4_def\n");
//@unit 8c0e4d64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (*(int *)(unsigned)(0x1090 + iVar1 * 0x24 + ar4) == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6164(iVar1 * 0x24 + ar4 + 0x1070,ar5,ar6,ar7));
    }
  }
  return 3;
}

__asm__(".globl _FUN_8c0e4d64\n.set _FUN_8c0e4d64, _FUN_8c0e4d64_def\n");
//@unit 8c0e4dd0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4dd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4dd0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  undefined4 in_PR = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)(ar4 + 0x10fc);
    (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)(ar4 + 0x1100);
    (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)(ar4 + 0x1104);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x10fc);
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x1100);
    (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x1104);
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar4 + 0x1104) >> 0x20);
  }
  ar6_00 = ((undefined1 *)(fr0_ - 0x24));
  ar5_00 = &(*(undefined4 *)(fr0_ - 0x18));
  uVar1 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c21279c(0,ar5_00,ar6_00,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c217ebc(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c219038(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c217ef4(uVar1,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c219070(uVar1,ar5_00,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0x1024) != 0) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d2028(uVar1,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c016340(ar4 + 0x1028,ar5_00,ar6_00,ar7));
  }
  if (*(int *)(unsigned)(ar4 + 0x1024) == 2) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d1858(((undefined1 *)(unsigned)0x8c13f450),ar5_00,ar6_00,ar7));
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(iVar2 * 0x24 + ar4 + 0x1090) == 1) {
      *((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10e8)) = *(undefined4 *)(unsigned)(iVar2 * 0x24 + ar4 + 0x108c);
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01538c(ar4 + 0x10dc,ar5_00,ar6_00,ar7));
      uVar1 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c256328(0,ar5_00,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c019058(uVar1,ar5_00,ar6_00,ar7));
      (*(int *)(fr0_ - 0x44)) = iVar2;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c019198(uVar1,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c015adc(ar4 + 0x10e4,ar5_00,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c256210(1,ar5_00,ar6_00,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01538c(ar4 + 0x28,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c015adc(ar4 + 0x30,ar5_00,ar6_00,ar7));
  if (*(int *)(unsigned)(ar4 + 0x15c8) == 1) {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0d6090(ar4 + 0x15bc,ar5_00,ar6_00,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0da754(ar4,ar5_00,ar6_00,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e4dd0\n.set _FUN_8c0e4dd0, _FUN_8c0e4dd0_def\n");
//@unit 8c0e505c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e505c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e505c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da754(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e505c\n.set _FUN_8c0e505c, _FUN_8c0e505c_def\n");
//@unit 8c0e50a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e50a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e50a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0x19) {
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), s_CEnv_AddItem_0da93a(ar4,ar5,ar6,ar7));
  }
  return ar5;
}

__asm__(".globl _FUN_8c0e50a0\n.set _FUN_8c0e50a0, _FUN_8c0e50a0_def\n");
//@unit 8c0e50f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e50f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e50f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c02f670(ar5,uVar1,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c036988(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x4c))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e50f4\n.set _FUN_8c0e50f4, _FUN_8c0e50f4_def\n");
//@unit 8c0e518c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e518c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e518c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(0x15c8 + ar4) == 0) {
    *(undefined4 *)(unsigned)(0x15c8 + ar4) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e518c\n.set _FUN_8c0e518c, _FUN_8c0e518c_def\n");
//@unit 8c0e51ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e51ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e51ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db8d4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x10))))((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x106c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x106c) = (ulonglong)extraout_fr1;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e51ac\n.set _FUN_8c0e51ac, _FUN_8c0e51ac_def\n");
//@unit 8c0e5230
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5230_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5230";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5230\n.set _noop_0e5230, _noop_0e5230_def\n");
//@unit 8c0e5234
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5234_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5234";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5234\n.set _noop_0e5234, _noop_0e5234_def\n");
//@unit 8c0e5238
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5238_def(int *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5238";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar6_00;
  int iVar2;
  int iVar3;
  int a4;
  int iVar4;
  int *piVar5;
  undefined4 *ar5_00;
  undefined2 uVar6;
  undefined2 uVar7;
  uint ar6_01;
  float fVar8;
  code *pcVar10;
  double dVar9;
  float fVar11;
  undefined8 in_xd0 = 0;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 0;
  uVar6 = 0x80;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7));
  ar6_00 = ar6 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0daf3c(ar4,ar5,ar6_00,ar7));
  ar5_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c431a58);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01ad9c(uVar1,(*(undefined4 *)(unsigned)(unsigned)0x8c431a58),ar6_00,ar7));
  if ((iVar2 == 4) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c10031c(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    if (ar4[0x2b3] == 0) {
      if (ar4[0x275] != 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(ar4[0x275],ar5_00,ar6_00,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 0x114))))(ar4[0x275],ar5_00,ar6_00,ar7));
        if (((((iVar2 == 10) && (iVar3 == 0x12)) || (iVar2 == 0xb)) || (iVar2 == 0xc)) ||
           ((iVar2 == 0xe &&
            (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 0x148))))(ar4[0x275],ar5_00,ar6_00,ar7)),
            (short)uVar1 != 0)))) {
          ar5_00 = (undefined4 *)(unsigned)0x2;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
        }
        else {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x275] + 8) + 200))))(ar4[0x275],ar5_00,ar6_00,ar7));
          if (iVar2 == 1) {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x58))))(ar4,ar5_00,ar6_00,ar7));
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e59c0(ar5,uVar1,ar6_00,ar7));
            ar5_00 = (undefined4 *)(unsigned)0x1;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e4330(ar5,1,ar6_00,ar7));
          }
          else {
            ar5_00 = (undefined4 *)(unsigned)0x2;
            (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
          }
        }
      }
    }
    else if (ar4[0x2b3] == 2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(ar4[0x2b2],ar5_00,ar6_00,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 0x114))))(ar4[0x2b2],ar5_00,ar6_00,ar7));
      if ((((iVar2 == 10) && (iVar3 == 0x12)) || ((iVar2 == 0xb || (iVar2 == 0xc)))) ||
         ((iVar2 == 0xe &&
          (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 0x148))))(ar4[0x2b2],ar5_00,ar6_00,ar7)),
          (short)uVar1 != 0)))) {
        ar5_00 = (undefined4 *)(unsigned)0x2;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[0x2b2] + 8) + 200))))(ar4[0x2b2],ar5_00,ar6_00,ar7));
        if ((iVar2 == 1) && (ar4[0x275] == ar4[0x2b2])) {
          (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x58))))(ar4,ar5_00,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e59c0(ar5,ar4[0x2b2],ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e4330(ar5,1,ar6_00,ar7));
          ar5_00 = ar5;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0dca2c(ar4,ar5,ar6_00,ar7));
        }
        else {
          ar5_00 = (undefined4 *)(unsigned)0x2;
          (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021720(0x8c2b59d0,2,ar6_00,ar7));
        }
      }
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0637d0(ar5,ar5_00,ar6_00,ar7));
    if (((iVar2 != 0) && (iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), get_field_24_05c284(iVar2,ar5_00,ar6_00,ar7)), iVar3 == 10)) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x148))))(iVar2,ar5_00,ar6_00,ar7)),
       (short)uVar1 == 3)) {
      ar5_00 = (undefined4 *)(unsigned)0xd;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0db7d4(ar4,0xd,ar6_00,ar7));
      if (iVar3 != 0) {
        for (ar6_01 = 0; (int)ar6_01 < iVar3; ar6_01 = ar6_01 + 1) {
          ar5_00 = (undefined4 *)(unsigned)0xd;
          ar6_00 = ar6_01;
          a4 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0db790(ar4,0xd,ar6_01,ar7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xb0))))(a4,ar5_00,ar6_00,ar7));
          if (iVar4 == iVar2) {
            (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xac))))(a4,ar5_00,ar6_00,ar7));
          }
        }
      }
    }
  }
  iVar2 = ar4[0x409];
  if (iVar2 == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e31e8(ar5,ar5_00,ar6_00,ar7));
    if (iVar2 == 1) {
      ar4[0x409] = 1;
      piVar5 = ar4 + 0x412;
      if (cVar13 == '\0') {
        *piVar5 = 0x43df8000;
        ar4[0x414] = 0x43df8000;
      }
      else {
        piVar5[0] = 0x43df8000;
        piVar5[1] = 0x1050;
        ar4[0x414] = 0x43df8000;
        ar4[0x415] = 0x1050;
      }
    }
  }
  else if (iVar2 == 1) {
    if (cVar13 == '\0') {
      fVar8 = (float)ar4[0x412];
      pcVar10 = (code *)0x43c58000;
    }
    else {
      fVar8 = 395.0;
      pcVar10 = ((void *)0x8c0e30f0);
    }
    if ((fVar8 == (float)(uint)pcVar10) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e30f0(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
      ar4[0x409] = 2;
    }
  }
  else if ((iVar2 == 2) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e5998(ar5,ar5_00,ar6_00,ar7)), iVar2 == 1)) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      if (ar4[iVar2 * 9 + 0x424] == 0) {
        piVar5 = ar4 + iVar2 * 9 + 0x41c;
        if (cVar13 == '\0') {
          *piVar5 = 0x43bb8000;
        }
        else {
          piVar5[0] = 0x43bb8000;
          piVar5[1] = 0x1074;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41d;
        if (cVar13 == '\0') {
          *piVar5 = 0x43f78000;
        }
        else {
          piVar5[0] = 0x43f78000;
          piVar5[1] = 0x1078;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x41e;
        if (cVar13 == '\0') {
          *piVar5 = 0x44548000;
        }
        else {
          piVar5[0] = 0x44548000;
          piVar5[1] = 0x1084;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x421;
        if (cVar13 == '\0') {
          *piVar5 = -0x41000000;
        }
        else {
          piVar5[0] = -0x41000000;
          piVar5[1] = 0x1080;
        }
        piVar5 = ar4 + iVar2 * 9 + 0x420;
        if (cVar13 == '\0') {
          *piVar5 = 0x3dcccccd;
        }
        else {
          piVar5[0] = 0x3dcccccd;
          piVar5[1] = 0x108c;
        }
        ar4[iVar2 * 9 + 0x423] = 0xffffff;
        ar4[iVar2 * 9 + 0x422] = 0;
        ar4[iVar2 * 9 + 0x424] = 1;
        if (cVar13 == '\0') {
          dVar9 = CONCAT44D(0x40800000,ar4[0x41b]);
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x41b);
          dVar9 = 52776566587392.0;
        }
        if (cVar12 == '\0') {
          fVar8 = F32LO(dVar9) + F32HI(dVar9);
        }
        else {
          fVar8 = SUB84(dVar9 + dVar9,0);
        }
        if (cVar13 == '\0') {
          ar4[0x41b] = (int)fVar8;
          fVar8 = (float)ar4[0x41b];
          fVar11 = 100.0;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x41b) = in_xd0;
          fVar8 = 100.0;
          fVar11 = 1.79366e-43;
        }
        if (cVar12 == '\0' && fVar11 < fVar8) {
          piVar5 = ar4 + 0x41b;
          if (cVar13 == '\0') {
            *piVar5 = 0x42c80000;
          }
          else {
            piVar5[0] = 0x42c80000;
            piVar5[1] = 0x80;
          }
        }
        uVar7 = 0x80;
        uVar6 = 0xff;
        ((undefined4 *)(fr0_ - 0x24))[0] = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c02190c(0x8c2b59d0,ar5_00,ar6_00,ar7));
        ar6_00 = 0xe;
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021994(0x8c2b59d0,((undefined4 *)(fr0_ - 0x24))[0],0xe,ar7));
        ar5_00 = ((undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021a8c(0x8c2b59d0,ar5_00,ar6_00,ar7));
        break;
      }
    }
  }
  if (ar4[0x409] != 0) {
    *(undefined2 *)(unsigned)(ar4 + 0x417) = uVar7;
    *(undefined2 *)(unsigned)((int)ar4 + 0x105e) = 0x80;
    *(undefined2 *)(unsigned)(ar4 + 0x418) = uVar7;
    *(undefined2 *)(unsigned)((int)ar4 + 0x1062) = 0x60;
    *(undefined2 *)(unsigned)(ar4 + 0x419) = uVar6;
    *(undefined2 *)(unsigned)((int)ar4 + 0x1066) = 0x60;
    *(undefined2 *)(unsigned)(ar4 + 0x41a) = uVar6;
    *(undefined2 *)(unsigned)((int)ar4 + 0x106a) = 0x80;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0e30c8(ar5,ar5_00,ar6_00,ar7));
  if (iVar2 == 1) {
    ar4[0x409] = 3;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e5238\n.set _FUN_8c0e5238, _FUN_8c0e5238_def\n");
//@unit 8c0e5998
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5998_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5998";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(undefined4 *)(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5998\n.set _FUN_8c0e5998, _FUN_8c0e5998_def\n");
//@unit 8c0e59c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e59c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e59c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffb84(ar4 + 0xd8,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e59c0\n.set _FUN_8c0e59c0, _FUN_8c0e59c0_def\n");
//@unit 8c0e59e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e59e8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e59e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e59e8\n.set _FUN_8c0e59e8, _FUN_8c0e59e8_def\n");
//@unit 8c0e5a08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5a08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5a08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x1020 + ar4) = 5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e5dac(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5a08\n.set _FUN_8c0e5a08, _FUN_8c0e5a08_def\n");
//@unit 8c0e5a64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5a64_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5a64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0e5a64\n.set _FUN_8c0e5a64, _FUN_8c0e5a64_def\n");
//@unit 8c0e5a88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e5a88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e5a88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e5a88\n.set _ret_const_0_0e5a88, _ret_const_0_0e5a88_def\n");
//@unit 8c0e5a90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5a90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5a90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5a90\n.set _noop_0e5a90, _noop_0e5a90_def\n");
//@unit 8c0e5a94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5a94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5a94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5a94\n.set _noop_0e5a94, _noop_0e5a94_def\n");
//@unit 8c0e5a98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5a98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5a98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5a98\n.set _noop_0e5a98, _noop_0e5a98_def\n");
//@unit 8c0e5a9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5a9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5a9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5a9c\n.set _noop_0e5a9c, _noop_0e5a9c_def\n");
//@unit 8c0e5aa0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5aa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5aa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5aa0\n.set _noop_0e5aa0, _noop_0e5aa0_def\n");
//@unit 8c0e5aa4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e5aa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e5aa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e5aa4\n.set _noop_0e5aa4, _noop_0e5aa4_def\n");
//@unit 8c0e5aa8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e5aa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5aa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0xa6c) = 0x43898000;
  *(undefined4 *)(unsigned)(ar4 + 0xa70) = 0x44ed8000;
  return ((undefined4 *)(unsigned)0x8c0e5adc);
}

__asm__(".globl _FUN_8c0e5aa8\n.set _FUN_8c0e5aa8, _FUN_8c0e5aa8_def\n");
//@unit 8c0e5ae0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5ae0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5ae0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d6058(ar4 + 0x15bc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x10dc,ar5_00,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9b60(ar4,ar5 & 0xff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5ae0\n.set _FUN_8c0e5ae0, _FUN_8c0e5ae0_def\n");
//@unit 8c0e5b30
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5b30_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5b30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d6074(ar4 + 0x15bc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x10dc,ar5_00,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d9b8c(ar4,ar5 & 0xff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5b30\n.set _FUN_8c0e5b30, _FUN_8c0e5b30_def\n");
//@unit 8c0e5b80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c0e5b80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5b80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint * s0 = (uint *)(unsigned long)*(unsigned *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(undefined4 *)(fr0_ - 0x4)) = (*(undefined4 *)(fr0_ - 0x4)) & 0xfffffffc | 1;
  *s0 = (*(undefined4 *)(fr0_ - 0x4));
  return (*(undefined4 *)(fr0_ - 0x4));
}

__asm__(".globl _FUN_8c0e5b80\n.set _FUN_8c0e5b80, _FUN_8c0e5b80_def\n");
//@unit 8c0e5ba8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_15c8_0e5ba8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_15c8_0e5ba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x15c8 + ar4);
}

__asm__(".globl _get_field_15c8_0e5ba8\n.set _get_field_15c8_0e5ba8, _get_field_15c8_0e5ba8_def\n");
//@unit 8c0e5bb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e5bba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e5bba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar6_00;
  int ar7_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x7b7,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  ar6_00 = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b;
  ar7_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020b68(ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x7b7,ar6_00,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d60cc(ar4 + 0x15bc,ar5,ar6_00,ar7_00));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e5bba\n.set _s_GRAPHICS_ENV_0e5bba, _s_GRAPHICS_ENV_0e5bba_def\n");
//@unit 8c0e5c24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5c24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5c24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5c24\n.set _FUN_8c0e5c24, _FUN_8c0e5c24_def\n");
//@unit 8c0e5c4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5c4c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5c4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1b0))))(ar4,1,ar6,ar7));
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3f19999a;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3f19999a;
    ar4[0x20] = 0x443a3e67;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5c4c\n.set _FUN_8c0e5c4c, _FUN_8c0e5c4c_def\n");
//@unit 8c0e5dac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5dac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e5dac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217ebc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217f02(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c217ef4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219038(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21907e(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e5dac\n.set _FUN_8c0e5dac, _FUN_8c0e5dac_def\n");
//@unit 8c0e5e54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * s_Outside_0e5e56_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Outside_0e5e56";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *ar5_00;
  code *ar5_01;
  undefined4 uVar1;
  code *ar6_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  char cVar3;
  
  cVar3 = '\0';
  uVar2 = 0;
  uVar1 = 2;
  ar5_00 = ((undefined1 *)(unsigned)0x8c140040);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9c80(ar4,((undefined1 *)(unsigned)0x8c140040),2,0));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b580);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x430,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x432,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x433,ar5_00,uVar1,uVar2));
  (vsp = ((unsigned long)(fr0_ - 0)), s_66_JUNGLE_RAIN_5_0d7f1a(ar4 + 0x437,ar5_00,uVar1,uVar2));
  ({ unsigned long t0_ = (unsigned long)(100); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1fd2,((void *)0x8c0d6ee0),((void *)0x8c0d6ef8),0xc); });
  uVar1 = 0x18;
  ar6_00 = ((void *)0x8c0cffc8);
  ar5_01 = ((void *)0x8c02145c);
  ({ unsigned long t0_ = (unsigned long)(1); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x20fe,((void *)0x8c02145c),((void *)0x8c0cffc8),0x18); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e6ef0(ar4,ar5_01,ar6_00,uVar1));
  if (cVar3 == '\0') {
    ar4[0x2e9] = 0x425dae14;
    ar4[0x2af] = 0x453b7ff4;
    ar4[0x2b0] = 0x4506eccd;
    ar4[0x2b1] = 0x45520000;
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x43a00000;
    ar4[0x24] = 0x42e00000;
    ar4[0x25] = 0x41000000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e9) = 0xabc425dae14;
    *(undefined8 *)(unsigned)(ar4 + 0x2af) = 0xac0453b7ff4;
    *(undefined8 *)(unsigned)(ar4 + 0x2b0) = 0x440ea6664506eccd;
    *(undefined8 *)(unsigned)(ar4 + 0x2b1) = 0x8045520000;
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9043a00000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x9442e00000;
    in_fr1 = 0x41000000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841000000;
  }
  if (cVar3 == '\0') {
    ar4[0x26] = 0x3f800000;
    ar4[0x27] = 0x41300000;
    ar4[0x28] = 0x40400000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x26) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041300000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x106c40400000;
  }
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f718);
  ar4[0x41b] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f714);
  ar4[0x41c] = uVar2;
  ar4[0x41d] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f71c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f724);
  ar4[0x41e] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f720);
  ar4[0x41f] = uVar2;
  ar4[0x420] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f728);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f730);
  ar4[0x421] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f72c);
  ar4[0x422] = uVar2;
  ar4[0x423] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f734);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f73c);
  ar4[0x42a] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f738);
  ar4[0x42b] = uVar2;
  ar4[0x42c] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f740);
  uVar2 = (*(undefined1 *)(unsigned)0x8c13f748);
  ar4[0x427] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f744);
  ar4[0x428] = uVar2;
  ar4[0x429] = (*(undefined4 *)(unsigned)(unsigned)0x8c13f74c);
  ar4[0x2104] = 0;
  ar4[0x20fe] = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[ar4[0x2104]];
  ar4[0x2100] = 500;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d76e8(ar4 + 0x427,ar5_01,ar6_00,uVar1));
  return ar4;
}

__asm__(".globl _s_Outside_0e5e56\n.set _s_Outside_0e5e56, _s_Outside_0e5e56_def\n");
//@unit 8c0e6114
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e6114_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6114";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c015428(ar4 + 0x6e50,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x6e20,((void *)0x8c0cffc8),0x18,2); });
    ar7_00 = 500;
    ar6_00 = 0x38;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0xbc,((void *)0x8c0d8094),0x38,500); });
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d80dc(ar4 + 0x78,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0d8128(ar4 + 0x50,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0d8168(ar4 + 0x34,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x28,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x18,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 8,0xffffffff,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0e6114\n.set _FUN_8c0e6114, _FUN_8c0e6114_def\n");
//@unit 8c0e61f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b580_m0_0e61f4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b580_m0_0e61f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b580);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x20fe,((void *)0x8c0cffc8),0x18,1); });
    ar7_00 = 100;
    ar6_00 = 0xc;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x1fd2,((void *)0x8c0d6ef8),0xc,100); });
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0e6114(ar4 + 0x437,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x433,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x432,0xffffffff,ar6_00,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x430,0xffffffff,ar6_00,ar7_00));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bb08_m0_0da208(ar4,0,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b580_m0_0e61f4\n.set _Class_12b580_m0_0e61f4, _Class_12b580_m0_0e61f4_def\n");
//@unit 8c0e62cc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e62cc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e62cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + *ar4))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d819c((int)ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0e705c))))
            (ar4,*(undefined4 *)(unsigned)(0x10dc + (int)ar4),ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x83fc + (int)ar4);
  if (iVar1 == -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x83f8 + (int)ar4),ar6,ar7));
    iVar1 = 0x83fc;
    *(undefined4 *)(unsigned)(0x83fc + (int)ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e62cc\n.set _FUN_8c0e62cc, _FUN_8c0e62cc_def\n");
//@unit 8c0e634c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b580_m1_0e634c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b580_m1_0e634c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar4_00;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d84e8(ar4 + 0x10dc,ar5,iVar4,ar7));
  uVar3 = *(uint *)(unsigned)(0x10dc + ar4);
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,uVar3,iVar4,ar7));
  if ((*(int *)(unsigned)(0x10dc + ar4) == 0) || (*(int *)(unsigned)(0x10dc + ar4) == 0x8ca0)) {
    if (*(int *)(unsigned)(0x83fc + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(0x83fc + ar4),iVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(0x83fc + ar4),iVar4,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x83f8 + ar4),iVar4,ar7));
    *(undefined4 *)(unsigned)(0x83fc + ar4) = uVar1;
    uVar3 = *(uint *)(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  if ((*(uint *)(unsigned)(0x10dc + ar4) & 1) == 0) {
    uVar3 = *(uint *)(unsigned)(0x8400 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101154(*(undefined4 *)(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,uVar3,iVar4,ar7));
    if (iVar2 != 0) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,uVar3,iVar4,ar7));
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c101178))))
                          (*(undefined4 *)(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
        uVar3 = uVar3 & 0xff;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4_00 + 8) + 8) + 0x50))))
                  (*(int *)(unsigned)(ar4_00 + 8),uVar3,iVar4,ar7));
        ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4_00,uVar3,iVar4,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar4 * 0x68 + 0xc0c,ar5,ar6,ar7));
    if (iVar2 == 1) {
      ar5 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar4 * 0x68 + 0xc0c,ar4,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d64a0(ar4 + 0xa68,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b580_m1_0e634c\n.set _Class_12b580_m1_0e634c, _Class_12b580_m1_0e634c_def\n");
//@unit 8c0e6548
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b580_m2_0e6548_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b580_m2_0e6548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  ar5_00 = *(undefined4 *)(unsigned)(0x10dc + ar4);
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5_00,ar6,ar7));
  ar6_00 = ar4 + 0xa68;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8710(ar4 + 0x10dc,ar5,ar6_00,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6_00,ar7));
    if (iVar1 == 1) {
      ar5 = ar4;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7204(ar4 + iVar2 * 0x68 + 0xc0c,ar4,ar6_00,ar7));
    }
  }
  return 1;
}

__asm__(".globl _Class_12b580_m2_0e6548\n.set _Class_12b580_m2_0e6548, _Class_12b580_m2_0e6548_def\n");
//@unit 8c0e660c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e660c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e660c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8808(ar4 + 0x10dc,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x78) = *(undefined4 *)(unsigned)(ar4 + 0x1120);
    *(undefined4 *)(unsigned)(ar4 + 0x7c) = *(undefined4 *)(unsigned)(ar4 + 0x1124);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x78) = *(undefined8 *)(unsigned)(ar4 + 0x1120);
    *(undefined8 *)(unsigned)(ar4 + 0x7c) = *(undefined8 *)(unsigned)(ar4 + 0x1124);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d89d8(ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      ar6 = ar4 + 4;
      ar5 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7118(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da754(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e660c\n.set _FUN_8c0e660c, _FUN_8c0e660c_def\n");
//@unit 8c0e66fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e66fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e66fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9b34(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e66fc\n.set _FUN_8c0e66fc, _FUN_8c0e66fc_def\n");
//@unit 8c0e6718
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6718_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6718";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0xf) {
    ar5 = (vsp = ((unsigned long)(fr0_ - 0)), s_CEnv_AddItem_0da93a(ar4,ar5,ar6,ar7));
  }
  return ar5;
}

__asm__(".globl _FUN_8c0e6718\n.set _FUN_8c0e6718, _FUN_8c0e6718_def\n");
//@unit 8c0e676c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e676c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e676c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c02f670(ar5,uVar1,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c036988(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x4c))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e676c\n.set _FUN_8c0e676c, _FUN_8c0e676c_def\n");
//@unit 8c0e6804
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6804";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar6_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  
  ar6_00 = (uint)(byte)ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf3c(ar4,ar5,ar6_00,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), pure_virtual_stub(ar4,ar5,ar6_00,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e252c(ar5,ar5_00,ar6_00,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d9e0(uVar2,ar5_00,ar6_00,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dfef4(ar5,ar5_00,ar6_00,ar7));
  if (iVar1 == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_cc_0dfee8(ar5,ar5_00,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f528(uVar2,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da60(uVar2,ar5_00,ar6_00,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e6804\n.set _FUN_8c0e6804, _FUN_8c0e6804_def\n");
//@unit 8c0e68d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e68d4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e68d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e68d4\n.set _FUN_8c0e68d4, _FUN_8c0e68d4_def\n");
//@unit 8c0e68f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e68f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e68f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954((int)ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e743c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8400((int)ar4 + 0x10dc,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa8 + *ar4))))(ar4,3,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e68f4\n.set _FUN_8c0e68f4, _FUN_8c0e68f4_def\n");
//@unit 8c0e6964
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6964_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6964";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0e6964\n.set _FUN_8c0e6964, _FUN_8c0e6964_def\n");
//@unit 8c0e6988
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6988_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8444((int)ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xa4 + *ar4))))(ar4,3,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0e6988\n.set _FUN_8c0e6988, _FUN_8c0e6988_def\n");
//@unit 8c0e69c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e69c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e69c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  undefined4 in_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x30)),uVar3,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x34)) = 0;
  (*(undefined4 *)(fr0_ - 0x38)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x34))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c140052),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x38));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c140074),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4(ar4 + 0x30,(*(undefined4 *)(fr0_ - 0x34)),pcVar2,puVar4); });
  a7 = 0xd;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c239170(0x8c437600,0x8c437608,0x8c4312a8,0xd));
  for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
    *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc89f4) = *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc89f4) | 0x80000000;
  }
  ar5_00 = 0x8c437600;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437600,uVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c140093),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c14009e),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 88)), s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,pcVar2,uVar3));
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x28)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x20)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x30)) = 0xc2700000;
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x30));
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x10cc,puVar4,uVar3));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,puVar4,uVar3));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,puVar4,uVar3));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e69c8\n.set _s_GRAPHICS_ENV_0e69c8, _s_GRAPHICS_ENV_0e69c8_def\n");
//@unit 8c0e6c00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e6c00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6c00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,*(undefined4 *)(unsigned)(0x10dc + ar4),ar6,ar7));
  iVar1 = *(int *)(unsigned)(0x83fc + ar4);
  if (iVar1 == -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(undefined4 *)(unsigned)(0x83f8 + ar4),ar6,ar7));
    iVar1 = 0x83fc;
    *(undefined4 *)(unsigned)(0x83fc + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0e6c00\n.set _FUN_8c0e6c00, _FUN_8c0e6c00_def\n");
//@unit 8c0e6c54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e6c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6c54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xa68) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0xa6c) = 0x44610000;
  *(undefined4 *)(unsigned)(ar4 + 0xa70) = 0x4544e000;
  return ((undefined4 *)(unsigned)0x8c0e6c88);
}

__asm__(".globl _FUN_8c0e6c54\n.set _FUN_8c0e6c54, _FUN_8c0e6c54_def\n");
//@unit 8c0e6c8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6c8c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6c8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR = 0;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9b60(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 4,ar5_00,ar6,ar7));
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d8458(ar4 + 0x10dc,ar5_00,ar6,ar7); });
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e6c8c\n.set _FUN_8c0e6c8c, _FUN_8c0e6c8c_def\n");
//@unit 8c0e6cd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6cd8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6cd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar5_00;
  undefined4 in_PR = 0;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_wrap_0d9b8c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 4,ar5_00,ar6,ar7));
  uVar1 = 2;
  if (2 < (ar5 & 0xff)) {
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d845c(ar4 + 0x10dc,ar5_00,ar6,ar7); });
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0e6cd8\n.set _FUN_8c0e6cd8, _FUN_8c0e6cd8_def\n");
//@unit 8c0e6d24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6d24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6d24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  undefined4 uVar1;
  
  ar5_00 = (uint)(byte)ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db090(ar4,ar5_00,ar6,ar7));
  if (*(int *)(unsigned)(0x83fc + ar4) != -1) {
    ar5_00 = *(uint *)(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,ar5_00,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8460(ar4 + 0x10dc,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e6d24\n.set _FUN_8c0e6d24, _FUN_8c0e6d24_def\n");
//@unit 8c0e6d80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6d80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(int *)(unsigned)(0x83fc + ar4) != -1) {
    ar5 = *(undefined4 *)(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d84a8(ar4 + 0x10dc,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e6d80\n.set _FUN_8c0e6d80, _FUN_8c0e6d80_def\n");
//@unit 8c0e6dc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6dc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6dc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0db8d4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e96b8(ar4 + 0xf4c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d6920(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x10))))((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d92b0(ar4 + 0x10dc,ar5,ar6,ar7));
  if (*(int *)(unsigned)(0x83fc + ar4) != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(0x83fc + ar4),ar6,ar7));
    *(undefined4 *)(unsigned)(0x83fc + ar4) = 0xffffffff;
  }
  return 1;
}

__asm__(".globl _FUN_8c0e6dc4\n.set _FUN_8c0e6dc4, _FUN_8c0e6dc4_def\n");
//@unit 8c0e6e74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e6e78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e6e78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x888,
             (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x888,
                     (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0x10b,ar4));
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e6e78\n.set _s_GRAPHICS_ENV_0e6e78, _s_GRAPHICS_ENV_0e6e78_def\n");
//@unit 8c0e6ec8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6ec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6ec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((int *)(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e6ec8\n.set _FUN_8c0e6ec8, _FUN_8c0e6ec8_def\n");
//@unit 8c0e6ef0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6ef0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e6ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  uVar1 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x1b0))))(ar4,1,ar6,ar7));
  if (cVar2 == '\0') {
    ar4[0x1e] = 0x3f800000;
    ar4[0x1f] = 0x3e4ccccd;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1e) = CONCAT44(0x3f800000,in_fr1);
    ar4[0x1f] = 0x3e4ccccd;
    ar4[0x20] = 0x458ca000;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2c4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2cc,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 0x2b4,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a7c(ar4 + 700,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102974(ar4 + 0x2dc,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e6ef0\n.set _FUN_8c0e6ef0, _FUN_8c0e6ef0_def\n");
//@unit 8c0e705c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_64_JUNGLE_NIGHT_0e7062_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_64_JUNGLE_NIGHT_0e7062";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  double dVar2;
  float fVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  double in_xd14 = 0;
  int ar4_00;
  int iVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar4 = (float)ar5;
  if (fVar4 < 0.0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  uVar1 = 0x43b40000;
  fVar4 = (((fVar4 * 360.0) / 72000.0) * 65536.0) / 360.0;
  dVar5 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),fVar4);
  ar4_00 = (int)fVar4;
  iVar6 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25747c(ar4_00,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(iVar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c010e38(ar4_00,ar5,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),uVar1);
  }
  else {
    in_xd14 = CONCAT44D(uVar1,in_fr1);
  }
  if (*(int *)(unsigned)(ar4 + 0x10dc) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4_00,ar5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,2,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x8410) = uVar1;
    *(unsigned *)(unsigned)(ar4 + 0x83f8) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[*(int *)(unsigned)(ar4 + 0x8410)];
  }
  else if (*(int *)(unsigned)(ar4 + 0x10dc) == 36000) {
    *(undefined4 *)(unsigned)(ar4 + 0x8410) = 2;
    *(unsigned *)(unsigned)(ar4 + 0x83f8) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c13f2fc))[*(int *)(unsigned)(ar4 + 0x8410)];
  }
  if (cVar8 == '\0') {
    dVar2 = CONCAT44D(0x461ba000,in_fr1);
  }
  else {
    dVar2 = 8.349145204665365e+24;
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar5) * F32HI(dVar2);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar2,0);
  }
  if (cVar8 == '\0') {
    in_xd14 = CONCAT44D(fVar4,fVar4);
    fVar3 = 2490.0;
  }
  else {
    fVar4 = 2490.0;
    fVar3 = 4.73527e-41;
  }
  if (cVar7 == '\0' && fVar3 < fVar4) {
    if (cVar8 == '\0') {
      in_xd14 = CONCAT44D(0x451ba000,SUB84(in_xd14,0));
    }
    else {
      in_xd14 = 7.17070546069488e-310;
    }
  }
  if (cVar7 == '\0') {
    iVar6 = (int)F32HI(in_xd14);
  }
  else {
    iVar6 = (int)in_xd14;
  }
  *(int *)(unsigned)(ar4 + 0x8400) = 0xbae - iVar6;
  return 0x8400;
}

__asm__(".globl _s_64_JUNGLE_NIGHT_0e7062\n.set _s_64_JUNGLE_NIGHT_0e7062, _s_64_JUNGLE_NIGHT_0e7062_def\n");
//@unit 8c0e7190
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e7190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e7190";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a5;
  undefined4 *puVar2;
  
  ((undefined4 *)(fr0_ - 0x10))[0] = 0;
  a5 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c100ce8(ar5,ar5,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))(*(int *)(unsigned)(ar4 + 0x9d4),a5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0dc61c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
  puVar2 = ((undefined4 *)(fr0_ - 0x10));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c100e4c(ar5,puVar2,ar6,ar7));
  if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))(*(int *)(unsigned)(ar4 + 0x9d4),puVar2,ar6,ar7))
    ;
  }
  else {
    puVar2 = ((undefined4 *)(fr0_ - 0x10));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c100e4c(ar5,puVar2,ar6,ar7));
    if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                (*(int *)(unsigned)(ar4 + 0x9d4),puVar2,ar6,ar7));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e7190\n.set _FUN_8c0e7190, _FUN_8c0e7190_def\n");
//@unit 8c0e727c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e727c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e727c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int a4;
  undefined4 uVar2;
  undefined4 *ar5_00;
  int iVar3;
  
  ((undefined4 *)(fr0_ - 0x20))[0] = 0;
  if (*(int *)(unsigned)(ar4 + 0xac8) != 0) {
    uVar2 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_24_05c284(*(undefined4 *)(unsigned)(ar4 + 0xac8),ar5,ar6,ar7));
    if ((iVar1 == 5) || (iVar1 == 7)) {
      uVar2 = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xac8) + 8) + 0x84))))(*(int *)(unsigned)(ar4 + 0xac8),0,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100cb4(ar5,uVar2,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), get_field_300_0bf154(ar4 + 0xa4,uVar2,ar6,ar7));
      a4 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0da588(ar4 + 0xa4,uVar2,ar6,ar7));
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        uVar2 = 2;
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x84))))(a4,2,ar6,ar7));
        a4 = (vsp = ((unsigned long)(fr0_ - 32)), list_node_next(a4,uVar2,ar6,ar7));
      }
    }
    ar5_00 = ((undefined4 *)(fr0_ - 0x20));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x184))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    else {
      ar5_00 = ((undefined4 *)(fr0_ - 0x20));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100e4c(ar5,ar5_00,ar6,ar7));
      if ((iVar1 == 2) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x188))))
                  (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
      }
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c100ce8(ar5,ar5_00,ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(ar4 + 0x9d4) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x9d4) + 8) + 0x88))))
                (*(int *)(unsigned)(ar4 + 0x9d4),ar5_00,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc7e8(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0dc8fc(ar4,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e727c\n.set _FUN_8c0e727c, _FUN_8c0e727c_def\n");
//@unit 8c0e741c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e741c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e741c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0dc548(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e741c\n.set _FUN_8c0e741c, _FUN_8c0e741c_def\n");
//@unit 8c0e743c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e743c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e743c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219038(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21907e(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219070(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e743c\n.set _FUN_8c0e743c, _FUN_8c0e743c_def\n");
//@unit 8c0e749c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_11940_0e749c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_11940_0e749c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x11940;
}

__asm__(".globl _ret_const_11940_0e749c\n.set _ret_const_11940_0e749c, _ret_const_11940_0e749c_def\n");
//@unit 8c0e74a8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * s_INCUBATOR_0e74ae_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_INCUBATOR_0e74ae";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 uVar1;
  undefined1 *ar5_01;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0d99e8(ar4,((undefined1 *)(unsigned)0x8c1400c3),3,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b3b8);
  uVar2 = 0x20;
  ar6_00 = ((void *)0x8c0d6f68);
  ar5_00 = ((void *)0x8c0d6f28);
  ({ unsigned long t0_ = (unsigned long)(0xc); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x29,((void *)0x8c0d6f28),((void *)0x8c0d6f68),0x20); });
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016690(ar4 + 0x89,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0191e4(ar4 + 0x8a,ar5_00,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01a0cc(ar4 + 0xaa,ar5_00,ar6_00,uVar2));
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015c58(ar4 + 0x105,0,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016410(ar4 + 0x111,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0153b8(ar4 + 0x122,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0e89a0(ar4,uVar1,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c019384(ar4 + 0x8a,uVar1,ar6_00,uVar2));
  if (cVar8 != '\0') {
    in_fr1 = 0xc1200000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383c8) = 0xc1200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383c4) = 0xc1880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383cc) = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x41800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383cc) = in_fr1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383d4) = 0x41800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383d0) = 0xc1880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383d8) = 0;
    uVar2 = uVar1;
  }
  else {
    uVar2 = 0x41800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383d8) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383e0) = 0x41800000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383dc) = 0x41880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383e4) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = uVar2;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = 0xc1200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383e4) = uVar2;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383ec) = 0xc1200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383e8) = 0x41880000;
  if (cVar8 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4383f0) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383f4) = 0xff0f0f0f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383f8) = 0xff00008f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4383fc) = 0xff00008f;
  (*(undefined4 *)(unsigned)(unsigned)0x8c438400) = 0xff0f0f0f;
  uVar1 = 4;
  ar6_01 = ((undefined1 *)(unsigned)0x8c4383f4);
  ar5_01 = ((undefined1 *)(unsigned)0x8c4383c4);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016464(ar4 + 0x111,((undefined1 *)(unsigned)0x8c4383c4),((undefined1 *)(unsigned)0x8c4383f4),4));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014790(ar4 + 0x111,ar5_01,ar6_01,uVar1));
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    for (iVar4 = 0; iVar4 < 4; iVar4 = iVar4 + 1) {
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x42140000,(float)iVar4);
      }
      else {
        dVar6 = -3023657517696.0;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0xc2860000,fVar5);
      }
      else {
        dVar6 = 3.66595689778914e-312;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) + F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 + dVar6,0);
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2a] = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2a) = in_xd0;
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x41e00000,(float)iVar3);
      }
      else {
        dVar6 = 60129550576.0;
      }
      if (cVar7 == '\0') {
        fVar5 = F32LO(dVar6) * F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar8 == '\0') {
        dVar6 = CONCAT44D(0x422c0000,fVar5);
      }
      else {
        dVar6 = 3.74019760929537e-312;
      }
      if (cVar7 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar6),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2b] = (int)(D2U(dVar6) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2b) = dVar6;
      }
      if (cVar8 == '\0') {
        ar4[iVar3 * 0x20 + iVar4 * 8 + 0x2c] = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + iVar3 * 0x20 + iVar4 * 8 + 0x2c) = D2U(dVar6) & 0xffffffff;
      }
    }
  }
  if (cVar8 == '\0') {
    ar4[0x20] = 0x430c0000;
    ar4[0x21] = 0x42c80000;
    ar4[0x23] = 0x44048000;
    ar4[0x24] = 0x43cd0000;
    ar4[0x25] = 0x41600000;
    ar4[0x26] = 0x41200000;
    ar4[0x27] = 0x41900000;
    ar4[0x28] = 0x41500000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = 0x84430c0000;
    *(undefined8 *)(unsigned)(ar4 + 0x21) = 0x8c42c80000;
    *(undefined8 *)(unsigned)(ar4 + 0x23) = 0x9044048000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x9443cd0000;
    *(undefined8 *)(unsigned)(ar4 + 0x25) = 0x9841600000;
    *(undefined8 *)(unsigned)(ar4 + 0x26) = 0x9c41200000;
    *(undefined8 *)(unsigned)(ar4 + 0x27) = 0xa041900000;
    *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x4f222fe641500000;
  }
  return ar4;
}

__asm__(".globl _s_INCUBATOR_0e74ae\n.set _s_INCUBATOR_0e74ae, _s_INCUBATOR_0e74ae_def\n");
//@unit 8c0e77ec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12b3b8_m0_0e77ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b3b8_m0_0e77ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12b3b8);
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c015428(ar4 + 0x122,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_015c94(ar4 + 0x105,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_1299ec_m0_01a0f8(ar4 + 0xaa,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_019270(ar4 + 0x8a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016660(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar7_00 = 0xc;
    ar6_00 = 0x20;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x29,((void *)0x8c0d6f68),0x20,0xc); });
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12bce0_m0_0d9a98(ar4,0,ar6_00,ar7_00));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6_00,ar7_00); });
    }
  }
  return ar4;
}

__asm__(".globl _Class_12b3b8_m0_0e77ec\n.set _Class_12b3b8_m0_0e77ec, _Class_12b3b8_m0_0e77ec_def\n");
//@unit 8c0e78c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_GRAPHICS_ENV_0e78c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e78c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 uVar3;
  char *ar6_00;
  undefined4 ar7_00;
  int iVar4;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,ar5,ar6,ar7));
  ar7_00 = 2;
  uVar3 = 0x8c4312a8;
  iVar2 = ar4 + 0x498;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(uVar1,iVar2,0x8c4312a8,2));
  for (iVar4 = 0; iVar4 < 2; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,iVar2,uVar3,ar7_00));
  ar6_00 = ((undefined1 *)(unsigned)0x8c13f8cb);
  ar5_00 = ((undefined1 *)(unsigned)0x8c1400cd);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c1400cd),((undefined1 *)(unsigned)0x8c13f8cb),uVar1));
  if (iVar2 == 0) {
    uVar1 = 2;
    ar6_00 = (char *)(unsigned)0x0;
    ar5_00 = ((undefined1 *)(unsigned)0x8c1400ff);
    report_error_message
              (((undefined1 *)(unsigned)0x8c1400db),((undefined1 *)(unsigned)0x8c1400ff),0,2);
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x488,ar5_00,ar6_00,uVar1));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ccc(ar4 + 0x414,uVar3,ar6_00,uVar1); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015cd4(ar4 + 0x414,((undefined1 *)(unsigned)0x8c13f750),ar6_00,uVar1); });
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_ENV_0e78c4\n.set _s_GRAPHICS_ENV_0e78c4, _s_GRAPHICS_ENV_0e78c4_def\n");
//@unit 8c0e79d4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12b3b8_m1_0e79d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b3b8_m1_0e79d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  int iVar2;
  
  if (*(int *)(unsigned)(0x410 + ar4) != 0) {
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        if (*(int *)(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
          a4 = *(int *)(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x20))))(a4,ar5,ar6,ar7));
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _Class_12b3b8_m1_0e79d4\n.set _Class_12b3b8_m1_0e79d4, _Class_12b3b8_m1_0e79d4_def\n");
//@unit 8c0e7a70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0e7a70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_0e7a70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0e7a70\n.set _ret_const_1_0e7a70, _ret_const_1_0e7a70_def\n");
//@unit 8c0e7a78
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e7a78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e7a78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int ain0;
  
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f764);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined1 *)(unsigned)0x8c13f768);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13f76c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13f770);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13f774);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13f778);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13f77c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13f780);
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x74)),ar5,ar6,ar7));
  iVar1 = ar4 + 0x228;
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0194c0(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c219038(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c21907e(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x414) + 0x14))))((int *)(unsigned)(ar4 + 0x414),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x410) == 0) {
    (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  else {
    if ((*(short *)(unsigned)(ar4 + 0x224) != -1) && (*(short *)(unsigned)(ar4 + 0x226) != -1)) {
      piVar4 = (int *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x226) * 0x80 + *(short *)(unsigned)(ar4 + 0x224) * 0x20 + 0xa4)
      ;
      uVar2 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c256328(0,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019058(uVar2,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c016524(ar4 + 0x444,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c256210(1,ar5,ar6,ar7));
      if (*piVar4 != 0) {
        ar7 = 4;
        ar6 = 0x8c437c48;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c016318(((undefined1 *)(fr0_ - 0x74)),&(*(undefined4 *)(fr0_ - 0x50)),0x8c437c48,4); });
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c016324(((undefined1 *)(fr0_ - 0x74)),&(*(undefined2 *)(fr0_ - 0x60)),ar6,ar7));
        uVar2 = 0x80000060;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c015198(((undefined1 *)(fr0_ - 0x74)),0x80000060,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c01538c(ar4 + 0x488,uVar2,ar6,ar7));
        ar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c014a94(ar4 + 0x488,1,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_05c284(*piVar4,ar5,ar6,ar7));
        if (iVar1 == 0) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x1f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x1f;
        }
        else if (iVar1 == 10) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x114))))(*piVar4,ar5,ar6,ar7));
          if (iVar1 == 0x11) {
            (*(undefined2 *)(fr0_ - 0x60)) = 0;
            (*(undefined2 *)(fr0_ - 0x5e)) = 0x3f;
            (*(undefined2 *)(fr0_ - 0x5c)) = 0;
            (*(undefined2 *)(fr0_ - 0x5a)) = 0x20;
            (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x56)) = 0x20;
            (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x52)) = 0x3f;
          }
          else {
            (*(undefined2 *)(fr0_ - 0x60)) = 0;
            (*(undefined2 *)(fr0_ - 0x5e)) = 0x9f;
            (*(undefined2 *)(fr0_ - 0x5c)) = 0;
            (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
            (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x56)) = 0x80;
            (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x52)) = 0x9f;
          }
        }
        else if (iVar1 == 0xe) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x7f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0x60;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0x60;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x7f;
        }
        else if (iVar1 == 0xf) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x5f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0x40;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0x40;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x5f;
        }
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x74)),ar5,ar6,ar7));
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        if (*(int *)(unsigned)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4) != 0) {
          piVar4 = (int *)(unsigned)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4);
          ain0 = iVar3;
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x124))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x128))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 300))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x80)),ar6,ar7));
          ar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
          ar4_00 = *piVar4;
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0f4b44(ar4_00,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c219070(ar4_00,ar5,ar6,ar7));
          uVar2 = 0;
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c256328(0,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019058(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019128(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0190f0(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019160(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019198(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x3c))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c256210(1,ar5,ar6,ar7));
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e7a78\n.set _FUN_8c0e7a78, _FUN_8c0e7a78_def\n");
//@unit 8c0e8040
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_3f800000_0e8040_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_3f800000_0e8040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _ret_const_3f800000_0e8040\n.set _ret_const_3f800000_0e8040, _ret_const_3f800000_0e8040_def\n");
//@unit 8c0e8048
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_to_set_texture_wrap_0e8048_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_set_texture_wrap_0e8048";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x488,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_to_set_texture_wrap_0e8048\n.set _s_Failed_to_set_texture_wrap_0e8048, _s_Failed_to_set_texture_wrap_0e8048_def\n");
//@unit 8c0e806c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Failed_wrap_0e806c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_wrap_0e806c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x488,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_0e806c\n.set _s_Failed_wrap_0e806c, _s_Failed_wrap_0e806c_def\n");
//@unit 8c0e8090
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8090_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8090";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined2 *puVar1;
  
  ({ unsigned long t0_ = (unsigned long)(&(*(undefined2 *)(fr0_ - 0x10))); *(unsigned *)((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c0e8ae0(ar4,ar5,ar6,ar7); });
  puVar1 = (undefined2 *)(unsigned)(ar4 + 0x224);
  *puVar1 = (*(undefined2 *)(fr0_ - 0x10));
  puVar1[1] = (*(undefined2 *)(fr0_ - 0xe));
  (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  if ((*(short *)(unsigned)(0x224 + ar4) != -1) && (*(short *)(unsigned)(0x226 + ar4) != -1)) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e810c(ar4,ar5,ar4 + 0x224,ar7));
    ar5 = 0;
  }
  return ar5;
}

__asm__(".globl _FUN_8c0e8090\n.set _FUN_8c0e8090, _FUN_8c0e8090_def\n");
//@unit 8c0e810c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e810c_def(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e810c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  short *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0xa4 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6fb8(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + 0xa4,ar5_00,ar6_00,ar7));
  *(int *)(unsigned)(0x410 + ar4) = *(int *)(unsigned)(0x410 + ar4) + 1;
  ar6[1] = -1;
  *ar6 = -1;
  return ar5;
}

__asm__(".globl _FUN_8c0e810c\n.set _FUN_8c0e810c, _FUN_8c0e810c_def\n");
//@unit 8c0e81b4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e81b4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e81b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(ar5,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x4c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e81b4\n.set _FUN_8c0e81b4, _FUN_8c0e81b4_def\n");
//@unit 8c0e81f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e81f0_def(int ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e81f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(unsigned)
           (0xa4 +
           ar4 + *(short *)(unsigned)(0x226 + ar4) * 0x80 + *(short *)(unsigned)(0x224 + ar4) * 0x20);
  *(undefined4 *)(unsigned)(0xa4 + ar4 + ar5[1] * 0x80 + *ar5 * 0x20) = 0;
  *(int *)(unsigned)(0x410 + ar4) = *(int *)(unsigned)(0x410 + ar4) + -1;
  *(undefined4 *)(unsigned)(0x440 + ar4) = 1;
  return uVar1;
}

__asm__(".globl _FUN_8c0e81f0\n.set _FUN_8c0e81f0, _FUN_8c0e81f0_def\n");
//@unit 8c0e8278
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_0e8278_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_1_0e8278";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_0e8278\n.set _ret_const_1_0e8278, _ret_const_1_0e8278_def\n");
//@unit 8c0e8280
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8280_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8280";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 100)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x20)),ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x30)) = ar4_00;
  (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0637d0(ar5,uVar2,ar6,ar7));
  if ((*(int *)(fr0_ - 0x34)) == 0) {
    (*(int *)(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c100898(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x38)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1004b4(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x3c)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1008e4(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x3c)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10052c(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x40)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c100930(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x40)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1005a4(ar5,uVar2,ar6,ar7));
    }
    (*(int *)(fr0_ - 0x44)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10097c(ar5,uVar2,ar6,ar7));
    if ((*(int *)(fr0_ - 0x44)) == 1) {
      (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10061c(ar5,uVar2,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c1002a8(ar5,uVar2,ar6,ar7));
    ar6_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c101210(ar5,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7));
    ({ unsigned long t0_ = (unsigned long)(&(*(undefined2 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 100)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 100)) - 8); FUN_8c0e89c4(ar4,((undefined1 *)(fr0_ - 0x20)),ar6_00,ar7); });
    puVar1 = (undefined2 *)(unsigned)(ar4 + 0x224);
    *puVar1 = (*(undefined2 *)(fr0_ - 0x5c));
    puVar1[1] = (*(undefined2 *)(fr0_ - 0x5a));
    (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x5c)),0xffffffff,ar6_00,ar7));
    if ((*(short *)(unsigned)(0x224 + ar4) != -1) && (*(short *)(unsigned)(0x226 + ar4) != -1)) {
      uVar2 = *(undefined4 *)(unsigned)0x8c431a58;
      (*(int *)(fr0_ - 0x48)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c01ad9c(ar4_00,uVar2,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x48)) == 4) {
        (*(int *)(fr0_ - 0x54)) = (int)*(short *)(unsigned)(0x226 + ar4);
        (*(int *)(fr0_ - 0x58)) = (int)*(short *)(unsigned)(0x224 + ar4);
        if ((*(int *)(unsigned)(0xa4 + ar4 + (*(int *)(fr0_ - 0x54)) * 0x80 + (*(int *)(fr0_ - 0x58)) * 0x20) != 0) &&
           ((*(int *)(fr0_ - 0x4c)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c10031c(ar5,uVar2,ar6_00,ar7)), (*(int *)(fr0_ - 0x4c)) == 1)) {
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c51c4(ar5,uVar2,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e84c8(((undefined1 *)(fr0_ - 0x60)),ar4 + 0x224,ar6_00,ar7));
          (*(undefined4 *)(fr0_ - 0x50)) = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e81f0(ar4,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e59c0(ar5,(*(undefined4 *)(fr0_ - 0x50)),ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), free_if_nonnull_wrap_016660(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7));
          uVar2 = 3;
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0e4330(ar5,3,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0c90d0(ar5,uVar2,ar6_00,ar7));
        }
      }
    }
    (*(undefined4 *)(fr0_ - 0x2c)) = 1;
    (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
    (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x28)) = 1;
    (vsp = ((unsigned long)(fr0_ - 100)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return (*(undefined4 *)(fr0_ - 0x28));
}

__asm__(".globl _FUN_8c0e8280\n.set _FUN_8c0e8280, _FUN_8c0e8280_def\n");
//@unit 8c0e84c8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined2 * FUN_8c0e84c8_def(undefined2 *ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e84c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  return ar4;
}

__asm__(".globl _FUN_8c0e84c8\n.set _FUN_8c0e84c8, _FUN_8c0e84c8_def\n");
//@unit 8c0e84d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e84d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e84d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e84d8\n.set _FUN_8c0e84d8, _FUN_8c0e84d8_def\n");
//@unit 8c0e84f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e84f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e84f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0194c0(ar4 + 0x228,ar5,ar6,ar7));
  iVar1 = 0x440;
  *(undefined4 *)(unsigned)(0x440 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0e84f8\n.set _FUN_8c0e84f8, _FUN_8c0e84f8_def\n");
//@unit 8c0e8538
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8538_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8538";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8538\n.set _FUN_8c0e8538, _FUN_8c0e8538_def\n");
//@unit 8c0e855c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e855c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e855c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(int *)(unsigned)(0x440 + ar4) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0e855c\n.set _FUN_8c0e855c, _FUN_8c0e855c_def\n");
//@unit 8c0e8574
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8574_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8574";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x228) + 0xc))))((int *)(unsigned)(ar4 + 0x228),ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e8574\n.set _FUN_8c0e8574, _FUN_8c0e8574_def\n");
//@unit 8c0e8598
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8598";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(int *)(unsigned)(iVar5 * 0x80 + ar5) != -1) {
        ar6_00 = *(undefined4 *)(unsigned)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fef94))))
                          (0x8c3eb324,*(undefined4 *)(unsigned)(iVar5 * 0x80 + ar5),ar6_00,ar7));
        *(undefined4 *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(int *)(unsigned)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x108 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x148 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x108 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x148 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = 0x8c3eb334;
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
          iVar2 = *(int *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,uVar1,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d6fb8))))
                    (ar4 + iVar6 * 0x80 + iVar7 * 0x20 + 0xa4,uVar1,iVar3,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c4da0))))
                  (ar4,*(undefined4 *)(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20),iVar3,ar7));
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  *(int *)(unsigned)(0x410 + ar4) = iVar4;
  return 1;
}

__asm__(".globl _FUN_8c0e8598\n.set _FUN_8c0e8598, _FUN_8c0e8598_def\n");
//@unit 8c0e8840
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8840_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8840";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(iVar2 * 0x80 + ar5) = 0xffffffff;
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(int *)(unsigned)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20) != 0) {
        a4 = *(int *)(unsigned)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20);
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x15c + *(int *)(unsigned)(a4 + 8)))))(a4,ar5 + iVar1 * 0x80,ar6,ar7));
        iVar1 = iVar1 + 1;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e8840\n.set _FUN_8c0e8840, _FUN_8c0e8840_def\n");
//@unit 8c0e88fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e88fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e88fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e88fc\n.set _noop_0e88fc, _noop_0e88fc_def\n");
//@unit 8c0e8900
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8900_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8900";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(unsigned)(0x410 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x440 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1b90(ar4 + iVar1 * 0x80 + iVar2 * 0x20 + 0xa4,ar5,ar6,ar7));
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0e8900\n.set _FUN_8c0e8900, _FUN_8c0e8900_def\n");
//@unit 8c0e89a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e89a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e89a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x1b0 + *ar4))))(ar4,1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e89a0\n.set _FUN_8c0e89a0, _FUN_8c0e89a0_def\n");
//@unit 8c0e89c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e89c4_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e89c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double in_dr2 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10273c(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,0xffffffff,ar7));
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  fVar4 = (*(undefined1 *)(unsigned)0x8c1264bc);
  if (cVar7 == '\0') {
    fVar2 = *(float *)(unsigned)ar5;
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  }
  if (fVar2 == fVar4) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e84c8(s0,&(*(undefined2 *)(fr0_ - 0x10)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,ar6_00,ar7));
  }
  else {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = CONCAT44D(*(float *)(unsigned)ar5,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *ar5;
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42f00000,(float)iVar1);
      }
      else {
        dVar3 = 206158464480.0;
      }
      if (cVar6 == '\0') {
        fVar2 = F32LO(dVar3) * F32HI(dVar3);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42480000,fVar2);
      }
      else {
        dVar3 = 123145319686144.0;
      }
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr2) <
                F32LO(dVar3) + F32HI(dVar3);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = CONCAT44D(*(float *)(unsigned)ar5,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *ar5;
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42f00000,(float)iVar1);
        }
        else {
          dVar3 = 206158464480.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) * F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42480000,fVar2);
        }
        else {
          dVar3 = 123145319686144.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) + F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42dc0000,fVar2);
        }
        else {
          dVar3 = 32985353214976.0;
        }
        if (cVar6 == '\0') {
          bVar5 = F32LO(dVar3) + F32HI(dVar3) <
                  F32HI(in_dr2);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          (*(undefined2 *)(fr0_ - 0x10)) = (undefined2)iVar1;
          break;
        }
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = CONCAT44D(*(float *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42be0000,(float)iVar1);
      }
      else {
        dVar3 = 8796095209216.0;
      }
      if (cVar6 == '\0') {
        fVar2 = F32LO(dVar3) * F32HI(dVar3);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42a00000,fVar2);
      }
      else {
        dVar3 = 14293653344256.0;
      }
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr2) <
                F32LO(dVar3) + F32HI(dVar3);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = CONCAT44D(*(float *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42be0000,(float)iVar1);
        }
        else {
          dVar3 = 8796095209216.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) * F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42a00000,fVar2);
        }
        else {
          dVar3 = 14293653344256.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) + F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42aa0000,fVar2);
        }
        else {
          dVar3 = 2.993931217461508e-78;
        }
        if (cVar6 == '\0') {
          bVar5 = F32LO(dVar3) + F32HI(dVar3) <
                  F32HI(in_dr2);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          (*(undefined2 *)(fr0_ - 0xe)) = (undefined2)iVar1;
          break;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e84c8(s0,&(*(undefined2 *)(fr0_ - 0x10)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,ar6_00,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0e89c4\n.set _FUN_8c0e89c4, _FUN_8c0e89c4_def\n");
//@unit 8c0e8ae0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8ae0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8ae0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  int iVar2;
  
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c10273c(&(*(undefined2 *)(fr0_ - 0x1c)),0xffffffff,0xffffffff,ar7));
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e84c8(s0,&(*(undefined2 *)(fr0_ - 0x1c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
      return 0;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      (*(int *)(fr0_ - 0x18)) = iVar2;
      (*(int *)(fr0_ - 0x14)) = iVar1;
      if (*(int *)(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
        (*(undefined2 *)(fr0_ - 0x1c)) = (undefined2)iVar2;
        (*(undefined2 *)(fr0_ - 0x1a)) = (undefined2)iVar1;
        goto LAB_8c0e8b40;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0e8ae0\n.set _FUN_8c0e8ae0, _FUN_8c0e8ae0_def\n");
//@unit 8c0e8b74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_410_0e8b74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_410_0e8b74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x410 + ar4);
}

__asm__(".globl _get_field_410_0e8b74\n.set _get_field_410_0e8b74, _get_field_410_0e8b74_def\n");
//@unit 8c0e8b80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8b80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8b80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8b80\n.set _noop_0e8b80, _noop_0e8b80_def\n");
//@unit 8c0e8b84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8b84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8b84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8b84\n.set _ret_const_0_0e8b84, _ret_const_0_0e8b84_def\n");
//@unit 8c0e8b8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8b8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8b8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8b8c\n.set _noop_0e8b8c, _noop_0e8b8c_def\n");
//@unit 8c0e8b90
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8b90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8b90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8b90\n.set _noop_0e8b90, _noop_0e8b90_def\n");
//@unit 8c0e8b94
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8b94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8b94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8b94\n.set _ret_const_0_0e8b94, _ret_const_0_0e8b94_def\n");
//@unit 8c0e8b9c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8b9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8b9c\n.set _noop_0e8b9c, _noop_0e8b9c_def\n");
//@unit 8c0e8ba0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8ba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8ba0\n.set _noop_0e8ba0, _noop_0e8ba0_def\n");
//@unit 8c0e8ba4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8ba4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8ba4\n.set _noop_0e8ba4, _noop_0e8ba4_def\n");
//@unit 8c0e8ba8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8ba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8ba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8ba8\n.set _noop_0e8ba8, _noop_0e8ba8_def\n");
//@unit 8c0e8bac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8bac\n.set _ret_const_0_0e8bac, _ret_const_0_0e8bac_def\n");
//@unit 8c0e8bb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bb4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _ret_const_0_0e8bb4\n.set _ret_const_0_0e8bb4, _ret_const_0_0e8bb4_def\n");
//@unit 8c0e8bbc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8bbc\n.set _ret_const_0_0e8bbc, _ret_const_0_0e8bbc_def\n");
//@unit 8c0e8bc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bc4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8bc4\n.set _ret_const_0_0e8bc4, _ret_const_0_0e8bc4_def\n");
//@unit 8c0e8bcc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8bcc\n.set _ret_const_0_0e8bcc, _ret_const_0_0e8bcc_def\n");
//@unit 8c0e8bd4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8bd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8bd4\n.set _noop_0e8bd4, _noop_0e8bd4_def\n");
//@unit 8c0e8bd8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bd8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _ret_const_0_0e8bd8\n.set _ret_const_0_0e8bd8, _ret_const_0_0e8bd8_def\n");
//@unit 8c0e8be0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8be0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8be0\n.set _noop_0e8be0, _noop_0e8be0_def\n");
//@unit 8c0e8be4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8be4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8be4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8be4\n.set _noop_0e8be4, _noop_0e8be4_def\n");
//@unit 8c0e8be8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8be8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8be8\n.set _noop_0e8be8, _noop_0e8be8_def\n");
//@unit 8c0e8bec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8bec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8bec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8bec\n.set _ret_const_0_0e8bec, _ret_const_0_0e8bec_def\n");
//@unit 8c0e8bf4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8bf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x10dc;
  *(undefined4 *)(unsigned)(0x10dc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e8bf4\n.set _FUN_8c0e8bf4, _FUN_8c0e8bf4_def\n");
//@unit 8c0e8c00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8c00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8c08);
}

__asm__(".globl _FUN_8c0e8c00\n.set _FUN_8c0e8c00, _FUN_8c0e8c00_def\n");
//@unit 8c0e8c0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8c0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8c14);
}

__asm__(".globl _FUN_8c0e8c0c\n.set _FUN_8c0e8c0c, _FUN_8c0e8c0c_def\n");
//@unit 8c0e8c18
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_10dc_0e8c18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_10dc_0e8c18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x10dc + ar4);
}

__asm__(".globl _get_field_10dc_0e8c18\n.set _get_field_10dc_0e8c18, _get_field_10dc_0e8c18_def\n");
//@unit 8c0e8c24
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8c24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x10dc;
}

__asm__(".globl _FUN_8c0e8c24\n.set _FUN_8c0e8c24, _FUN_8c0e8c24_def\n");
//@unit 8c0e8c34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_9d4_0e8c34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_9d4_0e8c34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x9d4 + ar4);
}

__asm__(".globl _get_field_9d4_0e8c34\n.set _get_field_9d4_0e8c34, _get_field_9d4_0e8c34_def\n");
//@unit 8c0e8c40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_acc_0e8c40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_acc_0e8c40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xacc + ar4);
}

__asm__(".globl _get_field_acc_0e8c40\n.set _get_field_acc_0e8c40, _get_field_acc_0e8c40_def\n");
//@unit 8c0e8c4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8c4c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8c4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8c4c\n.set _ret_const_0_0e8c4c, _ret_const_0_0e8c4c_def\n");
//@unit 8c0e8c54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0xc0c;
}

__asm__(".globl _FUN_8c0e8c54\n.set _FUN_8c0e8c54, _FUN_8c0e8c54_def\n");
//@unit 8c0e8c64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float in_fr4 = 0;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(unsigned)(ar4 + 0x106c) = in_fr4;
  return 0x106c;
}

__asm__(".globl _FUN_8c0e8c64\n.set _FUN_8c0e8c64, _FUN_8c0e8c64_def\n");
//@unit 8c0e8c7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8c7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x106c;
}

__asm__(".globl _FUN_8c0e8c7c\n.set _FUN_8c0e8c7c, _FUN_8c0e8c7c_def\n");
//@unit 8c0e8c8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8c8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8c94);
}

__asm__(".globl _FUN_8c0e8c8c\n.set _FUN_8c0e8c8c, _FUN_8c0e8c8c_def\n");
//@unit 8c0e8c98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8c98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8c98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8ca0);
}

__asm__(".globl _FUN_8c0e8c98\n.set _FUN_8c0e8c98, _FUN_8c0e8c98_def\n");
//@unit 8c0e8ca4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8ca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8ca4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98d4(ar4 + 0x22704,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8ca4\n.set _FUN_8c0e8ca4, _FUN_8c0e8ca4_def\n");
//@unit 8c0e8cc8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8cc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8cc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x23250;
  *(undefined4 *)(unsigned)(0x23250 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e8cc8\n.set _FUN_8c0e8cc8, _FUN_8c0e8cc8_def\n");
//@unit 8c0e8cd4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_23250_0e8cd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_23250_0e8cd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x23250 + ar4);
}

__asm__(".globl _get_field_23250_0e8cd4\n.set _get_field_23250_0e8cd4, _get_field_23250_0e8cd4_def\n");
//@unit 8c0e8ce0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_23254_0e8ce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_23254_0e8ce0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x23254 + ar4);
}

__asm__(".globl _get_field_23254_0e8ce0\n.set _get_field_23254_0e8ce0, _get_field_23254_0e8ce0_def\n");
//@unit 8c0e8cec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8cec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x2324c;
}

__asm__(".globl _FUN_8c0e8cec\n.set _FUN_8c0e8cec, _FUN_8c0e8cec_def\n");
//@unit 8c0e8cfc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8cfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8cfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0de6c0(ar4 + 0x13b24,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0e8cfc\n.set _FUN_8c0e8cfc, _FUN_8c0e8cfc_def\n");
//@unit 8c0e8d28
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8d28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8d28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0de6b0(ar4 + 0x13b70,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl _FUN_8c0e8d28\n.set _FUN_8c0e8d28, _FUN_8c0e8d28_def\n");
//@unit 8c0e8d54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8d54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8d54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e8d80(ar4 + 0x13b8c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8d54\n.set _FUN_8c0e8d54, _FUN_8c0e8d54_def\n");
//@unit 8c0e8d80
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8d80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8d80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float in_fr4 = 0;
  
  if (in_fr4 < 0.0) {
    in_fr4 = 0.0;
  }
  *(float *)(unsigned)(ar4 + 0xeb40) = in_fr4;
  return 0xeb40;
}

__asm__(".globl _FUN_8c0e8d80\n.set _FUN_8c0e8d80, _FUN_8c0e8d80_def\n");
//@unit 8c0e8d98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8d98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x226f4;
  *(undefined4 *)(unsigned)(0x226f4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0e8d98\n.set _FUN_8c0e8d98, _FUN_8c0e8d98_def\n");
//@unit 8c0e8da4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8da4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8da4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8dac);
}

__asm__(".globl _FUN_8c0e8da4\n.set _FUN_8c0e8da4, _FUN_8c0e8da4_def\n");
//@unit 8c0e8db0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8db0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8db0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x10ac;
}

__asm__(".globl _FUN_8c0e8db0\n.set _FUN_8c0e8db0, _FUN_8c0e8db0_def\n");
//@unit 8c0e8dc0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_226f4_0e8dc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_226f4_0e8dc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x226f4 + ar4);
}

__asm__(".globl _get_field_226f4_0e8dc0\n.set _get_field_226f4_0e8dc0, _get_field_226f4_0e8dc0_def\n");
//@unit 8c0e8dcc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8dcc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8dcc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + ar5 * 0x16c + 0x22d48;
}

__asm__(".globl _FUN_8c0e8dcc\n.set _FUN_8c0e8dcc, _FUN_8c0e8dcc_def\n");
//@unit 8c0e8dec
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c0e8dec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8dec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c0e8df4);
}

__asm__(".globl _FUN_8c0e8dec\n.set _FUN_8c0e8dec, _FUN_8c0e8dec_def\n");
//@unit 8c0e8df8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8df8_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8df8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(unsigned)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x2281c);
}

__asm__(".globl _FUN_8c0e8df8\n.set _FUN_8c0e8df8, _FUN_8c0e8df8_def\n");
//@unit 8c0e8e74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8e74_def(int ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8e74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*ar5 / 224.54546);
  iVar2 = (int)(ar5[2] / 150.0);
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  else if (10 < iVar1) {
    iVar1 = 10;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  else if (9 < iVar2) {
    iVar2 = 9;
  }
  return *(undefined4 *)(unsigned)(iVar1 * 0x78 + ar4 + iVar2 * 0xc + 0x22820);
}

__asm__(".globl _FUN_8c0e8e74\n.set _FUN_8c0e8e74, _FUN_8c0e8e74_def\n");
//@unit 8c0e8ef0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8ef0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8ef0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x2274c;
}

__asm__(".globl _FUN_8c0e8ef0\n.set _FUN_8c0e8ef0, _FUN_8c0e8ef0_def\n");
//@unit 8c0e8f00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e8f00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8f00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x10ac;
}

__asm__(".globl _FUN_8c0e8f00\n.set _FUN_8c0e8f00, _FUN_8c0e8f00_def\n");
//@unit 8c0e8f10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8f10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8f10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_48_0e8f38(ar4 + 0x13b24,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8f10\n.set _FUN_8c0e8f10, _FUN_8c0e8f10_def\n");
//@unit 8c0e8f38
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_48_0e8f38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "get_field_48_0e8f38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x48);
}

__asm__(".globl _get_field_48_0e8f38\n.set _get_field_48_0e8f38, _get_field_48_0e8f38_def\n");
//@unit 8c0e8f40
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8f40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8f40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8f40\n.set _noop_0e8f40, _noop_0e8f40_def\n");
//@unit 8c0e8f44
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8f44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8f44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8f44\n.set _noop_0e8f44, _noop_0e8f44_def\n");
//@unit 8c0e8f48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0e8f48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "noop_0e8f48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0e8f48\n.set _noop_0e8f48, _noop_0e8f48_def\n");
//@unit 8c0e8f4c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0e8f4c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "ret_const_0_0e8f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0e8f4c\n.set _ret_const_0_0e8f4c, _ret_const_0_0e8f4c_def\n");
//@unit 8c0e8f54
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8f54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e8f54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126478),ar5,ar6,ar7));
  uVar3 = 0x8c437520;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437520,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126488),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43752c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43752c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126498),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437538;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437538,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264a8),pcVar2,uVar3,ar7));
  uVar3 = 0x8c437544;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c437544,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8) = CONCAT44((*(undefined1 *)(unsigned)0x8c1264bc),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8) = 0xffffffff00800000;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(0x8c4377f4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c4377e8;
  pcVar2 = ((void *)0x8c0153e4);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0153e4),0x8c4377e8,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437a78,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437a6c;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437a6c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437aa4,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437a98;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437a98,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437ad0,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437ac4;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437ac4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102a08(0x8c437afc,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437af0;
  pcVar2 = ((void *)0x8c0d6424);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d6424),0x8c437af0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10291c(0x8c437b28,pcVar2,uVar3,ar7));
  uVar3 = 0x8c437b1c;
  pcVar2 = ((void *)0x8c0d63c0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0d63c0),0x8c437b1c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0243b0(0x8c437b48,pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c0ba180),0x8c437b3c,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e8f54\n.set _FUN_8c0e8f54, _FUN_8c0e8f54_def\n");
//@unit 8c0e91b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c0e91b8_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e91b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e96b8(ar4,ar5,ar6,ar7));
  ar4[0x39] = 0;
  ar4[0x3c] = 0;
  ar4[0x3b] = 0;
  ar4[0x3d] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0e91b8\n.set _FUN_8c0e91b8, _FUN_8c0e91b8_def\n");
//@unit 8c0e91f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0e91f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_0e91f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0e91f0\n.set _free_if_nonnull_wrap_0e91f0, _free_if_nonnull_wrap_0e91f0_def\n");
//@unit 8c0e9220
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e9220_def(int ar4,undefined4 ar5,int ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9220";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *a7;
  char cVar8;
  
  puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  iVar3 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c14012c));
  do {
    puVar4 = puVar5 + 1;
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar6[1] = *puVar4;
    puVar6 = puVar6 + 2;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  uVar7 = ar5;
  a7 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c02602c(ar5,ar5,ar6,ar7));
  if (*(uint *)(unsigned)(0xb4 + ar4) != (uVar1 & 0xffff)) {
    if (*(uint *)(unsigned)(0xb4 + ar4) < 5) {
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
      *(byte *)(unsigned)(0xbc + ar4) = (byte)(((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
      *(char *)(unsigned)(0xbc + ar4) =
           *(char *)(unsigned)(0xbc + ar4) - (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f);
      uVar7 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,0xb,ar6,a7));
      *(char *)(unsigned)(ar4 + 0x4d) = (char)uVar7;
      *(undefined1 *)(unsigned)(ar4 + 0x4e) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x11) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x4f) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x12) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x13) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x50) = *(char *)(unsigned)(ar4 + 0x50) + '\x01';
          }
        }
      }
      for (iVar3 = 0; iVar3 < 0x12; iVar3 = iVar3 + 1) {
        for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 * 2 + iVar2 + 0x51) = 0;
          *(undefined1 *)(unsigned)(ar4 + iVar3 * 2 + iVar2 + 0x75) = 0;
        }
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 8) = 0;
    *(undefined4 *)(unsigned)(ar4 + 4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(int *)(unsigned)(ar4 + 0x10) = *(int *)(unsigned)(ar4 + 0x10) + 1;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),0x12c,ar6,a7));
    if (iVar3 == 0xc8) {
      *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),0x5a,ar6,a7));
    if (iVar3 == 0x4b) {
      *(undefined4 *)(unsigned)(ar4 + 8) = 1;
    }
    uVar7 = 100;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(undefined4 *)(unsigned)(0xb4 + ar4),100,ar6,a7));
    if (iVar3 == 0x41) {
      *(undefined4 *)(unsigned)(ar4 + 0xc) = 1;
    }
    *(undefined1 *)(unsigned)(0xbd + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
    cVar8 = -(char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f) -
            (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
    if (cVar8 != *(char *)(unsigned)(0xbc + ar4)) {
      *(undefined1 *)(unsigned)(0xbd + ar4) = 1;
    }
    *(char *)(unsigned)(0xbc + ar4) = cVar8;
  }
  *(undefined4 *)(unsigned)(0xcc + ar4) = 1;
  *(undefined4 *)(unsigned)(0xd0 + ar4) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c02602c(ar5,uVar7,ar6,a7));
  iVar3 = 0xb4;
  *(uint *)(unsigned)(0xb4 + ar4) = uVar1 & 0xffff;
  return iVar3;
}

__asm__(".globl _FUN_8c0e9220\n.set _FUN_8c0e9220, _FUN_8c0e9220_def\n");
//@unit 8c0e9668
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e9668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9668";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0xbe;
  iVar2 = 2;
  if (*(char *)(unsigned)(0xbe + ar4) < '\x02') {
    *(char *)(unsigned)(0xbe + ar4) = *(char *)(unsigned)(0xbe + ar4) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e9668\n.set _FUN_8c0e9668, _FUN_8c0e9668_def\n");
//@unit 8c0e9690
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e9690_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9690";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0xbe;
  iVar2 = (int)*(char *)(unsigned)(0xbe + ar4);
  if (0 < *(char *)(unsigned)(0xbe + ar4)) {
    *(char *)(unsigned)(0xbe + ar4) = *(char *)(unsigned)(0xbe + ar4) + -1;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0e9690\n.set _FUN_8c0e9690, _FUN_8c0e9690_def\n");
//@unit 8c0e96b8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e96b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e96b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x38) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x45) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x3a) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x4d) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x4e) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x4f) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xbe) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xc4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 200) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xcc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xd0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xac) = 4;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xbc) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xbd) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x4c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0xb4) = 0;
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0xa4) = 0;
    *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x9c) = 0;
  }
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(iVar1 * 0xc + ar4 + iVar2 * 4 + 0x14) = 0x47c35000;
    }
  }
  for (iVar1 = 0; iVar1 < 0x12; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
      *(undefined1 *)(unsigned)(ar4 + iVar1 * 2 + iVar2 + 0x51) = 0;
      *(undefined1 *)(unsigned)(ar4 + iVar1 * 2 + iVar2 + 0x75) = 0;
    }
  }
  return 0x12;
}

__asm__(".globl _FUN_8c0e96b8\n.set _FUN_8c0e96b8, _FUN_8c0e96b8_def\n");
//@unit 8c0e983c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e983c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e983c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9890(ar4,(int)*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9888(ar4,(int)ar5[1],ar6,ar7));
  ar4[0x3d] = ar5[2];
  *ar4 = ar5[3];
  ar4[0x3b] = ar5[4];
  return 0x3b;
}

__asm__(".globl _FUN_8c0e983c\n.set _FUN_8c0e983c, _FUN_8c0e983c_def\n");
//@unit 8c0e9888
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e9888_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9888";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x3c) = (undefined1)ar5;
  return 0x3c;
}

__asm__(".globl _FUN_8c0e9888\n.set _FUN_8c0e9888, _FUN_8c0e9888_def\n");
//@unit 8c0e9890
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e9890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9890";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x39) = (undefined1)ar5;
  return 0x39;
}

__asm__(".globl _FUN_8c0e9890\n.set _FUN_8c0e9890, _FUN_8c0e9890_def\n");
//@unit 8c0e9898
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e9898_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9898";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e98f0(ar4,ar5,ar6,ar7));
  *ar5 = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e98e8(ar4,ar5_00,ar6,ar7));
  ar5[1] = (char)uVar2;
  ar5[2] = ar4[0x3d];
  ar5[3] = *ar4;
  cVar1 = ar4[0x3b];
  ar5[4] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c0e9898\n.set _FUN_8c0e9898, _FUN_8c0e9898_def\n");
//@unit 8c0e98e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e98e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e98e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x3c);
}

__asm__(".globl _FUN_8c0e98e8\n.set _FUN_8c0e98e8, _FUN_8c0e98e8_def\n");
//@unit 8c0e98f0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e98f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e98f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x39);
}

__asm__(".globl _FUN_8c0e98f0\n.set _FUN_8c0e98f0, _FUN_8c0e98f0_def\n");
//@unit 8c0e98f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e98f8_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e98f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return 0;
}

__asm__(".globl _FUN_8c0e98f8\n.set _FUN_8c0e98f8, _FUN_8c0e98f8_def\n");
//@unit 8c0e9910
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c0e9910_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e9910";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0e9910\n.set _FUN_8c0e9910, _FUN_8c0e9910_def\n");
//@unit 8c0e992c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e992c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e992c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264c0),ar5,ar6,ar7));
  uVar3 = 0x8c438440;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438440,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264d0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43844c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43844c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264e0),pcVar2,uVar3,ar7));
  uVar3 = 0x8c438458;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438458,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c1264f0),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438464,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126500) = CONCAT44((*(undefined1 *)(unsigned)0x8c126504),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c126500) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c0e992c\n.set _FUN_8c0e992c, _FUN_8c0e992c_def\n");
//@unit 8c0e99e4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e99e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e99e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 7188; for (int i_ = 0; i_ < 7188; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126508),ar5,ar6,ar7));
  uVar3 = 0x8c438478;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438478,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126518),pcVar2,uVar3,ar7));
  uVar3 = 0x8c438484;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438484,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126528),((void *)0x8c022ce8),uVar3,ar7));
  uVar3 = 0x8c438490;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c438490,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c126538),pcVar2,uVar3,ar7));
  uVar3 = 0x8c43849c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c43849c,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18)),pcVar2,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43957c,((undefined1 *)(fr0_ - 0x18)),uVar3,ar7));
  uVar3 = 0x8c4384a8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384a8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x2c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439590,((undefined1 *)(fr0_ - 0x2c)),uVar3,ar7));
  uVar3 = 0x8c4384b4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384b4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x40)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4395a4,((undefined1 *)(fr0_ - 0x40)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c4384c0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384c0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x40)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x54)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4395b8,((undefined1 *)(fr0_ - 0x54)),uVar3,ar7));
  uVar3 = 0x8c4384cc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384cc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x54)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x68)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4395cc,((undefined1 *)(fr0_ - 0x68)),uVar3,ar7));
  uVar3 = 0x8c4384d8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384d8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x68)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x7c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4395e0,((undefined1 *)(fr0_ - 0x7c)),uVar3,ar7));
  uVar3 = 0x8c4384e4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384e4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x90)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4395f4,((undefined1 *)(fr0_ - 0x90)),uVar3,ar7));
  uVar3 = 0x8c4384f0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384f0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439608,((undefined1 *)(fr0_ - 0xa4)),uVar3,ar7));
  uVar3 = 0x8c4384fc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4384fc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43961c,((undefined1 *)(fr0_ - 0xb8)),uVar3,ar7));
  uVar3 = 0x8c438508;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438508,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xcc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439630,((undefined1 *)(fr0_ - 0xcc)),uVar3,ar7));
  uVar3 = 0x8c438514;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438514,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439644,((undefined1 *)(fr0_ - 0xe0)),uVar3,ar7));
  uVar3 = 0x8c438520;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438520,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439658,((undefined1 *)(fr0_ - 0xf4)),uVar3,ar7));
  uVar3 = 0x8c43852c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43852c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x108)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43966c,((undefined1 *)(fr0_ - 0x108)),uVar3,ar7));
  uVar3 = 0x8c438538;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438538,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x108)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439680,((undefined1 *)(fr0_ - 0x11c)),uVar3,ar7));
  uVar3 = 0x8c438544;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438544,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x130)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439694,((undefined1 *)(fr0_ - 0x130)),uVar3,ar7));
  uVar3 = 0x8c438550;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438550,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x130)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x144)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4396a8,((undefined1 *)(fr0_ - 0x144)),uVar3,ar7));
  uVar3 = 0x8c43855c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43855c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x144)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x158)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4396bc,((undefined1 *)(fr0_ - 0x158)),uVar3,ar7));
  uVar3 = 0x8c438568;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438568,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x158)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16c)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4396d0,((undefined1 *)(fr0_ - 0x16c)),pcVar2,ar7));
  uVar3 = 0x8c438574;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438574,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x180)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4396e4,((undefined1 *)(fr0_ - 0x180)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438580,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x180)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x194)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4396f8,((undefined1 *)(fr0_ - 0x194)),uVar3,ar7));
  uVar3 = 0x8c43858c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43858c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x194)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43970c,((undefined1 *)(fr0_ - 0x1a8)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438598,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a8)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1bc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439720,((undefined1 *)(fr0_ - 0x1bc)),uVar3,ar7));
  uVar3 = 0x8c4385a4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385a4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1bc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1d0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439734,((undefined1 *)(fr0_ - 0x1d0)),uVar3,ar7));
  uVar3 = 0x8c4385b0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385b0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1d0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1e4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439748,((undefined1 *)(fr0_ - 0x1e4)),uVar3,ar7));
  uVar3 = 0x8c4385bc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385bc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1e4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1f8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43975c,((undefined1 *)(fr0_ - 0x1f8)),uVar3,ar7));
  uVar3 = 0x8c4385c8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385c8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1f8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x20c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439770,((undefined1 *)(fr0_ - 0x20c)),uVar3,ar7));
  uVar3 = 0x8c4385d4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385d4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x20c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x220)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439784,((undefined1 *)(fr0_ - 0x220)),uVar3,ar7));
  uVar3 = 0x8c4385e0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385e0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x220)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x234)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439798,((undefined1 *)(fr0_ - 0x234)),uVar3,ar7));
  uVar3 = 0x8c4385ec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385ec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x234)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x248)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4397ac,((undefined1 *)(fr0_ - 0x248)),uVar3,ar7));
  uVar3 = 0x8c4385f8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4385f8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x248)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x25c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4397c0,((undefined1 *)(fr0_ - 0x25c)),uVar3,ar7));
  uVar3 = 0x8c438604;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438604,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x25c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x270)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4397d4,((undefined1 *)(fr0_ - 0x270)),uVar3,ar7));
  uVar3 = 0x8c438610;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438610,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x270)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x284)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4397e8,((undefined1 *)(fr0_ - 0x284)),uVar3,ar7));
  uVar3 = 0x8c43861c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43861c,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x284)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x298)),((undefined1 *)(fr0_ - 0x298)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4397fc,((undefined1 *)(fr0_ - 0x298)),uVar3,ar7));
  uVar3 = 0x8c438628;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438628,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x298)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x2ac)),((undefined1 *)(fr0_ - 0x2ac)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439810,((undefined1 *)(fr0_ - 0x2ac)),0x294,ar7));
  uVar3 = 0x8c438634;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438634,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x2c0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439824,((undefined1 *)(fr0_ - 0x2c0)),uVar3,ar7));
  uVar3 = 0x8c438640;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438640,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2c0)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x2d4));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439838,((undefined1 *)(fr0_ - 0x2d4)),puVar4,ar7));
  uVar3 = 0x8c43864c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43864c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2d4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x2e8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43984c,((undefined1 *)(fr0_ - 0x2e8)),uVar3,ar7));
  uVar3 = 0x8c438658;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438658,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2e8)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x2fc));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439860,((undefined1 *)(fr0_ - 0x2fc)),puVar4,ar7));
  uVar3 = 0x8c438664;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438664,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x2fc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x310)),((undefined1 *)(fr0_ - 0x310)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439874,((undefined1 *)(fr0_ - 0x310)),uVar3,ar7));
  uVar3 = 0x8c438670;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438670,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x310)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x324)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439888,((undefined1 *)(fr0_ - 0x324)),uVar3,ar7));
  uVar3 = 0x8c43867c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43867c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x324)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x338)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43989c,((undefined1 *)(fr0_ - 0x338)),uVar3,ar7));
  uVar3 = 0x8c438688;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438688,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x338)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x34c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4398b0,((undefined1 *)(fr0_ - 0x34c)),uVar3,ar7));
  uVar3 = 0x8c438694;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438694,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x34c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x360)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4398c4,((undefined1 *)(fr0_ - 0x360)),uVar3,ar7));
  uVar3 = 0x8c4386a0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386a0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x360)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x374)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4398d8,((undefined1 *)(fr0_ - 0x374)),uVar3,ar7));
  uVar3 = 0x8c4386ac;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386ac,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x374)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x388)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4398ec,((undefined1 *)(fr0_ - 0x388)),uVar3,ar7));
  uVar3 = 0x8c4386b8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386b8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x388)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x39c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439900,((undefined1 *)(fr0_ - 0x39c)),uVar3,ar7));
  uVar3 = 0x8c4386c4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386c4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x39c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x3b0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439914,((undefined1 *)(fr0_ - 0x3b0)),uVar3,ar7));
  uVar3 = 0x8c4386d0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386d0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x3b0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x3c4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439928,((undefined1 *)(fr0_ - 0x3c4)),uVar3,ar7));
  uVar3 = 0x8c4386dc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386dc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x3c4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x3d8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43993c,((undefined1 *)(fr0_ - 0x3d8)),uVar3,ar7));
  uVar3 = 0x8c4386e8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386e8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x3d8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x3ec)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439950,((undefined1 *)(fr0_ - 0x3ec)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c4386f4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4386f4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x3ec)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x400)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439964,((undefined1 *)(fr0_ - 0x400)),uVar3,ar7));
  uVar3 = 0x8c438700;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438700,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x400)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x414)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439978,((undefined1 *)(fr0_ - 0x414)),((undefined1 *)(fr0_ - 0x414)),ar7));
  uVar3 = 0x8c43870c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43870c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x414)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x428)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43998c,((undefined1 *)(fr0_ - 0x428)),uVar3,ar7));
  uVar3 = 0x8c438718;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438718,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x428)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x43c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4399a0,((undefined1 *)(fr0_ - 0x43c)),((undefined1 *)(fr0_ - 0x43c)),ar7));
  uVar3 = 0x8c438724;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438724,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x43c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x450)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4399b4,((undefined1 *)(fr0_ - 0x450)),uVar3,ar7));
  uVar3 = 0x8c438730;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438730,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x450)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x464)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4399c8,((undefined1 *)(fr0_ - 0x464)),uVar3,ar7));
  uVar3 = 0x8c43873c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43873c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x464)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x478)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4399dc,((undefined1 *)(fr0_ - 0x478)),uVar3,ar7));
  uVar3 = 0x8c438748;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438748,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x478)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x48c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c4399f0,((undefined1 *)(fr0_ - 0x48c)),uVar3,ar7));
  uVar3 = 0x8c438754;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438754,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x48c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x4a0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a04,((undefined1 *)(fr0_ - 0x4a0)),uVar3,ar7));
  uVar3 = 0x8c438760;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438760,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x4a0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x4b4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a18,((undefined1 *)(fr0_ - 0x4b4)),uVar3,ar7));
  uVar3 = 0x8c43876c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43876c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x4b4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x4c8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a2c,((undefined1 *)(fr0_ - 0x4c8)),uVar3,ar7));
  uVar3 = 0x8c438778;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438778,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x4c8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x4dc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a40,((undefined1 *)(fr0_ - 0x4dc)),uVar3,ar7));
  uVar3 = 0x8c438784;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438784,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x4dc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x4f0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a54,((undefined1 *)(fr0_ - 0x4f0)),uVar3,ar7));
  uVar3 = 0x8c438790;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438790,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x4f0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x504)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a68,((undefined1 *)(fr0_ - 0x504)),uVar3,ar7));
  uVar3 = 0x8c43879c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43879c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x504)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x518)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a7c,((undefined1 *)(fr0_ - 0x518)),uVar3,ar7));
  uVar3 = 0x8c4387a8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387a8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x518)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x52c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439a90,((undefined1 *)(fr0_ - 0x52c)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387b4,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x52c)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x540)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439aa4,((undefined1 *)(fr0_ - 0x540)),uVar3,ar7));
  uVar3 = 0x8c4387c0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387c0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x540)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x554)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ab8,((undefined1 *)(fr0_ - 0x554)),uVar3,ar7));
  uVar3 = 0x8c4387cc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387cc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x554)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x568)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439acc,((undefined1 *)(fr0_ - 0x568)),uVar3,ar7));
  uVar3 = 0x8c4387d8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387d8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x568)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x57c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ae0,((undefined1 *)(fr0_ - 0x57c)),uVar3,ar7));
  uVar3 = 0x8c4387e4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387e4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x57c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x590)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439af4,((undefined1 *)(fr0_ - 0x590)),uVar3,ar7));
  uVar3 = 0x8c4387f0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387f0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x590)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x5a4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b08,((undefined1 *)(fr0_ - 0x5a4)),uVar3,ar7));
  uVar3 = 0x8c4387fc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4387fc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x5a4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x5b8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b1c,((undefined1 *)(fr0_ - 0x5b8)),uVar3,ar7));
  uVar3 = 0x8c438808;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438808,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x5b8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x5cc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b30,((undefined1 *)(fr0_ - 0x5cc)),uVar3,ar7));
  uVar3 = 0x8c438814;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438814,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x5cc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x5e0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b44,((undefined1 *)(fr0_ - 0x5e0)),uVar3,ar7));
  uVar3 = 0x8c438820;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438820,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x5e0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x5f4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b58,((undefined1 *)(fr0_ - 0x5f4)),uVar3,ar7));
  uVar3 = 0x8c43882c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43882c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x5f4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x608)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b6c,((undefined1 *)(fr0_ - 0x608)),uVar3,ar7));
  uVar3 = 0x8c438838;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438838,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x608)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x61c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b80,((undefined1 *)(fr0_ - 0x61c)),uVar3,ar7));
  uVar3 = 0x8c438844;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438844,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x61c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x630)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439b94,((undefined1 *)(fr0_ - 0x630)),uVar3,ar7));
  uVar3 = 0x8c438850;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438850,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x630)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x644)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ba8,((undefined1 *)(fr0_ - 0x644)),uVar3,ar7));
  uVar3 = 0x8c43885c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43885c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x644)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x658)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439bbc,((undefined1 *)(fr0_ - 0x658)),uVar3,ar7));
  uVar3 = 0x8c438868;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438868,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x658)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x66c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439bd0,((undefined1 *)(fr0_ - 0x66c)),uVar3,ar7));
  uVar3 = 0x8c438874;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438874,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x66c)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x680)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439be4,((undefined1 *)(fr0_ - 0x680)),pcVar2,ar7));
  uVar3 = 0x8c438880;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438880,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x680)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x694)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439bf8,((undefined1 *)(fr0_ - 0x694)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43888c,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x694)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x6a8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c0c,((undefined1 *)(fr0_ - 0x6a8)),uVar3,ar7));
  uVar3 = 0x8c438898;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438898,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x6a8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x6bc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c20,((undefined1 *)(fr0_ - 0x6bc)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388a4,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x6bc)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x6d0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c34,((undefined1 *)(fr0_ - 0x6d0)),uVar3,ar7));
  uVar3 = 0x8c4388b0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388b0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x6d0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x6e4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c48,((undefined1 *)(fr0_ - 0x6e4)),uVar3,ar7));
  uVar3 = 0x8c4388bc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388bc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x6e4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x6f8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c5c,((undefined1 *)(fr0_ - 0x6f8)),uVar3,ar7));
  uVar3 = 0x8c4388c8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388c8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x6f8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x70c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c70,((undefined1 *)(fr0_ - 0x70c)),uVar3,ar7));
  uVar3 = 0x8c4388d4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388d4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x70c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x720)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c84,((undefined1 *)(fr0_ - 0x720)),uVar3,ar7));
  uVar3 = 0x8c4388e0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388e0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x720)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x734)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439c98,((undefined1 *)(fr0_ - 0x734)),uVar3,ar7));
  uVar3 = 0x8c4388ec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388ec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x734)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x748)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439cac,((undefined1 *)(fr0_ - 0x748)),uVar3,ar7));
  uVar3 = 0x8c4388f8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4388f8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x748)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x75c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439cc0,((undefined1 *)(fr0_ - 0x75c)),uVar3,ar7));
  uVar3 = 0x8c438904;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438904,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x75c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x770)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439cd4,((undefined1 *)(fr0_ - 0x770)),uVar3,ar7));
  uVar3 = 0x8c438910;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438910,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x770)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x784)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ce8,((undefined1 *)(fr0_ - 0x784)),uVar3,ar7));
  uVar3 = 0x8c43891c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43891c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x784)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x798)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439cfc,((undefined1 *)(fr0_ - 0x798)),uVar3,ar7));
  uVar3 = 0x8c438928;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438928,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x798)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x7ac)),((undefined1 *)(fr0_ - 0x7ac)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d10,((undefined1 *)(fr0_ - 0x7ac)),uVar3,ar7));
  uVar3 = 0x8c438934;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438934,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7ac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x7c0)),((undefined1 *)(fr0_ - 0x7c0)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d24,((undefined1 *)(fr0_ - 0x7c0)),0x7a8,ar7));
  uVar3 = 0x8c438940;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438940,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7c0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x7d4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d38,((undefined1 *)(fr0_ - 0x7d4)),uVar3,ar7));
  uVar3 = 0x8c43894c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43894c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7d4)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x7e8));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d4c,((undefined1 *)(fr0_ - 0x7e8)),puVar4,ar7));
  uVar3 = 0x8c438958;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438958,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7e8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x7fc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d60,((undefined1 *)(fr0_ - 0x7fc)),uVar3,ar7));
  uVar3 = 0x8c438964;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438964,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x7fc)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x810));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d74,((undefined1 *)(fr0_ - 0x810)),puVar4,ar7));
  uVar3 = 0x8c438970;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438970,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x810)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x824)),((undefined1 *)(fr0_ - 0x824)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d88,((undefined1 *)(fr0_ - 0x824)),uVar3,ar7));
  uVar3 = 0x8c43897c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43897c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x824)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x838)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439d9c,((undefined1 *)(fr0_ - 0x838)),uVar3,ar7));
  uVar3 = 0x8c438988;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438988,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x838)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x84c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439db0,((undefined1 *)(fr0_ - 0x84c)),uVar3,ar7));
  uVar3 = 0x8c438994;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438994,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x84c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x860)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439dc4,((undefined1 *)(fr0_ - 0x860)),uVar3,ar7));
  uVar3 = 0x8c4389a0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389a0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x860)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x874)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439dd8,((undefined1 *)(fr0_ - 0x874)),uVar3,ar7));
  uVar3 = 0x8c4389ac;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389ac,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x874)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x888)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439dec,((undefined1 *)(fr0_ - 0x888)),uVar3,ar7));
  uVar3 = 0x8c4389b8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389b8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x888)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x89c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e00,((undefined1 *)(fr0_ - 0x89c)),uVar3,ar7));
  uVar3 = 0x8c4389c4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389c4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x89c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x8b0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e14,((undefined1 *)(fr0_ - 0x8b0)),uVar3,ar7));
  uVar3 = 0x8c4389d0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389d0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x8b0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x8c4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e28,((undefined1 *)(fr0_ - 0x8c4)),uVar3,ar7));
  uVar3 = 0x8c4389dc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389dc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x8c4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x8d8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e3c,((undefined1 *)(fr0_ - 0x8d8)),uVar3,ar7));
  uVar3 = 0x8c4389e8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389e8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x8d8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x8ec)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e50,((undefined1 *)(fr0_ - 0x8ec)),uVar3,ar7));
  uVar3 = 0x8c4389f4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4389f4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x8ec)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x900)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e64,((undefined1 *)(fr0_ - 0x900)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c438a00;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x900)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x914)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e78,((undefined1 *)(fr0_ - 0x914)),uVar3,ar7));
  uVar3 = 0x8c438a0c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a0c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x914)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x928)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439e8c,((undefined1 *)(fr0_ - 0x928)),((undefined1 *)(fr0_ - 0x928)),ar7));
  uVar3 = 0x8c438a18;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a18,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x928)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x93c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ea0,((undefined1 *)(fr0_ - 0x93c)),uVar3,ar7));
  uVar3 = 0x8c438a24;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a24,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x93c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x950)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439eb4,((undefined1 *)(fr0_ - 0x950)),((undefined1 *)(fr0_ - 0x950)),ar7));
  uVar3 = 0x8c438a30;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a30,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x950)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x964)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ec8,((undefined1 *)(fr0_ - 0x964)),uVar3,ar7));
  uVar3 = 0x8c438a3c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a3c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x964)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x978)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439edc,((undefined1 *)(fr0_ - 0x978)),uVar3,ar7));
  uVar3 = 0x8c438a48;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a48,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x978)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x98c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ef0,((undefined1 *)(fr0_ - 0x98c)),uVar3,ar7));
  uVar3 = 0x8c438a54;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a54,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x98c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x9a0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f04,((undefined1 *)(fr0_ - 0x9a0)),uVar3,ar7));
  uVar3 = 0x8c438a60;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a60,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x9a0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x9b4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f18,((undefined1 *)(fr0_ - 0x9b4)),uVar3,ar7));
  uVar3 = 0x8c438a6c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a6c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x9b4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x9c8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f2c,((undefined1 *)(fr0_ - 0x9c8)),uVar3,ar7));
  uVar3 = 0x8c438a78;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a78,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x9c8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x9dc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f40,((undefined1 *)(fr0_ - 0x9dc)),uVar3,ar7));
  uVar3 = 0x8c438a84;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a84,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x9dc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x9f0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f54,((undefined1 *)(fr0_ - 0x9f0)),uVar3,ar7));
  uVar3 = 0x8c438a90;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a90,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x9f0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa04)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f68,((undefined1 *)(fr0_ - 0xa04)),uVar3,ar7));
  uVar3 = 0x8c438a9c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438a9c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa04)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa18)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f7c,((undefined1 *)(fr0_ - 0xa18)),uVar3,ar7));
  uVar3 = 0x8c438aa8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438aa8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa18)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa2c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439f90,((undefined1 *)(fr0_ - 0xa2c)),uVar3,ar7));
  uVar3 = 0x8c438ab4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ab4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa2c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa40)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439fa4,((undefined1 *)(fr0_ - 0xa40)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ac0,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa40)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa54)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439fb8,((undefined1 *)(fr0_ - 0xa54)),uVar3,ar7));
  uVar3 = 0x8c438acc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438acc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa54)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa68)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439fcc,((undefined1 *)(fr0_ - 0xa68)),uVar3,ar7));
  uVar3 = 0x8c438ad8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ad8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa68)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa7c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439fe0,((undefined1 *)(fr0_ - 0xa7c)),uVar3,ar7));
  uVar3 = 0x8c438ae4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ae4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa7c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xa90)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c439ff4,((undefined1 *)(fr0_ - 0xa90)),uVar3,ar7));
  uVar3 = 0x8c438af0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438af0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xa90)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xaa4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a008,((undefined1 *)(fr0_ - 0xaa4)),uVar3,ar7));
  uVar3 = 0x8c438afc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438afc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xaa4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xab8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a01c,((undefined1 *)(fr0_ - 0xab8)),uVar3,ar7));
  uVar3 = 0x8c438b08;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b08,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xab8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xacc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a030,((undefined1 *)(fr0_ - 0xacc)),uVar3,ar7));
  uVar3 = 0x8c438b14;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b14,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xacc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xae0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a044,((undefined1 *)(fr0_ - 0xae0)),uVar3,ar7));
  uVar3 = 0x8c438b20;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b20,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xae0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xaf4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a058,((undefined1 *)(fr0_ - 0xaf4)),uVar3,ar7));
  uVar3 = 0x8c438b2c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b2c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xaf4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb08)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a06c,((undefined1 *)(fr0_ - 0xb08)),uVar3,ar7));
  uVar3 = 0x8c438b38;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b38,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb08)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb1c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a080,((undefined1 *)(fr0_ - 0xb1c)),uVar3,ar7));
  uVar3 = 0x8c438b44;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b44,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb1c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb30)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a094,((undefined1 *)(fr0_ - 0xb30)),uVar3,ar7));
  uVar3 = 0x8c438b50;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b50,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb30)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb44)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a0a8,((undefined1 *)(fr0_ - 0xb44)),uVar3,ar7));
  uVar3 = 0x8c438b5c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b5c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb44)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb58)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a0bc,((undefined1 *)(fr0_ - 0xb58)),uVar3,ar7));
  uVar3 = 0x8c438b68;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b68,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb58)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb6c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a0d0,((undefined1 *)(fr0_ - 0xb6c)),uVar3,ar7));
  uVar3 = 0x8c438b74;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b74,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb6c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb80)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a0e4,((undefined1 *)(fr0_ - 0xb80)),uVar3,ar7));
  uVar3 = 0x8c438b80;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b80,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb80)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xb94)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a0f8,((undefined1 *)(fr0_ - 0xb94)),pcVar2,ar7));
  uVar3 = 0x8c438b8c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b8c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xb94)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xba8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a10c,((undefined1 *)(fr0_ - 0xba8)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438b98,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xba8)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xbbc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a120,((undefined1 *)(fr0_ - 0xbbc)),uVar3,ar7));
  uVar3 = 0x8c438ba4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ba4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xbbc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xbd0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a134,((undefined1 *)(fr0_ - 0xbd0)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bb0,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xbd0)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xbe4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a148,((undefined1 *)(fr0_ - 0xbe4)),uVar3,ar7));
  uVar3 = 0x8c438bbc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bbc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xbe4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xbf8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a15c,((undefined1 *)(fr0_ - 0xbf8)),uVar3,ar7));
  uVar3 = 0x8c438bc8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bc8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xbf8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc0c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a170,((undefined1 *)(fr0_ - 0xc0c)),uVar3,ar7));
  uVar3 = 0x8c438bd4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bd4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc0c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc20)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a184,((undefined1 *)(fr0_ - 0xc20)),uVar3,ar7));
  uVar3 = 0x8c438be0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438be0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc20)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc34)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a198,((undefined1 *)(fr0_ - 0xc34)),uVar3,ar7));
  uVar3 = 0x8c438bec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc34)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc48)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a1ac,((undefined1 *)(fr0_ - 0xc48)),uVar3,ar7));
  uVar3 = 0x8c438bf8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438bf8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc48)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc5c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a1c0,((undefined1 *)(fr0_ - 0xc5c)),uVar3,ar7));
  uVar3 = 0x8c438c04;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c04,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc5c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc70)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a1d4,((undefined1 *)(fr0_ - 0xc70)),uVar3,ar7));
  uVar3 = 0x8c438c10;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c10,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc70)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc84)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a1e8,((undefined1 *)(fr0_ - 0xc84)),uVar3,ar7));
  uVar3 = 0x8c438c1c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c1c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc84)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xc98)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a1fc,((undefined1 *)(fr0_ - 0xc98)),uVar3,ar7));
  uVar3 = 0x8c438c28;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c28,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xc98)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xcac)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a210,((undefined1 *)(fr0_ - 0xcac)),uVar3,ar7));
  uVar3 = 0x8c438c34;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c34,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xcac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xcc0)),((undefined1 *)(fr0_ - 0xcc0)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a224,((undefined1 *)(fr0_ - 0xcc0)),uVar3,ar7));
  uVar3 = 0x8c438c40;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c40,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xcc0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xcd4)),((undefined1 *)(fr0_ - 0xcd4)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a238,((undefined1 *)(fr0_ - 0xcd4)),0xcbc,ar7));
  uVar3 = 0x8c438c4c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c4c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xcd4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xce8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a24c,((undefined1 *)(fr0_ - 0xce8)),uVar3,ar7));
  uVar3 = 0x8c438c58;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c58,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xce8)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0xcfc));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a260,((undefined1 *)(fr0_ - 0xcfc)),puVar4,ar7));
  uVar3 = 0x8c438c64;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c64,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xcfc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd10)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a274,((undefined1 *)(fr0_ - 0xd10)),uVar3,ar7));
  uVar3 = 0x8c438c70;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c70,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd10)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0xd24));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a288,((undefined1 *)(fr0_ - 0xd24)),puVar4,ar7));
  uVar3 = 0x8c438c7c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c7c,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd24)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd38)),((undefined1 *)(fr0_ - 0xd38)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a29c,((undefined1 *)(fr0_ - 0xd38)),uVar3,ar7));
  uVar3 = 0x8c438c88;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c88,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd38)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd4c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a2b0,((undefined1 *)(fr0_ - 0xd4c)),uVar3,ar7));
  uVar3 = 0x8c438c94;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438c94,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd4c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd60)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a2c4,((undefined1 *)(fr0_ - 0xd60)),uVar3,ar7));
  uVar3 = 0x8c438ca0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ca0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd60)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd74)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a2d8,((undefined1 *)(fr0_ - 0xd74)),uVar3,ar7));
  uVar3 = 0x8c438cac;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cac,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd74)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd88)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a2ec,((undefined1 *)(fr0_ - 0xd88)),uVar3,ar7));
  uVar3 = 0x8c438cb8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cb8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd88)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xd9c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a300,((undefined1 *)(fr0_ - 0xd9c)),uVar3,ar7));
  uVar3 = 0x8c438cc4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cc4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xd9c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xdb0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a314,((undefined1 *)(fr0_ - 0xdb0)),uVar3,ar7));
  uVar3 = 0x8c438cd0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cd0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xdb0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xdc4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a328,((undefined1 *)(fr0_ - 0xdc4)),uVar3,ar7));
  uVar3 = 0x8c438cdc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cdc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xdc4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xdd8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a33c,((undefined1 *)(fr0_ - 0xdd8)),uVar3,ar7));
  uVar3 = 0x8c438ce8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ce8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xdd8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xdec)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a350,((undefined1 *)(fr0_ - 0xdec)),uVar3,ar7));
  uVar3 = 0x8c438cf4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438cf4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xdec)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe00)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a364,((undefined1 *)(fr0_ - 0xe00)),uVar3,ar7));
  uVar3 = 0x8c438d00;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe00)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe14)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a378,((undefined1 *)(fr0_ - 0xe14)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c438d0c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d0c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe14)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe28)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a38c,((undefined1 *)(fr0_ - 0xe28)),uVar3,ar7));
  uVar3 = 0x8c438d18;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d18,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe28)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe3c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a3a0,((undefined1 *)(fr0_ - 0xe3c)),((undefined1 *)(fr0_ - 0xe3c)),ar7));
  uVar3 = 0x8c438d24;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d24,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe3c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe50)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a3b4,((undefined1 *)(fr0_ - 0xe50)),uVar3,ar7));
  uVar3 = 0x8c438d30;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d30,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe50)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe64)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a3c8,((undefined1 *)(fr0_ - 0xe64)),((undefined1 *)(fr0_ - 0xe64)),ar7));
  uVar3 = 0x8c438d3c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d3c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe64)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe78)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a3dc,((undefined1 *)(fr0_ - 0xe78)),uVar3,ar7));
  uVar3 = 0x8c438d48;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d48,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe78)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xe8c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a3f0,((undefined1 *)(fr0_ - 0xe8c)),uVar3,ar7));
  uVar3 = 0x8c438d54;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d54,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xe8c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xea0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a404,((undefined1 *)(fr0_ - 0xea0)),uVar3,ar7));
  uVar3 = 0x8c438d60;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d60,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xea0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xeb4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a418,((undefined1 *)(fr0_ - 0xeb4)),uVar3,ar7));
  uVar3 = 0x8c438d6c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d6c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xeb4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xec8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a42c,((undefined1 *)(fr0_ - 0xec8)),uVar3,ar7));
  uVar3 = 0x8c438d78;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d78,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xec8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xedc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a440,((undefined1 *)(fr0_ - 0xedc)),uVar3,ar7));
  uVar3 = 0x8c438d84;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d84,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xedc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xef0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a454,((undefined1 *)(fr0_ - 0xef0)),uVar3,ar7));
  uVar3 = 0x8c438d90;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d90,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xef0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf04)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a468,((undefined1 *)(fr0_ - 0xf04)),uVar3,ar7));
  uVar3 = 0x8c438d9c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438d9c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf04)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf18)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a47c,((undefined1 *)(fr0_ - 0xf18)),uVar3,ar7));
  uVar3 = 0x8c438da8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438da8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf18)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf2c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a490,((undefined1 *)(fr0_ - 0xf2c)),uVar3,ar7));
  uVar3 = 0x8c438db4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438db4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf2c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf40)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a4a4,((undefined1 *)(fr0_ - 0xf40)),uVar3,ar7));
  uVar3 = 0x8c438dc0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438dc0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf40)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf54)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a4b8,((undefined1 *)(fr0_ - 0xf54)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438dcc,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf54)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf68)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a4cc,((undefined1 *)(fr0_ - 0xf68)),uVar3,ar7));
  uVar3 = 0x8c438dd8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438dd8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf68)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf7c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a4e0,((undefined1 *)(fr0_ - 0xf7c)),uVar3,ar7));
  uVar3 = 0x8c438de4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438de4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf7c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xf90)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a4f4,((undefined1 *)(fr0_ - 0xf90)),uVar3,ar7));
  uVar3 = 0x8c438df0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438df0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xf90)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xfa4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a508,((undefined1 *)(fr0_ - 0xfa4)),uVar3,ar7));
  uVar3 = 0x8c438dfc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438dfc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xfa4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xfb8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a51c,((undefined1 *)(fr0_ - 0xfb8)),uVar3,ar7));
  uVar3 = 0x8c438e08;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e08,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xfb8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xfcc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a530,((undefined1 *)(fr0_ - 0xfcc)),uVar3,ar7));
  uVar3 = 0x8c438e14;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e14,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xfcc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xfe0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a544,((undefined1 *)(fr0_ - 0xfe0)),uVar3,ar7));
  uVar3 = 0x8c438e20;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e20,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xfe0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0xff4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a558,((undefined1 *)(fr0_ - 0xff4)),uVar3,ar7));
  uVar3 = 0x8c438e2c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e2c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0xff4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1008)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a56c,((undefined1 *)(fr0_ - 0x1008)),uVar3,ar7));
  uVar3 = 0x8c438e38;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e38,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1008)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x101c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a580,((undefined1 *)(fr0_ - 0x101c)),uVar3,ar7));
  uVar3 = 0x8c438e44;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e44,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x101c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1030)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a594,((undefined1 *)(fr0_ - 0x1030)),uVar3,ar7));
  uVar3 = 0x8c438e50;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e50,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1030)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1044)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a5a8,((undefined1 *)(fr0_ - 0x1044)),uVar3,ar7));
  uVar3 = 0x8c438e5c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e5c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1044)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1058)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a5bc,((undefined1 *)(fr0_ - 0x1058)),uVar3,ar7));
  uVar3 = 0x8c438e68;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e68,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1058)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x106c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a5d0,((undefined1 *)(fr0_ - 0x106c)),uVar3,ar7));
  uVar3 = 0x8c438e74;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e74,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x106c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1080)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a5e4,((undefined1 *)(fr0_ - 0x1080)),uVar3,ar7));
  uVar3 = 0x8c438e80;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e80,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1080)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1094)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a5f8,((undefined1 *)(fr0_ - 0x1094)),uVar3,ar7));
  uVar3 = 0x8c438e8c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e8c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1094)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x10a8)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a60c,((undefined1 *)(fr0_ - 0x10a8)),pcVar2,ar7));
  uVar3 = 0x8c438e98;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438e98,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x10a8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x10bc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a620,((undefined1 *)(fr0_ - 0x10bc)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ea4,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x10bc)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x10d0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a634,((undefined1 *)(fr0_ - 0x10d0)),uVar3,ar7));
  uVar3 = 0x8c438eb0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438eb0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x10d0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x10e4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a648,((undefined1 *)(fr0_ - 0x10e4)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ebc,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x10e4)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x10f8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a65c,((undefined1 *)(fr0_ - 0x10f8)),uVar3,ar7));
  uVar3 = 0x8c438ec8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ec8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x10f8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x110c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a670,((undefined1 *)(fr0_ - 0x110c)),uVar3,ar7));
  uVar3 = 0x8c438ed4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ed4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x110c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1120)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a684,((undefined1 *)(fr0_ - 0x1120)),uVar3,ar7));
  uVar3 = 0x8c438ee0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ee0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1120)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1134)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a698,((undefined1 *)(fr0_ - 0x1134)),uVar3,ar7));
  uVar3 = 0x8c438eec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438eec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1134)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1148)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a6ac,((undefined1 *)(fr0_ - 0x1148)),uVar3,ar7));
  uVar3 = 0x8c438ef8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ef8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1148)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x115c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a6c0,((undefined1 *)(fr0_ - 0x115c)),uVar3,ar7));
  uVar3 = 0x8c438f04;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f04,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x115c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1170)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a6d4,((undefined1 *)(fr0_ - 0x1170)),uVar3,ar7));
  uVar3 = 0x8c438f10;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f10,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1170)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1184)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a6e8,((undefined1 *)(fr0_ - 0x1184)),uVar3,ar7));
  uVar3 = 0x8c438f1c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f1c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1184)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1198)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a6fc,((undefined1 *)(fr0_ - 0x1198)),uVar3,ar7));
  uVar3 = 0x8c438f28;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f28,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1198)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11ac)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a710,((undefined1 *)(fr0_ - 0x11ac)),uVar3,ar7));
  uVar3 = 0x8c438f34;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f34,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11ac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11c0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a724,((undefined1 *)(fr0_ - 0x11c0)),uVar3,ar7));
  uVar3 = 0x8c438f40;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f40,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11c0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11d4)),((undefined1 *)(fr0_ - 0x11d4)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a738,((undefined1 *)(fr0_ - 0x11d4)),uVar3,ar7));
  uVar3 = 0x8c438f4c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f4c,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11d4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11e8)),((undefined1 *)(fr0_ - 0x11e8)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a74c,((undefined1 *)(fr0_ - 0x11e8)),0x11d0,ar7));
  uVar3 = 0x8c438f58;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f58,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11e8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x11fc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a760,((undefined1 *)(fr0_ - 0x11fc)),uVar3,ar7));
  uVar3 = 0x8c438f64;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f64,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x11fc)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x1210));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a774,((undefined1 *)(fr0_ - 0x1210)),puVar4,ar7));
  uVar3 = 0x8c438f70;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f70,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1210)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1224)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a788,((undefined1 *)(fr0_ - 0x1224)),uVar3,ar7));
  uVar3 = 0x8c438f7c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f7c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1224)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x1238));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a79c,((undefined1 *)(fr0_ - 0x1238)),puVar4,ar7));
  uVar3 = 0x8c438f88;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f88,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1238)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x124c)),((undefined1 *)(fr0_ - 0x124c)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a7b0,((undefined1 *)(fr0_ - 0x124c)),uVar3,ar7));
  uVar3 = 0x8c438f94;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438f94,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x124c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1260)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a7c4,((undefined1 *)(fr0_ - 0x1260)),uVar3,ar7));
  uVar3 = 0x8c438fa0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fa0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1260)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1274)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a7d8,((undefined1 *)(fr0_ - 0x1274)),uVar3,ar7));
  uVar3 = 0x8c438fac;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fac,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1274)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1288)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a7ec,((undefined1 *)(fr0_ - 0x1288)),uVar3,ar7));
  uVar3 = 0x8c438fb8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fb8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1288)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x129c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a800,((undefined1 *)(fr0_ - 0x129c)),uVar3,ar7));
  uVar3 = 0x8c438fc4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fc4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x129c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x12b0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a814,((undefined1 *)(fr0_ - 0x12b0)),uVar3,ar7));
  uVar3 = 0x8c438fd0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fd0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x12b0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x12c4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a828,((undefined1 *)(fr0_ - 0x12c4)),uVar3,ar7));
  uVar3 = 0x8c438fdc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fdc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x12c4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x12d8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a83c,((undefined1 *)(fr0_ - 0x12d8)),uVar3,ar7));
  uVar3 = 0x8c438fe8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438fe8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x12d8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x12ec)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a850,((undefined1 *)(fr0_ - 0x12ec)),uVar3,ar7));
  uVar3 = 0x8c438ff4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c438ff4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x12ec)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1300)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a864,((undefined1 *)(fr0_ - 0x1300)),uVar3,ar7));
  uVar3 = 0x8c439000;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439000,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1300)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1314)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a878,((undefined1 *)(fr0_ - 0x1314)),uVar3,ar7));
  uVar3 = 0x8c43900c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43900c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1314)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1328)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a88c,((undefined1 *)(fr0_ - 0x1328)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c439018;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439018,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1328)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x133c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a8a0,((undefined1 *)(fr0_ - 0x133c)),uVar3,ar7));
  uVar3 = 0x8c439024;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439024,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x133c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1350)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a8b4,((undefined1 *)(fr0_ - 0x1350)),((undefined1 *)(fr0_ - 0x1350)),ar7));
  uVar3 = 0x8c439030;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439030,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1350)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1364)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a8c8,((undefined1 *)(fr0_ - 0x1364)),uVar3,ar7));
  uVar3 = 0x8c43903c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43903c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1364)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1378)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a8dc,((undefined1 *)(fr0_ - 0x1378)),((undefined1 *)(fr0_ - 0x1378)),ar7));
  uVar3 = 0x8c439048;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439048,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1378)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x138c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a8f0,((undefined1 *)(fr0_ - 0x138c)),uVar3,ar7));
  uVar3 = 0x8c439054;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439054,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x138c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x13a0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a904,((undefined1 *)(fr0_ - 0x13a0)),uVar3,ar7));
  uVar3 = 0x8c439060;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439060,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x13a0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x13b4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a918,((undefined1 *)(fr0_ - 0x13b4)),uVar3,ar7));
  uVar3 = 0x8c43906c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43906c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x13b4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x13c8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a92c,((undefined1 *)(fr0_ - 0x13c8)),uVar3,ar7));
  uVar3 = 0x8c439078;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439078,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x13c8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x13dc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a940,((undefined1 *)(fr0_ - 0x13dc)),uVar3,ar7));
  uVar3 = 0x8c439084;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439084,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x13dc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x13f0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a954,((undefined1 *)(fr0_ - 0x13f0)),uVar3,ar7));
  uVar3 = 0x8c439090;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439090,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x13f0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1404)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a968,((undefined1 *)(fr0_ - 0x1404)),uVar3,ar7));
  uVar3 = 0x8c43909c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43909c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1404)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1418)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a97c,((undefined1 *)(fr0_ - 0x1418)),uVar3,ar7));
  uVar3 = 0x8c4390a8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390a8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1418)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x142c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a990,((undefined1 *)(fr0_ - 0x142c)),uVar3,ar7));
  uVar3 = 0x8c4390b4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390b4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x142c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1440)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a9a4,((undefined1 *)(fr0_ - 0x1440)),uVar3,ar7));
  uVar3 = 0x8c4390c0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390c0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1440)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1454)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a9b8,((undefined1 *)(fr0_ - 0x1454)),uVar3,ar7));
  uVar3 = 0x8c4390cc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390cc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1454)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1468)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a9cc,((undefined1 *)(fr0_ - 0x1468)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390d8,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1468)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x147c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a9e0,((undefined1 *)(fr0_ - 0x147c)),uVar3,ar7));
  uVar3 = 0x8c4390e4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390e4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x147c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1490)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43a9f4,((undefined1 *)(fr0_ - 0x1490)),uVar3,ar7));
  uVar3 = 0x8c4390f0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390f0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1490)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x14a4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa08,((undefined1 *)(fr0_ - 0x14a4)),uVar3,ar7));
  uVar3 = 0x8c4390fc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4390fc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x14a4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x14b8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa1c,((undefined1 *)(fr0_ - 0x14b8)),uVar3,ar7));
  uVar3 = 0x8c439108;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439108,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x14b8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x14cc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa30,((undefined1 *)(fr0_ - 0x14cc)),uVar3,ar7));
  uVar3 = 0x8c439114;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439114,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x14cc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x14e0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa44,((undefined1 *)(fr0_ - 0x14e0)),uVar3,ar7));
  uVar3 = 0x8c439120;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439120,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x14e0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x14f4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa58,((undefined1 *)(fr0_ - 0x14f4)),uVar3,ar7));
  uVar3 = 0x8c43912c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43912c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x14f4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1508)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa6c,((undefined1 *)(fr0_ - 0x1508)),uVar3,ar7));
  uVar3 = 0x8c439138;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439138,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1508)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x151c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa80,((undefined1 *)(fr0_ - 0x151c)),uVar3,ar7));
  uVar3 = 0x8c439144;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439144,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x151c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1530)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aa94,((undefined1 *)(fr0_ - 0x1530)),uVar3,ar7));
  uVar3 = 0x8c439150;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439150,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1530)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1544)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aaa8,((undefined1 *)(fr0_ - 0x1544)),uVar3,ar7));
  uVar3 = 0x8c43915c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43915c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1544)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1558)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aabc,((undefined1 *)(fr0_ - 0x1558)),uVar3,ar7));
  uVar3 = 0x8c439168;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439168,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1558)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x156c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aad0,((undefined1 *)(fr0_ - 0x156c)),uVar3,ar7));
  uVar3 = 0x8c439174;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439174,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x156c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1580)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aae4,((undefined1 *)(fr0_ - 0x1580)),uVar3,ar7));
  uVar3 = 0x8c439180;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439180,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1580)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1594)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aaf8,((undefined1 *)(fr0_ - 0x1594)),uVar3,ar7));
  uVar3 = 0x8c43918c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43918c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1594)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x15a8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab0c,((undefined1 *)(fr0_ - 0x15a8)),uVar3,ar7));
  uVar3 = 0x8c439198;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439198,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x15a8)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x15bc)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab20,((undefined1 *)(fr0_ - 0x15bc)),pcVar2,ar7));
  uVar3 = 0x8c4391a4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391a4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x15bc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x15d0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab34,((undefined1 *)(fr0_ - 0x15d0)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391b0,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x15d0)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x15e4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab48,((undefined1 *)(fr0_ - 0x15e4)),uVar3,ar7));
  uVar3 = 0x8c4391bc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391bc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x15e4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x15f8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab5c,((undefined1 *)(fr0_ - 0x15f8)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391c8,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x15f8)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x160c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab70,((undefined1 *)(fr0_ - 0x160c)),uVar3,ar7));
  uVar3 = 0x8c4391d4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391d4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x160c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1620)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab84,((undefined1 *)(fr0_ - 0x1620)),uVar3,ar7));
  uVar3 = 0x8c4391e0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391e0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1620)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1634)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ab98,((undefined1 *)(fr0_ - 0x1634)),uVar3,ar7));
  uVar3 = 0x8c4391ec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391ec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1634)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1648)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43abac,((undefined1 *)(fr0_ - 0x1648)),uVar3,ar7));
  uVar3 = 0x8c4391f8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4391f8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1648)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x165c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43abc0,((undefined1 *)(fr0_ - 0x165c)),uVar3,ar7));
  uVar3 = 0x8c439204;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439204,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x165c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1670)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43abd4,((undefined1 *)(fr0_ - 0x1670)),uVar3,ar7));
  uVar3 = 0x8c439210;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439210,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1670)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1684)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43abe8,((undefined1 *)(fr0_ - 0x1684)),uVar3,ar7));
  uVar3 = 0x8c43921c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43921c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1684)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1698)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43abfc,((undefined1 *)(fr0_ - 0x1698)),uVar3,ar7));
  uVar3 = 0x8c439228;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439228,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1698)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16ac)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac10,((undefined1 *)(fr0_ - 0x16ac)),uVar3,ar7));
  uVar3 = 0x8c439234;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439234,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16ac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16c0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac24,((undefined1 *)(fr0_ - 0x16c0)),uVar3,ar7));
  uVar3 = 0x8c439240;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439240,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16c0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16d4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac38,((undefined1 *)(fr0_ - 0x16d4)),uVar3,ar7));
  uVar3 = 0x8c43924c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43924c,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16d4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16e8)),((undefined1 *)(fr0_ - 0x16e8)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac4c,((undefined1 *)(fr0_ - 0x16e8)),uVar3,ar7));
  uVar3 = 0x8c439258;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439258,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16e8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x16fc)),((undefined1 *)(fr0_ - 0x16fc)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac60,((undefined1 *)(fr0_ - 0x16fc)),0x16e4,ar7));
  uVar3 = 0x8c439264;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439264,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x16fc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1710)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac74,((undefined1 *)(fr0_ - 0x1710)),uVar3,ar7));
  uVar3 = 0x8c439270;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439270,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1710)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x1724));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac88,((undefined1 *)(fr0_ - 0x1724)),puVar4,ar7));
  uVar3 = 0x8c43927c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43927c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1724)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1738)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ac9c,((undefined1 *)(fr0_ - 0x1738)),uVar3,ar7));
  uVar3 = 0x8c439288;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439288,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1738)),0xffffffff,uVar3,ar7));
  puVar4 = ((undefined1 *)(fr0_ - 0x174c));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(puVar4,uVar1,puVar4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43acb0,((undefined1 *)(fr0_ - 0x174c)),puVar4,ar7));
  uVar3 = 0x8c439294;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439294,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x174c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1760)),((undefined1 *)(fr0_ - 0x1760)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43acc4,((undefined1 *)(fr0_ - 0x1760)),uVar3,ar7));
  uVar3 = 0x8c4392a0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392a0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1760)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1774)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43acd8,((undefined1 *)(fr0_ - 0x1774)),uVar3,ar7));
  uVar3 = 0x8c4392ac;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392ac,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1774)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1788)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43acec,((undefined1 *)(fr0_ - 0x1788)),uVar3,ar7));
  uVar3 = 0x8c4392b8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392b8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1788)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x179c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad00,((undefined1 *)(fr0_ - 0x179c)),uVar3,ar7));
  uVar3 = 0x8c4392c4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392c4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x179c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x17b0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad14,((undefined1 *)(fr0_ - 0x17b0)),uVar3,ar7));
  uVar3 = 0x8c4392d0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392d0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x17b0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x17c4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad28,((undefined1 *)(fr0_ - 0x17c4)),uVar3,ar7));
  uVar3 = 0x8c4392dc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392dc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x17c4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x17d8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad3c,((undefined1 *)(fr0_ - 0x17d8)),uVar3,ar7));
  uVar3 = 0x8c4392e8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392e8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x17d8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x17ec)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad50,((undefined1 *)(fr0_ - 0x17ec)),uVar3,ar7));
  uVar3 = 0x8c4392f4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4392f4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x17ec)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1800)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad64,((undefined1 *)(fr0_ - 0x1800)),uVar3,ar7));
  uVar3 = 0x8c439300;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439300,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1800)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1814)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad78,((undefined1 *)(fr0_ - 0x1814)),uVar3,ar7));
  uVar3 = 0x8c43930c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43930c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1814)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1828)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ad8c,((undefined1 *)(fr0_ - 0x1828)),uVar3,ar7));
  uVar3 = 0x8c439318;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439318,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1828)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x183c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ada0,((undefined1 *)(fr0_ - 0x183c)),((void *)0x8c0f3df8),ar7));
  uVar3 = 0x8c439324;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439324,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x183c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1850)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43adb4,((undefined1 *)(fr0_ - 0x1850)),uVar3,ar7));
  uVar3 = 0x8c439330;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439330,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1850)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1864)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43adc8,((undefined1 *)(fr0_ - 0x1864)),((undefined1 *)(fr0_ - 0x1864)),ar7));
  uVar3 = 0x8c43933c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43933c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1864)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1878)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43addc,((undefined1 *)(fr0_ - 0x1878)),uVar3,ar7));
  uVar3 = 0x8c439348;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439348,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1878)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x188c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43adf0,((undefined1 *)(fr0_ - 0x188c)),((undefined1 *)(fr0_ - 0x188c)),ar7));
  uVar3 = 0x8c439354;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439354,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x188c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18a0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae04,((undefined1 *)(fr0_ - 0x18a0)),uVar3,ar7));
  uVar3 = 0x8c439360;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439360,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18a0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18b4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae18,((undefined1 *)(fr0_ - 0x18b4)),uVar3,ar7));
  uVar3 = 0x8c43936c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43936c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18b4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18c8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae2c,((undefined1 *)(fr0_ - 0x18c8)),uVar3,ar7));
  uVar3 = 0x8c439378;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439378,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18c8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18dc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae40,((undefined1 *)(fr0_ - 0x18dc)),uVar3,ar7));
  uVar3 = 0x8c439384;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439384,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18dc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x18f0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae54,((undefined1 *)(fr0_ - 0x18f0)),uVar3,ar7));
  uVar3 = 0x8c439390;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439390,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x18f0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1904)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae68,((undefined1 *)(fr0_ - 0x1904)),uVar3,ar7));
  uVar3 = 0x8c43939c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43939c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1904)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1918)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae7c,((undefined1 *)(fr0_ - 0x1918)),uVar3,ar7));
  uVar3 = 0x8c4393a8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393a8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1918)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x192c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43ae90,((undefined1 *)(fr0_ - 0x192c)),uVar3,ar7));
  uVar3 = 0x8c4393b4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393b4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x192c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1940)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aea4,((undefined1 *)(fr0_ - 0x1940)),uVar3,ar7));
  uVar3 = 0x8c4393c0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393c0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1940)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1954)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aeb8,((undefined1 *)(fr0_ - 0x1954)),uVar3,ar7));
  uVar3 = 0x8c4393cc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393cc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1954)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1968)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aecc,((undefined1 *)(fr0_ - 0x1968)),uVar3,ar7));
  uVar3 = 0x8c4393d8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393d8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1968)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x197c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aee0,((undefined1 *)(fr0_ - 0x197c)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393e4,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x197c)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1990)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aef4,((undefined1 *)(fr0_ - 0x1990)),uVar3,ar7));
  uVar3 = 0x8c4393f0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393f0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1990)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x19a4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af08,((undefined1 *)(fr0_ - 0x19a4)),uVar3,ar7));
  uVar3 = 0x8c4393fc;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4393fc,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x19a4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x19b8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af1c,((undefined1 *)(fr0_ - 0x19b8)),uVar3,ar7));
  uVar3 = 0x8c439408;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439408,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x19b8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x19cc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af30,((undefined1 *)(fr0_ - 0x19cc)),uVar3,ar7));
  uVar3 = 0x8c439414;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439414,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x19cc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x19e0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af44,((undefined1 *)(fr0_ - 0x19e0)),uVar3,ar7));
  uVar3 = 0x8c439420;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439420,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x19e0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x19f4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af58,((undefined1 *)(fr0_ - 0x19f4)),uVar3,ar7));
  uVar3 = 0x8c43942c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43942c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x19f4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a08)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af6c,((undefined1 *)(fr0_ - 0x1a08)),uVar3,ar7));
  uVar3 = 0x8c439438;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439438,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a08)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a1c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af80,((undefined1 *)(fr0_ - 0x1a1c)),uVar3,ar7));
  uVar3 = 0x8c439444;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439444,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a1c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a30)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43af94,((undefined1 *)(fr0_ - 0x1a30)),uVar3,ar7));
  uVar3 = 0x8c439450;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439450,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a30)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a44)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43afa8,((undefined1 *)(fr0_ - 0x1a44)),uVar3,ar7));
  uVar3 = 0x8c43945c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43945c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a44)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a58)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43afbc,((undefined1 *)(fr0_ - 0x1a58)),uVar3,ar7));
  uVar3 = 0x8c439468;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439468,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a58)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a6c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43afd0,((undefined1 *)(fr0_ - 0x1a6c)),uVar3,ar7));
  uVar3 = 0x8c439474;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439474,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a6c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a80)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43afe4,((undefined1 *)(fr0_ - 0x1a80)),uVar3,ar7));
  uVar3 = 0x8c439480;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439480,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a80)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1a94)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43aff8,((undefined1 *)(fr0_ - 0x1a94)),uVar3,ar7));
  uVar3 = 0x8c43948c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43948c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1a94)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1aa8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b00c,((undefined1 *)(fr0_ - 0x1aa8)),uVar3,ar7));
  uVar3 = 0x8c439498;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439498,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1aa8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1abc)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b020,((undefined1 *)(fr0_ - 0x1abc)),uVar3,ar7));
  uVar3 = 0x8c4394a4;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394a4,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1abc)),0xffffffff,uVar3,ar7));
  pcVar2 = ((void *)0x8c0d7668);
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1ad0)),uVar1,((void *)0x8c0d7668),ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b034,((undefined1 *)(fr0_ - 0x1ad0)),pcVar2,ar7));
  uVar3 = 0x8c4394b0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394b0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1ad0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1ae4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b048,((undefined1 *)(fr0_ - 0x1ae4)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394bc,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1ae4)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1af8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b05c,((undefined1 *)(fr0_ - 0x1af8)),uVar3,ar7));
  uVar3 = 0x8c4394c8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394c8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1af8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b0c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b070,((undefined1 *)(fr0_ - 0x1b0c)),uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394d4,ar7));
  uVar3 = 0xffffffff;
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b0c)),0xffffffff,0xffffffff,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b20)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b084,((undefined1 *)(fr0_ - 0x1b20)),uVar3,ar7));
  uVar3 = 0x8c4394e0;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394e0,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b20)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b34)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b098,((undefined1 *)(fr0_ - 0x1b34)),uVar3,ar7));
  uVar3 = 0x8c4394ec;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394ec,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b34)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b48)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b0ac,((undefined1 *)(fr0_ - 0x1b48)),uVar3,ar7));
  uVar3 = 0x8c4394f8;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c4394f8,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b48)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b5c)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b0c0,((undefined1 *)(fr0_ - 0x1b5c)),uVar3,ar7));
  uVar3 = 0x8c439504;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439504,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b5c)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b70)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b0d4,((undefined1 *)(fr0_ - 0x1b70)),uVar3,ar7));
  uVar3 = 0x8c439510;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439510,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b70)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b84)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b0e8,((undefined1 *)(fr0_ - 0x1b84)),uVar3,ar7));
  uVar3 = 0x8c43951c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43951c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b84)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1b98)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b0fc,((undefined1 *)(fr0_ - 0x1b98)),uVar3,ar7));
  uVar3 = 0x8c439528;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439528,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1b98)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1bac)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b110,((undefined1 *)(fr0_ - 0x1bac)),uVar3,ar7));
  uVar3 = 0x8c439534;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439534,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1bac)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1bc0)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b124,((undefined1 *)(fr0_ - 0x1bc0)),uVar3,ar7));
  uVar3 = 0x8c439540;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439540,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1bc0)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1bd4)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b138,((undefined1 *)(fr0_ - 0x1bd4)),uVar3,ar7));
  uVar3 = 0x8c43954c;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c43954c,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1bd4)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1be8)),uVar1,uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b14c,((undefined1 *)(fr0_ - 0x1be8)),uVar3,ar7));
  uVar3 = 0x8c439558;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439558,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1be8)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1bfc)),((undefined1 *)(fr0_ - 0x1bfc)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b160,((undefined1 *)(fr0_ - 0x1bfc)),uVar3,ar7));
  uVar3 = 0x8c439564;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439564,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1bfc)),0xffffffff,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0d7668(((undefined1 *)(fr0_ - 0x1c10)),((undefined1 *)(fr0_ - 0x1c10)),uVar3,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), FUN_8c0f3df8(0x8c43b174,((undefined1 *)(fr0_ - 0x1c10)),0x1bf8,ar7));
  uVar3 = 0x8c439570;
  (vsp = ((unsigned long)(fr0_ - 7188)), global_list_push(uVar1,((void *)0x8c0d76b8),0x8c439570,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 7188)), free_if_nonnull_wrap_0d76b8(((undefined1 *)(fr0_ - 0x1c10)),0xffffffff,uVar3,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0e99e4\n.set _FUN_8c0e99e4, _FUN_8c0e99e4_def\n");
