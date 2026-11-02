#include "../decls.h"
undefined4 FUN_8c122358_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *a5;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *a6;
  undefined4 uStack_40;
  uint uStack_3c;
  uint uStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  puVar1 = (&FUN_8c120348);
  iVar6 = *(int *)(0x108 + ar4);
  uStack_3c = 0x7fffffff;
  uStack_38 = 0;
  iStack_34 = *(int *)(0xfc + ar4);
  uVar2 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
  if (((uVar2 & 0xff) == 0) && (uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x22,0,0), (uVar2 & 0xff) == 0)
     ) {
    uVar10 = 1;
    uVar2 = 0x12;
    puVar8 = &uStack_40;
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,0x12,puVar8,1);
    a5 = (&DATA_8c1297e8);
    if ((uVar3 & 0xff) == 0) {
      *(undefined **)(0xdc + ar4) = (&FUN_8c121ef0);
      uVar3 = 0;
      if (*(int *)(0x240 + ar4) != 0) {
        do {
          uVar11 = 0;
          iStack_30 = *(int *)(0x268 + ar4 + uVar3 * 8);
          uStack_28 = *(undefined4 *)(uVar3 * 8 + 0x268 + ar4 + 4);
          iStack_2c = 1;
          uVar5 = (**(code **)(iVar6 + 0x2c))(iVar6,uVar2,puVar8,uVar10);
          iStack_24 = 0x280 + ar4;
          *(short *)(0x280 + ar4) = (short)uVar5;
          iVar4 = iStack_30 + iStack_2c;
          a6 = (undefined4 *)0x0;
          if (*(int *)(0x240 + ar4) != 0) {
            do {
              uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x13,&iStack_30,iVar4 * 2 + 0x10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = 0;
              uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x21,0,0);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              puVar8 = a6;
              uVar2 = FUN_8c122230(ar4,a5,a6,uVar10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar2 = FUN_8c1222b4(ar4,a5,puVar8,uVar10);
              if ((uVar2 & 0xff) != 0) {
                return 1;
              }
              uVar10 = *(undefined4 *)(0x24c + 0x18 + ar4);
              uVar11 = uVar11 + *(int *)(0x24c + ar4);
              uVar2 = uVar3;
              puVar8 = a6;
              FUN_8c11f7bc(ar4,uVar3,a6,uVar10);
              a6 = (undefined4 *)((int)a6 + 1);
            } while (a6 < *(undefined4 **)(0x240 + ar4));
          }
          if (uVar11 < uStack_3c) {
            uStack_3c = uVar11;
            uStack_38 = uVar3;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < *(uint *)(0x240 + ar4));
      }
      uVar10 = 2;
      uVar2 = (*(code *)puVar1)(ar4 + 0x48,0x14,uStack_40,2);
      if ((uVar2 & 0xff) == 0) {
        iVar9 = (int)0xf4;
        *(undefined **)(0xdc + ar4) = (&FUN_8c121f38);
        iVar9 = iVar9 + ar4;
        iVar6 = (int)0x288;
        iVar7 = uStack_38 * 8;
        *(short *)(iVar6 + ar4) = (short)*(undefined4 *)(iVar7 + 0x268 + ar4);
        iVar4 = (int)0x238;
        **(int **)(iVar6 + -0x4c + ar4) = *(int *)(0x268 + ar4 + iVar7) << 1;
        puVar8 = *(undefined4 **)(iVar4 + ar4);
        uVar5 = (**(code **)(iStack_34 + 0x14))
                          (**(undefined4 **)(0x23c + ar4),iVar9,uStack_40,uVar10);
        *puVar8 = uVar5;
        iVar6 = FUN_8c120f04(ar4,iVar9,uStack_40,uVar10);
        if (iVar6 == 0) {
          FUN_8c121690(ar4,uStack_38,uStack_40,uVar10);
          (*(code *)(&memmove))
                    (**(undefined4 **)(0x238 + ar4),
                     *(undefined4 *)(0x268 + ar4 + iVar7 + 4),
                     **(undefined4 **)(0x23c + ar4),uVar10);
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c122358\n.set _FUN_8c122358, _FUN_8c122358_def\n");
