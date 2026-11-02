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
undefined4 Class_12ad50_m2_0a4fdc_def(int ar4,uint ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "Class_12ad50_m2_0a4fdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *a7;
  float in_fr1 = 0;
  float fVar5;
  double dVar6;
  undefined4 in_fr3 = 0;
  double dVar7;
  undefined8 in_xd0 = 0;
  bool bVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x40) == 0x40) {
    *(float *)(unsigned)(ar4 + 0x34) = *(float *)(unsigned)(ar4 + 0x34) - *(float *)(unsigned)(ar4 + 0x52c);
    *(float *)(unsigned)(ar4 + 0x52c) = *(float *)(unsigned)(ar4 + 0x52c) + 0.5;
    in_fr1 = *(float *)(unsigned)(ar4 + 0x52c);
    if (10.0 < in_fr1) {
      *(undefined4 *)(unsigned)(ar4 + 0x52c) = 0x41200000;
    }
  }
  iVar3 = (int)*(char *)(unsigned)(ar4 + 0x524);
  uVar4 = ar5;
  a7 = ar7;
  if ((iVar3 < 4) && (-2 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      uVar1 = ar6;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5,ar6,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar4,ar6,a7));
      uVar4 = 0x3c;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4((uVar2 & 0xffff) - iVar3,0x3c,ar6,a7));
      if (0 < iVar3) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 1;
      }
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),1,ar6,a7));
        ar6 = uVar1;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10))))(*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7))
        ;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x144))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c038a10(*(undefined4 *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
        uVar4 = ar5;
        a7 = ar7;
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x110))))(*(int *)(unsigned)(ar4 + 0x330),0,ar6,ar7));
      ar5 = *(uint *)(unsigned)(ar4 + 0x330);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,ar5,ar6,a7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(ar4,ar5,ar6,a7));
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x524) = 2;
    case 2:
      if (cVar10 == '\0') {
        in_fr1 = *(float *)(unsigned)(ar4 + 0x528);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x528);
      }
      if (cVar9 == '\0') {
        fVar5 = in_fr1 + 1.0;
      }
      else {
        fVar5 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
      }
      if (cVar10 == '\0') {
        *(float *)(unsigned)(ar4 + 0x528) = fVar5;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x528) = in_xd0;
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031588(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xa0),ar5,ar6,a7));
      if (cVar10 == '\0') {
        dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x528),in_fr3);
      }
      else {
        dVar7 = *(double *)(unsigned)(ar4 + 0x528);
      }
      fVar5 = (float)(iVar3 + -1);
      dVar6 = (double)(ulonglong)(uint)fVar5;
      if (cVar9 == '\0' && fVar5 < 0.0) {
        if (cVar10 == '\0') {
          dVar6 = CONCAT44D(0x4f800000,fVar5);
        }
        else {
          dVar6 = -7.425280129038244e-251;
        }
        if (cVar9 == '\0') {
          fVar5 = F32HI(dVar6);
          dVar6 = CONCAT44D(fVar5,F32LO(dVar6) + fVar5);
        }
        else {
          dVar6 = dVar6 + dVar6;
        }
      }
      if (cVar9 == '\0') {
        bVar8 = F32HI(dVar7) < SUB84(dVar6,0);
      }
      else {
        bVar8 = dVar7 < dVar6;
      }
      uVar4 = ar5;
      if (!bVar8) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 3;
      }
      break;
    case -1:
      uVar1 = ar6;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
      uVar4 = uVar4 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028edc(ar4 + 0x21c,uVar4,ar6,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,ar6,ar7));
      uVar4 = uVar4 & 0xffff;
      ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c028ed4(ar4 + 0x21c,uVar4,ar6,ar7); });
      if (*(int *)(unsigned)(ar4 + 0x330) != 0) {
        uVar4 = ar5;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x330) + 8) + 0x10c))))
                  (*(int *)(unsigned)(ar4 + 0x330),ar5,ar6,ar7));
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,ar6,ar7));
      a7 = ar7;
      if ((ushort)uVar1 < 5) {
        *(undefined1 *)(unsigned)(ar4 + 0x524) = 0;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0xf8))))(ar4,uVar4,ar6,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,uVar4,ar6,a7));
  return 1;
}

__asm__(".globl _Class_12ad50_m2_0a4fdc\n.set _Class_12ad50_m2_0a4fdc, _Class_12ad50_m2_0a4fdc_def\n");
