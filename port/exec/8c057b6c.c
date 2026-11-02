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
undefined4 FUN_8c057b6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057b6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 104; for (int i_ = 0; i_ < 104; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar5;
  uint uVar6;
  undefined8 in_dr0 = 0;
  ulonglong uVar7;
  double dVar8;
  float fVar9;
  double in_dr14 = 0;
  undefined8 in_xd14 = 0;
  undefined8 uVar10;
  bool bVar11;
  char cVar12;
  char cVar13;
  
  cVar13 = '\0';
  cVar12 = '\0';
  (*(undefined4 *)(fr0_ - 0x10)) = 1;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); Vec3_sub(ar6,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_normalize(((undefined1 *)(fr0_ - 0x34)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x54))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar3,ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x64))); *(unsigned *)((((unsigned long)(fr0_ - 104)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 104)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x24)),uVar3,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6,ar7));
  uVar10 = in_dr0;
  if (cVar13 == '\0') {
    in_dr14 = CONCAT44D((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)in_dr0 >> 0x20));
    uVar10 = in_xd14;
  }
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6,ar7));
  uVar6 = (uint)in_dr0;
  uVar3 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c02a1fc(ar4 + 0x2c8,uVar3,ar6,ar7));
  uVar7 = (ulonglong)uVar6;
  if (cVar13 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x28) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x28) = uVar7;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 6;
  uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(fr0_ - 0x24)),ar6,ar7));
  *(undefined4 *)(unsigned)(ar4 + 0x27c) = uVar3;
  if (cVar13 == '\0') {
    dVar8 = CONCAT44D(0x420c0000,(int)uVar7);
  }
  else {
    dVar8 = 1.49443250242844e-311;
  }
  fVar9 = F32LO(in_dr14);
  if (cVar12 == '\0') {
    bVar11 = F32HI(dVar8) < fVar9;
  }
  else {
    bVar11 = dVar8 < in_dr14;
  }
  if (bVar11) {
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x42870000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 85899362951.0;
    }
    if (cVar12 == '\0') {
      bVar11 = F32HI(dVar8) < fVar9;
    }
    else {
      bVar11 = dVar8 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2c0) = 0x3f800000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = CONCAT44(0x3f800000,SUB84(dVar8,0));
      }
      iVar5 = 1;
    }
    else {
      if (cVar13 == '\0') {
        dVar8 = CONCAT44D(0x42340000,SUB84(dVar8,0));
      }
      else {
        dVar8 = -0.007812501926764526;
      }
      if (cVar12 == '\0') {
        fVar9 = fVar9 / F32HI(dVar8);
      }
      else {
        fVar9 = SUB84(in_dr14 / dVar8,0);
      }
      if (cVar13 == '\0') {
        *(float *)(unsigned)(ar4 + 0x2c0) = fVar9;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar10;
      }
      iVar5 = 1;
    }
  }
  else {
    if (cVar13 == '\0') {
      dVar8 = CONCAT44D(0x41a00000,SUB84(dVar8,0));
    }
    else {
      dVar8 = 3161096467456.0;
    }
    if (cVar12 == '\0') {
      fVar9 = fVar9 / F32HI(dVar8);
    }
    else {
      fVar9 = SUB84(in_dr14 / dVar8,0);
    }
    if (cVar13 == '\0') {
      *(float *)(unsigned)(ar4 + 0x2c0) = fVar9;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2c0) = uVar10;
    }
    iVar5 = 0;
  }
  if (*(int *)(unsigned)(ar4 + 0x27c) == 3) {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x41;
    (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), deref_u32(uVar1,uVar3,ar6_00,ar7_00));
    uVar1 = puVar2[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135ebc) + iVar5 * 0x18;
    }
    else {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c13600c) + iVar5 * 0x18;
    }
  }
  else {
    ar7_00 = 0;
    ar6_00 = 0xffffffff;
    iVar4 = iVar5 + 0x44;
    (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar4,0xffffffff,0));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c026db0(ar4,iVar4,ar6_00,ar7_00));
    uVar1 = (vsp = ((unsigned long)(fr0_ - 104)), FUN_8c03c0f0(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 104)), deref_u32(uVar1,uVar3,ar6_00,ar7_00));
    uVar1 = puVar2[1];
    *(undefined4 *)(unsigned)(ar4 + 0xb4) = *puVar2;
    *(undefined4 *)(unsigned)(ar4 + 0xb8) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0xbc) = puVar2[2];
    if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c135f04) + iVar5 * 0x18;
    }
    else {
      *(unsigned *)(unsigned)(ar4 + 0xb4) = ((undefined1 *)(unsigned)0x8c136054) + iVar5 * 0x18;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 104)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar3,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 104)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7_00));
  return 1;
}

__asm__(".globl _FUN_8c057b6c\n.set _FUN_8c057b6c, _FUN_8c057b6c_def\n");
