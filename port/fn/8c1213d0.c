#include "../decls.h"
undefined4 FUN_8c1213d0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *ar4_00;
  int iVar7;
  undefined4 *a6;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int ar4_01;
  uint *ar4_02;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  undefined4 *ar7_00;
  uint ain0;
  uint uVar14;
  uint uVar15;
  int a4;
  undefined4 *puStack_5c;
  uint uStack_58;
  uint uStack_50;
  
  ar4_01 = *(int *)(ar4 + 0xfc);
  a4 = *(int *)(ar4 + 0x108);
  iVar6 = ar5;
  uVar1 = (**(code **)(a4 + 8))(a4,ar5,ar6,ar7);
  iVar2 = (**(code **)(a4 + 0x70))(a4,iVar6,ar6,ar7);
  iVar10 = *(int *)(ar5 * 8 + ar4 + 0x26c);
  ain0 = (uint)*(ushort *)(ar4 + 0x288);
  iVar3 = (**(code **)(a4 + 0x20))(a4,iVar6,ar6,ar7);
  iVar4 = (**(code **)(a4 + 0x9c))(a4,iVar6,ar6,ar7);
  uVar5 = (**(code **)(a4 + 0x50))(a4,iVar6,ar6,ar7);
  iVar6 = (**(code **)(a4 + 0x94))(a4,iVar6,ar6,ar7);
  ar7_00 = (undefined4 *)(ar4 + 0xf4);
  ar4_00 = (undefined4 *)FUN_8c11c914(ar4_01,ain0 << 1,4,ar7_00);
  puVar13 = (undefined4 *)(ain0 * 4);
  ar4_02 = (uint *)((int)puVar13 + (int)ar4_00);
  memset(ar4_02,0xff,puVar13,ar7_00);
  uStack_50 = 0;
  puVar11 = (undefined4 *)((ain0 - 1) * 2 + iVar10);
  if (uVar5 != 0) {
    do {
      uVar14 = 0;
      uStack_58 = 0;
      puStack_5c = *(undefined4 **)(ar4 + 0x284);
      iVar10 = uVar1 * ((uint)*(ushort *)(iVar6 + uStack_50 * 2) - iVar3);
      if (uVar1 != 0) {
        do {
          uVar15 = uVar14;
          uVar9 = (**(code **)(a4 + 0x84))(a4,uVar14,puVar13,ar7_00);
          iVar7 = (**(code **)(a4 + 0xc0))(uVar9,uVar15,puVar13,ar7_00);
          a6 = (undefined4 *)(**(code **)(a4 + 0x68))(uVar9,uVar15,puVar13,ar7_00);
          uVar9 = (**(code **)(a4 + 0x60))(uVar9,uVar15,puVar13,ar7_00);
          if (iVar4 == 0) {
            iVar7 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2) + iVar7;
            iVar8 = FUN_8c1211ac(iVar7,uVar9,a6,ar7_00);
            ar7_00 = (undefined4 *)*puStack_5c;
            FUN_8c1211f0(ar4_00,iVar7,a6,ar7_00,ain0,uVar9,iVar7);
          }
          else {
            uVar15 = (uint)*(ushort *)(iVar2 + (iVar10 + uVar14) * 2);
            puVar13 = (undefined4 *)(uVar15 & 1);
            iVar7 = ((int)uVar15 >> 1) + iVar7;
            iVar8 = FUN_8c121260(iVar7,puVar13,uVar9,a6);
            ar7_00 = a6;
            FUN_8c1212d4(ar4_00,iVar7,puVar13,a6,*puStack_5c,ain0,uVar9,puVar13);
            a6 = puVar13;
          }
          uStack_58 = uStack_58 + iVar8;
          uVar14 = uVar14 + 1;
          puStack_5c = (undefined4 *)puStack_5c[4];
          puVar13 = a6;
        } while (uVar14 < uVar1);
      }
      uVar14 = 0;
      puVar12 = ar4_02;
      puVar13 = puVar11;
      ar7_00 = ar4_00;
      if (ain0 != 0) {
        do {
          uVar15 = ar4_00[uVar14] - (uStack_58 >> 1);
          if (uVar15 < ar4_02[uVar14]) {
            *puVar12 = uVar15;
            *(undefined2 *)puVar13 = *(undefined2 *)(uStack_50 * 2 + iVar6);
          }
          uVar14 = uVar14 + 1;
          *ar7_00 = 0;
          puVar13 = (undefined4 *)((int)puVar13 + -2);
          ar7_00 = ar7_00 + 1;
          puVar12 = puVar12 + 1;
        } while (uVar14 < ain0);
      }
      uStack_50 = uStack_50 + 1;
    } while (uStack_50 < uVar5);
  }
                    
                    
  uVar9 = (**(code **)(ar4_01 + 0x18))(ar4_00,ar4 + 0xf4);
  return uVar9;
}

__asm__(".globl _FUN_8c1213d0\n.set _FUN_8c1213d0, _FUN_8c1213d0_def\n");
