#include "../decls.h"
undefined4 FUN_8c0831c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float in_fr1;
  float fVar7;
  double dVar8;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar6 = 1;
  if (*(int *)(ar4 + 0x128) < 3) {
    uVar6 = 0;
  }
  else {
    iVar1 = *(int *)(ar4 + 300);
    if ((iVar1 < 5) && (-1 < iVar1)) {
                    
      switch(iVar1) {
      case 0:
        FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7,auStack_24);
        Vec3_assign(ar4 + 0x54,auStack_24,ar6,ar7);
        ar5 = 0xffffffff;
        Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
        if (cVar10 == '\0') {
          in_fr1 = *(float *)(ar4 + 0x5c);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x5c);
        }
        if (cVar9 == '\0' && in_fr1 < 0.0) {
          if (cVar10 == '\0') {
            dVar8 = (double)CONCAT44(0xbf800000,*(undefined4 *)(ar4 + 0x5c));
          }
          else {
            in_xd0 = *(undefined8 *)(ar4 + 0x5c);
            dVar8 = 6.38186089609776e-312;
          }
          if (cVar9 == '\0') {
            fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            fVar7 = SUB84(dVar8 * dVar8,0);
          }
          if (cVar10 == '\0') {
            *(float *)(ar4 + 0x5c) = fVar7;
          }
          else {
            *(undefined8 *)(ar4 + 0x5c) = in_xd0;
          }
        }
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      case 1:
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_34,ar4 + 0x54,ar6,ar7);
        uVar3 = 0;
        iVar1 = FUN_8c0811b4(ar4,auStack_34,0,ar7);
        Vec3_dtor(auStack_34,0xffffffff,uVar3,ar7);
        if (iVar1 == 0) {
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          uVar4 = 0;
          uVar2 = 0xffffffff;
          uVar3 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,uVar4);
        }
        break;
      case 2:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        if (cVar10 == '\0') {
          dVar8 = (double)CONCAT44(0x3f7ae148,*(undefined4 *)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0x28);
          dVar8 = -7.932371482664937e-251;
        }
        if (cVar9 == '\0') {
          fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar7 = SUB84(dVar8 * dVar8,0);
        }
        if (cVar10 == '\0') {
          *(float *)(ar4 + 0x28) = fVar7;
        }
        else {
          *(undefined8 *)(ar4 + 0x28) = in_xd0;
        }
        Vec3_ctor_copy(auStack_44,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_44,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          uVar5 = 6;
          uVar4 = 4;
          uVar2 = rand_range(ar4,4,6,ar7);
          *(undefined4 *)(ar4 + 0x294) = uVar2;
          uVar2 = get_field_94_02aaa4(uVar3,uVar4,uVar5,ar7);
          iVar1 = libgcc_divide_helper_0101e4(uVar2,5,uVar5,ar7);
          if ((iVar1 == 3) || (iVar1 == 8)) {
            iVar1 = 2;
          }
          else {
            iVar1 = rand_range(ar4,0,2,ar7);
          }
          if (*(int *)(ar4 + 0x128) < 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x13;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          else if (*(int *)(ar4 + 0x128) == 6) {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x25;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          else {
            uVar4 = 0;
            uVar2 = 0xffffffff;
            ar5_00 = iVar1 + 0x2f;
            s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,ar5_00,0xffffffff,0);
          }
          if (iVar1 == 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 2;
            FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4);
            FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4,uVar3);
          }
          else {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c032ab0(ar4,ar5_00,uVar2,uVar4);
            FUN_8c032204(ar4 + 0xb0,ar5_00,uVar2,uVar4,uVar3);
          }
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,uVar2,uVar4);
          *(int *)(ar4 + 0x218) = iVar1 + 0xb;
        }
        break;
      case 3:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_54,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_54,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
        iVar1 = FUN_8c03f3ac(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 7) {
          FUN_8c032ab0(ar4,uVar2,ar6,ar7);
          FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7,uVar3);
          iVar1 = *(int *)(ar4 + 0x294) + -1;
          *(int *)(ar4 + 0x294) = iVar1;
          if (iVar1 < 1) {
            *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
            FUN_8c032204(ar4 + 0xb0,uVar2,ar6,ar7,uVar3);
          }
        }
        break;
      case 4:
        uVar3 = ar6;
        FUN_8c031748(ar4,ar5,ar6,ar7);
        Vec3_ctor_copy(auStack_64,ar4 + 0x54,ar6,ar7);
        FUN_8c082378(ar4,auStack_64,ar6,ar7);
        uVar2 = 0xffffffff;
        Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
        if (iVar1 == 1) {
          *(undefined4 *)(ar4 + 0x294) = 0;
          *(undefined4 *)(ar4 + 300) = 0;
          uVar6 = 0;
          *(undefined4 *)(ar4 + 0x2b4) = 0;
          uVar5 = 0;
          uVar4 = 0xffffffff;
          uVar2 = 0;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar4,uVar5);
          *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
          FUN_8c03c314(ar4,uVar2,uVar4,uVar5);
          FUN_8c032204(ar4 + 0xb0,uVar2,uVar4,uVar5,uVar3);
        }
      }
    }
  }
  return uVar6;
}

__asm__(".globl _FUN_8c0831c8\n.set _FUN_8c0831c8, _FUN_8c0831c8_def\n");
