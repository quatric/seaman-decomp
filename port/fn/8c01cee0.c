#include "../decls.h"
undefined4 FUN_8c01cee0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,1,0,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,2,0,ar7);
    if (iVar1 == 0) {
      iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,6,0x12c,ar7);
      if (iVar1 == 0) {
        iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,7,1,ar7);
        if (iVar1 == 0) {
          iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,10,0xc8,ar7);
          if (iVar1 == 0) {
            iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,0xd,1,ar7);
            if (iVar1 == 0) {
              iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,0xe,0xffffffff,ar7);
              if (iVar1 == 0) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01cee0\n.set _FUN_8c01cee0, _FUN_8c01cee0_def\n");
