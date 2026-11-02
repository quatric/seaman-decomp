#include "../decls.h"
undefined4 FUN_8c1f15f4_def(char *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 a7;
  byte *pbVar8;
  byte *pbVar9;
  byte abStack_38 [28];
  
  if (*ar4 == '\0') {
    if ((int)ar4[3] + ar4[2] * 0x100 == 100) {
      a7 = 0;
      uVar1 = 0x40;
      pbVar8 = (byte *)(ar4 + 4);
      for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
        iVar5 = 7;
        abStack_38[iVar6] = 0;
        abStack_38[iVar6 + 0xc] = 0;
        do {
          pbVar9 = abStack_38 + iVar6 + 0xc;
          if (iVar5 == 7) {
            *pbVar9 = *pbVar9 | (*pbVar8 & 0x40) << 1;
          }
          else {
            uVar7 = -(6 - iVar5);
            if ((int)uVar7 < 0) {
              bVar4 = (byte)((int)((int)(char)*pbVar8 & 0x40U) >> (~uVar7 & 0x1f) + 1);
            }
            else {
              bVar4 = (byte)(((int)(char)*pbVar8 & 0x40U) << (uVar7 & 0x1f));
            }
            *pbVar9 = *pbVar9 | bVar4;
          }
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        if ((abStack_38[0xc] & 0xf) != 1) {
          return 0xfffffffb;
        }
      }
      uVar7 = (uint)CONCAT11(abStack_38[0x16],abStack_38[0x17]);
      iVar6 = FUN_8c1f1576(abStack_38 + 0xc,uVar7,0x40,0);
      if (iVar6 == 0) {
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xd],uVar7,uVar1,a7);
        *ar5 = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xf],uVar7,uVar1,a7);
        ar5[1] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x10],uVar7,uVar1,a7);
        ar5[2] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x11],uVar7,uVar1,a7);
        ar5[3] = uVar2;
        uVar3 = FUN_8c1f15be(abStack_38 + 0x13,uVar7,uVar1,a7);
        ar5[4] = uVar3 | (int)(char)abStack_38[0xc] << 0x18;
        uVar1 = FUN_8c1f15a4((int)(char)abStack_38[0xe],uVar7,uVar1,a7);
        ar5[5] = uVar1;
        uVar1 = 0;
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f15f4\n.set _FUN_8c1f15f4, _FUN_8c1f15f4_def\n");
