#include "../decls.h"
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
  ring[rp++ & 255] = "FUN_8c20c416";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 a5;
  undefined4 uVar6;
  uint ar6_00;
  uint ar7_00;
  int iVar7;
  
  puVar4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b708(ar4,ar5,ar6,ar7));
  uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08);
  if (puVar4 == (undefined1 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa114) = (*(uint *)(unsigned)(ar4 + 0xc) & 0xfffffff) >> 2;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa118) = *(uint *)(unsigned)(ar4 + 0x1c) | 0x1000000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
    puVar4 = ((undefined1 *)(unsigned)0x8c4a9db8);
    bVar1 = false;
    do {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20c4ce;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
      puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd4);
    } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4));
    bVar1 = true;
LAB_8c20c4ce:
    if (!bVar1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
      bVar1 = false;
      do {
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c504;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
        puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd0);
      } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0));
      bVar1 = true;
LAB_8c20c504:
      uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
      uVar6 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60);
      if (bVar1) {
        puVar5 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4a9db4);
      }
      else {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 1;
        ar7_00 = *(uint *)(unsigned)(ar4 + 0x10);
        ar6_00 = *(uint *)(unsigned)(ar4 + 0xc);
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8) < ar7_00) {
          ar7_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8);
        }
        a5 = 0;
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf4) < ar6_00) {
          ar6_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf4);
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,ar6_00,ar7_00));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa11c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa120) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60) = uVar6;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64) = uVar2;
        puVar4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20b5a0(((undefined1 *)(unsigned)0x8c4aa110),a5,ar6_00,ar7_00));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
        bVar1 = false;
        do {
          if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c5e8;
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),a5,ar6_00,ar7_00));
          puVar4 = ((undefined1 *)(unsigned)0x8c4a9dd0);
        } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0));
        bVar1 = true;
LAB_8c20c5e8:
        if (!bVar1) {
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,1,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(8,0,ar6_00,ar7_00));
          iVar7 = (uVar3 & 1) * 0x20;
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x124,*(undefined4 *)(unsigned)(iVar7 + -0x73b55fdc),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(300,*(undefined4 *)(unsigned)(iVar7 + -0x73b55fd8),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x128,*(undefined4 *)(unsigned)(iVar7 + -0x73b55fd0),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x130,*(undefined4 *)(unsigned)(iVar7 + -0x73b55fcc),ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x164,*(undefined4 *)(unsigned)(iVar7 + -0x73b55fd4),ar6_00,ar7_00));
          uVar6 = 0x80000000;
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a844(0x144,0x80000000,ar6_00,ar7_00));
          (vsp = ((unsigned long)(fr0_ - 0)), pvr_20a876(0x144,uVar6,ar6_00,ar7_00));
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f18) = 0;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f14) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f10) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08);
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 1;
          (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f28) = 1;
          *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4a9ef8) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) * 4) = 2;
          return (undefined1 *)(unsigned)0;
        }
        puVar5 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4a9f24);
      }
      *puVar5 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  }
  return puVar4;
}

__asm__(".globl _FUN_8c20c416\n.set _FUN_8c20c416, _FUN_8c20c416_def\n");
