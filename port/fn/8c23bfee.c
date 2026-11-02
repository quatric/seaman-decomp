#include "../decls.h"
int FUN_8c23bfee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0x80;
  iVar3 = _DAT_8c4c1300;
  while (iVar3 != 0) {
    iVar3 = iVar3 + -1;
    iVar1 = iVar3 * 4;
    iVar2 = *(int *)(*(int *)(iVar1 + -0x73b3ed80) * 4 + -0x73b3ee20);
    *(int *)(&DAT_8c4ab284 + iVar1) = iVar2;
    iVar2 = *(int *)(iVar2 + 0x124);
    if (iVar2 == 0) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23a982;
    }
    else if (iVar2 == 1) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23a9d0;
    }
    else if (iVar2 == 2) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23a9fc;
    }
    else if (iVar2 == 0x82) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23aa50;
    }
    else if ((iVar2 == 4) || (iVar2 == 0x84)) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23aaa8;
    }
    else if (iVar2 == 0xc4) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23ab30;
    }
    else if (iVar2 == 8) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23ab90;
    }
    else if (iVar2 == 0x88) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23aca8;
    }
    else if (iVar2 == 200) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23ada8;
    }
    else if (iVar2 == 0x40) {
      (&DAT_8c277b40)[iVar3] = FUN_8c23ae48;
    }
    else if (iVar2 == 0x10) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23ae70;
    }
    else if (iVar2 == 0x90) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23af2c;
    }
    else if (iVar2 == 0x20) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23affc;
    }
    else if (iVar2 == 0xa0) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b0f8;
    }
    else if (iVar2 == 0xe0) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b208;
    }
    else if (iVar2 == 3) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b2e4;
    }
    else if (iVar2 == 0x83) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b35c;
    }
    else if ((iVar2 == 5) || (iVar2 == 0x85)) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b3d8;
    }
    else if (iVar2 == 0xc5) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b484;
    }
    else if (iVar2 == 0x13) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b508;
    }
    else if (iVar2 == 0x93) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b5e8;
    }
    else if (iVar2 == 0x25) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b6dc;
    }
    else if (iVar2 == 0xa5) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b7fc;
    }
    else if (iVar2 == 0xe5) {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23b930;
    }
    else {
      (&DAT_8c277b40)[iVar3] = &LAB_8c23aa50;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c23bfee\n.set _FUN_8c23bfee, _FUN_8c23bfee_def\n");
