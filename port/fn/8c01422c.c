#include "../decls.h"
undefined4
FUN_8c01422c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,undefined4 ain1)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 in_fr1;
  undefined4 in_fr0;
  undefined4 in_fr3;
  undefined4 in_fr2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  undefined4 in_fr14;
  undefined4 in_GBR;
  undefined4 in_MACH;
  undefined4 in_MACL;
  undefined4 in_PR;
  undefined4 in_FPUL;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_FR;
  
  *(BADSPACEBASE **)ar4 = register0x0000003c;
  *(undefined4 *)(ar4 + 4) = unaff_r14;
  *(undefined4 *)(ar4 + 8) = in_PR;
  *(undefined4 *)(ar4 + 0xc) = unaff_r13;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = unaff_r11;
  *(undefined4 *)(ar4 + 0x18) = unaff_r10;
  *(undefined4 *)(ar4 + 0x1c) = unaff_r9;
  *(undefined4 *)(ar4 + 0x20) = unaff_r8;
  *(undefined4 *)(ar4 + 0x24) = ar7;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  *(int *)(ar4 + 0x30) = ar4;
  *(undefined4 *)(ar4 + 0x34) = in_r3;
  *(undefined4 *)(ar4 + 0x38) = in_r2;
  *(undefined4 *)(ar4 + 0x3c) = ain1;
  *(undefined4 *)(ar4 + 0x40) = ain0;
  *(undefined4 *)(ar4 + 0x44) = in_MACH;
  *(undefined4 *)(ar4 + 0x48) = in_MACL;
  *(undefined4 *)(ar4 + 0x4c) = in_GBR;
  *(uint *)(ar4 + 0x94) =
       (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
       (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
  *(undefined4 *)(ar4 + 0x90) = in_FPUL;
  *(undefined4 *)(ar4 + 0x8c) = in_fr15;
  *(undefined4 *)(ar4 + 0x88) = in_fr14;
  *(undefined4 *)(ar4 + 0x84) = in_fr13;
  *(undefined4 *)(ar4 + 0x80) = in_fr12;
  *(undefined4 *)(ar4 + 0x7c) = in_fr11;
  *(undefined4 *)(ar4 + 0x78) = in_fr10;
  *(undefined4 *)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(ar4 + 100) = in_fr5;
  *(undefined4 *)(ar4 + 0x60) = in_fr4;
  *(undefined4 *)(ar4 + 0x5c) = in_fr3;
  *(undefined4 *)(ar4 + 0x58) = in_fr2;
  *(undefined4 *)(ar4 + 0x54) = in_fr1;
  *(undefined4 *)(ar4 + 0x50) = in_fr0;
  return 0;
}

__asm__(".globl _FUN_8c01422c\n.set _FUN_8c01422c, _FUN_8c01422c_def\n");
