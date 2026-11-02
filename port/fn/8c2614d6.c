#include "../decls.h"
uint FUN_8c2614d6_def(int ar4,undefined4 ar5,int **ar6,int **ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  short **a7;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int d;
  int iStack_3c;
  int *piStack_30;
  int iStack_2c;
  short *psStack_28;
  uint uStack_24;
  
  uVar1 = 0x24;
  d = (int)((float)*(int *)(ar4 + 0x20) * *(float *)(ar4 + 0x24));
  iVar11 = 0;
  do {
    if (*(int *)(ar4 + 0x1c) <= iVar11) {
      return uVar1;
    }
    iVar7 = iVar11 * 4;
    piVar9 = *(int **)(ar4 + 4 + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,1,ar6,ar7);
    uVar2 = libgcc_divide_helper_010468(uVar1 >> 1,d);
    piVar9 = *(int **)(ar4 + 0xc + iVar7);
    uVar1 = (**(code **)(*piVar9 + 0x24))(piVar9,0,ar6,ar7);
    uVar3 = uVar1 >> 4;
    if ((int)uVar2 < (int)uVar3) {
      uVar3 = uVar2;
    }
    for (iVar10 = 0; iVar10 < (int)uVar3; iVar10 = iVar10 + 1) {
      iStack_3c = 0;
      for (iVar8 = 0; iVar8 < d; iVar8 = iVar8 + uVar1) {
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        a7 = &psStack_28;
        (**(code **)(*piVar9 + 0x18))(piVar9,1,(d - iVar8) * 2,a7);
        uVar1 = uStack_24 >> 1;
        iVar5 = 0;
        psVar6 = psStack_28;
        if (uVar1 != 0) {
          do {
            iVar4 = (int)*psVar6;
            if (iVar4 < 0) {
              iVar4 = -iVar4;
            }
            psVar6 = psVar6 + 1;
            if (iStack_3c < iVar4) {
              iStack_3c = iVar4;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < (int)uVar1);
        }
        piVar9 = *(int **)(ar4 + 4 + iVar7);
        (**(code **)(*piVar9 + 0x20))(piVar9,0,&psStack_28,a7);
      }
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      ar7 = &piStack_30;
      (**(code **)(*piVar9 + 0x18))(piVar9,0,0x10,ar7);
      if (iStack_2c == 0) {
        do {
                    
        } while( true );
      }
      *piStack_30 = iStack_3c;
      piStack_30[1] = *(int *)(ar4 + 0x14 + iVar7);
      ar6 = &piStack_30;
      piStack_30[2] = *(int *)(ar4 + 0x20);
      piStack_30[3] = d;
      piVar9 = *(int **)(ar4 + 0xc + iVar7);
      uVar1 = (**(code **)(*piVar9 + 0x20))(piVar9,1,ar6,ar7);
      piVar9 = (int *)(ar4 + 0x14 + iVar7);
      *piVar9 = *piVar9 + d;
      *(int *)(ar4 + 0x2c) = *(int *)(ar4 + 0x2c) + 1;
    }
    iVar11 = iVar11 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c2614d6\n.set _FUN_8c2614d6, _FUN_8c2614d6_def\n");
