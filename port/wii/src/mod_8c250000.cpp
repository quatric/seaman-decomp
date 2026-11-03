//@unit 8c250144
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c250144_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c250144");
  return (unsigned)sh4_interp(0x8c250144, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c250144\n.set FUN_8c250144, FUN_8c250144_def\n");
}
//@unit 8c250a54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c250a54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c250a54");
  return (unsigned)sh4_interp(0x8c250a54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c250a54\n.set FUN_8c250a54, FUN_8c250a54_def\n");
}
//@unit 8c2518b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2518b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2518b4");
  return (unsigned)sh4_interp(0x8c2518b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2518b4\n.set FUN_8c2518b4, FUN_8c2518b4_def\n");
}
//@unit 8c251f78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c251f78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c251f78");
  return (unsigned)sh4_interp(0x8c251f78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c251f78\n.set FUN_8c251f78, FUN_8c251f78_def\n");
}
//@unit 8c2528e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2528e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2528e8");
  return (unsigned)sh4_interp(0x8c2528e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2528e8\n.set FUN_8c2528e8, FUN_8c2528e8_def\n");
}
//@unit 8c252e7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c252e7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c252e7c");
  return (unsigned)sh4_interp(0x8c252e7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c252e7c\n.set FUN_8c252e7c, FUN_8c252e7c_def\n");
}
//@unit 8c2536a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2536a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2536a8");
  return (unsigned)sh4_interp(0x8c2536a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2536a8\n.set FUN_8c2536a8, FUN_8c2536a8_def\n");
}
//@unit 8c253cfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c253cfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c253cfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c70c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c237630(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2376c4(uVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254066(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c237760(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c253cfc\n.set FUN_8c253cfc, FUN_8c253cfc_def\n");

}
//@unit 8c253d1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c253d1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c253d1c");
  return (unsigned)sh4_interp(0x8c253d1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c253d1c\n.set FUN_8c253d1c, FUN_8c253d1c_def\n");
}
//@unit 8c253d20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c253d20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c253d20");
  return (unsigned)sh4_interp(0x8c253d20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c253d20\n.set FUN_8c253d20, FUN_8c253d20_def\n");
}
//@unit 8c253fe0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c253fe0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c253fe0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c247df4(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c2364b2((fr0_ + (int)0xfffffff4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c253fe0\n.set FUN_8c253fe0, FUN_8c253fe0_def\n");

}
//@unit 8c254006
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c254006_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c254006");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23d386(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c254006\n.set FUN_8c254006, FUN_8c254006_def\n");

}
//@unit 8c254026
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c254026_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c254026");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 unaff_r8 = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(unaff_r8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2536a8(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c254026\n.set FUN_8c254026, FUN_8c254026_def\n");

}
//@unit 8c254042
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c254042_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c254042");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c236454(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c253cfc(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c2364b2((fr0_ + (int)0xfffffff4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c254042\n.set FUN_8c254042, FUN_8c254042_def\n");

}
//@unit 8c254066
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c254066_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c254066");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c253d1c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c254066\n.set FUN_8c254066, FUN_8c254066_def\n");

}
//@unit 8c2540a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2540a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2540a0");
  return (unsigned)sh4_interp(0x8c2540a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2540a0\n.set FUN_8c2540a0, FUN_8c2540a0_def\n");
}
//@unit 8c25415c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25415c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25415c");
  return (unsigned)sh4_interp(0x8c25415c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25415c\n.set FUN_8c25415c, FUN_8c25415c_def\n");
}
//@unit 8c254280
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254280_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254280");
  return (unsigned)sh4_interp(0x8c254280, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254280\n.set FUN_8c254280, FUN_8c254280_def\n");
}
//@unit 8c2545ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2545ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2545ec");
  return (unsigned)sh4_interp(0x8c2545ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2545ec\n.set FUN_8c2545ec, FUN_8c2545ec_def\n");
}
//@unit 8c254698
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254698_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254698");
  return (unsigned)sh4_interp(0x8c254698, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254698\n.set FUN_8c254698, FUN_8c254698_def\n");
}
//@unit 8c254780
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254780_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254780");
  return (unsigned)sh4_interp(0x8c254780, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254780\n.set FUN_8c254780, FUN_8c254780_def\n");
}
//@unit 8c25484c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25484c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25484c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = 0x8c4aad48;
  uVar2 = (uint)*(le<undefined4>* )(unsigned)0x8c4aad80;
  iVar4 = *(le<undefined4>* )(unsigned)0x8c4aad48;
  if (uVar2 == 1) {
    iVar4 = iVar4 + 8;
  }
  else if (uVar2 == 2) {
    iVar4 = iVar4 + 0x10;
  }
  else if (uVar2 == 3) {
    iVar4 = iVar4 + 0x18;
  }
  else {
    if (uVar2 != 4) goto LAB_8c25487a;
    iVar4 = iVar4 + 0x20;
  }
  *(le<undefined4>* )(unsigned)0x8c4aad48 = iVar4;
LAB_8c25487a:
  if (piVar1[6] == 0) {
    return uVar2;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c255d6c(0,vr5,vr6,vr7));
  return uVar3;
}

__asm__(".globl FUN_8c25484c\n.set FUN_8c25484c, FUN_8c25484c_def\n");

}
//@unit 8c2548a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2548a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2548a8");
  return (unsigned)sh4_interp(0x8c2548a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2548a8\n.set FUN_8c2548a8, FUN_8c2548a8_def\n");
}
//@unit 8c254956
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254956_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254956");
  return (unsigned)sh4_interp(0x8c254956, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254956\n.set FUN_8c254956, FUN_8c254956_def\n");
}
//@unit 8c254a1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254a1e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254a1e");
  return (unsigned)sh4_interp(0x8c254a1e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254a1e\n.set FUN_8c254a1e, FUN_8c254a1e_def\n");
}
//@unit 8c254b94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254b94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254b94");
  return (unsigned)sh4_interp(0x8c254b94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254b94\n.set FUN_8c254b94, FUN_8c254b94_def\n");
}
//@unit 8c254d1a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254d1a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254d1a");
  return (unsigned)sh4_interp(0x8c254d1a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254d1a\n.set FUN_8c254d1a, FUN_8c254d1a_def\n");
}
//@unit 8c254db0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254db0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254db0");
  return (unsigned)sh4_interp(0x8c254db0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254db0\n.set FUN_8c254db0, FUN_8c254db0_def\n");
}
//@unit 8c254e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254e80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254e80");
  return (unsigned)sh4_interp(0x8c254e80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254e80\n.set FUN_8c254e80, FUN_8c254e80_def\n");
}
//@unit 8c254f1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254f1e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254f1e");
  return (unsigned)sh4_interp(0x8c254f1e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254f1e\n.set FUN_8c254f1e, FUN_8c254f1e_def\n");
}
//@unit 8c254fbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c254fbc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c254fbc");
  return (unsigned)sh4_interp(0x8c254fbc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c254fbc\n.set FUN_8c254fbc, FUN_8c254fbc_def\n");
}
//@unit 8c255080
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255080_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255080");
  return (unsigned)sh4_interp(0x8c255080, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255080\n.set FUN_8c255080, FUN_8c255080_def\n");
}
//@unit 8c25513c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25513c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25513c");
  return (unsigned)sh4_interp(0x8c25513c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25513c\n.set FUN_8c25513c, FUN_8c25513c_def\n");
}
//@unit 8c2551aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2551aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2551aa");
  return (unsigned)sh4_interp(0x8c2551aa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2551aa\n.set FUN_8c2551aa, FUN_8c2551aa_def\n");
}
//@unit 8c2551d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2551d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2551d4");
  return (unsigned)sh4_interp(0x8c2551d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2551d4\n.set FUN_8c2551d4, FUN_8c2551d4_def\n");
}
//@unit 8c2552b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2552b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2552b0");
  return (unsigned)sh4_interp(0x8c2552b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2552b0\n.set FUN_8c2552b0, FUN_8c2552b0_def\n");
}
//@unit 8c255346
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255346_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255346");
  return (unsigned)sh4_interp(0x8c255346, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255346\n.set FUN_8c255346, FUN_8c255346_def\n");
}
//@unit 8c2556c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2556c8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2556c8");
  return (unsigned)sh4_interp(0x8c2556c8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2556c8\n.set FUN_8c2556c8, FUN_8c2556c8_def\n");
}
//@unit 8c255a2e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255a2e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255a2e");
  return (unsigned)sh4_interp(0x8c255a2e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255a2e\n.set FUN_8c255a2e, FUN_8c255a2e_def\n");
}
//@unit 8c255a5a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255a5a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255a5a");
  return (unsigned)sh4_interp(0x8c255a5a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255a5a\n.set FUN_8c255a5a, FUN_8c255a5a_def\n");
}
//@unit 8c255a9a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255a9a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255a9a");
  return (unsigned)sh4_interp(0x8c255a9a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255a9a\n.set FUN_8c255a9a, FUN_8c255a9a_def\n");
}
//@unit 8c255ada
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255ada_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255ada");
  return (unsigned)sh4_interp(0x8c255ada, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255ada\n.set FUN_8c255ada, FUN_8c255ada_def\n");
}
//@unit 8c255b46
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255b46_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255b46");
  return (unsigned)sh4_interp(0x8c255b46, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255b46\n.set FUN_8c255b46, FUN_8c255b46_def\n");
}
//@unit 8c255ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255ba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255ba0");
  return (unsigned)sh4_interp(0x8c255ba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255ba0\n.set FUN_8c255ba0, FUN_8c255ba0_def\n");
}
//@unit 8c255bca
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255bca_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255bca");
  return (unsigned)sh4_interp(0x8c255bca, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255bca\n.set FUN_8c255bca, FUN_8c255bca_def\n");
}
//@unit 8c255bea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c255bea_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c255bea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)0x8c4ab0c4 = ar4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c255bea\n.set FUN_8c255bea, FUN_8c255bea_def\n");

}
//@unit 8c255bf6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255bf6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255bf6");
  return (unsigned)sh4_interp(0x8c255bf6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255bf6\n.set FUN_8c255bf6, FUN_8c255bf6_def\n");
}
//@unit 8c255d6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255d6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255d6c");
  return (unsigned)sh4_interp(0x8c255d6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255d6c\n.set FUN_8c255d6c, FUN_8c255d6c_def\n");
}
//@unit 8c255f40
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c255f40_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c255f40");
  return (unsigned)sh4_interp(0x8c255f40, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c255f40\n.set FUN_8c255f40, FUN_8c255f40_def\n");
}
//@unit 8c255f88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c255f88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c255f88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  *(le<undefined4>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4aabbc + 0x68) = ar4;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c255f88\n.set FUN_8c255f88, FUN_8c255f88_def\n");

}
//@unit 8c255f96
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c255f96_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c255f96");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x18) >> 0x10 & 0xff00;
  if ((uVar1 == (int)0x500) || (uVar1 == (int)0x600)) {
    uVar2 = 0x3f;
  }
  else {
    if ((uVar1 != (int)0x700) && (uVar1 != (int)0x800)) {
      return uVar1;
    }
    uVar2 = 0x30;
  }
  *(le<uint>* )(unsigned)(ar4 + 0xc) = *(le<uint>* )(unsigned)(ar4 + 0xc) & 0xf81fffff;
  *(le<uint>* )(unsigned)(ar4 + 0xc) = *(le<uint>* )(unsigned)(ar4 + 0xc) | (uVar2 & ar5) << 0x15;
  *(le<uint>* )(unsigned)(ar4 + 4) = ar5;
  return uVar1;
}

__asm__(".globl FUN_8c255f96\n.set FUN_8c255f96, FUN_8c255f96_def\n");

}
//@unit 8c255ff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c255ff8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c255ff8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
  if (-1 < iVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c255f96(iVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),ar5,ar4,ar7));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c255ff8\n.set FUN_8c255ff8, FUN_8c255ff8_def\n");

}
//@unit 8c25603a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25603a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25603a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 uVar2;
  
  puVar1 = 0x8c4ab138;
  *(le<undefined4>* )(unsigned)0x8c4ab13c = ar4;
  if (ar4 == 0) {
    uVar2 = 0;
  }
  else if (ar4 == 1) {
    uVar2 = 1;
  }
  else if (ar4 == 2) {
    uVar2 = 2;
  }
  else {
    if (ar4 == 6) {
      uVar2 = 3;
      *puVar1 = 0x20;
      goto LAB_8c256072;
    }
    uVar2 = 0;
  }
  *puVar1 = 0x10;
LAB_8c256072:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a280(uVar2,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c25603a\n.set FUN_8c25603a, FUN_8c25603a_def\n");

}
//@unit 8c2560b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2560b4_def(int ar4,int ar5,le<ushort>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2560b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  uVar2 = 0xa0000000;
  if (*(le<undefined4>* )(unsigned)0x8c4ab138 == 0x10) {
    iVar5 = ar5 + ar4;
    uVar4 = ar4 * 4 + 0x5f9000;
    for (; ar4 < iVar5; ar4 = ar4 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      *(le<uint>* )(unsigned)(uVar4 | uVar2) = (uint)uVar1;
      uVar4 = uVar4 + 4;
    }
    return 0x10;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c7f4(ar4 * 4 + 0x5f9000 | 0xa0000000,ar6,ar5,vr7));
  return uVar3;
}

__asm__(".globl FUN_8c2560b4\n.set FUN_8c2560b4, FUN_8c2560b4_def\n");

}
//@unit 8c256164
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c256164_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c256164");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* a4;
  le<int>* ar5_00;
  int a5;
  
  a4 = (le<int>* )(unsigned)(fr0_ + (int)0xffffffdc);
  ar5_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c25b5b4(ar4,ar5,ar6,ar7); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259be8(ar4,ar5_00,ar6,ar7));
  if (-1 < iVar1) {
    a5 = 4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48((fr0_ + (int)0xffffffdc),4,ar6,ar7));
    if (-1 < iVar1) {
      if ((*(le<int>* )(fr0_ - 0x24)) != 0x4c505650) {
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
        return 0xffffffff;
      }
      a5 = 0xc;
      a4 = &(*(le<int>* )(fr0_ - 0x1c));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48(a4,0xc,ar6,ar7));
      if (-1 < iVar1) {
        (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c255f88((int)(*(le<short>* )(fr0_ - 0x16)),a5,ar6,ar7));
        a5 = (*(le<int>* )(fr0_ - 0x1c)) + -8;
        a4 = (le<int>* )(unsigned)*ar5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c48(a4,a5,ar6,ar7));
        if (-1 < iVar1) {
          *(le<short>* )(unsigned)((int)ar5 + 6) = (*(le<short>* )(fr0_ - 0x16));
          *(le<undefined2>* )(unsigned)(ar5 + 2) = (*(le<undefined2>* )(fr0_ - 0x14));
          *(le<undefined2>* )(unsigned)((int)ar5 + 10) = (*(le<undefined2>* )(fr0_ - 0x12));
          *(le<ushort>* )(unsigned)(ar5 + 1) = (ushort)(*(byte *)(fr0_ - 0x18));
          (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
          return 1;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c259c40(a4,a5,ar6,ar7));
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c256164\n.set FUN_8c256164, FUN_8c256164_def\n");

}
//@unit 8c256210
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256210_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256210");
  return (unsigned)sh4_interp(0x8c256210, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256210\n.set FUN_8c256210, FUN_8c256210_def\n");
}
//@unit 8c256254
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256254_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256254");
  return (unsigned)sh4_interp(0x8c256254, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256254\n.set FUN_8c256254, FUN_8c256254_def\n");
}
//@unit 8c256294
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256294_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256294");
  return (unsigned)sh4_interp(0x8c256294, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256294\n.set FUN_8c256294, FUN_8c256294_def\n");
}
//@unit 8c256328
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256328_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256328");
  return (unsigned)sh4_interp(0x8c256328, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256328\n.set FUN_8c256328, FUN_8c256328_def\n");
}
//@unit 8c2563ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2563ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2563ac");
  return (unsigned)sh4_interp(0x8c2563ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2563ac\n.set FUN_8c2563ac, FUN_8c2563ac_def\n");
}
//@unit 8c2563f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2563f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2563f8");
  return (unsigned)sh4_interp(0x8c2563f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2563f8\n.set FUN_8c2563f8, FUN_8c2563f8_def\n");
}
//@unit 8c2565c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c2565c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2565c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ain0_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  le<uint>* ar4_00;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar2 = uVar2 + 1) {
    ar4_00 = (le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3);
    if ((ar4_00[4] & 1) != 0) {
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a1ee(ar4_00[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2362de(ar4_00[5],ar5,ar6,ar7); });
      if (ain0_00 == 1) {
        ar6 = 0;
        ar5 = 1;
        ({ unsigned long ri0_ = (unsigned long)(1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25a674(*ar4_00,1,0,ar7); });
      }
      else {
        uVar1 = ar4_00[4];
        ar4_00[4] = uVar1 & 0xfffffffe;
        if ((uVar1 & 0xfffffffe) == 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(ar4_00,ar5,ar6,ar7));
        }
      }
    }
    ain0 = *ar4_00;
    if ((ain0 != 0xffffffff) && (ain0 = ar4_00[4], (ain0 & 3) == 0)) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(ar4_00,ar5,ar6,ar7));
    }
    iVar3 = iVar3 + 0x44;
  }
  return ain0;
}

__asm__(".globl FUN_8c2565c4\n.set FUN_8c2565c4, FUN_8c2565c4_def\n");

}
//@unit 8c2565d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c2565d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2565d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint unaff_r8 = 0;
  uint unaff_r11 = 0;
  le<uint>* a4;
  undefined4 in_PR = 0;
  
  for (; unaff_r11 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); unaff_r11 = unaff_r11 + 1) {
    a4 = (le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + ar4);
    if ((a4[4] & unaff_r8) != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2362de(a4[5],ar5,ar6,ar7); });
      if (iVar1 == 1) {
        ar6 = 0;
        ar5 = 1;
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25a674(*a4,1,0,ar7); });
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffe;
        if ((uVar2 & 0xfffffffe) == 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(a4,ar5,ar6,ar7));
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(a4,ar5,ar6,ar7));
    }
    ar4 = ar4 + 0x44;
  }
  return ain0;
}

__asm__(".globl FUN_8c2565d8\n.set FUN_8c2565d8, FUN_8c2565d8_def\n");

}
//@unit 8c256670
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c256670_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c256670");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  
  puVar2 = ((void *)(unsigned)0x8c2567f8);
  puVar1 = 0x8c4aa6ac;
  uVar4 = 1;
  for (uVar5 = 0; uVar5 < (uint)ar4[1]; uVar5 = uVar5 + 1) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(*(le<undefined4>* )(unsigned)(uVar5 * 0xc + *ar4 + 8),vr5,vr6,vr7));
    if (iVar3 < 0) {
      uVar4 = 0xffffffff;
      *puVar1 = uVar5;
    }
  }
  return uVar4;
}

__asm__(".globl FUN_8c256670\n.set FUN_8c256670, FUN_8c256670_def\n");

}
//@unit 8c25667e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25667e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25667e");
  return (unsigned)sh4_interp(0x8c25667e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25667e\n.set FUN_8c25667e, FUN_8c25667e_def\n");
}
//@unit 8c2566c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c2566c8_def(undefined4 ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2566c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  le<uint>* a4;
  
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  for ((*(le<uint>* )(fr0_ - 0x28)) = 0; (*(le<uint>* )(fr0_ - 0x28)) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); (*(le<uint>* )(fr0_ - 0x28)) = (*(le<uint>* )(fr0_ - 0x28)) + 1) {
    a4 = (le<uint>* )(unsigned)((*(le<int>* )(fr0_ - 0x24)) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08));
    if ((a4[4] & 2) != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a1ee(a4[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c20cf88(a4 + 6,ar5,ar6,ar7));
      if (iVar1 == 1) {
        uVar2 = *a4;
        if ((a4[4] & 1) == 0) {
          iVar1 = 0;
          iVar3 = 0;
          for ((*(le<uint>* )(fr0_ - 0x30)) = 0; (*(le<uint>* )(fr0_ - 0x30)) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); (*(le<uint>* )(fr0_ - 0x30)) = (*(le<uint>* )(fr0_ - 0x30)) + 1) {
            if (*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) == uVar2) {
              (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1,ar5,ar6,ar7));
            }
            iVar3 = iVar3 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
        else {
          iVar1 = 0;
          ar6 = 0;
          ar5 = 0;
          while (ar6 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c)) {
            ar6 = ar6 + 1;
            if (*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + ar5) == uVar2) {
              *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x40) = 0;
              *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x10) =
                   *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar1 + 0x10) & 0xfffffff5;
            }
            ar5 = ar5 + 0x44;
            iVar1 = iVar1 + 0x44;
          }
        }
      }
      else {
        uVar2 = a4[4];
        a4[4] = uVar2 & 0xfffffffd;
        if ((uVar2 & 0xfffffffd) == 0) {
          (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e(a4,ar5,ar6,ar7));
        }
        else {
          *(le<undefined2>* )(unsigned)(a4 + 0x10) = 0;
        }
      }
    }
    ain0 = *a4;
    if ((ain0 != 0xffffffff) && (ain0 = a4[4], (ain0 & 3) == 0)) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c25a49e(a4,ar5,ar6,ar7));
    }
    (*(le<int>* )(fr0_ - 0x24)) = (*(le<int>* )(fr0_ - 0x24)) + 0x44;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = 0xffffffff;
  return ain0;
}

__asm__(".globl FUN_8c2566c8\n.set FUN_8c2566c8, FUN_8c2566c8_def\n");

}
//@unit 8c2567f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2567f8_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2567f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if ((ar4[4] & 2U) == 0) {
    if (((ar4[4] & 1U) != 0) || (*ar4 == -1)) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 1;
      return 0xffffffff;
    }
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a1ee((uint)ar4[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
    if (iVar1 == 1) {
      iVar1 = *ar4;
      if (1 < *(le<ushort>* )(unsigned)(ar4 + 0x10)) {
        iVar2 = 0;
        uVar4 = 0;
        iVar3 = 0;
        while (uVar4 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c)) {
          uVar4 = uVar4 + 1;
          if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) == iVar1) {
            *(le<short>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) = *(le<short>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) + -1;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c20cf88(ar4 + 6,ar5,ar6,ar7));
      if ((ar4[4] & 1U) != 0) {
        iVar3 = 0;
        iVar2 = 0;
        uVar4 = 0;
        while (uVar4 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c)) {
          uVar4 = uVar4 + 1;
          if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) == iVar1) {
            *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x40) = 0;
            *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x10) =
                 *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2 + 0x10) & 0xfffffff5;
          }
          iVar3 = iVar3 + 0x44;
          iVar2 = iVar2 + 0x44;
        }
        return 1;
      }
      iVar3 = 0;
      iVar2 = 0;
      for (uVar4 = 0; uVar4 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar4 = uVar4 + 1) {
        if (*(le<int>* )(unsigned)(iVar2 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)) == iVar1) {
          (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a49e(iVar3 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),ar5,ar6,ar7));
        }
        iVar2 = iVar2 + 0x44;
        iVar3 = iVar3 + 0x44;
      }
      return 1;
    }
    if ((short)ar4[0x10] != 0) {
      *(le<short>* )(unsigned)(ar4 + 0x10) = (short)ar4[0x10] + -1;
    }
    if ((short)ar4[0x10] != 0) {
      return 1;
    }
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c20cf88(ar4 + 6,ar5,ar6,ar7));
    ar4[4] = ar4[4] & 0xfffffffd;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) == *ar4) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = -1;
    }
    if ((ar4[4] & 1U) != 0) {
      return 1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c25a49e(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c2567f8\n.set FUN_8c2567f8, FUN_8c2567f8_def\n");

}
//@unit 8c2567fe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2567fe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2567fe");
  return (unsigned)sh4_interp(0x8c2567fe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2567fe\n.set FUN_8c2567fe, FUN_8c2567fe_def\n");
}
//@unit 8c256944
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c256944_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c256944");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2567f8(*(le<undefined4>* )(unsigned)(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b04) + ar4 * 0xc + 8),ar5,ar6,ar7));
  if (iVar1 < 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar4;
  }
  return iVar1;
}

__asm__(".globl FUN_8c256944\n.set FUN_8c256944, FUN_8c256944_def\n");

}
//@unit 8c25699c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25699c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25699c");
  return (unsigned)sh4_interp(0x8c25699c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25699c\n.set FUN_8c25699c, FUN_8c25699c_def\n");
}
//@unit 8c2569e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2569e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2569e0");
  return (unsigned)sh4_interp(0x8c2569e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2569e0\n.set FUN_8c2569e0, FUN_8c2569e0_def\n");
}
//@unit 8c256a78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256a78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256a78");
  return (unsigned)sh4_interp(0x8c256a78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256a78\n.set FUN_8c256a78, FUN_8c256a78_def\n");
}
//@unit 8c256b0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256b0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256b0c");
  return (unsigned)sh4_interp(0x8c256b0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256b0c\n.set FUN_8c256b0c, FUN_8c256b0c_def\n");
}
//@unit 8c256ce0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256ce0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256ce0");
  return (unsigned)sh4_interp(0x8c256ce0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256ce0\n.set FUN_8c256ce0, FUN_8c256ce0_def\n");
}
//@unit 8c256d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256d7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256d7c");
  return (unsigned)sh4_interp(0x8c256d7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256d7c\n.set FUN_8c256d7c, FUN_8c256d7c_def\n");
}
//@unit 8c256e18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256e18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256e18");
  return (unsigned)sh4_interp(0x8c256e18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256e18\n.set FUN_8c256e18, FUN_8c256e18_def\n");
}
//@unit 8c256fec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c256fec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c256fec");
  return (unsigned)sh4_interp(0x8c256fec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c256fec\n.set FUN_8c256fec, FUN_8c256fec_def\n");
}
//@unit 8c257098
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257098_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257098");
  return (unsigned)sh4_interp(0x8c257098, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257098\n.set FUN_8c257098, FUN_8c257098_def\n");
}
//@unit 8c2570d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2570d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2570d8");
  return (unsigned)sh4_interp(0x8c2570d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2570d8\n.set FUN_8c2570d8, FUN_8c2570d8_def\n");
}
//@unit 8c2570ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2570ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2570ec");
  return (unsigned)sh4_interp(0x8c2570ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2570ec\n.set FUN_8c2570ec, FUN_8c2570ec_def\n");
}
//@unit 8c257104
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c257104_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c257104");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c20a16e(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c257104\n.set FUN_8c257104, FUN_8c257104_def\n");

}
//@unit 8c257120
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c257120_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c257120");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c20a16e(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c257120\n.set FUN_8c257120, FUN_8c257120_def\n");

}
//@unit 8c25713c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c20a1d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("thunk_FUN_8c20a1d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c20a1d0)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c20a1d0\n.set thunk_FUN_8c20a1d0, thunk_FUN_8c20a1d0_def\n");

}
//@unit 8c257148
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257148_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257148");
  return (unsigned)sh4_interp(0x8c257148, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257148\n.set FUN_8c257148, FUN_8c257148_def\n");
}
//@unit 8c257170
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257170_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257170");
  return (unsigned)sh4_interp(0x8c257170, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257170\n.set FUN_8c257170, FUN_8c257170_def\n");
}
//@unit 8c257188
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c257188_def(le<undefined4>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c257188");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[4] = ar7;
  ar4[5] = s0;
  ar4[1] = ar6 << 0x10;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c257188\n.set FUN_8c257188, FUN_8c257188_def\n");

}
//@unit 8c257196
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c257196_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c257196");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[1] = ar7;
  ar4[2] = ar6;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c257196\n.set FUN_8c257196, FUN_8c257196_def\n");

}
//@unit 8c2571a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2571a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2571a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar4 == 8) {
    ar4 = 0;
  }
  else if (ar4 == 0x10) {
    ar4 = 1;
  }
  else if (ar4 == 0x20) {
    ar4 = 2;
  }
  else if (ar4 == 0x40) {
    ar4 = 3;
  }
  else if (ar4 == 0x80) {
    ar4 = 4;
  }
  else if (ar4 == 0x100) {
    ar4 = 5;
  }
  else if (ar4 == 0x200) {
    ar4 = 6;
  }
  else if (ar4 == 0x400) {
    ar4 = 7;
  }
  return ar4;
}

__asm__(".globl FUN_8c2571a8\n.set FUN_8c2571a8, FUN_8c2571a8_def\n");

}
//@unit 8c2571fe
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c2571fe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2571fe");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(le<undefined4>* )(unsigned)(ar4 + 0x24),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7));
  uVar3 = 0xbfffffff;
  *(le<uint>* )(unsigned)(ar4 + 8) = iVar1 << 3 | uVar2;
  uVar4 = *(le<uint>* )(unsigned)(ar4 + 0x30);
  uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x18) >> 0x10 & 0xff00;
  uVar3 = (((((uint)((uVar4 & 1) != 0) << 0x1f & uVar3 | (uVar4 & 8) << 0x1b) & 0xc7ffffff |
            *(le<uint>* )(unsigned)(ar4 + 0x20) & 0x38000000) & 0xfbffffff | (~(uVar4 & 4) & 4) << 0x18) &
           0xfdffffff | (uVar4 & 0x10) << 0x15) & 0xff800000 | *(le<uint>* )(unsigned)(ar4 + 0x34) >> 3;
  if ((uVar2 == (int)0x500) || (uVar2 == (int)0x600)) {
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 4) & 0x3f;
  }
  else {
    if ((uVar2 != (int)0x700) && (uVar2 != (int)0x800)) goto LAB_8c2572b6;
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 4) & 0x30;
  }
  uVar3 = uVar2 << 0x15 | 0xf81fffff & uVar3;
LAB_8c2572b6:
  *(le<uint>* )(unsigned)(ar4 + 0xc) = uVar3;
  return uVar2;
}

__asm__(".globl FUN_8c2571fe\n.set FUN_8c2571fe, FUN_8c2571fe_def\n");

}
//@unit 8c257208
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c257208_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c257208");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int unaff_r13 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(le<undefined4>* )(unsigned)(unaff_r13 + 0xc),ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571a8(*(le<undefined4>* )(unsigned)(unaff_r13 + 0x10),ar5,ar6,ar7));
  uVar3 = 0xbfffffff;
  *(le<uint>* )(unsigned)(ar4 + 8) = iVar1 << 3 | uVar2;
  uVar4 = *(le<uint>* )(unsigned)(unaff_r13 + 0x18);
  uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x18) >> 0x10 & 0xff00;
  uVar3 = (((((uint)((uVar4 & 1) != 0) << 0x1f & uVar3 | (uVar4 & 8) << 0x1b) & 0xc7ffffff |
            *(le<uint>* )(unsigned)(unaff_r13 + 8) & 0x38000000) & 0xfbffffff | (~(uVar4 & 4) & 4) << 0x18) &
           0xfdffffff | (uVar4 & 0x10) << 0x15) & 0xff800000 | *(le<uint>* )(unsigned)(unaff_r13 + 0x1c) >> 3;
  if ((uVar2 == (int)0x500) || (uVar2 == (int)0x600)) {
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 4) & 0x3f;
  }
  else {
    if ((uVar2 != (int)0x700) && (uVar2 != (int)0x800)) goto LAB_8c2572b6;
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 4) & 0x30;
  }
  uVar3 = uVar2 << 0x15 | 0xf81fffff & uVar3;
LAB_8c2572b6:
  *(le<uint>* )(unsigned)(ar4 + 0xc) = uVar3;
  return uVar2;
}

__asm__(".globl FUN_8c257208\n.set FUN_8c257208, FUN_8c257208_def\n");

}
//@unit 8c2572ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2572ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2572ec");
  return (unsigned)sh4_interp(0x8c2572ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2572ec\n.set FUN_8c2572ec, FUN_8c2572ec_def\n");
}
//@unit 8c25747c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25747c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25747c");
  return (unsigned)sh4_interp(0x8c25747c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25747c\n.set FUN_8c25747c, FUN_8c25747c_def\n");
}
//@unit 8c257488
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_257488_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_257488");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_257488\n.set noop_257488, noop_257488_def\n");

}
//@unit 8c25748c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25748c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25748c");
  return (unsigned)sh4_interp(0x8c25748c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25748c\n.set FUN_8c25748c, FUN_8c25748c_def\n");
}
//@unit 8c25754c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25754c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25754c");
  return (unsigned)sh4_interp(0x8c25754c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25754c\n.set FUN_8c25754c, FUN_8c25754c_def\n");
}
//@unit 8c257610
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257610_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257610");
  return (unsigned)sh4_interp(0x8c257610, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257610\n.set FUN_8c257610, FUN_8c257610_def\n");
}
//@unit 8c2578ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2578ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2578ac");
  return (unsigned)sh4_interp(0x8c2578ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2578ac\n.set FUN_8c2578ac, FUN_8c2578ac_def\n");
}
//@unit 8c257bc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257bc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257bc0");
  return (unsigned)sh4_interp(0x8c257bc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257bc0\n.set FUN_8c257bc0, FUN_8c257bc0_def\n");
}
//@unit 8c257be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257be8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257be8");
  return (unsigned)sh4_interp(0x8c257be8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257be8\n.set FUN_8c257be8, FUN_8c257be8_def\n");
}
//@unit 8c257e10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c257e10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c257e10");
  return (unsigned)sh4_interp(0x8c257e10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c257e10\n.set FUN_8c257e10, FUN_8c257e10_def\n");
}
//@unit 8c258030
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258030_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258030");
  return (unsigned)sh4_interp(0x8c258030, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258030\n.set FUN_8c258030, FUN_8c258030_def\n");
}
//@unit 8c258048
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258048_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258048");
  return (unsigned)sh4_interp(0x8c258048, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258048\n.set FUN_8c258048, FUN_8c258048_def\n");
}
//@unit 8c25806c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25806c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25806c");
  return (unsigned)sh4_interp(0x8c25806c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25806c\n.set FUN_8c25806c, FUN_8c25806c_def\n");
}
//@unit 8c258096
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c258096_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258096");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) = 0;
  puVar1 = ((undefined1 *)(unsigned)0x8c4aa6dc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) = 1;
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277aec) != (code *)0x0) {
    puVar1 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c277aec)))(vr4,vr5,vr6,vr7));
  }
  return puVar1;
}

__asm__(".globl FUN_8c258096\n.set FUN_8c258096, FUN_8c258096_def\n");

}
//@unit 8c25809a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c25809a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25809a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 in_r3 = 0;
  
  puVar1 = ((undefined1 *)(unsigned)0x8c4aa6dc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) = 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) = in_r3;
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277aec) != (code *)0x0) {
    puVar1 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c277aec)))(ar4,ar5,ar6,ar7));
  }
  return puVar1;
}

__asm__(".globl FUN_8c25809a\n.set FUN_8c25809a, FUN_8c25809a_def\n");

}
//@unit 8c2580b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2580b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2580b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d8) = 0;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2580b8\n.set FUN_8c2580b8, FUN_8c2580b8_def\n");

}
//@unit 8c2580c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2580c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2580c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa558) = ar4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2580c0\n.set FUN_8c2580c0, FUN_8c2580c0_def\n");

}
//@unit 8c2580c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2580c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2580c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) != 0) {
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa54c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab334),ar5,ar6,ar7));
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c68) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c68) + 1;
  return ain0;
}

__asm__(".globl FUN_8c2580c6\n.set FUN_8c2580c6, FUN_8c2580c6_def\n");

}
//@unit 8c2580e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_2580e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_2580e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  do {
  } while ((*(volatile le<undefined4>* )(unsigned)0xa05f810c & (int)0x3ff) == 0);
  do {
  } while ((*(volatile le<undefined4>* )(unsigned)0xa05f810c & (int)0x3ff) != 0);
  return in_r0 = 0;
}

__asm__(".globl pvr_2580e4\n.set pvr_2580e4, pvr_2580e4_def\n");

}
//@unit 8c2580f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint g2dma_2580f8_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("g2dma_2580f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(volatile le<undefined4>* )(unsigned)0xa05f688c;
  *ar4 = (uint)((uVar1 & 0x20) == 0);
  return uVar1;
}

__asm__(".globl g2dma_2580f8\n.set g2dma_2580f8, g2dma_2580f8_def\n");

}
//@unit 8c258104
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint aica_reg_258104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("aica_reg_258104");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 820; for (int i_ = 0; i_ < 820; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  le<int>* piVar5;
  int iVar6;
  int a6;
  le<int>* a7;
  byte in_MD = 0;
  byte bVar7;
  byte in_RB = 0;
  byte bVar8;
  byte in_BL = 0;
  byte bVar9;
  byte in_FD = 0;
  byte bVar10;
  byte in_M = 0;
  byte extraout_M = 0;
  byte bVar11;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte bVar12;
  byte in_IMASK = 0;
  byte bVar13;
  byte in_S = 0;
  byte extraout_S = 0;
  byte bVar14;
  byte in_T = 0;
  
  (*(le<int>* )(fr0_ - 0x30)) = 0;
  (*(le<uint>* )(fr0_ - 0x24)) = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4 | (uint)in_Q << 8;
  uVar3 = uVar2 | (uint)in_M << 9;
  bVar9 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar7 = bVar9 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar14 = (byte)((uVar1 & 2) >> 1);
  bVar13 = 0;
  bVar12 = (byte)(uVar2 >> 8) & 1;
  bVar11 = (byte)((uVar3 & 0x200) >> 9);
  bVar10 = (byte)(((uVar3 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar9 = (bVar9 & 0x10) >> 4;
  bVar8 = (bVar7 & 0x20) >> 5;
  bVar7 = ((bVar7 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<int>* )(fr0_ - 0x20))));
  iVar6 = 0;
  a6 = 0;
  piVar5 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c));
  a7 = ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c));
  do {
    iVar4 = iVar6 * 0x20;
    iVar6 = iVar6 + 1;
    if ((*(le<uint>* )(unsigned)(iVar4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c74) + 0x18) & 1) == 0) {
      *a7 = 0;
    }
    else {
      *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c74) + a6 + 0x1c) = 0;
      *piVar5 = 1;
    }
    piVar5 = piVar5 + 1;
    a7 = a7 + 1;
    a6 = a6 + 0x20;
    (*(le<uint>* )(fr0_ - 0x28)) = ar4;
  } while (iVar6 < 4);
  while ((*(le<int>* )(fr0_ - 0x30)) != 1) {
    (vsp = ((unsigned long)(fr0_ - 820)), g2dma_2580f8(&(*(le<int>* )(fr0_ - 0x30)),iVar6,a6,a7));
    bVar11 = extraout_M;
    bVar12 = extraout_Q;
    bVar14 = extraout_S;
  }
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa0702c00) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa0702c00) & 0xfffffcff | (*(le<uint>* )(fr0_ - 0x28));
  iVar6 = 0;
  for (; &(*(le<int>* )(fr0_ - 0x10)) > ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c)); (*(le<unsigned>* )(fr0_ - 0x2c) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c)) + 1))) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c)) == 1) {
      *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c74) + iVar6 + 0x1c) = 1;
    }
    iVar6 = iVar6 + 0x20;
  }
  return ((*(le<uint>* )(fr0_ - 0x24)) & 0xf) << 4 |
         ((uint)(&(*(le<int>* )(fr0_ - 0x10)) <= ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x2c))) | (uint)bVar14 << 1 | (uint)bVar13 << 4) & 0xffffff0f |
         (uint)bVar12 << 8 | (uint)bVar11 << 9 | (uint)bVar10 << 0xf | (uint)bVar9 << 0x1c |
         (uint)bVar8 << 0x1d | (uint)bVar7 << 0x1e;
}

__asm__(".globl aica_reg_258104\n.set aica_reg_258104, aica_reg_258104_def\n");

}
//@unit 8c258210
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 aica_reg_258210_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("aica_reg_258210");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 788; for (int i_ = 0; i_ < 788; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<uint>* )(fr0_ - 0xc)) = ar4;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f92c0(0xa0702c00,&(*(le<uint>* )(fr0_ - 0x10)),4,1); });
  (*(le<uint>* )(fr0_ - 0x10)) = (*(le<uint>* )(fr0_ - 0x10)) & (int)(int)0xfffffcff | (*(le<uint>* )(fr0_ - 0xc));
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 788)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 788)) - 8); FUN_8c1f9610(&(*(le<uint>* )(fr0_ - 0x10)),0xa0702c00,4,1); });
  return uVar1;
}

__asm__(".globl aica_reg_258210\n.set aica_reg_258210, aica_reg_258210_def\n");

}
//@unit 8c258252
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c258252_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258252");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6e0);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c258252\n.set FUN_8c258252, FUN_8c258252_def\n");

}
//@unit 8c25825a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned pvr_25825a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("pvr_25825a");
  return (unsigned)sh4_interp(0x8c25825a, ar4, ar5, ar6, ar7);
}
__asm__(".globl pvr_25825a\n.set pvr_25825a, pvr_25825a_def\n");
}
//@unit 8c258604
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258604_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258604");
  return (unsigned)sh4_interp(0x8c258604, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258604\n.set FUN_8c258604, FUN_8c258604_def\n");
}
//@unit 8c2588f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2588f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2588f8");
  return (unsigned)sh4_interp(0x8c2588f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2588f8\n.set FUN_8c2588f8, FUN_8c2588f8_def\n");
}
//@unit 8c258ac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258ac0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258ac0");
  return (unsigned)sh4_interp(0x8c258ac0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258ac0\n.set FUN_8c258ac0, FUN_8c258ac0_def\n");
}
//@unit 8c258b26
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258b26_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258b26");
  return (unsigned)sh4_interp(0x8c258b26, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258b26\n.set FUN_8c258b26, FUN_8c258b26_def\n");
}
//@unit 8c258d4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c258d4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258d4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar4_00;
  
  ar4_00 = ar4 * 0xc0 + 0x8c4aa73c;
  *(le<undefined4>* )(unsigned)0x8c4aabbc = ar4_00;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(ar4_00,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4aabd8 = ar4 * 4 + 0x8c4aabc0;
  return uVar1;
}

__asm__(".globl FUN_8c258d4c\n.set FUN_8c258d4c, FUN_8c258d4c_def\n");

}
//@unit 8c258d82
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258d82_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258d82");
  return (unsigned)sh4_interp(0x8c258d82, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258d82\n.set FUN_8c258d82, FUN_8c258d82_def\n");
}
//@unit 8c258e0a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c258e0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258e0a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ae8) = ar4;
  return ain0;
}

__asm__(".globl FUN_8c258e0a\n.set FUN_8c258e0a, FUN_8c258e0a_def\n");

}
//@unit 8c258e50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c258e50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258e50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277ae8) != (code *)0x0) {
    ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c277ae8)))(vr4,vr5,vr6,vr7));
  }
  return ain0;
}

__asm__(".globl FUN_8c258e50\n.set FUN_8c258e50, FUN_8c258e50_def\n");

}
//@unit 8c258e52
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c258e52_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c258e52");
  return (unsigned)sh4_interp(0x8c258e52, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c258e52\n.set FUN_8c258e52, FUN_8c258e52_def\n");
}
//@unit 8c258e66
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * game_frame_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("game_frame");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ain0;
  undefined4 ain0_00;
  undefined1 *ar4_00;
  uint uVar1;
  
  uVar1 = 0;
  ain0 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24) = ain0;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) != 0) {
    while (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) != 0 && (uVar1 < 0x28870))) {
      ar5 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
      ar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24),ar5,ar6,ar7));
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f892a(ar4,ar5,ar6,ar7));
      uVar1 = ain0;
    }
    if (uVar1 < 0x28870) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c258e50(ar4,ar5,ar6,ar7); });
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b7a0(ar4,ar5,ar6,ar7));
  ar4_00 = ((undefined1 *)(unsigned)0x8c4aa540);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa51c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa520) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) + 1;
  ain0_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b260(((undefined1 *)(unsigned)0x8c4aa540),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f61c6(ar4_00,ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad28) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f4) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f8) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[1];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4fc) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa500) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[3];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa504) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[4];
  return ((undefined1 *)(unsigned)0x8c4aa4fc);
}

__asm__(".globl game_frame\n.set game_frame, game_frame_def\n");

}
//@unit 8c258e70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c258e70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258e70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined1 *ar4_00;
  uint unaff_r11 = 0;
  undefined4 in_PR = 0;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  uVar1 = unaff_r11;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6dc) != 0) {
    while (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) != 0 && (uVar1 < 0x28870))) {
      ar5 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
      ar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f88f0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad24),ar5,ar6,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f892a(ar4,ar5,ar6,ar7));
    }
    if (uVar1 < 0x28870) {
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c258e50(ar4,ar5,ar6,ar7); });
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d4) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b7a0(ar4,ar5,ar6,ar7));
  ar4_00 = ((undefined1 *)(unsigned)0x8c4aa540);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa540) + 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa518) = unaff_r11;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa51c) = unaff_r11;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa520) = unaff_r11;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b260(((undefined1 *)(unsigned)0x8c4aa540),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1f61c6(ar4_00,ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aad28) = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f4) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4f8) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[1];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa4fc) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa500) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[3];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa504) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aabdc)[4];
  return ((undefined1 *)(unsigned)0x8c4aa4fc);
}

__asm__(".globl FUN_8c258e70\n.set FUN_8c258e70, FUN_8c258e70_def\n");

}
//@unit 8c258f1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c258f1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258f1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20b7a0);
  *(le<undefined4>* )(unsigned)0x8c4aa6d4 = 1;
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
  puVar3 = 0x8c4aa520;
  puVar2 = 0x8c4aa51c;
  *(le<undefined4>* )(unsigned)0x8c4aa518 = 0;
  *puVar2 = 0;
  *puVar3 = 0;
  return uVar4;
}

__asm__(".globl FUN_8c258f1c\n.set FUN_8c258f1c, FUN_8c258f1c_def\n");

}
//@unit 8c258f3a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c258f3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258f3a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<int>* ar4_00;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), sh4_tmu_1f88e6(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c20b260);
  *(le<undefined4>* )(unsigned)0x8c4aad24 = uVar2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6,ar7));
  ar4_00 = 0x8c4aa540;
  puVar1 = ((void *)(unsigned)0x8c1f88e6);
  *(le<undefined4>* )(unsigned)0x8c4aa540 = *(le<undefined4>* )(unsigned)0x8c4aa540 + 1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5,ar6,ar7));
  puVar4 = 0x8c4aabdc;
  *(le<undefined4>* )(unsigned)0x8c4aad28 = uVar2;
  puVar4 = (le<undefined4>* )(unsigned)*puVar4;
  *(le<undefined4>* )(unsigned)0x8c4aa4f4 = *puVar4;
  *(le<undefined4>* )(unsigned)0x8c4aa4f8 = puVar4[1];
  puVar3 = 0x8c4aa4fc;
  *(le<undefined4>* )(unsigned)0x8c4aa4fc = puVar4[2];
  *(le<undefined4>* )(unsigned)0x8c4aa500 = puVar4[3];
  *(le<undefined4>* )(unsigned)0x8c4aa504 = puVar4[4];
  return puVar3;
}

__asm__(".globl FUN_8c258f3a\n.set FUN_8c258f3a, FUN_8c258f3a_def\n");

}
//@unit 8c258fd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c258fd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c258fd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int in_r0 = (int)(unsigned long)vin0;
  
  piVar1 = 0x8c4ab330;
  if (*(le<undefined4>* )(unsigned)0x8c4ab330 != 0) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa54c(*(le<undefined4>* )(unsigned)0x8c4ab330,ar5,ar6,ar7));
    *piVar1 = 0;
  }
  if (ar4 != 0) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fa244((int)0x900,ar4,0x58,0));
    *piVar1 = in_r0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c258fd8\n.set FUN_8c258fd8, FUN_8c258fd8_def\n");

}
//@unit 8c259046
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259046_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259046");
  return (unsigned)sh4_interp(0x8c259046, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259046\n.set FUN_8c259046, FUN_8c259046_def\n");
}
//@unit 8c2590bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2590bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2590bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210fd2(((undefined1 *)(unsigned)0x8c4aabdc),ar5,ar6,ar7));
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b30) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aace0) & 0x8fffffff,ar5,ar6,ar7));
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c2590bc\n.set FUN_8c2590bc, FUN_8c2590bc_def\n");

}
//@unit 8c259138
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259138_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259138");
  return (unsigned)sh4_interp(0x8c259138, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259138\n.set FUN_8c259138, FUN_8c259138_def\n");
}
//@unit 8c2591f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2591f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2591f8");
  return (unsigned)sh4_interp(0x8c2591f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2591f8\n.set FUN_8c2591f8, FUN_8c2591f8_def\n");
}
//@unit 8c25922e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25922e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25922e");
  return (unsigned)sh4_interp(0x8c25922e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25922e\n.set FUN_8c25922e, FUN_8c25922e_def\n");
}
//@unit 8c259274
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259274_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259274");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(le<int>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aabbc = (int)0x4000;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x54) = 0;
  }
  else if (ar4 == 1) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x54) = 2;
  }
  else if (ar4 == 2) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x54) = 1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c259274\n.set FUN_8c259274, FUN_8c259274_def\n");

}
//@unit 8c25927e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25927e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25927e");
  return (unsigned)sh4_interp(0x8c25927e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25927e\n.set FUN_8c25927e, FUN_8c25927e_def\n");
}
//@unit 8c2592c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2592c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2592c4");
  return (unsigned)sh4_interp(0x8c2592c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2592c4\n.set FUN_8c2592c4, FUN_8c2592c4_def\n");
}
//@unit 8c2592fe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2592fe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2592fe");
  return (unsigned)sh4_interp(0x8c2592fe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2592fe\n.set FUN_8c2592fe, FUN_8c2592fe_def\n");
}
//@unit 8c259358
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259358");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(le<int>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aabbc = (int)0x2000;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x50) = 0;
    goto LAB_8c259396;
  }
  if (ar4 == 1) {
    uVar2 = 1;
  }
  else {
    if (ar4 == 2) {
      *(le<undefined4>* )(unsigned)(iVar3 + 0x50) = 2;
      goto LAB_8c259396;
    }
    if (ar4 != 3) goto LAB_8c259396;
    uVar2 = 3;
  }
  *(le<undefined4>* )(unsigned)(iVar3 + 0x50) = uVar2;
LAB_8c259396:
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c259358\n.set FUN_8c259358, FUN_8c259358_def\n");

}
//@unit 8c259362
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259362_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259362");
  return (unsigned)sh4_interp(0x8c259362, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259362\n.set FUN_8c259362, FUN_8c259362_def\n");
}
//@unit 8c2593a6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c20a13a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("thunk_FUN_8c20a13a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c20a13a)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c20a13a\n.set thunk_FUN_8c20a13a, thunk_FUN_8c20a13a_def\n");

}
//@unit 8c2593ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2593ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2593ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(le<undefined4>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aabbc = 2;
  iVar3 = *piVar1;
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x18) = 0;
  }
  else if (ar4 == 1) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x18) = 1;
  }
  else if (ar4 == 2) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x18) = 2;
  }
  else if (ar4 == 3) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x18) = 3;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c2593ac\n.set FUN_8c2593ac, FUN_8c2593ac_def\n");

}
//@unit 8c2593b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2593b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2593b4");
  return (unsigned)sh4_interp(0x8c2593b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2593b4\n.set FUN_8c2593b4, FUN_8c2593b4_def\n");
}
//@unit 8c25940c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25940c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25940c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar2;
  
  piVar1 = 0x8c4aabbc;
  switch(in_r0) {
  case 0:
    ar5 = 0;
    break;
  case 1:
    ar5 = 1;
    break;
  case 2:
    ar5 = 2;
    break;
  case 3:
    ar5 = 3;
    break;
  case 4:
    ar5 = 4;
    break;
  case 5:
    ar5 = 5;
    break;
  case 6:
    ar5 = 6;
    break;
  case 7:
    ar5 = 7;
    break;
  case 8:
    ar5 = 8;
    break;
  case 9:
    ar5 = 9;
    break;
  case 10:
    ar5 = 10;
    break;
  case 0xb:
    ar5 = 0xb;
  }
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aabbc = 0x40;
    *(le<undefined4>* )(unsigned)(*piVar1 + 0x2c) = ar5;
  }
  if (ar4 == 1) {
    *(le<int>* )(unsigned)*piVar1 = (int)0x80;
    *(le<undefined4>* )(unsigned)(*piVar1 + 0x30) = ar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c25940c\n.set FUN_8c25940c, FUN_8c25940c_def\n");

}
//@unit 8c2594a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2594a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2594a0");
  return (unsigned)sh4_interp(0x8c2594a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2594a0\n.set FUN_8c2594a0, FUN_8c2594a0_def\n");
}
//@unit 8c2594da
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2594da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2594da");
  return (unsigned)sh4_interp(0x8c2594da, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2594da\n.set FUN_8c2594da, FUN_8c2594da_def\n");
}
//@unit 8c259526
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259526_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259526");
  return (unsigned)sh4_interp(0x8c259526, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259526\n.set FUN_8c259526, FUN_8c259526_def\n");
}
//@unit 8c259556
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259556_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259556");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = 0x8c4aabbc;
  *(le<undefined4>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4aabbc = 0x20000;
  iVar3 = *piVar1;
  if (ar4 == 3) {
    *(le<undefined4>* )(unsigned)(iVar3 + 0x60) = 0;
    goto LAB_8c259594;
  }
  if (ar4 == 0) {
    uVar2 = 1;
  }
  else {
    if (ar4 == 1) {
      *(le<undefined4>* )(unsigned)(iVar3 + 0x60) = 2;
      goto LAB_8c259594;
    }
    if (ar4 != 2) goto LAB_8c259594;
    uVar2 = 3;
  }
  *(le<undefined4>* )(unsigned)(iVar3 + 0x60) = uVar2;
LAB_8c259594:
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f640(*piVar1,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00(*piVar1,vr5,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c259556\n.set FUN_8c259556, FUN_8c259556_def\n");

}
//@unit 8c259560
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259560_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259560");
  return (unsigned)sh4_interp(0x8c259560, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259560\n.set FUN_8c259560, FUN_8c259560_def\n");
}
//@unit 8c2595aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2595aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2595aa");
  return (unsigned)sh4_interp(0x8c2595aa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2595aa\n.set FUN_8c2595aa, FUN_8c2595aa_def\n");
}
//@unit 8c259968
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259968_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259968");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc),0xc0,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab140) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab144) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14);
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14);
}

__asm__(".globl FUN_8c259968\n.set FUN_8c259968, FUN_8c259968_def\n");

}
//@unit 8c259988
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c259988_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259988");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ar6_00 = 0xc0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c23c814((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc),ar4,0xc0,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20fe00((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc),ar4,ar6_00,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab140);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab144);
  return ((le<undefined4>* )(unsigned)0x8c277b10);
}

__asm__(".globl FUN_8c259988\n.set FUN_8c259988, FUN_8c259988_def\n");

}
//@unit 8c2599ba
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c207f80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("thunk_FUN_8c207f80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c207f80)))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl thunk_FUN_8c207f80\n.set thunk_FUN_8c207f80, thunk_FUN_8c207f80_def\n");

}
//@unit 8c2599ca
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2599ca_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2599ca");
  return (unsigned)sh4_interp(0x8c2599ca, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2599ca\n.set FUN_8c2599ca, FUN_8c2599ca_def\n");
}
//@unit 8c2599fa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2599fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2599fa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar4); unsigned long t1_ = (unsigned long)(ar5); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c20a156(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c2599fa\n.set FUN_8c2599fa, FUN_8c2599fa_def\n");

}
//@unit 8c259a1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259a1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259a1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long t0_ = (unsigned long)(ar4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c20a356(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c259a1c\n.set FUN_8c259a1c, FUN_8c259a1c_def\n");

}
//@unit 8c259a70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259a70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259a70");
  return (unsigned)sh4_interp(0x8c259a70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259a70\n.set FUN_8c259a70, FUN_8c259a70_def\n");
}
//@unit 8c259bd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c259bd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c259bd8");
  return (unsigned)sh4_interp(0x8c259bd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c259bd8\n.set FUN_8c259bd8, FUN_8c259bd8_def\n");
}
//@unit 8c259be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259be8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f397e(ar4,0,ar6,ar7));
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) != 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f30d4((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),((le<undefined4>* )(unsigned)0x8c277c9c),ar6,ar7)), iVar1 != 0)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c98) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c) + 0x7ff >> 0xb;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cac) = 0;
    return 0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 2;
  return 0xfffffffe;
}

__asm__(".globl FUN_8c259be8\n.set FUN_8c259be8, FUN_8c259be8_def\n");

}
//@unit 8c259c40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259c40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259c40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c1f309c)))(*(le<undefined4>* )(unsigned)0x8c4b3338,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c259c40\n.set FUN_8c259c40, FUN_8c259c40_def\n");

}
//@unit 8c259c48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259c48_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259c48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar4_00;
  uint ar6_00;
  int ar6_01;
  int iVar5;
  uint uVar6;
  
  { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x9c48, (unsigned)ar4, ar5, (unsigned)ar6); }
  if ((ar5 != 0) && (ar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c))) {
    iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0);
    uVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
    uVar6 = iVar4 - uVar6 * iVar1;
    iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90),vr6,vr7));
    if ((iVar1 == iVar2) && (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94), (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) != 0)) {
LAB_8c259d32:
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = iVar2;
      if (uVar6 != (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4)) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = uVar6;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4);
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) < ar5) {
        uVar6 = 0;
        iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
        iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
        ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338);
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) != 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8),ar7));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8);
          uVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8);
          iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
          iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
          ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338);
        }
        for (; (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) = iVar4, (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90) = iVar1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) = ar4_00, uVar6 < ar5;
            uVar6 = uVar6 + ar6_00) {
          ar6_00 = ar5 - uVar6;
          if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) < ar6_00) {
            iVar4 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c(ar6_00,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
            iVar1 = iVar1 * iVar4;
            iVar5 = ar4 + uVar6;
            iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar5,ar7));
            if (iVar2 != 0) {
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
              return 0xffffffff;
            }
            ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) * iVar4;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + ar6_00;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90) * iVar4;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = 0;
          }
          else {
            iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar4,ar7));
            if (iVar2 != 0) {
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
              return 0xffffffff;
            }
            (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4 + uVar6,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88),ar6_00,ar7));
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + ar6_00;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - ar6_00;
            (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = ar6_00;
          }
          iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
          iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
          ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338);
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4),ar5,ar7));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) + ar5;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + ar5;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4);
      }
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f3122((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1 * iVar4,0,ar7));
    if (iVar2 == 0) {
      iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
      ar6_01 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88),ar7));
      iVar2 = iVar1 * iVar4;
      if (iVar3 == 0) goto LAB_8c259d32;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_01,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_01,ar7));
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
  return 0xffffffff;
}

__asm__(".globl FUN_8c259c48\n.set FUN_8c259c48, FUN_8c259c48_def\n");

}
//@unit 8c259e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c259e80_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c259e80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar4_00;
  int ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  if ((ar5 != 0) && (ar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c))) {
    iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0);
    uVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
    uVar6 = iVar4 - uVar6 * iVar1;
    iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90),vr6,vr7));
    if ((iVar1 == iVar2) && (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94), (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) != 0)) {
LAB_8c259f6a:
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = iVar2;
      if (uVar6 != (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4)) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = uVar6;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4);
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) < ar5) {
        uVar6 = 0;
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) != 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8),ar7));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8);
          uVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8);
        }
        iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
        iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
        ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338);
        if (ar5 - uVar6 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0)) {
          for (; (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) = iVar4, (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90) = iVar1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338) = ar4_00, uVar6 < ar5;
              uVar6 = uVar6 + uVar7) {
            uVar7 = ar5 - uVar6;
            if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) < uVar7) {
              iVar4 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c(uVar7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c),vr6,vr7));
              iVar1 = iVar1 * iVar4;
              iVar5 = ar4 + uVar6;
              iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar5,ar7));
              if (iVar2 != 0) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar5,ar7));
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
                return 0xffffffff;
              }
              uVar7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) * iVar4;
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + uVar7;
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90) * iVar4;
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = 0;
            }
            else {
              iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6(ar4_00,iVar1,iVar4,ar7));
              if (iVar2 != 0) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1,iVar4,ar7));
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
                return 0xffffffff;
              }
              (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4 + uVar6,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88),uVar7,ar7));
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + uVar7;
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - uVar7;
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = uVar7;
            }
            iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
            iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
            ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338);
          }
        }
        else {
          uVar7 = (ar5 - uVar6) + 0x7ff >> 0xb;
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),uVar7,ar4 + uVar6,ar7));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + uVar7 * 0x800;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c94) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = 0;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23c814(ar4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4),ar5,ar7));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4) + ar5;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + ar5;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c8c) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca4);
      }
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f3122((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar1 * iVar4,0,ar7));
    if (iVar2 == 0) {
      iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90);
      ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f31c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c90),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277c88),ar7));
      iVar2 = iVar1 * iVar4;
      if (iVar3 == 0) goto LAB_8c259f6a;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b8) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f364c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_00,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6bc) = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f37a8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4b3338),iVar5,ar6_00,ar7));
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 5;
  return 0xffffffff;
}

__asm__(".globl FUN_8c259e80\n.set FUN_8c259e80, FUN_8c259e80_def\n");

}
//@unit 8c25a122
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a122_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a122");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if (ar5 == 1) {
    iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) + ar4;
  }
  else {
    iVar1 = ar4;
    if ((ar5 != 0) && (iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0), ar5 == 2)) {
      iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277c9c) - ar4;
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277ca0) = iVar1;
  return ar5;
}

__asm__(".globl FUN_8c25a122\n.set FUN_8c25a122, FUN_8c25a122_def\n");

}
//@unit 8c25a174
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a174_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a174");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ain0;
  
  ar5_00 = ar5;
  ain0 = ar6;
  { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, (const char *)(unsigned)(unsigned)ar5, ar6, ar7); } uVar1 = (vsp = ((unsigned long)(fr0_ - 48)), log_message(ar5,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((unsigned)(fr0_ + (int)0xffffffe8)); unsigned long ri1_ = (unsigned long)(ar5_00 + uVar1 - 4); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(uVar1,ar5_00,ar6,ar7); });
  ar4_00 = (fr0_ + (int)0xffffffe8);
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c2033c0(ar4_00,ar5_00,ar6,ar7); });
  uVar1 = ain0;
  if ((char)(*(le<undefined4>* )(fr0_ - 0x18)) == '.') {
    ar4_00 = (fr0_ + (int)0xffffffe8);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0109e8(ar4_00,ain0,ar6,ar7));
    ar5_00 = ain0;
    if (iVar2 == 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar4); unsigned long ri1_ = (unsigned long)(0x8c4aa5a8); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(ar4_00,ain0,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,ar5,ar6,ar7));
      { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, "built", 0, 0); return 1; }
    }
  }
  ({ unsigned long ri0_ = (unsigned long)(ar4); unsigned long ri1_ = (unsigned long)(0x8c4aa5a8); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c010998(ar4_00,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01437c(ar4,uVar1,ar6,ar7));
  { extern void dbg_str(const char *,const char *,long,long); dbg_str((const char *)(unsigned)(unsigned)ar4, "built", 0, 0); return 1; }
}

__asm__(".globl FUN_8c25a174\n.set FUN_8c25a174, FUN_8c25a174_def\n");

}
//@unit 8c25a1ee
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a1ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a1ee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((((ar4 != 0x500) && (ar4 != 0x600)) && (ar4 != 0x700)) &&
     (ar4 != 0x800)) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c25a1ee\n.set FUN_8c25a1ee, FUN_8c25a1ee_def\n");

}
//@unit 8c25a216
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a216_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a216");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  (*(le<unsigned>* )(fr0_ - 0x30) = (unsigned)(unsigned long)(ar4));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0,0,ar6,ar7));
  (*(le<int>* )(fr0_ - 0x18)) = -1;
  do {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(&(*(le<int>* )(fr0_ - 0x34)),4,ar6,ar7));
    if (iVar1 < 0) {
      return 0xfffffffc;
    }
    if ((*(le<int>* )(fr0_ - 0x34)) == 0x58494247) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0xfffffffc,1,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(((undefined1 *)(fr0_ - 0x20)),0xc,ar6,ar7));
joined_r0x8c25a25e:
      if (iVar1 < 0) {
        return 0xfffffffc;
      }
    }
    else if ((*(le<int>* )(fr0_ - 0x34)) == 0x54525650) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c259c48(((undefined1 *)(fr0_ - 0x2c)),0xc,ar6,ar7));
      goto joined_r0x8c25a25e;
    }
    if ((*(le<int>* )(fr0_ - 0x34)) == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a122(0,0,ar6,ar7));
      if ((*(le<int>* )(fr0_ - 0x18)) == -1) {
        while (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18),ar7)), iVar1 != -1) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18) + -1;
        }
        *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x30)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b18);
      }
      else {
        *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x18));
      }
      (*(le<uint>* )(fr0_ - 0x28)) = (*(le<uint>* )(fr0_ - 0x28)) & 0xff00;
      if (((((*(le<uint>* )(fr0_ - 0x28)) == 0x500) || ((*(le<uint>* )(fr0_ - 0x28)) == 0x600)) || ((*(le<uint>* )(fr0_ - 0x28)) == 0x700)) ||
         ((*(le<uint>* )(fr0_ - 0x28)) == 0x800)) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
      return uVar2;
    }
  } while( true );
}

__asm__(".globl FUN_8c25a216\n.set FUN_8c25a216, FUN_8c25a216_def\n");

}
//@unit 8c25a33c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a33c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a33c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) = ar4;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) = ar5;
  for (uVar1 = 0; uVar1 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar1 = uVar1 + 1) {
    ain0 = 0x40;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) = 0xffffffff;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 4) = 0xffffffff;
    *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) = 0;
    iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3;
    iVar3 = iVar3 + 0x44;
    *(le<undefined2>* )(unsigned)(iVar2 + 0x40) = 0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) = 0;
  return ain0;
}

__asm__(".globl FUN_8c25a33c\n.set FUN_8c25a33c, FUN_8c25a33c_def\n");

}
//@unit 8c25a380
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a380_def(le<int>* ar4,le<undefined4>* ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25a380");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0);
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)) != -1) {
    for (uVar2 = 0; (uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) && (*(le<int>* )(unsigned)(uVar2 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)) != -1));
        uVar2 = uVar2 + 1) {
    }
  }
  if (uVar2 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) - 1) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = 0;
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = uVar2 + 1;
  }
  iVar3 = uVar2 * 0x44;
  *ar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3;
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x18) = ar5[1];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x1c) = ar5[2];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x20) = ar5[3];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x24) = ar5[4];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x28) = ar5[5];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x2c) = ar5[6];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x30) = ar5[7];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x34) = ar5[8];
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x14) = *ar5;
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3) = ar6;
  *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 4) = s0;
  *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) = ar7;
  *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) = *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x10) & 0xfffffff7;
  if ((ar7 & 6) == 0) {
    uVar1 = 0x40;
    *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x40) = 0;
  }
  else {
    *(le<undefined2>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3 + 0x40) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c2571fe((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar3,ar5,ar6,ar7));
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) <= uVar2) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + 1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c25a380\n.set FUN_8c25a380, FUN_8c25a380_def\n");

}
//@unit 8c25a394
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25a394_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25a394");
  return (unsigned)sh4_interp(0x8c25a394, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25a394\n.set FUN_8c25a394, FUN_8c25a394_def\n");
}
//@unit 8c25a49e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a49e_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a49e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<int>* piVar3;
  
  piVar3 = (le<int>*)(((le<undefined4>* )(unsigned)0x8c277b08));
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  uVar2 = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  ar4[4] = 0;
  *(le<undefined2>* )(unsigned)(ar4 + 0x10) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c((int)ar4 - (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),0x44,vr6,vr7));
  if ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4)) && (iVar1 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1)) {
    while ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) &&
           (iVar1 = *(le<int>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)), iVar1 == -1))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1;
    }
  }
  for (; (uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) && (iVar1 = *(le<int>* )(unsigned)(uVar2 * 0x44 + *piVar3), iVar1 != -1));
      uVar2 = uVar2 + 1) {
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = uVar2;
  return iVar1;
}

__asm__(".globl FUN_8c25a49e\n.set FUN_8c25a49e, FUN_8c25a49e_def\n");

}
//@unit 8c25a4a6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a4a6_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c25a4a6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  code *in_r2 = 0;
  uint uVar2;
  
  *ar4 = ar5;
  ar4[1] = ar5;
  uVar2 = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  ar4[4] = 0;
  *(le<undefined2>* )(unsigned)(ain0 + (int)ar4) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)in_r2))((int)ar4 - *ar7,0,ar6,ar7));
  if ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4)) && (iVar1 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1)) {
    while ((0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) &&
           (iVar1 = *(le<int>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)), iVar1 == -1))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa5a4) + -1;
    }
  }
  for (; (uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) && (iVar1 = *(le<int>* )(unsigned)(uVar2 * 0x44 + *ar7), iVar1 != -1));
      uVar2 = uVar2 + 1) {
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) = uVar2;
  return iVar1;
}

__asm__(".globl FUN_8c25a4a6\n.set FUN_8c25a4a6, FUN_8c25a4a6_def\n");

}
//@unit 8c25a536
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25a536_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a536");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if (*(le<int>* )(unsigned)(uVar1 * 0x44 + ar4) == ar6) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c25a536\n.set FUN_8c25a536, FUN_8c25a536_def\n");

}
//@unit 8c25a566
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a566_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a566");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int n;
  undefined4 d;
  
  if ((ar6 != 0) && (ar4 != 0)) {
    n = ar6 - ar4;
    d = 0x44;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_0106dc(n,0x44,vr6,vr7));
    if ((iVar1 == 0) && (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_01051c(n,d,vr6,vr7)), uVar2 < ar5)) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c25a566\n.set FUN_8c25a566, FUN_8c25a566_def\n");

}
//@unit 8c25a5c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25a5c0_def(int ar4,uint ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c25a5c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar4 != 0) && (uVar1 = 0, ar5 != 0)) {
    do {
      if ((*(le<int>* )(unsigned)(uVar1 * 0x44 + ar4) == ar6) && (*(le<int>* )(unsigned)(uVar1 * 0x44 + ar4 + 4) == ar7)) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 < ar5);
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c25a5c0\n.set FUN_8c25a5c0, FUN_8c25a5c0_def\n");

}
//@unit 8c25a608
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a608_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a608");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* a4;
  uint a5;
  int a6;
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  a5 = ar5;
  a6 = ar6;
  for (uVar1 = 0; uVar1 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar1 = uVar1 + 1) {
    a4 = (le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar2);
    if (*a4 == ar4) {
      a4[4] = a4[4] | ar5;
      a4[5] = ar6;
      if ((ar5 & 2) != 0) {
        *(le<short>* )(unsigned)(a4 + 0x10) = (short)a4[0x10] + 1;
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2571fe(a4,a5,a6,ar7));
      }
    }
    iVar2 = iVar2 + 0x44;
  }
  return ain0;
}

__asm__(".globl FUN_8c25a608\n.set FUN_8c25a608, FUN_8c25a608_def\n");

}
//@unit 8c25a674
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a674_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a674");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* a4;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar2 = ~ar5;
  for (uVar3 = 0; uVar3 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar3 = uVar3 + 1) {
    a4 = (le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + iVar4);
    if (*a4 == ar4) {
      uVar1 = a4[4];
      a4[4] = uVar1 & uVar2;
      if ((uVar1 & uVar2 & 2) == 0) {
        ain0 = 0x40;
        a4[0xd] = 0;
        *(le<undefined2>* )(unsigned)(a4 + 0x10) = 0;
      }
      if ((a4[4] & 1U) == 0) {
        a4[5] = 0;
      }
      if ((a4[4] & 3U) == 0) {
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a49e(a4,ar5,ar6,ar7));
      }
    }
    iVar4 = iVar4 + 0x44;
  }
  return ain0;
}

__asm__(".globl FUN_8c25a674\n.set FUN_8c25a674, FUN_8c25a674_def\n");

}
//@unit 8c25a6ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a6ea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a6ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  
  piVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
  for (uVar2 = 0; uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c); uVar2 = uVar2 + 1) {
    if (*piVar1 == ar4) {
      ain0 = 0x40;
      *(le<short>* )(unsigned)(piVar1 + 0x10) = (short)piVar1[0x10] + 1;
    }
    piVar1 = piVar1 + 0x11;
  }
  return ain0;
}

__asm__(".globl FUN_8c25a6ea\n.set FUN_8c25a6ea, FUN_8c25a6ea_def\n");

}
//@unit 8c25a710
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a710");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0);
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c277cb0) * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)) != -1) {
    for (uVar1 = 0; (uVar1 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c) && (*(le<int>* )(unsigned)(uVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08)) != -1));
        uVar1 = uVar1 + 1) {
    }
  }
  return uVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + 0x14;
}

__asm__(".globl FUN_8c25a710\n.set FUN_8c25a710, FUN_8c25a710_def\n");

}
//@unit 8c25a770
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a770_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25a770");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 a5;
  undefined1 *ar6_00;
  uint ar6_01;
  uint uVar5;
  
  ar6_00 = (fr0_ + (int)0xffffffc8);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25af3c(ar5,*(le<undefined4>* )(unsigned)(ar4 + 4),(fr0_ + (int)0xffffffc8),ar7));
  if (-1 < iVar1) {
    uVar5 = *(le<uint>* )(unsigned)(ar5 + 0x18);
    uVar3 = (*(le<int>* )(fr0_ - 0x38)) - 8;
    if ((int)uVar5 < (int)uVar3) {
      iVar1 = uVar3 - uVar5;
      uVar3 = uVar5;
    }
    else {
      iVar1 = 0;
    }
    ar6_01 = 0;
    uVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d0);
    if (uVar3 <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d0)) {
      uVar5 = uVar3;
    }
    if (0 < (int)uVar3) {
      do {
        uVar4 = uVar5;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c259c48((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6cc),uVar5,ar6_00,ar7));
        if (iVar2 < 0) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c20cf88(ar5 + 4,uVar4,ar6_00,ar7));
          return 0xffffffff;
        }
        ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c1f9e32((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6cc),uVar5,ar6_00,ar7); });
        a5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6cc);
        ar6_00 = (undefined1 *)(unsigned)ar6_01;
        ar7 = uVar5;
        (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25ab02(ar5 + 4,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6cc),ar6_01,uVar5));
        ar6_01 = ar6_01 + uVar5;
        uVar4 = uVar3 - ar6_01;
        if (uVar4 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6d0)) {
          uVar5 = uVar4;
        }
        do {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c20a7e0(uVar4,a5,ar6_00,ar7));
        } while (iVar2 != 0);
      } while (ar6_01 != uVar3);
    }
    if (0 < iVar1) {
      (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c25a122(iVar1,1,ar6_00,ar7));
    }
    iVar1 = 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c25a770\n.set FUN_8c25a770, FUN_8c25a770_def\n");

}
//@unit 8c25a838
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a838_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  int ain0;
  undefined4 ar5_00;
  undefined1 *ar6_00;
  
  ar6_00 = (fr0_ + (int)0xffffffd8);
  ar5_00 = *(le<undefined4>* )(unsigned)(ar4 + 4);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c25afc0(ar5,ar5_00,(fr0_ + (int)0xffffffd8),ar7));
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + -8;
    if (iVar1 < (*(le<int>* )(fr0_ - 0x28))) {
      ain0 = (*(le<int>* )(fr0_ - 0x28)) - iVar1;
      (*(le<int>* )(fr0_ - 0x28)) = iVar1;
    }
    else {
      ain0 = 0;
    }
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c236278((*(le<int>* )(fr0_ - 0x28)),ar5_00,ar6_00,ar7));
    if (ar4_00 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 7;
      iVar1 = -7;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c259c48(ar4_00,(*(le<int>* )(fr0_ - 0x28)),ar6_00,ar7));
      if (iVar1 < 0) {
        iVar1 = -5;
      }
      else {
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c1f9e32(ar4_00,(*(le<int>* )(fr0_ - 0x28)),ar6_00,ar7); });
        if (0 < ain0) {
          (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c25a122(ain0,1,ar6_00,ar7));
        }
        iVar1 = 1;
        *ar5 = ar4_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c25a838\n.set FUN_8c25a838, FUN_8c25a838_def\n");

}
//@unit 8c25a8c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a8c0_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a8c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  le<int>* ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c25a962(ar5,ar5,ar6,ar7));
  if (-1 < iVar1) {
    iVar1 = ar5[6];
    ar4_00 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c236278(iVar1,ar5_00,ar6,ar7));
    if (ar4_00 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 7;
      iVar1 = -7;
    }
    else {
      ar6_00 = iVar1;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c23c814(ar4_00,*ar5,iVar1,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c1f9e32(ar4_00,iVar1,ar6_00,ar7); });
      iVar1 = 1;
      *ar5 = ar4_00;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c25a8c0\n.set FUN_8c25a8c0, FUN_8c25a8c0_def\n");

}
//@unit 8c25a914
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25a914_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a914");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c25a962(ar5,ar5,ar6,ar7));
  if (iVar2 < 0) {
    return iVar2;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c25ab74(ar5 + 1,*ar5,vr6,vr7));
  puVar1 = ((void *)(unsigned)0x8c20a7e0);
  if (iVar2 == 0) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(puVar1)))(vr4,vr5,vr6,vr7));
    } while (iVar2 != 0);
    return 1;
  }
  (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c20cf88(ar5 + 1,vr5,vr6,vr7));
  *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 8;
  return 0xfffffff8;
}

__asm__(".globl FUN_8c25a914\n.set FUN_8c25a914, FUN_8c25a914_def\n");

}
//@unit 8c25a918
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25a918_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25a918");
  return (unsigned)sh4_interp(0x8c25a918, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25a918\n.set FUN_8c25a918, FUN_8c25a918_def\n");
}
//@unit 8c25a962
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a962_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a962");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c233e10))))
                    (ar4 + 4,*(le<undefined4>* )(unsigned)(ar4 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x14),
                     *(le<uint>* )(unsigned)(ar4 + 4) >> 0x10));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  return 1;
}

__asm__(".globl FUN_8c25a962\n.set FUN_8c25a962, FUN_8c25a962_def\n");

}
//@unit 8c25a966
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a966_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25a966");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 8)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c233e10))))
                    (ar4 + 4,*(le<undefined4>* )(unsigned)(unaff_r14 + 0x10),*(le<undefined4>* )(unsigned)(unaff_r14 + 0x14),
                     *(le<uint>* )(unsigned)(unaff_r14 + 4) >> 0x10));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  return 1;
}

__asm__(".globl FUN_8c25a966\n.set FUN_8c25a966, FUN_8c25a966_def\n");

}
//@unit 8c25a9cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25a9cc_def(int ar4,int ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25a9cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint ar7_00;
  uint uVar4;
  uint ar6_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<undefined4>* )(unsigned)(ar4 + 0xc),*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    uVar2 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1);
    uVar3 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
  }
  else {
    uVar2 = *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1);
    uVar3 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1) + 10;
  }
  ar6_00 = 0;
  uVar4 = 0;
  if (ar6 <= uVar2) {
    uVar4 = uVar2 - ar6;
    if (ar7 <= uVar4) goto LAB_8c25aa36;
    ar7 = ar7 - uVar4;
  }
  ar6_00 = ar7;
  ar7 = uVar4;
  if (uVar3 < ar6_00) {
    ar6_00 = uVar3;
  }
LAB_8c25aa36:
  if (ar7 == 0) {
    if (ar6_00 == 0) {
      return 0;
    }
    iVar1 = (*(le<int>* )(unsigned)(ar4 + 0x1c) + ar6) - uVar2;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 0x1c) + ar6;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(iVar1,ar5,ar7,ar7_00));
    if (ar6_00 == 0) {
      return 0;
    }
    ar5 = ar5 + ar7;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(iVar1 + 0x800,ar5,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl FUN_8c25a9cc\n.set FUN_8c25a9cc, FUN_8c25a9cc_def\n");

}
//@unit 8c25aa80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25aa80_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25aa80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar6_00;
  int ar4_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(*(le<undefined4>* )(unsigned)(ar4 + 0xc),*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar1);
  }
  else {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar1) + 10;
  }
  ar4_00 = *(le<int>* )(unsigned)(ar4 + 0x1c);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4_00,ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4_00 + 0x800,ar5 + ar6_00,iVar1,ar7));
  return 0;
}

__asm__(".globl FUN_8c25aa80\n.set FUN_8c25aa80, FUN_8c25aa80_def\n");

}
//@unit 8c25ab02
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ab02_def(le<uint>* ar4,undefined4 ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c25ab02");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint ar6_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ar7 & 0xfffffffc;
  if (uVar2 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a9cc(ar4,ar5,ar6,ar7));
    }
    else {
      if ((*ar4 >> 0x10 & 0xff00) == (int)0x200) {
        iVar1 = 4;
      }
      else {
        iVar1 = 0;
      }
      uVar3 = (ar6 & 0xfffffffc) + iVar1;
      ar6_00 = ar4[5] - uVar3;
      if (ar4[5] <= uVar3) {
        return 7;
      }
      if (uVar2 < ar6_00) {
        ar6_00 = uVar2;
      }
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a8e0(uVar3 + ar4[7],ar5,ar6_00,ar7));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c25ab02\n.set FUN_8c25ab02, FUN_8c25ab02_def\n");

}
//@unit 8c25ab74
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ab74_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ab74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint ar4_00;
  uint ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25aa80(ar4,ar5,ar6,ar7));
  }
  else {
    if ((*ar4 >> 0x10 & 0xff00) == 0x200) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04(ar4[3],ar4[4],ar6,ar7));
      ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar1 * 4) + 4;
      ar4_00 = ar4[7] + 4;
    }
    else {
      ar4_00 = ar4[7];
      ar6_00 = ar4[5];
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4_00,ar5,ar6_00,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c25ab74\n.set FUN_8c25ab74, FUN_8c25ab74_def\n");

}
//@unit 8c25abf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<int>*  FUN_8c25abf0_def(undefined4 ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25abf0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0x54525650;
  puVar1 = ((void *)(unsigned)0x8c23c814);
  *ar5 = -1;
  do {
    iVar4 = *ar6;
    if (iVar4 == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar6 + 2,8,ar7));
      ar6 = ar6 + 4;
    }
    else {
      if (iVar4 != 0x58494247) {
        return (le<int>* )(unsigned)0;
      }
      uVar3 = ar6[1];
      *ar5 = ar6[2];
      ar6 = (le<int>* )(unsigned)((int)(ar6 + 2) + (uVar3 & 0xfffffffc));
    }
  } while (iVar4 != iVar2);
  return ar6;
}

__asm__(".globl FUN_8c25abf0\n.set FUN_8c25abf0, FUN_8c25abf0_def\n");

}
//@unit 8c25ac56
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ac56_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ac56");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c233e10))))
                    (ar4 + 0x18,(uint)*(le<ushort>* )(unsigned)(ar5 + 1),(uint)*(le<ushort>* )(unsigned)((int)ar5 + 6),*ar5));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 6;
    return 0xffffffff;
  }
  return 1;
}

__asm__(".globl FUN_8c25ac56\n.set FUN_8c25ac56, FUN_8c25ac56_def\n");

}
//@unit 8c25ac94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ac94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ac94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ab02(ar4 + 0x18,ar5,ar6,ar7));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 8;
    return 0xffffffff;
  }
  return 1;
}

__asm__(".globl FUN_8c25ac94\n.set FUN_8c25ac94, FUN_8c25ac94_def\n");

}
//@unit 8c25acc2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25acc2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25acc2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_r3 = 0;
  int unaff_r14 = 0;
  
  if (((in_r3 & *(le<uint>* )(unsigned)(unaff_r14 + 0x18)) == 0) &&
     ((*(le<uint>* )(unsigned)(unaff_r14 + 0x18) & 0x11000000) == 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20cc56(unaff_r14 + 0x18,ar5,ar6,ar7));
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277cd4) = *(le<int>* )(unsigned)(unaff_r14 + 0x34) + -4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20cc56(((undefined1 *)(unsigned)0x8c277cb8),ar5,ar6,ar7));
  }
  if (iVar1 == 0) {
    return 1;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 8;
  return 0xffffffff;
}

__asm__(".globl FUN_8c25acc2\n.set FUN_8c25acc2, FUN_8c25acc2_def\n");

}
//@unit 8c25ad0a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ad0a_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ad0a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (ar4 == 0) {
    return 0xffffffff;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25ad98(ar5,(*(le<uint>* )(unsigned)(ar4 + 0x34) | 0xa4000000) + ar6,ar7,ar7));
  return 1;
}

__asm__(".globl FUN_8c25ad0a\n.set FUN_8c25ad0a, FUN_8c25ad0a_def\n");

}
//@unit 8c25ad42
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ad42_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ad42");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a7e0(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    return 1;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c25ad42\n.set FUN_8c25ad42, FUN_8c25ad42_def\n");

}
//@unit 8c25ad98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ad98_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ad98");
  return (unsigned)sh4_interp(0x8c25ad98, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ad98\n.set FUN_8c25ad98, FUN_8c25ad98_def\n");
}
//@unit 8c25ae38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25ae38_def(le<uint>* ar4,le<uint>* ar5,le<undefined4>* ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("FUN_8c25ae38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)(ar4));
  (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(ar5));
  (*(le<unsigned>* )(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar6));
  (*(le<unsigned>* )(fr0_ - 0x18) = (unsigned)(unsigned long)(ar7));
  do {
    puVar1 = ((void *)(unsigned)0x8c259c48);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c259c48(&(*(le<int>* )(fr0_ - 0x2c)),4,ar6,ar7));
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    if ((*(le<int>* )(fr0_ - 0x2c)) == 0x54525650) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(le<undefined4>* )(fr0_ - 0x14)),0xc,ar6,ar7));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(le<undefined4>* )(fr0_ - 0x28)),4,ar6,ar7));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c25a122((*(le<undefined4>* )(fr0_ - 0x28)),1,ar6,ar7));
    }
    iVar2 = 0x8c4aa6ac;
  } while ((*(le<int>* )(fr0_ - 0x2c)) != 0x54525650);
  *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x18)) = (*(le<undefined4>* )(fr0_ - 0x14));
  *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24)) = (uint)(*(le<ushort>* )(fr0_ - 0xc));
  uVar3 = *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
  if ((((uVar3 == 8) || (uVar3 == 0x10)) || (uVar3 == 0x20)) ||
     (((uVar3 == 0x40 || (uVar3 == (int)0x80)) ||
      ((uVar3 == (int)0x100 || ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))
       ))))) {
    *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20)) = (uint)(*(le<ushort>* )(fr0_ - 0xa));
    uVar3 = *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20));
    if ((uVar3 == 8) ||
       (((((uVar3 == 0x10 || (uVar3 == 0x20)) || (uVar3 == 0x40)) ||
         ((uVar3 == (int)0x80 || (uVar3 == (int)0x100)))) ||
        ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))))) {
      *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x1c)) = (*(le<undefined4>* )(fr0_ - 0x10));
      return 1;
    }
  }
  *(le<undefined4>* )(unsigned)(iVar2 + 8) = 4;
  return 0xfffffffc;
}

__asm__(".globl FUN_8c25ae38\n.set FUN_8c25ae38, FUN_8c25ae38_def\n");

}
//@unit 8c25af3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25af3c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25af3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<uint>* )(fr0_ - 0x10)) = ar5;
  (*(le<undefined4>* )(fr0_ - 0xc)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25ae38(&(*(le<undefined4>* )(fr0_ - 0x18)),&(*(le<undefined4>* )(fr0_ - 0x14)),&(*(le<uint>* )(fr0_ - 0x1c)),ar6));
  if (iVar1 < 0) {
    return iVar1;
  }
  if (((*(le<uint>* )(fr0_ - 0x1c)) == (int)0xe00) && (((*(le<uint>* )(fr0_ - 0x10)) & 0x400000) != 0)) {
    (*(le<uint>* )(fr0_ - 0x1c)) = (*(le<uint>* )(fr0_ - 0x1c)) & 0xff | (int)0xf00;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c233e10(ar4 + 4,(*(le<undefined4>* )(fr0_ - 0x18)),(*(le<undefined4>* )(fr0_ - 0x14)),(*(le<uint>* )(fr0_ - 0x1c))));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  *(le<uint>* )(unsigned)(ar4 + 4) =
       *(le<uint>* )(unsigned)(ar4 + 4) | (*(le<uint>* )(fr0_ - 0x1c)) << 0x10 & 0xffff0000 | *(le<uint>* )(unsigned)(ar4 + 4) & 0xffff;
  return 1;
}

__asm__(".globl FUN_8c25af3c\n.set FUN_8c25af3c, FUN_8c25af3c_def\n");

}
//@unit 8c25afc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25afc0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25afc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  
  (*(le<int>* )(fr0_ - 0x10)) = ar4;
  (*(le<uint>* )(fr0_ - 0xc)) = ar5;
  (*(le<undefined4>* )(fr0_ - 0x8)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c25ae38(&(*(le<undefined4>* )(fr0_ - 0x18)),&(*(le<undefined4>* )(fr0_ - 0x14)),&(*(le<uint>* )(fr0_ - 0x1c)),ar6));
  if (iVar1 < 0) {
    return iVar1;
  }
  if (((*(le<uint>* )(fr0_ - 0x1c)) == (int)0xe00) && (((*(le<uint>* )(fr0_ - 0xc)) & 0x400000) != 0)) {
    (*(le<uint>* )(fr0_ - 0x1c)) = (*(le<uint>* )(fr0_ - 0x1c)) & 0xff | (int)0xf00;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2137c0((*(le<int>* )(fr0_ - 0x10)) + 4,(*(le<undefined4>* )(fr0_ - 0x18)),(*(le<undefined4>* )(fr0_ - 0x14)),(*(le<uint>* )(fr0_ - 0x1c))));
  if (iVar1 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4aa6b4 = 6;
    return 0xfffffffa;
  }
  return 1;
}

__asm__(".globl FUN_8c25afc0\n.set FUN_8c25afc0, FUN_8c25afc0_def\n");

}
//@unit 8c25b044
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b044");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  int ar7_00;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = *(le<int>* )(unsigned)(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b04) + ar4 * 0xc + 8);
  ar6_00 = *(le<int>* )(unsigned)(iVar2 + 0x24) + -1;
  ar7_00 = *(le<int>* )(unsigned)(iVar2 + 0x28) + -1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20bdc0(iVar2 + 0x18,uVar1,ar6_00,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa508) + -1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa50c) + -1));
  return uVar1;
}

__asm__(".globl FUN_8c25b044\n.set FUN_8c25b044, FUN_8c25b044_def\n");

}
//@unit 8c25b052
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b052_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b052");
  return (unsigned)sh4_interp(0x8c25b052, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b052\n.set FUN_8c25b052, FUN_8c25b052_def\n");
}
//@unit 8c25b08a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b08a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b08a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a536((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08),(*(le<undefined4>* )(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
  if (-1 < iVar1) {
    uVar2 = 0;
    iVar3 = iVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08);
    ar7_00 = *(le<int>* )(unsigned)(iVar3 + 0x28) + -1;
    iVar3 = *(le<int>* )(unsigned)(iVar3 + 0x24) + -1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,iVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20bdc0(iVar1 * 0x44 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b08) + 0x18,uVar2,iVar3,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa508) + -1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa50c) + -1));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c25b08a\n.set FUN_8c25b08a, FUN_8c25b08a_def\n");

}
//@unit 8c25b100
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b100_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b100");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c20c8e0)))(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c25b100\n.set FUN_8c25b100, FUN_8c25b100_def\n");

}
//@unit 8c25b10c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25b10c_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b10c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = (char)ar4;
  ar5[1] = (char)(ar4 >> 8);
  ar5[2] = (char)(ar4 >> 0x10);
  ar5[3] = (char)(ar4 >> 0x18);
  return ar4 >> 0x18;
}

__asm__(".globl FUN_8c25b10c\n.set FUN_8c25b10c, FUN_8c25b10c_def\n");

}
//@unit 8c25b124
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25b124_def(uint ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b124");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = (char)ar4;
  ar5[1] = (char)(ar4 >> 8);
  return ar4 >> 8;
}

__asm__(".globl FUN_8c25b124\n.set FUN_8c25b124, FUN_8c25b124_def\n");

}
//@unit 8c25b12e
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c25b12e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b12e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int a4;
  int a4_00;
  undefined1 *ar4_00;
  undefined1 *puVar6;
  
  iVar1 = (int)(int)0xffffff24;
  *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1 + 4) = ar5;
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20aacc((fr0_ + (int)0xffffffe4) + iVar1,ar5,ar6,ar7));
  iVar3 = 0x8c4aa70c;
  if (*(le<undefined4>* )(unsigned)0x8c4aa6f8 == *(le<int>* )(unsigned)((int)&s20 + iVar1)) {
    iVar3 = 0x8c4aa6e4;
  }
  a4 = *(le<int>* )(unsigned)(iVar3 + 0x10);
  a4_00 = *(le<int>* )(unsigned)(iVar3 + 0xc);
  ar4_00 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1 + 4));
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + 0xd0 + iVar1 + 4) = a4_00 * a4 * 3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20d082(ar4_00,iVar3,ar6,ar7));
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124((int)0x4d42,ar4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(*(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + 0xd0 + iVar1 + 4),ar4 + 2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0x36,ar4 + 10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0x28,ar4 + 0xe,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(a4_00,ar4 + 0x12,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(a4,ar4 + 0x16,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124(1,ar4 + 0x1a,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124(0x18,ar4 + 0x1c,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x1e,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x22,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x26,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x2a,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x2e,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x32,ar6,ar7));
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4aa4e8;
    iVar4 = a4 + -1;
    if (iVar3 == 0) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 0;
    }
    else if (iVar3 == 1) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 1;
    }
    else {
      if (iVar3 != 3) {
        if (iVar3 == 4) {
          iVar3 = a4_00 * iVar4;
          for (; -1 < iVar4; iVar4 = iVar4 + -1) {
            iVar1 = 0;
            puVar5 = (undefined1 *)(unsigned)(iVar3 * 3 + ar4 + 0x36);
            if (0 < a4_00) {
              do {
                iVar1 = iVar1 + 1;
                *puVar5 = *ar4_00;
                puVar6 = ar4_00 + 2;
                puVar5[1] = ar4_00[1];
                ar4_00 = ar4_00 + 3;
                puVar5[2] = *puVar6;
                puVar5 = puVar5 + 3;
              } while (iVar1 < a4_00);
            }
            iVar3 = iVar3 - a4_00;
          }
          return 4;
        }
        if (iVar3 != 5) {
          return iVar3;
        }
        iVar3 = a4_00 * iVar4;
        for (; -1 < iVar4; iVar4 = iVar4 + -1) {
          iVar1 = 0;
          puVar5 = (undefined1 *)(unsigned)(iVar3 * 3 + ar4 + 0x36);
          if (0 < a4_00) {
            do {
              iVar1 = iVar1 + 1;
              *puVar5 = *ar4_00;
              puVar5[1] = ar4_00[1];
              puVar5[2] = ar4_00[2];
              ar4_00 = ar4_00 + 4;
              puVar5 = puVar5 + 3;
            } while (iVar1 < a4_00);
          }
          iVar3 = iVar3 - a4_00;
        }
        return 5;
      }
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 3;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20de80(ar4 + 0x36,ar4_00,a4_00,a4));
  }
  return uVar2;
}

__asm__(".globl FUN_8c25b12e\n.set FUN_8c25b12e, FUN_8c25b12e_def\n");

}
//@unit 8c25b334
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b334_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b334");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = 0x8c4aa6d0;
  *(le<undefined4>* )(unsigned)0x8c4aa6cc = ar4;
  *puVar1 = ar5 & 0xfffff800;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c25b334\n.set FUN_8c25b334, FUN_8c25b334_def\n");

}
//@unit 8c25b34a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c25b34a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b34a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c25a33c(ar4,ar5,ar6,ar7); });
  (*(undefined1 *)(unsigned)0x8c4aa5a8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b24) = 2;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b28) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab10c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab110) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab114) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab118) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab11c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab120) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab124) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab128) = 0;
  return ((le<undefined4>* )(unsigned)0x8c277b28);
}

__asm__(".globl FUN_8c25b34a\n.set FUN_8c25b34a, FUN_8c25b34a_def\n");

}
//@unit 8c25b37c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b37c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b37c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2566c8(ar4,ar5,ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2565c4(ar4,ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab10c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab110) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab114) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab118) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab11c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab120) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab124) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4ab128) = 0;
  return uVar1;
}

__asm__(".globl FUN_8c25b37c\n.set FUN_8c25b37c, FUN_8c25b37c_def\n");

}
//@unit 8c25b3a2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b3a2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b3a2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25b5b4(ar4,ar5,ar6,ar7); });
  if (*(le<int>* )(unsigned)(ar4 + 4) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6b4) = 1;
    ar5_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac);
LAB_8c25b3d2:
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa6ac) = ar5_00;
    uVar2 = 0xffffffff;
  }
  else {
    for (ar5_00 = 0; ar5_00 < *(le<uint>* )(unsigned)(ar4 + 4); ar5_00 = ar5_00 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c23793c(ar4,ar5_00,ar6,ar7));
      if (iVar1 < 0) goto LAB_8c25b3d2;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c25b3a2\n.set FUN_8c25b3a2, FUN_8c25b3a2_def\n");

}
//@unit 8c25b3ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b3ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b3ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if (ar4 == 0) {
    return 0xffffffff;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b04) = ar4;
  return 1;
}

__asm__(".globl FUN_8c25b3ec\n.set FUN_8c25b3ec, FUN_8c25b3ec_def\n");

}
//@unit 8c25b434
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b434_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  le<int>* ar5_00;
  
  ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c277b04) + ar4 * 0xc + 8));
  if (!ar5_00) return 0;
  if ((*ar5_00 != (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10)) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14) != ar5_00[1])) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b10) = *ar5_00;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b14) = ar5_00[1];
    *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x98) =
         *(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x98) & 0xffffffc0 | ar5_00[2] & 0x3fU;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c277b1c) = (uint)ar5_00[6] >> 0x10;
    *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc) + 0x9c) = ar5_00[3];
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20fe00((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aabbc),ar5_00,ar6,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c25b434\n.set FUN_8c25b434, FUN_8c25b434_def\n");

}
//@unit 8c25b440
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b440_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b440");
  return (unsigned)sh4_interp(0x8c25b440, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b440\n.set FUN_8c25b440, FUN_8c25b440_def\n");
}
//@unit 8c25b49e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b49e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b49e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  
  if (ar4 == 2) {
    return *(le<undefined4>* )(unsigned)0x8c4aa6a8;
  }
  (*(le<int>* )(fr0_ - 0x8)) = ar4;
  (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c20cfe0(&(*(le<undefined4>* )(fr0_ - 0x10)),&(*(le<undefined4>* )(fr0_ - 0xc)),ar6,ar7));
  if ((*(le<int>* )(fr0_ - 0x8)) == 0) {
    return (*(le<undefined4>* )(fr0_ - 0x10));
  }
  return (*(le<undefined4>* )(fr0_ - 0xc));
}

__asm__(".globl FUN_8c25b49e\n.set FUN_8c25b49e, FUN_8c25b49e_def\n");

}
//@unit 8c25b4da
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b4da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b4da");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c010998(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c25b4da\n.set FUN_8c25b4da, FUN_8c25b4da_def\n");

}
//@unit 8c25b4ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c25b4ea_def(le<uint>* ar4,le<uint>* ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b4ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar7_00;
  le<uint>* puVar2;
  le<uint>* ar5_00;
  le<uint>* puVar3;
  le<uint>* puVar4;
  le<uint>* puVar5;
  le<uint>* ar4_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20d114(ar4,ar5,ar6,ar7));
  puVar4 = ar4;
  puVar5 = ar4;
  ar4_00 = ar4;
  for (puVar3 = (le<uint>* )(unsigned)0x0; puVar3 < ar5; puVar3 = (le<uint>* )(unsigned)((int)puVar3 + 1)) {
    ar7_00 = ar4[(int)puVar3 * 0x11];
    uVar1 = ar7_00;
    if ((ar7_00 != 0xffffffff) && (uVar1 = (ar4 + (int)puVar3 * 0x11)[4], (uVar1 & 2) != 0)) {
      if ((puVar5[4] & 8) != 0) {
        uVar1 = puVar4[0xd];
        ar6 = (le<uint>* )(unsigned)0x0;
        puVar2 = ar4;
        ar5_00 = ar4;
        if (ar5 != (le<uint>* )(unsigned)0x0) {
          do {
            ar6 = (le<uint>* )(unsigned)((int)ar6 + 1);
            if (ar7_00 == *ar5_00) {
              puVar2[0xd] = uVar1;
            }
            puVar2 = puVar2 + 0x11;
            ar5_00 = ar5_00 + 0x11;
          } while (ar6 < ar5);
        }
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2571fe(ar4_00,ar5_00,ar6,ar7_00));
    }
    puVar4 = puVar4 + 0x11;
    puVar5 = puVar5 + 0x11;
    ar4_00 = ar4_00 + 0x11;
  }
  return uVar1;
}

__asm__(".globl FUN_8c25b4ea\n.set FUN_8c25b4ea, FUN_8c25b4ea_def\n");

}
//@unit 8c25b5b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25b5b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b5b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = 0x8c4aa6ac;
  *(le<undefined4>* )(unsigned)0x8c4aa6ac = 0xffffffff;
  puVar1[1] = 0xffffffff;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c25b5b4\n.set FUN_8c25b5b4, FUN_8c25b5b4_def\n");

}
//@unit 8c25b5d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b5d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b5d0");
  return (unsigned)sh4_interp(0x8c25b5d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b5d0\n.set FUN_8c25b5d0, FUN_8c25b5d0_def\n");
}
//@unit 8c25b638
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned noop_25b638_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("noop_25b638");
  return (unsigned)sh4_interp(0x8c25b638, ar4, ar5, ar6, ar7);
}
__asm__(".globl noop_25b638\n.set noop_25b638, noop_25b638_def\n");
}
//@unit 8c25b650
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b650_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b650");
  return (unsigned)sh4_interp(0x8c25b650, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b650\n.set FUN_8c25b650, FUN_8c25b650_def\n");
}
//@unit 8c25b6c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b6c6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b6c6");
  return (unsigned)sh4_interp(0x8c25b6c6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b6c6\n.set FUN_8c25b6c6, FUN_8c25b6c6_def\n");
}
//@unit 8c25b858
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25b858_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25b858");
  return (unsigned)sh4_interp(0x8c25b858, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25b858\n.set FUN_8c25b858, FUN_8c25b858_def\n");
}
//@unit 8c25bc88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25bc88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25bc88");
  return (unsigned)sh4_interp(0x8c25bc88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25bc88\n.set FUN_8c25bc88, FUN_8c25bc88_def\n");
}
//@unit 8c25bd0a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25bd0a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25bd0a");
  return (unsigned)sh4_interp(0x8c25bd0a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25bd0a\n.set FUN_8c25bd0a, FUN_8c25bd0a_def\n");
}
//@unit 8c25bed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25bed8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25bed8");
  return (unsigned)sh4_interp(0x8c25bed8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25bed8\n.set FUN_8c25bed8, FUN_8c25bed8_def\n");
}
//@unit 8c25c3a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25c3a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25c3a4");
  return (unsigned)sh4_interp(0x8c25c3a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25c3a4\n.set FUN_8c25c3a4, FUN_8c25c3a4_def\n");
}
//@unit 8c25c3d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25c3d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25c3d0");
  return (unsigned)sh4_interp(0x8c25c3d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25c3d0\n.set FUN_8c25c3d0, FUN_8c25c3d0_def\n");
}
//@unit 8c25c4d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25c4d2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25c4d2");
  return (unsigned)sh4_interp(0x8c25c4d2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25c4d2\n.set FUN_8c25c4d2, FUN_8c25c4d2_def\n");
}
//@unit 8c25c868
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25c868_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25c868");
  return (unsigned)sh4_interp(0x8c25c868, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25c868\n.set FUN_8c25c868, FUN_8c25c868_def\n");
}
//@unit 8c25c9d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25c9d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25c9d8");
  return (unsigned)sh4_interp(0x8c25c9d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25c9d8\n.set FUN_8c25c9d8, FUN_8c25c9d8_def\n");
}
//@unit 8c25cddc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25cddc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25cddc");
  return (unsigned)sh4_interp(0x8c25cddc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25cddc\n.set FUN_8c25cddc, FUN_8c25cddc_def\n");
}
//@unit 8c25ce48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ce48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ce48");
  return (unsigned)sh4_interp(0x8c25ce48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ce48\n.set FUN_8c25ce48, FUN_8c25ce48_def\n");
}
//@unit 8c25ce80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25ce80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ce80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) * 4) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa060) * 4)
          + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) * 4) +
          *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa068) * 4) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa06c) * 4))
         * ar4 * 4;
}

__asm__(".globl FUN_8c25ce80\n.set FUN_8c25ce80, FUN_8c25ce80_def\n");

}
//@unit 8c25cebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25cebc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25cebc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint a6;
  int iVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  iVar4 = ar6 * 0x20;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
            ((int)0x124,*(le<undefined4>* )(unsigned)(0x8c4aa024 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x12c,*(le<undefined4>* )(unsigned)(0x8c4aa028 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x128,*(le<undefined4>* )(unsigned)(0x8c4aa030 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x130,*(le<undefined4>* )(unsigned)(0x8c4aa034 + iVar4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x13c,(ar5 + -1) * 0x10000 + ar4 + -1,ar6,ar7));
  uVar3 = *(le<undefined4>* )(unsigned)0x8c4aa05c & 3 | (*(le<undefined4>* )(unsigned)0x8c4aa060 & 3) << 4 | (*(le<undefined4>* )(unsigned)0x8c4aa064 & 3) << 8 |
          (*(le<undefined4>* )(unsigned)0x8c4aa068 & 3) << 0xc;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    a6 = (*(le<undefined4>* )(unsigned)0x8c4aa058 & 1) << 0x14;
    uVar3 = uVar3 | a6 | (*(le<undefined4>* )(unsigned)0x8c4aa06c & 3) << 0x10;
  }
  else {
    a6 = (*(le<undefined4>* )(unsigned)0x8c4aa058 & 1) << 0x10;
    uVar3 = uVar3 | a6;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x140,uVar3,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x144,0x80000000,a6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c25cebc\n.set FUN_8c25cebc, FUN_8c25cebc_def\n");

}
//@unit 8c25cfc2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25cfc2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25cfc2");
  return (unsigned)sh4_interp(0x8c25cfc2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25cfc2\n.set FUN_8c25cfc2, FUN_8c25cfc2_def\n");
}
//@unit 8c25d028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25d028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<undefined4>* )(fr0_ - 0x1c)) = 0x10000000;
  (*(le<undefined4>* )(fr0_ - 0x18)) = 0x80000000;
  (*(le<undefined4>* )(fr0_ - 0x14)) = 0x80000000;
  (*(le<undefined4>* )(fr0_ - 0x10)) = 0x80000000;
  (*(le<undefined4>* )(fr0_ - 0xc)) = 0x80000000;
  (*(le<undefined4>* )(fr0_ - 0x8)) = 0x80000000;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20a87c(ar4,&(*(le<undefined4>* )(fr0_ - 0x1c)),0x18,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c25d028\n.set FUN_8c25d028, FUN_8c25d028_def\n");

}
//@unit 8c25d0a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c25d0a0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d0a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 216; for (int i_ = 0; i_ < 216; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  le<undefined4>* extraout_r2 = 0;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  le<undefined4>* extraout_r3 = 0;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  le<uint>* a5;
  uint uVar18;
  int iVar19;
  uint n;
  bool bVar20;
  uint uVar21;
  
  bVar1 = false;
  bVar20 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d70) == 1;
  iVar17 = ar5;
  uVar18 = ar6;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) == 0) {
    uVar18 = (*(le<uint>* )(fr0_ + 0x00000000));
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25cebc(ar4,ar5,(*(le<uint>* )(fr0_ + 0x00000000)),ar7));
  }
  uVar21 = ar4 * ar5;
  iVar19 = (*(le<uint>* )(fr0_ + 0x00000000)) * 0x20;
  (*(le<int>* )(fr0_ - 0xd8)) = ar6 * uVar21 * 0x18 + *(le<int>* )(unsigned)(iVar19 + -0x73b55fe4);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x20) != 0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa010) != 0)) {
    iVar17 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa018) + iVar19);
    (*(le<uint>* )(fr0_ - 0xcc)) = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25cfc2(*(le<int>* )(unsigned)(iVar19 + -0x73b55fe4) + uVar21 * 0x60,iVar17,uVar18,ar7));
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) == 0) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) != 0 && (bVar20 != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
  }
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x80) != 0) {
    (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c25d028((*(le<int>* )(fr0_ - 0xd8)),iVar17,uVar18,ar7));
    (*(le<int>* )(fr0_ - 0xd8)) = (*(le<int>* )(fr0_ - 0xd8)) + 0x18;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) == 0) {
    (*(le<uint>* )(fr0_ - 0x98)) = 0x80000000;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x98)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa060) == 0) {
    (*(le<uint>* )(fr0_ - 0x94)) = 0x80000000;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x94)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) == 0) {
    (*(le<uint>* )(fr0_ - 0x90)) = 0x80000000;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x90)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa068) == 0) {
    (*(le<uint>* )(fr0_ - 0x84)) = 0x80000000;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x84)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa06c) == 0) {
    (*(le<uint>* )(fr0_ - 0x88)) = 0x80000000;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x88)) = 0;
  }
  iVar7 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) * 4);
  iVar9 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa060) * 4);
  iVar10 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) * 4);
  iVar11 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa068) * 4);
  iVar12 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa06c) * 4);
  iVar19 = *(le<int>* )(unsigned)(iVar19 + -0x73b55fdc);
  iVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) * 4) * uVar21 * 4 + iVar19;
  iVar5 = iVar4 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa060) * 4) * uVar21 * 4;
  iVar6 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) * 4) * uVar21 * 4 + iVar5;
  iVar17 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa068) * 4;
  n = 0;
  iVar13 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c277d80) + iVar17);
  uVar18 = (uint)bVar20 << 0x1d;
  (*(le<uint>* )(fr0_ - 0xd4)) = ar6;
  if (uVar21 != 0) {
    do {
      uVar16 = 0;
      if ((*(le<int>* )(fr0_ + 0x00000004)) == 0) {
        (*(le<uint>* )(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_01051c(n,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c),vr6,vr7));
        (*(le<uint>* )(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_0106dc(n,(*(le<unsigned>* )(unsigned)0x8c4aa00c),vr6,vr7));
      }
      else if ((*(le<int>* )(fr0_ + 0x00000004)) == 1) {
        (*(le<uint>* )(fr0_ - 0xd4)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_0106dc(n,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008),vr6,vr7));
        (*(le<uint>* )(fr0_ - 0xd0)) = (vsp = ((unsigned long)(fr0_ - 216)), libgcc_divide_helper_01051c(n,(*(le<unsigned>* )(unsigned)0x8c4aa008),vr6,vr7));
      }
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d74) == 1) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d78) < (*(le<uint>* )(fr0_ - 0xd4)) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d7c) < (*(le<uint>* )(fr0_ - 0xd0)))))) {
        uVar16 = 0x80000000;
      }
      uVar2 = ((*(le<uint>* )(fr0_ - 0xd0)) & 0x3f) << 8;
      iVar17 = (*(le<uint>* )(fr0_ - 0xd0)) * (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008) + (*(le<uint>* )(fr0_ - 0xd4));
      uVar3 = ((*(le<uint>* )(fr0_ - 0xd4)) & 0x3f) << 2;
      uVar14 = (uint)(n == uVar21 - 1) << 0x1f | uVar2 | uVar3;
      ((le<uint>* )(fr0_ - 0x50))[6] = uVar14 | uVar18;
      (*(le<uint>* )(fr0_ - 0x34)) = iVar7 * 4 * iVar17 + iVar19 | (*(le<uint>* )(fr0_ - 0x98)) | uVar16;
      uVar8 = iVar9 * 4 * iVar17 + iVar4 | (*(le<uint>* )(fr0_ - 0x94)) | uVar16;
      uVar15 = iVar10 * 4 * iVar17 + iVar5 | (*(le<uint>* )(fr0_ - 0x90)) | uVar16;
      (*(le<uint>* )(fr0_ - 0x28)) = iVar11 * 4 * iVar17 + iVar6 | (*(le<uint>* )(fr0_ - 0x84)) | uVar16;
      (*(le<uint>* )(fr0_ - 0x24)) = uVar15;
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c277d90) == 0) {
        (*(le<uint>* )(fr0_ - 0x24)) = iVar12 * 4 * iVar17 + iVar6 + iVar13 * uVar21 * 4 | (*(le<uint>* )(fr0_ - 0x88)) | uVar16;
      }
      (*(le<uint>* )(fr0_ - 0x30)) = uVar8;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d80) != 0) && ((*(le<uint>* )(fr0_ - 0x30)) = (*(le<uint>* )(fr0_ - 0x28)), (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d84) == 1)) {
        (*(le<uint>* )(fr0_ - 0x30)) = uVar8;
        (*(le<uint>* )(fr0_ - 0x28)) = uVar8;
      }
      (*(le<uint>* )(fr0_ - 0x2c)) = uVar15;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x20) == 0) {
        iVar17 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(n * 0x18 + (*(le<int>* )(fr0_ - 0xd8)),((le<uint>* )(fr0_ - 0x50)) + 6,0x18,ar7));
      }
      else {
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa010) == 0) {
          ((le<uint>* )(fr0_ - 0x50))[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          ((le<uint>* )(fr0_ - 0x50))[0] = uVar14 | uVar18 | 0x40000000;
          ((le<uint>* )(fr0_ - 0x50))[1] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[2] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[3] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[4] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[5] = 0x80000000;
          iVar17 = n * 0x30 + (*(le<int>* )(fr0_ - 0xd8));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,((le<uint>* )(fr0_ - 0x50)) + 6,0x18,ar7));
          iVar17 = iVar17 + 0x18;
          a5 = ((le<uint>* )(fr0_ - 0x50));
        }
        else {
          ((le<uint>* )(fr0_ - 0x50))[6] = uVar2 | uVar3 | uVar18 | 0x10000000;
          ((le<uint>* )(fr0_ - 0x80))[6] = uVar2 | uVar3 | uVar18 | 0x50000000;
          ((le<uint>* )(fr0_ - 0x80))[0] = uVar14 | uVar18 | 0x40000000;
          ((le<uint>* )(fr0_ - 0x50))[0] = uVar2 | uVar3 | 0x50000000;
          if (bVar1) {
            (*(le<uint>* )(fr0_ - 0x34)) = (*(le<uint>* )(fr0_ - 0xcc));
          }
          ((le<uint>* )(fr0_ - 0x50))[1] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[2] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[3] = (*(le<uint>* )(fr0_ - 0xcc));
          ((le<uint>* )(fr0_ - 0x50))[4] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x50))[5] = 0x80000000;
          (*(le<undefined4>* )(fr0_ - 0x64)) = 0x80000000;
          (*(le<undefined4>* )(fr0_ - 0x60)) = 0x80000000;
          (*(le<uint>* )(fr0_ - 0x58)) = (*(le<uint>* )(fr0_ - 0x28));
          (*(le<undefined4>* )(fr0_ - 0x54)) = 0x80000000;
          (*(le<uint>* )(fr0_ - 0x2c)) = 0x80000000;
          (*(le<uint>* )(fr0_ - 0x28)) = 0x80000000;
          ((le<uint>* )(fr0_ - 0x80))[1] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x80))[2] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x80))[3] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x80))[4] = 0x80000000;
          ((le<uint>* )(fr0_ - 0x80))[5] = 0x80000000;
          iVar17 = n * 0x60 + (*(le<int>* )(fr0_ - 0xd8));
          (*(le<uint>* )(fr0_ - 0x5c)) = uVar15;
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,((le<uint>* )(fr0_ - 0x50)) + 6,0x18,ar7));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17 + 0x18,((le<uint>* )(fr0_ - 0x50)),0x18,ar7));
          (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17 + 0x30,((le<uint>* )(fr0_ - 0x80)) + 6,0x18,ar7));
          a5 = ((le<uint>* )(fr0_ - 0x80));
          iVar17 = iVar17 + 0x48;
        }
        iVar17 = (vsp = ((unsigned long)(fr0_ - 216)), FUN_8c20a87c(iVar17,a5,0x18,ar7));
      }
      n = n + 1;
    } while (n < uVar21);
  }
  return iVar17;
}

__asm__(".globl FUN_8c25d0a0\n.set FUN_8c25d0a0, FUN_8c25d0a0_def\n");

}
//@unit 8c25d780
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<uint>*  FUN_8c25d780_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  le<uint>* puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6,ar7));
  ar5_00 = 0;
  ar4_00 = 8;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), sh4_dmac_202e20(ar4_00,ar5_00,ar6,ar7));
  puVar1 = 0x8c4a9ff4;
  *(le<undefined4>* )(unsigned)0x8c4a9ff4 = 0x800000;
  puVar2 = 0x8c4a9ffc;
  *(le<undefined4>* )(unsigned)0x8c4a9ffc = 0x600000;
  puVar1[3] = *puVar2;
  puVar2[7] = *(le<undefined4>* )(unsigned)0x8c4a9ff4 >> 1;
  puVar2[0xf] = 0;
  *(le<undefined4>* )(unsigned)0x8c4aa058 = 1;
  return puVar2 + 7;
}

__asm__(".globl FUN_8c25d780\n.set FUN_8c25d780, FUN_8c25d780_def\n");

}
//@unit 8c25d7c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25d7c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25d7c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  le<uint>* puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  *(le<undefined4>* )(unsigned)0x8c4a9c14 = s0;
  puVar1 = 0x8c4aa058;
  *(le<undefined4>* )(unsigned)0x8c4aa058 = (0x10000 & s0) >> 0x10;
  puVar2 = 0x8c4aa05c;
  *(le<undefined4>* )(unsigned)0x8c4aa05c = (0x60000 & s0) >> 0x11;
  puVar1[2] = (0x180000 & s0) >> 0x13;
  puVar2[2] = (0x600000 & s0) >> 0x15;
  puVar1[4] = (0x1800000 & s0) >> 0x17;
  puVar2[4] = (s0 & 0x6000000) >> 0x19;
  puVar1[-0x18] = (puVar1[-0x15] >> 2) * 3;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25ce80(puVar2[-0x15] * *(le<undefined4>* )(unsigned)0x8c4aa00c,1,ar6,ar7));
  iVar10 = (int)(int)0xffffff00;
  iVar7 = 0;
  iVar11 = 0;
  iVar8 = 0;
  iVar9 = 0;
  do {
    iVar12 = iVar11 * 0x20;
    *(le<int>* )(unsigned)(0x8c4aa018 + 4 + iVar12) = *(le<int>* )(unsigned)(0x8c4aa018 + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa004;
    iVar4 = 0x8c4aa01c;
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x20) == 0) {
      *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) =
           *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<int>* )(unsigned)(0x8c4aa01c + -0x10) * -0x18;
    }
    else {
      if (*(le<undefined4>* )(unsigned)0x8c4aa010 == 0) {
        iVar6 = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) +
                *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<int>* )(unsigned)(0x8c4aa01c + -0x10) * -0x30;
        iVar4 = 0x8c4aa01c;
      }
      else {
        *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + -0x44;
        iVar6 = *(le<int>* )(unsigned)(iVar4 + iVar12) + *(le<undefined4>* )(unsigned)0x8c4aa008 * *(le<undefined4>* )(unsigned)0x8c4aa00c * -0x60;
      }
      *(le<int>* )(unsigned)(iVar4 + iVar12) = iVar6;
    }
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x80) != 0) {
      *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar12) + -0x18;
    }
    iVar4 = 0x8c4aa01c;
    if (*(le<undefined4>* )(unsigned)0x8c4aa058 == 0) {
      *(le<uint>* )(unsigned)(0x8c4aa024 + iVar7) = *(le<int>* )(unsigned)(0x8c4aa018 + iVar7) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 & 0xffffffe0;
      iVar4 = 0x8c4aa01c;
      *(le<uint>* )(unsigned)(0x8c4aa01c + 0xc + iVar7) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar7) - iVar3 & 0xffffff80;
      *(le<int>* )(unsigned)(iVar4 + 0x10 + iVar7) = *(le<int>* )(unsigned)(iVar4 + 8 + iVar7) + iVar3;
    }
    else {
      *(le<uint>* )(unsigned)(0x8c4aa01c + 8 + iVar8) = *(le<int>* )(unsigned)(0x8c4aa01c + iVar8) - iVar3 & 0xffffff80;
      *(le<uint>* )(unsigned)(iVar4 + 0xc + iVar8) = *(le<int>* )(unsigned)(iVar4 + -4 + iVar8) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 & 0xffffffe0;
      *(le<undefined4>* )(unsigned)(iVar4 + 0x10 + iVar8) = *(le<undefined4>* )(unsigned)(iVar4 + 8 + iVar8);
    }
    iVar4 = 0x8c4aa018;
    *(le<undefined4>* )(unsigned)(0x8c4aa018 + 0x18 + iVar9) = *(le<undefined4>* )(unsigned)(0x8c4aa018 + iVar9);
    *(le<int>* )(unsigned)(iVar4 + 0x1c + iVar9) = *(le<int>* )(unsigned)(iVar4 + iVar9) + *(le<undefined4>* )(unsigned)0x8c4a9ff8 + iVar10;
    iVar11 = iVar11 + 1;
    iVar9 = iVar9 + 0x20;
    iVar8 = iVar8 + 0x20;
    iVar7 = iVar7 + 0x20;
  } while (iVar11 < 2);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(le<undefined4>* )(unsigned)0x8c4aa008,*(le<undefined4>* )(unsigned)0x8c4aa00c,0,1));
  uVar5 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25d0a0(*(le<undefined4>* )(unsigned)0x8c4aa008,*(le<undefined4>* )(unsigned)0x8c4aa00c,0,1));
  return uVar5;
}

__asm__(".globl FUN_8c25d7c6\n.set FUN_8c25d7c6, FUN_8c25d7c6_def\n");

}
//@unit 8c25da4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25da4c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25da4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c25da4c\n.set FUN_8c25da4c, FUN_8c25da4c_def\n");

}
//@unit 8c25dac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25dac0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25dac0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)0x7ff;
  *(le<undefined4>* )(unsigned)0x8c4a9e60 = (*(le<uint>* )(fr0_ + 0x00000058)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000054)) & uVar2) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e64 = (*(le<uint>* )(fr0_ + 0x00000060)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x0000005c)) & uVar2) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e68 =
       (*(le<uint>* )(fr0_ + 0x00000048)) & 0xf | ((*(le<uint>* )(fr0_ + 0x0000004c)) & 0x1f) << 4 | ((*(le<uint>* )(fr0_ + 0x00000050)) & 0xf) << 9;
  *(le<undefined4>* )(unsigned)0x8c4a9bec = (*(le<uint>* )(fr0_ + 0x00000000));
  *(le<undefined4>* )(unsigned)0x8c4a9bf0 = (*(le<uint>* )(fr0_ + 0x00000004));
  uVar2 = (uint)0x3ff;
  uVar3 = ((*(le<uint>* )(fr0_ + 0x00000008)) & uVar2) << 0x14;
  if (*(le<undefined4>* )(unsigned)0x8c4a9c00 < 1) {
    *(le<undefined4>* )(unsigned)0x8c4a9e6c = (*(le<uint>* )(fr0_ + 0x00000000)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000004)) & uVar2) << 10 | uVar3;
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4a9e6c =
         (*(le<uint>* )(fr0_ + 0x00000000)) & uVar2 | ((*(le<uint>* )(fr0_ + 0x00000004)) - *(le<undefined4>* )(unsigned)0x8c4a9c00 & uVar2) << 10 | uVar3;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9ea8 = (*(le<uint>* )(fr0_ + 0x00000014)) & 0xff | ((*(le<uint>* )(fr0_ + 0x00000018)) & 0xff) << 8;
  puVar1 = 0x8c4a9eac;
  *(le<undefined4>* )(unsigned)0x8c4a9eac =
       (*(le<uint>* )(fr0_ + 0x00000010)) & 0xffff | ((*(le<uint>* )(fr0_ + 0x0000000c)) & 1) << 0x10 |
       ((*(le<uint>* )(fr0_ + 0x0000001c)) & 1) << 0x12;
  puVar1[-0xf] = (*(le<uint>* )(fr0_ + 0x00000044)) & (int)0x1ff;
  *(le<undefined4>* )(unsigned)0x8c4a9e78 =
       (*(le<uint>* )(fr0_ + 0x00000030)) & 7 | ((*(le<uint>* )(fr0_ + 0x0000002c)) & 1) << 3 | ((*(le<uint>* )(fr0_ + 0x00000034)) & 0xff) << 8 |
       ((*(le<uint>* )(fr0_ + 0x00000038)) & 0xff) << 0x10;
  *(le<undefined4>* )(unsigned)0x8c4a9e74 =
       (*(le<uint>* )(fr0_ + 0x00000020)) & 1 | ((*(le<uint>* )(fr0_ + 0x00000028)) & 1) << 1 | ((*(le<uint>* )(fr0_ + 0x0000003c)) & 3) << 2 |
       ((*(le<uint>* )(fr0_ + 0x00000040)) & 7) << 4 | (uint)(*(byte *)(fr0_ + 0x00000070)) << 8 |
       ((*(le<uint>* )(fr0_ + 0x00000068)) & 0x1f) << 0x10 | ((*(le<uint>* )(fr0_ + 0x00000064)) & 1) << 0x16 |
       ((*(le<uint>* )(fr0_ + 0x0000006c)) & 1) << 0x17;
  return 0x6c;
}

__asm__(".globl FUN_8c25dac0\n.set FUN_8c25dac0, FUN_8c25dac0_def\n");

}
//@unit 8c25dc60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25dc60_def(int ar4,uint ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c25dc60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 364; for (int i_ = 0; i_ < 364; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint d;
  undefined4 a6;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  int n;
  
  ((le<int>* )(fr0_ - 0xac))[0] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c271fd0);
  ((le<int>* )(fr0_ - 0xac))[1] = (*(undefined1 *)(unsigned)0x8c271fd4);
  ((le<int>* )(fr0_ - 0xac))[2] = (*(undefined1 *)(unsigned)0x8c271fd8);
  ((le<int>* )(fr0_ - 0xac))[3] = (*(undefined1 *)(unsigned)0x8c271fdc);
  (*(le<undefined4>* )(fr0_ - 0x9c)) = (*(undefined1 *)(unsigned)0x8c271fe0);
  (*(le<undefined4>* )(fr0_ - 0x98)) = (*(undefined1 *)(unsigned)0x8c271fe4);
  ((le<undefined4>* )(fr0_ - 0xc0))[0] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c271fe8);
  ((le<undefined4>* )(fr0_ - 0xc0))[1] = (*(undefined1 *)(unsigned)0x8c271fec);
  ((le<undefined4>* )(fr0_ - 0xc0))[2] = (*(undefined1 *)(unsigned)0x8c271ff0);
  ((le<undefined4>* )(fr0_ - 0xc0))[3] = (*(undefined1 *)(unsigned)0x8c271ff4);
  (*(le<undefined4>* )(fr0_ - 0xb0)) = (*(undefined1 *)(unsigned)0x8c271ff8);
  ((le<undefined4>* )(fr0_ - 0xd4))[0] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c271ffc);
  ((le<undefined4>* )(fr0_ - 0xd4))[1] = (*(undefined1 *)(unsigned)0x8c272000);
  ((le<undefined4>* )(fr0_ - 0xd4))[2] = (*(undefined1 *)(unsigned)0x8c272004);
  ((le<undefined4>* )(fr0_ - 0xd4))[3] = (*(undefined1 *)(unsigned)0x8c272008);
  (*(le<undefined4>* )(fr0_ - 0xc4)) = (*(undefined1 *)(unsigned)0x8c27200c);
  iVar6 = ((le<int>* )(fr0_ - 0xac))[ar6];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8) = ar5;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) != 1) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0x20)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8) = ar5 >> 1;
  }
  if (((*(le<int>* )(fr0_ + 0x00000004)) == 0) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) != 0)) {
    (*(le<int>* )(fr0_ - 0xdc)) = 1;
  }
  else {
    (*(le<int>* )(fr0_ - 0xdc)) = 2;
  }
  (*(le<undefined4>* )(fr0_ - 0x74)) = 1;
  (*(le<undefined4>* )(fr0_ - 0x5c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x60)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x54)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x24)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x2c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x30)) = 0;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
    (*(le<undefined4>* )(fr0_ - 0x28)) = 0;
    if (ar7 == 1) {
      iVar5 = 2;
      goto LAB_8c25dd8c;
    }
    (*(le<int>* )(fr0_ - 0xd8)) = 1;
    iVar5 = 1;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0x28)) = 1;
    iVar5 = 1;
LAB_8c25dd8c:
    (*(le<int>* )(fr0_ - 0xd8)) = 0;
  }
  if (iVar6 != 0x10) {
    if (iVar6 == 0x18) {
      (*(le<undefined4>* )(fr0_ - 0x64)) = 4;
      (*(le<undefined4>* )(fr0_ - 0x58)) = 2;
    }
    else {
      if (iVar6 != 0x20) goto LAB_8c25dde8;
      (*(le<undefined4>* )(fr0_ - 0x64)) = 6;
      (*(le<undefined4>* )(fr0_ - 0x58)) = 3;
    }
    (*(le<undefined4>* )(fr0_ - 0x68)) = 0;
    goto LAB_8c25dde8;
  }
  if (ar6 == 3) {
    (*(le<undefined4>* )(fr0_ - 0x64)) = 3;
LAB_8c25ddc4:
    (*(le<undefined4>* )(fr0_ - 0x58)) = 0;
  }
  else if (ar6 == 0) {
    (*(le<undefined4>* )(fr0_ - 0x64)) = 1;
    (*(le<undefined4>* )(fr0_ - 0x58)) = 1;
  }
  else {
    if (ar6 == 1) {
      (*(le<undefined4>* )(fr0_ - 0x64)) = 0;
      goto LAB_8c25ddc4;
    }
    (*(le<undefined4>* )(fr0_ - 0x64)) = 1;
    (*(le<undefined4>* )(fr0_ - 0x58)) = 1;
  }
  (*(le<undefined4>* )(fr0_ - 0x68)) = (*(le<undefined4>* )(fr0_ + 0x00000000));
LAB_8c25dde8:
  n = ar4 * iVar6;
  (*(le<undefined4>* )(fr0_ - 0x6c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x78)) = 0;
  (*(le<int>* )(fr0_ - 0x50)) = n;
  if (n < 0) {
    (*(le<int>* )(fr0_ - 0x50)) = n + 0x3f;
  }
  (*(le<int>* )(fr0_ - 0x50)) = (*(le<int>* )(fr0_ - 0x50)) >> 6;
  d = 0x20;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf4) = ar4;
  (*(le<int>* )(fr0_ - 0x70)) = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,0x20,vr6,vr7));
  uVar4 = (int)(ar5 + ((int)ar5 < 0)) >> 1;
  (*(le<int>* )(fr0_ - 0x94)) = iVar1 + -1;
  iVar1 = iVar6;
  if (iVar6 < 0) {
    iVar1 = iVar6 + 7;
  }
  iVar1 = (iVar1 >> 3) * ar4;
  (*(le<uint>* )(fr0_ - 0x90)) = uVar4;
  if (ar7 == 1) {
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(le<int>* )(fr0_ - 0x8c)) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      (*(le<uint>* )(fr0_ - 0x90)) = ar5;
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
      (*(le<int>* )(fr0_ - 0x8c)) = iVar2 + 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
    }
  }
  else if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(le<int>* )(fr0_ - 0x8c)) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      (*(le<uint>* )(fr0_ - 0x90)) = ar5;
    }
    else {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
      (*(le<int>* )(fr0_ - 0x8c)) = iVar1 + 1;
    }
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
    (*(le<int>* )(fr0_ - 0x8c)) = 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = iVar1;
    (*(le<uint>* )(fr0_ - 0x90)) = ar5;
  }
  uVar3 = (*(le<uint>* )(fr0_ - 0x90));
  (*(le<uint>* )(fr0_ - 0x90)) = (*(le<uint>* )(fr0_ - 0x90)) - 1;
  ar7_00 = 0x42;
  if ((*(le<int>* )(fr0_ + 0x00000004)) == 0) {
    (*(le<undefined4>* )(fr0_ - 0x88)) = 0;
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)) {
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
        if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & d) == 0) {
          if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
            (*(le<undefined4>* )(fr0_ - 0x84)) = ((le<undefined4>* )(fr0_ - 0xc0))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
            (*(le<uint>* )(fr0_ - 0x90)) = uVar3 - 2;
          }
          else {
            (*(le<undefined4>* )(fr0_ - 0x84)) = 0x400;
          }
        }
        else {
          if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
            (*(le<undefined4>* )(fr0_ - 0x84)) = ((le<undefined4>* )(fr0_ - 0xc0))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
          }
          else {
            (*(le<undefined4>* )(fr0_ - 0x84)) = 0x401;
          }
          (*(le<uint>* )(fr0_ - 0x90)) = uVar3 - 2;
        }
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x84)) = 0x400;
      }
    }
    else {
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
        (*(le<undefined4>* )(fr0_ - 0x84)) = ((le<undefined4>* )(fr0_ - 0xd4))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x84)) = 0x800;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = 0;
      (*(le<int>* )(fr0_ - 0x8c)) = 1;
      (*(le<uint>* )(fr0_ - 0x90)) = uVar3 - 2;
    }
    (*(le<int>* )(fr0_ - 0xe4)) = 1;
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c14) | 1;
    (*(le<undefined4>* )(fr0_ - 0x88)) = 1;
    (*(le<int>* )(fr0_ - 0xe4)) = 2;
    (*(le<uint>* )(fr0_ - 0x90)) = uVar3 - 2;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 0) {
      uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0xffffffec;
      if ((((uVar3 == 100) || (uVar3 == 0x68)) || (uVar3 == 0x24)) || (uVar3 == 0x28)) {
        if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
          (*(le<undefined4>* )(fr0_ - 0x84)) = ((le<undefined4>* )(fr0_ - 0xc0))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
        }
        else {
          (*(le<undefined4>* )(fr0_ - 0x84)) = 0x401;
        }
        (*(le<int>* )(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(n,d,vr6,vr7));
        (*(le<int>* )(fr0_ - 0x8c)) = (*(le<int>* )(fr0_ - 0x8c)) + 1;
      }
      else if ((((uVar3 == 0x60) || (uVar3 == 0x40)) ||
               ((uVar3 == 0x44 || ((uVar3 == 0x20 || (uVar3 == 0)))))) || (uVar3 == 4)) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = 0;
        if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
          (*(le<undefined4>* )(fr0_ - 0x84)) = ((le<undefined4>* )(fr0_ - 0xd4))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
        }
        else {
          (*(le<undefined4>* )(fr0_ - 0x84)) = 0x800;
        }
        (*(le<int>* )(fr0_ - 0x8c)) = 1;
      }
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x84)) = 0x401;
    }
  }
  (*(le<undefined4>* )(fr0_ - 0x80)) = 0x40;
  (*(le<undefined4>* )(fr0_ - 0x7c)) = 0x80;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008) = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(ar4,d,vr6,vr7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008) * (*(le<int>* )(fr0_ - 0xe4));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 364)), libgcc_divide_helper_010468(ar5 * iVar5 * (*(le<int>* )(fr0_ - 0xdc)),d,vr6,vr7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c) = iVar5 + (*(le<int>* )(fr0_ - 0xd8));
  a6 = 0xf;
  if (0xf < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c) = 0xf;
  }
  (*(le<undefined4>* )(fr0_ - 0x48)) = 9;
  (*(le<undefined4>* )(fr0_ - 0x4c)) = 6;
  if (iVar6 == 0x10) {
    (*(le<undefined4>* )(fr0_ - 0x44)) = 8;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0x44)) = 0xb;
  }
  (*(le<undefined4>* )(fr0_ - 0x3c)) = 0;
  iVar6 = ar4 + -1;
  (*(le<undefined4>* )(fr0_ - 0x34)) = 0;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)) {
    ar5 = ar5 - 1;
    (*(le<uint>* )(fr0_ - 0x38)) = ar5;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x38)) = uVar4 - 1;
  }
  (*(le<int>* )(fr0_ - 0x40)) = iVar6;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x158))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x154))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 364)); FUN_8c010838(iVar6,ar5,0xf,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 364)), FUN_8c25dac0(iVar6,ar5,a6,ar7_00));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9be8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9be4) = 0;
  return 0;
}

__asm__(".globl FUN_8c25dc60\n.set FUN_8c25dc60, FUN_8c25dc60_def\n");

}
//@unit 8c25e260
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25e260_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25e260");
  return (unsigned)sh4_interp(0x8c25e260, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25e260\n.set FUN_8c25e260, FUN_8c25e260_def\n");
}
//@unit 8c25e540
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25e540_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25e540");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 532; for (int i_ = 0; i_ < 532; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 a7;
  bool bVar2;
  
  ((le<int>* )(fr0_ - 0x118))[7] = 0x35f;
  ((le<int>* )(fr0_ - 0x118))[5] = 0x8d;
  ((le<int>* )(fr0_ - 0x118))[6] = 0x34b;
  uVar1 = 1;
  ((le<int>* )(fr0_ - 0x118))[0xb] = 0x3f;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((le<int>* )(fr0_ - 0x118))[10] = 0x138;
  }
  else {
    ((le<int>* )(fr0_ - 0x118))[10] = 0x270;
  }
  a7 = 0x42;
  ar6_00 = 0x16;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x16;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x2c;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x134;
    }
  }
  else {
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x16;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x134;
    }
    else {
      ((le<int>* )(fr0_ - 0x118))[8] = 0x2c;
      ((le<int>* )(fr0_ - 0x118))[9] = 0x26c;
    }
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) == 0) {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x136;
    }
    else {
      (*(le<undefined4>* )(fr0_ - 0x90)) = 0x134;
    }
  }
  (*(le<undefined4>* )(fr0_ - 0x8c)) = 0x15;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    ((le<int>* )(fr0_ - 0x118))[0xc] = 3;
    (*(le<undefined4>* )(fr0_ - 0xe4)) = 799;
    (*(le<undefined4>* )(fr0_ - 0xe0)) = 0xf;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xe4)) = 0x16a;
    (*(le<undefined4>* )(fr0_ - 0xe0)) = 0x1f;
    ((le<int>* )(fr0_ - 0x118))[0xc] = 5;
  }
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<undefined4>* )(fr0_ - 0xd4)) = 0;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xd4)) = 1;
  }
  (*(le<undefined4>* )(fr0_ - 0xd0)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xcc)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xc8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xc4)) = 0;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<undefined4>* )(fr0_ - 0xc0)) = 2;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0xc0)) = 0;
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bac) == 6) {
    (*(le<undefined4>* )(fr0_ - 0x94)) = 0x16;
  }
  else {
    (*(le<undefined4>* )(fr0_ - 0x94)) = 0x3f;
  }
  bVar2 = ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x10) == 0;
  if (bVar2) {
    (*(le<uint>* )(fr0_ - 0x98)) = 1;
  }
  else {
    (*(le<uint>* )(fr0_ - 0x98)) = 0;
  }
  (*(le<uint>* )(fr0_ - 0x98)) = (uint)bVar2;
  (*(le<undefined4>* )(fr0_ - 0xdc)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xd8)) = 1;
  (*(le<undefined4>* )(fr0_ - 0xbc)) = 1;
  (*(le<undefined4>* )(fr0_ - 0xb8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xb4)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xb0)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xac)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xa8)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x9c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0xa4)) = 0;
  ar5_00 = 0xf0;
  (*(le<undefined4>* )(fr0_ - 0xa0)) = 0xf0;
  (*(le<undefined4>* )(fr0_ - 0xc)) = 0xae;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x42) == 0x42) {
    ((le<int>* )(fr0_ - 0x118))[0] = 0x2a;
    ((le<int>* )(fr0_ - 0x118))[1] = 0x26;
    ((le<int>* )(fr0_ - 0x118))[2] = 0x22;
    ((le<int>* )(fr0_ - 0x118))[3] = 0x1e;
    ((le<int>* )(fr0_ - 0x118))[4] = 0x1a;
    (*(le<int>* )(fr0_ - 0x10)) = ((le<int>* )(fr0_ - 0x118))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc)];
    ar5_00 = (*(le<int>* )(fr0_ - 0x10));
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) != 1) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0)) {
      ar5_00 = (*(le<int>* )(fr0_ - 0x10)) + -1;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) =
         (int)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) +
              (uint)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) < 0)) >> 1;
    (*(le<int>* )(fr0_ - 0x14)) = ar5_00;
  }
  else {
    ar6_00 = 0x2e;
    if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
      (*(le<int>* )(fr0_ - 0x14)) = 0x2e;
    }
    else {
      (*(le<int>* )(fr0_ - 0x14)) = 0x2d;
    }
    (*(le<int>* )(fr0_ - 0x10)) = 0x2e;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0xf0;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec4) = (((le<int>* )(fr0_ - 0x118))[8] >> 1) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec8) = ((le<int>* )(fr0_ - 0x118))[8];
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x214))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x210))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 532)); FUN_8c010838(1,ar5_00,ar6_00,0x42); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 532)), FUN_8c25e260(uVar1,ar5_00,ar6_00,a7));
  return uVar1;
}

__asm__(".globl FUN_8c25e540\n.set FUN_8c25e540, FUN_8c25e540_def\n");

}
//@unit 8c25e884
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25e884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25e884");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  uVar1 = 1;
  a6 = 0x12;
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1) || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) == 0)) {
    (*(le<int>* )(fr0_ - 0xf8)) = 0x12;
  }
  else {
    (*(le<int>* )(fr0_ - 0xf8)) = 0x24;
  }
  a7 = 0x1f;
  a5 = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0xf0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec4) = ((*(le<int>* )(fr0_ - 0xf8)) >> 1) + 0xf0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec8) = (*(le<int>* )(fr0_ - 0xf8));
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x200))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1fc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 512)); FUN_8c010838(1,0,0x12,0x1f); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c25e260(uVar1,a5,a6,a7));
  return uVar1;
}

__asm__(".globl FUN_8c25e884\n.set FUN_8c25e884, FUN_8c25e884_def\n");

}
//@unit 8c25eb60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c25eb60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25eb60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 512; for (int i_ = 0; i_ < 512; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a5;
  undefined4 a6;
  
  a5 = 0x28;
  a6 = 0x23;
  uVar1 = 0x1e0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0x1e0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec4) = 0x208;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ec8) = 0x28;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x200))); unsigned long ri1_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x1fc))); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 512)); FUN_8c010838(0x1e0,0x28,0x23,ar7); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 512)), FUN_8c25e260(uVar1,a5,a6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c25eb60\n.set FUN_8c25eb60, FUN_8c25eb60_def\n");

}
//@unit 8c25eca0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_1_25eca0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_1_25eca0");
  return (unsigned)sh4_interp(0x8c25eca0, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_1_25eca0\n.set ret_const_1_25eca0, ret_const_1_25eca0_def\n");
}
//@unit 8c25eca4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_1_25eca4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_1_25eca4");
  return (unsigned)sh4_interp(0x8c25eca4, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_1_25eca4\n.set ret_const_1_25eca4, ret_const_1_25eca4_def\n");
}
//@unit 8c25eca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25eca8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25eca8");
  return (unsigned)sh4_interp(0x8c25eca8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25eca8\n.set FUN_8c25eca8, FUN_8c25eca8_def\n");
}
//@unit 8c25ecc2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ecc2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ecc2");
  return (unsigned)sh4_interp(0x8c25ecc2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ecc2\n.set FUN_8c25ecc2, FUN_8c25ecc2_def\n");
}
//@unit 8c25ecdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ecdc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ecdc");
  return (unsigned)sh4_interp(0x8c25ecdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ecdc\n.set FUN_8c25ecdc, FUN_8c25ecdc_def\n");
}
//@unit 8c25ece6
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c25ece6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25ece6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl FUN_8c25ece6\n.set FUN_8c25ece6, FUN_8c25ece6_def\n");

}
//@unit 8c25ecea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ecea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ecea");
  return (unsigned)sh4_interp(0x8c25ecea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ecea\n.set FUN_8c25ecea, FUN_8c25ecea_def\n");
}
//@unit 8c25ed3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ed3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ed3c");
  return (unsigned)sh4_interp(0x8c25ed3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ed3c\n.set FUN_8c25ed3c, FUN_8c25ed3c_def\n");
}
//@unit 8c25f01e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f01e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f01e");
  return (unsigned)sh4_interp(0x8c25f01e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f01e\n.set FUN_8c25f01e, FUN_8c25f01e_def\n");
}
//@unit 8c25f052
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f052_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f052");
  return (unsigned)sh4_interp(0x8c25f052, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f052\n.set FUN_8c25f052, FUN_8c25f052_def\n");
}
//@unit 8c25f0ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f0ea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f0ea");
  return (unsigned)sh4_interp(0x8c25f0ea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f0ea\n.set FUN_8c25f0ea, FUN_8c25f0ea_def\n");
}
//@unit 8c25f1e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f1e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f1e8");
  return (unsigned)sh4_interp(0x8c25f1e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f1e8\n.set FUN_8c25f1e8, FUN_8c25f1e8_def\n");
}
//@unit 8c25f1f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f1f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f1f4");
  return (unsigned)sh4_interp(0x8c25f1f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f1f4\n.set FUN_8c25f1f4, FUN_8c25f1f4_def\n");
}
//@unit 8c25f306
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f306_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f306");
  return (unsigned)sh4_interp(0x8c25f306, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f306\n.set FUN_8c25f306, FUN_8c25f306_def\n");
}
//@unit 8c25f312
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f312_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f312");
  return (unsigned)sh4_interp(0x8c25f312, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f312\n.set FUN_8c25f312, FUN_8c25f312_def\n");
}
//@unit 8c25f40e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f40e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f40e");
  return (unsigned)sh4_interp(0x8c25f40e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f40e\n.set FUN_8c25f40e, FUN_8c25f40e_def\n");
}
//@unit 8c25f428
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f428_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f428");
  return (unsigned)sh4_interp(0x8c25f428, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f428\n.set FUN_8c25f428, FUN_8c25f428_def\n");
}
//@unit 8c25f42c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f42c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f42c");
  return (unsigned)sh4_interp(0x8c25f42c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f42c\n.set FUN_8c25f42c, FUN_8c25f42c_def\n");
}
//@unit 8c25f64c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f64c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f64c");
  return (unsigned)sh4_interp(0x8c25f64c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f64c\n.set FUN_8c25f64c, FUN_8c25f64c_def\n");
}
//@unit 8c25f67e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f67e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f67e");
  return (unsigned)sh4_interp(0x8c25f67e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f67e\n.set FUN_8c25f67e, FUN_8c25f67e_def\n");
}
//@unit 8c25f742
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f742_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f742");
  return (unsigned)sh4_interp(0x8c25f742, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f742\n.set FUN_8c25f742, FUN_8c25f742_def\n");
}
//@unit 8c25f830
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f830_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f830");
  return (unsigned)sh4_interp(0x8c25f830, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f830\n.set FUN_8c25f830, FUN_8c25f830_def\n");
}
//@unit 8c25f83c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f83c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f83c");
  return (unsigned)sh4_interp(0x8c25f83c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f83c\n.set FUN_8c25f83c, FUN_8c25f83c_def\n");
}
//@unit 8c25f950
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f950_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f950");
  return (unsigned)sh4_interp(0x8c25f950, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f950\n.set FUN_8c25f950, FUN_8c25f950_def\n");
}
//@unit 8c25f95c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25f95c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25f95c");
  return (unsigned)sh4_interp(0x8c25f95c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25f95c\n.set FUN_8c25f95c, FUN_8c25f95c_def\n");
}
//@unit 8c25fa58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fa58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fa58");
  return (unsigned)sh4_interp(0x8c25fa58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fa58\n.set FUN_8c25fa58, FUN_8c25fa58_def\n");
}
//@unit 8c25fa64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fa64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fa64");
  return (unsigned)sh4_interp(0x8c25fa64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fa64\n.set FUN_8c25fa64, FUN_8c25fa64_def\n");
}
//@unit 8c25fb5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fb5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fb5c");
  return (unsigned)sh4_interp(0x8c25fb5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fb5c\n.set FUN_8c25fb5c, FUN_8c25fb5c_def\n");
}
//@unit 8c25fb8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fb8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fb8c");
  return (unsigned)sh4_interp(0x8c25fb8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fb8c\n.set FUN_8c25fb8c, FUN_8c25fb8c_def\n");
}
//@unit 8c25fba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fba0");
  return (unsigned)sh4_interp(0x8c25fba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fba0\n.set FUN_8c25fba0, FUN_8c25fba0_def\n");
}
//@unit 8c25fbbe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fbbe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fbbe");
  return (unsigned)sh4_interp(0x8c25fbbe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fbbe\n.set FUN_8c25fbbe, FUN_8c25fbbe_def\n");
}
//@unit 8c25fbd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fbd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fbd0");
  return (unsigned)sh4_interp(0x8c25fbd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fbd0\n.set FUN_8c25fbd0, FUN_8c25fbd0_def\n");
}
//@unit 8c25fc5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fc5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fc5c");
  return (unsigned)sh4_interp(0x8c25fc5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fc5c\n.set FUN_8c25fc5c, FUN_8c25fc5c_def\n");
}
//@unit 8c25fc60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fc60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fc60");
  return (unsigned)sh4_interp(0x8c25fc60, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fc60\n.set FUN_8c25fc60, FUN_8c25fc60_def\n");
}
//@unit 8c25fca4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fca4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fca4");
  return (unsigned)sh4_interp(0x8c25fca4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fca4\n.set FUN_8c25fca4, FUN_8c25fca4_def\n");
}
//@unit 8c25fdb2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fdb2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fdb2");
  return (unsigned)sh4_interp(0x8c25fdb2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fdb2\n.set FUN_8c25fdb2, FUN_8c25fdb2_def\n");
}
//@unit 8c25fdbe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fdbe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fdbe");
  return (unsigned)sh4_interp(0x8c25fdbe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fdbe\n.set FUN_8c25fdbe, FUN_8c25fdbe_def\n");
}
//@unit 8c25fea8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fea8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fea8");
  return (unsigned)sh4_interp(0x8c25fea8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fea8\n.set FUN_8c25fea8, FUN_8c25fea8_def\n");
}
//@unit 8c25fec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fec0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fec0");
  return (unsigned)sh4_interp(0x8c25fec0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fec0\n.set FUN_8c25fec0, FUN_8c25fec0_def\n");
}
//@unit 8c25feca
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25feca_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25feca");
  return (unsigned)sh4_interp(0x8c25feca, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25feca\n.set FUN_8c25feca, FUN_8c25feca_def\n");
}
//@unit 8c25fed2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25fed2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25fed2");
  return (unsigned)sh4_interp(0x8c25fed2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25fed2\n.set FUN_8c25fed2, FUN_8c25fed2_def\n");
}
//@unit 8c25ff16
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_18_25ff16_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_18_25ff16");
  return (unsigned)sh4_interp(0x8c25ff16, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_18_25ff16\n.set get_field_18_25ff16, get_field_18_25ff16_def\n");
}
//@unit 8c25ff22
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ff22_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ff22");
  return (unsigned)sh4_interp(0x8c25ff22, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ff22\n.set FUN_8c25ff22, FUN_8c25ff22_def\n");
}
//@unit 8c25ff38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_4_25ff38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_4_25ff38");
  return (unsigned)sh4_interp(0x8c25ff38, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_4_25ff38\n.set get_field_4_25ff38, get_field_4_25ff38_def\n");
}
//@unit 8c25ff3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ff3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ff3c");
  return (unsigned)sh4_interp(0x8c25ff3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ff3c\n.set FUN_8c25ff3c, FUN_8c25ff3c_def\n");
}
//@unit 8c25ff3e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ff3e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ff3e");
  return (unsigned)sh4_interp(0x8c25ff3e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ff3e\n.set FUN_8c25ff3e, FUN_8c25ff3e_def\n");
}
//@unit 8c25ff8e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ff8e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ff8e");
  return (unsigned)sh4_interp(0x8c25ff8e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ff8e\n.set FUN_8c25ff8e, FUN_8c25ff8e_def\n");
}
//@unit 8c25ff9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ff9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ff9c");
  return (unsigned)sh4_interp(0x8c25ff9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ff9c\n.set FUN_8c25ff9c, FUN_8c25ff9c_def\n");
}
//@unit 8c25ffb6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ffb6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ffb6");
  return (unsigned)sh4_interp(0x8c25ffb6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ffb6\n.set FUN_8c25ffb6, FUN_8c25ffb6_def\n");
}
//@unit 8c25ffba
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c25ffba_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c25ffba");
  return (unsigned)sh4_interp(0x8c25ffba, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c25ffba\n.set FUN_8c25ffba, FUN_8c25ffba_def\n");
}
//@unit 8c25fff0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_a000a4_25fff0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_a000a4_25fff0");
  return (unsigned)sh4_interp(0x8c25fff0, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_a000a4_25fff0\n.set get_field_a000a4_25fff0, get_field_a000a4_25fff0_def\n");
}
//@unit 8c25fff6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_a0_25fff6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_a0_25fff6");
  return (unsigned)sh4_interp(0x8c25fff6, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_a0_25fff6\n.set get_field_a0_25fff6, get_field_a0_25fff6_def\n");
}
