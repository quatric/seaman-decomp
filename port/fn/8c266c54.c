#include "../decls.h"
int FUN_8c266c54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int *in_r3;
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 *unaff_r13;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = *in_r3;
  ar5_00 = 0;
  if (*(int *)(ain0 + iVar1) < in_r2) {
    iVar2 = *(int *)(ain0 + iVar1);
    *(int *)(ain0 + iVar1) = iVar2 + 1;
    puVar3 = (undefined1 *)(iVar2 * 0x10 + *(int *)(ain0 + -4 + iVar1));
    *puVar3 = (char)*unaff_r13;
    ar6 = 0xe;
    memmove(puVar3 + 2,unaff_r13 + 1,0xe,ar7);
    unaff_r13[5] = 0;
    *(int *)(DAT_8c2784c0 + 0x16c) = *(int *)(DAT_8c2784c0 + 0x16c) + -1;
  }
  else {
    ar5_00 = 0xa000001;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266c48,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266c54\n.set _FUN_8c266c54, _FUN_8c266c54_def\n");
