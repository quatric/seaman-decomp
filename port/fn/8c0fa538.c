#include "../decls.h"
int FUN_8c0fa538_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ain0;
  
  iVar2 = 0;
  for (ain0 = 8; ain0 < 0x26; ain0 = ain0 + 1) {
    iVar1 = FUN_8c013bdc(ar4 + ain0 * 4 + 0x10,ar5,ar6,ar7);
    if (99 < iVar1) {
      ar5 = &DAT_8c140bcb;
      strcpy(ar4 + ain0 * 4 + 0x10,&DAT_8c140bcb,ar6,ar7,ain0);
    }
    if (2 < iVar1) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0fa538\n.set _FUN_8c0fa538, _FUN_8c0fa538_def\n");
