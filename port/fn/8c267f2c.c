#include "../decls.h"
int FUN_8c267f2c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  undefined4 in_stack_fffffff0;
  
  if (DAT_8c2784c0 == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    DAT_8c4bd4ec = *(char *)(ar4 + 1);
    ar7 = 0;
    ar6 = (short)DAT_8c4bd4ec * 0x2c + DAT_8c2784c0 + 0xa8;
    cVar1 = *(char *)(ar6 + 4);
    in_stack_fffffff0 = CONCAT31((int3)((uint)in_stack_fffffff0 >> 8),cVar1);
    iVar2 = 0;
    if (0 < cVar1) {
      do {
        *(undefined4 *)(ar6 + 0xc + iVar2) = 1;
        ar7 = ar7 + 1;
        *(undefined4 *)(ar6 + 0x14 + iVar2) = 0;
        *(undefined4 *)(ar6 + 0x24 + iVar2) = 0;
        iVar2 = iVar2 + 4;
      } while (ar7 < cVar1);
    }
    _DAT_8c4bd4e8 = 0x22;
    iVar2 = FUN_8c267fe8(&DAT_8c4bd4e8,0,ar6,ar7);
  }
  if (iVar2 != 0) {
    FUN_8c2688a0(FUN_8c267f2c,iVar2,ar6,ar7,in_stack_fffffff0);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267f2c\n.set _FUN_8c267f2c, _FUN_8c267f2c_def\n");
