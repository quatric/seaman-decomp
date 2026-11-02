#include "../decls.h"
int FUN_8c1fe646_def(int ar4,char *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *ar6_00;
  int *ar7_00;
  undefined1 auStack_44 [48];
  
  iVar4 = (int)0x148;
  iVar5 = ar4 * iVar4 + 0x8c4783e0;
  *ar7 = 0;
  if (*(char *)(iVar5 + 2) != '\0') {
    pcVar6 = ar5;
    uVar7 = ar6;
    ar7_00 = ar7;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,pcVar6,uVar7,ar7_00);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,pcVar6,uVar7,ar7_00);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,pcVar6,uVar7,ar7_00);
        if (iVar4 < 0) {
          return (int)(int)0xffffff03;
        }
        if ((*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) &&
           (iVar4 = ret_const_0_200aec(ar4,ar5,uVar7,ar7_00), -1 < iVar4)) {
          ar6_00 = auStack_44;
          iVar4 = FUN_8c200566(ar4,ar5,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)(int)0xffffff06;
          }
          iVar4 = FUN_8c2005d6(ar4,auStack_44,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)(int)0xffffff09;
          }
          uVar7 = 0;
          uVar3 = FUN_8c2009d0(ar4,0,ar6_00,ar7_00);
          if (((uVar3 & 0xffff) == 0xfffc) &&
             (iVar4 = FUN_8c200614(ar4,uVar7,ar6_00,ar7_00), -1 < iVar4)) {
            iVar5 = iVar4;
            FUN_8c200a84(ar4,iVar4,ar6_00,ar7_00);
            iVar5 = FUN_8c200ab6(ar4,iVar5,ar6_00,ar7_00);
            uVar7 = 0xffff;
            if (iVar5 == 0) {
              return (int)(int)0xffffff07;
            }
            *(undefined4 *)(iVar5 + 8) = 1;
            *(undefined4 *)(iVar5 + 4) = 2;
            *(int *)(iVar5 + 0x2c) = iVar4;
            *(undefined4 *)(iVar5 + 0x38) = uVar7;
            *(undefined4 *)(iVar5 + 0x30) = 0;
            *(int *)(iVar5 + 0x28) = ar4;
            *(undefined2 *)(iVar5 + 2) = 1;
            *(undefined1 *)(iVar5 + 1) = 0;
            pcVar6 = (char *)(iVar5 + 0x10);
            for (; puVar1 = (&FUN_8c200bfc), *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar6 = *ar5;
              pcVar6 = pcVar6 + 1;
            }
            *pcVar6 = '\0';
            (*(code *)puVar1)(iVar5 + 0x20,ar6,ar6_00,ar7_00);
            *ar7 = iVar5;
            return 0;
          }
        }
        return (int)(int)0xffffff08;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe646\n.set _FUN_8c1fe646, _FUN_8c1fe646_def\n");
