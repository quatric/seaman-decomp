#include "../decls.h"
undefined4 FUN_8c07d904_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0;
  float fVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      FUN_8c031748(ar4,ar5,ar6,ar7);
      ar7 = 0;
      ar6 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      ar5_00 = &DAT_8c125e68;
      uVar2 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,ar6,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar2;
      if (*(int *)(ar4 + 0x220) == 3) {
        FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7);
      }
      else {
        FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
    case 1:
      fVar4 = (float)(in_dr0 >> 0x20);
      vec3_copy_8c02b5fc(auStack_18,ar4 + 0x254,ar6,ar7);
      FUN_8c023484(ar4 + 0x14,auStack_18,ar6,ar7,auStack_28);
      Vec3_assign(ar4 + 0x14,auStack_28,ar6,ar7);
      Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
      uVar2 = 0xffffffff;
      object_dtor_delete(auStack_18,0xffffffff,ar6,ar7);
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7);
      FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7,auStack_38);
      FUN_8c022dac(auStack_38,&DAT_8c125e68,ar6,ar7);
      if (cVar7 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar4 = 5.0;
        fVar5 = 9.24857e-43;
      }
      Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
      if (cVar6 == '\0' && fVar4 < fVar5) {
        *(undefined4 *)(ar4 + 0x294) = 0;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      if (*(int *)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
      }
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x2a4) = 1;
      uVar2 = ar5;
      CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
      iVar1 = *(int *)(ar4 + 0x294);
      *(int *)(ar4 + 0x294) = iVar1 + 1;
      if (iVar1 + 1 < 0x12d) {
        if (*(int *)(ar4 + 0x2a8) == 0) {
          *(undefined4 *)(ar4 + 300) = 0;
          uVar3 = 0;
        }
      }
      else {
        FUN_8c03f39c(uVar2,ar5,ar6,ar7);
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = FUN_8c026db0(ar4,ar5,ar6,ar7);
      if (iVar1 == 0xb) {
        iVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
        if (iVar1 == 1) {
          uVar2 = 0xb;
          s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0xb,ar6,ar7);
          s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7);
          *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
        }
      }
      else {
        FUN_8c034148(ar4 + 0xb0,0xb,ar6,ar7);
      }
      break;
    case 4:
      uVar2 = ar5;
      s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7);
      CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,uVar2);
      if (cVar7 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (cVar6 != '\0' || (float)in_dr0 <= 0.0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00);
        *(undefined4 *)(ar4 + 300) = 0;
        uVar3 = 0;
      }
    }
  }
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  return uVar3;
}

__asm__(".globl _FUN_8c07d904\n.set _FUN_8c07d904, _FUN_8c07d904_def\n");
