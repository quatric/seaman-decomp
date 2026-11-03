//@unit 8c0300a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0300a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0300a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdc98(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x674 + ar4 + iVar1 * 4) = 0;
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      *(le<undefined4>* )(unsigned)(0x2f0 + iVar1 * 0x14 + ar4 + iVar2 * 4) = 0;
    }
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0x750 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x730 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x2c8 + ar4 + iVar1) = 0;
  }
  *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = 0xffffffff;
  *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x72c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
  *(le<undefined4>* )(unsigned)(0x770 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x77c + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0xb8 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 100) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x68) = 3;
  *(le<undefined4>* )(unsigned)(0x2ec + ar4) = 4;
  *(le<undefined4>* )(unsigned)(0x778 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0xc8 + ar4 + iVar1 * 0x20) = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c0300a4\n.set FUN_8c0300a4, FUN_8c0300a4_def\n");

}
//@unit 8c0301f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0301f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0301f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      (0x3e8,*(le<int>* )(unsigned)(ar4 + 0x60) + 1,ar6,ar7));
    if (uVar1 < (uint)(*(le<int>* )(unsigned)(0x77c + ar4) - *(le<int>* )(unsigned)(0x674 + ar4 + iVar2 * 4))) {
      *(le<undefined4>* )(unsigned)(0x674 + ar4 + iVar2 * 4) = 0;
    }
  }
  *(le<undefined4>* )(unsigned)(0x708 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x724 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x714 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x710 + ar4) = 0;
  if (*(le<int>* )(unsigned)(0x770 + ar4) == 2) {
    *(le<undefined4>* )(unsigned)(0x770 + ar4) = 2;
  }
  if (*(le<int>* )(unsigned)(0x770 + ar4) == 3) {
    *(le<undefined4>* )(unsigned)(0x770 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x674 + ar4 + *(le<int>* )(unsigned)(0x72c + ar4) * 4) =
         *(le<undefined4>* )(unsigned)(0x77c + ar4);
    *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
    *(le<undefined4>* )(unsigned)(0x72c + ar4) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
  }
  if (*(le<int>* )(unsigned)(0x770 + ar4) == 1) {
    *(le<undefined4>* )(unsigned)(0x770 + ar4) = 1;
  }
  iVar2 = 0x77c;
  *(le<int>* )(unsigned)(0x77c + ar4) = *(le<int>* )(unsigned)(0x77c + ar4) + 1;
  return iVar2;
}

__asm__(".globl FUN_8c0301f8\n.set FUN_8c0301f8, FUN_8c0301f8_def\n");

}
//@unit 8c030304
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_STATUS_FORMAT_030306_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_STATUS_FORMAT_030306");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x28));
  puVar3 = ((undefined1 *)(unsigned)0x8c13292c);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13((*(undefined1 *)(unsigned)0x8c13294f),CONCAT12((*(undefined1 *)(unsigned)0x8c13294e),CONCAT11((*(undefined1 *)(unsigned)0x8c13294d),(*(undefined1 *)(unsigned)0x8c13294c))));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(((undefined1 *)(fr0_ - 0x28)),ar4 + 0x2c8,ar6,ar7); });
  uVar1 = CONCAT31((int3)((uint)uVar1 >> 8),(char)uVar1 + *(char *)(unsigned)(ar4 + 0x728));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x28)),(fr0_ + (int)0xffffffd4),ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = 4;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x20,((undefined1 *)(unsigned)0x8c132a14),ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x40,((undefined1 *)(unsigned)0x8c132a22),ar6,ar7); });
  return uVar1;
}

__asm__(".globl s_STATUS_FORMAT_030306\n.set s_STATUS_FORMAT_030306, s_STATUS_FORMAT_030306_def\n");

}
//@unit 8c0303b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0303b8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0303b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  
  puVar7 = ((undefined1 *)(fr0_ - 0x34));
  puVar5 = ((undefined1 *)(unsigned)0x8c132950);
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar8 = CONCAT13((*(undefined1 *)(unsigned)0x8c132973),CONCAT12((*(undefined1 *)(unsigned)0x8c132972),CONCAT11((*(undefined1 *)(unsigned)0x8c132971),(*(undefined1 *)(unsigned)0x8c132970))));
  iVar4 = ar6;
  uVar3 = ar7;
  if (0 < ar6) {
    iVar4 = 0;
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030550(ar4,ar5,0,ar7));
  }
  if ((((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030538(ar4,ar5,iVar4,uVar3)), iVar1 == 0)) &&
      (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     ((*(le<int>* )(unsigned)(ar4 + 0x778) == 0 && (*(le<int>* )(unsigned)(ar4 + 0x60) <= ar6)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar2;
    *(le<undefined4>* )(unsigned)(ar4 + 0x72c) = ar5;
    *(le<undefined4>* )(unsigned)(ar4 + 0x770) = 1;
    *(le<int>* )(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2c8,iVar4,uVar3); });
    uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),(char)uVar8 + *(char *)(unsigned)(ar4 + 0x728));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x34)),(fr0_ + (int)0xffffffb4),iVar4,uVar3));
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4,((undefined1 *)(fr0_ - 0x34)),iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x20,ar7,iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x40,s0,iVar4,uVar3); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar3;
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x72c) * 0x14 + ar4 + *(le<int>* )(unsigned)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0303b8\n.set FUN_8c0303b8, FUN_8c0303b8_def\n");

}
//@unit 8c030538
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030538_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030538");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x674 + ar4 + ar5 * 4);
}

__asm__(".globl FUN_8c030538\n.set FUN_8c030538, FUN_8c030538_def\n");

}
//@unit 8c030550
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c030550_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030550");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x674;
  *(le<undefined4>* )(unsigned)(0x674 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c030550\n.set FUN_8c030550, FUN_8c030550_def\n");

}
//@unit 8c030568
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030568_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030568");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 152; for (int i_ = 0; i_ < 152; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined4 ar7_00;
  
  puVar7 = ((undefined1 *)(fr0_ - 0x34));
  puVar5 = ((undefined1 *)(unsigned)0x8c132974);
  iVar4 = 0x10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  uVar3 = CONCAT13((*(undefined1 *)(unsigned)0x8c132997),CONCAT12((*(undefined1 *)(unsigned)0x8c132996),CONCAT11((*(undefined1 *)(unsigned)0x8c132995),(*(undefined1 *)(unsigned)0x8c132994))));
  if ((((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) &&
       (iVar4 = ar6, ar7_00 = ar7, iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030538(ar4,ar5,ar6,ar7)), iVar1 == 0)) &&
      (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     ((*(le<int>* )(unsigned)(ar4 + 0x778) == 0 && (*(le<int>* )(unsigned)(ar4 + 0x60) <= ar6)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar2;
    *(le<undefined4>* )(unsigned)(ar4 + 0x72c) = ar5;
    *(le<undefined4>* )(unsigned)(ar4 + 0x770) = 2;
    *(le<int>* )(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2c8,iVar4,ar7_00); });
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + *(char *)(unsigned)(ar4 + 0x728));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x34)),(fr0_ + (int)0xffffffb4),iVar4,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4,((undefined1 *)(fr0_ - 0x34)),iVar4,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x20,ar7,iVar4,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x40,s0,iVar4,ar7_00); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar3;
    *(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x72c) * 0x14 + ar4 + *(le<int>* )(unsigned)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c030568\n.set FUN_8c030568, FUN_8c030568_def\n");

}
//@unit 8c0306d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0306d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0306d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined4 ar7_00;
  undefined4 uVar7;
  
  puVar3 = ((undefined1 *)(fr0_ - 0x3c));
  iVar6 = 0x10;
  puVar5 = (&(*(undefined1 *)(unsigned)0x8c132998));
  do {
    puVar4 = puVar5 + 1;
    *puVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar3[1] = *puVar4;
    puVar3 = puVar3 + 2;
    iVar6 = iVar6 + -1;
  } while (iVar6 != 0);
  uVar7 = 0;
  if ((*(char *)(unsigned)(0x774 + ar4) == '\0') && (*(le<int>* )(unsigned)(0x778 + ar4) == 0)) {
    uVar2 = ar6;
    ar7_00 = ar7;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(le<undefined4>* )(unsigned)(0x2ec + ar4) = uVar1;
    if (*(le<int>* )(unsigned)(0x2e8 + ar4) == -1) {
      if (*(le<int>* )(unsigned)(0x2e8 + ar4) == -1) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
        uVar7 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
        *(le<undefined4>* )(unsigned)(0xb0 + ar4) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x60) = ar6;
        iVar6 = ar4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f82a4))))
                          (0x8c35468c,*(le<undefined4>* )(unsigned)(0x2ec + ar4),ar4,ar7));
        *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = uVar2;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,iVar6,ar7));
        if (*(le<int>* )(unsigned)(0x2e8 + ar4) != -1) {
          *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
        }
      }
    }
    else {
      *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = 0xffffffff;
      uVar7 = 0;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar7,ar7_00));
      uVar2 = ar6;
      uVar7 = ({ unsigned long t0_ = (unsigned long)((*(le<undefined4>* )(fr0_ + 0x00000000))); *(le<unsigned>* )((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
      *(le<undefined4>* )(unsigned)(0xb0 + ar4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x60) = ar6;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,uVar2,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0f82a4(0x8c35468c,*(le<undefined4>* )(unsigned)(0x2ec + ar4),ar4,ar7));
      *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = uVar2;
      if (*(le<int>* )(unsigned)(0x2e8 + ar4) != -1) {
        *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
      }
    }
  }
  return uVar7;
}

__asm__(".globl FUN_8c0306d4\n.set FUN_8c0306d4, FUN_8c0306d4_def\n");

}
//@unit 8c030870
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c030870_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030870");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x770;
  *(le<undefined4>* )(unsigned)(0x770 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c030870\n.set FUN_8c030870, FUN_8c030870_def\n");

}
//@unit 8c03087c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03087c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03087c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar7_00;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x2c));
  puVar3 = ((undefined1 *)(unsigned)0x8c1329bc);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  (*(char *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c1329dc);
  (*(undefined1 *)(fr0_ - 0x3f)) = (*(undefined1 *)(unsigned)0x8c1329dd);
  (*(undefined1 *)(fr0_ - 0x3e)) = (*(undefined1 *)(unsigned)0x8c1329de);
  (*(undefined1 *)(fr0_ - 0x3d)) = (*(undefined1 *)(unsigned)0x8c1329df);
  if (((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) && (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     (*(le<int>* )(unsigned)(ar4 + 0x778) == 0)) {
    uVar1 = ar6;
    ar7_00 = ar7;
    (*(le<undefined4>* )(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = (*(le<undefined4>* )(fr0_ - 0x30));
    *(le<undefined4>* )(unsigned)(ar4 + 0x72c) = ar5;
    *(le<undefined4>* )(unsigned)(ar4 + 0x770) = 2;
    *(le<undefined4>* )(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(((undefined1 *)(fr0_ - 0x2c)),ar4 + 0x2c8,uVar1,ar7_00); });
    (*(char *)(fr0_ - 0x40)) = (*(char *)(fr0_ - 0x40)) + *(char *)(unsigned)(ar4 + 0x728);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x2c)),&(*(char *)(fr0_ - 0x40)),uVar1,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4,((undefined1 *)(fr0_ - 0x2c)),uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x20,ar7,uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x40,s0,uVar1,ar7_00); });
    (*(le<int>* )(fr0_ - 0x38)) = *(le<int>* )(unsigned)(ar4 + 0x72c);
    (*(le<int>* )(fr0_ - 0x3c)) = *(le<int>* )(unsigned)(ar4 + 0x60);
    *(le<undefined4>* )(unsigned)((*(le<int>* )(fr0_ - 0x38)) * 0x14 + ar4 + (*(le<int>* )(fr0_ - 0x3c)) * 4 + 0x2f0) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,uVar1,ar7_00));
    *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c03087c\n.set FUN_8c03087c, FUN_8c03087c_def\n");

}
//@unit 8c0309c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_JUNGLE_0309ca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_JUNGLE_0309ca");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x2b));
  puVar3 = ((undefined1 *)(unsigned)0x8c1329e0);
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar5 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar5[1] = *puVar4;
    puVar5 = puVar5 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = CONCAT13((*(undefined1 *)(unsigned)0x8c132a02),CONCAT12((*(undefined1 *)(unsigned)0x8c132a01),CONCAT11((*(undefined1 *)(unsigned)0x8c132a00),(char)ar5)));
  if (((*(le<int>* )(unsigned)(ar4 + 0x2e8) == -1) && (*(le<int>* )(unsigned)(ar4 + 0x770) == 0)) &&
     (*(le<int>* )(unsigned)(ar4 + 0x778) == 0)) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x60) = 0;
    if ((char)ar5 == '\x01') {
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4,((undefined1 *)(unsigned)0x8c132a24),ar6,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(((undefined1 *)(fr0_ - 0x2b)),ar4 + 0x2c8,ar6,ar7); });
      uVar1 = CONCAT22((short)((uint)uVar1 >> 0x10),
                       CONCAT11((char)((uint)uVar1 >> 8) + *(char *)(unsigned)(ar4 + 0x728),(char)uVar1));
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x2b)),(fr0_ + (int)0xffffffd1),ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4,((undefined1 *)(fr0_ - 0x2b)),ar6,ar7); });
    }
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4 + 0x20,((undefined1 *)(unsigned)0x8c132a2b),ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); strcpy(ar4 + 0x40,((undefined1 *)(unsigned)0x8c132a30),ar6,ar7); });
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl s_JUNGLE_0309ca\n.set s_JUNGLE_0309ca, s_JUNGLE_0309ca_def\n");

}
//@unit 8c030ac4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_EVENT_ROCK_PUSH_030ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_EVENT_ROCK_PUSH_030ac6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x32,ar6,ar7));
  if (((((((iVar1 == 0) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x42,ar6,ar7)),
          iVar1 == 0)) ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x54,ar6,ar7)),
         iVar1 == 0)) ||
        ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x68,ar6,ar7)),
         iVar1 == 0 ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x7a,ar6,ar7)),
         iVar1 == 0)))) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                           (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x8a,ar6,ar7)), iVar1 == 0
        || ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                               (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xa2,ar6,ar7)),
            iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                               (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xb2,ar6,ar7)),
            iVar1 == 0)))))) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                         (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xc7,ar6,ar7)), iVar1 == 0))
     || ((((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                              (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xd7,ar6,ar7)),
           iVar1 == 0 ||
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                              (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xed,ar6,ar7)),
           iVar1 == 0)) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                             (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xfb,ar6,ar7)), iVar1 == 0
          )) || (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x107,ar6,ar7)),
                  iVar1 == 0 ||
                  (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x113,ar6,ar7)),
                  iVar1 == 0)) ||
                 ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x11f,ar6,ar7)),
                  iVar1 == 0 ||
                  ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                      (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x12c,ar6,ar7)),
                   iVar1 == 0 ||
                   (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                      (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x137,ar6,ar7)),
                   iVar1 == 0)))))))))) {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl s_EVENT_ROCK_PUSH_030ac6\n.set s_EVENT_ROCK_PUSH_030ac6, s_EVENT_ROCK_PUSH_030ac6_def\n");

}
//@unit 8c030c9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030c9c_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030c9c");
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

__asm__(".globl FUN_8c030c9c\n.set FUN_8c030c9c, FUN_8c030c9c_def\n");

}
//@unit 8c030d04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c030d04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030d04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x728;
  *(undefined1 *)(unsigned)(0x728 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c030d04\n.set FUN_8c030d04, FUN_8c030d04_def\n");

}
//@unit 8c030d10
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030d10_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030d10");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<int>* )(unsigned)(ar4 + 100) = (int)*ar5;
  *(le<int>* )(unsigned)(ar4 + 0x68) = (int)ar5[1];
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = *(le<undefined4>* )(unsigned)(ar5 + 4);
  return 0x6c;
}

__asm__(".globl FUN_8c030d10\n.set FUN_8c030d10, FUN_8c030d10_def\n");

}
//@unit 8c030d2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030d2c_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030d2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = (char)*(le<undefined4>* )(unsigned)(ar4 + 100);
  ar5[1] = 3;
  uVar1 = *(le<undefined4>* )(unsigned)(ar4 + 0x6c);
  *(le<undefined4>* )(unsigned)(ar5 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c030d2c\n.set FUN_8c030d2c, FUN_8c030d2c_def\n");

}
//@unit 8c030d44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined1 * FUN_8c030d44_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030d44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  return ar4;
}

__asm__(".globl FUN_8c030d44\n.set FUN_8c030d44, FUN_8c030d44_def\n");

}
//@unit 8c030d58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c030d58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c030d58");
  return (unsigned)sh4_interp(0x8c030d58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c030d58\n.set FUN_8c030d58, FUN_8c030d58_def\n");
}
//@unit 8c030e10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c030e10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c030e10");
  return (unsigned)sh4_interp(0x8c030e10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c030e10\n.set FUN_8c030e10, FUN_8c030e10_def\n");
}
//@unit 8c030e34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c030e34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c030e34");
  return (unsigned)sh4_interp(0x8c030e34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c030e34\n.set FUN_8c030e34, FUN_8c030e34_def\n");
}
//@unit 8c030e5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c030e5c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c030e5c");
  return (unsigned)sh4_interp(0x8c030e5c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c030e5c\n.set FUN_8c030e5c, FUN_8c030e5c_def\n");
}
//@unit 8c030e9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030e9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030e9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030eb8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c030e9c\n.set FUN_8c030e9c, FUN_8c030e9c_def\n");

}
//@unit 8c030eb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c030eb8_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030eb8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  
  *ar4 = *ar4 & 0xfe | 1;
  *ar4 = *ar4 & 0xfd | 2;
  *ar4 = *ar4 & 0xfb | 4;
  *ar4 = *ar4 & 0xf7 | 8;
  *ar4 = *ar4 & 0xef | 0x10;
  uVar1 = *ar4 & 0xffffffdf | 0x20;
  *ar4 = (byte)uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c030eb8\n.set FUN_8c030eb8, FUN_8c030eb8_def\n");

}
//@unit 8c030f2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c030f2c_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030f2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  byte bVar1;
  
  *ar4 = *ar4 & 0xfe;
  *ar4 = *ar4 & 0xfd;
  *ar4 = *ar4 & 0xfb;
  *ar4 = *ar4 & 0xf7;
  *ar4 = *ar4 & 0xef;
  bVar1 = *ar4;
  *ar4 = (byte)(bVar1 & 0xffffffdf);
  return bVar1 & 0xffffffdf;
}

__asm__(".globl FUN_8c030f2c\n.set FUN_8c030f2c, FUN_8c030f2c_def\n");

}
//@unit 8c030fa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c030fa0_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c030fa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129cbc));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x1b,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x80,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x90,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c033954((int)ar4 + 0xb0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x13c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x14c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x158,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x168,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8((int)ar4 + 0x1b0,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x1d8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x1ec,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030e9c((int)ar4 + 0x1fc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x200,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0310c0(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c030fa0\n.set FUN_8c030fa0, FUN_8c030fa0_def\n");

}
//@unit 8c0310c0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0310c0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0310c0");
  return (unsigned)sh4_interp(0x8c0310c0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0310c0\n.set FUN_8c0310c0, FUN_8c0310c0_def\n");
}
//@unit 8c0312f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_129cbc_m0_0312f4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129cbc_m0_0312f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c129cbc);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x80,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x7b,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x76,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x6c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x5a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x56,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x53,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x4f,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_033978(ar4 + 0x2c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x1b,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x15,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 5,0xffffffff,ar6,ar7));
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_129cbc_m0_0312f4\n.set Class_129cbc_m0_0312f4, Class_129cbc_m0_0312f4_def\n");

}
//@unit 8c031434
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c031434_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(le<undefined4>* )(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c031434\n.set FUN_8c031434, FUN_8c031434_def\n");

}
//@unit 8c031440
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_129cbc_m5_031440_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_129cbc_m5_031440");
  return (unsigned)sh4_interp(0x8c031440, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_129cbc_m5_031440\n.set Class_129cbc_m5_031440, Class_129cbc_m5_031440_def\n");
}
//@unit 8c0314f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Check_This_Motion_Data_0314fc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_Check_This_Motion_Data_0314fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(le<int>* )(fr0_ - 0x18)) = ar5;
  (*(le<int>* )(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 36)), deref_u32(*(le<int>* )(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  if ((*(le<int>* )(fr0_ - 0x10)) == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x24)),(&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x82,ar5,vr7));
    ({ unsigned long t0_ = (unsigned long)(5); *(le<unsigned>* )((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x85,((undefined1 *)(fr0_ - 0x24)),1,2); });
  }
  (*(le<int>* )(fr0_ - 0x1c)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031588(*(le<int>* )(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl s_Check_This_Motion_Data_0314fc\n.set s_Check_This_Motion_Data_0314fc, s_Check_This_Motion_Data_0314fc_def\n");

}
//@unit 8c0314fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimBody_CheckThisMotionData_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimBody_CheckThisMotionData");
  return (unsigned)sh4_interp(0x8c0314fc, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimBody_CheckThisMotionData\n.set CAnimBody_CheckThisMotionData, CAnimBody_CheckThisMotionData_def\n");
}
//@unit 8c031588
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031588_def(le<int>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031588");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(*ar4 + 4);
}

__asm__(".globl FUN_8c031588\n.set FUN_8c031588, FUN_8c031588_def\n");

}
//@unit 8c031590
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_10_031590_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_10_031590");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x10);
}

__asm__(".globl get_field_10_031590\n.set get_field_10_031590, get_field_10_031590_def\n");

}
//@unit 8c031598
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129cbc_m1_031598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_129cbc_m1_031598");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined1 *)(unsigned)(0x210 + ar4) = *(undefined1 *)(unsigned)(ar5 + 0x28);
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x14)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x14)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(le<unsigned>* )((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a1fc(ar4 + 0x14c,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_129cbc_m1_031598\n.set Class_129cbc_m1_031598, Class_129cbc_m1_031598_def\n");

}
//@unit 8c031684
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031684_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031684");
  return (unsigned)sh4_interp(0x8c031684, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031684\n.set FUN_8c031684, FUN_8c031684_def\n");
}
//@unit 8c031700
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031700_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031700");
  return (unsigned)sh4_interp(0x8c031700, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031700\n.set FUN_8c031700, FUN_8c031700_def\n");
}
//@unit 8c031748
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031748_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031748");
  return (unsigned)sh4_interp(0x8c031748, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031748\n.set FUN_8c031748, FUN_8c031748_def\n");
}
//@unit 8c031764
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031764_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031764");
  return (unsigned)sh4_interp(0x8c031764, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031764\n.set FUN_8c031764, FUN_8c031764_def\n");
}
//@unit 8c031ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031ab4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031ab4");
  return (unsigned)sh4_interp(0x8c031ab4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031ab4\n.set FUN_8c031ab4, FUN_8c031ab4_def\n");
}
//@unit 8c031b08
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c031b08_def(le<int>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031b08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(0x178 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar4 + 0x2c))))(ar4,ar5,1,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b58((int)ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    iVar1 = 0x124;
    *(le<undefined4>* )(unsigned)(0x124 + (int)ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl FUN_8c031b08\n.set FUN_8c031b08, FUN_8c031b08_def\n");

}
//@unit 8c031b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031b58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = 0xffffffff;
  *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0xffffffff;
  return 0x6c;
}

__asm__(".globl FUN_8c031b58\n.set FUN_8c031b58, FUN_8c031b58_def\n");

}
//@unit 8c031b68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031b68_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031b68");
  return (unsigned)sh4_interp(0x8c031b68, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031b68\n.set FUN_8c031b68, FUN_8c031b68_def\n");
}
//@unit 8c031bb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031bb4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031bb4");
  return (unsigned)sh4_interp(0x8c031bb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031bb4\n.set FUN_8c031bb4, FUN_8c031bb4_def\n");
}
//@unit 8c031c64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031c64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031c64");
  return (unsigned)sh4_interp(0x8c031c64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031c64\n.set FUN_8c031c64, FUN_8c031c64_def\n");
}
//@unit 8c031c74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031c74_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031c74");
  return (unsigned)sh4_interp(0x8c031c74, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031c74\n.set FUN_8c031c74, FUN_8c031c74_def\n");
}
//@unit 8c031ce8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031ce8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031ce8");
  return (unsigned)sh4_interp(0x8c031ce8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031ce8\n.set FUN_8c031ce8, FUN_8c031ce8_def\n");
}
//@unit 8c031ddc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031ddc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031ddc");
  return (unsigned)sh4_interp(0x8c031ddc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031ddc\n.set FUN_8c031ddc, FUN_8c031ddc_def\n");
}
//@unit 8c031de8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031de8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c031de8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(le<int>* )(unsigned)(0x138 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034148(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      }
      *(le<int>* )(unsigned)(0x138 + ar4) = *(le<int>* )(unsigned)(0x138 + ar4) + 1;
    }
  }
  else if ((*(le<int>* )(unsigned)(0x138 + ar4) == 1) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                             (ar4 + 0xb0,ar5,ar6,ar7)), iVar1 == 1)) {
    *(le<undefined4>* )(unsigned)(0x138 + ar4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c031de8\n.set FUN_8c031de8, FUN_8c031de8_def\n");

}
//@unit 8c031e84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031e84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031e84");
  return (unsigned)sh4_interp(0x8c031e84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031e84\n.set FUN_8c031e84, FUN_8c031e84_def\n");
}
//@unit 8c031eb0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031eb0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031eb0");
  return (unsigned)sh4_interp(0x8c031eb0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031eb0\n.set FUN_8c031eb0, FUN_8c031eb0_def\n");
}
//@unit 8c031fc4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c031fc4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c031fc4");
  return (unsigned)sh4_interp(0x8c031fc4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c031fc4\n.set FUN_8c031fc4, FUN_8c031fc4_def\n");
}
//@unit 8c03207c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03207c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03207c");
  return (unsigned)sh4_interp(0x8c03207c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03207c\n.set FUN_8c03207c, FUN_8c03207c_def\n");
}
//@unit 8c032150
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_032150_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_032150");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_032150\n.set noop_032150, noop_032150_def\n");

}
//@unit 8c032154
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_a4_032154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_a4_032154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa4 + ar4);
}

__asm__(".globl get_field_a4_032154\n.set get_field_a4_032154, get_field_a4_032154_def\n");

}
//@unit 8c032160
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032160_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032160");
  return (unsigned)sh4_interp(0x8c032160, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032160\n.set FUN_8c032160, FUN_8c032160_def\n");
}
//@unit 8c0321fc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0321fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0321fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c0321fc\n.set FUN_8c0321fc, FUN_8c0321fc_def\n");

}
//@unit 8c032204
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032204_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032204");
  return (unsigned)sh4_interp(0x8c032204, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032204\n.set FUN_8c032204, FUN_8c032204_def\n");
}
//@unit 8c03220c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03220c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03220c");
  return (unsigned)sh4_interp(0x8c03220c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03220c\n.set FUN_8c03220c, FUN_8c03220c_def\n");
}
//@unit 8c032484
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032484_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c032484");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27d590,((void *)0x8c022cb0),0x10,0x96); });
  return uVar1;
}

__asm__(".globl FUN_8c032484\n.set FUN_8c032484, FUN_8c032484_def\n");

}
//@unit 8c0324ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0324ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0324ac");
  return (unsigned)sh4_interp(0x8c0324ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0324ac\n.set FUN_8c0324ac, FUN_8c0324ac_def\n");
}
//@unit 8c032518
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032518_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032518");
  return (unsigned)sh4_interp(0x8c032518, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032518\n.set FUN_8c032518, FUN_8c032518_def\n");
}
//@unit 8c03263c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03263c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03263c");
  return (unsigned)sh4_interp(0x8c03263c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03263c\n.set FUN_8c03263c, FUN_8c03263c_def\n");
}
//@unit 8c032788
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032788_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032788");
  return (unsigned)sh4_interp(0x8c032788, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032788\n.set FUN_8c032788, FUN_8c032788_def\n");
}
//@unit 8c0329ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0329ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0329ac");
  return (unsigned)sh4_interp(0x8c0329ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0329ac\n.set FUN_8c0329ac, FUN_8c0329ac_def\n");
}
//@unit 8c032a64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned rand_range_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("rand_range");
  return (unsigned)sh4_interp(0x8c032a64, ar4, ar5, ar6, ar7);
}
__asm__(".globl rand_range\n.set rand_range, rand_range_def\n");
}
//@unit 8c032ab0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032ab0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032ab0");
  return (unsigned)sh4_interp(0x8c032ab0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032ab0\n.set FUN_8c032ab0, FUN_8c032ab0_def\n");
}
//@unit 8c032af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032af8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032af8");
  return (unsigned)sh4_interp(0x8c032af8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032af8\n.set FUN_8c032af8, FUN_8c032af8_def\n");
}
//@unit 8c032be0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032be0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032be0");
  return (unsigned)sh4_interp(0x8c032be0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032be0\n.set FUN_8c032be0, FUN_8c032be0_def\n");
}
//@unit 8c032cb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032cb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032cb8");
  return (unsigned)sh4_interp(0x8c032cb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032cb8\n.set FUN_8c032cb8, FUN_8c032cb8_def\n");
}
//@unit 8c032d48
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c032d48_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c032d48");
  return (unsigned)sh4_interp(0x8c032d48, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c032d48\n.set FUN_8c032d48, FUN_8c032d48_def\n");
}
//@unit 8c0332b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0332b4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0332b4");
  return (unsigned)sh4_interp(0x8c0332b4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0332b4\n.set FUN_8c0332b4, FUN_8c0332b4_def\n");
}
//@unit 8c033474
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c033474_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c033474");
  return (unsigned)sh4_interp(0x8c033474, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c033474\n.set FUN_8c033474, FUN_8c033474_def\n");
}
//@unit 8c033530
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c033530_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c033530");
  return (unsigned)sh4_interp(0x8c033530, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c033530\n.set FUN_8c033530, FUN_8c033530_def\n");
}
//@unit 8c0336e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0336e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0336e8");
  return (unsigned)sh4_interp(0x8c0336e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0336e8\n.set FUN_8c0336e8, FUN_8c0336e8_def\n");
}
//@unit 8c03376c
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
CAnimBody_AdvanceFrame_wrapper_wrap_03376c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimBody_AdvanceFrame_wrapper_wrap_03376c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimBody_AdvanceFrame_wrapper_wrap_03376c\n.set CAnimBody_AdvanceFrame_wrapper_wrap_03376c, CAnimBody_AdvanceFrame_wrapper_wrap_03376c_def\n");

}
//@unit 8c033790
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
CAnimBody_AdvanceFrame_wrapper_wrap_033790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimBody_AdvanceFrame_wrapper_wrap_033790");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimBody_AdvanceFrame_wrapper_wrap_033790\n.set CAnimBody_AdvanceFrame_wrapper_wrap_033790, CAnimBody_AdvanceFrame_wrapper_wrap_033790_def\n");

}
//@unit 8c0337b4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0337b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0337b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0337b4\n.set ret_const_0_0337b4, ret_const_0_0337b4_def\n");

}
//@unit 8c0337bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_218_0337bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_218_0337bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x218 + ar4);
}

__asm__(".globl get_field_218_0337bc\n.set get_field_218_0337bc, get_field_218_0337bc_def\n");

}
//@unit 8c0337c8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_0337c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_0337c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_0337c8\n.set ret_const_0_0337c8, ret_const_0_0337c8_def\n");

}
//@unit 8c0337d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0337d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0337d0");
  return (unsigned)sh4_interp(0x8c0337d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0337d0\n.set FUN_8c0337d0, FUN_8c0337d0_def\n");
}
//@unit 8c033954
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c033954_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c033954");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129cf8));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0339b0(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c033954\n.set FUN_8c033954, FUN_8c033954_def\n");

}
//@unit 8c033978
#include "../decls.h"
extern "C" {
#include "../trace.h"
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
free_if_nonnull_wrap_033978_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_033978");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (le<undefined4>* )(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c129cf8), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_033978\n.set free_if_nonnull_wrap_033978, free_if_nonnull_wrap_033978_def\n");

}
//@unit 8c0339b0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0339b0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0339b0");
  return (unsigned)sh4_interp(0x8c0339b0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0339b0\n.set FUN_8c0339b0, FUN_8c0339b0_def\n");
}
//@unit 8c033a8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_SetAnimation_033a94_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_SetAnimation_033a94");
  return (unsigned)sh4_interp(0x8c033a8c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_SetAnimation_033a94\n.set s_CAnimBody_SetAnimation_033a94, s_CAnimBody_SetAnimation_033a94_def\n");
}
//@unit 8c033b98
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_AdvanceFrame_033ba0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_AdvanceFrame_033ba0");
  return (unsigned)sh4_interp(0x8c033b98, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_AdvanceFrame_033ba0\n.set s_CAnimBody_AdvanceFrame_033ba0, s_CAnimBody_AdvanceFrame_033ba0_def\n");
}
//@unit 8c033d34
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c033d34_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c033d34");
  return (unsigned)sh4_interp(0x8c033d34, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c033d34\n.set FUN_8c033d34, FUN_8c033d34_def\n");
}
//@unit 8c033d88
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_AdvanceFrame_033d90_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_AdvanceFrame_033d90");
  return (unsigned)sh4_interp(0x8c033d88, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_AdvanceFrame_033d90\n.set s_CAnimBody_AdvanceFrame_033d90, s_CAnimBody_AdvanceFrame_033d90_def\n");
}
//@unit 8c033e68
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_SetFrame_033e6e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_SetFrame_033e6e");
  return (unsigned)sh4_interp(0x8c033e68, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_SetFrame_033e6e\n.set s_CAnimBody_SetFrame_033e6e, s_CAnimBody_SetFrame_033e6e_def\n");
}
//@unit 8c033f74
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CAnimBody_SetInterpolate_033f7e_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CAnimBody_SetInterpolate_033f7e");
  return (unsigned)sh4_interp(0x8c033f74, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CAnimBody_SetInterpolate_033f7e\n.set s_CAnimBody_SetInterpolate_033f7e, s_CAnimBody_SetInterpolate_033f7e_def\n");
}
//@unit 8c034148
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c034148_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c034148");
  return (unsigned)sh4_interp(0x8c034148, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c034148\n.set FUN_8c034148, FUN_8c034148_def\n");
}
//@unit 8c0342ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0342ac_def(undefined4 ar4,le<undefined4>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0342ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  le<int>* piVar1;
  int iVar2;
  
  piVar1 = (le<int>* )(unsigned)*ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    piVar1 = piVar1 + 6;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

__asm__(".globl FUN_8c0342ac\n.set FUN_8c0342ac, FUN_8c0342ac_def\n");

}
//@unit 8c0342d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0342d8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0342d8");
  return (unsigned)sh4_interp(0x8c0342d8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0342d8\n.set FUN_8c0342d8, FUN_8c0342d8_def\n");
}
//@unit 8c034384
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c034384_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c034384");
  return (unsigned)sh4_interp(0x8c034384, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c034384\n.set FUN_8c034384, FUN_8c034384_def\n");
}
//@unit 8c034548
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034548_def(undefined4 ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034548");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(le<int>* )(unsigned)(iVar1 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c034548\n.set FUN_8c034548, FUN_8c034548_def\n");

}
//@unit 8c034574
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c034574_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c034574");
  return (unsigned)sh4_interp(0x8c034574, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c034574\n.set FUN_8c034574, FUN_8c034574_def\n");
}
//@unit 8c034650
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c034650_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c034650");
  return (unsigned)sh4_interp(0x8c034650, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c034650\n.set FUN_8c034650, FUN_8c034650_def\n");
}
//@unit 8c034880
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034880_def(undefined4 ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034880");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(le<int>* )(unsigned)(iVar1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl FUN_8c034880\n.set FUN_8c034880, FUN_8c034880_def\n");

}
//@unit 8c0348ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0348ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0348ac");
  return (unsigned)sh4_interp(0x8c0348ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0348ac\n.set FUN_8c0348ac, FUN_8c0348ac_def\n");
}
//@unit 8c034a70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034a70_def(undefined4 ar4,le<int>* ar5,le<undefined4>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c034a70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar7_00;
  
  ar7_00 = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0342ac(ar4,ar5,ar7,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034548(ar4,ar5,ar7,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034880(ar4,ar5,ar7,ar7_00));
  *ar6 = uVar1;
  ar6[1] = uVar2;
  ar6[2] = uVar3;
  ar6[3] = *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0xc);
  ar6[4] = *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0x10);
  ar6[5] = *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0x14);
  *(le<undefined4>* )(unsigned)(*ar5 + ar7 * 0x18) = 0;
  *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 4) = 0;
  *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 8) = 0;
  *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0xc) = 0;
  *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar7 * 0x18 + *ar5 + 0x14) = 0;
  return 0;
}

__asm__(".globl FUN_8c034a70\n.set FUN_8c034a70, FUN_8c034a70_def\n");

}
//@unit 8c034ba8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c034ba8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c034ba8");
  return (unsigned)sh4_interp(0x8c034ba8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c034ba8\n.set FUN_8c034ba8, FUN_8c034ba8_def\n");
}
//@unit 8c034c50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined2>*  FUN_8c034c50_def(le<undefined2>* ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034c50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0xffff;
  *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined *)(unsigned)((int)ar4 + iVar1 + 0xc) = (&(*(undefined1 *)(unsigned)0x8c132dd0))[iVar1 + ar6 * 0xf];
  }
  *(le<unsigned>* )(unsigned)(ar4 + 0xe) = (&(*(undefined1 *)(unsigned)0x8c133318)) + ar5 * 0x30;
  ar4[2] = 0xffff;
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x10) = 0;
  *(le<undefined4>* )(unsigned)(ar4 + 0x12) = 0;
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + 2); iVar1 = iVar1 + 1) {
    if (((*(char *)(unsigned)((int)ar4 + iVar1 + 0xc) == '\0') &&
        (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
       (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
      *(undefined1 *)(unsigned)((int)ar4 + iVar1 + 0xc) = 1;
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c034c50\n.set FUN_8c034c50, FUN_8c034c50_def\n");

}
//@unit 8c034d08
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_034d08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_034d08");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_034d08\n.set free_if_nonnull_wrap_034d08, free_if_nonnull_wrap_034d08_def\n");

}
//@unit 8c034d38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034d38_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034d38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x8c132f56 + ar5);
}

__asm__(".globl FUN_8c034d38\n.set FUN_8c034d38, FUN_8c034d38_def\n");

}
//@unit 8c034d48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034d48_def(le<short>* ar4,le<undefined4>* ar5,le<undefined4>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034d48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  le<undefined4>* ar5_00;
  le<undefined4>* ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5,ar6,ar7));
  if (((((short)uVar1 != 8) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) &&
      ((uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5_00,ar6_00,ar7)), (short)uVar1 != 0x10 ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1))))
     && ((*(le<int>* )(unsigned)(ar4 + 4) != 0 ||
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c0_034f3c(ar6[5],ar5_00,ar6_00,ar7)), iVar2 != 1)
         ))) {
    if ((char)ar4[0x14] == '\x01') {
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034f48(ar4,ar6,ar6_00,ar7));
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar6[2] + 0xa8,ar5_00,ar6_00,ar7));
    iVar2 = (int)ar5 - iVar2;
    uVar1 = 0x3c;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0103d0(iVar2,0x3c,ar6_00,ar7));
    if ((iVar3 == 1) && (iVar2 != *(le<int>* )(unsigned)(ar4 + 0x10))) {
      *(le<int>* )(unsigned)(ar4 + 0x12) = *(le<int>* )(unsigned)(ar4 + 0x12) + 1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010284(iVar2,0x3c,ar6_00,ar7));
      ar6_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035028(ar4,uVar1,ar6,ar7));
    }
    *(le<int>* )(unsigned)(ar4 + 0x10) = iVar2;
    if (*ar4 == -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035110(ar4,ar6,ar6_00,ar7));
    }
    else {
      if (*(le<int>* )(unsigned)(ar4 + 4) == 1) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x14))))
                          (ar6,uVar1,ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar4;
      }
      if ((*(le<int>* )(unsigned)(ar4 + 4) == 2) || (*(le<int>* )(unsigned)(ar4 + 4) == 3)) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x18))))
                          (ar6,uVar1,ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar4;
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 4;
      }
      if (*(le<int>* )(unsigned)(ar4 + 4) == 4) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x1c))))
                          (ar6,uVar1,ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = uVar1;
      }
      if (*(le<int>* )(unsigned)(ar4 + 4) == 5) {
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 5;
        if (*(char *)(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x22) == '\0') {
          *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 6;
        }
        *ar4 = -1;
        ar4[0x12] = 0;
        ar4[0x13] = 0;
        ar4[4] = 0;
        ar4[5] = 0;
      }
    }
  }
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x14) = 0;
  return 0x28;
}

__asm__(".globl FUN_8c034d48\n.set FUN_8c034d48, FUN_8c034d48_def\n");

}
//@unit 8c034f3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_c0_034f3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c0_034f3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc0 + ar4);
}

__asm__(".globl get_field_c0_034f3c\n.set get_field_c0_034f3c, get_field_c0_034f3c_def\n");

}
//@unit 8c034f48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034f48_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c034f48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
  for (iVar3 = 0; iVar2 = (int)*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if ((*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\0') || (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x06')) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
        if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c034f48\n.set FUN_8c034f48, FUN_8c034f48_def\n");

}
//@unit 8c035000
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035000_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035000");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c035000\n.set FUN_8c035000, FUN_8c035000_def\n");

}
//@unit 8c035028
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035028_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035028");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x24);
  for (iVar3 = 0; iVar1 = (int)*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar1;
      iVar3 = iVar3 + 1) {
    if ((((*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
         ('\x04' < *(char *)(unsigned)(*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) + ar4
                            + 0xc))) &&
        (*(le<uint>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 8) <= ar5)) &&
       ((*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
        (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x01')))) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x24) = 0;
      *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 2;
    }
  }
  return iVar1;
}

__asm__(".globl FUN_8c035028\n.set FUN_8c035028, FUN_8c035028_def\n");

}
//@unit 8c035110
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035110_def(le<undefined2>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035110");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  int iVar2;
  short sVar3;
  int iVar4;
  
  iVar2 = -1;
  sVar3 = 0;
  ar5_00 = ar5;
  for (iVar4 = 0; iVar4 < *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)(unsigned)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if ((iVar1 == -1) && (sVar3 < *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                            (ar5,ar5_00,ar6,ar7));
          if (iVar1 == 1) {
            iVar2 = (int)*((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
            sVar3 = *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          ar5_00 = ar5;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03525c(ar4,ar5,ar6,ar7));
          if (iVar1 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                              (ar5,ar5_00,ar6,ar7));
            if (iVar1 == 1) {
              iVar2 = (int)*((le<short>* )(unsigned long)*(le<unsigned>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
              sVar3 = *(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
            }
          }
        }
      }
    }
  }
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    *(undefined1 *)(unsigned)((int)ar4 + iVar2 + 0xc) = 3;
    *ar4 = (short)iVar2;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
    *(le<undefined4>* )(unsigned)(ar4 + 0x12) = 0;
  }
  return iVar2;
}

__asm__(".globl FUN_8c035110\n.set FUN_8c035110, FUN_8c035110_def\n");

}
//@unit 8c03525c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03525c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03525c");
  return (unsigned)sh4_interp(0x8c03525c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03525c\n.set FUN_8c03525c, FUN_8c03525c_def\n");
}
//@unit 8c035338
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035338_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035338");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xc) = *(undefined1 *)(unsigned)(iVar1 + ar5);
  }
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    if ((((*(char *)(unsigned)(ar4 + iVar1 + 0xc) == '\x06') || (*(char *)(unsigned)(ar4 + iVar1 + 0xc) == '\x02')) ||
        (*(char *)(unsigned)(ar4 + iVar1 + 0xc) == '\x03')) || (*(char *)(unsigned)(ar4 + iVar1 + 0xc) == '\x04')) {
      *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xc) = 1;
    }
  }
  return 0xf;
}

__asm__(".globl FUN_8c035338\n.set FUN_8c035338, FUN_8c035338_def\n");

}
//@unit 8c03539c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03539c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03539c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(iVar1 + ar5) = *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xc);
  }
  return 0xf;
}

__asm__(".globl FUN_8c03539c\n.set FUN_8c03539c, FUN_8c03539c_def\n");

}
//@unit 8c0353bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0353bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0353bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(ar5,ar5_00,ar6,ar7));
  for (iVar3 = 0; iVar2 = (int)*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\0') {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar5,ar5_00,ar6,ar7));
      if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(ar5,ar5_00,ar6,ar7));
        if (*(le<short>* )(unsigned)(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl FUN_8c0353bc\n.set FUN_8c0353bc, FUN_8c0353bc_def\n");

}
//@unit 8c035470
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035470_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035470");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x180 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8)))))
                    (*(le<int>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (iVar1 != 2) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar5,ar6,ar7));
    ar5 = 0x3c;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar3 & 0xffff,0x3c,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
  if (iVar1 < 8) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
      if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
        if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
          if ((iVar1 < 4) || ((uVar3 & 0xffff) < 0x14)) {
            uVar2 = 0;
          }
          else {
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        uVar2 = 1;
      }
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

__asm__(".globl FUN_8c035470\n.set FUN_8c035470, FUN_8c035470_def\n");

}
//@unit 8c035580
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035580_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035580");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
  if ((3 < iVar1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x180 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8)))))
                        (*(le<int>* )(unsigned)(ar4 + 4),ar5,ar6,ar7)), iVar1 != 2)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c035580\n.set FUN_8c035580, FUN_8c035580_def\n");

}
//@unit 8c0355cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0355cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0355cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x180 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8)))))
                    (*(le<int>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
       (char)uVar2 == '\x01')) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7)),
     iVar1 == 1)) {
    ar5 = 7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,7,ar6,ar7));
    if (((iVar1 == 1) &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x180 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 4) + 8)))))
                    (*(le<int>* )(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (((iVar1 == 0x1d) &&
      (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
      (char)uVar2 == '\x01')) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0 &&
      (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7)),
        iVar1 == 1 &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)))))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035718(*(le<undefined4>* )(unsigned)(ar4 + 0x18),4,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c0355cc\n.set FUN_8c0355cc, FUN_8c0355cc_def\n");

}
//@unit 8c035718
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035718_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035718");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + (char)ar5 + 0xc) = 1;
  return 1;
}

__asm__(".globl FUN_8c035718\n.set FUN_8c035718, FUN_8c035718_def\n");

}
//@unit 8c035724
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint get_field_a0_035724_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_a0_035724");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)*(byte *)(unsigned)(0xa0 + ar4);
}

__asm__(".globl get_field_a0_035724\n.set get_field_a0_035724, get_field_a0_035724_def\n");

}
//@unit 8c035734
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_178_035734_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_178_035734");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x178 + ar4);
}

__asm__(".globl get_field_178_035734\n.set get_field_178_035734, get_field_178_035734_def\n");

}
//@unit 8c035740
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035740_def(le<undefined4>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035740");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a6;
  
  iVar3 = 0;
  a6 = 0;
  while( true ) {
    uVar2 = 3;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,3,ar6,ar7));
    if (iVar1 <= a6) break;
    uVar2 = 3;
    ar6 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,3,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar2,ar6,ar7));
    if (iVar1 == 4) {
      uVar2 = 3;
      ar6 = a6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,3,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar2,ar6,ar7));
      if (iVar1 == 1) {
        iVar3 = iVar3 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar3) &&
       (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(ar4[3],uVar2,ar6,ar7)), iVar3 == 0)) &&
      (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(ar4[2] + 0x90,uVar2,ar6,ar7)), iVar3 < 0x31)) &&
     (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03584c(ar4[5],uVar2,ar6,ar7)), (char)uVar2 == '\x02')) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce10(ar4[2] + 0x90,0,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c035740\n.set FUN_8c035740, FUN_8c035740_def\n");

}
//@unit 8c03584c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03584c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03584c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0xbe + ar4);
}

__asm__(".globl FUN_8c03584c\n.set FUN_8c03584c, FUN_8c03584c_def\n");

}
//@unit 8c035858
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035858_def(le<undefined4>* ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035858");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int a6;
  
  iVar4 = 0;
  a6 = 0;
  while( true ) {
    uVar3 = 5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,5,ar6,ar7));
    if (iVar1 <= a6) break;
    uVar3 = 5;
    ar6 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,5,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x114 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
    if (iVar1 == 7) {
      uVar3 = 5;
      ar6 = a6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)*ar4))))((le<int>* )(unsigned)*ar4,5,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
      if (iVar1 == 1) {
        iVar4 = iVar4 + 1;
      }
    }
    a6 = a6 + 1;
  }
  if ((((1 < iVar4) &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(ar4[3],uVar3,ar6,ar7)), iVar4 == 0)) &&
      (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c340(ar4[2] + 0x90,uVar3,ar6,ar7)), iVar4 < 0x31)) &&
     (((uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03584c(ar4[5],uVar3,ar6,ar7)), (char)uVar2 == '\x02' &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c0_034f3c(ar4[5],uVar3,ar6,ar7)), iVar4 == 0)) &&
      (iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_03598c(ar4[5],uVar3,ar6,ar7)), iVar4 == 0)))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ce10(ar4[2] + 0x90,0,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c035858\n.set FUN_8c035858, FUN_8c035858_def\n");

}
//@unit 8c03598c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_40_03598c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_40_03598c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x40);
}

__asm__(".globl get_field_40_03598c\n.set get_field_40_03598c, get_field_40_03598c_def\n");

}
//@unit 8c035994
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035994_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035994");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7));
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7))
       , iVar2 == 0)) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7)),
      iVar2 == 1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(*(le<undefined4>* )(unsigned)(ar4 + 0x20),ar5,ar6,ar7)),
     (char)uVar1 == '\x02')) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7));
    if (iVar2 != 4) {
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)) + 0x44))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl FUN_8c035994\n.set FUN_8c035994, FUN_8c035994_def\n");

}
//@unit 8c035a3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035a3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035a3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7));
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(le<undefined4>* )(unsigned)(ar4 + 0xc),ar5,ar6,ar7))
       , iVar2 == 0)) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar4 + 8),ar5,ar6,ar7)),
      iVar2 == 1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar5,ar6,ar7)),
     (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c035a3c\n.set FUN_8c035a3c, FUN_8c035a3c_def\n");

}
//@unit 8c035ab4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035ab4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035ab4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x90 + ar4);
}

__asm__(".globl FUN_8c035ab4\n.set FUN_8c035ab4, FUN_8c035ab4_def\n");

}
//@unit 8c035ac8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
uint FUN_8c035ac8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035ac8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  return (uint)((char)uVar1 == '\x02');
}

__asm__(".globl FUN_8c035ac8\n.set FUN_8c035ac8, FUN_8c035ac8_def\n");

}
//@unit 8c035af8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c035af8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c035af8");
  return (unsigned)sh4_interp(0x8c035af8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c035af8\n.set FUN_8c035af8, FUN_8c035af8_def\n");
}
//@unit 8c035b50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035b50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035b50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4e);
}

__asm__(".globl FUN_8c035b50\n.set FUN_8c035b50, FUN_8c035b50_def\n");

}
//@unit 8c035b58
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c035b58_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c035b58");
  return (unsigned)sh4_interp(0x8c035b58, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c035b58\n.set FUN_8c035b58, FUN_8c035b58_def\n");
}
//@unit 8c035bc8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035bc8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035bc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + -1;
  return 0x4e;
}

__asm__(".globl FUN_8c035bc8\n.set FUN_8c035bc8, FUN_8c035bc8_def\n");

}
//@unit 8c035be0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035be0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035be0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + '\x01';
  return 0x4f;
}

__asm__(".globl FUN_8c035be0\n.set FUN_8c035be0, FUN_8c035be0_def\n");

}
//@unit 8c035bf8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035bf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035bf8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4f);
}

__asm__(".globl FUN_8c035bf8\n.set FUN_8c035bf8, FUN_8c035bf8_def\n");

}
//@unit 8c035c00
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c035c00_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c035c00");
  return (unsigned)sh4_interp(0x8c035c00, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c035c00\n.set FUN_8c035c00, FUN_8c035c00_def\n");
}
//@unit 8c035c70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035c70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035c70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + -1;
  return 0x4f;
}

__asm__(".globl FUN_8c035c70\n.set FUN_8c035c70, FUN_8c035c70_def\n");

}
//@unit 8c035c88
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035c88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035c88");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x50) = *(char *)(unsigned)(ar4 + 0x50) + '\x01';
  return 0x50;
}

__asm__(".globl FUN_8c035c88\n.set FUN_8c035c88, FUN_8c035c88_def\n");

}
//@unit 8c035ca0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035ca0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035ca0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x50);
}

__asm__(".globl FUN_8c035ca0\n.set FUN_8c035ca0, FUN_8c035ca0_def\n");

}
//@unit 8c035ca8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c035ca8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c035ca8");
  return (unsigned)sh4_interp(0x8c035ca8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c035ca8\n.set FUN_8c035ca8, FUN_8c035ca8_def\n");
}
//@unit 8c035d4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035d4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035d4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4d) = *(char *)(unsigned)(ar4 + 0x4d) + '\x01';
  return 0x4d;
}

__asm__(".globl FUN_8c035d4c\n.set FUN_8c035d4c, FUN_8c035d4c_def\n");

}
//@unit 8c035d64
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035d64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035d64");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4d);
}

__asm__(".globl FUN_8c035d64\n.set FUN_8c035d64, FUN_8c035d64_def\n");

}
//@unit 8c035d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035d7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035d7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),1,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035d7c\n.set FUN_8c035d7c, FUN_8c035d7c_def\n");

}
//@unit 8c035d9c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035d9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035d9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),3,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035d9c\n.set FUN_8c035d9c, FUN_8c035d9c_def\n");

}
//@unit 8c035dbc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035dbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035dbc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),4,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035dbc\n.set FUN_8c035dbc, FUN_8c035dbc_def\n");

}
//@unit 8c035ddc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035ddc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035ddc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),6,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035ddc\n.set FUN_8c035ddc, FUN_8c035ddc_def\n");

}
//@unit 8c035dfc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035dfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035dfc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),7,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035dfc\n.set FUN_8c035dfc, FUN_8c035dfc_def\n");

}
//@unit 8c035e1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035e1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),8,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035e1c\n.set FUN_8c035e1c, FUN_8c035e1c_def\n");

}
//@unit 8c035e3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035e3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),9,ar6,ar7));
  return 4;
}

__asm__(".globl FUN_8c035e3c\n.set FUN_8c035e3c, FUN_8c035e3c_def\n");

}
//@unit 8c035e5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035e5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb7c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  return 4;
}

__asm__(".globl FUN_8c035e5c\n.set FUN_8c035e5c, FUN_8c035e5c_def\n");

}
//@unit 8c035e84
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035e84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x3a) = (undefined1)ar5;
  return 0x3a;
}

__asm__(".globl FUN_8c035e84\n.set FUN_8c035e84, FUN_8c035e84_def\n");

}
//@unit 8c035e8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035e8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x3a);
}

__asm__(".globl FUN_8c035e8c\n.set FUN_8c035e8c, FUN_8c035e8c_def\n");

}
//@unit 8c035e94
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035e94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035e94");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035e8c(*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar5,ar6,ar7));
  if ((char)uVar1 == '\0') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_03598c(*(le<undefined4>* )(unsigned)(ar4 + 0x14),ar5,ar6,ar7));
    if (iVar2 == 0) {
      ar5 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035e84(*(le<undefined4>* )(unsigned)(ar4 + 0x14),1,ar6,ar7));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f04(*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  if (iVar2 < 4) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),4,ar6,ar7));
  }
  return 4;
}

__asm__(".globl FUN_8c035e94\n.set FUN_8c035e94, FUN_8c035e94_def\n");

}
//@unit 8c035f04
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035f04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035f04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x98 + ar4);
}

__asm__(".globl FUN_8c035f04\n.set FUN_8c035f04, FUN_8c035f04_def\n");

}
//@unit 8c035f14
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035f14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035f14");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(le<undefined4>* )(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  if ((char)uVar1 == '\0') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(*(le<undefined4>* )(unsigned)(ar4 + 0x10),1,ar6,ar7));
  }
  return 4;
}

__asm__(".globl FUN_8c035f14\n.set FUN_8c035f14, FUN_8c035f14_def\n");

}
//@unit 8c035f4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035f4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035f4c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x90;
  *(undefined1 *)(unsigned)(0x90 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c035f4c\n.set FUN_8c035f4c, FUN_8c035f4c_def\n");

}
//@unit 8c035f58
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035f58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035f58");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,0xd,ar6,ar7); });
  return 4;
}

__asm__(".globl FUN_8c035f58\n.set FUN_8c035f58, FUN_8c035f58_def\n");

}
//@unit 8c035fa0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035fa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035fa0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),3,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,0x12,ar6,ar7); });
  return 4;
}

__asm__(".globl FUN_8c035fa0\n.set FUN_8c035fa0, FUN_8c035fa0_def\n");

}
//@unit 8c035fe8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035fe8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c035fe8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(le<undefined4>* )(unsigned)(ar4 + 0x10),4,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(le<int>* )(unsigned)(ar4 + 8) + 0xa8,0x13,ar6,ar7); });
  return 4;
}

__asm__(".globl FUN_8c035fe8\n.set FUN_8c035fe8, FUN_8c035fe8_def\n");

}
//@unit 8c036030
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036030_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c036050(*(le<undefined4>* )(unsigned)(ar4 + 0x18),0xffffffff,ar6,ar7));
  return 5;
}

__asm__(".globl FUN_8c036030\n.set FUN_8c036030, FUN_8c036030_def\n");

}
//@unit 8c036050
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036050_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036050");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(le<short>* )(unsigned)(ar4 + 4) = (short)ar5;
  return ar5;
}

__asm__(".globl FUN_8c036050\n.set FUN_8c036050, FUN_8c036050_def\n");

}
//@unit 8c036058
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c036058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036058");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(iVar1 + ar4) = 0;
  }
  return ar4;
}

__asm__(".globl FUN_8c036058\n.set FUN_8c036058, FUN_8c036058_def\n");

}
//@unit 8c036078
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036078_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036078");
  return (unsigned)sh4_interp(0x8c036078, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036078\n.set FUN_8c036078, FUN_8c036078_def\n");
}
//@unit 8c036130
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036130_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036130");
  return (unsigned)sh4_interp(0x8c036130, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036130\n.set FUN_8c036130, FUN_8c036130_def\n");
}
//@unit 8c0361d8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int CAnimal_m0_0361d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimal_m0_0361d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129ea0);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x1088,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12a03c_m0_03c32c(ar4 + 0xd2c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12a078_m0_05d804(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl CAnimal_m0_0361d8\n.set CAnimal_m0_0361d8, CAnimal_m0_0361d8_def\n");

}
//@unit 8c036260
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_FROGMANLINE_036266_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_FROGMANLINE_036266");
  return (unsigned)sh4_interp(0x8c036260, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_FROGMANLINE_036266\n.set s_GRAPHICS_FROGMANLINE_036266, s_GRAPHICS_FROGMANLINE_036266_def\n");
}
//@unit 8c03640c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m2_03640c_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("CAnimal_m2_03640c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_a0_035724(ar5,ar5,ar6,ar7));
  if (((char)uVar1 == '\x02') && (*(le<int>* )(unsigned)(0x7d4 + ar5) == 1)) {
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 68)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x01') && (*(le<int>* )(unsigned)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0366f0(ar4,ar5,ar6,ar7_00));
  }
  if (*(le<int>* )(unsigned)(0x1134 + ar4) != 0) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c03679c(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_2f0_03655c(ar4 + 0xd2c,ar5_00,ar6,ar7_00));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), s_CSquidLine_036894(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  return 1;
}

__asm__(".globl CAnimal_m2_03640c\n.set CAnimal_m2_03640c, CAnimal_m2_03640c_def\n");

}
//@unit 8c03655c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_2f0_03655c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_2f0_03655c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x2f0 + ar4);
}

__asm__(".globl get_field_2f0_03655c\n.set get_field_2f0_03655c, get_field_2f0_03655c_def\n");

}
//@unit 8c036568
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m3_036568_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("CAnimal_m3_036568");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_a0_035724(ar5,ar5,ar6,ar7));
  if (((char)uVar1 == '\x02') && (*(le<int>* )(unsigned)(0x7d4 + ar5) == 1)) {
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
    *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 68)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x01') && (*(le<int>* )(unsigned)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0366f0(ar4,ar5,ar6,ar7_00));
  }
  if (*(le<int>* )(unsigned)(0x1134 + ar4) != 0) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c03679c(ar4,ar5,ar6,ar7_00));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if ((char)uVar1 == '\x02') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_2f0_03655c(ar4 + 0xd2c,ar5_00,ar6,ar7_00));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 68)), s_CSquidLine_036894(ar4,ar7,ar5,ar7_00));
      ar5_00 = ar7;
      ar6 = ar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a788(ar4,ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5_00,ar6,ar7_00));
  return 1;
}

__asm__(".globl CAnimal_m3_036568\n.set CAnimal_m3_036568, CAnimal_m3_036568_def\n");

}
//@unit 8c0366b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0366b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0366b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0366b8\n.set noop_0366b8, noop_0366b8_def\n");

}
//@unit 8c0366bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0366bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0366bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0366e4(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0366bc\n.set FUN_8c0366bc, FUN_8c0366bc_def\n");

}
//@unit 8c0366e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0366e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0366e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x83;
  *(undefined1 *)(unsigned)(0x83 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c0366e4\n.set FUN_8c0366e4, FUN_8c0366e4_def\n");

}
//@unit 8c0366f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0366f0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0366f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int a4;
  undefined4 a6;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    a6 = 5;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(0x8c3eb324,6,5,ar7));
    *(le<undefined4>* )(unsigned)(0x111c + ar4 + iVar2 * 4) = uVar1;
    a4 = *(le<int>* )(unsigned)(0x111c + ar4 + iVar2 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(a4 + 8) + 0x54))))(a4,0x8c3eb324,a6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),
                       *(le<undefined4>* )(unsigned)(0x111c + ar4 + iVar2 * 4),0,ar7));
    *(le<undefined4>* )(unsigned)(0x1134 + ar4 + iVar2 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl FUN_8c0366f0\n.set FUN_8c0366f0, FUN_8c0366f0_def\n");

}
//@unit 8c03679c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03679c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03679c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),
                       *(le<undefined4>* )(unsigned)(0x1134 + ar4 + iVar3 * 4),ar6,ar7));
    if ((iVar1 == 1) && (*(le<int>* )(unsigned)(0x1134 + ar4 + iVar3 * 4) != 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                        (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar4 + iVar3 * 4 + 0x1134,ar6,ar7))
      ;
      *(le<undefined4>* )(unsigned)(0x111c + ar4 + iVar3 * 4) = uVar2;
    }
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                    (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),*(le<undefined4>* )(unsigned)(0x1148 + ar4),ar6,ar7
                    ));
  if ((iVar3 == 1) && (iVar3 = 0, *(le<int>* )(unsigned)(0x1148 + ar4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                      (*(le<undefined4>* )(unsigned)(0x7d0 + ar5),ar4 + 0x1148,ar6,ar7));
    iVar3 = 0x1130;
    *(le<undefined4>* )(unsigned)(0x1130 + ar4) = uVar2;
  }
  return iVar3;
}

__asm__(".globl FUN_8c03679c\n.set FUN_8c03679c, FUN_8c03679c_def\n");

}
//@unit 8c03688c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CSquidLine_036894_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CSquidLine_036894");
  return (unsigned)sh4_interp(0x8c03688c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CSquidLine_036894\n.set s_CSquidLine_036894, s_CSquidLine_036894_def\n");
}
//@unit 8c036984
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_036984_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_036984");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_036984\n.set noop_036984, noop_036984_def\n");

}
//@unit 8c036988
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036988_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036988");
  return (unsigned)sh4_interp(0x8c036988, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036988\n.set FUN_8c036988, FUN_8c036988_def\n");
}
//@unit 8c0369a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_0369a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_0369a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_0369a0\n.set noop_0369a0, noop_0369a0_def\n");

}
//@unit 8c0369a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0369a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0369a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x490) + 0x1c))))
                    ((le<int>* )(unsigned)(ar4 + 0x490),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0369a4\n.set FUN_8c0369a4, FUN_8c0369a4_def\n");

}
//@unit 8c0369c4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0369c4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0369c4");
  return (unsigned)sh4_interp(0x8c0369c4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0369c4\n.set FUN_8c0369c4, FUN_8c0369c4_def\n");
}
//@unit 8c036adc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036adc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036adc");
  return (unsigned)sh4_interp(0x8c036adc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036adc\n.set FUN_8c036adc, FUN_8c036adc_def\n");
}
//@unit 8c036d20
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_2fc_036d20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_2fc_036d20");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x2fc + ar4);
}

__asm__(".globl get_field_2fc_036d20\n.set get_field_2fc_036d20, get_field_2fc_036d20_def\n");

}
//@unit 8c036d2c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c036d2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036d2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x328;
  *(le<undefined4>* )(unsigned)(0x328 + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c036d2c\n.set FUN_8c036d2c, FUN_8c036d2c_def\n");

}
//@unit 8c036d3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c036d3c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036d3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x85;
  *(undefined1 *)(unsigned)(0x85 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c036d3c\n.set FUN_8c036d3c, FUN_8c036d3c_def\n");

}
//@unit 8c036d48
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036d48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036d48");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036d70(*(le<undefined4>* )(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c036d48\n.set FUN_8c036d48, FUN_8c036d48_def\n");

}
//@unit 8c036d70
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c036d70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036d70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x86;
  *(undefined1 *)(unsigned)(0x86 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c036d70\n.set FUN_8c036d70, FUN_8c036d70_def\n");

}
//@unit 8c036d7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m7_036d7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m7_036d7c");
  return (unsigned)sh4_interp(0x8c036d7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m7_036d7c\n.set CAnimal_m7_036d7c, CAnimal_m7_036d7c_def\n");
}
//@unit 8c036f00
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_338_036f00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_338_036f00");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x338 + ar4);
}

__asm__(".globl get_field_338_036f00\n.set get_field_338_036f00, get_field_338_036f00_def\n");

}
//@unit 8c036f0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036f0c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036f0c");
  return (unsigned)sh4_interp(0x8c036f0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036f0c\n.set FUN_8c036f0c, FUN_8c036f0c_def\n");
}
//@unit 8c036f50
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 get_field_300_036f50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_300_036f50");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x300 + ar4);
}

__asm__(".globl get_field_300_036f50\n.set get_field_300_036f50, get_field_300_036f50_def\n");

}
//@unit 8c036f5c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036f5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c036f5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)) + 0x48))))
                    (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c036f5c\n.set FUN_8c036f5c, FUN_8c036f5c_def\n");

}
//@unit 8c036f84
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c036f84_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c036f84");
  return (unsigned)sh4_interp(0x8c036f84, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c036f84\n.set FUN_8c036f84, FUN_8c036f84_def\n");
}
//@unit 8c037034
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c037034_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c037034");
  return (unsigned)sh4_interp(0x8c037034, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c037034\n.set FUN_8c037034, FUN_8c037034_def\n");
}
//@unit 8c0372a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_Tm1_Home_njd_0372a2_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_Tm1_Home_njd_0372a2");
  return (unsigned)sh4_interp(0x8c0372a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_Tm1_Home_njd_0372a2\n.set s_Tm1_Home_njd_0372a2, s_Tm1_Home_njd_0372a2_def\n");
}
//@unit 8c0384f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_GRAPHICS_FROGMANLINE_0384fa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_GRAPHICS_FROGMANLINE_0384fa");
  return (unsigned)sh4_interp(0x8c0384f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_GRAPHICS_FROGMANLINE_0384fa\n.set s_GRAPHICS_FROGMANLINE_0384fa, s_GRAPHICS_FROGMANLINE_0384fa_def\n");
}
//@unit 8c038648
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int CAnimal_m0_038648_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimal_m0_038648");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129d04);
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4 + 0x5c4,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129c24_m0_02ff90(ar4 + 0x528,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x490,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), CAnimal_m0_025688(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl CAnimal_m0_038648\n.set CAnimal_m0_038648, CAnimal_m0_038648_def\n");

}
//@unit 8c0386d0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned CAnimal_m2_0386d0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("CAnimal_m2_0386d0");
  return (unsigned)sh4_interp(0x8c0386d0, ar4, ar5, ar6, ar7);
}
__asm__(".globl CAnimal_m2_0386d0\n.set CAnimal_m2_0386d0, CAnimal_m2_0386d0_def\n");
}
//@unit 8c038a10
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c038a10_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c038a10");
  return (unsigned)sh4_interp(0x8c038a10, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c038a10\n.set FUN_8c038a10, FUN_8c038a10_def\n");
}
//@unit 8c038a28
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_0_038a28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_038a28");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_038a28\n.set ret_const_0_038a28, ret_const_0_038a28_def\n");

}
//@unit 8c038a30
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_038a30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_038a30");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_038a30\n.set ret_const_1_038a30, ret_const_1_038a30_def\n");

}
//@unit 8c038a38
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038a38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038a38");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038a38\n.set noop_038a38, noop_038a38_def\n");

}
//@unit 8c038a3c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038a3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038a3c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038a3c\n.set noop_038a3c, noop_038a3c_def\n");

}
//@unit 8c038a40
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038a40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038a40");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038a40\n.set noop_038a40, noop_038a40_def\n");

}
//@unit 8c038a44
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038a44_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038a44");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c038a44\n.set FUN_8c038a44, FUN_8c038a44_def\n");

}
//@unit 8c038aa4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038aa4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038aa4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c038aa4\n.set FUN_8c038aa4, FUN_8c038aa4_def\n");

}
//@unit 8c038b04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c038b04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c038b04");
  return (unsigned)sh4_interp(0x8c038b04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c038b04\n.set FUN_8c038b04, FUN_8c038b04_def\n");
}
//@unit 8c038c54
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038c54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038c54");
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

__asm__(".globl FUN_8c038c54\n.set FUN_8c038c54, FUN_8c038c54_def\n");

}
//@unit 8c038c8c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038c8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038c8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038c8c\n.set noop_038c8c, noop_038c8c_def\n");

}
//@unit 8c038c90
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CFrogManEgg_NewChild_038c92_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CFrogManEgg_NewChild_038c92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int a6;
  undefined4 uVar1;
  
  a6 = (vsp = ((unsigned long)(fr0_ - 0)), s_Shell_0fef9c(ar5,5,6,ar7));
  if (a6 == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d75,
                       (&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d7d,1,2));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl s_CFrogManEgg_NewChild_038c92\n.set s_CFrogManEgg_NewChild_038c92, s_CFrogManEgg_NewChild_038c92_def\n");

}
//@unit 8c038d0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c038d0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038d0c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(le<undefined4>* )(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c038d0c\n.set FUN_8c038d0c, FUN_8c038d0c_def\n");

}
//@unit 8c038d18
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038d18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038d18");
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

__asm__(".globl FUN_8c038d18\n.set FUN_8c038d18, FUN_8c038d18_def\n");

}
//@unit 8c038d4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CFrogManEgg_LoadGRReq_038d52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CFrogManEgg_LoadGRReq_038d52");
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
                ((&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d95,
                 (&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1da7,0,2));
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

__asm__(".globl s_CFrogManEgg_LoadGRReq_038d52\n.set s_CFrogManEgg_LoadGRReq_038d52, s_CFrogManEgg_LoadGRReq_038d52_def\n");

}
//@unit 8c038e1c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_038e1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_038e1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_038e1c\n.set ret_const_1_038e1c, ret_const_1_038e1c_def\n");

}
//@unit 8c038e24
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038e24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038e24");
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

__asm__(".globl FUN_8c038e24\n.set FUN_8c038e24, FUN_8c038e24_def\n");

}
//@unit 8c038e74
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038e74_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038e74");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038e74\n.set noop_038e74, noop_038e74_def\n");

}
//@unit 8c038e78
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038e78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c038e78");
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

__asm__(".globl FUN_8c038e78\n.set FUN_8c038e78, FUN_8c038e78_def\n");

}
//@unit 8c038ec8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 noop_038ec8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_038ec8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_038ec8\n.set noop_038ec8, noop_038ec8_def\n");

}
//@unit 8c038ecc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_FROG_EGG_038ecc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_FROG_EGG_038ecc");
  return (unsigned)sh4_interp(0x8c038ecc, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_FROG_EGG_038ecc\n.set s_FROG_EGG_038ecc, s_FROG_EGG_038ecc_def\n");
}
//@unit 8c0390f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m3_0390f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("CAnimal_m3_0390f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl CAnimal_m3_0390f4\n.set CAnimal_m3_0390f4, CAnimal_m3_0390f4_def\n");

}
//@unit 8c03911c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 ret_const_1_03911c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_03911c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_03911c\n.set ret_const_1_03911c, ret_const_1_03911c_def\n");

}
//@unit 8c039124
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c039124_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c039124");
  return (unsigned)sh4_interp(0x8c039124, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c039124\n.set FUN_8c039124, FUN_8c039124_def\n");
}
//@unit 8c03a298
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a298_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a298");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27ed10,((void *)0x8c03a3dc),4,0x65); });
  return uVar1;
}

__asm__(".globl FUN_8c03a298\n.set FUN_8c03a298, FUN_8c03a298_def\n");

}
//@unit 8c03a2bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a2bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a2bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27eb70,((void *)0x8c0247b0),4,0x65); });
  return uVar1;
}

__asm__(".globl FUN_8c03a2bc\n.set FUN_8c03a2bc, FUN_8c03a2bc_def\n");

}
//@unit 8c03a2e0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a2e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a2e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e9d0,((void *)0x8c03a3dc),4,0x65); });
  return uVar1;
}

__asm__(".globl FUN_8c03a2e0\n.set FUN_8c03a2e0, FUN_8c03a2e0_def\n");

}
//@unit 8c03a304
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a304_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a304");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e830,((void *)0x8c0247b0),4,0x65); });
  return uVar1;
}

__asm__(".globl FUN_8c03a304\n.set FUN_8c03a304, FUN_8c03a304_def\n");

}
//@unit 8c03a328
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a328");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e7c8,((void *)0x8c03a3dc),4,0x17); });
  return uVar1;
}

__asm__(".globl FUN_8c03a328\n.set FUN_8c03a328, FUN_8c03a328_def\n");

}
//@unit 8c03a34c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a34c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a34c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e760,((void *)0x8c0247b0),4,0x17); });
  return uVar1;
}

__asm__(".globl FUN_8c03a34c\n.set FUN_8c03a34c, FUN_8c03a34c_def\n");

}
//@unit 8c03a370
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a370_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a370");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e6fc,((void *)0x8c03a3dc),4,0x16); });
  return uVar1;
}

__asm__(".globl FUN_8c03a370\n.set FUN_8c03a370, FUN_8c03a370_def\n");

}
//@unit 8c03a394
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a394_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a394");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e698,((void *)0x8c0247b0),4,0x16); });
  return uVar1;
}

__asm__(".globl FUN_8c03a394\n.set FUN_8c03a394, FUN_8c03a394_def\n");

}
//@unit 8c03a3b8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a3b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a3b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e62c,((void *)0x8c03a3dc),4,0x18); });
  return uVar1;
}

__asm__(".globl FUN_8c03a3b8\n.set FUN_8c03a3b8, FUN_8c03a3b8_def\n");

}
//@unit 8c03a3dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_03a3dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_03a3dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_03a3dc\n.set free_if_nonnull_wrap_03a3dc, free_if_nonnull_wrap_03a3dc_def\n");

}
//@unit 8c03a40c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a40c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a40c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e5c0,((void *)0x8c0247b0),4,0x18); });
  return uVar1;
}

__asm__(".globl FUN_8c03a40c\n.set FUN_8c03a40c, FUN_8c03a40c_def\n");

}
//@unit 8c03a430
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a430_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a430");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(((undefined1 *)(unsigned)0x8c27e594),((void *)0x8c03a454),0x10,2); });
  return uVar1;
}

__asm__(".globl FUN_8c03a430\n.set FUN_8c03a430, FUN_8c03a430_def\n");

}
//@unit 8c03a454
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int free_if_nonnull_wrap_03a454_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_03a454");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_03a454\n.set free_if_nonnull_wrap_03a454, free_if_nonnull_wrap_03a454_def\n");

}
//@unit 8c03a484
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03a484_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a484");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27dfd4,((void *)0x8c03a4ac),0x124,5); });
  return uVar1;
}

__asm__(".globl FUN_8c03a484\n.set FUN_8c03a484, FUN_8c03a484_def\n");

}
//@unit 8c03a4ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03a4ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a4ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c024758(ar4 + 0xf8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xd8,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0247b0(ar4 + 0xb0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x98,0xffffffff,ar6,ar7));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x88,((void *)0x8c0153e4),8,2); });
    uVar2 = 2;
    uVar1 = 8;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x78,((void *)0x8c0153e4),8,2); });
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x74,0xffffffff,uVar1,uVar2));
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x70,((void *)0x8c016bfc),4,1); });
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x48,((void *)0x8c0247e0),0x14,2); });
    uVar2 = 2;
    uVar1 = 0x14;
    ar5_00 = ((void *)0x8c0247e0);
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); vec_delete_array(ar4 + 0x20,((void *)0x8c0247e0),0x14,2); });
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,uVar1,uVar2); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c03a4ac\n.set FUN_8c03a4ac, FUN_8c03a4ac_def\n");

}
//@unit 8c03a5a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  FUN_8c03a5a4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03a5a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12a03c));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x248,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x258,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x268,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2a8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x2c8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2d4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x308,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x34c,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03c100(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c03a5a4\n.set FUN_8c03a5a4, FUN_8c03a5a4_def\n");

}
//@unit 8c03a65c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a03c_m6_03a65c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a03c_m6_03a65c");
  return (unsigned)sh4_interp(0x8c03a65c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a03c_m6_03a65c\n.set Class_12a03c_m6_03a65c, Class_12a03c_m6_03a65c_def\n");
}
//@unit 8c03c0f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03c0f0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03c0f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<int>* )(unsigned)(ar4 + 0x14) + ar5 * 4;
}

__asm__(".globl FUN_8c03c0f0\n.set FUN_8c03c0f0, FUN_8c03c0f0_def\n");

}
//@unit 8c03c100
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03c100_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03c100");
  return (unsigned)sh4_interp(0x8c03c100, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03c100\n.set FUN_8c03c100, FUN_8c03c100_def\n");
}
//@unit 8c03c314
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03c314_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03c314");
  return (unsigned)sh4_interp(0x8c03c314, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03c314\n.set FUN_8c03c314, FUN_8c03c314_def\n");
}
//@unit 8c03c32c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined4>*  Class_12a03c_m0_03c32c_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a03c_m0_03c32c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12a03c);
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xd3,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xc2,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xb5,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0xb2,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0xaa,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x9a,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x96,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x92,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12a03c_m0_03c32c\n.set Class_12a03c_m0_03c32c, Class_12a03c_m0_03c32c_def\n");

}
//@unit 8c03c40c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int Class_12a03c_m7_03c40c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a03c_m7_03c40c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031684(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2e8 + ar4) = 0;
  iVar1 = 0x178;
  *(le<undefined4>* )(unsigned)(0x178 + ar4) = 0;
  return iVar1;
}

__asm__(".globl Class_12a03c_m7_03c40c\n.set Class_12a03c_m7_03c40c, Class_12a03c_m7_03c40c_def\n");

}
//@unit 8c03c43c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a03c_m1_03c43c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a03c_m1_03c43c");
  return (unsigned)sh4_interp(0x8c03c43c, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a03c_m1_03c43c\n.set Class_12a03c_m1_03c43c, Class_12a03c_m1_03c43c_def\n");
}
//@unit 8c03c94c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03c94c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03c94c");
  return (unsigned)sh4_interp(0x8c03c94c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03c94c\n.set FUN_8c03c94c, FUN_8c03c94c_def\n");
}
//@unit 8c03f39c
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03f39c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03f39c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x8c;
  *(le<undefined4>* )(unsigned)(0x8c + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c03f39c\n.set FUN_8c03f39c, FUN_8c03f39c_def\n");

}
//@unit 8c03f3ac
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f3ac_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f3ac");
  return (unsigned)sh4_interp(0x8c03f3ac, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f3ac\n.set FUN_8c03f3ac, FUN_8c03f3ac_def\n");
}
//@unit 8c03f3e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03f3e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03f3e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x88;
  *(le<undefined4>* )(unsigned)(0x88 + ar4) = 1;
  return iVar1;
}

__asm__(".globl FUN_8c03f3e8\n.set FUN_8c03f3e8, FUN_8c03f3e8_def\n");

}
//@unit 8c03f3f8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f3f8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f3f8");
  return (unsigned)sh4_interp(0x8c03f3f8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f3f8\n.set FUN_8c03f3f8, FUN_8c03f3f8_def\n");
}
//@unit 8c03f414
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f414_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f414");
  return (unsigned)sh4_interp(0x8c03f414, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f414\n.set FUN_8c03f414, FUN_8c03f414_def\n");
}
//@unit 8c03f430
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f430_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f430");
  return (unsigned)sh4_interp(0x8c03f430, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f430\n.set FUN_8c03f430, FUN_8c03f430_def\n");
}
//@unit 8c03f460
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f460_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f460");
  return (unsigned)sh4_interp(0x8c03f460, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f460\n.set FUN_8c03f460, FUN_8c03f460_def\n");
}
//@unit 8c03f480
#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03f480_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c03f480");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x28,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c03f480\n.set FUN_8c03f480, FUN_8c03f480_def\n");

}
//@unit 8c03f4a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c03f4a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c03f4a4");
  return (unsigned)sh4_interp(0x8c03f4a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c03f4a4\n.set FUN_8c03f4a4, FUN_8c03f4a4_def\n");
}
