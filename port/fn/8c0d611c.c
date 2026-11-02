#include "../decls.h"
int FUN_8c0d611c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  cVar1 = '\0';
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x10) = 0x3dcccccd;
  }
  else {
    *(undefined8 *)(ar4 + 0x10) = 0xffffff3dcccccd;
  }
  *(undefined4 *)(ar4 + 0x1c) = 0xffffff;
  *(undefined4 *)(ar4 + 0x20) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x14) = 0xbf000000;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = 0x4f222fe6bf000000;
  }
  *(undefined4 *)(ar4 + 0x18) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0d611c\n.set _FUN_8c0d611c, _FUN_8c0d611c_def\n");
