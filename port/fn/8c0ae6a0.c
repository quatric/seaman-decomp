#include "../decls.h"
undefined4 s_Nautilus_0ae6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *ar5_00;
  int iVar1;
  char cVar2;
  undefined4 in_stack_fffffff0;
  
  cVar2 = '\0';
  ar5_00 = s_Nautilus_8c13ba15;
  strcpy(ar4,s_Nautilus_8c13ba15,ar6,ar7,in_stack_fffffff0);
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 2;
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x1c) = 0x44a28000;
    *(undefined4 *)(ar4 + 0x20) = 0x43480000;
    *(undefined4 *)(ar4 + 0x24) = 0x44048000;
  }
  else {
    *(undefined8 *)(ar4 + 0x1c) = 0x4348000044a28000;
    *(undefined8 *)(ar4 + 0x20) = 0x4404800043480000;
    *(undefined8 *)(ar4 + 0x24) = 0x8c02a1fc44048000;
  }
  FUN_8c02a1fc(ar4 + 0x2c,ar5_00,ar6,ar7);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x2c) = 0xc1f00000;
    *(undefined4 *)(ar4 + 0x30) = 0xc2b40000;
  }
  else {
    *(undefined8 *)(ar4 + 0x2c) = 0xc2b40000c1f00000;
    *(undefined8 *)(ar4 + 0x30) = 0x8c08a9b8c2b40000;
  }
  FUN_8c08a9b8(ar4 + 0x38,ar5_00,ar6,ar7);
  *(undefined4 *)(ar4 + 0x44) = 10;
  *(uint *)(ar4 + 0x48) = *(uint *)(ar4 + 0x48) | 0x80000001;
  FUN_8c0ae7a4(ar4 + 0x4c,ar5_00,ar6,ar7);
  for (iVar1 = 0; iVar1 < 0xf; iVar1 = iVar1 + 1) {
    *(undefined1 *)(ar4 + iVar1 + 0xd8) = 0;
  }
  *(undefined1 *)(ar4 + 0xd8) = 1;
  *(undefined1 *)(ar4 + 200) = 0;
  *(undefined4 *)(ar4 + 0xcc) = 0;
  *(undefined4 *)(ar4 + 0xe8) = 1;
  return 0xe8;
}

__asm__(".globl _s_Nautilus_0ae6a4\n.set _s_Nautilus_0ae6a4, _s_Nautilus_0ae6a4_def\n");
