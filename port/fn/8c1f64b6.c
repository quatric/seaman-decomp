#include "../decls.h"
undefined * FUN_8c1f64b6_def(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*ar7 & 4) == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(char *)(ar6 + 4) == '\a') {
    uVar2 = 0;
  }
  else if (*(char *)(ar6 + 4) == -4) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  if (*(int *)(iVar1 + -0x73b8d2b8) == 0) {
    return &DAT_8c26c80c;
  }
                    
                    
  uVar2 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar2,*(undefined4 *)(iVar1 + -0x73b8d2bc));
  return (undefined *)uVar2;
}

__asm__(".globl _FUN_8c1f64b6\n.set _FUN_8c1f64b6, _FUN_8c1f64b6_def\n");
