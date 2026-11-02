#include "../decls.h"
undefined4 FUN_8c1f7c50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  char *in_r2;
  undefined4 ar4_00;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int ar4_01;
  int unaff_r13;
  undefined4 unaff_r14;
  
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    ar4_00 = 3;
    FUN_8c1f6dcc(3,ar5,ar6,ar7);
    FUN_8c1f875c(ar4_00,ar5,ar6,ar7);
    iVar5 = (int)0x44c;
    memset(unaff_r13,(int)0xff,iVar5,ar7);
    puVar3 = (&FUN_8c1f6e0c);
    piVar2 = 0x8c4748b0;
    puVar1 = (&FUN_8c23c814);
    if (*(undefined4 *)0x8c474a2b == '\0') {
      iVar5 = 100;
      puVar4 = (undefined1 *)(unaff_r13 + 10);
      do {
        iVar5 = iVar5 + -1;
        *puVar4 = (char)unaff_r14;
        puVar4 = puVar4 + 0xb;
      } while (iVar5 != 0);
      *(undefined4 *)0x8c4748a8 = 3;
    }
    else {
      ar4_01 = 0x18;
      iVar6 = (int)0x1a8;
      do {
        (*(code *)puVar3)(ar4_01,0,iVar5,ar7);
        iVar5 = 10;
        (*(code *)puVar1)(unaff_r13,*piVar2 + 2,10,ar7);
        ar4_01 = ar4_01 + 4;
        *(char *)(unaff_r13 + 10) = (char)unaff_r14;
        unaff_r13 = unaff_r13 + 0xb;
      } while (ar4_01 < iVar6);
      unaff_r14 = 1;
    }
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c1f7c50\n.set _FUN_8c1f7c50, _FUN_8c1f7c50_def\n");
