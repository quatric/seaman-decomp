#include "../decls.h"
int FUN_8c0d89d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = get_field_10_0d8a98(ar4 + 0x78,ar5,ar6,ar7);
  iVar2 = get_field_c_0d8a90(ar4 + 0x78,ar5,ar6,ar7);
  iVar3 = FUN_8c0d8a88(ar4 + 0x78,ar5,ar6,ar7);
  if (iVar3 != 0) {
    for (iVar4 = 0; iVar4 < iVar1; iVar4 = iVar4 + 1) {
      iVar3 = get_field_2c_0d7ca8(iVar4 * 0x38 + iVar2,ar5,ar6,ar7);
      if (iVar3 == 1) {
        ar6 = 0;
        ar5 = ar4 + 0x6e50;
        iVar3 = FUN_8c0d7900(iVar4 * 0x38 + iVar2,ar5,0,ar7);
      }
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0d89d8\n.set _FUN_8c0d89d8, _FUN_8c0d89d8_def\n");
