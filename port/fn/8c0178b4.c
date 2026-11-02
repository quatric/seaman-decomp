#include "../decls.h"
int FUN_8c0178b4_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  
  *ar4 = ar5;
  for (puVar2 = *(undefined2 **)(*ar4 + 4); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
  }
  ar4[3] = (int)(short)puVar2[2] & 0x3fff;
  ar4[1] = (int)(puVar2 + 3);
  ar4[2] = *(int *)*ar4;
  iVar1 = ar4[2];
  ar4[2] = iVar1 + 8;
  return iVar1 + 8;
}

__asm__(".globl _FUN_8c0178b4\n.set _FUN_8c0178b4, _FUN_8c0178b4_def\n");
