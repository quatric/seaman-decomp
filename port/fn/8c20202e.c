#include "../decls.h"
int FUN_8c20202e_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int a4;
  int a4_00;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 *puStack_38;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [8];
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 auStack_1c [12];
  
  if (ar4 != (undefined1 *)0x0) {
    a4 = get_field_4_201c8e(ar4,ar5,ar6,ar7);
    uStack_24 = 0;
    a4_00 = a4;
    uStack_20 = FUN_8c201bae(a4,ar5,ar6,ar7);
    FUN_8c010794(8,auStack_2c,&uStack_24);
    FUN_8c010794(8,auStack_34,a4 + 0x3c);
    puStack_38 = auStack_1c;
    FUN_8c20284e(a4_00,ar5,ar6,ar7);
    FUN_8c010794(8,auStack_40,ar4 + 8);
    FUN_8c010794(8,auStack_48,auStack_1c);
    ain0 = FUN_8c2029b4(a4_00,ar5,ar6,ar7);
    if (ain0 == 1) {
      ain0 = FUN_8c010794(8,ar4 + 8,auStack_1c);
      *ar4 = 1;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c20202e\n.set _FUN_8c20202e, _FUN_8c20202e_def\n");
