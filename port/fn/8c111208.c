#include "../decls.h"
int FUN_8c111208_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  int ar7_00;
  int iVar2;
  int iVar3;
  int iVar4;
  char cStack_24;
  
  cStack_24 = '\0';
  iVar4 = ar5 * 4;
  iVar1 = 0;
  a5 = ar4[0xe];
joined_r0x8c111238:
  do {
    if (a5 == 0) {
      return (int)cStack_24;
    }
    ar7_00 = *(int *)(*(int *)(a5 + 8) + iVar4);
    if (-1 < ar7_00) {
      iVar2 = ar7_00;
      if ((ar6 == 0) && (ar7_00 == 0)) {
        iVar2 = -1;
      }
      *(int *)(*(int *)(a5 + 8) + iVar4) = iVar2 - ar6;
      if (iVar2 - ar6 < 0) {
        iVar3 = *(int *)(a5 + 0xc);
        iVar2 = *(int *)(a5 + 4) + -1;
        *(int *)(a5 + 4) = iVar2;
        if (iVar2 == 0) {
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + -1;
        }
        cStack_24 = '\x01';
        iVar2 = *ar4;
        FUN_8c1209ec(iVar3,*(undefined4 *)(ar4[0xd] + iVar4),iVar2,ar7_00);
        if (*(int *)(a5 + 4) == 0) {
          iVar3 = *(int *)(a5 + 0x10);
          if (iVar1 == 0) {
            ar4[0xe] = iVar3;
          }
          else {
            *(int *)(iVar1 + 0x10) = iVar3;
          }
          (**(code **)(*ar4 + 0x18))(*ar4,*(undefined4 *)(a5 + 8),iVar2,ar7_00);
          (**(code **)(*ar4 + 0x18))(*ar4,a5,iVar2,ar7_00);
          a5 = iVar3;
          goto joined_r0x8c111238;
        }
      }
    }
    iVar1 = a5;
    a5 = *(int *)(a5 + 0x10);
  } while( true );
}

__asm__(".globl _FUN_8c111208\n.set _FUN_8c111208, _FUN_8c111208_def\n");
