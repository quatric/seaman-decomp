#include "../decls.h"
uint aica_driver_load_manatee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_8 [2];
  
  ar7_00 = auStack_8;
  ar6_00 = (&DATA_8c12fc98);
  iVar1 = (*(code *)(&file_load_to_buffer))
                    (0x8c3eb334,(&DATA_8c12fc98) + 1,(&DATA_8c12fc98),ar7_00);
  if (iVar1 != 0) {
    aica_driver_upload(ar4,auStack_8[0],ar6_00,ar7_00);
    FUN_8c021234(0x8c3eb334,(&DATA_8c12fc98) + 1,(&DATA_8c12fc98),1);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _aica_driver_load_manatee\n.set _aica_driver_load_manatee, _aica_driver_load_manatee_def\n");
