//@unit 8c010080
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c010080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010080");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  
  while( true ) {
    puVar1 = (le<undefined4>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c2787a0;
    if (puVar1 == (le<undefined4>* )(unsigned)0x0) break;
    *(le<undefined4>* )(unsigned)0x8c2787a0 = *puVar1;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1[1])))(puVar1[2],0xffffffff,ar6,ar7));
  }
  return 0x8c2787a0;
}

__asm__(".globl FUN_8c010080\n.set FUN_8c010080, FUN_8c010080_def\n");

}
//@unit 8c0100b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0100b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0100b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<undefined4>* puVar1;
  
  puVar1 = (le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12c410));
  if ((&(*(undefined1 *)(unsigned)0x8c12c410)) != (undefined *)(unsigned)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*puVar1 == (code *)0x0) break;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*puVar1)))(vr4,vr5,vr6,vr7));
      puVar1 = puVar1 + 1;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0100b0\n.set FUN_8c0100b0, FUN_8c0100b0_def\n");

}
//@unit 8c0100b6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0100b6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0100b6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<undefined4>* unaff_r13 = 0;
  
  if (unaff_r13 != (le<undefined4>* )(unsigned)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*unaff_r13 == (code *)0x0) break;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*unaff_r13)))(ar4,ar5,ar6,ar7));
      unaff_r13 = unaff_r13 + 1;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0100b6\n.set FUN_8c0100b6, FUN_8c0100b6_def\n");

}
//@unit 8c0100dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 vec_delete_array_def(int ar4,code *ar5,int ar6,int ar7)

{
  TRACE_ENTER("vec_delete_array");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar6 * ar7 + ar4;
  for (; ar7 != 0; ar7 = ar7 + -1) {
    iVar1 = iVar1 - ar6;
    in_r0 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar5))(iVar1,0xffffffff,uVar2,vr7));
  }
  return in_r0 = 0;
}

__asm__(".globl vec_delete_array\n.set vec_delete_array, vec_delete_array_def\n");

}
//@unit 8c0100ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0100ec_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0100ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int unaff_r10 = 0;
  int unaff_r11 = 0;
  int a4;
  
  a4 = unaff_r10 * unaff_r11 + ar4;
  for (; unaff_r11 != 0; unaff_r11 = unaff_r11 + -1) {
    a4 = a4 - unaff_r10;
    in_r0 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar5))(a4,0xffffffff,ar6,ar7));
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0100ec\n.set FUN_8c0100ec, FUN_8c0100ec_def\n");

}
//@unit 8c010120
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c010120_def(int ar4,code *ar5,code *ar6,int ar7)

{
  TRACE_ENTER("FUN_8c010120");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar5))(iVar1,1,uVar2,vr7));
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < s0) && (s0 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)ar6))(iVar1,0xffffffff,vr6,vr7));
    }
  }
  return s0;
}

__asm__(".globl FUN_8c010120\n.set FUN_8c010120, FUN_8c010120_def\n");

}
//@unit 8c01012c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01012c_def(int ar4,code *ar5,code *ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01012c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  uint s20 = *(le<uint>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  code *a6;
  int unaff_r11 = 0;
  int iVar1;
  
  a6 = ar6;
  iVar1 = ar4;
  for ((*(le<undefined4>* )(fr0_ - 0x8)) = 0; (*(le<undefined4>* )(fr0_ - 0x8)) < s20; (*(le<undefined4>* )(fr0_ - 0x8)) = (*(le<undefined4>* )(fr0_ - 0x8)) + 1) {
    (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)ar5))(iVar1,1,a6,ar7));
    iVar1 = iVar1 + unaff_r11;
  }
  if (((*(le<undefined4>* )(fr0_ - 0x8)) < s20) && (s20 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * (*(le<undefined4>* )(fr0_ - 0x8)) + ar4;
    for (; s20 = 0, (*(le<undefined4>* )(fr0_ - 0x8)) != 0; (*(le<undefined4>* )(fr0_ - 0x8)) = (*(le<undefined4>* )(fr0_ - 0x8)) - 1) {
      iVar1 = iVar1 - unaff_r11;
      (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)ar6))(iVar1,0xffffffff,a6,ar7));
    }
  }
  return s20;
}

__asm__(".globl FUN_8c01012c\n.set FUN_8c01012c, FUN_8c01012c_def\n");

}
//@unit 8c0101a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 global_list_push_def(undefined4 ar4,undefined4 ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("global_list_push");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  
  puVar1 = 0x8c2787a0;
  *ar6 = *(le<undefined4>* )(unsigned)0x8c2787a0;
  ar6[1] = ar5;
  ar6[2] = ar4;
  *puVar1 = ar6;
  return ar4;
}

__asm__(".globl global_list_push\n.set global_list_push, global_list_push_def\n");

}
//@unit 8c0101bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pure_virtual_stub_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pure_virtual_stub");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
                    
  halt_unimplemented();
}

__asm__(".globl pure_virtual_stub\n.set pure_virtual_stub, pure_virtual_stub_def\n");

}
//@unit 8c0101d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 strcpy_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("strcpy");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (cVar1 != '\0');
  return in_r0 = 0;
}

__asm__(".globl guest_strcpy\n.set guest_strcpy, strcpy_def\n");

}
//@unit 8c0101e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_0101e4_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl libgcc_divide_helper_0101e4\n.set libgcc_divide_helper_0101e4, libgcc_divide_helper_0101e4_def\n");

}
//@unit 8c010284
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_010284_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  unsigned ar4 = (unsigned)ar4_, ar5 = (unsigned)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl libgcc_divide_helper_010284\n.set libgcc_divide_helper_010284, libgcc_divide_helper_010284_def\n");

}
//@unit 8c01031c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_01031c_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 % ar5);
}
__asm__(".globl libgcc_divide_helper_01031c\n.set libgcc_divide_helper_01031c, libgcc_divide_helper_01031c_def\n");

}
//@unit 8c0103d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_0103d0_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  unsigned ar4 = (unsigned)ar4_, ar5 = (unsigned)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 % ar5);
}
__asm__(".globl libgcc_divide_helper_0103d0\n.set libgcc_divide_helper_0103d0, libgcc_divide_helper_0103d0_def\n");

}
//@unit 8c010468
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_010468_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl libgcc_divide_helper_010468\n.set libgcc_divide_helper_010468, libgcc_divide_helper_010468_def\n");

}
//@unit 8c01051c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_01051c_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  unsigned ar4 = (unsigned)ar4_, ar5 = (unsigned)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 / ar5);
}
__asm__(".globl libgcc_divide_helper_01051c\n.set libgcc_divide_helper_01051c, libgcc_divide_helper_01051c_def\n");

}
//@unit 8c0105c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0105c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0105c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  short in_r0 = (short)(unsigned long)vin0;
  int iVar2;
  uint uVar3;
  short in_r1 = (short)(unsigned long)vin1;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = (int)in_r0;
  if (iVar2 == 0) {
    *(le<undefined4>* )(unsigned)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar4 = (int)in_r1 - (uint)(((int)in_r1 & 0x80000000U) != 0);
  uVar3 = iVar2 * 0x10000;
  bVar6 = (uVar4 & 0x80000000) != 0;
  bVar5 = (uVar3 & 0x80000000) != 0;
  bVar7 = (uVar4 & 0x80000000) == 0;
  uVar4 = uVar4 * 2 | (uint)(bVar5 != bVar6);
  if (bVar6 || bVar5) {
    if (!bVar6 && bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar4 + iVar2 * -0x10000;
      bVar6 = uVar4 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  return ((int)(short)uVar3 << 1 | (uint)(bVar6 == bVar5)) +
         (uint)(((int)(short)uVar3 & 0x80000000U) != 0);
}

__asm__(".globl FUN_8c0105c4\n.set FUN_8c0105c4, FUN_8c0105c4_def\n");

}
//@unit 8c010614
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_010614_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  int ar4 = (int)ar4_, ar5 = (int)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 % ar5);
}
__asm__(".globl libgcc_divide_helper_010614\n.set libgcc_divide_helper_010614, libgcc_divide_helper_010614_def\n");

}
//@unit 8c0106dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long long libgcc_divide_helper_0106dc_def(unsigned long ar4_, unsigned long ar5_, unsigned long ar6, unsigned long ar7)
{
  unsigned ar4 = (unsigned)ar4_, ar5 = (unsigned)ar5_;
  if (ar5 == 0) { *(le<unsigned>* )0x8c2787a8 = 0x44e; return 0; }
  return (unsigned long long)(unsigned)(ar4 % ar5);
}
__asm__(".globl libgcc_divide_helper_0106dc\n.set libgcc_divide_helper_0106dc, libgcc_divide_helper_0106dc_def\n");

}
//@unit 8c010794
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_movstr(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c010794_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_movstr(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010794\n.set FUN_8c010794, FUN_8c010794_def\n");

}
//@unit 8c0107a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_movstr(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c0107a0_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_movstr(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0107a0\n.set FUN_8c0107a0, FUN_8c0107a0_def\n");

}
//@unit 8c0107f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0107f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0107f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0107f0\n.set FUN_8c0107f0, FUN_8c0107f0_def\n");

}
//@unit 8c010838
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c010838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined4 uVar1;
  le<undefined4>* in_r1 = (le<undefined4>* )(unsigned long)vin1;
  le<undefined4>* in_r2 = 0;
  le<undefined4>* puVar2;
  
                    
  switch(in_r0) {
  case 0:
    return in_r0;
  default:
    puVar2 = (le<undefined4>* )(unsigned)((int)in_r2 + in_r0);
  }
  while( true ) {
    if (puVar2 < in_r2 + 1) {
      return *in_r2;
    }
    *in_r1 = *in_r2;
    uVar1 = in_r2[1];
    in_r2 = in_r2 + 2;
    if (puVar2 < in_r2) break;
    in_r1[1] = uVar1;
    in_r1 = in_r1 + 2;
  }
  return uVar1;
}

__asm__(".globl FUN_8c010838\n.set FUN_8c010838, FUN_8c010838_def\n");

}
//@unit 8c0108f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<uint>*  FUN_8c0108f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0108f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  le<uint>* in_r0 = (le<uint>* )(unsigned long)vin0;
  le<uint>* puVar2;
  le<uint>* in_r1 = (le<uint>* )(unsigned long)vin1;
  le<uint>* puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)(unsigned)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)(unsigned)((int)puVar3 + -3);
        *(char *)(unsigned)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)(unsigned)((int)puVar3 + -2);
          *(char *)(unsigned)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)(unsigned)((int)puVar2 + 3) = *(char *)(unsigned)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}

__asm__(".globl FUN_8c0108f8\n.set FUN_8c0108f8, FUN_8c0108f8_def\n");

}
//@unit 8c0108fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<uint>*  FUN_8c0108fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0108fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  le<uint>* in_r0 = (le<uint>* )(unsigned long)vin0;
  le<uint>* puVar2;
  le<uint>* in_r1 = (le<uint>* )(unsigned long)vin1;
  le<uint>* puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)(unsigned)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)(unsigned)((int)puVar3 + -3);
        *(char *)(unsigned)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)(unsigned)((int)puVar3 + -2);
          *(char *)(unsigned)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)(unsigned)((int)puVar2 + 3) = *(char *)(unsigned)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}

__asm__(".globl FUN_8c0108fc\n.set FUN_8c0108fc, FUN_8c0108fc_def\n");

}
//@unit 8c010960
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010960_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010960");
  return (unsigned)sh4_interp(0x8c010960, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010960\n.set FUN_8c010960, FUN_8c010960_def\n");
}
//@unit 8c010998
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
char * FUN_8c010998_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010998");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char *in_r0 = (char *)(unsigned long)vin0;
  undefined4 uVar2;
  char *in_r1 = (char *)(unsigned long)vin1;
  char *pcVar3;
  
  if (((uint)in_r1 & 3) == 0 && ((uint)in_r0 & 3) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0108fc(ar4,vr5,vr6,vr7));
    return (char *)(unsigned)uVar2;
  }
  cVar1 = *in_r1;
  pcVar3 = in_r0;
  while( true ) {
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[1];
    pcVar3[1] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[2];
    pcVar3[2] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[3];
    in_r1 = in_r1 + 4;
    pcVar3[3] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *in_r1;
    pcVar3 = pcVar3 + 4;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c010998\n.set FUN_8c010998, FUN_8c010998_def\n");

}
//@unit 8c0109e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_strcmp(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c0109e8_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_strcmp(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0109e8\n.set FUN_8c0109e8, FUN_8c0109e8_def\n");

}
//@unit 8c010a90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010a90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010a90");
  return (unsigned)sh4_interp(0x8c010a90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010a90\n.set FUN_8c010a90, FUN_8c010a90_def\n");
}
//@unit 8c010ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010ab4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010ab4");
  return (unsigned)sh4_interp(0x8c010ab4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010ab4\n.set FUN_8c010ab4, FUN_8c010ab4_def\n");
}
//@unit 8c010ad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010ad4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010ad4");
  return (unsigned)sh4_interp(0x8c010ad4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010ad4\n.set FUN_8c010ad4, FUN_8c010ad4_def\n");
}
//@unit 8c010af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c010af8_def(char *ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(unsigned)(ar6 + -1 + ar5);
  pbVar1 = (byte *)(unsigned)(ar4 + ar6 + -1);
  iVar3 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar3 = (uint)*pbVar1 + (uint)*pbVar2 + iVar3;
      *pbVar1 = (byte)iVar3;
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar3,0x100,vr6,vr7));
      pbVar1 = pbVar1 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl FUN_8c010af8\n.set FUN_8c010af8, FUN_8c010af8_def\n");

}
//@unit 8c010b08
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c010b08_def(char *ar4,int ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010b08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  undefined4 unaff_r13 = 0;
  int iVar2;
  
  pbVar1 = (byte *)(unsigned)(ar4 + ar5);
  iVar2 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar2 = (uint)*pbVar1 + (uint)(byte)*ar6 + iVar2;
      *pbVar1 = (byte)iVar2;
      ain0 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar2,unaff_r13,vr6,vr7));
      pbVar1 = pbVar1 + -1;
      ar6 = ar6 + -1;
      iVar2 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl FUN_8c010b08\n.set FUN_8c010b08, FUN_8c010b08_def\n");

}
//@unit 8c010b40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c010b40_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010b40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar5) {
    do {
      if (*ar4 != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar1 < ar5);
  }
  return 1;
}

__asm__(".globl FUN_8c010b40\n.set FUN_8c010b40, FUN_8c010b40_def\n");

}
//@unit 8c010b60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c010b60_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010b60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStackY_8028 [8];
  undefined1 auStackY_8020 [32748];
  
  puVar5 = (fr0_ + (int)0xffffffcc);
  puVar8 = (fr0_ + (int)0xffffffcc);
  uVar4 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x30)) >> 0x10),(undefined2)ar4);
  puVar6 = ((undefined1 *)(fr0_ - 0x20));
  if (ar6 < 1) {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012b1c(-ar6,(fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),ar7));
    iVar2 = (int)(short)uVar4;
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c0129b4((fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),iVar2,ar5));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012b1c(ar6,(fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),ar7));
    iVar2 = (int)(short)uVar4;
    (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c010c60((fr0_ + (int)0xffffffcc),((undefined1 *)(fr0_ - 0x20)),iVar2,ar5));
    puVar8 = puVar5;
  }
  iVar9 = 0x3f - (short)(*(le<undefined4>* )(fr0_ - 0x34));
  iVar3 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); unsigned long ri1_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c0105c4(puVar8,puVar6,iVar2,ar5); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012e00(((undefined1 *)(fr0_ - 0x20)),9,0x42 - (short)iVar9,ar5));
  iVar7 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar7 < 9) {
    do {
      sVar1 = (short)iVar2;
      ((undefined1 *)(fr0_ - 0x20))[sVar1] = ((undefined1 *)(fr0_ - 0x20))[sVar1 - iVar7];
      iVar2 = sVar1 + -1;
    } while (iVar7 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar8 = ((undefined1 *)(fr0_ - 0x20)) + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = 0;
    sVar1 = (short)iVar2;
  }
  iVar9 = iVar9 + iVar3 * -8;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 104)); FUN_8c012da8(((undefined1 *)(fr0_ - 0x20)),9,iVar9,ar5); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c012c70(((undefined1 *)(fr0_ - 0x20)),0x40,iVar9,ar5));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 104)), memmove(ar7,((undefined1 *)(fr0_ - 0x20)),8,ar5));
  return uVar4;
}

__asm__(".globl FUN_8c010b60\n.set FUN_8c010b60, FUN_8c010b60_def\n");

}
//@unit 8c010c60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c010c60_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c010c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *a6;
  int iVar3;
  char *ain0;
  
  uVar2 = ar7;
  (vsp = ((unsigned long)(fr0_ - 72)), memset(&(*(char *)(fr0_ - 0x2c)),0,4,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memmove(&(*(char *)(fr0_ - 0x28)),uVar2,8,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memset(((undefined1 *)(fr0_ - 0x38)),0,4,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x34)),ar5,8,ar7));
  a6 = (undefined1 *)(unsigned)0x10;
  (vsp = ((unsigned long)(fr0_ - 72)), memset(((undefined1 *)(fr0_ - 0x48)),0,0x10,ar7));
  ain0 = &(*(char *)(fr0_ - 0x3d));
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(((undefined1 *)(fr0_ - 0x48)),0xc,a6,ar7));
    ar7 = 0xc;
    a6 = ((undefined1 *)(fr0_ - 0x38));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012eac(0,&(*(char *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x38)),0xc));
    if (iVar1 < 0) {
      a6 = (undefined1 *)(unsigned)0xc;
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c010af8(&(*(char *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x38)),0xc,ar7); });
    }
    else {
      *ain0 = *ain0 + '\x01';
    }
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(&(*(char *)(fr0_ - 0x2c)),0xc,a6,ar7));
  }
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012d5c(((undefined1 *)(fr0_ - 0x48)),0x10,a6,ar7));
  }
  if ((((((*(char *)(fr0_ - 0x2c)) != '\0') || ((*(char *)(fr0_ - 0x2b)) != '\0')) || ((*(char *)(fr0_ - 0x2a)) != '\0')) ||
      ((((*(char *)(fr0_ - 0x29)) != '\0' || ((*(char *)(fr0_ - 0x28)) != '\0')) ||
       (((*(char *)(fr0_ - 0x27)) != '\0' || (((*(char *)(fr0_ - 0x26)) != '\0' || ((*(char *)(fr0_ - 0x25)) != '\0')))))))) ||
     (((*(char *)(fr0_ - 0x24)) != '\0' || ((((*(char *)(fr0_ - 0x23)) != '\0' || ((*(char *)(fr0_ - 0x22)) != '\0')) || ((*(char *)(fr0_ - 0x21)) != '\0'))))))
  {
    (*(byte *)(fr0_ - 0x3c)) = (*(byte *)(fr0_ - 0x3c)) | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  if (((((*(byte *)(fr0_ - 0x44)) != 0) || ((*(char *)(fr0_ - 0x43)) != '\0')) ||
      ((((*(char *)(fr0_ - 0x42)) != '\0' || (((*(char *)(fr0_ - 0x41)) != '\0' || ((*(char *)(fr0_ - 0x40)) != '\0')))) || ((*(char *)(fr0_ - 0x3f)) != '\0')))
      ) || ((((*(char *)(fr0_ - 0x3e)) != '\0' || (*ain0 != '\0')) || ((*(byte *)(fr0_ - 0x3c)) != 0)))) {
    while (((*(byte *)(fr0_ - 0x44)) & 0x80) == 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012854(&(*(byte *)(fr0_ - 0x44)),9,a6,ar7));
      *ar4 = *ar4 + -1;
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), memmove(ar5,&(*(byte *)(fr0_ - 0x44)),9,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c010c60\n.set FUN_8c010c60, FUN_8c010c60_def\n");

}
//@unit 8c010df4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010df4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010df4");
  return (unsigned)sh4_interp(0x8c010df4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010df4\n.set FUN_8c010df4, FUN_8c010df4_def\n");
}
//@unit 8c010e38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010e38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010e38");
  return (unsigned)sh4_interp(0x8c010e38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010e38\n.set FUN_8c010e38, FUN_8c010e38_def\n");
}
//@unit 8c010e84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c010e84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c010e84");
  return (unsigned)sh4_interp(0x8c010e84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c010e84\n.set FUN_8c010e84, FUN_8c010e84_def\n");
}
//@unit 8c0115c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0115c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0115c4");
  return (unsigned)sh4_interp(0x8c0115c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0115c4\n.set FUN_8c0115c4, FUN_8c0115c4_def\n");
}
//@unit 8c0117ce
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0117ce_def(char *ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0117ce");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *ar6;
  if (iVar2 == 1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), memmove(ar6[1],ar4,ar5,vr7));
    ar6[1] = ar6[1] + ar5;
    ar6[2] = ar6[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *ar4;
        ar4 = ar4 + 1;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)((uint)ar6[3])))((int)cVar1,ar6[1],vr6,vr7));
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        ar6[2] = ar6[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0117ce\n.set FUN_8c0117ce, FUN_8c0117ce_def\n");

}
//@unit 8c0117da
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0117da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0117da");
  return (unsigned)sh4_interp(0x8c0117da, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0117da\n.set FUN_8c0117da, FUN_8c0117da_def\n");
}
//@unit 8c011826
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c011826_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c011826");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *ar4;
  if (iVar1 == 1) {
    *(undefined1 *)(unsigned)(uint)ar4[1] = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c011826\n.set FUN_8c011826, FUN_8c011826_def\n");

}
//@unit 8c011836
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c011836_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c011836");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*ar4 == 1) {
    return 0;
  }
  return (int)*(char *)(unsigned)(ar4[1] + 0x10) & 0x40;
}

__asm__(".globl FUN_8c011836\n.set FUN_8c011836, FUN_8c011836_def\n");

}
//@unit 8c011850
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011850_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011850");
  return (unsigned)sh4_interp(0x8c011850, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011850\n.set FUN_8c011850, FUN_8c011850_def\n");
}
//@unit 8c01186c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01186c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01186c");
  return (unsigned)sh4_interp(0x8c01186c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01186c\n.set FUN_8c01186c, FUN_8c01186c_def\n");
}
//@unit 8c011960
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011960_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011960");
  return (unsigned)sh4_interp(0x8c011960, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011960\n.set FUN_8c011960, FUN_8c011960_def\n");
}
//@unit 8c011b44
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011b44_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011b44");
  return (unsigned)sh4_interp(0x8c011b44, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011b44\n.set FUN_8c011b44, FUN_8c011b44_def\n");
}
//@unit 8c011b9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011b9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011b9c");
  return (unsigned)sh4_interp(0x8c011b9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011b9c\n.set FUN_8c011b9c, FUN_8c011b9c_def\n");
}
//@unit 8c011bfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011bfc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011bfc");
  return (unsigned)sh4_interp(0x8c011bfc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011bfc\n.set FUN_8c011bfc, FUN_8c011bfc_def\n");
}
//@unit 8c011c5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011c5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011c5c");
  return (unsigned)sh4_interp(0x8c011c5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011c5c\n.set FUN_8c011c5c, FUN_8c011c5c_def\n");
}
//@unit 8c011d50
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011d50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011d50");
  return (unsigned)sh4_interp(0x8c011d50, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011d50\n.set FUN_8c011d50, FUN_8c011d50_def\n");
}
//@unit 8c011e10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011e10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011e10");
  return (unsigned)sh4_interp(0x8c011e10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011e10\n.set FUN_8c011e10, FUN_8c011e10_def\n");
}
//@unit 8c011f18
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c011f18_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c011f18");
  return (unsigned)sh4_interp(0x8c011f18, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c011f18\n.set FUN_8c011f18, FUN_8c011f18_def\n");
}
//@unit 8c012090
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c012090_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c012090");
  return (unsigned)sh4_interp(0x8c012090, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c012090\n.set FUN_8c012090, FUN_8c012090_def\n");
}
//@unit 8c0121bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0121bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0121bc");
  return (unsigned)sh4_interp(0x8c0121bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0121bc\n.set FUN_8c0121bc, FUN_8c0121bc_def\n");
}
//@unit 8c012328
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c012328_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c012328");
  return (unsigned)sh4_interp(0x8c012328, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c012328\n.set FUN_8c012328, FUN_8c012328_def\n");
}
//@unit 8c01243c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01243c_def(undefined4 ar4,char *ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01243c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int ar6_00;
  int iVar6;
  int ain0;
  
  (*(le<int>* )(fr0_ - 0x34)) = 1;
  pcVar5 = ar5 + ar6;
  *pcVar5 = '\0';
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x28)),ar4,8,ar7));
  (*(le<int>* )(fr0_ - 0x48)) = ar6 + -1;
  (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c1255f0) + (*(le<int>* )(fr0_ - 0x48)) * 8));
  (*(le<int>* )(fr0_ - 0x3c)) = ar6;
  do {
    if ((*(le<int>* )(fr0_ - 0x48)) < 0) {
      return iVar2;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468((*(le<int>* )(fr0_ - 0x3c)),5,vr6,vr7));
    iVar1 = (iVar2 + 1) * -2;
    iVar6 = iVar1 + 8;
    ar6_00 = 8 - iVar6;
    (vsp = ((unsigned long)(fr0_ - 72)), memmove(((undefined1 *)(fr0_ - 0x28)) + iVar1,((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) + iVar6,ar6_00,ar7));
    iVar4 = 8;
    (*(le<int>* )(fr0_ - 0x44)) = 0;
    ain0 = 0;
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012f24(((undefined1 *)(fr0_ - 0x28)) + iVar6,((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00,ar7));
      if (-1 < iVar2) {
        ar7 = ar6_00;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012eac(0,((undefined1 *)(fr0_ - 0x28)) + iVar6,((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00));
        (*(le<int>* )(fr0_ - 0x44)) = (*(le<int>* )(fr0_ - 0x44)) + iVar4;
        (*(le<int>* )(fr0_ - 0x34)) = iVar2;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      iVar2 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c012da8(((undefined1 *)(fr0_ - 0x28)) + iVar1,ar6_00,1,ar7); });
      ain0 = ain0 + 1;
    } while (ain0 < 4);
    cVar3 = (char)(*(le<int>* )(fr0_ - 0x44)) + '0';
    if ((*(le<int>* )(fr0_ - 0x34)) == 0) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar3;
      while (pcVar5 = pcVar5 + -1, ar5 <= pcVar5) {
        *pcVar5 = '0';
      }
      return iVar2;
    }
    pcVar5 = pcVar5 + -1;
    *pcVar5 = cVar3;
    (*(le<int>* )(fr0_ - 0x48)) = (*(le<int>* )(fr0_ - 0x48)) + -1;
    (*(le<unsigned>* )(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ - 0x38)) + -8));
    (*(le<int>* )(fr0_ - 0x3c)) = (*(le<int>* )(fr0_ - 0x3c)) + -1;
  } while( true );
}

__asm__(".globl FUN_8c01243c\n.set FUN_8c01243c, FUN_8c01243c_def\n");

}
//@unit 8c01256c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01256c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01256c");
  return (unsigned)sh4_interp(0x8c01256c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01256c\n.set FUN_8c01256c, FUN_8c01256c_def\n");
}
//@unit 8c0125b6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0125b6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0125b6");
  return (unsigned)sh4_interp(0x8c0125b6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0125b6\n.set FUN_8c0125b6, FUN_8c0125b6_def\n");
}
//@unit 8c012734
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c012734_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c012734");
  return (unsigned)sh4_interp(0x8c012734, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c012734\n.set FUN_8c012734, FUN_8c012734_def\n");
}
//@unit 8c012854
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012854_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012854");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar1 = 0x80;
  uVar2 = 0;
  pbVar3 = ar4 + ar5 + -1;
  pbVar4 = pbVar3;
  for (; ar4 <= pbVar3; pbVar3 = pbVar3 + -1) {
    bVar5 = uVar2 != 0;
    uVar2 = *pbVar3 & uVar1;
    *pbVar3 = *pbVar3 << 1;
    if (bVar5) {
      *pbVar4 = *pbVar4 | 1;
    }
    pbVar4 = pbVar4 + -1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c012854\n.set FUN_8c012854, FUN_8c012854_def\n");

}
//@unit 8c01289c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01289c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01289c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)(short)(8 - (short)ar6);
  if (uVar7 != 0) {
    pbVar5 = ar4 + ar5 + -1;
    if ((int)uVar7 < 0) {
      uVar2 = (int)0xff >> (~uVar7 & 0x1f) + 1;
    }
    else {
      uVar2 = (int)0xff << (uVar7 & 0x1f);
    }
    uVar6 = 0;
    while (ar4 <= pbVar5) {
      uVar4 = (uint)(short)ar6;
      bVar1 = *pbVar5;
      if ((int)uVar4 < 0) {
        bVar3 = (byte)((uint)(int)(char)*pbVar5 >> (~uVar4 & 0x1f) + 1);
      }
      else {
        bVar3 = (byte)((int)(char)*pbVar5 << (uVar4 & 0x1f));
      }
      *pbVar5 = bVar3;
      *pbVar5 = *pbVar5 | (byte)uVar6;
      pbVar5 = pbVar5 + -1;
      uVar6 = (int)(char)bVar1 & uVar2 & 0xff;
      uVar4 = -uVar7;
      if ((int)uVar4 < 0) {
        uVar6 = uVar6 >> (~uVar4 & 0x1f) + 1;
      }
      else {
        uVar6 = uVar6 << (uVar4 & 0x1f);
      }
    }
    if ((uVar6 & 0xff) != 0) {
      return 1;
    }
    in_r0 = 0;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c01289c\n.set FUN_8c01289c, FUN_8c01289c_def\n");

}
//@unit 8c0128e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0128e8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0128e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 120)), memset(ar6,0,0x10,ar7));
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(unsigned)(iVar4 + ar5) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 120)), memset(((byte *)(fr0_ - 0x34)),0,0x10,ar7));
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        ar6_00 = (uint)*(byte *)(unsigned)(ar4 + sVar3) * (uint)*(byte *)(unsigned)(ar5 + iVar4);
        (*(le<undefined4>* )(fr0_ - 0x3c)) =
             CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x3c)) >> 0x10),
                      (ushort)((byte *)(fr0_ - 0x34))[iVar1 + 1] + (short)ar6_00);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c012a40(((byte *)(fr0_ - 0x34)) + iVar1,(fr0_ + (int)0xffffffc4),ar6_00,ar7));
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), memmove(ar6 + 7,((byte *)(fr0_ - 0x34)) + 7,9,ar7));
      }
      else {
        iVar4 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x3c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c010af8(iVar4 + ar6,((byte *)(fr0_ - 0x34)) + iVar4,9,ar7); });
      }
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return iVar4;
}

__asm__(".globl FUN_8c0128e8\n.set FUN_8c0128e8, FUN_8c0128e8_def\n");

}
//@unit 8c0129b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0129b4_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0129b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  byte *ar6_00;
  
  puVar1 = ((void *)(unsigned)0x8c0128e8);
  *ar4 = (short)ar6 + *ar4;
  ar6_00 = ((byte *)(fr0_ - 0x1c));
  (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(puVar1)))(ar5,ar7,((byte *)(fr0_ - 0x1c)),ar7));
  if ((((byte *)(fr0_ - 0x1c))[0] & 0x80) == 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012854(((byte *)(fr0_ - 0x1c)),0x10,ar6_00,ar7));
  }
  else {
    *ar4 = *ar4 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012e00(((byte *)(fr0_ - 0x1c)),0x10,0x42,ar7));
  (*(byte *)(fr0_ - 0x14)) = (*(byte *)(fr0_ - 0x14)) & 0xe0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), memmove(ar5,((byte *)(fr0_ - 0x1c)),9,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c0129b4\n.set FUN_8c0129b4, FUN_8c0129b4_def\n");

}
//@unit 8c012a24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c012a24_def(undefined1 *ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012a24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = ar4 + 4;
  iVar4 = 0x18;
  do {
    uVar3 = -iVar4;
    if ((int)uVar3 < 0) {
      uVar2 = (undefined1)(*ar5 >> (~uVar3 & 0x1f) + 1);
    }
    else {
      uVar2 = (undefined1)(*ar5 << (uVar3 & 0x1f));
    }
    *ar4 = uVar2;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < puVar1);
  return puVar1;
}

__asm__(".globl FUN_8c012a24\n.set FUN_8c012a24, FUN_8c012a24_def\n");

}
//@unit 8c012a40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
char * FUN_8c012a40_def(char *ar4,le<ushort>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012a40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = ar4 + 2;
  iVar4 = 8;
  do {
    uVar2 = -iVar4;
    if ((int)uVar2 < 0) {
      cVar3 = (char)(*ar5 >> (~uVar2 & 0x1f) + 1);
    }
    else {
      cVar3 = (char)*ar5 << (uVar2 & 0x1f);
    }
    *ar4 = cVar3;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < pcVar1);
  return pcVar1;
}

__asm__(".globl FUN_8c012a40\n.set FUN_8c012a40, FUN_8c012a40_def\n");

}
//@unit 8c012a60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012a60_def(undefined4 ar4,le<short>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012a60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  byte *ar4_00;
  
  *ar5 = (short)ar4 + 0x3f;
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c012af8(ar4,((byte *)(fr0_ - 0x1c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), memset(ar6,0,8,ar7));
  iVar3 = 0;
  ar6_00 = 0;
  for (ar4_00 = ((byte *)(fr0_ - 0x1c)); *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
    iVar3 = iVar3 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
    ar6_00 = ar6_00 + 1;
  }
  ({ unsigned long ri0_ = (unsigned long)(ar6); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c01289c(ar4_00,8 - iVar3,ar6_00,ar7); });
  *ar5 = *ar5 - (short)ar6_00;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), memmove(ar6,ar4_00,8 - iVar3,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c012a60\n.set FUN_8c012a60, FUN_8c012a60_def\n");

}
//@unit 8c012af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,(&(*(undefined1 *)(unsigned)0x8c125678)) + ar4 * 8,8,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c012af8\n.set FUN_8c012af8, FUN_8c012af8_def\n");

}
//@unit 8c012b1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012b1c_def(int ar4,le<short>* ar5,undefined *ar6,undefined *ar7)

{
  TRACE_ENTER("FUN_8c012b1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *ar7_00;
  le<short>* psVar7;
  bool bVar8;
  
  bVar8 = ar4 < 0;
  if (bVar8) {
    ar4 = -ar4;
  }
  uVar6 = (uint)bVar8;
  iVar4 = 0x1b;
  (*(le<short>*  *)(fr0_ - 0x40)) = ar5;
  (*(undefined * *)(fr0_ - 0x3c)) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468(ar4,0x1b,vr6,vr7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010614(ar4,iVar4,vr6,vr7));
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    ((le<short>* )(fr0_ - 0x48))[0] = -0x5a;
    (vsp = ((unsigned long)(fr0_ - 72)), memmove(((byte *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125798),8,ar7));
    (*(undefined1 *)(fr0_ - 0x24)) = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 72)), memset(((byte *)(fr0_ - 0x2c)),0,9,ar7));
    ((byte *)(fr0_ - 0x2c))[0] = ((byte *)(fr0_ - 0x2c))[0] | 0x80;
    ((le<short>* )(fr0_ - 0x48))[0] = 0;
  }
  iVar4 = 0;
  psVar7 = (le<short int>*)(((undefined1 *)(unsigned)0x8c1257d8) + uVar6 * 8);
  ar7_00 = ((undefined1 *)(unsigned)0x8c125758) + uVar6 * 0x40;
  (*(byte * *)(fr0_ - 0x44)) = ((byte *)(fr0_ - 0x2c));
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = ar7_00;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0129b4(((le<short>* )(fr0_ - 0x48)),((byte *)(fr0_ - 0x2c)),iVar5,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012c70(((byte *)(fr0_ - 0x2c)),0x40,iVar5,ar7));
      if (iVar5 != 0) {
        ((le<short>* )(fr0_ - 0x48))[0] = ((le<short>* )(fr0_ - 0x48))[0] + 1;
        *(*(byte * *)(fr0_ - 0x44)) = *(*(byte * *)(fr0_ - 0x44)) | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    ar7_00 = ar7_00 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012a60(iVar2,(*(le<short>*  *)(fr0_ - 0x40)),(*(undefined * *)(fr0_ - 0x3c)),ar7));
    iVar2 = (int)*(*(le<short>*  *)(fr0_ - 0x40));
    ar7 = (*(undefined * *)(fr0_ - 0x3c));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0129b4(((le<short>* )(fr0_ - 0x48)),((byte *)(fr0_ - 0x2c)),iVar2,(*(undefined * *)(fr0_ - 0x3c))));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012c70(((byte *)(fr0_ - 0x2c)),0x40,iVar2,ar7));
    if (iVar2 == 1) {
      ((le<short>* )(fr0_ - 0x48))[0] = ((le<short>* )(fr0_ - 0x48))[0] + 1;
      *(*(byte * *)(fr0_ - 0x44)) = *(*(byte * *)(fr0_ - 0x44)) | 0x80;
    }
  }
  *(*(le<short>*  *)(fr0_ - 0x40)) = ((le<short>* )(fr0_ - 0x48))[0];
  uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), memmove((*(undefined * *)(fr0_ - 0x3c)),((byte *)(fr0_ - 0x2c)),8,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c012b1c\n.set FUN_8c012b1c, FUN_8c012b1c_def\n");

}
//@unit 8c012c70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012c70_def(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012c70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 d;
  uint uVar7;
  byte *pbVar8;
  
  d = 8;
  bVar2 = false;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar5,8,vr6,vr7));
  pbVar8 = ar4 + iVar3;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 7) + 1;
  }
  else {
    uVar4 = ar5 & 7;
  }
  uVar4 = -uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = 0x80 >> (~uVar4 & 0x1f) + 1;
  }
  else {
    uVar4 = 0x80 << (uVar4 & 0x1f);
  }
  uVar4 = uVar4 & 0xff;
  uVar7 = ar5 - 1;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(uVar7,d,vr6,vr7));
  pbVar6 = ar4 + iVar3;
  if ((int)uVar7 < 0) {
    uVar7 = ~(~uVar7 + 1 & 7) + 1;
  }
  else {
    uVar7 = uVar7 & 7;
  }
  uVar7 = -uVar7;
  if ((int)uVar7 < 0) {
    uVar7 = 0x80 >> (~uVar7 & 0x1f) + 1;
  }
  else {
    uVar7 = 0x80 << (uVar7 & 0x1f);
  }
  if ((*pbVar8 & uVar4) != 0) {
    uVar5 = (uint)*pbVar8;
    if (((uVar5 & (int)uVar4 >> 1) == 0) && (((int)uVar4 >> 2 & uVar5) == 0)) {
      if (((uint)*pbVar6 & uVar7 & 0xff) != 0) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (bVar2) {
    while ((bVar1 = (byte)uVar7, ((uint)*pbVar6 & uVar7 & 0xff) != 0 && (ar4 <= pbVar6))) {
      uVar7 = uVar7 << 1;
      *pbVar6 = *pbVar6 & ~bVar1;
      if ((uVar7 & 0xff) == 0) {
        uVar7 = 1;
        pbVar6 = pbVar6 + -1;
      }
    }
    if (pbVar6 < ar4) {
      return 1;
    }
    *pbVar6 = *pbVar6 | bVar1;
  }
  return 0;
}

__asm__(".globl FUN_8c012c70\n.set FUN_8c012c70, FUN_8c012c70_def\n");

}
//@unit 8c012d5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c012d5c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012d5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  pbVar1 = ar4;
  if (0 < ar5) {
    do {
      bVar4 = uVar2 != 0;
      uVar2 = *ar4 & 1;
      *ar4 = *ar4 >> 1;
      if (bVar4) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar3 < ar5);
  }
  return uVar2;
}

__asm__(".globl FUN_8c012d5c\n.set FUN_8c012d5c, FUN_8c012d5c_def\n");

}
//@unit 8c012da8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012da8_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012da8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(short)(8 - (short)ar6);
  if (uVar6 != 0) {
    uVar3 = -uVar6;
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = (int)0xff >> (~uVar3 & 0x1f) + 1;
    }
    else {
      uVar3 = (int)0xff << (uVar3 & 0x1f);
    }
    iVar7 = 0;
    if (0 < ar5) {
      do {
        bVar1 = *ar4;
        uVar4 = -(int)(short)ar6;
        iVar7 = iVar7 + 1;
        if ((int)uVar4 < 0) {
          bVar2 = *ar4 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          bVar2 = *ar4 << (uVar4 & 0x1f);
        }
        *ar4 = bVar2;
        uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
        *ar4 = *ar4 | (byte)uVar5;
        if ((int)uVar6 < 0) {
          uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar5 = uVar4 << (uVar6 & 0x1f);
        }
        ar4 = ar4 + 1;
      } while (iVar7 < ar5);
    }
    if ((uVar5 & 0xff) == 0) {
      in_r0 = 0;
    }
    else {
      in_r0 = 1;
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c012da8\n.set FUN_8c012da8, FUN_8c012da8_def\n");

}
//@unit 8c012e00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c012e00_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012e00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6,8,vr6,vr7));
  pbVar6 = (byte *)(unsigned)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(unsigned)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c012e00\n.set FUN_8c012e00, FUN_8c012e00_def\n");

}
//@unit 8c012e04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c012e04_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012e04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(ar6,in_r0,vr6,vr7));
  pbVar6 = (byte *)(unsigned)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(unsigned)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c012e04\n.set FUN_8c012e04, FUN_8c012e04_def\n");

}
//@unit 8c012e84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012e84_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012e84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*ar4 != '\0') && ((int)0x200 <= (int)ar4 - ar5)) {
    *(le<undefined4>* )(unsigned)0x8c2787a8 = (int)0x450;
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c012e84\n.set FUN_8c012e84, FUN_8c012e84_def\n");

}
//@unit 8c012eac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012eac_def(int ar4,byte *ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c012eac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  pbVar5 = (byte *)(unsigned)(ar7 + -1 + ar6);
  pbVar3 = ar5 + ar7 + -1;
  uVar6 = 0;
  bVar1 = true;
  pbVar4 = pbVar3 + 1;
  for (; ar5 <= pbVar3; pbVar3 = pbVar3 + -1) {
    (*(le<int>* )(fr0_ - 0x14)) = ((uint)*pbVar3 - (uint)*pbVar5) - uVar6;
    bVar7 = (*(le<int>* )(fr0_ - 0x14)) < 0;
    if (bVar7) {
      (*(le<int>* )(fr0_ - 0x14)) = 0x100 + (*(le<int>* )(fr0_ - 0x14));
    }
    uVar6 = (uint)bVar7;
    if ((*(le<int>* )(fr0_ - 0x14)) != 0) {
      bVar1 = false;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (byte)(*(le<int>* )(fr0_ - 0x14));
    pbVar5 = pbVar5 + -1;
  }
  if ((uVar6 == 1) && (ar4 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c012eac\n.set FUN_8c012eac, FUN_8c012eac_def\n");

}
//@unit 8c012f24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012f24_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c012f24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl FUN_8c012f24\n.set FUN_8c012f24, FUN_8c012f24_def\n");

}
//@unit 8c012f58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c012f58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c012f58");
  return (unsigned)sh4_interp(0x8c012f58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c012f58\n.set FUN_8c012f58, FUN_8c012f58_def\n");
}
//@unit 8c013060
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013060_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013060");
  return (unsigned)sh4_interp(0x8c013060, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013060\n.set FUN_8c013060, FUN_8c013060_def\n");
}
//@unit 8c013374
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013374_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013374");
  return (unsigned)sh4_interp(0x8c013374, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013374\n.set FUN_8c013374, FUN_8c013374_def\n");
}
//@unit 8c013a72
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c013a72_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013a72");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  char *pcVar1;
  char *pcVar2;
  
  if ('4' < ar4[ar5]) {
    pcVar1 = ar4 + ar5 + -1;
    ar4[ar5] = '0';
    *pcVar1 = *pcVar1 + '\x01';
    pcVar2 = pcVar1;
    for (; ar4 < pcVar1; pcVar1 = pcVar1 + -1) {
      if ('9' < *pcVar1) {
        *pcVar2 = *pcVar2 + -10;
        pcVar2[-1] = pcVar2[-1] + '\x01';
      }
      pcVar2 = pcVar2 + -1;
    }
    pcVar1 = ar4 + 1;
    if ('9' < *pcVar1) {
      *pcVar1 = *pcVar1 + -10;
      *ar4 = *ar4 + '\x01';
    }
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c013a72\n.set FUN_8c013a72, FUN_8c013a72_def\n");

}
//@unit 8c013adc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c013adc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013adc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}

__asm__(".globl FUN_8c013adc\n.set FUN_8c013adc, FUN_8c013adc_def\n");

}
//@unit 8c013aec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013aec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013aec");
  return (unsigned)sh4_interp(0x8c013aec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013aec\n.set FUN_8c013aec, FUN_8c013aec_def\n");
}
//@unit 8c013b3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013b3c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013b3c");
  return (unsigned)sh4_interp(0x8c013b3c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013b3c\n.set FUN_8c013b3c, FUN_8c013b3c_def\n");
}
//@unit 8c013b8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013b8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013b8c");
  return (unsigned)sh4_interp(0x8c013b8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013b8c\n.set FUN_8c013b8c, FUN_8c013b8c_def\n");
}
//@unit 8c013bdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c013bdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013bdc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0143f0(ar4,0,10,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c013bdc\n.set FUN_8c013bdc, FUN_8c013bdc_def\n");

}
//@unit 8c013be8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013be8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013be8");
  return (unsigned)sh4_interp(0x8c013be8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013be8\n.set FUN_8c013be8, FUN_8c013be8_def\n");
}
//@unit 8c013c38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013c38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013c38");
  return (unsigned)sh4_interp(0x8c013c38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013c38\n.set FUN_8c013c38, FUN_8c013c38_def\n");
}
//@unit 8c013c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013c88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013c88");
  return (unsigned)sh4_interp(0x8c013c88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013c88\n.set FUN_8c013c88, FUN_8c013c88_def\n");
}
//@unit 8c013cd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013cd8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013cd8");
  return (unsigned)sh4_interp(0x8c013cd8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013cd8\n.set FUN_8c013cd8, FUN_8c013cd8_def\n");
}
//@unit 8c013d28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013d28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013d28");
  return (unsigned)sh4_interp(0x8c013d28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013d28\n.set FUN_8c013d28, FUN_8c013d28_def\n");
}
//@unit 8c013d78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013d78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013d78");
  return (unsigned)sh4_interp(0x8c013d78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013d78\n.set FUN_8c013d78, FUN_8c013d78_def\n");
}
//@unit 8c013dec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c013dec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013dec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}

__asm__(".globl FUN_8c013dec\n.set FUN_8c013dec, FUN_8c013dec_def\n");

}
//@unit 8c013dfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013dfc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013dfc");
  return (unsigned)sh4_interp(0x8c013dfc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013dfc\n.set FUN_8c013dfc, FUN_8c013dfc_def\n");
}
//@unit 8c013e4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c013e4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c013e4c");
  return (unsigned)sh4_interp(0x8c013e4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c013e4c\n.set FUN_8c013e4c, FUN_8c013e4c_def\n");
}
//@unit 8c013ec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c013ec0_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013ec0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl FUN_8c013ec0\n.set FUN_8c013ec0, FUN_8c013ec0_def\n");

}
//@unit 8c013ef4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  memmove_def(le<undefined4>* ar4,le<undefined4>* ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("memmove");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined2 uVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  le<undefined4>* puVar8;
  
  if ((ar4 != ar5) && (ar6 != 0)) {
    uVar6 = ar6 >> 1;
    uVar5 = (uint)ar4 | (uint)ar5 | ar6;
    uVar7 = ar6 >> 2;
    if (ar4 < ar5) {
      puVar3 = ar4;
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            uVar4 = *ar5;
            ar5 = ar5 + 1;
            uVar7 = uVar7 - 1;
            *puVar3 = uVar4;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        else {
          do {
            uVar2 = *(le<undefined2>* )(unsigned)ar5;
            ar5 = (le<undefined4>* )(unsigned)((int)ar5 + 2);
            uVar6 = uVar6 - 1;
            *(le<undefined2>* )(unsigned)puVar3 = uVar2;
            puVar3 = (le<undefined4>* )(unsigned)((int)puVar3 + 2);
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          uVar1 = *(undefined1 *)(unsigned)ar5;
          ar5 = (le<undefined4>* )(unsigned)((int)ar5 + 1);
          ar6 = ar6 - 1;
          *(undefined1 *)(unsigned)puVar3 = uVar1;
          puVar3 = (le<undefined4>* )(unsigned)((int)puVar3 + 1);
        } while (ar6 != 0);
      }
    }
    else {
      puVar3 = (le<undefined4>* )(unsigned)((int)ar4 + ar6);
      puVar8 = (le<undefined4>* )(unsigned)((int)ar5 + ar6);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            puVar8 = puVar8 + -1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar8;
          } while (uVar7 != 0);
        }
        else {
          do {
            puVar8 = (le<undefined4>* )(unsigned)((int)puVar8 + -2);
            uVar6 = uVar6 - 1;
            puVar3 = (le<undefined4>* )(unsigned)((int)puVar3 + -2);
            *(le<undefined2>* )(unsigned)puVar3 = *(le<undefined2>* )(unsigned)puVar8;
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          puVar8 = (le<undefined4>* )(unsigned)((int)puVar8 + -1);
          ar6 = ar6 - 1;
          puVar3 = (le<undefined4>* )(unsigned)((int)puVar3 + -1);
          *(undefined1 *)(unsigned)puVar3 = *(undefined1 *)(unsigned)puVar8;
        } while (ar6 != 0);
      }
    }
  }
  return ar4;
}

__asm__(".globl guest_memmove\n.set guest_memmove, memmove_def\n");

}
//@unit 8c013fb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c013fb4_def(undefined1 *ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c013fb4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (ar4 != ar5) {
    if (ar4 < ar5) {
      uVar2 = 0;
      puVar3 = ar4;
      if (ar6 != 0) {
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          uVar2 = uVar2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < ar6);
      }
    }
    else {
      uVar2 = 0;
      puVar4 = ar4 + ar6;
      puVar3 = ar5 + ar6;
      if (ar6 != 0) {
        do {
          puVar3 = puVar3 + -1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar3;
        } while (uVar2 < ar6);
      }
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c013fb4\n.set FUN_8c013fb4, FUN_8c013fb4_def\n");

}
//@unit 8c013ff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_memset(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long memset_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_memset(ar4, ar5, ar6, ar7);
}
__asm__(".globl guest_memset\n.set guest_memset, memset_def\n");

}
//@unit 8c014010
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 free_if_nonnull_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  if (ar4 != 0) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb586(ar4,ar5,ar6,ar7));
  }
  return in_r0 = 0;
}

__asm__(".globl free_if_nonnull\n.set free_if_nonnull, free_if_nonnull_def\n");

}
//@unit 8c014028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c014028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = ((void *)(unsigned)0x8c1fb4b8);
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c12c4f0));
  while ((iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,ar5,ar6,ar7)), iVar3 == 0 && (*(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12c4f0)) != 0))
        ) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(puVar1)))(0,ar5,ar6,ar7));
  }
  return iVar3;
}

__asm__(".globl FUN_8c014028\n.set FUN_8c014028, FUN_8c014028_def\n");

}
//@unit 8c014064
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014064_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014064");
  return (unsigned)sh4_interp(0x8c014064, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014064\n.set FUN_8c014064, FUN_8c014064_def\n");
}
//@unit 8c0140b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0140b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0140b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c0140cc(1,ar5,(fr0_ + (int)0xfffffff0),ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0140b4\n.set FUN_8c0140b4, FUN_8c0140b4_def\n");

}
//@unit 8c0140cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0140cc_def(uint ar4,uint ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c0140cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  uint uVar3;
  le<int>* a6;
  uint ain0_00;
  int a5;
  uint ar5_00;
  uint uVar4;
  uint ar4_00;
  int iVar5;
  
  a6 = ar6;
  do {
    while( true ) {
      ain0_00 = (ar5 - ar4 >> 1) + ar4;
      a5 = (ain0_00 - 1) * ar6[1] + *ar6;
      ar5_00 = ar5;
      ar4_00 = ar4;
      while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
        while (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar6[2])))((ar4_00 - 1) * ar6[1] + *ar6,a5,a6,ar7)), uVar4 = ar5_00,
              iVar2 < 0) {
          ar4_00 = ar4_00 + 1;
        }
        while (ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((uint)ar6[2])))(a5,(uVar4 - 1) * ar6[1] + *ar6,a6,ar7)), ain0 < 0) {
          uVar4 = uVar4 - 1;
        }
        ar5_00 = uVar4;
        if (ar4_00 <= uVar4) {
          ar5_00 = uVar4 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar5 = (ar4_00 - 1) * ar6[1];
            ain0 = iVar5 + iVar2;
            cVar1 = *(char *)(unsigned)(ain0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (le<int>* )(unsigned)(ar5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(unsigned)(iVar5 + iVar2 + uVar3) = (char)*a6;
            *(char *)(unsigned)(ar5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (ar4_00 == ain0_00) {
            a5 = ar5_00 * ar6[1] + *ar6;
          }
          else if (uVar4 == ain0_00) {
            a5 = (ar4_00 - 1) * ar6[1] + *ar6;
          }
          ar4_00 = ar4_00 + 1;
        }
      }
      if (ar5 - ar4_00 <= ar5_00 - ar4) break;
      if (ar4 < ar5_00) {
        a6 = ar6;
        ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0140cc(ar4,ar5_00,ar6,ar7); });
      }
      ar4 = ar4_00;
      if (ar5 <= ar4_00) {
        return ain0;
      }
    }
    if (ar4_00 < ar5) {
      a6 = ar6;
      ain0 = ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0140cc(ar4_00,ar5,ar6,ar7); });
    }
    ar5 = ar5_00;
  } while (ar4 < ar5_00);
  return ain0;
}

__asm__(".globl FUN_8c0140cc\n.set FUN_8c0140cc, FUN_8c0140cc_def\n");

}
//@unit 8c014200
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint rand_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("rand");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)0x7fff;
  uVar2 = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12c4e8)) * 0x41c64e6d + (int)0x3039;
  *(le<uint>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12c4e8)) = uVar2;
  return uVar2 >> 0x10 & uVar1;
}

__asm__(".globl guest_rand\n.set guest_rand, rand_def\n");

}
//@unit 8c01422c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01422c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01422c");
  return (unsigned)sh4_interp(0x8c01422c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01422c\n.set FUN_8c01422c, FUN_8c01422c_def\n");
}
//@unit 8c014294
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014294_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014294");
  return (unsigned)sh4_interp(0x8c014294, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014294\n.set FUN_8c014294, FUN_8c014294_def\n");
}
//@unit 8c0142e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0142e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0142e4");
  return (unsigned)sh4_interp(0x8c0142e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0142e4\n.set FUN_8c0142e4, FUN_8c0142e4_def\n");
}
//@unit 8c014334
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_sprintf(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c014334_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_sprintf(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014334\n.set FUN_8c014334, FUN_8c014334_def\n");

}
//@unit 8c014370
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014370_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014370");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12c4e8)) = ar4;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c014370\n.set FUN_8c014370, FUN_8c014370_def\n");

}
//@unit 8c01437c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
char * FUN_8c01437c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01437c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = ar4; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
  }
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return ar4;
}

__asm__(".globl FUN_8c01437c\n.set FUN_8c01437c, FUN_8c01437c_def\n");

}
//@unit 8c01439c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01439c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01439c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0109e8(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01439c\n.set FUN_8c01439c, FUN_8c01439c_def\n");

}
//@unit 8c0143b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int log_message_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("log_message");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *ar4, ar4 = ar4 + 1, cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl log_message\n.set log_message, log_message_def\n");

}
//@unit 8c0143c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
char * FUN_8c0143c0_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0143c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = ar4;
  while( true ) {
    if (ar6 <= uVar2) {
      return ar4;
    }
    if (*ar5 == '\0') break;
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  }
  for (; uVar2 < ar6; uVar2 = uVar2 + 1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  return ar4;
}

__asm__(".globl FUN_8c0143c0\n.set FUN_8c0143c0, FUN_8c0143c0_def\n");

}
//@unit 8c0143f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0143f0_def(byte *ar4,le<undefined4>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0143f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  (*(le<uint>* )(fr0_ - 0x34)) = 0;
  (*(le<uint>* )(fr0_ - 0x30)) = 0;
  iVar6 = ar6;
  pbVar7 = ar4;
  while (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 0x40) != 0) {
    pbVar7 = pbVar7 + 1;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    (*(le<uint>* )(fr0_ - 0x30)) = (uint)(bVar1 == 0x2d);
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  if (ar6 == 0) {
    if (*pbVar7 == 0x30) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = (int)(char)*pbVar8;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x78) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar7 + 2,ar4,iVar6,ar7));
        if (iVar4 != 0) {
          return 0;
        }
        ar6 = 0x10;
        pbVar8 = pbVar7 + 2;
      }
      else {
        ar6 = 8;
      }
    }
    else {
      ar6 = 10;
    }
  }
  else if ((ar6 == 0x10) && (*pbVar7 == 0x30)) {
    pbVar8 = pbVar7 + 1;
    iVar4 = (int)(char)*pbVar8;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      pbVar8 = pbVar7 + 2;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2787a8) = 0x4b0;
  }
  else {
    if (ar6 < 0xb) {
      cVar3 = (char)ar6 + '/';
    }
    else {
      cVar3 = (char)ar6 + 'V';
    }
    iVar4 = (int)(char)*pbVar8;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 7) != 0) {
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 <= cVar3) {
        while (*pbVar8 == 0x30) {
          pbVar8 = pbVar8 + 1;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
          if (iVar4 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        (*(le<uint>* )(fr0_ - 0x34)) = 0;
        while( true ) {
          iVar4 = (int)(char)*pbVar8;
          if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 7) == 0) break;
          if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
          }
          if (cVar3 < iVar4) break;
          if (!bVar2) {
            if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 4) == 0) {
              iVar4 = (int)(char)*pbVar8;
              if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
              }
              iVar4 = iVar4 + -0x57;
            }
            else {
              iVar4 = (char)*pbVar8 + -0x30;
            }
            uVar5 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_01051c(((*(le<uint>* )(fr0_ - 0x30)) - iVar4) + 0x7fffffff,ar6,vr6,vr7));
            if (uVar5 < (*(le<uint>* )(fr0_ - 0x34))) {
              bVar2 = true;
            }
            else {
              (*(le<uint>* )(fr0_ - 0x34)) = ar6 * (*(le<uint>* )(fr0_ - 0x34)) + iVar4;
            }
          }
          pbVar8 = pbVar8 + 1;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
          if (iVar4 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c2787a8) = 0x44c;
          if ((*(le<uint>* )(fr0_ - 0x30)) == 0) {
            (*(le<uint>* )(fr0_ - 0x34)) = 0x7fffffff;
          }
          else {
            (*(le<uint>* )(fr0_ - 0x34)) = 0x80000000;
          }
        }
        else if ((*(le<uint>* )(fr0_ - 0x30)) != 0) {
          (*(le<uint>* )(fr0_ - 0x34)) = -(*(le<uint>* )(fr0_ - 0x34));
        }
      }
    }
    iVar4 = (int)(char)*pbVar8;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar7 = pbVar8;
    if (iVar4 == 0x75) {
      pbVar7 = pbVar8 + 1;
      iVar4 = (int)(char)*pbVar7;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x6c) {
        pbVar7 = pbVar8 + 2;
      }
    }
    iVar4 = (int)(char)*pbVar7;
    if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar7] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar8 = pbVar7;
    if (iVar4 == 0x6c) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (int)(char)*pbVar8;
      if (((((undefined1 *)(unsigned)0x8c125470))[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x75) {
        pbVar8 = pbVar7 + 2;
      }
    }
    iVar6 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c012e84(pbVar8,ar4,iVar6,ar7));
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (ar5 != (le<undefined4>* )(unsigned)0x0) {
    *ar5 = pbVar8;
    return (*(le<uint>* )(fr0_ - 0x34));
  }
  return (*(le<uint>* )(fr0_ - 0x34));
}

__asm__(".globl FUN_8c0143f0\n.set FUN_8c0143f0, FUN_8c0143f0_def\n");

}
//@unit 8c0146b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0146b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0146b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (((&(*(undefined1 *)(unsigned)0x8c125470))[ar4 & 0xff] & 2) != 0) {
    return ar4 - 0x20;
  }
  return ar4;
}

__asm__(".globl FUN_8c0146b4\n.set FUN_8c0146b4, FUN_8c0146b4_def\n");

}
//@unit 8c0146d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 vsprintf_like_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("vsprintf_like");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010e84(1,0,ar4,ar5));
  return uVar1;
}

__asm__(".globl vsprintf_like\n.set vsprintf_like, vsprintf_like_def\n");

}
//@unit 8c0146f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0146f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0146f8");
  return (unsigned)sh4_interp(0x8c0146f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0146f8\n.set FUN_8c0146f8, FUN_8c0146f8_def\n");
}
//@unit 8c014764
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014764");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<uint>* )(unsigned)(ar4 + 0x14) = *(le<uint>* )(unsigned)(ar4 + 0x14) | 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014790(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c014764\n.set FUN_8c014764, FUN_8c014764_def\n");

}
//@unit 8c014790
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c014790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014790");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x14) | 0x20;
  *(le<uint>* )(unsigned)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c014790\n.set FUN_8c014790, FUN_8c014790_def\n");

}
//@unit 8c0147a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
Class_129808_m0_0147a4_def
          (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129808_m0_0147a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3 = 0;
  double dVar5;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  undefined4 in_fr11 = 0;
  undefined4 in_fr10 = 0;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar2 = ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr5,in_fr3);
  }
  else {
    dVar5 = CONCAT44D(in_fr6,in_fr5);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr4,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr5,in_fr4);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(le<int>* )(unsigned)(ar4 + 4) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(le<double>* )(unsigned)(ar4 + 4) = dVar5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr7,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D(in_fr8,in_fr7);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr6,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr7,in_fr6);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(le<int>* )(unsigned)(ar4 + 8) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(le<double>* )(unsigned)(ar4 + 8) = dVar5;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr9,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D(in_fr10,in_fr9);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr8,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr9,in_fr8);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(le<int>* )(unsigned)(ar4 + 0xc) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(le<double>* )(unsigned)(ar4 + 0xc) = dVar5;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), rand(iVar2,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr11,SUB84(dVar5,0));
  }
  else {
    dVar5 = CONCAT44D((*(le<undefined4>* )(fr0_ - 0x1c)),in_fr11);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
    dVar5 = CONCAT44D(F32HI(dVar5) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(in_fr10,fVar3);
  }
  else {
    dVar4 = CONCAT44D(in_fr11,in_fr10);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) + F32HI(dVar4),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(le<int>* )(unsigned)(ar4 + 0x24) = (int)(D2U(dVar5) >> 0x20);
    dVar5 = CONCAT44D(*(le<undefined4>* )(unsigned)(ar4 + 0x24),*(le<undefined4>* )(unsigned)(ar4 + 0x18));
  }
  else {
    *(le<double>* )(unsigned)(ar4 + 0x24) = dVar5;
    in_xd0 = *(le<undefined8>* )(unsigned)(ar4 + 0x18);
    dVar5 = *(le<double>* )(unsigned)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar5) * F32HI(dVar5);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(le<float>* )(unsigned)(ar4 + 0x18) = fVar3;
  }
  else {
    *(le<undefined8>* )(unsigned)(ar4 + 0x18) = in_xd0;
  }
  if (cVar7 == '\0') {
    *(le<undefined4>* )(unsigned)(ar4 + 0x14) = s0;
  }
  else {
    *(le<undefined8>* )(unsigned)(ar4 + 0x14) = CONCAT44(s4,s0);
  }
  return 0x3c;
}

__asm__(".globl Class_129808_m0_0147a4\n.set Class_129808_m0_0147a4, Class_129808_m0_0147a4_def\n");

}
//@unit 8c014894
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129808_m1_014894_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129808_m1_014894");
  return (unsigned)sh4_interp(0x8c014894, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129808_m1_014894\n.set Class_129808_m1_014894, Class_129808_m1_014894_def\n");
}
//@unit 8c0148d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129808_m2_0148d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129808_m2_0148d8");
  return (unsigned)sh4_interp(0x8c0148d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129808_m2_0148d8\n.set Class_129808_m2_0148d8, Class_129808_m2_0148d8_def\n");
}
//@unit 8c014978
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129808_m3_014978_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129808_m3_014978");
  return (unsigned)sh4_interp(0x8c014978, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129808_m3_014978\n.set Class_129808_m3_014978, Class_129808_m3_014978_def\n");
}
//@unit 8c0149d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0149d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0149d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl FUN_8c0149d4\n.set FUN_8c0149d4, FUN_8c0149d4_def\n");

}
//@unit 8c0149dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0149dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0149dc");
  return (unsigned)sh4_interp(0x8c0149dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0149dc\n.set FUN_8c0149dc, FUN_8c0149dc_def\n");
}
//@unit 8c014a0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c014a0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014a0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28) | 0x20;
  *(le<uint>* )(unsigned)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c014a0c\n.set FUN_8c014a0c, FUN_8c014a0c_def\n");

}
//@unit 8c014a20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c014a20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014a20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  uVar1 = *(le<uint>* )(unsigned)(ar4 + 0x28) | 0x10;
  *(le<uint>* )(unsigned)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c014a20\n.set FUN_8c014a20, FUN_8c014a20_def\n");

}
//@unit 8c014a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int object_dtor_delete_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("object_dtor_delete");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl object_dtor_delete\n.set object_dtor_delete, object_dtor_delete_def\n");

}
//@unit 8c014a64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014a64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014a64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<uint>* )(unsigned)(ar4 + 0x14) = *(le<uint>* )(unsigned)(ar4 + 0x14) | 0x80000000;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014790(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c014a64\n.set FUN_8c014a64, FUN_8c014a64_def\n");

}
//@unit 8c014a94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014a94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014a94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b434(ar5,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c014a94\n.set FUN_8c014a94, FUN_8c014a94_def\n");

}
//@unit 8c014ab0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014ab0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014ab0");
  return (unsigned)sh4_interp(0x8c014ab0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014ab0\n.set FUN_8c014ab0, FUN_8c014ab0_def\n");
}
//@unit 8c014be4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014be4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014be4");
  return (unsigned)sh4_interp(0x8c014be4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014be4\n.set FUN_8c014be4, FUN_8c014be4_def\n");
}
//@unit 8c014cd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014cd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014cd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014d90(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c014cd4\n.set FUN_8c014cd4, FUN_8c014cd4_def\n");

}
//@unit 8c014cf0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1297f4_m0_014cf0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1297f4_m0_014cf0");
  return (unsigned)sh4_interp(0x8c014cf0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1297f4_m0_014cf0\n.set Class_1297f4_m0_014cf0, Class_1297f4_m0_014cf0_def\n");
}
//@unit 8c014d54
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014d54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014d54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), ({ extern unsigned long host_pmf_call(unsigned long,unsigned long,unsigned long,unsigned long,unsigned long); host_pmf_call((unsigned long)(unsigned)((((((*(le<int>* )(unsigned)((ar4 + 0x68)) << 1) + *(le<int>* )(unsigned)((ar4 + 0x68))) << 2) + ar4) + 0x94)),ar4,ar5,ar6,ar7); }));
  return uVar1;
}

__asm__(".globl FUN_8c014d54\n.set FUN_8c014d54, FUN_8c014d54_def\n");

}
//@unit 8c014d90
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014d90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014d90");
  return (unsigned)sh4_interp(0x8c014d90, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014d90\n.set FUN_8c014d90, FUN_8c014d90_def\n");
}
//@unit 8c014e20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned vec3_clear_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("vec3_clear");
  return (unsigned)sh4_interp(0x8c014e20, ar4, ar5, ar6, ar7);
}
__asm__(".globl vec3_clear\n.set vec3_clear, vec3_clear_def\n");
}
//@unit 8c014e38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014e38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014e38");
  return (unsigned)sh4_interp(0x8c014e38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014e38\n.set FUN_8c014e38, FUN_8c014e38_def\n");
}
//@unit 8c014ea0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014ea0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 1;
  return 100;
}

__asm__(".globl FUN_8c014ea0\n.set FUN_8c014ea0, FUN_8c014ea0_def\n");

}
//@unit 8c014eac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014eac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014eac");
  return (unsigned)sh4_interp(0x8c014eac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014eac\n.set FUN_8c014eac, FUN_8c014eac_def\n");
}
//@unit 8c014ef8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014ef8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014ef8");
  return (unsigned)sh4_interp(0x8c014ef8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014ef8\n.set FUN_8c014ef8, FUN_8c014ef8_def\n");
}
//@unit 8c014f74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c014f74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c014f74");
  return (unsigned)sh4_interp(0x8c014f74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c014f74\n.set FUN_8c014f74, FUN_8c014f74_def\n");
}
//@unit 8c014fd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c014fd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c014fd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ar5_00 = (uint)*(byte *)(unsigned)(ar4 + 0x78);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    ((uint)*(le<ushort>* )(unsigned)(ar4 + 0x6c),ar5_00,ar6,ar7));
  if (iVar1 == 0) {
    for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
      iVar4 = iVar1 * 0xc + ar4;
      iVar3 = (iVar1 + -1) * 0xc + ar4;
      uVar2 = *(le<undefined4>* )(unsigned)(iVar3 + 8);
      *(le<undefined4>* )(unsigned)(iVar4 + 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
      *(le<undefined4>* )(unsigned)(iVar4 + 8) = uVar2;
      *(le<undefined4>* )(unsigned)(iVar4 + 0xc) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014f74(ar4,ar5_00,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c014fd0\n.set FUN_8c014fd0, FUN_8c014fd0_def\n");

}
//@unit 8c015054
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015054_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015054");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<undefined4>* )(fr0_ - 0x10)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12c52c)) + 8);
  (*(le<undefined4>* )(fr0_ - 0xc)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12c52c)) + 0xc);
  (*(le<int>* )(fr0_ - 0x18)) = ar4 + 4;
  (*(le<int>* )(fr0_ - 0x14)) = ar4 + 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c234fd0(&(*(le<int>* )(fr0_ - 0x18)),1,0x40,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015054\n.set FUN_8c015054, FUN_8c015054_def\n");

}
//@unit 8c015098
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015098");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<undefined4>* )(fr0_ - 0x10)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12c53c)) + 8);
  (*(le<undefined4>* )(fr0_ - 0xc)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12c53c)) + 0xc);
  (*(le<int>* )(fr0_ - 0x18)) = ar4 + 4;
  (*(le<int>* )(fr0_ - 0x14)) = ar4 + 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c234d68(&(*(le<int>* )(fr0_ - 0x18)),4,0x42,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015098\n.set FUN_8c015098, FUN_8c015098_def\n");

}
//@unit 8c0150dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0150dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0150dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0150dc\n.set noop_0150dc, noop_0150dc_def\n");

}
//@unit 8c0150e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0150e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0150e0");
  return (unsigned)sh4_interp(0x8c0150e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0150e0\n.set FUN_8c0150e0, FUN_8c0150e0_def\n");
}
//@unit 8c015198
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015198");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015198\n.set FUN_8c015198, FUN_8c015198_def\n");

}
//@unit 8c0151a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_0151a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0151a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0151a0\n.set free_if_nonnull_wrap_0151a0, free_if_nonnull_wrap_0151a0_def\n");

}
//@unit 8c0151d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 thunk_FUN_8c0151e8_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("thunk_FUN_8c0151e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  while( true ) {
    if (*ar4 == 0xff) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}

__asm__(".globl thunk_FUN_8c0151e8\n.set thunk_FUN_8c0151e8, thunk_FUN_8c0151e8_def\n");

}
//@unit 8c0151e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0151e8_def(le<short>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0151e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  while( true ) {
    if (*ar4 == 0xff) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}

__asm__(".globl FUN_8c0151e8\n.set FUN_8c0151e8, FUN_8c0151e8_def\n");

}
//@unit 8c0151fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0151fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0151fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c0151e8(ar4,0x17,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0151fc\n.set FUN_8c0151fc, FUN_8c0151fc_def\n");

}
//@unit 8c015224
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c015224_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015224");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129920));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0153b0(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c015224\n.set FUN_8c015224, FUN_8c015224_def\n");

}
//@unit 8c015248
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129920_m0_015248_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129920_m0_015248");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl Class_129920_m0_015248\n.set Class_129920_m0_015248, Class_129920_m0_015248_def\n");

}
//@unit 8c015250
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Failed_to_set_texture_s_015252_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Failed_to_set_texture_s_015252");
  return (unsigned)sh4_interp(0x8c015250, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Failed_to_set_texture_s_015252\n.set s_Failed_to_set_texture_s_015252, s_Failed_to_set_texture_s_015252_def\n");
}
//@unit 8c015310
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Failed_s_015312_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Failed_s_015312");
  return (unsigned)sh4_interp(0x8c015310, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Failed_s_015312\n.set s_Failed_s_015312, s_Failed_s_015312_def\n");
}
//@unit 8c01538c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01538c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01538c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(le<undefined4>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01538c\n.set FUN_8c01538c, FUN_8c01538c_def\n");

}
//@unit 8c0153b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0153b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0153b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  return 0;
}

__asm__(".globl FUN_8c0153b0\n.set FUN_8c0153b0, FUN_8c0153b0_def\n");

}
//@unit 8c0153b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0153b8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0153b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129908));
  ar4[1] = ar4 + 2;
  return ar4;
}

__asm__(".globl FUN_8c0153b8\n.set FUN_8c0153b8, FUN_8c0153b8_def\n");

}
//@unit 8c0153e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_0153e4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0153e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c129920), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0153e4\n.set free_if_nonnull_wrap_0153e4, free_if_nonnull_wrap_0153e4_def\n");

}
//@unit 8c01541c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01541c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01541c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4)) = ar5;
  iVar1 = *(le<int>* )(unsigned)(ar4 + 4);
  *(le<undefined4>* )(unsigned)(iVar1 + 4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c01541c\n.set FUN_8c01541c, FUN_8c01541c_def\n");

}
//@unit 8c015428
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c015428_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015428");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129908);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_0153e4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c015428\n.set FUN_8c015428, FUN_8c015428_def\n");

}
//@unit 8c015470
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015470_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015470");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  ({ unsigned long t0_ = (unsigned long)(ar5); unsigned long ri0_ = (unsigned long)(s0); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c257188(ar4 + 0x10,ar5,ar6 | 0x900,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c257196(ar4 + 0x3c,ar4 + 0x10,s4,0x40800000); });
  return uVar1;
}

__asm__(".globl FUN_8c015470\n.set FUN_8c015470, FUN_8c015470_def\n");

}
//@unit 8c0154c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0154c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0154c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(le<undefined4>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b044(0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0154c4\n.set FUN_8c0154c4, FUN_8c0154c4_def\n");

}
//@unit 8c0154ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0154ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0154ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015518(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0154ec\n.set FUN_8c0154ec, FUN_8c0154ec_def\n");

}
//@unit 8c015508
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015508_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015508");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015508\n.set FUN_8c015508, FUN_8c015508_def\n");

}
//@unit 8c015510
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015510_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015510");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c015510\n.set FUN_8c015510, FUN_8c015510_def\n");

}
//@unit 8c015518
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015518_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015518");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c015518\n.set FUN_8c015518, FUN_8c015518_def\n");

}
//@unit 8c015520
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<int>*  FUN_8c015520_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015520");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (int)(&(*(undefined1 *)(unsigned)0x8c1298b8));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0xc))))(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c015520\n.set FUN_8c015520, FUN_8c015520_def\n");

}
//@unit 8c015544
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_015544_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_015544");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c1298b8), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_015544\n.set free_if_nonnull_wrap_015544, free_if_nonnull_wrap_015544_def\n");

}
//@unit 8c01557c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1298b8_m1_01557c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1298b8_m1_01557c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 8) = 0;
  return 0;
}

__asm__(".globl Class_1298b8_m1_01557c\n.set Class_1298b8_m1_01557c, Class_1298b8_m1_01557c_def\n");

}
//@unit 8c015588
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m2_015588_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m2_015588");
  return (unsigned)sh4_interp(0x8c015588, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m2_015588\n.set Class_1298b8_m2_015588, Class_1298b8_m2_015588_def\n");
}
//@unit 8c0155e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m3_0155e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m3_0155e8");
  return (unsigned)sh4_interp(0x8c0155e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m3_0155e8\n.set Class_1298b8_m3_0155e8, Class_1298b8_m3_0155e8_def\n");
}
//@unit 8c0156a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m4_0156a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m4_0156a0");
  return (unsigned)sh4_interp(0x8c0156a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m4_0156a0\n.set Class_1298b8_m4_0156a0, Class_1298b8_m4_0156a0_def\n");
}
//@unit 8c015720
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m5_015720_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m5_015720");
  return (unsigned)sh4_interp(0x8c015720, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m5_015720\n.set Class_1298b8_m5_015720, Class_1298b8_m5_015720_def\n");
}
//@unit 8c0157f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m6_0157f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m6_0157f8");
  return (unsigned)sh4_interp(0x8c0157f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m6_0157f8\n.set Class_1298b8_m6_0157f8, Class_1298b8_m6_0157f8_def\n");
}
//@unit 8c015890
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m7_015890_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m7_015890");
  return (unsigned)sh4_interp(0x8c015890, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m7_015890\n.set Class_1298b8_m7_015890, Class_1298b8_m7_015890_def\n");
}
//@unit 8c015948
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m8_015948_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m8_015948");
  return (unsigned)sh4_interp(0x8c015948, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m8_015948\n.set Class_1298b8_m8_015948, Class_1298b8_m8_015948_def\n");
}
//@unit 8c0159a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1298b8_m9_0159a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1298b8_m9_0159a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254042(*(le<undefined4>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_1298b8_m9_0159a8\n.set Class_1298b8_m9_0159a8, Class_1298b8_m9_0159a8_def\n");

}
//@unit 8c0159d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1298b8_m10_0159d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1298b8_m10_0159d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c254042(*(le<undefined4>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_1298b8_m10_0159d0\n.set Class_1298b8_m10_0159d0, Class_1298b8_m10_0159d0_def\n");

}
//@unit 8c0159ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1298b8_m11_0159ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1298b8_m11_0159ec");
  return (unsigned)sh4_interp(0x8c0159ec, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1298b8_m11_0159ec\n.set Class_1298b8_m11_0159ec, Class_1298b8_m11_0159ec_def\n");
}
//@unit 8c015ab8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015ab8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015ab8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b8c(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c015ab8\n.set FUN_8c015ab8, FUN_8c015ab8_def\n");

}
//@unit 8c015ad4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015ad4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015ad4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015ad4\n.set FUN_8c015ad4, FUN_8c015ad4_def\n");

}
//@unit 8c015adc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015adc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015adc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(*ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015adc\n.set FUN_8c015adc, FUN_8c015adc_def\n");

}
//@unit 8c015af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015af8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015af8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2187ce(*ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015af8\n.set FUN_8c015af8, FUN_8c015af8_def\n");

}
//@unit 8c015b14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015b14_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015b14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a80e(*ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015b14\n.set FUN_8c015b14, FUN_8c015b14_def\n");

}
//@unit 8c015b30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015b30_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015b30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c218f96(*ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015b30\n.set FUN_8c015b30, FUN_8c015b30_def\n");

}
//@unit 8c015b4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 deref_u32_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("deref_u32");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl deref_u32\n.set deref_u32, deref_u32_def\n");

}
//@unit 8c015b54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015b54_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015b54");
  return (unsigned)sh4_interp(0x8c015b54, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015b54\n.set FUN_8c015b54, FUN_8c015b54_def\n");
}
//@unit 8c015b8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015b8c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015b8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c015b8c\n.set FUN_8c015b8c, FUN_8c015b8c_def\n");

}
//@unit 8c015b94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015b94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015b94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc0(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c015b94\n.set FUN_8c015b94, FUN_8c015b94_def\n");

}
//@unit 8c015bb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015bb0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015bb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015bb0\n.set FUN_8c015bb0, FUN_8c015bb0_def\n");

}
//@unit 8c015bb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015bb8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015bb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *ar4;
}

__asm__(".globl FUN_8c015bb8\n.set FUN_8c015bb8, FUN_8c015bb8_def\n");

}
//@unit 8c015bc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015bc0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015bc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c015bc0\n.set FUN_8c015bc0, FUN_8c015bc0_def\n");

}
//@unit 8c015bc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015bc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bec(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c015bc8\n.set FUN_8c015bc8, FUN_8c015bc8_def\n");

}
//@unit 8c015be4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015be4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015be4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015be4\n.set FUN_8c015be4, FUN_8c015be4_def\n");

}
//@unit 8c015bec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015bec_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015bec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  return 0;
}

__asm__(".globl FUN_8c015bec\n.set FUN_8c015bec, FUN_8c015bec_def\n");

}
//@unit 8c015bf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_015bf4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_015bf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c1298ac), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_015bf4\n.set free_if_nonnull_wrap_015bf4, free_if_nonnull_wrap_015bf4_def\n");

}
//@unit 8c015c2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015c2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015c2c");
  return (unsigned)sh4_interp(0x8c015c2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015c2c\n.set FUN_8c015c2c, FUN_8c015c2c_def\n");
}
//@unit 8c015c58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015c58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015c58");
  return (unsigned)sh4_interp(0x8c015c58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015c58\n.set FUN_8c015c58, FUN_8c015c58_def\n");
}
//@unit 8c015c94
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_015c94_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_015c94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c12988c), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_015c94\n.set free_if_nonnull_wrap_015c94, free_if_nonnull_wrap_015c94_def\n");

}
//@unit 8c015ccc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015ccc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015ccc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x1c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015ccc\n.set FUN_8c015ccc, FUN_8c015ccc_def\n");

}
//@unit 8c015cd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015cd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015cd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x20) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c015cd4\n.set FUN_8c015cd4, FUN_8c015cd4_def\n");

}
//@unit 8c015cdc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Can_t_Find_File_s_015ce0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Can_t_Find_File_s_015ce0");
  return (unsigned)sh4_interp(0x8c015cdc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Can_t_Find_File_s_015ce0\n.set s_Can_t_Find_File_s_015ce0, s_Can_t_Find_File_s_015ce0_def\n");
}
//@unit 8c015d74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015d74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015d74");
  return (unsigned)sh4_interp(0x8c015d74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015d74\n.set FUN_8c015d74, FUN_8c015d74_def\n");
}
//@unit 8c015dc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015dc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015dc0");
  return (unsigned)sh4_interp(0x8c015dc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015dc0\n.set FUN_8c015dc0, FUN_8c015dc0_def\n");
}
//@unit 8c015dfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Err_wrap_015dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Err_wrap_015dfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Error_015f22(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_Err_wrap_015dfc\n.set s_Err_wrap_015dfc, s_Err_wrap_015dfc_def\n");

}
//@unit 8c015e18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c015e18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015e18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b044(0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c015e18\n.set FUN_8c015e18, FUN_8c015e18_def\n");

}
//@unit 8c015e40
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c015e40_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c015e40");
  return (unsigned)sh4_interp(0x8c015e40, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c015e40\n.set FUN_8c015e40, FUN_8c015e40_def\n");
}
//@unit 8c015f18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Error_015f22_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Error_015f22");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  sVar1 = *((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x20));
  sVar2 = *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x20) + 2);
  uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), malloc_thunk(0x2000,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); unsigned long ri0_ = (unsigned long)((int)sVar2); *(le<unsigned>* )((((unsigned long)(fr0_ - 40)) - 8) + 0) = (unsigned)t0_; vin0 = (unsigned)ri0_; vsp = (((unsigned long)(fr0_ - 40)) - 8); FUN_8c257188(ar4 + 0x2c,uVar3,0xb01,(int)sVar1); });
  ar7_00 = 0x40800000;
  ar6_00 = 10000;
  ar5_00 = ar4 + 0x2c;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c257196(*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c)),ar5_00,10000,0x40800000); });
  iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c25b3a2(*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar5_00,ar6_00,ar7_00));
  if (iVar4 == -1) {
    ar7_00 = 0xd;
    ar6_00 = 0;
    ar5_00 = 0;
    ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); noop_102824("Error",0,0,0xd); });
  }
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c25b100((int)*((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x20)),ar5_00,ar6_00,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fb57c(uVar3,ar5_00,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl s_Error_015f22\n.set s_Error_015f22, s_Error_015f22_def\n");

}
//@unit 8c015ff0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c015ff0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c015ff0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015c2c(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12984c));
  return ar4;
}

__asm__(".globl FUN_8c015ff0\n.set FUN_8c015ff0, FUN_8c015ff0_def\n");

}
//@unit 8c016014
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016014_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016014");
  return (unsigned)sh4_interp(0x8c016014, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016014\n.set FUN_8c016014, FUN_8c016014_def\n");
}
//@unit 8c016068
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016068_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016068");
  return (unsigned)sh4_interp(0x8c016068, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016068\n.set FUN_8c016068, FUN_8c016068_def\n");
}
//@unit 8c0160c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_C3DRenderPly_SetMem_0160d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_C3DRenderPly_SetMem_0160d0");
  return (unsigned)sh4_interp(0x8c0160c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_C3DRenderPly_SetMem_0160d0\n.set s_C3DRenderPly_SetMem_0160d0, s_C3DRenderPly_SetMem_0160d0_def\n");
}
//@unit 8c0162bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129808_m10_0162bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129808_m10_0162bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(ar4 + 0x8c,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c235bfc))))
                    (ar4 + 4,*(le<undefined4>* )(unsigned)(ar4 + 0x10),*(le<undefined4>* )(unsigned)(0xcc + ar4),ar7));
  return uVar1;
}

__asm__(".globl Class_129808_m10_0162bc\n.set Class_129808_m10_0162bc, Class_129808_m10_0162bc_def\n");

}
//@unit 8c0162f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0162f8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0162f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ar4[4] = 0;
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl FUN_8c0162f8\n.set FUN_8c0162f8, FUN_8c0162f8_def\n");

}
//@unit 8c016318
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016318_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016318");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[3] = ar7;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c016318\n.set FUN_8c016318, FUN_8c016318_def\n");

}
//@unit 8c016324
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c016324_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016324");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 8) = ar5;
  uVar1 = 0x80000020;
  *(le<uint>* )(unsigned)(ar4 + 0x10) = *(le<uint>* )(unsigned)(ar4 + 0x10) | 0x80000020;
  return uVar1;
}

__asm__(".globl FUN_8c016324\n.set FUN_8c016324, FUN_8c016324_def\n");

}
//@unit 8c016340
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016340_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016340");
  return (unsigned)sh4_interp(0x8c016340, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016340\n.set FUN_8c016340, FUN_8c016340_def\n");
}
//@unit 8c01636c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01636c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01636c");
  return (unsigned)sh4_interp(0x8c01636c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01636c\n.set FUN_8c01636c, FUN_8c01636c_def\n");
}
//@unit 8c016410
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016410_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016410");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016584(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c016410\n.set FUN_8c016410, FUN_8c016410_def\n");

}
//@unit 8c01642c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01642c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01642c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016584(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016464(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c01642c\n.set FUN_8c01642c, FUN_8c01642c_def\n");

}
//@unit 8c016464
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016464_def(le<int>* ar4,le<undefined4>* ar5,le<undefined4>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c016464");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* puVar2;
  int iVar3;
  
  ar4[4] = ar7;
  if (ar4[4] == 1) {
    puVar2 = (le<undefined4>* )(unsigned)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    uVar1 = *ar6;
    *(le<undefined4>* )(unsigned)(uint)ar4[1] = uVar1;
    return uVar1;
  }
  if (ar4[4] == 2) {
    puVar2 = (le<undefined4>* )(unsigned)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    iVar3 = *ar4;
    uVar1 = ar5[4];
    *(le<undefined4>* )(unsigned)(iVar3 + 0xc) = ar5[3];
    *(le<undefined4>* )(unsigned)(iVar3 + 0x10) = uVar1;
    *(le<undefined4>* )(unsigned)(iVar3 + 0x14) = ar5[5];
    *(le<undefined4>* )(unsigned)(uint)ar4[1] = *ar6;
    uVar1 = ar6[1];
    *(le<undefined4>* )(unsigned)(ar4[1] + 4) = uVar1;
    return uVar1;
  }
  *ar4 = (int)ar5;
  ar4[1] = (int)ar6;
  return ar4[4];
}

__asm__(".globl FUN_8c016464\n.set FUN_8c016464, FUN_8c016464_def\n");

}
//@unit 8c0164c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0164c8_def(int ar4,le<undefined2>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0164c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  le<undefined2>* puVar2;
  int iVar3;
  
  if (ar6 == 1) {
    puVar2 = ((le<undefined2>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8));
    *puVar2 = *ar5;
    sVar1 = ar5[1];
    puVar2[1] = sVar1;
    return (int)sVar1;
  }
  if (ar6 == 2) {
    puVar2 = ((le<undefined2>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 8));
    *puVar2 = *ar5;
    puVar2[1] = ar5[1];
    iVar3 = *(le<int>* )(unsigned)(ar4 + 8);
    *(le<undefined2>* )(unsigned)(iVar3 + 4) = ar5[2];
    sVar1 = ar5[3];
    *(le<short>* )(unsigned)(iVar3 + 6) = sVar1;
    return (int)sVar1;
  }
  *(le<unsigned>* )(unsigned)(ar4 + 8) = ar5;
  return ar6;
}

__asm__(".globl FUN_8c0164c8\n.set FUN_8c0164c8, FUN_8c0164c8_def\n");

}
//@unit 8c016504
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016504");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c234d68))))
                    (ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016504\n.set FUN_8c016504, FUN_8c016504_def\n");

}
//@unit 8c016524
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016524_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016524");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c235bfc))))
                    (ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016524\n.set FUN_8c016524, FUN_8c016524_def\n");

}
//@unit 8c016544
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016544");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3ec(*(le<undefined4>* )(unsigned)(ar4 + 0x40),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b434(ar5,uVar1,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c235bfc))))
                    (ar4,*(le<undefined4>* )(unsigned)(ar4 + 0x10),*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016544\n.set FUN_8c016544, FUN_8c016544_def\n");

}
//@unit 8c016584
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016584_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016584");
  return (unsigned)sh4_interp(0x8c016584, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016584\n.set FUN_8c016584, FUN_8c016584_def\n");
}
//@unit 8c016658
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016658");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl FUN_8c016658\n.set FUN_8c016658, FUN_8c016658_def\n");

}
//@unit 8c016660
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_016660_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_016660");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_016660\n.set free_if_nonnull_wrap_016660, free_if_nonnull_wrap_016660_def\n");

}
//@unit 8c016690
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016690");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10273c(ar4,0,0,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016690\n.set FUN_8c016690, FUN_8c016690_def\n");

}
//@unit 8c0166b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129808_m6_0166b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129808_m6_0166b4");
  return (unsigned)sh4_interp(0x8c0166b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129808_m6_0166b4\n.set Class_129808_m6_0166b4, Class_129808_m6_0166b4_def\n");
}
//@unit 8c01679c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01679c_def(int ar4,undefined4 ar5,le<short>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01679c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<short>* ar6_00;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6,ar7));
  *ar6 = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[1] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[2] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[3] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[4] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  ar6[5] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x18);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7));
  ar6[6] = (short)uVar1 * (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14) + (short)*(le<undefined4>* )(unsigned)(ar4 + 0x14);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7));
  iVar2 = iVar2 * *(le<int>* )(unsigned)(ar4 + 0x18) + *(le<int>* )(unsigned)(ar4 + 0x18);
  ar6[7] = (short)iVar2;
  return iVar2;
}

__asm__(".globl FUN_8c01679c\n.set FUN_8c01679c, FUN_8c01679c_def\n");

}
//@unit 8c01688c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01688c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01688c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(*(le<undefined4>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a94(*(le<undefined4>* )(unsigned)(ar4 + 4),*(le<undefined4>* )(unsigned)(ar4 + 8),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01688c\n.set FUN_8c01688c, FUN_8c01688c_def\n");

}
//@unit 8c0168b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0168b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0168b4");
  return (unsigned)sh4_interp(0x8c0168b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0168b4\n.set FUN_8c0168b4, FUN_8c0168b4_def\n");
}
//@unit 8c01694c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_01694c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_01694c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_01694c\n.set ret_const_1_01694c, ret_const_1_01694c_def\n");

}
//@unit 8c016954
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016954_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016954");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016954\n.set noop_016954, noop_016954_def\n");

}
//@unit 8c016958
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016958_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016958");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016958\n.set noop_016958, noop_016958_def\n");

}
//@unit 8c01695c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_01695c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_01695c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_01695c\n.set noop_01695c, noop_01695c_def\n");

}
//@unit 8c016960
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016960");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016960\n.set noop_016960, noop_016960_def\n");

}
//@unit 8c016964
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016964_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016964");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016964\n.set noop_016964, noop_016964_def\n");

}
//@unit 8c016968
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016968_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016968");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016968\n.set noop_016968, noop_016968_def\n");

}
//@unit 8c01696c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_01696c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_01696c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_01696c\n.set noop_01696c, noop_01696c_def\n");

}
//@unit 8c016970
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016970_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016970");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016970\n.set noop_016970, noop_016970_def\n");

}
//@unit 8c016974
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016974_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016974");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016974\n.set noop_016974, noop_016974_def\n");

}
//@unit 8c016978
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016978_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016978");
  return (unsigned)sh4_interp(0x8c016978, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016978\n.set FUN_8c016978, FUN_8c016978_def\n");
}
//@unit 8c016a20
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016a20_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016a20");
  return (unsigned)sh4_interp(0x8c016a20, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016a20\n.set FUN_8c016a20, FUN_8c016a20_def\n");
}
//@unit 8c016a7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c016a7c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016a7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c1299b0));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 8,ar5,ar6,ar7));
  ar4[0xb] = 2;
  return ar4;
}

__asm__(".globl FUN_8c016a7c\n.set FUN_8c016a7c, FUN_8c016a7c_def\n");

}
//@unit 8c016ac4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_016ac4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_016ac4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_016ac4\n.set free_if_nonnull_wrap_016ac4, free_if_nonnull_wrap_016ac4_def\n");

}
//@unit 8c016af4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_1299b0_m0_016af4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1299b0_m0_016af4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c1299b0);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 5,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_1299b0_m0_016af4\n.set Class_1299b0_m0_016af4, Class_1299b0_m0_016af4_def\n");

}
//@unit 8c016b5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016b5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016b5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016b5c\n.set noop_016b5c, noop_016b5c_def\n");

}
//@unit 8c016b60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_016b60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_016b60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_016b60\n.set noop_016b60, noop_016b60_def\n");

}
//@unit 8c016b64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016b64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016b64");
  return (unsigned)sh4_interp(0x8c016b64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016b64\n.set FUN_8c016b64, FUN_8c016b64_def\n");
}
//@unit 8c016bfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_016bfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_016bfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_016bfc\n.set free_if_nonnull_wrap_016bfc, free_if_nonnull_wrap_016bfc_def\n");

}
//@unit 8c016c2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129974_m0_016c2c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129974_m0_016c2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129974);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_1299b0_m0_016af4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_129974_m0_016c2c\n.set Class_129974_m0_016c2c, Class_129974_m0_016c2c_def\n");

}
//@unit 8c016c84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016c84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016c84");
  return (unsigned)sh4_interp(0x8c016c84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016c84\n.set FUN_8c016c84, FUN_8c016c84_def\n");
}
//@unit 8c016cec
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016cec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016cec");
  return (unsigned)sh4_interp(0x8c016cec, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016cec\n.set FUN_8c016cec, FUN_8c016cec_def\n");
}
//@unit 8c016da8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016da8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016da8");
  return (unsigned)sh4_interp(0x8c016da8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016da8\n.set FUN_8c016da8, FUN_8c016da8_def\n");
}
//@unit 8c016e18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016e18_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016e18");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x18))))(ar5,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016e18\n.set FUN_8c016e18, FUN_8c016e18_def\n");

}
//@unit 8c016e38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016e38_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016e38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x34))))(ar5,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c233d14(ar4 + 0x30,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016e38\n.set FUN_8c016e38, FUN_8c016e38_def\n");

}
//@unit 8c016e6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016e6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016e6c");
  return (unsigned)sh4_interp(0x8c016e6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016e6c\n.set FUN_8c016e6c, FUN_8c016e6c_def\n");
}
//@unit 8c016e98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016e98_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016e98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x38))))(ar5,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c2336e8(((undefined1 *)(fr0_ - 0x64)),ar4 + 0x30,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016e98\n.set FUN_8c016e98, FUN_8c016e98_def\n");

}
//@unit 8c016ecc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c016ecc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c016ecc");
  return (unsigned)sh4_interp(0x8c016ecc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c016ecc\n.set FUN_8c016ecc, FUN_8c016ecc_def\n");
}
//@unit 8c016f50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016f50_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016f50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x34))))(ar5,ar4 + 0x30,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016f84(ar5,ar4 + 0x20,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016f50\n.set FUN_8c016f50, FUN_8c016f50_def\n");

}
//@unit 8c016f84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016f84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016f84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar5,ar4 + 0x20,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c016f84\n.set FUN_8c016f84, FUN_8c016f84_def\n");

}
//@unit 8c016fa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c016fa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016fa4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0x40,((undefined1 *)(unsigned)0x8c12f1b8),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl FUN_8c016fa4\n.set FUN_8c016fa4, FUN_8c016fa4_def\n");

}
//@unit 8c016fcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c016fcc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c016fcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016a7c(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129938));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8((int)ar4 + 0x90,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c017804(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c016fcc\n.set FUN_8c016fcc, FUN_8c016fcc_def\n");

}
//@unit 8c017010
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<int>*  FUN_8c017010_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c017010");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016a7c(ar4,ar5,ar6,ar7));
  *ar4 = (int)(&(*(undefined1 *)(unsigned)0x8c129938));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8((int)ar4 + 0x90,ar5_00,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(s4); unsigned long t2_ = (unsigned long)(s8); unsigned long t3_ = (unsigned long)(s12); unsigned long t4_ = (unsigned long)(s16); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x2c))))(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c017804(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c017010\n.set FUN_8c017010, FUN_8c017010_def\n");

}
//@unit 8c017084
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129938_m0_017084_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129938_m0_017084");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129938);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x24,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_1299b0_m0_016af4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_129938_m0_017084\n.set Class_129938_m0_017084, Class_129938_m0_017084_def\n");

}
//@unit 8c0170e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129938_m1_0170e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129938_m1_0170e0");
  return (unsigned)sh4_interp(0x8c0170e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129938_m1_0170e0\n.set Class_129938_m1_0170e0, Class_129938_m1_0170e0_def\n");
}
//@unit 8c0171f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129938_m2_0171f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129938_m2_0171f4");
  return (unsigned)sh4_interp(0x8c0171f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129938_m2_0171f4\n.set Class_129938_m2_0171f4, Class_129938_m2_0171f4_def\n");
}
//@unit 8c01733c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129938_m6_01733c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129938_m6_01733c");
  return (unsigned)sh4_interp(0x8c01733c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129938_m6_01733c\n.set Class_129938_m6_01733c, Class_129938_m6_01733c_def\n");
}
//@unit 8c017408
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129938_m3_017408_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129938_m3_017408");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x1c))))(ar5,ar4,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129938_m3_017408\n.set Class_129938_m3_017408, Class_129938_m3_017408_def\n");

}
//@unit 8c017428
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129938_m4_017428_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129938_m4_017428");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x34))))(ar5,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2336e8(ar4 + 0x30,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129938_m4_017428\n.set Class_129938_m4_017428, Class_129938_m4_017428_def\n");

}
//@unit 8c01745c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129938_m5_01745c_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129938_m5_01745c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 100)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x38))))(ar5,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c23340c(ar4 + 0x30,((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129938_m5_01745c\n.set Class_129938_m5_01745c, Class_129938_m5_01745c_def\n");

}
//@unit 8c017490
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c017490_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c017490");
  return (unsigned)sh4_interp(0x8c017490, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c017490\n.set FUN_8c017490, FUN_8c017490_def\n");
}
//@unit 8c017630
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c017630_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c017630");
  return (unsigned)sh4_interp(0x8c017630, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c017630\n.set FUN_8c017630, FUN_8c017630_def\n");
}
//@unit 8c0177d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129938_m7_0177d0_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129938_m7_0177d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x38))))(ar5,ar4 + 0x30,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016f84(ar5,ar4 + 0x20,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129938_m7_0177d0\n.set Class_129938_m7_0177d0, Class_129938_m7_0177d0_def\n");

}
//@unit 8c017804
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c017804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c017804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015ad4(ar4 + 0x90,((undefined1 *)(unsigned)0x8c12ca68),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl FUN_8c017804\n.set FUN_8c017804, FUN_8c017804_def\n");

}
//@unit 8c017830
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c017830_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c017830");
  return (unsigned)sh4_interp(0x8c017830, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c017830\n.set FUN_8c017830, FUN_8c017830_def\n");
}
//@unit 8c0178b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0178b4_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0178b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined2>* puVar2;
  
  *ar4 = ar5;
  for (puVar2 = ((le<undefined2>* )(unsigned long)*(le<unsigned>* )(unsigned)(*ar4 + 4)); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
  }
  ar4[3] = (int)(short)puVar2[2] & 0x3fff;
  ar4[1] = (int)(puVar2 + 3);
  ar4[2] = *(le<int>* )(unsigned)*ar4;
  iVar1 = ar4[2];
  ar4[2] = iVar1 + 8;
  return iVar1 + 8;
}

__asm__(".globl FUN_8c0178b4\n.set FUN_8c0178b4, FUN_8c0178b4_def\n");

}
//@unit 8c017900
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c017900_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c017900");
  return (unsigned)sh4_interp(0x8c017900, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c017900\n.set FUN_8c017900, FUN_8c017900_def\n");
}
//@unit 8c0185a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0185a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0185a4");
  return (unsigned)sh4_interp(0x8c0185a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0185a4\n.set FUN_8c0185a4, FUN_8c0185a4_def\n");
}
//@unit 8c018f7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_018f7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_018f7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_018f7c\n.set noop_018f7c, noop_018f7c_def\n");

}
//@unit 8c018f80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c018f80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c018f80");
  return (unsigned)sh4_interp(0x8c018f80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c018f80\n.set FUN_8c018f80, FUN_8c018f80_def\n");
}
//@unit 8c018fa8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_018fa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_018fa8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_018fa8\n.set noop_018fa8, noop_018fa8_def\n");

}
//@unit 8c018fac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_018fac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_018fac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_018fac\n.set noop_018fac, noop_018fac_def\n");

}
//@unit 8c018fb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c018fb0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c018fb0");
  return (unsigned)sh4_interp(0x8c018fb0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c018fb0\n.set FUN_8c018fb0, FUN_8c018fb0_def\n");
}
//@unit 8c019058
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019058_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019058");
  return (unsigned)sh4_interp(0x8c019058, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019058\n.set FUN_8c019058, FUN_8c019058_def\n");
}
//@unit 8c019088
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019088_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019088");
  return (unsigned)sh4_interp(0x8c019088, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019088\n.set FUN_8c019088, FUN_8c019088_def\n");
}
//@unit 8c0190f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0190f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0190f0");
  return (unsigned)sh4_interp(0x8c0190f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0190f0\n.set FUN_8c0190f0, FUN_8c0190f0_def\n");
}
//@unit 8c019128
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019128_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019128");
  return (unsigned)sh4_interp(0x8c019128, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019128\n.set FUN_8c019128, FUN_8c019128_def\n");
}
//@unit 8c019160
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019160_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019160");
  return (unsigned)sh4_interp(0x8c019160, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019160\n.set FUN_8c019160, FUN_8c019160_def\n");
}
//@unit 8c019198
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019198_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019198");
  return (unsigned)sh4_interp(0x8c019198, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019198\n.set FUN_8c019198, FUN_8c019198_def\n");
}
//@unit 8c0191c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0191c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0191c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c23617c(ar4,ar5,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0191c8\n.set FUN_8c0191c8, FUN_8c0191c8_def\n");

}
//@unit 8c0191e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c0191e4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0191e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129a50));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0192a8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c0191e4\n.set FUN_8c0191e4, FUN_8c0191e4_def\n");

}
//@unit 8c019208
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019208_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019208");
  return (unsigned)sh4_interp(0x8c019208, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019208\n.set FUN_8c019208, FUN_8c019208_def\n");
}
//@unit 8c019270
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_019270_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_019270");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c129a50), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_019270\n.set free_if_nonnull_wrap_019270, free_if_nonnull_wrap_019270_def\n");

}
//@unit 8c0192a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0192a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0192a8");
  return (unsigned)sh4_interp(0x8c0192a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0192a8\n.set FUN_8c0192a8, FUN_8c0192a8_def\n");
}
//@unit 8c019384
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019384_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019384");
  return (unsigned)sh4_interp(0x8c019384, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019384\n.set FUN_8c019384, FUN_8c019384_def\n");
}
//@unit 8c0194c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0194c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0194c0");
  return (unsigned)sh4_interp(0x8c0194c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0194c0\n.set FUN_8c0194c0, FUN_8c0194c0_def\n");
}
//@unit 8c019508
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019508_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019508");
  return (unsigned)sh4_interp(0x8c019508, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019508\n.set FUN_8c019508, FUN_8c019508_def\n");
}
//@unit 8c019560
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019560_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019560");
  return (unsigned)sh4_interp(0x8c019560, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019560\n.set FUN_8c019560, FUN_8c019560_def\n");
}
//@unit 8c019574
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019574_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019574");
  return (unsigned)sh4_interp(0x8c019574, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019574\n.set FUN_8c019574, FUN_8c019574_def\n");
}
//@unit 8c019588
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1299f8_m4_019588_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1299f8_m4_019588");
  return (unsigned)sh4_interp(0x8c019588, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1299f8_m4_019588\n.set Class_1299f8_m4_019588, Class_1299f8_m4_019588_def\n");
}
//@unit 8c0198dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0198dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0198dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c0198dc\n.set FUN_8c0198dc, FUN_8c0198dc_def\n");

}
//@unit 8c019928
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c019928_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c019928");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c019928\n.set FUN_8c019928, FUN_8c019928_def\n");

}
//@unit 8c019974
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019974_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019974");
  return (unsigned)sh4_interp(0x8c019974, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019974\n.set FUN_8c019974, FUN_8c019974_def\n");
}
//@unit 8c0199d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0199d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0199d4");
  return (unsigned)sh4_interp(0x8c0199d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0199d4\n.set FUN_8c0199d4, FUN_8c0199d4_def\n");
}
//@unit 8c019aa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129a24_m0_019aa0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129a24_m0_019aa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129a24);
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_019270(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_129a24_m0_019aa0\n.set Class_129a24_m0_019aa0, Class_129a24_m0_019aa0_def\n");

}
//@unit 8c019b38
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019b38_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019b38");
  return (unsigned)sh4_interp(0x8c019b38, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019b38\n.set FUN_8c019b38, FUN_8c019b38_def\n");
}
//@unit 8c019b48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019b48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019b48");
  return (unsigned)sh4_interp(0x8c019b48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019b48\n.set FUN_8c019b48, FUN_8c019b48_def\n");
}
//@unit 8c019b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c019b58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c019b58");
  return (unsigned)sh4_interp(0x8c019b58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c019b58\n.set FUN_8c019b58, FUN_8c019b58_def\n");
}
//@unit 8c019b68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129a24_m1_019b68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129a24_m1_019b68");
  return (unsigned)sh4_interp(0x8c019b68, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129a24_m1_019b68\n.set Class_129a24_m1_019b68, Class_129a24_m1_019b68_def\n");
}
//@unit 8c019e40
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129a24_m4_019e40_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129a24_m4_019e40");
  return (unsigned)sh4_interp(0x8c019e40, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129a24_m4_019e40\n.set Class_129a24_m4_019e40, Class_129a24_m4_019e40_def\n");
}
//@unit 8c019eb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_1299f8_m0_019eb8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1299f8_m0_019eb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c1299f8);
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 12)), free_if_nonnull_wrap_019270(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_1299f8_m0_019eb8\n.set Class_1299f8_m0_019eb8, Class_1299f8_m0_019eb8_def\n");

}
//@unit 8c019f00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_1299f8_m3_019f00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_1299f8_m3_019f00");
  return (unsigned)sh4_interp(0x8c019f00, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_1299f8_m3_019f00\n.set Class_1299f8_m3_019f00, Class_1299f8_m3_019f00_def\n");
}
//@unit 8c01a0cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c01a0cc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a0cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c1299ec));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x15c,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c01a0cc\n.set FUN_8c01a0cc, FUN_8c01a0cc_def\n");

}
//@unit 8c01a0f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_1299ec_m0_01a0f8_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1299ec_m0_01a0f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c1299ec);
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x57,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_1299ec_m0_01a0f8\n.set Class_1299ec_m0_01a0f8, Class_1299ec_m0_01a0f8_def\n");

}
//@unit 8c01a148
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1299f8_m1_01a148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1299f8_m1_01a148");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2572ec(ar4 + 4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_1299f8_m1_01a148\n.set Class_1299f8_m1_01a148, Class_1299f8_m1_01a148_def\n");

}
//@unit 8c01a164
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_1299f8_m2_01a164_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_1299f8_m2_01a164");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a180(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_1299f8_m2_01a164\n.set Class_1299f8_m2_01a164, Class_1299f8_m2_01a164_def\n");

}
//@unit 8c01a180
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01a180_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a180");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25699c(ar4 + 4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01a180\n.set FUN_8c01a180, FUN_8c01a180_def\n");

}
//@unit 8c01a19c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_01a19c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_01a19c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_01a19c\n.set noop_01a19c, noop_01a19c_def\n");

}
//@unit 8c01a1a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_01a1a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_01a1a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_01a1a0\n.set noop_01a1a0, noop_01a1a0_def\n");

}
//@unit 8c01a1a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_01a1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_01a1a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_01a1a4\n.set ret_const_1_01a1a4, ret_const_1_01a1a4_def\n");

}
//@unit 8c01a1ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01a1ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a1ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xbc;
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c01a1ac\n.set FUN_8c01a1ac, FUN_8c01a1ac_def\n");

}
//@unit 8c01a1bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01a1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01a1bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xbc;
  *(le<undefined4>* )(unsigned)(0xbc + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c01a1bc\n.set FUN_8c01a1bc, FUN_8c01a1bc_def\n");

}
//@unit 8c01a1cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_bc_01a1cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_bc_01a1cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xbc + ar4);
}

__asm__(".globl get_field_bc_01a1cc\n.set get_field_bc_01a1cc, get_field_bc_01a1cc_def\n");

}
//@unit 8c01a1d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129a24_m2_01a1d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129a24_m2_01a1d8");
  return (unsigned)sh4_interp(0x8c01a1d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129a24_m2_01a1d8\n.set Class_129a24_m2_01a1d8, Class_129a24_m2_01a1d8_def\n");
}
//@unit 8c01a230
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129a24_m3_01a230_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129a24_m3_01a230");
  return (unsigned)sh4_interp(0x8c01a230, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129a24_m3_01a230\n.set Class_129a24_m3_01a230, Class_129a24_m3_01a230_def\n");
}
//@unit 8c01a260
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a260_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a260");
  return (unsigned)sh4_interp(0x8c01a260, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a260\n.set FUN_8c01a260, FUN_8c01a260_def\n");
}
//@unit 8c01a308
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a308_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a308");
  return (unsigned)sh4_interp(0x8c01a308, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a308\n.set FUN_8c01a308, FUN_8c01a308_def\n");
}
//@unit 8c01a384
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned free_if_nonnull_wrap_01a384_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("free_if_nonnull_wrap_01a384");
  return (unsigned)sh4_interp(0x8c01a384, ar4, ar5, ar6, ar7);
}
__asm__(".globl free_if_nonnull_wrap_01a384\n.set free_if_nonnull_wrap_01a384, free_if_nonnull_wrap_01a384_def\n");
}
//@unit 8c01a3b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_vmu_ready(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01a3b4_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_vmu_ready(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a3b4\n.set FUN_8c01a3b4, FUN_8c01a3b4_def\n");

}
//@unit 8c01a3e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_VM_User_Icon_VMI_01a3ec_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_VM_User_Icon_VMI_01a3ec");
  return (unsigned)sh4_interp(0x8c01a3e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_VM_User_Icon_VMI_01a3ec\n.set s_VM_User_Icon_VMI_01a3ec, s_VM_User_Icon_VMI_01a3ec_def\n");
}
//@unit 8c01a5cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a5cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a5cc");
  return (unsigned)sh4_interp(0x8c01a5cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a5cc\n.set FUN_8c01a5cc, FUN_8c01a5cc_def\n");
}
//@unit 8c01a630
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a630_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a630");
  return (unsigned)sh4_interp(0x8c01a630, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a630\n.set FUN_8c01a630, FUN_8c01a630_def\n");
}
//@unit 8c01a760
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_memcard_run(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01a760_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_memcard_run(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a760\n.set FUN_8c01a760, FUN_8c01a760_def\n");

}
//@unit 8c01a900
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a900_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a900");
  return (unsigned)sh4_interp(0x8c01a900, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a900\n.set FUN_8c01a900, FUN_8c01a900_def\n");
}
//@unit 8c01a98c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01a98c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01a98c");
  return (unsigned)sh4_interp(0x8c01a98c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01a98c\n.set FUN_8c01a98c, FUN_8c01a98c_def\n");
}
//@unit 8c01aa94
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01aa94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01aa94");
  return (unsigned)sh4_interp(0x8c01aa94, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01aa94\n.set FUN_8c01aa94, FUN_8c01aa94_def\n");
}
//@unit 8c01ab2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ab2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ab2c");
  return (unsigned)sh4_interp(0x8c01ab2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ab2c\n.set FUN_8c01ab2c, FUN_8c01ab2c_def\n");
}
//@unit 8c01ab78
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ab78_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ab78");
  return (unsigned)sh4_interp(0x8c01ab78, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ab78\n.set FUN_8c01ab78, FUN_8c01ab78_def\n");
}
//@unit 8c01acd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01acd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01acd0");
  return (unsigned)sh4_interp(0x8c01acd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01acd0\n.set FUN_8c01acd0, FUN_8c01acd0_def\n");
}
//@unit 8c01ad88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ad88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ad88");
  return (unsigned)sh4_interp(0x8c01ad88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ad88\n.set FUN_8c01ad88, FUN_8c01ad88_def\n");
}
//@unit 8c01ad9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ad9c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ad9c");
  return (unsigned)sh4_interp(0x8c01ad9c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ad9c\n.set FUN_8c01ad9c, FUN_8c01ad9c_def\n");
}
//@unit 8c01ade8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ade8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ade8");
  return (unsigned)sh4_interp(0x8c01ade8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ade8\n.set FUN_8c01ade8, FUN_8c01ade8_def\n");
}
//@unit 8c01ae28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ae28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ae28");
  return (unsigned)sh4_interp(0x8c01ae28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ae28\n.set FUN_8c01ae28, FUN_8c01ae28_def\n");
}
//@unit 8c01ae98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ae98_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ae98");
  return (unsigned)sh4_interp(0x8c01ae98, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ae98\n.set FUN_8c01ae98, FUN_8c01ae98_def\n");
}
//@unit 8c01af14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01af14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01af14");
  return (unsigned)sh4_interp(0x8c01af14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01af14\n.set FUN_8c01af14, FUN_8c01af14_def\n");
}
//@unit 8c01b0a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b0a8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b0a8");
  return (unsigned)sh4_interp(0x8c01b0a8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b0a8\n.set FUN_8c01b0a8, FUN_8c01b0a8_def\n");
}
//@unit 8c01b144
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b144_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b144");
  return (unsigned)sh4_interp(0x8c01b144, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b144\n.set FUN_8c01b144, FUN_8c01b144_def\n");
}
//@unit 8c01b2a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_VM_App_Icon_VMI_01b2b2_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_VM_App_Icon_VMI_01b2b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 uVar3;
  le<int>* ar7_00;
  int unaff_r8 = 0;
  undefined4 ain0;
  
  ar7_00 = ((le<int>* )(fr0_ - 0x24));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0213bc(0x8c3eb334,"VM_App_Icon.VMI",((undefined1 *)(unsigned)0x8c12fb29),ar7_00));
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    ain0 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01ab78(ar4,3,ar5,ar7_00));
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c01b5dc(ar4,ar7,ar5,ar7_00));
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 36)), malloc_thunk(iVar2 << 9,uVar3,ar5,ar7_00));
      if (ar4_00 != 0) {
        (vsp = ((unsigned long)(fr0_ - 36)), memmove(ar4_00,ar6,ar7,ar7_00));
        uVar3 = 0x280;
        (vsp = ((unsigned long)(fr0_ - 36)), memset(ar4_00 + 0x200,0,0x280,ar7_00));
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); strcpy(ar4_00 + 0x200,s0,uVar3,ar7_00); });
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); strcpy(ar4_00 + 0x210,s4,uVar3,ar7_00); });
        *(le<undefined2>* )(unsigned)(ar4_00 + 0x240) = 1;
        *(le<undefined4>* )(unsigned)(ar4_00 + 0x248) = ar7;
        (vsp = ((unsigned long)(fr0_ - 36)), memmove(ar4_00 + 0x260,((le<int>* )(fr0_ - 0x24))[0] + 0xa0,0x220,ar7_00));
        *(le<int>* )(unsigned)(iVar1 * 0x28 + ar4 + 0x246c) = iVar2;
        *(le<int>* )(unsigned)(iVar1 * 0x28 + ar4 + 0x2470) = ar4_00;
        unaff_r8 = iVar1;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c021428(0x8c3eb334,"VM_App_Icon.VMI",((undefined1 *)(unsigned)0x8c12fb29),ar7_00));
  }
  return unaff_r8 = 0;
}

__asm__(".globl s_VM_App_Icon_VMI_01b2b2\n.set s_VM_App_Icon_VMI_01b2b2, s_VM_App_Icon_VMI_01b2b2_def\n");

}
//@unit 8c01b400
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b400_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b400");
  return (unsigned)sh4_interp(0x8c01b400, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b400\n.set FUN_8c01b400, FUN_8c01b400_def\n");
}
//@unit 8c01b47c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b47c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b47c");
  return (unsigned)sh4_interp(0x8c01b47c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b47c\n.set FUN_8c01b47c, FUN_8c01b47c_def\n");
}
//@unit 8c01b4f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b4f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b4f0");
  return (unsigned)sh4_interp(0x8c01b4f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b4f0\n.set FUN_8c01b4f0, FUN_8c01b4f0_def\n");
}
//@unit 8c01b5ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b5ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b5ac");
  return (unsigned)sh4_interp(0x8c01b5ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b5ac\n.set FUN_8c01b5ac, FUN_8c01b5ac_def\n");
}
//@unit 8c01b5dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b5dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b5dc");
  return (unsigned)sh4_interp(0x8c01b5dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b5dc\n.set FUN_8c01b5dc, FUN_8c01b5dc_def\n");
}
//@unit 8c01b5f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b5f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b5f8");
  return (unsigned)sh4_interp(0x8c01b5f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b5f8\n.set FUN_8c01b5f8, FUN_8c01b5f8_def\n");
}
//@unit 8c01b70c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b70c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b70c");
  return (unsigned)sh4_interp(0x8c01b70c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b70c\n.set FUN_8c01b70c, FUN_8c01b70c_def\n");
}
//@unit 8c01b7b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b7b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b7b0");
  return (unsigned)sh4_interp(0x8c01b7b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b7b0\n.set FUN_8c01b7b0, FUN_8c01b7b0_def\n");
}
//@unit 8c01b87c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b87c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b87c");
  return (unsigned)sh4_interp(0x8c01b87c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b87c\n.set FUN_8c01b87c, FUN_8c01b87c_def\n");
}
//@unit 8c01b920
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b920_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b920");
  return (unsigned)sh4_interp(0x8c01b920, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b920\n.set FUN_8c01b920, FUN_8c01b920_def\n");
}
//@unit 8c01b9b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b9b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b9b0");
  return (unsigned)sh4_interp(0x8c01b9b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b9b0\n.set FUN_8c01b9b0, FUN_8c01b9b0_def\n");
}
//@unit 8c01b9e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01b9e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01b9e4");
  return (unsigned)sh4_interp(0x8c01b9e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01b9e4\n.set FUN_8c01b9e4, FUN_8c01b9e4_def\n");
}
//@unit 8c01ba68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01ba68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01ba68");
  return (unsigned)sh4_interp(0x8c01ba68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01ba68\n.set FUN_8c01ba68, FUN_8c01ba68_def\n");
}
//@unit 8c01baa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01baa0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01baa0");
  return (unsigned)sh4_interp(0x8c01baa0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01baa0\n.set FUN_8c01baa0, FUN_8c01baa0_def\n");
}
//@unit 8c01bb00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bb00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bb00");
  return (unsigned)sh4_interp(0x8c01bb00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bb00\n.set FUN_8c01bb00, FUN_8c01bb00_def\n");
}
//@unit 8c01bb6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bb6c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bb6c");
  return (unsigned)sh4_interp(0x8c01bb6c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bb6c\n.set FUN_8c01bb6c, FUN_8c01bb6c_def\n");
}
//@unit 8c01bba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bba0");
  return (unsigned)sh4_interp(0x8c01bba0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bba0\n.set FUN_8c01bba0, FUN_8c01bba0_def\n");
}
//@unit 8c01bbf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bbf8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bbf8");
  return (unsigned)sh4_interp(0x8c01bbf8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bbf8\n.set FUN_8c01bbf8, FUN_8c01bbf8_def\n");
}
//@unit 8c01bc2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bc2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bc2c");
  return (unsigned)sh4_interp(0x8c01bc2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bc2c\n.set FUN_8c01bc2c, FUN_8c01bc2c_def\n");
}
//@unit 8c01bcc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bcc0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bcc0");
  return (unsigned)sh4_interp(0x8c01bcc0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bcc0\n.set FUN_8c01bcc0, FUN_8c01bcc0_def\n");
}
//@unit 8c01bcf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bcf4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bcf4");
  return (unsigned)sh4_interp(0x8c01bcf4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bcf4\n.set FUN_8c01bcf4, FUN_8c01bcf4_def\n");
}
//@unit 8c01bd50
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bd50_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bd50");
  return (unsigned)sh4_interp(0x8c01bd50, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bd50\n.set FUN_8c01bd50, FUN_8c01bd50_def\n");
}
//@unit 8c01bd88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bd88_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bd88");
  return (unsigned)sh4_interp(0x8c01bd88, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bd88\n.set FUN_8c01bd88, FUN_8c01bd88_def\n");
}
//@unit 8c01bde4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bde4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bde4");
  return (unsigned)sh4_interp(0x8c01bde4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bde4\n.set FUN_8c01bde4, FUN_8c01bde4_def\n");
}
//@unit 8c01be1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01be1c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01be1c");
  return (unsigned)sh4_interp(0x8c01be1c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01be1c\n.set FUN_8c01be1c, FUN_8c01be1c_def\n");
}
//@unit 8c01be84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01be84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01be84");
  return (unsigned)sh4_interp(0x8c01be84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01be84\n.set FUN_8c01be84, FUN_8c01be84_def\n");
}
//@unit 8c01bebc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bebc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bebc");
  return (unsigned)sh4_interp(0x8c01bebc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bebc\n.set FUN_8c01bebc, FUN_8c01bebc_def\n");
}
//@unit 8c01bfd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01bfd0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01bfd0");
  return (unsigned)sh4_interp(0x8c01bfd0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01bfd0\n.set FUN_8c01bfd0, FUN_8c01bfd0_def\n");
}
//@unit 8c01c0e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c0e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c0e4");
  return (unsigned)sh4_interp(0x8c01c0e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c0e4\n.set FUN_8c01c0e4, FUN_8c01c0e4_def\n");
}
//@unit 8c01c1a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c1a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c1a4");
  return (unsigned)sh4_interp(0x8c01c1a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c1a4\n.set FUN_8c01c1a4, FUN_8c01c1a4_def\n");
}
//@unit 8c01c260
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c260_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c260");
  return (unsigned)sh4_interp(0x8c01c260, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c260\n.set FUN_8c01c260, FUN_8c01c260_def\n");
}
//@unit 8c01c320
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c320_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c320");
  return (unsigned)sh4_interp(0x8c01c320, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c320\n.set FUN_8c01c320, FUN_8c01c320_def\n");
}
//@unit 8c01c3c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c3c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c3c4");
  return (unsigned)sh4_interp(0x8c01c3c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c3c4\n.set FUN_8c01c3c4, FUN_8c01c3c4_def\n");
}
//@unit 8c01c450
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c450_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c450");
  return (unsigned)sh4_interp(0x8c01c450, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c450\n.set FUN_8c01c450, FUN_8c01c450_def\n");
}
//@unit 8c01c4d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c4d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c4d8");
  return (unsigned)sh4_interp(0x8c01c4d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c4d8\n.set FUN_8c01c4d8, FUN_8c01c4d8_def\n");
}
//@unit 8c01c560
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c560_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c560");
  return (unsigned)sh4_interp(0x8c01c560, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c560\n.set FUN_8c01c560, FUN_8c01c560_def\n");
}
//@unit 8c01c68c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c68c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c68c");
  return (unsigned)sh4_interp(0x8c01c68c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c68c\n.set FUN_8c01c68c, FUN_8c01c68c_def\n");
}
//@unit 8c01c6f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c6f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c6f4");
  return (unsigned)sh4_interp(0x8c01c6f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c6f4\n.set FUN_8c01c6f4, FUN_8c01c6f4_def\n");
}
//@unit 8c01c774
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c774_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c774");
  return (unsigned)sh4_interp(0x8c01c774, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c774\n.set FUN_8c01c774, FUN_8c01c774_def\n");
}
//@unit 8c01c7f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c7f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c7f4");
  return (unsigned)sh4_interp(0x8c01c7f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c7f4\n.set FUN_8c01c7f4, FUN_8c01c7f4_def\n");
}
//@unit 8c01c860
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c860_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c860");
  return (unsigned)sh4_interp(0x8c01c860, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c860\n.set FUN_8c01c860, FUN_8c01c860_def\n");
}
//@unit 8c01c8c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01c8c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01c8c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl FUN_8c01c8c8\n.set FUN_8c01c8c8, FUN_8c01c8c8_def\n");

}
//@unit 8c01c924
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c924_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c924");
  return (unsigned)sh4_interp(0x8c01c924, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c924\n.set FUN_8c01c924, FUN_8c01c924_def\n");
}
//@unit 8c01c92c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c92c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c92c");
  return (unsigned)sh4_interp(0x8c01c92c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c92c\n.set FUN_8c01c92c, FUN_8c01c92c_def\n");
}
//@unit 8c01c944
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c944_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c944");
  return (unsigned)sh4_interp(0x8c01c944, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c944\n.set FUN_8c01c944, FUN_8c01c944_def\n");
}
//@unit 8c01c964
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c964_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c964");
  return (unsigned)sh4_interp(0x8c01c964, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c964\n.set FUN_8c01c964, FUN_8c01c964_def\n");
}
//@unit 8c01c970
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c970_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c970");
  return (unsigned)sh4_interp(0x8c01c970, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c970\n.set FUN_8c01c970, FUN_8c01c970_def\n");
}
//@unit 8c01c978
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c978_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c978");
  return (unsigned)sh4_interp(0x8c01c978, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c978\n.set FUN_8c01c978, FUN_8c01c978_def\n");
}
//@unit 8c01c984
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c984_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c984");
  return (unsigned)sh4_interp(0x8c01c984, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c984\n.set FUN_8c01c984, FUN_8c01c984_def\n");
}
//@unit 8c01c998
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01c998_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01c998");
  return (unsigned)sh4_interp(0x8c01c998, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01c998\n.set FUN_8c01c998, FUN_8c01c998_def\n");
}
//@unit 8c01ca24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c01ca24_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ca24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)((int)ar4 + 0x5634 + iVar1 * 0x50) = 1;
  }
  *(le<undefined4>* )(unsigned)(0x5630 + (int)ar4) = 0xffffffff;
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
  *(le<undefined4>* )(unsigned)(0x5b38 + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x5b3c + (int)ar4) = 0;
  *(le<undefined4>* )(unsigned)0x8c279254 = 0;
  *(le<undefined4>* )(unsigned)0x8c279248 = 0;
  *(le<undefined4>* )(unsigned)(0x6cc0 + (int)ar4) = 0x7000;
  *(le<undefined4>* )(unsigned)0x8c279280 = 0x1f40;
  *(le<undefined4>* )(unsigned)0x8c279274 = 0;
  *(le<undefined4>* )(unsigned)0x8c279278 = 0;
  *(le<undefined4>* )(unsigned)0x8c27927c = 0;
  *(le<undefined4>* )(unsigned)0x8c2791bc = 0;
  *(undefined1 *)(unsigned)(0x8c2791bc + 3) = 0;
  *(le<undefined4>* )(unsigned)0x8c27924c = 0;
  *(le<undefined4>* )(unsigned)0x8c279284 = 0;
  *(le<undefined4>* )(unsigned)0x8c279288 = 0;
  *(le<undefined4>* )(unsigned)0x8c27928c = 0;
  *(le<undefined4>* )(unsigned)0x8c279290 = 0;
  *(le<undefined4>* )(unsigned)0x8c279294 = 0;
  return ar4;
}

__asm__(".globl FUN_8c01ca24\n.set FUN_8c01ca24, FUN_8c01ca24_def\n");

}
//@unit 8c01cb24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_01cb24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_01cb24");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_01cb24\n.set free_if_nonnull_wrap_01cb24, free_if_nonnull_wrap_01cb24_def\n");

}
//@unit 8c01cb54
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_ret1(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01cb54_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_ret1(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01cb54\n.set FUN_8c01cb54, FUN_8c01cb54_def\n");

}
//@unit 8c01cbc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01cbc8_def(le<undefined4>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01cbc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  bool bVar2;
  
  if (ar5 != ar4[1]) {
    *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      *ar4 = 8;
      ar4[2] = 8;
    }
    else if (ar5 == 0xc) {
      *ar4 = 0xe;
      ar4[2] = 0xe;
    }
    else if (ar5 == 0x12) {
      *ar4 = 0x14;
      ar4[2] = 0x14;
    }
    else {
      *ar4 = 2;
      ar4[2] = 2;
    }
  }
  puVar1 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f6342(ar4[2],ar5,ar6,ar7));
  bVar2 = (*puVar1 & 0x10) != 0;
  if (!bVar2) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01d440(ar4,ar5,ar6,ar7));
    *ar4 = 0xffffffff;
    ar4[1] = 0xffffffff;
    *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
  }
  return (uint)bVar2;
}

__asm__(".globl FUN_8c01cbc8\n.set FUN_8c01cbc8, FUN_8c01cbc8_def\n");

}
//@unit 8c01cc74
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01cc74_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01cc74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<undefined4>* )(unsigned)0x8c2791b8 < 2) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201994(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      uVar1 = ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(0); unsigned long t2_ = (unsigned long)(0x113a); unsigned long t3_ = (unsigned long)(5); unsigned long t4_ = (unsigned long)(*(le<undefined4>* )(unsigned)0x8c279274); unsigned long t5_ = (unsigned long)(ar4 + 3); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 24) + 20) = (unsigned)t5_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c201a1a(*ar4,ar5,ar6,ar7); })
      ;
      *(le<undefined4>* )(unsigned)0x8c27926c = uVar1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201c3e(*(le<undefined4>* )(unsigned)0x8c27926c,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)0x8c279270 = uVar1;
      *(le<undefined4>* )(unsigned)0x8c2791b8 = 2;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c01cc74\n.set FUN_8c01cc74, FUN_8c01cc74_def\n");

}
//@unit 8c01cd30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 asr_load_language_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("asr_load_language_model");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  if (*(le<undefined4>* )(unsigned)0x8c2791b8 < 3) {
    *(le<undefined4>* )(unsigned)0x8c279258 = 0;
    *(le<undefined4>* )(unsigned)0x8c27925c = 0;
    *(le<undefined4>* )(unsigned)0x8c279260 = 0;
    *(le<undefined4>* )(unsigned)0x8c279268 = 0;
    *(le<undefined4>* )(unsigned)0x8c279264 = 0;
    *(le<undefined4>* )(unsigned)(0x5b34 + ar4) = 0;
    ar7_00 = ar4 + 0x5b34;
    ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c;
    ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fb7c));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0212b8))))
                      (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c12fb7c)),ar6_00,ar7_00));
    if (iVar2 == 1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), asr_init_from_model(ar4,ar5_00,ar6_00,ar7_00));
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d624))))
                  (ar4,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1d,
                   (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x26,ar7_00));
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl asr_load_language_model\n.set asr_load_language_model, asr_load_language_model_def\n");

}
//@unit 8c01ce00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 asr_init_from_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("asr_init_from_model");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  le<undefined4>* ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), asr_lib_create_engine((&(*(undefined1 *)(unsigned)0x8c12fb40)),0,0x8c279258,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10bf44))))
                      (*(le<undefined4>* )(unsigned)0x8c279258,*(le<undefined4>* )(unsigned)(0x5b34 + ar4),1,0x8c279260));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)0x8c2791b8 = 3;
      uVar2 = 0;
      ar7_00 = 0x8c27925c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10bfc6))))
                        (*(le<undefined4>* )(unsigned)0x8c279258,(&(*(undefined1 *)(unsigned)0x8c12fb64)),0,0x8c27925c));
      if (iVar1 == 0) {
        ar5_00 = *(le<undefined4>* )(unsigned)0x8c279260;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10b840))))
                          (*(le<undefined4>* )(unsigned)0x8c27925c,ar5_00,uVar2,ar7_00));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cee0(ar4,ar5_00,uVar2,ar7_00));
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            *(le<undefined4>* )(unsigned)0x8c2791b8 = 4;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl asr_init_from_model\n.set asr_init_from_model, asr_init_from_model_def\n");

}
//@unit 8c01cee0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01cee0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01cee0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,1,0,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,2,0,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,6,0x12c,ar7));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,7,1,ar7));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,10,0xc8,ar7));
          if (iVar1 == 0) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,0xd,1,ar7));
            if (iVar1 == 0) {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(le<undefined4>* )(unsigned)0x8c27925c,0xe,0xffffffff,ar7));
              if (iVar1 == 0) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01cee0\n.set FUN_8c01cee0, FUN_8c01cee0_def\n");

}
//@unit 8c01cfc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01cfc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01cfc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c201c82((*(le<undefined4>* )(unsigned)(unsigned)0x8c279270),ar5,ar6,ar7); });
  ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c);
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c201b04((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2019e0(ar4_00,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791b8) = 1;
  return 1;
}

__asm__(".globl FUN_8c01cfc8\n.set FUN_8c01cfc8, FUN_8c01cfc8_def\n");

}
//@unit 8c01d008
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d008");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<undefined4>* )(unsigned)0x8c27925c != 0) {
    ar5 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), asr_lib_bind_recognizer_model(*(le<undefined4>* )(unsigned)0x8c27925c,0,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c279268 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c3a0(*(le<undefined4>* )(unsigned)0x8c279268,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c279264 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ba7c(*(le<undefined4>* )(unsigned)0x8c279264,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c279260 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10bad4(*(le<undefined4>* )(unsigned)0x8c279260,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c27925c != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10ba20(*(le<undefined4>* )(unsigned)0x8c27925c,ar5,ar6,ar7));
  }
  if (*(le<undefined4>* )(unsigned)0x8c279258 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b8c6(*(le<undefined4>* )(unsigned)0x8c279258,ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)0x8c279258 = 0;
  *(le<undefined4>* )(unsigned)0x8c27925c = 0;
  *(le<undefined4>* )(unsigned)0x8c279260 = 0;
  *(le<undefined4>* )(unsigned)0x8c279264 = 0;
  *(le<undefined4>* )(unsigned)0x8c2791b8 = 2;
  return 2;
}

__asm__(".globl FUN_8c01d008\n.set FUN_8c01d008, FUN_8c01d008_def\n");

}
//@unit 8c01d0cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long host_ret1(unsigned long, unsigned long, unsigned long, unsigned long);
unsigned long long FUN_8c01d0cc_def(unsigned long ar4, unsigned long ar5, unsigned long ar6, unsigned long ar7)
{
  return host_ret1(ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01d0cc\n.set FUN_8c01d0cc, FUN_8c01d0cc_def\n");

}
//@unit 8c01d15c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * FUN_8c01d15c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d15c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)(unsigned)0x3;
  if ((2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791b8)) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201ba2((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),ar5,ar6,ar7)), puVar1 = (undefined *)(unsigned)0x0, iVar2 != 0)) {
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201b92((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),ar5,ar6,ar7));
    }
    else if (iVar2 == 3) {
      return (undefined *)(unsigned)3;
    }
    puVar1 = (undefined *)(unsigned)0x9;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c279248) < 10) && (puVar1 = (undefined *)(unsigned)0x1, 0 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279248))) {
      puVar1 = (&(*(undefined1 *)(unsigned)0x8c01d1dc))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c279248) + -1];
                    
      switch((*(le<undefined4>* )(unsigned)(unsigned)0x8c279248)) {
      case 1:
        puVar1 = (undefined*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284));
        if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284) != (undefined *)(unsigned)0x0) {
          puVar1 = (undefined *)(unsigned)0x0;
          *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x0);
        }
        break;
      case 5:
        break;
      case 6:
        if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284) == (undefined *)(unsigned)0x0) {
          return (undefined *)(unsigned)0;
        }
        *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
      case 2:
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201c92((*(le<undefined4>* )(unsigned)(unsigned)0x8c279270),ar5,ar6,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201da0((*(le<undefined4>* )(unsigned)(unsigned)0x8c279270),uVar3,ar6,ar7));
        break;
      case 7:
        if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284) == (undefined *)(unsigned)0x0) {
          return (undefined *)(unsigned)0;
        }
        *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
      default:
        uVar3 = 0x113a;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201e14((*(le<undefined4>* )(unsigned)(unsigned)0x8c279270),ar4 + 0x5b86,0x113a,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201da0((*(le<undefined4>* )(unsigned)(unsigned)0x8c279270),iVar2,uVar3,ar7));
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b698((*(le<undefined4>* )(unsigned)(unsigned)0x8c27925c),0,ar4 + 0x5b86,iVar2 << 1));
        break;
      case 8:
        puVar1 = (undefined*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284));
        if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284) != (undefined *)(unsigned)0x0) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c279298) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279298) + 1;
          *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x2);
          if (2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279298)) {
            *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x1);
          }
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1225fc((*(le<undefined4>* )(unsigned)(unsigned)0x8c27925c),1,ar6,ar7));
        }
        break;
      case 9:
        puVar1 = (undefined*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284));
        if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279284) != (undefined *)(unsigned)0x0) {
          *(le<unsigned>* )0x8c279284 = (unsigned)(unsigned long)((undefined *)(unsigned)0x3);
          puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1225fc((*(le<undefined4>* )(unsigned)(unsigned)0x8c27925c),1,ar6,ar7));
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl FUN_8c01d15c\n.set FUN_8c01d15c, FUN_8c01d15c_def\n");

}
//@unit 8c01d338
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x563c);
  uVar1 = 5;
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01da90(ar4,ar5,ar6,ar7));
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01dea4(ar4,ar5,ar6,ar7));
      break;
    case 2:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d78c(ar4,ar5,ar6,ar7));
      break;
    case 3:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d8d8(ar4,ar5,ar6,ar7));
      break;
    case 4:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d7cc(ar4,ar5,ar6,ar7));
      break;
    case 5:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_SPEECH_01d92e(ar4,ar5,ar6,ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01d338\n.set FUN_8c01d338, FUN_8c01d338_def\n");

}
//@unit 8c01d3f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d3f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d3f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(le<undefined4>* )(unsigned)(0x5640 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4);
  *(le<undefined4>* )(unsigned)(0x5634 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = 0x5630;
  *(le<undefined4>* )(unsigned)(0x5630 + ar4) = uVar2;
  return iVar1;
}

__asm__(".globl FUN_8c01d3f4\n.set FUN_8c01d3f4, FUN_8c01d3f4_def\n");

}
//@unit 8c01d440
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d440");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2791b8;
  if (iVar1 != 2) {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_8c01d472;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d008(ar4,ar5,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d490(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cfc8(ar4,ar5,ar6,ar7));
LAB_8c01d472:
  *(le<undefined4>* )(unsigned)0x8c2791b8 = 0;
  return 0;
}

__asm__(".globl FUN_8c01d440\n.set FUN_8c01d440, FUN_8c01d440_def\n");

}
//@unit 8c01d490
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d490_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d490");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201ba2(*(le<undefined4>* )(unsigned)0x8c27926c,ar5,ar6,ar7));
  if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c201b9a(*(le<undefined4>* )(unsigned)0x8c27926c,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01d490\n.set FUN_8c01d490, FUN_8c01d490_def\n");

}
//@unit 8c01d4c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(le<int>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5634) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(le<int>* )(unsigned)(ar4 + 0x5630) < 0) {
      *(le<uint>* )(unsigned)(ar4 + 0x5630) = uVar2;
    }
    else {
      iVar1 = *(le<int>* )(unsigned)(ar4 + 0x5630);
      while (-1 < *(le<int>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640)) {
        iVar1 = *(le<int>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640);
      }
      *(le<uint>* )(unsigned)(iVar1 * 0x50 + ar4 + 0x5640) = uVar2;
    }
    ar7_00 = ar7;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(uVar2 * 0x50 + ar4 + 0x5644,ar6,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); strcpy(uVar2 * 0x50 + ar4 + 0x5664,ar7,ar6,ar7_00); });
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x563c) = ar5;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5638) = 2;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5640) = 0xffffffff;
    *(le<undefined4>* )(unsigned)(uVar2 * 0x50 + ar4 + 0x5634) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d4c4\n.set FUN_8c01d4c4, FUN_8c01d4c4_def\n");

}
//@unit 8c01d624
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 asr_register_strings_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("asr_register_strings");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d4c4(ar4,0,ar5,ar6));
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl asr_register_strings\n.set asr_register_strings, asr_register_strings_def\n");

}
//@unit 8c01d658
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d658_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d658");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d4c4(ar4,1,ar5,ar6));
  return uVar1;
}

__asm__(".globl FUN_8c01d658\n.set FUN_8c01d658, FUN_8c01d658_def\n");

}
//@unit 8c01d684
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d684_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d684");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2791b8) == 4) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c27924c) == 1) {
      *ar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc);
      ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar5 + 3,((undefined1 *)(unsigned)0x8c2791c8),ar6,ar7); });
    }
    else {
      *ar5 = 0;
      *(undefined1 *)(unsigned)(ar5 + 3) = 0;
    }
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279284);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 0;
    ar5[2] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279284);
  }
  else {
    uVar1 = 0;
    *ar5 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c01d684\n.set FUN_8c01d684, FUN_8c01d684_def\n");

}
//@unit 8c01d6ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d6ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d6ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)0x8c279278;
  *(le<undefined4>* )(unsigned)0x8c279278 = 0;
  return uVar1;
}

__asm__(".globl FUN_8c01d6ec\n.set FUN_8c01d6ec, FUN_8c01d6ec_def\n");

}
//@unit 8c01d704
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d704_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d704");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = *(le<undefined4>* )(unsigned)0x8c27927c;
  *(le<undefined4>* )(unsigned)0x8c27927c = 0;
  return uVar1;
}

__asm__(".globl FUN_8c01d704\n.set FUN_8c01d704, FUN_8c01d704_def\n");

}
//@unit 8c01d71c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d71c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d71c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d4c4))))
                    (ar4,2,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c,
                     (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c));
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d71c\n.set FUN_8c01d71c, FUN_8c01d71c_def\n");

}
//@unit 8c01d754
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d754");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d4c4))))
                    (ar4,4,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c,
                     (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c));
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d754\n.set FUN_8c01d754, FUN_8c01d754_def\n");

}
//@unit 8c01d78c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d78c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d78c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x5638 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2791b8;
  if (iVar1 == 4) {
    iVar1 = 1;
    *(le<undefined4>* )(unsigned)0x8c27924c = 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c01d78c\n.set FUN_8c01d78c, FUN_8c01d78c_def\n");

}
//@unit 8c01d7cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d7cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d7cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x5638 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = *(le<undefined4>* )(unsigned)0x8c279284, iVar1 == 0)) {
    if (*(le<undefined4>* )(unsigned)0x8c279288 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(le<undefined4>* )(unsigned)0x8c279288,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)0x8c279288 = 0;
      *(le<undefined4>* )(unsigned)0x8c27928c = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c122630(*(le<undefined4>* )(unsigned)0x8c27925c,0x8c279288,0x8c27928c,ar7));
    *(le<undefined4>* )(unsigned)0x8c279298 = 0;
    iVar1 = 1;
    *(le<undefined4>* )(unsigned)0x8c279284 = 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c01d7cc\n.set FUN_8c01d7cc, FUN_8c01d7cc_def\n");

}
//@unit 8c01d868
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d868_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d868");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d4c4))))
                    (ar4,3,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c,
                     (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c));
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d868\n.set FUN_8c01d868, FUN_8c01d868_def\n");

}
//@unit 8c01d8a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d8a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d8a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d4c4))))
                    (ar4,5,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c,
                     (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1c));
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01d8a0\n.set FUN_8c01d8a0, FUN_8c01d8a0_def\n");

}
//@unit 8c01d8d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01d8d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d8d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0x5638 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4) = 1;
  *(le<undefined4>* )(unsigned)0x8c27924c = 0;
  *(le<undefined4>* )(unsigned)0x8c2791bc = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d984(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01d8d8\n.set FUN_8c01d8d8, FUN_8c01d8d8_def\n");

}
//@unit 8c01d92c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SPEECH_01d92e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_01d92e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(0x5638 + *(le<int>* )(unsigned)(0x5630 + ar4) * 0x50 + ar4) = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d9ac(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01d624))))
                    (ar4,(&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x1d,
                     (&(*(undefined1 *)(unsigned)0x8c12fb7c)) + 0x26,ar7));
  return uVar1;
}

__asm__(".globl s_SPEECH_01d92e\n.set s_SPEECH_01d92e, s_SPEECH_01d92e_def\n");

}
//@unit 8c01d984
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d984_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d984");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2791b8;
  if (iVar1 == 4) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c356(*(le<undefined4>* )(unsigned)0x8c27925c,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01d984\n.set FUN_8c01d984, FUN_8c01d984_def\n");

}
//@unit 8c01d9ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01d9ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01d9ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = 0, *(le<undefined4>* )(unsigned)0x8c279284 != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1225fc(*(le<undefined4>* )(unsigned)0x8c27925c,3,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01d9ac\n.set FUN_8c01d9ac, FUN_8c01d9ac_def\n");

}
//@unit 8c01d9e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c01d9e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c01d9e0");
  return (unsigned)sh4_interp(0x8c01d9e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c01d9e0\n.set FUN_8c01d9e0, FUN_8c01d9e0_def\n");
}
//@unit 8c01da60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01da60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01da60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<undefined4>* )(unsigned)0x8c2791b8 == 4) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c356(*(le<undefined4>* )(unsigned)0x8c27925c,ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)0x8c279278 = 0;
  return 0;
}

__asm__(".globl FUN_8c01da60\n.set FUN_8c01da60, FUN_8c01da60_def\n");

}
//@unit 8c01da90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01da90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01da90");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 200; for (int i_ = 0; i_ < 200; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2791b8) == 4) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xc8))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 200)); strcpy(((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x94)),((undefined1 *)(unsigned)0x8c12fba9),ar6,ar7));
    iVar1 = (*(le<unsigned>* )(((unsigned long)(fr0_ - 200)) - 12) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 200)) - 8) = 0, *(le<unsigned>* )(((unsigned long)(fr0_ - 200)) - 4) = 0xa, vsp = ((unsigned long)(fr0_ - 200)) - 12, FUN_8c02126c(0x8c3eb334,((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                         ((le<int>*  *)(fr0_ - 0x98))));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
    }
    else if (iVar1 == 2) {
      *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 2;
    }
    else {
      iVar1 = ({ unsigned long t0_ = (unsigned long)(
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98))[2] + 0x20); unsigned long t1_ = (unsigned long)(
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + ((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98))[1] + 0x20); *(le<unsigned>* )((((unsigned long)(fr0_ - 200)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 200)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 200)) - 8); FUN_8c01dc80(ar4,*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,
                           *(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                           (int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x98)) + 0x20); });
      if (iVar1 == 1) {
        *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 200)), FUN_8c021338(0x8c3eb334,((undefined1 *)(fr0_ - 0x94)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,10));
        *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
      }
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
  }
  return 0x5638;
}

__asm__(".globl FUN_8c01da90\n.set FUN_8c01da90, FUN_8c01da90_def\n");

}
//@unit 8c01dc80
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c01dc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01dc80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 ar5_00;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d984(ar4,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 0;
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c279264) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d008(ar4,ar5,uVar2,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 0)), asr_init_from_model(ar4,ar5,uVar2,ar7_00));
  }
  ar7_01 = ((undefined1 *)(unsigned)0x8c279264);
  uVar2 = 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10be9c((*(le<undefined4>* )(unsigned)(unsigned)0x8c279258),ar7,1,((undefined1 *)(unsigned)0x8c279264)));
  *(le<undefined4>* )(unsigned)(ar4 + 0x5b38) = ar7;
  *(le<undefined4>* )(unsigned)(ar4 + 0x5b3c) = s0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x5b40) = s4;
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x5b44,ar5_00,uVar2,ar7_01); });
  ({ unsigned long ri0_ = (unsigned long)(ar5_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x5b65,ar6,uVar2,ar7_01); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ddfc(ar4,ar6,uVar2,ar7_01));
  if (iVar1 == 1) {
    ar6_00 = ((undefined1 *)(unsigned)0x8c279268);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10c3de((*(le<undefined4>* )(unsigned)(unsigned)0x8c279258),*(le<undefined4>* )(unsigned)(ar4 + 0x5b40),((undefined1 *)(unsigned)0x8c279268),ar7_01));
    if ((iVar1 == 0) && (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279288) != (undefined1 *)(unsigned)0x0)) {
      ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c279294)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c122e7c((*(le<undefined4>* )(unsigned)(unsigned)0x8c279264),(*(le<undefined4>* )(unsigned)(unsigned)0x8c279268),((undefined1 *)(unsigned)0x8c12fbae),(*(le<undefined4>* )(unsigned)(unsigned)0x8c279290)); });
      ar6_00 = ((undefined1 *)(unsigned)0x8c12fbae);
      ar7_01 = (undefined1*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279288));
      ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c27928c)); unsigned long t1_ = (unsigned long)(
                   ((undefined1 *)(unsigned)0x8c279290)); unsigned long t2_ = (unsigned long)(((undefined1 *)(unsigned)0x8c279294)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 16) + 8) = (unsigned)t2_; vsp = (((unsigned long)(fr0_ - 0)) - 16); FUN_8c122664((*(le<undefined4>* )(unsigned)(unsigned)0x8c279264),(*(le<undefined4>* )(unsigned)(unsigned)0x8c279268),((undefined1 *)(unsigned)0x8c12fbae),((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c279288)); });
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10b6cc((*(le<undefined4>* )(unsigned)(unsigned)0x8c27925c),(*(le<undefined4>* )(unsigned)(unsigned)0x8c279264),ar6_00,ar7_01));
    if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01dc80\n.set FUN_8c01dc80, FUN_8c01dc80_def\n");

}
//@unit 8c01ddfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ddfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ddfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(le<undefined4>* )(unsigned)0x8c279254 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(0x5b3c + ar4) + 4);
  if (*(le<undefined4>* )(unsigned)0x8c279250 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(le<undefined4>* )(unsigned)0x8c279250,ar5,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(*(le<undefined4>* )(unsigned)0x8c279254 << 2,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c279250 = iVar1;
  if (*(le<undefined4>* )(unsigned)0x8c279250 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(0x5b3c + ar4) + 8;
    for (iVar4 = 0; iVar4 < *(le<undefined4>* )(unsigned)0x8c279254; iVar4 = iVar4 + 1) {
      *(le<int>* )(unsigned)(iVar4 * 4 + *(le<undefined4>* )(unsigned)0x8c279250) = iVar1;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), log_message(iVar1,ar5,ar6,ar7));
      iVar1 = iVar1 + iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl FUN_8c01ddfc\n.set FUN_8c01ddfc, FUN_8c01ddfc_def\n");

}
//@unit 8c01dea4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01dea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01dea4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 164; for (int i_ = 0; i_ < 164; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0xa4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 164)); strcpy(((undefined1 *)(fr0_ - 0x88)),*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x88)),((undefined1 *)(unsigned)0x8c12fba9),ar6,ar7));
  ar7_00 = 10;
  ar6_00 = *(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664;
  (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c021338(0x8c3eb334,((undefined1 *)(fr0_ - 0x88)),ar6_00,10));
  *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01dfc0(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar4 + 0x5b44,ar6_00,ar7_00));
  if (iVar1 == 0) {
    ar5_00 = ar4 + 0x5b65;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01dfc0(*(le<int>* )(unsigned)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,ar5_00,ar6_00,ar7_00));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 164)), FUN_8c01d984(ar4,ar5_00,ar6_00,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c01dea4\n.set FUN_8c01dea4, FUN_8c01dea4_def\n");

}
//@unit 8c01dfc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01dfc0_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01dfc0");
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

__asm__(".globl FUN_8c01dfc0\n.set FUN_8c01dfc0, FUN_8c01dfc0_def\n");

}
//@unit 8c01e028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01e028_def(undefined4 ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar5 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)((int)ar5 + iVar1 + 4) = 0;
  }
  return 0x100;
}

__asm__(".globl FUN_8c01e028\n.set FUN_8c01e028, FUN_8c01e028_def\n");

}
//@unit 8c01e04c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01e04c_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e04c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  *ar5 = *(le<undefined4>* )(unsigned)0x8c27928c;
  for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    *(undefined1 *)(unsigned)((int)ar5 + iVar2 + 4) = 0;
  }
  uVar1 = 0;
  if (*(le<undefined4>* )(unsigned)0x8c27928c != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5 + 1,*(le<undefined4>* )(unsigned)0x8c279288,*(le<undefined4>* )(unsigned)0x8c27928c,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c01e04c\n.set FUN_8c01e04c, FUN_8c01e04c_def\n");

}
//@unit 8c01e0a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01e0a4_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e0a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  
  ar5_00 = ar5;
  if (*(le<undefined4>* )(unsigned)0x8c279288 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(*(le<undefined4>* )(unsigned)0x8c279288,ar5,ar6,ar7));
  }
  *(le<undefined4>* )(unsigned)0x8c279288 = 0;
  *(le<undefined4>* )(unsigned)0x8c27928c = 0;
  iVar1 = 0x100;
  if (*ar5 < 0x100) {
    *(le<undefined4>* )(unsigned)0x8c27928c = *ar5;
    iVar1 = 0;
    if (*(le<undefined4>* )(unsigned)0x8c27928c != 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(*(le<undefined4>* )(unsigned)0x8c27928c,ar5_00,ar6,ar7));
      *(le<undefined4>* )(unsigned)0x8c279288 = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(le<undefined4>* )(unsigned)0x8c279288,ar5 + 1,*(le<undefined4>* )(unsigned)0x8c27928c,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c01e0a4\n.set FUN_8c01e0a4, FUN_8c01e0a4_def\n");

}
//@unit 8c01e128
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01e128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e128");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01e128\n.set FUN_8c01e128, FUN_8c01e128_def\n");

}
//@unit 8c01e14c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01e14c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e14c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01e14c\n.set FUN_8c01e14c, FUN_8c01e14c_def\n");

}
//@unit 8c01e168
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01e168_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e168");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar4_00;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(ar5,ar5,ar6,ar7));
  if (ar4_00 != 0) {
    ar5_00 = ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar4_00,ar4,ar5,ar7));
    ar6 = ar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar4,ar5_00,ar6,ar7));
  return ar4_00;
}

__asm__(".globl FUN_8c01e168\n.set FUN_8c01e168, FUN_8c01e168_def\n");

}
//@unit 8c01e1e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01e1e8_def(le<int>* ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e1e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c279278) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27927c) = 0;
  if ((ar4 != (le<int>* )(unsigned)0x0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c27924c) != 0)) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2791c0) == 2) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274) = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),0,ar6,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 2;
      ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb3),ar6,ar7); });
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2791c0) == 3) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274) + 2;
      if (0x10 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274)) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274) = 0x10;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),(*(le<undefined4>* )(unsigned)(unsigned)0x8c279274),ar6,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 3;
      ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else if (*ar4 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c279274) = 0x10;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(le<undefined4>* )(unsigned)(unsigned)0x8c27926c),0x10,ar6,ar7));
    }
    else if (*(le<int>* )(unsigned)(ar4[1] + 4) < 1000) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 1;
      ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else if (*(le<int>* )(unsigned)(ar4[1] + 4) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280)) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) + -500;
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) < 3000) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) = 3000;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 1;
      ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else {
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) + 1000 < *(le<int>* )(unsigned)(ar4[1] + 4)) &&
         ((*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) + 500, 8000 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280))) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c279280) = 8000;
      }
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2791bc) = 1;
      (*(undefined1 *)(unsigned)0x8c2791c8) = '\0';
      for (iVar1 = 0; iVar1 < *(le<int>* )(unsigned)(uint)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c279250) != 0) && (uVar2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c279254))) &&
           (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(uVar2 * 4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c279250))) != '\0')) {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01437c(((undefined1 *)(unsigned)0x8c2791c8),*(le<undefined4>* )(unsigned)(uVar2 * 4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c279250)),ar6,ar7));
          ar5 = " ";
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01437c(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbbb),ar6,ar7));
          (*(le<uint>* )(fr0_ - 0x20)) = uVar2;
        }
      }
      if ((*(undefined1 *)(unsigned)0x8c2791c8) == '\0') {
        ar5 = "@NAME";
        ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),"@NAME",ar6,ar7); });
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c27927c) = 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), log_message(((undefined1 *)(unsigned)0x8c2791c8),ar5,ar6,ar7));
      if ((0 < iVar1) && (*(char *)(unsigned)(iVar1 + -0x73d86e39) == ' ')) {
        *(undefined1 *)(unsigned)(iVar1 + -0x73d86e39) = 0;
      }
    }
  }
  return 0;
}

__asm__(".globl FUN_8c01e1e8\n.set FUN_8c01e1e8, FUN_8c01e1e8_def\n");

}
//@unit 8c01e4dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c01e4dc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e4dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)((int)ar4 + iVar1 + 4) = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c01e4dc\n.set FUN_8c01e4dc, FUN_8c01e4dc_def\n");

}
//@unit 8c01e504
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01e504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e504");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a308(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01ca24(ar4 + 0x384c,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 1;
  *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
  *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xa520 + ar4) = 1;
  return ar4;
}

__asm__(".globl FUN_8c01e504\n.set FUN_8c01e504, FUN_8c01e504_def\n");

}
//@unit 8c01e560
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01e560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e560");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_01cb24(ar4 + 0x384c,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_01a384(ar4,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c01e560\n.set FUN_8c01e560, FUN_8c01e560_def\n");

}
//@unit 8c01e5b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01e5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01e5b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), input_device_select_and_reset(ar4,ar5,ar6,ar7));
  return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
}

__asm__(".globl FUN_8c01e5b4\n.set FUN_8c01e5b4, FUN_8c01e5b4_def\n");

}
//@unit 8c01e5e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_device_select_and_reset_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_device_select_and_reset");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbc8));
  ((le<undefined4>* )(fr0_ - 0x24))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 4);
  ((le<undefined4>* )(fr0_ - 0x24))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 8);
  ((le<undefined4>* )(fr0_ - 0x24))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 0xc);
  (*(le<undefined4>* )(fr0_ - 0x14)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbc8)) + 0x10);
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 0) {
    return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
  }
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0xa524 + ar4) = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbc8));
    *(le<undefined4>* )(unsigned)(0xa528 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa52c + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa530 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa534 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa538 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa53c + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa540 + ar4) = 0;
    if (ar5 == 0) {
      for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f62cc(((le<undefined4>* )(fr0_ - 0x24))[iVar3],ar5,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f6338(((le<undefined4>* )(fr0_ - 0x24))[iVar3],ar5,ar6,ar7));
        if ((iVar2 == 0) && ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x30)) & 1) != 0)) break;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[0];
        return 1;
      }
    }
    else {
      for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f62cc(((le<undefined4>* )(fr0_ - 0x24))[iVar1],ar5,ar6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f6338(((le<undefined4>* )(fr0_ - 0x24))[iVar1],ar5,ar6,ar7));
        if ((iVar2 == 0) && ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x30)) & 1) != 0)) break;
      }
      if (iVar1 != 3) {
        *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[3];
        return 1;
      }
    }
    *(le<undefined4>* )(unsigned)(0xa524 + ar4) = ((le<undefined4>* )(fr0_ - 0x24))[iVar1];
    *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 5;
  }
  *(le<undefined2>* )(unsigned)(0xa546 + ar4) = 0;
  *(le<undefined2>* )(unsigned)(0xa544 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 36)), input_update_state_gate(ar4,ar5,ar6,ar7));
  return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
}

__asm__(".globl input_device_select_and_reset\n.set input_device_select_and_reset, input_device_select_and_reset_def\n");

}
//@unit 8c01e790
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int input_update_state_gate_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_update_state_gate");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0xa510;
  if (*(le<int>* )(unsigned)(0xa520 + ar4) == 0) {
    iVar2 = 1;
    if (*(le<int>* )(unsigned)(0xa510 + ar4) != 1) {
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_peripheral_state_machine(ar4,ar5,ar6,ar7));
  }
  return iVar2;
}

__asm__(".globl input_update_state_gate\n.set input_update_state_gate, input_update_state_gate_def\n");

}
//@unit 8c01e7cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined * input_peripheral_state_machine_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_peripheral_state_machine");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0xa510);
  if ((iVar2 < 6) && (1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c01e7fc))[iVar2 + -1];
                    
    switch(iVar2) {
    case 5:
    case 2:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a3b4(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      puVar1 = (undefined *)(unsigned)(uint)(iVar2 == 1);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cb54(ar4 + 0x384c,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (iVar2 == 1) {
        puVar1 = (undefined *)(unsigned)((uint)puVar1 | 2);
      }
      if (puVar1 == (undefined *)(unsigned)0x0) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      else if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 4;
      }
      else if (puVar1 == (undefined *)(unsigned)0x2) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 3;
      }
      else if (puVar1 == (undefined *)(unsigned)0x3) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
      break;
    case 3:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7));
      if (iVar2 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a3b4(ar4,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a5cc(ar4,ar5,ar6,ar7));
      if (iVar2 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cb54(ar4 + 0x384c,*(le<undefined4>* )(unsigned)(ar4 + 0xa524),ar6,ar7));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0xa510;
        *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 0;
      }
    }
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01a5cc(ar4,ar5,ar6,ar7));
    if (iVar2 == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 3;
    }
    puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7));
    if (puVar1 == (undefined *)(unsigned)0x0) {
      puVar1 = (undefined *)(unsigned)0xa510;
      *(le<undefined4>* )(unsigned)(ar4 + 0xa510) = 4;
    }
  }
  return puVar1;
}

__asm__(".globl input_peripheral_state_machine\n.set input_peripheral_state_machine, input_peripheral_state_machine_def\n");

}
//@unit 8c01e954
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_poll_device_state_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_poll_device_state");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f62cc(*(le<undefined4>* )(unsigned)(0xa524 + ar4),ar5,ar6,ar7));
  if ((*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x30)) & 1) == 0) {
    *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 10;
    if (*(le<int>* )(unsigned)(0xa51c + ar4) < 1) {
      *(le<undefined4>* )(unsigned)(0xa51c + ar4) = 0;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
    }
    else {
      *(le<int>* )(unsigned)(0xa51c + ar4) = *(le<int>* )(unsigned)(0xa51c + ar4) + -1;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 2;
      uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(0xa540 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0xa528 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa528 + ar4);
    *(le<undefined4>* )(unsigned)(0xa52c + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    *(le<undefined4>* )(unsigned)(0xa530 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0x10);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa530 + ar4);
    *(le<undefined4>* )(unsigned)(0xa534 + ar4) = *(le<undefined4>* )(unsigned)(iVar1 + 0x14);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa534 + ar4);
    *(le<int>* )(unsigned)(0xa538 + ar4) = (int)*(le<short>* )(unsigned)(iVar1 + 0x1c);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa538 + ar4);
    *(le<int>* )(unsigned)(0xa53c + ar4) = (int)*(le<short>* )(unsigned)(iVar1 + 0x1e);
    *(le<uint>* )(unsigned)(0xa540 + ar4) = *(le<uint>* )(unsigned)(0xa540 + ar4) | *(le<uint>* )(unsigned)(0xa53c + ar4);
    *(le<undefined2>* )(unsigned)(0xa544 + ar4) = *(le<undefined2>* )(unsigned)(iVar1 + 0x1a);
    *(le<undefined2>* )(unsigned)(0xa546 + ar4) = *(le<undefined2>* )(unsigned)(iVar1 + 0x18);
    *(le<undefined4>* )(unsigned)(0xa51c + ar4) = 0x5a;
    if (*(le<int>* )(unsigned)(0xa518 + ar4) < 1) {
      *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      if (((*(le<int>* )(unsigned)(0xa514 + ar4) == 0) || (*(le<int>* )(unsigned)(0xa514 + ar4) == 4)) &&
         (*(le<int>* )(unsigned)(0xa510 + ar4) == 5)) {
        *(le<undefined4>* )(unsigned)(0xa518 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
        uVar2 = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), input_update_state_gate(ar4,ar5,ar6,ar7));
      *(le<int>* )(unsigned)(0xa518 + ar4) = *(le<int>* )(unsigned)(0xa518 + ar4) + -1;
      *(le<undefined4>* )(unsigned)(0xa510 + ar4) = 2;
      *(le<undefined4>* )(unsigned)(0xa514 + ar4) = *(le<undefined4>* )(unsigned)(0xa510 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}

__asm__(".globl input_poll_device_state\n.set input_poll_device_state, input_poll_device_state_def\n");

}
//@unit 8c01eb50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01eb50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01eb50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,8,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01eb50\n.set FUN_8c01eb50, FUN_8c01eb50_def\n");

}
//@unit 8c01eb94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01eb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01eb94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,8,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01eb94\n.set FUN_8c01eb94, FUN_8c01eb94_def\n");

}
//@unit 8c01ebd8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_20000_01ebd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_20000_01ebd8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x20000,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_20000_01ebd8\n.set input_is_mask_set_20000_01ebd8, input_is_mask_set_20000_01ebd8_def\n");

}
//@unit 8c01ec20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ec20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ec20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x20000,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ec20\n.set FUN_8c01ec20, FUN_8c01ec20_def\n");

}
//@unit 8c01ec68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_10000_01ec68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_10000_01ec68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10000,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_10000_01ec68\n.set input_is_mask_set_10000_01ec68, input_is_mask_set_10000_01ec68_def\n");

}
//@unit 8c01ecb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ecb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ecb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10000,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ecb0\n.set FUN_8c01ecb0, FUN_8c01ecb0_def\n");

}
//@unit 8c01ecf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ecf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ecf8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10000,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ecf8\n.set FUN_8c01ecf8, FUN_8c01ecf8_def\n");

}
//@unit 8c01ed40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ed40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ed40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10000,3,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ed40\n.set FUN_8c01ed40, FUN_8c01ed40_def\n");

}
//@unit 8c01ed88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ed88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ed88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,4,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ed88\n.set FUN_8c01ed88, FUN_8c01ed88_def\n");

}
//@unit 8c01edcc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01edcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01edcc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,4,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01edcc\n.set FUN_8c01edcc, FUN_8c01edcc_def\n");

}
//@unit 8c01ee10
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ee10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ee10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,4,3,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ee10\n.set FUN_8c01ee10, FUN_8c01ee10_def\n");

}
//@unit 8c01ee54
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ee54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ee54");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,2,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ee54\n.set FUN_8c01ee54, FUN_8c01ee54_def\n");

}
//@unit 8c01ee98
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ee98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ee98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,2,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ee98\n.set FUN_8c01ee98, FUN_8c01ee98_def\n");

}
//@unit 8c01eedc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01eedc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01eedc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,2,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01eedc\n.set FUN_8c01eedc, FUN_8c01eedc_def\n");

}
//@unit 8c01ef20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_400_01ef20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_400_01ef20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x400,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_400_01ef20\n.set input_is_mask_set_400_01ef20, input_is_mask_set_400_01ef20_def\n");

}
//@unit 8c01ef68
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01ef68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ef68");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x400,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01ef68\n.set FUN_8c01ef68, FUN_8c01ef68_def\n");

}
//@unit 8c01efb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01efb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01efb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x400,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01efb0\n.set FUN_8c01efb0, FUN_8c01efb0_def\n");

}
//@unit 8c01eff8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_200_01eff8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_200_01eff8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x200,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_200_01eff8\n.set input_is_mask_set_200_01eff8, input_is_mask_set_200_01eff8_def\n");

}
//@unit 8c01f040
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f040");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x200,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f040\n.set FUN_8c01f040, FUN_8c01f040_def\n");

}
//@unit 8c01f088
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_80_01f088_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_80_01f088");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x80,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_80_01f088\n.set input_is_mask_set_80_01f088, input_is_mask_set_80_01f088_def\n");

}
//@unit 8c01f0d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f0d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f0d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x80,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f0d0\n.set FUN_8c01f0d0, FUN_8c01f0d0_def\n");

}
//@unit 8c01f118
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f118_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f118");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x80,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f118\n.set FUN_8c01f118, FUN_8c01f118_def\n");

}
//@unit 8c01f160
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_40_01f160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_40_01f160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x40,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_40_01f160\n.set input_is_mask_set_40_01f160, input_is_mask_set_40_01f160_def\n");

}
//@unit 8c01f1a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f1a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f1a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x40,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f1a4\n.set FUN_8c01f1a4, FUN_8c01f1a4_def\n");

}
//@unit 8c01f1e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f1e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f1e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x40,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f1e8\n.set FUN_8c01f1e8, FUN_8c01f1e8_def\n");

}
//@unit 8c01f22c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_20_01f22c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_20_01f22c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x20,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_20_01f22c\n.set input_is_mask_set_20_01f22c, input_is_mask_set_20_01f22c_def\n");

}
//@unit 8c01f270
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f270");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x20,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f270\n.set FUN_8c01f270, FUN_8c01f270_def\n");

}
//@unit 8c01f2b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_is_mask_set_10_01f2b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_is_mask_set_10_01f2b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10,0,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl input_is_mask_set_10_01f2b4\n.set input_is_mask_set_10_01f2b4, input_is_mask_set_10_01f2b4_def\n");

}
//@unit 8c01f2f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f2f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f2f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10,1,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f2f8\n.set FUN_8c01f2f8, FUN_8c01f2f8_def\n");

}
//@unit 8c01f33c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f33c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f33c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_mask_test(ar4,0x10,2,ar7));
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f33c\n.set FUN_8c01f33c, FUN_8c01f33c_def\n");

}
//@unit 8c01f380
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_get_word_a538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_get_word_a538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa538 + ar4);
}

__asm__(".globl input_get_word_a538\n.set input_get_word_a538, input_get_word_a538_def\n");

}
//@unit 8c01f38c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_get_word_a53c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("input_get_word_a53c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa53c + ar4);
}

__asm__(".globl input_get_word_a53c\n.set input_get_word_a53c, input_get_word_a53c_def\n");

}
//@unit 8c01f398
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f398");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(0xa540 + ar4) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c01f398\n.set FUN_8c01f398, FUN_8c01f398_def\n");

}
//@unit 8c01f3b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_mask_test_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("input_mask_test");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar6 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_mask_test_word(ar4,ar5,ar4 + 0xa528,ar7));
  }
  else if (ar6 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_mask_test_word(ar4,ar5,ar4 + 0xa52c,ar7));
  }
  else if (ar6 == 2) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_mask_test_word(ar4,ar5,ar4 + 0xa530,ar7));
  }
  else if (ar6 == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), input_mask_test_word(ar4,ar5,ar4 + 0xa534,ar7));
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl input_mask_test\n.set input_mask_test, input_mask_test_def\n");

}
//@unit 8c01f458
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 input_mask_test_word_def(undefined4 ar4,uint ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("input_mask_test_word");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (0x80 < ar5) {
    if (0x400 < ar5) {
      uVar1 = 0x20000;
      if (ar5 <= 0x10000) {
        uVar1 = 0x10000;
      }
    }
    else {
      uVar1 = 0x200;
      if (0x400 <= ar5) goto LAB_8c01f4ea;
    }
    if (uVar1 != ar5) {
      return 0xffffffff;
    }
  }
  else if (ar5 < 0x80) {
    if (ar5 < 0x11) {
      if (ar5 < 0x10) {
        if (8 < ar5) {
          return 0xffffffff;
        }
        if (ar5 < 2) {
          return 0xffffffff;
        }
        if (((ar5 != 2) && (ar5 != 4)) && (ar5 != 8)) {
          return 0xffffffff;
        }
      }
    }
    else if (ar5 < 0x21) {
      if (ar5 != 0x20) {
        return 0xffffffff;
      }
    }
    else if (ar5 != 0x40) {
      return 0xffffffff;
    }
  }
LAB_8c01f4ea:
  if ((*ar6 & ar5) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl input_mask_test_word\n.set input_mask_test_word, input_mask_test_word_def\n");

}
//@unit 8c01f514
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_a524_01f514_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_a524_01f514");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa524 + ar4);
}

__asm__(".globl get_field_a524_01f514\n.set get_field_a524_01f514, get_field_a524_01f514_def\n");

}
//@unit 8c01f520
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f520_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f520");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c01f520\n.set FUN_8c01f520, FUN_8c01f520_def\n");

}
//@unit 8c01f528
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01f528_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f528");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x384c;
}

__asm__(".globl FUN_8c01f528\n.set FUN_8c01f528, FUN_8c01f528_def\n");

}
//@unit 8c01f538
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_a510_01f538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_a510_01f538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa510 + ar4);
}

__asm__(".globl get_field_a510_01f538\n.set get_field_a510_01f538, get_field_a510_01f538_def\n");

}
//@unit 8c01f544
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f544");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d6ec(ar4 + 0x384c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01f544\n.set FUN_8c01f544, FUN_8c01f544_def\n");

}
//@unit 8c01f56c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f56c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01d704(ar4 + 0x384c,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01f56c\n.set FUN_8c01f56c, FUN_8c01f56c_def\n");

}
//@unit 8c01f594
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f594_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f594");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)0x8c2792a0 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3a34(ar4,ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0xf594, iVar1, 0, 0); }
  if ((iVar1 == 6) || (iVar1 == 7)) {
    *(le<undefined4>* )(unsigned)0x8c2792a0 = 6;
  }
  return *(le<undefined4>* )(unsigned)0x8c2792a0;
}

__asm__(".globl FUN_8c01f594\n.set FUN_8c01f594, FUN_8c01f594_def\n");

}
//@unit 8c01f5d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f5d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f5d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4;
}

__asm__(".globl FUN_8c01f5d0\n.set FUN_8c01f5d0, FUN_8c01f5d0_def\n");

}
//@unit 8c01f5d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_01f5d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_01f5d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_01f5d8\n.set free_if_nonnull_wrap_01f5d8, free_if_nonnull_wrap_01f5d8_def\n");

}
//@unit 8c01f608
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_SPEECH_01f60c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_01f60c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  le<undefined4>* ar4_00;
  char *ar5_00;
  int iVar2;
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(0x4b800,ar5,ar6,ar7));
  ar4[4] = uVar1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c2792a0) = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar2 * 0x580d + 0xe) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"\\",0,ar7));
  ar6_00 = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"SPEECH",1,ar7));
  ar5_00 = "GRAPHICS";
  ar4_00 = ar4;
  uVar1 = ar6_00;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"GRAPHICS",2,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c262810(ar4_00,ar5_00,ar6_00,ar7); });
  *(undefined1 *)(unsigned)(ar4 + 7) = 0;
  return 1;
}

__asm__(".globl s_SPEECH_01f60c\n.set s_SPEECH_01f60c, s_SPEECH_01f60c_def\n");

}
//@unit 8c01f6dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f6dc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f6dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar6_00;
  
  uVar1 = 3;
  if (ar6 < 3) {
    ar6_00 = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + ar6 * 0x16034 + 0x38,ar5,ar6,ar7); });
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3078(ar4 + ar6 * 0x16034 + 0x5c,0x800,ar6_00,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + ar6 * 0x16034 + 0x58) = uVar1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3926(ar4 + ar6 * 0x16034 + 0x38,*(le<undefined4>* )(unsigned)(ar4 + ar6 * 0x16034 + 0x58),
                         ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f6dc\n.set FUN_8c01f6dc, FUN_8c01f6dc_def\n");

}
//@unit 8c01f780
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f780");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (*(le<int>* )(unsigned)(ar4 + 0x20) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl FUN_8c01f780\n.set FUN_8c01f780, FUN_8c01f780_def\n");

}
//@unit 8c01f794
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f794_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f794");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(le<int>* )(unsigned)(ar4 + 4) == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,ar5,ar6,ar7));
  }
  else {
    iVar1 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4));
    if (iVar1 == 0xb) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01fab4(ar4,ar5,ar6,ar7));
    }
    else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f9c4(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f8a4(ar4,ar5,ar6,ar7));
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f83c(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c01f794\n.set FUN_8c01f794, FUN_8c01f794_def\n");

}
//@unit 8c01f810
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01f810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static unsigned lastg = 0x12345; unsigned g = *(le<unsigned>* )(unsigned)0x8c2739e0; if (g != lastg) { dbg_log(0x39e0, g, lastg, 0); lastg = g; } } (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264010(0,0,0,0)); (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f231a(0,0,0,0)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int dn; if (++dn % 20000 == 1) { unsigned h = *(le<unsigned>* )(unsigned)(unsigned long)(unsigned)ar4; unsigned st = h ? *(le<unsigned>* )(unsigned)(h + 4) : 0; dbg_log(h, h ? *(unsigned char *)(unsigned)(h + 1) : 99, st, st ? *(unsigned char *)(unsigned)(st + 1) : 99); if (dn == 1) { extern void dbg_dump(unsigned long,int); unsigned t = *(le<unsigned>* )(unsigned)0x8c2739f0; dbg_dump(0x8c2739f0, 1); if (t) dbg_dump(t, 30); } if (st) { extern void dbg_dump(unsigned long,int); dbg_dump(st, 20); dbg_dump(*(le<unsigned>* )(unsigned)(st + 4), 12); } } } iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f794(ar4,ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl FUN_8c01f810\n.set FUN_8c01f810, FUN_8c01f810_def\n");

}
//@unit 8c01f83c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f83c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01f83c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (*(le<undefined4>* )(unsigned)0x8c2792a0 == 6) {
    uVar1 = 1;
  }
  else if (*(le<undefined4>* )(unsigned)0x8c2792a0 == 7) {
    uVar1 = 2;
  }
  else {
    *(char *)(unsigned)(ar4 + 0x1c) = *(char *)(unsigned)(ar4 + 0x1c) + '\x01';
    if (((*(le<int>* )(unsigned)(ar4 + 4) == 0) && (*(le<int>* )(unsigned)(ar4 + 0x20) == 0)) && (*(char *)(unsigned)(ar4 + 0x1c) == '\0')
       ) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f3a4c(ar4,ar5,ar6,ar7));
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c01f83c\n.set FUN_8c01f83c, FUN_8c01f83c_def\n");

}
//@unit 8c01f8a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01f8a4_def(le<int>* ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01f8a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c262168(*ar4,ar5,ar6,ar7));
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      ar5_00 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)ar4[1]);
      ({ unsigned long t0_ = (unsigned long)(ar4[1] + 0x30); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,ar5_00,ar6,ar7); });
      iVar1 = *(le<int>* )(unsigned)(uint)ar4[1];
      if ((iVar1 < 0x11) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          ar5_00 = (le<int>* )(unsigned)(uint)ar4[1];
          (vsp = ((unsigned long)(fr0_ - 0)), s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,ar5_00,ar6,ar7));
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        case 0xf:
          ar6 = (le<int>* )(unsigned)(uint)ar4[1];
          ar5_00 = ar4 + 0xc;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar5_00,ar6,ar7));
          break;
        case 0x10:
          ar6 = (le<int>* )(unsigned)(uint)ar4[1];
          ar5_00 = ar4 + 0xd;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar5_00,ar6,ar7));
        }
      }
    }
    else {
      ar5_00 = (le<int>* )(unsigned)(uint)ar4[1];
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,ar5_00,ar6,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,ar5_00,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01f8a4\n.set FUN_8c01f8a4, FUN_8c01f8a4_def\n");

}
//@unit 8c01f9c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01f9c4_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01f9c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int unaff_r13 = 0;
  
  iVar1 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4));
  if (iVar1 == 0xc) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25b3a2(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar5,ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xd) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c256164))))
                      (*(le<int>* )(unsigned)(ar4 + 4) + 0x10,*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c239212))))
                      (*(le<int>* )(unsigned)(ar4 + 4) + 0x10,*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8),ar6,ar7));
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  if (unaff_r13 == 1) {
    ar7 = *(le<int>* )(unsigned)(ar4 + 4) + 0x10;
    ({ unsigned long t0_ = (unsigned long)(*(le<int>* )(unsigned)(ar4 + 4) + 0x30); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c020600(ar4,*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4)),ar4 + 0x20,ar7); });
    ar6 = *(le<undefined4>* )(unsigned)(ar4 + 4);
    iVar1 = ar4 + 0x2c;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,iVar1,ar6,ar7));
  }
  else {
    iVar1 = *(le<int>* )(unsigned)(ar4 + 4);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02049c(ar4,iVar1,ar6,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02009c(ar4,iVar1,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c01f9c4\n.set FUN_8c01f9c4, FUN_8c01f9c4_def\n");

}
//@unit 8c01fab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c01fab4_def(le<int>* ar4,le<int>* ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c01fab4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ar4[4];
  iVar1 = ar4[5];
  if (iVar1 == 1) {
    ar4[5] = 2;
    ar4[6] = ar4[6] - 0x800;
    iVar2 = ar4[4];
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,1,iVar2,ar7));
    if (iVar1 < 0) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],iVar2,ar7));
      iVar1 = 5;
      ar4[5] = 5;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 0x800;
      if (0x800 < *(le<int>* )(unsigned)(iVar2 + 0x20)) {
        ar4[5] = 3;
        uVar3 = *(le<int>* )(unsigned)(iVar2 + 0x20) + 0xfffff800;
        ar4[6] = ar4[6] - uVar3;
        if (0x4b800 < uVar3) {
          (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
          ar4[5] = 5;
        }
        iVar2 = ar4[4] + 0x800;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c262312))))
                          (*ar4,uVar3 >> 0xb,iVar2,ar7));
        if (iVar1 < 0) {
          (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],iVar2,ar7));
          iVar1 = 5;
          ar4[5] = 5;
        }
      }
    }
    else if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7));
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02049c(ar4,ar4[1],ar6,ar7));
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else {
    if (iVar1 == 4) {
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c01fc78(ar4,ar4[1],ar6,ar7));
      if (0 < ar4[6]) {
        ar4[5] = 1;
        return 1;
      }
      ar7 = ar4[1] + 0x10;
      (*(le<unsigned>* )((((unsigned long)(fr0_ - 2048)) - 8) + 0) = (unsigned)ar4[1] + 0x30, vsp = (((unsigned long)(fr0_ - 2048)) - 8), FUN_8c020600(ar4,*(le<undefined4>* )(unsigned)(uint)ar4[1],ar4 + 8,ar7));
      ar6 = ar4[1];
      ar5 = ar4 + 10;
      (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c0205e8(ar4,ar5,ar6,ar7));
      if (*ar4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c262168(*ar4,ar5,ar6,ar7));
      }
      *ar4 = 0;
    }
    ar4[5] = 0;
    ar4[6] = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2048)), FUN_8c02009c(ar4,ar5,ar6,ar7));
  }
  return iVar1;
}

__asm__(".globl FUN_8c01fab4\n.set FUN_8c01fab4, FUN_8c01fab4_def\n");

}
//@unit 8c01fc78
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01fc78_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01fc78");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  (*(le<undefined4>* )(fr0_ - 0xec)) = *ar5;
  (*(le<undefined4>* )(fr0_ - 0xe8)) = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 244)); strcpy(((undefined1 *)(fr0_ - 0xbc)),ar5 + 0xc,ar6,ar7); });
  iVar2 = 0;
  while (iVar3 = iVar2, iVar3 < 0x20) {
    ((le<undefined4>* )(fr0_ - 0x94))[iVar3] = ar5[iVar3 + 0x16];
    (*(le<int>* )(fr0_ - 0xf4)) = iVar3;
    iVar2 = iVar3 + 1;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x10);
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0xf4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 244)); strcpy(((undefined1 *)(fr0_ - 0xdc)),iVar2,ar6,ar7); });
  (*(le<undefined4>* )(fr0_ - 0xe0)) = *(le<undefined4>* )(unsigned)(iVar2 + 0x20);
  (*(le<int>* )(fr0_ - 0xe4)) = iVar2 + 0x40;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 244)), s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,&(*(le<undefined4>* )(fr0_ - 0xec)),ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c01fc78\n.set FUN_8c01fc78, FUN_8c01fc78_def\n");

}
//@unit 8c01fd08
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def(undefined4 ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  le<int>* ar6_00;
  
  ((le<int>* )(fr0_ - 0x44))[1] = 0;
  ((le<int>* )(fr0_ - 0x44))[0] = 0;
  ((le<int>* )(fr0_ - 0x44))[2] = *(le<int>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c12fbe0));
  (*(le<int>* )(fr0_ - 0x38)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 4);
  (*(le<int>* )(fr0_ - 0x34)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 8);
  (*(le<int>* )(fr0_ - 0x30)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0xc);
  (*(le<int>* )(fr0_ - 0x2c)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x10);
  (*(le<int>* )(fr0_ - 0x28)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x14);
  (*(le<int>* )(fr0_ - 0x24)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x18);
  (*(le<int>* )(fr0_ - 0x20)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x1c);
  (*(le<int>* )(fr0_ - 0x1c)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x20);
  (*(le<int>* )(fr0_ - 0x18)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x24);
  (*(le<int>* )(fr0_ - 0x14)) = *(le<int>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c12fbe0)) + 0x28);
  while( true ) {
    ar6_00 = ((le<int>* )(fr0_ - 0x44));
    ar5_00 = ((le<int>* )(fr0_ - 0x44)) + 1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2124d0(ar5[2],ar5_00,ar6_00,ar7));
    if (iVar1 == 0) break;
    if (((le<int>* )(fr0_ - 0x44))[2] == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 0;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,0));
    }
    else if ((*(le<int>* )(fr0_ - 0x38)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 1;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,1));
    }
    else if ((*(le<int>* )(fr0_ - 0x34)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 2;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,2));
    }
    else if ((*(le<int>* )(fr0_ - 0x30)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 3;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,3));
    }
    else if ((*(le<int>* )(fr0_ - 0x2c)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 4;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,4));
    }
    else if ((*(le<int>* )(fr0_ - 0x28)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 5;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,5));
    }
    else if ((*(le<int>* )(fr0_ - 0x24)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 6;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,6));
    }
    else if ((*(le<int>* )(fr0_ - 0x20)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 7;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,7));
    }
    else if ((*(le<int>* )(fr0_ - 0x1c)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 8;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,8));
    }
    else if ((*(le<int>* )(fr0_ - 0x18)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 9;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,9));
    }
    else if ((*(le<int>* )(fr0_ - 0x14)) == ((le<int>* )(fr0_ - 0x44))[0]) {
      ar7 = 10;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c01fec4(ar4,ar5,iVar1,10));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1fb57c(iVar1,ar5_00,ar6_00,ar7));
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1fb57c(ar5,ar5_00,ar6_00,ar7));
  }
  return iVar1;
}

__asm__(".globl s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e\n.set s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e, s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def\n");

}
//@unit 8c01fec4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c01fec4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01fec4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  int iVar3;
  int ar7_00;
  
  iVar3 = ar5 + 0x10;
  ar6_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = (*(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)ar5 + 0x30, vsp = (((unsigned long)(fr0_ - 0)) - 8), FUN_8c02051c(ar4,ar7,ar6_00,iVar3));
  if (iVar1 == 0) {
    ar7_00 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = ({ unsigned long t0_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar5 + 0x50)); unsigned long t1_ = (unsigned long)(*(le<undefined4>* )(unsigned)(ar5 + 0x54)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02000c))))
                      (ar4,ar7,iVar3,ar7_00); })
    ;
    if (iVar1 == 0) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar6,ar7,iVar3,ar7_00));
    }
    else {
      *(le<undefined4>* )(unsigned)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(le<undefined4>* )(unsigned)(iVar1 + iVar3 * 4 + 0x58) = *(le<undefined4>* )(unsigned)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x28,iVar1,ar7_00));
    }
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb57c(ar6,uVar2,ar6_00,iVar3));
  }
  return uVar2;
}

__asm__(".globl FUN_8c01fec4\n.set FUN_8c01fec4, FUN_8c01fec4_def\n");

}
//@unit 8c01ffa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c01ffa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c01ffa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  
  ar6_00 = ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(s4); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c02000c(ar4,ar5,ar6,ar7); });
  if (ar6_00 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0205e8(ar4,ar4 + 0x20,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0206b8(ar4,ar6_00,s8,ar7));
  }
  return (uint)(ar6_00 != 0);
}

__asm__(".globl FUN_8c01ffa0\n.set FUN_8c01ffa0, FUN_8c01ffa0_def\n");

}
