#include "../decls.h"
undefined4 FUN_8c264104_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c263cd4(ar4,ar5,ar6,ar7);
  *(char *)(ar4 + 0x72) = (char)ar5;
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return iVar1;
  }
  if (ar5 == 1) {
    (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
              (*(undefined4 *)(ar4 + 0xc),0,ar6,ar7);
    iVar1 = 0x7a120;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_26973a))
                      (*(undefined4 *)(ar4 + 0xc));
    return uVar2;
  }
  uVar2 = (*(code *)(&s_E1205_Illigal_parameter_MWRN_2691ba))
                    (*(undefined4 *)(ar4 + 0xc),1);
  return uVar2;
}

__asm__(".globl _FUN_8c264104\n.set _FUN_8c264104, _FUN_8c264104_def\n");
