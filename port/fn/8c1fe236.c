#include "../decls.h"
int FUN_8c1fe236_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int ar5_00;
  undefined1 *puVar5;
  undefined1 *ar6_00;
  int iVar6;
  int iVar7;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(iVar7 + 2) != '\0') {
    ar5_00 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7);
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        for (iVar6 = 0; iVar6 < 0x20; iVar6 = iVar6 + 1) {
          *(undefined1 *)(ar5 + iVar6) = *(undefined1 *)(*(int *)(iVar7 + 0x20) + iVar6 + 0x10);
        }
        puVar5 = (undefined1 *)(*(int *)(iVar7 + 0x20) + 0x30);
        ar6_00 = auStack_14;
        for (puVar4 = auStack_1c; puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200c82(ar5 + 0x30,auStack_1c,ar6_00,ar7);
        *(short *)(ar5 + 0x20) = (short)**(undefined4 **)(iVar7 + 0x1c) + 1;
        *(short *)(ar5 + 0x22) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x30);
        uVar3 = FUN_8c1fe350(ar4,0,ar6_00,ar7);
        *(short *)(ar5 + 0x26) = (short)uVar3;
        *(undefined2 *)(ar5 + 0x24) = *(undefined2 *)(ar5 + 0x26);
        *(short *)(ar5 + 0x28) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x38);
        uVar3 = FUN_8c1fe350(ar4,1,ar6_00,ar7);
        *(short *)(ar5 + 0x2a) = (short)uVar3;
        *(short *)(ar5 + 0x2c) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1;
        *(ushort *)(ar5 + 0x2e) = (ushort)*(byte *)(*(int *)(iVar7 + 0x20) + 0x4e);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe236\n.set _FUN_8c1fe236, _FUN_8c1fe236_def\n");
