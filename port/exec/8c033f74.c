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
undefined4 s_CAnimBody_SetInterpolate_033f7e_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetInterpolate_033f7e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  char *ar5_00;
  undefined4 in_fr1 = 0;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  ulonglong uVar6;
  float in_fr4 = 0;
  undefined8 in_xd0 = 0;
  undefined8 in_xd14 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    ar5_00 = ((undefined1 *)(unsigned)0x8c132d47);
    (vsp = ((unsigned long)(fr0_ - 4)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132d47),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + *(int *)(unsigned)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x34) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(*(int *)(unsigned)(ar4 + 0x14) + (int)ar5 * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x38) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c026d74(*(int *)(unsigned)(ar4 + 0x18) + *(int *)(unsigned)(ar4 + 0x1c) * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x44) = uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c026d74(*(int *)(unsigned)(ar4 + 0x18) + (int)ar5 * 4,ar5_00,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x48) = uVar1;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    *(undefined4 *)(unsigned)(ar4 + 0x4c) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x3c) = uVar1;
    dVar5 = CONCAT44D(0xbf800000,in_fr1);
  }
  else {
    uVar4 = *(undefined8 *)(unsigned)(ar4 + 0x20);
    *(undefined8 *)(unsigned)(ar4 + 0x4c) = uVar4;
    *(undefined8 *)(unsigned)(ar4 + 0x3c) = uVar4;
    dVar5 = -8.32867096114109e-251;
  }
  if (in_fr4 == F32HI(dVar5)) {
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar5 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) + F32HI(dVar5));
    }
    else {
      dVar5 = dVar5 + dVar5;
    }
    if (cVar8 == '\0') {
      *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= F32HI(dVar5)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x40) = in_fr4;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd14;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4,*(undefined4 *)(unsigned)(ar4 + 0x1c),ar6,ar7));
    while( true ) {
      uVar1 = SUB84(dVar5,0);
      if (cVar8 == '\0') {
        uVar1 = *(undefined4 *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = CONCAT44D((float)(iVar2 + -1),uVar1);
      }
      else {
        dVar5 = (double)(iVar2 + -1);
      }
      if (cVar7 != '\0' || SUB84(dVar5,0) <= F32HI(dVar5)) break;
      if (cVar8 == '\0') {
        dVar5 = (double)(ulonglong)*(uint *)(unsigned)(ar4 + 0x40);
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      }
      if (cVar7 == '\0') {
        dVar5 = (double)(ulonglong)(uint)(F32LO(dVar5) - (float)iVar2);
      }
      else {
        dVar5 = (double)iVar2 - (double)iVar2;
      }
      if (cVar8 == '\0') {
        *(int *)(unsigned)(ar4 + 0x40) = SUB84(dVar5,0);
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x40) = in_xd0;
      }
    }
    if (cVar8 == '\0') {
      dVar5 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),*(undefined4 *)(unsigned)(ar4 + 0x40));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x40);
      dVar5 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar5) - F32HI(dVar5);
    }
    else {
      fVar3 = SUB84(dVar5 - dVar5,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x20) = fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x20) = in_xd0;
    }
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x50) = *(undefined4 *)(unsigned)(ar4 + 0x40);
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = *(undefined4 *)(unsigned)(ar4 + 0x20);
    uVar6 = (ulonglong)*(uint *)(unsigned)(ar4 + 100);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x50) = *(undefined8 *)(unsigned)(ar4 + 0x40);
    uVar6 = *(ulonglong *)(unsigned)(ar4 + 0x20);
    *(ulonglong *)(unsigned)(ar4 + 0x5c) = uVar6;
  }
  fVar3 = (float)uVar6;
  if (cVar7 == '\0') {
    dVar5 = CONCAT44D(1.0 / fVar3,fVar3);
  }
  else {
    dVar5 = CONCAT44D(0x3f800000,fVar3) / CONCAT44D(0x3f800000,fVar3);
  }
  if (cVar8 == '\0') {
    *(int *)(unsigned)(ar4 + 0x60) = (int)(D2U(dVar5) >> 0x20);
  }
  else {
    *(double *)(unsigned)(ar4 + 0x60) = dVar5;
  }
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x58) = D2U(dVar5) & 0xffffffff;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x54) = 1;
  return 0x54;
}

__asm__(".globl _s_CAnimBody_SetInterpolate_033f7e\n.set _s_CAnimBody_SetInterpolate_033f7e, _s_CAnimBody_SetInterpolate_033f7e_def\n");
