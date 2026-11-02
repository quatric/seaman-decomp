#include "../decls.h"
undefined4 FUN_8c08db9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  ulonglong uVar1;
  char cVar2;
  
  cVar2 = '\0';
  *(undefined ***)(ar4 + 0x1c8) = &PTR_DAT_8c13a734;
  *(undefined4 *)(ar4 + 0x1cc) = 0xc;
  *(undefined4 *)(ar4 + 0x284) = 0;
  *(undefined4 *)(ar4 + 0x25c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x248) = 0;
  vec3_clear(ar4 + 0x90,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uVar1 = CONCAT44(0xbdcccccd,in_fr1);
    *(undefined4 *)(ar4 + 0xa0) = 0xbdcccccd;
  }
  else {
    uVar1 = 0xa4bdcccccd;
    *(undefined8 *)(ar4 + 0xa0) = 0xa4bdcccccd;
  }
  *(undefined4 *)(ar4 + 0xa4) = 1;
  FUN_8c03c314(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x220) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x220) = uVar1 & 0xffffffff;
  }
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x224) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x224) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x228) = 0;
  *(undefined4 *)(ar4 + 0x22c) = 0;
  *(undefined4 *)(ar4 + 0x2f0) = 0;
  *(undefined4 *)(ar4 + 0x2f4) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x2f8) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x240) = 0;
  *(undefined4 *)(ar4 + 0x244) = 0;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2fc) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x2fc) = uVar1 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x288) = 1;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x304) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x304) = CONCAT44(0x3f800000,(int)uVar1);
  }
  return 0x304;
}

__asm__(".globl _FUN_8c08db9c\n.set _FUN_8c08db9c, _FUN_8c08db9c_def\n");
