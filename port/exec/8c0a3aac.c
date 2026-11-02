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
undefined4 FUN_8c0a3aac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3aac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  float fVar5;
  code *pcVar6;
  undefined8 in_dr0 = 0;
  code *pcVar7;
  float fVar8;
  char cVar9;
  char cVar10;
  
  fVar5 = F32HI(in_dr0);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar4 = 1;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    ar7 = 0;
    ar6_00 = 0;
    uVar3 = 4;
    (vsp = ((unsigned long)(fr0_ - 44)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,4,0,0));
    *(undefined4 *)(unsigned)(ar4 + 0x274) = 1;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
  }
  else {
    uVar3 = ar5;
    ar6_00 = ar6;
    if (*(int *)(unsigned)(ar4 + 300) != 1) {
      return 1;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 44)), get_field_1c_026dd8(ar4 + 0xb0,uVar3,ar6_00,ar7));
  if (iVar1 == 4) {
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),uVar3,ar6_00,ar7));
    iVar1 = ar4 + 0x80;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); FUN_8c031eb0(ar4,ar5,ar6,iVar1); });
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_assign(ar4 + 0x80,((undefined1 *)(fr0_ - 0x28)),ar6,iVar1));
    (vsp = ((unsigned long)(fr0_ - 44)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,iVar1));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 44)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,iVar1));
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
    if (cVar10 == '\0') {
      pcVar7 = (code *)0x41200000;
    }
    else {
      fVar5 = 10.0;
      pcVar7 = ((void *)0x8c023d68);
    }
    if (cVar9 != '\0' || (float)(uint)pcVar7 <= fVar5) {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
      if (cVar10 == '\0') {
        pcVar6 = pcVar7;
        pcVar7 = (code *)0x42200000;
      }
      else {
        pcVar6 = (code *)0x42200000;
        pcVar7 = (code *)0x24c;
      }
      if (cVar9 == '\0' && (float)(uint)pcVar6 < (float)(uint)pcVar7) {
        iVar2 = *(int *)(unsigned)(ar4 + 0x24c);
        *(int *)(unsigned)(ar4 + 0x24c) = iVar2 + 1;
        *(int *)(unsigned)(ar4 + 0x24c) = iVar2 + 2;
        if (4 < *(int *)(unsigned)(ar4 + 0x24c)) {
          *(undefined4 *)(unsigned)(ar4 + 0x24c) = 5;
        }
      }
    }
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
    if (cVar10 == '\0') {
      fVar5 = 40.0;
    }
    else {
      pcVar7 = (code *)0x42200000;
      fVar5 = 8.23963e-43;
    }
    if ((cVar9 != '\0' || fVar5 <= (float)(uint)pcVar7) &&
       (*(int *)(unsigned)(ar4 + 0x24c) = *(int *)(unsigned)(ar4 + 0x24c) + -1, *(int *)(unsigned)(ar4 + 0x24c) < 3)) {
      *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
    }
    iVar2 = (vsp = ((unsigned long)(fr0_ - 44)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6,iVar1));
    if (iVar2 == 1) {
      uVar4 = 0;
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x24c) = 0;
    }
    else if (*(int *)(unsigned)(ar4 + 0x274) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 44)); CAnimBody_GetCurFrame(ar4 + 0xb0,uVar3,ar6,iVar1); });
      if (cVar10 == '\0') {
        fVar8 = 35.0;
      }
      else {
        fVar5 = 35.0;
        fVar8 = 6.50202e-43;
      }
      if (cVar9 != '\0' || fVar8 <= fVar5) {
        *(int *)(unsigned)(ar4 + 0x1d0) = *(int *)(unsigned)(ar4 + 0x1d0) + *(int *)(unsigned)(ar4 + 0x274);
        if (*(int *)(unsigned)(ar4 + 0x1d0) < 7) {
          if (*(int *)(unsigned)(ar4 + 0x1d0) < 2) {
            *(undefined4 *)(unsigned)(ar4 + 0x274) = 0;
          }
        }
        else {
          *(int *)(unsigned)(ar4 + 0x274) = -*(int *)(unsigned)(ar4 + 0x274);
        }
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar3,ar6_00,ar7));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c0a3aac\n.set _FUN_8c0a3aac, _FUN_8c0a3aac_def\n");
