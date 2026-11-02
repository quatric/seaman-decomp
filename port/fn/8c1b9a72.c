#include "../decls.h"
undefined4 FUN_8c1b9a72_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r2;
  undefined1 extraout_r3;
  char cVar2;
  int a7;
  char *unaff_r9;
  int unaff_r12;
  int in_GBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte extraout_M;
  byte extraout_Q;
  byte in_IMASK;
  byte extraout_S;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 in_stack_00000000;
  
  FUN_8c1b9902(ar4,ar5,ar6,ar7,in_stack_00000000);
  uVar1 = FUN_8c1b9756(ar4,ar5,ar6,ar7,
                       *(undefined4 *)((int)&stack0x00000000 + (uint)extraout_T + extraout_r1));
  *(char *)(in_GBR + 0x9d) = (char)uVar1;
  cVar2 = (char)ar4;
  *(short *)(in_GBR + 0x72) = (short)uVar1;
  a7 = (int)*unaff_r9;
  *(undefined4 *)(unaff_r12 + 4) = uVar1;
  mac_wOp_wrap_1b992a(ar4,ar5,ar6,a7);
  *ar5 = extraout_r3;
  uVar1 = FUN_8c1b970a(ar4,ar5,ar6,a7,*(undefined4 *)(int)cVar2);
  *(char *)(in_GBR + 0xb3) = (char)uVar1;
  *(ushort *)(in_GBR + 0x9a) = (ushort)uVar1 ^ 0x9f;
  *(uint *)(extraout_r2 + -4) =
       (uint)extraout_T_00 | (uint)extraout_S << 1 | (uint)in_IMASK << 4 | (uint)extraout_Q << 8 |
       (uint)extraout_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
       (uint)in_MD << 0x1e;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9a72\n.set _FUN_8c1b9a72, _FUN_8c1b9a72_def\n");
