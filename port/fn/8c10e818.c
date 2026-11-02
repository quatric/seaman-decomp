#include "../decls.h"
uint FUN_8c10e818_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *a5;
  int *a5_00;
  int *a4;
  char cVar8;
  int iStack_28;
  
  if (*(char *)(*(int *)(ar4 + 100) + 0x30) == '\0') {
    uVar3 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    pbVar4 = (byte *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0x5c),(*(undefined4 **)(ar4 + 0x5c))[1],
                                  ar6,ar7);
    if (pbVar4 != (byte *)0x0) {
      cVar8 = '\0';
      a5 = (int *)(*(undefined4 **)(ar4 + 0x60))[1];
      uVar5 = FUN_8c111fbe(**(undefined4 **)(ar4 + 0x60),a5,ar6,ar7);
      *(undefined4 *)(ar4 + 0x28) = uVar5;
      *(uint *)(ar4 + 0x2c) = (uint)*(ushort *)(ar4 + 0x9a) * 2 + *(int *)(ar4 + 0x28);
      if (*(char *)(ar4 + 0x11d) != '\0') {
        a5 = (int *)(*(undefined4 **)(ar4 + 0xc))[1];
        pcVar6 = (char *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),a5,ar6,ar7);
        cVar8 = '\x01' - *pcVar6;
      }
      if (*(char *)(ar4 + 0x11c) != '\0') {
        cVar8 = '\0';
      }
      bVar2 = false;
      if (cVar8 != '\0') {
        iVar7 = *(int *)(ar4 + 0x114) + 1;
        *(int *)(ar4 + 0x114) = iVar7;
        iVar7 = libgcc_divide_helper_0106dc(iVar7,*(undefined4 *)(ar4 + 0x130));
        if (iVar7 == 0) {
          *(undefined4 *)(ar4 + 0x114) = 0;
          *(int *)(ar4 + 0x118) = *(int *)(ar4 + 0x118) + 1;
          bVar2 = true;
        }
      }
      iVar7 = 0;
      iStack_28 = 0;
      a4 = *(int **)(ar4 + 0x84);
      if (*(short *)(ar4 + 0x90) != 0) {
        do {
          a5_00 = *(int **)(iVar7 * 4 + ar4 + 0xc0);
          if (cVar8 != '\0') {
            *(char *)(a4[2] + (uint)*pbVar4) = *(char *)(a4[2] + (uint)*pbVar4) + '\x01';
          }
          *(undefined4 *)(iVar7 * 4 + ar4 + 0x34) = *(undefined4 *)(*a4 + (uint)*pbVar4 * 4);
          if (bVar2) {
            ar6 = *(int **)(ar4 + 0x134);
            a5 = a5_00;
            FUN_8c10e7de(a4,a5_00,ar6,ar7);
            if (0x13 < *(uint *)(ar4 + 0x118)) {
              a5 = a4;
              ar6 = a5_00;
              FUN_8c10e6c0(ar4,a4,a5_00,ar7);
            }
          }
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar7 = iVar7 + 1;
          iStack_28 = iStack_28 + (uint)*(byte *)((uint)bVar1 + (int)a5_00);
          a4 = a4 + 3;
        } while (iVar7 < (int)(uint)*(ushort *)(ar4 + 0x90));
      }
      if (*(int *)(ar4 + 0x28) != 0) {
        uVar5 = FUN_8c111dfe(*(undefined4 *)(ar4 + 100),a5,ar6,ar7);
        (**(code **)(ar4 + 0x68))(ar4,uVar5,iVar7,iStack_28);
      }
      if (0x13 < *(uint *)(ar4 + 0x118)) {
        *(undefined4 *)(ar4 + 0x118) = 0;
      }
    }
  }
  iVar7 = **(int **)(ar4 + 0x5c);
  return *(int *)((*(int **)(ar4 + 0x5c))[1] * 4 + *(int *)(iVar7 + 0x40)) == *(int *)(iVar7 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10e818\n.set _FUN_8c10e818, _FUN_8c10e818_def\n");
