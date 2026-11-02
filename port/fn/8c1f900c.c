#include "../decls.h"
undefined4
FUN_8c1f900c_def(int ar4,uint ar5,uint ar6,uint ar7,uint s0,int s4,int s8,undefined4 s12,undefined4 s16)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x80000000;
  uVar1 = 0x1ffffe0;
  uVar3 = ar6 & 0x1fffffe0;
  *(uint *)(ar4 + 4) = ar5 & 0x1fffffe0;
  *(uint *)(ar4 + 8) = uVar3;
  *(uint *)(ar4 + 0xc) = ar7 & uVar1 | uVar2;
  *(uint *)(ar4 + 0x10) = s0 & 1;
  if (s4 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 1;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffd;
  }
  if (s8 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 4;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffe;
  }
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 7;
  *(undefined4 *)(ar4 + 0x1c) = s12;
  *(undefined4 *)(ar4 + 0x20) = s16;
  *(undefined4 *)(ar4 + 0x30) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f900c\n.set _FUN_8c1f900c, _FUN_8c1f900c_def\n");
