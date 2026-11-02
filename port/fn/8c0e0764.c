#include "../decls.h"
undefined8 * FUN_8c0e0764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 *puVar1;
  
  if (DAT_8c438258 == '\0') {
    _DAT_8c438254 = 0;
    DAT_8c438258 = '\x01';
  }
  if (DAT_8c438260 == '\0') {
    _DAT_8c43825c = (undefined8 *)0x0;
    DAT_8c438260 = '\x01';
  }
  if (_DAT_8c43825c == (undefined8 *)0x0) {
    *(float *)(ar4 + 0x2324c) = *(float *)(ar4 + 0x2324c) - 8.9;
    puVar1 = &DAT_8c0e0860;
    if (*(float *)(ar4 + 0x2324c) < -1314.45) {
      *(undefined4 *)(ar4 + 0x2324c) = 0xc4a214cc;
      _DAT_8c438254 = 0;
      _DAT_8c43825c = (undefined8 *)0x1;
      puVar1 = (undefined8 *)0x1;
    }
  }
  else {
    puVar1 = _DAT_8c43825c;
    if (_DAT_8c43825c == (undefined8 *)0x1) {
      _DAT_8c438254 = _DAT_8c438254 + 1;
      puVar1 = (undefined8 *)0x5a;
      if (0x5a < _DAT_8c438254) {
        *(undefined4 *)(ar4 + 0x23254) = 0;
        *(undefined4 *)(ar4 + 0x2324c) = 0xc4a44e66;
        puVar1 = *(undefined8 **)(ar4 + 0x2325c);
        if (*(undefined8 **)(ar4 + 0x2325c) != (undefined8 *)0xffffffff) {
          FUN_8c022104(0x8c2b59d0,*(undefined4 *)(ar4 + 0x2325c),ar6,ar7);
          FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(ar4 + 0x2325c),ar6,ar7);
          *(undefined4 *)(ar4 + 0x2325c) = 0xffffffff;
          _DAT_8c43825c = (undefined8 *)0x0;
          puVar1 = (undefined8 *)0x0;
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0e0764\n.set _FUN_8c0e0764, _FUN_8c0e0764_def\n");
