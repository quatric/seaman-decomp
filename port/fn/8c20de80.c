#include "../decls.h"
undefined4 FUN_8c20de80_def(undefined1 *ar4,int ar5,int ar6,int ar7,int s0)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r12;
  int unaff_r13;
  uint uVar9;
  
  iVar5 = ar7 + -1;
  uVar7 = (uint)0x7c00;
  uVar8 = (uint)0x3e0;
  puVar3 = (ushort *)(ar6 * iVar5 * 2 + ar5);
  iVar6 = iVar5;
  do {
    if (iVar5 < 0) {
      return 0;
    }
    iVar2 = 0;
    puVar4 = puVar3;
    if (0 < ar6) {
      do {
        if (s0 == 0) {
          uVar1 = (uint)*puVar4;
          iVar6 = (int)(0xf800 & uVar1) >> 8;
          uVar9 = (int)((int)0x7e0 & uVar1) >> 1;
LAB_8c20df30:
          unaff_r13 = (int)uVar9 >> 2;
          unaff_r12 = (uVar1 & 0x1f) << 3;
        }
        else {
          if (s0 == 1) {
            uVar1 = (uint)*puVar4;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            uVar9 = uVar1 & uVar8;
            goto LAB_8c20df30;
          }
          if (s0 == 3) {
            uVar1 = (uint)*puVar4;
            uVar9 = uVar1 & uVar8;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            goto LAB_8c20df30;
          }
        }
        iVar2 = iVar2 + 1;
        *ar4 = (char)unaff_r12;
        ar4[1] = (char)unaff_r13;
        ar4[2] = (char)iVar6;
        ar4 = ar4 + 3;
        puVar4 = puVar4 + 1;
      } while (iVar2 < ar6);
    }
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + -ar6;
  } while( true );
}

__asm__(".globl _FUN_8c20de80\n.set _FUN_8c20de80, _FUN_8c20de80_def\n");
