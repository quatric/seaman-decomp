#include "../decls.h"
int s_GRATIFIC_RID_HOT_108562_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c02bebc(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,7,0,(&DATA_8c1eee90) + 0x39a,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,8,0,(&DATA_8c1eee90) + 0x3ab,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 2) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,0x1a,0,(&DATA_8c1eee90) + 0x3bd,
                 (&DATA_8c1eee90) + 0x33);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl _s_GRATIFIC_RID_HOT_108562\n.set _s_GRATIFIC_RID_HOT_108562, _s_GRATIFIC_RID_HOT_108562_def\n");
