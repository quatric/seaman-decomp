#include "../decls.h"
int FUN_8c1ff336_def(int ar4,byte *ar5,int *ar6,int ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined1 auStack_24 [8];
  int iStack_1c;
  
  iVar7 = (int)0x148;
  iVar8 = ar4 * iVar7 + 0x8c4783e0;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    ar6_00 = ar6;
    iVar4 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      FUN_8c1fdd1a(ar4,pbVar5,ar6_00,ar7);
    }
    else {
      iVar4 = FUN_8c1fd550(ar4,pbVar5,ar6_00,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
        iVar7 = thunk_FUN_8c1ffcc2(ar4,pbVar5,ar6_00,ar7);
        if (iVar7 < 0) {
          return (int)(int)0xffffff03;
        }
        pbVar5 = (byte *)FUN_8c200a84(ar4,*(undefined4 *)(iVar8 + 0x18),ar6_00,ar7);
        iVar7 = *(int *)(iVar8 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff400:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; puVar3 = (&FUN_8c2004ea), ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            (*(code *)puVar3)(pbVar5,auStack_44,ar6_01,ar7);
            *ar6 = iStack_1c * (*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) + 1);
            iVar7 = (int)0xcc;
            *(short *)(ar6 + 1) = (short)iStack_1c;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_40;
            *(undefined1 *)((int)ar6 + 7) = uStack_3a;
            *(undefined2 *)(ar6 + 2) = uStack_3c;
            puVar3 = (&FUN_8c200c82);
            *(bool *)((int)ar6 + 6) = iStack_40 == iVar7;
            (*(code *)puVar3)((int)ar6 + 10,auStack_24,ar6_01,ar7);
            return 0;
          }
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
          bVar1 = *pbVar5;
          ar7 = (int)(char)bVar1;
          if ((bVar1 == 0x33) || (bVar1 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff400;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff336\n.set _FUN_8c1ff336, _FUN_8c1ff336_def\n");
