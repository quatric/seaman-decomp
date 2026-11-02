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
undefined4 FUN_8c10f41e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10f41e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined8 in_dr0 = 0;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  longlong lVar11;
  char cVar12;
  
  iVar4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,3,ar6,ar7));
  (*(float *)(fr0_ - 0x1c)) = (float)(int)(short)(int)F32HI(in_dr0);
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,4,ar6,ar7));
  uVar5 = (int)F32HI(in_dr0) & 0xffff;
  ar4[0xb] = uVar5;
  uVar1 = (uint)(*(ushort *)(unsigned)(*(int *)(unsigned)(uint)ar4[3] + 0xc) >> 2);
  ar4[10] = uVar1;
  if (uVar5 < uVar1) {
    uVar2 = 1;
  }
  else {
    if ((uint)ar4[10] < uVar5) {
      *(undefined1 *)(unsigned)(ar4 + 0xf) = 1;
      ar4[0x10] = (uVar5 - ar4[10]) * 4;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x10))))(iVar4,uVar5 << 2,ar6,ar7));
      ar4[0x11] = iVar4;
    }
    *(undefined2 *)(unsigned)(*(int *)(unsigned)(uint)ar4[4] + 0xc) = 4;
    *(short *)(unsigned)(*(int *)(unsigned)(ar4[4] + 4) + 0xc) = ((short)(uVar5 >> 1) + 1) * 4;
    uVar2 = 1;
    cVar12 = '\0';
    piVar3 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,1,ar6,ar7));
    fVar8 = F32HI(in_dr0);
    (*(float *)(fr0_ - 0x20)) = fVar8;
    if (cVar12 != '\0') {
      (*(float *)(fr0_ - 0x20)) = (float)in_dr0;
      (*(float *)(fr0_ - 0x1c)) = fVar8;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    fVar8 = fVar8 * (*(float *)(fr0_ - 0x20));
    fVar6 = (float)(int)(*(float *)(fr0_ - 0x1c)) * 2.0;
    fVar10 = 2.0;
    (*(float *)(fr0_ - 0x24)) = fVar6;
    (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7));
    if (cVar12 == '\0') {
      fVar8 = 2.1474836e+09;
    }
    fVar9 = fVar10;
    if (fVar8 < fVar10) {
      fVar9 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar9;
    ar4[0xc] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xc] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xc] = uVar1;
    uVar2 = 2;
    cVar12 = '\0';
    piVar3 = ar4;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,2,ar6,ar7));
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x24)) = fVar10;
    }
    cVar12 = '\0';
    fVar8 = (float)ar4[0xb];
    if (ar4[0xb] < 0) {
      fVar8 = fVar8 + 4.2949673e+09;
    }
    lVar7 = CONCAT44(0x3f7ff972,fVar6);
    fVar6 = (fVar8 * (*(float *)(fr0_ - 0x24))) / fVar6;
    (vsp = ((unsigned long)(fr0_ - 36)), thunk_FUN_8c013d28(piVar3,uVar2,ar6,ar7));
    fVar8 = F32HI(lVar7);
    lVar11 = lVar7;
    if (cVar12 == '\0') {
      fVar6 = 2.1474836e+09;
      lVar11 = (ulonglong)(uint)fVar8 << 0x20;
    }
    fVar10 = F32HI(lVar11);
    if (fVar6 < fVar8) {
      fVar10 = fVar10 + -4.2949673e+09;
    }
    uVar1 = (uint)fVar10;
    ar4[0xd] = uVar1;
    if (uVar1 == 0) {
      uVar1 = 0;
    }
    ar4[0xd] = uVar1;
    if (((uint)ar4[0xb] >> 1) - 1 <= uVar1) {
      uVar1 = ((uint)ar4[0xb] >> 1) - 2;
    }
    ar4[0xd] = uVar1;
    uVar5 = ar4[0xc];
    if (uVar5 < uVar1) {
      uVar5 = uVar1;
    }
    ar4[0xd] = uVar5;
    cVar12 = '\0';
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c120550(ar4,5,ar6,ar7));
    if (cVar12 == '\0') {
      ar4[0xe] = (int)((ulonglong)lVar7 >> 0x20);
    }
    else {
      *(longlong *)(unsigned)(ar4 + 0xe) = lVar7;
    }
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10f41e\n.set _FUN_8c10f41e, _FUN_8c10f41e_def\n");
