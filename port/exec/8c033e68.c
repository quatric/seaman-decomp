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
undefined4 s_CAnimBody_SetFrame_033e6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CAnimBody_SetFrame_033e6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 in_fr1 = 0;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined4 in_fr4 = 0;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  if (*(int *)(unsigned)(ar4 + 0x1c) < 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 24)), report_error_message(((undefined1 *)(unsigned)0x8c132ce8),((undefined1 *)(unsigned)0x8c132d31),1,2));
    *(undefined4 *)(unsigned)(ar4 + 0x1c) = 0;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
  uVar2 = 0;
  if (cVar8 == '\0') {
    uVar5 = CONCAT44(in_fr4,in_fr1);
    *(undefined4 *)(unsigned)(ar4 + 0x20) = in_fr4;
  }
  else {
    uVar5 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),in_fr4);
    *(undefined8 *)(unsigned)(ar4 + 0x20) = uVar5;
  }
  uVar4 = (undefined4)uVar5;
  ar5_00 = *(undefined4 *)(unsigned)(ar4 + 0x1c);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), s_Check_This_Motion_Data_0314fc(ar4,ar5_00,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 0x54) == '\0') {
    if (cVar8 == '\0') {
      uVar4 = *(undefined4 *)(unsigned)(ar4 + 0x20);
    }
    if (cVar7 == '\0') {
      dVar6 = CONCAT44D((float)(iVar1 + -1),uVar4);
    }
    else {
      dVar6 = (double)(iVar1 + -1);
    }
    if (cVar7 == '\0' && F32HI(dVar6) < SUB84(dVar6,0)) {
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 1;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
      if (*(int *)(unsigned)(ar4 + 0x2c) != -1) {
        *(undefined4 *)(unsigned)(ar4 + 0x1c) = *(undefined4 *)(unsigned)(ar4 + 0x2c);
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0xffffffff;
        uVar2 = 2;
        *(undefined4 *)(unsigned)(ar4 + 0x70) = 0;
      }
    }
  }
  else {
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)(ar4 + 0x20));
    }
    else {
      in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x20);
      dVar6 = *(double *)(unsigned)(ar4 + 0x5c);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar6) - F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 - dVar6,0);
    }
    if (cVar8 == '\0') {
      dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 100),fVar3);
    }
    else {
      dVar6 = *(double *)(unsigned)(ar4 + 100);
    }
    if (cVar7 == '\0') {
      fVar3 = F32LO(dVar6) / F32HI(dVar6);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar8 == '\0') {
      *(float *)(unsigned)(ar4 + 0x58) = fVar3;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = in_xd0;
    }
    uVar2 = 3;
    if (cVar8 == '\0') {
      fVar3 = *(float *)(unsigned)(ar4 + 0x58);
    }
    if (cVar7 != '\0' || 1.0 <= fVar3) {
      *(undefined1 *)(unsigned)(ar4 + 0x54) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x5c) = (ulonglong)(uint)fVar3;
      }
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x58) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x58) = (ulonglong)(uint)fVar3;
      }
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c033d34(ar4,ar5_00,ar6,ar7));
      uVar2 = 4;
      *(undefined4 *)(unsigned)(ar4 + 0x70) = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _s_CAnimBody_SetFrame_033e6e\n.set _s_CAnimBody_SetFrame_033e6e, _s_CAnimBody_SetFrame_033e6e_def\n");
