#include "../decls.h"
undefined4 FUN_8c07f8e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  undefined4 in_fr3;
  undefined4 uVar7;
  double dVar8;
  undefined8 in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  int *ain0;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar3 = 1;
  ar6_00 = ar6;
  ain0 = ar7;
  uVar1 = (**(code **)(*ar7 + 0x10c))(ar7,ar5,ar6,ar7);
  Vec3_ctor_copy(&uStack_2c,uVar1,ar6_00,ar7);
  uVar1 = ar5;
  Vec3_sub(ar6,ar5,ar6_00,ar7,auStack_4c);
  Vec3_normalize(auStack_4c,uVar1,ar6_00,ar7);
  Vec3_ctor_copy(auStack_3c,auStack_5c,ar6_00,ar7);
  Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
  if (cVar11 == '\0') {
    dVar8 = (double)CONCAT44(uStack_2c,in_fr3);
    dVar5 = (double)CONCAT44(0x40a00000,*(undefined4 *)(ar4 + 0x48));
  }
  else {
    uStack_24 = 0xdc;
    dVar8 = (double)CONCAT44(0x444d0000,uStack_2c);
    in_xd0 = *(undefined8 *)(ar4 + 0x48);
    dVar5 = 6.28646433727248e-312;
  }
  uStack_28 = 0x444d0000;
  if (cVar10 == '\0') {
    fVar6 = (float)((ulonglong)dVar5 >> 0x20);
    fVar4 = SUB84(dVar5,0) * fVar6;
    dVar5 = (double)CONCAT44(fVar6,fVar4);
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) + fVar4,SUB84(dVar8,0));
  }
  else {
    dVar5 = dVar5 * dVar5;
    dVar8 = dVar8 + dVar5;
  }
  fVar4 = (float)((ulonglong)dVar5 >> 0x20);
  uVar7 = (undefined4)((ulonglong)dVar8 >> 0x20);
  uStack_2c = uVar7;
  if (cVar11 != '\0') {
    uStack_2c = SUB84(dVar8,0);
    uStack_28 = uVar7;
  }
  if (*(int *)(ar4 + 0x128) < 6) {
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(ar4 + 300);
    if ((iVar2 < 6) && (-1 < iVar2)) {
                    
      switch(iVar2) {
      case 0:
        if (*(int *)(ar4 + 0x2b8) == 1) {
          *(undefined4 *)(ar4 + 0x2b8) = 0;
          Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
          Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
          return 0;
        }
        Vec3_ctor_copy(auStack_6c,auStack_3c,ar6_00,ar7);
        ar6_00 = 1;
        iVar2 = FUN_8c0811b4(ar4,auStack_6c,1,ar7);
        Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7);
        if (iVar2 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x40) = 5;
        }
        break;
      case 1:
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        *(undefined4 *)(ar4 + 0x40) = 5;
        ar6_00 = 5;
        uVar1 = rand_range(ar4,3,5,ar7);
        *(undefined4 *)(ar4 + 0x294) = uVar1;
      case 2:
        Vec3_ctor_copy(auStack_7c,auStack_3c,ar6_00,ar7);
        FUN_8c082378(ar4,auStack_7c,ar6_00,ar7);
        Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        if (*(int *)(ar4 + 0x128) == 6) {
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x24;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x24,0xffffffff,0);
        }
        else {
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0x2e;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2e,0xffffffff,0);
        }
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
        break;
      case 3:
        *(undefined4 *)(ar4 + 0x178) = 1;
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar1,ar6_00,ar7);
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        if (cVar11 == '\0') {
          fVar6 = 90.0;
        }
        else {
          fVar4 = 90.0;
          fVar6 = 7.51096e-43;
        }
        if (cVar10 != '\0' || fVar6 <= fVar4) {
          *(undefined4 *)(ar4 + 0x218) = 0x10;
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
        break;
      case 4:
        Vec3_ctor_copy(auStack_8c,auStack_3c,ar6_00,ar7);
        uVar7 = SUB84(dVar8,0);
        FUN_8c082378(ar4,auStack_8c,ar6_00,ar7);
        uVar1 = 0xffffffff;
        Vec3_dtor(auStack_8c,0xffffffff,ar6_00,ar7);
        iVar2 = FUN_8c03f3ac(ar4 + 0xb0,uVar1,ar6_00,ar7);
        if (iVar2 == 7) {
          FUN_8c032ab0(ar4,uVar1,ar6_00,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        }
        *(undefined4 *)(ar4 + 0x178) = 1;
        CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44(0x40400000,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar8 = 1.3411048278844095e-08;
        }
        if (cVar10 == '\0' && SUB84(dVar8,0) < (float)((ulonglong)dVar8 >> 0x20)) {
          if (cVar11 == '\0') {
            dVar8 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x28));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x28);
            dVar8 = -7.957972460180408e-251;
          }
          if (cVar10 == '\0') {
            fVar4 = (float)((ulonglong)dVar8 >> 0x20);
            dVar8 = (double)CONCAT44(fVar4,SUB84(dVar8,0) + fVar4);
          }
          else {
            dVar8 = dVar8 + dVar8;
          }
          if (cVar11 == '\0') {
            *(int *)(ar4 + 0x28) = SUB84(dVar8,0);
          }
          else {
            *(undefined8 *)(ar4 + 0x28) = in_xd0;
          }
        }
        Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6_00,ar7,auStack_9c);
        Vec3_add(ar5,auStack_9c,ar6_00,ar7,auStack_ac);
        FUN_8c022fc0(auStack_ac,ar6,ar6_00,ar7);
        if (cVar11 == '\0') {
          dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),uVar7);
          dVar5 = (double)CONCAT44(0x3f99999a,*(undefined4 *)(ar4 + 0x48));
        }
        else {
          dVar5 = 3.051758535548288e-05;
        }
        if (cVar10 == '\0') {
          bVar9 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20) <
                  (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar9 = dVar5 * dVar5 < dVar8;
        }
        Vec3_dtor(auStack_ac,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_9c,0xffffffff,ar6_00,ar7);
        if (bVar9) {
          if (*(int *)(ar4 + 0x2b8) == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            *(undefined4 *)(ar4 + 0x2b8) = 0;
            *(undefined4 *)(ar4 + 0x2b4) = 0;
          }
        }
        else {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
        }
        break;
      case 5:
        *(undefined4 *)(ar4 + 0x178) = 1;
        ar6_00 = ar5;
        FUN_8c031c74(ar4,ar5,ar5,ar7);
        iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6_00,ar7);
        if (iVar2 == 1) {
          uVar3 = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          *(undefined4 *)(ar4 + 0x294) = 0;
          ar7 = (int *)0x0;
          ar6_00 = 0xffffffff;
          uVar1 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,ar6_00,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar1,ar6_00,ar7,ain0);
          *(undefined4 *)(ar4 + 0x178) = 0;
          *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
        }
      }
    }
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6_00,ar7);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c07f8e0\n.set _FUN_8c07f8e0, _FUN_8c07f8e0_def\n");
