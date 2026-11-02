#include "../decls.h"
undefined4 FUN_8c11d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  
  puVar1 = (&FUN_8c120348);
  *(undefined4 *)(ar4 + 0x78) = 0;
  cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x46,ar4 + 0x7c,0);
  if ((((cVar2 == '\0') &&
       (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x47,0x88 + ar4,0), cVar2 == '\0')) &&
      (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x48,0x9c + ar4,0), cVar2 == '\0')) &&
     (cVar2 = (*(code *)puVar1)(ar4 + 0x48,0x49,0xa0 + ar4,0), cVar2 == '\0')) {
    uVar3 = (*(code *)puVar1)(ar4 + 0x48,0x4a,0xa4 + ar4,0);
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d8fc\n.set _FUN_8c11d8fc, _FUN_8c11d8fc_def\n");
