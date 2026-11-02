#include "../decls.h"
int FUN_8c11ae6c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar4_00;
  undefined4 *ar4_01;
  int iVar1;
  int iVar2;
  
  ar4_00 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7)
  ;
  ar4_01 = (undefined4 *)
           (**(code **)(*ar4 + 0x10))
                     (*ar4,(*(int *)((int)0x1d4 + (int)ar4) + (int)0x97) * 4,ar6,ar7)
  ;
  iVar1 = (int)0x1d4;
  if (*(int *)(iVar1 + (int)ar4) == 0) {
    *ar4_00 = 0;
    *ar4_01 = 0;
  }
  else {
    iVar2 = (*(int *)(iVar1 + (int)ar4) + 1) * 4;
    memmove(ar4_00,*(undefined4 *)(iVar1 + -8 + (int)ar4),iVar2,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x1cc + (int)ar4),iVar2,ar7);
    iVar1 = (*(int *)((int)0x1d4 + (int)ar4) + 1) * 4;
    memmove(ar4_01,*(undefined4 *)(0x1d4 + -4 + (int)ar4),iVar1,ar7);
    (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)((int)0x1d0 + (int)ar4),iVar1,ar7);
  }
  iVar1 = (int)0x1cc;
  iVar2 = (int)0x96;
  *(undefined4 **)(iVar1 + (int)ar4) = ar4_00;
  *(undefined4 **)(iVar1 + 4 + (int)ar4) = ar4_01;
  iVar1 = iVar1 + 8;
  *(int *)(iVar1 + (int)ar4) = *(int *)(iVar1 + (int)ar4) + iVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c11ae6c\n.set _FUN_8c11ae6c, _FUN_8c11ae6c_def\n");
