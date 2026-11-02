#include "../decls.h"
int FUN_8c2103c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain0)

{
  int *in_r2;
  undefined4 *puVar1;
  int *unaff_r14;
  
  puVar1 = (undefined4 *)(*in_r2 * 4 + *ain0);
  *unaff_r14 = (int)puVar1;
  FUN_8c207300(*puVar1,&DAT_8c2757a8,DAT_8c2757a4 << 2,ar7);
  *(int *)*unaff_r14 = *(int *)*unaff_r14 + DAT_8c2757a4 * 4;
  return *unaff_r14;
}

__asm__(".globl _FUN_8c2103c4\n.set _FUN_8c2103c4, _FUN_8c2103c4_def\n");
