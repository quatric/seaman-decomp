#include "../decls.h"
undefined4 FUN_8c1f0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int a4;
  int a4_00;
  ushort *ar5_00;
  
  puVar1 = (&syscall_1f98d8);
  iVar5 = *(int *)(ar4 + 4);
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = *(ushort **)(ar4 + 0xc);
    uVar4 = 0x40;
    iVar2 = syscall_1f98d8(iVar5,ar5_00,0x40,ar7);
    if (iVar2 == 0x40) {
      a4_00 = iVar5 + 0x40;
      a4 = 0;
      for (iVar2 = *(int *)(ar4 + 0x14); ar5_00 = ar5_00 + 0x20, 0 < iVar2; iVar2 = iVar2 + -1) {
        if ((*ar5_00 != 0xffff) && (iVar3 = FUN_8c1f0a22(ar4,ar5_00,uVar4,ar7), iVar3 == 0)) {
          uVar4 = 0x40;
          iVar3 = (*(code *)puVar1)(a4_00,ar5_00,0x40,ar7);
          if (iVar3 != 0x40) goto LAB_8c1f0bf4;
          a4 = a4 + 1;
          a4_00 = a4_00 + 0x40;
        }
      }
      iVar2 = *(int *)(ar4 + 0x14);
      FUN_8c1f09d4(a4,ar5_00,*(undefined4 *)(ar4 + 0x18),ar7);
      iVar5 = (*(code *)puVar1)((iVar2 + 1) * 0x40 + iVar5,ar5_00,*(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar5 == *(int *)(ar4 + 0x18) << 6) {
        *(int *)(ar4 + 0x10) = a4;
        return 0;
      }
    }
LAB_8c1f0bf4:
    uVar4 = 0xfffffffe;
  }
  else {
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0b58\n.set _FUN_8c1f0b58, _FUN_8c1f0b58_def\n");
