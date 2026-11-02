#include "../decls.h"
int FUN_8c0fdde4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0f402c(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x18,ar5,ar6,ar7);
  FUN_8c015ff0(ar4 + 0x2c,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = 0x40400000;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = 0x4f222fe640400000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0fdde4\n.set _FUN_8c0fdde4, _FUN_8c0fdde4_def\n");
