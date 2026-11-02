#include "../decls.h"
uint FUN_8c11346c_def(int ar4,ushort *ar5,int ar6,int *ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  ushort *puVar6;
  uint *puVar7;
  ushort *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  uint uStack_20;
  
  if (*(int *)(ar4 + 0x30) == 1) {
    iVar11 = *(int *)(ar4 + 0x54);
    uStack_20 = 0;
    uVar3 = (uint)*(ushort *)(0xe4 + ar4);
    if (*(short *)(ar4 + 0x50) != 0) {
      do {
        puVar6 = *(ushort **)(iVar11 + 0xc);
        uVar1 = *puVar6 >> 2;
        if (*(char *)(ar6 + (uint)uVar1) == '\0') {
          uVar3 = uVar3 + 1;
          *(undefined1 *)(ar6 + (uint)uVar1) = 1;
          ar5[uVar3] = uVar1;
        }
        puVar8 = puVar6 + 1;
        if ((*puVar6 & 1) == 0) {
          uVar1 = *puVar8;
          ar7 = (int *)(uint)(uVar1 >> 2);
          if (*(char *)(ar6 + (int)ar7) == '\0') {
            uVar3 = uVar3 + 1;
            *(char *)(ar6 + (int)ar7) = '\x01';
            ar5[uVar3] = uVar1 >> 2;
          }
          if ((*puVar8 & 1) != 0) {
            puVar7 = (uint *)(*(int *)(puVar6 + 2) * 4 + *(int *)(0x98 + ar4));
            piVar10 = (int *)puVar7[1];
            ar7 = (int *)*puVar7;
            while (ar7 < piVar10) {
              piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
              iVar2 = *ar7;
              ar7 = ar7 + 1;
              piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
              while (piVar9 < piVar4) {
                iVar2 = *piVar9;
                piVar9 = piVar9 + 1;
                uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
                if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                  uVar3 = uVar3 + 1;
                  *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                  ar5[uVar3] = uVar1;
                }
              }
            }
          }
        }
        else {
          puVar7 = (uint *)(*(int *)puVar8 * 4 + *(int *)(0x98 + ar4));
          piVar10 = (int *)puVar7[1];
          ar7 = (int *)*puVar7;
          while (ar7 < piVar10) {
            piVar9 = *(int **)(*ar7 * 4 + *(int *)(ar4 + 0x44));
            iVar2 = *ar7;
            ar7 = ar7 + 1;
            piVar4 = *(int **)((iVar2 + 1) * 4 + *(int *)(ar4 + 0x44));
            while (piVar9 < piVar4) {
              iVar2 = *piVar9;
              piVar9 = piVar9 + 1;
              uVar1 = *(ushort *)(iVar2 * 2 + *(int *)(ar4 + 0x48)) >> 2;
              if (*(char *)(ar6 + (uint)uVar1) == '\0') {
                uVar3 = uVar3 + 1;
                *(undefined1 *)(ar6 + (uint)uVar1) = 1;
                ar5[uVar3] = uVar1;
              }
            }
          }
        }
        uStack_20 = uStack_20 + 1;
        iVar11 = *(int *)(iVar11 + 0x18);
      } while (uStack_20 < *(ushort *)(ar4 + 0x50));
    }
    uVar5 = (uint)(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1);
    if (uVar5 - uVar3 < (uint)*(ushort *)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    if (uVar3 == uVar5) {
      memset(ar6,0,(*(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1) + 1,ar7);
      *(undefined4 *)(ar4 + 0x30) = 0;
    }
    *ar5 = (ushort)uVar3;
  }
  else if (*(int *)(ar4 + 0x30) == 0) {
    if (*(ushort *)(ar4 + 0x50) < *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 2) {
      *(undefined4 *)(ar4 + 0x30) = 1;
    }
    uVar1 = *(ushort *)(*(int *)(ar4 + 0x28) + 0xc) >> 1;
    uVar3 = (uint)uVar1;
    *ar5 = uVar1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11346c\n.set _FUN_8c11346c, _FUN_8c11346c_def\n");
