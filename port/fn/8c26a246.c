#include "../decls.h"
undefined4 s_E1221_Illigal_parameter_NCH__26a254_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 a7;
  int iVar10;
  int *piVar11;
  undefined4 *puStack_40;
  int *piStack_3c;
  undefined4 *puStack_38;
  int iStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int aiStack_28 [3];
  
  puVar1 = (&debug_printf);
  iVar6 = ar4;
  if (((ar4 < 1) || (2 < ar4)) ||
     (puVar5 = (undefined4 *)FUN_8c26a220(ar4,ar5,ar6,ar7), puVar5 == (undefined4 *)0x0)) {
    (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
  }
  else {
    *puVar5 = (&DATA_8c278600);
    for (iVar10 = 0; puVar2 = (&FUN_8c26a1f2), iVar10 < ar4; iVar10 = iVar10 + 1) {
      puVar8 = puVar5 + iVar10 + 6;
      uVar9 = FUN_8c26a1ca(iVar6,ar5,ar6,ar7);
      *puVar8 = uVar9;
      if (puVar5[iVar10 + 6] == 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (iVar10 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar10);
        return 0;
      }
      piVar11 = aiStack_28 + iVar10;
      iVar6 = puVar5[iVar10 + 6];
      iVar7 = get_field_4_26a1f8(iVar6,ar5,ar6,ar7);
      *piVar11 = iVar7;
    }
    puStack_40 = (undefined4 *)0x0;
    piVar11 = puVar5 + 0xe;
    piStack_3c = aiStack_28;
    if (0 < ar4) {
      do {
        ar7 = (int)0x4000;
        ar5 = *piStack_3c;
        iVar10 = (0x10 - ar5) * -0x4040 + 0x200000;
        ar6 = iVar10;
        iVar6 = FUN_8c268320(0x52535053,ar5,iVar10,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        }
        *piVar11 = iVar10;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1);
        piVar11 = piVar11 + 1;
        piStack_3c = piStack_3c + 1;
      } while ((int)puStack_40 < ar4);
    }
    puVar5[0x10] = (int)0x4000;
    for (puStack_40 = (undefined4 *)0x0; puVar3 = (&FUN_8c265784), (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      iVar6 = FUN_8c265704(&uStack_30,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
        piStack_3c = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < (int)puStack_40) {
          do {
            iVar6 = (*(code *)puVar3)(*piStack_3c,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(iVar6,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            piStack_3c = piStack_3c + 1;
          } while ((int)puStack_38 < (int)puStack_40);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 8] = uStack_30;
    }
    for (puStack_40 = (undefined4 *)0x0; (int)puStack_40 < ar4;
        puStack_40 = (undefined4 *)((int)puStack_40 + 1)) {
      puVar8 = &uStack_30;
      iVar6 = FUN_8c265704(puVar8,ar5,ar6,ar7);
      if (iVar6 != 0) {
        (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
        puStack_38 = puVar5 + 10;
        iStack_34 = 0;
        if (0 < (int)puStack_40) {
          do {
            uVar9 = *puStack_38;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            iStack_34 = iStack_34 + 1;
            puStack_38 = puStack_38 + 1;
          } while (iStack_34 < (int)puStack_40);
        }
        puStack_40 = puVar5 + 8;
        puStack_38 = (undefined4 *)0x0;
        if (0 < ar4) {
          do {
            uVar9 = *puStack_40;
            (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
            if (iVar6 != 0) {
              (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
            }
            puStack_38 = (undefined4 *)((int)puStack_38 + 1);
            puStack_40 = puStack_40 + 1;
          } while ((int)puStack_38 < ar4);
        }
        iVar6 = 0;
        puVar5 = puVar5 + 6;
        if (ar4 < 1) {
          return 0;
        }
        do {
          uVar9 = *puVar5;
          puVar5 = puVar5 + 1;
          (*(code *)puVar2)(uVar9,ar5,ar6,ar7);
          iVar6 = iVar6 + 1;
        } while (iVar6 < ar4);
        return 0;
      }
      puVar5[(int)puStack_40 + 10] = uStack_30;
    }
    if (ar4 == 1) {
      puVar8 = &uStack_2c;
      iVar6 = FUN_8c2675d8(puVar8,ar5,ar6,ar7,1,(int)(char)aiStack_28[0]);
    }
    else {
      puVar8 = &uStack_2c;
      iVar6 = FUN_8c2675d8(puVar8,ar5,ar6,ar7,ar4,(int)(char)aiStack_28[0]);
    }
    puVar4 = (&thunk_FUN_8c2678a4);
    if (iVar6 == 0) {
      puVar5[0xc] = uStack_2c;
      puVar5[3] = ar4;
      puVar5[2] = ar4;
      for (iVar6 = 0; puVar2 = (&FUN_8c267914), iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar4)(puVar5[0xc],iVar6,ar6,ar7);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,ar6,ar7);
        }
      }
      for (iVar6 = 0; iVar6 < (int)puVar5[2]; iVar6 = iVar6 + 1) {
        uVar9 = 0x7f;
        a7 = 0;
        iVar10 = iVar6;
        iVar7 = (*(code *)puVar2)(puVar5[0xc],iVar6,0x7f,0);
        if (iVar7 != 0) {
          (*(code *)puVar1)(iVar7,iVar10,uVar9,a7);
        }
      }
      puVar5[0x12] = 0xffffffff;
      puVar5[0x11] = 0;
      puVar5[1] = 1;
      return puVar5;
    }
    (*(code *)puVar1)(puVar8,ar5,ar6,ar7);
    piStack_3c = puVar5 + 8;
    iStack_34 = 0;
    if (0 < ar4) {
      do {
        uVar9 = *piStack_3c;
        (*(code *)puVar3)(uVar9,ar5,ar6,ar7);
        if (iVar6 != 0) {
          (*(code *)puVar1)(uVar9,ar5,ar6,ar7);
        }
        (*(code *)puVar2)(puVar5[(int)puStack_40 + 6],ar5,ar6,ar7);
        iStack_34 = iStack_34 + 1;
        piStack_3c = piStack_3c + 1;
      } while (iStack_34 < ar4);
    }
  }
  return 0;
}

__asm__(".globl _s_E1221_Illigal_parameter_NCH__26a254\n.set _s_E1221_Illigal_parameter_NCH__26a254, _s_E1221_Illigal_parameter_NCH__26a254_def\n");
