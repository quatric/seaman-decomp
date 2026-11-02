#include "../decls.h"
undefined4 FUN_8c0c453c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined8 in_dr4;
  undefined4 ain0;
  undefined1 auStack_3c [20];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  ain0 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  uStack_28 = DAT_8c13bfc4;
  uStack_24 = DAT_8c13bfc8;
  uStack_20 = DAT_8c13bfcc;
  uStack_1c = DAT_8c13bfd0;
  uStack_18 = DAT_8c13bfd4;
  uStack_14 = DAT_8c13bfd8;
  uStack_10 = DAT_8c13bfdc;
  uStack_c = _DAT_8c13bfe0;
  FUN_8c0162f8(auStack_3c,ar5,ar6,ar7);
  ar7_00 = 4;
  ar6_00 = 0x8c43654c;
  FUN_8c016318(auStack_3c,&uStack_28,0x8c43654c,4,ain0);
  FUN_8c016324(auStack_3c,&DAT_8c43655c,ar6_00,ar7_00);
  uVar1 = 0x80000060;
  FUN_8c015198(auStack_3c,0x80000060,ar6_00,ar7_00,ain0);
  FUN_8c01538c(ar4 + 4,uVar1,ar6_00,ar7_00);
  uVar1 = 9;
  FUN_8c014a94(ar4 + 4,9,ar6_00,ar7_00);
  FUN_8c01636c(auStack_3c,uVar1,ar6_00,ar7_00);
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_3c,0xffffffff,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c0c453c\n.set _FUN_8c0c453c, _FUN_8c0c453c_def\n");
