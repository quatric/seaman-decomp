#include "../decls.h"
undefined4 * FUN_8c016b64_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  undefined4 in_fr4;
  undefined8 in_xd14;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c129974;
  FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xd] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xe] = 0;
    ar4[0xf] = in_fr4;
    ar4[10] = in_fr4;
    ar4[9] = in_fr4;
    ar4[8] = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0xf) = in_xd14;
    *(undefined8 *)(ar4 + 10) = in_xd14;
    *(undefined8 *)(ar4 + 9) = in_xd14;
    *(undefined8 *)(ar4 + 8) = in_xd14;
  }
  FUN_8c016fa4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c016b64\n.set _FUN_8c016b64, _FUN_8c016b64_def\n");
