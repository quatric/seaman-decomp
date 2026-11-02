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
undefined4 FUN_8c02b058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02b058";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 in_fr1 = 0;
  double dVar3;
  float fVar4;
  undefined8 in_dr14 = 0;
  double dVar5;
  undefined8 in_xd14 = 0;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x144))))(ar4,ar5,ar6,ar7));
  if (cVar7 == '\0') {
    dVar3 = CONCAT44D(0x43e10000,in_fr1);
  }
  else {
    dVar3 = 2.2923181056228e-311;
  }
  if (cVar6 == '\0') {
    fVar4 = (float)*(int *)(unsigned)(ar4 + 0x470) / F32HI(dVar3);
  }
  else {
    fVar4 = SUB84(CONCAT44D(uVar2,(float)*(int *)(unsigned)(ar4 + 0x470)) / dVar3,0);
  }
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x438),fVar4);
  }
  else {
    dVar5 = *(double *)(unsigned)(ar4 + 0x438);
  }
  if (cVar6 == '\0') {
    dVar5 = CONCAT44D((int)(D2U(dVar5) >> 0x20),F32LO(dVar5) - 1.0);
  }
  else {
    dVar5 = dVar5 - CONCAT44D(0x3f800000,SUB84(dVar3,0));
  }
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x438) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x438) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x478);
  uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x47c);
  (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,uVar2,ar6,ar7));
  *(int *)(unsigned)(ar4 + 0x474) = *(int *)(unsigned)(ar4 + 0x474) + 1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023df4(ar4 + 0x480,uVar2,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 8) + 0x34))))(ar4,uVar2,ar6,ar7));
  if (cVar7 == '\0') {
    *(int *)(unsigned)(ar4 + 0x438) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x438) = dVar5;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,ar5_00,ar6,ar7));
  iVar1 = *(int *)(unsigned)(ar4 + 0x470);
  *(int *)(unsigned)(ar4 + 0x470) = iVar1 + 1;
  if (iVar1 < 0x1c2) {
    uVar2 = 0x474;
    *(int *)(unsigned)(ar4 + 0x474) = *(int *)(unsigned)(ar4 + 0x474) + -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023df4(ar4 + 0x480,ar5_00,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x470) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x474) = 0;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(unsigned)(ar4 + 0x47c),ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02b058\n.set _FUN_8c02b058, _FUN_8c02b058_def\n");
