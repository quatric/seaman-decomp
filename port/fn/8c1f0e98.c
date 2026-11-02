#include "../decls.h"
int FUN_8c1f0e98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (_DAT_8c2739d8 == (undefined1 *)0x0) {
    iVar2 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar2 = syscall_1f98ec(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5,ar6,ar7);
    puVar1 = _DAT_8c2739d8;
    if (iVar2 == 0) {
      ar5_01 = _DAT_8c2739d8 + 0x34;
      func_0x8c1f0974(s_KATANA_FLASH_____8c26c00c,ar5_01,0x10,uVar3);
      uVar3 = 0x12;
      *(short *)(_DAT_8c2739d8 + 2) = (short)ar4;
      puVar1[0x45] = (char)ar4;
      puVar1[0x44] = *_DAT_8c2739d8;
      iVar2 = syscall_1f98d8(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5_01,0x12,ar7);
      if (iVar2 == 0x12) {
        ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 8);
        FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 0xc),ar5_00,uVar3,ar7,0x12);
        iVar2 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar3,ar7);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = -2;
      }
    }
    else {
      iVar2 = -3;
    }
  }
  else {
    iVar2 = -6;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f0e98\n.set _FUN_8c1f0e98, _FUN_8c1f0e98_def\n");
