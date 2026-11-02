#include "../decls.h"
int FUN_8c1ff110_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  if (*(char *)(iVar6 + 2) != '\0') {
    pbVar4 = ar5;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,pbVar4,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,pbVar4,ar6,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,pbVar4,ar6,ar7);
        if (iVar5 < 0) {
          return (int)(int)0xffffff03;
        }
        pbVar4 = (byte *)FUN_8c200a84(ar4,*(undefined4 *)(iVar6 + 0x18),ar6,ar7);
        iVar5 = *(int *)(iVar6 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar6 + 0x1c) + 0x30) <= iVar5) {
LAB_8c1ff1a6:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            pbVar4 = pbVar4 + 4;
            pbVar7 = ar5 + 0xc;
            for (; ar5 < pbVar7; ar5 = ar5 + 1) {
              bVar1 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              *ar5 = bVar1;
            }
            *pbVar7 = 0;
            return 0;
          }
          *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
          if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff1a6;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff110\n.set _FUN_8c1ff110, _FUN_8c1ff110_def\n");
