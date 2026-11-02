#include "../decls.h"
undefined4 Class_12a7f4_m3_09a558_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3;
  double dVar9;
  undefined8 in_xd0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(ar4 + 0x34) = *(float *)(ar4 + 0x34) - *(float *)(ar4 + 0x52c);
    *(float *)(ar4 + 0x52c) = *(float *)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = FUN_8c02602c(ar5,ar5,ar6,ar7);
      fVar6 = (float)((ulonglong)in_dr0 >> 0x20);
      iVar4 = get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))(*(int *)(ar4 + 0x330),ar5,ar6,a7)
        ;
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,a7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,a7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,a7);
      }
      (**(code **)(*ar7 + 0x188))(ar7,uVar5,ar6,a7);
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (**(code **)(*ar7 + 0x148))(ar7,uVar5,ar6,a7);
        uVar2 = FUN_8c035b50(uVar2,uVar5,ar6,a7);
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7);
          if (0 < iVar4) {
            *(undefined1 *)(ar4 + 0x524) = 1;
            uVar3 = (**(code **)(*ar7 + 0x148))(ar7,ar5,ar6,a7);
            FUN_8c09a540(uVar3,ar5,ar6,a7);
          }
          break;
        }
      }
      uVar5 = FUN_8c028ee4(ar5,uVar5,ar6,a7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,a7);
      ar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7,uVar3);
      break;
    case 1:
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x14))(*(int *)(ar4 + 0x330),ar5,ar6,ar7);
      (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),0,ar6,a7);
      ar5 = *(uint *)(ar4 + 0x330);
      (**(code **)(*ar7 + 0x4c))(ar7,ar5,ar6,a7);
      FUN_8c027954(ar4,ar5,ar6,a7);
      *(undefined4 *)(ar4 + 0x330) = 0;
      *(undefined1 *)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84((double)CONCAT44(0x3f800000,fVar6) + (double)CONCAT44(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = FUN_8c031588(*(undefined4 *)(*(int *)(ar4 + 0x328) + 0xa0),ar5,ar6,a7);
      if (cVar12 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = (double)CONCAT44(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = (float)((ulonglong)dVar7 >> 0x20);
          dVar7 = (double)CONCAT44(fVar6,SUB84(dVar7,0) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      uVar5 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      uVar5 = uVar5 & 0xffff;
      FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7,uVar3);
      if (*(int *)(ar4 + 0x330) != 0) {
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x10c))
                  (*(int *)(ar4 + 0x330),ar5,ar6,ar7);
        uVar5 = 1;
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x110))(*(int *)(ar4 + 0x330),1,ar6,ar7);
        FUN_8c036988(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
        (**(code **)(*(int *)(*(int *)(ar4 + 0x330) + 8) + 0x144))
                  (*(int *)(ar4 + 0x330),uVar5,ar6,ar7);
        FUN_8c038a10(*(undefined4 *)(ar4 + 0x330),uVar5,ar6,ar7);
      }
      uVar3 = FUN_8c02602c(ar5,uVar5,ar6,ar7);
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(ar4 + 0x524) = 0;
      }
    }
  }
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,ar5,ar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7);
  return 1;
}

__asm__(".globl _Class_12a7f4_m3_09a558\n.set _Class_12a7f4_m3_09a558, _Class_12a7f4_m3_09a558_def\n");
