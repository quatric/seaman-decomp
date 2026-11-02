#include "../decls.h"
undefined4 FUN_8c1f3d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  int iVar1;
  short sStack_10;
  ushort uStack_e;
  short sStack_c;
  char cStack_a;
  char cStack_9;
  
  ar5_00 = (int *)FUN_8c1efd26(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1f0142(&sStack_10,ar5_00,ar6,ar7);
  if ((((-1 < iVar1) && (*ar5_00 == 0xe)) && (sStack_10 == 1)) &&
     ((((uint)uStack_e == (int)0xc0 && (sStack_c == 1)) &&
      ((cStack_a == '\0' && (cStack_9 == '\0')))))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3d28\n.set _FUN_8c1f3d28, _FUN_8c1f3d28_def\n");
