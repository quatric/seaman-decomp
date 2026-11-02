#include "../decls.h"
int FUN_8c1f7902_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined1)ar6;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  iVar3 = ar7;
  if ((char)ar4 == '\0') {
    iVar2 = 0xb4;
  }
  else {
    if ((char)ar4 != '\x01') goto LAB_8c1f7970;
    iVar2 = 0xae;
  }
  *(short *)(iVar2 + -0x73b8b73c) = *(short *)(iVar2 + -0x73b8b73c) + 1;
  FUN_8c1f8176(0x8c4749f2,0,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,0x8c474a08,ar6,iVar3);
LAB_8c1f7970:
  if ((char)ar4 != '\x01') {
    DAT_8c47497a = (undefined1)ar5;
    DAT_8c47497b = uVar1;
  }
  if (ar7 != 0) {
    ar6 = 0x20;
    memmove(0x8c474988,ar7,0x20,iVar3);
  }
  _DAT_8c4748a8 = 10;
  _DAT_8c4749dc = _DAT_8c4749dc + -1;
  iVar2 = _DAT_8c4748c0;
  if (((_DAT_8c4749dc == 0) && (_DAT_8c4749e0 != 0)) &&
     (iVar2 = FUN_8c1f79d8(&DAT_8c4749dc,_DAT_8c4748c0,ar6,iVar3), iVar2 == 1)) {
    iVar2 = _DAT_8c4748c0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f7902\n.set _FUN_8c1f7902, _FUN_8c1f7902_def\n");
