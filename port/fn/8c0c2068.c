#include "../decls.h"
undefined4 FUN_8c0c2068_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ar5_01;
  int *ar6_00;
  undefined4 *ar6_01;
  undefined4 ar7_00;
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_ffffff7c;
  undefined1 auStack_6c [20];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (DAT_8c436854 == '\0') {
    _DAT_8c436850 = 0;
    DAT_8c436854 = '\x01';
  }
  if (DAT_8c43685c == '\0') {
    _DAT_8c436858 = 0;
    DAT_8c43685c = '\x01';
  }
  uVar1 = 2;
  uStack_38 = DAT_8c13bf70;
  uStack_34 = DAT_8c13bf74;
  uStack_30 = DAT_8c13bf78;
  uStack_2c = DAT_8c13bf7c;
  uStack_28 = DAT_8c13bf80;
  uStack_24 = DAT_8c13bf84;
  uStack_20 = DAT_8c13bf88;
  uStack_1c = DAT_8c13bf8c;
  uStack_58 = DAT_8c13bf90;
  uStack_54 = DAT_8c13bf94;
  uStack_50 = DAT_8c13bf98;
  uStack_4c = DAT_8c13bf9c;
  uStack_48 = DAT_8c13bfa0;
  uStack_44 = DAT_8c13bfa4;
  uStack_40 = DAT_8c13bfa8;
  uStack_3c = DAT_8c13bfac;
  ar5_00 = ar5;
  ar6_00 = ar6;
  FUN_8c0162f8(auStack_6c,ar5,ar6,ar7);
  if ((_DAT_8c436850 < 5) && (-1 < _DAT_8c436850)) {
                    
    switch(_DAT_8c436850) {
    case 0:
      _DAT_8c436860 = 0;
      _DAT_8c436862 = 0xff;
      _DAT_8c436864 = 0;
      _DAT_8c436866 = 0;
      _DAT_8c436868 = 0xff;
      _DAT_8c43686a = 0;
      _DAT_8c43686c = 0xff;
      _DAT_8c43686e = 0xff;
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (&DAT_8c13bf60)[iVar2] = 0xff000000;
      }
      _DAT_8c436850 = 1;
      break;
    case 1:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        (&DAT_8c13bf60)[iVar2] = (&DAT_8c13bf60)[iVar2] + 0x111111;
      }
      if (DAT_8c13bf60 == -1) {
        _DAT_8c436858 = *ar6;
        _DAT_8c436850 = 2;
      }
      break;
    case 2:
      if (0x3c < (uint)(*ar6 - _DAT_8c436858)) {
        _DAT_8c436850 = 3;
      }
      break;
    case 3:
      iVar2 = 0;
      while (iVar3 = iVar2, iVar3 < 4) {
        (&DAT_8c13bf60)[iVar3] = (&DAT_8c13bf60)[iVar3] + -0x111111;
        in_stack_ffffff7c = iVar3;
        iVar2 = iVar3 + 1;
      }
      if (DAT_8c13bf60 == -0x1000000) {
        _DAT_8c436858 = *ar6;
        _DAT_8c436850 = 4;
      }
      break;
    case 4:
      if (10 < (uint)(*ar6 - _DAT_8c436858)) {
        _DAT_8c436858 = 0;
        _DAT_8c436850 = 0;
        uVar1 = 4;
      }
    }
  }
  FUN_8c01538c(ar4 + 0x2e64c,ar5_00,ar6_00,ar7);
  FUN_8c014a94(ar4 + 0x2e64c,ar5,ar6_00,ar7);
  if (ar5 == 0xe) {
    ar7_00 = 4;
    ar6_01 = &DAT_8c13bf60;
    FUN_8c016318(auStack_6c,&uStack_38,&DAT_8c13bf60,4,in_stack_ffffff7c);
  }
  else {
    ar7_00 = 4;
    ar6_01 = &DAT_8c13bf60;
    FUN_8c016318(auStack_6c,&uStack_58,&DAT_8c13bf60,4,in_stack_ffffff7c);
  }
  FUN_8c016324(auStack_6c,&DAT_8c436860,ar6_01,ar7_00);
  ar5_01 = 0x80000020;
  FUN_8c015198(auStack_6c,0x80000020,ar6_01,ar7_00,in_stack_ffffff7c);
  FUN_8c016340(auStack_6c,ar5_01,ar6_01,ar7_00);
  free_if_nonnull_wrap_0151a0(auStack_6c,0xffffffff,ar6_01,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c2068\n.set _FUN_8c0c2068, _FUN_8c0c2068_def\n");
