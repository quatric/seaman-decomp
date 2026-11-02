#include "../decls.h"
uint FUN_8c0839c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 ar7_00;
  uint uVar4;
  undefined4 uVar7;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_bc [16];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [12];
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [12];
  undefined1 auStack_24 [8];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar4 = 1;
  iVar1 = (**(code **)(**(int **)(ar5 + 0x18) + 0x1cc))(*(int **)(ar5 + 0x18),ar5,ar6,ar7);
  iVar1 = iVar1 + 4;
  Vec3_ctor_copy(auStack_24,iVar1,ar6,ar7);
  if (*(int *)(ar4 + 0x2b0) == 0) {
    iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7);
    if (iVar1 == 1) {
      ar7_00 = 0;
      uVar3 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      *(int *)(ar4 + 0x2b0) = *(int *)(ar4 + 0x2b0) + 1;
      uVar2 = **(undefined4 **)(ar5 + 4);
      Vec3_assign(ar4 + 0x280,uVar2,uVar3,ar7_00);
      *(undefined4 *)(ar4 + 0x294) = 1;
      if (cVar11 == '\0') {
        uVar7 = 0x42340000;
      }
      else {
        uVar7 = 0xac;
      }
      Vec3_set_xyz(auStack_30,uVar2,uVar3,ar7_00);
      FUN_8c023484(&DAT_8c125e68,auStack_30,uVar3,ar7_00,auStack_40);
      Vec3_scale(auStack_40,ar4 + 0x48,uVar3,ar7_00,auStack_50);
      Vec3_scale(auStack_50,&DAT_8c1379cc,uVar3,ar7_00,auStack_60);
      Vec3_add(ar4 + 0x280,auStack_60,uVar3,ar7_00,auStack_70);
      Vec3_assign(ar4 + 0x54,auStack_70,uVar3,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_50,0xffffffff,uVar3,ar7_00);
      Vec3_dtor(auStack_40,0xffffffff,uVar3,ar7_00);
      object_dtor_delete(auStack_30,0xffffffff,uVar3,ar7_00);
      FUN_8c022fc0(ar4 + 0x54,auStack_24,uVar3,ar7_00);
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar7);
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(uStack_1c,in_fr3);
          dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar8 = (double)CONCAT44(uStack_18,uStack_1c);
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                   SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
    }
  }
  else if (*(int *)(ar4 + 0x2b0) == 1) {
    ar6 = ar4 + 0x54;
    uVar2 = **(undefined4 **)(ar5 + 4);
    iVar1 = pure_virtual_stub(ar4,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      *(int *)(ar4 + 0x294) = *(int *)(ar4 + 0x294) + 1;
      if (cVar11 == '\0') {
        uVar3 = 0x42340000;
      }
      else {
        uVar3 = 0xac;
      }
      Vec3_set_xyz(auStack_7c,uVar2,ar6,ar7);
      FUN_8c023484(&DAT_8c125e68,auStack_7c,ar6,ar7,auStack_8c);
      Vec3_scale(auStack_8c,ar4 + 0x48,ar6,ar7,auStack_9c);
      Vec3_scale(auStack_9c,&DAT_8c1379d0,ar6,ar7,auStack_ac);
      Vec3_add(ar4 + 0x280,auStack_ac,ar6,ar7,auStack_bc);
      Vec3_assign(ar4 + 0x54,auStack_bc,ar6,ar7);
      Vec3_dtor(auStack_bc,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,ar6,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,ar6,ar7);
      object_dtor_delete(auStack_7c,0xffffffff,ar6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 5;
      bVar9 = *(int *)(ar4 + 0x294) < 9;
      if (!bVar9) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(undefined4 *)(ar4 + 0x2b0) = 0;
      }
      uVar4 = (uint)bVar9;
      FUN_8c022fc0(ar4 + 0x54,auStack_24,ar6,ar7);
      if (cVar11 == '\0') {
        uVar5 = CONCAT44(*(undefined4 *)(ar4 + 0x48),uVar3);
      }
      else {
        uVar5 = *(undefined8 *)(ar4 + 0x48);
      }
      if (cVar10 == '\0' && (float)uVar5 < (float)((ulonglong)uVar5 >> 0x20)) {
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(uStack_1c,in_fr3);
          dVar6 = (double)CONCAT44(0x40000000,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar8 = (double)CONCAT44(uStack_18,uStack_1c);
          dVar6 = -1.6035025660963675e-250;
        }
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) -
                                   SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20),SUB84(dVar8,0)
                                  );
        }
        else {
          dVar8 = dVar8 - dVar6 * dVar6;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x5c) = (int)((ulonglong)dVar8 >> 0x20);
        }
        else {
          *(double *)(ar4 + 0x5c) = dVar8;
        }
      }
      ar7 = *(undefined4 *)(ar5 + 0x18);
      ar6 = *(int *)(ar5 + 0xc);
      FUN_8c032788(ar4,ar4 + 0x54,ar6,ar7);
    }
  }
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0839c0\n.set _FUN_8c0839c0, _FUN_8c0839c0_def\n");
