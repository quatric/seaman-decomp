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
undefined4 FUN_8c02702c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02702c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 a5_00;
  int ar6_00;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0 = 0;
  char cVar9;
  char cVar10;
  undefined2 uVar11;
  undefined4 uVar8;
  
  uVar11 = (undefined2)((uint)(*(undefined4 *)(fr0_ - 0x38)) >> 0x10);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  sVar1 = (short)uVar2;
  uVar8 = CONCAT22(uVar11,sVar1);
  iVar4 = *(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124;
  uVar2 = *(undefined4 *)(unsigned)(iVar4 + 0xa8);
  ar6_00 = (int)*(short *)(unsigned)(iVar4 + 0xa4);
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c027234(*(undefined4 *)(unsigned)(ar4 + 0x30c),*(undefined4 *)(unsigned)(iVar4 + 0xa0),ar6_00,uVar2));
  if ((*(uint *)(unsigned)(ar4 + 0x74) & 0x70) == 0x20) {
    (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02722c(*(undefined4 *)(unsigned)(ar4 + 0x30c),1,ar6_00,uVar2));
  }
  a5 = (int)sVar1;
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0x20))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5,ar6_00,uVar2));
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)) + 0x2c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30c)),a5,ar6_00,uVar2));
  *(undefined4 *)(unsigned)(ar4 + 0xa0) = *(undefined4 *)(unsigned)(iVar4 + 0xb4);
  a5_00 = *(undefined4 *)(unsigned)(ar4 + 0xa0);
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xa4)),a5_00,ar6_00,uVar2));
  ({ unsigned long ri0_ = (unsigned long)(uVar8); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c027224(*(undefined4 *)(unsigned)(ar4 + 0x30c),a5_00,ar6_00,uVar2); });
  (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0xa8) + 0x28))))((int *)(unsigned)(ar4 + 0xa8),ar4 + 0x30,ar6_00,uVar2));
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xbc);
  if (cVar10 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x170) = *(undefined4 *)(unsigned)puVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x170) = *puVar3;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xb8);
  if (cVar10 == '\0') {
    uVar8 = *(undefined4 *)(unsigned)puVar3;
    *(undefined4 *)(unsigned)(ar4 + 100) = uVar8;
    *(undefined4 *)(unsigned)(ar4 + 0x60) = uVar8;
    *(undefined4 *)(unsigned)(ar4 + 0x5c) = uVar8;
  }
  else {
    uVar6 = *puVar3;
    *(undefined8 *)(unsigned)(ar4 + 100) = uVar6;
    *(undefined8 *)(unsigned)(ar4 + 0x60) = uVar6;
    *(undefined8 *)(unsigned)(ar4 + 0x5c) = uVar6;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xe8);
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x5c),*(undefined4 *)(unsigned)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(unsigned)(ar4 + 0x5c);
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x408) = fVar5;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x408) = in_xd0;
  }
  puVar3 = (undefined8 *)(unsigned)(*(int *)(unsigned)(ar4 + 0x328) + sVar1 * 0x124 + 0xec);
  if (cVar10 == '\0') {
    dVar7 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x60),*(undefined4 *)(unsigned)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(unsigned)(ar4 + 0x60);
  }
  if (cVar9 == '\0') {
    fVar5 = F32LO(dVar7) * F32HI(dVar7);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(unsigned)(ar4 + 0x40c) = fVar5;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x40c) = in_xd0;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(unsigned)(ar4 + 0x478),ar6_00,uVar2));
  return uVar2;
}

__asm__(".globl _FUN_8c02702c\n.set _FUN_8c02702c, _FUN_8c02702c_def\n");
