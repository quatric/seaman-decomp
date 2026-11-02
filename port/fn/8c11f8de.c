#include "../decls.h"
undefined4 FUN_8c11f8de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 ar5_00;
  float in_fr3;
  float fVar5;
  undefined4 in_PR;
  char cVar6;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  
  if (*(char *)(**(int **)(ar4 + 0x10) + 0x30) != '\x01') {
    uVar1 = FUN_8c112170(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(**(undefined4 **)(ar4 + 0xc),(*(undefined4 **)(ar4 + 0xc))[1],ar6
                                   ,ar7);
    if (cVar6 == '\0') {
      fStack_c = *pfVar2;
      uStack_8 = in_PR;
      in_fr3 = fStack_c;
    }
    else {
      fStack_c = (float)*(undefined8 *)pfVar2;
      uStack_8 = (undefined4)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    ar5_00 = *(undefined4 *)(*(int *)(ar4 + 0xc) + 0xc);
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111fbe(*(undefined4 *)(*(int *)(ar4 + 0xc) + 8),ar5_00,ar6,ar7);
    if (cVar6 == '\0') {
      fStack_10 = *pfVar2;
      in_fr3 = fStack_10;
    }
    else {
      fStack_10 = (float)*(undefined8 *)pfVar2;
      fStack_c = (float)((ulonglong)*(undefined8 *)pfVar2 >> 0x20);
    }
    cVar6 = '\0';
    pfVar2 = (float *)FUN_8c111dfe(**(undefined4 **)(ar4 + 0x10),ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x34);
    *(float **)(ar4 + 0x34) = pfVar3 + 1;
    if (cVar6 == '\0') {
      *pfVar3 = fStack_c;
      in_fr3 = fStack_c;
    }
    else {
      *(ulonglong *)(pfVar3 + -1) = CONCAT44(uStack_8,fStack_c);
    }
    if (*(int *)(ar4 + 0x34) == *(int *)(ar4 + 0x30)) {
      *(undefined4 *)(ar4 + 0x34) = *(undefined4 *)(ar4 + 0x2c);
    }
    cVar6 = '\0';
    uVar1 = FUN_8c11f898(ar4,ar5_00,ar6,ar7);
    pfVar3 = *(float **)(ar4 + 0x44);
    if (cVar6 == '\0') {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)pfVar3 >> 0x20);
      pfVar3 = pfVar3 + 2;
    }
    *(float **)(ar4 + 0x44) = pfVar3;
    if (cVar6 == '\0') {
      pfVar3[-1] = fStack_10;
      in_fr3 = fStack_10;
    }
    else {
      *(ulonglong *)(pfVar3 + -2) = CONCAT44(fStack_c,fStack_10);
    }
    if (*(int *)(ar4 + 0x44) == *(int *)(ar4 + 0x40)) {
      *(undefined4 *)(ar4 + 0x44) = *(undefined4 *)(ar4 + 0x3c);
    }
    if (cVar6 == '\0') {
      in_fr3 = 0.0;
    }
    if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
      fVar5 = fVar5 * 0.099999994;
    }
    *pfVar2 = fVar5;
  }
  piVar4 = *(int **)(ar4 + 0xc);
  if ((*(int *)(piVar4[1] * 4 + *(int *)(*piVar4 + 0x40)) != *(int *)(*piVar4 + 0x3c)) &&
     (*(int *)(*(int *)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(piVar4[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11f8de\n.set _FUN_8c11f8de, _FUN_8c11f8de_def\n");
