#include "../decls.h"
undefined4 FUN_8c0bf22c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 uVar1;
  undefined4 ar6_00;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    a4 = (int *)FUN_8c0bf160(*(undefined4 *)(0x7d8 + ar5),iVar2,ar6,ar7);
    (**(code **)(0x1b0 + *a4))(a4,0,ar6,ar7);
  }
  (*(code *)(&pack_release_entry_handle))
            (0x8c2b59d0,*(undefined4 *)(0x144 + ar4),ar6,ar7);
  uVar1 = *(undefined4 *)(0x148 + ar4);
  pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7);
  iVar2 = FUN_8c0fa2b8(0x8c35468c,uVar1,ar6,ar7);
  if (iVar2 == 1) {
    FUN_8c0f8214(0x8c35468c,uVar1,ar6,ar7);
  }
  *(undefined4 *)(0x154 + ar4) = 0xffffff;
  ar6_00 = 0;
  uVar1 = 0xffffffff;
  FUN_8c0c3e78(0x8c2b5628,0xffffffff,0,ar7);
  s_Failed_s_015312(ar4 + 0x48,uVar1,ar6_00,ar7);
  *(undefined4 *)(0x14c + ar4) = 4;
  *(undefined4 *)(ar4 + 0x44) = 0x12;
  FUN_8c0ba5bc(ar4 + 0x158,uVar1,ar6_00,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(0x7dc + ar5) = 1;
  return 1;
}

__asm__(".globl _FUN_8c0bf22c\n.set _FUN_8c0bf22c, _FUN_8c0bf22c_def\n");
