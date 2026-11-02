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
float FUN_8c09b6c4_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c09b6c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  float *ar4_00;
  float fVar1;
  ulonglong in_dr0 = 0;
  ulonglong uVar2;
  double dVar3;
  float fVar4;
  ulonglong in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar4_00 = ar4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c010e38(ar4,ar5,ar6,ar7); });
  if (cVar6 == '\0') {
    uVar2 = CONCAT44(0x3b03126f,(int)(in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    uVar2 = 0x4f222fe63b03126f;
  }
  if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) {
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(ar4[6],*ar4);
    }
    else {
      in_dr0 = *(ulonglong *)(unsigned)ar4;
      dVar3 = *(double *)(unsigned)(ar4 + 6);
    }
    if (cVar5 == '\0') {
      fVar1 = F32LO(dVar3) + F32HI(dVar3);
    }
    else {
      fVar1 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar6 == '\0') {
      *ar4 = fVar1;
      fVar1 = ar4[6];
    }
    else {
      *(ulonglong *)(unsigned)ar4 = in_dr0;
      in_dr0 = *(ulonglong *)(unsigned)(ar4 + 6);
    }
    uVar2 = (ulonglong)(uint)fVar1;
    if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b712:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[6];
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)(ar4 + 6);
      }
      uVar2 = (ulonglong)(uint)fVar1;
      if (cVar5 == '\0' && fVar1 < 0.0) {
        if (cVar6 == '\0') {
          uVar2 = CONCAT44(ar4[3],*ar4);
        }
        else {
          in_dr0 = *(ulonglong *)(unsigned)ar4;
          uVar2 = *(ulonglong *)(unsigned)(ar4 + 3);
        }
        if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b72a;
      }
    }
    else {
      if (cVar6 == '\0') {
        uVar2 = CONCAT44(ar4[3],*ar4);
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)ar4;
        uVar2 = *(ulonglong *)(unsigned)(ar4 + 3);
      }
      if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b712;
LAB_8c09b72a:
      fVar1 = (float)uVar2;
      if (cVar6 == '\0') {
        fVar1 = ar4[3];
      }
      else {
        in_dr0 = *(ulonglong *)(unsigned)(ar4 + 3);
      }
      if (fVar1 == 1.0) {
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
          *ar4 = 1.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 3) = CONCAT44(0x3f800000,fVar1);
          *(ulonglong *)(unsigned)ar4 = CONCAT44(0x3f800000,fVar1);
        }
        uVar2 = (ulonglong)(uint)fVar1;
        if (cVar6 == '\0') {
          ar4[6] = 0.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 6) = uVar2;
        }
      }
      else {
        if (cVar6 == '\0') {
          dVar3 = CONCAT44D(ar4[6],fVar1);
        }
        else {
          dVar3 = *(double *)(unsigned)(ar4 + 6);
        }
        if (cVar5 == '\0') {
          dVar3 = CONCAT44D(-F32HI(dVar3),SUB84(dVar3,0));
        }
        else {
          dVar3 = -dVar3;
        }
        if (cVar6 == '\0') {
          ar4[6] = F32HI(dVar3);
        }
        else {
          *(double *)(unsigned)(ar4 + 6) = dVar3;
        }
        uVar2 = CONCAT44(0x3f800000,SUB84(dVar3,0));
        if (cVar6 == '\0') {
          ar4[3] = 1.0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 3) = uVar2;
        }
      }
    }
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c010e38(ar4_00,ar5,ar6,ar7); });
  fVar1 = (float)(uVar2 >> 0x20);
  if (cVar6 == '\0') {
    fVar4 = 0.002;
    uVar2 = in_dr0;
  }
  else {
    fVar1 = 0.002;
    fVar4 = 2.721048e+09;
  }
  if (cVar5 == '\0' && fVar1 < fVar4) goto LAB_8c09b826;
  if (cVar6 == '\0') {
    dVar3 = CONCAT44D(ar4[7],ar4[1]);
  }
  else {
    uVar2 = *(ulonglong *)(unsigned)(ar4 + 1);
    dVar3 = *(double *)(unsigned)(ar4 + 7);
  }
  if (cVar5 == '\0') {
    fVar1 = F32LO(dVar3) + F32HI(dVar3);
  }
  else {
    fVar1 = SUB84(dVar3 + dVar3,0);
  }
  if (cVar6 == '\0') {
    ar4[1] = fVar1;
    fVar1 = ar4[7];
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 1) = uVar2;
  }
  uVar2 = (ulonglong)(uint)fVar1;
  if (cVar5 == '\0' && fVar1 < 0.0) {
LAB_8c09b7be:
    fVar1 = (float)uVar2;
    if (cVar6 == '\0') {
      fVar1 = ar4[7];
    }
    if (cVar5 != '\0' || 0.0 <= fVar1) goto LAB_8c09b826;
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(unsigned)(ar4 + 4);
    }
    if (cVar5 != '\0' || (float)(uVar2 >> 0x20) <= (float)uVar2) goto LAB_8c09b826;
  }
  else {
    if (cVar6 == '\0') {
      uVar2 = CONCAT44(ar4[4],ar4[1]);
    }
    else {
      uVar2 = *(ulonglong *)(unsigned)(ar4 + 4);
    }
    if (cVar5 == '\0' && (float)uVar2 < (float)(uVar2 >> 0x20)) goto LAB_8c09b7be;
  }
  fVar1 = (float)uVar2;
  if (cVar6 == '\0') {
    fVar1 = ar4[4];
  }
  if (fVar1 == 1.0) {
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
      ar4[1] = 1.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 4) = CONCAT44(0x3f800000,fVar1);
      *(ulonglong *)(unsigned)(ar4 + 1) = CONCAT44(0x3f800000,fVar1);
    }
    if (cVar6 == '\0') {
      ar4[7] = 0.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 7) = (ulonglong)(uint)fVar1;
    }
  }
  else {
    if (cVar6 == '\0') {
      dVar3 = CONCAT44D(ar4[7],fVar1);
    }
    else {
      dVar3 = *(double *)(unsigned)(ar4 + 7);
    }
    if (cVar5 == '\0') {
      dVar3 = CONCAT44D(-F32HI(dVar3),SUB84(dVar3,0));
    }
    else {
      dVar3 = -dVar3;
    }
    if (cVar6 == '\0') {
      ar4[7] = F32HI(dVar3);
    }
    else {
      *(double *)(unsigned)(ar4 + 7) = dVar3;
    }
    if (cVar6 == '\0') {
      ar4[4] = 1.0;
    }
    else {
      *(ulonglong *)(unsigned)(ar4 + 4) = CONCAT44(0x3f800000,SUB84(dVar3,0));
    }
  }
LAB_8c09b826:
  fVar1 = ar4[0xb];
  ar4[0xb] = (float)((int)fVar1 + 1);
  return (float)((int)fVar1 + 1);
}

__asm__(".globl _FUN_8c09b6c4\n.set _FUN_8c09b6c4, _FUN_8c09b6c4_def\n");
