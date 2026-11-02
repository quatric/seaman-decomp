#include "../decls.h"
int FUN_8c02447c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  Vec3_set_zero(ar4,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x18,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0x43660000;
    *(undefined4 *)(ar4 + 0xc) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x10) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x14) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x18) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x1c) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x20) = 0xc3b40000;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x28) = 0x43b4000043660000;
    *(undefined8 *)(ar4 + 0xc) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x10) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x14) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x18) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x1c) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x20) = 0x2402e000c3b40000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02447c\n.set _FUN_8c02447c, _FUN_8c02447c_def\n");
