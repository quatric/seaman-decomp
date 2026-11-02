#include "../decls.h"
undefined4 FUN_8c10fc96_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  int ar4_00;
  undefined4 *puVar4;
  int a4;
  float extraout_fr3;
  float fVar5;
  float fVar6;
  char cVar7;
  
  a4 = *(int *)(ar4 + 0x40);
  ar4_00 = *(int *)(ar4 + 0xc);
  uVar1 = FUN_8c112170(ar4_00,*(int *)(ar4 + 0x78) + 1,ar6,ar7);
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar1 = 1;
    if (*(int *)(ar4 + 0x78) != 0) {
      do {
        if (*(char *)(*(int *)(ar4 + 0x6c) + uVar1) != '\0') {
          puVar4 = (undefined4 *)(uVar1 * 8 + ar4_00);
          uVar2 = FUN_8c111fbe(*puVar4,puVar4[1],ar6,ar7);
          ar6 = *(int *)(ar4 + 0x70) << 2;
          memmove(a4,uVar2,ar6,ar7);
        }
        uVar1 = uVar1 + 1;
        a4 = a4 + *(int *)(ar4 + 0x70) * 4;
      } while (uVar1 <= *(uint *)(ar4 + 0x78));
    }
    cVar7 = '\0';
    pfVar3 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6
                                   ,ar7);
    if (cVar7 == '\0') {
      fVar6 = *pfVar3;
    }
    else {
      fVar6 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
    }
    if (*(char *)(ar4 + 0x32) == '\0') {
      fVar5 = extraout_fr3;
      if (cVar7 == '\0') {
        fVar5 = 0.0009999999;
      }
      if (fVar5 < fVar6) {
        FUN_8c10fab2(ar4,*(undefined4 *)(ar4 + 0x40),ar6,ar7);
      }
    }
    *(int *)(ar4 + 0x48) = *(int *)(ar4 + 0x48) + 1;
    uVar2 = 0x40;
    if (a4 == *(int *)(ar4 + 0x38)) {
      a4 = *(int *)(ar4 + 0x34);
    }
    *(int *)(ar4 + 0x40) = a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10fc96\n.set _FUN_8c10fc96, _FUN_8c10fc96_def\n");
