//@unit 8c2205d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2205d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2205d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<ushort>* puVar4;
  undefined4 uVar5;
  ushort uVar6;
  
  puVar4 = 0x8c4aad86;
  puVar3 = 0x8c4aa380;
  puVar2 = 0x8c4aa378;
  puVar1 = 0x8c4aa37c;
  if (ar4 == 0x22) {
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 3;
    uVar6 = (ushort)0xbfdf;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar3 = 0xffffffff;
    uVar5 = 0x22;
  }
  else if (ar4 == 0x23) {
    uVar5 = 4;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 4;
    *puVar2 = 2;
    *puVar1 = 0xffffffff;
    *puVar3 = 5;
    uVar6 = (ushort)0xffdf;
  }
  else {
    if (ar4 != 0x29) {
      if (ar4 != 0x2a) {
        *(le<undefined4>* )(unsigned)0x8c4aa374 = 0;
        *puVar2 = 0xffffffff;
        *puVar1 = 0xffffffff;
        *puVar3 = 0xffffffff;
        *puVar4 = 0;
        return ar4;
      }
      *(le<undefined4>* )(unsigned)0x8c4aa374 = 7;
      *puVar2 = 2;
      *puVar1 = 5;
      *puVar3 = 8;
      return 7;
    }
    uVar5 = 6;
    *(le<undefined4>* )(unsigned)0x8c4aa374 = 6;
    *puVar2 = 2;
    *puVar1 = 5;
    uVar6 = (ushort)0xbfff;
    *puVar3 = 0xffffffff;
  }
  *puVar4 = *puVar4 & uVar6;
  return uVar5;
}

__asm__(".globl FUN_8c2205d8\n.set FUN_8c2205d8, FUN_8c2205d8_def\n");

}
//@unit 8c220658
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c220658_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c220658");
  return (unsigned)sh4_interp(0x8c220658, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c220658\n.set FUN_8c220658, FUN_8c220658_def\n");
}
//@unit 8c220c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c220c88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c220c88");
  return (unsigned)sh4_interp(0x8c220c88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c220c88\n.set FUN_8c220c88, FUN_8c220c88_def\n");
}
//@unit 8c22123c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22123c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22123c");
  return (unsigned)sh4_interp(0x8c22123c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22123c\n.set FUN_8c22123c, FUN_8c22123c_def\n");
}
//@unit 8c221300
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221300_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221300");
  return (unsigned)sh4_interp(0x8c221300, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221300\n.set FUN_8c221300, FUN_8c221300_def\n");
}
//@unit 8c22138a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22138a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22138a");
  return (unsigned)sh4_interp(0x8c22138a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22138a\n.set FUN_8c22138a, FUN_8c22138a_def\n");
}
//@unit 8c221414
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221414_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221414");
  return (unsigned)sh4_interp(0x8c221414, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221414\n.set FUN_8c221414, FUN_8c221414_def\n");
}
//@unit 8c22158a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22158a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22158a");
  return (unsigned)sh4_interp(0x8c22158a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22158a\n.set FUN_8c22158a, FUN_8c22158a_def\n");
}
//@unit 8c2215b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2215b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2215b4");
  return (unsigned)sh4_interp(0x8c2215b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2215b4\n.set FUN_8c2215b4, FUN_8c2215b4_def\n");
}
//@unit 8c221622
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221622_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221622");
  return (unsigned)sh4_interp(0x8c221622, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221622\n.set FUN_8c221622, FUN_8c221622_def\n");
}
//@unit 8c2216e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2216e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2216e0");
  return (unsigned)sh4_interp(0x8c2216e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2216e0\n.set FUN_8c2216e0, FUN_8c2216e0_def\n");
}
//@unit 8c22170a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22170a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22170a");
  return (unsigned)sh4_interp(0x8c22170a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22170a\n.set FUN_8c22170a, FUN_8c22170a_def\n");
}
//@unit 8c221734
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221734_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221734");
  return (unsigned)sh4_interp(0x8c221734, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221734\n.set FUN_8c221734, FUN_8c221734_def\n");
}
//@unit 8c221778
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221778_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221778");
  return (unsigned)sh4_interp(0x8c221778, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221778\n.set FUN_8c221778, FUN_8c221778_def\n");
}
//@unit 8c2218f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2218f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2218f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  
  puVar1 = ((undefined1 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d7e8),vr7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) = *(le<undefined4>* )(unsigned)(puVar1 + ar4 * 4);
  return ar4 * 4;
}

__asm__(".globl FUN_8c2218f4\n.set FUN_8c2218f4, FUN_8c2218f4_def\n");

}
//@unit 8c221916
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c221916_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c221916");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0107a0(0x1c,((le<uint>* )(fr0_ - 0x20)),((undefined1 *)(unsigned)0x8c26d804),vr7));
  if (ar5 == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) & ~((le<uint>* )(fr0_ - 0x20))[ar4];
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0) | ((le<uint>* )(fr0_ - 0x20))[ar4];
  }
  return (*(le<undefined4>* )(unsigned)(unsigned)0x8c4c0ed0);
}

__asm__(".globl FUN_8c221916\n.set FUN_8c221916, FUN_8c221916_def\n");

}
//@unit 8c22194e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22194e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22194e");
  return (unsigned)sh4_interp(0x8c22194e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22194e\n.set FUN_8c22194e, FUN_8c22194e_def\n");
}
//@unit 8c22195c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22195c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22195c");
  return (unsigned)sh4_interp(0x8c22195c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22195c\n.set FUN_8c22195c, FUN_8c22195c_def\n");
}
//@unit 8c2219a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2219a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2219a8");
  return (unsigned)sh4_interp(0x8c2219a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2219a8\n.set FUN_8c2219a8, FUN_8c2219a8_def\n");
}
//@unit 8c2219ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2219ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2219ac");
  return (unsigned)sh4_interp(0x8c2219ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2219ac\n.set FUN_8c2219ac, FUN_8c2219ac_def\n");
}
//@unit 8c2219de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2219de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2219de");
  return (unsigned)sh4_interp(0x8c2219de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2219de\n.set FUN_8c2219de, FUN_8c2219de_def\n");
}
//@unit 8c2219f6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2219f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2219f6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  puVar2 = ((void *)(unsigned)0x8c21279c);
  puVar1 = ((void *)(unsigned)0x8c212740);
  uVar5 = *(le<uint>* )(unsigned)(0x8c4c0e80 + 0x50);
  iVar3 = 0x8c4c0ee0;
  iVar4 = 0x8c4c0e80;
  while( true ) {
    if ((uVar5 & 1) != 0) {
      if ((uVar5 >> 1 & 1) == 0) {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,iVar4,iVar3,vr7));
      }
      else {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,iVar4,iVar3,vr7));
      }
    }
    if ((uVar5 >> 2 & 1) != 0) break;
    iVar4 = iVar4 + 0xc;
    uVar5 = uVar5 >> 3;
    iVar3 = iVar3 + 0x20;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2219f6\n.set FUN_8c2219f6, FUN_8c2219f6_def\n");

}
//@unit 8c221a0a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c221a0a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c221a0a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint unaff_r11 = 0;
  int a6;
  le<uint>* unaff_r14 = 0;
  uint uVar3;
  
  puVar2 = ((void *)(unsigned)0x8c21279c);
  puVar1 = ((void *)(unsigned)0x8c212740);
  uVar3 = *unaff_r14;
  a6 = 0x8c4c0ee0;
  while( true ) {
    if ((uVar3 & unaff_r11) != 0) {
      if ((uVar3 >> 1 & 1) == 0) {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(0,ar4,a6,ar7));
      }
      else {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,ar4,a6,ar7));
      }
    }
    if ((uVar3 >> 2 & 1) != 0) break;
    ar4 = ar4 + 0xc;
    uVar3 = uVar3 >> 3;
    a6 = a6 + 0x20;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c221a0a\n.set FUN_8c221a0a, FUN_8c221a0a_def\n");

}
//@unit 8c221a8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221a8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221a8c");
  return (unsigned)sh4_interp(0x8c221a8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221a8c\n.set FUN_8c221a8c, FUN_8c221a8c_def\n");
}
//@unit 8c221c68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221c68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221c68");
  return (unsigned)sh4_interp(0x8c221c68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221c68\n.set FUN_8c221c68, FUN_8c221c68_def\n");
}
//@unit 8c221fbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c221fbc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c221fbc");
  return (unsigned)sh4_interp(0x8c221fbc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c221fbc\n.set FUN_8c221fbc, FUN_8c221fbc_def\n");
}
//@unit 8c22233c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22233c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22233c");
  return (unsigned)sh4_interp(0x8c22233c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22233c\n.set FUN_8c22233c, FUN_8c22233c_def\n");
}
//@unit 8c22278c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22278c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22278c");
  return (unsigned)sh4_interp(0x8c22278c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22278c\n.set FUN_8c22278c, FUN_8c22278c_def\n");
}
//@unit 8c222ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c222ab4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c222ab4");
  return (unsigned)sh4_interp(0x8c222ab4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c222ab4\n.set FUN_8c222ab4, FUN_8c222ab4_def\n");
}
//@unit 8c222cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c222cec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c222cec");
  return (unsigned)sh4_interp(0x8c222cec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c222cec\n.set FUN_8c222cec, FUN_8c222cec_def\n");
}
//@unit 8c2230f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2230f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2230f0");
  return (unsigned)sh4_interp(0x8c2230f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2230f0\n.set FUN_8c2230f0, FUN_8c2230f0_def\n");
}
//@unit 8c2234a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2234a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2234a4");
  return (unsigned)sh4_interp(0x8c2234a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2234a4\n.set FUN_8c2234a4, FUN_8c2234a4_def\n");
}
//@unit 8c223708
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c223708_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c223708");
  return (unsigned)sh4_interp(0x8c223708, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c223708\n.set FUN_8c223708, FUN_8c223708_def\n");
}
//@unit 8c223b34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c223b34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c223b34");
  return (unsigned)sh4_interp(0x8c223b34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c223b34\n.set FUN_8c223b34, FUN_8c223b34_def\n");
}
//@unit 8c223eb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c223eb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c223eb8");
  return (unsigned)sh4_interp(0x8c223eb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c223eb8\n.set FUN_8c223eb8, FUN_8c223eb8_def\n");
}
//@unit 8c224330
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c224330_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c224330");
  return (unsigned)sh4_interp(0x8c224330, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c224330\n.set FUN_8c224330, FUN_8c224330_def\n");
}
//@unit 8c2246a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2246a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2246a0");
  return (unsigned)sh4_interp(0x8c2246a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2246a0\n.set FUN_8c2246a0, FUN_8c2246a0_def\n");
}
//@unit 8c224b00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c224b00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c224b00");
  return (unsigned)sh4_interp(0x8c224b00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c224b00\n.set FUN_8c224b00, FUN_8c224b00_def\n");
}
//@unit 8c225098
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c225098_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c225098");
  return (unsigned)sh4_interp(0x8c225098, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c225098\n.set FUN_8c225098, FUN_8c225098_def\n");
}
//@unit 8c2255e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2255e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2255e8");
  return (unsigned)sh4_interp(0x8c2255e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2255e8\n.set FUN_8c2255e8, FUN_8c2255e8_def\n");
}
//@unit 8c225918
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c225918_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c225918");
  return (unsigned)sh4_interp(0x8c225918, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c225918\n.set FUN_8c225918, FUN_8c225918_def\n");
}
//@unit 8c225b54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c225b54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c225b54");
  return (unsigned)sh4_interp(0x8c225b54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c225b54\n.set FUN_8c225b54, FUN_8c225b54_def\n");
}
//@unit 8c225f68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c225f68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c225f68");
  return (unsigned)sh4_interp(0x8c225f68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c225f68\n.set FUN_8c225f68, FUN_8c225f68_def\n");
}
//@unit 8c226474
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226474_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226474");
  return (unsigned)sh4_interp(0x8c226474, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226474\n.set FUN_8c226474, FUN_8c226474_def\n");
}
//@unit 8c226980
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226980_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226980");
  return (unsigned)sh4_interp(0x8c226980, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226980\n.set FUN_8c226980, FUN_8c226980_def\n");
}
//@unit 8c226ac0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226ac0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226ac0");
  return (unsigned)sh4_interp(0x8c226ac0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226ac0\n.set FUN_8c226ac0, FUN_8c226ac0_def\n");
}
//@unit 8c226c44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226c44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226c44");
  return (unsigned)sh4_interp(0x8c226c44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226c44\n.set FUN_8c226c44, FUN_8c226c44_def\n");
}
//@unit 8c226dfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226dfc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226dfc");
  return (unsigned)sh4_interp(0x8c226dfc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226dfc\n.set FUN_8c226dfc, FUN_8c226dfc_def\n");
}
//@unit 8c226f70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c226f70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c226f70");
  return (unsigned)sh4_interp(0x8c226f70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c226f70\n.set FUN_8c226f70, FUN_8c226f70_def\n");
}
//@unit 8c227144
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c227144_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c227144");
  return (unsigned)sh4_interp(0x8c227144, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c227144\n.set FUN_8c227144, FUN_8c227144_def\n");
}
//@unit 8c227348
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c227348_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c227348");
  return (unsigned)sh4_interp(0x8c227348, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c227348\n.set FUN_8c227348, FUN_8c227348_def\n");
}
//@unit 8c2274f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2274f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2274f8");
  return (unsigned)sh4_interp(0x8c2274f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2274f8\n.set FUN_8c2274f8, FUN_8c2274f8_def\n");
}
//@unit 8c22770c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22770c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22770c");
  return (unsigned)sh4_interp(0x8c22770c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22770c\n.set FUN_8c22770c, FUN_8c22770c_def\n");
}
//@unit 8c22789c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22789c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22789c");
  return (unsigned)sh4_interp(0x8c22789c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22789c\n.set FUN_8c22789c, FUN_8c22789c_def\n");
}
//@unit 8c227bc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c227bc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c227bc4");
  return (unsigned)sh4_interp(0x8c227bc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c227bc4\n.set FUN_8c227bc4, FUN_8c227bc4_def\n");
}
//@unit 8c227d94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c227d94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c227d94");
  return (unsigned)sh4_interp(0x8c227d94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c227d94\n.set FUN_8c227d94, FUN_8c227d94_def\n");
}
//@unit 8c2283cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2283cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2283cc");
  return (unsigned)sh4_interp(0x8c2283cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2283cc\n.set FUN_8c2283cc, FUN_8c2283cc_def\n");
}
//@unit 8c2287f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2287f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2287f8");
  return (unsigned)sh4_interp(0x8c2287f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2287f8\n.set FUN_8c2287f8, FUN_8c2287f8_def\n");
}
//@unit 8c228a5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c228a5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c228a5c");
  return (unsigned)sh4_interp(0x8c228a5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c228a5c\n.set FUN_8c228a5c, FUN_8c228a5c_def\n");
}
//@unit 8c228ec4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c228ec4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c228ec4");
  return (unsigned)sh4_interp(0x8c228ec4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c228ec4\n.set FUN_8c228ec4, FUN_8c228ec4_def\n");
}
//@unit 8c229150
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c229150_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c229150");
  return (unsigned)sh4_interp(0x8c229150, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c229150\n.set FUN_8c229150, FUN_8c229150_def\n");
}
//@unit 8c2294a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2294a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2294a4");
  return (unsigned)sh4_interp(0x8c2294a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2294a4\n.set FUN_8c2294a4, FUN_8c2294a4_def\n");
}
//@unit 8c229a7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c229a7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c229a7c");
  return (unsigned)sh4_interp(0x8c229a7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c229a7c\n.set FUN_8c229a7c, FUN_8c229a7c_def\n");
}
//@unit 8c229c68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c229c68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c229c68");
  return (unsigned)sh4_interp(0x8c229c68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c229c68\n.set FUN_8c229c68, FUN_8c229c68_def\n");
}
//@unit 8c229f74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c229f74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c229f74");
  return (unsigned)sh4_interp(0x8c229f74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c229f74\n.set FUN_8c229f74, FUN_8c229f74_def\n");
}
//@unit 8c22a564
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22a564_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22a564");
  return (unsigned)sh4_interp(0x8c22a564, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22a564\n.set FUN_8c22a564, FUN_8c22a564_def\n");
}
//@unit 8c22a828
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22a828_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22a828");
  return (unsigned)sh4_interp(0x8c22a828, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22a828\n.set FUN_8c22a828, FUN_8c22a828_def\n");
}
//@unit 8c22aec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22aec8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22aec8");
  return (unsigned)sh4_interp(0x8c22aec8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22aec8\n.set FUN_8c22aec8, FUN_8c22aec8_def\n");
}
//@unit 8c22b26c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22b26c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22b26c");
  return (unsigned)sh4_interp(0x8c22b26c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22b26c\n.set FUN_8c22b26c, FUN_8c22b26c_def\n");
}
//@unit 8c22b5b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22b5b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22b5b0");
  return (unsigned)sh4_interp(0x8c22b5b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22b5b0\n.set FUN_8c22b5b0, FUN_8c22b5b0_def\n");
}
//@unit 8c22b7a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22b7a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22b7a8");
  return (unsigned)sh4_interp(0x8c22b7a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22b7a8\n.set FUN_8c22b7a8, FUN_8c22b7a8_def\n");
}
//@unit 8c22bb70
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22bb70_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22bb70");
  return (unsigned)sh4_interp(0x8c22bb70, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22bb70\n.set FUN_8c22bb70, FUN_8c22bb70_def\n");
}
//@unit 8c22c058
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22c058_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22c058");
  return (unsigned)sh4_interp(0x8c22c058, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22c058\n.set FUN_8c22c058, FUN_8c22c058_def\n");
}
//@unit 8c22c3f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22c3f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22c3f4");
  return (unsigned)sh4_interp(0x8c22c3f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22c3f4\n.set FUN_8c22c3f4, FUN_8c22c3f4_def\n");
}
//@unit 8c22c678
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22c678_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22c678");
  return (unsigned)sh4_interp(0x8c22c678, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22c678\n.set FUN_8c22c678, FUN_8c22c678_def\n");
}
//@unit 8c22c838
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22c838_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22c838");
  return (unsigned)sh4_interp(0x8c22c838, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22c838\n.set FUN_8c22c838, FUN_8c22c838_def\n");
}
//@unit 8c22cc6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22cc6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22cc6c");
  return (unsigned)sh4_interp(0x8c22cc6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22cc6c\n.set FUN_8c22cc6c, FUN_8c22cc6c_def\n");
}
//@unit 8c22cef0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22cef0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22cef0");
  return (unsigned)sh4_interp(0x8c22cef0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22cef0\n.set FUN_8c22cef0, FUN_8c22cef0_def\n");
}
//@unit 8c22d770
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22d770_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22d770");
  return (unsigned)sh4_interp(0x8c22d770, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22d770\n.set FUN_8c22d770, FUN_8c22d770_def\n");
}
//@unit 8c22d944
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22d944_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22d944");
  return (unsigned)sh4_interp(0x8c22d944, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22d944\n.set FUN_8c22d944, FUN_8c22d944_def\n");
}
//@unit 8c22dd84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22dd84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22dd84");
  return (unsigned)sh4_interp(0x8c22dd84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22dd84\n.set FUN_8c22dd84, FUN_8c22dd84_def\n");
}
//@unit 8c22dff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22dff8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22dff8");
  return (unsigned)sh4_interp(0x8c22dff8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22dff8\n.set FUN_8c22dff8, FUN_8c22dff8_def\n");
}
//@unit 8c22e684
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22e684_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22e684");
  return (unsigned)sh4_interp(0x8c22e684, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22e684\n.set FUN_8c22e684, FUN_8c22e684_def\n");
}
//@unit 8c22ed60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22ed60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22ed60");
  return (unsigned)sh4_interp(0x8c22ed60, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22ed60\n.set FUN_8c22ed60, FUN_8c22ed60_def\n");
}
//@unit 8c22f3f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22f3f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22f3f0");
  return (unsigned)sh4_interp(0x8c22f3f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22f3f0\n.set FUN_8c22f3f0, FUN_8c22f3f0_def\n");
}
//@unit 8c22f6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22f6c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22f6c0");
  return (unsigned)sh4_interp(0x8c22f6c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22f6c0\n.set FUN_8c22f6c0, FUN_8c22f6c0_def\n");
}
//@unit 8c22fa7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c22fa7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c22fa7c");
  return (unsigned)sh4_interp(0x8c22fa7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c22fa7c\n.set FUN_8c22fa7c, FUN_8c22fa7c_def\n");
}
