#include "../decls.h"
int FUN_8c123822_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  int unaff_r14;
  double dVar2;
  uint uVar3;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_PR;
  
  if ((*(short *)(in_r0 + unaff_r14) != 0) &&
     (in_r0 = *(int *)(0x4cc + unaff_r14), in_r0 == 1)) {
    iVar1 = (int)0x4cc;
    *(undefined4 *)(iVar1 + unaff_r14) = 0;
    if (*(short *)(iVar1 + -0xc + unaff_r14) == 0) {
      iVar1 = (*(code *)(&FUN_8c013adc))
                        ((uint)*(ushort *)(0x4b8 + unaff_r14) -
                         (uint)*(ushort *)(0x4b8 + 2 + unaff_r14),ar5,ar6,ar7);
      dVar2 = (double)CONCAT44(0x3c23d70a,(float)*(ushort *)(0x4ba + unaff_r14));
      if ((char)((((uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 |
                  (uint)in_FPSCR_PR << 0x13) & 0xffe7ffff & 0x80000) >> 0x13) == '\0') {
        uVar3 = (uint)((float)*(ushort *)(0x4ba + unaff_r14) * 0x3c23d70a);
      }
      else {
        uVar3 = (uint)(dVar2 * dVar2);
      }
      if ((int)(uVar3 & 0xffff) < iVar1) {
        *(undefined2 *)(0x4b4 + unaff_r14) = 0;
      }
      in_r0 = (int)0x4b4;
      if (10 < *(ushort *)(in_r0 + unaff_r14)) {
        iVar1 = (int)0x4b8;
        *(undefined2 *)(iVar1 + 8 + unaff_r14) = *(undefined2 *)(iVar1 + unaff_r14);
        in_r0 = iVar1 + -4;
        *(undefined2 *)(in_r0 + unaff_r14) = 0;
      }
    }
    else {
      in_r0 = (int)0x4b4;
      *(undefined2 *)(in_r0 + unaff_r14) = 0;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c123822\n.set _FUN_8c123822, _FUN_8c123822_def\n");
