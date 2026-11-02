#include "../decls.h"
undefined1 * FUN_8c211a20_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_40 = DAT_8c26d6f8;
  uStack_3c = DAT_8c26d6fc;
  uStack_38 = DAT_8c26d700;
  uStack_34 = DAT_8c26d704;
  uStack_30 = DAT_8c26d708;
  uStack_2c = DAT_8c26d70c;
  uStack_28 = DAT_8c26d710;
  uStack_24 = DAT_8c26d714;
  if ((((uint)_DAT_8c4aa014 & 1) != 0) &&
     ((_DAT_8c4a9ef0 == 0 || (_DAT_8c4a9fcc != (undefined1 *)0x20)))) {
    puVar1 = (undefined4 *)&DAT_8c4aa22c;
    uStack_44 = 0;
    if (ar4 != 0) {
      do {
        FUN_8c20731e(*puVar1,&uStack_40,0x20,ar7);
        uStack_44 = uStack_44 + 1;
        puVar1 = puVar1 + 5;
      } while (uStack_44 < ar4);
    }
    _DAT_8c4aa288 = 8;
  }
  if ((((uint)_DAT_8c4aa014 & 2) != 0) &&
     ((uStack_40 = 0x81000000, _DAT_8c4a9ef0 == 0 || (_DAT_8c4a9fcc != (undefined1 *)0x21)))) {
    puVar2 = &DAT_8c4aa22c;
    uStack_44 = 0;
    if (ar4 != 0) {
      do {
        FUN_8c20731e(*(undefined4 *)(puVar2 + 4),&uStack_40,0x20,ar7);
        uStack_44 = uStack_44 + 1;
        puVar2 = puVar2 + 0x14;
      } while (uStack_44 < ar4);
    }
    _DAT_8c4aa28c = 8;
  }
  if ((((uint)_DAT_8c4aa014 & 4) != 0) &&
     ((uStack_40 = 0x82000000, _DAT_8c4a9ef0 == 0 || (_DAT_8c4a9fcc != (undefined1 *)0x22)))) {
    puVar2 = &DAT_8c4aa22c;
    uStack_44 = 0;
    if (ar4 != 0) {
      do {
        FUN_8c20731e(*(undefined4 *)(puVar2 + 8),&uStack_40,0x20,ar7);
        uStack_44 = uStack_44 + 1;
        puVar2 = puVar2 + 0x14;
      } while (uStack_44 < ar4);
    }
    _DAT_8c4aa290 = 8;
  }
  if ((((uint)_DAT_8c4aa014 & 8) != 0) &&
     ((uStack_40 = 0x83000000, _DAT_8c4a9ef0 == 0 || (_DAT_8c4a9fcc != (undefined1 *)0x23)))) {
    puVar2 = &DAT_8c4aa22c;
    uStack_44 = 0;
    if (ar4 != 0) {
      do {
        FUN_8c20731e(*(undefined4 *)(puVar2 + 0xc),&uStack_40,0x20,ar7);
        uStack_44 = uStack_44 + 1;
        puVar2 = puVar2 + 0x14;
      } while (uStack_44 < ar4);
    }
    _DAT_8c4aa294 = 8;
  }
  puVar2 = _DAT_8c4aa014;
  if (((uint)_DAT_8c4aa014 & 0x10) != 0) {
    uStack_40 = 0x84000000;
    puVar2 = &DAT_8c4a9ef0;
    if ((_DAT_8c4a9ef0 == 0) || (puVar2 = _DAT_8c4a9fcc, _DAT_8c4a9fcc != (undefined1 *)0x24)) {
      puVar3 = &DAT_8c4aa22c;
      uStack_44 = 0;
      if (ar4 != 0) {
        do {
          puVar2 = (undefined1 *)FUN_8c20731e(*(undefined4 *)(puVar3 + 0x10),&uStack_40,0x20,ar7);
          uStack_44 = uStack_44 + 1;
          puVar3 = puVar3 + 0x14;
        } while (uStack_44 < ar4);
      }
      _DAT_8c4aa298 = 8;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c211a20\n.set _FUN_8c211a20, _FUN_8c211a20_def\n");
