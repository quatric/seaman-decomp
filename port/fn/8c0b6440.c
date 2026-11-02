#include "../decls.h"
undefined * FUN_8c0b6440_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  
  iVar2 = *(int *)(ar4 + 0x40);
  puVar1 = (undefined *)0x7;
  if ((iVar2 < 8) && (puVar1 = (undefined *)0x2, 1 < iVar2)) {
    puVar1 = (&switchdata_8c0b646e_8c0b6474)[iVar2 + -2];
                    
    switch(iVar2) {
    case 2:
      puVar1 = *(undefined **)(ar4 + 0x8c);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0x8c;
        *(undefined4 *)(ar4 + 0x8c) = 0;
      }
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c02f414(ar4,ar5,ar6,ar7);
      if ((puVar1 == (undefined *)0x1) &&
         (puVar1 = *(undefined **)(ar4 + 0x88), puVar1 == (undefined *)0x1)) {
        ar6_00 = 0x1b;
        uVar3 = 7;
        FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),7,0x1b,ar7);
        uVar3 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
        FUN_8c05feec(*(undefined4 *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
        *(char *)(ar4 + 0x9c) = *(char *)(ar4 + 0x9c) + '\x01';
        if (*(char *)(ar4 + 0x9c) == '\b') {
          uVar3 = 1;
          FUN_8c02cb84(*(int *)(ar6 + 4) + 0xa8,1,ar6_00,ar7,ar4);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))
                    (*(int *)(ar4 + 0x6c),uVar3,ar6_00,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
        puVar1 = (undefined *)0x88;
        *(undefined4 *)(ar4 + 0x88) = 0;
      }
      break;
    case 5:
      puVar1 = (undefined *)0x9d;
      *(char *)(ar4 + 0x9d) = *(char *)(ar4 + 0x9d) + '\x01';
      break;
    case 6:
      puVar1 = (undefined *)0x2;
      if ('\x01' < *(char *)(ar4 + 0x9d)) {
        *(undefined1 *)(ar4 + 0x98) = 3;
        puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
      }
      break;
    case 7:
      *(undefined1 *)(ar4 + 0x98) = 6;
      puVar1 = (undefined *)FUN_8c0c4e2c(ar4,ar5,ar6,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0b6440\n.set _FUN_8c0b6440, _FUN_8c0b6440_def\n");
