#include "../decls.h"
int FUN_8c267740_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  byte *pbVar9;
  byte bVar10;
  
  iVar7 = 0xd000001;
  if (((*(int *)(&DATA_8c2784c0) != 0) && (iVar7 = 0x7000103, ar4 != 0)) &&
     (iVar7 = 0x3000001, ((byte)ar7 & 0xf0) == 0)) {
    bVar1 = *(byte *)(ar4 + 1);
    piVar6 = (int *)((short)(char)bVar1 * 0x2c + (int)0xa8 + *(int *)(&DATA_8c2784c0));
    *piVar6 = ar5;
    pbVar9 = 0x8c4bd42c;
    puVar2 = 0x8c4bd428;
    iVar7 = 0x3000001;
    if (*(char *)((int)piVar6 + 5) == '\x01') {
      bVar10 = 0;
    }
    else {
      if (*(char *)((int)piVar6 + 5) != '\x02') goto LAB_8c267802;
      bVar10 = (byte)0x80;
    }
    iVar5 = *piVar6;
    if (iVar5 == 1) {
      bVar8 = 0;
    }
    else if (iVar5 == 0) {
      bVar8 = 0x10;
    }
    else {
      if (iVar5 != 2) goto LAB_8c267802;
      bVar8 = 0x30;
    }
    piVar6[3] = 0;
    piVar6[4] = 0;
    *puVar2 = 0x21;
    puVar3 = 0x8c4bd42d;
    *pbVar9 = bVar1 | bVar10 | bVar8;
    *puVar3 = *(undefined1 *)((int)piVar6 + 6);
    *(char *)((int)puVar2 + 6) = (char)ar6;
    pcVar4 = 0x8c4bd430;
    pbVar9[3] = (byte)((uint)ar6 >> 8);
    *pcVar4 = (byte)ar7 << 3;
    pbVar9 = (byte *)((int)piVar6 + 7);
    for (iVar7 = 5; iVar7 < 7; iVar7 = iVar7 + 1) {
      bVar1 = *pbVar9;
      pbVar9 = pbVar9 + 1;
      ((undefined1 *)iVar7)[0x8c4bd42c] = bVar1;
    }
    iVar7 = FUN_8c267fe8(0x8c4bd428,FUN_8c267740);
  }
LAB_8c267802:
  if (iVar7 != 0) {
    FUN_8c2688a0((&FUN_8c267740),iVar7);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c267740\n.set _FUN_8c267740, _FUN_8c267740_def\n");
