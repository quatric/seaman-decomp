#include "../decls.h"
undefined4 FUN_8c031700_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  uint in_PR;
  char cVar1;
  undefined8 uStack_c;
  
  cVar1 = '\0';
  vec3_clear(ar4 + 0x6c,ar5,ar6,ar7);
  uStack_c = (ulonglong)in_fr1;
  if (cVar1 == '\0') {
    uStack_c = (ulonglong)in_PR << 0x20;
    *(undefined4 *)(ar4 + 0xac) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xac) = uStack_c;
  }
  if (cVar1 == '\0') {
    *(int *)(ar4 + 0xa8) = (int)uStack_c;
  }
  else {
    *(ulonglong *)(ar4 + 0xa8) = uStack_c;
  }
  return 0;
}

__asm__(".globl _FUN_8c031700\n.set _FUN_8c031700, _FUN_8c031700_def\n");
