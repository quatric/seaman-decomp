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
undefined4 s_CAnimBody_AdvanceFrame_033ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_AdvanceFrame_033ba0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  double dVar4;
  float in_fr4 = 0;
  undefined4 in_fr14 = 0;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132cfa),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  uVar2 = 0;
  if (cVar5 == '\0') {
    dVar4 = CONCAT44D((float)*(int *)(unsigned)(ar4 + 0x24),in_fr1);
  }
  else {
    dVar4 = (double)*(int *)(unsigned)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),in_fr4);
    in_xd14 = in_xd0;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x20);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) + F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x20) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  if (*(int *)(unsigned)(ar4 + 0x28) == 0) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x20);
    }
    else {
      in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 == '\0' && F32HI(dVar4) < SUB84(dVar4,0)) {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
        *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x30);
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      }
    }
    if (*(char *)(unsigned)(ar4 + 0x54) != '\0') {
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D((int)(D2U(dVar4) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x60));
      }
      else {
        in_xd14 = *(undefined8 *)(unsigned)(ar4 + 0x60);
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) * in_fr4;
      }
      else {
        fVar3 = SUB84(dVar4 * CONCAT44D(in_fr14,in_fr4),0);
      }
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x58),fVar3);
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x58);
      }
      if (cVar5 == '\0') {
        fVar3 = F32LO(dVar4) + F32HI(dVar4);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar6 == '\0') {
        *(float *)(unsigned)(ar4 + 0x58) = fVar3;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd14;
      }
      uVar2 = 3;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      if (cVar6 == '\0') {
        fVar3 = *(float *)(unsigned)(ar4 + 0x58);
      }
      if (cVar5 != '\0' || 1.0 <= fVar3) {
        *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
        if (cVar6 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
        }
        uVar2 = 4;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      }
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x28) == 1) {
    if (cVar6 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x20);
    }
    if (cVar5 == '\0') {
      dVar4 = CONCAT44D((float)(iVar1 + -1),fVar3);
    }
    else {
      dVar4 = (double)(iVar1 + -1);
    }
    if (cVar5 != '\0' || SUB84(dVar4,0) <= F32HI(dVar4)) {
      if (cVar6 == '\0') {
        dVar4 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x20);
      }
      fVar3 = F32LO(dVar4);
      if (cVar5 != '\0' || fVar3 <= 0.0) {
        if (cVar6 == '\0') {
          fVar3 = *(float *)(unsigned)(ar4 + 0x20);
        }
        if (fVar3 != 0.0) {
          if (cVar6 == '\0') {
            dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),fVar3);
          }
          else {
            dVar4 = *(double *)(unsigned)(ar4 + 0x20);
          }
          if (cVar5 == '\0') {
            dVar4 = CONCAT44D(F32HI(dVar4) + in_fr4,SUB84(dVar4,0));
          }
          else {
            dVar4 = dVar4 + CONCAT44D(in_fr14,in_fr4);
          }
          if (cVar6 == '\0') {
            *(int *)(unsigned)(ar4 + 0x20) = (int)(D2U(dVar4) >> 0x20);
          }
          else {
            *(double *)(unsigned)(ar4 + 0x20) = dVar4;
          }
        }
        *(undefined4 *)(unsigned)(ar4 + 0x24) = 1;
        uVar2 = 1;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
        if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
          *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
          *(undefined4 *)(unsigned)(ar4 + 0x28) = *(undefined4 *)(unsigned)(ar4 + 0x30);
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
          uVar2 = 2;
          *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
        }
      }
    }
    else {
      if (cVar6 == '\0') {
        dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x20),SUB84(dVar4,0));
      }
      else {
        dVar4 = *(double *)(unsigned)(ar4 + 0x20);
      }
      if (cVar5 == '\0') {
        dVar4 = CONCAT44D(F32HI(dVar4) - in_fr4,SUB84(dVar4,0));
      }
      else {
        dVar4 = dVar4 - CONCAT44D(in_fr14,in_fr4);
      }
      if (cVar6 == '\0') {
        *(int *)(unsigned)(ar4 + 0x20) = (int)(D2U(dVar4) >> 0x20);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x20) = dVar4;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x24) = 0xffffffff;
      uVar2 = 5;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_AdvanceFrame_033ba0\n.set _s_CAnimBody_AdvanceFrame_033ba0, _s_CAnimBody_AdvanceFrame_033ba0_def\n");
