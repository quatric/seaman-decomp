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
int * FUN_8c0d7cb0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7cb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  uint uVar3;
  float fVar4;
  undefined8 in_dr0 = 0;
  undefined8 uVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  piVar2 = (int *)(unsigned)0x0;
  if (*ar4 != 0) {
    for (uVar3 = 0; fVar4 = (float)in_dr0, uVar3 < (uint)ar4[4]; uVar3 = uVar3 + 1) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_2c_0d7ca8(uVar3 * 0x38 + ar4[3],ar5,ar6,ar7));
      if (iVar1 == 1) {
        piVar2 = (int *)(unsigned)(uVar3 * 0x38 + ar4[3]);
        (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 0xc))))(piVar2,ar5,ar6,ar7));
      }
    }
    ar4[1] = ar4[1] + 1;
    piVar2 = (int *)(unsigned)*ar4;
    if (piVar2 == (int *)(unsigned)0x1) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 + 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) + CONCAT44D(0x3f800000,fVar4),0);
      }
      (*(undefined8 *)(fr0_ - 0x28)) = in_xd0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x28)) = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)) + 0x14) = (undefined4)(*(undefined8 *)(fr0_ - 0x28));
        uVar5 = CONCAT44(ar4[6],(undefined4)(*(undefined8 *)(fr0_ - 0x28)));
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x28))+4)) + 0x14) = (*(undefined8 *)(fr0_ - 0x28));
        uVar5 = *(undefined8 *)(unsigned)(ar4 + 6);
      }
      piVar2 = ar4 + 6;
      if (cVar6 == '\0' && F32HI(uVar5) < (float)uVar5) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c437c8c) = ar4[1];
        if (cVar7 == '\0') {
          ar4[5] = ar4[6];
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 5) = *(undefined8 *)(unsigned)(ar4 + 6);
        }
        piVar2 = (int *)(unsigned)0x2;
        *ar4 = 2;
      }
    }
    else if (piVar2 == (int *)(unsigned)0x2) {
      piVar2 = (int *)(unsigned)(uint)ar4[2];
      if (piVar2 < (int *)(unsigned)(uint)ar4[1]) {
        piVar2 = (int *)(unsigned)0x3;
        *ar4 = 3;
      }
    }
    else if (piVar2 == (int *)(unsigned)0x3) {
      if (cVar7 == '\0') {
        fVar4 = (float)ar4[5];
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 5);
      }
      if (cVar6 == '\0') {
        fVar4 = fVar4 - 1.0;
      }
      else {
        fVar4 = SUB84(CONCAT44D(0x3f800000,fVar4) - CONCAT44D(0x3f800000,fVar4),0);
      }
      (*(undefined8 *)(fr0_ - 0x30)) = in_xd0;
      if (cVar7 == '\0') {
        (*(undefined8 *)(fr0_ - 0x30)) = CONCAT44(ar4,fVar4);
      }
      if (cVar7 == '\0') {
        *(float *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) + 0x14) = (float)(*(undefined8 *)(fr0_ - 0x30));
        uVar5 = CONCAT44((float)(*(undefined8 *)(fr0_ - 0x30)),fVar4);
      }
      else {
        *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x30))+4)) + 0x14) = (*(undefined8 *)(fr0_ - 0x30));
        uVar5 = (*(undefined8 *)(fr0_ - 0x30));
      }
      fVar4 = (float)uVar5;
      piVar2 = (int *)(unsigned)0x0;
      if (cVar7 == '\0') {
        fVar4 = (float)(*(undefined8 *)(fr0_ - 0x30));
      }
      if (cVar6 == '\0' && fVar4 < 0.0) {
        if (cVar7 == '\0') {
          ar4[5] = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 5) = (ulonglong)(uint)fVar4;
        }
        piVar2 = (int *)(unsigned)0x0;
        *ar4 = 0;
      }
    }
  }
  return piVar2;
}

__asm__(".globl _FUN_8c0d7cb0\n.set _FUN_8c0d7cb0, _FUN_8c0d7cb0_def\n");
