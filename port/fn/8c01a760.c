#include "../decls.h"
undefined4 FUN_8c01a760_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4[*ar4 * 10 + 0x915];
  uVar1 = 0xd;
  if ((iVar2 < 0xe) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01c1a4(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01c260(ar4,ar5,ar6,ar7);
      break;
    case 2:
      iVar2 = FUN_8c01aa94(ar4,ar5,ar6,ar7);
      if (iVar2 == 1) {
        uVar1 = FUN_8c01a98c(ar4,ar5,ar6,ar7);
      }
      else {
        FUN_8c01c924(ar4,ar5,ar6,ar7);
        uVar1 = FUN_8c01bebc(ar4,ar5,ar6,ar7);
      }
      break;
    case 3:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01bfd0(ar4,ar5,ar6,ar7);
      break;
    case 4:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01c0e4(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = FUN_8c01c450(ar4,ar5,ar6,ar7);
      break;
    case 6:
      uVar1 = FUN_8c01c4d8(ar4,ar5,ar6,ar7);
      break;
    case 7:
      uVar1 = FUN_8c01c560(ar4,ar5,ar6,ar7);
      break;
    case 8:
      uVar1 = FUN_8c01c320(ar4,ar5,ar6,ar7);
      break;
    case 9:
      uVar1 = FUN_8c01c3c4(ar4,ar5,ar6,ar7);
      break;
    case 10:
      uVar1 = FUN_8c01c6f4(ar4,ar5,ar6,ar7);
      break;
    case 0xb:
      uVar1 = FUN_8c01c774(ar4,ar5,ar6,ar7);
      break;
    case 0xc:
      uVar1 = FUN_8c01c7f4(ar4,ar5,ar6,ar7);
      break;
    case 0xd:
      uVar1 = FUN_8c01c860(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a760\n.set _FUN_8c01a760, _FUN_8c01a760_def\n");
