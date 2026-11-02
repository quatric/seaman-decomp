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
undefined4 FUN_8c0e89c4_def(undefined4 ar4,double *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e89c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  int iVar1;
  float fVar2;
  float fVar4;
  double dVar3;
  double in_dr2 = 0;
  bool bVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar6_00 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c10273c(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,0xffffffff,ar7));
  fVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  fVar4 = (*(undefined1 *)(unsigned)0x8c1264bc);
  if (cVar7 == '\0') {
    fVar2 = *(float *)(unsigned)ar5;
    fVar4 = (*(undefined4 *)(unsigned)(unsigned)0x8c1264b8);
  }
  if (fVar2 == fVar4) {
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e84c8(s0,&(*(undefined2 *)(fr0_ - 0x10)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,ar6_00,ar7));
  }
  else {
    for (iVar1 = 0; iVar1 < 4; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = CONCAT44D(*(float *)(unsigned)ar5,SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *ar5;
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42f00000,(float)iVar1);
      }
      else {
        dVar3 = 206158464480.0;
      }
      if (cVar6 == '\0') {
        fVar2 = F32LO(dVar3) * F32HI(dVar3);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42480000,fVar2);
      }
      else {
        dVar3 = 123145319686144.0;
      }
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr2) <
                F32LO(dVar3) + F32HI(dVar3);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = CONCAT44D(*(float *)(unsigned)ar5,SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *ar5;
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42f00000,(float)iVar1);
        }
        else {
          dVar3 = 206158464480.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) * F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42480000,fVar2);
        }
        else {
          dVar3 = 123145319686144.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) + F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42dc0000,fVar2);
        }
        else {
          dVar3 = 32985353214976.0;
        }
        if (cVar6 == '\0') {
          bVar5 = F32LO(dVar3) + F32HI(dVar3) <
                  F32HI(in_dr2);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          (*(undefined2 *)(fr0_ - 0x10)) = (undefined2)iVar1;
          break;
        }
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      if (cVar7 == '\0') {
        in_dr2 = CONCAT44D(*(float *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
      }
      else {
        in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42be0000,(float)iVar1);
      }
      else {
        dVar3 = 8796095209216.0;
      }
      if (cVar6 == '\0') {
        fVar2 = F32LO(dVar3) * F32HI(dVar3);
      }
      else {
        fVar2 = SUB84(dVar3 * dVar3,0);
      }
      if (cVar7 == '\0') {
        dVar3 = CONCAT44D(0x42a00000,fVar2);
      }
      else {
        dVar3 = 14293653344256.0;
      }
      if (cVar6 == '\0') {
        bVar5 = F32HI(in_dr2) <
                F32LO(dVar3) + F32HI(dVar3);
      }
      else {
        bVar5 = in_dr2 < dVar3 + dVar3;
      }
      if (!bVar5) {
        if (cVar7 == '\0') {
          in_dr2 = CONCAT44D(*(float *)(unsigned)((int)ar5 + 4),SUB84(in_dr2,0));
        }
        else {
          in_dr2 = *(double *)(unsigned)((int)ar5 + 4);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42be0000,(float)iVar1);
        }
        else {
          dVar3 = 8796095209216.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) * F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 * dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42a00000,fVar2);
        }
        else {
          dVar3 = 14293653344256.0;
        }
        if (cVar6 == '\0') {
          fVar2 = F32LO(dVar3) + F32HI(dVar3);
        }
        else {
          fVar2 = SUB84(dVar3 + dVar3,0);
        }
        if (cVar7 == '\0') {
          dVar3 = CONCAT44D(0x42aa0000,fVar2);
        }
        else {
          dVar3 = 2.993931217461508e-78;
        }
        if (cVar6 == '\0') {
          bVar5 = F32LO(dVar3) + F32HI(dVar3) <
                  F32HI(in_dr2);
        }
        else {
          bVar5 = dVar3 + dVar3 < in_dr2;
        }
        if (!bVar5) {
          (*(undefined2 *)(fr0_ - 0xe)) = (undefined2)iVar1;
          break;
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c0e84c8(s0,&(*(undefined2 *)(fr0_ - 0x10)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), free_if_nonnull_wrap_016660(&(*(undefined2 *)(fr0_ - 0x10)),0xffffffff,ar6_00,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c0e89c4\n.set _FUN_8c0e89c4, _FUN_8c0e89c4_def\n");
