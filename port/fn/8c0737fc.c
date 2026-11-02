#include "../decls.h"
undefined4 FUN_8c0737fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined8 in_dr0;
  double dVar6;
  code *pcVar7;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar8;
  char cVar9;
  char cVar10;
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [20];
  
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  uVar1 = ar5;
  uVar3 = ar6;
  Vec3_sub(ar6,ar5,ar6,ar7,auStack_3c);
  uVar1 = Vec3_length(auStack_3c,uVar1,uVar3,ar7);
  Vec3_ctor_copy(auStack_2c,uVar1,uVar3,ar7);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_3c,0xffffffff,uVar3,ar7);
  FUN_8c0230f0(ar4 + 0x14,uVar1,uVar3,ar7,auStack_4c);
  FUN_8c0230f0(auStack_2c,uVar1,uVar3,ar7,auStack_5c);
  FUN_8c022dac(auStack_4c,auStack_5c,uVar3,ar7);
  if (cVar10 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  Vec3_dtor(auStack_5c,0xffffffff,uVar3,ar7);
  ar5_00 = -1;
  Vec3_dtor(auStack_4c,0xffffffff,uVar3,ar7);
  iVar2 = *(int *)(ar4 + 0x40);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      FUN_8c073c9c(ar4,ar5_00,uVar3,ar7);
      uVar3 = (undefined4)in_dr0;
      uVar1 = ar6;
      FUN_8c031bb4(ar4,ar5,ar6,ar7);
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44(0x42340000,uVar3);
      }
      else {
        dVar6 = 2.89140188323616e-312;
      }
      if (cVar9 == '\0') {
        bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
      }
      if (bVar8) {
        *(undefined4 *)(ar4 + 0x220) = 0;
      }
      else {
        uVar1 = FUN_8c023334(ar4 + 0x14,auStack_2c,uVar1,ar7);
        *(undefined4 *)(ar4 + 0x220) = uVar1;
      }
      if (cVar10 == '\0') {
        in_dr0 = CONCAT44(0x40d9999a,*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_dr0 = 0x4093333340d9999a;
      }
      if (cVar9 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 1;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0);
      }
      else {
        ar7 = 0;
        uVar3 = 0xffffffff;
        uVar1 = 4;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0xffffffff,0);
      }
      s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar3,ar7);
      ar5_00 = ar4 + 0x14;
      Vec3_assign(ar4 + 0x230,ar5_00,uVar3,ar7);
    case 1:
      fVar5 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar2 = *(int *)(ar4 + 0x220);
      if (iVar2 == 0) {
        iVar2 = FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7);
        if (0 < iVar2) {
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
      }
      else if ((iVar2 == 3) || (iVar2 == 4)) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7);
        FUN_8c0230f0(ar4 + 0x230,ar5_00,uVar3,ar7,auStack_6c);
        FUN_8c0230f0(ar4 + 0x14,ar5_00,uVar3,ar7,auStack_7c);
        FUN_8c022dac(auStack_6c,auStack_7c,uVar3,ar7);
        if (cVar10 == '\0') {
          pcVar7 = (code *)0x40a00000;
        }
        else {
          fVar5 = 5.0;
          pcVar7 = Vec3_dtor;
        }
        Vec3_dtor(auStack_7c,0xffffffff,uVar3,ar7);
        Vec3_dtor(auStack_6c,0xffffffff,uVar3,ar7);
        if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
          ar7 = 0;
          uVar1 = 0xffffffff;
          iVar2 = *(int *)(ar4 + 0x220) + 6;
          s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar2,0xffffffff,0);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar2,uVar1,ar7);
          *(undefined4 *)(ar4 + 0x40) = 3;
        }
      }
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar3 = ar5;
      break;
    case 3:
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar1 = (undefined4)in_dr0;
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar6,ar5,ar7);
      uVar3 = ar5;
      if ((iVar2 < 0xb) && (-1 < iVar2)) {
                    
        switch(iVar2) {
        case 0:
          CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
          FUN_8c031e84(ar4,ar6,ar5,ar7);
          uVar3 = ar5;
          break;
        case 1:
          FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
          uVar3 = ar5;
          break;
        default:
          if (cVar10 == '\0') {
            dVar6 = (double)CONCAT44(0x42340000,uVar1);
          }
          else {
            dVar6 = 3.74020019962227e-312;
          }
          if (cVar9 == '\0') {
            bVar8 = in_fr15 < (float)((ulonglong)dVar6 >> 0x20);
          }
          else {
            bVar8 = (double)CONCAT44(in_fr14,in_fr15) < dVar6;
          }
          if (bVar8) {
            FUN_8c034148(ar4 + 0xb0,0,ar5,ar7);
            uVar3 = ar5;
          }
          else {
            CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar6,ar5,ar7);
            uVar3 = ar5;
          }
          break;
        case 4:
          break;
        }
      }
      break;
    case 4:
      iVar2 = get_field_1c_026dd8(ar4 + 0xb0,ar5_00,uVar3,ar7);
      if (iVar2 == 0) {
        CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,uVar3,ar7);
      }
      else {
        FUN_8c034148(ar4 + 0xb0,0,uVar3,ar7);
      }
      uVar4 = FUN_8c031764(ar4,ar6,ar5,ar7);
      uVar3 = ar5;
    }
  }
  Vec3_dtor(auStack_2c,0xffffffff,uVar3,ar7);
  return uVar4;
}

__asm__(".globl _FUN_8c0737fc\n.set _FUN_8c0737fc, _FUN_8c0737fc_def\n");
