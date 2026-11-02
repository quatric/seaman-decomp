#include "../decls.h"
undefined4 FUN_8c207334_def(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0;
  undefined4 in_PR;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  char cVar3;
  byte in_FPSCR_FR;
  undefined1 auStack_84 [64];
  undefined1 auStack_44 [56];
  undefined8 uStack_c;
  uint uStack_4;
  
  uStack_4 = (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
             (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
  cVar3 = (char)((~(~uStack_4 | 0x100000) & 0x100000) >> 0x14);
  if (cVar3 == '\0') {
    uStack_c = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)uStack_c);
                    
    (*(uint*)((uchar*)&uStack_c+0)) = (int)in_dr0;
    puVar1 = auStack_44;
  }
  else {
    puVar1 = auStack_84;
    uStack_c = in_dr0;
  }
  *(undefined4 *)(puVar1 + -4) = in_PR;
  (*ar4)(ar5);
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(puVar1 + 0x80);
  }
  return *puVar2;
}

__asm__(".globl _FUN_8c207334\n.set _FUN_8c207334, _FUN_8c207334_def\n");
