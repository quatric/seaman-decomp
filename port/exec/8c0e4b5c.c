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
undefined4 Class_12b758_m1_0e4b5c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12b758_m1_0e4b5c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  double dVar2;
  undefined8 in_xd0 = 0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1024) == 1) {
    fVar1 = *(float *)(unsigned)(ar4 + 0x1050) - 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar1;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar1;
    if (*(float *)(unsigned)(ar4 + 0x1048) <= 395.0) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43c58000;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43c58000;
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x1024) == 3) {
    fVar1 = *(float *)(unsigned)(ar4 + 0x1050) + 8.0;
    *(float *)(unsigned)(ar4 + 0x1050) = fVar1;
    *(float *)(unsigned)(ar4 + 0x1048) = fVar1;
    if (447.0 <= *(float *)(unsigned)(ar4 + 0x1048)) {
      *(undefined4 *)(unsigned)(ar4 + 0x1050) = 0x43df8000;
      *(undefined4 *)(unsigned)(ar4 + 0x1048) = 0x43df8000;
      *(undefined4 *)(unsigned)(ar4 + 0x1024) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e4d64(ar4,*ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Class_12bb08_m1_0da338(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D(0x3a03126f,*(undefined4 *)(unsigned)(ar4 + 0x106c));
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x106c);
    dVar2 = -1.2980698352425083e-250;
  }
  if (cVar3 == '\0') {
    fVar1 = F32LO(dVar2) - F32HI(dVar2);
  }
  else {
    fVar1 = SUB84(dVar2 - dVar2,0);
  }
  if (cVar4 == '\0') {
    *(float *)(unsigned)(ar4 + 0x106c) = fVar1;
    fVar1 = *(float *)(unsigned)(ar4 + 0x106c);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x106c) = in_xd0;
  }
  if (cVar3 == '\0' && fVar1 < 0.0) {
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x106c) = 0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 0x106c) = (ulonglong)(uint)fVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbd80(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d64a0(ar4 + 0xa68,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _Class_12b758_m1_0e4b5c\n.set _Class_12b758_m1_0e4b5c, _Class_12b758_m1_0e4b5c_def\n");
