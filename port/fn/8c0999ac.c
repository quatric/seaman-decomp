#include "../decls.h"
undefined * FUN_8c0999ac_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar5_00;
  int *ar6_00;
  undefined4 ar6_01;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0xa;
  if ((iVar2 < 0xb) && (puVar1 = (undefined *)0x1, 0 < iVar2)) {
    puVar1 = (&switchdata_8c0999d2_8c0999d8)[iVar2 + -1];
                    
    switch(iVar2) {
    case 1:
      *(undefined1 *)(ar4 + 0x98) = 2;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      break;
    case 3:
      puVar1 = (undefined *)get_field_13c_028d9c(ar6[1],ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x12) {
        ar6_01 = 0x1b;
        ar5_00 = 0x27;
        iVar2 = ar6[6];
        FUN_8c0b9ed4(iVar2,0x27,0x1b,ar7);
        *(undefined1 *)(ar4 + 0x98) = 5;
        puVar1 = (undefined *)FUN_8c0c4e2c(iVar2,ar5_00,ar6_01,ar7);
      }
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c0996dc(ar6[3],1,ar6,ar7);
      break;
    case 8:
      ar6_00 = ar6;
      puVar1 = (undefined *)(**(code **)(*(int *)(*ar6 + 8) + 0xb4))(*ar6,ar5,ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        iVar2 = *ar6;
        FUN_8c027954(iVar2,ar5,ar6_00,ar7);
        puVar1 = (undefined *)FUN_8c0c4e2c(iVar2,ar5,ar6_00,ar7);
      }
      break;
    case 9:
      *(undefined1 *)(ar4 + 0x98) = 5;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      break;
    case 10:
      FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      puVar1 = (undefined *)0x98;
      *(undefined1 *)(ar4 + 0x98) = 5;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0999ac\n.set _FUN_8c0999ac, _FUN_8c0999ac_def\n");
