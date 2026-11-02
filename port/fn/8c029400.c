#include "../decls.h"
undefined1 *
s_CAnimal_SetPVMTexture_s_029404_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined1 auStack_10c [260];
  
  ar5_00 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5,ar6,ar7,(&DATA_8c12fdac) + 0x36f);
    ar7 = 2;
    ar6 = 0;
    ar5_00 = auStack_10c;
    (*(code *)(&report_error_message))
              ((&DATA_8c12fdac) + 0x38b,ar5_00,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5_00,ar6,ar7,(&DATA_8c12fdac) + 0x36f);
    (*(code *)(&report_error_message))
              ((&DATA_8c12fdac) + 0x3a6,auStack_10c,0,2);
  }
  (*(code *)(&FUN_8c239170))
            (ar5 + 8,*(undefined4 *)(ar5 + 0x10),0x8c4312a8,*(undefined4 *)(ar5 + 4));
  return ar5 + 8;
}

__asm__(".globl _s_CAnimal_SetPVMTexture_s_029404\n.set _s_CAnimal_SetPVMTexture_s_029404, _s_CAnimal_SetPVMTexture_s_029404_def\n");
