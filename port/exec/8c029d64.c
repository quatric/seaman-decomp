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
undefined4 FUN_8c029d64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c029d64";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  double *pdVar2;
  undefined4 ar5_00;
  double dVar3;
  undefined4 uVar4;
  double in_xd14 = 0;
  undefined4 in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar4 = *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256328(0,ar5,ar6,ar7); });
  uVar1 = ar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c029af0(ar4,ar5,ar6,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(uVar4,*(undefined4 *)(unsigned)(ar4 + 0x5c));
  }
  if (cVar5 == '\0') {
    dVar3 = CONCAT44D(F32HI(dVar3) * F32LO(dVar3),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (cVar6 == '\0') {
    *(int *)(unsigned)pdVar2 = (int)(D2U(dVar3) >> 0x20);
  }
  else {
    *pdVar2 = dVar3;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar5 + 4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02a29c(ar4,ar5_00,uVar1,ar7));
  pdVar2 = (double *)(unsigned)(*(int *)(unsigned)(ar5 + 4) + 0x14);
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)pdVar2 = uVar4;
  }
  else {
    *pdVar2 = in_xd14;
  }
  if (*(int *)(unsigned)(ar5 + 0x2c) != 0) {
    ar5_00 = *(undefined4 *)(unsigned)(ar5 + 0x2c);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c029d64(ar4,ar5_00,ar6,ar7));
    uVar1 = ar6;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c256210(1,ar5_00,uVar1,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c029d64\n.set _FUN_8c029d64, _FUN_8c029d64_def\n");
