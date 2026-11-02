#include "../decls.h"
undefined * FUN_8c1fd5f8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  piVar1 = 0x8c4783dc;
  *(uint *)*(undefined4 *)0x8c4783dc = ar4 & 1;
  puVar2 = (&DATA_8c1fc9aa);
  puVar3 = (&DATA_8c1fc99a);
  if ((ar4 & 1) == 1) {
    *(undefined **)(*piVar1 + 0xc) = (&DATA_8c1fc990);
    *(undefined **)(*piVar1 + 0x10) = (&DATA_8c1fc9a2);
    puVar3 = (undefined *)0x1;
  }
  else {
    *(undefined **)(*piVar1 + 0xc) = (&DATA_8c1fc99a);
    *(undefined **)(*piVar1 + 0x10) = puVar2;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c1fd5f8\n.set _FUN_8c1fd5f8, _FUN_8c1fd5f8_def\n");
