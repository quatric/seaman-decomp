#include "../decls.h"
undefined4 FUN_8c26307e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(ar4 + 1) != '\x02') {
    if (*(char *)(ar4 + 1) == 1) {
      uVar2 = FUN_8c262c80(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    return (int)*(char *)(ar4 + 1);
  }
  uVar2 = *(undefined4 *)(ar4 + 4);
  iVar1 = get_field_4_25ff38(uVar2);
  if (iVar1 == 0) {
    FUN_8c262e10(ar4,ar5,ar6,ar7);
  }
  FUN_8c2602f4(uVar2);
  iVar1 = get_field_4_25ff38(uVar2);
  if (iVar1 == 3) {
    uVar2 = FUN_8c262f02(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c26307e\n.set _FUN_8c26307e, _FUN_8c26307e_def\n");
