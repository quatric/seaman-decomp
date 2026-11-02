#include "../decls.h"
int FUN_8c266d28_def(int ar4,undefined4 ar5,int *ar6,undefined1 *ar7)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int ar5_00;
  int in_stack_ffffffd8;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  ar5_00 = 0;
  piVar2 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (int *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    piVar3 = (int *)((short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0 + 0xa8);
    aica_ram_268618(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                    0x418,&stack0xffffffd8,ar6,ar7);
    ar7 = auStack_18;
    piVar2 = &iStack_1c;
    FUN_8c2684f0(0x52535053,(int)*(char *)((int)piVar3 + (char)ar5 + 7),piVar2,ar7);
    iVar1 = *piVar3;
    if (iVar1 == 1) {
      in_stack_ffffffd8 = in_stack_ffffffd8 * 2;
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      in_stack_ffffffd8 = (int)(in_stack_ffffffd8 + (uint)(in_stack_ffffffd8 < 0)) >> 1;
    }
    *ar6 = in_stack_ffffffd8;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c266d28,ar5_00,piVar2,ar7,in_stack_ffffffd8);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266d28\n.set _FUN_8c266d28, _FUN_8c266d28_def\n");
