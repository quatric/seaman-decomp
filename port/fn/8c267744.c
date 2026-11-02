#include "../decls.h"
int FUN_8c267744_def(int ar4,int ar5,undefined1 *ar6,uint ar7)

{
  undefined1 uVar1;
  byte bVar2;
  int *in_r3;
  int *piVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_PR;
  
  if (*in_r3 == 0) {
    iVar6 = 0xd000001;
    goto LAB_8c267802;
  }
  if (ar4 == 0) {
    iVar6 = 0x7000103;
    goto LAB_8c267802;
  }
  if ((ar7 & 0xf0) == 0) {
    bVar2 = *(byte *)(ar4 + 1);
    piVar3 = (int *)((short)(char)bVar2 * 0x2c + *in_r3 + 0xa8);
    *piVar3 = ar5;
    if (*(char *)((int)piVar3 + 5) == '\x01') {
      bVar5 = 0;
    }
    else {
      if (*(char *)((int)piVar3 + 5) != '\x02') goto LAB_8c2677e6;
      bVar5 = 0x80;
    }
    iVar6 = *piVar3;
    if (iVar6 == 1) {
      bVar4 = 0;
    }
    else if (iVar6 == 0) {
      bVar4 = 0x10;
    }
    else {
      if (iVar6 != 2) goto LAB_8c2677e6;
      bVar4 = 0x30;
    }
    DAT_8c4bd42c = bVar2 | bVar5 | bVar4;
    piVar3[3] = 0;
    piVar3[4] = 0;
    _DAT_8c4bd428 = 0x21;
    DAT_8c4bd42d = *(undefined1 *)((int)piVar3 + 6);
    ar7 = (int)(char)ar7 << 3;
    DAT_8c4bd42e = SUB41(ar6,0);
    DAT_8c4bd42f = (undefined1)((uint)ar6 >> 8);
    DAT_8c4bd430 = (undefined1)ar7;
    ar6 = (undefined1 *)((int)piVar3 + 7);
    for (iVar6 = 5; iVar6 < 7; iVar6 = iVar6 + 1) {
      uVar1 = *ar6;
      ar6 = ar6 + 1;
      (&DAT_8c4bd42c)[iVar6] = uVar1;
    }
    iVar6 = FUN_8c267fe8(&DAT_8c4bd428,7,ar6,ar7);
  }
  else {
LAB_8c2677e6:
    iVar6 = 0x3000001;
  }
LAB_8c267802:
  if (iVar6 != 0) {
    FUN_8c2688a0(FUN_8c267740,iVar6,ar6,ar7,in_PR);
  }
  return iVar6;
}

__asm__(".globl _FUN_8c267744\n.set _FUN_8c267744, _FUN_8c267744_def\n");
