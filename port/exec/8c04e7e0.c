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
undefined4 FUN_8c04e7e0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c04e7e0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_fr1 = 0;
  uint uVar5;
  double dVar6;
  double dVar7;
  double in_xd0 = 0;
  char cVar8;
  char cVar9;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 1;
  dVar7 = CONCAT44D(0x41200000,in_fr1);
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  do {
    iVar2 = *(int *)(unsigned)(ar4 + 300);
    if ((0xc < iVar2) || (iVar2 < 0)) goto switchD_8c04e828_caseD_4;
                    
    switch(iVar2) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x178))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),iVar1,ar6,ar7));
      if (cVar9 == '\0') {
        dVar6 = CONCAT44D(0x41a00000,(int)(D2U(dVar7) >> 0x20));
      }
      else {
        dVar6 = -0.007812501909938874;
        in_xd0 = dVar7;
      }
      dVar7 = dVar6;
      if (cVar8 != '\0' || F32HI(dVar6) <= SUB84(dVar6,0)) {
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 300) = 10;
      }
      break;
    case 1:
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 2:
      ar7 = 0;
      ar6 = -1;
      uVar3 = 0x10;
      (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
      uVar5 = SUB84(dVar7,0);
      (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar5;
      }
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
      goto switchD_8c04e828_caseD_4;
    case 3:
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c0230f0(ar4 + 0x14,iVar1,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),iVar1,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(unsigned)0x8c136594),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c031c74(ar4,((undefined1 *)(fr0_ - 0x54)),ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar5,ar7));
      uVar3 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c05ae54(ar4,uVar3,ar5,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar5,ar7));
      ar6 = ar5;
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      }
    default:
      goto switchD_8c04e828_caseD_4;
    case 10:
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(ar4 + 0x54,((undefined4 *)(unsigned)0x8c125be0),ar6,ar7));
      if (cVar9 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x54) = 0x450fc000;
        dVar7 = CONCAT44D(0x44688000,SUB84(dVar7,0));
        *(undefined4 *)(unsigned)(ar4 + 0x5c) = 0x44688000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x54) = 0x44688000450fc000;
        dVar7 = 6.286777928722e-312;
        *(undefined8 *)(unsigned)(ar4 + 0x5c) = 0x12844688000;
      }
      (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)) + 0x128))))(((int *)(unsigned long)*(unsigned *)(fr0_ + 0x00000000)),ar4 + 0x54,ar6,ar7));
      if (cVar9 == '\0') {
        dVar7 = CONCAT44D((int)(D2U(dVar7) >> 0x20),*(undefined4 *)(unsigned)(ar4 + 0x48));
      }
      else {
        in_xd0 = *(double *)(unsigned)(ar4 + 0x48);
      }
      if (cVar8 == '\0') {
        dVar7 = (double)(ulonglong)(uint)(F32LO(dVar7) + F32HI(dVar7));
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
      if (cVar9 == '\0') {
        *(int *)(unsigned)(ar4 + 0x58) = SUB84(dVar7,0);
      }
      else {
        *(double *)(unsigned)(ar4 + 0x58) = in_xd0;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 0xb:
      uVar5 = SUB84(dVar7,0);
      ar6 = ar4 + 0x54;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), pure_virtual_stub(ar4,ar5,ar6,ar7));
      if (iVar1 == 0) {
        ar7 = 0;
        ar6 = -1;
        uVar3 = 0x10;
        (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 88)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        if (cVar9 == '\0') {
          *(undefined4 *)(unsigned)(ar4 + 0x2c) = 0;
        }
        else {
          *(ulonglong *)(unsigned)(ar4 + 0x2c) = (ulonglong)uVar5;
        }
      }
switchD_8c04e828_caseD_4:
      (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
      return uVar4;
    case 0xc:
      (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c05ae54(ar4,iVar1,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar1,ar6,ar7));
      if (iVar1 == 1) {
        uVar4 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto switchD_8c04e828_caseD_4;
    }
  } while( true );
}

__asm__(".globl _FUN_8c04e7e0\n.set _FUN_8c04e7e0, _FUN_8c04e7e0_def\n");
