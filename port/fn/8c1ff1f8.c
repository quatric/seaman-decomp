#include "../decls.h"
int FUN_8c1ff1f8_def(int ar4,byte *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 auStack_20 [8];
  int iStack_18;
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(iVar7 + 2) != '\0') {
    pbVar4 = ar5;
    ar6_00 = ar6;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,pbVar4,ar6_00,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,pbVar4,ar6_00,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,pbVar4,ar6_00,ar7);
        puVar2 = (&FUN_8c200a84);
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined4 *)(iVar7 + 0x18) = 0;
        pbVar4 = (byte *)(*(code *)puVar2)(ar4,0,ar6_00,ar7);
        iVar6 = 0;
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(iVar7 + 0x1c) + 0x30) <= iVar6) {
LAB_8c1ff298:
            if (iVar3 == 0) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar4 + 4;
            pbVar5 = ar5 + 0xc;
            for (; puVar2 = (&FUN_8c2004ea), ar5 < pbVar5; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar5 = 0;
            *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
            (*(code *)puVar2)(pbVar4,auStack_40,ar6_01,iVar3);
            iVar6 = (int)0xcc;
            *ar6 = iStack_18 * (*(int *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1);
            *(short *)(ar6 + 1) = (short)iStack_18;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_3c;
            *(undefined1 *)((int)ar6 + 7) = uStack_36;
            *(undefined2 *)(ar6 + 2) = uStack_38;
            puVar2 = (&FUN_8c200c82);
            *(bool *)((int)ar6 + 6) = iStack_3c == iVar6;
            (*(code *)puVar2)((int)ar6 + 10,auStack_20,ar6_01,iVar3);
            return 0;
          }
          if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
            iVar3 = 1;
            goto LAB_8c1ff298;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar6 = iVar6 + 1;
          *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff1f8\n.set _FUN_8c1ff1f8, _FUN_8c1ff1f8_def\n");
