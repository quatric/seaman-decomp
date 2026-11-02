#include "../decls.h"
undefined4 FUN_8c207344_def(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0;
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  undefined1 auStack_80 [64];
  undefined1 auStack_40 [56];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)in_dr0;
    puVar1 = auStack_40;
  }
  else {
    puVar1 = auStack_80;
    uStack_8 = in_dr0;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  (*ar4)(ar5,ar5,ar6,ar7);
  if (in_FPSCR_SZ == '\0') {
    puVar2 = (undefined4 *)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(puVar1 + 0x80);
  }
  return *puVar2;
}

__asm__(".globl _FUN_8c207344\n.set _FUN_8c207344, _FUN_8c207344_def\n");
