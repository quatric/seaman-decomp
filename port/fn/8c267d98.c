#include "../decls.h"
int FUN_8c267d98_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  int *in_r3;
  int iVar1;
  int unaff_r10;
  int iVar2;
  int iVar3;
  int ar5_00;
  undefined4 in_PR;
  
  iVar1 = ar7;
  if (*in_r3 == 0) {
    ar7 = 0xd000001;
  }
  else if (unaff_r10 == 0) {
    ar7 = 0x7000103;
  }
  else {
    iVar3 = (int)(char)ar5;
    if ((0 < iVar3) && (iVar3 < 3)) {
      ar6 = (int)*(char *)(unaff_r10 + 1);
      iVar2 = (short)*(char *)(unaff_r10 + 1) * 0x2c + *in_r3 + 0xa8;
      if ((-1 < iVar3) && (iVar3 <= *(char *)(iVar2 + 4))) {
        *(char *)(iVar2 + 5) = (char)ar5;
        ar5_00 = ar7;
        if (0 < iVar3) {
          do {
            ar6 = *(int *)(ar5_00 * 4 + iVar2 + 0x1c);
            iVar1 = 0;
            FUN_8c267b30(unaff_r10,ar5_00,ar6,0);
            ar5_00 = ar5_00 + 1;
          } while (ar5_00 < iVar3);
        }
        goto LAB_8c267e0a;
      }
    }
    ar7 = 0x3000001;
  }
LAB_8c267e0a:
  if (ar7 != 0) {
    FUN_8c2688a0(FUN_8c267d88,ar7,ar6,iVar1,in_PR);
  }
  return ar7;
}

__asm__(".globl _FUN_8c267d98\n.set _FUN_8c267d98, _FUN_8c267d98_def\n");
