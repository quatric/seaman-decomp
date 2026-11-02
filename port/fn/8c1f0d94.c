#include "../decls.h"
undefined4 s_KATANA_FLASH_1f0d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((ar4 < 1) || (4 < ar4)) {
    uVar2 = 0xfffffff9;
  }
  else {
    _DAT_8c2739d8 = (short *)&DAT_8c470ee0;
    syscall_1f98b0(ar4,&uStack_14,ar6,ar7);
    *_DAT_8c2739d8 = (short)ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 2) = uStack_14;
    *(undefined4 *)(_DAT_8c2739d8 + 4) = uStack_10;
    *(int *)(_DAT_8c2739d8 + 0xc) = *(int *)(_DAT_8c2739d8 + 4) + 0x7fff >> 0xf;
    *(int *)(_DAT_8c2739d8 + 10) =
         ((*(int *)(_DAT_8c2739d8 + 4) >> 6) - *(int *)(_DAT_8c2739d8 + 0xc)) + -1;
    *(undefined4 *)(_DAT_8c2739d8 + 6) = ar5;
    psVar1 = _DAT_8c2739d8;
    psVar1[0xe] = 0;
    psVar1[0xf] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x10] = 0;
    psVar1[0x11] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x16] = 0;
    psVar1[0x17] = 0;
    iVar3 = syscall_1f98c4(*(undefined4 *)(_DAT_8c2739d8 + 2),_DAT_8c2739d8 + 0x1a,0x40,ar7);
    psVar1 = _DAT_8c2739d8;
    if (iVar3 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0xc;
      iVar3 = func_0x8c1f093c(_DAT_8c2739d8 + 0x1a,"KATANA_FLASH____",0xc,ar7);
      if ((iVar3 != 0) && ((int)*_DAT_8c2739d8 == (int)(char)psVar1[0x22])) {
        _DAT_8c2739d8[1] = (short)*(char *)((int)psVar1 + 0x45);
        if ((_DAT_8c2739d8[1] == 0) || (_DAT_8c2739d8[1] == 1)) {
          ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 4);
          FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 6),ar5_00,uVar2,ar7,ar5);
          iVar3 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar2,ar7);
          if (iVar3 != 0) {
            return iVar3;
          }
          return 0;
        }
      }
      uVar2 = 0xfffffff8;
    }
  }
  return uVar2;
}

__asm__(".globl _s_KATANA_FLASH_1f0d98\n.set _s_KATANA_FLASH_1f0d98, _s_KATANA_FLASH_1f0d98_def\n");
