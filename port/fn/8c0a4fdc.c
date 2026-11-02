#include "../decls.h"
undefined4 Class_12ad50_m2_0a4fdc_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *a7;
  float in_fr1;
  float fVar5;
  double dVar6;
  undefined4 in_fr3;
  double dVar7;
  undefined8 in_xd0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - *(float *)(ar4 + 0x52c);
    *(float *)(ar4 + 0x52c) = *(float *)(ar4 + 0x52c) + 0.5;
    in_fr1 = *(float *)(ar4 + 0x52c);
    if (10.0 < in_fr1) {
      *(undefined4 *)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar3 = (int)*(char *)(ar4 + 0x524);
  uVar4 = ar5;
  a7 = ar7;
  if ((iVar3 < 4) && (-2 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = ar6;
      uVar2 = FUN_8c02602c(ar5,ar5,ar6,ar7);
      iVar3 = get_field_c_02d1b8(ar4 + 0x21c,uVar4,ar6,a7);
      uVar4 = 0x3c;
      iVar3 = libgcc_divide_helper_0101e4((uVar2 & 0xffff) - iVar3,0x3c,ar6,a7);
      if (0 < iVar3) {
        *(undefined1 *)(ar4 + 0x524) = 1;
      }
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,a7);
        ar6 = uVar1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10))(*(int *)(ar4 + 0x330),ar5,ar6,ar7)
        ;
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),ar5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),ar5,ar6,ar7);
        uVar4 = ar5;
        a7 = ar7;
      }
      break;
    case 1:
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,ar7);
      ar5 = *(uint *)(ar4 + 0x330);
      (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
      FUN_8c027954(ar4,ar5,ar6,a7);
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined1 *)(ar4 + 0x524) = 2;
    case 2:
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x528);
      }
      if (cVar9 == '\0') {
        fVar5 = in_fr1 + 1.0;
      }
      else {
        fVar5 = SUB84((double)CONCAT44(0x3f800000,in_fr1) + (double)CONCAT44(0x3f800000,in_fr1),0);
      }
      if (cVar10 == '\0') {
        *(float *)(ar4 + 0x528) = fVar5;
      }
      else {
        *(undefined8 *)(ar4 + 0x528) = in_xd0;
      }
      iVar3 = FUN_8c031588(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5,ar6,a7);
      if (cVar10 == '\0') {
        dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar7 = *(double *)(ar4 + 0x528);
      }
      fVar5 = (float)(iVar3 + -1);
      dVar6 = (double)(ulonglong)(uint)fVar5;
      if (cVar9 == '\0' && fVar5 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = (double)CONCAT44(0x4f800000,fVar5);
        }
        else {
          dVar6 = -7.425280129038244e-251;
        }
        if (cVar9 == '\0') {
          fVar5 = (float)((ulonglong)dVar6 >> 0x20);
          dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        bVar8 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar6,0);
      }
      else {
        bVar8 = dVar7 < dVar6;
      }
      uVar4 = ar5;
      if (!bVar8) {
        *(undefined1 *)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar1 = ar6;
      uVar4 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
      uVar4 = uVar4 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar4,ar6,ar7,uVar1);
      uVar4 = FUN_8c02602c(ar5,uVar4,ar6,ar7);
      uVar4 = uVar4 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,uVar4,ar6,ar7,uVar1);
      if (*(int *)(ar4 + 0x330) != 0) {
        uVar4 = ar5;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      }
      uVar1 = FUN_8c02602c(ar5,uVar4,ar6,ar7);
      a7 = ar7;
      if ((ushort)uVar1 < 5) {
        *(undefined1 *)(ar4 + 0x524) = 0;
      }
    }
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,uVar4,ar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,uVar4,ar6,a7);
  return 1;
}

__asm__(".globl _Class_12ad50_m2_0a4fdc\n.set _Class_12ad50_m2_0a4fdc, _Class_12ad50_m2_0a4fdc_def\n");
