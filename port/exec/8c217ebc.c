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
undefined4 FUN_8c217ebc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c217ebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  double *pdVar2;
  double *pdVar3;
  double *pdVar4;
  undefined4 uVar5;
  double dVar6;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_fr7 = 0;
  undefined4 in_fr6 = 0;
  double in_xd2 = 0;
  undefined8 in_xd4 = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  pdVar4 = 0x8c4aa4e0;
  pdVar3 = 0x8c4aa4dc;
  pdVar2 = 0x8c4aa4a8;
  puVar1 = 0x8c4ab158;
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)0x8c4ab158 = in_fr4;
    *(undefined4 *)(unsigned)((int)puVar1 + 4) = in_fr5;
    *(undefined4 *)(unsigned)(puVar1 + 1) = in_fr6;
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,*(undefined4 *)(unsigned)pdVar3);
  }
  else {
    *(undefined4 *)(unsigned)0x8c4ab158 = CONCAT44(in_fr4,in_fr5);
    *(undefined8 *)(unsigned)((int)puVar1 + 4) = in_xd4;
    puVar1[1] = CONCAT44(in_fr6,in_fr7);
    in_xd2 = *pdVar3;
    dVar6 = *pdVar2;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) * F32LO(dVar6),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)((int)puVar1 + 0x24) = (int)(D2U(dVar6) >> 0x20);
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)pdVar2,*(undefined4 *)(unsigned)pdVar4);
  }
  else {
    *(double *)(unsigned)((int)puVar1 + 0x24) = dVar6;
    dVar6 = *pdVar2;
    in_xd2 = *pdVar4;
  }
  if (in_FPSCR_PR == '\0') {
    dVar6 = CONCAT44D(F32HI(dVar6) * F32LO(dVar6),SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 * dVar6;
  }
  if (in_FPSCR_SZ == '\0') {
    *(int *)(unsigned)(puVar1 + 5) = (int)(D2U(dVar6) >> 0x20);
    *(undefined4 *)(unsigned)((int)puVar1 + 0x2c) = *(undefined4 *)(unsigned)((int)pdVar2 + 0xc);
    uVar5 = *(undefined4 *)(unsigned)(pdVar2 + 2);
  }
  else {
    puVar1[5] = dVar6;
    uVar5 = SUB84(dVar6,0);
    *(undefined8 *)(unsigned)((int)puVar1 + 0x2c) = *(undefined8 *)(unsigned)((int)pdVar2 + 0xc);
    in_xd2 = pdVar2[2];
  }
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)(unsigned)(puVar1 + 6) = uVar5;
  }
  else {
    puVar1[6] = in_xd2;
  }
  return 0x30;
}

__asm__(".globl _FUN_8c217ebc\n.set _FUN_8c217ebc, _FUN_8c217ebc_def\n");
