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
int FUN_8c0b0784_def(int ar4,undefined4 ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar5 = 1;
  piVar3 = ar6;
  piVar4 = ar7;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c03f480(ar5,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_ctor_copy(((int *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x38)),piVar3,piVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar3,piVar4));
  iVar1 = *(int *)(unsigned)(ar4 + 0x124);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      if (*(int *)(unsigned)(ar4 + 0x348) == 1) {
        piVar3 = ((int *)(fr0_ - 0x28));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3604(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
        piVar4 = ar6;
      }
      else if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b0ad4(ar4,uVar2,piVar3,piVar4));
        if (cVar9 == '\0') {
          dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
        }
        else {
          in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
          dVar7 = -8.36519102553774e-251;
        }
        if (cVar8 == '\0') {
          fVar6 = F32LO(dVar7) * F32HI(dVar7);
        }
        else {
          fVar6 = SUB84(dVar7 * dVar7,0);
        }
        if (cVar9 == '\0') {
          *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        }
        else {
          *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        }
      }
      else {
        piVar3 = ((int *)(fr0_ - 0x28));
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3604(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
        piVar4 = ar6;
      }
      if (iVar5 == 0) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
        piVar3 = (int *)(unsigned)0x64;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), rand_range(ar4,0,100,piVar4));
        if (iVar1 < 0x50) {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x324) = 1;
        }
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 60)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x128))))(ar7,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,piVar4));
      piVar3 = ((int *)(fr0_ - 0x28));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b3184(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar3,ar6));
      piVar4 = ar6;
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b5098(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar5,piVar4));
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c031c74(ar4,((int *)(fr0_ - 0x28)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),piVar4));
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      break;
    case 3:
      if (0 < *(int *)(unsigned)(ar4 + 0x314)) {
        *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      }
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b1ac0(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar6));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      piVar4 = ar6;
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 4:
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4d14(ar4,ar5,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004))));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      piVar4 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000));
      }
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4c7c(ar4,uVar2,piVar3,piVar4));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D(0x3f7d70a4,*(undefined4 *)(unsigned)(ar4 + 0x28));
      }
      else {
        in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x28);
        dVar7 = -8.36519102553774e-251;
      }
      if (cVar8 == '\0') {
        fVar6 = F32LO(dVar7) * F32HI(dVar7);
      }
      else {
        fVar6 = SUB84(dVar7 * dVar7,0);
      }
      if (cVar9 == '\0') {
        *(float *)(unsigned)(ar4 + 0x28) = fVar6;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x28) = in_xd0;
      }
      break;
    case 6:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b4ba0(ar4,uVar2,piVar3,piVar4));
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      if (*(int *)(unsigned)(ar4 + 0x314) < 2) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c0b0eec(ar4,((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004)),ar7));
        piVar3 = ((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000004));
        piVar4 = ar7;
      }
      else {
        iVar5 = 0;
      }
      break;
    case 8:
      *(undefined4 *)(unsigned)(ar4 + 0x214) = 0;
      piVar4 = (int *)(unsigned)0x0;
      piVar3 = (int *)(unsigned)0xffffffff;
      uVar2 = 5;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,piVar3,piVar4));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((int *)(fr0_ - 0x28)),0xffffffff,piVar3,piVar4));
  return iVar5;
}

__asm__(".globl _FUN_8c0b0784\n.set _FUN_8c0b0784, _FUN_8c0b0784_def\n");
