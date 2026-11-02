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
undefined4 FUN_8c120f04_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c120f04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint a5;
  int a4;
  int a4_00;
  float fVar6;
  float in_fr13 = 0;
  undefined8 in_dr14 = 0;
  ulonglong uVar7;
  undefined8 in_xd14 = 0;
  int iVar8;
  char cVar9;
  
  cVar9 = '\0';
  a4 = *(int *)(unsigned)(ar4 + 0xfc);
  a4_00 = *(int *)(unsigned)(ar4 + 0x108);
  *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
  (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)((int *)(unsigned)(ar4 + 0x284)));
  *(undefined2 *)(unsigned)(ar4 + 0x2ac) = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4_00 + 8))))(a4_00,ar5,ar6,ar7));
  uVar2 = (undefined4)in_dr14;
  (*(uint *)(fr0_ - 0x34)) = 0;
  if (uVar1 != 0) {
    do {
      uVar3 = (*(uint *)(fr0_ - 0x34));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4_00 + 0x84))))(a4_00,(*(uint *)(fr0_ - 0x34)),ar6,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4_00 + 0x60))))(uVar2,uVar3,ar6,ar7));
      if (*(ushort *)(unsigned)(ar4 + 0x2ac) < uVar3) {
        *(short *)(unsigned)(ar4 + 0x2ac) = (short)uVar3;
      }
      piVar4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(0x14,ar4 + 0xf4,ar6,ar7));
      if (piVar4 == (int *)(unsigned)0x0) goto LAB_8c121104;
      *piVar4 = 0;
      piVar4[2] = 0;
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x30)) = (int)piVar4;
      iVar8 = uVar3 * *(ushort *)(unsigned)(ar4 + 0x288);
      iVar5 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c914(a4,iVar8 * 2,1,ar4 + 0xf4));
      *piVar4 = iVar5;
      if (iVar5 == 0) goto LAB_8c121104;
      ar6 = 1;
      piVar4[1] = iVar8;
      ar7 = ar4 + 0xf4;
      cVar9 = '\0';
      iVar5 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c914(a4,(uint)*(ushort *)(unsigned)(ar4 + 0x288) << 1,1,ar7));
      uVar2 = (undefined4)in_dr14;
      piVar4[2] = iVar5;
      if (iVar5 == 0) goto LAB_8c121104;
      piVar4[3] = (uint)*(ushort *)(unsigned)(ar4 + 0x288);
      (*(unsigned *)(fr0_ - 0x30) = (unsigned)(unsigned long)(piVar4 + 4));
      piVar4[4] = 0;
      (*(uint *)(fr0_ - 0x34)) = (*(uint *)(fr0_ - 0x34)) + 1;
    } while ((*(uint *)(fr0_ - 0x34)) < uVar1);
  }
  uVar3 = 0;
  if (cVar9 == '\0') {
    uVar2 = 0;
  }
  else {
    in_xd14 = 0x3f80000000000000;
  }
  if (cVar9 == '\0') {
    uVar7 = CONCAT44(0x3f800000,uVar2);
  }
  else {
    uVar7 = 0x4f8000003f800000;
  }
  uVar2 = (undefined4)uVar7;
  if (uVar1 != 0) {
    do {
      a5 = uVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4_00 + 0x84))))(a4_00,uVar3,ar6,ar7));
      cVar9 = '\0';
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4_00 + 0x60))))(uVar2,a5,ar6,ar7));
      if (cVar9 == '\0') {
        in_fr13 = *(float *)(unsigned)(ar4 + 0x2a0);
      }
      fVar6 = in_fr13;
      (vsp = ((unsigned long)(fr0_ - 52)), thunk_FUN_8c013dfc(uVar2,a5,ar6,ar7));
      cVar9 = '\0';
      uVar3 = uVar3 + 1;
      if ((float)uVar7 < -fVar6) {
        uVar7 = (ulonglong)(uint)-fVar6;
      }
      uVar2 = (undefined4)uVar7;
    } while (uVar3 < uVar1);
  }
  if (cVar9 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x2a4) = uVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x2a4) = in_xd14;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))((uint)*(ushort *)(unsigned)(ar4 + 0x2ac) << 2,ar4 + 0xf4,ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = uVar2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c11c914(a4,(uint)*(ushort *)(unsigned)(ar4 + 0x2ac),4,ar4 + 0xf4));
  *(undefined4 *)(unsigned)(ar4 + 0x29c) = uVar2;
  if ((*(int *)(unsigned)(ar4 + 0x2a8) == 0) || (*(int *)(unsigned)(ar4 + 0x29c) == 0)) {
LAB_8c121104:
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c120f04\n.set _FUN_8c120f04, _FUN_8c120f04_def\n");
