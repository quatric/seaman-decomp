#include "../decls.h"
int FUN_8c02174c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint in_fr1;
  double dVar3;
  undefined4 in_fr5;
  float in_fr4;
  undefined4 in_fr14;
  bool bVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 uStack_30;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (*ar4 == 0) {
    return 0;
  }
  uVar1 = FUN_8c013adc((int)in_fr4,ar5,ar6,ar7);
  ar5_00 = 0x14d;
  iVar2 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar2 < 9) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = 0x10;
      break;
    case 2:
      iVar2 = 0x20;
      break;
    case 3:
      iVar2 = 0x30;
      break;
    case 4:
      iVar2 = 0x40;
      break;
    case 5:
      iVar2 = 0x50;
      break;
    case 6:
      iVar2 = 0x60;
      break;
    case 7:
      iVar2 = 0x70;
      break;
    case 8:
      goto switchD_8c021798_caseD_8;
    }
  }
  else {
switchD_8c021798_caseD_8:
    iVar2 = 0x7f;
  }
  if (cVar6 == '\0') {
    bVar4 = in_fr4 < 0.0;
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(in_fr5,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_30,in_fr5);
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar5 = (int)dVar3;
  }
  uVar1 = FUN_8c013adc(iVar5,ar5_00,ar6,ar7);
  iVar5 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar5 < 9) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      uVar1 = 0x7f;
      break;
    case 1:
      uVar1 = 0x1e;
      break;
    case 2:
      uVar1 = 0x14;
      break;
    case 3:
      uVar1 = 7;
      break;
    case 4:
      uVar1 = 0;
      break;
    case 5:
      uVar1 = 0xfffffff9;
      break;
    case 6:
      uVar1 = 0xfffffff4;
      break;
    case 7:
      uVar1 = 0xffffffe7;
      break;
    case 8:
      uVar1 = 0xffffffe2;
    }
  }
  else {
    uVar1 = 0xffffff81;
  }
  iVar5 = FUN_8c0225f4(ar4 + 1,2,ar5,ar7);
  if (-1 < iVar5) {
    FUN_8c0227bc(ar4 + 1,iVar5,iVar2,ar7);
    FUN_8c022804(ar4 + 1,iVar5,uVar1,ar7);
    FUN_8c0226d8(ar4 + 1,iVar5,uVar1,ar7);
    iVar5 = FUN_8c022688(ar4 + 1,iVar5,uVar1,ar7);
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02174c\n.set _FUN_8c02174c, _FUN_8c02174c_def\n");
