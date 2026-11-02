#include "../decls.h"
undefined4 FUN_8c1fa73e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r0;
  undefined4 *puVar3;
  
  piVar1 = 0xff00001c;
  *(undefined4 *)0xff00001c = 0;
  iVar2 = 0xf4004000;
  puVar3 = 0xf4000000;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < iVar2);
  *piVar1 = (int)0x800;
  *piVar1 = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c1fa73e\n.set _FUN_8c1fa73e, _FUN_8c1fa73e_def\n");
