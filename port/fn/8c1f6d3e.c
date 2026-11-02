#include "../decls.h"
int FUN_8c1f6d3e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c1f881c);
  uVar5 = 1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < ar5) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,ar7,uVar5);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = FUN_8c013ec0(ar7,ar6,0x3c);
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      ar6 = ar6 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar4 < ar5);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1f6d3e\n.set _FUN_8c1f6d3e, _FUN_8c1f6d3e_def\n");
