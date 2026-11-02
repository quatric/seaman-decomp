#include "../decls.h"
int FUN_8c0b9d30_def(undefined4 ar4,ushort *ar5,ushort *ar6,undefined4 ar7)

{
  byte bVar1;
  int iVar2;
  ushort *ar6_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar3 = 0;
  ar6_00 = ar6;
  for (iVar7 = 0x79e; iVar7 < (int)(uint)*ar5; iVar7 = iVar7 + 1) {
    iVar2 = libgcc_divide_helper_01031c(iVar7,4,ar6_00,ar7);
    if (iVar2 == 0) {
      iVar5 = iVar5 + 0x16e;
    }
    else {
      iVar5 = iVar5 + 0x16d;
    }
  }
  bVar1 = (byte)ar5[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar7 = iVar5;
                    
    switch(bVar1) {
    case 0xc:
      iVar5 = iVar5 + 0x1e;
    case 0xb:
      iVar5 = iVar5 + 0x1f;
    case 10:
      iVar5 = iVar5 + 0x1e;
    case 9:
      iVar5 = iVar5 + 0x1f;
    case 8:
      iVar5 = iVar5 + 0x1f;
    case 7:
      iVar5 = iVar5 + 0x1e;
    case 6:
      iVar5 = iVar5 + 0x1f;
    case 5:
      iVar5 = iVar5 + 0x1e;
    case 4:
      iVar7 = iVar5 + 0x1f;
    case 3:
      iVar5 = iVar7 + 0x1c;
      iVar2 = libgcc_divide_helper_01031c((uint)*ar5,4,ar6_00,ar7);
      if (iVar2 == 0) {
        iVar5 = iVar7 + 0x1d;
      }
    case 2:
      iVar5 = iVar5 + 0x1f;
    }
  }
  uVar6 = iVar5 + (uint)*(byte *)((int)ar5 + 3);
  for (iVar5 = 0x79e; iVar5 < (int)(uint)*ar6; iVar5 = iVar5 + 1) {
    iVar7 = libgcc_divide_helper_01031c(iVar5,4,ar6_00,ar7);
    if (iVar7 == 0) {
      iVar3 = iVar3 + 0x16e;
    }
    else {
      iVar3 = iVar3 + 0x16d;
    }
  }
  bVar1 = (byte)ar6[1];
  if ((bVar1 < 0xd) && (1 < bVar1)) {
    iVar5 = iVar3;
                    
    switch(bVar1) {
    case 0xc:
      iVar3 = iVar3 + 0x1e;
    case 0xb:
      iVar3 = iVar3 + 0x1f;
    case 10:
      iVar3 = iVar3 + 0x1e;
    case 9:
      iVar3 = iVar3 + 0x1f;
    case 8:
      iVar3 = iVar3 + 0x1f;
    case 7:
      iVar3 = iVar3 + 0x1e;
    case 6:
      iVar3 = iVar3 + 0x1f;
    case 5:
      iVar3 = iVar3 + 0x1e;
    case 4:
      iVar5 = iVar3 + 0x1f;
    case 3:
      iVar3 = iVar5 + 0x1c;
      iVar7 = libgcc_divide_helper_01031c((uint)*ar6,4,ar6_00,ar7);
      if (iVar7 == 0) {
        iVar3 = iVar5 + 0x1d;
      }
    case 2:
      iVar3 = iVar3 + 0x1f;
    }
  }
  uVar4 = iVar3 + (uint)*(byte *)((int)ar6 + 3);
  if (uVar6 < uVar4) {
    iVar3 = 0xffff;
  }
  else {
    iVar3 = uVar6 - uVar4;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0b9d30\n.set _FUN_8c0b9d30, _FUN_8c0b9d30_def\n");
