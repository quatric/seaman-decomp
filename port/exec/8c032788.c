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
float * FUN_8c032788_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c032788";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  float in_fr1 = 0;
  double dVar1;
  double dVar2;
  undefined4 in_fr3 = 0;
  float in_fr4 = 0;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_xd0 = 0;
  float in_PR = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = in_fr4 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
  fVar6 = (*ar6 + *((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))) - in_fr4;
  fVar3 = in_fr4 + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2];
  fVar4 = (ar6[2] + ((float *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000))[2]) - in_fr4;
  if (fVar5 < *ar5) {
    if (fVar6 <= *ar5) {
      in_fr1 = *ar5 - fVar6;
      if (fVar5 < fVar6 - in_fr1) {
        *ar5 = (fVar6 - (*ar5 - fVar6)) - 1.0;
      }
      else {
        *ar5 = fVar5 + 1.0;
      }
    }
  }
  else {
    in_fr1 = *ar5;
    if ((fVar5 - in_fr1) + fVar5 < fVar6) {
      in_fr1 = (fVar5 - *ar5) + fVar5 + 1.0;
      *ar5 = in_fr1;
    }
    else {
      *ar5 = fVar6 - 1.0;
    }
  }
  if (fVar3 < ar5[2]) {
    fVar5 = ar5[2];
    if (fVar4 <= fVar5) {
      in_fr1 = ar5[2] - fVar4;
      if (fVar3 < fVar4 - in_fr1) {
        fVar5 = 1.0;
        ar5[2] = (fVar4 - (ar5[2] - fVar4)) - 1.0;
      }
      else {
        fVar5 = 1.0;
        ar5[2] = fVar3 + 1.0;
      }
    }
  }
  else {
    in_fr1 = ar5[2];
    if ((fVar3 - in_fr1) + fVar3 < fVar4) {
      in_fr1 = (fVar3 - ar5[2]) + fVar3 + 1.0;
      fVar5 = 1.0;
      ar5[2] = in_fr1;
    }
    else {
      fVar5 = 1.0;
      ar5[2] = fVar4 - 1.0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,ar5,ar6,ar7));
  (*(float *)(fr0_ - 0x24)) = in_fr4;
  if (cVar8 != '\0') {
    in_xd0 = CONCAT44(ar7,in_fr4);
    (*(float *)(fr0_ - 0x24)) = in_fr1;
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x24)) + fVar5;
  }
  else {
    (*(float *)(fr0_ - 0x24)) = SUB84(CONCAT44D(fVar5,(*(float *)(fr0_ - 0x24))) + CONCAT44D(fVar5,(*(float *)(fr0_ - 0x24))),0);
  }
  if (cVar8 == '\0') {
    dVar1 = CONCAT44D(in_fr4,ar6[1]);
    (*(float *)(fr0_ - 0x20)) = in_PR;
  }
  else {
    (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x20)) = F32HI(in_xd0);
    in_xd0 = *(undefined8 *)(unsigned)(ar6 + 1);
    dVar1 = CONCAT44D(ar7,in_fr4);
  }
  if (cVar7 == '\0') {
    (*(float *)(fr0_ - 0x28)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x28)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar8 == '\0') {
    fVar3 = ar5[1];
    fVar4 = (*(float *)(fr0_ - 0x24));
  }
  else {
    (*(float *)(fr0_ - 0x28)) = (float)in_xd0;
    (*(float *)(fr0_ - 0x24)) = F32HI(in_xd0);
    in_xd0 = *(undefined8 *)(unsigned)(ar5 + 1);
    fVar3 = (*(float *)(fr0_ - 0x24));
    fVar4 = (*(float *)(fr0_ - 0x20));
  }
  if (cVar7 == '\0' && fVar4 < fVar3) {
    if (cVar8 == '\0') {
      fVar3 = ar5[1];
      fVar4 = (*(float *)(fr0_ - 0x28));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar5 + 1);
      fVar3 = (*(float *)(fr0_ - 0x28));
      fVar4 = (*(float *)(fr0_ - 0x24));
    }
    if (cVar7 != '\0' || fVar4 <= fVar3) {
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D(ar5[1],in_fr3);
        dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar3);
      }
      else {
        dVar1 = *(double *)(unsigned)(ar5 + 1);
        dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      fVar3 = F32HI(dVar2);
      if (cVar7 == '\0') {
        dVar1 = CONCAT44D(F32HI(dVar1) - fVar3,SUB84(dVar1,0));
      }
      else {
        dVar1 = dVar1 - dVar2;
      }
      if (cVar8 == '\0') {
        dVar2 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x28)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar2) - F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar2 - dVar1,0);
      }
      fVar4 = (*(float *)(fr0_ - 0x24));
      fVar5 = (*(float *)(fr0_ - 0x20));
      if (cVar8 == '\0') {
        fVar4 = fVar3;
        fVar5 = (*(float *)(fr0_ - 0x24));
      }
      if (cVar7 == '\0' && fVar5 < fVar4) {
        if (cVar8 == '\0') {
          dVar1 = CONCAT44D(ar5[1],SUB84(dVar1,0));
          dVar2 = CONCAT44D((*(float *)(fr0_ - 0x28)),fVar4);
        }
        else {
          dVar1 = *(double *)(unsigned)(ar5 + 1);
          dVar2 = CONCAT44D((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        }
        fVar3 = F32HI(dVar2);
        if (cVar7 == '\0') {
          dVar1 = CONCAT44D(F32HI(dVar1) - fVar3,SUB84(dVar1,0));
        }
        else {
          dVar1 = dVar1 - dVar2;
        }
        if (cVar8 == '\0') {
          dVar2 = CONCAT44D(fVar3,(*(float *)(fr0_ - 0x28)));
        }
        else {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        }
        if (cVar7 == '\0') {
          fVar3 = F32LO(dVar2) - F32HI(dVar1);
        }
        else {
          fVar3 = SUB84(dVar2 - dVar1,0);
        }
        if (cVar7 == '\0') {
          fVar3 = fVar3 - 1.0;
        }
        else {
          fVar3 = SUB84(CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fVar3;
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
        }
      }
      else {
        if (cVar8 != '\0') {
          in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
          (*(float *)(fr0_ - 0x24)) = fVar4;
        }
        if (cVar7 == '\0') {
          (*(float *)(fr0_ - 0x24)) = (*(float *)(fr0_ - 0x24)) + 1.0;
        }
        else {
          (*(float *)(fr0_ - 0x24)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x24))) +
                            CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x24))),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = (*(float *)(fr0_ - 0x24));
        }
        else {
          *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
        }
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar1 = CONCAT44D(ar5[1],(*(float *)(fr0_ - 0x24)));
    }
    else {
      in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      dVar1 = *(double *)(unsigned)(ar5 + 1);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar1) - F32HI(dVar1);
    }
    else {
      fVar3 = SUB84(dVar1 - dVar1,0);
    }
    if (cVar8 == '\0') {
      dVar1 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar3);
    }
    else {
      dVar1 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar1) + F32HI(dVar1);
    }
    else {
      fVar3 = SUB84(dVar1 + dVar1,0);
    }
    fVar4 = (*(float *)(fr0_ - 0x28));
    fVar5 = (*(float *)(fr0_ - 0x24));
    if (cVar8 == '\0') {
      fVar4 = fVar3;
      fVar5 = (*(float *)(fr0_ - 0x28));
    }
    if (cVar7 == '\0' && fVar4 < fVar5) {
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D(ar5[1],(*(float *)(fr0_ - 0x24)));
      }
      else {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
        dVar1 = *(double *)(unsigned)(ar5 + 1);
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar1) - F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar1 - dVar1,0);
      }
      if (cVar8 == '\0') {
        dVar1 = CONCAT44D((*(float *)(fr0_ - 0x24)),fVar3);
      }
      else {
        dVar1 = CONCAT44D((*(float *)(fr0_ - 0x20)),(*(float *)(fr0_ - 0x24)));
      }
      if (cVar7 == '\0') {
        fVar3 = F32LO(dVar1) + F32HI(dVar1);
      }
      else {
        fVar3 = SUB84(dVar1 + dVar1,0);
      }
      if (cVar7 == '\0') {
        fVar3 = fVar3 + 1.0;
      }
      else {
        fVar3 = SUB84(CONCAT44D(0x3f800000,fVar3) + CONCAT44D(0x3f800000,fVar3),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
      }
    }
    else {
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44((*(float *)(fr0_ - 0x24)),(*(float *)(fr0_ - 0x28)));
        (*(float *)(fr0_ - 0x28)) = fVar4;
      }
      if (cVar7 == '\0') {
        (*(float *)(fr0_ - 0x28)) = (*(float *)(fr0_ - 0x28)) - 1.0;
      }
      else {
        (*(float *)(fr0_ - 0x28)) = SUB84(CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x28))) -
                          CONCAT44D(0x3f800000,(*(float *)(fr0_ - 0x28))),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = (*(float *)(fr0_ - 0x28));
      }
      else {
        *(undefined8 *)(unsigned)(ar5 + 1) = in_xd0;
      }
    }
  }
  return ar5;
}

__asm__(".globl _FUN_8c032788\n.set _FUN_8c032788, _FUN_8c032788_def\n");
