#include "../decls.h"
undefined4 FUN_8c25ab02_def(uint *ar4,undefined4 ar5,uint ar6,uint ar7)

{
  int iVar1;
  uint ar6_00;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ar7 & 0xfffffffc;
  if (uVar2 != 0) {
    if ((*ar4 & 0xffff) == 3) {
      FUN_8c25a9cc(ar4,ar5,ar6,ar7);
    }
    else {
      if ((*ar4 >> 0x10 & 0xff00) == (int)0x200) {
        iVar1 = 4;
      }
      else {
        iVar1 = 0;
      }
      uVar3 = (ar6 & 0xfffffffc) + iVar1;
      ar6_00 = ar4[5] - uVar3;
      if (ar4[5] <= uVar3) {
        return 7;
      }
      if (uVar2 < ar6_00) {
        ar6_00 = uVar2;
      }
      FUN_8c20a8e0(uVar3 + ar4[7],ar5,ar6_00,ar7);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c25ab02\n.set _FUN_8c25ab02, _FUN_8c25ab02_def\n");
