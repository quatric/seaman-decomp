//@unit 8c0e000c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e000c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e000c");
  return (unsigned)sh4_interp(0x8c0e000c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e000c\n.set FUN_8c0e000c, FUN_8c0e000c_def\n");
}
//@unit 8c0e004c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e004c_def(le<int>* ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e004c");
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
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x1c4))))(ar4,a5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x7c))))(ar4,a5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c0e004c\n.set FUN_8c0e004c, FUN_8c0e004c_def\n");

}
//@unit 8c0e00ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e00ec_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e00ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_0d09f8(ar4 + 0x4edc,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x15c))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0e00ec\n.set FUN_8c0e00ec, FUN_8c0e00ec_def\n");

}
//@unit 8c0e0124
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0124");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1468(ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e015c(ar4 + 0x13b8c,0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0e0124\n.set FUN_8c0e0124, FUN_8c0e0124_def\n");

}
//@unit 8c0e015c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e015c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xeb44;
  *(le<undefined4>* )(unsigned)(0xeb44 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e015c\n.set FUN_8c0e015c, FUN_8c0e015c_def\n");

}
//@unit 8c0e0168
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e0168");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e0168\n.set noop_0e0168, noop_0e0168_def\n");

}
//@unit 8c0e016c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e016c_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e016c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d50a0((int)ar4 + 0x10ac,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d0bd2((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_wrap_0d14b0((int)ar4 + 0x13b8c,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x1024 + (int)ar4) = 3;
  uVar1 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0538((int)ar4 + 0x13b24,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d0714((int)ar4 + 0x13b24,uVar1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x15c + *ar4))))(ar4,uVar1,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x9d4 + (int)ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6980((int)ar4 + 0xa68,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e016c\n.set FUN_8c0e016c, FUN_8c0e016c_def\n");

}
//@unit 8c0e021c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e021c");
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
  *(le<undefined4>* )(unsigned)(0x1024 + ar4) = 3;
  *(le<undefined4>* )(unsigned)(0x9d4 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6980(ar4 + 0xa68,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e021c\n.set FUN_8c0e021c, FUN_8c0e021c_def\n");

}
//@unit 8c0e02ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e02ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e02ac\n.set noop_0e02ac, noop_0e02ac_def\n");

}
//@unit 8c0e02b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e02b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0x1020 + ar4) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d5220(ar4 + 0x10ac,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e02b0\n.set FUN_8c0e02b0, FUN_8c0e02b0_def\n");

}
//@unit 8c0e02e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e02e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e02e4\n.set noop_0e02e4, noop_0e02e4_def\n");

}
//@unit 8c0e02e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e02e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e02e8");
  return (unsigned)sh4_interp(0x8c0e02e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e02e8\n.set FUN_8c0e02e8, FUN_8c0e02e8_def\n");
}
//@unit 8c0e0320
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0320");
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

__asm__(".globl FUN_8c0e0320\n.set FUN_8c0e0320, FUN_8c0e0320_def\n");

}
//@unit 8c0e03d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e03d4");
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

__asm__(".globl FUN_8c0e03d4\n.set FUN_8c0e03d4, FUN_8c0e03d4_def\n");

}
//@unit 8c0e0488
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0488");
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

__asm__(".globl FUN_8c0e0488\n.set FUN_8c0e0488, FUN_8c0e0488_def\n");

}
//@unit 8c0e0508
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0508");
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

__asm__(".globl FUN_8c0e0508\n.set FUN_8c0e0508, FUN_8c0e0508_def\n");

}
//@unit 8c0e057c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e057c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e057c");
  return (unsigned)sh4_interp(0x8c0e057c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e057c\n.set FUN_8c0e057c, FUN_8c0e057c_def\n");
}
//@unit 8c0e0614
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0614_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0614");
  return (unsigned)sh4_interp(0x8c0e0614, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0614\n.set FUN_8c0e0614, FUN_8c0e0614_def\n");
}
//@unit 8c0e06e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_bb4_0e06e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xbb4 + ar4);
}

__asm__(".globl get_field_bb4_0e06e4\n.set get_field_bb4_0e06e4, get_field_bb4_0e06e4_def\n");

}
//@unit 8c0e06f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e06f0_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e06f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* puVar2;
  
  puVar2 = (le<undefined4>* )(unsigned)(ar4 + 0x1698);
  uVar1 = ar5[1];
  *puVar2 = *ar5;
  puVar2[1] = uVar1;
  uVar1 = ar5[3];
  puVar2[2] = ar5[2];
  puVar2[3] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c0e06f0\n.set FUN_8c0e06f0, FUN_8c0e06f0_def\n");

}
//@unit 8c0e070c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e070c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *(le<undefined4>* )(unsigned)(0x23254 + ar4) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                    (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x23258 + ar4),ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2325c + ar4) = uVar1;
  iVar2 = *(le<int>* )(unsigned)(0x2325c + ar4);
  if (iVar2 != -1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x2325c + ar4),ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl FUN_8c0e070c\n.set FUN_8c0e070c, FUN_8c0e070c_def\n");

}
//@unit 8c0e0764
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0764_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0764");
  return (unsigned)sh4_interp(0x8c0e0764, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0764\n.set FUN_8c0e0764, FUN_8c0e0764_def\n");
}
//@unit 8c0e087c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e087c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e087c");
  return (unsigned)sh4_interp(0x8c0e087c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e087c\n.set FUN_8c0e087c, FUN_8c0e087c_def\n");
}
//@unit 8c0e08a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e08a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e08a0");
  return (unsigned)sh4_interp(0x8c0e08a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e08a0\n.set FUN_8c0e08a0, FUN_8c0e08a0_def\n");
}
//@unit 8c0e08b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e08b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = 0x22810;
    *(le<undefined4>* )(unsigned)(0x22810 + ar4) = 1;
    return iVar1;
  }
  iVar1 = 0x22810;
  *(le<undefined4>* )(unsigned)(0x22810 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0e08b0\n.set FUN_8c0e08b0, FUN_8c0e08b0_def\n");

}
//@unit 8c0e08d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e08d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = 0x22814;
    *(le<undefined4>* )(unsigned)(0x22814 + ar4) = 1;
    return iVar1;
  }
  iVar1 = 0x22814;
  *(le<undefined4>* )(unsigned)(0x22814 + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c0e08d0\n.set FUN_8c0e08d0, FUN_8c0e08d0_def\n");

}
//@unit 8c0e08f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e08f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<uint>*  s0 = (le<uint>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(le<undefined4>* )(fr0_ - 0x4)) = (*(le<undefined4>* )(fr0_ - 0x4)) & 0xfffffffc;
  if (*(le<int>* )(unsigned)(0x22814 + ar4) == 1) {
    (*(le<undefined4>* )(fr0_ - 0x4)) = (*(le<undefined4>* )(fr0_ - 0x4)) | 2;
  }
  if (*(le<int>* )(unsigned)(0x22810 + ar4) == 1) {
    (*(le<undefined4>* )(fr0_ - 0x4)) = (*(le<undefined4>* )(fr0_ - 0x4)) | 1;
  }
  *s0 = (*(le<undefined4>* )(fr0_ - 0x4));
  return (*(le<undefined4>* )(fr0_ - 0x4));
}

__asm__(".globl FUN_8c0e08f0\n.set FUN_8c0e08f0, FUN_8c0e08f0_def\n");

}
//@unit 8c0e0950
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0950");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x22d48;
}

__asm__(".globl FUN_8c0e0950\n.set FUN_8c0e0950, FUN_8c0e0950_def\n");

}
//@unit 8c0e0960
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0960");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_164_0d5c94(ar4 + 0x22d48,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e0960\n.set FUN_8c0e0960, FUN_8c0e0960_def\n");

}
//@unit 8c0e0988
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0988_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0988");
  return (unsigned)sh4_interp(0x8c0e0988, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0988\n.set FUN_8c0e0988, FUN_8c0e0988_def\n");
}
//@unit 8c0e0b2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0b2c");
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

__asm__(".globl FUN_8c0e0b2c\n.set FUN_8c0e0b2c, FUN_8c0e0b2c_def\n");

}
//@unit 8c0e0ba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0ba8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)(*(le<int>* )(unsigned)(0xeb44 + ar4) == 1);
}

__asm__(".globl FUN_8c0e0ba8\n.set FUN_8c0e0ba8, FUN_8c0e0ba8_def\n");

}
//@unit 8c0e0bb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0bb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<int>* )(unsigned)(ar4 + 0x18) == 1) && (*(le<int>* )(unsigned)(ar4 + 0x14) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e0bb8\n.set FUN_8c0e0bb8, FUN_8c0e0bb8_def\n");

}
//@unit 8c0e0bd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0bd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0bd0");
  return (unsigned)sh4_interp(0x8c0e0bd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0bd0\n.set FUN_8c0e0bd0, FUN_8c0e0bd0_def\n");
}
//@unit 8c0e0be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_GRAPHICS_ENV_0e0bee");
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

__asm__(".globl s_GRAPHICS_ENV_0e0bee\n.set s_GRAPHICS_ENV_0e0bee, s_GRAPHICS_ENV_0e0bee_def\n");

}
//@unit 8c0e0d6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0d6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x22704;
}

__asm__(".globl FUN_8c0e0d6c\n.set FUN_8c0e0d6c, FUN_8c0e0d6c_def\n");

}
//@unit 8c0e0d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e0d7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((le<int>* )(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e0d7c\n.set FUN_8c0e0d7c, FUN_8c0e0d7c_def\n");

}
//@unit 8c0e0da4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0da4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0da4");
  return (unsigned)sh4_interp(0x8c0e0da4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0da4\n.set FUN_8c0e0da4, FUN_8c0e0da4_def\n");
}
//@unit 8c0e0f48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e0f48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e0f48");
  return (unsigned)sh4_interp(0x8c0e0f48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e0f48\n.set FUN_8c0e0f48, FUN_8c0e0f48_def\n");
}
//@unit 8c0e130c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e130c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e130c");
  return (unsigned)sh4_interp(0x8c0e130c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e130c\n.set FUN_8c0e130c, FUN_8c0e130c_def\n");
}
//@unit 8c0e1318
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_14_0e1318");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x14);
}

__asm__(".globl get_field_14_0e1318\n.set get_field_14_0e1318, get_field_14_0e1318_def\n");

}
//@unit 8c0e1320
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e1320");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x18) = 0;
  return 0;
}

__asm__(".globl FUN_8c0e1320\n.set FUN_8c0e1320, FUN_8c0e1320_def\n");

}
//@unit 8c0e132c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e132c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e132c");
  return (unsigned)sh4_interp(0x8c0e132c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e132c\n.set FUN_8c0e132c, FUN_8c0e132c_def\n");
}
//@unit 8c0e1398
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e1398_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e1398");
  return (unsigned)sh4_interp(0x8c0e1398, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e1398\n.set FUN_8c0e1398, FUN_8c0e1398_def\n");
}
//@unit 8c0e14d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e14d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1060(ar4 + 0x13b8c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e14d8\n.set FUN_8c0e14d8, FUN_8c0e14d8_def\n");

}
//@unit 8c0e14fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e14fc");
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

__asm__(".globl FUN_8c0e14fc\n.set FUN_8c0e14fc, FUN_8c0e14fc_def\n");

}
//@unit 8c0e157c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e157c");
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

__asm__(".globl FUN_8c0e157c\n.set FUN_8c0e157c, FUN_8c0e157c_def\n");

}
//@unit 8c0e15fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e15fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e15fc");
  return (unsigned)sh4_interp(0x8c0e15fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e15fc\n.set FUN_8c0e15fc, FUN_8c0e15fc_def\n");
}
//@unit 8c0e1698
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0e16a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0e16a0");
  return (unsigned)sh4_interp(0x8c0e1698, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0e16a0\n.set s_GRAPHICS_ENV_0e16a0, s_GRAPHICS_ENV_0e16a0_def\n");
}
//@unit 8c0e1f90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e1f90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e1f90");
  return (unsigned)sh4_interp(0x8c0e1f90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e1f90\n.set FUN_8c0e1f90, FUN_8c0e1f90_def\n");
}
//@unit 8c0e252c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e252c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01edcc(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e252c\n.set FUN_8c0e252c, FUN_8c0e252c_def\n");

}
//@unit 8c0e2554
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e2554");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  if (((iVar1 == 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ebd8))))
                         (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 1)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01ec68))))
                        (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e2554\n.set FUN_8c0e2554, FUN_8c0e2554_def\n");

}
//@unit 8c0e25c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e25c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e25c0");
  return (unsigned)sh4_interp(0x8c0e25c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e25c0\n.set FUN_8c0e25c0, FUN_8c0e25c0_def\n");
}
//@unit 8c0e2838
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e2838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x160;
  *(le<undefined4>* )(unsigned)(0x160 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e2838\n.set FUN_8c0e2838, FUN_8c0e2838_def\n");

}
//@unit 8c0e2844
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e2844");
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

__asm__(".globl FUN_8c0e2844\n.set FUN_8c0e2844, FUN_8c0e2844_def\n");

}
//@unit 8c0e28a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e28a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e28a0");
  return (unsigned)sh4_interp(0x8c0e28a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e28a0\n.set FUN_8c0e28a0, FUN_8c0e28a0_def\n");
}
//@unit 8c0e29dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e29dc");
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

__asm__(".globl FUN_8c0e29dc\n.set FUN_8c0e29dc, FUN_8c0e29dc_def\n");

}
//@unit 8c0e2a14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e2a14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e2a14");
  return (unsigned)sh4_interp(0x8c0e2a14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e2a14\n.set FUN_8c0e2a14, FUN_8c0e2a14_def\n");
}
//@unit 8c0e3050
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e3050");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f2b4))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e3050\n.set FUN_8c0e3050, FUN_8c0e3050_def\n");

}
//@unit 8c0e3078
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e3078");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01f2b4))))
                    (*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e3078\n.set FUN_8c0e3078, FUN_8c0e3078_def\n");

}
//@unit 8c0e30a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e30a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e30a0\n.set FUN_8c0e30a0, FUN_8c0e30a0_def\n");

}
//@unit 8c0e30c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e30c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f270(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e30c8\n.set FUN_8c0e30c8, FUN_8c0e30c8_def\n");

}
//@unit 8c0e30f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e30f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if (((iVar1 != 0) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f0d0(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
      iVar1 != 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1a4(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e30f0\n.set FUN_8c0e30f0, FUN_8c0e30f0_def\n");

}
//@unit 8c0e3150
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e3150");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f1e8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e3150\n.set FUN_8c0e3150, FUN_8c0e3150_def\n");

}
//@unit 8c0e319c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e319c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f2f8(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  if ((iVar1 != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f118(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7)),
     iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e319c\n.set FUN_8c0e319c, FUN_8c0e319c_def\n");

}
//@unit 8c0e31e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e31e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e31e8\n.set FUN_8c0e31e8, FUN_8c0e31e8_def\n");

}
//@unit 8c0e3210
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e3210_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e3210");
  return (unsigned)sh4_interp(0x8c0e3210, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e3210\n.set FUN_8c0e3210, FUN_8c0e3210_def\n");
}
//@unit 8c0e389c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e389c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e389c");
  return (unsigned)sh4_interp(0x8c0e389c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e389c\n.set FUN_8c0e389c, FUN_8c0e389c_def\n");
}
//@unit 8c0e3994
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e3994_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e3994");
  return (unsigned)sh4_interp(0x8c0e3994, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e3994\n.set FUN_8c0e3994, FUN_8c0e3994_def\n");
}
//@unit 8c0e3e98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e3e98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x40,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e3e98\n.set FUN_8c0e3e98, FUN_8c0e3e98_def\n");

}
//@unit 8c0e3ebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e3ebc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e3ebc");
  return (unsigned)sh4_interp(0x8c0e3ebc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e3ebc\n.set FUN_8c0e3ebc, FUN_8c0e3ebc_def\n");
}
//@unit 8c0e3f24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e3f24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e3f24");
  return (unsigned)sh4_interp(0x8c0e3f24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e3f24\n.set FUN_8c0e3f24, FUN_8c0e3f24_def\n");
}
//@unit 8c0e4198
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e4198_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e4198");
  return (unsigned)sh4_interp(0x8c0e4198, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e4198\n.set FUN_8c0e4198, FUN_8c0e4198_def\n");
}
//@unit 8c0e4298
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e4298_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e4298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c05c284))))
                    (*(le<undefined4>* )(unsigned)(0x9d4 + (int)ar4),ar5,ar6,ar7));
  if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 5)) || (iVar1 == 1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x58))))(ar4,uVar2,ar6,ar7));
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

__asm__(".globl FUN_8c0e4298\n.set FUN_8c0e4298, FUN_8c0e4298_def\n");

}
//@unit 8c0e4330
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e4330");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(le<undefined4>* )(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e4330\n.set FUN_8c0e4330, FUN_8c0e4330_def\n");

}
//@unit 8c0e433c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e433c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xd4;
  *(le<undefined4>* )(unsigned)(0xd4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e433c\n.set FUN_8c0e433c, FUN_8c0e433c_def\n");

}
//@unit 8c0e4348
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e4348");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(ar5,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6a20(ar4 + 0xa68,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e4348\n.set FUN_8c0e4348, FUN_8c0e4348_def\n");

}
//@unit 8c0e4378
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_SoilTank_0e437e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_SoilTank_0e437e");
  return (unsigned)sh4_interp(0x8c0e4378, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_SoilTank_0e437e\n.set s_SoilTank_0e437e, s_SoilTank_0e437e_def\n");
}
//@unit 8c0e462c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e462c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c0e462c\n.set FUN_8c0e462c, FUN_8c0e462c_def\n");

}
//@unit 8c0e468c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e468c");
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

__asm__(".globl FUN_8c0e468c\n.set FUN_8c0e468c, FUN_8c0e468c_def\n");

}
//@unit 8c0e46cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12b758_m0_0e46cc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b758_m0_0e46cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
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

__asm__(".globl Class_12b758_m0_0e46cc\n.set Class_12b758_m0_0e46cc, Class_12b758_m0_0e46cc_def\n");

}
//@unit 8c0e47d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0e47de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0e47de");
  return (unsigned)sh4_interp(0x8c0e47d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0e47de\n.set s_GRAPHICS_ENV_0e47de, s_GRAPHICS_ENV_0e47de_def\n");
}
//@unit 8c0e4b5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b758_m1_0e4b5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b758_m1_0e4b5c");
  return (unsigned)sh4_interp(0x8c0e4b5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b758_m1_0e4b5c\n.set Class_12b758_m1_0e4b5c, Class_12b758_m1_0e4b5c_def\n");
}
//@unit 8c0e4ce4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12b758_m2_0e4ce4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12b758_m2_0e4ce4");
  return (unsigned)sh4_interp(0x8c0e4ce4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12b758_m2_0e4ce4\n.set Class_12b758_m2_0e4ce4, Class_12b758_m2_0e4ce4_def\n");
}
//@unit 8c0e4d64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e4d64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    if (*(le<int>* )(unsigned)(0x1090 + iVar1 * 0x24 + ar4) == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6164(iVar1 * 0x24 + ar4 + 0x1070,ar5,ar6,ar7));
    }
  }
  return 3;
}

__asm__(".globl FUN_8c0e4d64\n.set FUN_8c0e4d64, FUN_8c0e4d64_def\n");

}
//@unit 8c0e4dd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e4dd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e4dd0");
  return (unsigned)sh4_interp(0x8c0e4dd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e4dd0\n.set FUN_8c0e4dd0, FUN_8c0e4dd0_def\n");
}
//@unit 8c0e505c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e505c");
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

__asm__(".globl FUN_8c0e505c\n.set FUN_8c0e505c, FUN_8c0e505c_def\n");

}
//@unit 8c0e50a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e50a0");
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

__asm__(".globl FUN_8c0e50a0\n.set FUN_8c0e50a0, FUN_8c0e50a0_def\n");

}
//@unit 8c0e50f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e50f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e50f4");
  return (unsigned)sh4_interp(0x8c0e50f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e50f4\n.set FUN_8c0e50f4, FUN_8c0e50f4_def\n");
}
//@unit 8c0e518c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e518c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(0x15c8 + ar4) == 0) {
    *(le<undefined4>* )(unsigned)(0x15c8 + ar4) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e518c\n.set FUN_8c0e518c, FUN_8c0e518c_def\n");

}
//@unit 8c0e51ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e51ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e51ac");
  return (unsigned)sh4_interp(0x8c0e51ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e51ac\n.set FUN_8c0e51ac, FUN_8c0e51ac_def\n");
}
//@unit 8c0e5230
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5230");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5230\n.set noop_0e5230, noop_0e5230_def\n");

}
//@unit 8c0e5234
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5234");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5234\n.set noop_0e5234, noop_0e5234_def\n");

}
//@unit 8c0e5238
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e5238_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e5238");
  return (unsigned)sh4_interp(0x8c0e5238, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e5238\n.set FUN_8c0e5238, FUN_8c0e5238_def\n");
}
//@unit 8c0e5998
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5998");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f33c(*(le<undefined4>* )(unsigned)(0xcc + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e5998\n.set FUN_8c0e5998, FUN_8c0e5998_def\n");

}
//@unit 8c0e59c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e59c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ffb84(ar4 + 0xd8,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0e59c0\n.set FUN_8c0e59c0, FUN_8c0e59c0_def\n");

}
//@unit 8c0e59e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e59e8_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e59e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e59e8\n.set FUN_8c0e59e8, FUN_8c0e59e8_def\n");

}
//@unit 8c0e5a08
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5a08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954(ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x1020 + ar4) = 5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e5dac(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e5a08\n.set FUN_8c0e5a08, FUN_8c0e5a08_def\n");

}
//@unit 8c0e5a64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e5a64_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e5a64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0e5a64\n.set FUN_8c0e5a64, FUN_8c0e5a64_def\n");

}
//@unit 8c0e5a88
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e5a88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e5a88\n.set ret_const_0_0e5a88, ret_const_0_0e5a88_def\n");

}
//@unit 8c0e5a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5a90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5a90\n.set noop_0e5a90, noop_0e5a90_def\n");

}
//@unit 8c0e5a94
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5a94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5a94\n.set noop_0e5a94, noop_0e5a94_def\n");

}
//@unit 8c0e5a98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5a98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5a98\n.set noop_0e5a98, noop_0e5a98_def\n");

}
//@unit 8c0e5a9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5a9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5a9c\n.set noop_0e5a9c, noop_0e5a9c_def\n");

}
//@unit 8c0e5aa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5aa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5aa0\n.set noop_0e5aa0, noop_0e5aa0_def\n");

}
//@unit 8c0e5aa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e5aa4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e5aa4\n.set noop_0e5aa4, noop_0e5aa4_def\n");

}
//@unit 8c0e5aa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e5aa8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e5aa8");
  return (unsigned)sh4_interp(0x8c0e5aa8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e5aa8\n.set FUN_8c0e5aa8, FUN_8c0e5aa8_def\n");
}
//@unit 8c0e5ae0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5ae0");
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

__asm__(".globl FUN_8c0e5ae0\n.set FUN_8c0e5ae0, FUN_8c0e5ae0_def\n");

}
//@unit 8c0e5b30
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5b30");
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

__asm__(".globl FUN_8c0e5b30\n.set FUN_8c0e5b30, FUN_8c0e5b30_def\n");

}
//@unit 8c0e5b80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5b80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  le<uint>*  s0 = (le<uint>* )(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  
  (*(le<undefined4>* )(fr0_ - 0x4)) = (*(le<undefined4>* )(fr0_ - 0x4)) & 0xfffffffc | 1;
  *s0 = (*(le<undefined4>* )(fr0_ - 0x4));
  return (*(le<undefined4>* )(fr0_ - 0x4));
}

__asm__(".globl FUN_8c0e5b80\n.set FUN_8c0e5b80, FUN_8c0e5b80_def\n");

}
//@unit 8c0e5ba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_15c8_0e5ba8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x15c8 + ar4);
}

__asm__(".globl get_field_15c8_0e5ba8\n.set get_field_15c8_0e5ba8, get_field_15c8_0e5ba8_def\n");

}
//@unit 8c0e5bb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_GRAPHICS_ENV_0e5bba");
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

__asm__(".globl s_GRAPHICS_ENV_0e5bba\n.set s_GRAPHICS_ENV_0e5bba, s_GRAPHICS_ENV_0e5bba_def\n");

}
//@unit 8c0e5c24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e5c24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((le<int>* )(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e5c24\n.set FUN_8c0e5c24, FUN_8c0e5c24_def\n");

}
//@unit 8c0e5c4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e5c4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e5c4c");
  return (unsigned)sh4_interp(0x8c0e5c4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e5c4c\n.set FUN_8c0e5c4c, FUN_8c0e5c4c_def\n");
}
//@unit 8c0e5dac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e5dac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e5dac");
  return (unsigned)sh4_interp(0x8c0e5dac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e5dac\n.set FUN_8c0e5dac, FUN_8c0e5dac_def\n");
}
//@unit 8c0e5e54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Outside_0e5e56_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Outside_0e5e56");
  return (unsigned)sh4_interp(0x8c0e5e54, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Outside_0e5e56\n.set s_Outside_0e5e56, s_Outside_0e5e56_def\n");
}
//@unit 8c0e6114
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6114");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl FUN_8c0e6114\n.set FUN_8c0e6114, FUN_8c0e6114_def\n");

}
//@unit 8c0e61f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12b580_m0_0e61f4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b580_m0_0e61f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
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

__asm__(".globl Class_12b580_m0_0e61f4\n.set Class_12b580_m0_0e61f4, Class_12b580_m0_0e61f4_def\n");

}
//@unit 8c0e62cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e62cc_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e62cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x88 + *ar4))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_ENV_0d819c((int)ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0e705c))))
            (ar4,*(le<undefined4>* )(unsigned)(0x10dc + (int)ar4),ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x83fc + (int)ar4);
  if (iVar1 == -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83f8 + (int)ar4),ar6,ar7));
    iVar1 = 0x83fc;
    *(le<undefined4>* )(unsigned)(0x83fc + (int)ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0e62cc\n.set FUN_8c0e62cc, FUN_8c0e62cc_def\n");

}
//@unit 8c0e634c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12b580_m1_0e634c");
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
  uVar3 = *(le<uint>* )(unsigned)(0x10dc + ar4);
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,uVar3,iVar4,ar7));
  if ((*(le<int>* )(unsigned)(0x10dc + ar4) == 0) || (*(le<int>* )(unsigned)(0x10dc + ar4) == 0x8ca0)) {
    if (*(le<int>* )(unsigned)(0x83fc + ar4) != -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83fc + ar4),iVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220bc(0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83fc + ar4),iVar4,ar7));
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83f8 + ar4),iVar4,ar7));
    *(le<undefined4>* )(unsigned)(0x83fc + ar4) = uVar1;
    uVar3 = *(le<uint>* )(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  if ((*(le<uint>* )(unsigned)(0x10dc + ar4) & 1) == 0) {
    uVar3 = *(le<uint>* )(unsigned)(0x8400 + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022128(0x8c2b59d0,uVar3,iVar4,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c101154(*(le<undefined4>* )(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_38_0db5a0(ar4 + 0x4d4,uVar3,iVar4,ar7));
    if (iVar2 != 0) {
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db580(ar4 + 0x4d4,uVar3,iVar4,ar7));
      for (iVar5 = 0; iVar5 < iVar2; iVar5 = iVar5 + 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c101178))))
                          (*(le<undefined4>* )(unsigned)(0x7cc + ar5),uVar3,iVar4,ar7));
        uVar3 = uVar3 & 0xff;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4_00 + 8) + 8) + 0x50))))
                  (*(le<int>* )(unsigned)(ar4_00 + 8),uVar3,iVar4,ar7));
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

__asm__(".globl Class_12b580_m1_0e634c\n.set Class_12b580_m1_0e634c, Class_12b580_m1_0e634c_def\n");

}
//@unit 8c0e6548
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12b580_m2_0e6548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  int ar6_00;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m2_0da5a8(ar4,ar5,ar6,ar7));
  ar5_00 = *(le<undefined4>* )(unsigned)(0x10dc + ar4);
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

__asm__(".globl Class_12b580_m2_0e6548\n.set Class_12b580_m2_0e6548, Class_12b580_m2_0e6548_def\n");

}
//@unit 8c0e660c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e660c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e660c");
  return (unsigned)sh4_interp(0x8c0e660c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e660c\n.set FUN_8c0e660c, FUN_8c0e660c_def\n");
}
//@unit 8c0e66fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e66fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d9b34(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e66fc\n.set FUN_8c0e66fc, FUN_8c0e66fc_def\n");

}
//@unit 8c0e6718
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6718");
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

__asm__(".globl FUN_8c0e6718\n.set FUN_8c0e6718, FUN_8c0e6718_def\n");

}
//@unit 8c0e676c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e676c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e676c");
  return (unsigned)sh4_interp(0x8c0e676c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e676c\n.set FUN_8c0e676c, FUN_8c0e676c_def\n");
}
//@unit 8c0e6804
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6804");
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
  (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((0xacc + ar4)) << 1) + *(le<int>* )(unsigned)((0xacc + ar4))) << 2) + ar4) + 0x106c)),ar4,ar5,ar6_00,ar7); }));
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

__asm__(".globl FUN_8c0e6804\n.set FUN_8c0e6804, FUN_8c0e6804_def\n");

}
//@unit 8c0e68d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e68d4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e68d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e68d4\n.set FUN_8c0e68d4, FUN_8c0e68d4_def\n");

}
//@unit 8c0e68f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e68f4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e68f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0daf80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6954((int)ar4 + 0xa68,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e743c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8400((int)ar4 + 0x10dc,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xa8 + *ar4))))(ar4,3,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e68f4\n.set FUN_8c0e68f4, FUN_8c0e68f4_def\n");

}
//@unit 8c0e6964
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6964_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e6964");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0e6964\n.set FUN_8c0e6964, FUN_8c0e6964_def\n");

}
//@unit 8c0e6988
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e6988_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e6988");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8444((int)ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xa4 + *ar4))))(ar4,3,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c0e6988\n.set FUN_8c0e6988, FUN_8c0e6988_def\n");

}
//@unit 8c0e69c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_ENV_0e69c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_ENV_0e69c8");
  return (unsigned)sh4_interp(0x8c0e69c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_ENV_0e69c8\n.set s_GRAPHICS_ENV_0e69c8, s_GRAPHICS_ENV_0e69c8_def\n");
}
//@unit 8c0e6c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6c00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_64_JUNGLE_NIGHT_0e7062(ar4,*(le<undefined4>* )(unsigned)(0x10dc + ar4),ar6,ar7));
  iVar1 = *(le<int>* )(unsigned)(0x83fc + ar4);
  if (iVar1 == -1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c022068))))
                      (0x8c2b59d0,*(le<undefined4>* )(unsigned)(0x83f8 + ar4),ar6,ar7));
    iVar1 = 0x83fc;
    *(le<undefined4>* )(unsigned)(0x83fc + ar4) = uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c0e6c00\n.set FUN_8c0e6c00, FUN_8c0e6c00_def\n");

}
//@unit 8c0e6c54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e6c54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e6c54");
  return (unsigned)sh4_interp(0x8c0e6c54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e6c54\n.set FUN_8c0e6c54, FUN_8c0e6c54_def\n");
}
//@unit 8c0e6c8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6c8c");
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

__asm__(".globl FUN_8c0e6c8c\n.set FUN_8c0e6c8c, FUN_8c0e6c8c_def\n");

}
//@unit 8c0e6cd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6cd8");
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

__asm__(".globl FUN_8c0e6cd8\n.set FUN_8c0e6cd8, FUN_8c0e6cd8_def\n");

}
//@unit 8c0e6d24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6d24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  undefined4 uVar1;
  
  ar5_00 = (uint)(byte)ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db090(ar4,ar5_00,ar6,ar7));
  if (*(le<int>* )(unsigned)(0x83fc + ar4) != -1) {
    ar5_00 = *(le<uint>* )(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c022104(0x8c2b59d0,ar5_00,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8460(ar4 + 0x10dc,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e6d24\n.set FUN_8c0e6d24, FUN_8c0e6d24_def\n");

}
//@unit 8c0e6d80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6d80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(le<int>* )(unsigned)(0x83fc + ar4) != -1) {
    ar5 = *(le<undefined4>* )(unsigned)(0x83fc + ar4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0220d4(0x8c2b59d0,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d84a8(ar4 + 0x10dc,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e6d80\n.set FUN_8c0e6d80, FUN_8c0e6d80_def\n");

}
//@unit 8c0e6dc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e6dc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e6dc4");
  return (unsigned)sh4_interp(0x8c0e6dc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e6dc4\n.set FUN_8c0e6dc4, FUN_8c0e6dc4_def\n");
}
//@unit 8c0e6e74
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_GRAPHICS_ENV_0e6e78");
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

__asm__(".globl s_GRAPHICS_ENV_0e6e78\n.set s_GRAPHICS_ENV_0e6e78, s_GRAPHICS_ENV_0e6e78_def\n");

}
//@unit 8c0e6ec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e6ec8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x9e8) + 0x28))))
                    ((le<int>* )(unsigned)(ar4 + 0x9e8),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e6ec8\n.set FUN_8c0e6ec8, FUN_8c0e6ec8_def\n");

}
//@unit 8c0e6ef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e6ef0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e6ef0");
  return (unsigned)sh4_interp(0x8c0e6ef0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e6ef0\n.set FUN_8c0e6ef0, FUN_8c0e6ef0_def\n");
}
//@unit 8c0e705c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_64_JUNGLE_NIGHT_0e7062_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_64_JUNGLE_NIGHT_0e7062");
  return (unsigned)sh4_interp(0x8c0e705c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_64_JUNGLE_NIGHT_0e7062\n.set s_64_JUNGLE_NIGHT_0e7062, s_64_JUNGLE_NIGHT_0e7062_def\n");
}
//@unit 8c0e7190
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e7190_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e7190");
  return (unsigned)sh4_interp(0x8c0e7190, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e7190\n.set FUN_8c0e7190, FUN_8c0e7190_def\n");
}
//@unit 8c0e727c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e727c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e727c");
  return (unsigned)sh4_interp(0x8c0e727c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e727c\n.set FUN_8c0e727c, FUN_8c0e727c_def\n");
}
//@unit 8c0e741c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e741c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_0dc548(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0e741c\n.set FUN_8c0e741c, FUN_8c0e741c_def\n");

}
//@unit 8c0e743c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e743c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e743c");
  return (unsigned)sh4_interp(0x8c0e743c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e743c\n.set FUN_8c0e743c, FUN_8c0e743c_def\n");
}
//@unit 8c0e749c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_11940_0e749c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0x11940;
}

__asm__(".globl ret_const_11940_0e749c\n.set ret_const_11940_0e749c, ret_const_11940_0e749c_def\n");

}
//@unit 8c0e74a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_INCUBATOR_0e74ae_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_INCUBATOR_0e74ae");
  return (unsigned)sh4_interp(0x8c0e74a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_INCUBATOR_0e74ae\n.set s_INCUBATOR_0e74ae, s_INCUBATOR_0e74ae_def\n");
}
//@unit 8c0e77ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12b3b8_m0_0e77ec_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12b3b8_m0_0e77ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
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

__asm__(".globl Class_12b3b8_m0_0e77ec\n.set Class_12b3b8_m0_0e77ec, Class_12b3b8_m0_0e77ec_def\n");

}
//@unit 8c0e78c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_GRAPHICS_ENV_0e78c4");
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
    *(le<undefined4>* )(unsigned)(iVar4 * 0xc + ar4 + 0x49c) = 0x80000000;
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

__asm__(".globl s_GRAPHICS_ENV_0e78c4\n.set s_GRAPHICS_ENV_0e78c4, s_GRAPHICS_ENV_0e78c4_def\n");

}
//@unit 8c0e79d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("Class_12b3b8_m1_0e79d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0x410 + ar4) != 0) {
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        if (*(le<int>* )(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
          a4 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x20))))(a4,ar5,ar6,ar7));
        }
      }
    }
  }
  return 1;
}

__asm__(".globl Class_12b3b8_m1_0e79d4\n.set Class_12b3b8_m1_0e79d4, Class_12b3b8_m1_0e79d4_def\n");

}
//@unit 8c0e7a70
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_1_0e7a70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0e7a70\n.set ret_const_1_0e7a70, ret_const_1_0e7a70_def\n");

}
//@unit 8c0e7a78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e7a78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e7a78");
  return (unsigned)sh4_interp(0x8c0e7a78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e7a78\n.set FUN_8c0e7a78, FUN_8c0e7a78_def\n");
}
//@unit 8c0e8040
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_3f800000_0e8040_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_3f800000_0e8040");
  return (unsigned)sh4_interp(0x8c0e8040, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_3f800000_0e8040\n.set ret_const_3f800000_0e8040, ret_const_3f800000_0e8040_def\n");
}
//@unit 8c0e8048
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_Failed_to_set_texture_wrap_0e8048");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_set_texture_s_015252(ar4 + 0x488,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_to_set_texture_wrap_0e8048\n.set s_Failed_to_set_texture_wrap_0e8048, s_Failed_to_set_texture_wrap_0e8048_def\n");

}
//@unit 8c0e806c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_Failed_wrap_0e806c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x488,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Failed_wrap_0e806c\n.set s_Failed_wrap_0e806c, s_Failed_wrap_0e806c_def\n");

}
//@unit 8c0e8090
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8090");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  le<undefined2>* puVar1;
  
  ({ unsigned long t0_ = (unsigned long)(&(*(le<undefined2>* )(fr0_ - 0x10))); *(le<unsigned>* )((((unsigned long)(fr0_ - 20)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 20)) - 8); FUN_8c0e8ae0(ar4,ar5,ar6,ar7); });
  puVar1 = (le<undefined2>* )(unsigned)(ar4 + 0x224);
  *puVar1 = (*(le<undefined2>* )(fr0_ - 0x10));
  puVar1[1] = (*(le<undefined2>* )(fr0_ - 0xe));
  (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(le<undefined2>* )(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  if ((*(le<short>* )(unsigned)(0x224 + ar4) != -1) && (*(le<short>* )(unsigned)(0x226 + ar4) != -1)) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e810c(ar4,ar5,ar4 + 0x224,ar7));
    ar5 = 0;
  }
  return ar5;
}

__asm__(".globl FUN_8c0e8090\n.set FUN_8c0e8090, FUN_8c0e8090_def\n");

}
//@unit 8c0e810c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e810c_def(int ar4,undefined4 ar5,le<short>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e810c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  le<short>* ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4da0(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xa4 + ar4 + ar6[1] * 0x80 + *ar6 * 0x20) = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d6fb8(ar4 + ar6[1] * 0x80 + *ar6 * 0x20 + 0xa4,ar5_00,ar6_00,ar7));
  *(le<int>* )(unsigned)(0x410 + ar4) = *(le<int>* )(unsigned)(0x410 + ar4) + 1;
  ar6[1] = -1;
  *ar6 = -1;
  return ar5;
}

__asm__(".globl FUN_8c0e810c\n.set FUN_8c0e810c, FUN_8c0e810c_def\n");

}
//@unit 8c0e81b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e81b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e81b4");
  return (unsigned)sh4_interp(0x8c0e81b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e81b4\n.set FUN_8c0e81b4, FUN_8c0e81b4_def\n");
}
//@unit 8c0e81f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e81f0_def(int ar4,le<short>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e81f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)
           (0xa4 +
           ar4 + *(le<short>* )(unsigned)(0x226 + ar4) * 0x80 + *(le<short>* )(unsigned)(0x224 + ar4) * 0x20);
  *(le<undefined4>* )(unsigned)(0xa4 + ar4 + ar5[1] * 0x80 + *ar5 * 0x20) = 0;
  *(le<int>* )(unsigned)(0x410 + ar4) = *(le<int>* )(unsigned)(0x410 + ar4) + -1;
  *(le<undefined4>* )(unsigned)(0x440 + ar4) = 1;
  return uVar1;
}

__asm__(".globl FUN_8c0e81f0\n.set FUN_8c0e81f0, FUN_8c0e81f0_def\n");

}
//@unit 8c0e8278
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_1_0e8278");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_0e8278\n.set ret_const_1_0e8278, ret_const_1_0e8278_def\n");

}
//@unit 8c0e8280
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8280_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8280");
  return (unsigned)sh4_interp(0x8c0e8280, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8280\n.set FUN_8c0e8280, FUN_8c0e8280_def\n");
}
//@unit 8c0e84c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined2>*  FUN_8c0e84c8_def(le<undefined2>* ar4,le<undefined2>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e84c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  return ar4;
}

__asm__(".globl FUN_8c0e84c8\n.set FUN_8c0e84c8, FUN_8c0e84c8_def\n");

}
//@unit 8c0e84d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e84d8_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e84d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c0 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e84d8\n.set FUN_8c0e84d8, FUN_8c0e84d8_def\n");

}
//@unit 8c0e84f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e84f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e84f8");
  return (unsigned)sh4_interp(0x8c0e84f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e84f8\n.set FUN_8c0e84f8, FUN_8c0e84f8_def\n");
}
//@unit 8c0e8538
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e8538_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e8538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1c4 + *ar4))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e8538\n.set FUN_8c0e8538, FUN_8c0e8538_def\n");

}
//@unit 8c0e855c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e855c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(0x440 + ar4) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0e855c\n.set FUN_8c0e855c, FUN_8c0e855c_def\n");

}
//@unit 8c0e8574
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8574");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x228) + 0xc))))((le<int>* )(unsigned)(ar4 + 0x228),ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c0e8574\n.set FUN_8c0e8574, FUN_8c0e8574_def\n");

}
//@unit 8c0e8598
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8598");
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
      if (*(le<int>* )(unsigned)(iVar5 * 0x80 + ar5) != -1) {
        ar6_00 = *(le<undefined4>* )(unsigned)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fef94))))
                          (0x8c3eb324,*(le<undefined4>* )(unsigned)(iVar5 * 0x80 + ar5),ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(le<int>* )(unsigned)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x108 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x108 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = 0x8c3eb334;
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,uVar1,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d6fb8))))
                    (ar4 + iVar6 * 0x80 + iVar7 * 0x20 + 0xa4,uVar1,iVar3,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c4da0))))
                  (ar4,*(le<undefined4>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20),iVar3,ar7));
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  *(le<int>* )(unsigned)(0x410 + ar4) = iVar4;
  return 1;
}

__asm__(".globl FUN_8c0e8598\n.set FUN_8c0e8598, FUN_8c0e8598_def\n");

}
//@unit 8c0e8840
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8840");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int a4;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
    *(le<undefined4>* )(unsigned)(iVar2 * 0x80 + ar5) = 0xffffffff;
  }
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
      if (*(le<int>* )(unsigned)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20) != 0) {
        a4 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar2 * 0x80 + iVar3 * 0x20);
        (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x15c + *(le<int>* )(unsigned)(a4 + 8)))))(a4,ar5 + iVar1 * 0x80,ar6,ar7));
        iVar1 = iVar1 + 1;
      }
    }
  }
  return 1;
}

__asm__(".globl FUN_8c0e8840\n.set FUN_8c0e8840, FUN_8c0e8840_def\n");

}
//@unit 8c0e88fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e88fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e88fc\n.set noop_0e88fc, noop_0e88fc_def\n");

}
//@unit 8c0e8900
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8900");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  *(le<undefined4>* )(unsigned)(0x410 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x440 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(le<int>* )(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d1b90(ar4 + iVar1 * 0x80 + iVar2 * 0x20 + 0xa4,ar5,ar6,ar7));
      }
    }
  }
  return 1;
}

__asm__(".globl FUN_8c0e8900\n.set FUN_8c0e8900, FUN_8c0e8900_def\n");

}
//@unit 8c0e89a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0e89a0_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e89a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x1b0 + *ar4))))(ar4,1,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e89a0\n.set FUN_8c0e89a0, FUN_8c0e89a0_def\n");

}
//@unit 8c0e89c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e89c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e89c4");
  return (unsigned)sh4_interp(0x8c0e89c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e89c4\n.set FUN_8c0e89c4, FUN_8c0e89c4_def\n");
}
//@unit 8c0e8ae0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8ae0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  int iVar2;
  
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c10273c(&(*(le<undefined2>* )(fr0_ - 0x1c)),0xffffffff,0xffffffff,ar7));
  iVar1 = 0;
  do {
    if (2 < iVar1) {
LAB_8c0e8b40:
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0e84c8(s0,&(*(le<undefined2>* )(fr0_ - 0x1c)),ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 32)), free_if_nonnull_wrap_016660(&(*(le<undefined2>* )(fr0_ - 0x1c)),0xffffffff,ar6_00,ar7));
      return 0;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      (*(le<int>* )(fr0_ - 0x18)) = iVar2;
      (*(le<int>* )(fr0_ - 0x14)) = iVar1;
      if (*(le<int>* )(unsigned)(0xa4 + ar4 + iVar1 * 0x80 + iVar2 * 0x20) == 0) {
        (*(le<undefined2>* )(fr0_ - 0x1c)) = (undefined2)iVar2;
        (*(le<undefined2>* )(fr0_ - 0x1a)) = (undefined2)iVar1;
        goto LAB_8c0e8b40;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl FUN_8c0e8ae0\n.set FUN_8c0e8ae0, FUN_8c0e8ae0_def\n");

}
//@unit 8c0e8b74
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_410_0e8b74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x410 + ar4);
}

__asm__(".globl get_field_410_0e8b74\n.set get_field_410_0e8b74, get_field_410_0e8b74_def\n");

}
//@unit 8c0e8b80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8b80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8b80\n.set noop_0e8b80, noop_0e8b80_def\n");

}
//@unit 8c0e8b84
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8b84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8b84\n.set ret_const_0_0e8b84, ret_const_0_0e8b84_def\n");

}
//@unit 8c0e8b8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8b8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8b8c\n.set noop_0e8b8c, noop_0e8b8c_def\n");

}
//@unit 8c0e8b90
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8b90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8b90\n.set noop_0e8b90, noop_0e8b90_def\n");

}
//@unit 8c0e8b94
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8b94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8b94\n.set ret_const_0_0e8b94, ret_const_0_0e8b94_def\n");

}
//@unit 8c0e8b9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8b9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8b9c\n.set noop_0e8b9c, noop_0e8b9c_def\n");

}
//@unit 8c0e8ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8ba0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8ba0\n.set noop_0e8ba0, noop_0e8ba0_def\n");

}
//@unit 8c0e8ba4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8ba4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8ba4\n.set noop_0e8ba4, noop_0e8ba4_def\n");

}
//@unit 8c0e8ba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8ba8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8ba8\n.set noop_0e8ba8, noop_0e8ba8_def\n");

}
//@unit 8c0e8bac
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8bac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8bac\n.set ret_const_0_0e8bac, ret_const_0_0e8bac_def\n");

}
//@unit 8c0e8bb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_0e8bb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_0e8bb4");
  return (unsigned)sh4_interp(0x8c0e8bb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_0e8bb4\n.set ret_const_0_0e8bb4, ret_const_0_0e8bb4_def\n");
}
//@unit 8c0e8bbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8bbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8bbc\n.set ret_const_0_0e8bbc, ret_const_0_0e8bbc_def\n");

}
//@unit 8c0e8bc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8bc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8bc4\n.set ret_const_0_0e8bc4, ret_const_0_0e8bc4_def\n");

}
//@unit 8c0e8bcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8bcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8bcc\n.set ret_const_0_0e8bcc, ret_const_0_0e8bcc_def\n");

}
//@unit 8c0e8bd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8bd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8bd4\n.set noop_0e8bd4, noop_0e8bd4_def\n");

}
//@unit 8c0e8bd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_0e8bd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_0e8bd8");
  return (unsigned)sh4_interp(0x8c0e8bd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_0e8bd8\n.set ret_const_0_0e8bd8, ret_const_0_0e8bd8_def\n");
}
//@unit 8c0e8be0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8be0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8be0\n.set noop_0e8be0, noop_0e8be0_def\n");

}
//@unit 8c0e8be4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8be4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8be4\n.set noop_0e8be4, noop_0e8be4_def\n");

}
//@unit 8c0e8be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8be8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8be8\n.set noop_0e8be8, noop_0e8be8_def\n");

}
//@unit 8c0e8bec
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8bec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8bec\n.set ret_const_0_0e8bec, ret_const_0_0e8bec_def\n");

}
//@unit 8c0e8bf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8bf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x10dc;
  *(le<undefined4>* )(unsigned)(0x10dc + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e8bf4\n.set FUN_8c0e8bf4, FUN_8c0e8bf4_def\n");

}
//@unit 8c0e8c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c00");
  return (unsigned)sh4_interp(0x8c0e8c00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c00\n.set FUN_8c0e8c00, FUN_8c0e8c00_def\n");
}
//@unit 8c0e8c0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c0c");
  return (unsigned)sh4_interp(0x8c0e8c0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c0c\n.set FUN_8c0e8c0c, FUN_8c0e8c0c_def\n");
}
//@unit 8c0e8c18
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_10dc_0e8c18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x10dc + ar4);
}

__asm__(".globl get_field_10dc_0e8c18\n.set get_field_10dc_0e8c18, get_field_10dc_0e8c18_def\n");

}
//@unit 8c0e8c24
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8c24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x10dc;
}

__asm__(".globl FUN_8c0e8c24\n.set FUN_8c0e8c24, FUN_8c0e8c24_def\n");

}
//@unit 8c0e8c34
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_9d4_0e8c34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x9d4 + ar4);
}

__asm__(".globl get_field_9d4_0e8c34\n.set get_field_9d4_0e8c34, get_field_9d4_0e8c34_def\n");

}
//@unit 8c0e8c40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_acc_0e8c40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xacc + ar4);
}

__asm__(".globl get_field_acc_0e8c40\n.set get_field_acc_0e8c40, get_field_acc_0e8c40_def\n");

}
//@unit 8c0e8c4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8c4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8c4c\n.set ret_const_0_0e8c4c, ret_const_0_0e8c4c_def\n");

}
//@unit 8c0e8c54
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8c54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0xc0c;
}

__asm__(".globl FUN_8c0e8c54\n.set FUN_8c0e8c54, FUN_8c0e8c54_def\n");

}
//@unit 8c0e8c64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c64");
  return (unsigned)sh4_interp(0x8c0e8c64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c64\n.set FUN_8c0e8c64, FUN_8c0e8c64_def\n");
}
//@unit 8c0e8c7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c7c");
  return (unsigned)sh4_interp(0x8c0e8c7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c7c\n.set FUN_8c0e8c7c, FUN_8c0e8c7c_def\n");
}
//@unit 8c0e8c8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c8c");
  return (unsigned)sh4_interp(0x8c0e8c8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c8c\n.set FUN_8c0e8c8c, FUN_8c0e8c8c_def\n");
}
//@unit 8c0e8c98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8c98_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8c98");
  return (unsigned)sh4_interp(0x8c0e8c98, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8c98\n.set FUN_8c0e8c98, FUN_8c0e8c98_def\n");
}
//@unit 8c0e8ca4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8ca4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d98d4(ar4 + 0x22704,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e8ca4\n.set FUN_8c0e8ca4, FUN_8c0e8ca4_def\n");

}
//@unit 8c0e8cc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8cc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x23250;
  *(le<undefined4>* )(unsigned)(0x23250 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e8cc8\n.set FUN_8c0e8cc8, FUN_8c0e8cc8_def\n");

}
//@unit 8c0e8cd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_23250_0e8cd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x23250 + ar4);
}

__asm__(".globl get_field_23250_0e8cd4\n.set get_field_23250_0e8cd4, get_field_23250_0e8cd4_def\n");

}
//@unit 8c0e8ce0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_23254_0e8ce0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x23254 + ar4);
}

__asm__(".globl get_field_23254_0e8ce0\n.set get_field_23254_0e8ce0, get_field_23254_0e8ce0_def\n");

}
//@unit 8c0e8cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8cec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8cec");
  return (unsigned)sh4_interp(0x8c0e8cec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8cec\n.set FUN_8c0e8cec, FUN_8c0e8cec_def\n");
}
//@unit 8c0e8cfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8cfc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8cfc");
  return (unsigned)sh4_interp(0x8c0e8cfc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8cfc\n.set FUN_8c0e8cfc, FUN_8c0e8cfc_def\n");
}
//@unit 8c0e8d28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8d28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8d28");
  return (unsigned)sh4_interp(0x8c0e8d28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8d28\n.set FUN_8c0e8d28, FUN_8c0e8d28_def\n");
}
//@unit 8c0e8d54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8d54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8d54");
  return (unsigned)sh4_interp(0x8c0e8d54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8d54\n.set FUN_8c0e8d54, FUN_8c0e8d54_def\n");
}
//@unit 8c0e8d80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8d80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8d80");
  return (unsigned)sh4_interp(0x8c0e8d80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8d80\n.set FUN_8c0e8d80, FUN_8c0e8d80_def\n");
}
//@unit 8c0e8d98
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8d98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x226f4;
  *(le<undefined4>* )(unsigned)(0x226f4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0e8d98\n.set FUN_8c0e8d98, FUN_8c0e8d98_def\n");

}
//@unit 8c0e8da4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8da4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8da4");
  return (unsigned)sh4_interp(0x8c0e8da4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8da4\n.set FUN_8c0e8da4, FUN_8c0e8da4_def\n");
}
//@unit 8c0e8db0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8db0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8db0");
  return (unsigned)sh4_interp(0x8c0e8db0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8db0\n.set FUN_8c0e8db0, FUN_8c0e8db0_def\n");
}
//@unit 8c0e8dc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_226f4_0e8dc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x226f4 + ar4);
}

__asm__(".globl get_field_226f4_0e8dc0\n.set get_field_226f4_0e8dc0, get_field_226f4_0e8dc0_def\n");

}
//@unit 8c0e8dcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8dcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + ar5 * 0x16c + 0x22d48;
}

__asm__(".globl FUN_8c0e8dcc\n.set FUN_8c0e8dcc, FUN_8c0e8dcc_def\n");

}
//@unit 8c0e8dec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8dec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8dec");
  return (unsigned)sh4_interp(0x8c0e8dec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8dec\n.set FUN_8c0e8dec, FUN_8c0e8dec_def\n");
}
//@unit 8c0e8df8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8df8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8df8");
  return (unsigned)sh4_interp(0x8c0e8df8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8df8\n.set FUN_8c0e8df8, FUN_8c0e8df8_def\n");
}
//@unit 8c0e8e74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8e74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8e74");
  return (unsigned)sh4_interp(0x8c0e8e74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8e74\n.set FUN_8c0e8e74, FUN_8c0e8e74_def\n");
}
//@unit 8c0e8ef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8ef0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x2274c;
}

__asm__(".globl FUN_8c0e8ef0\n.set FUN_8c0e8ef0, FUN_8c0e8ef0_def\n");

}
//@unit 8c0e8f00
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8f00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x10ac;
}

__asm__(".globl FUN_8c0e8f00\n.set FUN_8c0e8f00, FUN_8c0e8f00_def\n");

}
//@unit 8c0e8f10
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e8f10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_48_0e8f38(ar4 + 0x13b24,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0e8f10\n.set FUN_8c0e8f10, FUN_8c0e8f10_def\n");

}
//@unit 8c0e8f38
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("get_field_48_0e8f38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x48);
}

__asm__(".globl get_field_48_0e8f38\n.set get_field_48_0e8f38, get_field_48_0e8f38_def\n");

}
//@unit 8c0e8f40
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8f40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8f40\n.set noop_0e8f40, noop_0e8f40_def\n");

}
//@unit 8c0e8f44
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8f44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8f44\n.set noop_0e8f44, noop_0e8f44_def\n");

}
//@unit 8c0e8f48
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("noop_0e8f48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0e8f48\n.set noop_0e8f48, noop_0e8f48_def\n");

}
//@unit 8c0e8f4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("ret_const_0_0e8f4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0e8f4c\n.set ret_const_0_0e8f4c, ret_const_0_0e8f4c_def\n");

}
//@unit 8c0e8f54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e8f54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e8f54");
  return (unsigned)sh4_interp(0x8c0e8f54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e8f54\n.set FUN_8c0e8f54, FUN_8c0e8f54_def\n");
}
//@unit 8c0e91b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e91b8");
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

__asm__(".globl FUN_8c0e91b8\n.set FUN_8c0e91b8, FUN_8c0e91b8_def\n");

}
//@unit 8c0e91f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("free_if_nonnull_wrap_0e91f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0e91f0\n.set free_if_nonnull_wrap_0e91f0, free_if_nonnull_wrap_0e91f0_def\n");

}
//@unit 8c0e9220
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0e9220_def(int ar4,undefined4 ar5,int ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c0e9220");
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
  le<int>* a7;
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
  if (*(le<uint>* )(unsigned)(0xb4 + ar4) != (uVar1 & 0xffff)) {
    if (*(le<uint>* )(unsigned)(0xb4 + ar4) < 5) {
      (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
      *(byte *)(unsigned)(0xbc + ar4) = (byte)(((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
      *(char *)(unsigned)(0xbc + ar4) =
           *(char *)(unsigned)(0xbc + ar4) - (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f);
      uVar7 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar7))))(ar7,0xb,ar6,a7));
      *(char *)(unsigned)(ar4 + 0x4d) = (char)uVar7;
      *(undefined1 *)(unsigned)(ar4 + 0x4e) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x11) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x4f) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x12) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
          if (iVar2 == 1) {
            *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + '\x01';
          }
        }
      }
      *(undefined1 *)(unsigned)(ar4 + 0x50) = 0;
      for (iVar3 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar7))))(ar7,10,ar6,a7)), iVar3 < iVar2;
          iVar3 = iVar3 + 1) {
        uVar7 = 10;
        ar6 = iVar3;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
        if (iVar2 == 0x13) {
          uVar7 = 10;
          ar6 = iVar3;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar7))))(ar7,10,iVar3,a7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar7,ar6,a7));
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
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<int>* )(unsigned)(ar4 + 0x10) = *(le<int>* )(unsigned)(ar4 + 0x10) + 1;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(le<undefined4>* )(unsigned)(0xb4 + ar4),0x12c,ar6,a7));
    if (iVar3 == 0xc8) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(le<undefined4>* )(unsigned)(0xb4 + ar4),0x5a,ar6,a7));
    if (iVar3 == 0x4b) {
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 1;
    }
    uVar7 = 100;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0103d0))))
                      (*(le<undefined4>* )(unsigned)(0xb4 + ar4),100,ar6,a7));
    if (iVar3 == 0x41) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 1;
    }
    *(undefined1 *)(unsigned)(0xbd + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x198 + *ar7))))(ar7,uVar7,ar6,a7));
    cVar8 = -(char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1f) >> 0x1f) -
            (char)((int)((uint)(*(byte *)(fr0_ - 0x40)) << 0x1e) >> 0x1f);
    if (cVar8 != *(char *)(unsigned)(0xbc + ar4)) {
      *(undefined1 *)(unsigned)(0xbd + ar4) = 1;
    }
    *(char *)(unsigned)(0xbc + ar4) = cVar8;
  }
  *(le<undefined4>* )(unsigned)(0xcc + ar4) = 1;
  *(le<undefined4>* )(unsigned)(0xd0 + ar4) = 1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c02602c(ar5,uVar7,ar6,a7));
  iVar3 = 0xb4;
  *(le<uint>* )(unsigned)(0xb4 + ar4) = uVar1 & 0xffff;
  return iVar3;
}

__asm__(".globl FUN_8c0e9220\n.set FUN_8c0e9220, FUN_8c0e9220_def\n");

}
//@unit 8c0e9668
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9668");
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

__asm__(".globl FUN_8c0e9668\n.set FUN_8c0e9668, FUN_8c0e9668_def\n");

}
//@unit 8c0e9690
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9690");
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

__asm__(".globl FUN_8c0e9690\n.set FUN_8c0e9690, FUN_8c0e9690_def\n");

}
//@unit 8c0e96b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e96b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e96b8");
  return (unsigned)sh4_interp(0x8c0e96b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e96b8\n.set FUN_8c0e96b8, FUN_8c0e96b8_def\n");
}
//@unit 8c0e983c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e983c");
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

__asm__(".globl FUN_8c0e983c\n.set FUN_8c0e983c, FUN_8c0e983c_def\n");

}
//@unit 8c0e9888
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9888");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x3c) = (undefined1)ar5;
  return 0x3c;
}

__asm__(".globl FUN_8c0e9888\n.set FUN_8c0e9888, FUN_8c0e9888_def\n");

}
//@unit 8c0e9890
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9890");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x39) = (undefined1)ar5;
  return 0x39;
}

__asm__(".globl FUN_8c0e9890\n.set FUN_8c0e9890, FUN_8c0e9890_def\n");

}
//@unit 8c0e9898
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9898");
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

__asm__(".globl FUN_8c0e9898\n.set FUN_8c0e9898, FUN_8c0e9898_def\n");

}
//@unit 8c0e98e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e98e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x3c);
}

__asm__(".globl FUN_8c0e98e8\n.set FUN_8c0e98e8, FUN_8c0e98e8_def\n");

}
//@unit 8c0e98f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e98f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x39);
}

__asm__(".globl FUN_8c0e98f0\n.set FUN_8c0e98f0, FUN_8c0e98f0_def\n");

}
//@unit 8c0e98f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e98f8");
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

__asm__(".globl FUN_8c0e98f8\n.set FUN_8c0e98f8, FUN_8c0e98f8_def\n");

}
//@unit 8c0e9910
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("FUN_8c0e9910");
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

__asm__(".globl FUN_8c0e9910\n.set FUN_8c0e9910, FUN_8c0e9910_def\n");

}
//@unit 8c0e992c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e992c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e992c");
  return (unsigned)sh4_interp(0x8c0e992c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e992c\n.set FUN_8c0e992c, FUN_8c0e992c_def\n");
}
//@unit 8c0e99e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0e99e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0e99e4");
  return (unsigned)sh4_interp(0x8c0e99e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0e99e4\n.set FUN_8c0e99e4, FUN_8c0e99e4_def\n");
}
