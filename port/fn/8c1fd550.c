#include "../decls.h"
undefined4 FUN_8c1fd550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  pcVar1 = (char *)FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
  if (((*pcVar1 != '\0') && (iVar3 = thunk_FUN_8c1f4636(ar4_00,ar5,ar6,ar7), iVar3 == 0)) &&
     ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd550\n.set _FUN_8c1fd550, _FUN_8c1fd550_def\n");
