#include "../decls.h"
undefined4 FUN_8c01e1e8_def(int *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_ffffffe0;
  
  _DAT_8c279278 = 0;
  _DAT_8c27927c = 0;
  if ((ar4 != (int *)0x0) && (_DAT_8c27924c != 0)) {
    if (_DAT_8c2791c0 == 2) {
      _DAT_8c279274 = 0;
      FUN_8c201c28(_DAT_8c27926c,0,ar6,ar7);
      _DAT_8c2791bc = 2;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb3,ar6,ar7,in_stack_ffffffe0);
    }
    else if (_DAT_8c2791c0 == 3) {
      _DAT_8c279274 = _DAT_8c279274 + 2;
      if (0x10 < _DAT_8c279274) {
        _DAT_8c279274 = 0x10;
      }
      FUN_8c201c28(_DAT_8c27926c,_DAT_8c279274,ar6,ar7);
      _DAT_8c2791bc = 3;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*ar4 == 0) {
      _DAT_8c279274 = 0x10;
      FUN_8c201c28(_DAT_8c27926c,0x10,ar6,ar7);
    }
    else if (*(int *)(ar4[1] + 4) < 1000) {
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*(int *)(ar4[1] + 4) < _DAT_8c279280) {
      _DAT_8c279280 = _DAT_8c279280 + -500;
      if (_DAT_8c279280 < 3000) {
        _DAT_8c279280 = 3000;
      }
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else {
      if ((_DAT_8c279280 + 1000 < *(int *)(ar4[1] + 4)) &&
         (_DAT_8c279280 = _DAT_8c279280 + 500, 8000 < _DAT_8c279280)) {
        _DAT_8c279280 = 8000;
      }
      _DAT_8c2791bc = 1;
      DAT_8c2791c8 = '\0';
      for (iVar1 = 0; iVar1 < *(int *)(uint)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(uint *)(*(int *)(*(int *)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if (((_DAT_8c279250 != 0) && (uVar2 < _DAT_8c279254)) &&
           (**(char **)(uVar2 * 4 + _DAT_8c279250) != '\0')) {
          FUN_8c01437c(&DAT_8c2791c8,*(undefined4 *)(uVar2 * 4 + _DAT_8c279250),ar6,ar7);
          ar5 = " ";
          FUN_8c01437c(&DAT_8c2791c8,&DAT_8c12fbbb,ar6,ar7);
          in_stack_ffffffe0 = uVar2;
        }
      }
      if (DAT_8c2791c8 == '\0') {
        ar5 = "@NAME";
        strcpy(&DAT_8c2791c8,"@NAME",ar6,ar7,in_stack_ffffffe0);
        _DAT_8c27927c = 1;
      }
      iVar1 = log_message(&DAT_8c2791c8,ar5,ar6,ar7);
      if ((0 < iVar1) && (*(char *)(iVar1 + -0x73d86e39) == ' ')) {
        *(undefined1 *)(iVar1 + -0x73d86e39) = 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c01e1e8\n.set _FUN_8c01e1e8, _FUN_8c01e1e8_def\n");
