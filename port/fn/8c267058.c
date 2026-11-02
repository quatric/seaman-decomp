#include "../decls.h"
int FUN_8c267058_def(int ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int ar5_00;
  undefined4 in_stack_ffffffe0;
  
  ar5_00 = 0;
  pcVar4 = ar6;
  if (DAT_8c2784c0 == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (char *)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    iVar2 = (short)*(char *)(ar4 + 1) * 0x2c + DAT_8c2784c0;
    FUN_8c268650(*(int *)(DAT_8c2784c0 + 0x1b8) + *(char *)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                 0x402,&stack0xffffffe0,ar6,ar7);
    cVar3 = (char)in_stack_ffffffe0;
    cVar1 = *(char *)(iVar2 + 0xad);
    if ((cVar1 != '\x01') && (cVar1 == '\x02')) {
      if ((char)ar5 == '\0') {
        cVar3 = cVar3 + '@';
      }
      else if ((char)ar5 == '\x01') {
        if (cVar3 == '\0') {
          cVar3 = -1;
        }
        cVar3 = cVar3 + -0x40;
      }
      cVar3 = cVar3 * '\x02';
    }
    *ar6 = cVar3;
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c267058,ar5_00,pcVar4,ar7,in_stack_ffffffe0);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c267058\n.set _FUN_8c267058, _FUN_8c267058_def\n");
