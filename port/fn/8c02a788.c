#include "../decls.h"
undefined4 FUN_8c02a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 auStack_1c [20];
  
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  if (*(short *)(ar4 + 0x3f8) < *(short *)(ar4 + 0x3fa)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    *(undefined2 *)(ar4 + 0x3f8) = 1;
    if (*(int *)(ar4 + 0x3f4) == 0) {
      *(undefined4 *)(ar4 + 0x3dc) = *(undefined4 *)(ar4 + 0x3d8);
    }
    else if (*(int *)(ar4 + 0x3f4) == 1) {
      *(short *)(ar4 + 0x3f0) = *(short *)(ar4 + 0x3f0) + 1;
      if (*(int *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec)) == 0x50) {
        ar5 = *(undefined4 *)(ar4 + 0x3e4);
        FUN_8c02aab0(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
        *(undefined2 *)(ar4 + 0x3f0) = 0;
        *(undefined4 *)(ar4 + 0x3f4) = 0;
        *(undefined4 *)(ar4 + 0x3ec) = 0;
        *(undefined4 *)(ar4 + 0x3e0) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x3e4) =
             *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      }
    }
  }
  if (*(int *)(ar4 + 0x3e0) == 0) {
    uVar2 = get_field_94_02aaa4(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7,auStack_1c);
    ar6_00 = auStack_1c;
    uVar2 = FUN_8c02b208(ar4 + 0x310,*(undefined4 *)(ar4 + 0x3e4),ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x3e4) =
         *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
  }
  if (*(int *)(ar4 + 0x3e4) != *(int *)(ar4 + 1000)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    if ((*(int *)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(int *)(ar4 + 0x3e4))) {
                    
      *(int *)(ar4 + 0x3ec) =
           *(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + (*(int *)(ar4 + 0x3e4) + -0x47) * 8;
      *(undefined4 *)(ar4 + 0x3e4) =
           *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      *(undefined4 *)(ar4 + 0x3f4) = 1;
      *(undefined4 *)(ar4 + 0x3e0) = 1;
    }
    *(undefined4 *)(ar4 + 0x3d8) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 4 + 0x40);
    *(undefined4 *)(ar4 + 0x3dc) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 1000) * 4 + 0x40);
    *(undefined2 *)(ar4 + 0x3f8) =
         *(undefined2 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(int *)(ar4 + 0x3dc) != *(int *)(ar4 + 0x3d8)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3fa) + 1;
  }
  if (((*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) &&
      (*(short *)(ar4 + 0x3fa) < *(short *)(ar4 + 0x3f8))) && (*(int *)(ar4 + 0x3e0) == 1)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3f8) + 1;
  }
  *(undefined4 *)(ar4 + 1000) = *(undefined4 *)(ar4 + 0x3e4);
  return 1000;
}

__asm__(".globl _FUN_8c02a788\n.set _FUN_8c02a788, _FUN_8c02a788_def\n");
