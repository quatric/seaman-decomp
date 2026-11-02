#include "../decls.h"
undefined4 FUN_8c2641ee_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  
  if (*(char *)(ar4 + 0x72) == '\0') {
    return 0;
  }
  ar4_00 = *(undefined4 *)(ar4 + 0xc);
  uVar1 = s_E1205_Illigal_parameter_MWRN_269816(ar4_00,ar5,ar6,ar7);
  FUN_8c264010(ar4_00,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c2641ee\n.set _FUN_8c2641ee, _FUN_8c2641ee_def\n");
