#include "../decls.h"
int FUN_8c065cb0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
  if (*(int *)(ar4 + 900) != -1) goto LAB_8c065e2a;
  *(undefined4 *)(ar4 + 0x94) = 0;
  iVar3 = *(int *)(ar4 + 0x104);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x94) = 0x14;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x94) = 0x2d;
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x94) = 0x1e;
    }
  }
  iVar3 = ar6;
  uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5,ar6,ar7);
  if ((char)uVar1 == '\x01') {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if (iVar2 < 0xf) {
    if (0xd < iVar2) {
      *(undefined4 *)(ar4 + 0x94) = 0xf;
      goto LAB_8c065e2a;
    }
    if (5 < iVar2) {
      if (iVar2 == 9) {
        iVar3 = get_field_140_025f70(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
        if (iVar3 == 0) {
          *(undefined4 *)(ar4 + 0x94) = 0x19;
        }
        else {
          *(undefined4 *)(ar4 + 0x94) = 0x1e;
        }
      }
      goto LAB_8c065e2a;
    }
    if (iVar2 < 0) goto LAB_8c065e2a;
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(undefined4 *)(ar4 + 0x94) = 0x37;
      }
      else if (iVar2 == 5) {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
  }
  else {
    if (0x13 < iVar2) {
      if (iVar2 == 0x2f) {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
    if (0x12 < iVar2) {
      *(undefined4 *)(ar4 + 0x94) = 0x23;
      goto LAB_8c065e2a;
    }
    if (iVar2 != 0x10) goto LAB_8c065e2a;
  }
  iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
  if (iVar3 == 0) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 4) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
LAB_8c065e2a:
  iVar3 = *(int *)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(undefined4 *)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c065cb0\n.set _FUN_8c065cb0, _FUN_8c065cb0_def\n");
