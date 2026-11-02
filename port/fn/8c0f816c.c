#include "../decls.h"
int FUN_8c0f816c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  s_SPEECH_0faa98(ar4 + 0x1054,ar5,ar6,ar7);
  iVar4 = 0;
  if (*(int *)(0x89134 + ar4) != 0) {
    uVar2 = s_REQUEST_HOT_0f9780(ar4,ar5,ar6,ar7);
    *(undefined4 *)(0x89134 + ar4) = uVar2;
    iVar4 = 0;
    if (*(int *)(0x89140 + ar4) != 0) {
      uVar3 = FUN_8c028ee4(*(undefined4 *)(0x89140 + ar4),ar5,ar6,ar7);
      *(uint *)(0x102c + ar4) = uVar3 & 0xffff;
      *(undefined4 *)(0x1034 + ar4) = 0;
      uVar2 = (*(code *)(&FUN_8c1011b0))
                        (*(undefined4 *)(0x7cc + *(int *)(0x89140 + ar4)),ar5,ar6,ar7);
      iVar1 = 0x1034;
      iVar4 = 0x3c;
      if ((ushort)uVar2 < 0x3d) {
        *(undefined4 *)(0x1034 + ar4) = 1;
        iVar4 = iVar1;
      }
    }
  }
  return iVar4;
}

__asm__(".globl _FUN_8c0f816c\n.set _FUN_8c0f816c, _FUN_8c0f816c_def\n");
