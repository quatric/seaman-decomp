#include "../decls.h"
undefined4 FUN_8c10d1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  uVar8 = 0;
  if (*(short *)(ar4 + 0x30) != 0) {
    do {
      iVar11 = 0;
      uVar12 = (uint)0xff;
      uVar1 = *(ushort *)
               ((uint)*(ushort *)(0xe8 + ar4) * (uint)*(ushort *)(ar4 + 0x30) * 2 +
                *(int *)(ar4 + 0x7c) + uVar8 * 2);
      uVar14 = (uint)(short)uVar1;
      iVar9 = *(int *)(uVar8 * 0xc + *(int *)(ar4 + 0x70));
      cVar10 = '\x01';
      if (*(undefined **)(ar4 + 0x68) == (&FUN_8c10da96)) {
        cVar10 = '\x11';
        if ((uVar1 & 1) == 0) {
          iVar11 = 4;
        }
        else {
          uVar12 = 0xf;
        }
        uVar14 = (uint)(uVar1 >> 1);
      }
      uVar7 = 0;
      uVar13 = (uint)*(ushort *)(uVar8 * 0xc + *(int *)(ar4 + 0x70) + 4);
      if (uVar13 != 0) {
        do {
          iVar4 = uVar7 * 4;
          pcVar6 = (char *)(*(int *)(0xc0 + ar4 + uVar8 * 4) + uVar7);
          uVar7 = uVar7 + 1;
          uVar5 = (uint)*(byte *)(*(int *)(iVar4 + iVar9) + (uVar14 & 0xffff)) & uVar12 & 0xff;
          uVar2 = -iVar11;
          if ((int)uVar2 < 0) {
            cVar3 = (char)((int)uVar5 >> (~uVar2 & 0x1f) + 1);
          }
          else {
            cVar3 = (char)(uVar5 << (uVar2 & 0x1f));
          }
          *pcVar6 = cVar3 * cVar10;
        } while (uVar7 < uVar13);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(ushort *)(ar4 + 0x30));
  }
  return 0x30;
}

__asm__(".globl _FUN_8c10d1bc\n.set _FUN_8c10d1bc, _FUN_8c10d1bc_def\n");
