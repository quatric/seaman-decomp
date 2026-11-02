#include "../decls.h"
undefined * Class_12a078_m4_067284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x4;
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar1 = (&switchdata_8c0672a4_8c0672a8)[iVar2];
                    
    switch(iVar2) {
    case 1:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1d,0x1b,ar7);
      break;
    case 2:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1c,0x1b,ar7);
      break;
    case 3:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1e,0x1b,ar7);
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1f,0x1b,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12a078_m4_067284\n.set _Class_12a078_m4_067284, _Class_12a078_m4_067284_def\n");
