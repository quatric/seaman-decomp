#include "../decls.h"
undefined4
FUN_8c02077c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 *s4,
            undefined4 *s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar5,*(undefined4 *)(ar4 + 0x20),ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c02051c(ar4,ar5,*(undefined4 *)(ar4 + 0x24),ar7);
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = FUN_8c02051c(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = FUN_8c02000c(ar4,ar5,ar7,s0,0,0);
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar1 + 8) = *s4;
          FUN_8c0205e8(ar4,ar4 + 0x20,iVar1,s0);
        }
        else {
          iVar1 = FUN_8c01ffa0(ar4,ar5,ar7,s0,s12,s16,s20);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        FUN_8c0206b8(ar4,iVar1,s20,uVar2);
        *s4 = *(undefined4 *)(iVar1 + 8);
        *s8 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      FUN_8c0208ec(ar4,ar5,ar4 + 0x24,ar7,s0,s20);
      uVar2 = 0;
    }
  }
  else {
    FUN_8c0206b8(ar4,iVar1,s20,uVar2);
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02077c\n.set _FUN_8c02077c, _FUN_8c02077c_def\n");
