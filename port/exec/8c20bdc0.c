#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20bdc0_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20bdc0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 240; for (int i_ = 0; i_ < 240; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 a5;
  undefined4 uVar10;
  
  (*(uint *)(fr0_ - 0x60)) = 0x80000000;
  (*(undefined4 *)(fr0_ - 0x5c)) = 0;
  (*(undefined4 *)(fr0_ - 0x58)) = 0x800400;
  (*(undefined4 *)(fr0_ - 0x54)) = 0;
  (*(undefined4 *)(fr0_ - 0x50)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x4c)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x48)) = 0xffffffff;
  (*(undefined4 *)(fr0_ - 0x44)) = 0xffffffff;
  puVar7 = &(*(uint *)(fr0_ - 0x60));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 1) {
    (*(undefined4 *)(unsigned)(unsigned)0xff000038) = 0x10;
    (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = 0x10;
    (*(uint *)(fr0_ - 0x60)) = ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) & 7) << 0x18 | 0x80000000;
    ar6 = 0x20;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,puVar7,0x20,
                 ar7));
    ar5 = puVar7;
  }
  iVar4 = (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20b708(ar4,ar5,ar6,ar7));
  if (iVar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
    return iVar4;
  }
  if ((*(uint *)(unsigned)(ar4 + 0x18) & 0x10) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa114) = (*(uint *)(unsigned)(ar4 + 0xc) & 0xfffffff) >> 2;
  }
  else {
    uVar5 = (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0xe4,ar5,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa114) = (uVar5 & 0x1f) << 3;
  }
  uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa118) = *(uint *)(unsigned)(ar4 + 0x1c) | 0x1000000;
  puVar7 = (uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) * 4);
  uVar9 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f08) & 1;
  (*(unsigned *)(fr0_ - 0x6c) = (unsigned)(unsigned long)(puVar7 + -0x1ced5835));
  (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(puVar7 + -0x1ced5821));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
    iVar4 = 0;
    do {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) == 0) goto LAB_8c20bf52;
      (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd4));
    iVar4 = 1;
LAB_8c20bf52:
    if (iVar4 != 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 0;
      goto override_prt_8c20c05a_7a4d7f16;
    }
  }
  puVar7[-0x1ced5835] = *((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218);
  puVar7[-0x1ced5831] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[1];
  puVar7[-0x1ced582d] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[2];
  puVar7[-0x1ced5829] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[3];
  puVar7[-0x1ced5825] = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4aa218)[4];
  (*(uint *)(fr0_ - 0x74)) = 0;
  do {
    iVar4 = (*(uint *)(fr0_ - 0x74)) * 4;
    iVar8 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c) + iVar4) - *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x6c));
    if (iVar8 < 0) {
      iVar8 = iVar8 + 3;
    }
    *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) = (iVar8 >> 2) << 2;
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) || ((*(uint *)(fr0_ - 0x74)) != (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0))) {
      if ((int)(*(uint *)(fr0_ - 0x74)) < 0) {
        uVar6 = 1 >> (~(*(uint *)(fr0_ - 0x74)) & 0x1f) + 1;
      }
      else {
        uVar6 = 1 << ((*(uint *)(fr0_ - 0x74)) & 0x1f);
      }
      if ((uVar6 & (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014)) != 0) {
        ar6 = 4;
        puVar7 = (uint *)(unsigned)((undefined1 *)(unsigned)0x8c26d420);
        (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(undefined4 *)(unsigned)(iVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)),((undefined1 *)(unsigned)0x8c26d420),4,ar7));
        *(int *)(unsigned)(iVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) = *(int *)(unsigned)(iVar4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c)) + 0x20;
        if (*(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa070) + iVar4) < *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70))) {
          (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c2062c8(2,puVar7,ar6,ar7));
        }
      }
    }
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d60);
    (*(unsigned *)(fr0_ - 0x70) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x70)) + 4));
    (*(unsigned *)(fr0_ - 0x6c) = (unsigned)(unsigned long)(((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x6c)) + 4));
    (*(uint *)(fr0_ - 0x74)) = (*(uint *)(fr0_ - 0x74)) + 1;
  } while ((*(uint *)(fr0_ - 0x74)) < 5);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
  bVar1 = false;
  ar5 = puVar7;
  do {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c050;
    (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
  } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0));
  bVar1 = true;
LAB_8c20c050:
  if (!bVar1) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 1;
    iVar4 = uVar9 << 5;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,1,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,0,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x124,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fdc),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(300,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd8),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x128,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd0),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x130,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fcc),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x164,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd4),ar6,ar7));
      ar5 = (uint *)(unsigned)0x80000000;
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x144,0x80000000,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0x144,ar5,ar6,ar7));
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
    bVar1 = false;
    do {
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c18e;
      (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),ar5,ar6,ar7));
    } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0));
    bVar1 = true;
LAB_8c20c18e:
    if (bVar1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 0;
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
      return 0xfffffffe;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f10) = uVar5;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f14) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f18) = 0;
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) {
      uVar5 = 0xff;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0xff000038) = 0x10;
      (*(undefined4 *)(unsigned)(unsigned)0xff00003c) = 0x10;
      ar6 = 4;
      ar5 = (uint *)(unsigned)((undefined1 *)(unsigned)0x8c26d420);
      (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20731e(*(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4aa21c) + (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0) * 4) & 0x3ffffff | 0xe0000000,
                   ((undefined1 *)(unsigned)0x8c26d420),4,ar7));
      uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9fd0);
    }
    ({ unsigned long ri0_ = (unsigned long)(iVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 240)); FUN_8c20b160(uVar5,ar5,ar6,ar7); });
    uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
    uVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60);
    uVar5 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8);
    if (*(uint *)(unsigned)(ar4 + 0x10) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf8)) {
      uVar5 = *(uint *)(unsigned)(ar4 + 0x10) - 1;
    }
    a5 = 0;
    uVar9 = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf4);
    if (*(uint *)(unsigned)(ar4 + 0xc) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bf4)) {
      uVar9 = *(uint *)(unsigned)(ar4 + 0xc) - 1;
    }
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20a482(0,0,uVar9,uVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa11c) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa120) = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e60) = uVar2;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9e64) = uVar3;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c20b5a0(((undefined1 *)(unsigned)0x8c4aa110),a5,uVar9,uVar5));
    (*(undefined4 *)(unsigned)(unsigned)0x8c4a9d60) = uVar10;
    (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),a5,uVar9,uVar5));
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) = 0;
      bVar1 = false;
      do {
        if ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9db4) == 0) goto LAB_8c20c350;
        (vsp = ((unsigned long)(fr0_ - 240)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4a9e14)))((*(undefined4 *)(unsigned)(unsigned)0x8c4a9e18),a5,uVar9,uVar5));
      } while ((*(undefined4 *)(unsigned)(unsigned)0x8c4a9f1c) <= (*(undefined4 *)(unsigned)(unsigned)0x8c4a9dd0));
      bVar1 = true;
LAB_8c20c350:
      if (bVar1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4a9f24) = 0;
        return 0xfffffffd;
      }
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,1,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(8,0,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x124,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fdc),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(300,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd8),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x128,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd0),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x130,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fcc),uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x164,*(undefined4 *)(unsigned)(iVar4 + -0x73b55fd4),uVar9,uVar5));
      uVar10 = 0x80000000;
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a844(0x144,0x80000000,uVar9,uVar5));
      (vsp = ((unsigned long)(fr0_ - 240)), pvr_20a876(0x144,uVar10,uVar9,uVar5));
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c275710) = 0;
    *(unsigned *)0x8c4a9e30 = (unsigned)(unsigned long)((fr0_ + (int)0xffffff88));
    return 0;
  }
override_prt_8c20c05a_7a4d7f16:
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9db8) = 0;
  (vsp = ((unsigned long)(fr0_ - 240)), FUN_8c210cc0((*(undefined4 *)(unsigned)(unsigned)0x8c27570c),ar5,ar6,ar7));
  return 0xffffffff;
}

__asm__(".globl _FUN_8c20bdc0\n.set _FUN_8c20bdc0, _FUN_8c20bdc0_def\n");
