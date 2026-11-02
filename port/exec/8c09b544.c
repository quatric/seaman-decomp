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
float * FUN_8c09b544_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b544";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  float *pfVar1;
  int iVar2;
  undefined8 *ar4_00;
  float fVar3;
  double dVar4;
  float fVar7;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  pfVar1 = ((float *)(unsigned long)*(unsigned *)(unsigned)((int)ar4 + 0x24));
  if ((int)pfVar1 <= *(int *)(unsigned)((int)ar4 + 0x2c) - *(int *)(unsigned)(ar4 + 5)) {
    *(undefined4 *)(unsigned)(ar4 + 5) = *(undefined4 *)(unsigned)((int)ar4 + 0x2c);
    ar4_00 = ar4;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4,ar5,ar6,ar7));
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x47000000,(float)iVar2);
    }
    else {
      dVar4 = 2.0716562097687757e+17;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) / F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 / dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x43870000,fVar3);
    }
    else {
      dVar4 = 85899363207.0;
    }
    if (cVar8 == '\0') {
      fVar3 = F32LO(dVar4) * F32HI(dVar4);
    }
    else {
      fVar3 = SUB84(dVar4 * dVar4,0);
    }
    if (cVar9 == '\0') {
      dVar4 = CONCAT44D(0x42340000,fVar3);
    }
    else {
      dVar4 = 3.051758565142393e-05;
    }
    if (cVar8 == '\0') {
      fVar7 = F32HI(dVar4);
      fVar3 = F32LO(dVar4) + fVar7;
      dVar4 = CONCAT44D(fVar7,fVar3);
      iVar2 = (int)fVar3;
    }
    else {
      dVar4 = dVar4 + dVar4;
      iVar2 = (int)dVar4;
    }
    *(int *)(unsigned)((int)ar4 + 0x24) = iVar2;
    if (cVar9 == '\0') {
      dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 3);
    }
    else {
      in_xd0 = ar4[3];
    }
    uVar5 = D2U(dVar4) & 0xffffffff;
    if (SUB84(dVar4,0) == 0.0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar9 == '\0') {
        uVar5 = CONCAT44(0x3f000000,fVar3);
      }
      else {
        uVar5 = 0x3e0f5c293f000000;
      }
      if (cVar8 == '\0' && (float)uVar5 < (float)(uVar5 >> 0x20)) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) / F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) * F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) + F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)((int)ar4 + 0xc) = fVar3;
          fVar3 = *(float *)(unsigned)((int)ar4 + 0xc);
        }
        else {
          *(undefined8 *)(unsigned)((int)ar4 + 0xc) = in_xd0;
          in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0xc) = 0x3f6e147b;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0xc) = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)ar4,*(undefined4 *)(unsigned)((int)ar4 + 0xc));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)((int)ar4 + 0xc);
          uVar6 = *ar4;
        }
        fVar3 = (float)uVar6;
        if (cVar8 != '\0' || fVar3 <= F32HI(uVar6)) {
          if (cVar9 == '\0') {
            uVar5 = CONCAT44(0xbb03126f,fVar3);
            *(undefined4 *)(unsigned)(ar4 + 3) = 0xbb03126f;
          }
          else {
            uVar5 = 0x4f222fe6bb03126f;
            ar4[3] = 0x4f222fe6bb03126f;
          }
        }
        else if (cVar9 == '\0') {
          uVar5 = CONCAT44(0x3b03126f,fVar3);
          *(undefined4 *)(unsigned)(ar4 + 3) = 0x3b03126f;
        }
        else {
          uVar5 = 0xbb03126f3b03126f;
          ar4[3] = 0xbb03126f3b03126f;
        }
      }
    }
    fVar3 = (float)uVar5;
    pfVar1 = (float *)(unsigned)((int)ar4 + 0x1c);
    if (cVar9 == '\0') {
      fVar3 = *pfVar1;
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)pfVar1;
    }
    if (fVar3 == 0.0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
      if (cVar9 == '\0') {
        dVar4 = CONCAT44D(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 2.0716562097687757e+17;
      }
      if (cVar8 == '\0') {
        fVar3 = F32LO(dVar4) / F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6b0);
      if (cVar9 == '\0') {
        fVar7 = 0.5;
      }
      else {
        fVar3 = 0.5;
        fVar7 = 0.14;
      }
      if (cVar8 == '\0' && fVar3 < fVar7) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), rand(ar4_00,ar5,ar6,ar7));
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 2.0716562097687757e+17;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) / F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3e0f5c29,fVar3);
        }
        else {
          dVar4 = 0.0036718756750633475;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) * F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar9 == '\0') {
          dVar4 = CONCAT44D(0x3f6e147b,fVar3);
        }
        else {
          dVar4 = 1.971999614954473e-24;
        }
        if (cVar8 == '\0') {
          fVar3 = F32LO(dVar4) + F32HI(dVar4);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 2) = fVar3;
          fVar3 = *(float *)(unsigned)(ar4 + 2);
        }
        else {
          ar4[2] = in_xd0;
        }
        if (fVar3 == 1.0) {
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)(ar4 + 2) = 0x3f6e147b;
          }
          else {
            ar4[2] = 0x3b03126f3f6e147b;
          }
        }
        if (cVar9 == '\0') {
          uVar6 = CONCAT44(*(undefined4 *)(unsigned)((int)ar4 + 4),*(undefined4 *)(unsigned)(ar4 + 2));
        }
        else {
          uVar6 = *(undefined8 *)(unsigned)((int)ar4 + 4);
        }
        if (cVar8 != '\0' || (float)uVar6 <= F32HI(uVar6)) {
          pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6c0);
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x1c) = 0xbb03126f;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0x1c) = 0x4f222fe6bb03126f;
          }
        }
        else {
          pfVar1 = (float *)(unsigned)((undefined1 *)(unsigned)0x8c09b6bc);
          if (cVar9 == '\0') {
            *(undefined4 *)(unsigned)((int)ar4 + 0x1c) = 0x3b03126f;
          }
          else {
            *(undefined8 *)(unsigned)((int)ar4 + 0x1c) = 0xbb03126f3b03126f;
          }
        }
      }
    }
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c09b544\n.set _FUN_8c09b544, _FUN_8c09b544_def\n");
