#include "../decls.h"
int FUN_8c109e40_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_ffffffe4;
  
  iVar1 = *(int *)(ar4 + 0x874);
  if (iVar1 == 0) {
    *(undefined1 *)(ar4 + 0x98) = 3;
    FUN_8c02cb7c(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    FUN_8c02cb74(*(int *)(ar5 + 4) + 0xa8,0,ar6,ar7);
    uVar2 = 1;
    FUN_8c035718(*(undefined4 *)(ar5 + 0x10),1,ar6,ar7);
    iVar1 = FUN_8c02c340(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
    if (0x5e < iVar1) {
      uVar2 = get_field_4_02d1e0(*(int *)(ar5 + 4) + 0x90,uVar2,ar6,ar7);
      iVar1 = libgcc_divide_helper_0101e4(uVar2,10,ar6,ar7);
      FUN_8c02cbbc(*(int *)(ar5 + 4) + 0x90,iVar1 * 9,ar6,ar7);
    }
    iVar1 = 0x874;
    *(undefined4 *)(ar4 + 0x874) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c109e40\n.set _FUN_8c109e40, _FUN_8c109e40_def\n");
