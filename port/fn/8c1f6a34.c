#include "../decls.h"
undefined4 FUN_8c1f6a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 in_PR;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_FR;
  
  _DAT_8c47489c = _DAT_8c474898;
  a5 = ar4 + 0x210;
  _DAT_8c474898 = ar4;
  FUN_8c01422c(ar4 + 4,ar5,ar6,ar7,
               (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
               (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15,
               in_PR);
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x208); iVar2 = iVar2 + 1) {
    *(int *)(ar4 + 0xd78) = a5;
    iVar1 = *(int *)(a5 + 0xc);
    if (iVar1 != 0) {
      if (iVar1 == 3) {
        FUN_8c1f689e(ar4,a5,ar6,ar7);
      }
      else if (iVar1 == 1) {
        if (*(uint *)(a5 + 0x14) <= *(uint *)(ar4 + 0x204)) {
          FUN_8c013e4c(a5 + 0x18,1,ar6,ar7);
        }
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(a5 + 0xc) = 3;
        *(code **)(a5 + 0x20) = FUN_8c1f692a;
      }
    }
    a5 = a5 + 0x124;
  }
  *(int *)(ar4 + 0x204) = *(int *)(ar4 + 0x204) + 1;
  _DAT_8c474898 = _DAT_8c47489c;
  return 0x204;
}

__asm__(".globl _FUN_8c1f6a34\n.set _FUN_8c1f6a34, _FUN_8c1f6a34_def\n");
