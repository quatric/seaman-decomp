#include "../decls.h"
undefined4 s_CHigyoEgg_LoadGRReq_088532_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*(int *)(0x420 + ar4) == 0) {
    iVar1 = s_Failed_to_load_Pack_CAnimal__027a86(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(0x420 + ar4) = 1;
    }
  }
  else if (*(int *)(0x420 + ar4) == 1) {
    if (*(int *)(0x330 + ar4) == 0) {
      (*(code *)(&report_error_message))
                ((&DATA_8c138590) + 0x189b,
                 (&DATA_8c138590) + 0x18ad,0,2);
      *(undefined4 *)(0x420 + ar4) = 0;
      uVar2 = 1;
    }
    else {
      iVar1 = (**(code **)(0xdc + *(int *)(*(int *)(0x330 + ar4) + 8)))
                        (*(int *)(0x330 + ar4),ar5,0,ar7);
      if (iVar1 == 1) {
        *(undefined2 *)(0x41c + ar4) = 0;
        *(undefined4 *)(0x420 + ar4) = 0;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _s_CHigyoEgg_LoadGRReq_088532\n.set _s_CHigyoEgg_LoadGRReq_088532, _s_CHigyoEgg_LoadGRReq_088532_def\n");
