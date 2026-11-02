#include "../decls.h"
int FUN_8c1ef640_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  
  iVar4 = 0;
  puVar2 = (undefined1 *)(*(undefined4 *)0x8c4727b4 + 0x28);
  puVar3 = 0x8c4709a0;
  do {
    iVar4 = iVar4 + 1;
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(puVar2 + 0x10);
    puVar3[4] = puVar2[8];
    puVar3[5] = puVar2[9];
    puVar3[6] = puVar2[10];
    cVar1 = puVar2[0xb];
    puVar3[7] = cVar1;
    *(undefined4 *)(puVar3 + 0xc) = *(undefined4 *)(puVar2 + 0x14);
    puVar3 = puVar3 + 0x18;
    puVar2 = puVar2 + 0x2c;
  } while (iVar4 < 0x18);
  return (int)cVar1;
}

__asm__(".globl _FUN_8c1ef640\n.set _FUN_8c1ef640, _FUN_8c1ef640_def\n");
