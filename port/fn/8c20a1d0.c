#include "../decls.h"
undefined4 FUN_8c20a1d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  float fVar4;
  double dVar3;
  float fVar5;
  undefined4 in_fr14;
  uint uVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = 0x80;
  fVar5 = 255.0;
  fVar4 = *(float *)(ar4 + 0x1fc) * 255.0;
  dVar3 = (double)CONCAT44(fVar4,*(float *)(ar4 + 0x1fc));
  uVar1 = (int)fVar4 & 0xff;
  do {
    iVar2 = iVar2 + -1;
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)(iVar2 * 4 + ar4),SUB84(dVar3,0));
    }
    else {
      dVar3 = *(double *)(iVar2 * 4 + ar4);
    }
    if (cVar7 == '\0') {
      fVar4 = (float)((ulonglong)dVar3 >> 0x20) * fVar5;
      dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0));
      uVar6 = (uint)fVar4;
    }
    else {
      dVar3 = dVar3 * (double)CONCAT44(in_fr14,fVar5);
      uVar6 = (uint)dVar3;
    }
    pvr_20a844(iVar2 * 4 + 0x200,(uVar6 & 0xff) << 8 | uVar1,ar6,ar7);
    uVar1 = uVar6 & 0xff;
  } while (iVar2 != 0);
  return 0;
}

__asm__(".globl _FUN_8c20a1d0\n.set _FUN_8c20a1d0, _FUN_8c20a1d0_def\n");
