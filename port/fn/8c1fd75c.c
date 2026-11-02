#include "../decls.h"
undefined4 FUN_8c1fd75c_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a7;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uStack_34;
  undefined2 uStack_24;
  
  a7 = _DAT_8c4783dc;
  puVar4 = (undefined2 *)&DAT_8c4783e0;
  if (ar4 == 0xf) {
    *(undefined4 *)(_DAT_8c4783dc + 4) = 0;
    uVar1 = DAT_8c273a64;
    iVar2 = DAT_8c273a54;
  }
  else {
    if (ar4 != 0x21) {
      if (ar4 == 0x41) {
        *(undefined4 *)(_DAT_8c4783dc + 4) = 2;
        uVar1 = DAT_8c273a6c;
        iVar2 = DAT_8c273a5c;
      }
      else {
        if (ar4 != 0x7a) {
          return 0xffffff00;
        }
        *(undefined4 *)(_DAT_8c4783dc + 4) = 3;
        uVar1 = DAT_8c273a70;
        iVar2 = DAT_8c273a60;
      }
      uStack_24 = (undefined2)uVar1;
      goto LAB_8c1fd7e8;
    }
    *(undefined4 *)(_DAT_8c4783dc + 4) = 1;
    uVar1 = DAT_8c273a68;
    iVar2 = DAT_8c273a58;
  }
  uStack_24 = (undefined2)uVar1;
LAB_8c1fd7e8:
  uStack_34 = 1;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if ((ar5 & uStack_34) != 0) {
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = (short)iVar3;
      *(int *)(puVar4 + 0xe) = iVar3 * 0x4c + -0x73b831c0;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined1 *)((int)puVar4 + 0xb) = 0;
      *(undefined1 *)(puVar4 + 6) = 0;
      *(int *)(puVar4 + 0x16) = ar6;
      *(int *)(puVar4 + 0x10) = ar6 + 0x20;
      *(int *)(puVar4 + 0x12) = ar6 + 0x220;
      *(int *)(puVar4 + 0x14) = (iVar2 + 1) * 0x200 + ar6 + 0x20;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 0;
      puVar4[7] = 1;
      puVar4[8] = (short)iVar2;
      puVar4[9] = uStack_24;
      puVar4[10] = 0x20;
      memset(puVar4 + 0x1c,0,0x10,a7);
      memset(puVar4 + 0x24,0,0x100,a7);
      memset(*(undefined4 *)(puVar4 + 0x16),0x47,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x10),0x53,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x12),0x46,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x14),0x44,0x20,a7);
      ar6 = ar6 + ar4 * 0x200 + 0x20;
    }
    uStack_34 = uStack_34 << 1;
    puVar4 = puVar4 + 0xa4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd75c\n.set _FUN_8c1fd75c, _FUN_8c1fd75c_def\n");
