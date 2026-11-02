#include "../decls.h"
int s_CItemGLoader_RegistToLoad_0fed74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 ar6_00;
  
  ar6_00 = ar6;
  ar5_00 = FUN_8c0fecb0(ar4 + 0x4c,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    (*(code *)(&report_error_message))
              ((&DATA_8c141e34) + 0x2c9,
               (&DATA_8c141e34) + 0x2dd,1,2);
  }
  else {
    *(undefined4 *)(ar5_00 + 8) = ar5;
    *(undefined4 *)(ar5_00 + 0xc) = ar6;
    *(undefined4 *)(ar5_00 + 0x10) = 1;
    FUN_8c0fe8c4(ar4,ar5_00,ar6_00,ar7);
  }
  return ar5_00;
}

__asm__(".globl _s_CItemGLoader_RegistToLoad_0fed74\n.set _s_CItemGLoader_RegistToLoad_0fed74, _s_CItemGLoader_RegistToLoad_0fed74_def\n");
