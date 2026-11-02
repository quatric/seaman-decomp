#include "../decls.h"
undefined4 Class_12ad14_m1_0a09e8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined1 *ar7)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined8 in_dr0;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffff84;
  undefined8 uStack_78;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  cVar10 = '\0';
  cVar9 = '\0';
  Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  uVar3 = 1;
  *(undefined4 *)(ar4 + 0x128) = 1;
  if ((*(int *)(ar4 + 0x124) == 0xb) || (*(int *)(ar4 + 0x124) == 0xc)) {
    FUN_8c03f460(auStack_1c,ar5[3],ar6,ar7);
    ar7 = auStack_1c;
    ar6 = ar5[6];
    uVar3 = FUN_8c0a0c88(ar4,*ar5,ar6,ar7);
    free_if_nonnull_wrap_102790(auStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c0a37c8(ar4,ar5,ar6,ar7);
    if (iVar2 != 3) {
      FUN_8c03f460(auStack_28,ar5[3],ar6,ar7);
      ar7 = auStack_28;
      ar6 = ar5[6];
      uVar3 = FUN_8c0a0c88(ar4,*ar5,ar6,ar7);
      free_if_nonnull_wrap_102790(auStack_28,0xffffffff,ar6,ar7);
      (*(uint*)((uchar*)&uStack_78+4)) = uVar3;
    }
  }
  FUN_8c02f2c0(*ar5,uVar3,ar6,ar7,in_stack_ffffff84);
  if (*(int *)(ar4 + 0x178) == 1) {
    uVar3 = 1;
    FUN_8c02f2c0(*ar5,1,ar6,ar7,in_stack_ffffff84);
  }
  if ((*(int *)(ar4 + 0x124) != 6) && (*(int *)(ar4 + 0x124) != 0xb)) {
    uVar3 = *(undefined4 *)(ar5[1] + 4);
    FUN_8c031ab4(ar4,uVar3,ar6,ar7);
  }
  (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar3,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar10 == '\0') {
    uStack_78 = CONCAT44((*(uint*)((uchar*)&uStack_78+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_78;
  }
  uStack_78 = uVar1;
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),in_fr3);
    dVar5 = (double)CONCAT44(0x41200000,(int)uStack_78);
  }
  else {
    dVar7 = *(double *)(*(int *)(uint)ar5[1] + 4);
    dVar5 = -3.051758552885531e-05;
    in_xd0 = uStack_78;
  }
  if (cVar9 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) - fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    bVar8 = (float)((ulonglong)dVar7 >> 0x20) < fVar4;
  }
  else {
    dVar5 = dVar5 - dVar5;
    bVar8 = dVar7 < dVar5;
  }
  fVar4 = SUB84(dVar5,0);
  if (!bVar8) {
    if (cVar10 == '\0') {
      fVar4 = *(float *)(ar4 + 0x18);
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x18);
    }
    if (cVar9 == '\0' && 0.0 < fVar4) {
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(0xbf000000,*(undefined4 *)(ar4 + 0x18));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x18);
        dVar7 = -7.937143354252696e-251;
      }
      if (cVar9 == '\0') {
        fVar4 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x18) = fVar4;
      }
      else {
        *(undefined8 *)(ar4 + 0x18) = in_xd0;
      }
      Vec3_length(ar4 + 0x14,uVar3,ar6,ar7);
    }
  }
  Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_38);
  Vec3_add(auStack_38,ar4 + 0x224,ar6,ar7,auStack_48);
  Vec3_add(auStack_48,ar4 + 0x90,ar6,ar7,auStack_58);
  Vec3_add(auStack_58,ar4 + 0x13c,ar6,ar7,auStack_68);
  Vec3_assign(ar4 + 4,auStack_68,ar6,ar7);
  Vec3_dtor(auStack_68,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_48,0xffffffff,ar6,ar7);
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  vec3_clear(ar4 + 0x13c,uVar3,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12ad14_m1_0a09e8\n.set _Class_12ad14_m1_0a09e8, _Class_12ad14_m1_0a09e8_def\n");
