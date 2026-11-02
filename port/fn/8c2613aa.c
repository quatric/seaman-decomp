#include "../decls.h"
undefined1 * FUN_8c2613aa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 0;
  do {
    if (*(char *)(iVar2 * 0x30 + -0x73b4c660) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 == 8) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    ar6_00 = ar6;
    FUN_8c260ca0(8,ar5,ar6,ar7,ar5);
    iVar2 = iVar2 * 0x30;
    ar5_00 = 0;
    puVar1 = (undefined1 *)(iVar2 + -0x73b4c660);
    *(char *)(iVar2 + -0x73b4c65e) = (char)ar4;
    ar4_00 = 0;
    if (0 < ar4) {
      do {
        ar5_00 = ar5_00 + 1;
        *(undefined4 *)(iVar2 + -0x73b4c65c + ar4_00) = *(undefined4 *)(ar5 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c654 + ar4_00) = *(undefined4 *)(ar6 + ar4_00);
        *(undefined4 *)(iVar2 + -0x73b4c64c + ar4_00) = 0;
        ar4_00 = ar4_00 + 4;
      } while (ar5_00 < ar4);
    }
    *(undefined1 *)(iVar2 + -0x73b4c65f) = 0;
    *(undefined4 *)(iVar2 + -0x73b4c634) = 0;
    *(int *)(iVar2 + -0x73b4c644) = ar4;
    *(undefined4 *)(iVar2 + -0x73b4c640) = 0xac44;
    if (cVar3 == '\0') {
      *(undefined4 *)(iVar2 + -0x73b4c63c) = 0x3dcccccd;
      *(undefined4 *)(iVar2 + -0x73b4c638) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(iVar2 + -0x73b4c63c) = 0x8c260cc83dcccccd;
      *(undefined8 *)(iVar2 + -0x73b4c638) = 0x8c260cc83dcccccd;
    }
    *puVar1 = 1;
    FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7,ar5);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c2613aa\n.set _FUN_8c2613aa, _FUN_8c2613aa_def\n");
