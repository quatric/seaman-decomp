#include "../decls.h"
undefined4 FUN_8c1f2e3e_def(int ar4,int ar5,int ar6,int ar7,char *s0)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *a5;
  int iVar6;
  uint a6;
  uint uVar7;
  byte *ar5_00;
  byte *pbVar8;
  byte *ar4_00;
  uint uStack_44;
  ushort auStack_3c [2];
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  bVar2 = true;
  uStack_44 = 0;
  pcVar5 = s0;
  while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
    uStack_44 = uStack_44 + 1;
  }
  pcVar5 = (char *)(ar7 + 1);
  uVar7 = 1;
  uStack_24 = 1;
  iStack_34 = 0;
  pbVar8 = (byte *)(ar4 + 0x800);
  uStack_30 = 0;
  ar4_00 = pbVar8;
  iStack_38 = ar5;
  iStack_28 = ar6;
  do {
    if ((pbVar8 <= ar4_00) ||
       (ar5_00 = ar4_00, pbVar8 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar6 = (ar4 - (int)ar4_00) + 0x800;
      ar5_00 = (byte *)(ar4 - iVar6);
      FUN_8c1f2a5c(ar4_00,ar5_00,iVar6,ar7,ar4);
      iVar6 = FUN_8c1f19ec(iStack_38,1,ar4,ar7);
      if (iVar6 != 0) {
        return 0;
      }
      iStack_38 = iStack_38 + 1;
    }
    FUN_8c1f2a5c(ar5_00 + 6,auStack_3c,2,ar7,ar4);
    uVar3 = uStack_24;
    if ((auStack_3c[0] == uStack_24) && (uVar3 = uVar7, uVar7 != 1)) {
      if (bVar2) {
        uStack_2c = uStack_44;
        a5 = s0;
      }
      else {
        uStack_2c = uStack_30;
        a5 = pcVar5;
      }
      uVar3 = uStack_24;
      if ((*ar5_00 == uStack_2c) &&
         (a6 = uStack_2c, iVar6 = FUN_8c1f2a74(ar5_00 + 8,a5,uStack_2c,ar7), uVar3 = uStack_24,
         iVar6 != 0)) {
        if (!bVar2) {
          pcVar5 = pcVar5 + uStack_30;
        }
        if (*pcVar5 == '\0') {
          uVar4 = FUN_8c1f1714(ar5_00 + 2,a5,a6,ar7);
          return uVar4;
        }
        if (bVar2) {
          bVar2 = false;
        }
        else if (uVar7 != 1) {
          pcVar5 = pcVar5 + 1;
        }
        uStack_30 = FUN_8c1f2b1c(pcVar5,&DAT_8c26c560,a6,ar7);
        uVar3 = uVar7;
      }
    }
    uStack_24 = uVar3;
    uVar7 = uVar7 + 1;
    iVar6 = (*ar5_00 & 1) + (uint)*ar5_00 + 8;
    iStack_34 = iStack_34 + iVar6;
    ar4_00 = ar5_00 + iVar6;
    if (iStack_28 <= iStack_34) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c1f2e3e\n.set _FUN_8c1f2e3e, _FUN_8c1f2e3e_def\n");
