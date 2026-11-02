#include "../decls.h"
int FUN_8c2654f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0x7000103;
  if ((((ar4 != 0) && (piVar3 = *(int **)(ar4 + 8), iVar2 = 0x9000001, *piVar3 == 0x56524453))
      && (iVar2 = 0xb000002, (char)piVar3[1] == '\x01')) && (*(char *)((int)piVar3 + 5) < '\x02')
     ) {
    aica_reg_265278();
    aica_ram_2684b8();
    FUN_8c265704((&DATA_8c2784b8));
    FUN_8c265ea0(*(undefined4 *)(&DATA_8c2784b8),piVar3 + 8,piVar3[2],0xffffffff,0);
    FUN_8c265ff4(*(undefined4 *)(&DATA_8c2784b8),0);
    aica_reg_2652f4();
    puVar1 = (&FUN_8c2653e0);
    for (iVar2 = 0x200000; iVar2 != 0; iVar2 = iVar2 + -1) {
    }
    *(undefined4 *)(&DATA_8c2784c4) = 1;
    (*(code *)puVar1)();
    FUN_8c2659dc(ar4);
    iVar2 = 0;
  }
  if (*(int *)(&DATA_8c2784b8) != 0) {
    FUN_8c265784(*(undefined4 *)(&DATA_8c2784b8));
  }
  if (iVar2 != 0) {
    FUN_8c2688a0((&FUN_8c2654f4),iVar2);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c2654f4\n.set _FUN_8c2654f4, _FUN_8c2654f4_def\n");
