#include "../decls.h"
undefined4 FUN_8c26bcaa_def(int ar4,int ar5,int *ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *a6;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(ar4 + 0x28) != 0) {
                    
                    
      uVar1 = (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd);
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = FUN_8c26b960(ar4,ar5,ar6,ar7);
    iVar2 = ar5 * 4;
    iVar3 = *(int *)(iVar2 + ar4 + 0x18);
    if (((*(char *)(ar4 + 5) == '\x01') && (iVar3 != 0)) && (*ar6 + ar6[1] == *(int *)(iVar3 + 8)))
    {
      *(int *)(iVar3 + 8) = *ar6;
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + ar6[1];
    }
    else {
      puVar4 = *(undefined4 **)(ar4 + 0x14);
      if (puVar4 == (undefined4 *)0x0) {
        if (*(int *)(ar4 + 0x28) != 0) {
          (**(code **)(ar4 + 0x28))(*(undefined4 *)(ar4 + 0x2c),0xfffffffd,a6,ar7);
        }
      }
      else {
        *(undefined4 *)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        FUN_8c010794(8,puVar4 + 2,ar6);
        *puVar4 = *(undefined4 *)(ar4 + 0x18 + iVar2);
        *(undefined4 **)(ar4 + 0x18 + iVar2) = puVar4;
      }
    }
    uVar1 = FUN_8c26b978(ar4,uVar1,a6,ar7);
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26bcaa\n.set _FUN_8c26bcaa, _FUN_8c26bcaa_def\n");
