#include "../decls.h"
undefined4 FUN_8c0c7438_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar4_00;
  int ar4_01;
  undefined *puVar3;
  undefined1 auStack_24 [24];
  
  uVar1 = FUN_8c01f520(0x8c3dd7dc,ar5,ar6,ar7);
  if (*(int *)(0x2d160 + ar4) == 1) {
    puVar3 = (&DATA_8c13d004) + 0x139;
    ar4_00 = uVar1;
    iVar2 = FUN_8c01bba0(uVar1,puVar3,ar6,ar7);
    if (iVar2 != 0) {
      ar6 = auStack_24;
      puVar3 = (&DATA_8c13d004) + 0x16b;
      iVar2 = FUN_8c01bc2c(uVar1,puVar3,ar6,ar7);
      ar4_00 = uVar1;
      if (iVar2 != 4) {
        ar4_01 = ar5 + 0x96;
        iVar2 = FUN_8c0b7804(ar4_01,puVar3,ar6,ar7);
        if (iVar2 == 0) {
          FUN_8c0b79f0(ar4_01,puVar3,ar6,ar7);
          puVar3 = (&DATA_8c13d004) + 0x8e;
          uVar1 = 0;
          s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3);
          pure_virtual_stub(ar4,ar5,uVar1,puVar3);
          return 1;
        }
        goto LAB_8c0c755a;
      }
    }
    FUN_8c0b79f0(ar4_00,puVar3,ar6,ar7);
    puVar3 = (&DATA_8c13d004) + 0x8e;
    uVar1 = 0;
    s_WARNING_NOPAD_0c2f08(0x8c2b5628,5,0,puVar3);
    pure_virtual_stub(ar4,ar5,uVar1,puVar3);
  }
  else {
LAB_8c0c755a:
    pure_virtual_stub(ar4,ar5,ar6,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c0c7438\n.set _FUN_8c0c7438, _FUN_8c0c7438_def\n");
