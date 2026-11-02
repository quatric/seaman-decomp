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
int FUN_8c0ff7d4_def(int *ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ff7d4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  undefined1 *ar5_00;
  float fVar3;
  code *pcVar5;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar5_00 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  iVar1 = *ar4;
  if (iVar1 == 0) {
    piVar2 = ar4 + 2;
    if (cVar7 == '\0') {
      *piVar2 = -0x3de00000;
    }
    else {
      piVar2[0] = -0x3de00000;
      piVar2[1] = -0x73fc9678;
    }
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c036988(ar4[1],ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c078fb8(ar4[1],ar5_00,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x6c))))(ar4[1],ar5_00,ar6,ar7));
    *ar4 = 1;
  }
  else if (iVar1 == 1) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) + F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = in_xd0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1001e0(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      *ar4 = 3;
    }
    if (cVar7 == '\0') {
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0x41700000;
    }
    else {
      fVar3 = 15.0;
      pcVar5 = ((void *)0x8c2595aa);
    }
    if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar3) {
      piVar2 = ar4 + 2;
      if (cVar7 == '\0') {
        *piVar2 = 0x41700000;
      }
      else {
        piVar2[0] = 0x41700000;
        piVar2[1] = -0x73da6a56;
      }
      *ar4 = 2;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1001e0(ar5,ar5_00,ar6,ar7));
    if (iVar1 == 1) {
      *ar4 = 3;
    }
  }
  else if (iVar1 == 3) {
    if (cVar7 == '\0') {
      dVar4 = CONCAT44D(0x41200000,ar4[2]);
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 2);
      dVar4 = -1.3973411959191777e-250;
    }
    if (cVar6 == '\0') {
      fVar3 = F32LO(dVar4) - F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar7 == '\0') {
      ar4[2] = (int)fVar3;
      fVar3 = (float)ar4[2];
      pcVar5 = (code *)0xc2200000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 2) = in_xd0;
      fVar3 = -40.0;
      pcVar5 = ((void *)0x8c036988);
    }
    if (cVar6 != '\0' || fVar3 <= (float)(uint)pcVar5) {
      (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x6c))))(ar4[1],ar5_00,ar6,ar7));
      *ar4 = 4;
      ar5_00 = ((undefined1 *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c2595aa(0,ar5_00,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4[1] + 8) + 0x1c))))(ar4[1],ar5_00,ar6,ar7));
  iVar1 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 48)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
  return iVar1;
}

__asm__(".globl _FUN_8c0ff7d4\n.set _FUN_8c0ff7d4, _FUN_8c0ff7d4_def\n");
