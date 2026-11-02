#include "../decls.h"
int FUN_8c267b30_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int in_stack_ffffffe4;
  int iStack_18;
  
  if (DAT_8c2784c0 == 0) {
    iVar5 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar5 = 0x7000103;
  }
  else {
    bVar1 = *(byte *)(ar4 + 1);
    cVar2 = (char)ar6;
    ar6 = 0;
    iVar6 = DAT_8c2784c0 + 0xa8 + (short)(char)bVar1 * 0x2c;
    *(int *)((char)ar5 * 4 + iVar6 + 0x1c) = (int)cVar2;
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = (int)cVar2;
    }
    uVar3 = (uint)(char)ar5;
    if ((*(char *)(iVar6 + 5) != '\x01') && (*(char *)(iVar6 + 5) == '\x02')) {
      if (uVar3 == 0) {
        in_stack_ffffffe4 = in_stack_ffffffe4 + 0x80;
      }
      else if ((uVar3 == 1) && (iStack_18 = iStack_18 + -0x80, -2 < iStack_18)) {
        iStack_18 = -2;
      }
      for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
        *(int *)(&stack0xffffffe4 + iVar5 * 4) =
             (int)(*(int *)(&stack0xffffffe4 + iVar5 * 4) +
                  (uint)(*(int *)(&stack0xffffffe4 + iVar5 * 4) < 0)) >> 1;
      }
    }
    for (iVar5 = 0; iVar5 < *(char *)(iVar6 + 5); iVar5 = iVar5 + 1) {
      *(int *)(&stack0xffffffe4 + iVar5 * 4) = *(int *)(&stack0xffffffe4 + iVar5 * 4) + 0x80;
    }
    _DAT_8c4bd4a0 = 0x26;
    DAT_8c4bd4a4 = (&DAT_8c278588)[uVar3 & 3] | bVar1;
    uVar4 = (undefined1)((uint)ar7 >> 8);
    if (uVar3 == 0) {
      DAT_8c4bd4a5 = (undefined1)in_stack_ffffffe4;
      DAT_8c4bd4a9 = 0;
      DAT_8c4bd4aa = 0;
      DAT_8c4bd4ab = 0;
      DAT_8c4bd4a6 = (char)ar7;
      DAT_8c4bd4a7 = uVar4;
    }
    else if (uVar3 == 1) {
      DAT_8c4bd4a5 = 0;
      DAT_8c4bd4a6 = 0;
      DAT_8c4bd4a7 = 0;
      DAT_8c4bd4a9 = (undefined1)iStack_18;
      DAT_8c4bd4aa = (char)ar7;
      DAT_8c4bd4ab = uVar4;
    }
    iVar5 = FUN_8c267fe8(&DAT_8c4bd4a0,&DAT_8c4bd4a5,0,ar7);
  }
  if (iVar5 != 0) {
    FUN_8c2688a0(FUN_8c267b30,iVar5,ar6,ar7,in_stack_ffffffe4);
  }
  return iVar5;
}

__asm__(".globl _FUN_8c267b30\n.set _FUN_8c267b30, _FUN_8c267b30_def\n");
