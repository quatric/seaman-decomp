#include "../decls.h"
int FUN_8c0128e8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int ar6_00;
  undefined4 in_stack_ffffffc4;
  byte abStack_34 [24];
  
  memset(ar6,0,0x10,ar7);
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(iVar4 + ar5) != '\0') {
      memset(abStack_34,0,0x10,ar7);
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        ar6_00 = (uint)*(byte *)(ar4 + sVar3) * (uint)*(byte *)(ar5 + iVar4);
        in_stack_ffffffc4 =
             CONCAT22((short)((uint)in_stack_ffffffc4 >> 0x10),
                      (ushort)abStack_34[iVar1 + 1] + (short)ar6_00);
        FUN_8c012a40(abStack_34 + iVar1,&stack0xffffffc4,ar6_00,ar7);
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = memmove(ar6 + 7,abStack_34 + 7,9,ar7);
      }
      else {
        iVar4 = FUN_8c010af8(iVar4 + ar6,abStack_34 + iVar4,9,ar7,in_stack_ffffffc4);
      }
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return iVar4;
}

__asm__(".globl _FUN_8c0128e8\n.set _FUN_8c0128e8, _FUN_8c0128e8_def\n");
