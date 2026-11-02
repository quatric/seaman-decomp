#include "../decls.h"
uint FUN_8c1f826c_def(ushort *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_34 [13];
  
  FUN_8c010794(0x30,aiStack_34,&DAT_8c26c964);
  uVar3 = *ar4 - 0x79c;
  iVar2 = (uVar3 >> 2) + (*ar4 - 0x79e) * 0x16d;
  if (((uVar3 & 3) == 0) && ((byte)ar4[1] < 3)) {
    iVar2 = iVar2 + -1;
  }
  uVar1 = ar4[3];
  *ar5 = (((iVar2 + aiStack_34[(byte)ar4[1] - 1] + (*(byte *)((int)ar4 + 3) - 1)) * 0x18 +
          (uint)(byte)ar4[2]) * 0x3c + (uint)*(byte *)((int)ar4 + 5)) * 0x3c + (uint)(byte)uVar1;
  return (uint)(byte)uVar1;
}

__asm__(".globl _FUN_8c1f826c\n.set _FUN_8c1f826c, _FUN_8c1f826c_def\n");
