#include "../decls.h"
uint FUN_8c012f58_def(undefined1 *ar4,ushort *ar5,byte *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 ar6_00;
  undefined4 in_fr4;
  undefined4 in_stack_ffffffe0;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [2];
  ushort uStack_16;
  
  uStack_16 = (ushort)((uint)in_fr4 >> 0x10);
  if ((uStack_16 & 0x8000) == 0x8000) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 1;
  }
  *ar4 = uVar2;
  *ar5 = uStack_16;
  *ar5 = (short)(*ar5 & 0x7ff0) >> 4;
  FUN_8c012a24(&stack0xffffffe0,auStack_18,ar6,ar7);
  ar6_00 = 3;
  memmove(ar6,&stack0xffffffe1,3,ar7);
  FUN_8c012a24(&stack0xffffffe0,auStack_1c,ar6_00,ar7);
  memmove(ar6 + 3,&stack0xffffffe0,4,ar7);
  FUN_8c01289c(ar6,7,3,ar7,in_stack_ffffffe0);
  if ((short)*ar5 < 1) {
    *ar5 = *ar5 + 1;
    uVar1 = (int)(char)*ar6 & 0x7f;
    *ar6 = (byte)uVar1;
    while ((*ar6 & 0x80) == 0) {
      uVar1 = FUN_8c01289c(ar6,7,1,ar7);
      *ar5 = *ar5 - 1;
    }
  }
  else {
    uVar1 = (int)(char)*ar6 | 0x80;
    *ar6 = (byte)uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c012f58\n.set _FUN_8c012f58, _FUN_8c012f58_def\n");
