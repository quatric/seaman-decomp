#include "../decls.h"
undefined4 FUN_8c11eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  undefined4 auStack_c [2];
  
  uVar4 = 0;
  uVar1 = FUN_8c120348(ar4 + 0x48,0x11,0,0);
  if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dc7e(ar4,1,auStack_c,uVar4), iVar2 == 0)) {
    ar6_00 = 0;
    uVar3 = 1;
    iVar2 = FUN_8c11dda2(ar4,1,0,uVar4);
    if ((iVar2 == 0) &&
       (uVar1 = FUN_8c12212e(ar4,uVar3,ar6_00,uVar4), (uVar1 & 0xff) == 0)) {
      uVar3 = 0;
      uVar1 = FUN_8c122230(ar4,(&DATA_8c127c1d),0,uVar4);
      if (((uVar1 & 0xff) == 0) &&
         (uVar1 = FUN_8c1222b4(ar4,(&DATA_8c127c1d),uVar3,uVar4), (uVar1 & 0xff) == 0
         )) {
        uVar4 = 0;
        uVar1 = FUN_8c120348(ar4 + 0x48,0x15,0,0);
        if (((uVar1 & 0xff) == 0) && (iVar2 = FUN_8c11dda2(ar4,1,auStack_c[0],uVar4), iVar2 == 0)) {
          *(undefined2 *)(0x144 + ar4) = 0;
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11eb8c\n.set _FUN_8c11eb8c, _FUN_8c11eb8c_def\n");
