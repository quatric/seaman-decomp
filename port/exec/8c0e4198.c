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
undefined4 FUN_8c0e4198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e4198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double *pdVar3;
  double *pdVar4;
  undefined8 in_dr0 = 0;
  double dVar5;
  undefined4 in_fr3 = 0;
  double dVar6;
  undefined4 in_fr15 = 0;
  double in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c015bb8(ar5,ar5,ar6,ar7));
  iVar1 = *((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar1 + 0x2c) + 4));
  if (cVar8 == '\0') {
    in_fr15 = *(undefined4 *)(unsigned)(iVar1 + 0x24);
  }
  else {
    in_xd14 = *(double *)(unsigned)(iVar1 + 0x24);
  }
  pdVar3 = (double *)(unsigned)(iVar1 + 0x24);
  pdVar4 = (double *)(unsigned)(iVar1 + 0x54);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c0bf0e8(ar4 + 0x13b24,ar5_00,ar6,ar7); });
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar3,in_fr3);
    dVar5 = CONCAT44D(0x4101999a,uVar2);
  }
  else {
    dVar6 = *pdVar3;
    dVar5 = 2.99312289147034e-309;
  }
  if (cVar7 == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) +
                             F32LO(dVar5) * F32HI(dVar5),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5 * dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)pdVar3 = (int)(D2U(dVar6) >> 0x20);
    *(undefined4 *)(unsigned)pdVar4 = *(undefined4 *)(unsigned)pdVar3;
  }
  else {
    *pdVar3 = dVar6;
    *pdVar4 = *pdVar3;
  }
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01538c(ar4 + 0x226fc,ar5_00,ar6,ar7));
  uVar2 = 0;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 48)); FUN_8c256328(0,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c019058(uVar2,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c015af8(ar5,ar5_00,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c256210(1,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    (*(double *)(fr0_ - 0x30)) = CONCAT44D(pdVar3,in_fr15);
    *(undefined4 *)(unsigned)pdVar4 = in_fr15;
  }
  else {
    *pdVar4 = in_xd14;
    (*(double *)(fr0_ - 0x30)) = in_xd14;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)pdVar3 = (*(undefined4 *)(fr0_ - 0x30));
  }
  else {
    *pdVar3 = (*(double *)(fr0_ - 0x30));
  }
  return 0;
}

__asm__(".globl _FUN_8c0e4198\n.set _FUN_8c0e4198, _FUN_8c0e4198_def\n");
