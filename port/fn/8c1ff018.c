#include "../decls.h"
int FUN_8c1ff018_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)0x148;
  iVar8 = ar4 * iVar7 + 0x8c4783e0;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    iVar4 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      FUN_8c1fdd1a(ar4,pbVar5,ar6,ar7);
    }
    else {
      iVar4 = FUN_8c1fd550(ar4,pbVar5,ar6,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
        iVar7 = thunk_FUN_8c1ffcc2(ar4,pbVar5,ar6,ar7);
        puVar3 = (&FUN_8c200a84);
        if (iVar7 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined4 *)(iVar8 + 0x18) = 0;
        pbVar5 = (byte *)(*(code *)puVar3)(ar4,0,ar6,ar7);
        iVar7 = 0;
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff0b4:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            pbVar5 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
            return 0;
          }
          if ((*pbVar5 == 0x33) || (*pbVar5 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff0b4;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff018\n.set _FUN_8c1ff018, _FUN_8c1ff018_def\n");
