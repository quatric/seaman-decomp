#include "../decls.h"
int FUN_8c113dfa_def(int *ar4,int *ar5,int *ar6,int ar7,undefined4 s0)

{
  ushort uVar1;
  int a6;
  int a4;
  undefined4 *puVar2;
  
  uVar1 = *(ushort *)(ar4 + 1);
  a4 = *ar6;
  a6 = (uint)uVar1 * 2;
  memmove(a4,*ar4 * 2 + ar7,a6,ar7);
  puVar2 = (undefined4 *)(a4 + a6);
  *(ushort *)((int)puVar2 + -2) = *(ushort *)((int)puVar2 + -2) | 1;
  *puVar2 = s0;
  *ar5 = *ar5 + uVar1 + 2;
  *ar6 = (int)(puVar2 + 1);
  return (int)(*(uint*)((uchar*)&s0+2));
}

__asm__(".globl _FUN_8c113dfa\n.set _FUN_8c113dfa, _FUN_8c113dfa_def\n");
