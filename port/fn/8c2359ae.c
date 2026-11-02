#include "../decls.h"
undefined4 FUN_8c2359ae_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 in_r1;
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int unaff_r9;
  undefined4 unaff_r10;
  uint unaff_r11;
  int *unaff_r12;
  int unaff_r13;
  uint uVar4;
  undefined4 extraout_fr3;
  undefined4 uVar5;
  undefined4 extraout_fr3_00;
  undefined8 in_xd2;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(ain0 + (int)ar4) = *(undefined4 *)*unaff_r12;
  }
  else {
    in_xd2 = *(undefined8 *)*unaff_r12;
    *(undefined8 *)(ain0 + (int)ar4) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    ar4[2] = *(undefined4 *)(ain0 + *unaff_r12);
  }
  else {
    in_xd2 = *(undefined8 *)(ain0 + *unaff_r12);
    *(undefined8 *)(ar4 + 2) = in_xd2;
  }
  ar4[6] = *(undefined4 *)unaff_r12[1];
  *ar4 = unaff_r10;
  FUN_8c010794(0x20,in_r1,ar4);
  uVar4 = 1;
  uVar5 = extraout_fr3;
  if (1 < unaff_r9) {
    do {
      if ((int)uVar4 < 0) {
        unaff_r11 = ~(~uVar4 + 1 & 1) + 1;
      }
      else {
        unaff_r11 = uVar4 & 1;
      }
      puVar1 = (undefined8 *)(*unaff_r12 + uVar4 * 8);
      if (in_FPSCR_SZ == '\0') {
        uVar5 = *(undefined4 *)puVar1;
      }
      else {
        in_xd2 = *puVar1;
      }
      puVar2 = (undefined4 *)(unaff_r11 * 0x20 + unaff_r13);
      if (in_FPSCR_SZ == '\0') {
        puVar2[1] = uVar5;
      }
      else {
        *(undefined8 *)(puVar2 + 1) = in_xd2;
      }
      iVar3 = uVar4 * 8 + *unaff_r12;
      if (in_FPSCR_SZ == '\0') {
        puVar2[2] = *(undefined4 *)(iVar3 + 4);
      }
      else {
        in_xd2 = *(undefined8 *)(iVar3 + 4);
        *(undefined8 *)(puVar2 + 2) = in_xd2;
      }
      puVar2[6] = *(undefined4 *)(uVar4 * 4 + unaff_r12[1]);
      *puVar2 = unaff_r10;
      FUN_8c235294(unaff_r13,ar4 + 8,ar6,ar7);
      uVar4 = uVar4 + 1;
      uVar5 = extraout_fr3_00;
    } while ((int)uVar4 < unaff_r9);
  }
  uVar5 = FUN_8c235294(unaff_r11 * 0x20 + unaff_r13,unaff_r13 + 0x40,ar6,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c2359ae\n.set _FUN_8c2359ae, _FUN_8c2359ae_def\n");
