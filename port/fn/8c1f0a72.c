#include "../decls.h"
undefined4 FUN_8c1f0a72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar5_00;
  int iVar4;
  int ar4_00;
  ushort *a5;
  
  ar5_00 = *(int *)(ar4 + 0xc);
  ar4_00 = *(int *)(ar4 + 4);
  iVar1 = syscall_1f98c4(ar4_00,ar5_00,0x40,ar7);
  if (iVar1 != -1) {
    iVar4 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
    iVar1 = iVar4 + ar5_00;
    iVar3 = *(int *)(ar4 + 0x18) << 6;
    iVar4 = syscall_1f98c4(ar4_00 + iVar4,iVar1,iVar3,ar7);
    if (iVar4 != -1) {
      iVar4 = FUN_8c1f099c(iVar1,*(undefined4 *)(ar4 + 0x18),iVar3,ar7);
      *(int *)(ar4 + 0x10) = iVar4;
      if (*(short *)(ar4 + 2) != 0) {
        return 0xfffffffa;
      }
      a5 = (ushort *)(ar4 + 0x34);
      while( true ) {
        if (iVar4 < 1) {
          return 0;
        }
        ar4_00 = ar4_00 + 0x40;
        ar6_00 = 0x40;
        iVar3 = syscall_1f98c4(ar4_00,a5,0x40,ar7);
        if (iVar3 == -1) break;
        if (*a5 == 0xffff) {
          return 0;
        }
        uVar2 = FUN_8c1f109c(0x3e,a5,ar6_00,ar7);
        if (((uint)*(ushort *)(ar4 + 0x72) == (uVar2 & 0xffff)) &&
           ((int)(uint)*a5 < *(int *)(ar4 + 0x14))) {
          FUN_8c1f0958(a5,(*a5 + 1) * 0x40 + ar5_00,0x40,ar7,iVar1);
        }
        iVar4 = iVar4 + -1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f0a72\n.set _FUN_8c1f0a72, _FUN_8c1f0a72_def\n");
