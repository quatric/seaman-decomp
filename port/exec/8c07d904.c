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
undefined4 FUN_8c07d904_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07d904";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 uVar3;
  float fVar4;
  ulonglong in_dr0 = 0;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if ((iVar1 < 5) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c031748(ar4,ar5,ar6,ar7));
      ar7 = 0;
      ar6 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
      ar5_00 = ((undefined1 *)(unsigned)0x8c125e68);
      uVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x220) = uVar2;
      if (*(int *)(unsigned)(ar4 + 0x220) == 3) {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c023d7c(ar4 + 0x254,ar5_00,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    case 1:
      fVar4 = (float)(in_dr0 >> 0x20);
      (vsp = ((unsigned long)(fr0_ - 60)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x18)),ar4 + 0x254,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x18)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 60)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (cVar7 == '\0') {
        fVar5 = 5.0;
      }
      else {
        fVar4 = 5.0;
        fVar5 = 9.24857e-43;
      }
      (vsp = ((unsigned long)(fr0_ - 60)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,ar6,ar7));
      if (cVar6 == '\0' && fVar4 < fVar5) {
        *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar3 = 0;
      }
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x2a4) = 1;
      uVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
      iVar1 = *(int *)(unsigned)(ar4 + 0x294);
      *(int *)(unsigned)(ar4 + 0x294) = iVar1 + 1;
      if (iVar1 + 1 < 0x12d) {
        if (*(int *)(unsigned)(ar4 + 0x2a8) == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          uVar3 = 0;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c03f39c(uVar2,ar5,ar6,ar7));
        *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      }
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c026db0(ar4,ar5,ar6,ar7));
      if (iVar1 == 0xb) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7));
        if (iVar1 == 1) {
          uVar2 = 0xb;
          (vsp = ((unsigned long)(fr0_ - 60)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,0xb,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c034148(ar4 + 0xb0,0xb,ar6,ar7));
      }
      break;
    case 4:
      uVar2 = ar5;
      (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 60)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
      if (cVar7 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (cVar6 != '\0' || (float)in_dr0 <= 0.0) {
        ar7_00 = 0;
        uVar2 = 0xffffffff;
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        (vsp = ((unsigned long)(fr0_ - 60)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,uVar2,ar7_00));
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        uVar3 = 0;
      }
    }
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2a8) = 0;
  return uVar3;
}

__asm__(".globl _FUN_8c07d904\n.set _FUN_8c07d904, _FUN_8c07d904_def\n");
