#include "../decls.h"
undefined4 FUN_8c2034c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  if (DAT_8c2753e8 == 1) {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x1000000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x1000000;
      DAT_8c2753f8 = 0x1000000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      puVar4 = &DAT_8c275400;
LAB_8c20362c:
      *(undefined4 *)(iVar1 + 8) = puVar4[2];
      puVar4[2] = iVar1;
      *(undefined4 *)(iVar1 + 4) = puVar4[3];
      puVar4[3] = iVar1;
      return 0;
    }
  }
  else {
    uVar5 = 0;
    iVar1 = s_HARDWARE_205e00(s_HARDWARE_8c26d280,s_EnableTexture16MB_8c26d28c,0,ar7);
    if (iVar1 == 1) {
      _DAT_8c4a9bc0 = 0x1000000;
      uVar2 = 0xe4;
      DAT_8c2753ec = 0x800000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x800000;
      DAT_8c2753f8 = 0x800000;
      DAT_8c2753fc = 0x800000;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    else {
      _DAT_8c4a9bc0 = 0x800000;
      DAT_8c2753ec = 0x400000;
      DAT_8c2753f0 = 0;
      DAT_8c2753f4 = 0x400000;
      DAT_8c2753f8 = 0x400000;
      DAT_8c2753fc = 0x400000;
      uVar2 = 0xe4;
      uVar3 = 0;
      pvr_20a844(0xe4,0,uVar5,ar7);
    }
    FUN_8c203400(uVar2,uVar3,uVar5,ar7);
    DAT_8c275410 = DAT_8c2753f4;
    DAT_8c275424 = DAT_8c2753fc;
    iVar1 = FUN_8c204e40(uVar2,uVar3,uVar5,ar7);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f0;
      *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753f4;
      *(int *)(iVar1 + 8) = DAT_8c275408;
      DAT_8c275408 = iVar1;
      *(int *)(iVar1 + 4) = DAT_8c27540c;
      DAT_8c27540c = iVar1;
      iVar1 = FUN_8c204e40(iVar1,&DAT_8c275400,uVar5,ar7);
      if (iVar1 != 0) {
        puVar4 = &DAT_8c275414;
        *(undefined4 *)(iVar1 + 0xc) = DAT_8c2753f8;
        *(undefined4 *)(iVar1 + 0x10) = DAT_8c2753fc;
        goto LAB_8c20362c;
      }
    }
  }
  return 3;
}

__asm__(".globl _FUN_8c2034c0\n.set _FUN_8c2034c0, _FUN_8c2034c0_def\n");
