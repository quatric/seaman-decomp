#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 Class_12a7f4_m3_09a558_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12a7f4_m3_09a558";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *a7;
  float fVar6;
  undefined8 in_dr0 = 0;
  float fVar8;
  double dVar7;
  undefined4 in_fr3 = 0;
  double dVar9;
  undefined8 in_xd0 = 0;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - *(float *)(unsigned)(ar4 + 0x52c);
    *(float *)(unsigned)(ar4 + 0x52c) = *(float *)(unsigned)(ar4 + 0x52c) + 0.5;
    fVar6 = *(float *)(unsigned)(ar4 + 0x52c);
    in_dr0 = CONCAT44(0x41200000,fVar6);
    if (10.0 < fVar6) {
      in_dr0 = CONCAT44(0x41200000,fVar6);
      *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar4 = (int)*(char *)(unsigned)(ar4 + 0x524);
  a7 = ar7;
  if ((iVar4 < 4) && (-2 < iVar4)) {
                    
    switch(iVar4) {
    case 0:
      uVar5 = ar5;
      uVar3 = ar6;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5,ar6,ar7));
      fVar6 = F32HI(in_dr0);
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar5,ar6,a7));
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,a7))
        ;
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,a7));
      }
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x188))))(ar7,uVar5,ar6,a7));
      if (cVar12 == '\0') {
        fVar8 = 40.0;
      }
      else {
        fVar6 = 40.0;
        fVar8 = 4.59626e-43;
      }
      if (cVar11 != '\0' || fVar8 <= fVar6) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,uVar5,ar6,a7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c035b50(uVar2,uVar5,ar6,a7));
        if ((char)uVar2 < '\x04') {
          ar5 = 0x3c;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uVar1 & 0xffff) - iVar4,0x3c,ar6,a7));
          if (0 < iVar4) {
            *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
            uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x148))))(ar7,ar5,ar6,a7));
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c09a540(uVar3,ar5,ar6,a7));
          }
          break;
        }
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,uVar5,ar6,a7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,a7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,a7));
      ar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,ar5,ar6,a7); });
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x14))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,a7));
      ar5 = *(uint *)(unsigned)(ar4 + 0x330);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,ar5,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(ar4,ar5,ar6,a7));
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 2;
    case 2:
      fVar6 = (float)in_dr0;
      if (cVar12 == '\0') {
        fVar6 = *(float *)(unsigned)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x528);
      }
      if (cVar11 == '\0') {
        fVar6 = fVar6 + 1.0;
      }
      else {
        fVar6 = SUB84(CONCAT44D(0x3f800000,fVar6) + CONCAT44D(0x3f800000,fVar6),0);
      }
      if (cVar12 == '\0') {
        *(float *)(unsigned)(ar4 + 0x528) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x528) = in_xd0;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031588(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5,ar6,a7));
      if (cVar12 == '\0') {
        dVar9 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar9 = *(double *)(unsigned)(ar4 + 0x528);
      }
      fVar6 = (float)(iVar4 + -1);
      dVar7 = (double)(ulonglong)(uint)fVar6;
      if (cVar11 == '\0' && fVar6 < 0.0) {
        if (cVar12 == '\0') {
          dVar7 = CONCAT44D(0x4f800000,fVar6);
        }
        else {
          dVar7 = -8.508938065399998e+77;
        }
        if (cVar11 == '\0') {
          fVar6 = F32HI(dVar7);
          dVar7 = CONCAT44D(fVar6,F32LO(dVar7) + fVar6);
        }
        else {
          dVar7 = dVar7 + dVar7;
        }
      }
      if (cVar11 == '\0') {
        bVar10 = F32HI(dVar9) < SUB84(dVar7,0);
      }
      else {
        bVar10 = dVar9 < dVar7;
      }
      if (!bVar10) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar3 = ar6;
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar5,ar6,ar7); });
      uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      uVar5 = uVar5 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,uVar5,ar6,ar7); });
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        uVar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),uVar5,ar6,ar7));
      }
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar5,ar6,ar7));
      ar5 = uVar5;
      a7 = ar7;
      if ((ushort)uVar3 < 5) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,ar5,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,ar5,ar6,a7));
  return 1;
}

__asm__(".globl _Class_12a7f4_m3_09a558\n.set _Class_12a7f4_m3_09a558, _Class_12a7f4_m3_09a558_def\n");
