#include "../decls.h"
undefined4 FUN_8c20cefe_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    iVar1 = FUN_8c20d400(ar4[3],ar4[3],ar6,ar7);
    if ((ar4[6] & 1) == 0) {
      puVar2 = &DAT_8c26d448;
    }
    else {
      puVar2 = &DAT_8c26d464;
    }
    ar6_00 = *(undefined4 *)(puVar2 + iVar1 * 4);
  }
  else {
    if ((ar4[6] & 8) == 0) {
      return 4;
    }
    ar6_00 = 0x800;
  }
  FUN_8c20a8e0(ar4[7],ar5,ar6_00,ar7);
  return 0;
}

__asm__(".globl _FUN_8c20cefe\n.set _FUN_8c20cefe, _FUN_8c20cefe_def\n");
