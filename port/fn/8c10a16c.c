#include "../decls.h"
undefined * Class_12c3c4_m4_10a16c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x7;
  if ((iVar2 < 8) && (-1 < iVar2)) {
    puVar1 = (&switchdata_8c10a18c_8c10a190)[iVar2];
                    
    switch(iVar2) {
    case 0:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,10,0x1b,ar7);
      break;
    case 3:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x10,0x1b,ar7);
      break;
    case 6:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x12,0x1b,ar7);
      break;
    case 7:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x13,0x1b,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12c3c4_m4_10a16c\n.set _Class_12c3c4_m4_10a16c, _Class_12c3c4_m4_10a16c_def\n");
