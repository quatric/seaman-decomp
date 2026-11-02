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
int FUN_8c0254d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0254d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);
  undefined4 s8 = *(undefined4 *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);
  undefined4 s16 = *(undefined4 *)(vsp + 16);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined8 *puVar2;
  undefined4 ar5_00;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0 = 0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar3 = ar4;
  ({ unsigned long t0_ = (unsigned long)(s4); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0f4040(ar4,ar5,ar6,s0); });
  *(unsigned *)(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c129a88);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar3,ar5,ar6,s0));
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar1,2,ar6,s0));
  ar5_00 = 0;
  uVar1 = ar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b9a8(ar4 + 0x174,0,ar7,ar7_00));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bfd8(ar4 + 0x174,ar5_00,uVar1,ar7_00));
  iVar3 = (int)(short)uVar1;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c034c50(ar4 + 0x2dc,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02b1dc(ar4 + 0x310,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x338,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c024848(ar4 + 0x344,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x480,iVar3,ar7,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02911c(ar4,iVar3,ar7,ar7_00));
  *(undefined4 *)(unsigned)(ar4 + 0x328) = s8;
  *(undefined4 *)(unsigned)(ar4 + 0x32c) = s12;
  *(undefined4 *)(unsigned)(ar4 + 0x410) = s16;
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xbc);
  if (cVar8 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x170) = *(undefined4 *)(unsigned)puVar2;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x170) = *puVar2;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xb8);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)(unsigned)puVar2;
    *(undefined4 *)(unsigned)(ar4 + 100) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar1;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar1;
  }
  else {
    uVar5 = *puVar2;
    *(undefined8 *)(unsigned)(ar4 + 100) = uVar5;
    *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar5;
    *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar5;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xe8);
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  puVar2 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + 0xec);
  if (cVar8 == '\0') {
    dVar6 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar7 == '\0') {
    fVar4 = F32LO(dVar6) * F32HI(dVar6);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar4;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0254d0\n.set _FUN_8c0254d0, _FUN_8c0254d0_def\n");
