#include "../decls.h"
undefined4 FUN_8c2186a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint *ain1)

{
  undefined4 ar7_00;
  int iVar1;
  longlong lVar2;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if ((*ain1 & 0x100) != 0) {
    if (in_FPSCR_SZ == '\0') {
      lVar2 = (ulonglong)(uint)ar4[5] << 0x20;
    }
    else {
      lVar2 = *(longlong *)(ar4 + 5);
    }
    if ((in_FPSCR_PR == '\0' && (float)lVar2 < (float)((ulonglong)lVar2 >> 0x20)) &&
       (iVar1 = FUN_8c217e18(ar4,ar5,ar6,ar7), iVar1 != 0)) {
      return 0xffffffff;
    }
  }
  ar7_00 = _DAT_8c4aa510;
  if (*ar4 != 0) {
    ar5 = FUN_8c21849c(*ar4,_DAT_8c4aa510,ar6,ar7);
  }
  if (ar4[1] != 0) {
    _DAT_8c4ab1d8 = ar5;
    FUN_8c217f12(ar4[1],ar5,_DAT_8c4c0fa0,ar7_00,in_PR);
  }
  return 0;
}

__asm__(".globl _FUN_8c2186a0\n.set _FUN_8c2186a0, _FUN_8c2186a0_def\n");
