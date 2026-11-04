//@unit 8c200038
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200038");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  int a5;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (int)0x148;
  iVar5 = ar4 * iVar4 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar5 + 2) != '\0') {
    uVar3 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fdd1a(ar4,uVar3,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fd550(ar4,uVar3,ar6,ar7));
      if ((iVar1 != 0) && (*(char *)(unsigned)(ar4 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1ffcc2(ar4,uVar3,ar6,ar7));
        if (iVar4 < 0) {
          return (int)(int)0xffffff03;
        }
        if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar5 + 0x1c) + 0x38) != 0) {
          puVar2 = ((undefined1 *)(fr0_ - 0x2c));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1ffc0a(ar4,puVar2,ar6,ar7));
          if ((iVar4 != 0) && (iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fffca(ar4,puVar2,ar6,ar7)), -1 < iVar4)) {
            while( true ) {
              puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1ffebe(ar4,puVar2,ar6,ar7));
              if (((int)puVar2 < 0) || (iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fff0c(ar4,puVar2 + 1,ar6,ar7)), iVar4 < 0)) {
                iVar4 = (int)0x100;
                uVar3 = 1;
                for (puVar2 = (undefined1 *)(unsigned)(iVar5 + 0x48);
                    puVar2 < (undefined1 *)(unsigned)(iVar5 + 0x48 + iVar4); puVar2 = puVar2 + 1) {
                  *puVar2 = 1;
                }
                iVar5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c200346(ar4,iVar4,1,ar7));
                if (iVar5 < 0) {
                  return iVar5;
                }
                uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2007f0(ar4,iVar4,uVar3,ar7));
                return uVar3;
              }
              iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fbb6c(ar4,puVar2,ar5,ar7));
              if (iVar1 < 0) {
                return iVar1;
              }
              uVar3 = ar5;
              iVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fbc44(ar4,iVar4,ar5,ar7));
              if (iVar1 < 0) break;
              a5 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c200890(ar4,puVar2,uVar3,ar7));
              iVar1 = iVar4;
              if (a5 < 1) {
                uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fff5e(ar4,puVar2,uVar3,ar7));
                (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0x10))))(uVar3,2,iVar4,ar7));
              }
              else {
                (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,a5,iVar4,ar7));
              }
              uVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2009d0(ar4,puVar2,iVar1,ar7));
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,iVar4,uVar3,ar7));
              ar6 = 0xfffc;
              (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,puVar2,0xfffc,ar7));
            }
            return iVar1;
          }
        }
        return (int)(int)0xffffff0b;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c200038\n.set FUN_8c200038, FUN_8c200038_def\n");

}
//@unit 8c2001b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2001b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2001b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar1 = 0xfffa;
  uVar9 = 1;
  iVar7 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = (int)0x200;
  iVar4 = *(le<int>* )(unsigned)(iVar3 + 0x1c);
  iVar6 = *(le<int>* )(unsigned)(iVar4 + 0x18);
  uVar8 = *(le<uint>* )(unsigned)(iVar4 + 0x14);
  iVar3 = *(le<int>* )(unsigned)(iVar3 + 0x28);
  if (0 < iVar6) {
    do {
      iVar4 = iVar3;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbb6c(ar4,uVar8 & 0xffff,uVar9,vr7));
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar8 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(ar4,uVar8 & 0xffff,iVar4,ar7));
      if ((uVar8 & 0xffff) == uVar1) {
        return 0;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + iVar5;
    } while (iVar7 < iVar6);
  }
  return 0;
}

__asm__(".globl FUN_8c2001b8\n.set FUN_8c2001b8, FUN_8c2001b8_def\n");

}
//@unit 8c2001d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2001d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2001d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int in_r3 = 0;
  int iVar3;
  int a6;
  int iVar4;
  int iVar5;
  int unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  uint uVar6;
  
  uVar1 = 0xfffa;
  iVar4 = (int)0x200;
  iVar3 = *(le<int>* )(unsigned)(ar4 + in_r3 + 0x1c);
  iVar5 = *(le<int>* )(unsigned)(iVar3 + 0x18);
  uVar6 = *(le<uint>* )(unsigned)(iVar3 + 0x14);
  iVar3 = *(le<int>* )(unsigned)(ar4 + in_r3 + 0x28);
  if (0 < iVar5) {
    do {
      a6 = iVar3;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbb6c(unaff_r12,uVar6 & 0xffff,iVar3,ar7));
      if (iVar2 < 0) {
        return iVar2;
      }
      uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(unaff_r12,uVar6 & 0xffff,a6,ar7));
      if ((uVar6 & 0xffff) == uVar1) {
        return 0;
      }
      unaff_r11 = unaff_r11 + 1;
      iVar3 = iVar3 + iVar4;
    } while (unaff_r11 < iVar5);
  }
  return 0;
}

__asm__(".globl FUN_8c2001d0\n.set FUN_8c2001d0, FUN_8c2001d0_def\n");

}
//@unit 8c200226
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200226_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200226");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  uint a6;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint a6_00;
  
  a6 = 0xfffa;
  iVar7 = 0;
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  (*(le<ushort>* )(fr0_ - 0x2c)) = *(le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(iVar6 + 0x1c) + 0x14);
  uVar1 = (uint)(short)(*(le<ushort>* )(fr0_ - 0x2c));
  iVar5 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar6 + 0x1c) + 0x18);
  a6_00 = 0xfffa + 2;
  if (0 < iVar5) {
    do {
      uVar3 = uVar1 & 0xffff;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2009d0(ar4,uVar3,ar6,ar7));
      ar6 = a6_00;
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar3,a6_00,ar7));
      if (((uVar1 & 0xffff) == a6) || ((uVar1 & 0xffff) == a6_00)) break;
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
  uVar1 = (uint)(short)(*(le<ushort>* )(fr0_ - 0x2c));
  iVar7 = 0;
  do {
    if (iVar5 <= iVar7) {
      if ((uint)(*(le<ushort>* )(fr0_ - 0x2c)) != *(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(iVar6 + 0x1c) + 0x14)) {
        uVar4 = 0x4a;
        iVar5 = (int)(short)(*(le<ushort>* )(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0x10))))(*(le<undefined4>* )(unsigned)(iVar6 + 0x20),0x4a,iVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c2007f0(ar4,uVar4,iVar5,ar7));
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20065a(ar4,uVar4,iVar5,ar7));
      }
      return 0;
    }
    while (iVar2 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                             (ar4,uVar1 & 0xffff,*(le<int>* )(unsigned)(iVar6 + 0x28) + iVar7 * 0x200,ar7)),
          iVar2 != 0) {
      if (iVar2 == (int)0xffffff01) {
        return iVar2;
      }
      uVar4 = 0xffff;
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,0xffff,ar7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fe15a(ar4,a6_00,uVar4,ar7));
    }
    if (iVar7 == 0) {
      (*(le<ushort>* )(fr0_ - 0x2c)) = (ushort)uVar1;
    }
    uVar3 = a6;
    (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,a6,ar7));
    if (iVar7 != iVar5 + -1) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1fe15a(ar4,a6_00,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c20099e(ar4,uVar1 & 0xffff,uVar4,ar7));
      uVar1 = (uint)(short)uVar4;
    }
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl FUN_8c200226\n.set FUN_8c200226, FUN_8c200226_def\n");

}
//@unit 8c200346
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200346_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200346");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 ar6_00;
  uint unaff_r8 = 0;
  int iVar6;
  int iVar7;
  uint a5;
  
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  uVar5 = *(le<uint>* )(unsigned)(iVar6 + 0x1c);
  iVar3 = *(le<int>* )(unsigned)(uVar5 + 0x18);
  uVar4 = *(le<uint>* )(unsigned)(uVar5 + 0x14);
  iVar7 = 0;
  bVar1 = false;
  do {
    a5 = uVar4 & 0xffff;
    if (iVar3 <= iVar7) {
      if ((!bVar1) ||
         ((iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2007f0(ar4,uVar5,ar6,ar7)), -1 < iVar3 &&
          (iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(ar4,uVar5,ar6,ar7)), -1 < iVar3)))) {
        iVar3 = 0;
      }
      return iVar3;
    }
    if (*(char *)(unsigned)(iVar6 + 0x48 + iVar7) == '\0') {
      uVar5 = a5;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
    }
    else {
      while( true ) {
        ar6 = *(le<int>* )(unsigned)(iVar6 + 0x28) + iVar7 * 0x200;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbc44(ar4,a5,ar6,ar7));
        if (iVar2 == 0) break;
        if (iVar2 == (int)0xffffff01) {
          return iVar2;
        }
        bVar1 = true;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
        ar6_00 = 0xffff;
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,a5,0xffff,ar7));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fe15a(ar4,0xfffc,ar6_00,ar7));
        if ((int)uVar5 < 0) {
          return (int)(int)0xffffff04;
        }
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,uVar5,uVar4 & 0xffff,ar7));
        if (iVar7 == 0) {
          (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0x10))))(*(le<undefined4>* )(unsigned)(iVar6 + 0x20),0x4a,uVar5,ar7));
          unaff_r8 = a5;
          a5 = uVar5;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,unaff_r8,uVar5,ar7));
          unaff_r8 = a5;
          a5 = uVar5;
        }
      }
      uVar5 = a5;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
      *(undefined1 *)(unsigned)(iVar6 + 0x48 + iVar7) = 0;
    }
    iVar7 = iVar7 + 1;
    unaff_r8 = a5;
  } while( true );
}

__asm__(".globl FUN_8c200346\n.set FUN_8c200346, FUN_8c200346_def\n");

}
//@unit 8c200472
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200472_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200472");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*ar4 == '\0') {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
    ar4 = ar4 + 1;
  } while (iVar2 < 0xc);
  return iVar1;
}

__asm__(".globl FUN_8c200472\n.set FUN_8c200472, FUN_8c200472_def\n");

}
//@unit 8c2004a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2004a0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2004a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char *a5;
  
  a5 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200472(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200472(ar5,a5,ar6,ar7));
  if (iVar1 != iVar2) {
    return 0;
  }
  iVar2 = 0;
  if (0 < iVar1) {
    do {
      if (*ar4 != *ar5) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      ar5 = ar5 + 1;
      ar4 = ar4 + 1;
    } while (iVar2 < iVar1);
  }
  return 1;
}

__asm__(".globl FUN_8c2004a0\n.set FUN_8c2004a0, FUN_8c2004a0_def\n");

}
//@unit 8c2004ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2004ea_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2004ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  le<int>* piVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  byte *pbVar6;
  
  pbVar5 = (byte *)(unsigned)(ar5 + 0x10);
  *(le<uint>* )(unsigned)(ar5 + 4) = (uint)*ar4;
  pbVar6 = ar4 + 4;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(unsigned)(ar5 + 0x1c));
  pbVar5 = (byte *)(unsigned)(ar5 + 0x20);
  *(undefined1 *)(unsigned)(ar5 + 0x1c) = 0;
  pbVar6 = ar4 + 0x10;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    *pbVar5 = bVar1;
    piVar2 = 0x8c4783dc;
    pbVar5 = pbVar5 + 1;
  } while (pbVar5 < (byte *)(unsigned)(ar5 + 0x28));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0xc))))(ar4,2,1,vr7));
  *(le<uint>* )(unsigned)(ar5 + 0xc) = uVar3 & 0xffff;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0xc))))(ar4,0x18,vr6,vr7));
  *(le<uint>* )(unsigned)(ar5 + 0x28) = uVar3 & 0xffff;
  *(byte *)(unsigned)(ar5 + 10) = ar4[1];
  uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0xc))))(ar4,0x1a,vr6,vr7));
  *(le<short>* )(unsigned)(ar5 + 8) = (short)uVar4;
  return uVar4;
}

__asm__(".globl FUN_8c2004ea\n.set FUN_8c2004ea, FUN_8c2004ea_def\n");

}
//@unit 8c2004f6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2004f6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2004f6");
  return (unsigned)sh4_interp(0x8c2004f6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2004f6\n.set FUN_8c2004f6, FUN_8c2004f6_def\n");
}
//@unit 8c200566
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200566_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200566");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 a6;
  int iVar2;
  int iVar3;
  byte *a4;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  a4 = ((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x28));
  iVar3 = 0;
  a6 = ar6;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004a0(ar5,a4 + 4,a6,ar7)), iVar1 != 0)) break;
    a4 = a4 + 0x20;
    iVar3 = iVar3 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(a4,ar6,a6,ar7));
  return iVar3;
}

__asm__(".globl FUN_8c200566\n.set FUN_8c200566, FUN_8c200566_def\n");

}
//@unit 8c2005d6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2005d6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2005d6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar6_00;
  byte *ar4_00;
  int iVar1;
  
  ar6_00 = ar4 * 0x148 + 0x8c4783e0;
  ar4_00 = ((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(ar6_00 + 0x28));
  iVar1 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar6_00 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*ar4_00 == (int)0xcc) break;
    ar4_00 = ar4_00 + 0x20;
    iVar1 = iVar1 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(ar4_00,ar5,ar6_00,(uint)*ar4_00));
  return iVar1;
}

__asm__(".globl FUN_8c2005d6\n.set FUN_8c2005d6, FUN_8c2005d6_def\n");

}
//@unit 8c2005dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2005dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2005dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int in_r3 = 0;
  int a6;
  byte *a4;
  int iVar1;
  int in_MACL = 0;
  
  a6 = in_MACL + in_r3;
  a4 = ((byte *)(unsigned long)*(le<unsigned>* )(unsigned)(a6 + 0x28));
  iVar1 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(a6 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if ((uint)*a4 == (int)0xcc) break;
    a4 = a4 + 0x20;
    iVar1 = iVar1 + 1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2004ea(a4,ar5,a6,(uint)*a4));
  return iVar1;
}

__asm__(".globl FUN_8c2005dc\n.set FUN_8c2005dc, FUN_8c2005dc_def\n");

}
//@unit 8c200614
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200614_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200614");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  pcVar2 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar3 + 0x28));
  iVar1 = 0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30) <= iVar1) {
      return 0xffffffff;
    }
    if (*pcVar2 == '\0') break;
    pcVar2 = pcVar2 + 0x20;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c200614\n.set FUN_8c200614, FUN_8c200614_def\n");

}
//@unit 8c200642
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200642_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200642");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbb6c))))
                    (*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0x1c) + 8),*(le<undefined4>* )(unsigned)(iVar2 + 0x20),vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c200642\n.set FUN_8c200642, FUN_8c200642_def\n");

}
//@unit 8c20065a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20065a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20065a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                    (*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0x1c) + 8),*(le<undefined4>* )(unsigned)(iVar2 + 0x20),vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c20065a\n.set FUN_8c20065a, FUN_8c20065a_def\n");

}
//@unit 8c200672
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200672_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200672");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = ((void *)(unsigned)0x8c1fbb6c);
  uVar6 = 1;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(le<int>* )(unsigned)(iVar4 + 0x24),uVar6));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}

__asm__(".globl FUN_8c200672\n.set FUN_8c200672, FUN_8c200672_def\n");

}
//@unit 8c200682
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200682_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200682");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int in_r3 = 0;
  undefined4 unaff_r11 = 0;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_MACL = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1fbb6c);
  iVar4 = in_MACL + in_r3;
  iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x10);
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r11,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0xc) + iVar5,
                                iVar5 * 0x200 + *(le<int>* )(unsigned)(iVar4 + 0x24),ar7));
      if (iVar2 < 0) {
        return iVar2;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  return 0;
}

__asm__(".globl FUN_8c200682\n.set FUN_8c200682, FUN_8c200682_def\n");

}
//@unit 8c2006dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2006dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2006dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  int ar6_01;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ar6_00 = 0xfffa;
  iVar4 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x10);
  ar6_01 = 0xfffa + 5;
  if (0 < iVar2) {
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                        (ar4,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,
                         iVar4 * 0x200 + *(le<int>* )(unsigned)(iVar3 + 0x24),vr7));
      if (iVar1 < 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(ar4,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_01,ar7));
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(ar4,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_00,ar7));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

__asm__(".globl FUN_8c2006dc\n.set FUN_8c2006dc, FUN_8c2006dc_def\n");

}
//@unit 8c2006fa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2006fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2006fa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r8 = 0;
  int iVar2;
  undefined4 unaff_r12 = 0;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  
  iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(unaff_r13 + 0x1c) + 0x10);
  if (0 < iVar2) {
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                        (unaff_r12,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,
                         unaff_r14 * 0x200 + *(le<int>* )(unsigned)(unaff_r13 + 0x24),ar7));
      if (iVar1 < 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(unaff_r12,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8 + 5,
                     ar7));
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(unaff_r12,*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(unaff_r13 + 0x1c) + 0xc) + unaff_r14,unaff_r8,ar7));
      unaff_r14 = unaff_r14 + 1;
    } while (unaff_r14 < iVar2);
  }
  return 0;
}

__asm__(".globl FUN_8c2006fa\n.set FUN_8c2006fa, FUN_8c2006fa_def\n");

}
//@unit 8c20075a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20075a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20075a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int ar6_00;
  int ar7_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = 0xfffc;
  iVar4 = *(le<int>* )(unsigned)(ar4 * 0x148 + 0x8c4783e0 + 0x1c);
  iVar5 = *(le<int>* )(unsigned)(iVar4 + 0x1c);
  iVar6 = *(le<int>* )(unsigned)(iVar4 + 0x10);
  iVar4 = *(le<int>* )(unsigned)(iVar4 + 0x20) + iVar5 + -1;
  do {
    ar6_00 = iVar5;
    ar7_00 = iVar4;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fe1e4(ar4,uVar1,vr6,vr7));
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    iVar7 = 0;
    if (0 < iVar6) {
      do {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2009d0(ar4,iVar2 - iVar7,ar6_00,ar7_00));
        if ((uVar3 & 0xffff) != uVar1) {
          iVar4 = (iVar2 - iVar7) + -1;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar6);
    }
    if (iVar7 == iVar6) {
      return (iVar2 - iVar6) + 1;
    }
  } while( true );
}

__asm__(".globl FUN_8c20075a\n.set FUN_8c20075a, FUN_8c20075a_def\n");

}
//@unit 8c200772
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200772_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200772");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  uint uVar2;
  int in_r3 = 0;
  int iVar3;
  int a6;
  int a7;
  int ar6_00;
  undefined4 unaff_r10 = 0;
  int iVar4;
  int iVar5;
  
  ar5_00 = 0xfffc;
  iVar3 = *(le<int>* )(unsigned)(ar5 + in_r3 + 0x1c);
  ar6_00 = *(le<int>* )(unsigned)(iVar3 + 0x1c);
  iVar4 = *(le<int>* )(unsigned)(iVar3 + 0x10);
  iVar3 = *(le<int>* )(unsigned)(iVar3 + 0x20) + ar6_00 + -1;
  do {
    a6 = ar6_00;
    a7 = iVar3;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1fe1e4(unaff_r10,ar5_00,ar6_00,iVar3));
    if (iVar1 < 0) {
      return 0xffffffff;
    }
    iVar5 = 0;
    if (0 < iVar4) {
      do {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2009d0(unaff_r10,iVar1 - iVar5,a6,a7));
        if ((uVar2 & 0xffff) != ar5_00) {
          iVar3 = (iVar1 - iVar5) + -1;
          break;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar4);
    }
    if (iVar5 == iVar4) {
      return (iVar1 - iVar4) + 1;
    }
  } while( true );
}

__asm__(".globl FUN_8c200772\n.set FUN_8c200772, FUN_8c200772_def\n");

}
//@unit 8c2007f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2007f0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2007f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  bool bVar1;
  le<int>* piVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ar6_00 = 0xfffa;
  piVar2 = 0x8c4783dc;
  uVar5 = 0;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  bVar1 = false;
  while( true ) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2006dc(ar4,ar5,ar6,ar7));
    if (iVar3 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar3 != (int)0xffffff40) break;
    ar6 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20075a(ar4,ar5,ar6,ar7));
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0xc) = ar6;
    (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 0x10))))(*(le<undefined4>* )(unsigned)(iVar4 + 0x20),uVar5,vr6,vr7));
    for (iVar3 = 0; bVar1 = true, iVar3 < *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x10); iVar3 = iVar3 + 1
        ) {
      ar5 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0xc) + iVar3;
      ar6 = ar6_00;
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,ar5,ar6_00,ar7));
    }
  }
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(ar4,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c2007f0\n.set FUN_8c2007f0, FUN_8c2007f0_def\n");

}
//@unit 8c20080e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20080e_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20080e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int a6;
  int iVar2;
  int in_r3 = 0;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  undefined4 unaff_r12 = 0;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  int iVar3;
  
  a6 = 0xfffa;
  piVar1 = 0x8c4783dc;
  iVar3 = unaff_r14 + in_r3;
  while( true ) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2006dc(unaff_r12,ar5,ar6,ar7));
    if (iVar2 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar2 != (int)0xffffff40) break;
    ar6 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20075a(unaff_r12,ar5,ar6,ar7));
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0xc) = ar6;
    (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0x10))))(*(le<undefined4>* )(unsigned)(iVar3 + 0x20),0x46,ar6,ar7));
    for (iVar2 = unaff_r10; unaff_r13 = unaff_r9, iVar2 < *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x10);
        iVar2 = iVar2 + 1) {
      ar5 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0xc) + iVar2;
      ar6 = a6;
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(unaff_r12,ar5,a6,ar7));
    }
  }
  if (unaff_r13 != 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(unaff_r12,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c20080e\n.set FUN_8c20080e, FUN_8c20080e_def\n");

}
//@unit 8c200890
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200890_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200890");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = 0x8c4783dc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar3 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x30);
  do {
    iVar3 = iVar3 + -1;
    if (iVar3 < 0) {
      return 0xffffffff;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(*(le<undefined4>* )(unsigned)(iVar4 + 0x24),iVar3 * 2,ar6,ar7));
  } while ((uVar2 & 0xffff) != (uint)(ushort)ar5);
  return iVar3;
}

__asm__(".globl FUN_8c200890\n.set FUN_8c200890, FUN_8c200890_def\n");

}
//@unit 8c2008f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2008f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2008f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ar5_00;
  int ar5_01;
  int iVar1;
  int ar6_00;
  
  ar5_00 = 0xfffc;
  ar6_00 = 0xfffc + -2;
  while( true ) {
    ar5_01 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200890(ar4,ar5_00,ar6,ar7));
    if (ar5_01 < 0) {
      return 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20093a(ar4,ar5_01,ar6,ar7));
    if (-1 < iVar1) break;
    ar6 = ar6_00;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20099e(ar4,ar5_01,ar6_00,ar7));
  }
  return ar5_01;
}

__asm__(".globl FUN_8c2008f4\n.set FUN_8c2008f4, FUN_8c2008f4_def\n");

}
//@unit 8c200900
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200900_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200900");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int a5;
  int iVar1;
  int unaff_r11 = 0;
  undefined4 unaff_r13 = 0;
  
  while( true ) {
    a5 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200890(unaff_r13,unaff_r11,ar6,ar7));
    if (a5 < 0) {
      return 0xffffffff;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20093a(unaff_r13,a5,ar6,ar7));
    if (-1 < iVar1) break;
    ar6 = unaff_r11 + -2;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20099e(unaff_r13,a5,unaff_r11 + -2,ar7));
  }
  return a5;
}

__asm__(".globl FUN_8c200900\n.set FUN_8c200900, FUN_8c200900_def\n");

}
//@unit 8c20093a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20093a_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20093a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  int ar5_00;
  undefined4 uVar5;
  
  piVar1 = 0x8c4783dc;
  ar5_00 = 0;
  uVar5 = 0xfffa;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar4 + 0x1c) + 0x30) <= ar5_00) {
      return ar5 & 0xffff;
    }
    pbVar2 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200a84(ar4,ar5_00,ar6,ar7));
    if (((*pbVar2 == 0x33) || (*pbVar2 == 0xcc)) &&
       (uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(2,uVar5,vr6,vr7)), (ar5 & 0xffff) == (uVar3 & 0xffff))) break;
    ar5_00 = ar5_00 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c20093a\n.set FUN_8c20093a, FUN_8c20093a_def\n");

}
//@unit 8c20094e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20094e_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20094e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  byte *a4;
  uint uVar2;
  int in_r3 = 0;
  undefined4 unaff_r12 = 0;
  int unaff_r14 = 0;
  int in_MACL = 0;
  
  piVar1 = 0x8c4783dc;
  while( true ) {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(in_MACL + in_r3 + 0x1c) + 0x30) <= unaff_r14) {
      return ar5 & 0xffff;
    }
    a4 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c200a84(unaff_r12,unaff_r14,ar6,ar7));
    if (((*a4 == 0x33) || (*a4 == 0xcc)) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar1 + 0xc))))(a4,2,ar6,ar7)), (ar5 & 0xffff) == (uVar2 & 0xffff)))
    break;
    unaff_r14 = unaff_r14 + 1;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c20094e\n.set FUN_8c20094e, FUN_8c20094e_def\n");

}
//@unit 8c20099e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20099e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20099e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  if (ar5 <= *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x1c))) {
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0x10))))(*(le<undefined4>* )(unsigned)(iVar2 + 0x24),ar5 << 1,vr6,vr7));
    return uVar1;
  }
  return ar5;
}

__asm__(".globl FUN_8c20099e\n.set FUN_8c20099e, FUN_8c20099e_def\n");

}
//@unit 8c2009d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2009d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2009d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4783dc + 0xc))))
                    (*(le<undefined4>* )(unsigned)(ar4 * 0x148 + 0x8c4783e0 + 0x24),ar5 << 1,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c2009d0\n.set FUN_8c2009d0, FUN_8c2009d0_def\n");

}
//@unit 8c200a00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200a00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  *(le<undefined4>* )(unsigned)(0x8c478e20 + ar4 * 4) = 0;
  if ((*(char *)(unsigned)(iVar2 + 10) != '\0') || (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200642(ar4,ar5,ar6,ar7)), -1 < iVar1)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1ffcc2(ar4,ar5,ar6,ar7));
    if (-1 < iVar1) {
      if (((*(char *)(unsigned)(iVar2 + 0xb) == '\0') && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200672(ar4,ar5,ar6,ar7)), iVar1 < 0))
         || ((*(char *)(unsigned)(iVar2 + 0xc) == '\0' && (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2001b8(ar4,ar5,ar6,ar7)), iVar1 < 0)))
         ) {
        if (iVar1 != 0xffff0000) {
          return iVar1;
        }
        *(le<undefined4>* )(unsigned)(0x8c478e20 + ar4 * 4) = 1;
      }
      else {
        *(undefined1 *)(unsigned)(iVar2 + 10) = 1;
        *(undefined1 *)(unsigned)(iVar2 + 0xb) = 1;
        *(undefined1 *)(unsigned)(iVar2 + 0xc) = 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c200a00\n.set FUN_8c200a00, FUN_8c200a00_def\n");

}
//@unit 8c200a84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200a84_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200a84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar5 * 0x20 + *(le<int>* )(unsigned)(ar4 * 0x148 + 0x8c4783e0 + 0x28);
}

__asm__(".globl FUN_8c200a84\n.set FUN_8c200a84, FUN_8c200a84_def\n");

}
//@unit 8c200a9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200a9c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200a9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ar4 * 0x148 + 0x8c4783e0 + 0x48;
  *(undefined1 *)(unsigned)((ar5 >> 4) + iVar1) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c200a9c\n.set FUN_8c200a9c, FUN_8c200a9c_def\n");

}
//@unit 8c200ab6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200ab6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200ab6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 252; for (int i_ = 0; i_ < 252; i_++) z_[i_] = 0; }
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  pcVar1 = 0x8c47d0a0;
  while( true ) {
    if (*(le<undefined4>* )(unsigned)0x8c47d2e0 <= iVar2) {
      *(le<undefined4>* )(unsigned)0x8c47d2e4 = (int)(int)0xffffff07;
      return 0;
    }
    if (*pcVar1 == '\0') break;
    pcVar1 = pcVar1 + 0x48;
    iVar2 = iVar2 + 1;
  }
  *pcVar1 = '\x01';
  *(le<int>* )(unsigned)(pcVar1 + 0xc) = iVar2;
  return pcVar1;
}

__asm__(".globl FUN_8c200ab6\n.set FUN_8c200ab6, FUN_8c200ab6_def\n");

}
//@unit 8c200ae4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200ae4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200ae4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(0x8c013ff8)))(0,0x48,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c200ae4\n.set FUN_8c200ae4, FUN_8c200ae4_def\n");

}
//@unit 8c200aec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_200aec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_200aec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_200aec\n.set ret_const_0_200aec, ret_const_0_200aec_def\n");

}
//@unit 8c200b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200b10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined1 *a6;
  int iVar3;
  uint a5;
  
  a6 = ((undefined1 *)(fr0_ - 0x40));
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,((undefined1 *)(fr0_ - 0x40)),ar7));
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,iVar1,a6,ar7));
    if ((int)(*(le<uint>* )(fr0_ - 0x34)) < *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30)) {
      a5 = (*(le<uint>* )(fr0_ - 0x34));
      for (iVar1 = 0; iVar1 < (*(le<int>* )(fr0_ - 0x18)); iVar1 = iVar1 + 1) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c2009d0(ar4,a5,a6,ar7));
        uVar2 = uVar2 & 0xffff;
        if (iVar1 == (*(le<int>* )(fr0_ - 0x18)) + -1) {
          if (uVar2 != 0xfffa) goto LAB_8c200b80;
        }
        else if ((((uVar2 == a5) || (uVar2 == 0xfffa)) || (uVar2 == 0xfffc)) ||
                ((uVar2 == 0xffff || (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar3 + 0x1c) + 0x30) <= (int)uVar2)))
                ) goto LAB_8c200b80;
        a5 = uVar2;
      }
      iVar1 = 0;
    }
    else {
LAB_8c200b80:
      iVar1 = (int)(int)0xffffff41;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c200b10\n.set FUN_8c200b10, FUN_8c200b10_def\n");

}
//@unit 8c200ba0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200ba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200ba0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 d;
  
  d = 10;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(ar4,10,vr6,vr7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0106dc(ar4,d,vr6,vr7));
  return iVar1 * 0x10 + iVar2;
}

__asm__(".globl FUN_8c200ba0\n.set FUN_8c200ba0, FUN_8c200ba0_def\n");

}
//@unit 8c200bc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200bc4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200bc4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (ar4 >> 4) * 10 + (ar4 & 0xf);
}

__asm__(".globl FUN_8c200bc4\n.set FUN_8c200bc4, FUN_8c200bc4_def\n");

}
//@unit 8c200bfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c200bfc_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200bfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar5_00;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468((uint)*(le<ushort>* )(unsigned)ar5,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5_00,ar6,ar7));
  *ar4 = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614((uint)*(le<ushort>* )(unsigned)ar5,100,vr6,vr7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0(uVar1,ar5_00,ar6,ar7));
  ar4[1] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 2),ar5_00,ar6,ar7));
  ar4[2] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 3),ar5_00,ar6,ar7));
  ar4[3] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 4),ar5_00,ar6,ar7));
  ar4[4] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 5),ar5_00,ar6,ar7));
  ar4[5] = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200ba0((uint)*(byte *)(unsigned)(ar5 + 6),ar5_00,ar6,ar7));
  ar4[6] = (char)uVar1;
  uVar2 = *(byte *)(unsigned)(ar5 + 7) & 7;
  ar4[7] = (((undefined1 *)(unsigned)0x8c26d210))[uVar2];
  return uVar2;
}

__asm__(".globl FUN_8c200bfc\n.set FUN_8c200bfc, FUN_8c200bfc_def\n");

}
//@unit 8c200c08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c200c08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c200c08");
  return (unsigned)sh4_interp(0x8c200c08, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c200c08\n.set FUN_8c200c08, FUN_8c200c08_def\n");
}
//@unit 8c200c82
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c200c82_def(le<short>* ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200c82");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte *ar5_00;
  
  ar5_00 = ar5;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)*ar5,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[1],ar5_00,ar6,ar7));
  *ar4 = (short)uVar2 * 100 + (short)uVar3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[2],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 1) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[3],ar5_00,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 3) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[4],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 2) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[5],ar5_00,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 5) = (char)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c200bc4((uint)ar5[6],ar5_00,ar6,ar7));
  *(char *)(unsigned)(ar4 + 3) = (char)uVar2;
  cVar1 = (((undefined1 *)(unsigned)0x8c26d218))[ar5[7] & 7];
  *(char *)(unsigned)((int)ar4 + 7) = cVar1;
  return (int)cVar1;
}

__asm__(".globl FUN_8c200c82\n.set FUN_8c200c82, FUN_8c200c82_def\n");

}
//@unit 8c200c8a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c200c8a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c200c8a");
  return (unsigned)sh4_interp(0x8c200c8a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c200c8a\n.set FUN_8c200c8a, FUN_8c200c8a_def\n");
}
//@unit 8c200cf4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200cf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200cf4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  piVar2 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c));
  if ((((((0 < *piVar2) && (*piVar2 <= (int)0x7ff)) && (*piVar2 == piVar2[2])) &&
       ((-1 < piVar2[3] && (piVar2[3] < *piVar2)))) &&
      (((-1 < piVar2[5] && ((piVar2[5] < *piVar2 && (-1 < piVar2[0xd])))) &&
       (piVar2[0xd] <= *piVar2)))) &&
     (((-1 < piVar2[0xe] && (piVar2[0xe] <= *piVar2)) &&
      ((*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4783dc + 8) != 0 ||
       ((piVar2[4] <= (int)*(le<short>* )(unsigned)(ar4 + 0x10) && (piVar2[6] <= (int)*(le<short>* )(unsigned)(ar4 + 0x12)))))))
     )) {
    iVar1 = *piVar2;
    if (iVar1 == 0xff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
    }
    else if (iVar1 == 0x1ff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    }
    else if (iVar1 == 0x3ff) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 2;
    }
    else {
      if (iVar1 != 0x7ff) {
        return 0xffffffff;
      }
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 3;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c200cf4\n.set FUN_8c200cf4, FUN_8c200cf4_def\n");

}
//@unit 8c200d94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200d94_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200d94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(le<undefined4>* )(unsigned)(iVar2 + -0x73b87bf0) = 1;
  *(le<undefined4>* )(unsigned)(iVar2 + -0x73b87bec) =
       *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c273ab0) + *(le<int>* )(unsigned)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar2)) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbb6c(ar4,ar5_00,ar5,ar7));
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
}

__asm__(".globl FUN_8c200d94\n.set FUN_8c200d94, FUN_8c200d94_def\n");

}
//@unit 8c200db0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200db0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200db0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  undefined4 in_r2 = 0;
  int in_r3 = 0;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  int iVar4;
  int a5;
  
  puVar1 = ((void *)(unsigned)0x8c1fbb6c);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x30) = in_r2;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x34) = *(le<undefined4>* )(unsigned)(in_r0 + *(le<int>* )(unsigned)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 + 0x1c)) + 1 <= a5) {
      return 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r10,a5,unaff_r12,ar7));
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}

__asm__(".globl FUN_8c200db0\n.set FUN_8c200db0, FUN_8c200db0_def\n");

}
//@unit 8c200e1e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200e1e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200e1e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  *(le<undefined4>* )(unsigned)(iVar2 + -0x73b87bf0) = 1;
  *(le<undefined4>* )(unsigned)(iVar2 + -0x73b87bec) =
       *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c273ab4) + *(le<int>* )(unsigned)(iVar2 + -0x73b87c1c) * 0x50);
  ar5_00 = 0;
  while( true ) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar2)) + 1 <= ar5_00) {
      return 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fbc44(ar4,ar5_00,ar5,ar7));
    if (iVar1 < 0) break;
    ar5_00 = ar5_00 + 1;
    ar5 = ar5 + 0x200;
  }
  return iVar1;
}

__asm__(".globl FUN_8c200e1e\n.set FUN_8c200e1e, FUN_8c200e1e_def\n");

}
//@unit 8c200e3a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c200e3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c200e3a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar2;
  undefined4 in_r2 = 0;
  int in_r3 = 0;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  int iVar4;
  int a5;
  
  puVar1 = ((void *)(unsigned)0x8c1fbc44);
  iVar4 = unaff_r13 + in_r3;
  iVar3 = (int)0x200;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x30) = in_r2;
  *(le<undefined4>* )(unsigned)(iVar4 + 0x34) = *(le<undefined4>* )(unsigned)(in_r0 + *(le<int>* )(unsigned)(iVar4 + 4) * 0x50);
  a5 = 0;
  while( true ) {
    if (*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 + 0x1c)) + 1 <= a5) {
      return 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r10,a5,unaff_r12,ar7));
    if (iVar2 < 0) break;
    a5 = a5 + 1;
    unaff_r12 = unaff_r12 + iVar3;
  }
  return iVar2;
}

__asm__(".globl FUN_8c200e3a\n.set FUN_8c200e3a, FUN_8c200e3a_def\n");

}
//@unit 8c200e8a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c200e8a_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c200e8a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<undefined4>* ar6_00;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  ar6_00 = &(*(le<undefined4>* )(fr0_ - 0x24));
  uVar5 = ar7;
  (*(le<undefined4>* )(fr0_ - 0x20)) = ar5;
  (*(le<int>* )(fr0_ - 0x1c)) = ar6;
  if (((ar7 != 0) ||
      (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1ffb70(ar4,ar5,ar6,0)), uVar5 = uVar1, -1 < (int)uVar1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fe534(ar4,(*(le<undefined4>* )(fr0_ - 0x20)),&(*(le<undefined4>* )(fr0_ - 0x24)),ar7)), -1 < (int)uVar1)) {
    uVar4 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x30) = 1;
    *(le<uint>* )(unsigned)(iVar2 + 0x34) = uVar5;
    if (uVar5 != 0) {
      iVar3 = (int)0x200;
      iVar2 = (*(le<int>* )(fr0_ - 0x1c));
      do {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fee6c((*(le<undefined4>* )(fr0_ - 0x24)),iVar2,ar6_00,ar7));
        if ((int)uVar1 < 0) goto LAB_8c200f12;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + iVar3;
      } while (uVar4 < uVar5);
    }
    uVar1 = 0;
LAB_8c200f12:
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1fe9ae((*(le<undefined4>* )(fr0_ - 0x24)),0,ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c200e8a\n.set FUN_8c200e8a, FUN_8c200e8a_def\n");

}
//@unit 8c200f2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c200f2c_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c200f2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 284; for (int i_ = 0; i_ < 284; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<int>* ar7_00;
  uint uVar3;
  
  ar7_00 = &(*(le<int>* )(fr0_ - 0x20));
  uVar3 = ar7;
  (*(le<int>* )(fr0_ - 0x1c)) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe350(ar4,0,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1ffb70(ar4,ar5,ar6,uVar3));
  if (0 < iVar2) {
    uVar1 = uVar1 + iVar2;
  }
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe7aa(ar4,ar5,s0,&(*(le<int>* )(fr0_ - 0x20))));
      if (-1 < (int)uVar1) {
        iVar2 = ar4 * 0x148;
        uVar3 = 0;
        *(char *)(unsigned)((*(le<int>* )(fr0_ - 0x20)) + 1) = (char)s4;
        *(le<undefined4>* )(unsigned)(iVar2 + -0x73b87bf0) = 1;
        *(le<uint>* )(unsigned)(iVar2 + -0x73b87bec) =
             *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(le<int>* )(unsigned)(iVar2 + -0x73b87c1c) * 0x50) + ar7;
        iVar2 = (*(le<int>* )(fr0_ - 0x1c));
        if (ar7 != 0) {
          do {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1febd6((*(le<int>* )(fr0_ - 0x20)),iVar2,s0,ar7_00));
            if ((int)uVar1 < 0) goto LAB_8c20100a;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x200;
          } while (uVar3 < ar7);
        }
        uVar1 = 0;
LAB_8c20100a:
        (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x20)),0,s0,ar7_00));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 284)), FUN_8c20103c(ar4,ar5,(*(le<int>* )(fr0_ - 0x1c)),ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c200f2c\n.set FUN_8c200f2c, FUN_8c200f2c_def\n");

}
//@unit 8c20103c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20103c_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20103c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(le<unsigned>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar6_00;
  le<int>* ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  
  ar7_00 = &(*(le<int>* )(fr0_ - 0x2c));
  ar6_00 = &(*(le<int>* )(fr0_ - 0x2c));
  (*(le<undefined4>* )(fr0_ - 0x28)) = ar5;
  (*(le<int>* )(fr0_ - 0x24)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe7aa(ar4,ar5,s0,&(*(le<int>* )(fr0_ - 0x2c))));
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(unsigned)((*(le<int>* )(fr0_ - 0x2c)) + 1) = (undefined1)s4;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x73b87bf0) = 1;
    *(le<uint>* )(unsigned)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(le<int>* )(unsigned)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = (*(le<int>* )(fr0_ - 0x24));
    if (ar7 != 0) {
      do {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1febd6((*(le<int>* )(fr0_ - 0x2c)),iVar3,s0,ar7_00));
        if (iVar1 < 0) goto LAB_8c20110e;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x2c)),0,s0,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe534(ar4,(*(le<undefined4>* )(fr0_ - 0x28)),&(*(le<int>* )(fr0_ - 0x2c)),ar7_00));
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = (*(le<int>* )(fr0_ - 0x24));
      if (ar7 != 0) {
        do {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fee6c((*(le<int>* )(fr0_ - 0x2c)),ar5_00,ar6_00,ar7_00));
          s0 = (undefined1 *)(unsigned)ar6_00;
          if (iVar1 < 0) goto LAB_8c20110e;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00));
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)(unsigned)ar6_00;
            goto LAB_8c20110e;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)(unsigned)ar6_00;
LAB_8c20110e:
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x2c)),0,s0,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c20103c\n.set FUN_8c20103c, FUN_8c20103c_def\n");

}
//@unit 8c20112c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20112c_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20112c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* ar7_00;
  uint uVar2;
  int iVar3;
  
  ar7_00 = &(*(le<int>* )(fr0_ - 0x24));
  (*(le<int>* )(fr0_ - 0x20)) = ar6;
  (*(le<undefined4>* )(fr0_ - 0x1c)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe350(ar4,1,ar6,ar7));
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe646(ar4,(*(le<undefined4>* )(fr0_ - 0x1c)),s0,&(*(le<int>* )(fr0_ - 0x24))));
      if (-1 < (int)uVar1) {
        iVar3 = ar4 * 0x148;
        uVar2 = 0;
        *(char *)(unsigned)((*(le<int>* )(fr0_ - 0x24)) + 1) = (char)s4;
        *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bf0) = 1;
        *(le<uint>* )(unsigned)(iVar3 + -0x73b87bec) =
             *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(le<int>* )(unsigned)(iVar3 + -0x73b87c1c) * 0x50) + ar7;
        iVar3 = (*(le<int>* )(fr0_ - 0x20));
        if (ar7 != 0) {
          do {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fecf2((*(le<int>* )(fr0_ - 0x24)),iVar3,s0,ar7_00));
            if ((int)uVar1 < 0) goto LAB_8c201208;
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x200;
          } while (uVar2 < ar7);
        }
        uVar1 = 0;
LAB_8c201208:
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x24)),0,s0,ar7_00));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c201240(ar4,(*(le<undefined4>* )(fr0_ - 0x1c)),(*(le<int>* )(fr0_ - 0x20)),ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c20112c\n.set FUN_8c20112c, FUN_8c20112c_def\n");

}
//@unit 8c201240
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c201240_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c201240");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(le<unsigned>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar6_00;
  le<int>* ar7_00;
  int ar5_00;
  uint uVar2;
  int iVar3;
  
  ar7_00 = &(*(le<int>* )(fr0_ - 0x2c));
  ar6_00 = &(*(le<int>* )(fr0_ - 0x2c));
  (*(le<undefined4>* )(fr0_ - 0x28)) = ar5;
  (*(le<int>* )(fr0_ - 0x24)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe646(ar4,ar5,s0,&(*(le<int>* )(fr0_ - 0x2c))));
  if (-1 < iVar1) {
    iVar1 = ar4 * 0x148;
    uVar2 = 0;
    *(undefined1 *)(unsigned)((*(le<int>* )(fr0_ - 0x2c)) + 1) = (undefined1)s4;
    *(le<undefined4>* )(unsigned)(iVar1 + -0x73b87bf0) = 1;
    *(le<uint>* )(unsigned)(iVar1 + -0x73b87bec) =
         ar7 * 2 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(le<int>* )(unsigned)(iVar1 + -0x73b87c1c) * 0x50);
    iVar3 = (*(le<int>* )(fr0_ - 0x24));
    if (ar7 != 0) {
      do {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fecf2((*(le<int>* )(fr0_ - 0x2c)),iVar3,s0,ar7_00));
        if (iVar1 < 0) goto LAB_8c201312;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x200;
      } while (uVar2 < ar7);
    }
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x2c)),0,s0,ar7_00));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe534(ar4,(*(le<undefined4>* )(fr0_ - 0x28)),&(*(le<int>* )(fr0_ - 0x2c)),ar7_00));
    if (-1 < iVar1) {
      uVar2 = 0;
      ar5_00 = ar4 * 0x800 + -0x73b871c0;
      iVar3 = (*(le<int>* )(fr0_ - 0x24));
      if (ar7 != 0) {
        do {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fee6c((*(le<int>* )(fr0_ - 0x2c)),ar5_00,ar6_00,ar7_00));
          s0 = (undefined1 *)(unsigned)ar6_00;
          if (iVar1 < 0) goto LAB_8c201312;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fd4f0(ar5_00,iVar3,ar6_00,ar7_00));
          if (iVar1 != 0) {
            iVar1 = -0xf0;
            s0 = (undefined1 *)(unsigned)ar6_00;
            goto LAB_8c201312;
          }
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x200;
        } while (uVar2 < ar7);
      }
      iVar1 = 0;
      s0 = (undefined1 *)(unsigned)ar6_00;
LAB_8c201312:
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x2c)),0,s0,ar7_00));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c201240\n.set FUN_8c201240, FUN_8c201240_def\n");

}
//@unit 8c20135c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20135c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20135c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar4_00;
  uint uVar2;
  
  uVar2 = 0;
  ar4_00 = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
  *(le<undefined4>* )(unsigned)(ar4 + 0x40) = *(le<undefined4>* )(unsigned)(ar4 + 0x38);
  if (ar5 != 0) {
    do {
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0xfffa) {
        if (*(le<int>* )(unsigned)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
        return 0;
      }
      if (*(le<int>* )(unsigned)(ar4 + 0x34) == 0) {
        return 0xffff0000;
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(ar4_00,*(le<undefined4>* )(unsigned)(ar4 + 0x40),ar6,ar7));
      uVar2 = uVar2 + 1;
      *(le<uint>* )(unsigned)(ar4 + 0x40) = uVar1 & 0xffff;
      *(le<int>* )(unsigned)(ar4 + 0x34) = *(le<int>* )(unsigned)(ar4 + 0x34) + -1;
    } while (uVar2 < ar5);
  }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x34);
}

__asm__(".globl FUN_8c20135c\n.set FUN_8c20135c, FUN_8c20135c_def\n");

}
//@unit 8c20136c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20136c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20136c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  undefined4 a4;
  uint unaff_r12 = 0;
  uint unaff_r13 = 0;
  int unaff_r14 = 0;
  
  a4 = *(le<undefined4>* )(unsigned)(unaff_r14 + 0x28);
  *(le<undefined4>* )(unsigned)(in_r0 + unaff_r14) = *(le<undefined4>* )(unsigned)(unaff_r14 + 0x38);
  while( true ) {
    if (unaff_r12 <= unaff_r13) {
      return *(le<undefined4>* )(unsigned)(unaff_r14 + 0x34);
    }
    if (*(le<int>* )(unsigned)(unaff_r14 + 0x40) == 0xfffa) break;
    if (*(le<int>* )(unsigned)(unaff_r14 + 0x34) == 0) {
      return 0xffff0000;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2009d0(a4,*(le<undefined4>* )(unsigned)(unaff_r14 + 0x40),ar6,ar7));
    unaff_r13 = unaff_r13 + 1;
    *(le<uint>* )(unsigned)(unaff_r14 + 0x40) = uVar1 & 0xffff;
    *(le<int>* )(unsigned)(unaff_r14 + 0x34) = *(le<int>* )(unsigned)(unaff_r14 + 0x34) + -1;
  }
  if (*(le<int>* )(unsigned)(unaff_r14 + 0x34) != 0) {
    return 0xffff0000;
  }
  return 0;
}

__asm__(".globl FUN_8c20136c\n.set FUN_8c20136c, FUN_8c20136c_def\n");

}
//@unit 8c2013c2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2013c2_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2013c2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  int iVar3;
  uint uVar4;
  
  (*(le<int>* )(fr0_ - 0x24)) = ar7;
  (*(le<undefined4>* )(fr0_ - 0x20)) = ar5;
  (*(le<int>* )(fr0_ - 0x1c)) = ar6;
  if (s0 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1ffb70(ar4,ar5,ar6,ar7));
    if (iVar1 < 0) {
      return iVar1;
    }
    s0 = iVar1 - (*(le<int>* )(fr0_ - 0x24));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fe534(ar4,(*(le<undefined4>* )(fr0_ - 0x20)),&(*(le<undefined4>* )(fr0_ - 0x28)),ar7));
  iVar1 = (*(le<int>* )(fr0_ - 0x1c));
  if (-1 < iVar2) {
    ar6_00 = 0;
    iVar2 = ar4 * 0x148 + 0x8c4783e0;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x30) = 1;
    *(le<uint>* )(unsigned)(iVar2 + 0x34) = s0;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20135c((*(le<undefined4>* )(fr0_ - 0x28)),(*(le<int>* )(fr0_ - 0x24)),0,ar7));
    uVar4 = 0;
    if (s0 != 0) {
      iVar3 = (int)0x200;
      do {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fee6c((*(le<undefined4>* )(fr0_ - 0x28)),iVar1,ar6_00,ar7));
        if (iVar2 < 0) goto LAB_8c201442;
        uVar4 = uVar4 + 1;
        iVar1 = iVar1 + iVar3;
      } while (uVar4 < s0);
    }
    iVar2 = 0;
LAB_8c201442:
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c1fe9ae((*(le<undefined4>* )(fr0_ - 0x28)),0,ar6_00,ar7));
  }
  return iVar2;
}

__asm__(".globl FUN_8c2013c2\n.set FUN_8c2013c2, FUN_8c2013c2_def\n");

}
//@unit 8c20147c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20147c_def(undefined4 ar4,undefined4 ar5,le<undefined2>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20147c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  int a5;
  uint uVar1;
  undefined1 *a6;
  int iVar2;
  
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,a6,ar7));
  if (a5 < 0) {
    a5 = (int)(int)0xffffff05;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,a5,a6,ar7));
    *ar6 = (short)(*(le<uint>* )(fr0_ - 0x34));
    for (iVar2 = 0; ar6 = ar6 + 1, iVar2 < (*(le<int>* )(fr0_ - 0x18)); iVar2 = iVar2 + 1) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c2009d0(ar4,(*(le<uint>* )(fr0_ - 0x34)),a6,ar7));
      (*(le<uint>* )(fr0_ - 0x34)) = uVar1 & 0xffff;
      *ar6 = (short)uVar1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200b10(ar4,ar5,a6,ar7));
    if (iVar2 < 0) {
      a5 = iVar2;
    }
  }
  return a5;
}

__asm__(".globl FUN_8c20147c\n.set FUN_8c20147c, FUN_8c20147c_def\n");

}
//@unit 8c2014e6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2014e6_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c2014e6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(le<uint>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  undefined1 *ar6_00;
  uint a7;
  int iVar3;
  
  ar6_00 = ((undefined1 *)(fr0_ - 0x30));
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  *(le<undefined4>* )(unsigned)(iVar3 + 0x30) = 1;
  puVar1 = ((void *)(unsigned)0x8c1fdd44);
  *(le<uint>* )(unsigned)(iVar3 + 0x34) = s0;
  a7 = ar7;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6_00,ar7));
  if (-1 < iVar3) {
    if ((*(char *)(fr0_ - 0x2a)) == '\x01') {
      uVar2 = (uint)(*(le<ushort>* )(fr0_ - 0x2c));
      if (((ar7 < uVar2) && (s0 <= uVar2)) && (ar7 + s0 <= uVar2)) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c200b10(ar4,ar5,ar6_00,a7));
        if (-1 < iVar3) {
          uVar2 = 0;
          if (s0 != 0) {
            do {
              iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c1fbc44(ar4,ar7,ar6,a7));
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
              ar6 = ar6 + 0x200;
              ar7 = ar7 + 1;
            } while (uVar2 < s0);
          }
          iVar3 = 0;
        }
      }
      else {
        iVar3 = (int)(int)0xffffff00;
      }
    }
    else {
      iVar3 = (int)(int)0xffffff0b;
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c2014e6\n.set FUN_8c2014e6, FUN_8c2014e6_def\n");

}
//@unit 8c2015b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2015b0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2015b0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  int ar6_00;
  int ar6_01;
  int iVar6;
  uint a5;
  uint uVar7;
  
  if (((((*(le<short>* )(unsigned)(ar5 + 0x4c) == 0) || (3 < *(le<ushort>* )(unsigned)(ar5 + 0x4c))) ||
       (3 < *(le<ushort>* )(unsigned)(ar5 + 0x54))) ||
      ((*(le<int>* )(unsigned)(ar5 + 0x44) == 0 || (*(le<int>* )(unsigned)(ar5 + 0x48) == 0)))) ||
     ((*(le<short>* )(unsigned)(ar5 + 0x54) != 0 && (*(le<int>* )(unsigned)(ar5 + 0x50) == 0)))) {
    iVar2 = -0x100;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4,0,0x60,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4,0x20,0x10,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + 0x10,0x20,0x20,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + 0x30,0,0x10,ar7));
    iVar2 = 0;
    pcVar4 = ar5;
    pcVar5 = ar4;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    iVar2 = 0;
    pcVar5 = ar4 + 0x10;
    pcVar4 = ar5 + 0x12;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x20);
    iVar2 = 0;
    pcVar4 = ar5 + 0x34;
    pcVar5 = ar4 + 0x30;
    do {
      if (*pcVar4 == '\0') break;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      iVar2 = iVar2 + 1;
      *pcVar5 = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (iVar2 < 0x10);
    ar6_01 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + (*(le<ushort>* )(unsigned)(ar5 + 0x4c) & 3) * 4);
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + (*(le<ushort>* )(unsigned)(ar5 + 0x54) & 3) * 4);
    iVar6 = *(le<int>* )(unsigned)(ar5 + 0x5c);
    iVar2 = ar6_01 + ar6_00;
    *(le<undefined2>* )(unsigned)(ar4 + 0x42) = *(le<undefined2>* )(unsigned)(ar5 + 0x4e);
    *(le<undefined2>* )(unsigned)(ar4 + 0x40) = *(le<undefined2>* )(unsigned)(ar5 + 0x4c);
    a5 = iVar6 + iVar2 + 0x80;
    if ((*(le<short>* )(unsigned)(ar5 + 0x54) == 0) || (*(le<int>* )(unsigned)(ar5 + 0x50) == 0)) {
      ar4[0x44] = '\0';
      ar4[0x45] = '\0';
      (*(le<int>* )(fr0_ - 0x24)) = 0;
    }
    else {
      (*(le<int>* )(fr0_ - 0x24)) = ar6_01 + 0x80;
      *(le<undefined2>* )(unsigned)(ar4 + 0x44) = *(le<undefined2>* )(unsigned)(ar5 + 0x54);
    }
    if ((*(le<int>* )(unsigned)(ar5 + 0x5c) == 0) || (*(le<int>* )(unsigned)(ar5 + 0x58) == 0)) {
      ar4[0x48] = '\0';
      ar4[0x49] = '\0';
      ar4[0x4a] = '\0';
      ar4[0x4b] = '\0';
      (*(le<int>* )(fr0_ - 0x28)) = 0;
    }
    else {
      iVar2 = iVar2 + 0x80;
      *(le<undefined4>* )(unsigned)(ar4 + 0x48) = *(le<undefined4>* )(unsigned)(ar5 + 0x5c);
      (*(le<int>* )(fr0_ - 0x28)) = iVar2;
    }
    if (ar6_01 != 0) {
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + 0x60,*(le<undefined4>* )(unsigned)(ar5 + 0x44),0x20,pcVar4));
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + 0x80,*(le<undefined4>* )(unsigned)(ar5 + 0x48),ar6_01,pcVar4));
      iVar2 = ar6_01;
    }
    if (ar6_00 != 0) {
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + (*(le<int>* )(fr0_ - 0x24)),*(le<undefined4>* )(unsigned)(ar5 + 0x50),ar6_00,pcVar4));
      iVar2 = ar6_00;
    }
    if (*(le<int>* )(unsigned)(ar5 + 0x5c) != 0) {
      iVar2 = *(le<int>* )(unsigned)(ar5 + 0x5c);
      (vsp = ((unsigned long)(fr0_ - 40)), memmove(ar4 + (*(le<int>* )(fr0_ - 0x28)),*(le<undefined4>* )(unsigned)(ar5 + 0x58),iVar2,pcVar4));
    }
    uVar7 = a5 & 0x1ff;
    if (uVar7 != 0) {
      iVar2 = 0x200 - uVar7;
      (vsp = ((unsigned long)(fr0_ - 40)), memset(ar4 + a5,0,iVar2,pcVar4));
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c201948(ar4,a5,iVar2,pcVar4));
    *(le<short>* )(unsigned)(ar4 + 0x46) = (short)uVar3;
    iVar2 = (uint)(uVar7 != 0) + (a5 >> 9);
  }
  return iVar2;
}

__asm__(".globl FUN_8c2015b0\n.set FUN_8c2015b0, FUN_8c2015b0_def\n");

}
//@unit 8c2017a8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2017a8_def(uint ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2017a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((ar4 != 0) && (ar4 < 4)) && (ar5 < 4)) {
    uVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + ar4 * 4) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + ar5 * 4) + ar6 + 0x80;
    return (uint)((uVar1 & 0x1ff) != 0) + (uVar1 >> 9);
  }
  return 0xffffff00;
}

__asm__(".globl FUN_8c2017a8\n.set FUN_8c2017a8, FUN_8c2017a8_def\n");

}
//@unit 8c2017fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2017fc_def(undefined1 *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2017fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 224; for (int i_ = 0; i_ < 224; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  if ((((*(le<short>* )(unsigned)(ar5 + 0x40) != 0) && (*(le<ushort>* )(unsigned)(ar5 + 0x40) < 4)) &&
      (*(le<ushort>* )(unsigned)(ar5 + 0x44) < 4)) && (*(le<uint>* )(unsigned)(ar5 + 0x48) < 0xe1001)) {
    iVar3 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bb8) + (uint)*(le<ushort>* )(unsigned)(ar5 + 0x40) * 4);
    iVar6 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273bc8) + (uint)*(le<ushort>* )(unsigned)(ar5 + 0x44) * 4);
    uVar8 = iVar3 + iVar6 + *(le<int>* )(unsigned)(ar5 + 0x48) + 0x80;
    if (uVar8 < 0xe1001) {
      puVar5 = ar4;
      puVar7 = ar5;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      puVar7 = ar5 + 0x10;
      *puVar5 = 0;
      puVar5 = ar4 + 0x12;
      for (iVar4 = 0x20; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      puVar7 = ar5 + 0x30;
      puVar5 = ar4 + 0x34;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        uVar1 = *puVar7;
        puVar7 = puVar7 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      }
      *puVar5 = 0;
      *(le<undefined2>* )(unsigned)(ar4 + 0x4e) = *(le<undefined2>* )(unsigned)(ar5 + 0x42);
      *(le<undefined2>* )(unsigned)(ar4 + 0x4c) = *(le<undefined2>* )(unsigned)(ar5 + 0x40);
      *(le<unsigned>* )(unsigned)(ar4 + 0x44) = ar5 + 0x60;
      *(le<unsigned>* )(unsigned)(ar4 + 0x48) = ar5 + 0x80;
      puVar7 = ar5 + 0x80 + iVar3;
      *(le<undefined2>* )(unsigned)(ar4 + 0x54) = *(le<undefined2>* )(unsigned)(ar5 + 0x44);
      if (*(le<short>* )(unsigned)(ar5 + 0x44) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x50) = 0;
      }
      else {
        *(le<unsigned>* )(unsigned)(ar4 + 0x50) = puVar7;
        puVar7 = puVar7 + iVar6;
      }
      *(le<undefined4>* )(unsigned)(ar4 + 0x5c) = *(le<undefined4>* )(unsigned)(ar5 + 0x48);
      if (*(le<int>* )(unsigned)(ar5 + 0x48) == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(le<unsigned>* )(unsigned)(ar4 + 0x58) = puVar7;
      }
      uVar2 = *(le<ushort>* )(unsigned)(ar5 + 0x46);
      *(le<undefined2>* )(unsigned)(ar5 + 0x46) = 0;
      uVar8 = (vsp = ((unsigned long)(fr0_ - 224)), FUN_8c201948(ar5,uVar8,puVar7,puVar5));
      *(le<ushort>* )(unsigned)(ar5 + 0x46) = uVar2;
      if ((uVar8 & 0xffff) != (uint)uVar2) {
        return 0xffffff20;
      }
      return 0;
    }
  }
  return 0xffffff21;
}

__asm__(".globl FUN_8c2017fc\n.set FUN_8c2017fc, FUN_8c2017fc_def\n");

}
//@unit 8c201804
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201804_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201804");
  return (unsigned)sh4_interp(0x8c201804, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201804\n.set FUN_8c201804, FUN_8c201804_def\n");
}
//@unit 8c201948
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201948_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201948");
  return (unsigned)sh4_interp(0x8c201948, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201948\n.set FUN_8c201948, FUN_8c201948_def\n");
}
//@unit 8c201994
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201994_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201994");
  return (unsigned)sh4_interp(0x8c201994, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201994\n.set FUN_8c201994, FUN_8c201994_def\n");
}
//@unit 8c2019e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2019e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2019e0");
  return (unsigned)sh4_interp(0x8c2019e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2019e0\n.set FUN_8c2019e0, FUN_8c2019e0_def\n");
}
//@unit 8c201a1a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201a1a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201a1a");
  return (unsigned)sh4_interp(0x8c201a1a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201a1a\n.set FUN_8c201a1a, FUN_8c201a1a_def\n");
}
//@unit 8c201b04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201b04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201b04");
  return (unsigned)sh4_interp(0x8c201b04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201b04\n.set FUN_8c201b04, FUN_8c201b04_def\n");
}
//@unit 8c201b10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201b10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201b10");
  return (unsigned)sh4_interp(0x8c201b10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201b10\n.set FUN_8c201b10, FUN_8c201b10_def\n");
}
//@unit 8c201b92
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201b92_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201b92");
  return (unsigned)sh4_interp(0x8c201b92, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201b92\n.set FUN_8c201b92, FUN_8c201b92_def\n");
}
//@unit 8c201b9a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201b9a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201b9a");
  return (unsigned)sh4_interp(0x8c201b9a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201b9a\n.set FUN_8c201b9a, FUN_8c201b9a_def\n");
}
//@unit 8c201ba2
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201ba2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201ba2");
  return (unsigned)sh4_interp(0x8c201ba2, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201ba2\n.set FUN_8c201ba2, FUN_8c201ba2_def\n");
}
//@unit 8c201bae
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201bae_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201bae");
  return (unsigned)sh4_interp(0x8c201bae, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201bae\n.set FUN_8c201bae, FUN_8c201bae_def\n");
}
//@unit 8c201c08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201c08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201c08");
  return (unsigned)sh4_interp(0x8c201c08, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201c08\n.set FUN_8c201c08, FUN_8c201c08_def\n");
}
//@unit 8c201c28
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201c28_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201c28");
  return (unsigned)sh4_interp(0x8c201c28, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201c28\n.set FUN_8c201c28, FUN_8c201c28_def\n");
}
//@unit 8c201c3e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201c3e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201c3e");
  return (unsigned)sh4_interp(0x8c201c3e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201c3e\n.set FUN_8c201c3e, FUN_8c201c3e_def\n");
}
//@unit 8c201c82
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201c82_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201c82");
  return (unsigned)sh4_interp(0x8c201c82, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201c82\n.set FUN_8c201c82, FUN_8c201c82_def\n");
}
//@unit 8c201c8e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned get_field_4_201c8e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("get_field_4_201c8e");
  return (unsigned)sh4_interp(0x8c201c8e, ar4, ar5, ar6, ar7);
}
__asm__(".globl get_field_4_201c8e\n.set get_field_4_201c8e, get_field_4_201c8e_def\n");
}
//@unit 8c201c92
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201c92_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201c92");
  return (unsigned)sh4_interp(0x8c201c92, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201c92\n.set FUN_8c201c92, FUN_8c201c92_def\n");
}
//@unit 8c201cf6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201cf6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201cf6");
  return (unsigned)sh4_interp(0x8c201cf6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201cf6\n.set FUN_8c201cf6, FUN_8c201cf6_def\n");
}
//@unit 8c201d84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201d84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201d84");
  return (unsigned)sh4_interp(0x8c201d84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201d84\n.set FUN_8c201d84, FUN_8c201d84_def\n");
}
//@unit 8c201da0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201da0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201da0");
  return (unsigned)sh4_interp(0x8c201da0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201da0\n.set FUN_8c201da0, FUN_8c201da0_def\n");
}
//@unit 8c201dea
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201dea_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201dea");
  return (unsigned)sh4_interp(0x8c201dea, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201dea\n.set FUN_8c201dea, FUN_8c201dea_def\n");
}
//@unit 8c201dfe
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201dfe_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201dfe");
  return (unsigned)sh4_interp(0x8c201dfe, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201dfe\n.set FUN_8c201dfe, FUN_8c201dfe_def\n");
}
//@unit 8c201e14
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201e14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201e14");
  return (unsigned)sh4_interp(0x8c201e14, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201e14\n.set FUN_8c201e14, FUN_8c201e14_def\n");
}
//@unit 8c201f2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201f2c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201f2c");
  return (unsigned)sh4_interp(0x8c201f2c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201f2c\n.set FUN_8c201f2c, FUN_8c201f2c_def\n");
}
//@unit 8c201f58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201f58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201f58");
  return (unsigned)sh4_interp(0x8c201f58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201f58\n.set FUN_8c201f58, FUN_8c201f58_def\n");
}
//@unit 8c201f8a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201f8a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201f8a");
  return (unsigned)sh4_interp(0x8c201f8a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201f8a\n.set FUN_8c201f8a, FUN_8c201f8a_def\n");
}
//@unit 8c201fb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c201fb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c201fb8");
  return (unsigned)sh4_interp(0x8c201fb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c201fb8\n.set FUN_8c201fb8, FUN_8c201fb8_def\n");
}
//@unit 8c20200c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20200c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20200c");
  return (unsigned)sh4_interp(0x8c20200c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20200c\n.set FUN_8c20200c, FUN_8c20200c_def\n");
}
//@unit 8c20202e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20202e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20202e");
  return (unsigned)sh4_interp(0x8c20202e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20202e\n.set FUN_8c20202e, FUN_8c20202e_def\n");
}
//@unit 8c2020b6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2020b6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2020b6");
  return (unsigned)sh4_interp(0x8c2020b6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2020b6\n.set FUN_8c2020b6, FUN_8c2020b6_def\n");
}
//@unit 8c2020ba
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2020ba_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2020ba");
  return (unsigned)sh4_interp(0x8c2020ba, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2020ba\n.set FUN_8c2020ba, FUN_8c2020ba_def\n");
}
//@unit 8c2020f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2020f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2020f8");
  return (unsigned)sh4_interp(0x8c2020f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2020f8\n.set FUN_8c2020f8, FUN_8c2020f8_def\n");
}
//@unit 8c2020fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2020fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2020fc");
  return (unsigned)sh4_interp(0x8c2020fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2020fc\n.set FUN_8c2020fc, FUN_8c2020fc_def\n");
}
//@unit 8c202116
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202116_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202116");
  return (unsigned)sh4_interp(0x8c202116, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202116\n.set FUN_8c202116, FUN_8c202116_def\n");
}
//@unit 8c20211a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20211a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20211a");
  return (unsigned)sh4_interp(0x8c20211a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20211a\n.set FUN_8c20211a, FUN_8c20211a_def\n");
}
//@unit 8c202132
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202132_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202132");
  return (unsigned)sh4_interp(0x8c202132, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202132\n.set FUN_8c202132, FUN_8c202132_def\n");
}
//@unit 8c20213e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20213e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20213e");
  return (unsigned)sh4_interp(0x8c20213e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20213e\n.set FUN_8c20213e, FUN_8c20213e_def\n");
}
//@unit 8c20227c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20227c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20227c");
  return (unsigned)sh4_interp(0x8c20227c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20227c\n.set FUN_8c20227c, FUN_8c20227c_def\n");
}
//@unit 8c202280
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202280_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202280");
  return (unsigned)sh4_interp(0x8c202280, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202280\n.set FUN_8c202280, FUN_8c202280_def\n");
}
//@unit 8c2022ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2022ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2022ac");
  return (unsigned)sh4_interp(0x8c2022ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2022ac\n.set FUN_8c2022ac, FUN_8c2022ac_def\n");
}
//@unit 8c2022b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2022b8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2022b8");
  return (unsigned)sh4_interp(0x8c2022b8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2022b8\n.set FUN_8c2022b8, FUN_8c2022b8_def\n");
}
//@unit 8c202302
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202302_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202302");
  return (unsigned)sh4_interp(0x8c202302, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202302\n.set FUN_8c202302, FUN_8c202302_def\n");
}
//@unit 8c202330
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202330_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202330");
  return (unsigned)sh4_interp(0x8c202330, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202330\n.set FUN_8c202330, FUN_8c202330_def\n");
}
//@unit 8c202342
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202342_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202342");
  return (unsigned)sh4_interp(0x8c202342, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202342\n.set FUN_8c202342, FUN_8c202342_def\n");
}
//@unit 8c202424
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202424_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202424");
  return (unsigned)sh4_interp(0x8c202424, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202424\n.set FUN_8c202424, FUN_8c202424_def\n");
}
//@unit 8c20254c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20254c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20254c");
  return (unsigned)sh4_interp(0x8c20254c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20254c\n.set FUN_8c20254c, FUN_8c20254c_def\n");
}
//@unit 8c202550
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202550_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202550");
  return (unsigned)sh4_interp(0x8c202550, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202550\n.set FUN_8c202550, FUN_8c202550_def\n");
}
//@unit 8c202682
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202682_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202682");
  return (unsigned)sh4_interp(0x8c202682, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202682\n.set FUN_8c202682, FUN_8c202682_def\n");
}
//@unit 8c202782
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202782_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202782");
  return (unsigned)sh4_interp(0x8c202782, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202782\n.set FUN_8c202782, FUN_8c202782_def\n");
}
//@unit 8c202786
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202786_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202786");
  return (unsigned)sh4_interp(0x8c202786, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202786\n.set FUN_8c202786, FUN_8c202786_def\n");
}
//@unit 8c2027c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2027c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2027c0");
  return (unsigned)sh4_interp(0x8c2027c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2027c0\n.set FUN_8c2027c0, FUN_8c2027c0_def\n");
}
//@unit 8c20280c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20280c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20280c");
  return (unsigned)sh4_interp(0x8c20280c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20280c\n.set FUN_8c20280c, FUN_8c20280c_def\n");
}
//@unit 8c20284e
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20284e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20284e");
  return (unsigned)sh4_interp(0x8c20284e, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20284e\n.set FUN_8c20284e, FUN_8c20284e_def\n");
}
//@unit 8c2028cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2028cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2028cc");
  return (unsigned)sh4_interp(0x8c2028cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2028cc\n.set FUN_8c2028cc, FUN_8c2028cc_def\n");
}
//@unit 8c2028d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2028d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2028d0");
  return (unsigned)sh4_interp(0x8c2028d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2028d0\n.set FUN_8c2028d0, FUN_8c2028d0_def\n");
}
//@unit 8c202924
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202924_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202924");
  return (unsigned)sh4_interp(0x8c202924, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202924\n.set FUN_8c202924, FUN_8c202924_def\n");
}
//@unit 8c202976
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202976_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202976");
  return (unsigned)sh4_interp(0x8c202976, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202976\n.set FUN_8c202976, FUN_8c202976_def\n");
}
//@unit 8c2029b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2029b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2029b4");
  return (unsigned)sh4_interp(0x8c2029b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2029b4\n.set FUN_8c2029b4, FUN_8c2029b4_def\n");
}
//@unit 8c2029fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2029fc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2029fc");
  return (unsigned)sh4_interp(0x8c2029fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2029fc\n.set FUN_8c2029fc, FUN_8c2029fc_def\n");
}
//@unit 8c202a04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202a04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202a04");
  return (unsigned)sh4_interp(0x8c202a04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202a04\n.set FUN_8c202a04, FUN_8c202a04_def\n");
}
//@unit 8c202a30
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202a30_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202a30");
  return (unsigned)sh4_interp(0x8c202a30, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202a30\n.set FUN_8c202a30, FUN_8c202a30_def\n");
}
//@unit 8c202a34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202a34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202a34");
  return (unsigned)sh4_interp(0x8c202a34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202a34\n.set FUN_8c202a34, FUN_8c202a34_def\n");
}
//@unit 8c202a80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c202a80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c202a80");
  return (unsigned)sh4_interp(0x8c202a80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c202a80\n.set FUN_8c202a80, FUN_8c202a80_def\n");
}
//@unit 8c202c60
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 sh4_dmac_202c60_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_dmac_202c60");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  ((le<uint>* )(fr0_ - 0x1c))[0] = *(le<uint>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c26d268));
  ((le<uint>* )(fr0_ - 0x1c))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 4);
  ((le<uint>* )(fr0_ - 0x1c))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 8);
  ((le<uint>* )(fr0_ - 0x1c))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0xc);
  (*(le<undefined4>* )(fr0_ - 0xc)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0x10);
  (*(le<undefined4>* )(fr0_ - 0x8)) = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c26d268)) + 0x14);
  sVar1 = 0x280;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bc8 != 1) && ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x10) == 0)) {
    sVar1 = 0x140;
  }
  if (ar5 == 1) {
    uVar3 = ar6 + 0x1fU & 0xffffffe0;
    *(le<undefined4>* )(unsigned)0x8c4a9e74 = *(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xffa0ffff | 0x400000 | (ar6 + 0x1fU >> 5 & 0x1f) << 0x10;
  }
  else if (*(le<undefined4>* )(unsigned)0x8c4a9bc8 == 1) {
    uVar3 = (uint)0x1e0;
  }
  else if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) != 0x20)) {
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) == 0) {
      if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x62) == 0x42) {
        iVar4 = *(le<int>* )(unsigned)(0x8c4aa084 + *(le<undefined4>* )(unsigned)0x8c4a9bdc * 4);
        uVar3 = (int)(iVar4 + (uint)(iVar4 < 0)) >> 1;
      }
      else {
        uVar3 = (uint)0xf0;
      }
    }
    else if ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x42) == 0x42) {
      uVar3 = *(le<uint>* )(unsigned)(0x8c4aa084 + *(le<undefined4>* )(unsigned)0x8c4a9bdc * 4);
    }
    else {
      uVar3 = (uint)0x1e0;
    }
  }
  else {
    uVar3 = (uint)0xf0;
  }
  iVar4 = 0x8c4aa1a0;
  iVar2 = (int)0xff;
  *(le<int>* )(unsigned)(0x8c4aa1a0 + 0x48) = (int)sVar1;
  *(le<uint>* )(unsigned)(iVar4 + 0x4c) = uVar3;
  if (ar4 == iVar2) {
    ar4 = *(le<undefined4>* )(unsigned)0x8c4a9bd0;
  }
  *(le<uint>* )(unsigned)(iVar4 + 0x50) = ((le<uint>* )(fr0_ - 0x1c))[ar4] >> 3;
  *(le<int>* )(unsigned)(iVar4 + 0x60) = *(le<int>* )(unsigned)(iVar4 + 0x48) * *(le<int>* )(unsigned)(iVar4 + 0x4c) * *(le<int>* )(unsigned)(iVar4 + 0x50);
  return 0x60;
}

__asm__(".globl sh4_dmac_202c60\n.set sh4_dmac_202c60, sh4_dmac_202c60_def\n");

}
//@unit 8c202e20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 sh4_dmac_202e20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_dmac_202e20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  piVar1 = 0xffa0002c;
  *(volatile le<undefined4>* )(unsigned)0xffa00020 = 0;
  *(volatile le<undefined4>* )(unsigned)0xffa00024 = 0;
  *(volatile le<undefined4>* )(unsigned)0xffa00028 = 0;
  *piVar1 = (int)0x12c0;
  *(volatile le<undefined4>* )(unsigned)0xffa00040 = 0x8201;
  *(volatile le<undefined4>* )(unsigned)0xa05f6884 = 0;
  *(volatile le<undefined4>* )(unsigned)0xff000038 = 0x10;
  *(volatile le<undefined4>* )(unsigned)0xff00003c = 0x10;
  puVar4 = 0x8c47eb9c;
  puVar3 = 0x8c47eb90;
  puVar2 = 0x8c47eb88;
  *(le<undefined4>* )(unsigned)0x8c47eb88 = 0;
  puVar2[1] = 0;
  puVar2 = 0x8c47eb94;
  uVar7 = (uint)0x100;
  *(le<undefined4>* )(unsigned)0x8c47eb94 = 0;
  puVar2[1] = 0;
  uVar6 = 0;
  *puVar3 = 0;
  *puVar4 = 7;
  *(le<undefined4>* )(unsigned)0x8c47eba0 = 1;
  iVar5 = 0x8c47e988;
  do {
    iVar8 = iVar5 + uVar6;
    uVar6 = uVar6 + 0x20;
    *(le<undefined4>* )(unsigned)(iVar8 + 0x18) = 0;
    *(le<undefined4>* )(unsigned)(iVar8 + uVar7 + 0x18) = 8;
  } while (uVar6 < uVar7);
  return 8;
}

__asm__(".globl sh4_dmac_202e20\n.set sh4_dmac_202e20, sh4_dmac_202e20_def\n");

}
//@unit 8c202e82
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 g2dma_202e82_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("g2dma_202e82");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  int iVar5;
  le<int>* piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  piVar6 = 0xa05f6808;
  *(volatile le<undefined4>* )(unsigned)0xa05f6808 = 0;
  puVar1 = 0xa05f8008;
  *(volatile le<undefined4>* )(unsigned)0xa05f8008 = 1;
  *puVar1 = 0;
  do {
  } while (*piVar6 != 0);
  *(volatile le<undefined4>* )(unsigned)0xffa0002c = *(volatile le<undefined4>* )(unsigned)0xffa0002c & 0xfffffffe;
  *puVar1 = 1;
  *puVar1 = 0;
  puVar2 = 0x8c47eb90;
  puVar1 = 0x8c47eb88;
  *(le<undefined4>* )(unsigned)0x8c47eb88 = 0;
  puVar1[1] = 0;
  puVar4 = 0x8c47eba0;
  puVar3 = 0x8c47eb9c;
  puVar1 = 0x8c47eb94;
  *(le<undefined4>* )(unsigned)0x8c47eb94 = 0;
  puVar1[1] = 0;
  *puVar2 = 0;
  iVar5 = 0x8c47e988;
  uVar8 = (uint)0x100;
  *puVar3 = 7;
  *puVar4 = 7;
  uVar7 = 0;
  do {
    iVar9 = iVar5 + uVar7;
    uVar7 = uVar7 + 0x20;
    *(le<undefined4>* )(unsigned)(iVar9 + 0x18) = 0;
    *(le<undefined4>* )(unsigned)(iVar9 + uVar8 + 0x18) = 8;
  } while (uVar7 < uVar8);
  return 0;
}

__asm__(".globl g2dma_202e82\n.set g2dma_202e82, g2dma_202e82_def\n");

}
//@unit 8c202f40
#include "../decls.h"
extern "C" {
unsigned host_dmac(unsigned, unsigned, unsigned, unsigned);
int sh4_dmac_202f40_def(int ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  return (int)host_dmac(ar4, ar5, ar6, ar7);
}
__asm__(".globl sh4_dmac_202f40\n.set sh4_dmac_202f40, sh4_dmac_202f40_def\n");
}
//@unit 8c203160
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 sh4_dmac_203160_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("sh4_dmac_203160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<uint>* puVar3;
  int iVar4;
  le<undefined4>* puVar5;
  int iVar6;
  uint uVar7;
  le<uint>* puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar4 = 0x8c47eb94;
  iVar2 = 0x8c47e988;
  uVar1 = 0x241;
  iVar6 = *(le<undefined4>* )(unsigned)0x8c47eba0 * 0x100 + 0x8c47e988 + *(le<undefined4>* )(unsigned)0x8c47eb9c * 0x20;
  *(le<uint>* )(unsigned)(iVar6 + 0x18) = *(le<uint>* )(unsigned)(iVar6 + 0x18) & 0xfffffffc;
  puVar5 = 0xffa00020;
  uVar7 = 0;
  do {
    iVar6 = *(le<int>* )(unsigned)(uVar7 * 4 + iVar4);
    if ((*(le<uint>* )(unsigned)(uVar7 * 0x100 + iVar2 + iVar6 * 0x20 + 0x18) & 3) == 1) {
      iVar11 = uVar7 * 0x100;
      iVar10 = iVar6 * 0x20;
      iVar9 = iVar11 + iVar2 + iVar10;
      *(le<uint>* )(unsigned)(iVar9 + 0x18) = *(le<uint>* )(unsigned)(iVar9 + 0x18) & 0xfffffffc | 2;
      *puVar5 = *(le<undefined4>* )(unsigned)(iVar9 + 4);
      *(volatile le<undefined4>* )(unsigned)0xffa00024 = (*(le<int>* )(unsigned)(iVar9 + 0xc) + 0xf0000000) * 2;
      *(volatile le<undefined4>* )(unsigned)0xffa00028 = *(le<uint>* )(unsigned)(iVar9 + 0x14) >> 5;
      if ((*(le<uint>* )(unsigned)(iVar9 + 0x18) & 4) == 0) {
        uVar1 = 0x2c1;
      }
      if ((*(le<uint>* )(unsigned)(iVar11 + iVar2 + iVar10 + 0x18) & 0x10) != 0) {
        uVar1 = uVar1 | 0x1000;
      }
      *(volatile le<undefined4>* )(unsigned)0xffa0002c = (int)(short)uVar1;
      iVar10 = iVar11 + iVar2 + iVar10;
      *(volatile le<undefined4>* )(unsigned)0xa05f6800 = *(le<undefined4>* )(unsigned)(iVar10 + 0xc);
      *(volatile le<undefined4>* )(unsigned)0xa05f6804 = *(le<undefined4>* )(unsigned)(iVar10 + 0x14);
      *(volatile le<undefined4>* )(unsigned)0xa05f6808 = 1;
      puVar3 = 0x8c47eba0;
      puVar8 = (le<uint>* )(unsigned)(uVar7 * 4 + iVar4);
      *(le<undefined4>* )(unsigned)0x8c47eb9c = iVar6;
      *puVar3 = uVar7;
      *puVar8 = *puVar8 + 1 & 7;
      return 1;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 2);
  return 0;
}

__asm__(".globl sh4_dmac_203160\n.set sh4_dmac_203160, sh4_dmac_203160_def\n");

}
//@unit 8c203298
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* piVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  le<int>* piVar5;
  
  piVar4 = 0x8c47e988;
  piVar5 = 0x8c47e988;
  do {
    if ((le<int>* )(unsigned)((int)0x200 + (unsigned)0x8c47e988) <= piVar4) {
      return 1;
    }
    uVar1 = 0;
    piVar2 = piVar4;
    piVar3 = piVar5;
    do {
      if ((*piVar3 == ar4) && ((piVar2[6] & 3U) != 0)) {
        return 0;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 8;
      piVar3 = piVar3 + 8;
    } while (uVar1 < 8);
    piVar4 = (le<int>* )(unsigned)((int)piVar4 + (int)0x100);
    piVar5 = (le<int>* )(unsigned)((int)piVar5 + (int)0x100);
  } while( true );
}

__asm__(".globl FUN_8c203298\n.set FUN_8c203298, FUN_8c203298_def\n");

}
//@unit 8c203320
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203320_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203320");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  do {
    iVar1 = 1;
  } while (iVar1 != 1);
  return 1;
}

__asm__(".globl FUN_8c203320\n.set FUN_8c203320, FUN_8c203320_def\n");

}
//@unit 8c2033c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2033c0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2033c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = ((void *)(unsigned)0x8c0146b4);
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)*ar4,ar5,ar6,ar7));
    *ar4 = (char)in_r0;
  }
  *ar4 = '\0';
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2033c0\n.set FUN_8c2033c0, FUN_8c2033c0_def\n");

}
//@unit 8c203400
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203400");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<undefined2>* puVar1;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  int iVar2;
  int iVar3;
  
  iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c2753e8, 16); dbg_dump(0x8c47eba8, 12); }
  while (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar3,ar5,ar6,ar7); });
    iVar3 = iVar2;
  }
  while (iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), iVar2 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar2 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar2,ar5,ar6,ar7); });
    iVar2 = iVar3;
  }
  while (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar3,ar5,ar6,ar7); });
    iVar3 = iVar2;
  }
  while (iVar2 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar2 + 8);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c204e6c(iVar2,ar5,ar6,ar7); });
    iVar2 = iVar3;
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c47eba8);
  ar5_00 = ((undefined1 *)(unsigned)0x8c496ba8);
  puVar1 = (le<undefined2>* )(unsigned)((undefined1 *)(unsigned)0x8c47eba8);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 0xc;
  } while (puVar1 < ((undefined1 *)(unsigned)0x8c496ba8));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275404) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27540c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275418) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275420) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424) = 0;
  iVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428);
  while (iVar3 != 0) {
    iVar2 = *(le<int>* )(unsigned)(iVar3 + 4);
    in_r0 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2057c0(iVar3,ar5_00,ar6_00,ar7); });
    iVar3 = iVar2;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428) = 0;
  return 0;
}

__asm__(".globl FUN_8c203400\n.set FUN_8c203400, FUN_8c203400_def\n");

}
//@unit 8c203406
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c203406_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c203406");
  return (unsigned)sh4_interp(0x8c203406, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c203406\n.set FUN_8c203406, FUN_8c203406_def\n");
}
//@unit 8c2034c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2034c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2034c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2753e8) == 1) {
    uVar5 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d280),((undefined1 *)(unsigned)0x8c26d28c),0,ar7));
    if (iVar1 == 1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc0) = 0x1000000;
      uVar2 = 0xe4;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec) = 0x1000000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) = 0x1000000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8) = 0x1000000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc) = 0;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    else {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
      uVar2 = 0xe4;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc) = 0;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203400(uVar2,uVar3,uVar5,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(uVar2,uVar3,uVar5,ar7));
    if (iVar1 != 0) {
      *(le<undefined4>* )(unsigned)(iVar1 + 0xc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0);
      *(le<undefined4>* )(unsigned)(iVar1 + 0x10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      puVar4 = ((le<undefined4>* )(unsigned)0x8c275400);
LAB_8c20362c:
      *(le<undefined4>* )(unsigned)(iVar1 + 8) = puVar4[2];
      puVar4[2] = iVar1;
      *(le<undefined4>* )(unsigned)(iVar1 + 4) = puVar4[3];
      puVar4[3] = iVar1;
      return 0;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d280),((undefined1 *)(unsigned)0x8c26d28c),0,ar7));
    if (iVar1 == 1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc0) = 0x1000000;
      uVar2 = 0xe4;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc) = 0x800000;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    else {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec) = 0x400000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) = 0x400000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8) = 0x400000;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc) = 0x400000;
      uVar2 = 0xe4;
      uVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0xe4,0,uVar5,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203400(uVar2,uVar3,uVar5,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(uVar2,uVar3,uVar5,ar7));
    if (iVar1 != 0) {
      *(le<undefined4>* )(unsigned)(iVar1 + 0xc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f0);
      *(le<undefined4>* )(unsigned)(iVar1 + 0x10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      *(le<int>* )(unsigned)(iVar1 + 8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408) = iVar1;
      *(le<int>* )(unsigned)(iVar1 + 4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27540c);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c27540c) = iVar1;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c204e40(iVar1,((le<undefined4>* )(unsigned)0x8c275400),uVar5,ar7));
      if (iVar1 != 0) {
        puVar4 = ((le<undefined4>* )(unsigned)0x8c275414);
        *(le<undefined4>* )(unsigned)(iVar1 + 0xc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8);
        *(le<undefined4>* )(unsigned)(iVar1 + 0x10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753fc);
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}

__asm__(".globl FUN_8c2034c0\n.set FUN_8c2034c0, FUN_8c2034c0_def\n");

}
//@unit 8c2034cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_HARDWARE_2034d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_HARDWARE_2034d0");
  return (unsigned)sh4_interp(0x8c2034cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_HARDWARE_2034d0\n.set s_HARDWARE_2034d0, s_HARDWARE_2034d0_def\n");
}
//@unit 8c2036a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2036a0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2036a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) == ar4) {
    *(le<uint>* )(unsigned)(ar5 + 0x14) = ar4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be((*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) + 4,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) = 0;
  }
  else {
    ar5_00 = ar4 << 1;
    iVar4 = ar5;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,8));
    }
    else {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2((uint)((*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424)),ar5_00,ar5,8));
    }
    if (iVar2 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) = *(le<int>* )(unsigned)(ar5 + 0x1c);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) = ar4;
      *(le<uint>* )(unsigned)(ar5 + 0x14) = ar4;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(*(le<undefined4>* )(unsigned)(ar5 + 0x1c),ar5_00,iVar4,uVar3));
      *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c2036a0\n.set FUN_8c2036a0, FUN_8c2036a0_def\n");

}
//@unit 8c2036ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2036ac_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2036ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int ar5_00;
  int iVar4;
  int unaff_r13 = 0;
  char in_T = 0;
  
  if (in_T == '\0') {
    uVar1 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ain0 & 0x1f;
  }
  if (uVar1 != 0) {
    unaff_r13 = unaff_r13 + (0x20 - uVar1);
  }
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) == unaff_r13) {
    *(le<int>* )(unsigned)(ar5 + 0x14) = unaff_r13;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be((*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) + 4,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = uVar3;
    iVar2 = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) = 0;
  }
  else {
    ar5_00 = unaff_r13 << 1;
    iVar4 = ar5;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,8));
    }
    else {
      uVar3 = 8;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2((uint)((*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424)),ar5_00,ar5,8));
    }
    if (iVar2 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c27542c) = *(le<int>* )(unsigned)(ar5 + 0x1c);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c275430) = unaff_r13;
      *(le<int>* )(unsigned)(ar5 + 0x14) = unaff_r13;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(*(le<undefined4>* )(unsigned)(ar5 + 0x1c),ar5_00,iVar4,uVar3));
      *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = uVar3;
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c2036ac\n.set FUN_8c2036ac, FUN_8c2036ac_def\n");

}
//@unit 8c20374e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20374e_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20374e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  int iVar5;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  ar5_00 = ar4 << 1;
  iVar5 = ar5;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
    uVar4 = 8;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,8));
  }
  else {
    uVar4 = 8;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2((uint)((*(le<undefined4>* )(unsigned)(unsigned)0x8c275410) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c275424)),ar5_00,ar5,8));
  }
  if (iVar2 == 0) {
    ar4_00 = *(le<int>* )(unsigned)(ar5 + 0x1c);
    *(le<uint>* )(unsigned)(ar5 + 0x14) = ar4;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(ar4_00,ar5_00,iVar5,uVar4));
    *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = uVar3;
    *(le<uint>* )(unsigned)(ar6 + 0x14) = ar4;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(ar4_00 + 4,ar5_00,iVar5,uVar4));
    *(le<undefined4>* )(unsigned)(ar6 + 0x1c) = uVar4;
  }
  return iVar2;
}

__asm__(".globl FUN_8c20374e\n.set FUN_8c20374e, FUN_8c20374e_def\n");

}
//@unit 8c203820
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c203820_def(uint ar4,le<int>* ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203820");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar5_00;
  le<int>* ar6_00;
  int ar7_00;
  int ar4_00;
  
  if ((int)ar4 < 0) {
    uVar2 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar4 & 0x1f;
  }
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  ar7_00 = (int)0x2000;
  ar5_00 = ar4 << 1;
  ar6_00 = ar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2046d2(0,ar5_00,ar5,ar7_00));
  if (iVar3 == 0) {
    ar4_00 = *ar5;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059be(ar4_00,ar5_00,ar6_00,ar7_00));
    puVar1 = ((void *)(unsigned)0x8c2059be);
    *ar5 = iVar4;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00 + 4,ar5_00,ar6_00,ar7_00));
    *ar6 = uVar5;
  }
  return iVar3;
}

__asm__(".globl FUN_8c203820\n.set FUN_8c203820, FUN_8c203820_def\n");

}
//@unit 8c2038c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2038c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2038c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 4) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2048aa(1,ar4,ar5,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204006(&(*(le<int>* )(fr0_ - 0x14)),((le<int>* )(fr0_ - 0x10)),ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2048aa((uint)((*(le<int>* )(fr0_ - 0x14)) < ((le<int>* )(fr0_ - 0x10))[0]),ar4,ar5,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c2038c0\n.set FUN_8c2038c0, FUN_8c2038c0_def\n");

}
//@unit 8c203914
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c203914_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203914");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2041e2(ar4,ar5,ar6,ar7));
  if (iVar1 == -1) {
    iVar2 = 3;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2043d4(0,iVar1,ar4,ar5));
    if (iVar2 == 0) {
      iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2043d4(1,iVar1,ar4,ar6));
      if (iVar2 != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(*(le<undefined4>* )(unsigned)(ar5 + 0x1c),iVar1,ar4,ar6));
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c203914\n.set FUN_8c203914, FUN_8c203914_def\n");

}
//@unit 8c203980
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203980_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203980");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2043d4((uint)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8) <= *(le<int>* )(unsigned)(ar5 + 0x1c)),*(le<int>* )(unsigned)(ar5 + 0x1c),ar4,ar5));
  return uVar1;
}

__asm__(".globl FUN_8c203980\n.set FUN_8c203980, FUN_8c203980_def\n");

}
//@unit 8c2039e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2039e0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2039e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  uint uVar1;
  le<ushort>* puVar2;
  int iVar3;
  int iVar4;
  
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  iVar4 = ar5;
  puVar2 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c204c00(0,ar4,ar5,ar7));
  if (puVar2 == (le<ushort>* )(unsigned)0x0) {
    iVar4 = ar5;
    puVar2 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c204c00(1,ar4,ar5,ar7));
  }
  if (puVar2 == (le<ushort>* )(unsigned)0x0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2041e2(ar4,ar5,iVar4,ar7));
    if (iVar4 == -1) {
      iVar3 = 3;
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2043d4(0,iVar4,ar4,ar5));
      if (iVar3 == 0) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2043d4(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar4,ar4,((undefined1 *)(fr0_ - 0x3c))));
      }
    }
  }
  else {
    *(le<undefined4>* )(unsigned)(ar5 + 0x1c) = *(le<undefined4>* )(unsigned)(puVar2 + 6);
    *(le<int>* )(unsigned)(puVar2 + 10) = ar5;
    *puVar2 = *puVar2 | 4;
    iVar3 = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c2039e0\n.set FUN_8c2039e0, FUN_8c2039e0_def\n");

}
//@unit 8c203a92
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203a92_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203a92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  uint ar5_00;
  uint uVar5;
  uint unaff_r12 = 0;
  le<ushort>* ar5_01;
  
  ar5_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c205640(&(*(le<uint>* )(fr0_ - 0x28)),ar4,ar6,ar7));
  ar5_01 = (le<ushort>* )(unsigned)0x0;
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c275428) != (void* )(le<ushort>* )(unsigned)0x0) {
    ar7 = 0xf000;
    puVar4 = (le<short unsigned int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c275428));
    do {
      if (((*puVar4 & 0xf000) == (*(le<uint>* )(fr0_ - 0x28))) &&
         (ar5_00 = 0, puVar3 = puVar4, ar6 = (*(le<uint>* )(fr0_ - 0x18)), (*(le<uint>* )(fr0_ - 0x18)) != 0)) {
        do {
          puVar4 = puVar3;
          uVar5 = ar5_00;
          if (*(le<int>* )(unsigned)(puVar3 + ar5_00 * 2 + 6) == 0) {
            puVar4 = (le<ushort>* )(unsigned)0x0;
            uVar5 = (*(le<uint>* )(fr0_ - 0x18));
            unaff_r12 = ar5_00;
            ar5_01 = puVar3;
          }
          ar5_00 = uVar5 + 1;
          puVar3 = puVar4;
        } while (ar5_00 < (*(le<uint>* )(fr0_ - 0x18)));
      }
      if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
        puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar4 + 2));
      }
    } while (puVar4 != (le<ushort>* )(unsigned)0x0);
  }
  if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
    ar5_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 96)), FUN_8c205768(0,ar5_00,ar6,ar7));
    if (ar5_01 != (le<ushort>* )(unsigned)0x0) {
      puVar4 = ar5_01 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < ar5_01 + 0x26);
      unaff_r12 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c2057e6(((le<undefined4>* )(unsigned)0x8c275428),ar5_01,ar6,ar7); });
      *ar5_01 = *ar5_01 | (ushort)(*(le<uint>* )(fr0_ - 0x28));
      puVar4 = ar5_01;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2049ec(1,(*(le<undefined4>* )(fr0_ - 0x1c)),ar5_01,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c204006((fr0_ + (int)0xffffffd0),&(*(le<int>* )(fr0_ - 0x2c)),ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2049ec((uint)((*(le<int>* )(fr0_ - 0x30)) < (*(le<int>* )(fr0_ - 0x2c))),(*(le<undefined4>* )(fr0_ - 0x1c)),ar5_01,ar7));
      }
      if (iVar1 == 0) goto LAB_8c203baa;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c2057c0(ar5_01,(*(le<undefined4>* )(fr0_ - 0x1c)),puVar4,ar7); });
    }
    uVar2 = 3;
  }
  else {
LAB_8c203baa:
    *(le<uint>* )(unsigned)(ar4 + 0x1c) = unaff_r12 * ((*(le<uint>* )(fr0_ - 0x24)) >> 2) * 4 + *(le<int>* )(unsigned)(ar5_01 + 4);
    *(le<uint>* )(unsigned)(ar5_01 + unaff_r12 * 2 + 6) = ar4;
    *ar5_01 = *ar5_01 | 2;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c203a92\n.set FUN_8c203a92, FUN_8c203a92_def\n");

}
//@unit 8c203bda
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203bda_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203bda");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  int iVar1;
  le<ushort>* ar5_00;
  undefined4 uVar2;
  le<ushort>* ar5_01;
  
  ar5_00 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cc0(ar4,((le<short>* )(fr0_ - 0x14)),ar6,ar7));
  if (ar5_00 == (le<ushort>* )(unsigned)0x0) {
    uVar2 = 7;
  }
  else if ((*ar5_00 & 2) == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
  }
  else {
    iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    if (((le<short>* )(fr0_ - 0x14))[0] != 0) {
      iVar1 = -(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
    }
    ar5_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cc0(iVar1 + ar4,((le<short>* )(fr0_ - 0x10)),ar6,ar7));
    if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
      uVar2 = 0;
    }
    else if ((*ar5_01 & 4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x14))[0],ar5_00,ar6,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c204cfc((int)((le<short>* )(fr0_ - 0x10))[0],ar5_01,ar6,ar7));
    }
    else {
      *ar5_00 = *ar5_00 & 0xfffb;
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c203bda\n.set FUN_8c203bda, FUN_8c203bda_def\n");

}
//@unit 8c203ca0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203ca0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203ca0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a5;
  
  a5 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059e0(ar4,ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(uVar1,a5,ar6,ar7));
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2059e0(ar5,a5,ar6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(uVar1,a5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c203ca0\n.set FUN_8c203ca0, FUN_8c203ca0_def\n");

}
//@unit 8c203cd0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203cd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203cd0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint unaff_r11 = 0;
  le<ushort>* ar5_00;
  
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c205640((fr0_ + (int)0xffffffd4),ar4,ar6,ar7));
  uVar7 = 0;
  ar5_00 = (le<ushort>* )(unsigned)0x0;
  puVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428);
  while (puVar4 != (le<ushort>* )(unsigned)0x0) {
    if (((*puVar4 & 0xf000) == (*(le<uint>* )(fr0_ - 0x2c))) && (uVar5 = 0, puVar3 = puVar4, (*(le<uint>* )(fr0_ - 0x1c)) != 0)) {
      do {
        puVar4 = puVar3;
        uVar6 = uVar5;
        if ((*(le<int>* )(unsigned)(puVar3 + uVar5 * 2 + 6) != 0) &&
           (uVar5 * ((*(le<uint>* )(fr0_ - 0x28)) >> 2) * 4 + *(le<int>* )(unsigned)(puVar3 + 4) == *(le<int>* )(unsigned)(ar4 + 0x1c))) {
          puVar4 = (le<ushort>* )(unsigned)0x0;
          uVar6 = (*(le<uint>* )(fr0_ - 0x1c));
          unaff_r11 = uVar5;
          ar5_00 = puVar3;
        }
        uVar5 = uVar6 + 1;
        puVar3 = puVar4;
      } while (uVar5 < (*(le<uint>* )(fr0_ - 0x1c)));
    }
    if (ar5_00 == (le<ushort>* )(unsigned)0x0) {
      puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar4 + 2));
    }
  }
  if (ar5_00 == (le<ushort>* )(unsigned)0x0) {
    uVar7 = 7;
  }
  else {
    bVar1 = false;
    uVar5 = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[0] = 0;
    (ar5_00 + unaff_r11 * 2 + 6)[1] = 0;
    if ((*(le<uint>* )(fr0_ - 0x1c)) != 0) {
      do {
        iVar2 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        if (*(le<int>* )(unsigned)(ar5_00 + iVar2 + 6) != 0) {
          bVar1 = true;
        }
      } while (uVar5 < (*(le<uint>* )(fr0_ - 0x1c)));
    }
    if (!bVar1) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c203bda(*(le<undefined4>* )(unsigned)(ar5_00 + 4),1,0,(*(le<uint>* )(fr0_ - 0x1c))));
      if (iVar2 != 0) {
        return iVar2;
      }
      puVar4 = ar5_00;
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c2057f8(((le<undefined4>* )(unsigned)0x8c275428),ar5_00,uVar7,(*(le<uint>* )(fr0_ - 0x1c))));
      ({ unsigned long ri0_ = (unsigned long)((*(le<uint>* )(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c2057c0(ar5_00,puVar4,uVar7,(*(le<uint>* )(fr0_ - 0x1c))); });
    }
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl FUN_8c203cd0\n.set FUN_8c203cd0, FUN_8c203cd0_def\n");

}
//@unit 8c203de0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c203de0_def(le<int>* ar4,le<int>* ar5,le<int>* ar6,le<int>* ar7)

{
  TRACE_ENTER("FUN_8c203de0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  ushort uVar2;
  le<ushort>* puVar3;
  int iVar4;
  int iVar5;
  
  (*(le<int>* )(fr0_ - 0x1c)) = 0;
  (*(le<int>* )(fr0_ - 0x28)) = 0;
  (*(le<int>* )(fr0_ - 0x20)) = 0;
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  (*(le<int>* )(fr0_ - 0x30)) = 0;
  (*(le<int>* )(fr0_ - 0x34)) = 0;
  (*(le<int>* )(fr0_ - 0x2c)) = 0;
  for (iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar4 != 0; iVar4 = *(le<int>* )(unsigned)(iVar4 + 8)) {
    if ((*(le<int>* )(fr0_ - 0x34)) < *(le<int>* )(unsigned)(iVar4 + 0x10)) {
      (*(le<int>* )(fr0_ - 0x34)) = *(le<int>* )(unsigned)(iVar4 + 0x10);
    }
    (*(le<int>* )(fr0_ - 0x24)) = (*(le<int>* )(fr0_ - 0x24)) + *(le<int>* )(unsigned)(iVar4 + 0x10);
  }
  for (; iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), puVar3 != (le<ushort>* )(unsigned)0x0; puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4))) {
    if ((*puVar3 & 4) == 0) {
      if ((*(le<int>* )(fr0_ - 0x34)) < *(le<int>* )(unsigned)(puVar3 + 8)) {
        (*(le<int>* )(fr0_ - 0x34)) = *(le<int>* )(unsigned)(puVar3 + 8);
      }
      (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + *(le<int>* )(unsigned)(puVar3 + 8);
    }
  }
  for (; puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar4 != 0; iVar4 = *(le<int>* )(unsigned)(iVar4 + 8)) {
    if ((*(le<int>* )(fr0_ - 0x30)) < *(le<int>* )(unsigned)(iVar4 + 0x10)) {
      (*(le<int>* )(fr0_ - 0x30)) = *(le<int>* )(unsigned)(iVar4 + 0x10);
    }
    (*(le<int>* )(fr0_ - 0x20)) = (*(le<int>* )(fr0_ - 0x20)) + *(le<int>* )(unsigned)(iVar4 + 0x10);
  }
  for (; puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275428), puVar3 != (le<ushort>* )(unsigned)0x0; puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4))) {
    if ((*puVar3 & 4) == 0) {
      if ((*(le<int>* )(fr0_ - 0x30)) < *(le<int>* )(unsigned)(puVar3 + 8)) {
        (*(le<int>* )(fr0_ - 0x30)) = *(le<int>* )(unsigned)(puVar3 + 8);
      }
      (*(le<int>* )(fr0_ - 0x1c)) = (*(le<int>* )(fr0_ - 0x1c)) + *(le<int>* )(unsigned)(puVar3 + 8);
    }
  }
  do {
    if (puVar1 == (le<ushort>* )(unsigned)0x0) {
      *ar4 = (*(le<int>* )(fr0_ - 0x24)) + (*(le<int>* )(fr0_ - 0x28));
      *ar5 = (*(le<int>* )(fr0_ - 0x20)) + (*(le<int>* )(fr0_ - 0x1c));
      *ar6 = (*(le<int>* )(fr0_ - 0x2c));
      if ((*(le<int>* )(fr0_ - 0x34)) < (*(le<int>* )(fr0_ - 0x30))) {
        (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x30));
      }
      *ar7 = (*(le<int>* )(fr0_ - 0x34));
      return 0;
    }
    uVar2 = *puVar1 & 0xf000;
    if (uVar2 == 0x1000) {
      iVar4 = 0x90;
LAB_8c203f32:
      iVar5 = 0x10;
    }
    else {
      if (uVar2 == 0x2000) {
        iVar4 = 0xa0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x3000) {
        iVar4 = 0xc0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x4000) {
        iVar4 = 0xe0;
        goto LAB_8c203f32;
      }
      if (uVar2 == 0x5000) {
        iVar4 = 0x200;
        iVar5 = 8;
      }
      else if (uVar2 == 0x6000) {
        iVar4 = 0x360;
        iVar5 = 4;
      }
      else if (uVar2 == 0x7000) {
        iVar4 = 0x800;
        iVar5 = 2;
      }
      else if (uVar2 == 0x8000) {
        iVar4 = 0xd60;
        iVar5 = 1;
      }
      else {
        iVar5 = 0;
        iVar4 = 0;
      }
    }
    (*(le<int>* )(fr0_ - 0x38)) = 0;
    puVar3 = puVar1 + 6;
    if (iVar5 != 0) {
      do {
        if (*(le<int>* )(unsigned)puVar3 == 0) {
          (*(le<int>* )(fr0_ - 0x2c)) = (*(le<int>* )(fr0_ - 0x2c)) + iVar4;
        }
        (*(le<int>* )(fr0_ - 0x38)) = (*(le<int>* )(fr0_ - 0x38)) + 1;
        puVar3 = puVar3 + 2;
      } while ((*(le<int>* )(fr0_ - 0x38)) < iVar5);
    }
    puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 2));
  } while( true );
}

__asm__(".globl FUN_8c203de0\n.set FUN_8c203de0, FUN_8c203de0_def\n");

}
//@unit 8c204006
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204006_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204006");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = 0;
  for (iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408); puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275400), iVar2 != 0; iVar2 = *(le<int>* )(unsigned)(iVar2 + 8)) {
    if (iVar3 < *(le<int>* )(unsigned)(iVar2 + 0x10)) {
      iVar3 = *(le<int>* )(unsigned)(iVar2 + 0x10);
    }
  }
  for (; iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27541c), puVar1 != (le<ushort>* )(unsigned)0x0; puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4))) {
    if (((*puVar1 & 4) == 0) && (iVar3 < *(le<int>* )(unsigned)(puVar1 + 8))) {
      iVar3 = *(le<int>* )(unsigned)(puVar1 + 8);
    }
  }
  for (; puVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275414), iVar2 != 0; iVar2 = *(le<int>* )(unsigned)(iVar2 + 8)) {
    if (iVar4 < *(le<int>* )(unsigned)(iVar2 + 0x10)) {
      iVar4 = *(le<int>* )(unsigned)(iVar2 + 0x10);
    }
  }
  for (; puVar1 != (le<ushort>* )(unsigned)0x0; puVar1 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4))) {
    if (((*puVar1 & 4) == 0) && (iVar4 < *(le<int>* )(unsigned)(puVar1 + 8))) {
      iVar4 = *(le<int>* )(unsigned)(puVar1 + 8);
    }
  }
  *ar4 = iVar3;
  *ar5 = iVar4;
  return 0;
}

__asm__(".globl FUN_8c204006\n.set FUN_8c204006, FUN_8c204006_def\n");

}
//@unit 8c20408e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20408e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20408e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c275400),((le<undefined4>* )(unsigned)0x8c275404),ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c275414),((le<undefined4>* )(unsigned)0x8c275418),ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c275408),((le<undefined4>* )(unsigned)0x8c27540c),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c27541c),((le<undefined4>* )(unsigned)0x8c275420),ar6,ar7); });
  return 0;
}

__asm__(".globl FUN_8c20408e\n.set FUN_8c20408e, FUN_8c20408e_def\n");

}
//@unit 8c204092
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204092_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204092");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(unaff_r14,unaff_r14 + 4,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c275414),((le<undefined4>* )(unsigned)0x8c275418),ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(unaff_r14 + 8,unaff_r14 + 0xc,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c205020(((le<undefined4>* )(unsigned)0x8c27541c),((le<undefined4>* )(unsigned)0x8c275420),ar6,ar7); });
  return 0;
}

__asm__(".globl FUN_8c204092\n.set FUN_8c204092, FUN_8c204092_def\n");

}
//@unit 8c2040ce
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2040ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2040ce");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(((le<undefined4>* )(unsigned)0x8c275408),((le<undefined4>* )(unsigned)0x8c27540c),((le<undefined4>* )(unsigned)0x8c275400),((le<undefined4>* )(unsigned)0x8c275404)));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(((le<undefined4>* )(unsigned)0x8c27541c),((le<undefined4>* )(unsigned)0x8c275420),((le<undefined4>* )(unsigned)0x8c275414),((le<undefined4>* )(unsigned)0x8c275418)));
  }
  return iVar1;
}

__asm__(".globl FUN_8c2040ce\n.set FUN_8c2040ce, FUN_8c2040ce_def\n");

}
//@unit 8c2040d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2040d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2040d2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int unaff_r14 = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(unaff_r14 + 8,unaff_r14 + 0xc,unaff_r14,unaff_r14 + 4));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2050cc(((le<undefined4>* )(unsigned)0x8c27541c),((le<undefined4>* )(unsigned)0x8c275420),((le<undefined4>* )(unsigned)0x8c275414),((le<undefined4>* )(unsigned)0x8c275418)));
  }
  return iVar1;
}

__asm__(".globl FUN_8c2040d2\n.set FUN_8c2040d2, FUN_8c2040d2_def\n");

}
//@unit 8c204140
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c204140_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204140");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2048; for (int i_ = 0; i_ < 2048; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(le<int>* )(unsigned)(ar4 + 0xc) + *(le<int>* )(unsigned)(ar4 + 0x10);
  uVar1 = (int)0x800 + *(le<int>* )(unsigned)(ar4 + 0xc) & (int)(int)0xfffff800;
  if ((uint)(int)0x2b0 < ar5) {
    iVar3 = (int)(int)0xfffffd50;
    if (uVar1 - *(le<int>* )(unsigned)(ar4 + 0xc) < (uint)(int)0x2b0) {
      uVar1 = uVar1 + (int)0x800;
      if (uVar2 < (uVar1 - *(le<int>* )(unsigned)(ar4 + 0xc)) + ar5 + iVar3) {
        return 0xffffffff;
      }
    }
    else if (uVar2 < (uVar1 - *(le<int>* )(unsigned)(ar4 + 0xc)) + ar5 + iVar3) {
      return 0xffffffff;
    }
    uVar1 = uVar1 + iVar3;
  }
  else if ((uVar1 < uVar2) && (uVar1 - *(le<int>* )(unsigned)(ar4 + 0xc) < ar5)) {
    if (uVar2 - uVar1 < ar5) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *(le<uint>* )(unsigned)(ar4 + 0xc);
  }
  return uVar1;
}

__asm__(".globl FUN_8c204140\n.set FUN_8c204140, FUN_8c204140_def\n");

}
//@unit 8c2041e2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2041e2_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2041e2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (*(le<int>* )(fr0_ - 0x24)) = 0;
  iVar4 = 0;
  if ((int)ar4 < 0) {
    uVar1 = ~(~ar4 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar4 & 0x1f;
  }
  a4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408);
  if (uVar1 != 0) {
    ar4 = ar4 + (0x20 - uVar1);
  }
  do {
    if (a4 == 0) {
      if (((*(le<int>* )(fr0_ - 0x24)) != 2) || (iVar4 == 0)) {
        iVar4 = -1;
      }
      return iVar4;
    }
    if ((int)ar4 <= *(le<int>* )(unsigned)(a4 + 0x10)) {
      uVar1 = *(le<uint>* )(unsigned)(ar5 + 0x18);
      iVar5 = (*(le<int>* )(unsigned)(a4 + 0xc) + *(le<int>* )(unsigned)(a4 + 0x10)) - ar4;
      if ((((uVar1 & 1) == 0) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0)) {
        (*(le<int>* )(fr0_ - 0x24)) = 1;
        for (iVar2 = *(le<int>* )(unsigned)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
          if (iVar3 == 0) {
            return iVar2;
          }
        }
      }
      else {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204140(a4,ar4,ar5,ar7));
        if (-1 < iVar2) {
          for (; iVar2 <= iVar5; iVar2 = iVar2 + 0x800) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
            if (iVar3 == 0) {
              return iVar2;
            }
          }
        }
        (*(le<int>* )(fr0_ - 0x24)) = 2;
        if (iVar4 == 0) {
          for (iVar2 = *(le<int>* )(unsigned)(a4 + 0xc); iVar2 <= iVar5; iVar2 = iVar2 + 0x20) {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar2,ar4,ar7));
            if (iVar3 == 0) {
              iVar4 = iVar2;
              iVar2 = iVar5;
            }
          }
        }
      }
    }
    a4 = *(le<int>* )(unsigned)(a4 + 8);
  } while( true );
}

__asm__(".globl FUN_8c2041e2\n.set FUN_8c2041e2, FUN_8c2041e2_def\n");

}
//@unit 8c20436c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20436c_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20436c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (((le<undefined4>* )(unsigned)0x8c275408))[(short)ar4 * 5];
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    iVar3 = *(le<int>* )(unsigned)(iVar1 + 0xc);
    if ((((ar5 < iVar3) || (*(le<int>* )(unsigned)(iVar1 + 0x10) + iVar3 <= ar5)) || (ar5 + ar6 < iVar3)) ||
       (*(le<int>* )(unsigned)(iVar1 + 0x10) + iVar3 < ar5 + ar6)) {
      iVar3 = *(le<int>* )(unsigned)(iVar1 + 8);
    }
    else {
      iVar3 = 0;
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    return 0;
  }
  return 3;
}

__asm__(".globl FUN_8c20436c\n.set FUN_8c20436c, FUN_8c20436c_def\n");

}
//@unit 8c2043d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2043d4_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2043d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  le<ushort>* ar6_00;
  uint uVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  puVar3 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (le<ushort>* )(unsigned)0x0) {
    iVar4 = *(le<int>* )(unsigned)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4));
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (le<ushort>* )(unsigned)0x0;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
    return 3;
  }
  if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar6) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ar6_00,0); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_00,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 0x1c) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<int>* )(unsigned)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x80;
    }
    else {
      *ar6_00 = *ar6_00 | 0x100;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
  }
  else {
    if (*(le<int>* )(unsigned)(ar6_00 + 6) != ar5) {
      if (*(le<int>* )(unsigned)(ar6_00 + 6) + *(le<int>* )(unsigned)(ar6_00 + 8) == iVar5) {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(
                     ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 0x1c) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        ain0 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(puVar3,iVar4,iVar5,a7));
        if (ain0 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e6c(ar6_01,iVar4,iVar5,a7); });
          return 3;
        }
        iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
        iVar4 = *(le<int>* )(unsigned)(ar6_00 + 6);
        *(le<int>* )(unsigned)(ar6_00 + 8) = ar5 - iVar4;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<uint>* )(unsigned)(ain0 + 0xc) = ar5 + ar6;
        *(le<uint>* )(unsigned)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204eb6(((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ain0,(((le<undefined4>* )(unsigned)0x8c27540c))[iVar2 * 5],a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 0x1c) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x80;
        }
        else {
          *ar6_01 = *ar6_01 | 0x100;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - *(le<int>* )(unsigned)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
    if (puVar3 == (le<ushort>* )(unsigned)0x0) {
      return 3;
    }
    *(le<undefined4>* )(unsigned)(puVar3 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<uint>* )(unsigned)(puVar3 + 8) = ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + ar6;
    ({ unsigned long ri0_ = (unsigned long)(
                 ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,puVar3,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 0x1c) = *(le<undefined4>* )(unsigned)(puVar3 + 6);
    *(le<int>* )(unsigned)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x80;
    }
    else {
      *puVar3 = *puVar3 | 0x100;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(puVar3 + 8);
  }
  (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - iVar5;
  return 0;
}

__asm__(".globl FUN_8c2043d4\n.set FUN_8c2043d4, FUN_8c2043d4_def\n");

}
//@unit 8c2046d2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2046d2_def(undefined4 ar4,uint ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2046d2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* ar6_00;
  uint uVar2;
  le<ushort>* puVar3;
  undefined4 uVar4;
  int iVar5;
  short sVar6;
  int iVar7;
  
  if ((int)ar5 < 0) {
    uVar2 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ar5 & 0x1f;
  }
  if (uVar2 != 0) {
    ar5 = ar5 + (0x20 - uVar2);
  }
  iVar7 = (int)(short)ar4;
  puVar3 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar7 * 5];
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  while (puVar1 = puVar3, puVar1 != (le<ushort>* )(unsigned)0x0) {
    if (*(le<int>* )(unsigned)(puVar1 + 8) < (int)ar5) {
      puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
    }
    else {
      puVar3 = (le<ushort>* )(unsigned)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
LAB_8c204880:
    uVar4 = 3;
  }
  else {
    sVar6 = (short)ar7;
    if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar5) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar7 * 5,ar6_00,ar7); })
      ;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,ar6_00,ar7); })
      ;
      *ar6_00 = 1;
      if (sVar6 == 8) {
        ar6[7] = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
        *(le<unsigned>* )(unsigned)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
        *(le<unsigned>* )(unsigned)(ar6_00 + 10) = ar6;
        *ar6_00 = *ar6_00 | 0x2000;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
    }
    else {
      puVar3 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204e40(0,0,ar6,ar7));
      if (puVar3 == (le<ushort>* )(unsigned)0x0) goto LAB_8c204880;
      *(le<undefined4>* )(unsigned)(puVar3 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<uint>* )(unsigned)(puVar3 + 8) = ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 6) = ar5 + *(le<int>* )(unsigned)(ar6_00 + 6);
      ({ unsigned long ri0_ = (unsigned long)(
                   ((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,puVar3,ar7); });
      if (sVar6 == 8) {
        ar6[7] = *(le<undefined4>* )(unsigned)(puVar3 + 6);
        *(le<unsigned>* )(unsigned)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 8;
      }
      else {
        if (sVar6 != 0x2000) goto LAB_8c204880;
        *ar6 = *(le<undefined4>* )(unsigned)(puVar3 + 6);
        *(le<unsigned>* )(unsigned)(puVar3 + 10) = ar6;
        *puVar3 = *puVar3 | 0x2000;
      }
      *puVar3 = *puVar3 | 4;
      iVar5 = *(le<int>* )(unsigned)(puVar3 + 8);
    }
    uVar4 = 0;
    (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] - iVar5;
  }
  return uVar4;
}

__asm__(".globl FUN_8c2046d2\n.set FUN_8c2046d2, FUN_8c2046d2_def\n");

}
//@unit 8c2048aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2048aa_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2048aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* ar6_00;
  ushort uVar2;
  uint uVar3;
  le<ushort>* puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  if ((int)ar5 < 0) {
    uVar3 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar3 = ar5 & 0x1f;
  }
  if (uVar3 != 0) {
    ar5 = ar5 + (0x20 - uVar3);
  }
  iVar7 = (int)(short)ar4;
  puVar4 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar7 * 5];
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  while (puVar1 = puVar4, puVar1 != (le<ushort>* )(unsigned)0x0) {
    if (*(le<int>* )(unsigned)(puVar1 + 8) < (int)ar5) {
      puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
    }
    else {
      puVar4 = (le<ushort>* )(unsigned)0x0;
      ar6_00 = puVar1;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
LAB_8c204964:
    uVar5 = 3;
  }
  else {
    if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar5) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar7 * 5,ar6_00,ar7); })
      ;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,ar6_00,ar7); })
      ;
      *(le<undefined4>* )(unsigned)(ar6 + 0x1c) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<int>* )(unsigned)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        uVar2 = *ar6_00 | 0x20;
      }
      else {
        uVar2 = *ar6_00 | 0x40;
      }
      *ar6_00 = uVar2;
      *ar6_00 = *ar6_00 | 4;
      iVar6 = *(le<int>* )(unsigned)(ar6_00 + 8);
    }
    else {
      puVar4 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 36)), FUN_8c204e40(0,0,ar6,ar7));
      if (puVar4 == (le<ushort>* )(unsigned)0x0) goto LAB_8c204964;
      *(le<undefined4>* )(unsigned)(puVar4 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<uint>* )(unsigned)(puVar4 + 8) = ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar5;
      *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + ar5;
      ({ unsigned long ri0_ = (unsigned long)(
                   ((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar7 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar7 * 5,puVar4,ar7); });
      *(le<undefined4>* )(unsigned)(ar6 + 0x1c) = *(le<undefined4>* )(unsigned)(puVar4 + 6);
      *(le<int>* )(unsigned)(puVar4 + 10) = ar6;
      if ((short)ar4 == 0) {
        uVar2 = *puVar4 | 0x20;
      }
      else {
        uVar2 = *puVar4 | 0x40;
      }
      *puVar4 = uVar2;
      *puVar4 = *puVar4 | 4;
      iVar6 = *(le<int>* )(unsigned)(puVar4 + 8);
    }
    uVar5 = 0;
    (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar7 * 5] - iVar6;
  }
  return uVar5;
}

__asm__(".globl FUN_8c2048aa\n.set FUN_8c2048aa, FUN_8c2048aa_def\n");

}
//@unit 8c2049ec
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2049ec_def(undefined4 ar4,uint ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2049ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2092; for (int i_ = 0; i_ < 2092; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  le<ushort>* puVar5;
  le<ushort>* puVar6;
  int iVar7;
  le<ushort>* puVar8;
  uint a6;
  le<ushort>* ar6_00;
  
  iVar7 = 0;
  if ((int)ar5 < 0) {
    uVar1 = ~(~ar5 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar5 & 0x1f;
  }
  puVar8 = (le<ushort>* )(unsigned)0x0;
  a6 = ar5;
  if (uVar1 != 0) {
    a6 = ar5 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  if ((le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar2 * 5] != (le<ushort>* )(unsigned)0x0) {
    ar7 = 0x800;
    puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar2 * 5];
    do {
      if (*(le<int>* )(unsigned)(puVar5 + 8) < (int)a6) {
        puVar6 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar5 + 4));
      }
      else {
        if (puVar8 == (le<ushort>* )(unsigned)0x0) {
          puVar8 = puVar5;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 2092)), libgcc_divide_helper_010614(*(le<undefined4>* )(unsigned)(puVar5 + 6),ar7,vr6,vr7));
        if (iVar3 == 0) {
          ar5 = *(le<uint>* )(unsigned)(puVar5 + 6);
LAB_8c204a94:
          iVar7 = 1;
        }
        else {
          ar5 = *(le<int>* )(unsigned)(puVar5 + 6) + ar7 & 0xfffff800;
          (*(le<int>* )(fr0_ - 0x2c)) = *(le<int>* )(unsigned)(puVar5 + 6) + *(le<int>* )(unsigned)(puVar5 + 8);
          if (((*(le<int>* )(fr0_ - 0x2c)) <= (int)ar5) || ((int)a6 <= (int)(ar5 - *(le<int>* )(unsigned)(puVar5 + 6))))
          goto LAB_8c204a94;
          if ((int)((*(le<int>* )(fr0_ - 0x2c)) - ar5) < (int)a6) {
            puVar6 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar5 + 4));
            goto LAB_8c204ac2;
          }
          iVar7 = 2;
        }
        puVar6 = (le<ushort>* )(unsigned)0x0;
        ar6_00 = puVar5;
      }
LAB_8c204ac2:
      puVar5 = puVar6;
    } while (puVar6 != (le<ushort>* )(unsigned)0x0);
  }
  if ((iVar7 == 0) && (puVar8 != (le<ushort>* )(unsigned)0x0)) {
    iVar7 = 1;
    ar6_00 = puVar8;
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
LAB_8c204b6a:
    uVar4 = 3;
  }
  else {
    if (iVar7 == 2) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 2092)), FUN_8c2052f2((int)(short)ar4,ar5,a6,ar6));
      return uVar4;
    }
    if (*(le<uint>* )(unsigned)(ar6_00 + 8) == a6) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ar6_00,ar7); })
      ;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_00,ar7); })
      ;
      *(le<undefined4>* )(unsigned)(ar6 + 8) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<int>* )(unsigned)(ar6_00 + 10) = ar6;
      *ar6_00 = 1;
      if ((short)ar4 == 0) {
        *ar6_00 = *ar6_00 | 0x200;
      }
      else {
        *ar6_00 = *ar6_00 | 0x400;
      }
      *ar6_00 = *ar6_00 | 4;
      iVar7 = *(le<int>* )(unsigned)(ar6_00 + 8);
    }
    else {
      puVar8 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 2092)), FUN_8c204e40(0,ar5,iVar7,ar7));
      if (puVar8 == (le<ushort>* )(unsigned)0x0) goto LAB_8c204b6a;
      *(le<undefined4>* )(unsigned)(puVar8 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
      *(le<uint>* )(unsigned)(puVar8 + 8) = a6;
      *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - a6;
      *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + a6;
      ({ unsigned long ri0_ = (unsigned long)(
                   ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,puVar8,ar7); });
      *(le<undefined4>* )(unsigned)(ar6 + 8) = *(le<undefined4>* )(unsigned)(puVar8 + 6);
      *(le<int>* )(unsigned)(puVar8 + 10) = ar6;
      if ((short)ar4 == 0) {
        *puVar8 = *puVar8 | 0x200;
      }
      else {
        *puVar8 = *puVar8 | 0x400;
      }
      *puVar8 = *puVar8 | 4;
      iVar7 = *(le<int>* )(unsigned)(puVar8 + 8);
    }
    uVar4 = 0;
    (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - iVar7;
  }
  return uVar4;
}

__asm__(".globl FUN_8c2049ec\n.set FUN_8c2049ec, FUN_8c2049ec_def\n");

}
//@unit 8c204c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<ushort>*  FUN_8c204c00_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204c00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<ushort>* puVar3;
  int iVar4;
  le<ushort>* puVar5;
  
  puVar3 = (le<ushort>* )(unsigned)0x0;
  (*(le<int>* )(fr0_ - 0x24)) = ar5;
  (*(le<int>* )(fr0_ - 0x20)) = ar6;
  iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec);
  for (puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275400))[(short)ar4 * 5]; puVar5 != (le<ushort>* )(unsigned)0x0;
      puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar5 + 4))) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x180) != 0)) &&
       (((*(le<int>* )(fr0_ - 0x24)) <= *(le<int>* )(unsigned)(puVar5 + 8) && (*(le<int>* )(unsigned)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      else {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c204cc0(iVar2,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      if ((iVar2 != 0) && (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar2 + 0x14) + 0x18) == *(le<int>* )(unsigned)((*(le<int>* )(fr0_ - 0x20)) + 0x18))) {
        iVar4 = *(le<int>* )(unsigned)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}

__asm__(".globl FUN_8c204c00\n.set FUN_8c204c00, FUN_8c204c00_def\n");

}
//@unit 8c204cc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c204cc0_def(int ar4,le<short>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204cc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (ar4 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f8)) {
    *ar5 = 0;
  }
  else {
    *ar5 = 1;
  }
  iVar3 = (((le<undefined4>* )(unsigned)0x8c275400))[*ar5 * 5];
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(le<int>* )(unsigned)(iVar1 + 0xc) == ar4) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(le<int>* )(unsigned)(iVar1 + 8);
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c204cc0\n.set FUN_8c204cc0, FUN_8c204cc0_def\n");

}
//@unit 8c204cfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204cfc_def(undefined4 ar4,le<ushort>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204cfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* puVar2;
  le<undefined4>* ar5_00;
  le<undefined4>* puVar3;
  le<ushort>* ar6_00;
  int iVar4;
  le<ushort>* puVar5;
  
  iVar4 = (int)(short)ar4;
  *ar5 = *ar5 & 0xfffb;
  ar5_00 = ((le<undefined4>* )(unsigned)0x8c275404) + iVar4 * 5;
  ar6_00 = ar5;
  ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275400) + iVar4 * 5,ar5_00,ar5,ar7); });
  (((le<undefined4>* )(unsigned)0x8c275410))[iVar4 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar4 * 5] + *(le<int>* )(unsigned)(ar5 + 8);
  puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar4 * 5];
  puVar2 = (le<ushort>* )(unsigned)0x0;
  while (puVar1 = puVar5, puVar1 != (le<ushort>* )(unsigned)0x0) {
    ar6_00 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar5 + 6));
    ar5_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 6));
    if ((ar5_00 == (le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar5 + 8) + (int)ar6_00)) ||
       (ar6_00 == (le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(puVar1 + 8) + (int)ar5_00))) {
      puVar5 = (le<ushort>* )(unsigned)0x0;
      puVar2 = puVar1;
    }
    else {
      puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
    }
  }
  iVar4 = (int)(short)ar4;
  puVar3 = ((le<undefined4>* )(unsigned)0x8c275400) + iVar4 * 5;
  puVar5 = ar5;
  if (puVar2 != (le<ushort>* )(unsigned)0x0) {
    do {
      ar5 = puVar2;
      if (*(le<int>* )(unsigned)(ar5 + 6) == *(le<int>* )(unsigned)(puVar5 + 6) + *(le<int>* )(unsigned)(puVar5 + 8)) {
        *(le<undefined4>* )(unsigned)(ar5 + 6) = *(le<undefined4>* )(unsigned)(puVar5 + 6);
        *(le<int>* )(unsigned)(ar5 + 8) = *(le<int>* )(unsigned)(ar5 + 8) + *(le<int>* )(unsigned)(puVar5 + 8);
      }
      else {
        *(le<int>* )(unsigned)(ar5 + 8) = *(le<int>* )(unsigned)(ar5 + 8) + *(le<int>* )(unsigned)(puVar5 + 8);
      }
      ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e6c(puVar5,ar5_00,ar6_00,ar7); });
      ar5_00 = ((le<undefined4>* )(unsigned)0x8c27540c) + iVar4 * 5;
      ar6_00 = ar5;
      ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar4 * 5,ar5_00,ar5,ar7); });
      puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar4 * 5];
      puVar2 = (le<ushort>* )(unsigned)0x0;
      while (puVar1 = puVar5, puVar1 != (le<ushort>* )(unsigned)0x0) {
        ar5_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar5 + 6));
        ar6_00 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 6));
        if ((ar6_00 == (le<ushort>* )(unsigned)(*(le<int>* )(unsigned)(ar5 + 8) + (int)ar5_00)) ||
           (ar5_00 == (le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(puVar1 + 8) + (int)ar6_00))) {
          puVar5 = (le<ushort>* )(unsigned)0x0;
          puVar2 = puVar1;
        }
        else {
          puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar1 + 4));
        }
      }
      puVar5 = ar5;
    } while (puVar2 != (le<ushort>* )(unsigned)0x0);
    puVar3 = ((le<undefined4>* )(unsigned)0x8c275400) + (short)ar4 * 5;
    (*(le<unsigned>* )(fr0_ - 0x20) = (unsigned)(unsigned long)(puVar3));
  }
  ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c204e92(puVar3 + 2,puVar3 + 3,ar5,ar7); });
  return 0;
}

__asm__(".globl FUN_8c204cfc\n.set FUN_8c204cfc, FUN_8c204cfc_def\n");

}
//@unit 8c204e40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<ushort>*  FUN_8c204e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204e40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* puVar2;
  
  puVar1 = 0x8c47eba8;
  puVar2 = 0x8c47eba8;
  while( true ) {
    if ((le<ushort>* )(unsigned)(0x18000 + (unsigned)0x8c47eba8) <= puVar1) {
      return (le<ushort>* )(unsigned)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0xc;
    puVar2 = puVar2 + 0xc;
  }
  *puVar2 = 1;
  return puVar2;
}

__asm__(".globl FUN_8c204e40\n.set FUN_8c204e40, FUN_8c204e40_def\n");

}
//@unit 8c204e6c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204e6c_def(le<ushort>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204e6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<ushort>* puVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  
  uVar1 = 0xfffe;
  puVar2 = (le<ushort>* )(unsigned)((unsigned)0x8c47eba8 + 0x18000);
  puVar3 = 0x8c47eba8;
  puVar4 = 0x8c47eba8;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (puVar3 < puVar2);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c204e6c\n.set FUN_8c204e6c, FUN_8c204e6c_def\n");

}
//@unit 8c204e92
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204e92_def(le<int>* ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204e92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  
  if (*ar4 == 0) {
    *(le<undefined4>* )(unsigned)(ar6 + 4) = 0;
    *(le<undefined4>* )(unsigned)(ar6 + 8) = 0;
    *ar4 = ar6;
    *ar5 = ar6;
  }
  else {
    iVar1 = *ar4;
    *(le<undefined4>* )(unsigned)(ar6 + 4) = *(le<undefined4>* )(unsigned)(iVar1 + 4);
    *(le<int>* )(unsigned)(ar6 + 8) = *ar4;
    *(le<int>* )(unsigned)(iVar1 + 4) = ar6;
    *ar4 = ar6;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c204e92\n.set FUN_8c204e92, FUN_8c204e92_def\n");

}
//@unit 8c204eb6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204eb6_def(le<int>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204eb6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  undefined4 uVar1;
  
  if (*(le<int>* )(unsigned)(ar6 + 8) == 0) {
    *ar4 = ar5;
    *(le<int>* )(unsigned)(ar5 + 4) = ar6;
    uVar1 = 0;
  }
  else {
    *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar6 + 8) + 4) = ar5;
    *(le<int>* )(unsigned)(ar5 + 4) = ar6;
    uVar1 = *(le<undefined4>* )(unsigned)(ar6 + 8);
  }
  *(le<undefined4>* )(unsigned)(ar5 + 8) = uVar1;
  *(le<int>* )(unsigned)(ar6 + 8) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c204eb6\n.set FUN_8c204eb6, FUN_8c204eb6_def\n");

}
//@unit 8c204ed2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204ed2_def(le<undefined4>* ar4,le<undefined4>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204ed2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar6 + 8);
  if (*(le<int>* )(unsigned)(ar6 + 4) == 0) {
    *ar4 = *(le<undefined4>* )(unsigned)(ar6 + 8);
  }
  else {
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar6 + 4) + 8) = *(le<undefined4>* )(unsigned)(ar6 + 8);
  }
  if (*(le<int>* )(unsigned)(ar6 + 8) == 0) {
    *ar5 = *(le<undefined4>* )(unsigned)(ar6 + 4);
  }
  else {
    *(le<undefined4>* )(unsigned)(iVar1 + 4) = *(le<undefined4>* )(unsigned)(ar6 + 4);
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c204ed2\n.set FUN_8c204ed2, FUN_8c204ed2_def\n");

}
//@unit 8c204f2a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c204f2a_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c204f2a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2084; for (int i_ = 0; i_ < 2084; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint a6;
  int iVar4;
  int a4;
  int iVar5;
  uint uVar6;
  
  puVar1 = ((void *)(unsigned)0x8c20732e);
  iVar2 = (int)(int)0xfffff7fc;
  uVar6 = (uint)0x800;
  if (uVar6 < ar6) {
    *(le<unsigned>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2) = (fr0_ + (int)0xffffffe4) + iVar2;
    do {
      iVar5 = ar5;
      a6 = uVar6;
      (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a9c2(*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),ar5,uVar6,ar7));
      a4 = *(le<int>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2);
      for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
        (vsp = ((unsigned long)(fr0_ - 2084)), (*(code *)xlat((unsigned long)(puVar1)))(a4,iVar5,a6,ar7));
        a4 = a4 + 0x20;
      }
      (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a8e0(ar4,*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),uVar6,ar7));
      ar6 = ar6 - uVar6;
      ar5 = ar5 + uVar6;
      ar4 = ar4 + uVar6;
    } while (uVar6 < ar6);
  }
  *(le<unsigned>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2) = (fr0_ + (int)0xffffffe4) + iVar2;
  uVar6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a9c2((fr0_ + (int)0xffffffe4) + iVar2,ar5,ar6,ar7));
  iVar4 = *(le<int>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2);
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    (vsp = ((unsigned long)(fr0_ - 2084)), (*(code *)xlat((unsigned long)(puVar1)))(iVar4,ar5,uVar6,ar7));
    iVar4 = iVar4 + 0x20;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c20a8e0(ar4,*(le<undefined4>* )(unsigned)((int)&(*(le<int>* )(fr0_ - 0x20)) + iVar2),ar6,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c204f2a\n.set FUN_8c204f2a, FUN_8c204f2a_def\n");

}
//@unit 8c205020
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205020_def(le<int>* ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205020");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  
  if (*ar4 != 0) {
    iVar1 = *ar4;
    iVar3 = 0;
    iVar5 = iVar1;
    do {
      iVar4 = iVar3;
      if (*(le<int>* )(unsigned)(iVar5 + 0xc) < *(le<int>* )(unsigned)(iVar1 + 0xc)) {
        iVar5 = iVar1;
      }
      iVar1 = *(le<int>* )(unsigned)(iVar1 + 8);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    if (1 < iVar3) {
      if (*ar5 != iVar5) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(ar4,ar5,iVar5,ar7); });
        ain0 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204eb6(ar5,iVar5,*ar5,ar7); });
      }
      iVar4 = iVar4 + -1;
      iVar5 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar1 = *ar4;
          iVar2 = 0;
          ar6_00 = iVar1;
          if (0 < iVar3) {
            do {
              ar6_00 = *(le<int>* )(unsigned)(ar6_00 + 8);
              iVar2 = iVar2 + 1;
              if (*(le<int>* )(unsigned)(iVar1 + 0xc) < *(le<int>* )(unsigned)(ar6_00 + 0xc)) {
                iVar1 = ar6_00;
              }
            } while (iVar2 < iVar3);
          }
          if (ar6_00 != iVar1) {
            ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(ar4,ar5,iVar1,ar7); });
            ain0 = ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204eb6(ar5,iVar1,ar6_00,ar7); });
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  return ain0;
}

__asm__(".globl FUN_8c205020\n.set FUN_8c205020, FUN_8c205020_def\n");

}
//@unit 8c2050cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2050cc_def(le<int>* ar4,int ar5,le<undefined4>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2050cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  le<undefined4>* ar6_00;
  int iVar8;
  le<ushort>* puVar9;
  
  iVar8 = *ar4;
  puVar9 = (le<ushort>* )(unsigned)*ar6;
  if ((iVar8 == 0) || (iVar3 = ar5, puVar9 == (le<ushort>* )(unsigned)0x0)) {
    return 0;
  }
  do {
    uVar1 = *puVar9;
    iVar7 = 0;
    if ((((uVar1 & 0x20) != 0) || ((uVar1 & 0x40) != 0)) ||
       (((uVar1 & 2) == 0 &&
        (((0x80 & uVar1) != 0 || (((uVar1 & 2) == 0 && ((0x100 & uVar1) != 0))))))))
    {
      iVar7 = 1;
    }
    uVar1 = *puVar9;
    uVar5 = (uint)uVar1;
    if (((((int)0x200 & uVar5) != 0) || (((int)0x400 & uVar5) != 0)) ||
       (((uVar1 & 2) == 0 &&
        ((((int)0x800 & uVar5) != 0 ||
         (((uVar1 & 2) == 0 && (((int)0x1000 & uVar5) != 0)))))))) {
      iVar7 = 2;
    }
    if (iVar7 == 0) {
      if (iVar8 == 0) {
        return 0;
      }
      if (*(le<int>* )(unsigned)(iVar8 + 0xc) < *(le<int>* )(unsigned)(puVar9 + 6)) {
        do {
          iVar8 = *(le<int>* )(unsigned)(iVar8 + 8);
          if (iVar8 == 0) {
            return 0;
          }
        } while (*(le<int>* )(unsigned)(iVar8 + 0xc) < *(le<int>* )(unsigned)(puVar9 + 6));
      }
      if (iVar8 == 0) {
        return 0;
      }
      if (puVar9 == (le<ushort>* )(unsigned)0x0) {
        return 0;
      }
      if (*(le<int>* )(unsigned)(puVar9 + 6) < *(le<int>* )(unsigned)(iVar8 + 0xc)) {
        do {
          puVar9 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar9 + 4));
          if (puVar9 == (le<ushort>* )(unsigned)0x0) {
            return 0;
          }
        } while (*(le<int>* )(unsigned)(puVar9 + 6) < *(le<int>* )(unsigned)(iVar8 + 0xc));
      }
    }
    else {
      if (*(le<int>* )(unsigned)(iVar8 + 0xc) + *(le<int>* )(unsigned)(iVar8 + 0x10) == *(le<int>* )(unsigned)(puVar9 + 6)) {
        uVar2 = *(le<uint>* )(unsigned)(iVar8 + 0xc);
        if ((int)uVar2 < 0) {
          uVar2 = ~(~uVar2 + 1 & 0x1f) + 1;
        }
        else {
          uVar2 = uVar2 & 0x1f;
        }
        if (uVar2 != 0) {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e40(uVar5,iVar3,ar6,ar7));
          if (iVar3 == 0) {
            return 3;
          }
          *(le<undefined4>* )(unsigned)(iVar3 + 0xc) = *(le<undefined4>* )(unsigned)(iVar8 + 0xc);
          *(le<uint>* )(unsigned)(iVar8 + 0xc) = *(le<int>* )(unsigned)(iVar8 + 0xc) + 0x1fU & 0xffffffe0;
          iVar4 = *(le<int>* )(unsigned)(iVar8 + 0xc) - *(le<int>* )(unsigned)(iVar3 + 0xc);
          *(le<int>* )(unsigned)(iVar3 + 0x10) = iVar4;
          *(le<int>* )(unsigned)(iVar8 + 0x10) = *(le<int>* )(unsigned)(iVar8 + 0x10) - iVar4;
          if (*(le<int>* )(unsigned)(iVar8 + 4) == 0) {
            (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e92(ar4,ar5,iVar3,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204eb6(ar5,iVar3,*(le<int>* )(unsigned)(iVar8 + 4),ar7));
          }
        }
        iVar3 = *(le<int>* )(unsigned)(puVar9 + 6);
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204f2a(*(le<undefined4>* )(unsigned)(iVar8 + 0xc),iVar3,*(le<undefined4>* )(unsigned)(puVar9 + 8),ar7));
        iVar6 = *(le<int>* )(unsigned)(puVar9 + 6);
        iVar4 = *(le<int>* )(unsigned)(iVar8 + 0xc);
        *(le<int>* )(unsigned)(puVar9 + 6) = iVar4;
        ar6 = (le<undefined4>* )(unsigned)(iVar6 - iVar4);
        *(le<int>* )(unsigned)(iVar8 + 0xc) = *(le<int>* )(unsigned)(iVar8 + 0xc) + *(le<int>* )(unsigned)(puVar9 + 8);
        if (iVar7 == 1) {
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(puVar9 + 10) + 0x1c) = *(le<undefined4>* )(unsigned)(puVar9 + 6);
        }
        else {
          ar6 = (le<undefined4>* )(unsigned)((uint)ar6 >> 2);
          ar7 = (int)ar6 * 4;
          iVar3 = 0;
          *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(puVar9 + 10) + 8) = *(le<undefined4>* )(unsigned)(puVar9 + 6);
          uVar5 = 0;
          do {
            if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(puVar9 + 10) + 0xc + uVar5) != 0) {
              iVar7 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(puVar9 + 10) + 0xc + iVar3);
              *(le<int>* )(unsigned)(iVar7 + 0x1c) = *(le<int>* )(unsigned)(iVar7 + 0x1c) + (int)ar6 * -4;
            }
            uVar5 = uVar5 + 4;
            iVar3 = iVar3 + 4;
          } while (uVar5 < 0x40);
        }
        ar6_00 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar8 + 8));
        if ((ar6_00 != (le<undefined4>* )(unsigned)0x0) &&
           (*(le<int>* )(unsigned)(iVar8 + 0xc) + *(le<int>* )(unsigned)(iVar8 + 0x10) == ar6_00[3])) {
          *(le<int>* )(unsigned)(iVar8 + 0x10) = *(le<int>* )(unsigned)(iVar8 + 0x10) + ar6_00[4];
          iVar3 = ar5;
          ar6 = ar6_00;
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204ed2(ar4,ar5,ar6_00,ar7));
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c204e6c(ar6_00,iVar3,ar6,ar7));
        }
      }
      if ((puVar9 != (le<ushort>* )(unsigned)0x0) && (*(le<int>* )(unsigned)(puVar9 + 6) < *(le<int>* )(unsigned)(iVar8 + 0xc))) {
        do {
          puVar9 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar9 + 4));
          if (puVar9 == (le<ushort>* )(unsigned)0x0) break;
        } while (*(le<int>* )(unsigned)(puVar9 + 6) < *(le<int>* )(unsigned)(iVar8 + 0xc));
      }
    }
    if (puVar9 == (le<ushort>* )(unsigned)0x0) {
      return 0;
    }
    if (iVar8 == 0) {
      return 0;
    }
  } while( true );
}

__asm__(".globl FUN_8c2050cc\n.set FUN_8c2050cc, FUN_8c2050cc_def\n");

}
//@unit 8c2050de
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2050de_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2050de");
  return (unsigned)sh4_interp(0x8c2050de, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2050de\n.set FUN_8c2050de, FUN_8c2050de_def\n");
}
//@unit 8c2052f2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2052f2_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c2052f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  le<ushort>* ar6_00;
  uint uVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* ar6_01;
  int ain0;
  int iVar4;
  int iVar5;
  undefined4 a7;
  
  iVar5 = ar5 + ar6;
  if ((int)ar6 < 0) {
    uVar1 = ~(~ar6 + 1 & 0x1f) + 1;
  }
  else {
    uVar1 = ar6 & 0x1f;
  }
  a7 = 0;
  if (uVar1 != 0) {
    ar6 = ar6 + (0x20 - uVar1);
  }
  iVar2 = (int)(short)ar4;
  ar6_00 = (le<ushort>* )(unsigned)0x0;
  puVar3 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275408))[iVar2 * 5];
  iVar4 = ar5;
  while (puVar3 != (le<ushort>* )(unsigned)0x0) {
    iVar4 = *(le<int>* )(unsigned)(puVar3 + 6);
    if ((((ar5 < iVar4) || (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 <= ar5)) || (iVar5 < iVar4)) ||
       (*(le<int>* )(unsigned)(puVar3 + 8) + iVar4 < iVar5)) {
      puVar3 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar3 + 4));
    }
    else {
      ar6_00 = puVar3;
      puVar3 = (le<ushort>* )(unsigned)0x0;
    }
  }
  if (ar6_00 == (le<ushort>* )(unsigned)0x0) {
    return 3;
  }
  if (*(le<uint>* )(unsigned)(ar6_00 + 8) == ar6) {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204ed2(((le<undefined4>* )(unsigned)0x8c275408) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ar6_00,0); });
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_00,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<int>* )(unsigned)(ar6_00 + 10) = ar7;
    *ar6_00 = 1;
    if ((short)ar4 == 0) {
      *ar6_00 = *ar6_00 | 0x800;
    }
    else {
      *ar6_00 = *ar6_00 | 0x1000;
    }
    if (s0 != 0) {
      *ar6_00 = *ar6_00 | 2;
    }
    if (s4 != 0) {
      *ar6_00 = *ar6_00 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
  }
  else {
    if (*(le<int>* )(unsigned)(ar6_00 + 6) != ar5) {
      if (*(le<int>* )(unsigned)(ar6_00 + 6) + *(le<int>* )(unsigned)(ar6_00 + 8) == iVar5) {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(
                     ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      else {
        ar6_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
        if (ar6_01 == (le<ushort>* )(unsigned)0x0) {
          return 3;
        }
        ain0 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(puVar3,iVar4,iVar5,a7));
        if (ain0 == 0) {
          ({ unsigned long ri0_ = (unsigned long)(0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e6c(ar6_01,iVar4,iVar5,a7); });
          return 3;
        }
        iVar5 = *(le<int>* )(unsigned)(ar6_00 + 8);
        iVar4 = *(le<int>* )(unsigned)(ar6_00 + 6);
        *(le<int>* )(unsigned)(ar6_00 + 8) = ar5 - iVar4;
        *(le<int>* )(unsigned)(ar6_01 + 6) = ar5;
        *(le<uint>* )(unsigned)(ar6_01 + 8) = ar6;
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,ar6_01,a7); });
        *(le<uint>* )(unsigned)(ain0 + 0xc) = ar5 + ar6;
        *(le<uint>* )(unsigned)(ain0 + 0x10) = (iVar5 - ar6) - (ar5 - iVar4);
        ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204eb6(((le<undefined4>* )(unsigned)0x8c27540c) + iVar2 * 5,ain0,(((le<undefined4>* )(unsigned)0x8c27540c))[iVar2 * 5],a7); });
        *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(ar6_01 + 6);
        *(le<int>* )(unsigned)(ar6_01 + 10) = ar7;
        if ((short)ar4 == 0) {
          *ar6_01 = *ar6_01 | 0x800;
        }
        else {
          *ar6_01 = *ar6_01 | 0x1000;
        }
        if (s0 != 0) {
          *ar6_01 = *ar6_01 | 2;
        }
        if (s4 != 0) {
          *ar6_01 = *ar6_01 | 4;
        }
      }
      (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - *(le<int>* )(unsigned)(ar6_01 + 8);
      return 0;
    }
    puVar3 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 48)), FUN_8c204e40(0,iVar4,iVar5,0));
    if (puVar3 == (le<ushort>* )(unsigned)0x0) {
      return 3;
    }
    *(le<undefined4>* )(unsigned)(puVar3 + 6) = *(le<undefined4>* )(unsigned)(ar6_00 + 6);
    *(le<uint>* )(unsigned)(puVar3 + 8) = ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 8) = *(le<int>* )(unsigned)(ar6_00 + 8) - ar6;
    *(le<uint>* )(unsigned)(ar6_00 + 6) = *(le<int>* )(unsigned)(ar6_00 + 6) + ar6;
    ({ unsigned long ri0_ = (unsigned long)(
                 ((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c204e92(((le<undefined4>* )(unsigned)0x8c275400) + iVar2 * 5,((le<undefined4>* )(unsigned)0x8c275404) + iVar2 * 5,puVar3,a7); });
    *(le<undefined4>* )(unsigned)(ar7 + 8) = *(le<undefined4>* )(unsigned)(puVar3 + 6);
    *(le<int>* )(unsigned)(puVar3 + 10) = ar7;
    if ((short)ar4 == 0) {
      *puVar3 = *puVar3 | 0x800;
    }
    else {
      *puVar3 = *puVar3 | 0x1000;
    }
    if (s0 != 0) {
      *puVar3 = *puVar3 | 2;
    }
    if (s4 != 0) {
      *puVar3 = *puVar3 | 4;
    }
    iVar5 = *(le<int>* )(unsigned)(puVar3 + 8);
  }
  (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] = (((le<undefined4>* )(unsigned)0x8c275410))[iVar2 * 5] - iVar5;
  return 0;
}

__asm__(".globl FUN_8c2052f2\n.set FUN_8c2052f2, FUN_8c2052f2_def\n");

}
//@unit 8c205640
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205640_def(le<undefined4>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205640");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 + 0xc);
  if (iVar1 == 8) {
    if ((*(le<uint>* )(unsigned)(ar5 + 0x18) & 1) == 0) {
      *ar4 = 0x1000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = 0x80;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((*(le<uint>* )(unsigned)(ar5 + 0x18) & 1) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = 0x80;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = 0x80;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((*(le<uint>* )(unsigned)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((*(le<uint>* )(unsigned)(ar5 + 0x18) & 1) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(0x800,ar4[1],vr6,vr7));
  ar4[4] = uVar2;
  return 1;
}

__asm__(".globl FUN_8c205640\n.set FUN_8c205640, FUN_8c205640_def\n");

}
//@unit 8c205644
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205644_def(le<undefined4>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205644");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint unaff_r14 = 0;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 + 0xc);
  iVar3 = unaff_r14 + 0x7f;
  if (iVar1 == 8) {
    if ((unaff_r14 & *(le<uint>* )(unsigned)(ar5 + 0x18)) == 0) {
      *ar4 = 0x1000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 0xf90;
    }
    else {
      *ar4 = 0x2000;
      ar4[1] = iVar3;
      ar4[2] = 0x20;
      ar4[3] = 4000;
    }
  }
  else if (iVar1 == 0x10) {
    if ((unaff_r14 & *(le<uint>* )(unsigned)(ar5 + 0x18)) == 0) {
      uVar2 = 0xfc0;
      *ar4 = 0x3000;
      ar4[1] = iVar3;
      ar4[2] = 0x40;
    }
    else {
      *ar4 = 0x4000;
      uVar2 = 0xfe0;
      ar4[1] = iVar3;
      ar4[2] = 0x60;
    }
    ar4[3] = uVar2;
  }
  else {
    if (iVar1 == 0x20) {
      if ((unaff_r14 & *(le<uint>* )(unsigned)(ar5 + 0x18)) == 0) {
        *ar4 = 0x5000;
        ar4[1] = 0x100;
        ar4[2] = 0x100;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x6000;
      ar4[1] = 0x200;
      uVar2 = 0xf60;
      ar4[2] = 0x160;
    }
    else {
      if (iVar1 != 0x40) {
        return 0;
      }
      if ((unaff_r14 & *(le<uint>* )(unsigned)(ar5 + 0x18)) == 0) {
        *ar4 = 0x7000;
        ar4[1] = 0x400;
        ar4[2] = 0x400;
        ar4[3] = 0x1000;
        goto LAB_8c205756;
      }
      *ar4 = 0x8000;
      ar4[1] = 0x800;
      uVar2 = 0xd60;
      ar4[2] = 0x560;
    }
    ar4[3] = uVar2;
  }
LAB_8c205756:
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c(0x800,ar4[1],vr6,vr7));
  ar4[4] = uVar2;
  return 1;
}

__asm__(".globl FUN_8c205644\n.set FUN_8c205644, FUN_8c205644_def\n");

}
//@unit 8c205768
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<ushort>*  FUN_8c205768_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205768");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<ushort>* puVar1;
  le<ushort>* puVar2;
  
  puVar1 = 0x8c496ba8;
  puVar2 = 0x8c496ba8;
  while( true ) {
    if ((le<ushort>* )(unsigned)(0x13000 + (unsigned)0x8c496ba8) <= puVar1) {
      return (le<ushort>* )(unsigned)0;
    }
    if ((*puVar1 & 1) == 0) break;
    puVar1 = puVar1 + 0x26;
    puVar2 = puVar2 + 0x26;
  }
  *puVar2 = 1;
  return puVar2;
}

__asm__(".globl FUN_8c205768\n.set FUN_8c205768, FUN_8c205768_def\n");

}
//@unit 8c2057c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2057c0_def(le<ushort>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2057c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  le<ushort>* puVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  
  uVar1 = 0xfffe;
  puVar2 = (le<ushort>* )(unsigned)((unsigned)0x8c496ba8 + 0x13000);
  puVar3 = 0x8c496ba8;
  puVar4 = 0x8c496ba8;
  do {
    if (puVar3 == ar4) {
      *puVar4 = *puVar4 & (ushort)uVar1;
    }
    puVar3 = puVar3 + 0x26;
    puVar4 = puVar4 + 0x26;
  } while (puVar3 < puVar2);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2057c0\n.set FUN_8c2057c0, FUN_8c2057c0_def\n");

}
//@unit 8c2057e6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2057e6_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2057e6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *ar4;
  }
  *(le<int>* )(unsigned)(ar5 + 4) = iVar1;
  *ar4 = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2057e6\n.set FUN_8c2057e6, FUN_8c2057e6_def\n");

}
//@unit 8c2057f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2057f8_def(le<int>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2057f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *ar4;
  iVar2 = 0;
  while (iVar1 = iVar3, iVar1 != 0) {
    if (*(le<int>* )(unsigned)(iVar1 + 4) == ar5) {
      iVar3 = 0;
      iVar2 = iVar1;
    }
    else {
      iVar3 = *(le<int>* )(unsigned)(iVar1 + 4);
    }
  }
  if (*ar4 == ar5) {
    *ar4 = *(le<int>* )(unsigned)(ar5 + 4);
  }
  else {
    *(le<undefined4>* )(unsigned)(iVar2 + 4) = *(le<undefined4>* )(unsigned)(ar5 + 4);
  }
  return iVar2;
}

__asm__(".globl FUN_8c2057f8\n.set FUN_8c2057f8, FUN_8c2057f8_def\n");

}
//@unit 8c205860
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<ushort>*  FUN_8c205860_def(undefined4 ar4,int ar5,le<ushort>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205860");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  le<ushort>* puVar3;
  int iVar4;
  le<ushort>* puVar5;
  
  puVar3 = (le<ushort>* )(unsigned)0x0;
  (*(le<int>* )(fr0_ - 0x28)) = ar5;
  (*(le<ushort>*  *)(fr0_ - 0x24)) = ar6;
  iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753ec);
  for (puVar5 = (le<ushort>* )(unsigned)(((le<undefined4>* )(unsigned)0x8c275400))[(short)ar4 * 5]; puVar5 != (le<ushort>* )(unsigned)0x0;
      puVar5 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar5 + 4))) {
    uVar1 = *puVar5;
    if (((((uVar1 & 4) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 0x1800) != 0)) &&
       (((*(le<int>* )(fr0_ - 0x28)) <= *(le<int>* )(unsigned)(puVar5 + 8) && (*(le<int>* )(unsigned)(puVar5 + 8) < iVar4)))) {
      if ((short)ar4 == 0) {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      else {
        iVar2 = *(le<int>* )(unsigned)(puVar5 + 6) - (*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4);
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c204cc0(iVar2,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
      if ((iVar2 != 0) && ((*((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 + 0x14)) & 0xf000) == (*(*(le<ushort>*  *)(fr0_ - 0x24)) & 0xf000))) {
        iVar4 = *(le<int>* )(unsigned)(puVar5 + 8);
        puVar3 = puVar5;
      }
    }
  }
  return puVar3;
}

__asm__(".globl FUN_8c205860\n.set FUN_8c205860, FUN_8c205860_def\n");

}
//@unit 8c205948
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205948_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205948");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char in_T = 0;
  
  if (in_T == '\0') {
    uVar2 = ~(~ain0 + 1 & 0x1f) + 1;
  }
  else {
    uVar2 = ain0 & 0x1f;
  }
  iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c275408);
  if (uVar2 != 0) {
    ar4 = ar4 + (0x20 - uVar2);
  }
  do {
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (ar4 <= *(le<int>* )(unsigned)(iVar1 + 0x10)) {
      iVar5 = *(le<int>* )(unsigned)(iVar1 + 0xc);
      iVar4 = *(le<int>* )(unsigned)(iVar1 + 0x10);
      for (iVar6 = *(le<int>* )(unsigned)(iVar1 + 0xc); iVar6 <= (iVar5 + iVar4) - ar4; iVar6 = iVar6 + 0x20) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20436c(1,(*(le<undefined4>* )(unsigned)(unsigned)0x8c2753f4) + iVar6,ar4,ar7));
        if (iVar3 == 0) {
          return iVar6;
        }
      }
    }
    iVar1 = *(le<int>* )(unsigned)(iVar1 + 8);
  } while( true );
}

__asm__(".globl FUN_8c205948\n.set FUN_8c205948, FUN_8c205948_def\n");

}
//@unit 8c2059be
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2059be_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2059be");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = ((ar4 & 0xfffffff8) >> 1) + (ar4 & 3);
  if ((ar4 & 4) != 0) {
    iVar1 = iVar1 + 0x400000;
  }
  if (0x800000 <= ar4) {
    iVar1 = iVar1 + 0x400000;
  }
  return iVar1;
}

__asm__(".globl FUN_8c2059be\n.set FUN_8c2059be, FUN_8c2059be_def\n");

}
//@unit 8c2059e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2059e0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2059e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0;
  if (ar4 < 0x800000) {
    if (0x400000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1;
  }
  else {
    if (0xc00000 <= ar4) {
      ar4 = ar4 - 0x400000;
      iVar1 = 4;
    }
    iVar1 = (ar4 & 0xfffffffc) * 2 + (ar4 & 3) + iVar1 + 0xff800000;
  }
  return iVar1;
}

__asm__(".globl FUN_8c2059e0\n.set FUN_8c2059e0, FUN_8c2059e0_def\n");

}
//@unit 8c205a40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205a40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205a40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,3,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,vr5,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(8,0,vr6,vr7));
  return uVar2;
}

__asm__(".globl FUN_8c205a40\n.set FUN_8c205a40, FUN_8c205a40_def\n");

}
//@unit 8c205a44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205a44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205a44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0,0,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(8,0,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c205a44\n.set FUN_8c205a44, FUN_8c205a44_def\n");

}
//@unit 8c205a62
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 g2dma_205a62_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("g2dma_205a62");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  short sVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar6 = 0xdd18957;
  *(le<undefined4>* )(unsigned)0x8c4a9ec0 = 0;
  (*(le<int>* )(fr0_ - 0x18)) = (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a876(0,ar5,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a876(4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
  if ((*(le<int>* )(fr0_ - 0x18)) == 0x17fd11db) {
    if (uVar3 == 1) {
      *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
    }
    else if (0x10 < uVar3) {
      *(le<undefined4>* )(unsigned)0x8c4a9bac = 6;
      *(le<undefined4>* )(unsigned)0x8c4a9ec0 = 0x800408;
      uVar6 = 0x15d1c951;
    }
  }
  else {
    *(le<undefined4>* )(unsigned)0x8c4a9bac = 5;
  }
  iVar4 = (int)0x101;
  iVar5 = *(volatile le<undefined4>* )(unsigned)0xa05f689c;
  if (iVar5 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0;
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 3;
      }
      else if (((iVar5 == 4) || (iVar5 == 5)) || (iVar5 == 6)) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0x7f;
        iVar4 = 0x10101;
      }
      else if (iVar5 == 8) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0x1f;
      }
      else if (iVar5 == 9) {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 0xf;
      }
      else {
        *(le<undefined4>* )(unsigned)0x8c4a9bb0 = (int)0x8f;
      }
      goto LAB_8c205bc8;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9bb0 = 1;
  }
  iVar4 = 0;
LAB_8c205bc8:
  puVar2 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844((int)0xa8,uVar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xa0,0x20,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(8,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xe4,3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x48,9,ar6,ar7));
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bc8 & 1) == 0) {
    (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844(0x44,0,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a844(0x44,0x800000,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x5c,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x68,0x2800000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x6c,0x1e00000,ar6,ar7));
  uVar6 = 0x92039;
  sVar1 = 0x110;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x110,0x93f39,ar6,ar7));
    uVar6 = *(le<undefined4>* )(unsigned)0x8c4a9ec0;
    sVar1 = 0x98;
  }
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)sVar1,uVar6,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x4c,(int)0xa0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x74,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x78,0x3f800000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x84,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x30,iVar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xb0,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xb4,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xc0,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0xbc,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x80,7,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x88,0x3727c5a0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))((int)0x8c,0x1203000,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x74,1,ar6,ar7));
  if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
    uVar6 = 0x7df77;
    if (*(le<undefined4>* )(unsigned)0x8c4a9bac == 6) {
      uVar6 = 0x27df77;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(0x7c,uVar6,ar6,ar7));
    iVar4 = 0x200000;
    puVar2 = ((void *)(unsigned)0x8c20731e);
    iVar7 = 0;
    (*(le<undefined4>* )(fr0_ - 0x1c)) = 0;
    iVar5 = 0xa5000000;
    do {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(puVar2)))(iVar5,&(*(le<undefined4>* )(fr0_ - 0x1c)),4,ar7));
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 4;
    } while (iVar7 < iVar4);
    return 1;
  }
  do {
                    
  } while( true );
}

__asm__(".globl g2dma_205a62\n.set g2dma_205a62, g2dma_205a62_def\n");

}
//@unit 8c205d80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c205d80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c205d80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int a4;
  uint uVar3;
  uint uVar4;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xb8,0xff07,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xb4,0x7f7f7f,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xb0,0x7f7f7f,ar6,ar7));
  uVar4 = (uint)0xff;
  uVar3 = (uint)0xfe;
  a4 = (int)0x200;
  do {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(a4,(uVar4 & 0xff) << 8 | uVar3 & 0xff,ar6,ar7));
    uVar4 = uVar4 - 1;
    a4 = a4 + 4;
    uVar3 = uVar3 - 1;
  } while (0x7f < (int)uVar4);
  return uVar2;
}

__asm__(".globl FUN_8c205d80\n.set FUN_8c205d80, FUN_8c205d80_def\n");

}
//@unit 8c205dd4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_205dd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_205dd4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_205dd4\n.set noop_205dd4, noop_205dd4_def\n");

}
//@unit 8c205e00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_HARDWARE_205e00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_HARDWARE_205e00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01439c(ar4,((undefined1 *)(unsigned)0x8c26d2a0),ar6,ar7));
  if ((iVar1 == 0) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01439c(ar5,((undefined1 *)(unsigned)0x8c26d2ac),ar6_00,ar7)), ar6 = ar5, iVar1 == 0)) {
    ar6 = 0;
  }
  return ar6;
}

__asm__(".globl s_HARDWARE_205e00\n.set s_HARDWARE_205e00, s_HARDWARE_205e00_def\n");

}
//@unit 8c205e64
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_r_nCOPYRIGHT_C_NEC_Corporati_205e72");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2092; for (int i_ = 0; i_ < 2092; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int ain0;
  char *pcVar4;
  int iVar5;
  char *ar5_00;
  undefined4 uVar6;
  int iVar7;
  int a7;
  
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c2756b0) == (undefined1 *)(unsigned)0x0) {
    *(le<unsigned>* )0x8c2756b0 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4a9ba8));
    ar5 = 0;
    ar6 = 0x4f4;
    (vsp = ((unsigned long)(fr0_ - 2092)), memset(((undefined1 *)(unsigned)0x8c4a9ba8),0,0x4f4,ar7));
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa09c) = 3;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0a0) = 2;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0a4) = 6;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0a8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0ac) =
       "\r\nCOPYRIGHT        (C) NEC        Corporation 1998\r\n\r\nAll rights reserved by NEC Corporation. This program must be\r\nused solely for the purpose for which it was furnished by NEC\r\nCorporation. No part of this program may be reproduced or\r\ndisclosed to others, in any form, without the prior written\r\npermission of NEC Corporation.\r\nUse of copyright notice does not evidence publication of this\r\nprogram.\r\n\r\nDeveloped by \r\n * Semiconductor Solution Engineering Division\r\n   NEC Corpolation.\r\n * Home Multimedia Development Division\r\n   NEC Corpolation\r\n * Client Server Software Development Division\r\n   NEC Software,Ltd.\r\n"
  ;
  *(le<unsigned>* )0x8c4a9ba8 = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4aa09c));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9be0) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9be4) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9be8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bfc) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c00) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa084) = 0x1f0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa088) = 0x200;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa08c) = 0x210;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa090) = 0x220;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa094) = 0x230;
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x2c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); FUN_8c2073a0(((undefined1 *)(unsigned)0x8c4aa09c),ar5,ar6,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
  pcVar4 = "VSYNCCount";
  uVar6 = 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VSYNCCount",1,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) + -1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bbc) = 0x10000;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc0) = 0x800000;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc4) = 0x800000;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d74) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d70) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d6c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d88) = 3;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e54) = 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d90) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c);
  (vsp = ((unsigned long)(fr0_ - 2092)), FUN_8c20828c(0x800000,pcVar4,uVar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","RegionSize",0x6000,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","ObjListSize",0x7a000,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","ISPParamSize",0x180000,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c44) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","TSPParamSize",0x180000,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c40) = uVar3 & 0xfffff800;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c44) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c44) & 0xfffff800;
  a7 = (uVar1 & 0xfffff800) + (uVar2 & 0xfffff800);
  ain0 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c40) + a7;
  iVar7 = 0;
  iVar5 = 0;
  for (uVar2 = 0; uVar2 < 0x20; uVar2 = uVar2 + 0x10) {
    *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c18) + uVar2) = iVar5;
    *(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c1c) + uVar2) = iVar5 + (uVar1 & 0xfffff800);
    *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c20) + uVar2) = iVar5 + a7;
    *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c24) + uVar2) = ain0 + iVar5;
    *(le<int>* )(unsigned)(iVar7 + -0x73b563c8) = 0x7d0000 - iVar5;
    iVar5 = iVar5 + 0x400000;
    iVar7 = iVar7 + 4;
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fcc) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9efc) = 0xffffffff;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f00) = 0xffffffff;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f04) = 0xffffffff;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f0c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fe0) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fdc) = 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fec) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("VertexBuffer","BufferBase",0xacc00000,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ff0) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("VertexBuffer","BufferSize",0x400000,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c10) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","PoolingTAStatus",0,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","RenderTimeOut",10,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VertexTimeOut",10,a7));
  ar5_00 = "VSYNCTimeOut";
  uVar6 = 10;
  pcVar4 = "RENDER";
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd8) = (vsp = ((unsigned long)(fr0_ - 2092)), s_HARDWARE_205e00("RENDER","VSYNCTimeOut",10,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d80) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d84) = 1;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c14) = 0xf;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc4) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dc8) = 0;
  uVar6 = ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2092)); noop_20b77a(pcVar4,ar5_00,uVar6,a7); });
  return uVar6;
}

__asm__(".globl s_r_nCOPYRIGHT_C_NEC_Corporati_205e72\n.set s_r_nCOPYRIGHT_C_NEC_Corporati_205e72, s_r_nCOPYRIGHT_C_NEC_Corporati_205e72_def\n");

}
//@unit 8c206146
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206146_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206146");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0) != 0) {
    ain0 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_205dd4(ar4,ar5,ar6,ar7); });
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0) = 0;
  }
  return ain0;
}

__asm__(".globl FUN_8c206146\n.set FUN_8c206146, FUN_8c206146_def\n");

}
//@unit 8c206162
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206162_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206162");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_20a840(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 0)), g2dma_205a62(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25d780(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2034c0(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206300(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c205d80(ar4,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa004) = 0x100000;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa010) = 0;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(
                       (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c14)); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c25d7c6((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c18) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c1c) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c20) >> 7,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c24) >> 7); });
  return uVar1;
}

__asm__(".globl FUN_8c206162\n.set FUN_8c206162, FUN_8c206162_def\n");

}
//@unit 8c2062c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2062c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2062c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<undefined4>* )(unsigned)0x8c4a9e1c)))(vr4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c2062c8\n.set FUN_8c2062c8, FUN_8c2062c8_def\n");

}
//@unit 8c206300
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206300_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206300");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined4>* puVar2;
  le<undefined4>* puVar3;
  le<undefined4>* puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20aa40(((void *)(unsigned)0x8c206ff0),ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9d98 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9e5c = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f24 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f28 = 0;
  puVar4 = 0x8c4aa0b0;
  puVar3 = 0x8c4aa104;
  puVar2 = 0x8c4aa0b4;
  uVar6 = 0;
  *(le<undefined4>* )(unsigned)0x8c4aa0b4 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *puVar3 = 0;
  *puVar4 = 0;
  do {
    iVar1 = uVar6 + 0x2c;
    uVar6 = uVar6 + 4;
    *(le<undefined4>* )(unsigned)((int)puVar2 + iVar1) = 0;
  } while (uVar6 < 0x14);
  return uVar5;
}

__asm__(".globl FUN_8c206300\n.set FUN_8c206300, FUN_8c206300_def\n");

}
//@unit 8c206350
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pvr_206350_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206350");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  le<int>* piVar3;
  le<int>* piVar4;
  int iVar5;
  uint uVar6;
  le<int>* piVar7;
  
  piVar3 = 0xa05f8054;
  puVar2 = 0xa05f80e8;
  puVar1 = 0xa05f8044;
  uVar6 = 0;
  piVar7 = 0xa05f8054 + -1;
  while ((*(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) != 5 &&
         (iVar5 = *(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4), iVar5 != -3))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return iVar5;
    }
  }
  *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) = 7;
  piVar4 = 0x8c4a9ee0;
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) != 0x20)) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9be0 != 1) {
      *piVar7 = ((le<undefined4>* )(unsigned)0x8c4a9ee0)[uVar6 & 1] + *(le<undefined4>* )(unsigned)0x8c4a9dc4;
      *piVar3 = piVar4[uVar6 & 1] + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
    }
  }
  else {
    *piVar7 = *(le<undefined4>* )(unsigned)0x8c4a9ee0 + *(le<undefined4>* )(unsigned)0x8c4a9dc4;
    *piVar3 = *(le<undefined4>* )(unsigned)0x8c4a9ee4 + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
  }
  if (*(le<int>* )(unsigned)(0x8c4a9ef8 + uVar6 * 4) == -3) {
    return 0xfffffffd;
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9e54 != 1) {
    return *(le<undefined4>* )(unsigned)0x8c4a9e54;
  }
  *puVar2 = *(le<undefined4>* )(unsigned)0x8c4a9eb0;
  puVar2 = 0x8c4a9e74;
  *puVar1 = *(le<undefined4>* )(unsigned)0x8c4a9e74;
  *(le<undefined4>* )(unsigned)0x8c4a9e54 = 0;
  return (int)puVar2;
}

__asm__(".globl pvr_206350\n.set pvr_206350, pvr_206350_def\n");

}
//@unit 8c206480
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_206480_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 a4;
  le<undefined4>* puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  a4 = 0x10000000;
  puVar3 = ((void *)(unsigned)0x8c202f40);
  uVar2 = 0xf0ffffff;
  puVar1 = 0xa05f8144;
  iVar8 = (int)0x100;
  uVar6 = 0;
  while ((*(le<int>* )(unsigned)(uVar6 * 4 + 0x8c4a9ef8) != 1 || (*(le<undefined4>* )(unsigned)0x8c4a9db8 != 0))) {
    uVar6 = uVar6 + 1;
    if (3 < (int)uVar6) {
      return 1;
    }
  }
  *(le<undefined4>* )(unsigned)0x8c4a9db8 = 1;
  iVar9 = uVar6 * 4;
  *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + iVar9) = 2;
  *(le<undefined4>* )(unsigned)0x8c4a9f10 = uVar6;
  puVar4 = 0xa05f8008;
  *(le<undefined4>* )(unsigned)0x8c4aa0fc = *(volatile le<undefined4>* )(unsigned)0xffd8000c;
  *puVar4 = 1;
  *puVar4 = 0;
  iVar5 = 0x8c4aa024;
  iVar7 = (uVar6 & 1) * 0x20;
  *(volatile le<undefined4>* )(unsigned)0xa05f8124 = *(le<undefined4>* )(unsigned)(0x8c4aa024 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f812c = *(le<undefined4>* )(unsigned)(iVar5 + 4 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8128 = *(le<undefined4>* )(unsigned)(iVar5 + 0xc + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8130 = *(le<undefined4>* )(unsigned)(iVar5 + 0x10 + iVar7);
  *(volatile le<undefined4>* )(unsigned)0xa05f8164 = *(le<undefined4>* )(unsigned)(iVar5 + 8 + iVar7);
  *puVar1 = 0x80000000;
  *(le<undefined4>* )(unsigned)0x8c4a9f14 = 0;
  *(le<undefined4>* )(unsigned)0x8c4a9f18 = 0;
  iVar5 = 0x8c4a9f7c;
  *(le<undefined4>* )(unsigned)0x8c4aa0b8 = 0;
  if (*(le<int>* )(unsigned)(iVar5 + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 1;
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f2c + iVar9),
                              *(le<int>* )(unsigned)(iVar5 + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9f8c + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 2;
    puVar1 = 0x8c4a9fe4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9fe0 == 1) {
      *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 = *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 & uVar2 | 0x1000000;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*puVar1,*(le<undefined4>* )(unsigned)0x8c4a9fe8,0x10));
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f8c + -0x50 + iVar9),
                              *(le<int>* )(unsigned)(0x8c4a9f8c + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  iVar5 = 0x8c4a9f9c;
  if (*(le<int>* )(unsigned)(0x8c4a9f9c + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 4;
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9f4c + iVar9),
                              *(le<int>* )(unsigned)(iVar5 + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9fac + iVar9) != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 8;
    if (*(le<undefined4>* )(unsigned)0x8c4a9fe0 == 1) {
      *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 = *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 & uVar2 | 0x3000000;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)0x8c4a9fe4,*(le<undefined4>* )(unsigned)0x8c4a9fe8,0x10));
      if (iVar5 == iVar8) {
        return 0;
      }
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9fac + -0x50 + iVar9),
                              *(le<int>* )(unsigned)(0x8c4a9fac + iVar9) + 0x20,0x10));
    if (iVar5 == iVar8) {
      return 0;
    }
  }
  if (*(le<int>* )(unsigned)(0x8c4a9fbc + iVar9) == 0) {
    return 1;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9f14 = *(le<undefined4>* )(unsigned)0x8c4a9f14 | 0x10;
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,*(le<undefined4>* )(unsigned)(0x8c4a9fbc + -0x50 + iVar9),
                            *(le<int>* )(unsigned)(0x8c4a9fbc + iVar9) + 0x20,0x10));
  if (iVar5 != iVar8) {
    return 1;
  }
  return 0;
}

__asm__(".globl pvr_206480\n.set pvr_206480, pvr_206480_def\n");

}
//@unit 8c20672a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int pvr_20672a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_20672a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<uint>* puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  le<undefined4>* puVar6;
  uint uVar7;
  uint uVar8;
  
  puVar1 = 0xa05f8008;
  uVar8 = 0;
  puVar6 = 0xa05f8008 + 0x16;
  while ((iVar3 = *(le<int>* )(unsigned)(uVar8 * 4 + 0x8c4a9ef8), iVar3 != 3 || (*(le<undefined4>* )(unsigned)0x8c4a9db4 != 0))) {
    uVar8 = uVar8 + 1;
    if (3 < (int)uVar8) {
      return iVar3;
    }
  }
  uVar7 = uVar8 & 1;
  if ((uVar7 + 1 & *(le<undefined4>* )(unsigned)0x8c4a9d6c) != 0) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c25d0a0(*(le<undefined4>* )(unsigned)0x8c4aa008,*(le<undefined4>* )(unsigned)0x8c4aa00c,0,1));
    *(le<undefined4>* )(unsigned)0x8c4a9d6c = ~(uVar7 + 1) & *(le<undefined4>* )(unsigned)0x8c4a9d6c & 3;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9db4 = 1;
  *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + uVar8 * 4) = 4;
  if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 0x10) != 0) {
    *puVar1 = 2;
    *puVar1 = 0;
  }
  iVar3 = 0x8c4aa01c;
  *(volatile le<undefined4>* )(unsigned)0xa05f802c = *(le<undefined4>* )(unsigned)(0x8c4aa01c + uVar7 * 0x20);
  *(volatile le<undefined4>* )(unsigned)0xa05f8020 = *(le<undefined4>* )(unsigned)(iVar3 + 0x14 + uVar7 * 0x20);
  if (*(le<undefined4>* )(unsigned)0x8c4a9be0 != 1) {
    if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) != 0x20)) {
      uVar5 = *(le<undefined4>* )(unsigned)(0x8c4a9ee0 + uVar7 * 4);
    }
    else {
      uVar5 = *(le<undefined4>* )(unsigned)(0x8c4a9ee0 + *(le<undefined4>* )(unsigned)0x8c4aa10c * 4);
    }
    *puVar6 = uVar5;
  }
  puVar6 = 0xa05f808c;
  puVar1 = 0x8c4a9d60;
  *(volatile le<undefined4>* )(unsigned)0xa05f808c = *(le<undefined4>* )(unsigned)0x8c4a9d60;
  puVar6[-1] = puVar1[-1] & 0xfffffff0;
  puVar1 = 0xa05f8068;
  *(volatile le<undefined4>* )(unsigned)0xa05f8068 = *(le<undefined4>* )(unsigned)0x8c4a9e60;
  puVar1[1] = *(le<undefined4>* )(unsigned)0x8c4a9e64;
  puVar1[-7] = *(le<undefined4>* )(unsigned)0x8c4a9e70;
  puVar1[-8] = *(le<undefined4>* )(unsigned)0x8c4a9e78;
  puVar2 = 0x8c4a9bcc;
  *(le<undefined4>* )(unsigned)0x8c4aa0b4 = 0;
  if ((*puVar2 & 0xffffffed) == 0x20) {
    if (*(le<undefined4>* )(unsigned)0x8c4aa10c == 0) {
      uVar4 = *(le<undefined4>* )(unsigned)0x8c4a9eac;
      uVar7 = 0x20000;
    }
    else {
      uVar4 = *(le<undefined4>* )(unsigned)0x8c4a9eac;
      uVar7 = 0x60000;
    }
    *(volatile le<undefined4>* )(unsigned)0xa05f80f4 = uVar4 | uVar7;
  }
  puVar2 = 0x8c4a9f0c;
  *(le<undefined4>* )(unsigned)0x8c4aa0f4 = *(volatile le<undefined4>* )(unsigned)0xffd8000c;
  *puVar2 = uVar8;
  puVar1 = 0xa05f8014;
  *(le<undefined4>* )(unsigned)0x8c4aa108 = 1;
  *puVar1 = 0xffffffff;
  return (int)puVar2;
}

__asm__(".globl pvr_20672a\n.set pvr_20672a, pvr_20672a_def\n");

}
//@unit 8c2069a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_2069a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_2069a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar4_00;
  bool bVar2;
  undefined4 ar5_00;
  
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f6900) = 8;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e5c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e5c) | 2;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) + 1;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 2) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b8) + 1 & 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c);
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) = ((*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f810c) & 0x400) >> 10;
  }
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 4) == 4) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa10c) == 1)) {
    bVar2 = true;
  }
  else {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) + -1;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) < 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d8c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d90);
      bVar2 = false;
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) == 0) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 0;
    }
  }
  if (!bVar2) {
    (*(le<uint>* )(fr0_ - 0x24)) = 0;
    ar5_00 = 0;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f28) == 0) {
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) == 0) {
        (*(le<int>* )(fr0_ - 0x28)) = 0;
        (*(le<int>* )(fr0_ - 0x30)) = 0;
        (*(le<int>* )(fr0_ - 0x2c)) = 0;
        ar4_00 = 0;
        for ((*(le<int>* )(fr0_ - 0x34)) = 0; (*(le<int>* )(fr0_ - 0x34)) < 4; (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + 1) {
          iVar1 = (*(le<int>* )(fr0_ - 0x34)) * 4;
          if ((-1 < *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1)) &&
             ((*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) & 1) == 0)) {
            if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) == 0) {
              if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) {
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 5;
                if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) != 0) {
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) + 1;
                }
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8008) = 0;
              }
              else {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 1;
                (*(le<uint>* )(fr0_ - 0x24)) = 1;
                if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 2) &&
                   ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8))) {
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) + 1;
                  (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) = 0xffffffff;
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
                  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
                }
              }
            }
            else {
              (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b0) = 1;
              (*(le<uint>* )(fr0_ - 0x24)) = 1;
              if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + iVar1) == 4) &&
                 ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4))) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0bc) + 1;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8008) = 0;
                (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8044) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e74);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c),0,1));
                ar6 = 0;
                ar7 = 1;
                ar4_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008);
                ar5_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c);
                (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c25d0a0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa008),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa00c),0,1));
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x2c))) = 5;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa104) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa104) + 1;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b4) = 0;
              }
              if ((*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x30))) == 2) &&
                 ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) + 1, (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8))) {
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0c0) + 1;
                (vsp = ((unsigned long)(fr0_ - 56)), g2dma_202e82(ar4_00,ar5_00,ar6,ar7));
                *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<int>* )(fr0_ - 0x28))) = 0xffffffff;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
                (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
              }
            }
          }
          (*(le<int>* )(fr0_ - 0x28)) = (*(le<int>* )(fr0_ - 0x28)) + 4;
          (*(le<int>* )(fr0_ - 0x30)) = (*(le<int>* )(fr0_ - 0x30)) + 4;
          (*(le<int>* )(fr0_ - 0x2c)) = (*(le<int>* )(fr0_ - 0x2c)) + 4;
        }
        (*(le<uint>* )(fr0_ - 0x24)) = (*(le<uint>* )(fr0_ - 0x24)) | (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4);
      }
      else {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) + 1;
        ar5_00 = 1;
        if (0x10 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc)) {
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8048) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e78);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f804c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e70);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f8068) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
          (*(volatile le<undefined4>* )(unsigned)(unsigned)0xa05f806c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0cc) = 0;
        }
        (*(le<uint>* )(fr0_ - 0x24)) = 1;
      }
    }
    else {
      (*(le<uint>* )(fr0_ - 0x24)) = 1;
    }
    if ((*(le<uint>* )(fr0_ - 0x24)) == 0) {
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_206350(0,ar5_00,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), pvr_206480((*(le<uint>* )(fr0_ - 0x24)),ar5_00,ar6,ar7));
      if (iVar1 == 0) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 56)), pvr_20672a((*(le<uint>* )(fr0_ - 0x24)),ar5_00,ar6,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 0;
    }
  }
  return 0;
}

__asm__(".globl pvr_2069a0\n.set pvr_2069a0, pvr_2069a0_def\n");

}
//@unit 8c206cfe
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_206cfe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206cfe");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<uint>* puVar2;
  undefined4 uVar3;
  int iVar4;
  le<undefined4>* puVar5;
  int iVar6;
  le<undefined4>* puVar7;
  
  iVar1 = 0x8c4aa0b4;
  if (*(le<int>* )(unsigned)(*(le<undefined4>* )(unsigned)0x8c4a9f10 * 4 + 0x8c4a9ef8) != -1) {
    if (*(le<undefined4>* )(unsigned)0x8c4a9f24 == 0) {
      *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 0x20;
      ((le<undefined4>* )(unsigned)0x8c4a9f10)[*(le<undefined4>* )(unsigned)0x8c4a9f10 + -6] = 3;
    }
    puVar2 = 0x8c4a9f10;
    if ((*(le<undefined4>* )(unsigned)0x8c4a9bb0 & 1) == 0) {
      iVar4 = *(le<int>* )(unsigned)(0x8c4aa034 + (*(le<undefined4>* )(unsigned)0x8c4a9f10 & 1) * 0x20);
    }
    else {
      iVar4 = *(volatile le<undefined4>* )(unsigned)0xa05f8138;
    }
    *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4a9f10 & 1) * 4 + iVar1 + 0x24) = *(volatile le<undefined4>* )(unsigned)0xa05f8138;
    *(le<undefined4>* )(unsigned)0x8c4a9d60 =
         *(le<undefined4>* )(unsigned)0x8c4a9d58 & 0xff000000 |
         (iVar4 - *(le<int>* )(unsigned)(0x8c4aa030 + (*puVar2 & 1) * 0x20)) * 2 & 0xfffff8;
    iVar6 = 0x30;
    puVar5 = (le<undefined4>* )(unsigned)(iVar4 + 0xa5000000);
    puVar7 = 0x8c4a9c50;
    do {
      uVar3 = *puVar7;
      puVar7 = puVar7 + 1;
      iVar6 = iVar6 + -1;
      *puVar5 = uVar3;
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0);
  }
  *(le<undefined4>* )(unsigned)0x8c4a9db8 = 0;
  *(le<int>* )(unsigned)(iVar1 + 0x4c) = *(le<int>* )(unsigned)(iVar1 + 0x48) - *(volatile le<undefined4>* )(unsigned)0xffd8000c;
  return 0x4c;
}

__asm__(".globl pvr_206cfe\n.set pvr_206cfe, pvr_206cfe_def\n");

}
//@unit 8c206e14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206e14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206e14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2084; for (int i_ = 0; i_ < 2084; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar1 = 0x8c4aa0b4;
  iVar5 = (int)(int)0xffffff40;
  if (ar4 == 0) {
    iVar3 = (int)0x2000;
    uVar7 = 0;
    iVar4 = 0;
    do {
      iVar6 = 0x8c4aa034;
      if ((uint)(*(le<int>* )(unsigned)(0x8c4aa034 + uVar7) + iVar3) <
          (uint)(*(le<int>* )(unsigned)(0x8c4aa034 + -0x10 + uVar7) + iVar5)) {
        *(le<int>* )(unsigned)(0x8c4aa034 + iVar4) = *(le<int>* )(unsigned)(0x8c4aa034 + iVar4) + iVar3;
        *(le<int>* )(unsigned)(iVar6 + -0xc + iVar4) = *(le<int>* )(unsigned)(iVar6 + iVar4) + (int)0xc0;
        *(le<undefined4>* )(unsigned)(iVar1 + 0x14) = 0;
      }
      else if (*(le<int>* )(unsigned)(iVar1 + 0x14) != 0) {
        (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c2062c8(3,ar5,ar6,ar7));
      }
      uVar7 = uVar7 + 0x20;
      iVar4 = iVar4 + 0x20;
    } while (uVar7 < 0x40);
  }
  else if (ar4 == 1) {
    iVar6 = (int)(int)0xfffff800;
    iVar3 = 0;
    iVar4 = 0;
    (*(le<undefined4>* )(fr0_ - 0x24)) = 0;
    iVar8 = 0;
    do {
      iVar2 = 0x8c4aa028;
      if ((uint)(*(le<int>* )(unsigned)(0x8c4aa028 + 8 + (*(le<undefined4>* )(fr0_ - 0x24)) * 0x20) + (int)0x140) <
          (uint)(*(le<int>* )(unsigned)(0x8c4aa028 + (*(le<undefined4>* )(fr0_ - 0x24)) * 0x20) + iVar6)) {
        if (*(le<uint>* )(unsigned)(iVar1 + 0x24 + iVar3) < (uint)(*(le<int>* )(unsigned)(0x8c4aa028 + iVar4) + iVar6)) {
          *(le<int>* )(unsigned)(0x8c4aa028 + iVar8) = *(le<int>* )(unsigned)(0x8c4aa028 + iVar8) - (int)0x800;
          *(le<int>* )(unsigned)(0x8c4aa034 + iVar8) = *(le<int>* )(unsigned)(iVar2 + iVar8) + iVar5;
        }
        *(le<undefined4>* )(unsigned)(iVar1 + 0x10) = 0;
      }
      else if (10 < *(le<uint>* )(unsigned)(iVar1 + 0x10)) {
        (vsp = ((unsigned long)(fr0_ - 2084)), FUN_8c2062c8(3,ar5,ar6,ar7));
      }
      iVar4 = iVar4 + 0x20;
      (*(le<undefined4>* )(fr0_ - 0x24)) = (*(le<undefined4>* )(fr0_ - 0x24)) + 1;
      iVar8 = iVar8 + 0x20;
      iVar3 = iVar3 + 4;
    } while ((*(le<undefined4>* )(fr0_ - 0x24)) < 2);
  }
  return 0;
}

__asm__(".globl FUN_8c206e14\n.set FUN_8c206e14, FUN_8c206e14_def\n");

}
//@unit 8c206f76
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206f76_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206f76");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  *(volatile le<undefined4>* )(unsigned)0xa05f6908 = 4;
  piVar2 = 0x8c4a9f10;
  iVar1 = 0x8c4aa0b4;
  *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x20) = *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x20) + 1;
  piVar2[*piVar2 + -6] = -3;
  if (*(le<undefined4>* )(unsigned)0x8c4aa058 == 1) {
    *(le<int>* )(unsigned)(iVar1 + 0x14) = *(le<int>* )(unsigned)(iVar1 + 0x14) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206e14(0,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c206f76\n.set FUN_8c206f76, FUN_8c206f76_def\n");

}
//@unit 8c206faa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206faa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206faa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  
  *(volatile le<undefined4>* )(unsigned)0xa05f6908 = 8;
  piVar2 = 0x8c4aa058;
  iVar1 = 0x8c4aa0b4;
  *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x1c) = *(le<int>* )(unsigned)(0x8c4aa0b4 + 0x1c) + 1;
  if (*piVar2 == 1) {
    *(le<int>* )(unsigned)(iVar1 + 0x10) = *(le<int>* )(unsigned)(iVar1 + 0x10) + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206e14(1,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c206faa\n.set FUN_8c206faa, FUN_8c206faa_def\n");

}
//@unit 8c206fd2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c206fd2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c206fd2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  
  *(volatile le<undefined4>* )(unsigned)0xa05f6908 = 2;
  piVar1 = 0x8c4aa108;
  if (*(le<undefined4>* )(unsigned)0x8c4aa108 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 0x10;
  }
  *piVar1 = 0;
  return 0;
}

__asm__(".globl FUN_8c206fd2\n.set FUN_8c206fd2, FUN_8c206fd2_def\n");

}
//@unit 8c206ff0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_206ff0_def(undefined4 ar4,undefined4 ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_206ff0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<undefined4>* puVar2;
  le<uint>* puVar3;
  le<int>* piVar4;
  le<undefined4>* puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  le<uint>* puVar10;
  uint uVar11;
  
  puVar3 = 0xa05f6900;
  puVar1 = ((void *)(unsigned)0x8c2062c8);
  uVar11 = *(volatile le<undefined4>* )(unsigned)0xa05f6900;
  if (((uVar11 & 8) != 0) && (iVar7 = (vsp = ((unsigned long)(fr0_ - 4)), pvr_2069a0(ar4,ar5,ar6,ar7)), iVar7 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,ar5,ar6,ar7));
  }
  if ((uVar11 & 0x20) != 0) {
    *puVar3 = 0x20;
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 4;
  }
  if ((uVar11 & 4) != 0) {
    *puVar3 = 7;
    *(le<undefined4>* )(unsigned)0x8c4a9db4 = 0;
    piVar4 = 0xffd8000c;
    puVar2 = 0x8c4aa0b4;
    *(le<undefined4>* )(unsigned)0x8c4aa0b4 = 0;
    puVar2[0x11] = puVar2[0x10] - *piVar4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f24 == 0) {
      *(le<undefined4>* )(unsigned)(0x8c4a9ef8 + *(le<int>* )(unsigned)(0x8c4a9ef8 + 0x14) * 4) = 5;
    }
    else {
      *(le<undefined4>* )(unsigned)0x8c4a9f24 = 0;
      puVar5 = 0x8c4a9e78;
      puVar2[6] = 0;
      puVar2 = 0xa05f8048;
      *(volatile le<undefined4>* )(unsigned)0xa05f8048 = *puVar5;
      puVar2[1] = *(le<undefined4>* )(unsigned)0x8c4a9e70;
      *(volatile le<undefined4>* )(unsigned)0xa05f8068 = *(le<undefined4>* )(unsigned)0x8c4a9e60;
      *(volatile le<undefined4>* )(unsigned)0xa05f806c = *(le<undefined4>* )(unsigned)0x8c4a9e64;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 1;
    *(le<undefined4>* )(unsigned)0x8c4aa104 = 0;
  }
  puVar10 = 0xffa0002c;
  uVar9 = 0x80000;
  if ((uVar11 & 0x80000) != 0) {
    uVar8 = *(volatile le<undefined4>* )(unsigned)0xffa0002c;
    *(volatile le<undefined4>* )(unsigned)0xffa0002c = uVar8 & 0xfffffffc;
    puVar6 = ((void *)(unsigned)0x8c203160);
    *puVar3 = uVar9;
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar6)))(uVar8 & 0xfffffffc,uVar9,puVar10,ar7));
    ar6 = puVar10;
  }
  if ((uVar11 & 0x40) != 0) {
    *puVar3 = 0x40;
    *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c | 0x40;
  }
  uVar8 = (uint)0x80;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 1;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x100;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 2;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x200;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 4;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = (uint)0x400;
  if ((uVar11 & uVar8) != 0) {
    *puVar3 = uVar8;
    puVar10 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 8;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar10) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar8 = 0x200000;
  if ((uVar11 & 0x200000) != 0) {
    *puVar3 = 0x200000;
    puVar3 = 0x8c4a9f18;
    *(le<undefined4>* )(unsigned)0x8c4a9f18 = *(le<undefined4>* )(unsigned)0x8c4a9f18 | 0x10;
    if (*(le<undefined4>* )(unsigned)0x8c4a9f14 == *puVar3) {
      (vsp = ((unsigned long)(fr0_ - 4)), pvr_206cfe(uVar8,uVar9,ar6,ar7));
    }
  }
  uVar11 = *(volatile le<undefined4>* )(unsigned)0xa05f6908;
  if (((uVar11 & 4) != 0) && (uVar8 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206f76(uVar8,uVar9,ar6,ar7)), uVar8 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(uVar8,uVar9,ar6,ar7));
  }
  if (((uVar11 & 8) != 0) && (uVar8 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206faa(uVar8,uVar9,ar6,ar7)), uVar8 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(uVar8,uVar9,ar6,ar7));
  }
  if (((uVar11 & 2) != 0) && (iVar7 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c206fd2(uVar8,uVar9,ar6,ar7)), iVar7 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,uVar9,ar6,ar7));
  }
  puVar1 = ((void *)(unsigned)0x8c207334);
  for (uVar11 = 0; (int)uVar11 < 10; uVar11 = uVar11 + 1) {
    if ((int)uVar11 < 0) {
      uVar9 = 1 >> (~uVar11 & 0x1f) + 1;
    }
    else {
      uVar9 = 1 << (uVar11 & 0x1f);
    }
    if ((*(le<undefined4>* )(unsigned)0x8c4a9e5c & uVar9) != 0) {
      *(le<undefined4>* )(unsigned)0x8c4a9e5c = *(le<undefined4>* )(unsigned)0x8c4a9e5c & ~uVar9;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(*(le<undefined4>* )(unsigned)(0x8c4a9de0 + -4 + uVar11 * 8),
                        *(le<undefined4>* )(unsigned)(0x8c4a9de0 + uVar11 * 8),ar6,ar7));
    }
  }
  return 0;
}

__asm__(".globl pvr_206ff0\n.set pvr_206ff0, pvr_206ff0_def\n");

}
//@unit 8c2072b2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2072b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2072b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
                    
                    
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x8c4a9ddc + ar4 * 8))))(*(le<undefined4>* )(unsigned)(0x8c4a9ddc + ar4 * 8 + 4),vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl FUN_8c2072b2\n.set FUN_8c2072b2, FUN_8c2072b2_def\n");

}
//@unit 8c207300
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c207300_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c207300");
  return (unsigned)sh4_interp(0x8c207300, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c207300\n.set FUN_8c207300, FUN_8c207300_def\n");
}
//@unit 8c20731e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20731e_def(le<undefined4>* ar4,le<undefined4>* ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20731e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar6 >> 2;
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (uVar2 != 0);
  return uVar1;
}

__asm__(".globl FUN_8c20731e\n.set FUN_8c20731e, FUN_8c20731e_def\n");

}
//@unit 8c20732e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20732e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20732e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  { extern void host_log(const char*,...); static unsigned c_, l_; c_++; if (c_ % 200000 == 1 || (c_ < 6)) host_log("wb %u ar4=%x (delta %d) vsp=%lx\n", c_, (unsigned)ar4, (int)((unsigned)ar4 - l_), vsp); l_ = (unsigned)ar4; }
  CacheBlockWriteBack(ar4);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c20732e\n.set FUN_8c20732e, FUN_8c20732e_def\n");

}
//@unit 8c207334
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c207334_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c207334");
  return (unsigned)sh4_interp(0x8c207334, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c207334\n.set FUN_8c207334, FUN_8c207334_def\n");
}
//@unit 8c207344
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c207344_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c207344");
  return (unsigned)sh4_interp(0x8c207344, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c207344\n.set FUN_8c207344, FUN_8c207344_def\n");
}
//@unit 8c2073a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2073a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2073a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  le<undefined4>* puVar2;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  puVar1 = 0x8c4a9e58;
  *(le<undefined4>* )(unsigned)0x8c4a9e58 = 0;
  puVar2 = 0x8c4a9ddc;
  *(le<undefined4>* )(unsigned)0x8c4a9ddc = (&(*(undefined1 *)(unsigned)0x8c2078f2));
  puVar2[1] = 0;
  puVar1[-0x1d] = (&(*(undefined1 *)(unsigned)0x8c2078f6));
  puVar1[-0x1c] = 0;
  puVar2[4] = (&(*(undefined1 *)(unsigned)0x8c2078fa));
  puVar2[5] = 0;
  puVar1[-0x19] = (&(*(undefined1 *)(unsigned)0x8c207920));
  puVar1[-0x18] = 0;
  puVar2[8] = (&(*(undefined1 *)(unsigned)0x8c207924));
  puVar2[9] = 0;
  puVar1[-0x15] = (&(*(undefined1 *)(unsigned)0x8c207928));
  puVar1[-0x14] = 0;
  puVar2[0xc] = (&(*(undefined1 *)(unsigned)0x8c20792c));
  puVar2[0xd] = 0;
  puVar1[-0x11] = (&(*(undefined1 *)(unsigned)0x8c207930));
  puVar1[-0x10] = 0;
  puVar2[0x10] = (&(*(undefined1 *)(unsigned)0x8c207934));
  puVar2[0x11] = 0;
  puVar1[-0xd] = (&(*(undefined1 *)(unsigned)0x8c207972));
  puVar1[-0xc] = 0;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2073a0\n.set FUN_8c2073a0, FUN_8c2073a0_def\n");

}
//@unit 8c2073f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c2073f8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2073f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  
  if (ar5 == 0) {
    iVar1 = (int)0x234;
    *(le<unsigned>* )(unsigned)(iVar1 + ar4) = (&(*(undefined1 *)(unsigned)0x8c2078f2));
    return iVar1;
  }
  if (ar5 == 1) {
    iVar1 = (int)0x23c;
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c2078f6));
LAB_8c2074f4:
    *(le<unsigned>* )(unsigned)(iVar1 + ar4) = puVar2;
  }
  else {
    if (ar5 == 2) {
      iVar1 = (int)0x244;
      puVar2 = (&(*(undefined1 *)(unsigned)0x8c2078fa));
    }
    else {
      if (ar5 == 3) {
        iVar1 = (int)0x24c;
        puVar2 = (&(*(undefined1 *)(unsigned)0x8c207920));
        goto LAB_8c2074f4;
      }
      if (ar5 == 4) {
        iVar1 = (int)0x254;
        puVar2 = (&(*(undefined1 *)(unsigned)0x8c207924));
      }
      else {
        if (ar5 == 5) {
          iVar1 = (int)0x25c;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c207928));
          goto LAB_8c2074f4;
        }
        if (ar5 == 6) {
          iVar1 = (int)0x264;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c20792c));
        }
        else {
          if (ar5 == 7) {
            iVar1 = (int)0x26c;
            puVar2 = (&(*(undefined1 *)(unsigned)0x8c207930));
            goto LAB_8c2074f4;
          }
          if (ar5 != 8) {
            return ar5;
          }
          iVar1 = (int)0x274;
          puVar2 = (&(*(undefined1 *)(unsigned)0x8c207934));
        }
      }
    }
    *(le<unsigned>* )(unsigned)(iVar1 + ar4) = puVar2;
  }
  return iVar1;
}

__asm__(".globl FUN_8c2073f8\n.set FUN_8c2073f8, FUN_8c2073f8_def\n");

}
//@unit 8c207502
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c207502_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207502");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte in_MD = 0;
  byte bVar6;
  byte in_RB = 0;
  byte bVar7;
  byte in_BL = 0;
  byte bVar8;
  byte in_FD = 0;
  byte bVar9;
  byte in_M = 0;
  byte extraout_M = 0;
  byte bVar10;
  byte in_Q = 0;
  byte extraout_Q = 0;
  byte bVar11;
  byte in_IMASK = 0;
  byte bVar12;
  byte in_S = 0;
  byte extraout_S = 0;
  byte bVar13;
  byte in_T = 0;
  byte bVar14;
  byte extraout_T = 0;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  bVar8 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar6 = bVar8 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar13 = (byte)((uVar1 & 2) >> 1);
  bVar12 = (byte)((uVar2 & 0xf0) >> 4);
  bVar11 = (byte)(uVar3 >> 8) & 1;
  bVar10 = (byte)((uVar4 & 0x200) >> 9);
  bVar9 = (byte)(((uVar4 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar8 = (bVar8 & 0x10) >> 4;
  bVar7 = (bVar6 & 0x20) >> 5;
  bVar6 = ((bVar6 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 244)), FUN_8c2073f8(ar4,ar5,0,ar7));
    bVar10 = extraout_M;
    bVar11 = extraout_Q;
    bVar13 = extraout_S;
    bVar14 = extraout_T;
  }
  else {
    bVar14 = (ar5 & 0x20000000) != 0;
    iVar5 = (int)0x234;
    *(le<int>* )(unsigned)(ar5 * 8 + 0x234 + ar4) = ar6;
    *(le<undefined4>* )(unsigned)(iVar5 + ar4 + ar5 * 8 + 4) = ar7;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar14 | (uint)bVar13 << 1 | (uint)bVar12 << 4 | (uint)bVar11 << 8 |
          (uint)bVar10 << 9 | (uint)bVar9 << 0xf | (uint)bVar8 << 0x1c | (uint)bVar7 << 0x1d |
         (uint)bVar6 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl FUN_8c207502\n.set FUN_8c207502, FUN_8c207502_def\n");

}
//@unit 8c20757e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20757e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20757e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),0,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c20757e\n.set FUN_8c20757e, FUN_8c20757e_def\n");

}
//@unit 8c20759a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20759a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20759a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_25eca0(1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),1,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c20759a\n.set FUN_8c20759a, FUN_8c20759a_def\n");

}
//@unit 8c2075bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2075bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2075bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), ret_const_1_25eca4(-((ar4 == 0) - 1),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),2,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c2075bc\n.set FUN_8c2075bc, FUN_8c2075bc_def\n");

}
//@unit 8c207620
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207620");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar6_00;
  uint ar7_00;
  
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x2c) == 0)) {
    ar6_00 = *(le<undefined4>* )(unsigned)0x8c4a9e9c >> 0x10;
  }
  else {
    ar6_00 = *(le<undefined4>* )(unsigned)0x8c4a9e9c >> 0x11;
  }
  ar7_00 = ar4 + *(le<undefined4>* )(unsigned)0x8c4a9c08 + *(le<undefined4>* )(unsigned)0x8c4a9c00;
  uVar1 = ar7_00;
  if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) != 1) && ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) != 0)) {
    uVar1 = ((int)(ar4 + (uint)(ar4 < 0)) >> 1) + *(le<undefined4>* )(unsigned)0x8c4a9c08 + *(le<undefined4>* )(unsigned)0x8c4a9c00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + ar6_00;
  }
  if ((int)ar6_00 < (int)uVar1) {
    uVar1 = ar6_00;
  }
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  uVar1 = *(le<undefined4>* )(unsigned)0x8c4a9e90 & 0x3ff0000 | (int)0x3ff & uVar1;
  *(le<undefined4>* )(unsigned)0x8c4a9e90 = uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xc8,uVar1,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl FUN_8c207620\n.set FUN_8c207620, FUN_8c207620_def\n");

}
//@unit 8c2076f6
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2076f6_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2076f6");
  return (unsigned)sh4_interp(0x8c2076f6, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2076f6\n.set FUN_8c2076f6, FUN_8c2076f6_def\n");
}
//@unit 8c207832
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207832_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207832");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),3,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c207832\n.set FUN_8c207832, FUN_8c207832_def\n");

}
//@unit 8c20784e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20784e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20784e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),4,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c20784e\n.set FUN_8c20784e, FUN_8c20784e_def\n");

}
//@unit 8c20786a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20786a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20786a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),5,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c20786a\n.set FUN_8c20786a, FUN_8c20786a_def\n");

}
//@unit 8c207886
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207886_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207886");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),6,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c207886\n.set FUN_8c207886, FUN_8c207886_def\n");

}
//@unit 8c2078a2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2078a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2078a2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),7,ar4,ar5));
  return 0;
}

__asm__(".globl FUN_8c2078a2\n.set FUN_8c2078a2, FUN_8c2078a2_def\n");

}
//@unit 8c2078be
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2078be_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2078be");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),8,ar4,0));
  return 0;
}

__asm__(".globl FUN_8c2078be\n.set FUN_8c2078be, FUN_8c2078be_def\n");

}
//@unit 8c2078d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2078d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2078d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207502((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0),9,ar4,0));
  return 0;
}

__asm__(".globl FUN_8c2078d8\n.set FUN_8c2078d8, FUN_8c2078d8_def\n");

}
//@unit 8c2079a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2079a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2079a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x68,*(le<undefined4>* )(unsigned)0x8c4a9e60,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x6c,*(le<undefined4>* )(unsigned)0x8c4a9e64,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x5c,*(le<undefined4>* )(unsigned)0x8c4a9e6c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x4c,*(le<undefined4>* )(unsigned)0x8c4a9e70,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0x118,*(le<undefined4>* )(unsigned)0x8c4a9ea8,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xf4,*(le<undefined4>* )(unsigned)0x8c4a9eac,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x48,*(le<undefined4>* )(unsigned)0x8c4a9e78,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c2079a0\n.set FUN_8c2079a0, FUN_8c2079a0_def\n");

}
//@unit 8c2079fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2079fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2079fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  do {
  } while (*(le<undefined4>* )(unsigned)0x8c4a9f1c == *(le<undefined4>* )(unsigned)0x8c4a9f1c);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2079fc\n.set FUN_8c2079fc, FUN_8c2079fc_def\n");

}
//@unit 8c207a0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_KAMUI_207a0e_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_KAMUI_207a0e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *ar4_00;
  char *ar5_00;
  uint ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_r_nCOPYRIGHT_C_NEC_Corporati_205e72(ar4,ar5,ar6,ar7));
  if (((int)ar4 < 3) && (-1 < (int)ar4)) {
    ar4_00 = ((undefined1 *)(unsigned)0x8c26d3a8);
    ar5_00 = ((undefined1 *)(unsigned)0x8c26d3b0);
    ar6_00 = ar4 & 3;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) = (vsp = ((unsigned long)(fr0_ - 0)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3b0),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c206162(ar4_00,ar5_00,ar6_00,ar7));
    return 0;
  }
  return 2;
}

__asm__(".globl s_KAMUI_207a0e\n.set s_KAMUI_207a0e, s_KAMUI_207a0e_def\n");

}
//@unit 8c207a9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_DisplayMode_207aaa_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_DisplayMode_207aaa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  int iVar3;
  char *a5;
  undefined4 ar7_00;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c21214e(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3bc),ar4,ar7_00));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3c8),ar7,ar7_00));
  a5 = ((undefined1 *)(unsigned)0x8c26d3d4);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 52)), s_HARDWARE_205e00(((undefined1 *)(unsigned)0x8c26d3a8),((undefined1 *)(unsigned)0x8c26d3d4),ar6,ar7_00));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) = uVar1 & 3;
  if ((uVar1 & 0x42) == 0x42) {
    (*(le<uint>* )(fr0_ - 0x28)) = uVar1;
    (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e24)))(&(*(le<uint>* )(fr0_ - 0x28)),a5,ar6,ar7_00));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) = (*(le<int>* )(fr0_ - 0x24));
    if (((*(le<int>* )(fr0_ - 0x24)) < 0) || (4 < (*(le<int>* )(fr0_ - 0x24)))) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) = 1;
    }
  }
  if ((((ar5 != 5) && (ar5 != 4)) && (ar5 != 3)) && ((ar5 != 1 && (ar5 != 0)))) {
    iVar5 = 1;
  }
  uVar4 = (uint)(iVar2 != 0);
  (*(le<uint>* )(fr0_ - 0x34)) = (uint)(iVar3 != 0);
  if (iVar5 == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd4) = (*(le<uint>* )(fr0_ - 0x34));
    if (uVar1 == 1) {
      iVar2 = 0x1e0;
      (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x280;
      (*(le<undefined4>* )(fr0_ - 0x30)) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = 0x1e0;
    }
    else {
      if (((uVar1 & 1) == 1) || ((uVar1 & 0x2c) == 0)) {
        (*(le<undefined4>* )(fr0_ - 0x30)) = 0;
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x30)) = 1;
      }
      if ((uVar1 & 0x10) == 0) {
        (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x140;
      }
      else {
        (*(le<undefined4>* )(fr0_ - 0x2c)) = 0x280;
      }
      if ((uVar1 & 0x20) == 0) {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = (int)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) +
                       (uint)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4) < 0)) >> 1;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = iVar2;
        }
        else {
          iVar2 = 0xf0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = iVar2;
        }
      }
      else {
        if ((uVar1 & 0x42) == 0x42) {
          iVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa084) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bdc) * 4);
        }
        else {
          iVar2 = 0x1e0;
        }
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ecc) = (int)(iVar2 + (uint)(iVar2 < 0)) >> 1;
      }
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) = uVar1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd0) = ar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bd8) = uVar4;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 1) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25eb60(0x280,0x1e0,ar6,ar7_00));
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 0) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25e884(0x280,0x1e0,ar6,ar7_00));
    }
    else if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bc8) == 2) {
      iVar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25e540(0x280,0x1e0,ar6,ar7_00));
    }
    else {
      iVar5 = 1;
    }
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c25dc60((*(le<undefined4>* )(fr0_ - 0x2c)),iVar2,ar5,(*(le<undefined4>* )(fr0_ - 0x30))));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2079a0((*(le<undefined4>* )(fr0_ - 0x2c)),iVar2,ar5,(*(le<undefined4>* )(fr0_ - 0x30))));
  }
  return iVar5;
}

__asm__(".globl s_DisplayMode_207aaa\n.set s_DisplayMode_207aaa, s_DisplayMode_207aaa_def\n");

}
//@unit 8c207d32
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207d32_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207d32");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r0 = (int)(unsigned long)vin0;
  uint a5;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  if (in_r0 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
    a5 = *(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
    a5 = *(le<undefined4>* )(unsigned)0x8c4a9eb0;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c207d32\n.set FUN_8c207d32, FUN_8c207d32_def\n");

}
//@unit 8c207da0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c207da0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c207da0");
  return (unsigned)sh4_interp(0x8c207da0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c207da0\n.set FUN_8c207da0, FUN_8c207da0_def\n");
}
//@unit 8c207f80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207f80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207f80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21214e(vr4,vr5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c205a40(vr4,vr5,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8,vr6,vr7));
  do {
  } while (*(le<undefined4>* )(unsigned)0x8c4a9f1c == *(le<undefined4>* )(unsigned)0x8c4a9f1c);
  *(le<undefined4>* )(unsigned)0x8c4a9e54 = 1;
  return 0;
}

__asm__(".globl FUN_8c207f80\n.set FUN_8c207f80, FUN_8c207f80_def\n");

}
//@unit 8c207f84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c207f84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c207f84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint ar5_00;
  uint in_r3 = 0;
  int ar4_00;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & in_r3,ar6,ar7));
  ar4_00 = (int)0xe8;
  ar5_00 = *(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c21214e(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c205a40(ar4_00,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74 & 0xfffffffe,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))((int)0xe8,*(le<undefined4>* )(unsigned)0x8c4a9eb0 | 8,ar6,ar7));
  do {
  } while (*(le<undefined4>* )(unsigned)0x8c4a9f1c == *(le<undefined4>* )(unsigned)0x8c4a9f1c);
  *(le<undefined4>* )(unsigned)0x8c4a9e54 = 1;
  return 0;
}

__asm__(".globl FUN_8c207f84\n.set FUN_8c207f84, FUN_8c207f84_def\n");

}
//@unit 8c207fe4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c207fe4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c207fe4");
  return (unsigned)sh4_interp(0x8c207fe4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c207fe4\n.set FUN_8c207fe4, FUN_8c207fe4_def\n");
}
//@unit 8c2081e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c2081e0_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2081e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<uint>* puVar1;
  uint in_r0 = (uint)(unsigned long)vin0;
  
  puVar1 = 0x8c4a9d58;
  *(le<undefined4>* )(unsigned)0x8c4a9d58 = (ar4 & 7) << 0x18;
  if (ar6 != 0) {
    in_r0 = *puVar1 | 0x10000000;
    *puVar1 = in_r0;
  }
  if (ar5 != 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9d58 = *(le<undefined4>* )(unsigned)0x8c4a9d58 | 0x8000000;
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c2081e0\n.set FUN_8c2081e0, FUN_8c2081e0_def\n");

}
//@unit 8c20820a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20820a_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20820a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 1;
  if ((0x2000000 & ar4) != 0) {
    iVar1 = 2;
    if ((0x1000000 & ar4) != 0) {
      iVar1 = 3;
    }
    if ((ar4 & 0x400000) == 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c20820a\n.set FUN_8c20820a, FUN_8c20820a_def\n");

}
//@unit 8c208228
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c208228_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c208228");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar4 & 0x1000000) != 0) {
    iVar1 = ar5 * 4;
    ar5 = ar5 + 1;
    *(le<undefined4>* )(unsigned)(0x8c4a9c50 + iVar1) = ar6;
  }
  return ar5;
}

__asm__(".globl FUN_8c208228\n.set FUN_8c208228, FUN_8c208228_def\n");

}
//@unit 8c20823c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20823c_def(uint ar4,int ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20823c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((0x2000000 & ar4) != 0) {
    iVar2 = ar5;
    if ((ar4 & 0x400000) == 0) {
      *(le<uint>* )(unsigned)(0x8c4a9c50 + ar5 * 4) = 0xffff0000 & ar6;
      ar6 = ar6 << 0x10;
      iVar2 = ar5 + 1;
    }
    ar5 = iVar2 + 1;
    *(le<uint>* )(unsigned)(iVar1 + iVar2 * 4) = ar6;
  }
  return ar5;
}

__asm__(".globl FUN_8c20823c\n.set FUN_8c20823c, FUN_8c20823c_def\n");

}
//@unit 8c208270
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c208270_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c208270");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x8c4a9c50;
  if ((ar4 & 0x2000000) != 0) {
    iVar2 = ar5 + 1;
    *(le<undefined4>* )(unsigned)(0x8c4a9c50 + ar5 * 4) = ar6;
    ar5 = ar5 + 2;
    *(le<undefined4>* )(unsigned)(iVar1 + iVar2 * 4) = ar7;
  }
  return ar5;
}

__asm__(".globl FUN_8c208270\n.set FUN_8c208270, FUN_8c208270_def\n");

}
//@unit 8c20828c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20828c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20828c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<undefined4>* puVar1;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  le<undefined4>* puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  *(le<undefined4>* )(unsigned)0x8c4a9c50 = 0x80800000;
  puVar1 = 0x8c4a9c54;
  *(le<undefined4>* )(unsigned)0x8c4a9c54 = 0x20800000;
  *(le<undefined4>* )(unsigned)0x8c4a9c58 = 0;
  puVar3 = 0x8c4a9c5c;
  uVar2 = 0x40000000;
  *(le<undefined4>* )(unsigned)0x8c4a9c5c = 0x40000000;
  puVar5 = 0x8c4a9c60;
  uVar4 = 0x43820000;
  *(le<undefined4>* )(unsigned)0x8c4a9c60 = 0x43820000;
  uVar6 = 0x3727c5ac;
  puVar1[4] = 0x3727c5ac;
  uVar7 = 0xff000000;
  puVar3[3] = 0xff000000;
  puVar5[3] = 0x43160000;
  *(le<undefined4>* )(unsigned)0x8c4a9c70 = uVar2;
  puVar3[6] = uVar6;
  puVar5[6] = uVar7;
  puVar1 = 0x8c4a9c7c;
  *(le<undefined4>* )(unsigned)0x8c4a9c7c = 0x440c0000;
  *(le<undefined4>* )(unsigned)0x8c4a9c80 = uVar4;
  puVar5[9] = uVar6;
  *(le<undefined4>* )(unsigned)0x8c4a9c88 = uVar7;
  *(le<undefined4>* )(unsigned)0x8c4a9d5c = puVar1[-6];
  *(le<undefined4>* )(unsigned)0x8c4a9d58 = 0x1000000;
  return 0;
}

__asm__(".globl FUN_8c20828c\n.set FUN_8c20828c, FUN_8c20828c_def\n");

}
//@unit 8c208380
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c208380_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c208380");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  le<int>* a7;
  undefined4 ain0;
  
  iVar1 = *ar4;
  (*(le<int>* )(fr0_ - 0x14)) = ar4[1];
  a7 = ((le<int>* )(fr0_ - 0x10));
  ((le<int>* )(fr0_ - 0x10))[0] = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(iVar1 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c68) = *(le<undefined4>* )(unsigned)(iVar1 + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c6c) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c70) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c74) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c78) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c7c) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c80) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c84) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c88) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0x18);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = 0x3c;
  ain0 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c20820a((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),0x3c,&(*(le<int>* )(fr0_ - 0x14)),a7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c2081e0(ar4_00,0,0,a7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c208380\n.set FUN_8c208380, FUN_8c208380_def\n");

}
//@unit 8c208484
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c208484_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c208484");
  return (unsigned)sh4_interp(0x8c208484, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c208484\n.set FUN_8c208484, FUN_8c208484_def\n");
}
//@unit 8c208680
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c208680_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c208680");
  return (unsigned)sh4_interp(0x8c208680, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c208680\n.set FUN_8c208680, FUN_8c208680_def\n");
}
//@unit 8c2087e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2087e4_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2087e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 a7;
  int a5;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(iVar4 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(iVar4 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar4 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),6,*(le<undefined4>* )(unsigned)(iVar4 + 0x10),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar4 + 0x1c),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar3 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar3 + 0x10),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0x18);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar3 + 0x1c),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 0xc);
  a7 = *(le<undefined4>* )(unsigned)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar3 + 3,*(le<undefined4>* )(unsigned)(iVar5 + 0x10),a7));
  a5 = iVar3 + 1;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 0x18);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar5 + 0x1c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,a5,uVar6,a7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,a5,uVar6,a7));
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,a7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c2087e4\n.set FUN_8c2087e4, FUN_8c2087e4_def\n");

}
//@unit 8c208980
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c208980_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c208980");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 a6;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(ain0 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(ain0 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),6,*(le<undefined4>* )(unsigned)(ain0 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(ain0 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(ain0 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar3 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(ain0 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar4 + 0x10),ar7));
  iVar3 = iVar1 + 1;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0x18);
  a6 = *(le<undefined4>* )(unsigned)(ain0 + 0x1c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar3,a6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,iVar3,a6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c208980\n.set FUN_8c208980, FUN_8c208980_def\n");

}
//@unit 8c208b00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c208b00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c208b00");
  return (unsigned)sh4_interp(0x8c208b00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c208b00\n.set FUN_8c208b00, FUN_8c208b00_def\n");
}
//@unit 8c208e00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c208e00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c208e00");
  return (unsigned)sh4_interp(0x8c208e00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c208e00\n.set FUN_8c208e00, FUN_8c208e00_def\n");
}
//@unit 8c2090e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c2090e0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c2090e0");
  return (unsigned)sh4_interp(0x8c2090e0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c2090e0\n.set FUN_8c2090e0, FUN_8c2090e0_def\n");
}
//@unit 8c209380
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c209380_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c209380");
  return (unsigned)sh4_interp(0x8c209380, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c209380\n.set FUN_8c209380, FUN_8c209380_def\n");
}
//@unit 8c209600
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c209600_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c209600");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar4_00;
  int iVar1;
  le<int>* ar7_00;
  undefined4 ain0;
  
  iVar1 = *ar4;
  (*(le<int>* )(fr0_ - 0x14)) = ar4[1];
  ar7_00 = ((le<int>* )(fr0_ - 0x10));
  ((le<int>* )(fr0_ - 0x10))[0] = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(iVar1 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c68) = *(le<undefined4>* )(unsigned)(iVar1 + 0x10);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c6c) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c70) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c74) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c78) = *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x14)) + 0x10);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c7c) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c80) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c84) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0xc);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c88) = *(le<undefined4>* )(unsigned)(((le<int>* )(fr0_ - 0x10))[0] + 0x10);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = 0x3c;
  ain0 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c20820a((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),0x3c,&(*(le<int>* )(fr0_ - 0x14)),ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); FUN_8c2081e0(ar4_00,0,0,ar7_00); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c209600\n.set FUN_8c209600, FUN_8c209600_def\n");

}
//@unit 8c209708
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c209708_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c209708");
  return (unsigned)sh4_interp(0x8c209708, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c209708\n.set FUN_8c209708, FUN_8c209708_def\n");
}
//@unit 8c2098c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2098c0_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c2098c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar7_00;
  int ar5_00;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  iVar4 = *ar4;
  iVar3 = ar4[1];
  iVar5 = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(iVar4 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(iVar4 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar4 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),6,*(le<undefined4>* )(unsigned)(iVar4 + 0x10),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar4 + 0x1c),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar3 + 0x14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar3 + 0x10),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0x18);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar3 + 0x1c),uVar6));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar3 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 0xc);
  ar7_00 = *(le<undefined4>* )(unsigned)(iVar5 + 0x14);
  iVar1 = iVar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208270(uVar2,iVar3 + 3,*(le<undefined4>* )(unsigned)(iVar5 + 0x10),ar7_00));
  ar5_00 = iVar3 + 1;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar3 * 4) = *(le<undefined4>* )(unsigned)(iVar5 + 0x18);
  uVar6 = *(le<undefined4>* )(unsigned)(iVar5 + 0x1c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,ar5_00,uVar6,ar7_00));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,ar5_00,uVar6,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7_00); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c2098c0\n.set FUN_8c2098c0, FUN_8c2098c0_def\n");

}
//@unit 8c209a40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c209a40_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c209a40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ain0;
  int iVar4;
  undefined4 ar6_00;
  
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  ain0 = *ar4;
  iVar3 = ar4[1];
  iVar4 = ar4[2];
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c54) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d50);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c58) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d54);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c5c) = *(le<undefined4>* )(unsigned)(ain0 + 4);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c60) = *(le<undefined4>* )(unsigned)(ain0 + 8);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c64) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d4c),6,*(le<undefined4>* )(unsigned)(ain0 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(ain0 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(ain0 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(ain0 + 0x10),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar3 + 0x18);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar1 + 1,*(le<undefined4>* )(unsigned)(iVar3 + 0x1c),ar7));
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 4);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 1) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 8);
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + (iVar1 + 2) * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20823c(uVar2,iVar1 + 3,*(le<undefined4>* )(unsigned)(iVar4 + 0x10),ar7));
  iVar3 = iVar1 + 1;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9c50) + iVar1 * 4) = *(le<undefined4>* )(unsigned)(iVar4 + 0x18);
  ar6_00 = *(le<undefined4>* )(unsigned)(iVar4 + 0x1c);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c208228(uVar2,iVar3,ar6_00,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d48) << 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20820a(uVar2,iVar3,ar6_00,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2081e0(uVar2,0,0,ar7); });
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) = *(le<undefined4>* )(unsigned)(ain0 + 0xc);
  return 0;
}

__asm__(".globl FUN_8c209a40\n.set FUN_8c209a40, FUN_8c209a40_def\n");

}
//@unit 8c209c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c209c00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c209c00");
  return (unsigned)sh4_interp(0x8c209c00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c209c00\n.set FUN_8c209c00, FUN_8c209c00_def\n");
}
//@unit 8c209e80
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c209e80_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c209e80");
  return (unsigned)sh4_interp(0x8c209e80, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c209e80\n.set FUN_8c209e80, FUN_8c209e80_def\n");
}
//@unit 8c20a104
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a104_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a104");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_r3 = 0;
  uint ar5_00;
  
  if ((in_r3 & ar4) != 0) {
    ar4 = 0;
  }
  if ((0x7fffff00 & ar4) != 0) {
    ar4 = (uint)0xff;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9c4c = ar4;
  ar5_00 = *(le<undefined4>* )(unsigned)0x8c4a9e78 & 0xff00ffff | (ar4 & 0xff) << 0xf;
  *(le<undefined4>* )(unsigned)0x8c4a9e78 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x48,ar5_00,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a104\n.set FUN_8c20a104, FUN_8c20a104_def\n");

}
//@unit 8c20a13a
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20a13a_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20a13a");
  return (unsigned)sh4_interp(0x8c20a13a, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20a13a\n.set FUN_8c20a13a, FUN_8c20a13a_def\n");
}
//@unit 8c20a156
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c20a156_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a156");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xbc,s0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xc0,s4,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a156\n.set FUN_8c20a156, FUN_8c20a156_def\n");

}
//@unit 8c20a16e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a16e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a16e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xb0,s0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a16e\n.set FUN_8c20a16e, FUN_8c20a16e_def\n");

}
//@unit 8c20a1c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a1c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a1c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xb4,s0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a1c0\n.set FUN_8c20a1c0, FUN_8c20a1c0_def\n");

}
//@unit 8c20a1d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20a1d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20a1d0");
  return (unsigned)sh4_interp(0x8c20a1d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20a1d0\n.set FUN_8c20a1d0, FUN_8c20a1d0_def\n");
}
//@unit 8c20a1e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20a1e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20a1e4");
  return (unsigned)sh4_interp(0x8c20a1e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20a1e4\n.set FUN_8c20a1e4, FUN_8c20a1e4_def\n");
}
//@unit 8c20a238
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a238_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a238");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0xb8,ar4,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a238\n.set FUN_8c20a238, FUN_8c20a238_def\n");

}
//@unit 8c20a280
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a280_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a280");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  if ((ar4 & 0xfffffffc) == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9c48 = ar4;
    (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844((int)0x108,ar4,vr6,vr7));
  }
  return 0;
}

__asm__(".globl FUN_8c20a280\n.set FUN_8c20a280, FUN_8c20a280_def\n");

}
//@unit 8c20a284
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a284_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a284");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint in_r3 = 0;
  
  if ((in_r3 & ar4) == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9c48 = ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0x108,ar4,ar6,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c20a284\n.set FUN_8c20a284, FUN_8c20a284_def\n");

}
//@unit 8c20a2aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a2aa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a2aa");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 ar5_00;
  int iVar2;
  int unaff_r12 = 0;
  le<undefined4>* unaff_r13 = 0;
  int ar4_00;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  ar4_00 = (int)0x1000;
  iVar2 = (int)0x400;
  do {
    ar5_00 = *unaff_r13;
    unaff_r13 = unaff_r13 + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
    unaff_r12 = unaff_r12 + 1;
    ar4_00 = ar4_00 + 4;
  } while (unaff_r12 < iVar2);
  return 0;
}

__asm__(".globl FUN_8c20a2aa\n.set FUN_8c20a2aa, FUN_8c20a2aa_def\n");

}
//@unit 8c20a2e2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a2e2_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a2e2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int in_r3 = 0;
  undefined4 ar5_00;
  le<undefined4>* puVar2;
  int ar4_00;
  
  puVar1 = ((void *)(unsigned)0x8c20a844);
  if (in_r3 < ar5) {
    ar5 = (int)0x3ff;
  }
  ar4_00 = ar4 * 4 + (int)0x1000;
  puVar2 = (le<undefined4>* )(unsigned)(ar4 * 4 + ar6);
  for (; ar4 < ar5; ar4 = ar4 + 1) {
    ar5_00 = *puVar2;
    puVar2 = puVar2 + 1;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4_00,ar5_00,ar6,ar7));
    ar4_00 = ar4_00 + 4;
  }
  return 0;
}

__asm__(".globl FUN_8c20a2e2\n.set FUN_8c20a2e2, FUN_8c20a2e2_def\n");

}
//@unit 8c20a356
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a356_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a356");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x40,s0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a356\n.set FUN_8c20a356, FUN_8c20a356_def\n");

}
//@unit 8c20a366
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20a366_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20a366");
  return (unsigned)sh4_interp(0x8c20a366, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20a366\n.set FUN_8c20a366, FUN_8c20a366_def\n");
}
//@unit 8c20a420
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a420_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a420");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)((&(*(le<undefined4>* )(unsigned)(unsigned)0x8c2756c0))[ar5])))(ar4,ar5,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c50) & 0xfff00000;
  return uVar1;
}

__asm__(".globl FUN_8c20a420\n.set FUN_8c20a420, FUN_8c20a420_def\n");

}
//@unit 8c20a482
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a482_def(uint ar4,uint ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20a482");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((int)ar4 <= (int)ar6) && ((int)ar5 <= (int)ar7)) {
    uVar1 = (uint)0x7ff;
    if ((int)uVar1 < (int)ar6) {
      ar6 = uVar1;
    }
    if ((int)uVar1 < (int)ar7) {
      ar7 = uVar1;
    }
    if (*(le<undefined4>* )(unsigned)0x8c4a9bd0 == 4) {
      ar6 = ar6 & 0xfffffffe;
      ar7 = ar7 & 0xfffffffe;
      ar4 = ar4 + 1 & 0xfffffffe;
      ar5 = ar5 + 1 & 0xfffffffe;
    }
    *(le<undefined4>* )(unsigned)0x8c4a9e60 = ar4 & uVar1 | (ar6 & uVar1) << 0x10;
    *(le<undefined4>* )(unsigned)0x8c4a9e64 = (ar7 & uVar1) << 0x10 | ar5 & uVar1;
    return 0;
  }
  return 0xdddd;
}

__asm__(".globl FUN_8c20a482\n.set FUN_8c20a482, FUN_8c20a482_def\n");

}
//@unit 8c20a52c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a52c_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a52c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  le<int>* piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(le<undefined4>* )(unsigned)0x8c4a9be4 == 1) {
    iVar4 = *(le<undefined4>* )(unsigned)0x8c4a9e70;
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4a9be8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc4 = *(le<undefined4>* )(unsigned)0x8c4a9dc4 + iVar3 * iVar4 * -8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc8 = *(le<undefined4>* )(unsigned)0x8c4a9dc8 + iVar3 * iVar4 * -8;
  }
  if (ar4 == 0) {
    *(le<undefined4>* )(unsigned)0x8c4a9be8 = 0;
  }
  else if (ar4 == 1) {
    if (((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 1) == 1) || ((*(le<undefined4>* )(unsigned)0x8c4a9bcc & 0x20) != 0)) {
      *(le<undefined4>* )(unsigned)0x8c4a9be8 = 0x10;
    }
    else {
      *(le<undefined4>* )(unsigned)0x8c4a9be8 = 8;
    }
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4a9be8 * *(le<undefined4>* )(unsigned)0x8c4a9e70 * 8;
    *(le<undefined4>* )(unsigned)0x8c4a9dc4 = *(le<undefined4>* )(unsigned)0x8c4a9dc4 + iVar3;
    *(le<undefined4>* )(unsigned)0x8c4a9dc8 = iVar3 + *(le<undefined4>* )(unsigned)0x8c4a9dc8;
  }
  uVar6 = *(le<undefined4>* )(unsigned)0x8c4a9e6c & 0xfff003ff;
  piVar2 = 0x8c4a9be8;
  if (*(le<undefined4>* )(unsigned)0x8c4a9be8 < *(le<undefined4>* )(unsigned)0x8c4a9c00) {
    piVar2 = 0x8c4a9c00;
  }
  uVar5 = *(le<undefined4>* )(unsigned)0x8c4a9bf0 - *piVar2;
  if (*(le<undefined4>* )(unsigned)0x8c4a9bf0 < *(le<undefined4>* )(unsigned)0x8c4a9c00 + uVar5) {
    uVar5 = *(le<undefined4>* )(unsigned)0x8c4a9bf0 - *(le<undefined4>* )(unsigned)0x8c4a9be8;
  }
  if (*(le<undefined4>* )(unsigned)0x8c4a9bf0 < uVar5) {
    *(le<undefined4>* )(unsigned)0x8c4a9bf0 = uVar5;
  }
  *(le<undefined4>* )(unsigned)0x8c4a9e6c = (uVar5 & (int)0x3ff) << 10 | uVar6;
  puVar1 = ((void *)(unsigned)0x8c20a844);
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x44,0,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0x5c,*(le<undefined4>* )(unsigned)0x8c4a9e6c,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(0x44,*(le<undefined4>* )(unsigned)0x8c4a9e74,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c4a9be4 = ar4;
  if (ar5 != (le<int>* )(unsigned)0x0) {
    *ar5 = *(le<undefined4>* )(unsigned)0x8c4a9be8;
  }
  return 0;
}

__asm__(".globl FUN_8c20a52c\n.set FUN_8c20a52c, FUN_8c20a52c_def\n");

}
//@unit 8c20a6f2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a6f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a6f2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21214e(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c205a40(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20a6f2\n.set FUN_8c20a6f2, FUN_8c20a6f2_def\n");

}
//@unit 8c20a786
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a786_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a786");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)0x8c4a9d90 = ar4 + -1;
  return 0;
}

__asm__(".globl FUN_8c20a786\n.set FUN_8c20a786, FUN_8c20a786_def\n");

}
//@unit 8c20a790
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a790_def(le<uint>* ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a790");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876((int)0xc4,ar5,ar6,ar7));
  uVar2 = (uint)0x3ff;
  *ar4 = uVar1 & uVar2;
  *ar5 = uVar1 >> 0x10 & uVar2;
  return 0;
}

__asm__(".globl FUN_8c20a790\n.set FUN_8c20a790, FUN_8c20a790_def\n");

}
//@unit 8c20a7e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a7e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a7e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((*(le<undefined4>* )(unsigned)0x8c4a9fdc != 1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203298(*(le<undefined4>* )(unsigned)0x8c4a9fd8,ar5,ar6,ar7)), iVar1 != 1)) {
    return 0x11;
  }
  return 0;
}

__asm__(".globl FUN_8c20a7e0\n.set FUN_8c20a7e0, FUN_8c20a7e0_def\n");

}
//@unit 8c20a840
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_20a840_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_20a840");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_20a840\n.set noop_20a840, noop_20a840_def\n");

}
//@unit 8c20a844
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_20a844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_20a844");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0xa05f8000) = ar5;
  return 1;
}

__asm__(".globl pvr_20a844\n.set pvr_20a844, pvr_20a844_def\n");

}
//@unit 8c20a84e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a84e_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a84e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint uVar2;
  code *pcVar3;
  
  puVar1 = ((void *)(unsigned)0x8c20732e);
  pcVar3 = ((void *)0x8c20732e);
  uVar2 = ar4 + ar5;
  for (; ar4 <= uVar2; ar4 = ar4 + 0x20) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,pcVar3,vr6,vr7));
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c20a84e\n.set FUN_8c20a84e, FUN_8c20a84e_def\n");

}
//@unit 8c20a85a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a85a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a85a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  uint unaff_r13 = 0;
  uint unaff_r14 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c20732e);
  for (; unaff_r14 <= unaff_r13; unaff_r14 = unaff_r14 + 0x20) {
    in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,ar5,ar6,ar7));
  }
  return in_r0 = 0;
}

__asm__(".globl FUN_8c20a85a\n.set FUN_8c20a85a, FUN_8c20a85a_def\n");

}
//@unit 8c20a876
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 pvr_20a876_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("pvr_20a876");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa05f8000 + ar4);
}

__asm__(".globl pvr_20a876\n.set pvr_20a876, pvr_20a876_def\n");

}
//@unit 8c20a87c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a87c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a87c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20731e(ar4 + 0xa5000000,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c20a87c\n.set FUN_8c20a87c, FUN_8c20a87c_def\n");

}
//@unit 8c20a892
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a892_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a892");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20731e(ar4,ar5 + 0xa5000000,ar6,ar7));
  return 1;
}

__asm__(".globl FUN_8c20a892\n.set FUN_8c20a892, FUN_8c20a892_def\n");

}
//@unit 8c20a8e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a8e0_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a8e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  int iVar1;
  uint ar6_00;
  uint ar6_01;
  uint ar5_00;
  byte in_IMASK = 0;
  char in_S = 0;
  byte in_T = 0;
  
  if ((((ar4 & 0x1f) == 0) && ((ar5 & 0x1f) == 0)) &&
     (((in_T | in_S << 1) & 0xf0) == 0 && (in_IMASK & 0xf) == 0)) {
    ar5_00 = ar6;
    ({ unsigned long ri0_ = (unsigned long)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c20a84e(ar5,ar6,ar6,ar7); });
    ar6_01 = ar6 & 0xffffffe0;
    if (ar6_01 == 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8) = 0;
    }
    else {
      do {
        ar7 = 0x18;
        ar5_00 = ar5;
        ({ extern void host_vram_dma(unsigned,unsigned,unsigned); host_vram_dma(ar4,ar5,ar6_01); }); iVar1 = 0; (*(le<unsigned>* )(fr0_ - 0x24) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x8c47e988));
      } while (iVar1 == 0x100);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x24));
    }
    ar6_00 = ar6 & 0x1f;
    if (ar6_00 != 0) {
      ar5_00 = ar5 + ar6_01;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(ar4 + ar6_01 + -0x5c000000,ar5_00,ar6_00,ar7));
    }
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fdc) == 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c203320((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd8),ar5_00,ar6_00,ar7));
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(ar4 + 0xa4000000,ar5,ar6,ar7));
  }
  return 1;
}

__asm__(".globl FUN_8c20a8e0\n.set FUN_8c20a8e0, FUN_8c20a8e0_def\n");

}
//@unit 8c20a9c2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20a9c2_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20a9c2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20731e(ar4,ar5 + -0x5c000000,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c20a84e(ar4,ar6,ar6_00,ar7); });
  return 1;
}

__asm__(".globl FUN_8c20a9c2\n.set FUN_8c20a9c2, FUN_8c20a9c2_def\n");

}
//@unit 8c20aa40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20aa40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20aa40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 244; for (int i_ = 0; i_ < 244; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  le<undefined4>* puVar6;
  le<undefined4>* puVar7;
  int in_VBR = (void *)0x8cf80000;
  byte in_MD = 0;
  byte in_RB = 0;
  byte in_BL = 0;
  byte in_FD = 0;
  byte in_M = 0;
  byte in_Q = 0;
  byte in_IMASK = 0;
  byte in_S = 0;
  byte in_T = 0;
  
  puVar6 = 0xa05f6930;
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(le<undefined4>* )(unsigned)(0x224 + in_VBR) = ar4;
  *puVar6 = 0;
  puVar7 = 0xa05f6938;
  *(volatile le<undefined4>* )(unsigned)0xa05f6938 = 0;
  *(volatile le<undefined4>* )(unsigned)0xa05f6900 = 0xffffffff;
  *(volatile le<undefined4>* )(unsigned)0xa05f6908 = 0xffffffff;
  *puVar6 = 0x2807ec;
  *puVar7 = 0xe;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         (in_T & 1 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl FUN_8c20aa40\n.set FUN_8c20aa40, FUN_8c20aa40_def\n");

}
//@unit 8c20aacc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20aacc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20aacc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  le<uint>* puVar3;
  le<undefined4>* puVar4;
  le<undefined4>* puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  iVar1 = 0x8c4aa0b4;
  iVar9 = 4;
  iVar6 = 0;
  iVar10 = 0;
  iVar11 = 0;
  do {
    iVar2 = 0x8c4aa030;
    iVar8 = (1 - iVar10) * 0x18;
    *(le<undefined4>* )(unsigned)(ar4 + iVar8) = *(le<undefined4>* )(unsigned)(0x8c4aa030 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 4) = *(le<undefined4>* )(unsigned)(iVar2 + -0xc + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 8) = *(le<undefined4>* )(unsigned)(iVar2 + -0x14 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 0xc) = *(le<undefined4>* )(unsigned)(iVar2 + 4 + iVar6);
    *(le<undefined4>* )(unsigned)(ar4 + iVar8 + 0x10) = *(le<undefined4>* )(unsigned)(iVar2 + -8 + iVar6);
    iVar2 = 0x8c4a9dc4;
    *(le<undefined4>* )(unsigned)(iVar8 + ar4 + 0x14) = *(le<undefined4>* )(unsigned)(iVar1 + 0x24 + iVar11);
    iVar10 = iVar10 + 1;
    puVar4 = (le<undefined4>* )(unsigned)(iVar2 + iVar11);
    iVar11 = iVar11 + 4;
    *(le<undefined4>* )(unsigned)(ar4 + 0x38 + iVar9) = *puVar4;
    puVar3 = 0x8c4a9f08;
    iVar2 = 0x8c4a9ee0;
    iVar9 = iVar9 + -4;
    iVar6 = iVar6 + 0x20;
  } while (iVar10 < 2);
  if (*(le<undefined4>* )(unsigned)0x8c4a9ef0 == 0) {
    puVar3 = (le<uint>* )(unsigned)(0x8c4a9ee0 + 0x28);
    *(le<undefined4>* )(unsigned)(ar4 + 0x30) = *(le<undefined4>* )(unsigned)(0x8c4a9ee0 + (*puVar3 & 1) * 4);
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = *(le<undefined4>* )(unsigned)(iVar2 + (1 - (*puVar3 & 1)) * 4);
  }
  else {
    *(le<undefined4>* )(unsigned)(ar4 + 0x34) = *(le<undefined4>* )(unsigned)((*(le<undefined4>* )(unsigned)0x8c4a9f08 & 1) * 4 + 0x8c4a9ee0);
    *(le<uint>* )(unsigned)(ar4 + 0x30) = puVar3[-9 - (*puVar3 & 1)];
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x40) = *(le<undefined4>* )(unsigned)0x8c4a9e60;
  uVar7 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x44) = *(le<undefined4>* )(unsigned)0x8c4a9e64;
  iVar6 = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x48) = *(le<undefined4>* )(unsigned)(iVar1 + 8);
  *(le<undefined4>* )(unsigned)(ar4 + 0x4c) = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
  *(le<undefined4>* )(unsigned)(ar4 + 0x50) = *(le<undefined4>* )(unsigned)(iVar1 + 0x1c);
  *(le<undefined4>* )(unsigned)(ar4 + 0x54) = *(le<undefined4>* )(unsigned)(iVar1 + 0x20);
  do {
    iVar10 = 0x8c4a9f2c + 4;
    *(le<undefined4>* )(unsigned)(ar4 + 0x58 + uVar7) = *(le<undefined4>* )(unsigned)(0x8c4a9f2c + iVar6);
    iVar9 = 0x8c4aa070;
    *(le<undefined4>* )(unsigned)(ar4 + uVar7 + 0x6c) = *(le<undefined4>* )(unsigned)(iVar10 + iVar6);
    *(le<undefined4>* )(unsigned)(0x80 + ar4 + uVar7) = *(le<undefined4>* )(unsigned)(iVar9 + uVar7);
    puVar4 = (le<undefined4>* )(unsigned)(iVar1 + 0x2c + uVar7);
    puVar5 = (le<undefined4>* )(unsigned)(0x94 + ar4 + uVar7);
    uVar7 = uVar7 + 4;
    *puVar5 = *puVar4;
    iVar6 = iVar6 + 0x10;
  } while (uVar7 < 0x14);
  *(le<undefined4>* )(unsigned)(ar4 + 0xa8) = *(le<undefined4>* )(unsigned)(iVar1 + 0x4c);
  *(le<undefined4>* )(unsigned)(ar4 + 0xac) = *(le<undefined4>* )(unsigned)(iVar1 + 0x44);
  return 0;
}

__asm__(".globl FUN_8c20aacc\n.set FUN_8c20aacc, FUN_8c20aacc_def\n");

}
//@unit 8c20ad04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20ad04_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20ad04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint ar7_00;
  
  uVar1 = 0;
  if (ar5 == 3) {
    uVar1 = 0x1000000;
  }
  ar7_00 = ar7 - 1U & 0x3f;
  uVar1 = (s0 - 1U & 0x3f) << 8 | ar7_00 | uVar1;
  if (ar6 != 0) {
    uVar1 = 0x10000 | uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0x14c,uVar1,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844((int)0x148,*(le<undefined4>* )(unsigned)(ar4 + 0x1c),ar6,ar7_00));
  return 0;
}

__asm__(".globl FUN_8c20ad04\n.set FUN_8c20ad04, FUN_8c20ad04_def\n");

}
//@unit 8c20ade0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20ade0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20ade0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint ar5_00;
  int iVar1;
  uint ar6_00;
  int iVar2;
  uint ar7_00;
  uint ar7_01;
  uint uVar3;
  uint uVar4;
  uint ain0;
  
  uVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e6c) & 0xfff003ff;
  ar5_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9eac) & 0xffff;
  iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c0c);
  iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c08);
  uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf0);
  if (ar4 == 0) {
    ar5_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9eac) & 0xff00;
  }
  else if ((((ar4 != 1) && (ar4 == 2)) && (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 3) == 0)) &&
          ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x20) != 0 &&
           ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 1) == 1 || (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bcc) & 0x2c) != 0x20)))))) {
    ar5_00 = 0x471;
    iVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c0c) + 0xc;
    iVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c08) + 0xc;
    uVar3 = 0xd6;
  }
  ain0 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9eac) & 0xffff0000 | ar5_00;
  ar6_00 = (iVar1 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c00)) * 0x10000;
  ar7_00 = iVar2 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9c00) | ar6_00;
  ar7_01 = ar7_00;
  ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2079fc(ar4,ar5_00,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x44,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e74) & 0xfffffffe,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xe8,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9eb0) | 8,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xf0,ar7_00,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0x5c,uVar4 | (uVar3 & 0x3ff) << 10,ar6_00,ar7_01));
  (vsp = ((unsigned long)(fr0_ - 4)), pvr_20a844(0xf4,ain0,ar6_00,ar7_01));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e54) = 1;
  return 0;
}

__asm__(".globl FUN_8c20ade0\n.set FUN_8c20ade0, FUN_8c20ade0_def\n");

}
//@unit 8c20aed8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20aed8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20aed8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)0x8c4aa098 = ar4;
  return 0;
}

__asm__(".globl FUN_8c20aed8\n.set FUN_8c20aed8, FUN_8c20aed8_def\n");

}
//@unit 8c20af20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20af20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20af20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined *ar5_00;
  
  ar5_00 = ((undefined1 *)(unsigned)0x8c275714);
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c) >> 0x18;
  iVar1 = 4;
  uVar2 = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c) & 0x3ffffff | 0xe0000000;
  (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c207300(uVar2,ar5_00,0x20,ar7));
    iVar1 = iVar1 + -1;
    uVar2 = uVar2 + 0x20;
    ar5_00 = ar5_00 + 0x20;
  } while (iVar1 != 0);
  uVar2 = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c);
  *(le<unsigned>* )(unsigned long)*(le<unsigned>* )0x8c4aa21c = (unsigned)(uVar2 + 0x80);
  return uVar2 + 0x80;
}

__asm__(".globl FUN_8c20af20\n.set FUN_8c20af20, FUN_8c20af20_def\n");

}
//@unit 8c20af22
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20af22_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20af22");
  return (unsigned)sh4_interp(0x8c20af22, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20af22\n.set FUN_8c20af22, FUN_8c20af22_def\n");
}
//@unit 8c20af76
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20af76_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20af76");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  undefined *puVar3;
  le<undefined4>* puVar4;
  int iVar5;
  int ar5_00;
  undefined4 a5;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 uVar6;
  
  puVar3 = ((void *)(unsigned)0x8c212148);
  iVar1 = 0x8c4aa1a0;
  uVar6 = 0;
  if ((ar4 == 0) || (ar5 == 0)) {
    uVar6 = 0xe;
  }
  else {
    *(le<int>* )(unsigned)(0x8c4aa1a0 + 0x3c) = ar4;
    *(le<int>* )(unsigned)(iVar1 + 0x40) = ar5;
    *(le<undefined4>* )(unsigned)(iVar1 + 0x44) = ar7;
    piVar2 = 0x8c4a9be0;
    *(le<int>* )(unsigned)(iVar1 + 0x18) = ar6;
    *piVar2 = ar6;
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(ar4,ar5,ar6,ar7));
    if (iVar5 == 0x80000000) {
      if (*(le<int>* )(unsigned)(ar4 + 0x18) == *(le<int>* )(unsigned)(ar5 + 0x18)) {
        if (*(le<int>* )(unsigned)(ar4 + 0x14) == *(le<int>* )(unsigned)(ar5 + 0x14)) {
          *(le<undefined4>* )(unsigned)0x8c4a9ee0 = *(le<undefined4>* )(unsigned)(ar4 + 0x1c);
          puVar4 = 0x8c4a9ee8;
          *(le<undefined4>* )(unsigned)0x8c4a9ee8 = 0;
          *(le<undefined4>* )(unsigned)0x8c4a9ee4 = *(le<undefined4>* )(unsigned)(ar5 + 0x1c);
          *(le<undefined4>* )(unsigned)0x8c4a9eec = 0;
          puVar3 = ((void *)(unsigned)0x8c20a844);
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x50,puVar4[-0x1b],ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0x54,*(le<undefined4>* )(unsigned)0x8c4a9e7c,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0x60,*(le<undefined4>* )(unsigned)0x8c4a9ee0,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(100,*(le<undefined4>* )(unsigned)0x8c4a9ee4,ar6_00,ar7_00));
          puVar4 = 0x8c4a9ee0;
          *(le<undefined4>* )(unsigned)0x8c4a9e7c = *(le<undefined4>* )(unsigned)0x8c4a9ee0;
          puVar4[-0x18] = *(le<undefined4>* )(unsigned)0x8c4a9ee4;
          if (ar6 == 1) {
            *(le<undefined4>* )(unsigned)0x8c4a9dc4 = 0;
            *(le<undefined4>* )(unsigned)0x8c4a9dc8 = 0;
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0x50,*(le<undefined4>* )(unsigned)0x8c4a9e7c,ar6_00,ar7_00));
            a5 = *(le<undefined4>* )(unsigned)0x8c4a9e80;
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0x50,*(le<undefined4>* )(unsigned)0x8c4a9e7c,ar6_00,ar7_00));
            a5 = *(le<undefined4>* )(unsigned)0x8c4a9e7c;
          }
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0x54,a5,ar6_00,ar7_00));
          *(le<undefined4>* )(unsigned)0x8c4a9e54 = 1;
          *(le<undefined4>* )(unsigned)0x8c4a9d94 = ar7;
        }
        else {
          uVar6 = 0x10;
        }
      }
      else {
        uVar6 = 0xf;
      }
    }
    else {
      iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2120c0((int)0x800,ar5_00,ar6_00,ar7_00));
      if (iVar5 == 0xb00) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c212140(0x80000000,ar5_00,ar6_00,ar7_00));
        uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c211f40(*(le<undefined4>* )(unsigned)(iVar1 + 0x54),ar5_00,ar6_00,ar7_00));
      }
    }
  }
  return uVar6;
}

__asm__(".globl FUN_8c20af76\n.set FUN_8c20af76, FUN_8c20af76_def\n");

}
//@unit 8c20b160
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20b160_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b160");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *puVar2;
  undefined4 a4;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar3;
  le<undefined4>* puVar4;
  le<int>* piVar5;
  int iVar6;
  uint uVar7;
  
  a4 = 0x10000000;
  puVar2 = ((void *)(unsigned)0x8c202f40);
  uVar1 = 0xf0ffffff;
  uVar7 = 0;
  puVar4 = (le<undefined4>* )(unsigned)(0x8c4a9f2c + *(le<undefined4>* )(unsigned)0x8c4a9f08 * 4);
  piVar5 = (le<int>* )(unsigned)(0x8c4a9f7c + *(le<undefined4>* )(unsigned)0x8c4a9f08 * 4);
  iVar6 = (int)0x100;
  do {
    if ((*piVar5 != 0) && (ar4 != uVar7)) {
      if ((*(le<undefined4>* )(unsigned)0x8c4a9fe0 == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
        *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 = *(le<uint>* )(unsigned)*(le<undefined4>* )(unsigned)0x8c4a9fe4 & uVar1 | uVar7 << 0x18;
        do {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(a4,*(le<undefined4>* )(unsigned)0x8c4a9fe4,*(le<undefined4>* )(unsigned)0x8c4a9fe8,0x10));
        } while (iVar3 == iVar6);
      }
      do {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(a4,*puVar4,*piVar5 + 0x20,0x10));
      } while (in_r0 == iVar6);
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (uVar7 < 5);
  return in_r0 = 0;
}

__asm__(".globl FUN_8c20b160\n.set FUN_8c20b160, FUN_8c20b160_def\n");

}
//@unit 8c20b260
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20b260_def(undefined4 ar4,undefined *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b260");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 ar5_00;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) == 0) {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
    }
    else {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0fc) = (*(volatile le<undefined4>* )(unsigned)(unsigned)0xffd8000c);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f20) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa0b8) = 0;
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fcc) & 0x20) == 0) {
        iVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
        iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
        iVar7 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 0x10;
        iVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 0x10;
        do {
          ar7 = 0x10;
          ar5 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar6 + -0x73b560d4 + iVar4));
          ar6 = *(le<int>* )(unsigned)(iVar5 + -0x73b56084 + iVar7) + 0x20;
          iVar2 = ({ unsigned long t0_ = (unsigned long)((fr0_ + (int)0xffffffd8)); *(le<unsigned>* )((((unsigned long)(fr0_ - 80)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 80)) - 8); sh4_dmac_202f40(0x10000000,ar5,ar6,0x10); });
        } while (iVar2 == 0x100);
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c20b160((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0),ar5,ar6,ar7); });
      }
      else {
        (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
        (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
        ar5 = ((undefined1 *)(unsigned)0x8c26d3f8);
        ar6 = 4;
        (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c20731e(0xe0000000,((undefined1 *)(unsigned)0x8c26d3f8),4,ar7));
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c20b160((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0),ar5,ar6,ar7); });
      }
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  do {
    *(le<unsigned>* )(unsigned)0x8c4a9f20 = 0; goto LAB_8c20b3e0;
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
  } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0) + 1U);
  bVar1 = true;
LAB_8c20b3e0:
  if (bVar1) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
    bVar1 = false;
    do {
      *(le<unsigned>* )(unsigned)0x8c4a9f20 = 0; goto LAB_8c20b468;
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) < 0x15);
    bVar1 = true;
LAB_8c20b468:
    if (bVar1) {
      (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c2062c8(4,ar5,ar6,ar7));
    }
  }
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) + 1 & 3;
  *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 0;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) == 1)) {
    uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(8,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(8,0,ar6,ar7));
    iVar7 = uVar3 * 0x20;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fdc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd8),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd0),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fcc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd4),ar6,ar7));
    ar5_00 = 0x80000000;
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a844(0x144,0x80000000,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 80)), pvr_20a876(0x144,ar5_00,ar6,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) != 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
      *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f28) = 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c20b260\n.set FUN_8c20b260, FUN_8c20b260_def\n");

}
//@unit 8c20b5a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20b5a0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b5a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) = 1;
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) & 1;
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x10) != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(8,2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(8,0,ar6,ar7));
  }
  iVar3 = uVar2 * 0x20;
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x2c,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fe4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x20,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fd0),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x60,ar4[2],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x48,*ar4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x4c,ar4[1],ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x68,ar4[3],ar6,ar7));
  uVar4 = ar4[4];
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x6c,uVar4,ar6,ar7));
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  do {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20b63e;
    (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),uVar4,ar6,ar7));
  } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4));
  bVar1 = true;
LAB_8c20b63e:
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x48,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e78),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x4c,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e70),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x68,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60),ar6,ar7));
    uVar4 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
    (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x6c,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64),ar6,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 0;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),uVar4,ar6,ar7));
    return uVar4;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x8c,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d60),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x88,(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d5c) & 0xfffffff0,ar6,ar7));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 16)), pvr_20a844(0x14,0xffffffff,ar6,ar7));
  return uVar4;
}

__asm__(".globl FUN_8c20b5a0\n.set FUN_8c20b5a0, FUN_8c20b5a0_def\n");

}
//@unit 8c20b708
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20b708_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b708");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if (((*(le<uint>* )(unsigned)(ar4 + 0x18) & 4) == 0) && (*(le<int>* )(unsigned)(ar4 + 4) == 1)) {
    uVar1 = *(le<uint>* )(unsigned)(ar4 + 8) & 0x38000000;
    if (uVar1 == 0) {
      ar4 = 3;
    }
    else if (uVar1 == 0x8000000) {
      ar4 = 1;
    }
    else if (uVar1 == 0x10000000) {
      ar4 = 2;
    }
    *(le<undefined4>* )(unsigned)0x8c4aa110 = *(le<undefined4>* )(unsigned)0x8c4a9e78 & 0xfffffff8 | ar4;
    return 0;
  }
  return 4;
}

__asm__(".globl FUN_8c20b708\n.set FUN_8c20b708, FUN_8c20b708_def\n");

}
//@unit 8c20b77a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_20b77a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_20b77a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_20b77a\n.set noop_20b77a, noop_20b77a_def\n");

}
//@unit 8c20b7a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20b7a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20b7a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  le<int>* piVar3;
  uint uVar4;
  le<le<undefined4>*>* ar5_00;
  le<le<undefined4>*>* ar6_00;
  le<le<undefined4>*>* a7;
  int iVar5;
  
  (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((*(le<undefined4>* )(unsigned)(unsigned)0x8c26d400)));
  (*(le<undefined4>* )(fr0_ - 0x64)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d404);
  (*(le<undefined4>* )(fr0_ - 0x60)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d408);
  (*(le<undefined4>* )(fr0_ - 0x5c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d40c);
  (*(le<undefined4>* )(fr0_ - 0x58)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d410);
  (*(le<undefined4>* )(fr0_ - 0x54)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d414);
  (*(le<undefined4>* )(fr0_ - 0x50)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d418);
  (*(le<undefined4>* )(fr0_ - 0x4c)) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d41c);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 0x40) != 0) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa05c) != 0)) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa064) != 0)) &&
     ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d70) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20af20(ar4,ar5,ar6,ar7));
  }
  iVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4;
  ((le<undefined4>*  *)(fr0_ - 0x34))[0] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560d4);
  ar5_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 2);
  ar6_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 1);
  ((le<undefined4>*  *)(fr0_ - 0x34))[1] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560c4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[2] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560b4);
  a7 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x34)) + 4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[3] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b560a4);
  ((le<undefined4>*  *)(fr0_ - 0x34))[4] = (le<undefined4>* )(unsigned)(iVar5 + -0x73b56094);
  ((le<int>* )(fr0_ - 0x48))[0] = iVar5 + -0x73b56084;
  ((le<int>* )(fr0_ - 0x48))[1] = iVar5 + -0x73b56074;
  ((le<int>* )(fr0_ - 0x48))[2] = iVar5 + -0x73b56064;
  ((le<int>* )(fr0_ - 0x48))[3] = iVar5 + -0x73b56054;
  ((le<int>* )(fr0_ - 0x48))[4] = iVar5 + -0x73b56044;
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560d4) = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218);
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560c4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[1];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560b4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[2];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b560a4) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[3];
  *(le<undefined4>* )(unsigned)(iVar5 + -0x73b56094) = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[4];
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
    (*(le<uint>* )(fr0_ - 0x74)) = 0;
    do {
      if ((int)(*(le<uint>* )(fr0_ - 0x74)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x74)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x74)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(le<uint>* )(fr0_ - 0x74)) * 4;
        iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x74))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(le<int>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x74))] = (iVar1 >> 2) << 2;
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      }
      (*(le<uint>* )(fr0_ - 0x74)) = (*(le<uint>* )(fr0_ - 0x74)) + 1;
    } while ((int)(*(le<uint>* )(fr0_ - 0x74)) < 5);
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    uVar2 = 0;
LAB_8c20b91a:
    if ((int)uVar2 < 0) {
      uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar4 = 1 << (uVar2 & 0x1f);
    }
    if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20b9b4;
    if (*(le<uint>* )(unsigned)(uVar2 * 4 + -0x73b55f20) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2]) {
      *(le<undefined4>* )(unsigned)(uVar2 * 4 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2];
    }
    ar5_00 = (le<le<undefined4>*>* )(unsigned)(uVar2 * 4);
    if ((le<undefined4>* )(unsigned)*((le<uint>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)ar5_00 + (int)((le<int>* )(fr0_ - 0x48)))) <= ar5_00[-0x1ced57e4])
    goto LAB_8c20b9b4;
    uVar2 = 0;
    do {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 5);
    goto LAB_8c20bd1e;
  }
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fcc) & 0x20) == 0) {
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210dfc(((undefined1 *)(unsigned)0x8c4aa218),ar5_00,ar6_00,a7));
    (*(le<uint>* )(fr0_ - 0x78)) = 0;
    do {
      iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
      iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x78))];
      if (iVar1 < 0) {
        iVar1 = iVar1 + 3;
      }
      ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      *(le<int>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = (iVar1 >> 2) << 2;
      ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = 0;
      }
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
        if (*(le<uint>* )(unsigned)(iVar5 + -0x73b55f20) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          *(le<undefined4>* )(unsigned)(iVar5 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))];
        }
        if (*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + iVar5) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          uVar2 = 0;
          do {
            if ((int)uVar2 < 0) {
              uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
            }
            else {
              uVar4 = 1 << (uVar2 & 0x1f);
            }
            if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
              *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
            }
            else {
              (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
              ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
              ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
              (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
              *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
            }
            uVar2 = uVar2 + 1;
          } while ((int)uVar2 < 5);
LAB_8c20bd1e:
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
          break;
        }
      }
      (*(le<uint>* )(fr0_ - 0x78)) = (*(le<uint>* )(fr0_ - 0x78)) + 1;
    } while ((int)(*(le<uint>* )(fr0_ - 0x78)) < 5);
    goto LAB_8c20bd36;
  }
  (*(le<uint>* )(fr0_ - 0x78)) = 0;
  do {
    if ((*(le<uint>* )(fr0_ - 0x78)) != (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)) {
      if ((int)(*(le<uint>* )(fr0_ - 0x78)) < 0) {
        uVar2 = 1 >> (~(*(le<uint>* )(fr0_ - 0x78)) & 0x1f) + 1;
      }
      else {
        uVar2 = 1 << ((*(le<uint>* )(fr0_ - 0x78)) & 0x1f);
      }
      if ((uVar2 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) {
        *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))] = 0;
      }
      else {
        iVar5 = (*(le<uint>* )(fr0_ - 0x78)) * 4;
        piVar3 = ((le<int>* )(fr0_ - 0x48)) + (*(le<uint>* )(fr0_ - 0x78));
        iVar1 = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) - *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<uint>* )(fr0_ - 0x78))];
        if (iVar1 < 0) {
          iVar1 = iVar1 + 3;
        }
        ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
        *(le<int>* )(unsigned)*piVar3 = (iVar1 >> 2) << 2;
        ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
        *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar5 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
        if (*(le<uint>* )(unsigned)(iVar5 + -0x73b55f20) < *(le<uint>* )(unsigned)*piVar3) {
          *(le<undefined4>* )(unsigned)((*(le<uint>* )(fr0_ - 0x78)) * 4 + -0x73b55f20) = *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))];
        }
        if (*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + (*(le<uint>* )(fr0_ - 0x78)) * 4) < *(le<uint>* )(unsigned)((le<int>* )(fr0_ - 0x48))[(*(le<uint>* )(fr0_ - 0x78))]) {
          uVar2 = 0;
          goto LAB_8c20bae4;
        }
      }
    }
    (*(le<uint>* )(fr0_ - 0x78)) = (*(le<uint>* )(fr0_ - 0x78)) + 1;
  } while ((int)(*(le<uint>* )(fr0_ - 0x78)) < 5);
  goto LAB_8c20bb6c;
LAB_8c20b9b4:
  uVar2 = uVar2 + 1;
  if (4 < (int)uVar2) goto LAB_8c20bd36;
  goto LAB_8c20b91a;
LAB_8c20bae4:
  do {
    if (uVar2 == (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)) {
LAB_8c20bb3e:
      *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0;
    }
    else {
      if ((int)uVar2 < 0) {
        uVar4 = 1 >> (~uVar2 & 0x1f) + 1;
      }
      else {
        uVar4 = 1 << (uVar2 & 0x1f);
      }
      if ((uVar4 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) == 0) goto LAB_8c20bb3e;
      (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | uVar2 << 0x18)));
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2],((le<undefined4>*  *)(fr0_ - 0x68)),0x20,a7));
      ar6_00 = (le<le<undefined4>*>* )(unsigned)0x4;
      ar5_00 = (le<le<undefined4>*>* )(unsigned)((undefined1 *)(unsigned)0x8c26d3f8);
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*((le<undefined4>*  *)(fr0_ - 0x34))[uVar2] + 0x20,((undefined1 *)(unsigned)0x8c26d3f8),4,a7));
      *(le<undefined4>* )(unsigned)((le<int>* )(fr0_ - 0x48))[uVar2] = 0x20;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 5);
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2062c8(2,ar5_00,ar6_00,a7));
LAB_8c20bb6c:
  if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) == *((le<undefined4>*  *)(fr0_ - 0x34))[(*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0)]) {
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
    (*(le<unsigned>* )(fr0_ - 0x68) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)((uint)((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x68)) & 0xf0ffffff | ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) & 7) << 0x18)));
    ar5_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x68)));
    ar6_00 = (le<le<undefined4>*>* )(unsigned)0x20;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c20731e(*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,ar5_00,0x20,
                 a7));
  }
LAB_8c20bd36:
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) = 0;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c) + 1 & 1;
  (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5_00,ar6_00,a7));
  return 0;
}

__asm__(".globl FUN_8c20b7a0\n.set FUN_8c20b7a0, FUN_8c20b7a0_def\n");

}
//@unit 8c20bdc0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20bdc0_def(int ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20bdc0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 240; for (int i_ = 0; i_ < 240; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  le<uint>* puVar7;
  int iVar8;
  uint uVar9;
  undefined4 a5;
  undefined4 uVar10;
  
  (*(le<uint>* )(fr0_ - 0x60)) = 0x80000000;
  (*(le<undefined4>* )(fr0_ - 0x5c)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x58)) = 0x800400;
  (*(le<undefined4>* )(fr0_ - 0x54)) = 0;
  (*(le<undefined4>* )(fr0_ - 0x50)) = 0xffffffff;
  (*(le<undefined4>* )(fr0_ - 0x4c)) = 0xffffffff;
  (*(le<undefined4>* )(fr0_ - 0x48)) = 0xffffffff;
  (*(le<undefined4>* )(fr0_ - 0x44)) = 0xffffffff;
  puVar7 = &(*(le<uint>* )(fr0_ - 0x60));
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) {
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
    (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
    (*(le<uint>* )(fr0_ - 0x60)) = ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) & 7) << 0x18 | 0x80000000;
    ar6 = 0x20;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,puVar7,0x20,
                 ar7));
    ar5 = puVar7;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20b708(ar4,ar5,ar6,ar7));
  if (iVar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
    return iVar4;
  }
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 0x10) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa114) = (*(le<uint>* )(unsigned)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0xe4,ar5,ar6,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa114) = (uVar5 & 0x1f) << 3;
  }
  uVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa118) = *(le<uint>* )(unsigned)(ar4 + 0x1c) | 0x1000000;
  puVar7 = (le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4);
  uVar9 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
  (*(le<unsigned>* )(fr0_ - 0x6c) = (unsigned)(unsigned long)(puVar7 + -0x1ced5835));
  (*(le<unsigned>* )(fr0_ - 0x70) = (unsigned)(unsigned long)(puVar7 + -0x1ced5821));
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
    iVar4 = 0;
    do {
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20bf52;
      (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4));
    iVar4 = 1;
LAB_8c20bf52:
    if (iVar4 != 0) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  puVar7[-0x1ced5835] = *((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218);
  puVar7[-0x1ced5831] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[1];
  puVar7[-0x1ced582d] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[2];
  puVar7[-0x1ced5829] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[3];
  puVar7[-0x1ced5825] = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c4aa218)[4];
  (*(le<uint>* )(fr0_ - 0x74)) = 0;
  do {
    iVar4 = (*(le<uint>* )(fr0_ - 0x74)) * 4;
    iVar8 = *(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + iVar4) - *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x6c));
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x70)) = (iVar8 >> 2) << 2;
    if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) || ((*(le<uint>* )(fr0_ - 0x74)) != (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0))) {
      if ((int)(*(le<uint>* )(fr0_ - 0x74)) < 0) {
        uVar6 = 1 >> (~(*(le<uint>* )(fr0_ - 0x74)) & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << ((*(le<uint>* )(fr0_ - 0x74)) & 0x1f);
      }
      if ((uVar6 & (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014)) != 0) {
        ar6 = 4;
        puVar7 = (le<uint>* )(unsigned)((undefined1 *)(unsigned)0x8c26d420);
        (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(le<undefined4>* )(unsigned)(iVar4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d420),4,ar7));
        *(le<int>* )(unsigned)(iVar4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) = *(le<int>* )(unsigned)(iVar4 + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
        if (*(le<uint>* )(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + iVar4) < *((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x70))) {
          (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c2062c8(2,puVar7,ar6,ar7));
        }
      }
    }
    uVar10 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d60);
    (*(le<unsigned>* )(fr0_ - 0x70) = (unsigned)(unsigned long)(((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x70)) + 4));
    (*(le<unsigned>* )(fr0_ - 0x6c) = (unsigned)(unsigned long)(((le<uint>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x6c)) + 4));
    (*(le<uint>* )(fr0_ - 0x74)) = (*(le<uint>* )(fr0_ - 0x74)) + 1;
  } while ((*(le<uint>* )(fr0_ - 0x74)) < 5);
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  ar5 = puVar7;
  do {
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c050;
    (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
  } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0));
  bVar1 = true;
LAB_8c20c050:
  if (!bVar1) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
    iVar4 = uVar9 << 5;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fdc),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd8),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd0),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fcc),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd4),ar6,ar7));
      ar5 = (le<uint>* )(unsigned)0x80000000;
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x144,0x80000000,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0x144,ar5,ar6,ar7));
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
    bVar1 = false;
    do {
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c18e;
      (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0));
    bVar1 = true;
LAB_8c20c18e:
    if (bVar1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 0;
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
      return 0xfffffffe;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = uVar5;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      uVar5 = 0xff;
    }
    else {
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff000038) = 0x10;
      (*(volatile le<undefined4>* )(unsigned)(unsigned)0xff00003c) = 0x10;
      ar6 = 4;
      ar5 = (le<uint>* )(unsigned)((undefined1 *)(unsigned)0x8c26d420);
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(le<uint>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa21c) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,
                   ((undefined1 *)(unsigned)0x8c26d420),4,ar7));
      uVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9fd0);
    }
    ({ unsigned long ri0_ = (unsigned long)(iVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 240)); FUN_8c20b160(uVar5,ar5,ar6,ar7); });
    uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
    uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
    uVar5 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8);
    if (*(le<uint>* )(unsigned)(ar4 + 0x10) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8)) {
      uVar5 = *(le<uint>* )(unsigned)(ar4 + 0x10) - 1;
    }
    a5 = 0;
    uVar9 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf4);
    if (*(le<uint>* )(unsigned)(ar4 + 0xc) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf4)) {
      uVar9 = *(le<uint>* )(unsigned)(ar4 + 0xc) - 1;
    }
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20a482(0,0,uVar9,uVar5));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa11c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa120) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60) = uVar2;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64) = uVar3;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20b5a0(((undefined1 *)(unsigned)0x8c4aa110),a5,uVar9,uVar5));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d60) = uVar10;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),a5,uVar9,uVar5));
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
      bVar1 = false;
      do {
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c350;
        (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),a5,uVar9,uVar5));
      } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0));
      bVar1 = true;
LAB_8c20c350:
      if (bVar1) {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 0;
        return 0xfffffffd;
      }
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,1,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,0,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fdc),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd8),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd0),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fcc),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar4 + -0x73b55fd4),uVar9,uVar5));
      uVar10 = 0x80000000;
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x144,0x80000000,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0x144,uVar10,uVar9,uVar5));
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c275710) = 0;
    *(le<unsigned>* )0x8c4a9e30 = (unsigned)(unsigned long)((fr0_ + (int)0xffffff88));
    return 0;
  }
override_prt_8c20c05a_7a4d7f16:
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 0;
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  return 0xffffffff;
}

__asm__(".globl FUN_8c20bdc0\n.set FUN_8c20bdc0, FUN_8c20bdc0_def\n");

}
//@unit 8c20c416
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c20c416_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20c416");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  le<undefined4>* puVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint ar6_00;
  uint ar7_00;
  int iVar7;
  
  puVar4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b708(ar4,ar5,ar6,ar7));
  uVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
  if (puVar4 == (undefined1 *)(unsigned)0x0) {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa114) = (*(le<uint>* )(unsigned)(ar4 + 0xc) & 0xfffffff) >> 2;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa118) = *(le<uint>* )(unsigned)(ar4 + 0x1c) | 0x1000000;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
    puVar4 = ((undefined1 *)(unsigned)0x8c4a9db8);
    bVar1 = false;
    do {
      if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20c4ce;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
      puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd4);
    } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd4));
    bVar1 = true;
LAB_8c20c4ce:
    if (!bVar1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
      bVar1 = false;
      do {
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c504;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
        puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd0);
      } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0));
      bVar1 = true;
LAB_8c20c504:
      uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
      uVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
      if (bVar1) {
        puVar5 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4a9db4);
      }
      else {
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f24) = 1;
        ar7_00 = *(le<uint>* )(unsigned)(ar4 + 0x10);
        ar6_00 = *(le<uint>* )(unsigned)(ar4 + 0xc);
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8) < ar7_00) {
          ar7_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf8);
        }
        a5 = 0;
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf4) < ar6_00) {
          ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bf4);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,ar6_00,ar7_00));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa11c) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60);
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa120) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64);
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e60) = uVar6;
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e64) = uVar2;
        puVar4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b5a0(((undefined1 *)(unsigned)0x8c4aa110),a5,ar6_00,ar7_00));
        (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) = 0;
        bVar1 = false;
        do {
          if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c5e8;
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(le<unsigned>* )0x8c4a9e14)))((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9e18),a5,ar6_00,ar7_00));
          puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd0);
        } while ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f1c) <= (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9dd0));
        bVar1 = true;
LAB_8c20c5e8:
        if (!bVar1) {
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6_00,ar7_00));
          iVar7 = (uVar3 & 1) * 0x20;
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fdc),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd8),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd0),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fcc),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar7 + -0x73b55fd4),ar6_00,ar7_00));
          uVar6 = 0x80000000;
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,uVar6,ar6_00,ar7_00));
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f10) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08);
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9db8) = 1;
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f28) = 1;
          *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
          return (undefined1 *)(unsigned)0;
        }
        puVar5 = (le<undefined4>* )(unsigned)((undefined1 *)(unsigned)0x8c4a9f24);
      }
      *puVar5 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  }
  return puVar4;
}

__asm__(".globl FUN_8c20c416\n.set FUN_8c20c416, FUN_8c20c416_def\n");

}
//@unit 8c20c7e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20c7e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20c7e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9ef0) == 1) {
    uVar1 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f08) & 1;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6,ar7));
    iVar3 = uVar1 * 0x20;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fdc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fd8),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fd0),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fcc),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(le<undefined4>* )(unsigned)(iVar3 + -0x73b55fd4),ar6,ar7));
    ar5 = 0x80000000;
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,ar5,ar6,ar7));
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f18) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9f14) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4aa014);
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210cc0((*(le<undefined4>* )(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c20c7e0\n.set FUN_8c20c7e0, FUN_8c20c7e0_def\n");

}
//@unit 8c20c8e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20c8e0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20c8e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)0x3e0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), pvr_20a876((int)0xe4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
            ((int)0xe4,(int)(ar4 & uVar2) >> 5 | uVar1 & 0xffffffe0,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c20c8e0\n.set FUN_8c20c8e0, FUN_8c20c8e0_def\n");

}
//@unit 8c20c90c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20c90c_def(le<uint>* ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20c90c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d128(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203a92(ar4,ar5,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2038c0(ar4[5],ar4,ar6,ar7));
      ar5 = ar4;
    }
    if (iVar1 == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2072b2(3,ar5,ar6,ar7));
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c20c90c\n.set FUN_8c20c90c, FUN_8c20c90c_def\n");

}
//@unit 8c20c980
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20c980_def(le<uint>* ar4,le<uint>* ar5,le<uint>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20c980");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d128(ar4,ar6,ar7,s0));
  puVar1 = ((void *)(unsigned)0x8c2072b2);
  if (iVar2 == 0) {
    *ar5 = *ar4;
    ar5[1] = ar4[1];
    ar5[2] = ar4[2];
    ar5[3] = ar4[3];
    ar5[4] = ar4[4];
    ar5[5] = ar4[5];
    ar5[6] = ar4[6];
    if ((*ar4 & 0xffff) == 3) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203a92(ar4,ar6,ar7,s0));
      if (iVar2 != 3) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203a92(ar5,ar6,ar7,s0));
        if (iVar2 != 3) {
          return iVar2;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203cd0(ar4,ar6,ar7,s0));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar6,ar7,s0));
        return 3;
      }
    }
    else {
      ar6 = ar4;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2038c0(ar4[5],ar4,ar7,s0));
      if (iVar2 != 3) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2038c0(ar5[5],ar5,ar7,s0));
        if (iVar2 != 3) {
          return iVar2;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(ar4[7],ar5,ar7,s0));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar5,ar7,s0));
        return 3;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar6,ar7,s0));
  }
  return iVar2;
}

__asm__(".globl FUN_8c20c980\n.set FUN_8c20c980, FUN_8c20c980_def\n");

}
//@unit 8c20ca32
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20ca32_def(le<uint>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20ca32");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  le<uint>* puVar4;
  uint ar4_00;
  le<uint>* ar5_00;
  int iVar5;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20d128(ar4,ar6,ar7,s0));
  if (iVar3 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar3 = 4;
    }
    else {
      if ((1 < ar5) && (iVar3 = 1, puVar4 = ar4, 1 < ar5)) {
        do {
          iVar3 = iVar3 + 1;
          puVar4[10] = *ar4;
          puVar4[0xb] = ar4[1];
          puVar4[0xc] = ar4[2];
          puVar4[0xd] = ar4[3];
          puVar4[0xe] = ar4[4];
          puVar4[0xf] = ar4[5];
          puVar4[0x10] = ar4[6];
          puVar4 = puVar4 + 10;
        } while (iVar3 < ar5);
      }
      puVar4 = ar4;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2038c0(ar4[5] * ar5,ar4,ar7,s0));
      puVar1 = ((void *)(unsigned)0x8c203bda);
      if (iVar3 == 3) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2072b2(3,puVar4,ar7,s0));
      }
      else {
        ar4_00 = ar4[7];
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c203bda(ar4_00,puVar4,ar7,s0));
        iVar5 = 0;
        if (0 < ar5) {
          do {
            puVar2 = ((void *)(unsigned)0x8c203980);
            ar5_00 = ar4 + iVar5 * 10;
            ar5_00[7] = ar4_00;
            puVar4 = ar5_00;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(ar5_00[5],ar5_00,ar7,s0));
            ar4_00 = ar4_00 + (ar5_00[5] & 0xfffffffc);
            if (iVar3 == 3) {
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[iVar5 * 10 + 7],puVar4,ar7,s0));
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2072b2(3,puVar4,ar7,s0));
              return 3;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < ar5);
        }
      }
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c20ca32\n.set FUN_8c20ca32, FUN_8c20ca32_def\n");

}
//@unit 8c20cb5a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cb5a_def(le<uint>* ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20cb5a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((ar6 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]));
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7));
      }
    }
    return 0;
  }
  return 4;
}

__asm__(".globl FUN_8c20cb5a\n.set FUN_8c20cb5a, FUN_8c20cb5a_def\n");

}
//@unit 8c20cb5e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cb5e_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20cb5e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  uint uVar1;
  
  if ((in_r0 != 1) && (ar7 != 1)) {
    if ((*ar4 & 0xffff) == 3) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d740(ar4[7],ar5,ar4[3],ar4[6]));
    }
    else {
      uVar1 = ar4[6];
      if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) ||
         ((uVar1 & 0x20) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4[7],ar5,ar4[5],ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d6c0(ar4[7],ar5,ar4[3],ar7));
      }
    }
    return 0;
  }
  return 4;
}

__asm__(".globl FUN_8c20cb5e\n.set FUN_8c20cb5e, FUN_8c20cb5e_def\n");

}
//@unit 8c20cbbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cbbc_def(le<uint>* ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20cbbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar7_00;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = 4;
  }
  else {
    uVar2 = ar4[6];
    if (((((uVar2 & 4) == 0) || ((uVar2 & 1) == 0)) || ((uVar2 & 8) != 0)) || ((uVar2 & 0x20) != 0))
    {
      iVar3 = 0;
    }
    else {
      iVar3 = 4;
    }
    ar7_00 = ar7 * 0x20;
    uVar4 = iVar3 + ar6 * ar7_00;
    uVar2 = ar4[5] - uVar4;
    if (uVar4 < ar4[5]) {
      if (ar7_00 < uVar2) {
        uVar2 = ar7_00;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(uVar4 + ar4[7],ar5,uVar2,ar7_00));
      uVar1 = 0;
    }
    else {
      uVar1 = 0xc;
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c20cbbc\n.set FUN_8c20cbbc, FUN_8c20cbbc_def\n");

}
//@unit 8c20cc56
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cc56_def(le<uint>* ar4,undefined4 ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20cc56");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint ar7_00;
  uint uVar3;
  
  ar7_00 = ar7 & 0xfffffffc;
  if (ar7_00 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      return 4;
    }
    uVar1 = ar4[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      iVar2 = 0;
    }
    else {
      iVar2 = 4;
    }
    uVar3 = (ar6 & 0xfffffffc) + iVar2;
    uVar1 = ar4[5] - uVar3;
    if (ar4[5] <= uVar3) {
      return 7;
    }
    if (ar7_00 < uVar1) {
      uVar1 = ar7_00;
    }
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a8e0(uVar3 + ar4[7],ar5,uVar1,ar7_00));
  }
  return 0;
}

__asm__(".globl FUN_8c20cc56\n.set FUN_8c20cc56, FUN_8c20cc56_def\n");

}
//@unit 8c20ccd6
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c20ccd6_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20ccd6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);
  int s24 = *(le<int>* )(vsp + 24);
  int s28 = *(le<int>* )(vsp + 28);
  int s32 = *(le<int>* )(vsp + 32);
  int s36 = *(le<int>* )(vsp + 36);
  int s40 = *(le<int>* )(vsp + 40);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint in_r3 = 0;
  uint uVar2;
  int ar7_00;
  uint unaff_r9 = 0;
  uint uVar3;
  int iVar4;
  int ar4_00;
  
  uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x18);
  if (((((in_r3 & uVar2) == 0) && ((uVar2 & 1) == 0)) && ((uVar2 & 8) == 0)) &&
     ((uVar2 & 0x20) == 0)) {
    ar7_00 = *(le<int>* )(unsigned)(ar4 + 0xc);
    iVar4 = ar7_00 * 2;
    ar4_00 = s28 * iVar4 + s24 * 2 + *(le<int>* )(unsigned)(ar4 + 0x1c);
    uVar2 = ar6 << 1;
    if (s40 != 0) {
      ar5 = (s36 * s40 * 2 + s32 * 2 & 0xfffffffcU) + ar5;
      uVar2 = s40 * 2;
    }
    uVar3 = 0;
    if (unaff_r9 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20a8e0(ar4_00,ar5,ar6 << 1,ar7_00));
        uVar3 = uVar3 + 1;
        ar4_00 = ar4_00 + iVar4;
        ar5 = ar5 + (uVar2 & 0xfffffffc);
      } while (uVar3 < unaff_r9);
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20ccd6\n.set FUN_8c20ccd6, FUN_8c20ccd6_def\n");

}
//@unit 8c20cd92
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cd92_def(int ar4,uint ar5,uint ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20cd92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint a6;
  int ar6_00;
  undefined4 uVar4;
  undefined4 ar7_00;
  int iVar5;
  int iVar6;
  
  if ((ar5 & 0x1f) != 0) {
    return 7;
  }
  uVar3 = *(le<uint>* )(unsigned)(ar4 + 0x18);
  if (((((uVar3 & 1) == 0) && ((uVar3 & 4) == 0)) && ((uVar3 & 8) == 0)) &&
     (((uVar3 & 0x20) == 0 && ((*(le<uint>* )(unsigned)(ar4 + 8) & 0x18000000) != 0)))) {
    if (s0 == 6) {
      iVar5 = 0;
    }
    else {
      if (s0 != 3) {
        return 4;
      }
      iVar5 = 1;
    }
    if (((0 < (int)ar6) && ((int)ar6 < 0x41)) && ((0 < (int)ar7 && ((int)ar7 < 0x41)))) {
      iVar6 = ar6 * ar7;
      if (iVar6 < 2) {
        ar6 = *(le<uint>* )(unsigned)(ar4 + 0xc) >> 4;
        ar7 = *(le<uint>* )(unsigned)(ar4 + 0x10) >> 4;
      }
      uVar3 = (uint)(iVar6 >= 2);
      if (iVar5 == 0) {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 * 0x180;
      }
      else {
        if (uVar3 == 0) {
          iVar6 = ar6 * ar7;
        }
        iVar6 = iVar6 << 9;
      }
      uVar4 = 0x3f;
      a6 = ar6 - 1 & 0x3f;
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
                ((int)0x14c,iVar5 << 0x18 | uVar3 << 0x10 | (ar7 - 1 & 0x3f) << 8 | a6,a6,
                 0x3f));
      (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c20a844))))
                ((int)0x148,*(le<uint>* )(unsigned)(ar4 + 0x1c) & 0xfffff8,a6,uVar4));
      uVar4 = 0x10800000;
      puVar1 = ((void *)(unsigned)0x8c202f40);
      iVar5 = (int)0x100;
      do {
        ar7_00 = 0x18;
        ar6_00 = iVar6;
        iVar2 = ({ unsigned long t0_ = (unsigned long)(((le<undefined4>*  *)(fr0_ - 0x1c))); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(puVar1)))(uVar4,ar5,iVar6,0x18); });
      } while (iVar2 == iVar5);
      if (iVar2 == 0) {
        if (s4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c203320(*((le<undefined4>*  *)(fr0_ - 0x1c))[0],0,ar6_00,ar7_00));
        }
        return 0;
      }
      return 8;
    }
  }
  return 4;
}

__asm__(".globl FUN_8c20cd92\n.set FUN_8c20cd92, FUN_8c20cd92_def\n");

}
//@unit 8c20cefe
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cefe_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20cefe");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar4[3],ar4[3],ar6,ar7));
    if ((ar4[6] & 1) == 0) {
      puVar2 = ((undefined1 *)(unsigned)0x8c26d448);
    }
    else {
      puVar2 = ((undefined1 *)(unsigned)0x8c26d464);
    }
    ar6_00 = *(le<undefined4>* )(unsigned)(puVar2 + iVar1 * 4);
  }
  else {
    if ((ar4[6] & 8) == 0) {
      return 4;
    }
    ar6_00 = 0x800;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4[7],ar5,ar6_00,ar7));
  return 0;
}

__asm__(".globl FUN_8c20cefe\n.set FUN_8c20cefe, FUN_8c20cefe_def\n");

}
//@unit 8c20cf88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cf88_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20cf88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203cd0(ar4,vr5,vr6,vr7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(ar4[7],vr5,vr6,vr7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c20cf88\n.set FUN_8c20cf88, FUN_8c20cf88_def\n");

}
//@unit 8c20cf8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20cf8c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20cf8c");
  return (unsigned)sh4_interp(0x8c20cf8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20cf8c\n.set FUN_8c20cf8c, FUN_8c20cf8c_def\n");
}
//@unit 8c20cfe0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20cfe0_def(le<int>* ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20cfe0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(ar5));
  (*(le<unsigned>* )(fr0_ - 0x8) = (unsigned)(unsigned long)(ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c203de0(&(*(le<int>* )(fr0_ - 0x1c)),&(*(le<int>* )(fr0_ - 0x18)),&(*(le<int>* )(fr0_ - 0x14)),&(*(le<undefined4>* )(fr0_ - 0x10))));
  *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x8)) = (*(le<int>* )(fr0_ - 0x1c)) + (*(le<int>* )(fr0_ - 0x18)) + (*(le<int>* )(fr0_ - 0x14));
  *((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0xc)) = (*(le<undefined4>* )(fr0_ - 0x10));
  return uVar1;
}

__asm__(".globl FUN_8c20cfe0\n.set FUN_8c20cfe0, FUN_8c20cfe0_def\n");

}
//@unit 8c20d01a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d01a_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d01a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint in_r3 = 0;
  uint a7;
  
  if ((ar4[2] == in_r3) && ((ar4[6] & 1) != 0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d82e(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[2] == 0x30000000) && ((ar4[6] & 1) != 0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d9ce(ar4,ar5,ar6,ar7));
  }
  else if ((*ar4 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20db80(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[6] & 8) == 0) {
    a7 = ar4[6];
    if (((a7 & 4) == 0) || ((a7 & 1) == 0)) {
      uVar1 = 4;
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20daa0(ar4,ar5,ar6,a7));
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20db80(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c20d01a\n.set FUN_8c20d01a, FUN_8c20d01a_def\n");

}
//@unit 8c20d082
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d082_def(undefined4 ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d082");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((*ar5 & 3) == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a892(ar5[7],ar5[5],vr6,vr7));
  }
  else if ((*ar5 & 0xffff) == 3) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d7a0(ar4,ar5[7],ar5[3],ar5[6]));
  }
  else {
    uVar1 = ar5[6];
    if (((((uVar1 & 4) == 0) || ((uVar1 & 1) == 0)) || ((uVar1 & 8) != 0)) || ((uVar1 & 0x20) != 0))
    {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a9c2(ar5[7],ar5[5],vr6,vr7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d6ea(ar4,ar5[7],ar5[3],ar7));
    }
  }
  return 0;
}

__asm__(".globl FUN_8c20d082\n.set FUN_8c20d082, FUN_8c20d082_def\n");

}
//@unit 8c20d086
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20d086_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20d086");
  return (unsigned)sh4_interp(0x8c20d086, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20d086\n.set FUN_8c20d086, FUN_8c20d086_def\n");
}
//@unit 8c20d114
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d114_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d114");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20408e(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2040ce(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c20d114\n.set FUN_8c20d114, FUN_8c20d114_def\n");

}
//@unit 8c20d128
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d128_def(le<undefined4>* ar4,int ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20d128");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar4 = ar7 & 0xff00;
  uVar2 = ar7 & 0xff;
  if ((uVar4 == 0x1000) || (uVar4 == 0x1100)) {
    *ar4 = 3;
  }
  else {
    *ar4 = 2;
  }
  if ((uVar4 == 0x500) || (uVar4 == 0x600)) {
    if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0) + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x28000000;
  }
  else {
    if ((uVar4 != 0x700) && (uVar4 != 0x800)) {
      ar4[1] = 1;
      if (uVar2 == 0) {
        ar4[2] = 0;
        goto LAB_8c20d262;
      }
      if (uVar2 == 1) {
        uVar1 = 0x8000000;
LAB_8c20d22e:
        ar4[2] = uVar1;
      }
      else {
        if (uVar2 == 2) {
          uVar1 = 0x10000000;
        }
        else {
          if (uVar2 == 3) {
            uVar1 = 0x18000000;
            goto LAB_8c20d22e;
          }
          if (uVar2 != 4) {
            uVar3 = 4;
            goto LAB_8c20d262;
          }
          uVar1 = 0x20000000;
        }
        ar4[2] = uVar1;
      }
      goto LAB_8c20d262;
    }
    if (*(le<int>* )(unsigned)((*(le<undefined4>* )(unsigned)(unsigned)0x8c2756b0) + 0xa0) == 3) {
      ar4[1] = 3;
    }
    else {
      ar4[1] = 1;
    }
    uVar1 = 0x30000000;
  }
  ar4[2] = uVar1;
LAB_8c20d262:
  ar4[3] = ar5;
  ar4[4] = ar6;
  if ((((ar5 != 8) && (ar5 != 0x10)) && (ar5 != 0x20)) &&
     (((ar5 != 0x40 && (ar5 != 0x80)) && ((ar5 != 0x100 && ((ar5 != 0x200 && (ar5 != 0x400)))))))) {
    uVar3 = 4;
  }
  if (((((ar6 != 8) && (ar6 != 0x10)) && (ar6 != 0x20)) && ((ar6 != 0x40 && (ar6 != 0x80)))) &&
     ((ar6 != 0x100 && ((ar6 != 0x200 && (ar6 != 0x400)))))) {
    uVar3 = 4;
  }
  if (((((uVar4 != 0x900) && (uVar4 != 0xb00)) && (uVar4 != 0xd00)) &&
      ((uVar4 != 0x500 && (uVar4 != 0x700)))) && (ar5 != ar6)) {
    uVar3 = 4;
  }
  ar4[6] = 0;
  if (((uVar4 == 0xf00) || (uVar4 == 0x200)) ||
     ((uVar4 == 0x400 || (((uVar4 == 0x1100 || (uVar4 == 0x600)) || (uVar4 == 0x800)))))) {
    ar4[6] = ar4[6] | 1;
  }
  if (((uVar4 == 0xe00) || (uVar4 == 0xf00)) ||
     ((uVar4 == 0x100 || ((uVar4 == 0x200 || (uVar4 == 0xd00)))))) {
    ar4[6] = ar4[6] | 4;
  }
  if ((((uVar4 == 0x300) || (uVar4 == 0x400)) || (uVar4 == 0x1000)) || (uVar4 == 0x1100)) {
    ar4[6] = ar4[6] | 0xc;
  }
  if (uVar4 == 0xb00) {
    ar4[6] = ar4[6] | 0x10;
  }
  if (((uVar4 == 0x500) || (uVar4 == 0x600)) || ((uVar4 == 0x700 || (uVar4 == 0x800)))) {
    ar4[6] = ar4[6] | 0x24;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d4a6(ar4,ar5,ar6,4));
  return uVar3;
}

__asm__(".globl FUN_8c20d128\n.set FUN_8c20d128, FUN_8c20d128_def\n");

}
//@unit 8c20d400
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d400_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d400");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 != 8) {
    if (ar4 == 0x10) {
      return 4;
    }
    if (ar4 == 0x20) {
      return 5;
    }
    if (ar4 == 0x40) {
      return 6;
    }
    if (ar4 == 0x80) {
      return 7;
    }
    if (ar4 == 0x100) {
      return 8;
    }
    if (ar4 == 0x200) {
      return 9;
    }
    if (ar4 == 0x400) {
      return 10;
    }
  }
  return 3;
}

__asm__(".globl FUN_8c20d400\n.set FUN_8c20d400, FUN_8c20d400_def\n");

}
//@unit 8c20d4a6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20d4a6_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d4a6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  
  if ((*ar4 & 0xffff) == 3) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d63c(ar4,ar5,ar6,ar7));
  }
  else if ((ar4[6] & 8) == 0) {
    if ((ar4[6] & 0x20) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d500(ar4,ar5,ar6,ar7));
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d5b2(ar4,ar5,ar6,ar7));
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d554(ar4,ar5,ar6,ar7));
  }
  ar4[5] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c20d4a6\n.set FUN_8c20d4a6, FUN_8c20d4a6_def\n");

}
//@unit 8c20d4aa
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20d4aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20d4aa");
  return (unsigned)sh4_interp(0x8c20d4aa, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20d4aa\n.set FUN_8c20d4aa, FUN_8c20d4aa_def\n");
}
//@unit 8c20d500
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20d500_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d500");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(le<uint>* )(unsigned)(ar4 + 0xc) * *(le<uint>* )(unsigned)(ar4 + 0x10);
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) != 0) {
    uVar3 = *(le<uint>* )(unsigned)(ar4 + 0xc) >> 1;
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x10) >> 1;
    uVar1 = uVar2;
    if (uVar3 < uVar2) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar3 * uVar2;
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
      iVar4 = iVar4 + iVar5;
    }
    if (uVar3 == uVar2) {
      iVar4 = iVar4 + 4;
    }
    else {
      iVar4 = iVar4 + uVar3 * uVar2;
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 4) == 1) {
    iVar4 = iVar4 << 1;
  }
  else {
    iVar4 = iVar4 << 2;
  }
  return iVar4;
}

__asm__(".globl FUN_8c20d500\n.set FUN_8c20d500, FUN_8c20d500_def\n");

}
//@unit 8c20d554
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20d554_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d554");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = (*(le<uint>* )(unsigned)(ar4 + 0xc) >> 1) * (*(le<uint>* )(unsigned)(ar4 + 0x10) >> 1);
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    if ((*(le<int>* )(unsigned)(ar4 + 0xc) == 8) && (*(le<int>* )(unsigned)(ar4 + 0x10) == 8)) {
      iVar4 = iVar4 + 0x10;
    }
  }
  else {
    uVar3 = *(le<uint>* )(unsigned)(ar4 + 0xc) >> 2;
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 0x10) >> 2;
    uVar1 = uVar2;
    if (uVar3 < uVar2) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar3 * uVar2;
      uVar3 = uVar3 >> 1;
      uVar2 = uVar2 >> 1;
      iVar4 = iVar4 + iVar5;
    }
    if (uVar3 == uVar2) {
      iVar4 = iVar4 + 2;
    }
    else {
      iVar4 = iVar4 + uVar3 * uVar2;
    }
    iVar4 = iVar4 + 10;
  }
  return iVar4 + 0x800;
}

__asm__(".globl FUN_8c20d554\n.set FUN_8c20d554, FUN_8c20d554_def\n");

}
//@unit 8c20d5b2
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20d5b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d5b2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(le<uint>* )(unsigned)(ar4 + 0xc) * *(le<uint>* )(unsigned)(ar4 + 0x10);
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) != 0) {
    uVar2 = *(le<uint>* )(unsigned)(ar4 + 0xc) >> 1;
    uVar3 = *(le<uint>* )(unsigned)(ar4 + 0x10) >> 1;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      uVar1 = uVar2;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar5 = uVar2 * uVar3;
      uVar2 = uVar2 >> 1;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 + iVar5;
    }
    if (uVar2 == uVar3) {
      iVar5 = uVar4 + 1;
    }
    else {
      iVar5 = uVar4 + uVar2 * uVar3;
    }
    if (*(le<int>* )(unsigned)(ar4 + 8) == 0x28000000) {
      uVar4 = iVar5 + 0x2b;
    }
    else {
      uVar4 = iVar5 + 0xb;
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 8) == 0x28000000) {
    if (uVar4 == 1) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 >> 1;
    }
  }
  return uVar4;
}

__asm__(".globl FUN_8c20d5b2\n.set FUN_8c20d5b2, FUN_8c20d5b2_def\n");

}
//@unit 8c20d63c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20d63c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d63c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = *(le<uint>* )(unsigned)(ar4 + 0xc);
  uVar4 = *(le<uint>* )(unsigned)(ar4 + 0x10);
  iVar5 = (uVar3 >> 1) * (uVar4 >> 1);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(uVar3,uVar4,ar6,ar7));
  if ((*(le<uint>* )(unsigned)(ar4 + 0x18) & 1) == 0) {
    iVar5 = iVar5 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d448) + iVar2 * 4);
  }
  else {
    uVar3 = uVar3 >> 2;
    uVar4 = uVar4 >> 2;
    uVar1 = uVar4;
    if (uVar3 < uVar4) {
      uVar1 = uVar3;
    }
    for (; 1 < uVar1; uVar1 = uVar1 >> 1) {
      iVar6 = uVar3 * uVar4;
      uVar3 = uVar3 >> 1;
      uVar4 = uVar4 >> 1;
      iVar5 = iVar5 + iVar6;
    }
    if (uVar3 == uVar4) {
      iVar5 = iVar5 + 2;
    }
    else {
      iVar5 = iVar5 + uVar3 * uVar4;
    }
    iVar5 = iVar5 + 10 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d464) + iVar2 * 4);
  }
  return iVar5;
}

__asm__(".globl FUN_8c20d63c\n.set FUN_8c20d63c, FUN_8c20d63c_def\n");

}
//@unit 8c20d6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d6c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d6c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4 + 4,ar5,*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d4d8) + iVar1 * 4) + 4,ar7));
  return uVar2;
}

__asm__(".globl FUN_8c20d6c0\n.set FUN_8c20d6c0, FUN_8c20d6c0_def\n");

}
//@unit 8c20d6ea
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d6ea_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d6ea");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a9c2(ar4,ar5 + 4,*(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d4d8) + iVar1 * 4),ar7));
  return uVar2;
}

__asm__(".globl FUN_8c20d6ea\n.set FUN_8c20d6ea, FUN_8c20d6ea_def\n");

}
//@unit 8c20d740
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d740_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20d740");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d448) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar1);
  }
  else {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d464) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar1) + 10;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4,ar5,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4 + 0x800,ar5 + ar6_00,iVar1,ar7_00));
  return uVar2;
}

__asm__(".globl FUN_8c20d740\n.set FUN_8c20d740, FUN_8c20d740_def\n");

}
//@unit 8c20d7a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d7a0_def(int ar4,int ar5,undefined4 ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20d7a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint ar7_00;
  int ar6_00;
  
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  iVar1 = iVar1 * 4;
  if ((ar7 & 1) == 0) {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d448) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar1);
  }
  else {
    ar6_00 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d464) + iVar1);
    iVar1 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar1) + 10;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a9c2(ar4,ar5,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a9c2(ar4 + ar6_00,ar5 + 0x800,iVar1,ar7_00));
  return uVar2;
}

__asm__(".globl FUN_8c20d7a0\n.set FUN_8c20d7a0, FUN_8c20d7a0_def\n");

}
//@unit 8c20d82e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d82e_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d82e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 5) {
    puVar7 = (undefined1 *)(unsigned)0x10;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<undefined4>* )(unsigned)(ar4 + 0x1c),0x10,ar7));
    if (ar6 == 1) {
      ((undefined1 *)(fr0_ - 0x30))[1] = *ar5;
    }
    else {
      puVar6 = ((undefined1 *)(fr0_ - 0x30)) + 4;
      if (ar6 == 2) {
        puVar5 = ((undefined1 *)(fr0_ - 0x30)) + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      else {
        puVar7 = ((undefined1 *)(fr0_ - 0x24));
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar6 = uVar1;
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar7);
      }
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),ar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),ar5,puVar7,ar7));
  }
  else {
    iVar8 = iVar2 * 4;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8) + -0xc,0x10,ar7));
    puVar5 = ((undefined1 *)(fr0_ - 0x20));
    puVar6 = ((undefined1 *)(fr0_ - 0x24));
    puVar7 = ar5;
    do {
      uVar1 = *puVar7;
      puVar7 = puVar7 + 1;
      *puVar6 = uVar1;
      puVar6 = puVar6 + 1;
    } while (puVar6 < puVar5);
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    iVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar5,puVar7,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar3 + iVar4 + -0xc,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
    if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) != 0x10) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + iVar8) + 4,ar5 + 4,
                   *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) + -0x10,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + (iVar2 + 1) * 4) + -0xc,
                 0x10,ar7));
    puVar5 = ((undefined1 *)(fr0_ - 0x24));
    puVar6 = ar5 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d60c) + iVar8) + -0xc;
    puVar7 = ((undefined1 *)(fr0_ - 0x30));
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      *puVar7 = uVar1;
      puVar7 = puVar7 + 1;
    } while (puVar7 < puVar5);
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5e0) + (iVar2 + 1) * 4) + -0xc;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar6,puVar5,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar6,puVar5,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar2,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
  return 0;
}

__asm__(".globl FUN_8c20d82e\n.set FUN_8c20d82e, FUN_8c20d82e_def\n");

}
//@unit 8c20d9ce
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20d9ce_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20d9ce");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *ar5_00;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)(unsigned)0x8;
    ar5_00 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x1c));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x1c)),ar5_00,8,ar7));
    if (ar6 == 1) {
      (*(undefined1 *)(fr0_ - 0x19)) = *ar5;
    }
    else {
      ar6_00 = ((undefined1 *)(fr0_ - 0x14));
      puVar3 = ((undefined1 *)(fr0_ - 0x18));
      ar5_00 = ar5;
      do {
        uVar1 = *ar5_00;
        ar5_00 = ar5_00 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < ar6_00);
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c20732e(((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c20732e(&s4,ar5_00,ar6_00,ar7); });
    ar6_01 = 8;
    ar5 = ((undefined1 *)(fr0_ - 0x1c));
  }
  else {
    ar6_01 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d5b4) + iVar2 * 4);
    iVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d588) + iVar2 * 4) + *(le<int>* )(unsigned)(ar4 + 0x1c);
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7));
  return 0;
}

__asm__(".globl FUN_8c20d9ce\n.set FUN_8c20d9ce, FUN_8c20d9ce_def\n");

}
//@unit 8c20daa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20daa0_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20daa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 < 3) {
    ar6_00 = (undefined1 *)(unsigned)0x10;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x24)),*(le<undefined4>* )(unsigned)(ar4 + 0x1c),0x10,ar7));
    puVar4 = ((undefined1 *)(fr0_ - 0x1c));
    if (ar6 == 1) {
      puVar3 = ((undefined1 *)(fr0_ - 0x1e));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
      } while (puVar3 < puVar4);
    }
    else {
      ar6_00 = ((undefined1 *)(fr0_ - 0x14));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar4 = uVar1;
        puVar4 = puVar4 + 1;
      } while (puVar4 < ar6_00);
    }
    iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c);
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c20732e(((undefined1 *)(fr0_ - 0x24)),ar5,ar6_00,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 40)); FUN_8c20732e((fr0_ + (int)0xfffffffc),ar5,ar6_00,ar7); });
    ar6_01 = 0x10;
    ar5 = ((undefined1 *)(fr0_ - 0x24));
  }
  else {
    ar6_01 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d4ac) + iVar2 * 4);
    iVar2 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d480) + iVar2 * 4) + *(le<int>* )(unsigned)(ar4 + 0x1c);
  }
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c20a8e0(iVar2,ar5,ar6_01,ar7));
  return 0;
}

__asm__(".globl FUN_8c20daa0\n.set FUN_8c20daa0, FUN_8c20daa0_def\n");

}
//@unit 8c20db80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20db80_def(int ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20db80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a6;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20d400(ar6,ar6,ar6,ar7));
  if (ar6 != 1) {
    if (ar6 < 5) {
      puVar6 = (undefined1 *)(unsigned)0x10;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + 0x800,0x10,ar7));
      if (ar6 == 2) {
        ((undefined1 *)(fr0_ - 0x30))[1] = *ar5;
      }
      else {
        puVar6 = ((undefined1 *)(fr0_ - 0x2a));
        puVar5 = ((undefined1 *)(fr0_ - 0x30)) + 2;
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        } while (puVar5 < puVar6);
      }
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + 0x800;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),
                   *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4) + 0x7fa,0x10,
                   ar7));
      a6 = ((undefined1 *)(fr0_ - 0x20));
      puVar6 = ((undefined1 *)(fr0_ - 0x2a));
      puVar5 = ar5;
      do {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      } while (puVar6 < a6);
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x1c);
      iVar4 = *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4);
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),puVar5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),puVar5,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar3 + iVar4 + 0x7fa,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
      iVar3 = iVar2 * 4;
      if (*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) != 0x10) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + (iVar2 + -1) * 4) + 0x80a,
                     ar5 + 10,*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) + -0x10,ar7));
      }
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a9c2(((undefined1 *)(fr0_ - 0x30)),*(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar3) + 0x7fa,0x10,
                   ar7));
      puVar6 = ((undefined1 *)(fr0_ - 0x2a));
      ar5 = ar5 + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d530) + iVar3) + -6;
      puVar5 = ((undefined1 *)(fr0_ - 0x30));
      do {
        uVar1 = *ar5;
        ar5 = ar5 + 1;
        *puVar5 = uVar1;
        puVar5 = puVar5 + 1;
      } while (puVar5 < puVar6);
      iVar2 = *(le<int>* )(unsigned)(ar4 + 0x1c) + *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d55c) + iVar3) + 0x7fa;
    }
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e(((undefined1 *)(fr0_ - 0x30)),ar5,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20732e((fr0_ + (int)0xfffffff0),ar5,puVar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c20a8e0(iVar2,((undefined1 *)(fr0_ - 0x30)),0x10,ar7));
  }
  return 0;
}

__asm__(".globl FUN_8c20db80\n.set FUN_8c20db80, FUN_8c20db80_def\n");

}
//@unit 8c20dd80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20dd80_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20dd80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if ((s0 < 8) || (0x400 < s0)) {
LAB_8c20de00:
    uVar1 = 4;
  }
  else {
    if ((char)s4 == '\0') {
      uVar1 = 0;
    }
    else if ((char)s4 == '\x01') {
      uVar1 = 0x8000000;
    }
    else {
      if ((char)s4 != '\x02') goto LAB_8c20de00;
      uVar1 = 0x10000000;
    }
    if (ar6 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e8c6(ar4,ar5,ar7,s0));
    }
    else {
      if (ar7 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(ar5,s0,s0,uVar1));
      }
      ({ unsigned long ri0_ = (unsigned long)(ar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(ar4,ar5,s0,uVar1); });
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20dd80\n.set FUN_8c20dd80, FUN_8c20dd80_def\n");

}
//@unit 8c20de80
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20de80_def(undefined1 *ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20de80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  uint uVar9;
  
  iVar5 = ar7 + -1;
  uVar7 = (uint)0x7c00;
  uVar8 = (uint)0x3e0;
  puVar3 = (le<ushort>* )(unsigned)(ar6 * iVar5 * 2 + ar5);
  iVar6 = iVar5;
  do {
    if (iVar5 < 0) {
      return 0;
    }
    iVar2 = 0;
    puVar4 = puVar3;
    if (0 < ar6) {
      do {
        if (s0 == 0) {
          uVar1 = (uint)*puVar4;
          iVar6 = (int)(0xf800 & uVar1) >> 8;
          uVar9 = (int)((int)0x7e0 & uVar1) >> 1;
LAB_8c20df30:
          unaff_r13 = (int)uVar9 >> 2;
          unaff_r12 = (uVar1 & 0x1f) << 3;
        }
        else {
          if (s0 == 1) {
            uVar1 = (uint)*puVar4;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            uVar9 = uVar1 & uVar8;
            goto LAB_8c20df30;
          }
          if (s0 == 3) {
            uVar1 = (uint)*puVar4;
            uVar9 = uVar1 & uVar8;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            goto LAB_8c20df30;
          }
        }
        iVar2 = iVar2 + 1;
        *ar4 = (char)unaff_r12;
        ar4[1] = (char)unaff_r13;
        ar4[2] = (char)iVar6;
        ar4 = ar4 + 3;
        puVar4 = puVar4 + 1;
      } while (iVar2 < ar6);
    }
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + -ar6;
  } while( true );
}

__asm__(".globl FUN_8c20de80\n.set FUN_8c20de80, FUN_8c20de80_def\n");

}
//@unit 8c20df7a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20df7a_def(int ar4,uint ar5,int ar6,le<uint>* ar7)

{
  TRACE_ENTER("FUN_8c20df7a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int ar6_00;
  le<uint>* ar7_00;
  undefined4 in_PR = 0;
  uint ain0;
  
  if (ar4 == 0) {
    uVar1 = 1;
  }
  else {
    ar6_00 = ar6;
    ar7_00 = ar7;
    ain0 = ar5;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e720(ar4,ar5,ar6,ar7));
    *ar7 = uVar2;
    if (ar6 != 0) {
      if (ain0 < *ar7) {
        return 2;
      }
      uVar2 = 0;
      if (*ar7 != 0) {
        do {
          ({ unsigned long ri0_ = (unsigned long)(ain0); unsigned long ri1_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c010838(uVar2,ar5,ar6_00,ar7_00); });
          uVar2 = uVar2 + 1;
        } while (uVar2 < *ar7);
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e78e(ar6,ar5,ar6_00,ar7_00));
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20df7a\n.set FUN_8c20df7a, FUN_8c20df7a_def\n");

}
//@unit 8c20e030
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e030_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint in_r3 = 0;
  undefined4 uVar2;
  uint unaff_r10 = 0;
  int unaff_r12 = 0;
  le<uint>* unaff_r13 = 0;
  uint a5;
  
  uVar2 = 0;
  if (unaff_r10 < in_r3) {
    *unaff_r13 = 0;
    uVar2 = 2;
  }
  else {
    a5 = 0;
    if (unaff_r10 != 0) {
      while (*(le<int>* )(unsigned)(a5 * 4 + unaff_r12) != 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e16a(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e1e6(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e272(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e300(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e328(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e368(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e3a0(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e400(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e428(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e480(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e608(unaff_r12,a5,unaff_r13,ar7));
          if (iVar1 != 0) {
            return iVar1;
          }
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e664(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e6c0(unaff_r12,a5,unaff_r13,ar7));
        if (iVar1 != 0) {
          return iVar1;
        }
        a5 = a5 + 1;
        if (unaff_r10 <= a5) {
          return 0;
        }
      }
      *unaff_r13 = a5;
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl FUN_8c20e030\n.set FUN_8c20e030, FUN_8c20e030_def\n");

}
//@unit 8c20e16a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e16a_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e16a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3)) || (iVar1 = *(le<int>* )(unsigned)(iVar2 + 4), iVar1 == 0))
      || ((iVar1 == 1 || (iVar1 == 2)))) &&
     (((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 1 || ((iVar2 = *(le<int>* )(unsigned)(iVar2 + 4), iVar2 == 0 || (iVar2 == 1)))))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 3;
}

__asm__(".globl FUN_8c20e16a\n.set FUN_8c20e16a, FUN_8c20e16a_def\n");

}
//@unit 8c20e1e6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e1e6_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e1e6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 4) != 0 && (*(le<int>* )(unsigned)(iVar1 + 4) != 2)))) ||
      ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3 || (iVar2 = *(le<int>* )(unsigned)(iVar1 + 8), iVar2 == 0)) || (iVar2 == 2)) ||
        (iVar2 == 4)) &&
       ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2 || (*(le<int>* )(unsigned)(iVar1 + 8) == 0)) || (*(le<int>* )(unsigned)(iVar1 + 8) == 2)))))) &&
     (((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 1 || (*(le<int>* )(unsigned)(iVar1 + 4) != 0)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 8) == 0 || (*(le<int>* )(unsigned)(iVar1 + 8) == 2)))) &&
      (((*(le<int>* )(unsigned)(iVar1 + 4) != 1 || (*(le<int>* )(unsigned)(iVar1 + 8) == 1)) || (*(le<int>* )(unsigned)(iVar1 + 8) == 3))))))
  {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 4;
}

__asm__(".globl FUN_8c20e1e6\n.set FUN_8c20e1e6, FUN_8c20e1e6_def\n");

}
//@unit 8c20e272
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e272_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e272");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 2) && ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 3)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 4) != 0 && (*(le<int>* )(unsigned)(iVar1 + 4) != 2)))) ||
      (((*(le<int>* )(unsigned)(iVar1 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar1 + 0x20) != 3)) ||
       (*(le<int>* )(unsigned)(iVar1 + 0x5c) != 0)))) &&
     (((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) != 1 || (*(le<int>* )(unsigned)(iVar1 + 4) != 0)) ||
       ((*(le<int>* )(unsigned)(iVar1 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar1 + 0x20) != 3)))) ||
      (*(le<int>* )(unsigned)(iVar1 + 0x5c) != 0)))) {
    return 0;
  }
  *ar6 = ar5 + 1;
  return 5;
}

__asm__(".globl FUN_8c20e272\n.set FUN_8c20e272, FUN_8c20e272_def\n");

}
//@unit 8c20e300
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e300_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e300");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) && (*(le<int>* )(unsigned)(iVar1 + 4) == 0)) && (*(le<int>* )(unsigned)(iVar1 + 0x3c) == 3)) {
    *ar6 = ar5 + 1;
    return 6;
  }
  return 0;
}

__asm__(".globl FUN_8c20e300\n.set FUN_8c20e300, FUN_8c20e300_def\n");

}
//@unit 8c20e328
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e328_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if (((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) && (*(le<int>* )(unsigned)(iVar1 + 4) == 0)) &&
      ((*(le<int>* )(unsigned)(iVar1 + 0x20) == 2 || (*(le<int>* )(unsigned)(iVar1 + 0x20) == 3)))) &&
     ((*(le<int>* )(unsigned)(iVar1 + 0x54) == 1 || (*(le<int>* )(unsigned)(iVar1 + 0x54) == 3)))) {
    *ar6 = ar5 + 1;
    return 7;
  }
  return 0;
}

__asm__(".globl FUN_8c20e328\n.set FUN_8c20e328, FUN_8c20e328_def\n");

}
//@unit 8c20e368
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e368_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e368");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if (((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) && (*(le<int>* )(unsigned)(iVar1 + 4) == 0)) &&
      ((*(le<int>* )(unsigned)(iVar1 + 0x20) == 2 || (*(le<int>* )(unsigned)(iVar1 + 0x20) == 3)))) &&
     (*(le<int>* )(unsigned)(iVar1 + 0x60) == 0)) {
    *ar6 = ar5 + 1;
    return 8;
  }
  return 0;
}

__asm__(".globl FUN_8c20e368\n.set FUN_8c20e368, FUN_8c20e368_def\n");

}
//@unit 8c20e3a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e3a0_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e3a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) && (*(le<int>* )(unsigned)(iVar1 + 4) == 0)) && (*(le<int>* )(unsigned)(iVar1 + 0xc) == 3)) {
    *ar6 = ar5 + 1;
    return 9;
  }
  return 0;
}

__asm__(".globl FUN_8c20e3a0\n.set FUN_8c20e3a0, FUN_8c20e3a0_def\n");

}
//@unit 8c20e400
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e400_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e400");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 1) && (*(le<int>* )(unsigned)(iVar1 + 4) == 0)) && (*(le<int>* )(unsigned)(iVar1 + 0x20) == 0)) {
    *ar6 = ar5 + 1;
    return 10;
  }
  return 0;
}

__asm__(".globl FUN_8c20e400\n.set FUN_8c20e400, FUN_8c20e400_def\n");

}
//@unit 8c20e428
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e428_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e428");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) &&
     (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar5 * 4 + ar4) + 0xbc) == 1)) {
    *ar6 = ar5 + 1;
    return 0xb;
  }
  return 0;
}

__asm__(".globl FUN_8c20e428\n.set FUN_8c20e428, FUN_8c20e428_def\n");

}
//@unit 8c20e480
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e480_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* piVar4;
  int iVar5;
  
  piVar4 = (le<int>* )(unsigned)(ar5 * 4 + ar4);
  iVar2 = piVar4[1];
  iVar3 = *piVar4;
  iVar5 = piVar4[2];
  if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) {
    if (((*(le<int>* )(unsigned)(iVar3 + 8) == 0) &&
        (((((*(le<int>* )(unsigned)(iVar3 + 0x20) == 2 || (*(le<int>* )(unsigned)(iVar3 + 0x20) == 3)) &&
           (*(le<int>* )(unsigned)(iVar3 + 0x54) == 1)) &&
          ((*(le<int>* )(unsigned)(iVar3 + 0x2c) == 10 && (*(le<int>* )(unsigned)(iVar3 + 0x30) == 0xb)))) &&
         (*(le<int>* )(unsigned)(iVar3 + 0x34) == 0)))) && (*(le<int>* )(unsigned)(iVar3 + 0x38) == 0)) {
      if (iVar2 != 0) {
        if (((*(le<int>* )(unsigned)(iVar2 + 8) != 2) ||
            ((*(le<int>* )(unsigned)(iVar2 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar2 + 0x20) != 3)))) ||
           ((*(le<int>* )(unsigned)(iVar2 + 0x54) != 3 ||
            ((((*(le<int>* )(unsigned)(iVar2 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar2 + 0x30) != 10)) ||
              (*(le<int>* )(unsigned)(iVar2 + 0x34) != 0)) || (*(le<int>* )(unsigned)(iVar2 + 0x38) != 0))))))
        goto LAB_8c20e580;
        goto LAB_8c20e514;
      }
LAB_8c20e5bc:
      *ar6 = ar5 + 2;
    }
    else {
LAB_8c20e514:
      if ((((*(le<int>* )(unsigned)(iVar3 + 8) != 2) ||
           ((*(le<int>* )(unsigned)(iVar3 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar3 + 0x20) != 3)))) ||
          (*(le<int>* )(unsigned)(iVar3 + 0x54) != 1)) ||
         (((*(le<int>* )(unsigned)(iVar3 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar3 + 0x30) != 0xb)) ||
          ((*(le<int>* )(unsigned)(iVar3 + 0x34) != 0 || (*(le<int>* )(unsigned)(iVar3 + 0x38) != 1)))))) goto LAB_8c20e600;
      if (iVar2 == 0) goto LAB_8c20e5bc;
      if (((*(le<int>* )(unsigned)(iVar2 + 8) != 2) ||
          (((*(le<int>* )(unsigned)(iVar2 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar2 + 0x20) != 3)) ||
           (*(le<int>* )(unsigned)(iVar2 + 0x54) != 3)))) ||
         (((*(le<int>* )(unsigned)(iVar2 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar2 + 0x30) != 10)) ||
          ((*(le<int>* )(unsigned)(iVar2 + 0x34) != 0 || (*(le<int>* )(unsigned)(iVar2 + 0x38) != 1)))))) {
LAB_8c20e580:
        *ar6 = ar5 + 2;
        return 0xc;
      }
      if (iVar5 != 0) {
        if (((*(le<int>* )(unsigned)(iVar5 + 8) != 2) ||
            ((*(le<int>* )(unsigned)(iVar5 + 0x20) != 2 && (*(le<int>* )(unsigned)(iVar5 + 0x20) != 3)))) ||
           ((*(le<int>* )(unsigned)(iVar5 + 0x54) != 3 ||
            ((*(le<int>* )(unsigned)(iVar5 + 0x34) != 1 || (*(le<int>* )(unsigned)(iVar5 + 0x38) != 0)))))) {
          *ar6 = ar5 + 3;
          return 0xc;
        }
        goto LAB_8c20e600;
      }
      *ar6 = ar5 + 3;
    }
    uVar1 = 1;
  }
  else {
LAB_8c20e600:
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20e480\n.set FUN_8c20e480, FUN_8c20e480_def\n");

}
//@unit 8c20e608
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e608_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e608");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 2) || ((*(le<undefined4>* )(unsigned)(unsigned)0x8c275798) == 3)) && (*(le<int>* )(unsigned)(iVar1 + 4) == 2)) {
    if ((((*(le<int>* )(unsigned)(iVar1 + 0x20) != 0) && (*(le<int>* )(unsigned)(iVar1 + 0x20) != 2)) ||
        ((*(le<int>* )(unsigned)(iVar1 + 0x20) == 2 &&
         ((*(le<int>* )(unsigned)(iVar1 + 0xc) != 0 || (*(le<int>* )(unsigned)(iVar1 + 0x10) != 1)))))) ||
       ((*(le<int>* )(unsigned)(iVar1 + 0x20) == 0 && (*(le<int>* )(unsigned)(iVar1 + 0xc) != 0)))) {
      *ar6 = ar5 + 1;
      return 0xd;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c20e608\n.set FUN_8c20e608, FUN_8c20e608_def\n");

}
//@unit 8c20e664
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e664_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e664");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((*(le<int>* )(unsigned)(iVar1 + 8) == 0) &&
     ((*(le<int>* )(unsigned)(iVar1 + 0x2c) != 10 || (*(le<int>* )(unsigned)(iVar1 + 0x30) != 0xb)))) {
    *ar6 = ar5 + 1;
    return 0xe;
  }
  return 0;
}

__asm__(".globl FUN_8c20e664\n.set FUN_8c20e664, FUN_8c20e664_def\n");

}
//@unit 8c20e6c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e6c0_def(int ar4,int ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e6c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = *(le<int>* )(unsigned)(ar5 * 4 + ar4);
  if ((((*(le<int>* )(unsigned)(iVar1 + 4) == 1) && (iVar1 = *(le<int>* )(unsigned)(0xa0 + iVar1), iVar1 != 0)) &&
      (iVar1 != 0)) && (((iVar1 != 0 && (iVar1 != 0x20000000)) && (iVar1 != 0x40000000)))) {
    *ar6 = ar5 + 1;
    return 0xf;
  }
  return 0;
}

__asm__(".globl FUN_8c20e6c0\n.set FUN_8c20e6c0, FUN_8c20e6c0_def\n");

}
//@unit 8c20e720
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e720");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((((*(le<int>* )(unsigned)(ar4 + 8) == 0) &&
       (((*(le<int>* )(unsigned)(ar4 + 0x20) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x20) == 3)) && (*(le<int>* )(unsigned)(ar4 + 0x54) == 1)))
       ) && (((*(le<int>* )(unsigned)(ar4 + 0x2c) == 10 && (*(le<int>* )(unsigned)(ar4 + 0x30) == 0xb)) &&
             (*(le<int>* )(unsigned)(ar4 + 0x34) == 0)))) && (*(le<int>* )(unsigned)(ar4 + 0x38) == 0)) {
    uVar1 = 2;
  }
  if ((((*(le<int>* )(unsigned)(ar4 + 8) == 2) && ((*(le<int>* )(unsigned)(ar4 + 0x20) == 2 || (*(le<int>* )(unsigned)(ar4 + 0x20) == 3)))) &&
      (*(le<int>* )(unsigned)(ar4 + 0x54) == 1)) &&
     ((((*(le<int>* )(unsigned)(ar4 + 0x2c) == 10 && (*(le<int>* )(unsigned)(ar4 + 0x30) == 0xb)) && (*(le<int>* )(unsigned)(ar4 + 0x34) == 0)
       ) && (*(le<int>* )(unsigned)(ar4 + 0x38) == 1)))) {
    uVar1 = 3;
  }
  return uVar1;
}

__asm__(".globl FUN_8c20e720\n.set FUN_8c20e720, FUN_8c20e720_def\n");

}
//@unit 8c20e78e
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20e78e_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e78e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *ar4;
  iVar4 = ar4[1];
  iVar2 = ar4[2];
  if ((((*(le<int>* )(unsigned)(iVar3 + 8) == 0) &&
       (((*(le<int>* )(unsigned)(iVar3 + 0x20) == 2 || (*(le<int>* )(unsigned)(iVar3 + 0x20) == 3)) &&
        (*(le<int>* )(unsigned)(iVar3 + 0x54) == 1)))) &&
      (((*(le<int>* )(unsigned)(iVar3 + 0x2c) == 10 && (*(le<int>* )(unsigned)(iVar3 + 0x30) == 0xb)) &&
       (*(le<int>* )(unsigned)(iVar3 + 0x34) == 0)))) && (*(le<int>* )(unsigned)(iVar3 + 0x38) == 0)) {
    *(le<undefined4>* )(unsigned)(iVar4 + 8) = 2;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x54) = 3;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x2c) = 10;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x30) = 10;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x34) = 0;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x38) = 0;
  }
  iVar1 = *(le<int>* )(unsigned)(iVar3 + 8);
  if ((((iVar1 == 2) &&
       ((*(le<int>* )(unsigned)(iVar3 + 0x20) == 2 || (iVar1 = *(le<int>* )(unsigned)(iVar3 + 0x20), iVar1 == 3)))) &&
      (iVar1 = *(le<int>* )(unsigned)(iVar3 + 0x54), iVar1 == 1)) &&
     ((((iVar1 = *(le<int>* )(unsigned)(iVar3 + 0x2c), iVar1 == 10 &&
        (iVar1 = *(le<int>* )(unsigned)(iVar3 + 0x30), iVar1 == 0xb)) && (*(le<int>* )(unsigned)(iVar3 + 0x34) == 0)) &&
      (iVar1 = *(le<int>* )(unsigned)(iVar3 + 0x38), iVar1 == 1)))) {
    *(le<undefined4>* )(unsigned)(iVar4 + 8) = 2;
    iVar1 = 0x54;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x54) = 3;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x2c) = 10;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x30) = 10;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x34) = 0;
    *(le<undefined4>* )(unsigned)(iVar4 + 0x38) = 1;
    *(le<undefined4>* )(unsigned)(iVar2 + 8) = 2;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x54) = 3;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x2c) = 8;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x30) = 6;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x34) = 1;
    *(le<undefined4>* )(unsigned)(iVar2 + 0x38) = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c20e78e\n.set FUN_8c20e78e, FUN_8c20e78e_def\n");

}
//@unit 8c20e838
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e838_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if (ar5 <= ar4) {
    ar4 = ar5;
  }
  if (ar4 == 1) {
    return 0;
  }
  if (ar4 == 2) {
    return 1;
  }
  if (ar4 == 4) {
    return 2;
  }
  if (ar4 != 8) {
    if (ar4 == 0x10) {
      return 4;
    }
    if (ar4 == 0x20) {
      return 5;
    }
    if (ar4 == 0x40) {
      return 6;
    }
    if (ar4 == 0x80) {
      return 7;
    }
    if (ar4 == 0x100) {
      return 8;
    }
    if (ar4 == 0x200) {
      return 9;
    }
    if (ar4 == 0x400) {
      return 10;
    }
  }
  return 3;
}

__asm__(".globl FUN_8c20e838\n.set FUN_8c20e838, FUN_8c20e838_def\n");

}
//@unit 8c20e8c6
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20e8c6_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20e8c6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 unaff_r8 = 0;
  undefined4 unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  undefined4 unaff_r13 = 0;
  le<int>* piVar3;
  undefined4 unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e838(ar7,ar7,ar6,ar7));
  if (ar6 != 0) {
    ({ unsigned long t0_ = (unsigned long)(in_PR); unsigned long t1_ = (unsigned long)(unaff_r8); unsigned long t2_ = (unsigned long)(unaff_r9); unsigned long t3_ = (unsigned long)(unaff_r10); unsigned long t4_ = (unsigned long)(unaff_r11); unsigned long t5_ = (unsigned long)(unaff_r12); unsigned long t6_ = (unsigned long)(unaff_r13); unsigned long t7_ = (unsigned long)(
                 unaff_r14); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 20) = (unsigned)t5_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 24) = (unsigned)t6_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 28) = (unsigned)t7_; vsp = (((unsigned long)(fr0_ - 0)) - 32); FUN_8c20e9ae(ar5,ar7,ar7,s0); });
  }
  ar7_00 = s0;
  ({ unsigned long ri0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c26d63c)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + iVar1 * 4) + ar4,ar5,ar7,s0); });
  piVar3 = (le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + (iVar1 + -1) * 4);
  do {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f25a(ar5,ar7,ar7,ar7_00));
    ar7 = ar7 >> 1;
    if (ar6 != 0) {
      uVar2 = ({ unsigned long t0_ = (unsigned long)(in_PR); unsigned long t1_ = (unsigned long)(unaff_r8); unsigned long t2_ = (unsigned long)(unaff_r9); unsigned long t3_ = (unsigned long)(unaff_r10); unsigned long t4_ = (unsigned long)(unaff_r11); unsigned long t5_ = (unsigned long)(unaff_r12); unsigned long t6_ = (unsigned long)(
                           unaff_r13); unsigned long t7_ = (unsigned long)(unaff_r14); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 0) = (unsigned)t0_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 4) = (unsigned)t1_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 8) = (unsigned)t2_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 12) = (unsigned)t3_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 16) = (unsigned)t4_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 20) = (unsigned)t5_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 24) = (unsigned)t6_; *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 32) + 28) = (unsigned)t7_; vsp = (((unsigned long)(fr0_ - 0)) - 32); FUN_8c20e9ae(ar5,ar7,ar7,s0); });
    }
    ar7_00 = s0;
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*piVar3 + ar4,ar5,ar7,s0); });
    piVar3 = piVar3 + -1;
  } while ((undefined *)(unsigned)0x8c26d63b < piVar3);
  return uVar2;
}

__asm__(".globl FUN_8c20e8c6\n.set FUN_8c20e8c6, FUN_8c20e8c6_def\n");

}
//@unit 8c20e8dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
FUN_8c20e8dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20e8dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);
  undefined4 s24 = *(le<undefined4>* )(vsp + 24);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  undefined4 unaff_r12 = 0;
  le<int>* piVar3;
  int unaff_r14 = 0;
  undefined4 in_PR = 0;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e838(ar7,ar5,ar6,ar7));
  if (unaff_r10 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24));
  }
  a7 = s24;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + iVar1 * 4) + unaff_r9,unaff_r12,unaff_r14,s24); });
  piVar3 = (le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d63c) + (iVar1 + -1) * 4);
  do {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20f25a(unaff_r12,unaff_r14,unaff_r14,a7));
    unaff_r14 = unaff_r14 >> 1;
    if (unaff_r10 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20e9ae(unaff_r12,unaff_r14,unaff_r14,s24));
    }
    a7 = s24;
    uVar2 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); s_UUUU_t_20ed60(*piVar3 + unaff_r9,unaff_r12,unaff_r14,s24); });
    piVar3 = piVar3 + -1;
  } while (&(*(undefined1 *)(unsigned)0x8c26d63b) < piVar3);
  return uVar2;
}

__asm__(".globl FUN_8c20e8dc\n.set FUN_8c20e8dc, FUN_8c20e8dc_def\n");

}
//@unit 8c20e9ae
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c20e9ae_def(byte *ar4,int ar5,uint ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20e9ae");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);
  undefined4 s24 = *(le<undefined4>* )(vsp + 24);
  undefined4 s28 = *(le<undefined4>* )(vsp + 28);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  le<int>* piVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  le<undefined4>* puVar13;
  
  iVar3 = (int)(int)0xffffbfa8;
  if (ar5 == 1) {
    ar6 = 1;
  }
  else if (ar6 != 1) {
    puVar13 = (le<undefined4>* )(unsigned)((int)&s28 + iVar3);
    *(le<unsigned>* )(unsigned)((int)&s12 + iVar3) = puVar13;
    for (iVar12 = ar5; iVar12 != 0; iVar12 = iVar12 + -1) {
      *puVar13 = 0;
      puVar13[1] = 0;
      puVar13[2] = 0;
      puVar13[3] = 0;
      puVar13 = puVar13 + 4;
    }
    puVar13 = (le<undefined4>* )(unsigned)((fr0_ + (int)0xffffffe4) + 0x4048 + iVar3);
    *(le<unsigned>* )(unsigned)((int)&s0 + iVar3) = puVar13;
    *puVar13 = 0;
    *(le<unsigned>* )(unsigned)((int)&s8 + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(le<unsigned>* )(unsigned)((int)&s16 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    puVar13 = (le<undefined4>* )(unsigned)((fr0_ + (int)0xffffffe4) + 0x4038 + iVar3);
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3) = puVar13;
    *puVar13 = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3) = puVar13 + 1;
    puVar13[1] = 0;
    *(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3) = puVar13 + 2;
    puVar13[2] = 0;
    *(le<unsigned>* )(unsigned)((int)&s4 + iVar3) = puVar13 + 3;
    puVar13[3] = 0;
    *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) = ar6;
    while (*(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) != 0) {
      piVar8 = ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s12 + iVar3));
      *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) = ar5;
      while (*(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) != 0) {
        bVar1 = ar4[3];
        iVar6 = *piVar8;
        bVar2 = ar4[2];
        iVar12 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s0 + iVar3));
        *(le<unsigned>* )(unsigned)((int)&s20 + iVar3) = piVar8 + 1;
        iVar4 = piVar8[1];
        uVar7 = iVar6 + (uint)bVar1 + iVar12;
        bVar1 = ar4[1];
        iVar12 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s8 + iVar3));
        *(le<unsigned>* )(unsigned)((int)&s24 + iVar3) = piVar8 + 2;
        uVar5 = iVar4 + (uint)bVar2 + iVar12;
        uVar11 = piVar8[2] + (uint)bVar1 + *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3));
        uVar9 = (uint)*ar4;
        if ((int)uVar7 < 0) {
          uVar7 = 0;
        }
        else if ((int)0xff < (int)uVar7) {
          uVar7 = (int)0xff;
        }
        if ((int)uVar5 < 0) {
          uVar5 = 0;
        }
        else if ((int)0xff < (int)uVar5) {
          uVar5 = (int)0xff;
        }
        if ((int)uVar11 < 0) {
          uVar11 = 0;
        }
        else if ((int)0xff < (int)uVar11) {
          uVar11 = (int)0xff;
        }
        if ((int)uVar9 < 0) {
          uVar9 = 0;
        }
        else if ((int)0xff < (int)uVar9) {
          uVar9 = (int)0xff;
        }
        ar4[3] = (byte)uVar7;
        iVar12 = 0x8000000;
        ar4[2] = (byte)uVar5;
        uVar10 = (uint)0xf8;
        ar4[1] = (byte)uVar11;
        *ar4 = (byte)uVar9;
        if (ar7 == iVar12) {
          ar6 = (int)0xfc & uVar5 | 2;
          uVar5 = uVar5 - ar6;
          uVar11 = uVar11 - (uVar10 & uVar11 | 4);
          uVar9 = 0;
          uVar7 = uVar7 - (uVar7 & uVar10 | 4);
        }
        else if (ar7 == 0x10000000) {
          uVar10 = (uint)0xf0;
          uVar5 = uVar5 - ((int)uVar5 >> 4 & 8U | uVar5 & uVar10 | 4);
          uVar11 = uVar11 - ((int)uVar11 >> 4 & 8U | uVar11 & uVar10 | 4);
          ar6 = (int)uVar9 >> 4 & 8U | uVar10 & uVar9 | 4;
          uVar9 = uVar9 - ar6;
          *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar3) = uVar9;
          uVar7 = uVar7 - ((int)uVar7 >> 4 & 8U | uVar7 & uVar10 | 4);
        }
        else {
          ar6 = uVar11;
          if (ar7 == 0) {
            uVar5 = uVar5 - (uVar5 & uVar10 | 4);
            ar6 = uVar7 - (uVar7 & uVar10 | 4);
            uVar11 = uVar11 - (uVar10 & uVar11 | 4);
            *(le<uint>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar3) = uVar11;
            uVar7 = ar6;
          }
        }
        iVar12 = (int)(uVar7 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s0 + iVar3)) = iVar12;
        *piVar8 = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff4) + iVar3)) = uVar7 + iVar12 * -2;
        iVar12 = (int)(uVar5 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s8 + iVar3)) = iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s20 + iVar3)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffff8) + iVar3)) = uVar5 + iVar12 * -2;
        iVar12 = (int)(uVar11 * 3 + 4) >> 3;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xffffffec) + iVar3)) = iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s24 + iVar3)) = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((fr0_ + (int)0xfffffffc) + iVar3)) = uVar11 + iVar12 * -2;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s16 + iVar3)) = iVar12;
        piVar8[3] = *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s4 + iVar3)) + iVar12;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)((int)&s4 + iVar3)) = uVar9 + iVar12 * -2;
        ar4 = ar4 + 4;
        piVar8 = piVar8 + 4;
        *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) = *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar3) + -1;
      }
      *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar3) + -1;
    }
  }
  return ar6;
}

__asm__(".globl FUN_8c20e9ae\n.set FUN_8c20e9ae, FUN_8c20e9ae_def\n");

}
//@unit 8c20ed60
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_UUUU_t_20ed60_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_UUUU_t_20ed60");
  return (unsigned)sh4_interp(0x8c20ed60, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_UUUU_t_20ed60\n.set s_UUUU_t_20ed60, s_UUUU_t_20ed60_def\n");
}
//@unit 8c20eec0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20eec0_def(byte *ar4,byte *ar5,byte *ar6,byte *ar7)

{
  TRACE_ENTER("FUN_8c20eec0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined1 * s0 = (undefined1 *)(unsigned long)*(le<unsigned>* )(vsp + 0);
  int s4 = *(le<int>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  int iVar19;
  byte *pbVar20;
  byte *pbVar21;
  
  iVar19 = (s4 * 2 + -1) * 4;
  pbVar18 = ar4 + iVar19;
  pbVar17 = ar5 + iVar19;
  pbVar20 = ar6 + iVar19;
  pbVar21 = ar7 + iVar19;
  iVar10 = (uint)pbVar18[3] + (uint)pbVar17[3] * 2 + (uint)pbVar20[3] * 2 + (uint)pbVar21[3];
  iVar11 = (uint)pbVar18[2] + (uint)pbVar17[2] * 2 + (uint)pbVar20[2] * 2 + (uint)pbVar21[2];
  iVar12 = (uint)pbVar18[1] + (uint)pbVar17[1] * 2 + (uint)pbVar20[1] * 2 + (uint)pbVar21[1];
  iVar1 = (uint)*pbVar18 + (uint)*pbVar17 * 2 + (uint)*pbVar20 * 2 + (uint)*pbVar21;
  iVar13 = (uint)ar4[3] + (uint)ar5[3] * 2 + (uint)ar6[3] * 2 + (uint)ar7[3];
  iVar14 = (uint)ar4[2] + (uint)ar5[2] * 2 + (uint)ar6[2] * 2 + (uint)ar7[2];
  iVar15 = (uint)ar4[1] + (uint)ar5[1] * 2 + (uint)ar6[1] * 2 + (uint)ar7[1];
  iVar2 = (uint)*ar4 + (uint)*ar5 * 2 + (uint)*ar6 * 2 + (uint)*ar7;
  iVar19 = iVar10;
  iVar5 = iVar11;
  iVar7 = iVar12;
  iVar9 = iVar1;
  iVar4 = iVar13;
  iVar6 = iVar14;
  iVar8 = iVar15;
  iVar16 = iVar2;
  while (s4 = s4 + -1, s4 != 0) {
    iVar3 = iVar4 * 2 + iVar19;
    iVar19 = (uint)ar4[7] + (uint)ar5[7] * 2 + (uint)ar6[7] * 2 + (uint)ar7[7];
    pbVar17 = ar6 + 8;
    pbVar18 = ar7 + 8;
    iVar4 = (uint)ar4[0xb] + (uint)ar5[0xb] * 2 + (uint)ar6[0xb] * 2 + (uint)ar7[0xb];
    s0[3] = (char)((iVar3 + iVar19 * 2 + iVar4) * 0x39 >> 0xb);
    iVar3 = iVar6 * 2 + iVar5;
    iVar5 = (uint)ar4[6] + (uint)ar5[6] * 2 + (uint)ar6[6] * 2 + (uint)ar7[6];
    iVar6 = (uint)ar4[10] + (uint)ar5[10] * 2 + (uint)ar6[10] * 2 + (uint)ar7[10];
    s0[2] = (char)((iVar3 + iVar5 * 2 + iVar6) * 0x39 >> 0xb);
    iVar3 = iVar8 * 2 + iVar7;
    iVar7 = (uint)ar4[5] + (uint)ar5[5] * 2 + (uint)ar6[5] * 2 + (uint)ar7[5];
    iVar8 = (uint)ar4[9] + (uint)ar5[9] * 2 + (uint)ar6[9] * 2 + (uint)ar7[9];
    s0[1] = (char)((iVar3 + iVar7 * 2 + iVar8) * 0x39 >> 0xb);
    iVar3 = iVar16 * 2 + iVar9;
    iVar9 = (uint)ar4[4] + (uint)ar5[4] * 2 + (uint)ar6[4] * 2 + (uint)ar7[4];
    ar7 = ar7 + 8;
    ar6 = ar6 + 8;
    iVar16 = (uint)ar4[8] + (uint)ar5[8] * 2 + (uint)*pbVar17 * 2 + (uint)*pbVar18;
    ar5 = ar5 + 8;
    ar4 = ar4 + 8;
    *s0 = (char)((iVar3 + iVar9 * 2 + iVar16) * 0x39 >> 0xb);
    s0 = s0 + 4;
  }
  s0[3] = (char)((iVar4 * 2 + iVar19 + iVar10 * 2 + iVar13) * 0x39 >> 0xb);
  s0[2] = (char)((iVar6 * 2 + iVar5 + iVar11 * 2 + iVar14) * 0x39 >> 0xb);
  iVar19 = (iVar8 * 2 + iVar7 + iVar12 * 2 + iVar15) * 0x39 >> 0xb;
  s0[1] = (char)iVar19;
  *s0 = (char)((iVar16 * 2 + iVar9 + iVar1 * 2 + iVar2) * 0x39 >> 0xb);
  return iVar19;
}

__asm__(".globl FUN_8c20eec0\n.set FUN_8c20eec0, FUN_8c20eec0_def\n");

}
//@unit 8c20f25a
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20f25a_def(undefined1 *ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20f25a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4148; for (int i_ = 0; i_ < 4148; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  
  iVar2 = (int)(int)0xffffeff4;
  iVar6 = (int)(ar5 + (uint)(ar5 < 0)) >> 1;
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8) = (int)(ar6 + (uint)(ar6 < 0)) >> 1;
  puVar9 = (fr0_ + (int)0xffffffec) + iVar2;
  puVar5 = ar4;
  for (iVar4 = ar5; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar9 = *puVar5;
    puVar9[1] = puVar5[1];
    puVar9[2] = puVar5[2];
    puVar1 = puVar5 + 3;
    puVar5 = puVar5 + 4;
    puVar9[3] = *puVar1;
    puVar9 = puVar9 + 4;
  }
  iVar4 = *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8);
  *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2) = ar5 << 2;
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8) = ar5 << 3;
  *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar2) = iVar6 << 2;
  puVar9 = ar4 + (ar6 + -1) * ar5 * 2;
  puVar5 = ar4;
  while (iVar4 = iVar4 + -1, iVar4 != 0) {
    iVar7 = *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 8);
    iVar8 = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2);
    *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 4) = iVar6;
    *(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2) = ar4;
    (vsp = ((unsigned long)(fr0_ - 4148)), FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar8,puVar5 + iVar7));
    ar4 = ar4 + *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe8) + iVar2);
    puVar9 = puVar5 + iVar8;
    puVar5 = puVar5 + iVar7;
  }
  iVar4 = *(le<int>* )(unsigned)((fr0_ + (int)0xffffffe4) + iVar2);
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2 + 4) = iVar6;
  *(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x28)) + iVar2) = ar4;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 4148)), FUN_8c20eec0(puVar9,puVar5,puVar5 + iVar4,(fr0_ + (int)0xffffffec) + iVar2));
  return uVar3;
}

__asm__(".globl FUN_8c20f25a\n.set FUN_8c20f25a, FUN_8c20f25a_def\n");

}
//@unit 8c20f340
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c20f340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20f340");
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

__asm__(".globl FUN_8c20f340\n.set FUN_8c20f340, FUN_8c20f340_def\n");

}
//@unit 8c20f640
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20f640_def(le<uint>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20f640");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4160; for (int i_ = 0; i_ < 4160; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 a6;
  uint uVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar7 = ar4[0x25];
  uVar9 = ar4[0x26];
  (*(le<uint>* )(fr0_ - 0x3c)) = ar4[0x27];
  uVar6 = ar4[0x24];
  ((le<int>* )(fr0_ - 0x30))[0] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d698);
  ((le<int>* )(fr0_ - 0x30))[1] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d69c);
  ((le<int>* )(fr0_ - 0x30))[2] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6a0);
  ((le<int>* )(fr0_ - 0x30))[3] = (*(le<undefined4>* )(unsigned)(unsigned)0x8c26d6a4);
  uVar8 = *ar4;
  if ((uVar8 & 1) != 0) {
    uVar7 = uVar7 & 0x1fffffff | ar4[5] << 0x1d;
  }
  if ((uVar8 & 2) != 0) {
    uVar7 = uVar7 & 0xe7ffffff | ar4[6] << 0x1b;
  }
  a7 = 0x4000000;
  if ((uVar8 & 0x20) != 0) {
    if (ar4[10] == 0) {
      uVar7 = uVar7 & 0xfbffffff;
    }
    else {
      uVar7 = uVar7 | 0x4000000;
    }
  }
  uVar5 = uVar8 & 8;
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xfdffffff | (ar4[8] >> 1) << 0x19;
  }
  if ((uVar8 & 0x200) != 0) {
    uVar7 = uVar7 & 0xfeffffff | ar4[0x10] << 0x18;
  }
  if (uVar5 != 0) {
    uVar7 = uVar7 & 0xff7fffff | (ar4[8] & 1) << 0x17;
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar7 = uVar7 & 0xffbfffff | ar4[4] << 0x16;
  }
  if ((uVar8 & 0x4000000) != 0) {
    if (ar4[0x2d] == 0) {
      uVar7 = uVar7 & 0xffefffff;
    }
    else {
      uVar7 = uVar7 | 0x100000;
    }
  }
  uVar2 = uVar9 & 0x1fffffff;
  if ((uVar8 & 0x40) == 0) goto LAB_8c20f862;
  switch(ar4[0xb]) {
  case 0:
    uVar9 = 0x10000000;
    uVar2 = uVar2 | 0xa0000000;
    goto code_r0x8c20f7da;
  case 1:
    uVar9 = 0x14000000;
    uVar2 = uVar2 | 0x80000000;
code_r0x8c20f7da:
    uVar9 = uVar2 & 0xe3ffffff | uVar9;
    goto LAB_8c20f862;
  case 2:
    uVar9 = 0xc0000000;
    break;
  case 3:
    uVar9 = 0x40000000;
    break;
  case 4:
    uVar9 = 0xe0000000;
    break;
  case 5:
    uVar9 = 0x60000000;
    break;
  case 6:
    uVar9 = 0xa0000000;
    break;
  default:
    goto LAB_8c20f862;
  case 8:
    uVar9 = 0x80000000;
    break;
  case 10:
    uVar9 = 0x20000000;
    break;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f862;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f862:
  if ((uVar8 & 0x80) == 0) goto LAB_8c20f8ea;
  uVar2 = uVar9 & 0xe3ffffff;
  switch(ar4[0xc]) {
  case 0:
    uVar2 = 0x10000000;
    uVar9 = uVar9 & 0x1fffffff | 0xa0000000;
    goto code_r0x8c20f8ba;
  case 1:
    uVar2 = 0x14000000;
    uVar9 = uVar9 & 0x1fffffff | 0x80000000;
code_r0x8c20f8ba:
    uVar9 = uVar9 & 0xe3ffffff | uVar2;
    goto LAB_8c20f8ea;
  case 2:
    uVar9 = 0x18000000;
    break;
  default:
    goto LAB_8c20f8ea;
  case 4:
    uVar9 = 0x1c000000;
    break;
  case 6:
    uVar9 = 0x14000000;
    break;
  case 7:
    uVar9 = 0xc000000;
    break;
  case 8:
    uVar9 = 0x10000000;
    break;
  case 9:
    uVar9 = 0x8000000;
    break;
  case 10:
    uVar9 = uVar2 | 0x4000000;
    goto LAB_8c20f8ea;
  case 0xb:
    uVar9 = uVar2;
    goto LAB_8c20f8ea;
  }
  uVar9 = uVar9 | uVar2;
LAB_8c20f8ea:
  if ((uVar8 & 0x1000000) != 0) {
    if (ar4[0xd] == 0) {
      uVar9 = uVar9 & 0xfdffffff;
    }
    else {
      uVar9 = uVar9 | 0x2000000;
    }
  }
  if ((uVar8 & 0x2000000) != 0) {
    if (ar4[0xe] == 0) {
      uVar9 = uVar9 & 0xfeffffff;
    }
    else {
      uVar9 = uVar9 | 0x1000000;
    }
  }
  a5 = 3;
  if ((uVar8 & 0x100) != 0) {
    uVar9 = uVar9 & 0xff3fffff | (ar4[0xf] & 3) << 0x16;
  }
  if ((uVar8 & 0x40000) != 0) {
    if (ar4[0x19] == 0) {
      uVar9 = uVar9 & 0xffdfffff;
    }
    else {
      uVar9 = uVar9 | 0x200000;
    }
  }
  if ((uVar8 & 0x400) != 0) {
    if (ar4[0x11] == 0) {
      uVar9 = uVar9 & 0xffefffff;
    }
    else {
      uVar9 = uVar9 | 0x100000;
    }
  }
  if ((uVar8 & 0x800) != 0) {
    if (ar4[0x12] == 0) {
      uVar9 = uVar9 & 0xfff7ffff;
    }
    else {
      uVar9 = uVar9 | 0x80000;
    }
  }
  a6 = 0x1000;
  if ((uVar8 & 0x1000) != 0) {
    uVar9 = uVar9 & 0xfffe7fff | ar4[0x13] << 0xf;
  }
  if ((uVar8 & 0x2000) != 0) {
    uVar9 = uVar9 & 0xfff9ffff | ar4[0x14] << 0x11;
  }
  if ((uVar8 & 0x4000) != 0) {
    uVar9 = uVar9 & 0xffff9fff | ((le<int>* )(fr0_ - 0x30))[ar4[0x15]] << 0xd;
  }
  if ((uVar8 & 0x8000) != 0) {
    if (ar4[0x16] == 0) {
      uVar9 = uVar9 & 0xffffefff;
    }
    else {
      uVar9 = uVar9 | 0x1000;
    }
  }
  if ((uVar8 & 0x10000) != 0) {
    uVar2 = ar4[0x17] & 0xf;
    if (uVar2 == 0) {
      uVar2 = 4;
    }
    uVar9 = uVar9 & 0xfffff0ff | uVar2 << 8;
  }
  if ((uVar8 & 0x20000) != 0) {
    uVar9 = uVar9 & 0xffffff3f | (ar4[0x18] & 3) << 6;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4160)), FUN_8c20f340(*(le<undefined4>* )(unsigned)(ar4[0x1b] + 0xc),3,0x1000,0x4000000));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 4160)), FUN_8c20f340(*(le<undefined4>* )(unsigned)(ar4[0x1b] + 0x10),a5,a6,a7));
    uVar9 = uVar9 & 0xffffffc0 | iVar1 << 3 | uVar2;
  }
  if (((int)ar4[8] >> 1 == 1) && (ar4[0x1b] != 0)) {
    uVar3 = *(le<uint>* )(unsigned)(ar4[0x1b] + 0x18);
    uVar2 = (uint)((uVar3 & 1) != 0) << 0x1f;
    uVar4 = (uVar3 & 8) << 0x1b;
    uVar3 = *(le<uint>* )(unsigned)(ar4[0x1b] + 8) & 0x38000000;
    if ((uVar3 == 0x28000000) || (uVar3 == 0x30000000)) {
      uVar2 = uVar2 | uVar4 | uVar3 | (ar4[0x1a] & 0x3f) << 0x15;
    }
    else {
      uVar2 = (*(le<uint>* )(fr0_ - 0x3c)) & 0x1ffffff | uVar2 | uVar4 | uVar3 |
              (~(*(le<uint>* )(unsigned)(ar4[0x1b] + 0x18) & 4) & 4) << 0x18 |
              (*(le<uint>* )(unsigned)(ar4[0x1b] + 0x18) & 0x10) << 0x15;
    }
    (*(le<uint>* )(fr0_ - 0x3c)) = uVar2 & 0xffe00000 | *(le<uint>* )(unsigned)(ar4[0x1b] + 0x1c) >> 3;
  }
  if ((uVar8 & 0x100000) != 0) {
    uVar2 = ar4[1];
    if (uVar2 == 0) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 1) {
      uVar6 = uVar6 & 0x1fffffff | 0x80000000;
    }
    if (uVar2 == 2) {
      uVar6 = uVar6 & 0x1fffffff | 0xa0000000;
    }
  }
  if ((uVar8 & 0x200000) != 0) {
    uVar6 = uVar6 & 0xf8ffffff | ar4[2] << 0x18;
  }
  uVar2 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9d88);
  if ((uVar8 & 0x8000000) != 0) {
    uVar2 = ar4[0x2e];
  }
  uVar3 = uVar2 << 0x12 | uVar6 & 0xfff3ffff | 0x800000;
  if ((uVar8 & 0x10000000) != 0) {
    uVar3 = uVar2 << 0x12 | uVar6 & 0xfff0ffff | 0x800000 | ar4[0x2f] << 0x10;
  }
  uVar3 = uVar3 & 0xffffff3f;
  if (((ar4[0x28] & 0x60000000) != 0) && ((ar4[2] & 1) != 0)) {
    uVar3 = uVar3 | 0x40;
  }
  if (((uVar8 & 0x10) != 0) && ((ar4[9] & 1) != 0)) {
    uVar3 = uVar3 & 0xffffffbf | ar4[9] << 7 | (*(le<undefined4>* )(unsigned)(unsigned)0x8c2757a0) << 6;
  }
  if ((uVar8 & 0x400000) != 0) {
    uVar3 = uVar3 & 0xffffffcf | ar4[3] << 4;
  }
  uVar6 = uVar3;
  if (uVar5 != 0) {
    uVar2 = (ar4[8] >> 1) << 3;
    uVar6 = uVar3 & 0xfffffff7 | uVar2;
    if (uVar5 != 0) {
      uVar6 = uVar3 & 0xfffffff5 | uVar2 | (ar4[8] & 1) << 1;
    }
  }
  if ((uVar8 & 0x200) != 0) {
    if (ar4[0x10] == 0) {
      uVar6 = uVar6 & 0xfffffffb;
    }
    else {
      uVar6 = uVar6 | 4;
    }
  }
  if ((uVar8 & 0x800000) != 0) {
    uVar6 = ar4[4] | uVar6 & 0xfffffffe;
  }
  ar4[0x25] = uVar7 & 0xffd00000;
  ar4[0x26] = uVar9;
  ar4[0x27] = (*(le<uint>* )(fr0_ - 0x3c));
  ar4[0x24] = uVar6 & 0xe78f00ff;
  return 0;
}

__asm__(".globl FUN_8c20f640\n.set FUN_8c20f640, FUN_8c20f640_def\n");

}
//@unit 8c20fe00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c20fe00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c20fe00");
  return (unsigned)sh4_interp(0x8c20fe00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c20fe00\n.set FUN_8c20fe00, FUN_8c20fe00_def\n");
}
