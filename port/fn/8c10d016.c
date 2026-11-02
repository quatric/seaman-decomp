#include "../decls.h"
undefined4 FUN_8c10d016_def(int *ar4,int *ar5,uint ar6,uint ar7,int s0)

{
  int iVar1;
  undefined4 uVar2;
  uint a6;
  uint a7;
  int iVar3;
  
  iVar3 = *ar4;
  a6 = ar6;
  a7 = ar7;
  if (*ar5 != 0) {
    (**(code **)(iVar3 + 0x18))(iVar3,*ar5,ar6,ar7);
    (**(code **)(iVar3 + 0x18))(iVar3,ar5[2],a6,a7);
  }
  *(short *)(ar5 + 1) = (short)ar6;
  *(short *)((int)ar5 + 6) = (short)ar7;
  iVar1 = (**(code **)(iVar3 + 0x10))(iVar3,(ar6 & 0xffff) << 2,a6,a7);
  *ar5 = iVar1;
  iVar3 = (**(code **)(iVar3 + 0x14))(iVar3,ar6 & 0xffff,1,a7);
  ar5[2] = iVar3;
  if ((*ar5 != 0) && (ar5[2] != 0)) {
    iVar3 = 0;
    if ((ar6 & 0xffff) != 0) {
      do {
        iVar1 = iVar3 + 1;
        *(int *)(*ar5 + iVar3 * 4) = s0;
        s0 = s0 + (ar7 & 0xffff);
        iVar3 = iVar1;
      } while (iVar1 < (int)(ar6 & 0xffff));
    }
    return 0;
  }
  uVar2 = FUN_8c1204c4(ar4,2);
  return uVar2;
}

__asm__(".globl _FUN_8c10d016\n.set _FUN_8c10d016, _FUN_8c10d016_def\n");
