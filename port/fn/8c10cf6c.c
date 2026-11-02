#include "../decls.h"
undefined4 FUN_8c10cf6c_def(int *ar4,undefined4 *ar5,ushort *ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  piVar2 = (int *)*ar5;
  iVar3 = *ar4;
  iVar1 = 0;
  if (*ar6 != 0) {
    do {
      if (*piVar2 != 0) {
        (**(code **)(iVar3 + 0x18))(iVar3,*piVar2,uVar4);
        (**(code **)(iVar3 + 0x18))(iVar3,piVar2[2]);
        *piVar2 = 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 3;
    } while (iVar1 < (int)(uint)*ar6);
  }
  if (*ar6 != (ushort)ar7) {
    if (*ar6 != 0) {
      (**(code **)(iVar3 + 0x18))(iVar3,*ar5);
    }
    if ((ushort)ar7 != 0) {
      uVar4 = (**(code **)(iVar3 + 0x14))(iVar3,(ushort)ar7,0xc);
      *ar5 = uVar4;
    }
    *ar6 = (ushort)ar7;
  }
  return *ar5;
}

__asm__(".globl _FUN_8c10cf6c\n.set _FUN_8c10cf6c, _FUN_8c10cf6c_def\n");
