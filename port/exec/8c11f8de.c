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
undefined4 FUN_8c11f8de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11f8de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  uint uVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  undefined4 ar5_00;
  float in_fr3 = 0;
  float fVar5;
  undefined4 in_PR = 0;
  char cVar6;
  
  if (*(char *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x30) != '\x01') {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
    if ((uVar1 & 0xff) == 0) {
      return 0;
    }
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6
                                   ,ar7));
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0xc)) = *pfVar2;
      (*(undefined4 *)(fr0_ - 0x8)) = in_PR;
      in_fr3 = (*(float *)(fr0_ - 0xc));
    }
    else {
      (*(float *)(fr0_ - 0xc)) = (float)*(undefined8 *)(unsigned)pfVar2;
      (*(undefined4 *)(fr0_ - 0x8)) = (undefined4)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
    }
    ar5_00 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 0xc);
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111fbe(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xc) + 8),ar5_00,ar6,ar7));
    if (cVar6 == '\0') {
      (*(float *)(fr0_ - 0x10)) = *pfVar2;
      in_fr3 = (*(float *)(fr0_ - 0x10));
    }
    else {
      (*(float *)(fr0_ - 0x10)) = (float)*(undefined8 *)(unsigned)pfVar2;
      (*(float *)(fr0_ - 0xc)) = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar2 >> 0x20);
    }
    cVar6 = '\0';
    pfVar2 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 16)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5_00,ar6,ar7));
    pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x34));
    *(unsigned *)(unsigned)(ar4 + 0x34) = pfVar3 + 1;
    if (cVar6 == '\0') {
      *pfVar3 = (*(float *)(fr0_ - 0xc));
      in_fr3 = (*(float *)(fr0_ - 0xc));
    }
    else {
      *(ulonglong *)(unsigned)(pfVar3 + -1) = CONCAT44((*(undefined4 *)(fr0_ - 0x8)),(*(float *)(fr0_ - 0xc)));
    }
    if (*(int *)(unsigned)(ar4 + 0x34) == *(int *)(unsigned)(ar4 + 0x30)) {
      *(undefined4 *)(unsigned)(ar4 + 0x34) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
    }
    cVar6 = '\0';
    uVar1 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c11f898(ar4,ar5_00,ar6,ar7));
    pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x44));
    if (cVar6 == '\0') {
      fVar5 = *pfVar3;
      pfVar3 = pfVar3 + 1;
    }
    else {
      fVar5 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar3 >> 0x20);
      pfVar3 = pfVar3 + 2;
    }
    *(unsigned *)(unsigned)(ar4 + 0x44) = pfVar3;
    if (cVar6 == '\0') {
      pfVar3[-1] = (*(float *)(fr0_ - 0x10));
      in_fr3 = (*(float *)(fr0_ - 0x10));
    }
    else {
      *(ulonglong *)(unsigned)(pfVar3 + -2) = CONCAT44((*(float *)(fr0_ - 0xc)),(*(float *)(fr0_ - 0x10)));
    }
    if (*(int *)(unsigned)(ar4 + 0x44) == *(int *)(unsigned)(ar4 + 0x40)) {
      *(undefined4 *)(unsigned)(ar4 + 0x44) = *(undefined4 *)(unsigned)(ar4 + 0x3c);
    }
    if (cVar6 == '\0') {
      in_fr3 = 0.0;
    }
    if ((in_fr3 < fVar5) && ((uVar1 & 0xff) == 0)) {
      fVar5 = fVar5 * 0.099999994;
    }
    *pfVar2 = fVar5;
  }
  piVar4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
  if ((*(int *)(unsigned)(piVar4[1] * 4 + *(int *)(unsigned)(*piVar4 + 0x40)) != *(int *)(unsigned)(*piVar4 + 0x3c)) &&
     (*(int *)(unsigned)(*(int *)(unsigned)(piVar4[2] + 0x40) + piVar4[3] * 4) != *(int *)(unsigned)(piVar4[2] + 0x3c))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c11f8de\n.set _FUN_8c11f8de, _FUN_8c11f8de_def\n");
