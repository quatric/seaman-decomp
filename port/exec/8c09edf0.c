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
undefined4 * FUN_8c09edf0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09edf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  float *pfVar2;
  float fVar3;
  double dVar4;
  code *pcVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c2219ac(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21415c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
  pfVar2 = (float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
  if (cVar7 == '\0') {
    dVar4 = CONCAT44D(0x3c23d70a,*pfVar2);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)pfVar2;
    dVar4 = 5.2386906893627653e-11;
  }
  if (cVar6 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar2 = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)pfVar2 = in_xd0;
  }
  if (cVar7 == '\0') {
    fVar3 = *(float *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4);
  }
  puVar1 = ((undefined4 *)(unsigned)0x8c09efa0);
  if (cVar7 == '\0') {
    pcVar5 = (code *)0x3dcccccd;
  }
  else {
    fVar3 = 0.1;
    pcVar5 = ((void *)0x8c221916);
  }
  if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c22195c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c21410c(*(int *)(unsigned)(ar4 + 0xfd0) + 1,ar5,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c221916(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2140c6(*(int *)(unsigned)(ar4 + 0xfd0) + 1,0,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) = (*(undefined4 *)(unsigned)(unsigned)0x8c284d80) + -1;
    *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aaf0) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(((undefined1 *)(unsigned)0x8c13aae4) + (*(int *)(unsigned)(ar4 + 0xfd0) + -1) * 4) = (ulonglong)(uint)fVar3;
    }
    puVar1 = (undefined4 *)(unsigned)0xfd0;
    *(undefined4 *)(unsigned)(ar4 + 0xfd0) = 0;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c09edf0\n.set _FUN_8c09edf0, _FUN_8c09edf0_def\n");
