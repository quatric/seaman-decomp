#include "../decls.h"
undefined4 FUN_8c0dbd80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  
  iVar1 = get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7);
  ar4_00 = FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7);
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    Vec3_assign_wrap_0f4da4(ar4_00,ar5,ar6,ar7);
    ar4_00 = list_node_next(ar4_00,ar5,ar6,ar7);
  }
  return ar4_00;
}

__asm__(".globl _FUN_8c0dbd80\n.set _FUN_8c0dbd80, _FUN_8c0dbd80_def\n");
