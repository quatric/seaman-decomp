#include "../decls.h"
undefined4
FUN_8c0332b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,float *s4)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  double in_dr0;
  float fVar5;
  int iVar6;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double in_dr2;
  undefined8 in_xd0;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  cVar9 = '\0';
  cVar8 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_set_zero(&fStack_18,ar5,ar6,ar7);
  Vec3_sub(ar6,ar5,ar6_00,ar7_00,auStack_38);
  uVar1 = Vec3_length(auStack_38,ar5,ar6_00,ar7_00);
  Vec3_ctor_copy(auStack_28,uVar1,ar6_00,ar7_00);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6_00,ar7_00);
  FUN_8c0230f0(ar7,uVar1,ar6_00,ar7_00,auStack_48);
  FUN_8c0230f0(auStack_28,uVar1,ar6_00,ar7_00,auStack_58);
  FUN_8c022dac(auStack_48,auStack_58,ar6_00,ar7_00);
  fStack_14 = SUB84(in_dr0,0);
  fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    fStack_14 = fVar5;
    fVar5 = fStack_10;
  }
  fStack_10 = fVar5;
  Vec3_dtor(auStack_58,0xffffffff,ar6_00,ar7_00);
  Vec3_dtor(auStack_48,0xffffffff,ar6_00,ar7_00);
  ar5_00 = auStack_28;
  iStack_64 = FUN_8c023334(ar7,ar5_00,ar6_00,ar7_00);
  if (iStack_64 == 4) {
    if (cVar9 == '\0') {
      in_dr0 = (double)CONCAT44(0xbf800000,fStack_14);
    }
    else {
      in_xd0 = CONCAT44(fStack_10,fStack_14);
      in_dr0 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      in_dr0 = (double)CONCAT44(fVar5,SUB84(in_dr0,0) * fVar5);
    }
    else {
      in_dr0 = in_dr0 * in_dr0;
    }
    if (cVar9 == '\0') {
      fStack_14 = SUB84(in_dr0,0);
    }
    else {
      fStack_14 = (float)in_xd0;
      fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
    }
  }
  FUN_8c0231c8(auStack_28,ar5_00,ar6_00,ar7_00);
  iVar6 = (int)((ulonglong)in_dr0 >> 0x20);
  iStack_68 = iVar6;
  if (cVar9 != '\0') {
    iStack_68 = SUB84(in_dr0,0);
    iStack_64 = iVar6;
  }
  FUN_8c0231c8(ar7,ar5_00,ar6_00,ar7_00);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar9 == '\0') {
    in_dr0 = (double)CONCAT44(uVar1,iStack_68);
  }
  else {
    in_xd0 = CONCAT44(iStack_64,uVar1);
  }
  if (cVar8 == '\0') {
    fStack_18 = SUB84(in_dr0,0) - (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    fStack_18 = SUB84(in_dr0 - in_dr0,0);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(*s4,fStack_18);
  }
  else {
    fStack_18 = (float)in_xd0;
    fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
    uVar2 = *(undefined8 *)s4;
  }
  if (cVar8 != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (cVar9 == '\0') {
      in_dr2 = (double)CONCAT44(fStack_18,SUB84(in_dr2,0));
      dVar4 = (double)CONCAT44(0xbf800000,*s4);
    }
    else {
      in_dr2 = (double)CONCAT44(fStack_14,fStack_18);
      in_xd0 = *(undefined8 *)s4;
      dVar4 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)in_dr2 >> 0x20) <
              SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      bVar7 = in_dr2 < dVar4 * dVar4;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0xbf800000,*s4);
      }
      else {
        in_xd0 = *(undefined8 *)s4;
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        fStack_18 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_18 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        fStack_18 = (float)in_xd0;
        fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (cVar9 == '\0') {
    fStack_18 = *s4;
  }
  else {
    fStack_18 = (float)*(undefined8 *)s4;
    fStack_14 = (float)((ulonglong)*(undefined8 *)s4 >> 0x20);
  }
  if (cVar9 == '\0') {
    uVar2 = CONCAT44(s4[1],fStack_14);
  }
  else {
    in_xd0 = CONCAT44(fStack_10,fStack_14);
    uVar2 = *(undefined8 *)(s4 + 1);
  }
  if (cVar8 != '\0' || (float)uVar2 <= (float)((ulonglong)uVar2 >> 0x20)) {
    if (cVar9 == '\0') {
      dVar4 = (double)CONCAT44(fStack_14,SUB84(in_dr2,0));
      dVar3 = (double)CONCAT44(0xbf800000,s4[1]);
    }
    else {
      dVar4 = (double)CONCAT44(fStack_10,fStack_14);
      in_xd0 = *(undefined8 *)(s4 + 1);
      dVar3 = -7.941325842067545e-251;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)dVar4 >> 0x20) < SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20)
      ;
    }
    else {
      bVar7 = dVar4 < dVar3 * dVar3;
    }
    if (bVar7) {
      if (cVar9 == '\0') {
        dVar4 = (double)CONCAT44(0xbf800000,s4[1]);
      }
      else {
        in_xd0 = *(undefined8 *)(s4 + 1);
        dVar4 = -7.941325842067545e-251;
      }
      if (cVar8 == '\0') {
        fStack_14 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fStack_14 = SUB84(dVar4 * dVar4,0);
      }
      if (cVar9 != '\0') {
        fStack_14 = (float)in_xd0;
        fStack_10 = (float)((ulonglong)in_xd0 >> 0x20);
      }
    }
  }
  else if (cVar9 == '\0') {
    fStack_14 = s4[1];
  }
  else {
    uVar2 = *(undefined8 *)(s4 + 1);
    fStack_14 = (float)uVar2;
    fStack_10 = (float)((ulonglong)uVar2 >> 0x20);
  }
  vec3_copy_8c02b5fc(s0,&fStack_18,ar6_00,ar7_00);
  Vec3_dtor(auStack_28,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&fStack_18,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c0332b4\n.set _FUN_8c0332b4, _FUN_8c0332b4_def\n");
