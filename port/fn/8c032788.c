#include "../decls.h"
float * FUN_8c032788_def(undefined4 ar4,float *ar5,float *ar6,int *ar7)

{
  float in_fr1;
  double dVar1;
  double dVar2;
  undefined4 in_fr3;
  float in_fr4;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_xd0;
  float in_PR;
  char cVar7;
  char cVar8;
  float *in_stack_00000000;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar5 = in_fr4 + *in_stack_00000000;
  fVar6 = (*ar6 + *in_stack_00000000) - in_fr4;
  fVar3 = in_fr4 + in_stack_00000000[2];
  fVar4 = (ar6[2] + in_stack_00000000[2]) - in_fr4;
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
  (**(code **)(*ar7 + 0x128))(ar7,ar5,ar6,ar7);
  fStack_24 = in_fr4;
  if (cVar8 != '\0') {
    in_xd0 = CONCAT44(ar7,in_fr4);
    fStack_24 = in_fr1;
  }
  if (cVar7 == '\0') {
    fStack_24 = fStack_24 + fVar5;
  }
  else {
    fStack_24 = SUB84((double)CONCAT44(fVar5,fStack_24) + (double)CONCAT44(fVar5,fStack_24),0);
  }
  if (cVar8 == '\0') {
    dVar1 = (double)CONCAT44(in_fr4,ar6[1]);
    fStack_20 = in_PR;
  }
  else {
    fStack_24 = (float)in_xd0;
    fStack_20 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = *(undefined8 *)(ar6 + 1);
    dVar1 = (double)CONCAT44(ar7,in_fr4);
  }
  if (cVar7 == '\0') {
    fStack_28 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar8 == '\0') {
    fVar3 = ar5[1];
    fVar4 = fStack_24;
  }
  else {
    fStack_28 = (float)in_xd0;
    fStack_24 = (float)((ulonglong)in_xd0 >> 0x20);
    in_xd0 = *(undefined8 *)(ar5 + 1);
    fVar3 = fStack_24;
    fVar4 = fStack_20;
  }
  if (cVar7 == '\0' && fVar4 < fVar3) {
    if (cVar8 == '\0') {
      fVar3 = ar5[1];
      fVar4 = fStack_28;
    }
    else {
      in_xd0 = *(undefined8 *)(ar5 + 1);
      fVar3 = fStack_28;
      fVar4 = fStack_24;
    }
    if (cVar7 != '\0' || fVar4 <= fVar3) {
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(ar5[1],in_fr3);
        dVar2 = (double)CONCAT44(fStack_28,fVar3);
      }
      else {
        dVar1 = *(double *)(ar5 + 1);
        dVar2 = (double)CONCAT44(fStack_24,fStack_28);
      }
      fVar3 = (float)((ulonglong)dVar2 >> 0x20);
      if (cVar7 == '\0') {
        dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) - fVar3,SUB84(dVar1,0));
      }
      else {
        dVar1 = dVar1 - dVar2;
      }
      if (cVar8 == '\0') {
        dVar2 = (double)CONCAT44(fVar3,fStack_28);
      }
      else {
        in_xd0 = CONCAT44(fStack_24,fStack_28);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar2,0) - (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar2 - dVar1,0);
      }
      fVar4 = fStack_24;
      fVar5 = fStack_20;
      if (cVar8 == '\0') {
        fVar4 = fVar3;
        fVar5 = fStack_24;
      }
      if (cVar7 == '\0' && fVar5 < fVar4) {
        if (cVar8 == '\0') {
          dVar1 = (double)CONCAT44(ar5[1],SUB84(dVar1,0));
          dVar2 = (double)CONCAT44(fStack_28,fVar4);
        }
        else {
          dVar1 = *(double *)(ar5 + 1);
          dVar2 = (double)CONCAT44(fStack_24,fStack_28);
        }
        fVar3 = (float)((ulonglong)dVar2 >> 0x20);
        if (cVar7 == '\0') {
          dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) - fVar3,SUB84(dVar1,0));
        }
        else {
          dVar1 = dVar1 - dVar2;
        }
        if (cVar8 == '\0') {
          dVar2 = (double)CONCAT44(fVar3,fStack_28);
        }
        else {
          in_xd0 = CONCAT44(fStack_24,fStack_28);
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar2,0) - (float)((ulonglong)dVar1 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar2 - dVar1,0);
        }
        if (cVar7 == '\0') {
          fVar3 = fVar3 - 1.0;
        }
        else {
          fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) - (double)CONCAT44(0x3f800000,fVar3),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fVar3;
        }
        else {
          *(undefined8 *)(ar5 + 1) = in_xd0;
        }
      }
      else {
        if (cVar8 != '\0') {
          in_xd0 = CONCAT44(fStack_20,fStack_24);
          fStack_24 = fVar4;
        }
        if (cVar7 == '\0') {
          fStack_24 = fStack_24 + 1.0;
        }
        else {
          fStack_24 = SUB84((double)CONCAT44(0x3f800000,fStack_24) +
                            (double)CONCAT44(0x3f800000,fStack_24),0);
        }
        if (cVar8 == '\0') {
          ar5[1] = fStack_24;
        }
        else {
          *(undefined8 *)(ar5 + 1) = in_xd0;
        }
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar1 = (double)CONCAT44(ar5[1],fStack_24);
    }
    else {
      in_xd0 = CONCAT44(fStack_20,fStack_24);
      dVar1 = *(double *)(ar5 + 1);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar1 - dVar1,0);
    }
    if (cVar8 == '\0') {
      dVar1 = (double)CONCAT44(fStack_24,fVar3);
    }
    else {
      dVar1 = (double)CONCAT44(fStack_20,fStack_24);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar1 + dVar1,0);
    }
    fVar4 = fStack_28;
    fVar5 = fStack_24;
    if (cVar8 == '\0') {
      fVar4 = fVar3;
      fVar5 = fStack_28;
    }
    if (cVar7 == '\0' && fVar4 < fVar5) {
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(ar5[1],fStack_24);
      }
      else {
        in_xd0 = CONCAT44(fStack_20,fStack_24);
        dVar1 = *(double *)(ar5 + 1);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar1 - dVar1,0);
      }
      if (cVar8 == '\0') {
        dVar1 = (double)CONCAT44(fStack_24,fVar3);
      }
      else {
        dVar1 = (double)CONCAT44(fStack_20,fStack_24);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar1 + dVar1,0);
      }
      if (cVar7 == '\0') {
        fVar3 = fVar3 + 1.0;
      }
      else {
        fVar3 = SUB84((double)CONCAT44(0x3f800000,fVar3) + (double)CONCAT44(0x3f800000,fVar3),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fVar3;
      }
      else {
        *(undefined8 *)(ar5 + 1) = in_xd0;
      }
    }
    else {
      if (cVar8 != '\0') {
        in_xd0 = CONCAT44(fStack_24,fStack_28);
        fStack_28 = fVar4;
      }
      if (cVar7 == '\0') {
        fStack_28 = fStack_28 - 1.0;
      }
      else {
        fStack_28 = SUB84((double)CONCAT44(0x3f800000,fStack_28) -
                          (double)CONCAT44(0x3f800000,fStack_28),0);
      }
      if (cVar8 == '\0') {
        ar5[1] = fStack_28;
      }
      else {
        *(undefined8 *)(ar5 + 1) = in_xd0;
      }
    }
  }
  return ar5;
}

__asm__(".globl _FUN_8c032788\n.set _FUN_8c032788, _FUN_8c032788_def\n");
