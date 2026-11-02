#include "../decls.h"
int s_CAnimal_ChangeBodyTexture_02af96_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (**(code **)(0x144 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  iVar2 = get_field_4_0253e4(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c12fdac) + 0x3ba,
                       (&DATA_8c12fdac) + 0x3c8,0,2);
  }
  else {
    *(int *)(0x42c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(int *)(0x430 + ar4) = iVar1 + ar5 * 8 + 0x88;
    iVar2 = 0x478;
    *(int *)(0x478 + ar4) = ar5;
  }
  return iVar2;
}

__asm__(".globl _s_CAnimal_ChangeBodyTexture_02af96\n.set _s_CAnimal_ChangeBodyTexture_02af96, _s_CAnimal_ChangeBodyTexture_02af96_def\n");
