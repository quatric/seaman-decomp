#include "../decls.h"
uint FUN_8c1fbe84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_8c273a44 != 0) {
    if (_DAT_8c475f98 == 0) {
      pcVar2 = FUN_8c1fc00e;
    }
    else {
      pcVar2 = FUN_8c1fbfd2;
    }
    thunk_FUN_8c1fcfbe(ar4,ar5,ar6,ar7);
    _DAT_8c475f88 = _DAT_8c475f8c;
    _DAT_8c475f8c = FUN_8c1fda44(ar4,ar5,ar6,ar7);
    uVar3 = 0;
    iVar6 = 0;
    uVar4 = 1;
    _DAT_8c475f8c = _DAT_8c475f8c & _DAT_8c475f9c;
    do {
      iVar1 = FUN_8c1fc5c4(iVar6,ar5,ar6,ar7);
      uVar5 = uVar4;
      if (iVar1 != 0) {
        uVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 | uVar5;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f88 ^ _DAT_8c475f8c) & _DAT_8c475f8c;
    ain0 = _DAT_8c475f8c;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f90 = _DAT_8c475f90 | uVar5;
        }
        else {
          ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
          _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f90 & uVar5) != 0)) {
        ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
        _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f8c ^ _DAT_8c475f88) & _DAT_8c475f88;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f94 = _DAT_8c475f94 | uVar5;
        }
        else {
          ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
          _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f94 & uVar5) != 0)) {
        ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
        _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1fbe84\n.set _FUN_8c1fbe84, _FUN_8c1fbe84_def\n");
