#include "../decls.h"
uint s_SEAMANDC_USR_0b76dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined1 auStack_20 [24];
  
  ar4_00 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  uVar3 = 0;
  puVar2 = auStack_20;
  iVar1 = (*(code *)(&FUN_8c01bc2c))
                    (ar4_00,(&DATA_8c13bfe4) + 0x5c,puVar2,ar7);
  if (iVar1 == 5) {
    uVar3 = 4;
  }
  iVar1 = (*(code *)(&FUN_8c01bba0))
                    (ar4_00,(&DATA_8c13bfe4) + 0x69,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 8;
  }
  puVar2 = auStack_20;
  iVar1 = (*(code *)(&FUN_8c01bc2c))
                    (ar4_00,(&DATA_8c13bfe4) + 0x76,puVar2,ar7);
  if (iVar1 == 1) {
    uVar3 = uVar3 | 0x10;
  }
  iVar1 = (*(code *)(&FUN_8c01bba0))
                    (ar4_00,(&DATA_8c13bfe4) + 0x42,puVar2,ar7);
  if (iVar1 == 0) {
    uVar3 = uVar3 | 1;
  }
  iVar1 = (*(code *)(&FUN_8c01bc2c))
                    (ar4_00,(&DATA_8c13bfe4) + 0x5c,auStack_20,ar7);
  if (iVar1 == 4) {
    uVar3 = uVar3 | 2;
  }
  return uVar3;
}

__asm__(".globl _s_SEAMANDC_USR_0b76dc\n.set _s_SEAMANDC_USR_0b76dc, _s_SEAMANDC_USR_0b76dc_def\n");
