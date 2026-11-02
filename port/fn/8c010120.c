#include "../decls.h"
uint FUN_8c010120_def(int ar4,code *ar5,code *ar6,int ar7,uint s0)

{
  int iVar1;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
    (*ar5)(iVar1,1,uVar2);
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < s0) && (s0 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (*ar6)(iVar1,0xffffffff);
    }
  }
  return s0;
}

__asm__(".globl _FUN_8c010120\n.set _FUN_8c010120, _FUN_8c010120_def\n");
