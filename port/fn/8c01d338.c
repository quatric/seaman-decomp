#include "../decls.h"
undefined4 FUN_8c01d338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x563c);
  uVar1 = 5;
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01da90(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01dea4(ar4,ar5,ar6,ar7);
      break;
    case 2:
      uVar1 = FUN_8c01d78c(ar4,ar5,ar6,ar7);
      break;
    case 3:
      uVar1 = FUN_8c01d8d8(ar4,ar5,ar6,ar7);
      break;
    case 4:
      uVar1 = FUN_8c01d7cc(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = s_SPEECH_01d92e(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01d338\n.set _FUN_8c01d338, _FUN_8c01d338_def\n");
