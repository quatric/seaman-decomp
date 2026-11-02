#include "../decls.h"
uint FUN_8c11cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = (&DATA_8c127c23);
  if ((byte)ar6 != 0) {
    puVar2 = (&DATA_8c127c20);
  }
  uVar1 = FUN_8c120348(ar4 + 0x48,(int)(char)puVar2[ar5],ar5,(uint)(byte)ar6);
  bVar3 = (uVar1 & 0xff) == 0;
  if (bVar3) {
    *(byte *)(ar5 + 0xe4 + ar4) = (byte)ar6;
  }
  return (uint)!bVar3;
}

__asm__(".globl _FUN_8c11cbbc\n.set _FUN_8c11cbbc, _FUN_8c11cbbc_def\n");
