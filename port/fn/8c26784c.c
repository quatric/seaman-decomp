#include "../decls.h"
int FUN_8c26784c_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int ar5_00;
  uint *puVar1;
  undefined4 in_PR;
  
  puVar1 = &DAT_8c278520;
  do {
    if ((int)*puVar1 < 1) {
      ar5_00 = 0x3000001;
LAB_8c267878:
      if (ar5_00 != 0) {
        FUN_8c2688a0(FUN_8c26784c,ar5_00,ar6,ar7,in_PR);
      }
      return ar5_00;
    }
    if ((ar6 & 0xffff) == *puVar1) {
      ar6 = (uint)(short)puVar1[1];
      ar5_00 = FUN_8c267740(ar4,ar5,ar6,ar7);
      goto LAB_8c267878;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}

__asm__(".globl _FUN_8c26784c\n.set _FUN_8c26784c, _FUN_8c26784c_def\n");
