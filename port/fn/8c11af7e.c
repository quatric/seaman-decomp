#include "../decls.h"
undefined4 FUN_8c11af7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = (*(code *)(&FUN_8c111fbe))
                    (**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6,ar7);
  if (iVar1 != 0) {
    if (*(undefined **)(ar4 + 0x18) == (&FUN_8c11af3a)) {
      return 0;
    }
    iVar2 = (int)0x12c;
    *(int *)(iVar2 + ar4) = *(int *)(iVar2 + ar4) + 1;
    iVar4 = iVar1;
    iVar2 = (**(code **)(iVar2 + 8 + ar4))(ar4,iVar1,ar6,ar7);
    if (iVar2 != 0) {
      FUN_8c1204c4(ar4,0x77,ar6,ar7);
      ar7 = 0;
      ar6 = 0;
      *(undefined **)(ar4 + 0x18) = (&FUN_8c11af3a);
      iVar4 = 0xb;
      uVar3 = FUN_8c120348(ar4,0xb,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    if (*(char *)(0x1d8 + ar4) != '\0') {
      if (*(uint *)(0x1d4 + ar4) <= *(uint *)(0x12c + ar4)) {
        FUN_8c11ae6c(ar4,iVar4,ar6,ar7);
      }
      *(int *)((*(int *)(0x12c + ar4) + 1) * 4 + *(int *)(0x1cc + ar4)) =
           (int)*(short *)((uint)*(ushort *)(0xde + ar4) * 2 + iVar1) +
           *(int *)(*(int *)(0x12c + ar4) * 4 + *(int *)(0x1cc + ar4));
      iVar4 = *(int *)(0x1d0 + ar4);
      *(int *)((*(int *)(0x12c + ar4) + 1) * 4 + iVar4) =
           (int)*(short *)(iVar1 + (uint)*(ushort *)(0xe0 + ar4) * 2) +
           *(int *)(*(int *)(0x12c + ar4) * 4 + iVar4);
    }
    iVar1 = FUN_8c111dfe(*(undefined4 *)(ar4 + 0x2c),iVar4,ar6,ar7);
    iVar4 = iVar1 + (uint)*(ushort *)(*(int *)(ar4 + 0x28) + 0xc);
    uVar3 = (**(code **)(0x1a8 + ar4))(ar4,iVar1,iVar4,ar7);
    if ((uVar3 & 0xffff) == 0) {
      return 1;
    }
    if ((*(int *)(0x128 + ar4) != 0) &&
       (uVar3 = FUN_8c11aaa8(ar4,iVar1,iVar4,ar7), (uVar3 & 0xff) != 0)) {
      *(undefined **)(ar4 + 0x18) = (&FUN_8c11af3a);
      uVar3 = FUN_8c120348(ar4,8,0,0);
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
  }
  iVar1 = **(int **)(ar4 + 0xc);
  return *(int *)((*(int **)(ar4 + 0xc))[1] * 4 + *(int *)(iVar1 + 0x40)) == *(int *)(iVar1 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c11af7e\n.set _FUN_8c11af7e, _FUN_8c11af7e_def\n");
