//@unit 8c0300a4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0300a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdc98(ar4,ar5,ar6,ar7));
  for (iVar1 = 0; iVar1 < 0x2d; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(0x674 + ar4 + iVar1 * 4) = 0;
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      *(undefined4 *)(unsigned)(0x2f0 + iVar1 * 0x14 + ar4 + iVar2 * 4) = 0;
    }
  }
  for (iVar1 = 0; iVar1 < 0x20; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0x750 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x730 + ar4 + iVar1) = 0;
    *(undefined1 *)(unsigned)(0x2c8 + ar4 + iVar1) = 0;
  }
  *(undefined4 *)(unsigned)(0x2e8 + ar4) = 0xffffffff;
  *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x72c + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(0x770 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x77c + ar4) = 0;
  *(undefined4 *)(unsigned)(0xb8 + ar4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 3;
  *(undefined4 *)(unsigned)(0x2ec + ar4) = 4;
  *(undefined4 *)(unsigned)(0x778 + ar4) = 0;
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(0xc8 + ar4 + iVar1 * 0x20) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0300a4\n.set _FUN_8c0300a4, _FUN_8c0300a4_def\n");
//@unit 8c0301f8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0301f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x2d; iVar2 = iVar2 + 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                      (0x3e8,*(int *)(unsigned)(ar4 + 0x60) + 1,ar6,ar7));
    if (uVar1 < (uint)(*(int *)(unsigned)(0x77c + ar4) - *(int *)(unsigned)(0x674 + ar4 + iVar2 * 4))) {
      *(undefined4 *)(unsigned)(0x674 + ar4 + iVar2 * 4) = 0;
    }
  }
  *(undefined4 *)(unsigned)(0x708 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x724 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x714 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x710 + ar4) = 0;
  if (*(int *)(unsigned)(0x770 + ar4) == 2) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 2;
  }
  if (*(int *)(unsigned)(0x770 + ar4) == 3) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x674 + ar4 + *(int *)(unsigned)(0x72c + ar4) * 4) =
         *(undefined4 *)(unsigned)(0x77c + ar4);
    *(undefined1 *)(unsigned)(0x774 + ar4) = 0;
    *(undefined4 *)(unsigned)(0x72c + ar4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  }
  if (*(int *)(unsigned)(0x770 + ar4) == 1) {
    *(undefined4 *)(unsigned)(0x770 + ar4) = 1;
  }
  iVar2 = 0x77c;
  *(int *)(unsigned)(0x77c + ar4) = *(int *)(unsigned)(0x77c + ar4) + 1;
  return iVar2;
}

__asm__(".globl _FUN_8c0301f8\n.set _FUN_8c0301f8, _FUN_8c0301f8_def\n");
//@unit 8c030304
#include "../decls.h"
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
  ring[rp++ & 255] = "s_STATUS_FORMAT_030306";
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
  *(undefined4 *)(unsigned)(ar4 + 0x2ec) = 4;
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x20,((undefined1 *)(unsigned)0x8c132a14),ar6,ar7); });
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); strcpy(ar4 + 0x40,((undefined1 *)(unsigned)0x8c132a22),ar6,ar7); });
  return uVar1;
}

__asm__(".globl _s_STATUS_FORMAT_030306\n.set _s_STATUS_FORMAT_030306, _s_STATUS_FORMAT_030306_def\n");
//@unit 8c0303b8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0303b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

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
  if ((((*(int *)(unsigned)(ar4 + 0x2e8) == -1) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030538(ar4,ar5,iVar4,uVar3)), iVar1 == 0)) &&
      (*(int *)(unsigned)(ar4 + 0x770) == 0)) &&
     ((*(int *)(unsigned)(ar4 + 0x778) == 0 && (*(int *)(unsigned)(ar4 + 0x60) <= ar6)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x770) = 1;
    *(int *)(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2c8,iVar4,uVar3); });
    uVar8 = CONCAT31((int3)((uint)uVar8 >> 8),(char)uVar8 + *(char *)(unsigned)(ar4 + 0x728));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x34)),(fr0_ + (int)0xffffffb4),iVar4,uVar3));
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4,((undefined1 *)(fr0_ - 0x34)),iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x20,ar7,iVar4,uVar3); });
    ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x40,s0,iVar4,uVar3); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,uVar3));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(unsigned)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0303b8\n.set _FUN_8c0303b8, _FUN_8c0303b8_def\n");
//@unit 8c030538
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030538";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x674 + ar4 + ar5 * 4);
}

__asm__(".globl _FUN_8c030538\n.set _FUN_8c030538, _FUN_8c030538_def\n");
//@unit 8c030550
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030550";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x674;
  *(undefined4 *)(unsigned)(0x674 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c030550\n.set _FUN_8c030550, _FUN_8c030550_def\n");
//@unit 8c030568
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030568";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

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
  if ((((*(int *)(unsigned)(ar4 + 0x2e8) == -1) &&
       (iVar4 = ar6, ar7_00 = ar7, iVar1 = (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c030538(ar4,ar5,ar6,ar7)), iVar1 == 0)) &&
      (*(int *)(unsigned)(ar4 + 0x770) == 0)) &&
     ((*(int *)(unsigned)(ar4 + 0x778) == 0 && (*(int *)(unsigned)(ar4 + 0x60) <= ar6)))) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar2;
    *(undefined4 *)(unsigned)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x770) = 2;
    *(int *)(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(((undefined1 *)(fr0_ - 0x34)),ar4 + 0x2c8,iVar4,ar7_00); });
    uVar3 = CONCAT31((int3)((uint)uVar3 >> 8),(char)uVar3 + *(char *)(unsigned)(ar4 + 0x728));
    (vsp = ((unsigned long)(fr0_ - 152)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x34)),(fr0_ + (int)0xffffffb4),iVar4,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4,((undefined1 *)(fr0_ - 0x34)),iVar4,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x20,ar7,iVar4,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 152)); strcpy(ar4 + 0x40,s0,iVar4,ar7_00); });
    uVar3 = (vsp = ((unsigned long)(fr0_ - 152)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,iVar4,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar3;
    *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x72c) * 0x14 + ar4 + *(int *)(unsigned)(ar4 + 0x60) * 4 + 0x2f0) = 1;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c030568\n.set _FUN_8c030568, _FUN_8c030568_def\n");
//@unit 8c0306d4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0306d4";
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
  if ((*(char *)(unsigned)(0x774 + ar4) == '\0') && (*(int *)(unsigned)(0x778 + ar4) == 0)) {
    uVar2 = ar6;
    ar7_00 = ar7;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(undefined4 *)(unsigned)(0x2ec + ar4) = uVar1;
    if (*(int *)(unsigned)(0x2e8 + ar4) == -1) {
      if (*(int *)(unsigned)(0x2e8 + ar4) == -1) {
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar2,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
        uVar7 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
        *(undefined4 *)(unsigned)(0xb0 + ar4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x60) = ar6;
        iVar6 = ar4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f82a4))))
                          (0x8c35468c,*(undefined4 *)(unsigned)(0x2ec + ar4),ar4,ar7));
        *(undefined4 *)(unsigned)(0x2e8 + ar4) = uVar2;
        (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,iVar6,ar7));
        if (*(int *)(unsigned)(0x2e8 + ar4) != -1) {
          *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
        }
      }
    }
    else {
      *(undefined4 *)(unsigned)(0x2e8 + ar4) = 0xffffffff;
      uVar7 = 0;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030550(ar4,ar5,0,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,0,uVar7,ar7_00));
      uVar2 = ar6;
      uVar7 = ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c03087c(ar4,ar5,ar6,ar7); });
      *(undefined4 *)(unsigned)(0xb0 + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x60) = ar6;
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c030870(ar4,2,uVar2,ar7));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0f82a4(0x8c35468c,*(undefined4 *)(unsigned)(0x2ec + ar4),ar4,ar7));
      *(undefined4 *)(unsigned)(0x2e8 + ar4) = uVar2;
      if (*(int *)(unsigned)(0x2e8 + ar4) != -1) {
        *(undefined1 *)(unsigned)(0x774 + ar4) = 1;
      }
    }
  }
  return uVar7;
}

__asm__(".globl _FUN_8c0306d4\n.set _FUN_8c0306d4, _FUN_8c0306d4_def\n");
//@unit 8c030870
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030870";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x770;
  *(undefined4 *)(unsigned)(0x770 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c030870\n.set _FUN_8c030870, _FUN_8c030870_def\n");
//@unit 8c03087c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03087c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

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
  if (((*(int *)(unsigned)(ar4 + 0x2e8) == -1) && (*(int *)(unsigned)(ar4 + 0x770) == 0)) &&
     (*(int *)(unsigned)(ar4 + 0x778) == 0)) {
    uVar1 = ar6;
    ar7_00 = ar7;
    (*(undefined4 *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = (*(undefined4 *)(fr0_ - 0x30));
    *(undefined4 *)(unsigned)(ar4 + 0x72c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x770) = 2;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(((undefined1 *)(fr0_ - 0x2c)),ar4 + 0x2c8,uVar1,ar7_00); });
    (*(char *)(fr0_ - 0x40)) = (*(char *)(fr0_ - 0x40)) + *(char *)(unsigned)(ar4 + 0x728);
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c01437c(((undefined1 *)(fr0_ - 0x2c)),&(*(char *)(fr0_ - 0x40)),uVar1,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4,((undefined1 *)(fr0_ - 0x2c)),uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x20,ar7,uVar1,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 64)); strcpy(ar4 + 0x40,s0,uVar1,ar7_00); });
    (*(int *)(fr0_ - 0x38)) = *(int *)(unsigned)(ar4 + 0x72c);
    (*(int *)(fr0_ - 0x3c)) = *(int *)(unsigned)(ar4 + 0x60);
    *(undefined4 *)(unsigned)((*(int *)(fr0_ - 0x38)) * 0x14 + ar4 + (*(int *)(fr0_ - 0x3c)) * 4 + 0x2f0) = 1;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), s_EVENT_ROCK_PUSH_030ac6(ar4,ar7,uVar1,ar7_00));
    *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar1;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c03087c\n.set _FUN_8c03087c, _FUN_8c03087c_def\n");
//@unit 8c0309c8
#include "../decls.h"
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
  ring[rp++ & 255] = "s_JUNGLE_0309ca";
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
  if (((*(int *)(unsigned)(ar4 + 0x2e8) == -1) && (*(int *)(unsigned)(ar4 + 0x770) == 0)) &&
     (*(int *)(unsigned)(ar4 + 0x778) == 0)) {
    *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
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

__asm__(".globl _s_JUNGLE_0309ca\n.set _s_JUNGLE_0309ca, _s_JUNGLE_0309ca_def\n");
//@unit 8c030ac4
#include "../decls.h"
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
  ring[rp++ & 255] = "s_EVENT_ROCK_PUSH_030ac6";
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

__asm__(".globl _s_EVENT_ROCK_PUSH_030ac6\n.set _s_EVENT_ROCK_PUSH_030ac6, _s_EVENT_ROCK_PUSH_030ac6_def\n");
//@unit 8c030c9c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030c9c";
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

__asm__(".globl _FUN_8c030c9c\n.set _FUN_8c030c9c, _FUN_8c030c9c_def\n");
//@unit 8c030d04
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030d04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x728;
  *(undefined1 *)(unsigned)(0x728 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c030d04\n.set _FUN_8c030d04, _FUN_8c030d04_def\n");
//@unit 8c030d10
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030d10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(int *)(unsigned)(ar4 + 100) = (int)*ar5;
  *(int *)(unsigned)(ar4 + 0x68) = (int)ar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = *(undefined4 *)(unsigned)(ar5 + 4);
  return 0x6c;
}

__asm__(".globl _FUN_8c030d10\n.set _FUN_8c030d10, _FUN_8c030d10_def\n");
//@unit 8c030d2c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030d2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = (char)*(undefined4 *)(unsigned)(ar4 + 100);
  ar5[1] = 3;
  uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x6c);
  *(undefined4 *)(unsigned)(ar5 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c030d2c\n.set _FUN_8c030d2c, _FUN_8c030d2c_def\n");
//@unit 8c030d44
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030d44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c030d44\n.set _FUN_8c030d44, _FUN_8c030d44_def\n");
//@unit 8c030d58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c030d58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c030d58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b58),ar5,ar6,ar7));
  uVar3 = 0x8c27d500;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d500,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b68),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27d50c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d50c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b78),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27d518;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d518,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125b88),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27d524,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125b98) = CONCAT44((*(undefined1 *)(unsigned)0x8c125b9c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125b98) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c030d58\n.set _FUN_8c030d58, _FUN_8c030d58_def\n");
//@unit 8c030e10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c030e10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c030e10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c102748(ar4,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xc) = (ulonglong)extraout_fr1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c030e10\n.set _FUN_8c030e10, _FUN_8c030e10_def\n");
//@unit 8c030e34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c030e34_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c030e34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  undefined4 in_fr9 = 0;
  undefined4 in_fr8 = 0;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  ar4[3] = in_fr7;
  ar4[4] = in_fr8;
  ar4[5] = in_fr9;
  return ar4;
}

__asm__(".globl _FUN_8c030e34\n.set _FUN_8c030e34, _FUN_8c030e34_def\n");
//@unit 8c030e5c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c030e5c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c030e5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[6] = 0;
  ar4[3] = 0;
  ar4[4] = 3;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0x3f800000;
  *(undefined1 *)(unsigned)(ar4 + 10) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c030e5c\n.set _FUN_8c030e5c, _FUN_8c030e5c_def\n");
//@unit 8c030e9c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030e9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030eb8(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c030e9c\n.set _FUN_8c030e9c, _FUN_8c030e9c_def\n");
//@unit 8c030eb8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030eb8";
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

__asm__(".globl _FUN_8c030eb8\n.set _FUN_8c030eb8, _FUN_8c030eb8_def\n");
//@unit 8c030f2c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c030f2c";
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

__asm__(".globl _FUN_8c030f2c\n.set _FUN_8c030f2c, _FUN_8c030f2c_def\n");
//@unit 8c030fa0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c030fa0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c030fa0";
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

__asm__(".globl _FUN_8c030fa0\n.set _FUN_8c030fa0, _FUN_8c030fa0_def\n");
//@unit 8c0310c0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0310c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0310c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x24) = 0x41200000;
  }
  else {
    in_fr1 = 0x41200000;
    *(undefined8 *)(unsigned)(ar4 + 0x24) = 0x41f0000041200000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x3f800000;
    *(undefined4 *)(unsigned)(ar4 + 0x34) = 0x41f00000;
    *(undefined4 *)(unsigned)(ar4 + 0x38) = 0x42700000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x30) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(unsigned)(ar4 + 0x34) = 0x4270000041f00000;
    in_fr1 = 0x42700000;
    *(undefined8 *)(unsigned)(ar4 + 0x38) = 0x12442700000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x124) = 0;
  *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x138) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x130) = 0x42480000;
  }
  else {
    in_fr1 = 0x42480000;
    *(undefined8 *)(unsigned)(ar4 + 0x130) = 0xa042480000;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xa8) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa8) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xac) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x128) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x7c) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x7c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x1d4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1f8) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1f8) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x210) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a8) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x1a4) = 0xffffffff;
  *(int *)(unsigned)(ar4 + 0x17c) = ar4 + 0x18c;
  *(int *)(unsigned)(ar4 + 0x180) = ar4 + 0x1a4;
  *(undefined4 *)(unsigned)(ar4 + 0x184) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x188) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x1ac) = 0;
  ({ unsigned long ri0_ = (unsigned long)(0xffffffff); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c015ad4(ar4 + 0x1b0,((undefined1 *)(unsigned)0x8c12f2cc),ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1bc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1d0) = 0;
  return 0x1d0;
}

__asm__(".globl _FUN_8c0310c0\n.set _FUN_8c0310c0, _FUN_8c0310c0_def\n");
//@unit 8c0312f4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_129cbc_m0_0312f4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129cbc_m0_0312f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
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

__asm__(".globl _Class_129cbc_m0_0312f4\n.set _Class_129cbc_m0_0312f4, _Class_129cbc_m0_0312f4_def\n");
//@unit 8c031434
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c031434";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x128;
  *(undefined4 *)(unsigned)(0x128 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c031434\n.set _FUN_8c031434, _FUN_8c031434_def\n");
//@unit 8c031440
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_129cbc_m5_031440_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_129cbc_m5_031440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_10_031590(ar4 + 0xb0,ar5,ar6,ar7));
  ar7_00 = 0;
  uVar3 = 0xffffffff;
  iVar1 = iVar1 + -1;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                    (ar4 + 0xb0,iVar1,0xffffffff,0));
  if (iVar2 != 6) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,iVar1,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,iVar1,uVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar1,uVar3,ar7_00));
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033b98))))
                    (ar4 + 0xb0,iVar1,uVar3,ar7_00));
  return uVar3;
}

__asm__(".globl _Class_129cbc_m5_031440\n.set _Class_129cbc_m5_031440, _Class_129cbc_m5_031440_def\n");
//@unit 8c0314f8
#include "../decls.h"
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
  ring[rp++ & 255] = "s_Check_This_Motion_Data_0314fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(int *)(fr0_ - 0x18)) = ar5;
  (*(int *)(fr0_ - 0x10)) = (vsp = ((unsigned long)(fr0_ - 36)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  if ((*(int *)(fr0_ - 0x10)) == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x24)),(&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x82,ar5,vr7));
    ({ unsigned long t0_ = (unsigned long)(5); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x85,((undefined1 *)(fr0_ - 0x24)),1,2); });
  }
  (*(int *)(fr0_ - 0x1c)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031588(*(int *)(unsigned)(ar4 + 0x14) + ar5 * 4,vr5,vr6,vr7));
  return uVar1;
}

__asm__(".globl _s_Check_This_Motion_Data_0314fc\n.set _s_Check_This_Motion_Data_0314fc, _s_Check_This_Motion_Data_0314fc_def\n");
//@unit 8c0314fc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimBody_CheckThisMotionData_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimBody_CheckThisMotionData";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  
  ar5_00 = ar5;
  (*(unsigned *)(fr0_ - 0x10) = (unsigned)(unsigned long)(ar5));
  (*(int *)(fr0_ - 0x8)) = (vsp = ((unsigned long)(fr0_ - 28)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5,ar6,ar7));
  if ((*(int *)(fr0_ - 0x8)) == 0) {
    ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x82); *(unsigned *)((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
              (((undefined1 *)(fr0_ - 0x1c)),ar5_00,ar6,ar7); });
    ar7 = 2;
    ar6 = 1;
    ar5_00 = ((undefined1 *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c132c08)) + 0x85,ar5_00,1,2));
  }
  (*(unsigned *)(fr0_ - 0x14) = (unsigned)(unsigned long)(ar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c031588(*(int *)(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimBody_CheckThisMotionData\n.set _CAnimBody_CheckThisMotionData, _CAnimBody_CheckThisMotionData_def\n");
//@unit 8c031588
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031588_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031588";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(*ar4 + 4);
}

__asm__(".globl _FUN_8c031588\n.set _FUN_8c031588, _FUN_8c031588_def\n");
//@unit 8c031590
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_10_031590";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_031590\n.set _get_field_10_031590, _get_field_10_031590_def\n");
//@unit 8c031598
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_129cbc_m1_031598";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(undefined1 *)(unsigned)(0x210 + ar4) = *(undefined1 *)(unsigned)(ar5 + 0x28);
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x14)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x14)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x14c,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c023484(ar4 + 0x80,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x40)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 68)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 68)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02a1fc(ar4 + 0x14c,uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _Class_129cbc_m1_031598\n.set _Class_129cbc_m1_031598, _Class_129cbc_m1_031598_def\n");
//@unit 8c031684
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031684_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031684";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  uint extraout_fr1 = 0;
  char cVar1;
  
  cVar1 = '\0';
  ar7_00 = 0;
  ar6_00 = 0xffffffff;
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0x2c,0,0xffffffff,0));
  (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0x2c,ar5_00,ar6_00,ar7_00));
  if (cVar1 == '\0') {
    ar4[10] = 0;
    ar4[9] = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 10) = (ulonglong)extraout_fr1;
    *(ulonglong *)(unsigned)(ar4 + 9) = (ulonglong)extraout_fr1;
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031748(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031700(ar4,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,ar5_00,ar6_00,ar7_00));
  ar4[0x1a] = 0;
  return 0x68;
}

__asm__(".globl _FUN_8c031684\n.set _FUN_8c031684, _FUN_8c031684_def\n");
//@unit 8c031700
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031700_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031700";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  uint in_PR = 0;
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 12)), vec3_clear(ar4 + 0x6c,ar5,ar6,ar7));
  (*(undefined8 *)(fr0_ - 0xc)) = (ulonglong)in_fr1;
  if (cVar1 == '\0') {
    (*(undefined8 *)(fr0_ - 0xc)) = (ulonglong)in_PR << 0x20;
    *(undefined4 *)(unsigned)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xac) = (*(undefined8 *)(fr0_ - 0xc));
  }
  if (cVar1 == '\0') {
    *(int *)(unsigned)(ar4 + 0xa8) = (int)(*(undefined8 *)(fr0_ - 0xc));
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xa8) = (*(undefined8 *)(fr0_ - 0xc));
  }
  return 0;
}

__asm__(".globl _FUN_8c031700\n.set _FUN_8c031700, _FUN_8c031700_def\n");
//@unit 8c031748
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031748_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031748";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0xa4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
  return 0x94;
}

__asm__(".globl _FUN_8c031748\n.set _FUN_8c031748, _FUN_8c031748_def\n");
//@unit 8c031764
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  double *pdVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  float in_fr1 = 0;
  float fVar6;
  ulonglong uVar7;
  double dVar8;
  double in_xd0 = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar2 = ar6;
    ar6_00 = ar6;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); Vec3_sub(ar5,ar6,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 160)), Vec3_length(((undefined1 *)(fr0_ - 0x44)),uVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar2,ar6_00,ar7));
    uVar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6_00,ar7));
    uVar1 = 1;
    iVar3 = *(int *)(unsigned)(ar4 + 0x40);
    if ((iVar3 == 1) || (iVar3 == 3)) {
      if (*(int *)(unsigned)(ar4 + 0x44) == 1) {
        (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c031fc4(ar4,uVar5,ar6_00,ar7));
      }
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(unsigned)(ar4 + 0x30);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x30);
      }
      if (in_fr1 == 0.0) {
        dVar8 = CONCAT44D(0x3f800000,in_fr1);
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x78)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)),0x3f800000);
          dVar8 = (*(undefined8 *)(fr0_ - 0x78));
        }
      }
      else {
        pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
        if (cVar10 != '\0') {
          in_xd0 = *pdVar4;
          pdVar4 = (double *)(unsigned)(ar4 + 0x30);
        }
        dVar8 = *pdVar4;
        if (cVar9 == '\0') {
          fVar6 = F32LO(dVar8) / F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 / dVar8,0);
        }
        dVar8 = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x78)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)),fVar6);
          dVar8 = (*(undefined8 *)(fr0_ - 0x78));
        }
      }
      (*(undefined8 *)(fr0_ - 0x78)) = dVar8;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x24)),&(*(undefined8 *)(fr0_ - 0x78)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c023aa0(ar4 + 0x14,((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7));
      uVar5 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_length(ar4 + 0x14,uVar5,ar6_00,ar7));
      pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
      if (cVar10 != '\0') {
        in_xd0 = *pdVar4;
        pdVar4 = (double *)(unsigned)(ar4 + 0x30);
      }
      (*(undefined8 *)(fr0_ - 0x84)) = *pdVar4;
      if (SUB84((*(undefined8 *)(fr0_ - 0x84)),0) != F32HI((*(undefined8 *)(fr0_ - 0x84)))) {
        if (cVar10 == '\0') {
          dVar8 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x28);
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = (*(undefined8 *)(fr0_ - 0x84));
        }
        (*(undefined8 *)(fr0_ - 0x84)) = (double)(D2U(dVar8) & 0xffffffff);
        if (cVar9 == '\0' && 0.0 < SUB84(dVar8,0)) {
          if (cVar10 == '\0') {
            (*(undefined8 *)(fr0_ - 0x84)) = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x24);
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x24);
          }
          if (SUB84((*(undefined8 *)(fr0_ - 0x84)),0) == 0.0) {
            if (cVar10 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x2c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
            }
          }
          else {
            if (cVar10 == '\0') {
              dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),*(undefined4 *)(unsigned)(ar4 + 0x28));
            }
            else {
              in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
              dVar8 = *(double *)(unsigned)(ar4 + 0x24);
            }
            if (cVar9 == '\0') {
              fVar6 = F32LO(dVar8) / F32HI(dVar8);
            }
            else {
              fVar6 = SUB84(dVar8 / dVar8,0);
            }
            if (cVar10 == '\0') {
              dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c),fVar6);
            }
            else {
              dVar8 = *(double *)(unsigned)(ar4 + 0x2c);
            }
            if (cVar9 == '\0') {
              fVar6 = F32LO(dVar8) + F32HI(dVar8);
            }
            else {
              fVar6 = SUB84(dVar8 + dVar8,0);
            }
            if (cVar10 == '\0') {
              *(float *)(unsigned)(ar4 + 0x2c) = fVar6;
            }
            else {
              *(double *)(unsigned)(ar4 + 0x2c) = in_xd0;
            }
          }
          pdVar4 = (double *)(unsigned)(ar4 + 0x2c);
          if (cVar10 != '\0') {
            in_xd0 = *pdVar4;
            pdVar4 = (double *)(unsigned)(ar4 + 0x30);
          }
          (*(undefined8 *)(fr0_ - 0x84)) = *pdVar4;
          if (cVar9 == '\0' && F32HI((*(undefined8 *)(fr0_ - 0x84))) < SUB84((*(undefined8 *)(fr0_ - 0x84)),0)) {
            if (cVar10 == '\0') {
              uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x30);
              (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D(uVar5,SUB84((*(undefined8 *)(fr0_ - 0x84)),0));
              *(undefined4 *)(unsigned)(ar4 + 0x2c) = uVar5;
            }
            else {
              (*(undefined8 *)(fr0_ - 0x84)) = *(double *)(unsigned)(ar4 + 0x30);
              *(double *)(unsigned)(ar4 + 0x2c) = (*(undefined8 *)(fr0_ - 0x84));
            }
          }
        }
      }
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c022fc0(ar6,ar5,ar6_00,ar7));
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D(uVar2,(int)((ulonglong)(*(undefined8 *)(fr0_ - 0x84)) >> 0x20));
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
        dVar8 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) + F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 + dVar8,0);
      }
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x84)) = CONCAT44D((undefined4)(*(undefined8 *)(fr0_ - 0x84)),fVar6);
      }
      if (cVar9 != '\0' || F32HI((*(undefined8 *)(fr0_ - 0x84))) <= SUB84((*(undefined8 *)(fr0_ - 0x84)),0)) {
        uVar7 = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0x84)),0));
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          uVar7 = (ulonglong)*(uint *)(unsigned)(ar4 + 0x38);
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar7;
          in_xd0 = *(double *)(unsigned)(ar4 + 0x38);
        }
        if ((float)uVar7 == 0.0) {
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x28);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x3c) = *(undefined8 *)(unsigned)(ar4 + 0x28);
          }
        }
        else {
          if (cVar10 == '\0') {
            dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
            dVar8 = *(double *)(unsigned)(ar4 + 0x38);
          }
          if (cVar9 == '\0') {
            fVar6 = F32LO(dVar8) / F32HI(dVar8);
          }
          else {
            fVar6 = SUB84(dVar8 / dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(unsigned)(ar4 + 0x3c) = fVar6;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x3c) = in_xd0;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
        uVar1 = 0;
      }
    }
    else if (iVar3 == 4) {
      uVar1 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar5,ar6_00,ar7); });
      uVar2 = (vsp = ((unsigned long)(fr0_ - 160)), Vec3_length(((undefined1 *)(fr0_ - 0x64)),uVar5,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7));
      if (cVar10 == '\0') {
        dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x38),*(undefined4 *)(unsigned)(ar4 + 0x2c));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x2c);
        dVar8 = *(double *)(unsigned)(ar4 + 0x38);
      }
      if (cVar9 == '\0') {
        fVar6 = F32LO(dVar8) / F32HI(dVar8);
      }
      else {
        fVar6 = SUB84(dVar8 / dVar8,0);
      }
      dVar8 = in_xd0;
      if (cVar10 == '\0') {
        (*(undefined8 *)(fr0_ - 0x78)) = CONCAT44D((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x78))+4)),fVar6);
        dVar8 = (*(undefined8 *)(fr0_ - 0x78));
      }
      (*(undefined8 *)(fr0_ - 0x78)) = dVar8;
      ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x78)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 160)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 160)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x34)),&(*(undefined8 *)(fr0_ - 0x78)),ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c023aa0(ar4 + 0x14,(int)&(*(undefined8 *)(fr0_ - 0x78)) + 4,ar6_00,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x78)) + 4,0xffffffff,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_length(ar4 + 0x14,uVar2,ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
      if (cVar10 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x28);
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
      }
      if (cVar9 == '\0' && fVar6 < 0.0) {
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = *(double *)(unsigned)(ar4 + 0x3c);
        }
        if (cVar9 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        (*(undefined8 *)(fr0_ - 0x9c)) = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x9c)) = CONCAT44D(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x9c))+4)) + 0x28) = (undefined4)(*(undefined8 *)(fr0_ - 0x9c));
          (*(undefined8 *)(fr0_ - 0x9c)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x9c)) & 0xffffffff);
        }
        else {
          *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x9c))+4)) + 0x28) = (*(undefined8 *)(fr0_ - 0x9c));
        }
        if (cVar9 != '\0' || 0.0 <= SUB84((*(undefined8 *)(fr0_ - 0x9c)),0)) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(*(undefined8 *)(fr0_ - 0x9c)) & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0x9c)),0));
          }
        }
      }
      else {
        if (cVar10 == '\0') {
          dVar8 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x3c),*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(double *)(unsigned)(ar4 + 0x28);
          dVar8 = *(double *)(unsigned)(ar4 + 0x3c);
        }
        if (cVar9 == '\0') {
          fVar6 = F32LO(dVar8) - F32HI(dVar8);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        (*(undefined8 *)(fr0_ - 0x94)) = in_xd0;
        if (cVar10 == '\0') {
          (*(undefined8 *)(fr0_ - 0x94)) = CONCAT44D(ar4,fVar6);
        }
        if (cVar10 == '\0') {
          *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x28) = (undefined4)(*(undefined8 *)(fr0_ - 0x94));
          (*(undefined8 *)(fr0_ - 0x94)) = (double)((ulonglong)(*(undefined8 *)(fr0_ - 0x94)) & 0xffffffff);
        }
        else {
          *(double *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x94))+4)) + 0x28) = (*(undefined8 *)(fr0_ - 0x94));
        }
        if (cVar9 != '\0' || SUB84((*(undefined8 *)(fr0_ - 0x94)),0) <= 0.0) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)(*(undefined8 *)(fr0_ - 0x94)) & 0xffffffff;
          }
          if (cVar10 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c) = CONCAT44(0x3f800000,SUB84((*(undefined8 *)(fr0_ - 0x94)),0));
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c031764\n.set _FUN_8c031764, _FUN_8c031764_def\n");
//@unit 8c031ab4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031ab4_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031ab4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined8 *ar5_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0231c8(ar4 + 0x80,ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)ar5 = uVar1;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar1;
  }
  else {
    *ar5 = in_dr0;
  }
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c02327c(ar4 + 0x80,ar5_00,ar6,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x14)) = uVar1;
  if (cVar2 != '\0') {
    (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x10)) = uVar1;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)((int)ar5 + 4) = (*(undefined4 *)(fr0_ - 0x14));
  }
  else {
    *(undefined8 *)(unsigned)((int)ar5 + 4) = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
  }
  return 0;
}

__asm__(".globl _FUN_8c031ab4\n.set _FUN_8c031ab4, _FUN_8c031ab4_def\n");
//@unit 8c031b08
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c031b08_def(int *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031b08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(unsigned)(0x178 + (int)ar4);
  if (iVar1 == 0) {
    if (ar6 == 1) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x2c))))(ar4,ar5,1,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b58((int)ar4 + 0xb0,ar5_00,ar6,ar7));
    }
    iVar1 = 0x124;
    *(undefined4 *)(unsigned)(0x124 + (int)ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c031b08\n.set _FUN_8c031b08, _FUN_8c031b08_def\n");
//@unit 8c031b58
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c031b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
  return 0x6c;
}

__asm__(".globl _FUN_8c031b58\n.set _FUN_8c031b58, _FUN_8c031b58_def\n");
//@unit 8c031b68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c031b68_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031b68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0xa0) = *ar5;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(unsigned)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(unsigned)(ar4 + 0x48) = ar5[3];
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = ar5[4];
  *(undefined4 *)(unsigned)(ar4 + 0x50) = ar5[5];
  return ar5 + 4;
}

__asm__(".globl _FUN_8c031b68\n.set _FUN_8c031b68, _FUN_8c031b68_def\n");
//@unit 8c031bb4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031bb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031bb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fr1 = 0;
  float fVar3;
  ulonglong uVar4;
  double dVar5;
  double dVar6;
  double in_dr4 = 0;
  double in_xd0 = 0;
  undefined8 in_xd14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  fVar3 = F32HI(in_dr4);
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
  uVar4 = (ulonglong)in_fr1;
  uVar1 = ar5;
  uVar2 = ar6;
  if (0.0 < fVar3) {
    *(float *)(unsigned)(ar4 + 0x24) = fVar3;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x24) = (int)(uVar4 >> 0x20);
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x24) = uVar4;
    }
  }
  dVar5 = (double)(uVar4 & 0xffffffff);
  if (cVar8 == '\0') {
    bVar7 = 0.0 < SUB84(in_dr4,0);
  }
  else {
    bVar7 = dVar5 < in_dr4;
  }
  if (bVar7) {
    ar6 = uVar1;
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = SUB84(in_dr4,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = in_xd14;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022fc0(ar5,ar6,uVar2,ar7));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x24),(int)(D2U(dVar5) >> 0x20));
      dVar5 = in_xd0;
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x30) = fVar3;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031c64(ar4,ar6,uVar2,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
  return 0x40;
}

__asm__(".globl _FUN_8c031bb4\n.set _FUN_8c031bb4, _FUN_8c031bb4_def\n");
//@unit 8c031c64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031c64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031c64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x24) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 1;
  return 0x44;
}

__asm__(".globl _FUN_8c031c64\n.set _FUN_8c031c64, _FUN_8c031c64_def\n");
//@unit 8c031c74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031c74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031c74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x40) != 0) {
    if (*(int *)(unsigned)(ar4 + 0x40) != 4) {
      *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0x3f800000;
      if (*(float *)(unsigned)(ar4 + 0x38) == 0.0) {
        *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0x3f800000;
      }
      else {
        *(float *)(unsigned)(ar4 + 0x3c) = *(float *)(unsigned)(ar4 + 0x28) / *(float *)(unsigned)(ar4 + 0x38);
      }
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 4;
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031764(ar4,ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c031c74\n.set _FUN_8c031c74, _FUN_8c031c74_def\n");
//@unit 8c031ce8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031ce8_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031ce8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *ar6_00;
  undefined8 in_dr0 = 0;
  undefined4 uVar2;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = ar6;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,ar5,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)in_dr0;
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar1 = uVar2;
  if (cVar3 == '\0') {
    uVar1 = ((undefined4 *)(fr0_ - 0x34))[0];
    (*(undefined4 *)(fr0_ - 0x24)) = uVar2;
    uVar2 = (*(undefined4 *)(fr0_ - 0x20));
  }
  (*(undefined4 *)(fr0_ - 0x20)) = uVar2;
  ((undefined4 *)(fr0_ - 0x34))[0] = uVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,ar5,ar6_00,ar7));
  (*(undefined4 *)(fr0_ - 0x1c)) = (undefined4)in_dr0;
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar3 == '\0') {
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
    uVar1 = (*(undefined4 *)(fr0_ - 0x18));
  }
  (*(undefined4 *)(fr0_ - 0x18)) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_xyz(((undefined4 *)(fr0_ - 0x34)),ar5,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar6 + 0x128))))(ar6,((undefined4 *)(fr0_ - 0x34)),ar6_00,ar7));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined4 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c032ab0(ar4,uVar1,ar6_00,ar7));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x20)) = uVar1;
  if (cVar3 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr0;
    (*(undefined4 *)(fr0_ - 0x1c)) = uVar1;
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(undefined4 *)(fr0_ - 0x24)),ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  return 0;
}

__asm__(".globl _FUN_8c031ce8\n.set _FUN_8c031ce8, _FUN_8c031ce8_def\n");
//@unit 8c031ddc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c031ddc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031ddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ((undefined4 *)(unsigned)0x8c031de4);
}

__asm__(".globl _FUN_8c031ddc\n.set _FUN_8c031ddc, _FUN_8c031ddc_def\n");
//@unit 8c031de8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c031de8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(unsigned)(0x138 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034148(ar4 + 0xb0,ar5,ar6,ar7));
    if (iVar1 != 0) {
      if (iVar1 != 1) {
        if (iVar1 != 2) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      }
      *(int *)(unsigned)(0x138 + ar4) = *(int *)(unsigned)(0x138 + ar4) + 1;
    }
  }
  else if ((*(int *)(unsigned)(0x138 + ar4) == 1) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                             (ar4 + 0xb0,ar5,ar6,ar7)), iVar1 == 1)) {
    *(undefined4 *)(unsigned)(0x138 + ar4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c031de8\n.set _FUN_8c031de8, _FUN_8c031de8_def\n");
//@unit 8c031e84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c031e84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031e84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float in_fr5 = 0;
  float in_fr4 = 0;
  
  *(float *)(unsigned)(ar4 + 0x28) = *(float *)(unsigned)(ar4 + 0x28) - in_fr4;
  pfVar1 = (float *)(unsigned)(ar4 + 0x28);
  if (*pfVar1 <= in_fr5) {
    *(float *)(unsigned)(ar4 + 0x28) = in_fr5;
    pfVar1 = (float *)(unsigned)0x40;
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c031e84\n.set _FUN_8c031e84, _FUN_8c031e84_def\n");
//@unit 8c031eb0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c031eb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031eb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000004))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c0332b4(ar4,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 96)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x14)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7_00));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x3c)),uVar1,ar6,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x3c));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); FUN_8c023484(ar7,ar5_00,ar6,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x4c)),ar5_00,ar6,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 96)), Vec3_length(((undefined1 *)(fr0_ - 0x5c)),ar5_00,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),uVar1,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy(s0,((undefined1 *)(fr0_ - 0x24)),ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 96)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c031eb0\n.set _FUN_8c031eb0, _FUN_8c031eb0_def\n");
//@unit 8c031fc4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c031fc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c031fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  
  if (*(float *)(unsigned)(ar4 + 0x24) <= *(float *)(unsigned)(ar4 + 0x28)) {
    if (*(float *)(unsigned)(ar4 + 0x28) <= *(float *)(unsigned)(ar4 + 0x24)) {
      pfVar1 = (float *)(unsigned)0x44;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
    }
    else {
      *(float *)(unsigned)(ar4 + 0x28) =
           *(float *)(unsigned)(ar4 + 0x28) - *(float *)(unsigned)(ar4 + 0x24) / *(float *)(unsigned)(ar4 + 0x38);
      pfVar1 = (float *)(unsigned)(ar4 + 0x24);
      if (*(float *)(unsigned)(ar4 + 0x28) <= *pfVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
        pfVar1 = (float *)(unsigned)0x44;
        *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
      }
    }
  }
  else {
    *(float *)(unsigned)(ar4 + 0x28) =
         *(float *)(unsigned)(ar4 + 0x28) + *(float *)(unsigned)(ar4 + 0x24) / *(float *)(unsigned)(ar4 + 0x34);
    pfVar1 = (float *)(unsigned)(ar4 + 0x24);
    if (*pfVar1 <= *(float *)(unsigned)(ar4 + 0x28)) {
      *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x24);
      pfVar1 = (float *)(unsigned)0x44;
      *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c031fc4\n.set _FUN_8c031fc4, _FUN_8c031fc4_def\n");
//@unit 8c03207c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03207c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03207c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  float in_fr5 = 0;
  float in_fr4 = 0;
  undefined4 in_fr7 = 0;
  uint in_fr6 = 0;
  undefined8 in_xd0 = 0;
  int ar4_00;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  fVar1 = *(float *)(unsigned)(ar4 + 0xa8) + in_fr5;
  *(float *)(unsigned)(ar4 + 0xa8) = fVar1;
  fVar2 = (fVar1 * 65536.0) / 6.283184;
  fVar4 = 6.283184;
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c25747c((int)fVar2,ar5,ar6,ar7); });
  (*(undefined4 *)(fr0_ - 0xc)) = fVar4;
  fVar1 = in_fr4;
  if (cVar6 != '\0') {
    in_xd0 = CONCAT44(in_fr5,in_fr4);
    (*(undefined4 *)(fr0_ - 0xc)) = fVar2;
    fVar1 = fVar2;
  }
  if (cVar5 == '\0') {
    fVar1 = fVar1 * fVar4;
  }
  else {
    fVar1 = SUB84(CONCAT44D(fVar4,fVar1) * CONCAT44D(fVar4,fVar1),0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x6c) = fVar1;
    dVar3 = CONCAT44D(in_fr7,*(undefined4 *)(unsigned)(ar4 + 0xac));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x6c) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xac);
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),in_fr7);
  }
  if (cVar5 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    (*(undefined4 *)(fr0_ - 0x20)) = SUB84(dVar3 + dVar3,0);
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = ar4;
  if (cVar6 != '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x1c)) = (int)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)((*(undefined4 *)(fr0_ - 0x1c)) + 0xac) = (*(undefined4 *)(fr0_ - 0x20));
    dVar3 = CONCAT44D(0x47800000,(*(undefined4 *)(fr0_ - 0x20)));
  }
  else {
    *(ulonglong *)(unsigned)((*(undefined4 *)(fr0_ - 0x1c)) + 0xac) = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    dVar3 = 12831.689682006836;
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(0x40c90fd8,fVar1);
  }
  else {
    dVar3 = -3.74578248742155e-250;
  }
  if (cVar5 == '\0') {
    fVar2 = F32HI(dVar3);
    fVar1 = F32LO(dVar3) / fVar2;
    dVar3 = CONCAT44D(fVar2,fVar1);
    ar4_00 = (int)fVar1;
  }
  else {
    dVar3 = dVar3 / dVar3;
    ar4_00 = (int)dVar3;
  }
  ({ unsigned long ri0_ = (unsigned long)(in_fr4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); FUN_8c25747c(ar4_00,ar5,ar6,ar7); });
  fVar1 = F32HI(dVar3);
  if (cVar6 == '\0') {
    dVar3 = (double)(ulonglong)in_fr6;
    (*(undefined4 *)(fr0_ - 0x10)) = fVar1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x10)) = SUB84(dVar3,0);
    in_xd0 = CONCAT44(in_fr7,in_fr6);
    (*(undefined4 *)(fr0_ - 0xc)) = fVar1;
  }
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),SUB84(dVar3,0));
  }
  else {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x70) = fVar1;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x70) = in_xd0;
  }
  return 0x20;
}

__asm__(".globl _FUN_8c03207c\n.set _FUN_8c03207c, _FUN_8c03207c_def\n");
//@unit 8c032150
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_032150";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_032150\n.set _noop_032150, _noop_032150_def\n");
//@unit 8c032154
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_a4_032154";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xa4 + ar4);
}

__asm__(".globl _get_field_a4_032154\n.set _get_field_a4_032154, _get_field_a4_032154_def\n");
//@unit 8c032160
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032160";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 in_PR = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031b58(ar4 + 0xb0,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c032204(ar4 + 0xb0,ar5,ar6,ar7); });
  ar5_00 = 1;
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0321fc(ar4 + 0xb0,1,ar6,ar7); });
  *(undefined4 *)(unsigned)(ar4 + 0x138) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030eb8(ar4 + 0x1fc,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
  return 0x1e8;
}

__asm__(".globl _FUN_8c032160\n.set _FUN_8c032160, _FUN_8c032160_def\n");
//@unit 8c0321fc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0321fc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x24) = ar5;
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c0321fc\n.set _FUN_8c0321fc, _FUN_8c0321fc_def\n");
//@unit 8c032204
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032204_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032204";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x68) = in_fr4;
  return ain0;
}

__asm__(".globl _FUN_8c032204\n.set _FUN_8c032204, _FUN_8c032204_def\n");
//@unit 8c03220c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03220c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03220c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2520; for (int i_ = 0; i_ < 2520; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  code *ar6_00;
  undefined1 *ar6_01;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  
  cVar7 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1b4) == 1) {
    if ((*(undefined1 *)(unsigned)0x8c27defc) == '\0') {
      uVar4 = 0x10;
      ({ unsigned long t0_ = (unsigned long)(0x96); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); FUN_8c010120(0x8c27d590,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
      (vsp = ((unsigned long)(fr0_ - 2520)), global_list_push(0,((void *)0x8c032484),0x8c27def0,uVar4));
      (*(undefined1 *)(unsigned)0x8c27defc) = '\x01';
    }
    uVar4 = 0x10;
    ar6_00 = ((void *)0x8c022cb0);
    ({ unsigned long t0_ = (unsigned long)(0x96); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); FUN_8c010120(((undefined1 *)(fr0_ - 0x978)),((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
    if ((*(undefined1 *)(unsigned)0x8c27df04) == '\0') {
      (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = 0;
      (*(undefined1 *)(unsigned)0x8c27df04) = '\x01';
    }
    (*(undefined4 *)(fr0_ - 0x9b8)) = 0xffffffff;
    (*(unsigned *)(fr0_ - 0x988) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x994))));
    (*(unsigned *)(fr0_ - 0x984) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x9b8))));
    (*(undefined4 *)(fr0_ - 0x980)) = 0;
    (*(undefined4 *)(fr0_ - 0x97c)) = 1;
    (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_assign((*(undefined4 *)(unsigned)(unsigned)0x8c27df00) * 0x10 + -0x73d82a70,*ar5,ar6_00,uVar4));
    iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00);
    iVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) + 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) + 1;
    if (0x95 < iVar2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c27df00) = 0;
    }
    iVar2 = iVar1;
    for (iVar5 = 0; iVar5 < 0x96; iVar5 = iVar5 + 1) {
      if (0x95 < iVar2) {
        iVar2 = iVar2 + -0x96;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a70);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x994)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x994)) = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a6c);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x990)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        (*(undefined4 *)(fr0_ - 0x990)) = (undefined4)*puVar3;
      }
      puVar3 = (undefined8 *)(unsigned)(iVar2 * 0x10 + -0x73d82a68);
      if (cVar7 == '\0') {
        (*(undefined4 *)(fr0_ - 0x98c)) = *(undefined4 *)(unsigned)puVar3;
      }
      else {
        uVar6 = *puVar3;
        (*(undefined4 *)(fr0_ - 0x98c)) = (undefined4)uVar6;
        (*(unsigned *)(fr0_ - 0x988) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((ulonglong)uVar6 >> 0x20)));
      }
      if (iVar1 < 0) {
        iVar1 = 0x95;
      }
      (*(int *)(fr0_ - 0x9d4)) = iVar1;
      (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_assign(((undefined1 *)(fr0_ - 0x978)) + iVar5 * 0x10,iVar1 * 0x10 + -0x73d82a70,ar6_00,uVar4));
      ar6_00 = (code *)0x0;
      (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c234fd0(((undefined4 * *)(fr0_ - 0x988)),(*(undefined4 *)(fr0_ - 0x97c)),0,uVar4));
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + -1;
    }
    ar7 = 0x96;
    ar6 = 0x10;
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x9d4))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 2520)); vec_delete_array(((undefined1 *)(fr0_ - 0x978)),((void *)0x8c022cb0),0x10,0x96); });
  }
  if (*(int *)(unsigned)(ar4 + 0x1b8) == 1) {
    ar6 = 0;
    (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c234d68(ar4 + 0x17c,*(int *)(unsigned)(ar4 + 0x188) + -1,0,ar7));
  }
  iVar1 = *(int *)(unsigned)(ar4 + 0x1c0);
  if (iVar1 == 1) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9a4))); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); Vec3_scale(ar4 + 0x80,ar4 + 0x48,ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9b4))); *(unsigned *)((((unsigned long)(fr0_ - 2520)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 2520)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x9a4)),((undefined1 *)(unsigned)0x8c132bf8),ar6,ar7); });
    uVar4 = 0xffff0000;
    ar6_01 = ((undefined1 *)(fr0_ - 0x9b4));
    (vsp = ((unsigned long)(fr0_ - 2520)), FUN_8c032cb8(ar4,*ar5,ar6_01,0xffff0000));
    (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9b4)),0xffffffff,ar6_01,uVar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2520)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9a4)),0xffffffff,ar6_01,uVar4));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c03220c\n.set _FUN_8c03220c, _FUN_8c03220c_def\n");
//@unit 8c032484
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c032484";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27d590,((void *)0x8c022cb0),0x10,0x96); });
  return uVar1;
}

__asm__(".globl _FUN_8c032484\n.set _FUN_8c032484, _FUN_8c032484_def\n");
//@unit 8c0324ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c0324ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0324ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float *pfVar1;
  float in_fr4 = 0;
  
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4));
  if (pfVar1 == (float *)(unsigned)0x1) {
    *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0x94) - *(float *)(unsigned)(ar4 + 0xa0);
    pfVar1 = (float *)(unsigned)(ar4 + 0x94);
    if (*pfVar1 < *(float *)(unsigned)(ar4 + 0xa0) * in_fr4 * -1.0) {
      pfVar1 = (float *)(unsigned)((undefined4 *)(unsigned)0x8c032514);
      *(float *)(unsigned)(ar4 + 0x94) = *(float *)(unsigned)(ar4 + 0xa0) * in_fr4 * -1.0;
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c0324ac\n.set _FUN_8c0324ac, _FUN_8c0324ac_def\n");
//@unit 8c032518
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032518";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = ar6;
  uVar3 = ar7;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c03263c(ar4,ar4 + 0x14,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 76)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 76)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar5,uVar2,uVar3); });
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x48)),uVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,uVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar2,uVar3));
  uVar2 = ar6;
  uVar3 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c0329ac(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c032788(ar4,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined1 *)(fr0_ - 0x28)),uVar2,uVar3));
    (vsp = ((unsigned long)(fr0_ - 76)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,uVar2,uVar3));
  }
  return 0;
}

__asm__(".globl _FUN_8c032518\n.set _FUN_8c032518, _FUN_8c032518_def\n");
//@unit 8c03263c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03263c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03263c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined1 *ar5_01;
  ulonglong uVar1;
  double dVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  float fVar5;
  double dVar4;
  undefined8 in_xd12 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar3 = F32HI(in_dr4);
  dVar4 = CONCAT44D((int)in_dr4,in_fr7);
  uVar1 = (ulonglong)(uint)fVar3;
  ar5_00 = ar5;
  fVar5 = (*(float *)(fr0_ - 0x48));
  if (0.0 < fVar3) {
    uVar1 = CONCAT44(0xbf000000,fVar3);
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    fVar5 = (float)(uVar1 >> 0x20);
    if (cVar8 == '\0') {
      fVar5 = (*(float *)(fr0_ - 0x48));
    }
  }
  (*(float *)(fr0_ - 0x48)) = fVar5;
  dVar2 = (double)(uVar1 & 0xffffffff);
  fVar5 = F32HI(dVar4);
  if (cVar7 == '\0') {
    bVar6 = 0.0 < fVar5;
  }
  else {
    bVar6 = dVar2 < dVar4;
  }
  if (bVar6) {
    if (cVar8 == '\0') {
      dVar2 = CONCAT44D(0xbf000000,(int)uVar1);
    }
    else {
      dVar2 = -8.365700502157518e-251;
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(fVar5 * F32HI(dVar2),SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 * dVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
  }
  if (cVar8 == '\0') {
    dVar2 = CONCAT44D(in_fr6,SUB84(dVar2,0));
  }
  else {
    dVar2 = CONCAT44D(ar5,in_fr6);
  }
  if (cVar7 == '\0') {
    bVar6 = SUB84(dVar4,0) < F32HI(dVar2);
  }
  else {
    bVar6 = dVar4 < dVar2;
  }
  if (bVar6) {
    (*(float *)(fr0_ - 0x48)) = SUB84(dVar4,0);
    if (cVar8 != '\0') {
      (*(float *)(fr0_ - 0x48)) = (float)in_xd12;
      ((float *)(fr0_ - 0x44))[0] = F32HI(in_xd12);
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
    fVar5 = F32HI(dVar2);
    (*(float *)(fr0_ - 0x48)) = fVar5;
    if (cVar8 != '\0') {
      (*(float *)(fr0_ - 0x54)) = SUB84(dVar2,0);
      (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
      ((float *)(fr0_ - 0x44))[0] = fVar5;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
  ar5_01 = ((undefined1 *)(fr0_ - 0x24));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023484(ar5,ar5_01,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02374c(((undefined1 *)(fr0_ - 0x34)),ar5_01,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)((*(undefined4 *)(fr0_ + 0x00000000))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((float *)(fr0_ - 0x44)),&(*(float *)(fr0_ - 0x48)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((float *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c03263c\n.set _FUN_8c03263c, _FUN_8c03263c_def\n");
//@unit 8c032788
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c032788_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c032788";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  float in_fr1 = 0;
  double dVar1;
  double dVar2;
  undefined4 in_fr3 = 0;
  float in_fr4 = 0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_xd0 = 0;
  float in_PR = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = in_fr4 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
  fVar6 = (*ar6 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))) - in_fr4;
  fVar3 = in_fr4 + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2];
  fVar4 = (ar6[2] + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2]) - in_fr4;
  if (fVar5 < *ar5) {
    if (fVar6 <= *ar5) {
      in_fr1 = *ar5 - fVar6;
      if (fVar5 < fVar6 - in_fr1) {
        *ar5 = (fVar6 - (*ar5 - fVar6)) - 1.0;
      }
      else {
        *ar5 = fVar5 + 1.0;
      }
    }
  }
  else {
    in_fr1 = *ar5;
    if ((fVar5 - in_fr1) + fVar5 < fVar6) {
      in_fr1 = (fVar5 - *ar5) + fVar5 + 1.0;
      *ar5 = in_fr1;
    }
    else {
      *ar5 = fVar6 - 1.0;
    }
  }
  if (fVar3 < ar5[2]) {
    fVar5 = ar5[2];
    if (fVar4 <= fVar5) {
      in_fr1 = ar5[2] - fVar4;
      if (fVar3 < fVar4 - in_fr1) {
        fVar5 = 1.0;
        ar5[2] = (fVar4 - (ar5[2] - fVar4)) - 1.0;
      }
      else {
        fVar5 = 1.0;
        ar5[2] = fVar3 + 1.0;
      }
    }
  }
  else {
    in_fr1 = ar5[2];
    if ((fVar3 - in_fr1) + fVar3 < fVar4) {
      in_fr1 = (fVar3 - ar5[2]) + fVar3 + 1.0;
      fVar5 = 1.0;
      ar5[2] = in_fr1;
    }
    else {
      fVar5 = 1.0;
      ar5[2] = fVar4 - 1.0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6,ar7));
  (*(float *)(fr0_ - 0x24)) = in_fr4;
  if (cVar8 != '\0') {
    in_xd0 = CONCAT44(ar7,in_fr4);
    (*(float *)(fr0_ - 0x24)) = in_fr1;
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x24)) + fVar5;
  }
  else {
    (*(float *)(fr0_ - 0x24)) = SUB84(CONCAT44D(fVar5,(*(float *)(fr0_ - 0x24))) + CONCAT44D(fVar5,(*(float *)(fr0_ - 0x24))),0);
  }
  if (cVar8 == '\0') {
    dVar1 = CONCAT44D(in_fr4,ar6[1]);
    (*(float *)(fr0_ - 0x20)) = in_PR;
  }
  else {
    (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x20)) = F32HI(in_xd0);
    in_xd0 = *(undefined8 *)(unsigned)(ar6 + 1);
    dVar1 = CONCAT44D(ar7,in_fr4);
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x28)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x28)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar8 == '\0') {
    fVar3 = ar5[1];
    fVar4 = (*(float *)(fr0_ - 0x24));
  }
  else {
    (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x24)) = F32HI(in_xd0);
    in_xd0 = *(undefined8 *)(unsigned)(ar5 + 1);
    fVar3 = (*(float *)(fr0_ - 0x24));
    fVar4 = (*(float *)(fr0_ - 0x20));
  }
  if (cVar7 == '\0' && fVar4 < fVar3) {
    if (cVar8 == '\0') {
      fVar3 = ar5[1];
      fVar4 = (*(float *)(fr0_ - 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar5 + 1);
      fVar3 = (*(float *)(fr0_ - 0x28));
      fVar4 = (*(float *)(fr0_ - 0x24));
    }
    if (cVar7 != '\0' || fVar4 <= fVar3) {
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D(ar5[1],in_fr3);
        dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar3);
      }
      else {
        dVar1 = *(double *)(unsigned)(ar5 + 1);
        dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      fVar3 = F32HI(dVar2);
      if (cVar7 == '\0') {
        dVar1 = CONCAT44D(F32HI(dVar1) - fVar3,SUB84(dVar1,0));
      }
      else {
        dVar1 = dVar1 - dVar2;
      }
      if (cVar8 == '\0') {
        dVar2 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x28)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar2) - F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar2 - dVar1,0);
      }
      fVar4 = (*(float *)(fr0_ - 0x24));
      fVar5 = (*(float *)(fr0_ - 0x20));
      if (cVar8 == '\0') {
        fVar4 = fVar3;
        fVar5 = (*(float *)(fr0_ - 0x24));
      }
      if (cVar7 == '\0' && fVar5 < fVar4) {
        if (cVar8 == '\0') {
          dVar1 = CONCAT44D(ar5[1],SUB84(dVar1,0));
          dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar4);
        }
        else {
          dVar1 = *(double *)(unsigned)(ar5 + 1);
          dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        }
        fVar3 = F32HI(dVar2);
        if (cVar7 == '\0') {
          dVar1 = CONCAT44D(F32HI(dVar1) - fVar3,SUB84(dVar1,0));
        }
        else {
          dVar1 = dVar1 - dVar2;
        }
        if (cVar8 == '\0') {
          dVar2 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x28)));
        }
        else {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar2) - F32HI(dVar1);
        }
        else {
          fVar3 = SUB84(dVar2 - dVar1,0);
        }
        if (cVar7 == '\0') {
          fVar3 = fVar3 - 1.0;
        }
        else {
          fVar3 = SUB84(CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
        }
      }
      else {
        if (cVar8 != '\0') {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
          (*(float *)(fr0_ - 0x24)) = fVar4;
        }
        if (cVar7 == '\0') {
          (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x24)) + 1.0;
        }
        else {
          (*(float *)(fr0_ - 0x24)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x24))) +
                            CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x24))),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = (*(float *)(fr0_ - 0x24));
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
        }
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar1 = CONCAT44D(ar5[1],(*(float *)(fr0_ - 0x24)));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      dVar1 = *(double *)(unsigned)(ar5 + 1);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar1) - F32HI(dVar1);
    }
    else {
      fVar3 = SUB84(dVar1 - dVar1,0);
    }
    if (cVar8 == '\0') {
      dVar1 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar3);
    }
    else {
      dVar1 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar1) + F32HI(dVar1);
    }
    else {
      fVar3 = SUB84(dVar1 + dVar1,0);
    }
    fVar4 = (*(float *)(fr0_ - 0x28));
    fVar5 = (*(float *)(fr0_ - 0x24));
    if (cVar8 == '\0') {
      fVar4 = fVar3;
      fVar5 = (*(float *)(fr0_ - 0x28));
    }
    if (cVar7 == '\0' && fVar4 < fVar5) {
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D(ar5[1],(*(float *)(fr0_ - 0x24)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        dVar1 = *(double *)(unsigned)(ar5 + 1);
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar1) - F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar1 - dVar1,0);
      }
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar3);
      }
      else {
        dVar1 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar1) + F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar1 + dVar1,0);
      }
      if (cVar7 == '\0') {
        fVar3 = fVar3 + 1.0;
      }
      else {
        fVar3 = SUB84(CONCAT44D(0x3f800000,fVar3) + CONCAT44D(0x3f800000,fVar3),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
      }
    }
    else {
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        (*(float *)(fr0_ - 0x28)) = fVar4;
      }
      if (cVar7 == '\0') {
        (*(float *)(fr0_ - 0x28)) = (*(float *)(fr0_ - 0x28)) - 1.0;
      }
      else {
        (*(float *)(fr0_ - 0x28)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x28))) -
                          CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x28))),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = (*(float *)(fr0_ - 0x28));
      }
      else {
        *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
      }
    }
  }
  return ar5;
}

__asm__(".globl _FUN_8c032788\n.set _FUN_8c032788, _FUN_8c032788_def\n");
//@unit 8c0329ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0329ac_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0329ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 uVar3;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  if ((((in_fr4 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) < *ar5) && (*ar5 < (*ar6 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))) - in_fr4)) &&
      (in_fr4 + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2] < ar5[2])) &&
     (fVar1 = (ar6[2] + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2]) - in_fr4, dVar2 = CONCAT44D(ar5[2],fVar1),
     ar5[2] < fVar1)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D((int)(D2U(dVar2) >> 0x20),in_fr4);
    }
    if (cVar4 == '\0') {
      fVar1 = F32LO(dVar2) + F32HI(dVar2);
    }
    else {
      fVar1 = SUB84(dVar2 + dVar2,0);
    }
    if (cVar5 == '\0') {
      dVar2 = CONCAT44D(ar5[1],fVar1);
    }
    else {
      dVar2 = *(double *)(unsigned)(ar5 + 1);
    }
    fVar1 = F32HI(dVar2);
    if (cVar4 == '\0' && SUB84(dVar2,0) < fVar1) {
      if (cVar5 == '\0') {
        dVar2 = CONCAT44D(fVar1,ar6[1]);
      }
      if (cVar4 == '\0') {
        fVar1 = F32LO(dVar2) - in_fr4;
      }
      else {
        fVar1 = SUB84(dVar2 - CONCAT44D(in_fr14,in_fr4),0);
      }
      if (cVar5 == '\0') {
        uVar3 = CONCAT44(ar5[1],fVar1);
      }
      else {
        uVar3 = *(undefined8 *)(unsigned)(ar5 + 1);
      }
      if (cVar4 == '\0' && F32HI(uVar3) < (float)uVar3) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0329ac\n.set _FUN_8c0329ac, _FUN_8c0329ac_def\n");
//@unit 8c032a64
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int rand_range_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "rand_range";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  double dVar2;
  undefined4 in_fr3 = 0;
  double dVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar3 = CONCAT44D((float)(ar6 - ar5),in_fr3);
  }
  else {
    dVar3 = (double)(ar6 - ar5);
  }
  if (cVar5 == '\0') {
    dVar2 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar2 = -1.5729774447110699e+308;
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(F32HI(dVar3) *
                 (F32LO(dVar2) / F32HI(dVar2)));
  }
  else {
    iVar1 = (int)(dVar3 * (dVar2 / dVar2));
  }
  return iVar1 + ar5;
}

__asm__(".globl _rand_range\n.set _rand_range, _rand_range_def\n");
//@unit 8c032ab0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c032ab0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032ab0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), rand(ar4,ar5,ar6,ar7));
  return ((undefined4 *)(unsigned)0x8c032af4);
}

__asm__(".globl _FUN_8c032ab0\n.set _FUN_8c032ab0, _FUN_8c032ab0_def\n");
//@unit 8c032af8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c032af8_def(undefined4 ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c032af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int ar7_00;
  undefined4 in_fr1 = 0;
  double dVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  iVar3 = ar5;
  if (ar5 != ar6) {
    ar7_00 = ar7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand_range(ar4,ar5,ar6,ar7));
    iVar3 = ar6;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), rand_range(ar4,ar5,ar6,ar7_00));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(iVar1 + iVar2,2,iVar3,ar7_00));
    if (cVar9 == '\0') {
      dVar6 = CONCAT44D((float)(ar7 + -0x32),(float)iVar3);
    }
    else {
      dVar6 = (double)(ar7 + -0x32);
    }
    if (cVar10 == '\0') {
      dVar4 = CONCAT44D(0x3c23d70a,in_fr1);
    }
    else {
      dVar4 = -1.5729774083467465e+308;
    }
    if (cVar9 == '\0') {
      fVar7 = F32HI(dVar6) * F32HI(dVar4) *
              (float)(ar6 - ar5);
      fVar5 = F32LO(dVar6) + fVar7;
      dVar6 = CONCAT44D(fVar7,fVar5);
      bVar8 = (float)ar6 < fVar5;
    }
    else {
      dVar6 = dVar6 * dVar4 * (double)(ar6 - ar5);
      dVar6 = dVar6 + dVar6;
      fVar5 = F32LO(dVar6);
      bVar8 = (double)ar6 < dVar6;
    }
    if (bVar8) {
      if (cVar9 == '\0') {
        iVar3 = (int)((float)(ar6 << 1) - fVar5);
      }
      else {
        iVar3 = (int)((double)(ar6 << 1) - dVar6);
      }
    }
    else {
      if (cVar9 == '\0') {
        bVar8 = fVar5 < (float)ar5;
      }
      else {
        bVar8 = dVar6 < (double)ar5;
      }
      if (bVar8) {
        if (cVar9 == '\0') {
          iVar3 = (int)((float)(ar5 << 1) - fVar5);
        }
        else {
          iVar3 = (int)((double)(ar5 << 1) - dVar6);
        }
      }
      else if (cVar9 == '\0') {
        iVar3 = (int)fVar5;
      }
      else {
        iVar3 = (int)dVar6;
      }
    }
  }
  if (iVar3 < ar5) {
    iVar3 = ar5;
  }
  if (ar6 < iVar3) {
    iVar3 = ar6;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c032af8\n.set _FUN_8c032af8, _FUN_8c032af8_def\n");
//@unit 8c032be0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c032be0_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int ar5_00;
  float in_fr1 = 0;
  float fVar3;
  float fVar4;
  double dVar2;
  float fVar5;
  undefined8 in_dr4 = 0;
  float fVar6;
  double dVar7;
  undefined4 in_fr15 = 0;
  double dVar8;
  undefined8 in_xd0 = 0;
  bool bVar9;
  undefined4 in_PR = 0;
  char cVar10;
  char cVar11;
  
  cVar11 = '\0';
  cVar10 = '\0';
  fVar6 = F32HI(in_dr4);
  dVar8 = CONCAT44D(fVar6,in_fr15);
  fVar5 = (float)in_dr4;
  fVar3 = fVar5 - fVar6;
  puVar1 = (undefined4 *)(unsigned)0xc;
  if (fVar6 != fVar5) {
    ar5_00 = ar5;
    fVar4 = fVar3;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c032ab0(ar4,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x28)) = fVar4;
    (*(float *)(fr0_ - 0x20)) = in_fr1;
    fVar6 = fVar4;
    if (cVar11 == '\0') {
      (*(float *)(fr0_ - 0x28)) = fVar3;
      (*(float *)(fr0_ - 0x20)) = fVar4;
      fVar6 = (*(float *)(fr0_ - 0x1c));
    }
    (*(float *)(fr0_ - 0x1c)) = fVar6;
    (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c032ab0(ar4,ar5_00,ar6,ar7));
    if (cVar11 == '\0') {
      dVar7 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar5);
      (*(float *)(fr0_ - 0x24)) = fVar4;
    }
    else {
      dVar7 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar4);
      (*(float *)(fr0_ - 0x24)) = in_fr1;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + fVar4,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + CONCAT44D(fVar4,in_fr1);
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0x40000000,in_fr1);
    }
    else {
      dVar2 = 5.377642816887133e-19;
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) / F32HI(dVar2)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar2;
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D(0x3c23d70a,(float)(ar5 + -0x32));
    }
    else {
      dVar2 = 2.9939311649880902e-78;
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar3);
    }
    else {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
    }
    if (cVar10 == '\0') {
      fVar3 = F32LO(dVar2) * F32HI(dVar2);
    }
    else {
      fVar3 = SUB84(dVar2 * dVar2,0);
    }
    (*(float *)(fr0_ - 0x1c)) = fVar3;
    (*(undefined4 *)(fr0_ - 0x18)) = in_PR;
    if (cVar11 != '\0') {
      (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
      (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    puVar1 = (undefined4 *)(unsigned)0x18;
    if (cVar11 == '\0') {
      dVar2 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar3);
    }
    else {
      dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
    }
    if (cVar10 == '\0') {
      dVar7 = CONCAT44D(F32HI(dVar7) + F32HI(dVar2)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar2;
    }
    fVar3 = F32HI(dVar7);
    if (cVar10 != '\0' || fVar3 <= SUB84(dVar7,0)) {
      if (cVar10 == '\0') {
        bVar9 = fVar3 < F32HI(dVar8);
      }
      else {
        bVar9 = dVar7 < dVar8;
      }
      if (bVar9) {
        puVar1 = ((undefined4 *)(unsigned)0x8c032cb0);
      }
    }
    else {
      puVar1 = ((undefined4 *)(unsigned)0x8c032cb0);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c032be0\n.set _FUN_8c032be0, _FUN_8c032be0_def\n");
//@unit 8c032cb8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032cb8_def(undefined4 ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c032cb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(&(*(float *)(fr0_ - 0x34))));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(&(*(undefined4 *)(fr0_ - 0x3c))));
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  (*(undefined4 *)(fr0_ - 0x10)) = 2;
  (*(float *)(fr0_ - 0x34)) = *ar5;
  (*(float *)(fr0_ - 0x30)) = ar5[1];
  (*(float *)(fr0_ - 0x2c)) = ar5[2];
  (*(float *)(fr0_ - 0x28)) = (*(float *)(fr0_ - 0x34)) + *ar6;
  (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x30)) + ar6[1];
  (*(float *)(fr0_ - 0x20)) = (*(float *)(fr0_ - 0x2c)) + ar6[2];
  (*(undefined4 *)(fr0_ - 0x3c)) = ar7;
  (*(undefined4 *)(fr0_ - 0x38)) = ar7;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c234d68(((float * *)(fr0_ - 0x1c)),1,0,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c032cb8\n.set _FUN_8c032cb8, _FUN_8c032cb8_def\n");
//@unit 8c032d48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c032d48_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c032d48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 184; for (int i_ = 0; i_ < 184; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int ar6_00;
  int ar7_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0 = 0;
  double dVar6;
  float fVar8;
  ulonglong uVar7;
  undefined4 in_fr3 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar3 = 1;
  iVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_ctor_zero(((undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_zero(&(*(float *)(fr0_ - 0x30)),iVar2,ar6_00,ar7_00));
  iVar1 = *(int *)(unsigned)(ar4 + 0x1e8);
  if ((iVar1 < 7) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(ar7,((undefined1 *)(unsigned)0x8c132bfc),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(((undefined4 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x40)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_scale(((undefined4 *)(fr0_ - 0x24)),((undefined1 *)(unsigned)0x8c132c00),ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(ar6,((undefined1 *)(fr0_ - 0x50)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x60)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031bb4(ar4,ar5,ar4 + 0x54,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
    case 1:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x6c)),iVar2,ar6_00,ar7_00));
      ar7_00 = ar4 + 0x14;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x6c))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c0332b4(ar4,ar5,ar6,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_copy_8c023d8c(ar4 + 0x1ec,((undefined1 *)(fr0_ - 0x78)),ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      ar6_00 = ar6;
    case 3:
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1ec));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1ec);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x30)) = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        (*(float *)(fr0_ - 0x30)) = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1f0));
      }
      else {
        (*(float *)(fr0_ - 0x30)) = (float)in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1f0);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        (*(float *)(fr0_ - 0x2c)) = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        (*(float *)(fr0_ - 0x2c)) = SUB84(dVar6 / dVar6,0);
      }
      if (cVar12 == '\0') {
        dVar6 = CONCAT44D(0x41200000,*(undefined4 *)(unsigned)(ar4 + 500));
      }
      else {
        (*(float *)(fr0_ - 0x2c)) = (float)in_xd0;
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 500);
        dVar6 = 4.33426965481473e-312;
      }
      if (cVar11 == '\0') {
        fVar5 = F32LO(dVar6) / F32HI(dVar6);
      }
      else {
        fVar5 = SUB84(dVar6 / dVar6,0);
      }
      (*(float *)(fr0_ - 0x28)) = fVar5;
      if (cVar12 != '\0') {
        (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
        ((undefined4 *)(fr0_ - 0x24))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      (vsp = ((unsigned long)(fr0_ - 184)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x84)),&(*(float *)(fr0_ - 0x30)),ar6_00,ar7_00));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x94))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x84)),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        fVar5 = *(float *)(unsigned)(ar4 + 0x1f8);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x1f8);
      }
      if (cVar11 == '\0') {
        fVar5 = fVar5 + 1.0;
      }
      else {
        fVar5 = SUB84(CONCAT44D(0x3f800000,fVar5) + CONCAT44D(0x3f800000,fVar5),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x1f8) = fVar5;
        uVar7 = CONCAT44(0x41200000,*(undefined4 *)(unsigned)(ar4 + 0x1f8));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x1f8) = in_xd0;
        uVar7 = 0xcc41200000;
      }
      if (cVar11 != '\0' || (float)(uVar7 >> 0x20) <= (float)uVar7) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x1f8) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x1f8) = uVar7 & 0xffffffff;
        }
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
      }
      break;
    case 4:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); Vec3_add(ar5,ar6,ar6_00,ar7_00); });
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xb4))); *(unsigned *)((((unsigned long)(fr0_ - 184)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 184)) - 8); FUN_8c023c30(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(unsigned)0x8c132c04),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
      ar6_00 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031bb4(ar4,ar5,ar6_00,ar7_00));
      *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
    case 5:
      iVar2 = ar4 + 0x54;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,iVar2,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = -8.341321687789945e-251;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar5 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar5);
        bVar10 = fVar5 < F32HI(in_dr0);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        fVar5 = F32HI(dVar6);
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(CONCAT44D(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)(ulonglong)(uint)(F32LO(dVar6) * F32HI(dVar6));
        }
        else {
          dVar6 = dVar6 * dVar6;
        }
        iVar2 = ar6;
        if (cVar12 == '\0') {
          *(int *)(unsigned)(ar4 + 0x28) = SUB84(dVar6,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      uVar4 = SUB84(dVar6,0);
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7_00));
      ar6_00 = ar5;
      if (iVar2 == 0) {
        *(int *)(unsigned)(ar4 + 0x1e8) = *(int *)(unsigned)(ar4 + 0x1e8) + 1;
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x48) = 0x3f800000;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x48) = CONCAT44(0x3f800000,uVar4);
        }
      }
      break;
    case 6:
      iVar2 = ar6;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),in_fr3);
        dVar6 = CONCAT44D(0x42480000,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar6 = 5.2386907559463314e-11;
      }
      if (cVar11 == '\0') {
        fVar8 = F32HI(dVar6);
        fVar5 = F32LO(dVar6) * fVar8;
        dVar6 = CONCAT44D(fVar8,fVar5);
        bVar10 = fVar5 < F32HI(in_dr0);
      }
      else {
        dVar6 = dVar6 * dVar6;
        bVar10 = dVar6 < in_dr0;
      }
      if (!bVar10) {
        iVar2 = ar6;
        (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
        if (cVar12 == '\0') {
          dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),SUB84(in_dr0,0));
        }
        else {
          dVar9 = *(double *)(unsigned)(ar4 + 0x28);
        }
        fVar5 = F32HI(dVar6);
        if (cVar11 == '\0') {
          dVar9 = CONCAT44D(F32HI(dVar9) / fVar5,SUB84(dVar9,0));
        }
        else {
          dVar9 = dVar9 / dVar6;
        }
        if (cVar11 == '\0') {
          fVar5 = 1.0 - F32HI(dVar9);
        }
        else {
          fVar5 = SUB84(CONCAT44D(fVar5,0x3f800000) - dVar9,0);
        }
        if (cVar12 == '\0') {
          dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x28),fVar5);
        }
        else {
          dVar6 = *(double *)(unsigned)(ar4 + 0x28);
        }
        if (cVar11 == '\0') {
          fVar5 = F32LO(dVar6) * F32HI(dVar6);
        }
        else {
          fVar5 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar12 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar5;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      if (cVar12 == '\0') {
        uVar7 = CONCAT44(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        uVar7 = 0x8c031c643dcccccd;
      }
      if (cVar11 == '\0' && (float)uVar7 < (float)(uVar7 >> 0x20)) {
        if (cVar12 == '\0') {
          uVar7 = CONCAT44(0x3dcccccd,(float)uVar7);
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0x3dcccccd;
        }
        else {
          uVar7 = 0x8c031c643dcccccd;
          *(undefined8 *)(unsigned)(ar4 + 0x28) = 0x8c031c643dcccccd;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031c64(ar4,iVar2,ar6_00,ar7_00));
      ar6_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c031764(ar4,ar6,ar5,ar7_00));
      (vsp = ((unsigned long)(fr0_ - 184)), FUN_8c022fc0(ar5,ar6,ar6_00,ar7_00));
      if (cVar12 == '\0') {
        uVar7 = uVar7 >> 0x20;
      }
      if (cVar11 != '\0' || (float)uVar7 <= 1.0) {
        if (cVar12 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7 & 0xffffffff;
        }
        uVar3 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x1e8) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 184)), object_dtor_delete(&(*(float *)(fr0_ - 0x30)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 184)), Vec3_dtor(((undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl _FUN_8c032d48\n.set _FUN_8c032d48, _FUN_8c032d48_def\n");
//@unit 8c0332b4
#include "../decls.h"
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
FUN_8c0332b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0332b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  float * s4 = (float *)(unsigned long)*(unsigned *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 108; for (int i_ = 0; i_ < 108; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0 = 0;
  float fVar5;
  int iVar6;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_dr2 = 0;
  undefined8 in_xd0 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_set_zero(&(*(float *)(fr0_ - 0x18)),ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); Vec3_sub(ar6,ar5,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 108)), Vec3_length(((undefined1 *)(fr0_ - 0x38)),ar5,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7_00));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 108)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 108)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x28)),uVar1,ar6_00,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x58)),ar6_00,ar7_00));
  (*(float *)(fr0_ - 0x14)) = SUB84(in_dr0,0);
  fVar5 = F32HI(in_dr0);
  if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x14)) = fVar5;
    fVar5 = (*(float *)(fr0_ - 0x10));
  }
  (*(float *)(fr0_ - 0x10)) = fVar5;
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6_00,ar7_00));
  ar5_00 = ((undefined1 *)(fr0_ - 0x28));
  (*(int *)(fr0_ - 0x64)) = (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00));
  if ((*(int *)(fr0_ - 0x64)) == 4) {
    if (cVar9 == '\0') {
      in_dr0 = CONCAT44D(0xbf800000,(*(float *)(fr0_ - 0x14)));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      fVar5 = F32HI(in_dr0);
      in_dr0 = CONCAT44D(fVar5,F32LO(in_dr0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar9 == '\0') {
      (*(float *)(fr0_ - 0x14)) = SUB84(in_dr0,0);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
      (*(float *)(fr0_ - 0x10)) = F32HI(in_xd0);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x28)),ar5_00,ar6_00,ar7_00));
  iVar6 = (int)((ulonglong)in_dr0 >> 0x20);
  (*(int *)(fr0_ - 0x68)) = iVar6;
  if (cVar9 != '\0') {
    (*(int *)(fr0_ - 0x68)) = SUB84(in_dr0,0);
    (*(int *)(fr0_ - 0x64)) = iVar6;
  }
  (vsp = ((unsigned long)(fr0_ - 108)), FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00));
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D(uVar1,(*(int *)(fr0_ - 0x68)));
  }
  else {
    in_xd0 = CONCAT44((*(int *)(fr0_ - 0x64)),uVar1);
  }
  if (cVar8 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(in_dr0) - F32HI(in_dr0);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(in_dr0 - in_dr0,0);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(*s4,(*(float *)(fr0_ - 0x18)));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
    uVar2 = *(undefined8 *)(unsigned)s4;
  }
  if (cVar8 != '\0' || (float)uVar2 <= F32HI(uVar2)) {
    if (cVar9 == '\0') {
      in_dr2 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(in_dr2,0));
      dVar4 = CONCAT44D(0xbf800000,*s4);
    }
    else {
      in_dr2 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      in_xd0 = *(undefined8 *)(unsigned)s4;
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(in_dr2) <
              F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      bVar7 = in_dr2 < dVar4 * dVar4;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0xbf800000,*s4);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)s4;
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
      }
    }
  }
  else if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x18)) = *s4;
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)*(undefined8 *)(unsigned)s4;
    (*(float *)(fr0_ - 0x14)) = (float)((ulonglong)*(undefined8 *)(unsigned)s4 >> 0x20);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(s4[1],(*(float *)(fr0_ - 0x14)));
  }
  else {
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
    uVar2 = *(undefined8 *)(unsigned)(s4 + 1);
  }
  if (cVar8 != '\0' || (float)uVar2 <= F32HI(uVar2)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x14)),SUB84(in_dr2,0));
      dVar3 = CONCAT44D(0xbf800000,s4[1]);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x10)),(*(float *)(fr0_ - 0x14)));
      in_xd0 = *(undefined8 *)(unsigned)(s4 + 1);
      dVar3 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = F32HI(dVar4) < F32LO(dVar3) * F32HI(dVar3)
      ;
    }
    else {
      bVar7 = dVar4 < dVar3 * dVar3;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0xbf800000,s4[1]);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(s4 + 1);
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
        (*(float *)(fr0_ - 0x10)) = F32HI(in_xd0);
      }
    }
  }
  else if (cVar9 == '\0') {
    (*(float *)(fr0_ - 0x14)) = s4[1];
  }
  else {
    uVar2 = *(undefined8 *)(unsigned)(s4 + 1);
    (*(float *)(fr0_ - 0x14)) = (float)uVar2;
    (*(float *)(fr0_ - 0x10)) = F32HI(uVar2);
  }
  (vsp = ((unsigned long)(fr0_ - 108)), vec3_copy_8c02b5fc(s0,&(*(float *)(fr0_ - 0x18)),ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 108)), object_dtor_delete(&(*(float *)(fr0_ - 0x18)),0xffffffff,ar6_00,ar7_00));
  return 0;
}

__asm__(".globl _FUN_8c0332b4\n.set _FUN_8c0332b4, _FUN_8c0332b4_def\n");
//@unit 8c033474
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c033474_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c033474";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a6;
  undefined1 *a7;
  
  uVar1 = 0;
  if (*(char *)(unsigned)(0x210 + ar4) != '\0') {
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
    a7 = ((undefined1 *)(fr0_ - 0xc));
    a6 = ((undefined1 *)(fr0_ - 0x10));
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x13c + *ar7))))(ar7,((undefined1 *)(fr0_ - 0x14)),a6,a7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 56)) - 8); Vec3_sub(ar6,((undefined1 *)(fr0_ - 0x14)),a6,a7); });
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x34)),a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02174c(0x8c2b59d0,ar5,a6,a7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,a6,a7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x14)),0xffffffff,a6,a7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c033474\n.set _FUN_8c033474, _FUN_8c033474_def\n");
//@unit 8c033530
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c033530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c033530";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 ar4_00;
  undefined4 ar4_01;
  int iVar4;
  undefined1 *puVar5;
  float fVar6;
  code *pcVar8;
  double dVar7;
  undefined8 in_dr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  (*(undefined4 *)(fr0_ - 0x4)) = (undefined4)in_dr14;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr4 >> 0x20));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  puVar5 = ((undefined1 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_xyz(puVar5,ar5,ar6,ar7));
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),0x43c6c000);
  }
  else {
    (*(undefined8 *)(fr0_ - 0x5c)) = 0x8c01420043c6c000;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  ar4_01 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7));
  uVar3 = 100;
  (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(ar4_01,100,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c022d04(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_normalize(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),ar6,ar7));
  uVar3 = 0xffffffff;
  puVar5 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(puVar5,0xffffffff,ar6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), rand(puVar5,uVar3,ar6,ar7));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_01031c(uVar3,100,ar6,ar7));
  if (cVar12 == '\0') {
    pcVar8 = (code *)0x42c80000;
    fVar6 = (float)(*(undefined8 *)(fr0_ - 0x5c));
  }
  else {
    fVar6 = 100.0;
    pcVar8 = ((void *)0x8c023b8c);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x5c));
  }
  if (cVar11 == '\0') {
    fVar6 = (fVar6 / (float)(uint)pcVar8) * (float)iVar4;
  }
  else {
    fVar6 = SUB84((double)iVar4 * (double)iVar4,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined8 *)(fr0_ - 0x5c)) = CONCAT44((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x5c))+4)),fVar6);
    uVar1 = (*(undefined8 *)(fr0_ - 0x5c));
  }
  (*(undefined8 *)(fr0_ - 0x5c)) = uVar1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x18)),&(*(undefined8 *)(fr0_ - 0x5c)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)((int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4); *(unsigned *)((((unsigned long)(fr0_ - 96)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 96)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_assign(((undefined1 *)(fr0_ - 0x18)),(int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor((int)&(*(undefined8 *)(fr0_ - 0x5c)) + 4,0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  dVar7 = (*(double *)(fr0_ - 0x14));
  if (cVar12 == '\0') {
    dVar7 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x14))+0)),fVar6);
  }
  if (cVar11 == '\0') {
    bVar10 = SUB84(dVar9,0) < F32HI(dVar7);
  }
  else {
    bVar10 = dVar9 < dVar7;
  }
  dVar2 = (*(double *)(fr0_ - 0x14));
  if (bVar10) {
    if (cVar12 == '\0') {
      dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar7,0));
    }
    else {
      dVar7 = *(double *)(unsigned)(ar4 + 0x48);
    }
    if (cVar11 == '\0') {
      fVar6 = F32LO(dVar9) - F32HI(dVar7);
    }
    else {
      fVar6 = SUB84(dVar9 - dVar7,0);
    }
    dVar2 = in_xd14;
    if (cVar12 == '\0') {
      (*(double *)(fr0_ - 0x14)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x14))+4)),fVar6);
      dVar2 = (*(double *)(fr0_ - 0x14));
    }
  }
  (*(double *)(fr0_ - 0x14)) = dVar2;
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 96)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c033530\n.set _FUN_8c033530, _FUN_8c033530_def\n");
//@unit 8c0336e8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0336e8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0336e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c031ab4(ar4,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),*(undefined4 *)(unsigned)ar5);
  }
  else {
    in_xd0 = *ar5;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x158) = fVar2;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),*(undefined4 *)(unsigned)((int)ar5 + 4));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x158) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)((int)ar5 + 4);
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x15c) = fVar2;
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),*(undefined4 *)(unsigned)(ar5 + 1));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x15c) = in_xd0;
    in_xd0 = ar5[1];
    dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
  }
  if (cVar4 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar5 == '\0') {
    *(float *)(unsigned)(ar4 + 0x160) = fVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x160) = in_xd0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0336e8\n.set _FUN_8c0336e8, _FUN_8c0336e8_def\n");
//@unit 8c03376c
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimBody_AdvanceFrame_wrapper_wrap_03376c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper_wrap_03376c\n.set _CAnimBody_AdvanceFrame_wrapper_wrap_03376c, _CAnimBody_AdvanceFrame_wrapper_wrap_03376c_def\n");
//@unit 8c033790
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimBody_AdvanceFrame_wrapper_wrap_033790";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper_wrap_033790\n.set _CAnimBody_AdvanceFrame_wrapper_wrap_033790, _CAnimBody_AdvanceFrame_wrapper_wrap_033790_def\n");
//@unit 8c0337b4
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0337b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0337b4\n.set _ret_const_0_0337b4, _ret_const_0_0337b4_def\n");
//@unit 8c0337bc
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_218_0337bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x218 + ar4);
}

__asm__(".globl _get_field_218_0337bc\n.set _get_field_218_0337bc, _get_field_218_0337bc_def\n");
//@unit 8c0337c8
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_0337c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_0337c8\n.set _ret_const_0_0337c8, _ret_const_0_0337c8_def\n");
//@unit 8c0337d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0337d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0337d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ba0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d530;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d530,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125bb0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d53c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d53c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125bc0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d548;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d548,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125bd0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d554;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d554,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125be0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d560;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d560,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10277c((&(*(undefined1 *)(unsigned)0x8c125bf0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c102790);
  uVar2 = 0x8c27d56c;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
            (uVar1,((void *)(unsigned)0x8c102790),0x8c27d56c,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c125bfc,puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27d578;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27d578,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10277c((&(*(undefined1 *)(unsigned)0x8c125c0c)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101a0))))
                    (uVar2,((void *)(unsigned)0x8c102790),0x8c27d584,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0337d0\n.set _FUN_8c0337d0, _FUN_8c0337d0_def\n");
//@unit 8c033954
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c033954_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c033954";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c129cf8));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0339b0(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl _FUN_8c033954\n.set _FUN_8c033954, _FUN_8c033954_def\n");
//@unit 8c033978
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 *
free_if_nonnull_wrap_033978_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "free_if_nonnull_wrap_033978";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != (undefined4 *)(unsigned)0x0) && (*ar4 = ((undefined1 *)(unsigned)0x8c129cf8), 0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_033978\n.set _free_if_nonnull_wrap_033978, _free_if_nonnull_wrap_033978_def\n");
//@unit 8c0339b0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0339b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0339b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  *(undefined4 *)(unsigned)(ar4 + 0x14) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x18) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x20) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x30) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x24) = 1;
  *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  *(undefined4 *)(unsigned)(ar4 + 100) = 0x41f00000;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x3c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x48) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x44) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x50) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x4c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0x3f800000;
  *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 8) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xc) = 0;
  *(undefined2 *)(unsigned)(ar4 + 0xe) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0339b0\n.set _FUN_8c0339b0, _FUN_8c0339b0_def\n");
//@unit 8c033a8c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_SetAnimation_033a94_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetAnimation_033a94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar5_00;
  
  if (*(int *)(unsigned)(ar4 + 0x1c) == ar5) {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 6;
  }
  else if (ar6 == -1) {
    *(int *)(unsigned)(ar4 + 0x1c) = ar5;
    *(undefined4 *)(unsigned)(ar4 + 0x28) = ar7;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4,ar5,0xffffffff,ar7));
    *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 0;
  }
  else if ((*(int *)(unsigned)(ar4 + 0x2c) < 0) || (ar6 == 1)) {
    if (*(char *)(unsigned)(ar4 + 0x54) == '\x01') {
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      uVar1 = 3;
    }
    else if (*(int *)(unsigned)(ar4 + 0x10) + -1 < ar5) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c132cb8)),(&(*(undefined1 *)(unsigned)0x8c132cb8)) + 0x16,1,
                 2));
      uVar1 = 4;
    }
    else if (ar6 == 0) {
      if (*(int *)(unsigned)(ar4 + 0x70) == 0) {
        *(int *)(unsigned)(ar4 + 0x2c) = ar5;
        *(undefined4 *)(unsigned)(ar4 + 0x30) = ar7;
        uVar1 = 1;
      }
      else {
        *(int *)(unsigned)(ar4 + 0x1c) = ar5;
        *(undefined4 *)(unsigned)(ar4 + 0x28) = ar7;
        uVar1 = 0;
      }
    }
    else if (ar6 == 1) {
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetInterpolate_033f7e(ar4,ar5,1,ar7));
      *(int *)(unsigned)(ar4 + 0x1c) = ar5;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b58(ar4,ar5_00,ar6,ar7));
      uVar1 = 2;
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
    uVar1 = 5;
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_SetAnimation_033a94\n.set _s_CAnimBody_SetAnimation_033a94, _s_CAnimBody_SetAnimation_033a94_def\n");
//@unit 8c033b98
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_AdvanceFrame_033ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_AdvanceFrame_033ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132cfa),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  uVar2 = 0;
  if (cVar5 == '\0') {
    dVar4 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar4 = (double)*(int *)(unsigned)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),in_fr4);
    in_xd14 = in_xd0;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x20);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x20) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  if (*(int *)(unsigned)(ar4 + 0x28) == 0) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 == '\0' && F32HI(dVar4) < SUB84(dVar4,0)) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x30);
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      }
    }
    if (*(char *)(unsigned)(ar4 + 0x54) != '\0') {
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x60));
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x60);
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) * in_fr4;
      }
      else {
        fVar3 = SUB84(dVar4 * CONCAT44D(in_fr14,in_fr4),0);
      }
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x58),fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x58);
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        *(float *)(unsigned)(ar4 + 0x58) = fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd14;
      }
      uVar2 = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      if (cVar6 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0x58);
      }
      if (cVar5 != '\0' || 1.0 <= fVar3) {
        *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
        }
        uVar2 = 4;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      }
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x28) == 1) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= F32HI(dVar4)) {
      if (cVar6 == '\0') {
        dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x20);
      }
      fVar3 = F32LO(dVar4);
      if (cVar5 != '\0' || fVar3 <= 0.0) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x20);
        }
        if (fVar3 != 0.0) {
          if (cVar6 == '\0') {
            dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar3);
          }
          else {
            dVar4 = *(double *)(unsigned)(ar4 + 0x20);
          }
          if (cVar5 == '\0') {
            dVar4 = CONCAT44D(F32HI(dVar4) + in_fr4,SUB84(dVar4,0));
          }
          else {
            dVar4 = dVar4 + CONCAT44D(in_fr14,in_fr4);
          }
          if (cVar6 == '\0') {
            *(int *)(unsigned)(ar4 + 0x20) = (int)(D2U(dVar4) >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x20) = dVar4;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x24) = 1;
        uVar2 = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
        if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
          *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
          *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x30);
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
          uVar2 = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
        }
      }
    }
    else {
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x20);
      }
      if (cVar5 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - in_fr4,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - CONCAT44D(in_fr14,in_fr4);
      }
      if (cVar6 == '\0') {
        *(int *)(unsigned)(ar4 + 0x20) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x20) = dVar4;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0xffffffff;
      uVar2 = 5;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033ba0\n.set _s_CAnimBody_AdvanceFrame_033ba0, _s_CAnimBody_AdvanceFrame_033ba0_def\n");
//@unit 8c033d34
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c033d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c033d34";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  double in_dr0 = 0;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
  while( true ) {
    uVar3 = SUB84(in_dr0,0);
    if (cVar6 == '\0') {
      uVar3 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    iVar2 = iVar1 + -1;
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)iVar2,uVar3);
    }
    else {
      dVar4 = (double)iVar2;
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= F32HI(dVar4)) break;
    if (cVar6 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      in_dr0 = (double)(ulonglong)(uint)(F32LO(dVar4) - (float)iVar1);
    }
    else {
      in_dr0 = (double)iVar1 - (double)iVar1;
    }
    if (cVar6 == '\0') {
      *(int *)(unsigned)(ar4 + 0x20) = SUB84(in_dr0,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd0;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c033d34\n.set _FUN_8c033d34, _FUN_8c033d34_def\n");
//@unit 8c033d88
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_AdvanceFrame_033d90_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_AdvanceFrame_033d90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  double in_xd0 = 0;
  double dVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  dVar4 = CONCAT44D(in_fr4,in_fr6);
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = ((undefined1 *)(unsigned)0x8c132cfa);
    (vsp = ((unsigned long)(fr0_ - 28)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132cfa),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  uVar1 = 0;
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar3 = (double)*(int *)(unsigned)(ar4 + 0x24);
  }
  dVar5 = dVar4;
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),(int)(D2U(dVar4) >> 0x20));
    dVar5 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) * F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(unsigned)(ar4 + 0x20);
  }
  if (cVar7 == '\0') {
    fVar2 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar2 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x20) = fVar2;
  }
  else {
    *(double *)(unsigned)(ar4 + 0x20) = dVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c033d34(ar4,ar5,ar6,ar7));
  if (cVar8 == '\0') {
    dVar3 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar2);
  }
  else {
    dVar3 = *(double *)(unsigned)(ar4 + 0x20);
  }
  fVar2 = F32HI(dVar3);
  if (cVar7 == '\0') {
    bVar6 = fVar2 < SUB84(dVar4,0);
  }
  else {
    bVar6 = dVar3 < dVar4;
  }
  if (!bVar6) {
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(fVar2,*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar3) - F32LO(dVar4);
    }
    else {
      fVar2 = SUB84(dVar3 - dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D(in_fr5,fVar2);
    }
    else {
      dVar3 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),in_fr5);
    }
    if (cVar7 == '\0') {
      fVar2 = F32HI(dVar3);
      dVar3 = CONCAT44D(fVar2,F32LO(dVar3) + fVar2);
    }
    else {
      dVar3 = dVar3 + dVar3;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x20) = SUB84(dVar3,0);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x20) = dVar5;
    }
    uVar1 = 7;
  }
  if (*(char *)(unsigned)(ar4 + 0x54) != '\0') {
    if (cVar8 == '\0') {
      dVar3 = CONCAT44D((int)(D2U(dVar3) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x60));
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x60);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar4);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar4,0);
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x58),fVar2);
    }
    else {
      dVar4 = *(double *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 == '\0') {
      fVar2 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar2 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar2;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x58) = dVar5;
    }
    uVar1 = 3;
    if (cVar8 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar2) {
      *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar2;
      }
      uVar1 = 4;
    }
  }
  return uVar1;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033d90\n.set _s_CAnimBody_AdvanceFrame_033d90, _s_CAnimBody_AdvanceFrame_033d90_def\n");
//@unit 8c033e68
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_SetFrame_033e6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetFrame_033e6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 24)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132d31),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  uVar2 = 0;
  if (cVar8 == '\0') {
    uVar5 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x20) = in_fr4;
  }
  else {
    uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),in_fr4);
    *(undefined8 *)(unsigned)(ar4 + 0x20) = uVar5;
  }
  uVar4 = (undefined4)uVar5;
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 0x54) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D((float)(iVar1 + -1),uVar4);
    }
    else {
      dVar6 = (double)(iVar1 + -1);
    }
    if (cVar7 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar6 = *(double *)(unsigned)(ar4 + 0x5c);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 - dVar6,0);
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),fVar3);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
    }
    uVar2 = 3;
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x5c) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 4;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_SetFrame_033e6e\n.set _s_CAnimBody_SetFrame_033e6e, _s_CAnimBody_SetFrame_033e6e_def\n");
//@unit 8c033f74
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CAnimBody_SetInterpolate_033f7e_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetInterpolate_033f7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 in_fr1 = 0;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  float in_fr4 = 0;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5_00 = ((undefined1 *)(unsigned)0x8c132d47);
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132d47),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + *(int *)(unsigned)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x34) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x38) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c026d74(*(int *)(unsigned)(ar4 + 0x18) + *(int *)(unsigned)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x44) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c026d74(*(int *)(unsigned)(ar4 + 0x18) + (int)ar5 * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x48) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    *(undefined4 *)(unsigned)(ar4 + 0x4c) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x3c) = uVar1;
    dVar5 = CONCAT44D(0xbf800000,in_fr1);
  }
  else {
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    *(undefined8 *)(unsigned)(ar4 + 0x4c) = uVar4;
    *(undefined8 *)(unsigned)(ar4 + 0x3c) = uVar4;
    dVar5 = -8.32867096114109e-251;
  }
  if (in_fr4 == F32HI(dVar5)) {
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar5 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) + F32HI(dVar5));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= F32HI(dVar5)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x40) = in_fr4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd14;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= F32HI(dVar5)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
      }
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),*(undefined4 *)(unsigned)(ar4 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      dVar5 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x20) = fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd0;
    }
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar4 + 0x20);
    uVar6 = (ulonglong)*(uint *)(unsigned)(ar4 + 100);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x50) = *(undefined8 *)(unsigned)(ar4 + 0x40);
    uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x20);
    *(ulonglong *)(unsigned)(ar4 + 0x5c) = uVar6;
  }
  fVar3 = (float)uVar6;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(1.0 / fVar3,fVar3);
  }
  else {
    dVar5 = CONCAT44D(0x3f800000,fVar3) / CONCAT44D(0x3f800000,fVar3);
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)(ar4 + 0x60) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x60) = dVar5;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x58) = D2U(dVar5) & 0xffffffff;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x54) = 1;
  return 0x54;
}

__asm__(".globl _s_CAnimBody_SetInterpolate_033f7e\n.set _s_CAnimBody_SetInterpolate_033f7e, _s_CAnimBody_SetInterpolate_033f7e_def\n");
//@unit 8c034148
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034148";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x6c) == -1) {
    ar7 = 0;
    ar6 = 0;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0));
    *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar1;
  }
  iVar3 = *(int *)(unsigned)(ar4 + 0x6c);
  if ((iVar3 < 7) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar4 = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
      break;
    case 1:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7));
      if (iVar3 == 2) {
        uVar4 = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
      }
      break;
    case 3:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7));
      if (iVar3 == 4) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 5:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7));
      if (iVar3 == 2) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0));
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 6:
      if (*(int *)(unsigned)(ar4 + 0x2c) == -1) {
        uVar4 = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0xffffffff;
      }
      else {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7));
        if (iVar3 == 2) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0));
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = uVar2;
        }
      }
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c034148\n.set _FUN_8c034148, _FUN_8c034148_def\n");
//@unit 8c0342ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c0342ac_def(undefined4 ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0342ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(unsigned)*ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    piVar1 = piVar1 + 6;
  }
  iVar2 = *piVar1;
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0342ac\n.set _FUN_8c0342ac, _FUN_8c0342ac_def\n");
//@unit 8c0342d8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0342d8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0342d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint in_fr1 = 0;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  bool bVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_xyz(&(*(int *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(int *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(&(*(int *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar3 == '\0') {
      bVar1 = in_fr4 < 0.0;
    }
    else {
      bVar1 = CONCAT44D(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar1) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar3 == '\0') {
        iVar2 = (int)in_fr4;
      }
      else {
        iVar2 = (int)CONCAT44D(in_fr14,in_fr4);
      }
      if (iVar2 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar3 == '\0') {
      iVar2 = (int)in_fr4;
    }
    else {
      iVar2 = (int)CONCAT44D(in_fr14,in_fr4);
    }
    if (*ar5 != iVar2) {
      ar5 = ar5 + -4;
    }
    if (cVar4 == '\0') {
      (*(int *)(fr0_ - 0x20)) = ar5[1];
      (*(int *)(fr0_ - 0x1c)) = ar5[2];
      (*(int *)(fr0_ - 0x18)) = ar5[3];
    }
    else {
      (*(int *)(fr0_ - 0x20)) = (int)*(undefined8 *)(unsigned)(ar5 + 1);
      (*(int *)(fr0_ - 0x1c)) = (int)*(undefined8 *)(unsigned)(ar5 + 2);
      (*(int *)(fr0_ - 0x18)) = (int)*(undefined8 *)(unsigned)(ar5 + 3);
      (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 3) >> 0x20);
    }
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(int *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(&(*(int *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0342d8\n.set _FUN_8c0342d8, _FUN_8c0342d8_def\n");
//@unit 8c034384
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034384_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034384";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int *piVar1;
  uint in_fr1 = 0;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14 = 0;
  bool bVar12;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_xyz(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x24)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), Vec3_dtor(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)(D2U(dVar9) & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = F32LO(dVar9);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x24)) = (float)ar5[1];
        (*(float *)(fr0_ - 0x20)) = (float)ar5[2];
        (*(float *)(fr0_ - 0x1c)) = (float)ar5[3];
      }
      else {
        (*(float *)(fr0_ - 0x24)) = (float)*(undefined8 *)(unsigned)(ar5 + 1);
        (*(float *)(fr0_ - 0x20)) = (float)*(undefined8 *)(unsigned)(ar5 + 2);
        (*(float *)(fr0_ - 0x1c)) = (float)*(undefined8 *)(unsigned)(ar5 + 3);
        (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[1],in_fr3);
        dVar5 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + 1);
        dVar5 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) -
                                 F32HI(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar5);
          dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      (*(float *)(fr0_ - 0x24)) = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D(ar5[2],(*(float *)(fr0_ - 0x24)));
        dVar5 = CONCAT44D(ar5[-2],SUB84(dVar5,0));
        (*(float *)(fr0_ - 0x24)) = F32HI(dVar4);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar5 + 2);
        dVar5 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) -
                                 F32HI(dVar5),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) / F32LO(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D(ar5[3],(*(float *)(fr0_ - 0x20)));
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
        (*(float *)(fr0_ - 0x20)) = (float)(int)(D2U(dVar6) >> 0x20);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5 + 3);
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) -
                                 F32HI(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)(D2U(dVar5) >> 0x20);
      (*(float *)(fr0_ - 0x1c)) = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = (float)uVar7;
        uVar7 = (*(undefined4 *)(fr0_ - 0x18));
      }
      (*(undefined4 *)(fr0_ - 0x18)) = uVar7;
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)(D2U(dVar4) & 0xffffffff);
      fVar3 = F32HI(dVar5);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = CONCAT44D(fVar3 + F32HI(dVar6),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      (*(float *)(fr0_ - 0x24)) = fVar3;
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x24)) = (float)uVar10;
        (*(float *)(fr0_ - 0x20)) = F32HI(uVar10);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = F32HI(dVar4);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = CONCAT44D(fVar8 + F32HI(dVar5),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar5) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x20)) = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x20)) = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x20)) = (float)uVar11;
        (*(float *)(fr0_ - 0x1c)) = F32HI(uVar11);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar2 - F32LO(dVar4));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                                 F32LO(dVar9) * F32HI(dVar4));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = F32LO(dVar9) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x1c)) = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = (float)in_xd14;
        (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 40)), Vec3_ctor_copy((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x24)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 40)), Vec3_dtor(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c034384\n.set _FUN_8c034384, _FUN_8c034384_def\n");
//@unit 8c034548
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034548_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034548";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(int *)(unsigned)(iVar1 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c034548\n.set _FUN_8c034548, _FUN_8c034548_def\n");
//@unit 8c034574
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034574_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034574";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  float fVar1;
  uint in_fr1 = 0;
  float fVar2;
  double dVar3;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  bool bVar4;
  undefined4 in_PR = 0;
  int iVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_set_xyz(&(*(float *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 32)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), object_dtor_delete(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar6 == '\0') {
      bVar4 = in_fr4 < 0.0;
    }
    else {
      bVar4 = CONCAT44D(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
    }
    if (bVar4) {
      in_fr4 = 0.0;
    }
    while( true ) {
      if (cVar6 == '\0') {
        iVar5 = (int)in_fr4;
      }
      else {
        iVar5 = (int)CONCAT44D(in_fr14,in_fr4);
      }
      if (iVar5 <= *ar5) break;
      ar5 = ar5 + 4;
    }
    if (cVar6 == '\0') {
      iVar5 = (int)in_fr4;
    }
    else {
      iVar5 = (int)CONCAT44D(in_fr14,in_fr4);
    }
    if (*ar5 != iVar5) {
      ar5 = ar5 + -4;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[1]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    fVar1 = (*(float *)(fr0_ - 0x1c));
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x1c)) = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[2]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
    }
    (*(float *)(fr0_ - 0x18)) = fVar1;
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x18)) = fVar2;
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x43b40000,(float)ar5[3]);
    }
    else {
      dVar3 = 2.6584566620691055e+36;
    }
    if (cVar6 == '\0') {
      fVar2 = F32LO(dVar3) * F32HI(dVar3);
    }
    else {
      fVar2 = SUB84(dVar3 * dVar3,0);
    }
    if (cVar7 == '\0') {
      dVar3 = CONCAT44D(0x47800000,fVar2);
    }
    else {
      dVar3 = 6.207226708901173e-78;
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x14)) = F32LO(dVar3) / F32HI(dVar3);
    }
    else {
      (*(float *)(fr0_ - 0x14)) = SUB84(dVar3 / dVar3,0);
    }
    if (cVar7 != '\0') {
      (*(undefined4 *)(fr0_ - 0x10)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
      (*(float *)(fr0_ - 0x14)) = fVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x1c)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), object_dtor_delete(&(*(float *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c034574\n.set _FUN_8c034574, _FUN_8c034574_def\n");
//@unit 8c034650
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034650_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034650";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int *piVar1;
  uint in_fr1 = 0;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar8;
  float in_PR = 0;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  dVar5 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (*(float *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), Vec3_set_xyz(&(*(float *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), object_dtor_delete(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar9 == '\0') {
      bVar8 = SUB84(dVar5,0) < 0.0;
    }
    else {
      bVar8 = dVar5 < (double)(ulonglong)in_fr1;
    }
    if (bVar8) {
      dVar5 = (double)(D2U(dVar5) & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar9 == '\0' && fVar2 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar2);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar2 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = F32LO(dVar5);
      if (cVar9 == '\0') {
        bVar8 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar8 = dVar4 < dVar5;
      }
      if (!bVar8) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar9 == '\0' && fVar3 < 0.0) {
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar4 = 1.4411522222084588e+18;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[1]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
      fVar3 = (*(float *)(fr0_ - 0x20));
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[2]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 / dVar5,0);
      }
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = fVar2;
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x43b40000,(float)ar5[3]);
      }
      else {
        dVar5 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar5) * F32HI(dVar5);
      }
      else {
        fVar2 = SUB84(dVar5 * dVar5,0);
      }
      if (cVar10 == '\0') {
        dVar5 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar5 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) / F32HI(dVar5);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 / dVar5,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd0);
        (*(float *)(fr0_ - 0x18)) = fVar3;
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[1] - ar5[-3]),in_fr3);
      }
      else {
        dVar4 = (double)(ar5[1] - ar5[-3]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,fVar3);
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = F32HI(dVar4);
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[2] - ar5[-2]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[2] - ar5[-2]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = F32HI(dVar4);
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((float)(ar5[3] - ar5[-1]),SUB84(dVar4,0));
      }
      else {
        dVar4 = (double)(ar5[3] - ar5[-1]);
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x43b40000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) *
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 * dVar6;
      }
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(0x47800000,SUB84(dVar6,0));
      }
      else {
        dVar6 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) /
                                 F32HI(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar6),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar6;
      }
      fVar3 = F32HI(dVar4);
      (*(float *)(fr0_ - 0x18)) = SUB84(dVar4,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x18)) = fVar3;
        fVar3 = (*(float *)(fr0_ - 0x14));
      }
      (*(float *)(fr0_ - 0x14)) = fVar3;
      fVar3 = (float)*piVar1;
      dVar6 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar6 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar3,F32LO(dVar6) + fVar3);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      dVar7 = in_xd14;
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(fVar2,SUB84(dVar4,0));
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) - F32LO(dVar6),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 - dVar6;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),SUB84(dVar6,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) *
                                 F32HI(dVar4),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-3]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(F32HI(dVar7) +
                                 F32LO(dVar4) / F32HI(dVar4),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar4 / dVar4;
      }
      fVar3 = F32HI(dVar7);
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar7,0);
      if (cVar10 == '\0') {
        (*(float *)(fr0_ - 0x20)) = fVar3;
        fVar3 = (*(float *)(fr0_ - 0x1c));
      }
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      dVar6 = in_xd14;
      if (cVar10 == '\0') {
        dVar6 = CONCAT44D(fVar2,SUB84(dVar7,0));
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) - F32LO(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) *
                                 F32HI(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-2]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar3);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) +
                                 F32LO(dVar4) / F32HI(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar4 / dVar4;
      }
      fVar3 = F32HI(dVar6);
      (*(float *)(fr0_ - 0x1c)) = fVar3;
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = SUB84(dVar6,0);
        (*(float *)(fr0_ - 0x18)) = fVar3;
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar9 == '\0' && fVar3 < 0.0) {
        if (cVar10 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 1.4411522222084588e+18;
        }
        if (cVar9 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar2 - F32LO(dVar4));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      }
      if (cVar9 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),
                                 F32LO(dVar5) * F32HI(dVar4));
      }
      else {
        dVar5 = dVar5 * dVar4;
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x43b40000,(float)ar5[-1]);
      }
      else {
        dVar4 = 2.6584566620691055e+36;
      }
      if (cVar9 == '\0') {
        fVar2 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar2 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar10 == '\0') {
        dVar4 = CONCAT44D(0x47800000,fVar2);
      }
      else {
        dVar4 = 2.9939312563572376e-78;
      }
      if (cVar9 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar5) + F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar5 + dVar4 / dVar4,0);
      }
      if (cVar10 != '\0') {
        (*(float *)(fr0_ - 0x18)) = SUB84(in_xd14,0);
        (*(float *)(fr0_ - 0x14)) = F32HI(in_xd14);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_copy_8c02b5fc((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), object_dtor_delete(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c034650\n.set _FUN_8c034650, _FUN_8c034650_def\n");
//@unit 8c034880
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c034880_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034880";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = *ar5;
  for (iVar2 = 0; iVar2 < ar6; iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 0x18;
  }
  iVar1 = *(int *)(unsigned)(iVar1 + 8);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c034880\n.set _FUN_8c034880, _FUN_8c034880_def\n");
//@unit 8c0348ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c0348ac_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0348ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int *piVar1;
  uint in_fr1 = 0;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 in_fr4 = 0;
  undefined8 in_dr14 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_xd14 = 0;
  bool bVar12;
  undefined4 in_PR = 0;
  char cVar13;
  char cVar14;
  
  cVar14 = '\0';
  cVar13 = '\0';
  dVar9 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  (*(undefined4 *)(fr0_ - 0x14)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023de0(&(*(float *)(fr0_ - 0x20)),ar5,ar6,ar7));
  if (ar5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023e24((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), free_if_nonnull_wrap_016ac4(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  else {
    if (cVar13 == '\0') {
      bVar12 = SUB84(dVar9,0) < 0.0;
    }
    else {
      bVar12 = dVar9 < (double)(ulonglong)in_fr1;
    }
    if (bVar12) {
      dVar9 = (double)(D2U(dVar9) & 0xffffffff00000000);
    }
    while( true ) {
      fVar2 = (float)*ar5;
      dVar4 = (double)(ulonglong)(uint)fVar2;
      if (cVar13 == '\0' && fVar2 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar2);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar2 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar2,F32LO(dVar4) + fVar2);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      fVar2 = F32LO(dVar9);
      if (cVar13 == '\0') {
        bVar12 = SUB84(dVar4,0) < fVar2;
      }
      else {
        bVar12 = dVar4 < dVar9;
      }
      if (!bVar12) break;
      ar5 = ar5 + 4;
    }
    fVar3 = (float)*ar5;
    if (cVar13 == '\0' && fVar3 < 0.0) {
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(0x4f800000,fVar3);
      }
      else {
        dVar4 = 2.9939313207017074e-78;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
    }
    if (fVar3 == fVar2) {
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x20)) = (float)ar5[1];
        (*(float *)(fr0_ - 0x1c)) = (float)ar5[2];
        (*(float *)(fr0_ - 0x18)) = (float)ar5[3];
      }
      else {
        (*(float *)(fr0_ - 0x20)) = (float)*(undefined8 *)(unsigned)(ar5 + 1);
        (*(float *)(fr0_ - 0x1c)) = (float)*(undefined8 *)(unsigned)(ar5 + 2);
        (*(float *)(fr0_ - 0x18)) = (float)*(undefined8 *)(unsigned)(ar5 + 3);
        (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5 + 3) >> 0x20);
      }
    }
    else {
      piVar1 = ar5 + -4;
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[1],in_fr3);
        dVar5 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + 1);
        dVar5 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) -
                                 F32HI(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar5 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar5);
          dVar5 = CONCAT44D(fVar3,F32LO(dVar5) + fVar3);
        }
        else {
          dVar5 = dVar5 + dVar5;
        }
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) / F32LO(dVar5),SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 / dVar5;
      }
      (*(float *)(fr0_ - 0x20)) = SUB84(dVar4,0);
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D(ar5[2],(*(float *)(fr0_ - 0x20)));
        dVar5 = CONCAT44D(ar5[-2],SUB84(dVar5,0));
        (*(float *)(fr0_ - 0x20)) = F32HI(dVar4);
      }
      else {
        dVar6 = *(double *)(unsigned)(ar5 + 2);
        dVar5 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) -
                                 F32HI(dVar5),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar5;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar6 = CONCAT44D(F32HI(dVar6) / F32LO(dVar4),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 / dVar4;
      }
      (*(float *)(fr0_ - 0x1c)) = SUB84(dVar6,0);
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D(ar5[3],(*(float *)(fr0_ - 0x1c)));
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
        (*(float *)(fr0_ - 0x1c)) = (float)(int)(D2U(dVar6) >> 0x20);
      }
      else {
        dVar5 = *(double *)(unsigned)(ar5 + 3);
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) -
                                 F32HI(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 - dVar4;
      }
      fVar3 = (float)(*ar5 - *piVar1);
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D(F32HI(dVar5) / F32LO(dVar4),SUB84(dVar5,0));
      }
      else {
        dVar5 = dVar5 / dVar4;
      }
      uVar7 = (undefined4)(D2U(dVar5) >> 0x20);
      (*(float *)(fr0_ - 0x18)) = (float)SUB84(dVar5,0);
      if (cVar14 == '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)uVar7;
        uVar7 = (*(undefined4 *)(fr0_ - 0x14));
      }
      (*(undefined4 *)(fr0_ - 0x14)) = uVar7;
      if (cVar13 == '\0') {
        dVar5 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar5 = (double)*piVar1;
      }
      dVar6 = (double)(D2U(dVar4) & 0xffffffff);
      fVar3 = F32HI(dVar5);
      if (cVar13 == '\0') {
        bVar12 = fVar3 < 0.0;
      }
      else {
        bVar12 = dVar5 < dVar6;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,SUB84(dVar4,0));
        }
        else {
          dVar6 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar5 = CONCAT44D(fVar3 + F32HI(dVar6),SUB84(dVar5,0));
        }
        else {
          dVar5 = dVar5 + dVar6;
        }
      }
      uVar10 = in_xd14;
      if (cVar14 == '\0') {
        dVar6 = CONCAT44D((int)(D2U(dVar6) >> 0x20),fVar2);
        uVar10 = in_xd0;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar6) - F32HI(dVar5);
      }
      else {
        fVar3 = SUB84(dVar6 - dVar5,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-3],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -3);
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      (*(float *)(fr0_ - 0x20)) = fVar3;
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x20)) = (float)uVar10;
        (*(float *)(fr0_ - 0x1c)) = F32HI(uVar10);
      }
      if (cVar13 == '\0') {
        dVar4 = CONCAT44D((float)*piVar1,SUB84(dVar5,0));
      }
      else {
        dVar4 = (double)*piVar1;
      }
      dVar5 = (double)(ulonglong)(uint)fVar3;
      fVar8 = F32HI(dVar4);
      if (cVar13 == '\0') {
        bVar12 = fVar8 < 0.0;
      }
      else {
        bVar12 = dVar4 < dVar5;
      }
      if (bVar12) {
        if (cVar14 == '\0') {
          dVar5 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar5 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          dVar4 = CONCAT44D(fVar8 + F32HI(dVar5),SUB84(dVar4,0));
        }
        else {
          dVar4 = dVar4 + dVar5;
        }
      }
      uVar11 = in_xd14;
      if (cVar14 == '\0') {
        dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),fVar2);
        uVar11 = uVar10;
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar5) - F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar5 - dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x1c)),fVar3);
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),(*(float *)(fr0_ - 0x1c)));
      }
      if (cVar13 == '\0') {
        fVar3 = F32LO(dVar4) * F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-2],fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -2);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x1c)) = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x1c)) = SUB84(dVar4 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x1c)) = (float)uVar11;
        (*(float *)(fr0_ - 0x18)) = F32HI(uVar11);
      }
      fVar3 = (float)*piVar1;
      dVar4 = (double)(ulonglong)(uint)fVar3;
      if (cVar13 == '\0' && fVar3 < 0.0) {
        if (cVar14 == '\0') {
          dVar4 = CONCAT44D(0x4f800000,fVar3);
        }
        else {
          dVar4 = 2.9939313207017074e-78;
        }
        if (cVar13 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) + fVar3);
        }
        else {
          dVar4 = dVar4 + dVar4;
        }
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),fVar2 - F32LO(dVar4));
      }
      else {
        dVar9 = dVar9 - dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x18)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(float *)(fr0_ - 0x18)));
      }
      if (cVar13 == '\0') {
        dVar9 = CONCAT44D((int)(D2U(dVar9) >> 0x20),
                                 F32LO(dVar9) * F32HI(dVar4));
      }
      else {
        dVar9 = dVar9 * dVar4;
      }
      if (cVar14 == '\0') {
        dVar4 = CONCAT44D(ar5[-1],SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar5 + -1);
      }
      if (cVar13 == '\0') {
        (*(float *)(fr0_ - 0x18)) = F32LO(dVar9) + F32HI(dVar4);
      }
      else {
        (*(float *)(fr0_ - 0x18)) = SUB84(dVar9 + dVar4,0);
      }
      if (cVar14 != '\0') {
        (*(float *)(fr0_ - 0x18)) = (float)in_xd14;
        (*(undefined4 *)(fr0_ - 0x14)) = (undefined4)((ulonglong)in_xd14 >> 0x20);
      }
    }
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c023e24((*(undefined4 *)(fr0_ + 0x00000000)),&(*(float *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), free_if_nonnull_wrap_016ac4(&(*(float *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0348ac\n.set _FUN_8c0348ac, _FUN_8c0348ac_def\n");
//@unit 8c034a70
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034a70_def(undefined4 ar4,int *ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c034a70";
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
  ar6[3] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0xc);
  ar6[4] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x10);
  ar6[5] = *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x14);
  *(undefined4 *)(unsigned)(*ar5 + ar7 * 0x18) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 4) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 8) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0xc) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar7 * 0x18 + *ar5 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c034a70\n.set _FUN_8c034a70, _FUN_8c034a70_def\n");
//@unit 8c034ba8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034ba8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034ba8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125c18)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df08;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df08,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125c28)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df14;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df14,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125c38)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df20;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df20,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125c48)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27df2c,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c034ba8\n.set _FUN_8c034ba8, _FUN_8c034ba8_def\n");
//@unit 8c034c50
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined2 * FUN_8c034c50_def(undefined2 *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034c50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *ar4 = 0xffff;
  *(undefined4 *)(unsigned)(ar4 + 4) = 0;
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined *)(unsigned)((int)ar4 + iVar1 + 0xc) = (&(*(undefined1 *)(unsigned)0x8c132dd0))[iVar1 + ar6 * 0xf];
  }
  *(unsigned *)(unsigned)(ar4 + 0xe) = (&(*(undefined1 *)(unsigned)0x8c133318)) + ar5 * 0x30;
  ar4[2] = 0xffff;
  *(undefined1 *)(unsigned)(ar4 + 1) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x10) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x12) = 0;
  for (iVar1 = 0; iVar1 < *(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + 2); iVar1 = iVar1 + 1) {
    if (((*(char *)(unsigned)((int)ar4 + iVar1 + 0xc) == '\0') &&
        (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 4) == 0)) &&
       (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar1 * 4 + 4) + 6) == 0)) {
      *(undefined1 *)(unsigned)((int)ar4 + iVar1 + 0xc) = 1;
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c034c50\n.set _FUN_8c034c50, _FUN_8c034c50_def\n");
//@unit 8c034d08
#include "../decls.h"
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
  ring[rp++ & 255] = "free_if_nonnull_wrap_034d08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_034d08\n.set _free_if_nonnull_wrap_034d08, _free_if_nonnull_wrap_034d08_def\n");
//@unit 8c034d38
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c034d38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x8c132f56 + ar5);
}

__asm__(".globl _FUN_8c034d38\n.set _FUN_8c034d38, _FUN_8c034d38_def\n");
//@unit 8c034d48
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c034d48_def(short *ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c034d48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5,ar6,ar7));
  if (((((short)uVar1 != 8) ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1)) &&
      ((uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar6[2],ar5_00,ar6_00,ar7)), (short)uVar1 != 0x10 ||
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_24_026024(*ar6,ar5_00,ar6_00,ar7)), iVar2 == 1))))
     && ((*(int *)(unsigned)(ar4 + 4) != 0 ||
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
    if ((iVar3 == 1) && (iVar2 != *(int *)(unsigned)(ar4 + 0x10))) {
      *(int *)(unsigned)(ar4 + 0x12) = *(int *)(unsigned)(ar4 + 0x12) + 1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010284(iVar2,0x3c,ar6_00,ar7));
      ar6_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035028(ar4,uVar1,ar6,ar7));
    }
    *(int *)(unsigned)(ar4 + 0x10) = iVar2;
    if (*ar4 == -1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035110(ar4,ar6,ar6_00,ar7));
    }
    else {
      if (*(int *)(unsigned)(ar4 + 4) == 1) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x14))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar4;
      }
      if ((*(int *)(unsigned)(ar4 + 4) == 2) || (*(int *)(unsigned)(ar4 + 4) == 3)) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x18))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar4;
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 4;
      }
      if (*(int *)(unsigned)(ar4 + 4) == 4) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x1c))))
                          (ar6,uVar1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 4) = uVar1;
      }
      if (*(int *)(unsigned)(ar4 + 4) == 5) {
        *(undefined1 *)(unsigned)((int)ar4 + *ar4 + 0xc) = 5;
        if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + *ar4 * 4 + 4) + 0x22) == '\0') {
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

__asm__(".globl _FUN_8c034d48\n.set _FUN_8c034d48, _FUN_8c034d48_def\n");
//@unit 8c034f3c
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_c0_034f3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0xc0 + ar4);
}

__asm__(".globl _get_field_c0_034f3c\n.set _get_field_c0_034f3c, _get_field_c0_034f3c_def\n");
//@unit 8c034f48
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c034f48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar5 + 8),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(undefined4 *)(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
  for (iVar3 = 0; iVar2 = (int)*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if ((*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\0') || (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x06')) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(*(undefined4 *)(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(*(undefined4 *)(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
        if (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c034f48\n.set _FUN_8c034f48, _FUN_8c034f48_def\n");
//@unit 8c035000
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035000";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_18_02d1a0(ar4 + 0xa8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c035000\n.set _FUN_8c035000, _FUN_8c035000_def\n");
//@unit 8c035028
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035028";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x24);
  for (iVar3 = 0; iVar1 = (int)*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar1;
      iVar3 = iVar3 + 1) {
    if ((((*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) == -1) ||
         ('\x04' < *(char *)(unsigned)(*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xc) + ar4
                            + 0xc))) &&
        (*(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 8) <= ar5)) &&
       ((*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 0xe) <= iVar2 &&
        (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\x01')))) {
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0;
      *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 2;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c035028\n.set _FUN_8c035028, _FUN_8c035028_def\n");
//@unit 8c035110
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c035110_def(undefined2 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035110";
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
  for (iVar4 = 0; iVar4 < *(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + 2); iVar4 = iVar4 + 1) {
    if (*(char *)(unsigned)((int)ar4 + iVar4 + 0xc) == '\x02') {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar5 + 8),ar5_00,ar6,ar7));
      if ((iVar1 == -1) && (sVar3 < *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2)))
      {
        if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\0') {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                            (ar5,ar5_00,ar6,ar7));
          if (iVar1 == 1) {
            iVar2 = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
            sVar3 = *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
          }
        }
        else if (*(char *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x21) == '\x01') {
          ar5_00 = ar5;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03525c(ar4,ar5,ar6,ar7));
          if (iVar1 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 0x10))))
                              (ar5,ar5_00,ar6,ar7));
            if (iVar1 == 1) {
              iVar2 = (int)*((short *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4));
              sVar3 = *(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0xe) + iVar4 * 4 + 4) + 2);
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
    *(undefined4 *)(unsigned)(ar4 + 4) = 1;
    *(undefined4 *)(unsigned)(ar4 + 0x12) = 0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c035110\n.set _FUN_8c035110, _FUN_8c035110_def\n");
//@unit 8c03525c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03525c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03525c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  float *ar6_00;
  float fVar1;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c02f670(*(undefined4 *)(unsigned)(ar5 + 4),ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  ar6_00 = &(*(float *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c256294(0,((undefined1 *)(fr0_ - 0x10)),ar6_00,ar7));
  if (cVar4 == '\0') {
    fVar2 = 150.0;
    fVar1 = (*(float *)(fr0_ - 0x38));
  }
  else {
    fVar1 = 150.0;
    fVar2 = 500.0;
  }
  if (cVar3 == '\0' && fVar2 < fVar1) {
    if (cVar4 == '\0') {
      fVar1 = 500.0;
    }
    else {
      (*(float *)(fr0_ - 0x38)) = 500.0;
      fVar1 = 80.0;
    }
    if (cVar3 == '\0' && (*(float *)(fr0_ - 0x38)) < fVar1) {
      if (cVar4 == '\0') {
        fVar2 = 80.0;
        fVar1 = (*(float *)(fr0_ - 0x34));
      }
      else {
        fVar1 = 80.0;
        fVar2 = 400.0;
      }
      if (cVar3 == '\0' && fVar2 < fVar1) {
        if (cVar4 == '\0') {
          fVar1 = 400.0;
        }
        else {
          (*(float *)(fr0_ - 0x34)) = 400.0;
          fVar1 = -9.917997e+27;
        }
        if (cVar3 == '\0' && (*(float *)(fr0_ - 0x34)) < fVar1) {
          (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
          return 1;
        }
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,ar7));
  return 0;
}

__asm__(".globl _FUN_8c03525c\n.set _FUN_8c03525c, _FUN_8c03525c_def\n");
//@unit 8c035338
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035338";
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

__asm__(".globl _FUN_8c035338\n.set _FUN_8c035338, _FUN_8c035338_def\n");
//@unit 8c03539c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03539c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(iVar1 + ar5) = *(undefined1 *)(unsigned)(ar4 + iVar1 + 0xc);
  }
  return 0xf;
}

__asm__(".globl _FUN_8c03539c\n.set _FUN_8c03539c, _FUN_8c03539c_def\n");
//@unit 8c0353bc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0353bc";
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
  for (iVar3 = 0; iVar2 = (int)*(short *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + 2), iVar3 < iVar2;
      iVar3 = iVar3 + 1) {
    if (*(char *)(unsigned)(ar4 + iVar3 + 0xc) == '\0') {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar5,ar5_00,ar6,ar7));
      if (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 4) <= (short)uVar1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035000(ar5,ar5_00,ar6,ar7));
        if (*(short *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x1c) + iVar3 * 4 + 4) + 6) <= iVar2) {
          *(undefined1 *)(unsigned)(ar4 + iVar3 + 0xc) = 1;
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0353bc\n.set _FUN_8c0353bc, _FUN_8c0353bc_def\n");
//@unit 8c035470
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035470";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                    (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (iVar1 != 2) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7));
    ar5 = 0x3c;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar3 & 0xffff,0x3c,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
  if (iVar1 < 8) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    if ((iVar1 < 7) || ((uVar3 & 0xffff) < 10)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
      if ((iVar1 < 6) || ((uVar3 & 0xffff) < 0xc)) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
        if ((iVar1 < 5) || ((uVar3 & 0xffff) < 0xf)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
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

__asm__(".globl _FUN_8c035470\n.set _FUN_8c035470, _FUN_8c035470_def\n");
//@unit 8c035580
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035580";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
  if ((3 < iVar1) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                        (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7)), iVar1 != 2)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035580\n.set _FUN_8c035580, _FUN_8c035580_def\n");
//@unit 8c0355cc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0355cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                    (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
       (char)uVar2 == '\x01')) &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
     iVar1 == 1)) {
    ar5 = 7;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa388(0x8c35468c,7,ar6,ar7));
    if (((iVar1 == 1) &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x180 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 8)))))
                    (*(int *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
  if (((iVar1 == 0x1d) &&
      (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7)),
      (char)uVar2 == '\x01')) &&
     ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7)),
      iVar1 == 0 &&
      (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
        iVar1 == 1 &&
        (uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7)), (char)uVar2 == '\x02')) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)),
       iVar1 == 0)))))) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035718(*(undefined4 *)(unsigned)(ar4 + 0x18),4,ar6,ar7));
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0355cc\n.set _FUN_8c0355cc, _FUN_8c0355cc_def\n");
//@unit 8c035718
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035718";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + (char)ar5 + 0xc) = 1;
  return 1;
}

__asm__(".globl _FUN_8c035718\n.set _FUN_8c035718, _FUN_8c035718_def\n");
//@unit 8c035724
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_a0_035724";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (uint)*(byte *)(unsigned)(0xa0 + ar4);
}

__asm__(".globl _get_field_a0_035724\n.set _get_field_a0_035724, _get_field_a0_035724_def\n");
//@unit 8c035734
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_178_035734";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x178 + ar4);
}

__asm__(".globl _get_field_178_035734\n.set _get_field_178_035734, _get_field_178_035734_def\n");
//@unit 8c035740
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035740_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035740";
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
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,3,ar6,ar7));
    if (iVar1 <= a6) break;
    uVar2 = 3;
    ar6 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,3,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar2,ar6,ar7));
    if (iVar1 == 4) {
      uVar2 = 3;
      ar6 = a6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,3,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar2,ar6,ar7));
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

__asm__(".globl _FUN_8c035740\n.set _FUN_8c035740, _FUN_8c035740_def\n");
//@unit 8c03584c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03584c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0xbe + ar4);
}

__asm__(".globl _FUN_8c03584c\n.set _FUN_8c03584c, _FUN_8c03584c_def\n");
//@unit 8c035858
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035858_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035858";
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
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,ar6,ar7));
    if (iVar1 <= a6) break;
    uVar3 = 5;
    ar6 = a6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,a6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
    if (iVar1 == 7) {
      uVar3 = 5;
      ar6 = a6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)*ar4))))((int *)(unsigned)*ar4,5,a6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar3,ar6,ar7));
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

__asm__(".globl _FUN_8c035858\n.set _FUN_8c035858, _FUN_8c035858_def\n");
//@unit 8c03598c
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_40_03598c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(ar4 + 0x40);
}

__asm__(".globl _get_field_40_03598c\n.set _get_field_40_03598c, _get_field_40_03598c_def\n");
//@unit 8c035994
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7));
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7))
       , iVar2 == 0)) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
      iVar2 == 1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a0_035724(*(undefined4 *)(unsigned)(ar4 + 0x20),ar5,ar6,ar7)),
     (char)uVar1 == '\x02')) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7));
    if (iVar2 != 4) {
      return 1;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x44))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7));
    if (iVar2 == 0) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035994\n.set _FUN_8c035994, _FUN_8c035994_def\n");
//@unit 8c035a3c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035a3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02d1c8(*(int *)(unsigned)(ar4 + 8) + 0xa8,ar5,ar6,ar7));
  if (((((char)uVar1 == '\x01') &&
       (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_178_035734(*(undefined4 *)(unsigned)(ar4 + 0xc),ar5,ar6,ar7))
       , iVar2 == 0)) &&
      (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)),
      iVar2 == 1)) &&
     (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(undefined4 *)(unsigned)(ar4 + 0x10),ar5,ar6,ar7)),
     (char)uVar1 == '\x02')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c035a3c\n.set _FUN_8c035a3c, _FUN_8c035a3c_def\n");
//@unit 8c035ab4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035ab4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x90 + ar4);
}

__asm__(".globl _FUN_8c035ab4\n.set _FUN_8c035ab4, _FUN_8c035ab4_def\n");
//@unit 8c035ac8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035ac8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(undefined4 *)(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  return (uint)((char)uVar1 == '\x02');
}

__asm__(".globl _FUN_8c035ac8\n.set _FUN_8c035ac8, _FUN_8c035ac8_def\n");
//@unit 8c035af8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035af8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035af8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined8 in_dr0 = 0;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = F32HI(in_dr0);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(ar4[5],ar5,ar6,ar7));
  if ((char)uVar1 < '\x04') {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x188))))((int *)(unsigned)*ar4,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      fVar3 = 40.0;
    }
    else {
      fVar2 = 40.0;
      fVar3 = 5.547118e+19;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035af8\n.set _FUN_8c035af8, _FUN_8c035af8_def\n");
//@unit 8c035b50
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035b50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4e);
}

__asm__(".globl _FUN_8c035b50\n.set _FUN_8c035b50, _FUN_8c035b50_def\n");
//@unit 8c035b58
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035b58_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035b58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = F32HI(in_dr0);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035bf8(ar4[5],ar5,ar6,ar7));
  if ((char)uVar1 < '\x01') {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x188))))((int *)(unsigned)*ar4,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      pcVar3 = (code *)0x42200000;
    }
    else {
      fVar2 = 40.0;
      pcVar3 = ((void *)0x8c035be0);
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035be0(ar4[5],ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035bc8(ar4[5],ar5,ar6,ar7));
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035b58\n.set _FUN_8c035b58, _FUN_8c035b58_def\n");
//@unit 8c035bc8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035bc8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4e) = *(char *)(unsigned)(ar4 + 0x4e) + -1;
  return 0x4e;
}

__asm__(".globl _FUN_8c035bc8\n.set _FUN_8c035bc8, _FUN_8c035bc8_def\n");
//@unit 8c035be0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035be0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + '\x01';
  return 0x4f;
}

__asm__(".globl _FUN_8c035be0\n.set _FUN_8c035be0, _FUN_8c035be0_def\n");
//@unit 8c035bf8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035bf8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4f);
}

__asm__(".globl _FUN_8c035bf8\n.set _FUN_8c035bf8, _FUN_8c035bf8_def\n");
//@unit 8c035c00
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035c00_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035c00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  undefined8 in_dr0 = 0;
  code *pcVar3;
  char cVar4;
  char cVar5;
  
  fVar2 = F32HI(in_dr0);
  cVar5 = '\0';
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ca0(ar4[5],ar5,ar6,ar7));
  if ((char)uVar1 < '\x04') {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x188))))((int *)(unsigned)*ar4,ar5,ar6,ar7));
    if (cVar5 == '\0') {
      pcVar3 = (code *)0x42200000;
    }
    else {
      fVar2 = 40.0;
      pcVar3 = ((void *)0x8c035c88);
    }
    if (cVar4 == '\0' && (float)(uint)pcVar3 < fVar2) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035c88(ar4[5],ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035c70(ar4[5],ar5,ar6,ar7));
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035c00\n.set _FUN_8c035c00, _FUN_8c035c00_def\n");
//@unit 8c035c70
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035c70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4f) = *(char *)(unsigned)(ar4 + 0x4f) + -1;
  return 0x4f;
}

__asm__(".globl _FUN_8c035c70\n.set _FUN_8c035c70, _FUN_8c035c70_def\n");
//@unit 8c035c88
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035c88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x50) = *(char *)(unsigned)(ar4 + 0x50) + '\x01';
  return 0x50;
}

__asm__(".globl _FUN_8c035c88\n.set _FUN_8c035c88, _FUN_8c035c88_def\n");
//@unit 8c035ca0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035ca0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x50);
}

__asm__(".globl _FUN_8c035ca0\n.set _FUN_8c035ca0, _FUN_8c035ca0_def\n");
//@unit 8c035ca8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c035ca8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c035ca8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 in_dr0 = 0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  
  fVar3 = F32HI(in_dr0);
  cVar6 = '\0';
  cVar5 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035d64(ar4[5],ar5,ar6,ar7));
  if (((char)uVar1 < '\x02') && (uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(ar4[5],ar5,ar6,ar7)), (char)uVar1 < '\x03')) {
    uVar1 = 0xb;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x11c))))((int *)(unsigned)*ar4,0xb,ar6,ar7));
    if (iVar2 < 2) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar4 + 0x188))))((int *)(unsigned)*ar4,uVar1,ar6,ar7));
      if (cVar6 == '\0') {
        pcVar4 = (code *)0x42200000;
      }
      else {
        fVar3 = 40.0;
        pcVar4 = ((void *)0x8c035d4c);
      }
      if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035d4c(ar4[5],uVar1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035d4c(ar4[5],uVar1,ar6,ar7));
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c035ca8\n.set _FUN_8c035ca8, _FUN_8c035ca8_def\n");
//@unit 8c035d4c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035d4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x4d) = *(char *)(unsigned)(ar4 + 0x4d) + '\x01';
  return 0x4d;
}

__asm__(".globl _FUN_8c035d4c\n.set _FUN_8c035d4c, _FUN_8c035d4c_def\n");
//@unit 8c035d64
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x4d);
}

__asm__(".globl _FUN_8c035d64\n.set _FUN_8c035d64, _FUN_8c035d64_def\n");
//@unit 8c035d7c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),1,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035d7c\n.set _FUN_8c035d7c, _FUN_8c035d7c_def\n");
//@unit 8c035d9c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035d9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),3,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035d9c\n.set _FUN_8c035d9c, _FUN_8c035d9c_def\n");
//@unit 8c035dbc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035dbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),4,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035dbc\n.set _FUN_8c035dbc, _FUN_8c035dbc_def\n");
//@unit 8c035ddc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035ddc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),6,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035ddc\n.set _FUN_8c035ddc, _FUN_8c035ddc_def\n");
//@unit 8c035dfc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035dfc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),7,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035dfc\n.set _FUN_8c035dfc, _FUN_8c035dfc_def\n");
//@unit 8c035e1c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),8,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035e1c\n.set _FUN_8c035e1c, _FUN_8c035e1c_def\n");
//@unit 8c035e3c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),9,ar6,ar7));
  return 4;
}

__asm__(".globl _FUN_8c035e3c\n.set _FUN_8c035e3c, _FUN_8c035e3c_def\n");
//@unit 8c035e5c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb7c(*(int *)(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c035e5c\n.set _FUN_8c035e5c, _FUN_8c035e5c_def\n");
//@unit 8c035e84
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x3a) = (undefined1)ar5;
  return 0x3a;
}

__asm__(".globl _FUN_8c035e84\n.set _FUN_8c035e84, _FUN_8c035e84_def\n");
//@unit 8c035e8c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x3a);
}

__asm__(".globl _FUN_8c035e8c\n.set _FUN_8c035e8c, _FUN_8c035e8c_def\n");
//@unit 8c035e94
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035e94";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035e8c(*(undefined4 *)(unsigned)(ar4 + 0x14),ar5,ar6,ar7));
  if ((char)uVar1 == '\0') {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_40_03598c(*(undefined4 *)(unsigned)(ar4 + 0x14),ar5,ar6,ar7));
    if (iVar2 == 0) {
      ar5 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035e84(*(undefined4 *)(unsigned)(ar4 + 0x14),1,ar6,ar7));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f04(*(undefined4 *)(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  if (iVar2 < 4) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),4,ar6,ar7));
  }
  return 4;
}

__asm__(".globl _FUN_8c035e94\n.set _FUN_8c035e94, _FUN_8c035e94_def\n");
//@unit 8c035f04
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035f04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(0x98 + ar4);
}

__asm__(".globl _FUN_8c035f04\n.set _FUN_8c035f04, _FUN_8c035f04_def\n");
//@unit 8c035f14
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035f14";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035ab4(*(undefined4 *)(unsigned)(ar4 + 0x10),ar5,ar6,ar7));
  if ((char)uVar1 == '\0') {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(*(undefined4 *)(unsigned)(ar4 + 0x10),1,ar6,ar7));
  }
  return 4;
}

__asm__(".globl _FUN_8c035f14\n.set _FUN_8c035f14, _FUN_8c035f14_def\n");
//@unit 8c035f4c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035f4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x90;
  *(undefined1 *)(unsigned)(0x90 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c035f4c\n.set _FUN_8c035f4c, _FUN_8c035f4c_def\n");
//@unit 8c035f58
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035f58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(int *)(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(int *)(unsigned)(ar4 + 8) + 0xa8,0xd,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c035f58\n.set _FUN_8c035f58, _FUN_8c035f58_def\n");
//@unit 8c035fa0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035fa0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),3,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(int *)(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(int *)(unsigned)(ar4 + 8) + 0xa8,0x12,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c035fa0\n.set _FUN_8c035fa0, _FUN_8c035fa0_def\n");
//@unit 8c035fe8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c035fe8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_PR = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x10),4,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb6c(*(int *)(unsigned)(ar4 + 8) + 0xa8,1,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb8c(*(int *)(unsigned)(ar4 + 8) + 0xa8,0x13,ar6,ar7); });
  return 4;
}

__asm__(".globl _FUN_8c035fe8\n.set _FUN_8c035fe8, _FUN_8c035fe8_def\n");
//@unit 8c036030
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036030";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c036050(*(undefined4 *)(unsigned)(ar4 + 0x18),0xffffffff,ar6,ar7));
  return 5;
}

__asm__(".globl _FUN_8c036030\n.set _FUN_8c036030, _FUN_8c036030_def\n");
//@unit 8c036050
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036050";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(short *)(unsigned)(ar4 + 4) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c036050\n.set _FUN_8c036050, _FUN_8c036050_def\n");
//@unit 8c036058
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(unsigned)(iVar1 + ar4) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c036058\n.set _FUN_8c036058, _FUN_8c036058_def\n");
//@unit 8c036078
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036078_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125c58),ar5,ar6,ar7));
  uVar3 = 0x8c27df38;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27df38,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125c68),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27df44;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27df44,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125c78),pcVar2,uVar3,ar7));
  uVar3 = 0x8c27df50;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27df50,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125c88),pcVar2,uVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27df5c,ar7));
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125c98) = CONCAT44((*(undefined1 *)(unsigned)0x8c125c9c),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125c98) = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c036078\n.set _FUN_8c036078, _FUN_8c036078_def\n");
//@unit 8c036130
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036130_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036130";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125ca0)),ar5,ar6,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df68;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df68,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125cb0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df74;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df74,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125cc0)),puVar3,uVar2,ar7));
  puVar3 = ((void *)(unsigned)0x8c022cb0);
  uVar2 = 0x8c27df80;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)(unsigned)0x8c022cb0),0x8c27df80,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz((&(*(undefined1 *)(unsigned)0x8c125cd0)),puVar3,uVar2,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar2,((void *)(unsigned)0x8c022cb0),0x8c27df8c,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c036130\n.set _FUN_8c036130, _FUN_8c036130_def\n");
//@unit 8c0361d8
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimal_m0_0361d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129ea0);
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

__asm__(".globl _CAnimal_m0_0361d8\n.set _CAnimal_m0_0361d8, _CAnimal_m0_0361d8_def\n");
//@unit 8c036260
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_FROGMANLINE_036266_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_FROGMANLINE_036266";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  undefined4 extraout_fr1 = 0;
  char cVar3;
  
  cVar3 = '\0';
  ar6_00 = 1;
  uVar1 = 5;
  ar7_00 = ar6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c27dfd4); unsigned long t3_ = (unsigned long)(((undefined1 *)(unsigned)0x8c27e594)); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c13368c)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,5,1,ar6); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129ea0);
  (vsp = ((unsigned long)(fr0_ - 0)), s_FROGMANLINE_05d646(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03a5a4(ar4 + 0xd2c,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x1088,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c135e05)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x490;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034d38(ar4 + 0x2dc,ar6,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ec8(*(undefined4 *)(unsigned)(ar4 + 0x308),uVar1,ar6_00,ar7_00));
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0xd2c;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x111c) = 0;
    *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x1134) = 0;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x114c) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4),ar4 + 0x1088,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x3d8) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328)) + 0x40);
  *(undefined4 *)(unsigned)(ar4 + 0x3dc) = *(undefined4 *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328)) + 0x40);
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x468) = CONCAT44(0x3f800000,extraout_fr1);
  }
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x40;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_FROGMANLINE_036266\n.set _s_GRAPHICS_FROGMANLINE_036266, _s_GRAPHICS_FROGMANLINE_036266_def\n");
//@unit 8c03640c
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimal_m2_03640c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_a0_035724(ar5,ar5,ar6,ar7));
  if (((char)uVar1 == '\x02') && (*(int *)(unsigned)(0x7d4 + ar5) == 1)) {
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 68)), CAnimal_m2_02573c(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0366f0(ar4,ar5,ar6,ar7_00));
  }
  if (*(int *)(unsigned)(0x1134 + ar4) != 0) {
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

__asm__(".globl _CAnimal_m2_03640c\n.set _CAnimal_m2_03640c, _CAnimal_m2_03640c_def\n");
//@unit 8c03655c
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_2f0_03655c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x2f0 + ar4);
}

__asm__(".globl _get_field_2f0_03655c\n.set _get_field_2f0_03655c, _get_field_2f0_03655c_def\n");
//@unit 8c036568
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimal_m3_036568";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  int ar7_00;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_a0_035724(ar5,ar5,ar6,ar7));
  if (((char)uVar1 == '\x02') && (*(int *)(unsigned)(0x7d4 + ar5) == 1)) {
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffbf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffef;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0xffffffdf;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x20;
  }
  ar5_00 = ar5;
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 68)), CAnimal_m3_026078(ar4,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c035ab4(ar4 + 0x490,ar5_00,ar6,ar7_00));
  if (((char)uVar1 == '\x01') && (*(int *)(unsigned)(0x1148 + ar4) == 0)) {
    ar5_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0366f0(ar4,ar5,ar6,ar7_00));
  }
  if (*(int *)(unsigned)(0x1134 + ar4) != 0) {
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

__asm__(".globl _CAnimal_m3_036568\n.set _CAnimal_m3_036568, _CAnimal_m3_036568_def\n");
//@unit 8c0366b8
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0366b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0366b8\n.set _noop_0366b8, _noop_0366b8_def\n");
//@unit 8c0366bc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0366bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0366e4(*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0366bc\n.set _FUN_8c0366bc, _FUN_8c0366bc_def\n");
//@unit 8c0366e4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0366e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x83;
  *(undefined1 *)(unsigned)(0x83 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0366e4\n.set _FUN_8c0366e4, _FUN_8c0366e4_def\n");
//@unit 8c0366f0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0366f0";
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
    *(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4) = uVar1;
    a4 = *(int *)(unsigned)(0x111c + ar4 + iVar2 * 4);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0x54))))(a4,0x8c3eb324,a6,ar7));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fed70))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar5),
                       *(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4),0,ar7));
    *(undefined4 *)(unsigned)(0x1134 + ar4 + iVar2 * 4) = uVar1;
  }
  return 6;
}

__asm__(".globl _FUN_8c0366f0\n.set _FUN_8c0366f0, _FUN_8c0366f0_def\n");
//@unit 8c03679c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03679c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar5),
                       *(undefined4 *)(unsigned)(0x1134 + ar4 + iVar3 * 4),ar6,ar7));
    if ((iVar1 == 1) && (*(int *)(unsigned)(0x1134 + ar4 + iVar3 * 4) != 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                        (*(undefined4 *)(unsigned)(0x7d0 + ar5),ar4 + iVar3 * 4 + 0x1134,ar6,ar7))
      ;
      *(undefined4 *)(unsigned)(0x111c + ar4 + iVar3 * 4) = uVar2;
    }
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feef8))))
                    (*(undefined4 *)(unsigned)(0x7d0 + ar5),*(undefined4 *)(unsigned)(0x1148 + ar4),ar6,ar7
                    ));
  if ((iVar3 == 1) && (iVar3 = 0, *(int *)(unsigned)(0x1148 + ar4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035f4c(ar4 + 0x490,2,ar6,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0feeb0))))
                      (*(undefined4 *)(unsigned)(0x7d0 + ar5),ar4 + 0x1148,ar6,ar7));
    iVar3 = 0x1130;
    *(undefined4 *)(unsigned)(0x1130 + ar4) = uVar2;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c03679c\n.set _FUN_8c03679c, _FUN_8c03679c_def\n");
//@unit 8c03688c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_CSquidLine_036894_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CSquidLine_036894";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 a6;
  int iVar2;
  
  a6 = ar6;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    if (*(int *)(unsigned)(0x111c + ar4 + iVar2 * 4) == 0) {
      ar7 = 2;
      a6 = 1;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d1d,
                 (&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d28,1,2));
    }
    else {
      iVar1 = *(int *)(unsigned)(0x111c + ar4 + iVar2 * 4);
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,ar6,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4),ar5_00,a6,ar7));
      iVar1 = *(int *)(unsigned)(0x111c + ar4 + iVar2 * 4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar1 + 8) + 0x5c))))(iVar1,ar5_00,a6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x4c))))(ar5,*(undefined4 *)(unsigned)(0x111c + ar4 + iVar2 * 4),a6,ar7));
    }
  }
  return 6;
}

__asm__(".globl _s_CSquidLine_036894\n.set _s_CSquidLine_036894, _s_CSquidLine_036894_def\n");
//@unit 8c036984
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_036984";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_036984\n.set _noop_036984, _noop_036984_def\n");
//@unit 8c036988
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036988_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036988";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x30) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x34) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 0x38) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c036988\n.set _FUN_8c036988, _FUN_8c036988_def\n");
//@unit 8c0369a0
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_0369a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_0369a0\n.set _noop_0369a0, _noop_0369a0_def\n");
//@unit 8c0369a4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c0369a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x490) + 0x1c))))
                    ((int *)(unsigned)(ar4 + 0x490),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0369a4\n.set _FUN_8c0369a4, _FUN_8c0369a4_def\n");
//@unit 8c0369c4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
double * FUN_8c0369c4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0369c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  *(float *)(unsigned)(ar4 + 0x468) =
       *(float *)(unsigned)(ar4 + 0x468) + (float)(int)*(char *)(unsigned)(ar4 + 0x46c) * 2.3148148e-06 * 8.0;
  fVar4 = *(float *)(unsigned)(ar4 + 0x468);
  iVar3 = ar5;
  if (fVar4 <= 1.0) {
    if (*(float *)(unsigned)(ar4 + 0x468) < 0.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
    }
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x1c)) = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0x1c)) >> 0x10),(short)uVar1);
    if ((short)uVar1 == 1) {
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f8147ae;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x468) = 0x8c256fec3f8147ae;
      }
    }
    else if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x468) = 0x3f800000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x468) = CONCAT44(0x3f800000,fVar4);
    }
  }
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    in_fr15 = *(undefined4 *)(unsigned)pdVar2;
  }
  else {
    in_xd14 = *pdVar2;
  }
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  dVar5 = in_xd14;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(in_fr15,*(undefined4 *)(unsigned)(ar4 + 0x468));
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D(F32HI(dVar5) * F32LO(dVar5),SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *pdVar2 = dVar5;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); FUN_8c256fec(0,iVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c02a29c(ar4,*(undefined4 *)(unsigned)(ar5 + 4),ar6,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = in_fr15;
  }
  else {
    *pdVar2 = in_xd14;
  }
  return pdVar2;
}

__asm__(".globl _FUN_8c0369c4\n.set _FUN_8c0369c4, _FUN_8c0369c4_def\n");
//@unit 8c036adc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c036adc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036adc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined1 *puVar2;
  undefined4 *ar6_00;
  float *ar6_01;
  float fVar3;
  double dVar4;
  float fVar5;
  undefined8 in_dr6 = 0;
  float in_fr8 = 0;
  float in_xf0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  fVar5 = (float)in_dr6;
  ar5_00 = 1;
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c036d3c(*(undefined4 *)(unsigned)(ar4 + 0x308),1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c036d2c(ar4 + 0xd2c,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), get_field_2fc_036d20(ar4 + 0xd2c,ar5_00,ar6,ar7));
  if (iVar1 == 1) {
    iVar1 = ar4 + 0x50;
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x40)),iVar1,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x144))))(ar4,iVar1,ar6,ar7));
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c023484(iVar1 + 0xd8,((undefined1 *)(fr0_ - 0x40)),ar6,ar7); });
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x60))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_add(ar4 + 0x30,((undefined1 *)(fr0_ - 0x50)),ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_copy(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x60)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
    if (cVar7 != '\0') {
      (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0xc));
    }
    ar6_00 = &(*(undefined4 *)(fr0_ - 0x90));
    puVar2 = ((undefined1 *)(fr0_ - 0x24));
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c256294(0,puVar2,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_ctor_zero(&(*(float *)(fr0_ - 0x34)),puVar2,ar6_00,ar7));
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x90)),fVar5);
      (*(float *)(fr0_ - 0x30)) = in_xf0;
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),(*(undefined4 *)(fr0_ - 0x90)));
      (*(float *)(fr0_ - 0x30)) = fVar5;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    }
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x34)) = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      (*(float *)(fr0_ - 0x34)) = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x8c)),in_fr8);
    }
    else {
      dVar4 = CONCAT44D(((undefined4 *)(fr0_ - 0x88))[0],(*(undefined4 *)(fr0_ - 0x8c)));
      (*(float *)(fr0_ - 0x34)) = (*(float *)(fr0_ - 0x30));
      (*(float *)(fr0_ - 0x30)) = in_fr8;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0xbf800000,fVar3);
    }
    else {
      dVar4 = 1.65674406927311e-311;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x14)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      (*(float *)(fr0_ - 0x30)) = fVar3;
      fVar5 = (*(float *)(fr0_ - 0x28));
    }
    (*(float *)(fr0_ - 0x28)) = fVar5;
    (*(undefined4 *)(fr0_ - 0x2c)) = (int)((ulonglong)in_dr6 >> 0x20);
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c02ace4(*(undefined4 *)(unsigned)(ar4 + 0x30c),puVar2,ar6_00,ar7); });
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x7c)),puVar2,ar6_00,ar7));
    puVar2 = ((undefined1 *)(fr0_ - 0x70));
    ar6_01 = &(*(float *)(fr0_ - 0x34));
    ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x88))); unsigned long t1_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c0332b4(*(undefined4 *)(unsigned)(ar4 + 0x30c),&(*(undefined4 *)(fr0_ - 0x18)),ar6_01,puVar2); });
    (vsp = ((unsigned long)(fr0_ - 148)), vec3_copy_8c023d8c(ar4 + 0x3fc,((undefined4 *)(fr0_ - 0x88)),ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined4 *)(fr0_ - 0x88)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), object_dtor_delete(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6_01,puVar2));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(float *)(fr0_ - 0x34)),0xffffffff,ar6_01,puVar2));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6_01,puVar2));
  }
  return iVar1;
}

__asm__(".globl _FUN_8c036adc\n.set _FUN_8c036adc, _FUN_8c036adc_def\n");
//@unit 8c036d20
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_2fc_036d20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x2fc + ar4);
}

__asm__(".globl _get_field_2fc_036d20\n.set _get_field_2fc_036d20, _get_field_2fc_036d20_def\n");
//@unit 8c036d2c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036d2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x328;
  *(undefined4 *)(unsigned)(0x328 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c036d2c\n.set _FUN_8c036d2c, _FUN_8c036d2c_def\n");
//@unit 8c036d3c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036d3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x85;
  *(undefined1 *)(unsigned)(0x85 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c036d3c\n.set _FUN_8c036d3c, _FUN_8c036d3c_def\n");
//@unit 8c036d48
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036d48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036d70(*(undefined4 *)(unsigned)(0x308 + ar4),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c036d48\n.set _FUN_8c036d48, _FUN_8c036d48_def\n");
//@unit 8c036d70
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036d70";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x86;
  *(undefined1 *)(unsigned)(0x86 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c036d70\n.set _FUN_8c036d70, _FUN_8c036d70_def\n");
//@unit 8c036d7c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m7_036d7c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "CAnimal_m7_036d7c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *ar5_00;
  undefined4 *a5;
  undefined4 *a6;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  double dVar5;
  float fVar6;
  undefined8 in_dr14 = 0;
  bool bVar7;
  char cVar8;
  char cVar9;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar9 = '\0';
  cVar8 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x34)),ar5_00,ar6,ar7));
  dVar5 = CONCAT44D(uVar2,0x3f800000);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_300_036f50(ar4 + 0xd2c,ar5_00,ar6,ar7));
  if ((iVar1 == 1) && ((vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x170))))(ar4,ar5_00,ar6,ar7)), cVar9 == '\0'))
  {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
  }
  a6 = &(*(undefined4 *)(fr0_ - 0x34));
  a5 = &(*(undefined4 *)(fr0_ - 0x24));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x124))))(ar5,a5,a6,ar7));
  if (cVar9 == '\0') {
    in_dr0 = CONCAT44D((int)((ulonglong)in_dr0 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x30));
  }
  fVar6 = F32LO(dVar5);
  if (cVar8 == '\0') {
    fVar3 = F32LO(in_dr0) - fVar6;
  }
  else {
    fVar3 = SUB84(in_dr0 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x30));
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
    }
    if (cVar8 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x34)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x30)),(*(undefined4 *)(fr0_ - 0x34)));
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x30) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x30) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x30) = dVar4;
    }
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x38));
  }
  if (cVar8 == '\0') {
    fVar3 = F32LO(dVar4) - fVar6;
  }
  else {
    fVar3 = SUB84(dVar4 - dVar5,0);
  }
  if (cVar9 == '\0') {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),fVar3);
  }
  else {
    dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  fVar3 = F32HI(dVar4);
  if (cVar8 == '\0' && fVar3 < SUB84(dVar4,0)) {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(fVar3,*(undefined4 *)(unsigned)(ar4 + 0x38));
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) + fVar6;
    }
    else {
      fVar3 = SUB84(dVar4 + dVar5,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),fVar3);
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
    }
    if (cVar8 != '\0' || F32HI(dVar4) <= SUB84(dVar4,0)) {
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x2c)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),(*(float *)(fr0_ - 0x2c)));
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - fVar6,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - dVar5;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x38) = dVar4;
      }
    }
  }
  else {
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x1c)),SUB84(dVar4,0));
    }
    else {
      dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(F32HI(dVar4) + fVar6,SUB84(dVar4,0));
    }
    else {
      dVar4 = dVar4 + dVar5;
    }
    if (cVar9 == '\0') {
      *(int *)(unsigned)(ar4 + 0x38) = (int)(D2U(dVar4) >> 0x20);
    }
    else {
      *(double *)(unsigned)(ar4 + 0x38) = dVar4;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_338_036f00(ar4 + 0xd2c,a5,a6,ar7));
  uVar2 = SUB84(dVar5,0);
  if (iVar1 != 1) {
    (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x128))))(ar5,ar4 + 0x30,a6,ar7));
    if (cVar9 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x34),SUB84(dVar4,0));
      dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),uVar2);
    }
    else {
      dVar5 = *(double *)(unsigned)(ar4 + 0x34);
    }
    fVar6 = F32HI(dVar4);
    if (cVar8 == '\0') {
      bVar7 = fVar6 < F32HI(dVar5);
    }
    else {
      bVar7 = dVar4 < dVar5;
    }
    if (bVar7) {
      fVar6 = (*(float *)(fr0_ - 0x30));
      fVar3 = (*(float *)(fr0_ - 0x2c));
      if (cVar9 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x34);
        fVar3 = (*(float *)(fr0_ - 0x30));
      }
      if (cVar8 != '\0' || fVar3 <= fVar6) {
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x34) = (*(float *)(fr0_ - 0x30));
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x34) = CONCAT44((*(float *)(fr0_ - 0x2c)),(*(float *)(fr0_ - 0x30)));
        }
      }
    }
    else if (cVar9 == '\0') {
      *(float *)(unsigned)(ar4 + 0x34) = fVar6;
    }
    else {
      *(double *)(unsigned)(ar4 + 0x34) = dVar4;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x34)),0xffffffff,a6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,a6,ar7));
  return uVar2;
}

__asm__(".globl _CAnimal_m7_036d7c\n.set _CAnimal_m7_036d7c, _CAnimal_m7_036d7c_def\n");
//@unit 8c036f00
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_338_036f00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x338 + ar4);
}

__asm__(".globl _get_field_338_036f00\n.set _get_field_338_036f00, _get_field_338_036f00_def\n");
//@unit 8c036f0c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036f0c_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036f0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = 0;
  ar5[1] = 0;
  ar5[2] = 0;
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0xba8);
  ar6[1] = *(undefined4 *)(unsigned)(ar4 + 0xbac);
  ar6[2] = *(undefined4 *)(unsigned)(ar4 + 0xbb0);
  return 0xbb0;
}

__asm__(".globl _FUN_8c036f0c\n.set _FUN_8c036f0c, _FUN_8c036f0c_def\n");
//@unit 8c036f50
#include "../decls.h"
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
  ring[rp++ & 255] = "get_field_300_036f50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(undefined4 *)(unsigned)(0x300 + ar4);
}

__asm__(".globl _get_field_300_036f50\n.set _get_field_300_036f50, _get_field_300_036f50_def\n");
//@unit 8c036f5c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c036f5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)) + 0x48))))
                    (((int *)(unsigned long)*(unsigned *)(unsigned)(0x308 + ar4)),ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c036f5c\n.set _FUN_8c036f5c, _FUN_8c036f5c_def\n");
//@unit 8c036f84
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c036f84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c036f84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(unsigned)(ar4 + 0x458) / 216000.0;
  *(float *)(unsigned)(ar4 + 0x438) = (*(undefined4 *)(unsigned)(unsigned)0x8c13367c) * fVar3;
  *(float *)(unsigned)(ar4 + 0x43c) = (*(undefined1 *)(unsigned)0x8c133680) * fVar3;
  *(float *)(unsigned)(ar4 + 0x440) = (*(undefined1 *)(unsigned)0x8c133684) * fVar3;
  *(float *)(unsigned)(ar4 + 0x444) = (*(undefined1 *)(unsigned)0x8c133688) * fVar3;
  iVar1 = *(int *)(unsigned)(ar4 + 0x458);
  *(int *)(unsigned)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x34bc0;
  if (0x34bc0 < iVar1 + 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c036f84\n.set _FUN_8c036f84, _FUN_8c036f84_def\n");
//@unit 8c037034
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
float * FUN_8c037034_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c037034";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float in_fr1 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02702c(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015510(*(int *)(unsigned)(sVar1 * 0x124 + *(int *)(unsigned)(ar4 + 0x328)) + 0x1e8,ar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0x70,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x348) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c);
  *(undefined4 *)(unsigned)(ar4 + 0x34c) = *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30);
  if (sVar1 < 3) {
    *(undefined4 *)(unsigned)(ar4 + 0x350) =
         *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30);
  }
  else {
    *(undefined4 *)(unsigned)(ar4 + 0x350) =
         *(undefined4 *)(unsigned)
          (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x344) + 0x2c) + 0x30) + 0x30) + 0x30);
  }
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x348) + 4) = uVar2;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34c) + 4) = uVar2;
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x374) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x374) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x378) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x37c) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x378) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(unsigned)(ar4 + 0x37c) = 0x3a040a00000;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a0) = (ulonglong)(uint)in_fr1;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x3a4) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x3a8) = 0x40a00000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x3a4) = (ulonglong)(uint)in_fr1;
    in_fr1 = 5.0;
    *(undefined8 *)(unsigned)(ar4 + 0x3a8) = 0x3a040a00000;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a788(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  iVar5 = (int)(short)uVar2;
  pfVar4 = (float *)(unsigned)0x4;
  if ((iVar5 < 5) && (-1 < iVar5)) {
    pfVar4 = (float *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c037170))[iVar5];
                    
    switch(iVar5) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x360) =
           *(undefined4 *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *(undefined4 *)(unsigned)(ar4 + 0x35c) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30);
      pfVar4 = (float *)(unsigned)0x46c;
      *(undefined1 *)(unsigned)(ar4 + 0x46c) = 0xff;
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x358) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c);
      pfVar4 = (float *)(unsigned)0x354;
      *(undefined4 *)(unsigned)(ar4 + 0x354) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                     0x30) + 0x2c);
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x360) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) + 0x2c) +
                                       0x30) + 0x30) + 0x30) + 0x2c);
      *(undefined4 *)(unsigned)(ar4 + 0x35c) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x2c);
      pfVar4 = (float *)(unsigned)(ar4 + 0x468);
      if (cVar7 == '\0') {
        in_fr1 = *pfVar4;
      }
      if (cVar6 == '\0' && 1.0 < in_fr1) {
        pfVar4 = (float *)(unsigned)0x468;
        if (cVar7 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x468) = (ulonglong)(uint)in_fr1;
        }
      }
      break;
    case 3:
      *(undefined4 *)(unsigned)(ar4 + 0x360) =
           *(undefined4 *)(unsigned)
            (*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x2c) + 0x2c) +
                                                         0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
            0x30);
      pfVar4 = (float *)(unsigned)0x46c;
      *(undefined1 *)(unsigned)(ar4 + 0x46c) = 0xff;
    }
  }
  return pfVar4;
}

__asm__(".globl _FUN_8c037034\n.set _FUN_8c037034, _FUN_8c037034_def\n");
//@unit 8c0372a0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_Tm1_Home_njd_0372a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Tm1_Home_njd_0372a2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 208; for (int i_ = 0; i_ < 208; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined **ar5_00;
  undefined1 *ar6_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    *(unsigned *)(unsigned)(iVar6 * 0x124 + -0x73d8202c) = ((undefined1 *)(unsigned)0x8c27d1fc);
  }
  *(unsigned *)0x8c27dfd8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1336b8));
  *(unsigned *)0x8c27dfdc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133718));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe0) = (*(undefined4 *)(unsigned)(unsigned)0x8c133694);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336ac);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfec) = (*(undefined4 *)(unsigned)(unsigned)0x8c133698);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336b4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13369c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff8) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e004) = 0x8c27eea4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e008) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e00c) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e018) = 0x8c27eebc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e01c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e020) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e02c) = 0x8c27eed4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e030) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e034) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e040) = 0x8c27ef4c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e088) = 0x8c27fd30;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e08c) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e090) = 0x3f800000;
  uVar4 = 0x8c27dfd4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e098) = (short)(int)(14400.0 / (0.5 / (*(undefined4 *)(unsigned)(unsigned)0x8c27e094)));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e098) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e098) = 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0a4) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0a8) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0ac) = 0;
  ar6_00 = ((undefined1 *)(unsigned)0x8c27e0b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0b0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0b4) = 0x41400000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e05c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13400c),((undefined1 *)(unsigned)0x8c27e0b0),0x8c27dfd4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e064,&(*(undefined4 *)(unsigned)(unsigned)0x8c13400c),ar6_00,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e074) = 0x8c27e5c0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e078) = 0x18;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e07c) = 0x8c27e62c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e080) = 0x18;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),0x8c27e62c,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0cc,((undefined1 *)(fr0_ - 0x14)),ar6_00,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x20)),uVar1,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0d8,((undefined1 *)(fr0_ - 0x20)),ar6_00,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar1,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0e4,((undefined1 *)(fr0_ - 0x2c)),ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0f4) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e0f4),0x42dc0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0c0) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e0c0),0x41c00000);
    dVar9 = CONCAT44D(0x3f000000,(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0f4) = 0xec42dc0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0c0) = 0xc841c00000;
    dVar9 = 3.99457418603154e-312;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e0a0),(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4));
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = uVar10;
  *(unsigned *)0x8c27e0fc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1337a0));
  *(unsigned *)0x8c27e100 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1337f8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e104) = (*(undefined4 *)(unsigned)(unsigned)0x8c13377c);
  uVar4 = 0x134;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e108) = (*(undefined4 *)(unsigned)(unsigned)0x8c133794);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e10c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133798);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e110) = (*(undefined4 *)(unsigned)(unsigned)0x8c133780);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e114) = (*(undefined4 *)(unsigned)(unsigned)0x8c13379c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e118) = (*(undefined4 *)(unsigned)(unsigned)0x8c133784);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e11c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e128) = 0x8c27efc4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e12c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133788);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e130) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e13c) = 0x8c27f030;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e140) = (*(undefined4 *)(unsigned)(unsigned)0x8c13378c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e144) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e150) = 0x8c27f09c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e154) = (*(undefined4 *)(unsigned)(unsigned)0x8c133790);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e158) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e164) = 0x8c27f114;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1ac) = 0x8c27fdd0;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = 0.55;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b0) = 0x3f0ccccd;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = 1.0;
    dVar9 = 5.493165366488029e-05;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4));
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4),0x3f0ccccd);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8),fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)(unsigned)0x8c27e1be),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc),(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8)));
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = F32HI(dVar9) / F32LO(dVar9);
    dVar9 = CONCAT44D(fVar7,SUB84(dVar9,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = (short)(int)dVar9;
  }
  uVar1 = 0x8c27dfd4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = SUB84(dVar9,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = 0x437a0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1cc) = 0x437a0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = 0;
  }
  else {
    *(unsigned *)0x8c27e1dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c134050));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d8) = 0x41900000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e180,&(*(undefined4 *)(unsigned)(unsigned)0x8c134050),0x8c27dfd4,0x134); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e188,&(*(undefined4 *)(unsigned)(unsigned)0x8c134050),uVar1,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e198) = 0x8c27e698;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e19c) = 0x16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1a0) = 0x8c27e6fc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1a4) = 0x16;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x38)),0x16,0x8c27dfd4,uVar4));
  uVar1 = 0x8c27e1f0;
  pcVar2 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e1f0,((undefined1 *)(fr0_ - 0x38)),((void *)0x8c023d8c),0x8c27e1f0));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x44)),pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e1fc,((undefined1 *)(fr0_ - 0x44)),pcVar2,uVar1));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e208,((undefined1 *)(fr0_ - 0x50)),pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,((undefined1 *)(fr0_ - 0x50)),uVar1));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e218) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e218),0x43200000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1e4) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e1e4),0x42200000);
    dVar9 = CONCAT44D(0x3f19999a,(*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e218) = 0x21043200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1e4) = 0x1ec42200000;
    dVar9 = 1.24825656389407e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e1c4),fVar7);
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = uVar10;
  *(unsigned *)0x8c27e220 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133878));
  *(unsigned *)0x8c27e224 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1338d4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e228) = (*(undefined4 *)(unsigned)(unsigned)0x8c133854);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e22c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13386c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e230) = (*(undefined4 *)(unsigned)(unsigned)0x8c133870);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e234) = (*(undefined4 *)(unsigned)(unsigned)0x8c133858);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e238) = (*(undefined4 *)(unsigned)(unsigned)0x8c133874);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e23c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13385c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e240) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e24c) = 0x8c27f18c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e250) = (*(undefined4 *)(unsigned)(unsigned)0x8c133860);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e254) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e260) = 0x8c27f240;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e264) = (*(undefined4 *)(unsigned)(unsigned)0x8c133864);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e268) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e274) = 0x8c27f2f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e278) = (*(undefined4 *)(unsigned)(unsigned)0x8c133868);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e27c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e288) = 0x8c27f36c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d0) = 0x8c27fe70;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
  }
  uVar4 = 0x30c;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc),(*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8));
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8),0x3f333333);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc),fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)(unsigned)0x8c27e2e2),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0),(*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc)));
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = F32HI(dVar9) / F32LO(dVar9);
    dVar9 = CONCAT44D(fVar7,SUB84(dVar9,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = (short)(int)dVar9;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = 1;
  }
  if (cVar12 == '\0') {
    uVar1 = SUB84(dVar9,0);
  }
  else {
    uVar1 = 0x43660000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f0) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2ec) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = (float)uVar1;
  }
  else {
    (*(uint *)(unsigned)0x8c27e300) = 0x300;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 0.92;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2fc) = 0x41ec0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d4) = 0x3f6b851f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8);
  Class_129920_m0_015248
            (0x8c27e2a4,&(*(undefined4 *)(unsigned)(unsigned)0x8c134094),((void *)0x8c015248),0x30c,(*(undefined4 *)(fr0_ - 0xcc)));
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c134094);
  Class_129920_m0_015248
            (0x8c27e2ac,&(*(undefined4 *)(unsigned)(unsigned)0x8c134094),((void *)0x8c015248),uVar4,(*(undefined4 *)(fr0_ - 0xcc)));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2bc) = 0x8c27e760;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c0) = 0x17;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c4) = 0x8c27e7c8;
  uVar1 = 0x2f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c8) = 0x17;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x5c)),ar5_00,0x2f4,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e314,((undefined1 *)(fr0_ - 0x5c)),uVar1,uVar4));
  uVar1 = 0xffffffff;
  pcVar2 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,((void *)0x8c014a34),uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar1,pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e320,((undefined1 *)(fr0_ - 0x68)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x74)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e32c,((undefined1 *)(fr0_ - 0x74)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x74)),0xffffffff,pcVar2,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e33c) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e33c),0x435c0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e308) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e308),0x42820000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e33c) = 0x334435c0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e308) = 0x31042820000;
  }
  uVar4 = 0x8c27dfd4;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x3f4ccccd,(*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4));
  }
  else {
    dVar9 = 1.68963334622396e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e8),fVar7);
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = uVar10;
  *(unsigned *)0x8c27e344 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133958));
  *(unsigned *)0x8c27e348 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133aec));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e34c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133934);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e350) = (*(undefined4 *)(unsigned)(unsigned)0x8c13394c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e354) = (*(undefined4 *)(unsigned)(unsigned)0x8c133950);
  uVar5 = 900;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e358) = (*(undefined4 *)(unsigned)(unsigned)0x8c133938);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e35c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133954);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e360) = (*(undefined4 *)(unsigned)(unsigned)0x8c13393c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e364) = 0x11;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e370) = 0x8c27f3e4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e374) = (*(undefined4 *)(unsigned)(unsigned)0x8c133940);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e378) = 0x11;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e384) = 0x8c27f4b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e388) = (*(undefined4 *)(unsigned)(unsigned)0x8c133944);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e38c) = 10;
  uVar1 = 0x8c27dfd4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e398) = 0x8c27f57c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e39c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133948);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3a0) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3ac) = 0x8c27f5f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3f4) = 0x8c27ff10;
  uVar10 = CONCAT44(0x3f800000,fVar7);
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e3fc) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e3fc),0x3f800000);
  }
  else {
    fVar7 = 240.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e3fc) = uVar10;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e414) = 0x43700000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e410) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e40c) = 0x3a1d4952;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e418) = 0.0;
    fVar8 = fVar7;
  }
  else {
    *(unsigned *)0x8c27e424 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8));
    fVar8 = 0.8;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e418) = fVar7;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e420) = 0x427e0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e41c) = 0x42600000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d4) = 0x3f4ccccd;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = fVar8;
  }
  ({ unsigned long ri0_ = (unsigned long)(0x8c27dfd4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e3c8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),0x8c27dfd4,900); });
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e3d0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),uVar1,uVar5); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e0) = 0x8c27e830;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e4) = 0x65;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e8) = 0x8c27e9d0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3ec) = 0x65;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x80)),0x414,((void *)0x8c023d68),uVar5));
  uVar3 = 0x8c27e438;
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e438,((undefined1 *)(fr0_ - 0x80)),0x8c27e438,uVar5));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar1,uVar3,uVar5));
  uVar5 = 0x470;
  uVar3 = 0x8c27e444;
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e444,((undefined1 *)(fr0_ - 0x8c)),0x470,0x8c27e444));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),uVar1,uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e450,((undefined1 *)(fr0_ - 0x98)),uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,uVar5,uVar3));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e460) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e460),0x43660000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e42c) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e42c),0x42a00000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e460) = 0x45843660000;
    fVar8 = 80.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e42c) = 0x49442a00000;
  }
  *(unsigned *)0x8c27e468 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133ca8));
  *(unsigned *)0x8c27e46c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133e3c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e470) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c84);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e474) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c9c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e478) = (*(undefined4 *)(unsigned)(unsigned)0x8c133ca0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e47c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e480) = (*(undefined4 *)(unsigned)(unsigned)0x8c133ca4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e484) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e488) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e494) = 0x8c27f66c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e498) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e49c) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4a8) = 0x8c27f720;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4b0) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4bc) = 0x8c27f7d4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c98);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4c4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4d0) = 0x8c27f84c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e518) = 0x8c27ffb0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e520) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e520),0x3f800000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = fVar8;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = 270.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e520) = CONCAT44(0x3f800000,fVar8);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e538) = 0x43870000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e534) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e530) = 0x3a03126f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = 0.0;
  }
  else {
    *(unsigned *)0x8c27e548 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e544) = 0x42880000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e540) = 0x429a0000;
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e4ec,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),((void *)0x8c015248),uVar3); });
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e4f4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),((void *)0x8c015248),uVar3); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e504) = 0x8c27eb70;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e508) = 0x65;
  uVar5 = 0x538;
  uVar1 = 0x8c27ed10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e50c) = 0x8c27ed10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e510) = 0x65;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0xa4)),0x8c27ed10,0x538));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e55c,((undefined1 *)(fr0_ - 0xa4)),uVar1,uVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar1,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb0)),uVar4,uVar1,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e568,((undefined1 *)(fr0_ - 0xb0)),uVar1,uVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,((undefined1 *)(fr0_ - 0xb0)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xbc)),uVar4,((undefined1 *)(fr0_ - 0xbc)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e574,((undefined1 *)(fr0_ - 0xbc)),((undefined1 *)(fr0_ - 0xbc)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,((void *)0x8c014a34),uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e584) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e584),0x43870000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e550) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e550),0x42c80000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e584) = 0x56843870000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e550) = 0x8c27e59442c80000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e594) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e598) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e59c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a4) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a8) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5ac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5b0) = 0;
  return 0xffffffff;
}

__asm__(".globl _s_Tm1_Home_njd_0372a2\n.set _s_Tm1_Home_njd_0372a2, _s_Tm1_Home_njd_0372a2_def\n");
//@unit 8c0384f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int s_GRAPHICS_FROGMANLINE_0384fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_FROGMANLINE_0384fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar6_00;
  int ar6_01;
  undefined4 ar7_00;
  
  ar7_00 = 5;
  ar6_00 = 1;
  uVar1 = 6;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c280050); unsigned long t3_ = (unsigned long)(0x8c280180); unsigned long t4_ = (unsigned long)((*(undefined4 *)(unsigned)(unsigned)0x8c1340e0)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c0254d0(ar4,6,1,5); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129d04);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x490,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02ff6c(ar4 + 0x528,uVar1,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4 + 0x5c4,uVar1,ar6_00,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c135e5e)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4 + 0xc,uVar1,ar6_00,ar7_00); });
  *(undefined1 *)(unsigned)(ar4 + 0x524) = 0xff;
  ar6_01 = ar4 + 0x490;
  uVar1 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f532c(ar4,uVar1,ar6_01,ar7_00));
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c027224(ar4 + 0x5c4,uVar1,ar6_01,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_01,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
  *(int *)(unsigned)(ar4 + 0x308) = ar4 + 0x528;
  *(int *)(unsigned)(ar4 + 0x30c) = ar4 + 0x5c4;
  return ar4;
}

__asm__(".globl _s_GRAPHICS_FROGMANLINE_0384fa\n.set _s_GRAPHICS_FROGMANLINE_0384fa, _s_GRAPHICS_FROGMANLINE_0384fa_def\n");
//@unit 8c038648
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimal_m0_038648";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129d04);
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

__asm__(".globl _CAnimal_m0_038648\n.set _CAnimal_m0_038648, _CAnimal_m0_038648_def\n");
//@unit 8c0386d0
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 CAnimal_m2_0386d0_def(int ar4,uint ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_0386d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  undefined2 uVar8;
  
  cVar1 = *(char *)(unsigned)(ar4 + 0x524);
  if (cVar1 == -1) {
    piVar6 = ar6;
    piVar7 = ar7;
    uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
    uVar5 = uVar5 & 0xffff;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7); });
    uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
    uVar5 = uVar5 & 0xffff;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028ed4(ar4 + 0x21c,uVar5,piVar6,piVar7); });
    if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                (*(int *)(unsigned)(ar4 + 0x330),ar5,piVar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))
                (*(int *)(unsigned)(ar4 + 0x330),1,piVar6,piVar7));
      uVar5 = ar5;
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      piVar6 = ar6;
      piVar7 = ar7;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
    ar5 = uVar5;
    ar6 = piVar6;
    ar7 = piVar7;
    if (((ushort)uVar2 < 5) &&
       (iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_18_02d1a0(ar4 + 0x21c,uVar5,piVar6,piVar7)), ar5 = uVar5, ar6 = piVar6,
       ar7 = piVar7, -1 < iVar4)) {
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
    }
  }
  else if (cVar1 == '\0') {
    uVar5 = ar5;
    piVar6 = ar6;
    piVar7 = ar7;
    uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,ar5,ar6,ar7));
    uVar8 = (undefined2)(*(undefined4 *)(fr0_ - 0x48));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_c_02d1b8(ar4 + 0x21c,uVar5,piVar6,piVar7));
    uVar3 = (uVar3 & 0xffff) - iVar4;
    if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                (*(int *)(unsigned)(ar4 + 0x330),ar5,piVar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))
                (*(int *)(unsigned)(ar4 + 0x330),1,piVar6,piVar7));
      uVar5 = ar5;
      piVar7 = ar7;
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,piVar7));
      piVar6 = ar6;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xb4))))(ar4,uVar5,piVar6,piVar7));
    if (iVar4 != 0) {
      uVar5 = uVar3;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02c030(ar4 + 0x174,uVar3,ar7,piVar7));
      piVar6 = ar7;
    }
    iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02c518(ar4 + 0x174,uVar5,piVar6,piVar7));
    if (iVar4 == -1) {
      ar5 = 0x3c;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_0101e4(uVar3,0x3c,piVar6,piVar7));
      ar6 = piVar6;
      ar7 = piVar7;
      if (3 < iVar4) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
      }
    }
    else {
      uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c028ee4(ar5,uVar5,piVar6,piVar7));
      uVar2 = CONCAT22((short)uVar5,uVar8);
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028edc(ar4 + 0x21c,uVar5,piVar6,piVar7); });
      uVar8 = (undefined2)((uint)uVar2 >> 0x10);
      uVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c02602c(ar5,uVar5,piVar6,piVar7));
      ar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(CONCAT22(uVar8,(short)uVar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c028ed4(ar4 + 0x21c,ar5,piVar6,piVar7); });
      ar6 = piVar6;
      ar7 = piVar7;
    }
  }
  else if (cVar1 == '\x01') {
    piVar6 = ar7;
    (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,*(undefined4 *)(unsigned)(ar4 + 0x330),ar6,piVar6));
    *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
    ar6 = (int *)(unsigned)0x1b;
    uVar5 = 0x1a;
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0b9ed4(ar5,0x1a,0x1b,piVar6));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0f4d84(ar4,uVar5,ar6,piVar6));
    ar5 = uVar5;
    ar7 = piVar6;
  }
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _CAnimal_m2_0386d0\n.set _CAnimal_m2_0386d0, _CAnimal_m2_0386d0_def\n");
//@unit 8c038a10
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038a10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c038a10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr6 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0x5c) = in_fr4;
  *(undefined4 *)(unsigned)(ar4 + 0x60) = in_fr5;
  *(undefined4 *)(unsigned)(ar4 + 100) = in_fr6;
  return 1;
}

__asm__(".globl _FUN_8c038a10\n.set _FUN_8c038a10, _FUN_8c038a10_def\n");
//@unit 8c038a28
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_0_038a28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl _ret_const_0_038a28\n.set _ret_const_0_038a28, _ret_const_0_038a28_def\n");
//@unit 8c038a30
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_038a30";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_038a30\n.set _ret_const_1_038a30, _ret_const_1_038a30_def\n");
//@unit 8c038a38
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038a38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038a38\n.set _noop_038a38, _noop_038a38_def\n");
//@unit 8c038a3c
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038a3c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038a3c\n.set _noop_038a3c, _noop_038a3c_def\n");
//@unit 8c038a40
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038a40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038a40\n.set _noop_038a40, _noop_038a40_def\n");
//@unit 8c038a44
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038a44";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e34(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035338(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c038a44\n.set _FUN_8c038a44, _FUN_8c038a44_def\n");
//@unit 8c038aa4
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038aa4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4f0c(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03539c(ar4 + 0x2dc,ar5 + 0xd8,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c038aa4\n.set _FUN_8c038aa4, _FUN_8c038aa4_def\n");
//@unit 8c038b04
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c038b04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c038b04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_00;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c01538c(*(int *)(unsigned)(ar4 + 0x328) + 0x78,ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256328(0,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c25b5d0(0,ar5,ar6,ar7); });
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x58));
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
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x54));
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
    dVar3 = CONCAT44D(0x47800000,*(undefined4 *)(unsigned)(ar4 + 0x50));
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
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256b0c(0,ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256fec(0,ar5_00,ar6_00,ar7_00); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); FUN_8c256fec(0,ar5_00,ar6_00,ar7_00); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c015bb8(*(int *)(unsigned)(ar4 + 0x328) + 0x70,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c219a9a(uVar1,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c256210(1,ar5_00,ar6_00,ar7_00));
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c0f4b44(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5_00,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x34))))
                      (*(int *)(unsigned)(ar4 + 0x330),ar5_00,ar6_00,ar7_00));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038b04\n.set _FUN_8c038b04, _FUN_8c038b04_def\n");
//@unit 8c038c54
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038c54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); noop_038c8c(ar4,ar5,ar6,ar7); });
  uVar1 = 0;
  if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x5c))))
                      (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038c54\n.set _FUN_8c038c54, _FUN_8c038c54_def\n");
//@unit 8c038c8c
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038c8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038c8c\n.set _noop_038c8c, _noop_038c8c_def\n");
//@unit 8c038c90
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CFrogManEgg_NewChild_038c92";
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
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *(int *)(unsigned)(ar4 + 8)))))(ar4,0,a6,ar7));
  }
  return uVar1;
}

__asm__(".globl _s_CFrogManEgg_NewChild_038c92\n.set _s_CFrogManEgg_NewChild_038c92, _s_CFrogManEgg_NewChild_038c92_def\n");
//@unit 8c038d0c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038d0c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x330;
  *(undefined4 *)(unsigned)(0x330 + ar4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c038d0c\n.set _FUN_8c038d0c, _FUN_8c038d0c_def\n");
//@unit 8c038d18
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038d18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ff500(ar5,ar4 + 0x330,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038d18\n.set _FUN_8c038d18, _FUN_8c038d18_def\n");
//@unit 8c038d4c
#include "../decls.h"
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
  ring[rp++ & 255] = "s_CFrogManEgg_LoadGRReq_038d52";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(unsigned)(0x420 + ar4) == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(unsigned)(0x420 + ar4) == 1) {
    if (*(int *)(unsigned)(0x330 + ar4) == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1d95,
                 (&(*(undefined1 *)(unsigned)0x8c1340f4)) + 0x1da7,0,2));
      *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xdc + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                        (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
      if (iVar1 == 1) {
        *(undefined2 *)(unsigned)(0x41c + ar4) = 0;
        *(undefined4 *)(unsigned)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _s_CFrogManEgg_LoadGRReq_038d52\n.set _s_CFrogManEgg_LoadGRReq_038d52, _s_CFrogManEgg_LoadGRReq_038d52_def\n");
//@unit 8c038e1c
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_038e1c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_038e1c\n.set _ret_const_1_038e1c, _ret_const_1_038e1c_def\n");
//@unit 8c038e24
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038e24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_to_Load_CAnimal_LoadG_0284b8(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xe0 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038e24\n.set _FUN_8c038e24, _FUN_8c038e24_def\n");
//@unit 8c038e74
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038e74";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038e74\n.set _noop_038e74, _noop_038e74_def\n");
//@unit 8c038e78
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c038e78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  uVar1 = 0;
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xec + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                      (*(int *)(unsigned)(0x330 + ar4),ar5,0,ar7));
  }
  return uVar1;
}

__asm__(".globl _FUN_8c038e78\n.set _FUN_8c038e78, _FUN_8c038e78_def\n");
//@unit 8c038ec8
#include "../decls.h"
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
  ring[rp++ & 255] = "noop_038ec8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl _noop_038ec8\n.set _noop_038ec8, _noop_038ec8_def\n");
//@unit 8c038ecc
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 s_FROG_EGG_038ecc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_FROG_EGG_038ecc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ffb0) = 0;
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ffac) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1340ec);
    *(undefined ***)(unsigned)(iVar1 * 0x124 + -0x73d7ffa8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1340f0);
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ffa4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1340e4);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ffa0) = 0;
    *(unsigned *)(unsigned)(iVar1 * 0x124 + -0x73d7ff9c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1340e8);
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff98) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff94) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff10) = 0x8c28019c;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff0c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff08) = 0x8c2801ac;
    *(undefined2 *)(unsigned)(iVar1 * 0x124 + -0x73d7ff04) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fefc) = 0x8c28029c;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fef4) = 0x3f800000;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fee4) = 0x3ca3d70a;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fee0) = 0x3f4ccccd;
    *(undefined4 *)(unsigned)(iVar1 * 0x124 + -0x73d7fedc) = 0x42c80000;
  }
  for (iVar1 = 0; iVar1 < 1; iVar1 = iVar1 + 1) {
    *(undefined2 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe80) = 0xffff;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe7c) = 1;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe78) = 0;
    *(undefined4 *)(unsigned)(iVar1 * 0x10 + -0x73d7fe74) = 0;
  }
  return 1;
}

__asm__(".globl _s_FROG_EGG_038ecc\n.set _s_FROG_EGG_038ecc, _s_FROG_EGG_038ecc_def\n");
//@unit 8c0390f4
#include "../decls.h"
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
  ring[rp++ & 255] = "CAnimal_m3_0390f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _CAnimal_m3_0390f4\n.set _CAnimal_m3_0390f4, _CAnimal_m3_0390f4_def\n");
//@unit 8c03911c
#include "../decls.h"
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
  ring[rp++ & 255] = "ret_const_1_03911c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl _ret_const_1_03911c\n.set _ret_const_1_03911c, _ret_const_1_03911c_def\n");
//@unit 8c039124
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c039124_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c039124";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  char cVar6;
  
  cVar6 = '\0';
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125ce0),((void *)0x8c022ce8),ar6,ar7));
  uVar3 = 0x8c27df98;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27df98,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125cf0),pcVar2,uVar3,ar7));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27dfa4,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125d00),pcVar2,((void *)0x8c022ce8),ar7));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27dfb0,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(((undefined1 *)(unsigned)0x8c125d10),pcVar2,((void *)0x8c022ce8),ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27dfbc,ar7));
  if (cVar6 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125d20) = CONCAT44((*(undefined1 *)(unsigned)0x8c125d24),0x800000);
                    
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c125d20) = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  ({ unsigned long t0_ = (unsigned long)(5); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27dfd4,((void *)0x8c02452c),((void *)0x8c03a4ac),0x124); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a484),0x8c27dfc8,uVar1));
  uVar1 = 0x10;
  ({ unsigned long t0_ = (unsigned long)(2); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(((undefined1 *)(unsigned)0x8c27e594),((void *)0x8c024824),((void *)0x8c03a454),0x10); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a430),0x8c27e588,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x18); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e5c0,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a40c),0x8c27e5b4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x18); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e62c,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a3b8),0x8c27e620,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x16); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e698,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a394),0x8c27e68c,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x16); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e6fc,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a370),0x8c27e6f0,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x17); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e760,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a34c),0x8c27e754,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x17); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e7c8,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a328),0x8c27e7bc,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x65); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e830,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a304),0x8c27e824,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x65); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27e9d0,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a2e0),0x8c27e9c4,uVar1));
  uVar1 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x65); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27eb70,((void *)0x8c015b94),((void *)0x8c0247b0),4); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a2bc),0x8c27eb64,uVar1));
  uVar4 = 4;
  ({ unsigned long t0_ = (unsigned long)(0x65); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(0x8c27ed10,((void *)0x8c015bc8),((void *)0x8c03a3dc),4); });
  uVar1 = 0x8c27ed04;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(0,((void *)0x8c03a298),0x8c27ed04,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f8d0,((void *)0x8c022ce8),uVar1,uVar4));
  uVar3 = 0x8c27f8c4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f8c4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f8ec,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27f8e0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f8e0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f908,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27f8fc;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f8fc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f924,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27f918;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f918,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f940,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27f934;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f934,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f95c,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27f950;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f950,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f978,pcVar2,uVar3,uVar4));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f96c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f994,pcVar2,((void *)0x8c022ce8),uVar4));
  uVar3 = 0x8c27f988;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f988,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f9b0,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c27f9a4;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f9a4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f9cc,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c27f9c0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f9c0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27f9e8,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c27f9dc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f9dc,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa04,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c27f9f8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27f9f8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa20,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c27fa14;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fa14,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa3c,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27fa30;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fa30,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa58,pcVar2,uVar3,uVar4));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fa4c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa74,pcVar2,((void *)0x8c022ce8),uVar4));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fa68,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fa90,pcVar2,((void *)0x8c022ce8),uVar4));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fa84,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27faac,pcVar2,((void *)0x8c022ce8),uVar4));
  uVar3 = 0x8c27faa0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27faa0,0x8c27faa0));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fac8,pcVar2,((void *)0x8c022ce8),uVar3));
  pcVar5 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fabc,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fae4,((void *)0x8c022ce8),0x8c27fae4,pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fad8,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb00,pcVar2,((void *)0x8c022ce8),pcVar5));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27faf4,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb1c,((void *)0x8c022ce8),0x8c27fb1c,uVar1));
  uVar3 = 0x8c27fb10;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fb10,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb38,0x8c27fb38,uVar3,uVar1));
  uVar4 = 0x8c27fb2c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c27fb2c,uVar1));
  pcVar5 = ((void *)0x8c022ce8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb54,pcVar2,uVar4,((void *)0x8c022ce8)));
  uVar3 = 0x8c27fb48;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fb48,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb70,0x8c27fb70,uVar3,pcVar5));
  uVar3 = 0x8c27fb64;
  pcVar5 = ((void *)0x8c022cb0);
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fb64,((void *)0x8c022cb0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fb8c,pcVar2,uVar3,pcVar5));
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fb80,pcVar5));
  uVar4 = 0x8c27fba8;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fba8,pcVar2,((void *)0x8c022ce8),0x8c27fba8));
  uVar3 = 0x8c27fb9c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fb9c,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fbc4,pcVar2,uVar3,uVar4));
  uVar4 = 0x8c27fbb8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fbb8,0x8c27fbb8));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fbe0,pcVar2,((void *)0x8c022ce8),uVar4));
  uVar3 = 0x8c27fbd4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fbd4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fbfc,((void *)0x8c022ce8),uVar3,uVar4));
  uVar3 = 0x8c27fbf0;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fbf0,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fc18,pcVar2,uVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fc0c,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fc34,((void *)0x8c022ce8),0x8c27fc34,uVar1));
  uVar3 = 0x8c27fc28;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fc28,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fc50,0x8c27fc50,uVar3,uVar1));
  uVar4 = 0x8c27fc44;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c022cb0),0x8c27fc44,uVar1));
  pcVar5 = ((void *)0x8c022ce8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fc6c,pcVar2,uVar4,((void *)0x8c022ce8)));
  uVar3 = 0x8c27fc60;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fc60,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fc88,0x8c27fc88,uVar3,pcVar5));
  uVar3 = 0x8c27fc7c;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fc7c,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fca4,0x8c27fca4,uVar3,pcVar5));
  uVar3 = 0x8c27fc98;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fc98,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fcc0,0x8c27fcc0,uVar3,pcVar5));
  uVar3 = 0x8c27fcb4;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fcb4,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fcdc,0x8c27fcdc,uVar3,pcVar5));
  uVar3 = 0x8c27fcd0;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fcd0,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fcf8,0x8c27fcf8,uVar3,pcVar5));
  uVar3 = 0x8c27fcec;
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fcec,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c27fd14,0x8c27fd14,uVar3,pcVar5));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c27fd08,pcVar5));
  uVar3 = 0x8c27f908;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c27f924); unsigned long t1_ = (unsigned long)(0x8c27f940); unsigned long t2_ = (unsigned long)(0x8c27f95c); unsigned long t3_ = (unsigned long)(
                       0x8c27f978); unsigned long t4_ = (unsigned long)(0x8c27f994); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c27fd30,0x8c27f8d0,0x8c27f8ec,0x8c27f908); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c27fd24,uVar3));
  uVar3 = 0x8c27f9e8;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c27fa04); unsigned long t1_ = (unsigned long)(0x8c27fa20); unsigned long t2_ = (unsigned long)(0x8c27fa3c); unsigned long t3_ = (unsigned long)(
                       0x8c27fa58); unsigned long t4_ = (unsigned long)(0x8c27fa74); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c27fdd0,0x8c27f9b0,0x8c27f9cc,0x8c27f9e8); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c27fdc4,uVar3));
  uVar3 = 0x8c27fac8;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c27fae4); unsigned long t1_ = (unsigned long)(0x8c27fb00); unsigned long t2_ = (unsigned long)(0x8c27fb1c); unsigned long t3_ = (unsigned long)(
                       0x8c27fb38); unsigned long t4_ = (unsigned long)(0x8c27fb54); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c27fe70,0x8c27fa90,0x8c27faac,0x8c27fac8); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c27fe64,uVar3));
  uVar3 = 0x8c27fba8;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c27fbc4); unsigned long t1_ = (unsigned long)(0x8c27fbe0); unsigned long t2_ = (unsigned long)(0x8c27fbfc); unsigned long t3_ = (unsigned long)(
                       0x8c27fc18); unsigned long t4_ = (unsigned long)(0x8c27fc34); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c27ff10,0x8c27fb70,0x8c27fb8c,0x8c27fba8); });
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c27ff04,uVar3));
  uVar4 = 0x8c27fc88;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c27fca4); unsigned long t1_ = (unsigned long)(0x8c27fcc0); unsigned long t2_ = (unsigned long)(0x8c27fcdc); unsigned long t3_ = (unsigned long)(
                       0x8c27fcf8); unsigned long t4_ = (unsigned long)(0x8c27fd14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c27ffb0,0x8c27fc50,0x8c27fc6c,0x8c27fc88); });
  uVar3 = 0x8c27ffa4;
  pcVar2 = ((void *)0x8c017084);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c27ffa4,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02452c(0x8c280050,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c280044;
  pcVar2 = ((void *)0x8c03a4ac);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a4ac),0x8c280044,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024824(0x8c280180,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c280174;
  pcVar2 = ((void *)0x8c03a454);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a454),0x8c280174,uVar1));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015b94(0x8c28019c,pcVar2,uVar3,uVar1));
  uVar4 = 0x8c280190;
  pcVar2 = ((void *)0x8c0247b0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar3,((void *)0x8c0247b0),0x8c280190,uVar1));
  pcVar5 = ((void *)0x8c015bc8);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015bc8(0x8c2801ac,pcVar2,uVar4,((void *)0x8c015bc8)));
  uVar3 = 0x8c2801a0;
  pcVar2 = ((void *)0x8c03a3dc);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c03a3dc),0x8c2801a0,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2801bc,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2801b0;
  pcVar5 = ((void *)0x8c022cb0);
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2801b0,((void *)0x8c022cb0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2801d8,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c2801cc;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2801cc,pcVar5));
  uVar4 = 0x8c2801f4;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c2801f4,pcVar2,uVar3,0x8c2801f4));
  uVar3 = 0x8c2801e8;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c2801e8,uVar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c280210,pcVar2,uVar3,uVar4));
  uVar4 = 0x8c280204;
  uVar3 = 0x8c280204;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280204,0x8c280204));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c28022c,pcVar2,uVar3,uVar4));
  uVar3 = 0x8c280220;
  pcVar2 = ((void *)0x8c022cb0);
  pcVar5 = ((void *)0x8c0101a0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280220,((void *)0x8c0101a0)));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c280248,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c28023c;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c28023c,pcVar5));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c280264,pcVar2,uVar3,pcVar5));
  uVar3 = 0x8c280258;
  pcVar2 = ((void *)0x8c022cb0);
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280258,uVar1));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_xyz(0x8c280280,pcVar2,uVar3,uVar1));
  (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c022cb0),0x8c280274,uVar1));
  uVar3 = 0x8c2801f4;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(0x8c280210); unsigned long t1_ = (unsigned long)(0x8c28022c); unsigned long t2_ = (unsigned long)(0x8c280248); unsigned long t3_ = (unsigned long)(
                       0x8c280264); unsigned long t4_ = (unsigned long)(0x8c280280); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 0)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 0)) - 24); FUN_8c017010(0x8c28029c,0x8c2801bc,0x8c2801d8,0x8c2801f4); });
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), global_list_push(uVar1,((void *)0x8c017084),0x8c280290,uVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c039124\n.set _FUN_8c039124, _FUN_8c039124_def\n");
//@unit 8c03a298
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a298";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27ed10,((void *)0x8c03a3dc),4,0x65); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a298\n.set _FUN_8c03a298, _FUN_8c03a298_def\n");
//@unit 8c03a2bc
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a2bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27eb70,((void *)0x8c0247b0),4,0x65); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a2bc\n.set _FUN_8c03a2bc, _FUN_8c03a2bc_def\n");
//@unit 8c03a2e0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a2e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e9d0,((void *)0x8c03a3dc),4,0x65); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a2e0\n.set _FUN_8c03a2e0, _FUN_8c03a2e0_def\n");
//@unit 8c03a304
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a304";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e830,((void *)0x8c0247b0),4,0x65); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a304\n.set _FUN_8c03a304, _FUN_8c03a304_def\n");
//@unit 8c03a328
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a328";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e7c8,((void *)0x8c03a3dc),4,0x17); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a328\n.set _FUN_8c03a328, _FUN_8c03a328_def\n");
//@unit 8c03a34c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a34c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e760,((void *)0x8c0247b0),4,0x17); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a34c\n.set _FUN_8c03a34c, _FUN_8c03a34c_def\n");
//@unit 8c03a370
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e6fc,((void *)0x8c03a3dc),4,0x16); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a370\n.set _FUN_8c03a370, _FUN_8c03a370_def\n");
//@unit 8c03a394
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a394";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e698,((void *)0x8c0247b0),4,0x16); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a394\n.set _FUN_8c03a394, _FUN_8c03a394_def\n");
//@unit 8c03a3b8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a3b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e62c,((void *)0x8c03a3dc),4,0x18); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a3b8\n.set _FUN_8c03a3b8, _FUN_8c03a3b8_def\n");
//@unit 8c03a3dc
#include "../decls.h"
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
  ring[rp++ & 255] = "free_if_nonnull_wrap_03a3dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_03a3dc\n.set _free_if_nonnull_wrap_03a3dc, _free_if_nonnull_wrap_03a3dc_def\n");
//@unit 8c03a40c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a40c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27e5c0,((void *)0x8c0247b0),4,0x18); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a40c\n.set _FUN_8c03a40c, _FUN_8c03a40c_def\n");
//@unit 8c03a430
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a430";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(((undefined1 *)(unsigned)0x8c27e594),((void *)0x8c03a454),0x10,2); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a430\n.set _FUN_8c03a430, _FUN_8c03a430_def\n");
//@unit 8c03a454
#include "../decls.h"
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
  ring[rp++ & 255] = "free_if_nonnull_wrap_03a454";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_03a454\n.set _free_if_nonnull_wrap_03a454, _free_if_nonnull_wrap_03a454_def\n");
//@unit 8c03a484
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a484";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c27dfd4,((void *)0x8c03a4ac),0x124,5); });
  return uVar1;
}

__asm__(".globl _FUN_8c03a484\n.set _FUN_8c03a484, _FUN_8c03a484_def\n");
//@unit 8c03a4ac
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03a4ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  code *ar5_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
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

__asm__(".globl _FUN_8c03a4ac\n.set _FUN_8c03a4ac, _FUN_8c03a4ac_def\n");
//@unit 8c03a5a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c03a5a4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03a5a4";
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

__asm__(".globl _FUN_8c03a5a4\n.set _FUN_8c03a5a4, _FUN_8c03a5a4_def\n");
//@unit 8c03a65c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
ulonglong * Class_12a03c_m6_03a65c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a03c_m6_03a65c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  ulonglong *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined *puVar10;
  undefined4 *ar7_00;
  undefined4 uVar11;
  int ar7_01;
  uint extraout_fr1 = 0;
  char cVar12;
  
  cVar12 = '\0';
  ar7_00 = &(*(undefined4 *)(fr0_ - 0x24));
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(unsigned)(unsigned)0x8c1364c8);
  (*(undefined4 *)(fr0_ - 0x20)) = (*(undefined1 *)(unsigned)0x8c1364cc);
  (*(undefined4 *)(fr0_ - 0x1c)) = (*(undefined1 *)(unsigned)0x8c1364d0);
  (*(undefined4 *)(fr0_ - 0x18)) = (*(undefined1 *)(unsigned)0x8c1364d4);
  (*(undefined4 *)(fr0_ - 0x14)) = (*(undefined1 *)(unsigned)0x8c1364d8);
  (*(undefined4 *)(fr0_ - 0x10)) = (*(undefined1 *)(unsigned)0x8c1364dc);
  puVar7 = ((undefined4 *)(unsigned)0x8c1364e0);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c1364e0);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c1364e4);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c1364e8);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c1364ec);
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c1364f0);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c1364f4);
  *(int *)(unsigned)(ar4 + 0x128) = ar5;
  iVar5 = ar5 * 0x18 + -0x73d7fc0c;
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c031b68(ar4,iVar5,((undefined4 *)(unsigned)0x8c1364e0),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c100(ar4,iVar5,puVar7,ar7_00));
  iVar5 = (int)(*(undefined1 *)(unsigned)0x8c280470);
  if ((*(undefined1 *)(unsigned)0x8c280470) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28046c) = 0;
    (*(undefined1 *)(unsigned)0x8c280470) = '\x01';
  }
  if (1 < (*(undefined4 *)(unsigned)(unsigned)0x8c28046c)) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28046c) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_assign(ar4 + 0x34c,(*(undefined4 *)(unsigned)(unsigned)0x8c28046c) * 0x10 + -0x73d7fc2c,0x8c2803d4,iVar5));
  (*(undefined4 *)(unsigned)(unsigned)0x8c28046c) = (*(undefined4 *)(unsigned)(unsigned)0x8c28046c) + 1;
  puVar1 = (ulonglong *)(unsigned)(ar4 + 0x7c);
  if (cVar12 == '\0') {
    *(undefined4 *)(unsigned)puVar1 = 0;
  }
  else {
    *puVar1 = (ulonglong)extraout_fr1;
  }
  uVar6 = (*(undefined1 *)(unsigned)0x8c13655c);
  uVar2 = (*(undefined1 *)(unsigned)0x8c136544);
  uVar8 = 4;
  if ((ar5 < 5) && (-1 < ar5)) {
                    
    switch((uint)ar5) {
    case 0:
      uVar6 = 10;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,10,4,iVar5));
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,iVar5));
      if (*(int *)(unsigned)(*piVar3 + 0x18) != 0) {
        uVar6 = 10;
        iVar5 = ar4 + 0xb0;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,10,((void *)0x8c03c0f0),iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,iVar5));
        uVar6 = 1;
        puVar7 = &(*(undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,puVar7,1));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar7,uVar6));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,((void *)0x8c015b4c),puVar7,uVar6));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1362f4),1));
      }
      uVar2 = (*(undefined1 *)(unsigned)0x8c1364fc);
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = (*(undefined1 *)(unsigned)0x8c1364f8);
      *(undefined4 *)(unsigned)(ar4 + 0x230) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x234) = (*(undefined4 *)(unsigned)(unsigned)0x8c136500);
      uVar2 = (*(undefined1 *)(unsigned)0x8c136508);
      puVar1 = (ulonglong *)(unsigned)(ar4 + 0x238);
      *(undefined4 *)(unsigned)puVar1 = (*(undefined1 *)(unsigned)0x8c136504);
      *(undefined4 *)(unsigned)(ar4 + 0x23c) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x240) = (*(undefined4 *)(unsigned)(unsigned)0x8c13650c);
      break;
    case 1:
      uVar6 = 7;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,4,iVar5));
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,iVar5));
      if (*(int *)(unsigned)(*piVar3 + 0x1c) != 0) {
        uVar6 = 7;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,((void *)0x8c03c0f0),iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,iVar5));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c13630c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13630c),1));
        uVar6 = 8;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        puVar10 = ((undefined1 *)(unsigned)0x8c136324);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136324),1));
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,5,puVar10,((void *)0x8c03c0f0)));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,((void *)0x8c015b4c),puVar10,pcVar9));
        uVar8 = 1;
        puVar7 = &(*(undefined4 *)(fr0_ - 0x24));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,puVar7,1));
        uVar6 = 5;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,5,puVar7,uVar8));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined4 *)(fr0_ - 0x20));
        uVar6 = 5;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,5,pcVar9,uVar8));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined4 *)(fr0_ - 0x14));
        uVar6 = 0x14;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x14,pcVar9,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,uVar8));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13633c),1));
      }
      uVar2 = (*(undefined1 *)(unsigned)0x8c136514);
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = (*(undefined1 *)(unsigned)0x8c136510);
      *(undefined4 *)(unsigned)(ar4 + 0x230) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x234) = (*(undefined4 *)(unsigned)(unsigned)0x8c136518);
      uVar2 = (*(undefined1 *)(unsigned)0x8c136520);
      *(undefined4 *)(unsigned)(ar4 + 0x238) = (*(undefined1 *)(unsigned)0x8c13651c);
      *(undefined4 *)(unsigned)(ar4 + 0x23c) = uVar2;
      puVar1 = (ulonglong *)(unsigned)(*(undefined4 *)(unsigned)(unsigned)0x8c136524);
      *(unsigned *)(unsigned)(ar4 + 0x240) = (*(undefined4 *)(unsigned)(unsigned)0x8c136524);
      break;
    case 2:
      uVar6 = 7;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,4,iVar5));
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,iVar5));
      if (*(int *)(unsigned)(*piVar3 + 0x1c) != 0) {
        uVar6 = 7;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,uVar8,iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,iVar5));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c136354);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136354),1));
        uVar6 = 8;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 1;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13636c),1));
        uVar6 = 0x15;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x15,((void *)0x8c03c0f0),uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,uVar8));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136384),1));
      }
      uVar2 = (*(undefined1 *)(unsigned)0x8c13652c);
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = (*(undefined1 *)(unsigned)0x8c136528);
      *(undefined4 *)(unsigned)(ar4 + 0x230) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x234) = (*(undefined4 *)(unsigned)(unsigned)0x8c136530);
      puVar1 = (*(undefined1 *)(unsigned)0x8c136538);
      *(undefined4 *)(unsigned)(ar4 + 0x238) = (*(undefined1 *)(unsigned)0x8c136534);
      *(unsigned *)(unsigned)(ar4 + 0x23c) = puVar1;
      *(unsigned *)(unsigned)(ar4 + 0x240) = (*(undefined4 *)(unsigned)(unsigned)0x8c13653c);
      break;
    case 3:
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = (*(undefined1 *)(unsigned)0x8c136540);
      *(undefined4 *)(unsigned)(ar4 + 0x230) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x234) = (*(undefined4 *)(unsigned)(unsigned)0x8c136548);
      uVar2 = (*(undefined1 *)(unsigned)0x8c136550);
      *(undefined4 *)(unsigned)(ar4 + 0x238) = (*(undefined1 *)(unsigned)0x8c13654c);
      *(undefined4 *)(unsigned)(ar4 + 0x23c) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x240) = (*(undefined4 *)(unsigned)(unsigned)0x8c136554);
      uVar6 = 0x41;
      pcVar9 = ((void *)0x8c03c0f0);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x41,((void *)0x8c03c0f0),iVar5));
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,iVar5));
      if (*(int *)(unsigned)(*piVar3 + 4) == 0) {
        puVar1 = (ulonglong *)(unsigned)0x0;
      }
      else {
        uVar6 = 0x41;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x41,*piVar3,iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),iVar5));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135ebc),0));
        uVar6 = 0x44;
        uVar8 = 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x44,0xb0,0x44));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,((void *)0x8c015b4c)));
        uVar6 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c135f04);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135f04),0));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x42,puVar10,uVar6));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar2,puVar10,((void *)0x8c015b4c)));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135ed4),0));
        uVar8 = 0x45;
        uVar6 = 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x45,0xb0,0x45));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,((void *)0x8c015b4c),uVar6,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c135f1c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135f1c),0));
        uVar6 = 0x43;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x43,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c135eec);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135eec),0));
        uVar6 = 0x46;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x46,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c135f34);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135f34),0));
        uVar6 = 7;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,((void *)0x8c015b4c)));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c135fdc);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135fdc),1));
        uVar6 = 8;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c135ff4);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135ff4),1));
        uVar6 = 0x4a;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        uVar8 = 1;
        puVar7 = ((undefined4 *)(unsigned)0x8c135f64);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined4 *)(unsigned)0x8c135f64),1));
        uVar6 = 0x4a;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar7,uVar8));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar2));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c135f68);
        uVar8 = 0x4a;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4a,pcVar9,uVar2));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,pcVar9,uVar2));
        iVar5 = *piVar3;
        *(undefined4 *)(unsigned)(iVar5 + 0x28) = (*(undefined1 *)(unsigned)0x8c135f74);
        uVar8 = 0x48;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,iVar5,uVar2));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,iVar5,uVar2));
        uVar8 = 0;
        puVar7 = ((undefined4 *)(unsigned)0x8c135f94);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined4 *)(unsigned)0x8c135f94),0));
        uVar6 = 0x48;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar7,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,uVar8));
        uVar8 = 1;
        puVar7 = ((undefined4 *)(unsigned)0x8c135f7c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined4 *)(unsigned)0x8c135f7c),1));
        uVar6 = 0x48;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar7,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar2));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c135f98);
        uVar8 = 0x48;
        iVar5 = ar4 + 0xb0;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x48,iVar5,uVar2));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,iVar5,uVar2));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c135fa4);
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x18,iVar5,uVar2));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar6,iVar5,uVar2));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c135fc4);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135fc4),1));
        uVar6 = 0x19;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x19,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 1;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,&(*(undefined4 *)(fr0_ - 0x24)),1));
        uVar6 = 0x12;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x12,0x12,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        uVar11 = 0;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c135fac),0));
        uVar8 = 99;
        uVar6 = 99;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,99,99,uVar11));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,uVar11));
        puVar1 = (ulonglong *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,&(*(undefined4 *)(fr0_ - 0x3c)),1));
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x238) = (*(undefined1 *)(unsigned)0x8c136558);
      *(undefined4 *)(unsigned)(ar4 + 0x23c) = uVar6;
      *(unsigned *)(unsigned)(ar4 + 0x240) = (*(undefined4 *)(unsigned)(unsigned)0x8c136560);
      uVar2 = (*(undefined1 *)(unsigned)0x8c136568);
      *(undefined4 *)(unsigned)(ar4 + 0x22c) = (*(undefined1 *)(unsigned)0x8c136564);
      *(undefined4 *)(unsigned)(ar4 + 0x230) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x234) = (*(undefined4 *)(unsigned)(unsigned)0x8c13656c);
      uVar6 = 0x41;
      iVar5 = ar4 + 0xb0;
      pcVar9 = ((void *)0x8c03c0f0);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x41,((void *)0x8c03c0f0),iVar5));
      piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,iVar5));
      if (*(int *)(unsigned)(*piVar3 + 4) == 0) {
        puVar1 = (ulonglong *)(unsigned)0x0;
      }
      else {
        uVar8 = 0x41;
        uVar6 = 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x41,0xb0,0x41));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,((void *)0x8c015b4c),uVar6,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c13600c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13600c),0));
        uVar6 = 0x44;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x44,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c136054);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136054),0));
        uVar6 = 0x42;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x42,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c136024);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136024),0));
        uVar6 = 0x45;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x45,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c13606c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13606c),0));
        uVar6 = 0x43;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x43,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c13603c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13603c),0));
        uVar6 = 0x46;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x46,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        uVar6 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c136084);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136084),0));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,7,puVar10,uVar6));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,((void *)0x8c015b4c),uVar2,uVar2));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c1362c4);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1362c4),1));
        uVar6 = 8;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,8,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar8));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c1362dc);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1362dc),1));
        uVar6 = 0x18;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x18,puVar10,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        uVar8 = 1;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136264),1));
        uVar6 = 0x19;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x19,0x19,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar2,uVar6,uVar8));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,&(*(undefined4 *)(fr0_ - 0x24)),1));
        uVar11 = 0x4a;
        uVar6 = 0x4a;
        uVar8 = 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4a,0xb0,0x4a));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,uVar11));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c136204);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136204),1));
        uVar6 = 0x4a;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4a,puVar10,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136208);
        uVar6 = 0x4a;
        uVar8 = 0xb0;
        iVar5 = ar4 + 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x4a,iVar5,0xb0));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,iVar5,uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c136214);
        uVar6 = 0x48;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,iVar5,uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,uVar8));
        uVar11 = 0;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136234),0));
        uVar6 = 0x48;
        uVar8 = 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,0xb0,uVar11));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,uVar11));
        puVar10 = ((undefined1 *)(unsigned)0x8c13621c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13621c),1));
        uVar6 = 0x48;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,puVar10,((void *)0x8c03c0f0)));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,pcVar9));
        iVar5 = *piVar3;
        puVar10 = ((undefined1 *)(unsigned)0x8c136234);
        *(undefined4 *)(unsigned)(iVar5 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136238);
        uVar6 = 0x48;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x48,((undefined1 *)(unsigned)0x8c136234),iVar5));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,iVar5));
        uVar2 = (*(undefined1 *)(unsigned)0x8c136244);
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c136244);
        uVar11 = 0x50;
        uVar8 = 0x50;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x50,0x50,uVar2));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,uVar11,uVar2));
        puVar10 = ((undefined1 *)(unsigned)0x8c13612c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13612c),1));
        uVar6 = 0x50;
        iVar5 = ar4 + 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x50,puVar10,iVar5));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,iVar5));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136130);
        uVar6 = 0x50;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x50,puVar10,iVar5));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,iVar5));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c13613c);
        uVar8 = 0x51;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x51,uVar2,iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,uVar2,iVar5));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c136144);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136144),1));
        uVar6 = 0x51;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x51,puVar10,uVar8));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,((void *)0x8c015b4c)));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136148);
        uVar6 = 0x51;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x51,puVar10,pcVar9));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,pcVar9));
        uVar2 = (*(undefined1 *)(unsigned)0x8c136154);
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c136154);
        uVar8 = 0x52;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x52,uVar2,pcVar9));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,uVar2,pcVar9));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c13615c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13615c),1));
        uVar6 = 0x52;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x52,puVar10,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        iVar5 = *piVar3;
        *(undefined4 *)(unsigned)(iVar5 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136160);
        uVar6 = 0x52;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x52,iVar5,piVar3));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,iVar5,piVar3));
        uVar2 = (*(undefined1 *)(unsigned)0x8c13616c);
        *(undefined4 *)(unsigned)(*piVar4 + 0x28) = (*(undefined1 *)(unsigned)0x8c13616c);
        uVar8 = 0x53;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x53,uVar2,piVar3));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,uVar2,piVar3));
        uVar8 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c13609c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13609c),1));
        uVar6 = 0x53;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x53,puVar10,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar10,uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c1360a0);
        uVar6 = 0x53;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x53,piVar3,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,piVar3,uVar8));
        iVar5 = *piVar3;
        *(undefined4 *)(unsigned)(iVar5 + 0x28) = (*(undefined1 *)(unsigned)0x8c1360ac);
        uVar6 = 0x54;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x54,iVar5,piVar3));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,piVar3));
        uVar6 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c1360b4);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1360b4),1));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x54,puVar10,uVar6));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar2,puVar10,uVar6));
        iVar5 = *piVar3;
        *(undefined4 *)(unsigned)(iVar5 + 0x1c) = (*(undefined1 *)(unsigned)0x8c1360b8);
        uVar6 = 0x54;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x54,iVar5,piVar3));
        piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,iVar5,piVar3));
        uVar2 = (*(undefined1 *)(unsigned)0x8c1360c4);
        *(undefined4 *)(unsigned)(*piVar4 + 0x28) = (*(undefined1 *)(unsigned)0x8c1360c4);
        uVar6 = 0x55;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x55,uVar2,piVar3));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,piVar3));
        uVar8 = 1;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1360cc),1));
        uVar6 = 0x55;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x55,((void *)0x8c03c0f0),uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,uVar8));
        uVar2 = (*(undefined1 *)(unsigned)0x8c1360d0);
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c1360d0);
        uVar6 = 0x55;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x55,0x55,uVar2));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar2));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c1360dc);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x58,pcVar9,uVar2));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar2,pcVar9,((void *)0x8c015b4c)));
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1361d4),1));
        uVar6 = 0x58;
        uVar8 = 0xb0;
        iVar5 = ar4 + 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x58,iVar5,0xb0));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,iVar5,uVar8));
        ar7_01 = *piVar3;
        *(undefined4 *)(unsigned)(ar7_01 + 0x1c) = (*(undefined1 *)(unsigned)0x8c1361d8);
        uVar6 = 0x58;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x58,iVar5,ar7_01));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,iVar5,ar7_01));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c1361e4);
        uVar8 = 0x5c;
        uVar6 = 0x5c;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x5c,0x5c,ar7_01));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar8,ar7_01));
        uVar8 = 1;
        puVar7 = ((undefined1 *)(unsigned)0x8c13627c);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13627c),1));
        uVar6 = 0x5c;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x5c,puVar7,uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar7,uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136280);
        iVar5 = ar4 + 0xb0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(iVar5,0x5c,puVar7,iVar5));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar2,puVar7,iVar5));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c13628c);
        uVar6 = 0x5b;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x5b,puVar7,iVar5));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),iVar5));
        uVar8 = 1;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c136294),1));
        uVar6 = 0x5b;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x5b,((void *)0x8c03c0f0),uVar8));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,uVar8));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c136298);
        uVar6 = 0x5b;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x5b,uVar2,uVar8));
        pcVar9 = ((void *)0x8c015b4c);
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,((void *)0x8c015b4c),uVar2));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c1362a4);
        uVar8 = 0x4c;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4c,pcVar9,uVar2));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,pcVar9,uVar2));
        uVar11 = 1;
        puVar7 = ((undefined1 *)(unsigned)0x8c1362ac);
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c1362ac),1));
        uVar6 = 0x4c;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4c,puVar7,uVar11));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,puVar7,uVar11));
        *(undefined4 *)(unsigned)(*piVar3 + 0x1c) = (*(undefined1 *)(unsigned)0x8c1362b0);
        uVar6 = 0x4c;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x4c,puVar7,uVar11));
        piVar3 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,uVar2,uVar11));
        *(undefined4 *)(unsigned)(*piVar3 + 0x28) = (*(undefined1 *)(unsigned)0x8c1362bc);
        uVar8 = 0x12;
        uVar6 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,0x12,uVar2,uVar11));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar6,uVar8,uVar2,uVar11));
        uVar8 = 0;
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,((undefined1 *)(unsigned)0x8c13624c),0));
        uVar6 = 99;
        pcVar9 = ((void *)0x8c03c0f0);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03c0f0(ar4 + 0xb0,99,((void *)0x8c03c0f0),uVar8));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), deref_u32(uVar2,uVar6,pcVar9,uVar8));
        puVar1 = (ulonglong *)(unsigned)(vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034a70(ar4 + 0xb0,uVar2,&(*(undefined4 *)(fr0_ - 0x3c)),1));
      }
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12a03c_m6_03a65c\n.set _Class_12a03c_m6_03a65c, _Class_12a03c_m6_03a65c_def\n");
//@unit 8c03c0f0
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03c0f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(int *)(unsigned)(ar4 + 0x14) + ar5 * 4;
}

__asm__(".globl _FUN_8c03c0f0\n.set _FUN_8c03c0f0, _FUN_8c03c0f0_def\n");
//@unit 8c03c100
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03c100_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03c100";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c314(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
  *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 800) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x318) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x304) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x220) = 0x41a00000;
    *(undefined4 *)(unsigned)(ar4 + 0x224) = 0x42340000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x220) = 0x22441a00000;
    in_fr1 = 0x42340000;
    *(undefined8 *)(unsigned)(ar4 + 0x224) = 0x2e842340000;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x2f8) = 0x14;
  *(undefined4 *)(unsigned)(ar4 + 0x68) = 0;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 600,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x2d4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022d04(ar4 + 0x2a8,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x298) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
  *(undefined ***)(unsigned)(ar4 + 0x1c8) = &(*(undefined4 *)(unsigned)(unsigned)0x8c1363ec);
  *(undefined4 *)(unsigned)(ar4 + 0x1cc) = 0x36;
  *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x340) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x340) = CONCAT44(0x3f800000,in_fr1);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x288) = 0;
  *(undefined4 *)(unsigned)(ar4 + 700) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x2f0) = 0xffffffff;
  *(undefined4 *)(unsigned)(ar4 + 0x2f4) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2e4) = 0x3f800000;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2e4) = CONCAT44(0x3f800000,in_fr1);
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand_range(ar4,0,100,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x33c) = uVar1;
  *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
  return 0x348;
}

__asm__(".globl _FUN_8c03c100\n.set _FUN_8c03c100, _FUN_8c03c100_def\n");
//@unit 8c03c314
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03c314_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03c314";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_fr4 = 0;
  
  *(undefined4 *)(unsigned)(ar4 + 0xa4) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x94) = in_fr4;
  return 0x94;
}

__asm__(".globl _FUN_8c03c314\n.set _FUN_8c03c314, _FUN_8c03c314_def\n");
//@unit 8c03c32c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12a03c_m0_03c32c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a03c_m0_03c32c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(undefined4 *)(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)(unsigned)0x0) {
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

__asm__(".globl _Class_12a03c_m0_03c32c\n.set _Class_12a03c_m0_03c32c, _Class_12a03c_m0_03c32c_def\n");
//@unit 8c03c40c
#include "../decls.h"
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
  ring[rp++ & 255] = "Class_12a03c_m7_03c40c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031684(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(0x2e8 + ar4) = 0;
  iVar1 = 0x178;
  *(undefined4 *)(unsigned)(0x178 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _Class_12a03c_m7_03c40c\n.set _Class_12a03c_m7_03c40c, _Class_12a03c_m7_03c40c_def\n");
//@unit 8c03c43c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12a03c_m1_03c43c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a03c_m1_03c43c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  uint *ar5_01;
  float fVar3;
  double in_dr0 = 0;
  double dVar4;
  float fVar5;
  double in_dr14 = 0;
  undefined8 in_xd0 = 0;
  double in_xd14 = 0;
  bool bVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_ctor_zero(&(*(uint *)(fr0_ - 0x28)),ar5,ar6,ar7));
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 180)), Class_129cbc_m1_031598(ar4,ar5,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x244) = ar5[6];
  if ((ar5[4] == 0) || (ar5[4] == 2)) {
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(0x43fa0000,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = 1.3411048382276983e-08;
    }
    (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03207c(ar4,ar5_00,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0324ac(ar4,ar5_00,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), pure_virtual_stub(ar4,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(ar4 + 0x178) == 1) && (iVar1 != 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c02f2c0(*ar5,iVar1,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x48))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x38)),ar4 + 0x90,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x58))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x48)),ar4 + 0x6c,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x68))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x58)),ar4 + 0x2a8,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(ar4 + 4,((undefined1 *)(fr0_ - 0x68)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x68)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x58)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x48)),0xffffffff,ar6,ar7));
  ar5_01 = (uint *)(unsigned)0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7));
  if ((((ar5[4] == 0) || (ar5[4] == 2)) && (*(int *)(unsigned)(ar4 + 0x124) != 0x18)) &&
     ((*(int *)(unsigned)(ar4 + 0x124) != 2 && (*(int *)(unsigned)(ar4 + 0x334) != 1)))) {
    (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20))
      ;
      dVar4 = CONCAT44D(0x3dcccccd,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar4 = 2.9975963366641684e+19;
      in_xd14 = in_dr0;
    }
    if (cVar7 == '\0') {
      in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) -
                                 F32LO(dVar4) * F32HI(dVar4));
    }
    else {
      in_dr14 = in_dr14 - dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 8),*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      in_dr0 = *(double *)(unsigned)(ar4 + 8);
    }
    if (cVar7 == '\0') {
      fVar5 = F32HI(in_dr0);
      fVar3 = F32LO(in_dr0) + fVar5;
      in_dr0 = CONCAT44D(fVar5,fVar3);
      bVar6 = SUB84(in_dr14,0) < fVar3;
    }
    else {
      in_dr0 = in_dr0 + in_dr0;
      fVar3 = F32LO(in_dr0);
      bVar6 = in_dr14 < in_dr0;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar3);
      }
      else {
        in_dr0 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) - F32HI(in_dr0));
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 8) = SUB84(in_dr14,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 8) = in_xd14;
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_026024(ar5[6],ar5_01,ar6,ar7));
  if (iVar1 == 0) {
    if (cVar8 == '\0') {
      in_dr14 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8),SUB84(in_dr14,0));
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0xc),SUB84(in_dr0,0));
    }
    else {
      in_dr14 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8);
      dVar4 = *(double *)(unsigned)(ar4 + 0xc);
    }
    if (cVar7 == '\0') {
      in_dr14 = CONCAT44D(F32HI(in_dr14) +
                                 F32HI(dVar4),SUB84(in_dr14,0));
    }
    else {
      in_dr14 = in_dr14 + dVar4;
    }
    if (cVar8 == '\0') {
      dVar4 = CONCAT44D(0x3f99999a,*(undefined4 *)(unsigned)(ar4 + 0x48));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x48);
      dVar4 = 1.2986509618072377e+23;
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
      in_dr14 = CONCAT44D(F32HI(in_dr14) + fVar3,SUB84(in_dr14,0));
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
      in_dr14 = in_dr14 + dVar4 * dVar4;
    }
    if (cVar8 == '\0') {
      in_dr0 = CONCAT44D(0x44bb8000,fVar3);
    }
    else {
      in_dr0 = 6.28680480336352e-312;
    }
    fVar3 = F32HI(in_dr14);
    if (cVar7 == '\0') {
      bVar6 = F32HI(in_dr0) < fVar3;
    }
    else {
      bVar6 = in_dr0 < in_dr14;
    }
    if (bVar6) {
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(ar4 + 0xc));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0xc);
        in_dr0 = 6.28680480336352e-312;
      }
      fVar5 = F32HI(in_dr0);
      if (cVar7 == '\0') {
        fVar3 = fVar3 - fVar5;
        in_dr14 = CONCAT44D(fVar3,SUB84(in_dr14,0));
        in_dr0 = CONCAT44D(fVar5,F32LO(in_dr0) - fVar3);
      }
      else {
        in_dr14 = in_dr14 - in_dr0;
        in_dr0 = in_dr0 - in_dr14;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0xc) = SUB84(in_dr0,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
      }
    }
  }
  if (*(int *)(unsigned)(ar4 + 0x128) < 3) {
    if (((*(int *)(unsigned)(ar4 + 0x124) != 0x2e) && (*(int *)(unsigned)(ar4 + 0x124) != 0x18)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 2)) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x78))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x78)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x78)),0xffffffff,ar6,ar7));
      fVar3 = (*(float *)(fr0_ - 0x20));
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(float *)(fr0_ - 0x20)));
        fVar3 = 0.0;
      }
      if (cVar7 == '\0' && fVar3 < 0.0) {
        if (cVar8 == '\0') {
          fVar3 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8),fVar3);
        }
        else {
          dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8);
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar4) - F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 0xc) = fVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xc) = in_xd0;
        }
      }
      if (cVar8 == '\0') {
        dVar4 = (double)(ulonglong)(*(uint *)(fr0_ - 0x28));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x24)),(*(uint *)(fr0_ - 0x28)));
        dVar4 = 0.0;
      }
      if (cVar7 == '\0' && SUB84(dVar4,0) < 0.0) {
        if (cVar8 == '\0') {
          dVar4 = 0.0;
        }
        else {
          in_xd0 = 0;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]),SUB84(dVar4,0));
        }
        else {
          dVar4 = *((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        }
        if (cVar7 == '\0') {
          fVar3 = F32HI(dVar4);
          dVar4 = CONCAT44D(fVar3,F32LO(dVar4) - fVar3);
        }
        else {
          dVar4 = dVar4 - dVar4;
        }
        if (cVar8 == '\0') {
          *(int *)(unsigned)(ar4 + 4) = SUB84(dVar4,0);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 4) = in_xd0;
        }
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x88))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x88)),ar6,ar7));
      ar5_01 = (uint *)(unsigned)0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x88)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c314(ar4,ar5_01,ar6,ar7));
      if ((*(int *)(unsigned)(ar4 + 0x124) != 0x18) && (*(int *)(unsigned)(ar4 + 0x124) != 2)) {
        ar5_01 = &(*(uint *)(fr0_ - 0x28));
        (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
        (*(int *)(fr0_ - 0xa8)) = SUB84(dVar4,0);
        (*(int *)(fr0_ - 0xa4)) = (int)(D2U(dVar4) >> 0x20);
        if (cVar8 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
          dVar4 = CONCAT44D(0x3e99999a,(*(int *)(fr0_ - 0xa8)));
          (*(int *)(fr0_ - 0xa8)) = (*(int *)(fr0_ - 0xa4));
          (*(int *)(fr0_ - 0xa4)) = iVar1;
        }
        else {
          in_xd14 = *(double *)(unsigned)(ar4 + 0x48);
          dVar4 = 2.97598305018595e-312;
        }
        if (cVar7 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) * F32HI(dVar4));
        }
        else {
          in_dr14 = in_dr14 * dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa8)),SUB84(dVar4,0));
        }
        else {
          dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa4)),(*(int *)(fr0_ - 0xa8)));
        }
        if (cVar7 == '\0') {
          in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                     F32LO(in_dr14) + F32HI(dVar4));
        }
        else {
          in_dr14 = in_dr14 + dVar4;
        }
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
        }
        else {
          dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
        }
        if (cVar7 == '\0') {
          bVar6 = F32HI(dVar4) < SUB84(in_dr14,0);
        }
        else {
          bVar6 = dVar4 < in_dr14;
        }
        if (bVar6) {
          if (cVar8 == '\0') {
            dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
          }
          else {
            dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
          }
          if (cVar7 == '\0') {
            fVar3 = F32LO(in_dr14) - F32HI(dVar4);
          }
          else {
            fVar3 = SUB84(in_dr14 - dVar4,0);
          }
          if (cVar8 == '\0') {
            *(float *)(unsigned)(ar4 + 8) = fVar3;
          }
          else {
            *(double *)(unsigned)(ar4 + 8) = in_xd14;
          }
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031748(ar4,ar5_01,ar6,ar7));
        }
      }
    }
  }
  else if ((ar5[4] == 0) || (ar5[4] == 2)) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x98))); *(unsigned *)((((unsigned long)(fr0_ - 180)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 180)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 4,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_assign(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x98)),ar6,ar7));
    ar5_01 = (uint *)(unsigned)0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(((undefined1 *)(fr0_ - 0x98)),0xffffffff,ar6,ar7));
    if ((*(int *)(unsigned)(ar4 + 0x124) != 2) && (*(int *)(unsigned)(ar4 + 0x334) != 1)) {
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c03c314(ar4,ar5_01,ar6,ar7));
      ar5_01 = &(*(uint *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],ar5_01,ar6,ar7));
      (*(undefined4 *)(fr0_ - 0xac)) = SUB84(in_dr0,0);
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      if (cVar8 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
        dVar4 = CONCAT44D(0x3e99999a,(*(undefined4 *)(fr0_ - 0xac)));
        (*(undefined4 *)(fr0_ - 0xac)) = uVar2;
      }
      else {
        in_xd14 = *(double *)(unsigned)(ar4 + 0x48);
        dVar4 = 2.97598305018595e-312;
        (*(int *)(fr0_ - 0xa8)) = uVar2;
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) * F32HI(dVar4));
      }
      else {
        in_dr14 = in_dr14 * dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0xac)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(int *)(fr0_ - 0xa8)),(*(undefined4 *)(fr0_ - 0xac)));
      }
      if (cVar7 == '\0') {
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   F32LO(in_dr14) + F32HI(dVar4));
      }
      else {
        in_dr14 = in_dr14 + dVar4;
      }
      if (cVar8 == '\0') {
        dVar4 = CONCAT44D((*(undefined4 *)(fr0_ - 0x24)),SUB84(dVar4,0));
      }
      else {
        dVar4 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
      }
      if (cVar7 == '\0') {
        bVar6 = F32HI(dVar4) < SUB84(in_dr14,0);
      }
      else {
        bVar6 = dVar4 < in_dr14;
      }
      if (bVar6) {
        if (cVar8 == '\0') {
          dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar4 = *(double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(in_dr14) - F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(in_dr14 - dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(unsigned)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(unsigned)(ar4 + 8) = in_xd14;
        }
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c031748(ar4,ar5_01,ar6,ar7));
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 180)), vec3_clear(ar4 + 0x2a8,ar5_01,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x21c) = 0;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 180)), Vec3_dtor(&(*(uint *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _Class_12a03c_m1_03c43c\n.set _Class_12a03c_m1_03c43c, _Class_12a03c_m1_03c43c_def\n");
//@unit 8c03c94c
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
code * FUN_8c03c94c_def(code *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03c94c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 1096; for (int i_ = 0; i_ < 1096; i_++) z_[i_] = 0; }
  double dVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint *puVar5;
  double *pdVar6;
  code *pcVar7;
  float *pfVar8;
  code *pcVar9;
  undefined4 *ar6_00;
  undefined4 a6;
  code *pcVar10;
  undefined1 *ar7_00;
  undefined1 *puVar11;
  undefined8 *ar4_00;
  undefined4 uVar12;
  code *pcVar13;
  uint uVar14;
  float fVar15;
  double in_dr0 = 0;
  float fVar18;
  undefined8 uVar16;
  ulonglong uVar17;
  undefined4 in_fr3 = 0;
  uint in_fr5 = 0;
  undefined4 uVar19;
  double dVar20;
  uint in_fr7 = 0;
  double dVar21;
  undefined8 in_xd0 = 0;
  bool bVar22;
  char cVar23;
  char cVar24;
  
  cVar24 = '\0';
  cVar23 = '\0';
  pcVar13 = (code *)0x1;
  (*(undefined4 *)(fr0_ - 0x354)) = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c03f480(*ar5,((void *)0x8c03f480),1,ar7); });
  pcVar7 = ((void *)0x8c022c88);
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xa0)),((void *)0x8c022c88),ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,pcVar7,ar7));
  if (cVar24 == '\0') {
    dVar21 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar21 = *(double *)(unsigned)(ar5[7] + 8);
  }
  if (cVar24 == '\0') {
    in_fr5 = *(uint *)(unsigned)(ar5[7] + 0xc);
  }
  if (cVar24 != '\0') {
    in_fr5 = (uint)*(undefined8 *)(unsigned)(uint)ar5[7];
  }
  pcVar10 = ((void *)0x8c10277c);
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c10277c(((undefined1 *)(fr0_ - 0x38)),uVar3,pcVar7,((void *)0x8c10277c)));
  pfVar8 = &(*(float *)(fr0_ - 0x48));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(pfVar8,uVar3,pfVar8,pcVar10));
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c102748(&(*(float *)(fr0_ - 0x54)),uVar3,pfVar8,pcVar10));
  pcVar7 = ((void *)0x8c023d34);
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x60)),uVar3,pfVar8,((void *)0x8c023d34)));
  pcVar10 = (code *)(uint)ar5[4];
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x70)),uVar3,pfVar8,pcVar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 0;
  if (pcVar10 == (code *)0x1) {
    if (cVar24 == '\0') {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      dVar20 = (double)(ulonglong)in_fr5;
    }
    else {
      in_dr0 = 0.0;
      dVar20 = 0.0;
    }
    if (cVar23 != '\0') {
      in_dr0 = in_dr0 + dVar20;
    }
    (*(float *)(fr0_ - 0x4c)) = SUB84(in_dr0,0);
    fVar15 = F32HI(in_dr0);
    if (cVar24 == '\0') {
      dVar21 = (double)(D2U(dVar21) & 0xffffffff);
      (*(float *)(fr0_ - 0x4c)) = fVar15;
    }
    else {
      dVar20 = 0.0;
      dVar21 = 0.0;
      (*(float *)(fr0_ - 0x48)) = fVar15;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + dVar21;
    }
    (*(float *)(fr0_ - 0x54)) = SUB84(dVar20,0);
    if (cVar24 == '\0') {
      (*(float *)(fr0_ - 0x54)) = F32HI(dVar20);
      dVar20 = (double)(D2U(dVar20) & 0xffffffff);
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
    }
    else {
      dVar20 = 0.0;
      in_dr0 = 0.0;
    }
    if (cVar23 != '\0') {
      dVar20 = dVar20 + in_dr0;
    }
    fVar15 = F32HI(dVar20);
    (*(float *)(fr0_ - 0x50)) = fVar15;
    if (cVar24 != '\0') {
      (*(float *)(fr0_ - 0x50)) = SUB84(dVar20,0);
      (*(float *)(fr0_ - 0x4c)) = fVar15;
    }
    uVar3 = *(undefined4 *)(unsigned)(uint)ar5[1];
    (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(&(*(float *)(fr0_ - 0x48)),uVar3,(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
    uVar19 = SUB84(dVar20,0);
    pcVar10 = (code *)0x0;
    if (cVar24 == '\0') {
      dVar20 = CONCAT44D((*(float *)(fr0_ - 0x48)),SUB84(in_dr0,0));
      dVar21 = (double)(D2U(dVar21) & 0xffffffff);
    }
    else {
      dVar20 = CONCAT44D((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      dVar21 = 0.0;
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar20) < 0.0;
    }
    else {
      bVar22 = dVar20 < dVar21;
    }
    if (bVar22) {
      pcVar7 = (code *)((undefined4 *)(unsigned)0x8c125be0);
      if (cVar24 == '\0') {
        uVar19 = 0;
        (*(float *)(fr0_ - 0x48)) = 0.0;
      }
      else {
        (*(float *)(fr0_ - 0x48)) = 0.0;
        (*(float *)(fr0_ - 0x44)) = 0.0;
      }
    }
    if (cVar24 == '\0') {
      dVar20 = (double)(D2U(dVar20) & 0xffffffff);
      dVar1 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+0)),uVar19);
    }
    else {
      dVar20 = 0.0;
      dVar1 = (*(double *)(fr0_ - 0x40));
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar1) < 0.0;
    }
    else {
      bVar22 = dVar1 < dVar20;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        (*(double *)(fr0_ - 0x40)) = (double)((ulonglong)(*(double *)(fr0_ - 0x40)) & 0xffffffff00000000);
      }
      else {
        (*(double *)(fr0_ - 0x40)) = 0.0;
      }
    }
    fVar15 = (*(float *)(fr0_ - 0x48));
    fVar18 = (*(float *)(fr0_ - 0x54));
    if (cVar24 != '\0') {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x44)),(*(float *)(fr0_ - 0x48)));
      fVar15 = (*(float *)(fr0_ - 0x54));
      fVar18 = (*(float *)(fr0_ - 0x50));
    }
    if (cVar23 == '\0' && fVar15 < fVar18) {
      if (cVar24 == '\0') {
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
        fVar15 = (*(float *)(fr0_ - 0x54));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x50)),(*(float *)(fr0_ - 0x54)));
        (*(float *)(fr0_ - 0x48)) = (*(float *)(fr0_ - 0x54));
        (*(float *)(fr0_ - 0x44)) = (*(float *)(fr0_ - 0x50));
      }
    }
    if (cVar24 == '\0') {
      in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x4c)),fVar15);
      dVar20 = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+0)),SUB84(dVar1,0));
    }
    else {
      in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
      dVar20 = (*(double *)(fr0_ - 0x40));
    }
    if (cVar23 == '\0') {
      bVar22 = F32HI(dVar20) < F32HI(in_dr0);
    }
    else {
      bVar22 = dVar20 < in_dr0;
    }
    if (bVar22) {
      if (cVar24 == '\0') {
        in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x4c)),SUB84(in_dr0,0));
        (*(double *)(fr0_ - 0x40)) = CONCAT44D((*(uint*)((uchar*)&(*(double *)(fr0_ - 0x40))+4)),(*(float *)(fr0_ - 0x4c)));
      }
      else {
        in_dr0 = CONCAT44D((*(float *)(fr0_ - 0x48)),(*(float *)(fr0_ - 0x4c)));
        (*(double *)(fr0_ - 0x40)) = in_dr0;
      }
    }
  }
  uVar19 = SUB84(dVar21,0);
  pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2e8));
  if ((pcVar9 == (code *)0x0) && (*(int *)(unsigned)(ar4 + 0x124) != 0x2e)) {
    if ((pcVar10 == (code *)0x3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) {
      uVar3 = ar5[1];
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0507c0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar3,pcVar10));
      (*(undefined4 *)(fr0_ - 0x35c)) = 1;
      pcVar13 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,uVar3,((void *)0x8c022cb0)));
      (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,uVar3,pcVar13));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,pcVar13));
      return (code *)(*(undefined4 *)(fr0_ - 0x35c));
    }
    uVar3 = 0;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar2 < 0x2f) && (-1 < iVar2)) {
    pcVar7 = (code *)((code **)&(*(undefined1 *)(unsigned)0x8c03cce4))[iVar2];
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f430(((undefined1 *)(fr0_ - 0xb0)),ar5[7],pcVar9,pcVar7));
      pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c048868(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar10));
      pcVar7 = ((void *)0x8c026038);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c026038(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,pcVar9,((void *)0x8c026038)));
      break;
    case 1:
      pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar7));
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04d62c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[6],pcVar7));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),pcVar9,pcVar7));
      break;
    case 3:
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      pcVar9 = (code *)0x12c;
      if (*(int *)(unsigned)(ar4 + 300) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        uVar19 = 0;
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
        uVar14 = SUB84(in_dr0,0);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,uVar19));
        pcVar7 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 300));
        pcVar9 = pcVar7 + 1;
        *(unsigned *)(unsigned)(ar4 + 300) = pcVar9;
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,puVar5,300,pcVar7));
        fVar15 = F32HI(in_dr0);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar5,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,pcVar7));
        if (cVar24 == '\0') {
          fVar18 = 190.0;
        }
        else {
          fVar15 = 190.0;
          fVar18 = 1.90577e-43;
        }
        if (cVar23 != '\0' || fVar18 <= fVar15) {
          pcVar7 = ((void *)0x8c026da8);
          (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar5,pcVar9,((void *)0x8c026da8)));
          pcVar9 = (code *)0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),0xb0,pcVar7));
        }
      }
      break;
    case 4:
      pcVar9 = ((void *)0x8c033b98);
      iVar2 = s_CAnimBody_AdvanceFrame_033ba0
                        (ar4 + 0xb0,uVar3,((void *)0x8c033b98),pcVar7);
      if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      fVar15 = F32HI(in_dr0);
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar7 = ((void *)0x8c022c88);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x220)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),((void *)0x8c022c88)));
        puVar11 = ((undefined1 *)(fr0_ - 0x220));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c051c14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar11,pcVar7));
        (*(uint *)(fr0_ - 0x370)) = (uint)(iVar2 == 0);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x220)),0xffffffff,puVar11,pcVar7));
        if ((*(uint *)(fr0_ - 0x370)) != 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          pcVar7 = (code *)0x0;
          uVar19 = 0xffffffff;
          uVar3 = 0xe;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xe,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,pcVar7));
        }
      }
      else if (iVar2 == 1) {
        pcVar7 = (code *)0xb0;
        pcVar10 = ar4 + 0xb0;
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(pcVar10,puVar5,pcVar10,0xb0));
        uVar3 = 0xb0;
        (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_GetCurFrame(ar4 + 0xb0,0xb0,pcVar10,pcVar7));
        if (cVar24 == '\0') {
          fVar18 = 34.0;
        }
        else {
          fVar15 = 34.0;
          fVar18 = 1.47977e-42;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          puVar11 = ((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(puVar11,uVar3,puVar11,pcVar7));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_24_026024(*(undefined4 *)(unsigned)(ar4 + 0x244),uVar3,puVar11,pcVar7));
          if (iVar2 == 0) {
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(0x44bb8000,*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.37168463500213e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)(D2U(dVar21) >> 0x20);
            (*(uint *)(fr0_ - 0x374)) = uVar14;
            if (cVar24 != '\0') {
              (*(uint *)(fr0_ - 0x374)) = SUB84(dVar21,0);
              (*(uint *)(fr0_ - 0x370)) = uVar14;
            }
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x230))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(ar4 + 0x14,&(*(uint *)(fr0_ - 0x374)),puVar11,pcVar7); });
            pcVar10 = ((void *)0x8c023b8c);
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x240))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x230)),((undefined1 *)(unsigned)0x8c136570),((void *)0x8c023b8c),pcVar7); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x240)),pcVar10,pcVar7));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x240)),0xffffffff,pcVar10,pcVar7));
            puVar11 = (undefined1 *)(unsigned)0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x230)),0xffffffff,pcVar10,0xffffffff));
          }
          else {
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(0x45034000,*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 8));
            }
            else {
              dVar21 = 6.28682803535784e-312;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            uVar14 = (uint)(D2U(dVar21) >> 0x20);
            (*(uint *)(fr0_ - 0x378)) = uVar14;
            if (cVar24 != '\0') {
              (*(uint *)(fr0_ - 0x378)) = SUB84(dVar21,0);
              (*(uint *)(fr0_ - 0x374)) = uVar14;
            }
            puVar5 = &(*(uint *)(fr0_ - 0x378));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x250))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(ar4 + 0x14,puVar5,puVar5,((undefined1 *)(fr0_ - 0x250))); });
            puVar11 = ((undefined1 *)(fr0_ - 0x260));
            ({ unsigned long t0_ = (unsigned long)(puVar11); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x250)),((undefined1 *)(unsigned)0x8c136574),puVar5,puVar11); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x260)),puVar5,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x260)),0xffffffff,puVar5,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x250)),0xffffffff,0xffffffff,puVar11));
          }
          puVar4 = ((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c02374c(puVar4,((void *)0x8c02374c),puVar4,puVar11));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x270)),puVar4,puVar11));
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x270)),0xffffffff,((void *)0x8c022cb0),puVar11));
          pcVar7 = ((void *)0x8c032ab0);
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),pcVar10,puVar11));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x27c)),pcVar7,pcVar10,puVar11));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28c))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x27c)),pcVar10,puVar11); });
          ar4_00 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x80));
          pcVar7 = ((void *)0x8c023a14);
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4_00,((undefined1 *)(fr0_ - 0x28c)),((void *)0x8c023a14),ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28c)),0xffffffff,pcVar7,ar4_00));
          uVar3 = 0xffffffff;
          pcVar7 = ((void *)0x8c014a34);
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x27c)),0xffffffff,((void *)0x8c014a34),ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_zero(((undefined8 *)(fr0_ - 0x90)),uVar3,pcVar7,ar4_00));
          iVar2 = *(int *)(unsigned)(ar4 + 0x128);
          if (iVar2 == 0) {
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x29c)),uVar3,pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x29c)),pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x29c)),0xffffffff,pcVar7,ar4_00));
          }
          else if (iVar2 == 1) {
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2ac)),uVar3,pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2ac)),pcVar7,ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2ac)),0xffffffff,pcVar7,ar4_00));
          }
          else {
            if (iVar2 != 2) {
              uVar3 = 2;
              (*(undefined4 *)(fr0_ - 0x368)) = 2;
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined8 *)(fr0_ - 0x90)),0xffffffff,2,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,ar4_00));
              uVar3 = 0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,0xffffffff,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,uVar3,ar4_00));
              (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,uVar3,ar4_00));
              pfVar8 = &(*(float *)(fr0_ - 0x48));
              pcVar13 = ((void *)0x8c022cb0);
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(pfVar8,0xffffffff,((void *)0x8c022cb0),pfVar8));
              (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar13,pfVar8));
              (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,pcVar13,((void *)0x8c022cb0)));
              return (code *)(*(undefined4 *)(fr0_ - 0x368));
            }
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2bc)),((void *)0x8c022ce8),pcVar7,ar4_00));
            ar4_00 = ((undefined8 *)(fr0_ - 0x90));
            pcVar7 = ((void *)0x8c023a14);
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4_00,((undefined1 *)(fr0_ - 0x2bc)),((void *)0x8c023a14),ar4_00));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2bc)),0xffffffff,pcVar7,ar4_00));
          }
          (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x2c8)),*(undefined4 *)(unsigned)(ar5[1] + 4),pcVar7,ar4_00));
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x2d8))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2c8)),pcVar7,ar4_00); });
          puVar11 = ((undefined1 *)(fr0_ - 0x2e8));
          ({ unsigned long t0_ = (unsigned long)(puVar11); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x2d8)),puVar11,ar4_00); });
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(((undefined8 *)(fr0_ - 0x90)),((undefined1 *)(fr0_ - 0x2e8)),puVar11,ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2e8)),0xffffffff,puVar11,ar4_00));
          puVar11 = ((undefined1 *)(fr0_ - 0x2d8));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(puVar11,0xffffffff,puVar11,ar4_00));
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c8)),0xffffffff,puVar11,ar4_00));
          pcVar7 = (code *)((undefined1 *)(fr0_ - 0x80));
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0dba50(ar5[6],((undefined8 *)(fr0_ - 0x90)),pcVar7,pcVar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined8 *)(fr0_ - 0x90)),0xffffffff,ar4,pcVar7));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,((void *)0x8c022cb0),pcVar7));
        }
      }
      else if ((iVar2 == 2) &&
              (iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7)), iVar2 == 1
              )) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar7 = (code *)0x0;
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar3,pcVar7));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      pcVar9 = (code *)0x80;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x80,pcVar7));
      break;
    case 6:
      pcVar7 = (code *)&(*(uint *)(fr0_ - 0x2c));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c050300(ar4,*ar5,pcVar9,pcVar7));
      break;
    default:
      goto override_jmp_8c03cc1e_case_7;
    case 0xb:
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x194)),((undefined1 *)(unsigned)0x8c125d48),((undefined1 *)(unsigned)0x8c125d48),pcVar7));
      pcVar10 = (code *)((undefined1 *)(fr0_ - 0x194));
      pcVar7 = pcVar10;
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c051c14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar10));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x194)),0xffffffff,pcVar10,pcVar7));
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),pcVar9,pcVar7));
      break;
    case 0xc:
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0530e0(ar4,*ar5,pcVar9,pcVar7));
      break;
    case 0xe:
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        ((unsigned char *)(unsigned)ar4)[0x1fc] = (unsigned char)(((unsigned char *)(unsigned)ar4)[0x1fc] & 0xfb);
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
LAB_8c03d4b8:
        ar6_00 = ((undefined4 *)(unsigned)0x8c125bf0);
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          uVar19 = 0x40400000;
        }
        else {
          uVar3 = 0x40400000;
          uVar19 = 0x42c80000;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032518(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined4 *)(unsigned)0x8c125bf0),ar5[6]));
        pcVar7 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x248,((undefined1 *)(fr0_ - 0x184)),ar6_00,((void *)0x8c023a14)));
        a6 = 0xffffffff;
        uVar12 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x184)),0xffffffff,0xffffffff,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x184))))((int *)(unsigned)(uint)ar5[6],uVar12,a6,pcVar7));
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar19);
        }
        else {
          in_xd0 = CONCAT44(uVar19,uVar3);
          dVar21 = *(double *)(unsigned)(ar4 + 0x48);
        }
        if (cVar23 == '\0') {
          fVar15 = F32LO(dVar21) - F32HI(dVar21);
        }
        else {
          fVar15 = SUB84(dVar21 - dVar21,0);
        }
        if (cVar24 == '\0') {
          *(float *)(unsigned)(ar4 + 0x24c) = fVar15;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd0;
        }
        pcVar7 = (code *)(uint)ar5[7];
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(pcVar7 + 8),in_fr3);
          in_dr0 = CONCAT44D(0x40400000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(unsigned)(pcVar7 + 8);
          in_dr0 = 52776566554624.0;
        }
        if (cVar23 == '\0') {
          fVar18 = F32HI(in_dr0);
          fVar15 = F32LO(in_dr0) * fVar18;
          in_dr0 = CONCAT44D(fVar18,fVar15);
          dVar21 = CONCAT44D(F32HI(dVar21) - fVar15,SUB84(dVar21,0));
        }
        else {
          in_dr0 = in_dr0 * in_dr0;
          dVar21 = dVar21 - in_dr0;
        }
        if (cVar24 == '\0') {
          *(int *)(unsigned)(ar4 + 0x250) = (int)(D2U(dVar21) >> 0x20);
        }
        else {
          *(double *)(unsigned)(ar4 + 0x250) = dVar21;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        pcVar9 = (code *)0x12c;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pdVar6 = (double *)(unsigned)(ar4 + 0x2c);
        in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)pdVar6 = 0;
        }
        else {
          *pdVar6 = in_dr0;
        }
LAB_8c03d592:
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,pdVar6,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3ac(ar4 + 0xb0,pdVar6,pcVar9,pcVar7));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 3;
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,ar4 + 0x248,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      }
      else {
        if (iVar2 == 1) goto LAB_8c03d4b8;
        if (iVar2 == 2) {
          pdVar6 = (double *)(unsigned)0x2;
          goto LAB_8c03d592;
        }
      }
      uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      pcVar10 = ar4 + 0x14;
      pcVar9 = pcVar10;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar10,pcVar10,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03c314(ar4,pcVar10,pcVar9,pcVar7));
      pcVar7 = (code *)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244));
      (vsp = ((unsigned long)(fr0_ - 1096)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((pcVar7 + 0x184))))(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x244)),pcVar10,pcVar9,pcVar7));
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar3);
      }
      else {
        dVar21 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar23 == '\0') {
        fVar15 = F32LO(dVar21) - F32HI(dVar21);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        uVar16 = CONCAT44(*(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4),fVar15);
      }
      else {
        uVar16 = *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
      }
      if (cVar23 == '\0' && (float)uVar16 < F32HI(uVar16)) {
        pcVar7 = ((void *)0x8c031748);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,pcVar10,pcVar9,((void *)0x8c031748)));
      }
      break;
    case 0xf:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_6c_028cc4(*ar5,1,pcVar9,pcVar7));
      if (iVar2 == 0) {
        (*(undefined4 *)(fr0_ - 0x360)) = 2;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar9,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar9,pcVar7));
        uVar3 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,0xffffffff,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,uVar3,pcVar7));
        puVar11 = ((undefined1 *)(fr0_ - 0x38));
        (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(puVar11,0xffffffff,uVar3,puVar11));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,puVar11));
        return (code *)(*(undefined4 *)(fr0_ - 0x360));
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f414(iVar2,((undefined1 *)(fr0_ - 0x60)),((undefined1 *)(fr0_ - 0x5c)),((undefined1 *)(fr0_ - 0x58))));
      ar7_00 = ((undefined1 *)(fr0_ - 0x358));
      puVar11 = ((undefined1 *)(fr0_ - 0x358));
      puVar4 = ((undefined1 *)(fr0_ - 0x358));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3f8(iVar2,puVar4,puVar11,ar7_00));
      iVar2 = *(int *)(unsigned)(ar4 + 0x128);
      if (iVar2 == 0) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xd0)),puVar4,puVar11,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0xdc)),((undefined1 *)(fr0_ - 0x60)),((void *)0x8c02b5fc),ar7_00));
        pcVar7 = ((void *)0x8c023484);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xec))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0xd0)),((undefined1 *)(fr0_ - 0xdc)),((void *)0x8c023484),ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xfc))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0xec)),((undefined1 *)(fr0_ - 0x358)),pcVar7,ar7_00); });
        pcVar10 = ((void *)0x8c023aa0);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0xfc)),((void *)0x8c023aa0),ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,pcVar10,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xec)),0xffffffff,pcVar10,ar7_00));
        pcVar7 = ((void *)0x8c014a34);
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0xdc)),0xffffffff,pcVar10,((void *)0x8c014a34)));
        pcVar9 = (code *)0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd0)),0xffffffff,0xffffffff,pcVar7));
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x10c)),puVar4,puVar11,ar7_00));
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x118));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(pcVar9,((undefined1 *)(fr0_ - 0x60)),pcVar9,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x128))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x10c)),((undefined1 *)(fr0_ - 0x118)),pcVar9,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x138))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x128)),((undefined1 *)(fr0_ - 0x358)),pcVar9,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x138)),pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x138)),0xffffffff,pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x128)),0xffffffff,pcVar9,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x118)),0xffffffff,pcVar9,ar7_00));
        pcVar7 = ((void *)0x8c022cb0);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x10c)),0xffffffff,pcVar9,((void *)0x8c022cb0)));
      }
      else {
        if (iVar2 != 2) {
          (*(undefined4 *)(fr0_ - 0x364)) = 2;
          uVar3 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,puVar11,0xffffffff));
          (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,puVar11,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,puVar11,uVar3));
          pfVar8 = &(*(float *)(fr0_ - 0x48));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(pfVar8,0xffffffff,pfVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pfVar8,uVar3));
          (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,pfVar8,uVar3));
          return (code *)(*(undefined4 *)(fr0_ - 0x364));
        }
        puVar11 = ((undefined1 *)(fr0_ - 0x148));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(puVar11,((void *)0x8c022ce8),puVar11,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x154)),((undefined1 *)(fr0_ - 0x60)),puVar11,ar7_00));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x164))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(((undefined1 *)(fr0_ - 0x148)),((undefined1 *)(fr0_ - 0x154)),((undefined1 *)(fr0_ - 0x164)),ar7_00); });
        pcVar7 = ((void *)0x8c023b8c);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x174))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x164)),((undefined1 *)(fr0_ - 0x358)),((void *)0x8c023b8c),ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023aa0(&(*(uint *)(fr0_ - 0x2c)),((undefined1 *)(fr0_ - 0x174)),pcVar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x174)),0xffffffff,pcVar7,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x164)),0xffffffff,pcVar7,ar7_00));
        pcVar7 = (code *)0xffffffff;
        pcVar9 = (code *)((undefined1 *)(fr0_ - 0x154));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(pcVar9,0xffffffff,pcVar9,0xffffffff));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x148)),0xffffffff,pcVar9,pcVar7));
      }
      if (*(int *)(unsigned)(ar4 + 0x134) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
        pcVar7 = ((void *)0x8c0101bc);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), pure_virtual_stub(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,((void *)0x8c0101bc)));
        if ((iVar2 == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 4)) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f3e8(*ar5,((void *)0x8c03f3e8),2,pcVar7));
          pcVar9 = (code *)(*(int *)(unsigned)(ar4 + 0x134) + 1);
          *(unsigned *)(unsigned)(ar4 + 0x134) = pcVar9;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7));
      }
      else if (*(int *)(unsigned)(ar4 + 0x134) == 1) {
        pcVar7 = (code *)*ar5;
        pcVar9 = (code *)&(*(uint *)(fr0_ - 0x2c));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04ddd4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar9,pcVar7));
        if (iVar2 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          pcVar13 = (code *)0x0;
        }
      }
      break;
    case 0x10:
      pcVar7 = (code *)(uint)ar5[7];
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c04e7e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar7));
      pcVar9 = pcVar10;
      break;
    case 0x11:
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xc0)),uVar3,pcVar9,pcVar7));
      pcVar7 = (code *)(uint)ar5[3];
      pcVar13 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c055490(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0xc0)),pcVar7));
      pcVar9 = pcVar13;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,pcVar13,pcVar7));
      break;
    case 0x12:
      if (*(int *)(unsigned)(ar4 + 0x134) == 0) {
        if (cVar24 == '\0') {
          uVar17 = (ulonglong)(*(uint *)(fr0_ - 0x2c));
        }
        else {
          uVar17 = 0;
        }
        if (cVar23 == '\0' && (float)uVar17 < 0.0) {
          pcVar13 = (code *)0x2;
          break;
        }
        if (*(int *)(unsigned)(ar4 + 0x21c) != 0) {
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          pcVar13 = (code *)0x0;
          pcVar9 = (code *)0x0;
          break;
        }
        if (cVar24 != '\0') {
          (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)(ar5[7] + 8) >> 0x20);
        }
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar5[3] + 8),in_fr3);
          dVar20 = CONCAT44D(0x3fc00000,*(undefined4 *)(unsigned)(ar4 + 0x48));
        }
        else {
          dVar21 = *(double *)(unsigned)(ar5[3] + 8);
          dVar20 = 2.43657959471436e-311;
        }
        if (cVar23 == '\0') {
          fVar15 = F32LO(dVar20) * F32HI(dVar20);
          dVar21 = CONCAT44D(F32HI(dVar21) - fVar15,SUB84(dVar21,0));
        }
        else {
          fVar15 = SUB84(dVar20 * dVar20,0);
          dVar21 = dVar21 - dVar20 * dVar20;
        }
        uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
        (*(undefined4 *)(fr0_ - 0x24)) = uVar3;
        if (cVar24 != '\0') {
          (*(undefined4 *)(fr0_ - 0x24)) = SUB84(dVar21,0);
          (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
        }
        pdVar6 = (double *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4);
        if (cVar24 == '\0') {
          (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)pdVar6;
          in_dr0 = CONCAT44D((*(undefined4 *)(fr0_ - 0x28)),fVar15);
        }
        else {
          in_dr0 = *pdVar6;
          (*(undefined4 *)(fr0_ - 0x28)) = SUB84(in_dr0,0);
          (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr0 >> 0x20);
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x248,&(*(uint *)(fr0_ - 0x2c)),0x21c,pdVar6));
        *(int *)(unsigned)(ar4 + 0x134) = *(int *)(unsigned)(ar4 + 0x134) + 1;
      }
      else if (*(int *)(unsigned)(ar4 + 0x134) != 1) break;
      uVar14 = SUB84(in_dr0,0);
      pcVar9 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c054d6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
      pcVar7 = pcVar10;
      if (pcVar9 == (code *)0x0) {
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
        pcVar13 = (code *)0x0;
        pcVar7 = (code *)0x0;
      }
      break;
    case 0x14:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,uVar3,pcVar9,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,&(*(uint *)(fr0_ - 0x2c)),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar7));
      pcVar7 = (code *)(vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c057280(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10,pcVar7));
      pcVar9 = pcVar10;
      if (pcVar7 == (code *)0x0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x15:
      uVar3 = *(undefined4 *)(unsigned)(uint)ar5[1];
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,uVar3,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,uVar3,pcVar7));
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05c28c(ar4,0,uVar3,pcVar7));
        if (iVar2 == 0) {
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar2 == 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,1,uVar3,pcVar7));
        uVar14 = (uint)uVar17;
        pcVar7 = (code *)s_CAnimBody_AdvanceFrame_033ba0
                                   (ar4 + 0xb0,((void *)0x8c033b98),uVar3,pcVar7);
        if (pcVar7 == (code *)0x1) {
          pcVar7 = (code *)0x0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xb,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,pcVar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          if (cVar24 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
          }
        }
      }
      else if (iVar2 == 2) {
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,2,uVar3,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,iVar2,uVar3,pcVar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar2,uVar3,pcVar7));
        if (iVar2 == 1) {
          uVar19 = 0xffffffff;
          uVar3 = 0xc;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0xc,0xffffffff,0));
          pcVar7 = ar4 + 0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(pcVar7,uVar3,uVar19,pcVar7));
          *(undefined4 *)(unsigned)(ar4 + 300) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
          pcVar13 = (code *)0x0;
        }
      }
      pcVar9 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,((void *)0x8c023a14),pcVar7));
      break;
    case 0x16:
      pcVar9 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,pcVar9,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,pcVar9,pcVar7));
      uVar17 = (ulonglong)uVar14;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = uVar17;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        pcVar10 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1a4))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c0230f0(ar4 + 0x14,0,((void *)0x8c0230f0),pcVar7); });
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1b4)),((undefined1 *)(fr0_ - 0x1b4)),pcVar10,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x1a4)),((undefined1 *)(fr0_ - 0x1b4)),pcVar10,pcVar7));
        uVar3 = (undefined4)(uVar17 >> 0x20);
        (*(undefined4 *)(fr0_ - 0x3c8)) = (int)uVar17;
        if (cVar24 == '\0') {
          (*(undefined4 *)(fr0_ - 0x3c8)) = uVar3;
          uVar3 = (*(undefined4 *)(fr0_ - 0x3c4));
        }
        (*(undefined4 *)(fr0_ - 0x3c4)) = uVar3;
        uVar3 = 0x224;
        if (cVar24 == '\0') {
          uVar16 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c8)),(int)uVar17);
          *(undefined4 *)(unsigned)(ar4 + 0x224) = (*(undefined4 *)(fr0_ - 0x3c8));
        }
        else {
          uVar16 = CONCAT44((*(undefined4 *)(fr0_ - 0x3c4)),(*(undefined4 *)(fr0_ - 0x3c8)));
          *(undefined8 *)(unsigned)(ar4 + 0x224) = uVar16;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1b4)),0xffffffff,pcVar10,0x224));
        uVar19 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1a4)),0xffffffff,pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1c4)),uVar19,pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x1c4)),((undefined1 *)(fr0_ - 0x1c4)),pcVar10,uVar3));
        pcVar7 = ((void *)0x8c0231c8);
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,((void *)0x8c0231c8),pcVar10,uVar3));
        (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c010e38(((void *)0x8c010e38),pcVar7,pcVar10,uVar3));
        if (cVar24 == '\0') {
          *(int *)(unsigned)(ar4 + 0x228) = (int)((ulonglong)uVar16 >> 0x20);
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x228) = uVar16;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c4)),0xffffffff,ar4 + 0x228,uVar3));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        if (cVar24 == '\0') {
          fVar15 = *(float *)(unsigned)(ar4 + 0x224);
          fVar18 = 5.0;
        }
        else {
          fVar15 = 5.0;
          fVar18 = 4.14784e-43;
        }
        if (cVar23 == '\0' && fVar18 < fVar15) {
          if (*(int *)(unsigned)(ar4 + 0x128) == 0) {
            uVar3 = 5;
            (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x40c00000;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x66e3d71d40c00000;
            }
          }
          else {
            uVar3 = 0x278;
            pcVar7 = ar4 + 0x278;
            if (cVar24 == '\0') {
              *(undefined4 *)(unsigned)pcVar7 = 0x3f800000;
            }
            else {
              *(ulonglong *)(unsigned)pcVar7 = CONCAT44(0x3f800000,fVar15);
            }
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1d4)),ar4 + 0x224,pcVar7,0x278));
            uVar19 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x1d4)),pcVar7,uVar3));
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar19;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1d4)),0xffffffff,pcVar7,uVar3));
            if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
              uVar3 = 7;
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
            }
            else {
              uVar3 = 8;
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
            }
          }
          uVar19 = 0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,0xb0));
          pcVar9 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,300,uVar19));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 2;
          uVar19 = 0;
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar4 + 0xb0,uVar19));
          pcVar9 = (code *)0x190;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0xfa,400,uVar19));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
        }
      }
      else if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x1e4)),1,pcVar9,pcVar7));
        puVar11 = ((undefined1 *)(fr0_ - 0x1e4));
        pcVar7 = ((void *)0x8c023a34);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1f4))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); Vec3_add(*(undefined4 *)(unsigned)(uint)ar5[1],puVar11,((void *)0x8c023a34),*(undefined4 *)(unsigned)(uint)ar5[1]); });
        pcVar10 = ((void *)0x8c026dd8);
        uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_1c_026dd8(ar4 + 0xb0,puVar11,pcVar7,((void *)0x8c026dd8)));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar3,((void *)0x8c0314f8),pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x200)),ar4 + 0x278,0x228,pcVar10));
        pcVar10 = ar4 + 0x14;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x210))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c031eb0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x1f4)),pcVar10); });
        pcVar9 = ((void *)0x8c023a14);
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x210)),((void *)0x8c023a14),pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x210)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x200)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1f4)),0xffffffff,pcVar9,pcVar10));
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1e4)),0xffffffff,pcVar9,pcVar10));
        pcVar7 = ar4 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar7,pcVar9,pcVar10));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,pcVar7,pcVar9,pcVar10));
        if (iVar2 == 1) {
          uVar3 = 0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          pcVar9 = (code *)0xb0;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,0xb0,uVar3));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            pcVar9 = (code *)0x12c;
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            pcVar13 = (code *)0x0;
          }
        }
      }
      else if (iVar2 == 2) {
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        iVar2 = *(int *)(unsigned)(ar4 + 0x280);
        pcVar9 = (code *)(iVar2 + -1);
        *(unsigned *)(unsigned)(ar4 + 0x280) = pcVar9;
        if (iVar2 < 0) {
          (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c03f39c(*ar5,2,pcVar9,iVar2));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          uVar12 = 0;
          uVar19 = 0xffffffff;
          uVar3 = 0x10;
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
          (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar19,uVar12));
          pcVar9 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          pcVar13 = (code *)0x0;
        }
      }
      else if (iVar2 == 3) {
        pcVar9 = ((void *)0x8c033b98);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,3,((void *)0x8c033b98),pcVar7))
        ;
        if (iVar2 == 1) {
          pcVar13 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x328) = 0;
      pcVar7 = (code *)0x328;
      break;
    case 0x18:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x2f8)),uVar3,pcVar9,pcVar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c054f7c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((undefined1 *)(fr0_ - 0x2f8)),ar5[6]));
      pcVar10 = (code *)(uint)(iVar2 == 0);
      pcVar7 = ((void *)0x8c022cb0);
      pcVar9 = pcVar10;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2f8)),0xffffffff,pcVar10,((void *)0x8c022cb0)));
      if (pcVar10 != (code *)0x0) {
        pcVar13 = (code *)0x0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x2c:
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,((void *)0x8c05ae54),pcVar9,pcVar7));
      uVar14 = SUB84(in_dr0,0);
      uVar19 = *(undefined4 *)(unsigned)(uint)ar5[1];
      puVar5 = &(*(uint *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031c74(ar4,puVar5,uVar19,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031748(ar4,puVar5,uVar19,pcVar7));
      uVar3 = 0xa0;
      if (cVar24 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar14;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x90,0xa0,uVar19,pcVar7));
      pcVar7 = (code *)0xb0;
      pcVar9 = ar4 + 0xb0;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), CAnimBody_AdvanceFrame_wrapper(pcVar9,uVar3,pcVar9,0xb0));
      if (iVar2 == 1) {
        pcVar13 = (code *)0x0;
      }
      break;
    case 0x2e:
      if (*(int *)(unsigned)(ar4 + 0x128) != 0) {
        pcVar13 = (code *)0x2;
        break;
      }
      iVar2 = *(int *)(unsigned)(ar4 + 300);
      if (iVar2 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        uVar3 = 0x2d4;
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x2d4,ar4 + 0x2d4,0x2d4,pcVar7));
        uVar14 = SUB84(in_dr0,0);
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x2a8,((void *)0x8c014e20),uVar3,pcVar7));
        (vsp = ((unsigned long)(fr0_ - 1096)), vec3_clear(ar4 + 0x90,((void *)0x8c014e20),ar4 + 0x90,pcVar7));
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0xa0) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x28) = (ulonglong)uVar14;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f800000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x278) = CONCAT44(0x3f800000,uVar14);
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          in_dr0 = CONCAT44D(0x40000000,uVar14);
          *(undefined4 *)(unsigned)(ar4 + 0x2c4) = 0x40000000;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar14;
          in_dr0 = -0.00781250186264515;
          *(undefined8 *)(unsigned)(ar4 + 0x2c4) = 0xbf80000040000000;
        }
        pcVar7 = (code *)0x0;
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x15,0xffffffff,0));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        pcVar9 = ar4;
LAB_8c03ee06:
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        if (cVar24 == '\0') {
          uVar3 = SUB84(in_dr0,0);
          *(undefined4 *)(unsigned)(ar4 + 0x2e4) = 0x42200000;
        }
        else {
          uVar3 = 0x42200000;
          *(undefined8 *)(unsigned)(ar4 + 0x2e4) = 0x8042200000;
        }
        (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar9,pcVar7));
        if (cVar24 == '\0') {
          uVar17 = CONCAT44(0x3f000000,uVar3);
          *(undefined4 *)(unsigned)(ar4 + 0x278) = 0x3f000000;
        }
        else {
          uVar17 = 0x8c032a643f000000;
          *(undefined8 *)(unsigned)(ar4 + 0x278) = 0x8c032a643f000000;
        }
        if (cVar24 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = uVar17 & 0xffffffff;
        }
        iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0,10,pcVar7));
        if (5 < iVar2) {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 1096)), rand_range(ar4,0x3c,0x78,pcVar7));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = uVar3;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 2;
          pcVar9 = (code *)0x12c;
          break;
        }
        uVar3 = 300;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        if (iVar2 == 1) goto LAB_8c03ee06;
        if (iVar2 != 2) {
          if (iVar2 == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
            if (cVar24 == '\0') {
              uVar3 = SUB84(in_dr0,0);
            }
            else {
              uVar3 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x278);
            }
            (*(int *)(fr0_ - 0x440)) = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,pcVar9,pcVar7));
            iVar2 = (*(int *)(fr0_ - 0x440));
            if ((*(int *)(fr0_ - 0x440)) == 1) {
              pcVar9 = ((void *)0x8c033e68);
              (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,1,((void *)0x8c033e68),pcVar7));
            }
            if (cVar24 == '\0') {
              uVar19 = *(undefined4 *)(unsigned)(ar4 + 0x2e4);
            }
            else {
              uVar19 = (undefined4)*(undefined8 *)(unsigned)(ar4 + 0x2c4);
            }
            puVar11 = ((undefined1 *)(fr0_ - 0x330));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(puVar11,iVar2,pcVar9,puVar11));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x340))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x330)),pcVar9,puVar11); });
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x340)),pcVar9,puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x340)),0xffffffff,((void *)0x8c022cb0),puVar11));
            puVar11 = ((undefined1 *)(fr0_ - 0x330));
            pcVar7 = ((void *)0x8c014a34);
            (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(puVar11,0xffffffff,((void *)0x8c014a34),puVar11));
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,pcVar7,puVar11));
            pdVar6 = (double *)(unsigned)(ar4 + 0x2e4);
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2e4),uVar3);
              dVar20 = CONCAT44D(0x3f4ccccd,uVar19);
            }
            else {
              dVar21 = *(double *)(unsigned)(ar4 + 0x2e4);
              dVar20 = 1.35860200283337e-311;
            }
            if (cVar23 == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) *
                                        F32HI(dVar20),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 * dVar20;
            }
            if (cVar24 == '\0') {
              *(int *)(unsigned)pdVar6 = (int)(D2U(dVar21) >> 0x20);
            }
            else {
              *pdVar6 = dVar21;
            }
            iVar2 = *(int *)(unsigned)(ar4 + 0x280);
            uVar3 = 0x280;
            *(int *)(unsigned)(ar4 + 0x280) = iVar2 + -1;
            if (iVar2 < 0) {
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
            pcVar7 = ar4;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x350)),pdVar6,0x280,ar4));
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x350)),pdVar6,uVar3,pcVar7));
            iVar2 = (int)(D2U(dVar21) >> 0x20);
            (*(int *)(fr0_ - 0x444)) = iVar2;
            if (cVar24 != '\0') {
              (*(int *)(fr0_ - 0x444)) = SUB84(dVar21,0);
              (*(int *)(fr0_ - 0x440)) = iVar2;
            }
            pcVar7 = ((void *)0x8c0231c8);
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,pdVar6,uVar3,((void *)0x8c0231c8)));
            uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
            if (cVar24 == '\0') {
              dVar21 = CONCAT44D(uVar3,(*(int *)(fr0_ - 0x444)));
            }
            else {
              in_xd0 = CONCAT44((*(int *)(fr0_ - 0x440)),uVar3);
            }
            if (cVar23 == '\0') {
              fVar15 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar15 = SUB84(dVar21 - dVar21,0);
            }
            if (cVar24 == '\0') {
              *(float *)(unsigned)(ar4 + 0x224) = fVar15;
            }
            else {
              *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
            }
            uVar3 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x350)),0xffffffff,0x224,pcVar7));
            pcVar9 = ((void *)0x8c05ae54);
            (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c05ae54(ar4,uVar3,((void *)0x8c05ae54),pcVar7));
          }
          break;
        }
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      pcVar10 = ar4 + 0xb0;
      pcVar7 = ((void *)0x8c033b98);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar3,((void *)0x8c033b98),pcVar10))
      ;
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 1096)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,pcVar7,pcVar10));
      }
      uVar12 = 0x2e4;
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x304)),uVar3,pcVar7,0x2e4));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x314))); *(unsigned *)((((unsigned long)(fr0_ - 1096)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 1096)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x304)),pcVar7,uVar12); });
      puVar11 = ((undefined1 *)(fr0_ - 0x314));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x14,puVar11,puVar11,uVar12));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x314)),0xffffffff,puVar11,uVar12));
      (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x304)),0xffffffff,puVar11,uVar12));
      pcVar10 = ar4 + 0x14;
      pcVar9 = ((void *)0x8c023a14);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_assign(ar4 + 0x80,pcVar10,((void *)0x8c023a14),uVar12));
      pcVar7 = ar4 + 0x2e4;
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(0x3f4ccccd,*(undefined4 *)(unsigned)pcVar7);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)pcVar7;
        dVar21 = 3.051758532137683e-05;
      }
      if (cVar23 == '\0') {
        fVar15 = F32HI(dVar21);
        dVar21 = CONCAT44D(fVar15,F32LO(dVar21) * fVar15);
      }
      else {
        dVar21 = dVar21 * dVar21;
      }
      if (cVar24 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2e4) = SUB84(dVar21,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2e4) = in_xd0;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c032ab0(ar4,pcVar10,pcVar9,pcVar7));
      (*(undefined4 *)(fr0_ - 0x434)) = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D((*(undefined4 *)(fr0_ - 0x434)),*(undefined4 *)(unsigned)(ar4 + 0x2e4));
      }
      else {
        (*(undefined4 *)(fr0_ - 0x434)) = SUB84(dVar21,0);
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2e4);
      }
      if (cVar23 == '\0' && SUB84(dVar21,0) < F32HI(dVar21)) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 1;
      }
      dVar20 = 0.0;
      puVar11 = ((undefined1 *)(fr0_ - 0x324));
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_ctor_xyz(puVar11,pcVar10,puVar11,pcVar7));
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(((undefined1 *)(fr0_ - 0x324)),pcVar10,puVar11,pcVar7));
      uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
      (*(undefined4 *)(fr0_ - 0x438)) = uVar3;
      if (cVar24 != '\0') {
        (*(undefined4 *)(fr0_ - 0x438)) = SUB84(dVar21,0);
        (*(undefined4 *)(fr0_ - 0x434)) = uVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c0231c8(ar4 + 0x14,ar4 + 0x14,puVar11,pcVar7));
      uVar3 = (undefined4)(D2U(dVar21) >> 0x20);
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(uVar3,(*(undefined4 *)(fr0_ - 0x438)));
      }
      else {
        in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x434)),uVar3);
      }
      if (cVar23 == '\0') {
        fVar15 = F32LO(dVar21) - F32HI(dVar21);
      }
      else {
        fVar15 = SUB84(dVar21 - dVar21,0);
      }
      if (cVar24 == '\0') {
        *(float *)(unsigned)(ar4 + 0x224) = fVar15;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x224) = in_xd0;
      }
      pcVar9 = ((void *)0x8c022cb0);
      (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x324)),0xffffffff,((void *)0x8c022cb0),pcVar7));
      if (cVar24 == '\0') {
        fVar15 = *(float *)(unsigned)(ar4 + 0x224);
        fVar18 = 80.0;
      }
      else {
        fVar15 = 80.0;
        fVar18 = -80.0;
      }
      if (cVar23 != '\0' || fVar15 <= fVar18) {
        if (cVar24 == '\0') {
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x224),uVar19);
          dVar20 = CONCAT44D((int)(D2U(dVar20) >> 0x20),0xc2a00000);
        }
        else {
          dVar21 = *(double *)(unsigned)(ar4 + 0x224);
        }
        if (cVar23 == '\0') {
          bVar22 = F32HI(dVar21) < SUB84(dVar20,0);
        }
        else {
          bVar22 = dVar21 < dVar20;
        }
        if (!bVar22) break;
      }
      if (cVar24 == '\0') {
        dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c4),SUB84(dVar20,0));
        dVar20 = CONCAT44D(0xbf800000,fVar15);
      }
      else {
        dVar21 = *(double *)(unsigned)(ar4 + 0x2c4);
        dVar20 = -8.410980261839484e+168;
      }
      if (cVar23 == '\0') {
        dVar21 = CONCAT44D(F32HI(dVar21) *
                                  F32HI(dVar20),SUB84(dVar21,0));
      }
      else {
        dVar21 = dVar21 * dVar20;
      }
      pcVar7 = (code *)0x2c4;
      if (cVar24 == '\0') {
        *(int *)(unsigned)(ar4 + 0x2c4) = (int)(D2U(dVar21) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x2c4) = dVar21;
      }
    }
  }
  else {
override_jmp_8c03cc1e_case_7:
    pcVar13 = (code *)0x2;
  }
  (vsp = ((unsigned long)(fr0_ - 1096)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),pcVar9,pcVar7));
  (*(unsigned *)(fr0_ - 0x36c) = (unsigned)(unsigned long)(pcVar13));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(&(*(float *)(fr0_ - 0x54)),0xffffffff,pcVar9,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(float *)(fr0_ - 0x48)),0xffffffff,pcVar9,pcVar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 1096)), free_if_nonnull_wrap_102790(((undefined1 *)(fr0_ - 0x38)),0xffffffff,0xffffffff,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 1096)), Vec3_dtor(&(*(uint *)(fr0_ - 0x2c)),0xffffffff,uVar3,pcVar7));
  return ((code *)(unsigned long)*(unsigned *)(fr0_ - 0x36c));
}

__asm__(".globl _FUN_8c03c94c\n.set _FUN_8c03c94c, _FUN_8c03c94c_def\n");
//@unit 8c03f39c
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03f39c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x8c;
  *(undefined4 *)(unsigned)(0x8c + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c03f39c\n.set _FUN_8c03f39c, _FUN_8c03f39c_def\n");
//@unit 8c03f3ac
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03f3ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03f3ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimBody_AdvanceFrame_033d90(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c03f3ac\n.set _FUN_8c03f3ac, _FUN_8c03f3ac_def\n");
//@unit 8c03f3e8
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03f3e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x88;
  *(undefined4 *)(unsigned)(0x88 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c03f3e8\n.set _FUN_8c03f3e8, _FUN_8c03f3e8_def\n");
//@unit 8c03f3f8
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c03f3f8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c03f3f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x5c);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x60);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 100);
  return (undefined4 *)(unsigned)(ar4 + 0x60);
}

__asm__(".globl _FUN_8c03f3f8\n.set _FUN_8c03f3f8, _FUN_8c03f3f8_def\n");
//@unit 8c03f414
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c03f414_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c03f414";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar5 = *(undefined4 *)(unsigned)(ar4 + 0x50);
  *ar6 = *(undefined4 *)(unsigned)(ar4 + 0x54);
  *ar7 = *(undefined4 *)(unsigned)(ar4 + 0x58);
  return (undefined4 *)(unsigned)(ar4 + 0x54);
}

__asm__(".globl _FUN_8c03f414\n.set _FUN_8c03f414, _FUN_8c03f414_def\n");
//@unit 8c03f430
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
int FUN_8c03f430_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03f430";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  
  cVar1 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c03f460(ar4,ar5,ar6,ar7));
  if (cVar1 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = *(undefined4 *)(unsigned)(ar5 + 0xc);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0xc) = *(undefined8 *)(unsigned)(ar5 + 0xc);
  }
  return ar4;
}

__asm__(".globl _FUN_8c03f430\n.set _FUN_8c03f430, _FUN_8c03f430_def\n");
//@unit 8c03f460
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * FUN_8c03f460_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03f460";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c03f460\n.set _FUN_8c03f460, _FUN_8c03f460_def\n");
//@unit 8c03f480
#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c03f480";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_copy(s0,ar4 + 0x28,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c03f480\n.set _FUN_8c03f480, _FUN_8c03f480_def\n");
//@unit 8c03f4a4
#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c03f4a4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c03f4a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2744; for (int i_ = 0; i_ < 2744; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined *ar5_00;
  code *pcVar4;
  undefined1 *puVar5;
  double *pdVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  undefined4 uVar9;
  code *pcVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 *puVar13;
  undefined4 unaff_r8 = 0;
  code *pcVar14;
  undefined4 unaff_r9 = 0;
  int iVar15;
  undefined4 unaff_r10 = 0;
  undefined4 unaff_r11 = 0;
  undefined4 unaff_r12 = 0;
  int iVar16;
  undefined4 unaff_r13 = 0;
  undefined4 unaff_r14 = 0;
  undefined8 *puVar17;
  uint in_fr1 = 0;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  double dVar21;
  uint uVar23;
  double dVar22;
  uint in_fr7 = 0;
  double dVar24;
  undefined8 uVar25;
  double in_dr14 = 0;
  float fVar26;
  undefined8 in_xd0 = 0;
  double in_xd4 = 0;
  undefined8 in_xd14 = 0;
  bool bVar27;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    (*(undefined8 *)(fr0_ - 0x8)) = CONCAT44(SUB84(in_dr14,0),(undefined4)(*(undefined8 *)(fr0_ - 0x8)));
    puVar17 = &(*(undefined8 *)(fr0_ - 0x8));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x8))+0)) = (int)((ulonglong)in_dr14 >> 0x20);
  }
  else {
    puVar17 = (undefined8 *)(unsigned)((undefined1 *)(fr0_ - 0x10));
    (*(undefined8 *)(fr0_ - 0x8)) = in_xd14;
  }
  *(undefined4 *)(unsigned)((int)puVar17 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)((int)puVar17 + -8) = unaff_r13;
  *(undefined4 *)(unsigned)((int)puVar17 + -0xc) = unaff_r12;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x10) = unaff_r11;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x14) = unaff_r10;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x18) = unaff_r9;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x1c) = unaff_r8;
  *(undefined4 *)(unsigned)((int)puVar17 + -0x20) = in_PR;
  iVar16 = 1;
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0xe8);
  *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = puVar5;
  ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c03f480(*ar5,1,puVar5,ar7); });
  pcVar10 = ((void *)0x8c022c88);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x30),(undefined1 *)(unsigned)((int)puVar17 + -0xe8),puVar5,
                 ((void *)0x8c022c88)));
  uVar2 = 0xffffffff;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xe8),0xffffffff,puVar5,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x40),uVar2,puVar5,pcVar10));
  pcVar14 = (code *)(uint)ar5[4];
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x50),uVar2,puVar5,pcVar10));
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x60);
  pcVar10 = ((void *)0x8c022c4c);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero(puVar5,uVar2,((void *)0x8c022c4c),puVar5));
  *(undefined4 *)(unsigned)((int)puVar17 + -0x640) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar24 = (double)(ulonglong)in_fr7;
  }
  else {
    dVar24 = *(double *)(unsigned)(ar5[7] + 8);
  }
  if (in_FPSCR_SZ != '\0') {
    in_xd4 = *(double *)(unsigned)(ar5[7] + 4);
  }
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c10277c((undefined1 *)(unsigned)((int)puVar17 + -0x6c),uVar2,pcVar10,puVar5));
  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x7c);
  pcVar10 = ((void *)0x8c022c4c);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero(puVar5,uVar2,((void *)0x8c022c4c),puVar5));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0x8c),uVar2,pcVar10,puVar5));
  puVar3 = ((undefined4 *)(unsigned)0x8c125bf0);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar17 + -0x98),((undefined4 *)(unsigned)0x8c125bf0),pcVar10,puVar5));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_zero((undefined1 *)(unsigned)((int)puVar17 + -0xa8),puVar3,((void *)0x8c022c4c),
                 (undefined1 *)(unsigned)((int)puVar17 + -0xa8)));
  if (((((0 < *(int *)(unsigned)(ar4 + 0x31c)) && (*(int *)(unsigned)(ar4 + 0x124) != 0x29)) &&
       (*(int *)(unsigned)(ar4 + 0x124) != 0x23)) &&
      ((*(int *)(unsigned)(ar4 + 0x124) != 0x24 && (*(int *)(unsigned)(ar4 + 0x124) != 0x27)))) &&
     ((*(int *)(unsigned)(ar4 + 0x124) != 0x28 &&
      ((*(int *)(unsigned)(ar4 + 0x124) != 0x32 && (*(int *)(unsigned)(ar4 + 0x124) != 0x33)))))) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*(undefined4 *)(unsigned)(uint)ar5[1],*(int *)(unsigned)(ar4 + 0x124),0x124));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x644) = 2;
    puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0xa8);
    pcVar10 = ((void *)0x8c022cb0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,((void *)0x8c022cb0),puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar5));
    pcVar10 = ((void *)0x8c022cb0);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,((void *)0x8c022cb0),puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,pcVar10,puVar5));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,pcVar10,puVar5));
    uVar2 = 0xffffffff;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,pcVar10,0xffffffff));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,(undefined1 *)(unsigned)((int)puVar17 + -0x30),
              uVar2));
    return *(undefined4 *)(unsigned)((int)puVar17 + -0x644);
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x300) = 1;
  pcVar10 = (code *)0x218;
  uVar2 = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x338) = 0;
  if (in_FPSCR_SZ == '\0') {
    dVar21 = (double)((ulonglong)*(uint *)(unsigned)((int)puVar17 + -0x90) << 0x20);
  }
  else {
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x90);
    in_xd4 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar21),SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar21;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x38) = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x98),SUB84(dVar21,0));
    dVar19 = (double)(ulonglong)in_fr1;
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x38) = dVar21;
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x98);
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x40) = (int)(D2U(dVar21) >> 0x20);
    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x94),SUB84(dVar21,0));
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x40) = dVar21;
    dVar21 = *(double *)(unsigned)((int)puVar17 + -0x94);
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c125be4);
  if (in_FPSCR_SZ != '\0') {
    dVar19 = 0.0;
  }
  if (in_FPSCR_PR == '\0') {
    dVar21 = CONCAT44D(F32HI(dVar21) + 0.0,SUB84(dVar21,0));
  }
  else {
    dVar21 = dVar21 + dVar19;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar17 + -0x3c) = (int)(D2U(dVar21) >> 0x20);
  }
  else {
    *(double *)(unsigned)((int)puVar17 + -0x3c) = dVar21;
  }
  if ((pcVar14 == (code *)0x3) && (0 < *(int *)(unsigned)(ar4 + 0x2e8))) {
    pcVar14 = (code *)0x1;
  }
  if (((pcVar14 == (code *)0x3) || (*(int *)(unsigned)(ar4 + 0x68) != 0)) && (*(int *)(unsigned)(ar4 + 0x2e8) == 0)) {
    *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[0xb];
    *(int *)(unsigned)((int)puVar17 + -0xa78) = ar5[6];
    *(int *)(unsigned)((int)puVar17 + -0xa7c) = ar5[3];
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0507c0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar5[1],pcVar14));
    puVar3 = (undefined4 *)(unsigned)(uint)ar5[1];
    pcVar10 = ((void *)0x8c023a14);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*puVar3,((void *)0x8c023a14),puVar3));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x648) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,pcVar10,puVar3));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,puVar3));
    puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x6c);
    pcVar14 = ((void *)0x8c102790);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790(puVar5,0xffffffff,puVar5,((void *)0x8c102790)));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,puVar5,pcVar14));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,puVar5,pcVar14));
    pcVar10 = ((void *)0x8c022cb0);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,((void *)0x8c022cb0),pcVar14));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,pcVar14));
    return *(undefined4 *)(unsigned)((int)puVar17 + -0x648);
  }
  if (pcVar14 == (code *)0x1) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), vec3_clear(ar4 + 0x6c,((undefined1 *)(unsigned)0x8c125be4),0,0x218));
    uVar23 = (uint)(D2U(dVar21) >> 0x20);
    *(unsigned *)(unsigned)((int)puVar17 + -0xa70) = (undefined1 *)(unsigned)((int)puVar17 + -0xf8);
    *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa70);
    pcVar10 = ((void *)0x8c0230f0);
    ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar2,((void *)0x8c0230f0)); });
    uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_length((undefined1 *)(unsigned)((int)puVar17 + -0xf8),ar5_00,
                        (undefined1 *)(unsigned)((int)puVar17 + -0xf8),pcVar10));
    *(undefined4 *)(unsigned)((int)puVar17 + -0x694) = uVar2;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x14,*(undefined4 *)(unsigned)((int)puVar17 + -0x694),uVar2,pcVar10));
    ar5_00 = (undefined *)(unsigned)0xffffffff;
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xf8),0xffffffff,uVar2,pcVar10));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,uVar2,pcVar10));
    pcVar10 = (code *)0xa0;
    dVar21 = (double)((ulonglong)uVar23 << 0x20);
    if (in_FPSCR_SZ == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
    }
    else {
      *(double *)(unsigned)(ar4 + 0xa0) = in_xd4;
    }
  }
  uVar2 = SUB84(dVar24,0);
  pdVar6 = (double *)(unsigned)0x2e8;
  if (*(int *)(unsigned)(ar4 + 0x2e8) == 2) {
    if (in_FPSCR_SZ == '\0') {
      dVar21 = CONCAT44D(0x43340000,SUB84(dVar21,0));
      *(undefined4 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4) = 0x43340000;
    }
    else {
      dVar21 = 6.20179820760257e-312;
      *(undefined8 *)(unsigned)(*(int *)(unsigned)(uint)ar5[1] + 4) = 0x12443340000;
    }
  }
  iVar15 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar15 < 0x36) && (-1 < iVar15)) {
    uVar9 = SUB84(dVar21,0);
                    
    switch(iVar15) {
    case 0:
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f430((undefined1 *)(unsigned)((int)puVar17 + -0x108),ar5[7],0x2e8,((void *)0x8c03f430)));
      iVar16 = ar5[1];
      *(int *)(unsigned)((int)puVar17 + -0xaa0) = *ar5;
      *(int *)(unsigned)((int)puVar17 + -0xa9c) = iVar16;
      iVar16 = ar5[3];
      *(int *)(unsigned)((int)puVar17 + -0xa98) = ar5[2];
      *(int *)(unsigned)((int)puVar17 + -0xa94) = iVar16;
      iVar16 = ar5[5];
      *(int *)(unsigned)((int)puVar17 + -0xa90) = ar5[4];
      *(int *)(unsigned)((int)puVar17 + -0xa8c) = iVar16;
      iVar16 = ar5[7];
      *(int *)(unsigned)((int)puVar17 + -0xa88) = ar5[6];
      *(int *)(unsigned)((int)puVar17 + -0xa84) = iVar16;
      iVar16 = ar5[9];
      *(int *)(unsigned)((int)puVar17 + -0xa80) = ar5[8];
      *(int *)(unsigned)((int)puVar17 + -0xa7c) = iVar16;
      iVar16 = ar5[0xb];
      *(int *)(unsigned)((int)puVar17 + -0xa78) = ar5[10];
      *(int *)(unsigned)((int)puVar17 + -0xa74) = iVar16;
      *(int *)(unsigned)((int)puVar17 + -0xaa4) = ar5[6];
      *(unsigned *)(unsigned)((int)puVar17 + -0xaa8) = (undefined1 *)(unsigned)((int)puVar17 + -0x108);
      pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c046684(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),
                                     pcVar14));
      *(unsigned *)(unsigned)((int)puVar17 + -0x698) = pcVar10;
      iVar16 = *(int *)(unsigned)((int)puVar17 + -0x698);
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c026038((undefined1 *)(unsigned)((int)puVar17 + -0x108),0xffffffff,0xffffffff,pcVar10));
      break;
    case 1:
      if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04b168(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pcVar10))
        ;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x69c) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x69c);
      }
      else if (pcVar14 == (code *)0x1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)((int)puVar17 + -0x2c) = 0x43340000;
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar17 + -0x2c) = 0xa4443340000;
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04c314(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pcVar10))
        ;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a0) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a0);
      }
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
      if (in_FPSCR_SZ == '\0') {
        *(int *)(unsigned)((int)puVar17 + -0x8f4) = (int)(D2U(dVar19) >> 0x20);
        in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                   *(undefined4 *)(unsigned)((int)puVar17 + -0x8f4));
        dVar24 = CONCAT44D(0x43340000,SUB84(dVar21,0));
      }
      else {
        *(double *)(unsigned)((int)puVar17 + -0x8f4) = dVar19;
        dVar24 = -9.359181568001544e-251;
      }
      if (in_FPSCR_PR == '\0') {
        bVar27 = SUB84(in_dr14,0) < F32HI(dVar24);
      }
      else {
        bVar27 = in_dr14 < dVar24;
      }
      if (bVar27) {
        iVar16 = ar5[6];
        *(int *)(unsigned)((int)puVar17 + -0xa70) = ar5[1];
        pcVar10 = ((void *)0x8c04d62c);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04d62c(ar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa70)),iVar16,((void *)0x8c04d62c)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x900) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x900);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      }
      else {
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        pcVar10 = ((void *)0x8c057164);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,uVar9,uVar9,((void *)0x8c057164)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8f8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8f8) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04db38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8fc) = uVar2;
          iVar16 = *(int *)(unsigned)((int)puVar17 + -0x8fc);
          uVar2 = *(undefined4 *)(unsigned)(ar5[1] + 4);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031ab4(ar4,uVar2,uVar2,pcVar10));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar2,pcVar10));
        }
      }
      break;
    case 3:
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if (iVar15 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x734) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x734) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(int *)(unsigned)((int)puVar17 + -0x950) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x950));
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x950) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        }
      }
      else if (iVar15 == 1) {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x738) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x738) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1d;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0x954) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x954) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x954) + 300) = pcVar10 + 1;
        }
      }
      else if (iVar15 == 2) {
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c026858);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4 + 0xb0,ar5_00,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x73c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x73c) == 1) {
          *(int *)(unsigned)((int)puVar17 + -0x958) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x958) + 300);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(int *)(unsigned)((int)puVar17 + -0xa64) = *(int *)(unsigned)((int)puVar17 + -0xa64) + 1;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x958) + 300) =
               *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
          uVar2 = 0x11;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
        }
      }
      else if (iVar15 == 3) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,300,pcVar10));
      }
      break;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      pcVar10 = (code *)0x0;
      iVar15 = -1;
      uVar9 = 0x11;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x740) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x740) != 6) {
        pcVar10 = (code *)0xb0;
        iVar15 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,iVar15,0xb0));
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x744) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x744) == 1) {
        pcVar10 = (code *)0x2b8;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar15 < 6) && (-1 < iVar15)) {
                    
                    
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c04098c))[iVar15])))(vr4,vr5,vr6,vr7));
        return uVar2;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = pcVar14;
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa78) = *(undefined4 *)(unsigned)(ar5[1] + 4);
      pcVar10 = (code *)((int)puVar17 + -0x30);
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04f034(ar4,*ar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x704) = uVar2;
      iVar16 = *(int *)(unsigned)((int)puVar17 + -0x704);
      if (iVar16 != 1) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    default:
      goto override_jmp_8c03f9a2_case_7;
    case 8:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = 300;
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x748) = uVar2;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x748));
          if (pcVar10 == (code *)0x0) {
            *(int *)(unsigned)((int)puVar17 + -0x95c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x95c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x95c) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = ((void *)0x8c057164);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],300,((void *)0x8c057164)));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x74c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x74c) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x960) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x960) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x960) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pdVar6 = (double *)(unsigned)(uint)ar5[7];
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,uVar9);
            dVar21 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *pdVar6;
            dVar21 = 5.50074773365276e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) /
                                      F32HI(dVar21),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x50) = (int)(D2U(dVar24) >> 0x20);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x48) = 0x44898000;
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x50) = dVar24;
            *(undefined8 *)(unsigned)((int)puVar17 + -0x48) = 0xa2844898000;
          }
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x50);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],puVar5,300,pdVar6));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x750) = (int)(D2U(dVar21) >> 0x20);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x4c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x750);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x750) = dVar21;
            *(undefined8 *)(unsigned)((int)puVar17 + -0x4c) = *(undefined8 *)(unsigned)((int)puVar17 + -0x750);
          }
          uVar23 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x270),puVar5,uVar2,pdVar6));
          uVar9 = SUB84(dVar21,0);
          pcVar10 = (code *)((int)puVar17 + -0x270);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,pcVar10,pcVar10,pdVar6));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x270),0xffffffff,pcVar10,pdVar6));
          if (ar5[2] == 1) {
            dVar24 = (double)(ulonglong)uVar23;
            if (in_FPSCR_SZ == '\0') {
              uVar23 = 0;
              dVar24 = in_xd4;
            }
            pdVar6 = (double *)(unsigned)((int)puVar17 + -0x280);
            pcVar10 = ((void *)0x8c022ce8);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(pdVar6,uVar2,((void *)0x8c022ce8),pdVar6));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x280),pcVar10,pdVar6));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x280),0xffffffff,pcVar10,pdVar6));
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x50),uVar23);
              dVar19 = CONCAT44D(0x42a08000,uVar9);
            }
            else {
              dVar21 = *(double *)(unsigned)((int)puVar17 + -0x50);
              dVar19 = 3.715470586832486e+16;
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) +
                                        F32HI(dVar19),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 + dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)puVar17 + -0x50) = (int)(D2U(dVar21) >> 0x20);
              dVar21 = CONCAT44D(0x43608000,*(undefined4 *)(unsigned)((int)puVar17 + -0x48));
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x50) = dVar21;
              dVar24 = *(double *)(unsigned)((int)puVar17 + -0x48);
              dVar21 = 4.27850200525372e-311;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) + F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 + dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)((int)puVar17 + -0x48) = fVar20;
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x48) = dVar24;
            }
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x290),ar4 + 0x54,pcVar10,pdVar6));
          pcVar10 = (code *)((int)puVar17 + -0x290);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x50),
                               pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x754) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x668) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x754) == 0);
          uVar2 = 0xffffffff;
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x290),0xffffffff,((void *)0x8c022cb0),pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x668) != 0) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2d4,uVar2,pcVar4,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,pcVar4,0x2a8));
            *(int *)(unsigned)((int)puVar17 + -0x964) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x964) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x964) + 300) + 1;
            pcVar10 = (code *)0x0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0x968) = ar4;
            pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x968));
            ((unsigned char *)(unsigned)pcVar10)[0x1fc] = (unsigned char)(*(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x968) + 0x1fc) & 0xfb);
          }
        }
        else if (iVar15 == 3) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar4 + 0xb0,0x214));
          iVar16 = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 9:
      *(int *)(unsigned)((int)puVar17 + -0x96c) = ar4;
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0x96c);
      *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x96c) + 0x1fc) =
           *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 0x1fc) & 0xfb;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = 0;
        if (in_FPSCR_SZ != '\0') {
          uVar9 = 0xbf800000;
        }
        uVar7 = 0xffffffff;
        iVar15 = ar5[2] + 0x4c;
        uVar12 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar15,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x758) = uVar12;
        if (*(int *)(unsigned)((int)puVar17 + -0x758) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar15,uVar7,uVar2));
        }
        pcVar10 = ((void *)0x8c026dd8);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,iVar15,uVar7,((void *)0x8c026dd8)));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x75c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x75c) == 0x4c) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c026db0(ar4,iVar15,((void *)0x8c026db0),pcVar10));
          uVar7 = SUB84(in_dr14,0);
          *(undefined4 *)(unsigned)((int)puVar17 + -0x760) = uVar2;
          uVar12 = *(undefined4 *)(unsigned)((int)puVar17 + -0x760);
          iVar15 = ar4 + 0xb0;
          uVar2 = uVar12;
          uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03c0f0(iVar15,uVar12,uVar12,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x764) = uVar9;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), deref_u32(*(undefined4 *)(unsigned)((int)puVar17 + -0x764),uVar12,uVar2,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x768) = uVar2;
          puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x768));
          uVar2 = puVar3[1];
          *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar3;
          *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar3[2];
          puVar3 = ((undefined1 *)(unsigned)0x8c1362ac);
          *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c1362ac);
          iVar15 = ar4 + 0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(iVar15,uVar12,iVar15,((undefined1 *)(unsigned)0x8c1362ac)));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x76c) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x76c) = dVar19;
          }
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2a0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c034384(ar4 + 0xb0,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xb4)),iVar15,puVar3));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign((undefined1 *)(unsigned)((int)puVar17 + -0x7c),(undefined1 *)(unsigned)((int)puVar17 + -0x2a0),
                      iVar15,puVar3));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2a0),0xffffffff,iVar15,puVar3));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,puVar3));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2b0);
          pcVar10 = ((void *)0x8c023ae0);
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)puVar17 + -0x7c),ar4 + 0x2d4,iVar15,((void *)0x8c023ae0)); });
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x2b0);
          *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c023a14);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4 + 0x2a8,puVar5,puVar5,pcVar10));
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2b0),0xffffffff,puVar5,pcVar10));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2c0);
          ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,puVar5,pcVar10); });
          dVar24 = 5.26354424712089e-315;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = in_xd4;
          }
          *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = (undefined1 *)(unsigned)((int)puVar17 + -0x2d0);
          *(unsigned *)(unsigned)((int)puVar17 + -0xa64) = ((void *)0x8c022ce8);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa64))))
                    (*(undefined4 *)(unsigned)((int)puVar17 + -0xa68),uVar2,puVar5,pcVar10));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar17 + -0x2c0),(undefined1 *)(unsigned)((int)puVar17 + -0x2d0),
                       puVar5,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x770) = (int)(D2U(dVar19) >> 0x20);
            dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x770),uVar7);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x770) = dVar19;
            dVar21 = *(double *)(unsigned)((int)puVar17 + -0x770);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2d0),0xffffffff,puVar5,pcVar10));
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x2c0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,0xffffffff,puVar5));
          fVar20 = 0.0;
          pcVar4 = ((void *)0x8c022ce8);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x2e0),(undefined1 *)(unsigned)((int)puVar17 + -0x2e0),
                        ((void *)0x8c022ce8),puVar5));
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x2e0),pcVar4,puVar5));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x774) = uVar2;
          uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x774);
          *(undefined4 *)(unsigned)((int)puVar17 + -0x66c) = uVar9;
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2e0),0xffffffff,pcVar4,uVar9));
          fVar26 = F32HI(dVar21);
          if (*(int *)(unsigned)((int)puVar17 + -0x66c) == 3) {
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(-fVar26,SUB84(dVar21,0));
            }
            else {
              dVar21 = -dVar21;
            }
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              fVar20 = F32HI(dVar21);
              dVar22 = dVar24;
            }
            dVar24 = dVar22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x2ec),uVar2,pcVar4,uVar9));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x2fc);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            ({ unsigned long t0_ = (unsigned long)(
                         *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c023484(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x2ec),iVar15,0x2a8); });
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar17 + -0x2fc),iVar15,uVar2));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x2fc),0xffffffff,iVar15,uVar2));
            pcVar4 = (code *)((int)puVar17 + -0x2ec);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete(pcVar4,0xffffffff,pcVar4,0xffffffff));
          }
          else if (*(int *)(unsigned)((int)puVar17 + -0x66c) == 4) {
            fVar20 = 0.0;
            dVar22 = dVar21;
            if (in_FPSCR_SZ == '\0') {
              dVar22 = dVar24;
              fVar20 = fVar26;
            }
            dVar24 = dVar22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x308),uVar2,pcVar4,uVar9));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x318);
            uVar2 = 0x2a8;
            iVar15 = ar4 + 0x2a8;
            ({ unsigned long t0_ = (unsigned long)(
                         *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c023484(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x308),iVar15,0x2a8); });
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2a8,(undefined1 *)(unsigned)((int)puVar17 + -0x318),iVar15,uVar2));
            pcVar4 = (code *)((int)puVar17 + -0x318);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,uVar2));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar17 + -0x308),0xffffffff,pcVar4,uVar2));
          }
          puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x7c);
          pcVar10 = ((void *)0x8c023a14);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x2d4,puVar8,pcVar4,((void *)0x8c023a14)));
          puVar5 = (undefined1 *)(unsigned)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(ar4 + 0xb0,puVar8,0xb0,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x778) = (int)(D2U(dVar19) >> 0x20);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      *(undefined4 *)(unsigned)((int)puVar17 + -0x778));
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x778) = dVar19;
          }
          dVar22 = CONCAT44D(0x3f800000,fVar20);
          if (in_FPSCR_PR == '\0') {
            bVar27 = SUB84(dVar21,0) < 1.0;
          }
          else {
            bVar27 = dVar21 < dVar22;
          }
          if (bVar27) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), vec3_clear(ar4 + 0x54,puVar8,puVar5,pcVar10));
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2803b0),SUB84(dVar19,0));
            }
            else {
              dVar21 = CONCAT44D((*(uint *)(unsigned)0x8c2803b4),(*(undefined4 *)(unsigned)(unsigned)0x8c2803b0));
            }
            pcVar10 = (code *)(uint)ar5[1];
            puVar5 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)pcVar10);
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(puVar5 + 8),SUB84(dVar22,0));
            }
            else {
              dVar19 = *(double *)(unsigned)(puVar5 + 8);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) -
                                        F32HI(dVar19),SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar19;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),0x43608000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),0x43480000);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) / F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 / dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)(ar4 + 0x5c) = (int)(D2U(dVar21) >> 0x20);
              dVar19 = (double)(ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c2803a8);
            }
            else {
              *(double *)(unsigned)(ar4 + 0x5c) = dVar21;
              dVar24 = CONCAT44D((*(uint *)(unsigned)0x8c2803ac),(*(undefined4 *)(unsigned)(unsigned)0x8c2803a8));
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]),SUB84(dVar19,0));
            }
            else {
              dVar21 = *((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x42a08000,fVar20);
            }
            else {
              dVar21 = -8.87015311948797e+250;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) - F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 - dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x43480000,fVar20);
            }
            else {
              dVar21 = 9070973133824.0;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32LO(dVar21) / F32HI(dVar21);
            }
            else {
              fVar20 = SUB84(dVar21 / dVar21,0);
            }
            if (in_FPSCR_SZ == '\0') {
              *(float *)(unsigned)(ar4 + 0x54) = fVar20;
            }
            else {
              *(double *)(unsigned)(ar4 + 0x54) = dVar24;
            }
          }
          else {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43480000,fVar20);
            }
            else {
              dVar24 = 1.44351483523651e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = SUB84(dVar21,0) < F32HI(dVar24);
            }
            else {
              bVar27 = dVar21 < dVar24;
            }
            if (bVar27) {
              puVar8 = (undefined1 *)(unsigned)(ar4 + 0x54);
              puVar5 = puVar8;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023aa0(ar4 + 0x2a8,puVar8,puVar8,pcVar10));
            }
          }
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,puVar8,puVar5,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x77c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x77c) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,puVar8,puVar5,1));
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            *(int *)(unsigned)((int)puVar17 + -0x970) = ar4;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x970) + 0x1fc) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x970) + 0x1fc) & 0xfb | 4;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          }
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_GetCurFrame(ar4 + 0xb0,iVar15,uVar7,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x780) = (int)(D2U(dVar19) >> 0x20);
            in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                       *(undefined4 *)(unsigned)((int)puVar17 + -0x780));
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x780) = dVar19;
          }
          iVar11 = *(int *)(unsigned)(ar4 + 800);
          fVar20 = F32LO(in_dr14);
          if (iVar11 == 0) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43928000,uVar9);
            }
            else {
              dVar24 = 1.2313176683819e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x14;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x14,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x974) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x974) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x974) + 800) + 1;
            }
          }
          else if (iVar11 == 1) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43b18000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23131867213357e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x16;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x16,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x978) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x978) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x978) + 800) + 1;
            }
          }
          else if (iVar11 == 2) {
            if (in_FPSCR_SZ == '\0') {
              dVar24 = CONCAT44D(0x43eb0000,SUB84(dVar19,0));
            }
            else {
              dVar24 = 1.23132053393102e-311;
            }
            if (in_FPSCR_PR == '\0') {
              bVar27 = fVar20 < F32HI(dVar24);
            }
            else {
              bVar27 = in_dr14 < dVar24;
            }
            if (!bVar27) {
              iVar15 = 0x18;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c033474(ar4,0x18,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(ar4 + 0x244)));
              *(int *)(unsigned)((int)puVar17 + -0x97c) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x97c) + 800) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x97c) + 800) + 1;
            }
          }
          pcVar10 = (code *)(ar4 + 0xb0);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,iVar15,0xb0,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x784) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x784) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
            iVar16 = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c030eb8(ar4 + 0x1fc,0x178,0x1fc,pcVar10));
            *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 0xb:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x6ac) = pcVar10;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6ac);
      }
      else if ((pcVar14 == (code *)0x0) || (pcVar14 == (code *)0x2)) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x6b0) = pcVar10;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b0);
      }
      else {
        iVar16 = 0;
      }
      break;
    case 0xc:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c053f24(ar4,*ar5,1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6b4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b4);
      }
      else {
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0xffffffff;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c053730(ar4,*ar5,pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6b8) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6b8);
      }
      break;
    case 0x10:
      if (pcVar14 == (code *)0x1) {
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[7];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04eb14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x7a4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x7a4);
      }
      else {
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[7];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e7e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x7a0) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x7a0);
      }
      break;
    case 0x11:
      if (pcVar14 == (code *)0x1) {
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x118),ar5_00,0x2e8,pcVar10));
        *(int *)(unsigned)((int)puVar17 + -0xa74) = ar5[6];
        pcVar10 = (code *)(uint)ar5[3];
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x118);
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = ((void *)0x8c055750);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa6c))))(ar4,uVar2,puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a4) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a4);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x118),0xffffffff,puVar5,pcVar10));
      }
      else {
        *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = ((void *)0x8c022ce8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa68))))
                  ((undefined1 *)(unsigned)((int)puVar17 + -0x128),ar5_00,0x2e8,pcVar10));
        *(int *)(unsigned)((int)puVar17 + -0xa64) = ar5[6];
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        pcVar10 = (code *)(uint)ar5[3];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055490(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0x128),pcVar10
                            ));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6a8) = uVar2;
        iVar16 = *(int *)(unsigned)((int)puVar17 + -0x6a8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x128),0xffffffff,
                  (undefined1 *)(unsigned)((int)puVar17 + -0x128),pcVar10));
      }
      break;
    case 0x12:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      while (iVar15 = *(int *)(unsigned)(ar4 + 0x134), iVar15 == 0) {
        if (ar5[0xb] == 1) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0x64c) = 0;
          uVar2 = 0xffffffff;
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,((void *)0x8c022cb0),0xffffffff));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,pcVar10,uVar2))
          ;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,pcVar10,uVar2));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,pcVar10,uVar2));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,pcVar10,uVar2))
          ;
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,pcVar10,0xffffffff));
          pcVar10 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,((void *)0x8c022cb0),uVar2));
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x40);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,pcVar10,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,puVar5));
          return *(undefined4 *)(unsigned)((int)puVar17 + -0x64c);
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_24_026024(ar5[6],0x134,pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6d4) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6d4) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x21c));
          if (pcVar10 == (code *)0x0) {
            pdVar6 = (double *)(unsigned)(ar5[7] + 8);
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(*(undefined4 *)(unsigned)pdVar6,*(undefined4 *)(unsigned)(ar4 + 0x48));
            }
            else {
              dVar21 = *pdVar6;
              in_xd4 = *(double *)(unsigned)(ar4 + 0x48);
            }
            if (in_FPSCR_PR == '\0') {
              dVar21 = CONCAT44D(F32HI(dVar21) - F32LO(dVar21),
                                        SUB84(dVar21,0));
            }
            else {
              dVar21 = dVar21 - dVar21;
            }
            if (in_FPSCR_SZ == '\0') {
              *(int *)(unsigned)((int)puVar17 + -0x28) = (int)(D2U(dVar21) >> 0x20);
            }
            else {
              *(double *)(unsigned)((int)puVar17 + -0x28) = dVar21;
            }
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,(undefined1 *)(unsigned)((int)puVar17 + -0x30),pdVar6,0));
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            piVar1 = (int *)(unsigned)(uint)ar5[6];
            uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0x130))))(piVar1,ar4 + 0x248,pdVar6,pcVar10));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x6d8) = uVar2;
            iVar15 = *(int *)(unsigned)((int)puVar17 + -0x6d8);
            if (iVar15 == 0) {
              *(int *)(unsigned)((int)puVar17 + -0x918) = ar4;
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x918) + 0x134) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x918) + 0x134) + 1;
              *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = ((undefined1 *)(unsigned)0x8c125d58);
              pcVar10 = (code *)(uint)ar5[6];
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),0x3f99999a);
              }
              else {
                dVar21 = *(double *)(unsigned)(ar4 + 0x48);
                in_xd4 = 1.23977272525323e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar21,0);
              }
              else {
                uVar2 = SUB84(dVar21 * dVar21,0);
              }
              *(int *)(unsigned)((int)puVar17 + -0xa6c) = ar5[3];
              pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa6c));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10));
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(0x43340000,uVar2);
                *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
              }
              else {
                dVar21 = 4.591918305585602e-232;
                *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xfe6d01b43340000;
              }
            }
            else if (iVar15 == 1) {
              *(int *)(unsigned)((int)puVar17 + -0x91c) = ar4;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0x134;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x91c);
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa68) + *(int *)(unsigned)((int)puVar17 + -0x91c)) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + 0x134) + 2;
              iVar15 = *(int *)(unsigned)(uint)ar5[6];
              pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(iVar15 + 0x128));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)pcVar10))((int *)(unsigned)(uint)ar5[6],ar4 + 0x248,iVar15,pcVar10));
              uVar2 = SUB84(dVar21,0);
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6dc) = (int)(D2U(dVar19) >> 0x20);
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6dc) = dVar19;
              }
              puVar3 = (undefined4 *)(unsigned)(uint)ar5[6];
              pdVar6 = (double *)(unsigned)*puVar3;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)pdVar6 + 0x184))))(puVar3,puVar3,pdVar6,pcVar10));
              uVar9 = (undefined4)(D2U(dVar19) >> 0x20);
              if (in_FPSCR_SZ == '\0') {
                *(undefined4 *)(unsigned)((int)puVar17 + -0x6e0) = uVar9;
                dVar19 = CONCAT44D(uVar9,*(undefined4 *)(unsigned)((int)puVar17 + -0x6dc));
                dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e0),uVar2);
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e0) = dVar19;
                in_xd0 = *(undefined8 *)(unsigned)((int)puVar17 + -0x6dc);
                dVar21 = *(double *)(unsigned)((int)puVar17 + -0x6e0);
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                          F32LO(dVar19) + F32HI(dVar21));
              }
              else {
                dVar19 = dVar19 + dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                dVar21 = CONCAT44D(0x3f000000,SUB84(dVar21,0));
              }
              else {
                dVar21 = 2.8254433577314434e+192;
              }
              if (in_FPSCR_PR == '\0') {
                dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),
                                          F32LO(dVar19) * F32HI(dVar21));
              }
              else {
                dVar19 = dVar19 * dVar21;
              }
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)(ar4 + 0x24c) = SUB84(dVar19,0);
              }
              else {
                *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd0;
              }
            }
            else if (iVar15 == 2) {
              puVar13 = (undefined8 *)(unsigned)(ar4 + 0x248);
              if (in_FPSCR_SZ == '\0') {
                dVar19 = CONCAT44D(0x44c80000,SUB84(dVar21,0));
                dVar21 = CONCAT44D(0x44c80000,*(undefined4 *)(unsigned)puVar13);
              }
              else {
                in_xd0 = *puVar13;
                dVar19 = -7.444220866666504e-251;
                dVar21 = dVar19;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              pcVar10 = ((void *)0x8c010e38);
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(piVar1,((void *)0x8c010e38),pdVar6,puVar13));
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6e4) = (int)(D2U(dVar21) >> 0x20);
                dVar19 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x248),uVar2);
                dVar21 = CONCAT44D(0x44898000,SUB84(dVar21,0));
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e4) = dVar21;
                dVar19 = *(double *)(unsigned)(ar4 + 0x248);
                dVar21 = 1.91885230228893e-311;
              }
              if (in_FPSCR_PR == '\0') {
                uVar2 = SUB84(dVar19,0);
              }
              else {
                uVar2 = SUB84(dVar19 - dVar21,0);
              }
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(piVar1,pcVar10,pdVar6,puVar13));
              if (in_FPSCR_SZ == '\0') {
                *(int *)(unsigned)((int)puVar17 + -0x6e8) = (int)(D2U(dVar21) >> 0x20);
                dVar22 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e4),uVar2);
                dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6e8),SUB84(dVar21,0));
              }
              else {
                *(double *)(unsigned)((int)puVar17 + -0x6e8) = dVar21;
                dVar22 = *(double *)(unsigned)((int)puVar17 + -0x6e4);
                dVar19 = *(double *)(unsigned)((int)puVar17 + -0x6e8);
              }
              if (in_FPSCR_PR == '\0') {
                bVar27 = F32HI(dVar22) < F32HI(dVar19);
              }
              else {
                bVar27 = dVar22 < dVar19;
              }
              uVar2 = SUB84(dVar22,0);
              if (bVar27) {
                if (in_FPSCR_SZ == '\0') {
                  uVar2 = 0x44c80000;
                  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0x44c80000;
                }
                else {
                  in_xd4 = -7.444220866666504e-251;
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = 0x8c010e3844c80000;
                }
                *(int *)(unsigned)((int)puVar17 + -0x920) = ar4;
                iVar11 = *(int *)(unsigned)((int)puVar17 + -0x920);
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x920) + 0x134) = *(int *)(unsigned)(iVar11 + 0x134) + 2;
                iVar15 = ar4 + 0x248;
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],iVar15,0x134,iVar11));
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)((int)puVar17 + -0x6ec) = (int)(D2U(dVar19) >> 0x20);
                }
                else {
                  *(double *)(unsigned)((int)puVar17 + -0x6ec) = dVar19;
                }
                pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[6]);
                pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)(pcVar10 + 0x184));
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(pdVar6)))((undefined4 *)(unsigned)(uint)ar5[6],iVar15,pdVar6,pcVar10));
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)((int)puVar17 + -0x6f0) = (int)(D2U(dVar19) >> 0x20);
                  in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                             *(undefined4 *)(unsigned)((int)puVar17 + -0x6ec));
                  dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6f0),uVar2);
                }
                else {
                  *(double *)(unsigned)((int)puVar17 + -0x6f0) = dVar19;
                  in_xd14 = *(undefined8 *)(unsigned)((int)puVar17 + -0x6ec);
                  dVar21 = *(double *)(unsigned)((int)puVar17 + -0x6f0);
                }
                if (in_FPSCR_PR == '\0') {
                  dVar22 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),
                                            F32LO(in_dr14) + F32HI(dVar21));
                }
                else {
                  dVar22 = in_dr14 + dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(0x3f000000,SUB84(dVar21,0));
                }
                else {
                  dVar21 = 1.2139784006322344e+202;
                }
                if (in_FPSCR_PR == '\0') {
                  in_dr14 = CONCAT44D((int)(D2U(dVar22) >> 0x20),
                                             F32LO(dVar22) * F32HI(dVar21));
                }
                else {
                  in_dr14 = dVar22 * dVar21;
                }
                if (in_FPSCR_SZ == '\0') {
                  *(int *)(unsigned)(ar4 + 0x24c) = SUB84(in_dr14,0);
                }
                else {
                  *(undefined8 *)(unsigned)(ar4 + 0x24c) = in_xd14;
                }
              }
              else {
                if (in_FPSCR_SZ == '\0') {
                  dVar19 = CONCAT44D(0x44898000,SUB84(dVar19,0));
                  *(undefined4 *)(unsigned)(ar4 + 0x248) = 0x44898000;
                }
                else {
                  dVar19 = 7.05070709856793e-312;
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = 0x14c44898000;
                }
                *(int *)(unsigned)((int)puVar17 + -0x924) = ar4;
                *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x924) + 0x134) =
                     *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x924) + 0x134) + 1;
                *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = ((undefined1 *)(unsigned)0x8c125d58);
                pcVar10 = (code *)(uint)ar5[6];
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),uVar2);
                  dVar24 = CONCAT44D(0x3f99999a,SUB84(dVar24,0));
                }
                else {
                  dVar21 = *(double *)(unsigned)(ar4 + 0x48);
                  dVar24 = -8.36031591445238e-251;
                }
                if (in_FPSCR_PR == '\0') {
                  uVar2 = SUB84(dVar21,0);
                }
                else {
                  uVar2 = SUB84(dVar21 * dVar24,0);
                }
                pdVar6 = (double *)(unsigned)(uint)ar5[3];
                (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032788(ar4,ar4 + 0x248,pdVar6,pcVar10));
                if (in_FPSCR_SZ == '\0') {
                  dVar21 = CONCAT44D(0x43340000,uVar2);
                  *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
                }
                else {
                  dVar21 = -1.960381177040932e+159;
                  *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0xe101d91f43340000;
                }
              }
            }
            goto LAB_8c040722;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 3;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          iVar15 = ar5[7];
          pdVar6 = (double *)(unsigned)(iVar15 + 8);
          if (in_FPSCR_SZ == '\0') {
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),*(undefined4 *)(unsigned)pdVar6);
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x48),SUB84(dVar24,0));
            dVar19 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            in_xd4 = *pdVar6;
            dVar24 = *(double *)(unsigned)(ar4 + 0x48);
            dVar19 = 5.58562756529137e-311;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32HI(dVar24) * F32HI(dVar19);
            dVar24 = CONCAT44D(fVar20,SUB84(dVar24,0));
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),F32LO(dVar21) - fVar20);
          }
          else {
            dVar24 = dVar24 * dVar19;
            dVar21 = dVar21 - dVar24;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x28) = SUB84(dVar21,0);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x28) = in_xd4;
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))
                    ((int *)(unsigned)(uint)ar5[6],(undefined1 *)(unsigned)((int)puVar17 + -0x30),pdVar6,iVar15));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x6f4) = (int)(D2U(dVar19) >> 0x20);
            dVar19 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x6f4),SUB84(dVar19,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x2c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x6f4);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x6f4) = dVar19;
            dVar19 = *(double *)(unsigned)((int)puVar17 + -0x6f4);
            *(double *)(unsigned)((int)puVar17 + -0x2c) = dVar19;
          }
          pcVar10 = (code *)(ar4 + 0x248);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(pcVar10,(undefined1 *)(unsigned)((int)puVar17 + -0x30),((void *)0x8c023a14),pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0x928) = ar4;
          pdVar6 = (double *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x928) + 0x134) + 1);
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x928) + 0x134) = pdVar6;
LAB_8c040722:
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
        }
      }
      if (iVar15 == 1) {
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054b74(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6f8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6f8) == 0) {
          *(int *)(unsigned)((int)puVar17 + -0x92c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x92c));
          *(int *)(unsigned)(pcVar10 + 0x134) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x92c) + 0x134) + 2;
        }
      }
      else if (iVar15 == 2) {
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054d6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6fc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6fc) == 0) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)in_dr14 & 0xffffffff;
          }
          *(int *)(unsigned)((int)puVar17 + -0x930) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x930));
          *(int *)(unsigned)(pcVar10 + 0x134) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x930) + 0x134) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x28c) = 0;
        }
      }
      else if (iVar15 == 3) {
        *(undefined4 *)(unsigned)(ar4 + 700) = 1;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0526a0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x700) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x700) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          *(undefined4 *)(unsigned)(ar4 + 700) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x134) = 0;
          iVar16 = 0;
        }
      }
      break;
    case 0x13:
      pcVar10 = (code *)0x214;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c054a14(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],((void *)0x8c054a14),0x214));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x6bc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x6bc) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          iVar16 = 0;
        }
      }
      break;
    case 0x14:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (pcVar14 != (code *)0x1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
      }
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057280(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar14,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x828) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x828) == 0) {
        iVar16 = 0;
        pcVar10 = (code *)0x214;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x15:
      if (pcVar14 == (code *)0x1) {
        if (*(int *)(unsigned)(ar4 + 300) == 0) {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,pcVar10,((void *)0x8c057164),pcVar10));
          if (*(int *)(unsigned)(ar4 + 0x2b8) == 3) {
            *(int *)(unsigned)((int)puVar17 + -0x984) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x984);
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x984) + 300) + 1;
          }
          else {
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)(ar4 + 0x2b8);
            if (*(int *)(unsigned)((int)puVar17 + -0xa68) == 2) {
              *(int *)(unsigned)((int)puVar17 + -0x988) = ar4;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x988);
              *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + 300) =
                   *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x988) + 300) + 1;
              *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
              uVar2 = 0xffffffff;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
              pcVar10 = (code *)0xb0;
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar2,0xb0));
            }
          }
        }
        else if (*(int *)(unsigned)(ar4 + 300) == 1) {
          if (in_FPSCR_SZ == '\0') {
            dVar19 = CONCAT44D((int)(D2U(dVar19) >> 0x20),0x40400000);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032ab0(ar4,ar5_00,0x2e8,pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x798) = (int)(D2U(dVar19) >> 0x20);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x798) = dVar19;
          }
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x79c) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x79c) == 1) {
            uVar12 = 0;
            uVar9 = 0xffffffff;
            uVar2 = 0x1d;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
            *(int *)(unsigned)((int)puVar17 + -0x98c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x98c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x98c) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
            pcVar10 = (code *)0x0;
            iVar16 = 0;
          }
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 0) {
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,puVar5,uVar2,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,puVar5,uVar2,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x790) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x790) == 1) {
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x2c) = in_xd14;
          }
          *(int *)(unsigned)((int)puVar17 + -0x980) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x980));
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x980) + 300) + 1;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,ar5_00,0x2e8,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0xa0) = in_xd0;
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05ae54(ar4,ar5_00,pdVar6,pcVar10));
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),uVar2,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031de8(ar4,0x10,uVar2,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x794) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x794) == 0) {
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x16:
      if (pcVar14 != (code *)0x1) {
        pdVar6 = ((double *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        ar5_00 = (undefined *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,ar5_00,pdVar6,pcVar10));
      }
LAB_8c04475a:
      uVar9 = SUB84(dVar24,0);
      uVar2 = SUB84(dVar21,0);
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if ((0xd < iVar15) || (iVar15 < 0)) goto switchD_8c04477e_caseD_6;
      switch((&(*(undefined1 *)(unsigned)0x8c044790))[iVar15]) {
      case 0x8c0447c8:
        if (pcVar14 == (code *)0x1) {
          *(int *)(unsigned)((int)puVar17 + -0x9ec) = ar4;
          pdVar6 = (double *)(unsigned)0x12c;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9ec));
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ec) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 10;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
        goto LAB_8c04475a;
      case 0x8c044814:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x854) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x854) == 0) {
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)(unsigned)((int)puVar17 + -0x9f0) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0x9f0);
            pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f0));
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044888:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x4c0);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x4c0),pdVar6,pcVar10); });
        if (in_FPSCR_SZ == '\0') {
          uVar2 = uVar9;
        }
        dVar24 = 0.0;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x4d0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar5,puVar5,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x4e0);
        pcVar10 = ((void *)0x8c0230f0);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)puVar17 + -0x4d0),puVar5,pdVar6,((void *)0x8c0230f0)); });
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x4c0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac(puVar5,(undefined1 *)(unsigned)((int)puVar17 + -0x4e0),puVar5,pcVar10));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x858) = (int)(D2U(dVar19) >> 0x20);
          dVar21 = CONCAT44D(*(undefined4 *)(unsigned)((int)puVar17 + -0x858),uVar2);
          dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),0x40a00000);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x858) = dVar19;
          dVar21 = *(double *)(unsigned)((int)puVar17 + -0x858);
        }
        if (in_FPSCR_PR == '\0') {
          bVar27 = SUB84(dVar24,0) < F32HI(dVar21);
        }
        else {
          bVar27 = dVar24 < dVar21;
        }
        *(uint *)(unsigned)((int)puVar17 + -0x680) = (uint)bVar27;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4e0),0xffffffff,puVar5,pcVar10));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4d0),0xffffffff,puVar5,pcVar10));
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4c0),0xffffffff,puVar5,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x680) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), rand_range(ar4,0xfa,400,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x85c) = uVar2;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar17 + -0x85c);
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0x9f8) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f8));
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9f8) + 300);
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)((int)puVar17 + -0xa6c) + 2;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        else {
          puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x4f0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar8,uVar2,puVar5,puVar8));
          *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x500);
          uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
          ({ unsigned long t0_ = (unsigned long)(
                   *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_add(uVar2,(undefined1 *)(unsigned)((int)puVar17 + -0x4f0),uVar2,puVar8); });
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x500);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0xd8),puVar5,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x500),0xffffffff,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x4f0),0xffffffff,uVar2,puVar5));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057b6c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],(undefined1 *)(unsigned)((int)puVar17 + -0xd8),puVar5));
          *(int *)(unsigned)((int)puVar17 + -0x9f4) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x9f4));
          iVar15 = *(int *)(unsigned)((int)puVar17 + -0x9f4);
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(iVar15 + 300) + 1;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xd8),0xffffffff,iVar15,pcVar10));
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044ad0:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa68) = ((void *)0x8c057e58);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((int)puVar17 + -0xa68))))(ar4,ar5_00,pdVar6,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0x860) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        if (*(int *)(unsigned)((int)puVar17 + -0x860) == 0) {
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
          else {
            *(int *)(unsigned)((int)puVar17 + -0x9fc) = ar4;
            pcVar10 = (code *)0x12c;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9fc) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9fc) + 300) + -1;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044b44:
        uVar9 = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0x2fc,1,pcVar10));
        uVar12 = SUB84(dVar19,0);
        *(int *)(unsigned)((int)puVar17 + -0xa00) = ar4;
        uVar2 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa00) + 0x280);
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa04) = uVar2;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa00) + 0x280) = *(int *)(unsigned)((int)puVar17 + -0xa04) + -1;
        if (*(int *)(unsigned)((int)puVar17 + -0xa04) < 0) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f39c(*ar5,uVar2,uVar9,0x280));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            pcVar10 = (code *)0x0;
            uVar2 = 0x11;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x11,0xffffffff,0));
          }
          else {
            uVar2 = 0x22;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x22,0xffffffff,0));
            pcVar10 = (code *)0x7;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 7;
          }
          if (in_FPSCR_SZ == '\0') {
            uVar25 = CONCAT44(0x3f4ccccd,uVar12);
          }
          else {
            uVar25 = 0x8c032ab03f4ccccd;
          }
          pcVar4 = ((void *)0x8c032ab0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c032ab0(ar4,uVar2,((void *)0x8c032ab0),pcVar10));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x864) = (int)((ulonglong)uVar25 >> 0x20);
            *(undefined4 *)(unsigned)(ar4 + 0x278) = *(undefined4 *)(unsigned)((int)puVar17 + -0x864);
          }
          else {
            *(undefined8 *)(unsigned)((int)puVar17 + -0x864) = uVar25;
            *(undefined8 *)(unsigned)(ar4 + 0x278) = *(undefined8 *)(unsigned)((int)puVar17 + -0x864);
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,pcVar4,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(int *)(unsigned)((int)puVar17 + -0xa08) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa08) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa08) + 300) + 1;
        }
        else {
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x328));
          if (pcVar10 == (code *)0x0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044cc8:
        if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(pcVar10,ar5_00,((void *)0x8c033d88),pcVar10));
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
        }
        if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c044d7c:
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x510);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,pdVar6,pcVar10); });
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x520);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz(puVar5,ar5_00,pdVar6,puVar5));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x530);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c0230f0((undefined1 *)(unsigned)((int)puVar17 + -0x520),ar5_00,pdVar6,puVar5); });
        pcVar10 = ((void *)0x8c022dac);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022dac((undefined1 *)(unsigned)((int)puVar17 + -0x510),(undefined1 *)(unsigned)((int)puVar17 + -0x530),
                     ((void *)0x8c022dac),puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x868) = (int)(D2U(dVar19) >> 0x20);
          *(undefined4 *)(unsigned)(ar4 + 0x224) = *(undefined4 *)(unsigned)((int)puVar17 + -0x868);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x868) = dVar19;
          *(undefined8 *)(unsigned)(ar4 + 0x224) = *(undefined8 *)(unsigned)((int)puVar17 + -0x868);
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x530),0xffffffff,pcVar10,puVar5));
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x520);
        pcVar4 = ((void *)0x8c022cb0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,((void *)0x8c022cb0),puVar5));
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x510),0xffffffff,pcVar4,puVar5));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x540),uVar2,pcVar4,puVar5));
        pcVar10 = ((void *)0x8c0231c8);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0231c8((undefined1 *)(unsigned)((int)puVar17 + -0x540),((void *)0x8c0231c8),pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x86c) = (int)(D2U(dVar19) >> 0x20);
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x86c) = dVar19;
        }
        iVar15 = ar4 + 0x14;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0231c8(iVar15,pcVar10,pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x870) = (int)(D2U(dVar19) >> 0x20);
          uVar25 = CONCAT44(*(undefined4 *)(unsigned)((int)puVar17 + -0x870),SUB84(dVar19,0));
        }
        else {
          *(double *)(unsigned)((int)puVar17 + -0x870) = dVar19;
          uVar25 = *(undefined8 *)(unsigned)((int)puVar17 + -0x870);
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c010e38(iVar15,pcVar10,pcVar4,puVar5));
        if (in_FPSCR_SZ == '\0') {
          *(int *)(unsigned)((int)puVar17 + -0x874) = (int)((ulonglong)uVar25 >> 0x20);
          *(undefined4 *)(unsigned)(ar4 + 0x228) = *(undefined4 *)(unsigned)((int)puVar17 + -0x874);
        }
        else {
          *(undefined8 *)(unsigned)((int)puVar17 + -0x874) = uVar25;
          *(undefined8 *)(unsigned)(ar4 + 0x228) = *(undefined8 *)(unsigned)((int)puVar17 + -0x874);
        }
        uVar2 = 0xffffffff;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x540),0xffffffff,pcVar4,puVar5));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,uVar2,pcVar4,puVar5));
        *(undefined4 *)(unsigned)(ar4 + 0x40) = 1;
        puVar13 = (undefined8 *)(unsigned)(ar4 + 0x224);
        if (in_FPSCR_SZ == '\0') {
          uVar25 = CONCAT44(*(undefined4 *)(unsigned)puVar13,0x40a00000);
        }
        else {
          uVar25 = *puVar13;
        }
        if (in_FPSCR_PR == '\0' && (float)uVar25 < F32HI(uVar25)) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x550),uVar2,puVar13,puVar5));
          pcVar10 = ((void *)0x8c023334);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023334(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x550),puVar13,((void *)0x8c023334)
                              ));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x878) = uVar2;
          uVar2 = *(undefined4 *)(unsigned)((int)puVar17 + -0x878);
          *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar2;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x550),0xffffffff,uVar2,pcVar10));
          if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
            uVar2 = 7;
            uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,7,0xffffffff,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x87c) = uVar9;
            if (*(int *)(unsigned)((int)puVar17 + -0x87c) != 6) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,((void *)0x8c033e68)));
            }
          }
          else {
            uVar9 = 0;
            uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0));
            *(undefined4 *)(unsigned)((int)puVar17 + -0x880) = uVar2;
            if (*(int *)(unsigned)((int)puVar17 + -0x880) != 6) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,0xb0,uVar9));
            }
          }
          *(int *)(unsigned)((int)puVar17 + -0xa0c) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) =
               *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa0c) + 300);
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa0c) + 300) = *(int *)(unsigned)((int)puVar17 + -0xa70) + 1;
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0));
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0xc;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,((void *)0x8c033e68),0xb0));
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
switchD_8c04477e_caseD_6:
        *(undefined4 *)(unsigned)(ar4 + 0x328) = 0;
        break;
      case 0x8c04509c:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x560),ar5_00,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x560);
        uVar2 = *(undefined4 *)(unsigned)(uint)ar5[1];
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_add(uVar2,puVar5,pdVar6,uVar2); });
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,puVar5,ar4 + 0xb0,uVar2));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x884) = uVar2;
        uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x884);
        uVar7 = 0xb0;
        uVar12 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,0xb0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x888) = uVar12;
        uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), get_field_1c_026dd8(ar4 + 0xb0,uVar9,uVar2,uVar7));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x88c) = uVar9;
        uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0x88c);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,uVar9,uVar2,uVar7));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x890) = uVar2;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_set_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x57c),uVar9,
                     *(undefined4 *)(unsigned)((int)puVar17 + -0x890),0x224));
        *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x57c);
        *(unsigned *)(unsigned)((int)puVar17 + -0xa78) = (undefined1 *)(unsigned)((int)puVar17 + -0x58c);
        iVar15 = ar4 + 0x14;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa78)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); FUN_8c031eb0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar5,iVar15); })
        ;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x14,(undefined1 *)(unsigned)((int)puVar17 + -0x58c),puVar5,iVar15));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x58c),0xffffffff,puVar5,iVar15));
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), object_dtor_delete((undefined1 *)(unsigned)((int)puVar17 + -0x57c),0xffffffff,puVar5,iVar15));
        pcVar10 = (code *)0xffffffff;
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x570);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(puVar5,0xffffffff,puVar5,0xffffffff));
        uVar2 = 0xffffffff;
        *(unsigned *)(unsigned)((int)puVar17 + -0xa6c) = (undefined1 *)(unsigned)((int)puVar17 + -0x560);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(*(undefined4 *)(unsigned)((int)puVar17 + -0xa6c),0xffffffff,puVar5,pcVar10));
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x894) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x894) == 1) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0;
          uVar9 = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0xffffffff;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,*(undefined4 *)(unsigned)((int)puVar17 + -0xa64),uVar9))
          ;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,((void *)0x8c033e68),uVar9));
          *(undefined4 *)(unsigned)(ar4 + 300) = 0xc;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), rand_range(ar4,0xfa,400,uVar9));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x898) = uVar2;
          pcVar10 = (code *)0x280;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = *(undefined4 *)(unsigned)((int)puVar17 + -0x898);
          if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
            iVar16 = 0;
          }
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c045328:
        *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 1;
        *(int *)(unsigned)((int)puVar17 + -0xa10) = ar4;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa14) = *(undefined4 *)(unsigned)(pcVar10 + 0x280);
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa10) + 0x280) = *(int *)(unsigned)((int)puVar17 + -0xa14) + -1;
        if (*(int *)(unsigned)((int)puVar17 + -0xa14) < 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
          uVar2 = 0x10;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,((void *)0x8c033e68),pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa18) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa18) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa18) + 300) + 1;
        }
        else if (*(int *)(unsigned)(ar4 + 0x328) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          iVar16 = 0;
        }
        goto switchD_8c04477e_caseD_6;
      case 0x8c0453ec:
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,pdVar6,pcVar10));
        *(unsigned *)(unsigned)((int)puVar17 + -0x89c) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x89c) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x2fc) = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          iVar16 = 0;
        }
      case 0x8c045422:
        goto switchD_8c04477e_caseD_6;
      }
      break;
    case 0x17:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      iVar15 = *(int *)(unsigned)(ar4 + 300);
      if (iVar15 == 0) {
        pcVar10 = (code *)0x214;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        *(int *)(unsigned)((int)puVar17 + -0xa1c) = ar4;
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa1c) + 300) =
             *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa1c) + 300) + 1;
      }
      else {
        if (iVar15 == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 0x250) = 0xc3fa0000;
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x43340000;
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x250) = 0x24cc3fa0000;
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x32043340000;
          }
          *(undefined4 *)(unsigned)(ar4 + 800) = 0;
          *(int *)(unsigned)((int)puVar17 + -0xa20) = ar4;
          pcVar10 = (code *)0x12c;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa20) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa20) + 300) + 1;
        }
        else if (iVar15 != 2) {
          if (iVar15 == 3) {
            uVar2 = CAnimBody_AdvanceFrame_wrapper
                              (ar4 + 0xb0,0xb0,((void *)0x8c026858),pcVar10);
            *(undefined4 *)(unsigned)((int)puVar17 + -0x8b0) = uVar2;
            if (*(int *)(unsigned)((int)puVar17 + -0x8b0) == 1) {
              *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
              iVar16 = 0;
              *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0;
              *(undefined4 *)(unsigned)(ar4 + 300) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa70);
              pcVar10 = (code *)0xffffffff;
              *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0xffffffff;
              *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
            }
          }
          break;
        }
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04c314(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8ac) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8ac) == 0) {
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          pcVar10 = ((void *)0x8c033e68);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,((void *)0x8c033e68)));
          *(int *)(unsigned)((int)puVar17 + -0xa24) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa24) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa24) + 300) + 1;
        }
      }
      break;
    case 0x19:
      *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0x214;
      *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar10 = pcVar14;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x788) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x788) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        pcVar10 = (code *)0x0;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1a:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0564c4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x78c) = uVar2;
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0x78c));
      if (pcVar10 == (code *)0x0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 0;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
        pcVar10 = (code *)0x1;
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
      }
      break;
    case 0x1b:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      pcVar10 = (code *)0x128;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],*(int *)(unsigned)(ar4 + 0x128),0,0x128));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x834) = uVar2;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c058d60(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(int *)(unsigned)((int)puVar17 + -0x834) + 4,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x838) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x838) == 0) {
          iVar16 = 0;
          pcVar10 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
        }
      }
      break;
    case 0x1c:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],ar5_00,0,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x844) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)(ar4 + 0x124);
        *(int *)(unsigned)((int)puVar17 + -0xa78) = *(int *)(unsigned)((int)puVar17 + -0x844) + 4;
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0593cc(ar4,ar5[6],*ar5,*(undefined4 *)(unsigned)(uint)ar5[1]));
        *(unsigned *)(unsigned)((int)puVar17 + -0x848) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x848) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1d:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
      pcVar10 = (code *)0x2e8;
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        iVar16 = 2;
      }
      else {
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x1cc))))((int *)(unsigned)(uint)ar5[6],ar5_00,1,0x2e8));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x83c) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = 0x1d;
        *(int *)(unsigned)((int)puVar17 + -0xa78) = *(int *)(unsigned)((int)puVar17 + -0x83c) + 4;
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0593cc(ar4,ar5[6],*ar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x840) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x840) == 0) {
          pcVar10 = (code *)0x0;
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
        }
      }
      break;
    case 0x1e:
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
        pcVar10 = pcVar14;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x82c) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x82c) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
          *(int *)(unsigned)((int)puVar17 + -0x9e8) = ar4;
          pcVar10 = (code *)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9e8) + 300) + 1);
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9e8) + 300) = pcVar10;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 300) == 1) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03f460((undefined1 *)(unsigned)((int)puVar17 + -0x4b0),ar5[7],ar5[7],pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0xffffffff;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa74) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c);
        pcVar10 = (code *)((int)puVar17 + -0x4b0);
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c059fc4(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],puVar5,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x830) = uVar2;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)((int)puVar17 + -0x830);
        *(uint *)(unsigned)((int)puVar17 + -0xa64) = (uint)(*(int *)(unsigned)((int)puVar17 + -0xa68) == 0);
        *(undefined4 *)(unsigned)((int)puVar17 + -0x67c) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa64);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x4b0),0xffffffff,puVar5,pcVar10))
        ;
        if (*(int *)(unsigned)((int)puVar17 + -0x67c) != 0) {
          iVar16 = 0;
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
      break;
    case 0x21:
    case 0x22:
    case 0x25:
    case 0x26:
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        pcVar10 = (code *)0x2;
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if ((iVar15 < 6) && (-1 < iVar15)) {
                    
                    
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c042ce0))[iVar15])))(vr4,vr5,vr6,vr7));
          return uVar2;
        }
      }
      break;
    case 0x23:
    case 0x24:
    case 0x27:
    case 0x28:
      pcVar10 = (code *)0x0;
      *(undefined4 *)(unsigned)(ar4 + 0x31c) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        pcVar10 = (code *)0x12c;
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          pcVar10 = pcVar14;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7a8) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x7a8) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x990) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x990) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x990) + 300) + 1;
          }
        }
        else if (iVar15 == 1) {
          pcVar10 = ((void *)0x8c057164);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],1,((void *)0x8c057164)));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7ac) = uVar2;
          if (*(int *)(unsigned)((int)puVar17 + -0x7ac) == 0) {
            *(int *)(unsigned)((int)puVar17 + -0x994) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x994) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x994) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 0x290) = 0;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            pcVar10 = (code *)0x1;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          }
        }
        else if (iVar15 == 2) {
          uVar12 = 700;
          *(undefined4 *)(unsigned)(ar4 + 700) = 1;
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(*(undefined4 *)(unsigned)(uint)ar5[7],uVar9);
            dVar21 = CONCAT44D(0x40800000,SUB84(dVar19,0));
          }
          else {
            dVar24 = *(double *)(unsigned)(uint)ar5[7];
            dVar21 = 1.25675615172221e-311;
          }
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D(F32HI(dVar24) /
                                      F32HI(dVar21),SUB84(dVar24,0));
          }
          else {
            dVar24 = dVar24 / dVar21;
          }
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)(ar4 + 0x248) = (int)(D2U(dVar24) >> 0x20);
            uVar25 = CONCAT44(0x44898000,uVar2);
            *(undefined4 *)(unsigned)(ar4 + 0x250) = 0x44898000;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x248) = dVar24;
            uVar25 = 0xa2044898000;
            *(undefined8 *)(unsigned)(ar4 + 0x250) = 0xa2044898000;
          }
          puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x50);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(uint)ar5[6] + 0x128))))((int *)(unsigned)(uint)ar5[6],puVar5,700,300));
          if (in_FPSCR_SZ == '\0') {
            *(int *)(unsigned)((int)puVar17 + -0x7b0) = (int)(D2U(dVar21) >> 0x20);
            *(undefined4 *)(unsigned)(ar4 + 0x24c) = *(undefined4 *)(unsigned)((int)puVar17 + -0x7b0);
          }
          else {
            *(double *)(unsigned)((int)puVar17 + -0x7b0) = dVar21;
            uVar25 = *(undefined8 *)(unsigned)((int)puVar17 + -0x7b0);
            *(undefined8 *)(unsigned)(ar4 + 0x24c) = uVar25;
            in_xd4 = dVar21;
          }
          uVar18 = (undefined4)uVar25;
          uVar2 = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x328),puVar5,uVar12,pcVar10));
          uVar7 = SUB84(dVar21,0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x328),uVar12,pcVar10));
          uVar9 = 0xffffffff;
          pcVar4 = ((void *)0x8c022cb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x328),0xffffffff,((void *)0x8c022cb0),pcVar10));
          iVar15 = *(int *)(unsigned)(ar4 + 0x124);
          if (iVar15 < 0x33) {
            if (iVar15 < 0x32) {
              pcVar10 = (code *)0x28;
              if ((iVar15 < 0x29) && (0x22 < iVar15)) {
                if (iVar15 == 0x23) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = 0;
                  }
                  else {
                    uVar2 = 0xbf800000;
                  }
                  pcVar4 = ((void *)0x8c022ce8);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x338),uVar9,((void *)0x8c022ce8),0x28));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x338),pcVar4,pcVar10));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x338),0xffffffff,pcVar4,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x998) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = CONCAT44D(*(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248),uVar2);
                    dVar21 = CONCAT44D(0x42d20000,uVar7);
                  }
                  else {
                    dVar24 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248);
                    dVar21 = -7.123181745823468e+261;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar24 = CONCAT44D(F32HI(dVar24) +
                                              F32HI(dVar21),SUB84(dVar24,0));
                  }
                  else {
                    dVar24 = dVar24 + dVar21;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248) =
                         (int)(D2U(dVar24) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x998) + 0x248) = dVar24;
                  }
                }
                else if (iVar15 == 0x24) {
                  if (in_FPSCR_SZ == '\0') {
                    uVar2 = uVar18;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x358),uVar9,pcVar4,0x28));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x358),pcVar4,pcVar10));
                  *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = 0xffffffff;
                  pcVar10 = ((void *)0x8c022cb0);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x358),
                            *(undefined4 *)(unsigned)((int)puVar17 + -0xa70),pcVar4,((void *)0x8c022cb0)));
                  *(int *)(unsigned)((int)puVar17 + -0x9a0) = ar4;
                  pcVar4 = (code *)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                  if (in_FPSCR_SZ == '\0') {
                    uVar9 = *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = CONCAT44D(0x42d20000,uVar9);
                    dVar21 = CONCAT44D(uVar9,uVar2);
                  }
                  else {
                    dVar21 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a0) + 0x248);
                    dVar24 = -1.424828541595511e+262;
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = CONCAT44D(F32HI(dVar21) -
                                              F32HI(dVar24),SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 - dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)pcVar4 = (int)(D2U(dVar21) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)pcVar4 = dVar21;
                  }
                }
                else if (iVar15 == 0x27) {
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = -0.0078125;
                  }
                  else {
                    dVar24 = 3.88908364136857e-311;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x348),uVar9,pcVar4,0x28));
                  puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x348);
                  pcVar10 = (code *)(ar4 + 0x54);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(pcVar10,puVar5,puVar5,pcVar10));
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x348),0xffffffff,puVar5,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x99c) = ar4;
                  pcVar4 = (code *)0x248;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = CONCAT44D((int)(D2U(dVar24) >> 0x20),0x42dc0000);
                    dVar21 = CONCAT44D(*(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248),uVar7);
                  }
                  else {
                    dVar21 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248);
                  }
                  if (in_FPSCR_PR == '\0') {
                    dVar21 = CONCAT44D(F32HI(dVar21) + F32LO(dVar24),
                                              SUB84(dVar21,0));
                  }
                  else {
                    dVar21 = dVar21 + dVar24;
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248) =
                         (int)(D2U(dVar21) >> 0x20);
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x99c) + 0x248) = dVar21;
                  }
                }
                else if (iVar15 == 0x28) {
                  dVar24 = 0.0;
                  if (in_FPSCR_SZ == '\0') {
                    dVar24 = in_xd4;
                  }
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x368),
                                (undefined1 *)(unsigned)((int)puVar17 + -0x368),pcVar4,0x28));
                  pcVar10 = ((void *)0x8c023a14);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x368),pcVar4,((void *)0x8c023a14)));
                  pcVar4 = (code *)((int)puVar17 + -0x368);
                  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor(pcVar4,0xffffffff,pcVar4,pcVar10));
                  *(int *)(unsigned)((int)puVar17 + -0x9a4) = ar4;
                  if (in_FPSCR_SZ == '\0') {
                    dVar21 = CONCAT44D(0x42dc0000,
                                              *(undefined4 *)(unsigned)
                                               (*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248));
                  }
                  else {
                    dVar24 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248);
                    dVar21 = -1.7995873979860088e+258;
                  }
                  if (in_FPSCR_PR == '\0') {
                    fVar20 = F32LO(dVar21) - F32HI(dVar21);
                  }
                  else {
                    fVar20 = SUB84(dVar21 - dVar21,0);
                  }
                  if (in_FPSCR_SZ == '\0') {
                    *(float *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248) = fVar20;
                  }
                  else {
                    *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a4) + 0x248) = dVar24;
                  }
                }
              }
            }
            else {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x388),uVar9,
                            (undefined1 *)(unsigned)((int)puVar17 + -0x388),pcVar10));
              pcVar4 = (code *)((int)puVar17 + -0x388);
              pcVar10 = ((void *)0x8c023a14);
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,pcVar4,pcVar4,((void *)0x8c023a14)));
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x388),0xffffffff,pcVar4,pcVar10));
              *(int *)(unsigned)((int)puVar17 + -0x9a8) = ar4;
              if (in_FPSCR_SZ == '\0') {
                dVar24 = CONCAT44D(0x43140000,
                                          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248));
              }
              else {
                in_xd4 = *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248);
                dVar24 = 3.7182926394388e-311;
              }
              if (in_FPSCR_PR == '\0') {
                fVar20 = F32LO(dVar24) + F32HI(dVar24);
              }
              else {
                fVar20 = SUB84(dVar24 + dVar24,0);
              }
              if (in_FPSCR_SZ == '\0') {
                *(float *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248) = fVar20;
              }
              else {
                *(double *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9a8) + 0x248) = in_xd4;
              }
            }
          }
          else if (iVar15 == 0x33) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x378),uVar9,pcVar4,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,(undefined1 *)(unsigned)((int)puVar17 + -0x378),pcVar4,pcVar10));
            pcVar10 = (code *)0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x378),0xffffffff,pcVar4,0xffffffff));
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x398),ar4 + 0x54,pcVar4,pcVar10));
          pcVar10 = (code *)((int)puVar17 + -0x398);
          iVar15 = ar4 + 0x248;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],iVar15,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x7b4) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x670) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x7b4) == 0);
          uVar2 = 0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x398),0xffffffff,iVar15,pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x670) != 0) {
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2d4,uVar2,iVar15,pcVar10));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c022d04(ar4 + 0x2a8,uVar2,iVar15,pcVar10));
            *(int *)(unsigned)((int)puVar17 + -0x9ac) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ac) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9ac) + 300) + 1;
            pcVar10 = (code *)0x0;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0xb0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + *(int *)(unsigned)((int)puVar17 + -0xa6c),0x1a,0xffffffff,0))
            ;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0x9b0) = ar4;
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = *(undefined4 *)(unsigned)((int)puVar17 + -0x9b0);
            *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0x1fc;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa64) + *(int *)(unsigned)((int)puVar17 + -0xa68)) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0x9b0) + 0x1fc) & 0xfb;
          }
        }
        else if (iVar15 == 3) {
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(pcVar10,ar5_00,0xb0,pcVar10));
          iVar16 = 0;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      }
      break;
    case 0x29:
      *(undefined4 *)(unsigned)(ar4 + 700) = 1;
      pcVar10 = (code *)0x134;
      iVar15 = *(int *)(unsigned)(ar4 + 0x134);
      if ((iVar15 < 5) && (-1 < iVar15)) {
                    
                    
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)(((code **)&(*(undefined1 *)(unsigned)0x8c03ff04))[iVar15])))(vr4,vr5,vr6,vr7));
        return uVar2;
      }
      break;
    case 0x2a:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05a54c(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],0x2e8,pcVar10));
      break;
    case 0x2b:
      uVar12 = 0;
      uVar9 = 0x47;
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x47,0xffffffff,0));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x84c) = uVar2;
      iVar15 = *(int *)(unsigned)((int)puVar17 + -0x84c);
      if (iVar15 != 6) {
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12));
      }
      pcVar10 = (code *)(ar4 + 0xb0);
      uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(pcVar10,uVar9,iVar15,pcVar10));
      *(undefined4 *)(unsigned)((int)puVar17 + -0x850) = uVar2;
      if (*(int *)(unsigned)((int)puVar17 + -0x850) == 1) {
        iVar16 = 0;
      }
      break;
    case 0x2c:
      if (pcVar14 == (code *)0x1) {
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)ar5[1]);
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c057164(ar4,pcVar10,0x2e8,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8a4) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8a4) == 0) {
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c0570cc(ar4,0x1a,pdVar6,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8a8) = uVar2;
          iVar16 = *(int *)(unsigned)((int)puVar17 + -0x8a8);
          *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
        }
      }
      else {
        pcVar10 = (code *)0x2e8;
        *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c05ae54(ar4,ar5_00,0,0x2e8));
        puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x30);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,puVar5,*(undefined4 *)(unsigned)(uint)ar5[1],pcVar10));
        pcVar4 = ((void *)0x8c031748);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031748(ar4,puVar5,((void *)0x8c031748),pcVar10));
        uVar9 = 0;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031de8(ar4,0,pcVar4,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8a0) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8a0) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c03c314(ar4,uVar9,pcVar4,pcVar10));
          iVar16 = 0;
        }
      }
      break;
    case 0x2f:
      pcVar10 = (code *)0x3;
      if (*(int *)(unsigned)(ar4 + 0x128) < 4) {
        iVar16 = 2;
      }
      else {
        iVar15 = *(int *)(unsigned)(ar4 + 300);
        if (iVar15 == 0) {
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 0x214;
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + ar4) = 0;
          pcVar10 = pcVar14;
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c055c38(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x34c,pcVar14));
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = uVar2;
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8ec) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = *(undefined4 *)(unsigned)((int)puVar17 + -0x8ec);
          if (*(int *)(unsigned)((int)puVar17 + -0xa64) == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x2e8) = 2;
            *(int *)(unsigned)((int)puVar17 + -0xa54) = ar4;
            pcVar10 = (code *)(*(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa54) + 300) + 1);
            *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa54) + 300) = pcVar10;
          }
        }
        else {
          if (iVar15 == 1) {
            iVar15 = ar4 + 0x34c;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x248,iVar15,iVar15,3));
            puVar13 = (undefined8 *)(unsigned)(ar4 + 0x248);
            if (in_FPSCR_SZ == '\0') {
              *(undefined4 *)(unsigned)puVar13 = 0x449b0000;
              *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0x439b0000;
            }
            else {
              *puVar13 = 0x24c449b0000;
              *(undefined8 *)(unsigned)(ar4 + 0x24c) = 0x44bb8000439b0000;
            }
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5cc),0x24c,iVar15,puVar13));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x5dc);
            puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x5cc);
            pcVar10 = ((void *)0x8c023ae0);
            ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub(ar4 + 0x248,puVar5,iVar15,((void *)0x8c023ae0)); });
            puVar8 = (undefined1 *)(unsigned)((int)puVar17 + -0x5ec);
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = puVar8;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar17 + -0x5dc),puVar5,puVar8,pcVar10));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x5fc);
            ({ unsigned long t0_ = (unsigned long)(
                       *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_scale((undefined1 *)(unsigned)((int)puVar17 + -0x5ec),((undefined1 *)(unsigned)0x8c136580),puVar8,pcVar10); });
            iVar15 = ar4 + 0x248;
            pcVar10 = ((void *)0x8c023aa0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c023aa0(iVar15,(undefined1 *)(unsigned)((int)puVar17 + -0x5fc),((void *)0x8c023aa0),iVar15));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5fc),0xffffffff,pcVar10,iVar15));
            pcVar4 = ((void *)0x8c022cb0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5ec),0xffffffff,pcVar10,((void *)0x8c022cb0)));
            uVar9 = 0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5dc),0xffffffff,0xffffffff,pcVar4));
            uVar2 = 0xffffffff;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5cc),0xffffffff,uVar9,pcVar4));
            pcVar10 = ((void *)0x8c022ce8);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x60c),uVar2,((void *)0x8c022ce8),pcVar4));
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x61c);
            iVar15 = ar4 + 0x248;
            ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)((int)puVar17 + -0xa74)); *(unsigned *)(((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8) + 0) = (unsigned)t0_; vsp = ((puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)) - 8); Vec3_sub((undefined1 *)(unsigned)((int)puVar17 + -0x60c),iVar15,pcVar10,pcVar4); });
            *(unsigned *)(unsigned)((int)puVar17 + -0xa74) = (undefined1 *)(unsigned)((int)puVar17 + -0x62c);
            pcVar4 = ((void *)0x8c022ec0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_normalize((undefined1 *)(unsigned)((int)puVar17 + -0x61c),iVar15,pcVar10,((void *)0x8c022ec0)));
            puVar5 = (undefined1 *)(unsigned)((int)puVar17 + -0x62c);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x54,puVar5,puVar5,pcVar4));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x62c),0xffffffff,puVar5,pcVar4));
            pcVar10 = ((void *)0x8c022cb0);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x61c),0xffffffff,puVar5,((void *)0x8c022cb0)));
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60c),0xffffffff,0xffffffff,pcVar10));
            *(int *)(unsigned)((int)puVar17 + -0xa58) = ar4;
            pdVar6 = (double *)(unsigned)0x12c;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa58) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa58) + 300) + 1;
            *(undefined4 *)(unsigned)(ar4 + 700) = 1;
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          }
          else if (iVar15 != 2) {
            if (iVar15 == 3) {
              (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,0x2e8,3));
              iVar16 = 0;
            }
            break;
          }
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_copy((undefined1 *)(unsigned)((int)puVar17 + -0x63c),ar4 + 0x54,pdVar6,pcVar10));
          pcVar10 = (code *)((int)puVar17 + -0x63c);
          uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],ar4 + 0x248,pcVar10));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8f0) = uVar2;
          *(uint *)(unsigned)((int)puVar17 + -0x690) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8f0) == 0);
          pcVar4 = (code *)0xffffffff;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x63c),0xffffffff,uVar2,pcVar10));
          if (*(int *)(unsigned)((int)puVar17 + -0x690) != 0) {
            pcVar10 = (code *)0x0;
            uVar2 = 0;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0,0));
            pcVar4 = ((void *)0x8c033e68);
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),uVar2,pcVar10));
            *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
            *(undefined4 *)(unsigned)(ar4 + 0x218) = 0;
            *(int *)(unsigned)((int)puVar17 + -0xa5c) = ar4;
            *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa5c) + 300) =
                 *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa5c) + 300) + 1;
          }
          if (*(int *)(unsigned)(ar4 + 0x290) == 1) {
            *(int *)(unsigned)((int)puVar17 + -0xa60) = ar4;
            pcVar10 = (code *)0xfffffffb;
            *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa60) + 0x1fc) =
                 *(byte *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa60) + 0x1fc) & 0xfb;
            (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c030f2c(ar4 + 0x1fc,pcVar4,0x1fc,0xfffffffb));
          }
        }
      }
      break;
    case 0x30:
      *(undefined4 *)(unsigned)(ar4 + 0x178) = 1;
      *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      *(int *)(unsigned)((int)puVar17 + -0xa28) = ar4;
      iVar15 = *(int *)(unsigned)((int)puVar17 + -0xa28);
      pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa28) + 0x284));
      *(unsigned *)(unsigned)(iVar15 + 0x284) = pcVar10 + 1;
      switch(*(undefined4 *)(unsigned)(ar4 + 300)) {
      case 0:
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8b4) = uVar2;
        iVar15 = *(int *)(unsigned)((int)puVar17 + -0x8b4);
        if (iVar15 != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,((void *)0x8c033e68),iVar15));
        }
        iVar11 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(iVar11,uVar9,iVar11,iVar15));
        pcVar10 = (code *)*ar5;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)pcVar10 + 0x34))))(pcVar10,uVar9,iVar11,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8b8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8b8) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar11,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa2c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa2c) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa2c) + 300) = pcVar10 + 1;
        }
        break;
      case 1:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x59c),iVar15,
                      (undefined1 *)(unsigned)((int)puVar17 + -0x59c),pcVar10));
        pcVar10 = (code *)((int)puVar17 + -0x59c);
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8bc) = uVar2;
        *(uint *)(unsigned)((int)puVar17 + -0x684) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8bc) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x59c),0xffffffff,uVar9,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x684) != 0) {
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          pcVar10 = (code *)0xb0;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar4 + 0xb0,0xb0));
          *(int *)(unsigned)((int)puVar17 + -0xa30) = ar4;
          *(undefined4 *)(unsigned)((int)puVar17 + -0xa6c) = 300;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa6c) + *(int *)(unsigned)((int)puVar17 + -0xa30)) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa30) + 300) + 1;
        }
        break;
      case 2:
        uVar7 = 0;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa68) = 0x1a;
        uVar12 = *(undefined4 *)(unsigned)((int)puVar17 + -0xa68);
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa64) = 0xb0;
        uVar9 = s_CAnimBody_SetAnimation_033a94
                          (ar4 + *(int *)(unsigned)((int)puVar17 + -0xa64),uVar12,0xffffffff,0);
        uVar18 = SUB84(dVar19,0);
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8c0) = uVar9;
        if (*(int *)(unsigned)((int)puVar17 + -0x8c0) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar12,((void *)0x8c033e68),uVar7));
        }
        uVar9 = 0xb0;
        iVar15 = ar4 + 0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(iVar15,0xb0,iVar15,uVar7));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,uVar9,iVar15,uVar7));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8c4) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x8c4) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar15,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa34) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa34) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa34) + 300) + 1;
          if (in_FPSCR_SZ != '\0') {
            in_xd4 = 3.75058611530083e-312;
          }
          uVar9 = 0x1d;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1d,0xffffffff,0));
          uVar23 = 0;
          iVar15 = ar4 + 0xb0;
          pcVar10 = ((void *)0x8c033e68);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(iVar15,uVar9,((void *)0x8c033e68),iVar15));
          uVar9 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0x1d,pcVar10,iVar15));
          *(undefined4 *)(unsigned)((int)puVar17 + -0x8c8) = uVar9;
          pcVar10 = (code *)0x278;
          if (in_FPSCR_PR == '\0') {
            dVar24 = CONCAT44D((float)*(int *)(unsigned)((int)puVar17 + -0x8c8),uVar18);
          }
          else {
            dVar24 = (double)*(int *)(unsigned)((int)puVar17 + -0x8c8);
          }
          dVar21 = (double)((ulonglong)uVar23 << 0x20);
          fVar20 = F32HI(dVar24);
          if (in_FPSCR_PR == '\0') {
            bVar27 = fVar20 < 0.0;
          }
          else {
            bVar27 = dVar24 < dVar21;
          }
          dVar19 = dVar24;
          if (bVar27) {
            if (in_FPSCR_SZ == '\0') {
              dVar21 = CONCAT44D(0x4f800000,fVar20);
            }
            else {
              dVar21 = 24189261021184.0;
              in_xd4 = dVar24;
            }
            if (in_FPSCR_PR == '\0') {
              fVar20 = F32HI(dVar21);
              dVar21 = CONCAT44D(fVar20,F32LO(dVar21) + fVar20);
            }
            else {
              dVar21 = dVar21 + dVar21;
            }
            dVar19 = in_xd4;
            if (in_FPSCR_SZ == '\0') {
              dVar19 = CONCAT44D(SUB84(dVar21,0),SUB84(dVar24,0));
            }
          }
          if (in_FPSCR_SZ == '\0') {
            dVar24 = CONCAT44D(0x42b60000,uVar2);
            dVar21 = CONCAT44D((int)(D2U(dVar21) >> 0x20),
                                      (int)(D2U(dVar19) >> 0x20));
            dVar19 = in_xd4;
          }
          else {
            dVar24 = 3.5717906350717384e+163;
          }
          if (in_FPSCR_PR == '\0') {
            fVar20 = F32LO(dVar21) / F32HI(dVar24);
          }
          else {
            fVar20 = SUB84(dVar21 / dVar24,0);
          }
          if (in_FPSCR_SZ == '\0') {
            *(float *)(unsigned)(ar4 + 0x278) = fVar20;
          }
          else {
            *(double *)(unsigned)(ar4 + 0x278) = dVar19;
          }
        }
        break;
      case 3:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar15,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8cc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8cc) == 1) {
          *(int *)(unsigned)((int)puVar17 + -0xa38) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa38) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa38) + 300) + 1;
          pcVar10 = (code *)0x0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,pcVar10));
        }
        break;
      case 4:
        uVar12 = 0;
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8d0) = uVar2;
        iVar15 = *(int *)(unsigned)((int)puVar17 + -0x8d0);
        if (iVar15 != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,iVar15,uVar12));
        }
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,iVar15,uVar12));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,uVar9,iVar15,uVar12));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8d4) = pcVar10;
        if (*(int *)(unsigned)((int)puVar17 + -0x8d4) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,iVar15,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa3c) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa3c) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa3c) + 300) + 1;
        }
        break;
      case 5:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5ac),iVar15,300,pcVar10));
        pcVar10 = (code *)((int)puVar17 + -0x5ac);
        uVar9 = *(undefined4 *)(unsigned)(uint)ar5[1];
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],uVar9,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8d8) = uVar2;
        *(uint *)(unsigned)((int)puVar17 + -0x688) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8d8) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5ac),0xffffffff,uVar9,pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x688) != 0) {
          *(int *)(unsigned)((int)puVar17 + -0xa40) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa40) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa40) + 300) + 1;
        }
        break;
      case 6:
        uVar9 = 0xffffffff;
        uVar2 = 0x1a;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        pcVar10 = (code *)0xb0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,0xb0));
        piVar1 = (int *)(unsigned)*ar5;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0x34))))(piVar1,uVar2,piVar1,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8dc) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8dc) == 1) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,piVar1,pcVar10));
          uVar2 = 0x26;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x26,0xffffffff,0));
          pcVar10 = (code *)(ar4 + 0xb0);
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(pcVar10,uVar2,0xb0,pcVar10));
          *(int *)(unsigned)((int)puVar17 + -0xa44) = ar4;
          *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa44) + 300) =
               *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa44) + 300) + 1;
        }
        break;
      case 7:
        if (*(int *)(unsigned)(ar4 + 0x128) == 4) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,4,pcVar10));
        }
        else {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar15,*(int *)(unsigned)(ar4 + 0x128),pcVar10));
        }
        *(int *)(unsigned)((int)puVar17 + -0xa48) = ar4;
        *(undefined4 *)(unsigned)((int)puVar17 + -0xa70) = *(undefined4 *)(unsigned)((int)puVar17 + -0xa48);
        pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa48));
        *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa70) + 300) = *(int *)(unsigned)(pcVar10 + 300) + 1;
        break;
      case 8:
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,300,pcVar10));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8e0) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8e0) == 1) {
          *(undefined4 *)(unsigned)(ar4 + 0x40) = 5;
          *(int *)(unsigned)((int)puVar17 + -0xa4c) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)((int)puVar17 + -0xa4c));
          *(int *)(unsigned)(pcVar10 + 300) = *(int *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa4c) + 300) + 1;
        }
        break;
      case 9:
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_ctor_xyz((undefined1 *)(unsigned)((int)puVar17 + -0x5bc),iVar15,300,pcVar10));
        pcVar10 = (code *)(vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c04e0e0(ar4,*(undefined4 *)(unsigned)(uint)ar5[1],*(undefined4 *)(unsigned)(uint)ar5[1],
                                       (undefined1 *)(unsigned)((int)puVar17 + -0x5bc)));
        *(unsigned *)(unsigned)((int)puVar17 + -0x8e4) = pcVar10;
        *(uint *)(unsigned)((int)puVar17 + -0x68c) = (uint)(*(int *)(unsigned)((int)puVar17 + -0x8e4) == 0);
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x5bc),0xffffffff,((void *)0x8c022cb0),pcVar10));
        if (*(int *)(unsigned)((int)puVar17 + -0x68c) != 0) {
          uVar12 = 0;
          uVar9 = 0xffffffff;
          uVar2 = 0x1a;
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar9,uVar12));
          *(int *)(unsigned)((int)puVar17 + -0xa50) = ar4;
          pcVar10 = ((code *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa50) + 300));
          *(unsigned *)(unsigned)(*(int *)(unsigned)((int)puVar17 + -0xa50) + 300) = pcVar10 + 1;
        }
        break;
      case 10:
        pcVar10 = (code *)0x0;
        uVar12 = 0xffffffff;
        uVar9 = 0x1a;
        uVar2 = (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x1a,0xffffffff,0));
        *(undefined4 *)(unsigned)((int)puVar17 + -0x8e8) = uVar2;
        if (*(int *)(unsigned)((int)puVar17 + -0x8e8) != 6) {
          (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar9,uVar12,pcVar10));
        }
        *(undefined4 *)(unsigned)(ar4 + 0x178) = 0;
        (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar9,uVar12,pcVar10));
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 1;
        *(undefined4 *)(unsigned)(ar4 + 700) = 0;
      }
    }
  }
  else {
override_jmp_8c03f9a2_case_7:
    iVar16 = 0;
    pcVar10 = ((void *)0x8c031c74);
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031c74(ar4,(undefined1 *)(unsigned)((int)puVar17 + -0x30),*(undefined4 *)(unsigned)(uint)ar5[1],((void *)0x8c031c74)));
  }
  iVar15 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar15 != 2) && (*(int *)(unsigned)(ar4 + 0x124) != 0x14)) {
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), FUN_8c031ab4(ar4,*(undefined4 *)(unsigned)(ar5[1] + 4),iVar15,pcVar10));
    (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(ar4 + 0x80,ar4 + 0x14,iVar15,pcVar10));
  }
  pcVar10 = ((void *)0x8c023a14);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_assign(((undefined1 *)(unsigned)0x8c2803a8),*(undefined4 *)(unsigned)(uint)ar5[1],iVar15,((void *)0x8c023a14)));
  *(int *)(unsigned)((int)puVar17 + -0x650) = iVar16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2803b8) = pcVar14;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0xa8),0xffffffff,(undefined1 *)(unsigned)((int)puVar17 + -0xa8),
            pcVar10));
  uVar2 = 0xffffffff;
  pcVar10 = ((void *)0x8c102790);
  free_if_nonnull_wrap_102790
            ((undefined1 *)(unsigned)((int)puVar17 + -0x98),0xffffffff,0xffffffff,((void *)0x8c102790))
  ;
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x8c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x7c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), free_if_nonnull_wrap_102790((undefined1 *)(unsigned)((int)puVar17 + -0x6c),0xffffffff,uVar2,pcVar10));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x60),0xffffffff,uVar2,pcVar10));
  uVar2 = 0xffffffff;
  pcVar10 = ((void *)0x8c022cb0);
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x50),0xffffffff,((void *)0x8c022cb0),0xffffffff));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x40),0xffffffff,pcVar10,uVar2));
  (vsp = (puVar17 ? (unsigned long)puVar17 - 2728 : (unsigned long)(fr0_ - 2744)), Vec3_dtor((undefined1 *)(unsigned)((int)puVar17 + -0x30),0xffffffff,pcVar10,uVar2));
  return *(undefined4 *)(unsigned)((int)puVar17 + -0x650);
}

__asm__(".globl _FUN_8c03f4a4\n.set _FUN_8c03f4a4, _FUN_8c03f4a4_def\n");
