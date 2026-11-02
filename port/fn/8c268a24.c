#include "../decls.h"
undefined4 FUN_8c268a24_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  
  pcVar1 = 0x8c4bd580;
  iVar5 = (int)0x480;
  iVar8 = (int)0x90;
  pcVar4 = 0x8c4bd580 + iVar5;
  pcVar6 = 0x8c4bd580;
  pcVar7 = 0x8c4bd580;
  do {
    if (*pcVar7 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268d66(pcVar6,ar5,ar6,ar7);
    }
    pcVar7 = pcVar7 + iVar8;
    pcVar6 = pcVar6 + iVar8;
  } while (pcVar7 < pcVar4);
  pcVar6 = pcVar1;
  pcVar7 = pcVar1;
  pcVar4 = pcVar1;
  do {
    if (*pcVar4 == '\x01') {
      s_E1205_Illigal_parameter_MWRN_268c80(pcVar7,pcVar6,ar6,ar7);
    }
    pcVar4 = pcVar4 + iVar8;
    pcVar7 = pcVar7 + iVar8;
  } while (pcVar4 < pcVar1 + iVar5);
  memset(pcVar1,0,iVar5);
  memset(0x8c4bda00,0,(int)0x820);
  uVar2 = 0x80808080;
  iVar5 = 0;
  iVar8 = (int)0x200;
  puVar3 = 0x8c4be220;
  do {
    iVar5 = iVar5 + 1;
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  } while (iVar5 < iVar8);
  uVar2 = (**(code **)(*(int *)(&DATA_8c2785cc) + 0x10))();
  return uVar2;
}

__asm__(".globl _FUN_8c268a24\n.set _FUN_8c268a24, _FUN_8c268a24_def\n");
