#include "../decls.h"
undefined4 FUN_8c093aec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  double in_dr0;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  double in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined8 uStack_a0;
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = ar6;
  uVar4 = ar7;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  ar5_00 = ar4 + 0x24c;
  Vec3_assign(auStack_2c,ar5_00,uVar2,uVar4);
  iVar1 = *(int *)(ar4 + 0x40);
  if (iVar1 == 0) {
LAB_8c093b3c:
    if (*(char *)(ar4 + 0x280) == '\x01') {
      uVar4 = 0;
      uVar2 = 0xffffffff;
      uVar3 = 0;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4);
      *(undefined1 *)(ar4 + 0x280) = 0;
    }
    else {
      iVar1 = FUN_8c034148(ar4 + 0xb0,0,uVar2,uVar4);
      if ((iVar1 != 1) && (iVar1 != 2)) {
        Vec3_dtor(auStack_2c,0xffffffff,uVar2,uVar4);
        return 1;
      }
    }
    FUN_8c022fc0(ar5,auStack_2c,uVar2,uVar4);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = in_xd0;
    }
    else {
      dVar6 = *(double *)(ar4 + 0x24);
    }
    if (cVar8 == '\0') {
      fVar5 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar9 == '\0') {
      *(float *)(ar4 + 0x30) = fVar5;
    }
    else {
      *(double *)(ar4 + 0x30) = in_dr0;
      fVar5 = 2.0;
    }
    uVar2 = ar6;
    uVar4 = ar7;
    FUN_8c032518(ar4,ar5,ar6,ar7);
    Vec3_assign(ar4 + 0x24c,auStack_4c,uVar2,uVar4);
    Vec3_dtor(auStack_4c,0xffffffff,uVar2,uVar4);
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x40a00000,fVar5);
    }
    else {
      in_dr0 = -8.360315941118363e-251;
    }
    uVar2 = ar7;
    uVar4 = FUN_8c032788(ar4,ar4 + 0x24c,ar6,ar7);
    Vec3_assign(ar4 + 0x24c,uVar4,ar6,uVar2);
    Vec3_assign(auStack_2c,ar4 + 0x24c,ar6,uVar2);
    uVar4 = 0x8c2846e8;
    FUN_8c031b68(ar4,0x8c2846e8,ar6,uVar2);
    FUN_8c031c64(ar4,uVar4,ar6,uVar2);
    *(undefined4 *)(ar4 + 0x40) = 3;
    ar5_00 = 0x24;
    uVar2 = ar5;
    FUN_8c033474(ar4,0x24,ar5,ar7);
    uVar4 = ar7;
  }
  else if (iVar1 != 3) {
    if (iVar1 != 5) goto LAB_8c093cfc;
    goto LAB_8c093b3c;
  }
  s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5_00,uVar2,uVar4);
  FUN_8c0231c8(ar4 + 0x14,ar5_00,uVar2,uVar4);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(0xc1700000,SUB84(in_dr0,0));
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    dVar6 = 16777228.08984375;
  }
  if (cVar8 == '\0') {
    bVar7 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    bVar7 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
  }
  if (bVar7) {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0xc1700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = 16777228.08984375;
    }
    if (cVar8 == '\0') {
      in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
    }
    else {
      in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
    }
  }
  else {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0x41700000,SUB84(dVar6,0));
    }
    else {
      in_dr0 = -7.950726470801028e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
    }
    else {
      bVar7 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        in_dr0 = (double)CONCAT44(0x41700000,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = -7.950726470801028e-251;
      }
      if (cVar8 == '\0') {
        in_dr0 = (double)CONCAT44((float)((ulonglong)in_dr0 >> 0x20) - in_fr15,SUB84(in_dr0,0));
      }
      else {
        in_dr0 = in_dr0 - (double)CONCAT44(in_fr14,in_fr15);
      }
    }
  }
  FUN_8c02374c(ar4 + 0x14,ar5_00,uVar2,uVar4);
  Vec3_assign(ar4 + 0x80,auStack_5c,uVar2,uVar4);
  Vec3_dtor(auStack_5c,0xffffffff,uVar2,uVar4);
LAB_8c093cfc:
  uVar3 = ar5;
  Vec3_sub(auStack_2c,ar5,uVar2,uVar4,auStack_6c);
  Vec3_normalize(auStack_6c,uVar3,uVar2,uVar4);
  Vec3_ctor_copy(auStack_3c,auStack_7c,uVar2,uVar4);
  Vec3_dtor(auStack_7c,0xffffffff,uVar2,uVar4);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_6c,0xffffffff,uVar2,uVar4);
  FUN_8c0230f0(ar4 + 0x14,uVar3,uVar2,uVar4,auStack_8c);
  FUN_8c0230f0(auStack_3c,uVar3,uVar2,uVar4,(int)&uStack_a0 + 4);
  FUN_8c022dac(auStack_8c,(int)&uStack_a0 + 4,uVar2,uVar4);
  dVar6 = in_dr0;
  if (cVar9 == '\0') {
    uStack_a0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_a0+4)),(int)((ulonglong)in_dr0 >> 0x20));
    dVar6 = uStack_a0;
  }
  uStack_a0 = dVar6;
  Vec3_dtor((int)&uStack_a0 + 4,0xffffffff,uVar2,uVar4);
  Vec3_dtor(auStack_8c,0xffffffff,uVar2,uVar4);
  uVar2 = FUN_8c097ba4(ar4,auStack_2c,ar5,uVar4);
  Vec3_dtor(auStack_3c,0xffffffff,ar5,uVar4);
  Vec3_dtor(auStack_2c,0xffffffff,ar5,uVar4);
  return uVar2;
}

__asm__(".globl _FUN_8c093aec\n.set _FUN_8c093aec, _FUN_8c093aec_def\n");
