#include "../decls.h"
undefined4 FUN_8c268a36_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  undefined4 *a7;
  int unaff_r9;
  int unaff_r10;
  char *unaff_r11;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = (int)0x90;
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  do {
    if (*pcVar3 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar2,ar5,ar6,ar7);
    }
    pcVar3 = pcVar3 + iVar5;
    pcVar2 = pcVar2 + iVar5;
  } while (pcVar3 < (char *)(unaff_r9 + unaff_r10));
  pcVar2 = unaff_r11;
  pcVar3 = unaff_r11;
  pcVar4 = unaff_r11;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar3,pcVar2,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar5;
    pcVar3 = pcVar3 + iVar5;
  } while (pcVar4 < unaff_r11 + unaff_r10);
  memset(unaff_r11,0,unaff_r10,ar7);
  memset(0x8c4bda00,0,(int)0x820,ar7);
  uVar1 = 0x80808080;
  iVar5 = 0;
  a6 = (int)0x200;
  a7 = 0x8c4be220;
  do {
    iVar5 = iVar5 + 1;
    *a7 = uVar1;
    a7 = a7 + 1;
  } while (iVar5 < a6);
  uVar1 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))(iVar5,uVar1,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c268a36\n.set _FUN_8c268a36, _FUN_8c268a36_def\n");
