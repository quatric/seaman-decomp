#include "../decls.h"
undefined4 FUN_8c034148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = ar5;
  if (*(int *)(ar4 + 0x6c) == -1) {
    ar7 = 0;
    ar6 = 0;
    uVar1 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
  }
  iVar3 = *(int *)(ar4 + 0x6c);
  if ((iVar3 < 7) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar4 = 2;
      *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      break;
    case 1:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 2) {
        uVar4 = 1;
        *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      }
      break;
    case 3:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 4) {
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
        *(undefined4 *)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 5:
      iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
      if (iVar3 == 2) {
        uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
        *(undefined4 *)(ar4 + 0x6c) = uVar2;
      }
      break;
    case 6:
      if (*(int *)(ar4 + 0x2c) == -1) {
        uVar4 = 2;
        *(undefined4 *)(ar4 + 0x6c) = 0xffffffff;
      }
      else {
        iVar3 = s_CAnimBody_AdvanceFrame_033ba0(ar4,uVar2,ar6,ar7);
        if (iVar3 == 2) {
          uVar2 = s_CAnimBody_SetAnimation_033a94(ar4,ar5,0,0);
          *(undefined4 *)(ar4 + 0x6c) = uVar2;
        }
      }
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c034148\n.set _FUN_8c034148, _FUN_8c034148_def\n");
