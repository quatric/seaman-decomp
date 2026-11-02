#include "../decls.h"
undefined4 FUN_8c1f2bfe_def(char *ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  char *a6;
  int iVar2;
  int iVar3;
  int iVar4;
  int *a5;
  char *unaff_r13;
  int iVar5;
  int iStack_2c;
  
  a5 = ar6 + 4;
  if (ar6[2] != ar5) {
    iVar5 = 0;
    iVar2 = (int)0x800;
    ar6[2] = ar5;
    iVar3 = ar6[1];
    iStack_2c = ar5;
    for (iVar4 = ar7; 0 < iVar4; iVar4 = iVar4 - iVar2) {
      a6 = ar4;
      iVar1 = FUN_8c1f19ec(iStack_2c,1,ar4,ar7);
      if (iVar1 != 0) {
        ar6[2] = 0;
        return iVar1;
      }
      unaff_r13 = ar4;
      if (iVar3 <= iVar5) break;
      while (iVar1 = FUN_8c1f2b68(unaff_r13,a5,a6,ar7), iVar1 != 0) {
        if ((iVar5 == 0) && (a5[1] != iVar4)) {
          iVar4 = a5[1];
        }
        unaff_r13 = unaff_r13 + iVar1;
        a5 = a5 + 0xb;
        iVar5 = iVar5 + 1;
        if ((ar4 + iVar2 <= unaff_r13) || (iVar3 <= iVar5)) break;
      }
      if (iVar3 <= iVar5) break;
      iStack_2c = iStack_2c + 1;
    }
    *ar6 = iVar5;
    if (((iVar5 == iVar3) && (iVar4 != 0)) &&
       ((iVar4 != iVar2 || ((unaff_r13 < ar4 + iVar2 && (*unaff_r13 != '\0')))))) {
      ar6[2] = 0;
      return 0xfffffff4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2bfe\n.set _FUN_8c1f2bfe, _FUN_8c1f2bfe_def\n");
