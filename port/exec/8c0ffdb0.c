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
undefined4 FUN_8c0ffdb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ffdb0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_10000_01ec68(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if ((((iVar1 == 0) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_is_mask_set_400_01ef20(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7)), iVar1 == 0))
      && (*(int *)(unsigned)(ar4 + 0x59c) == 0)) && (*(int *)(unsigned)(ar4 + 0x188) != 6)) {
    *(undefined4 *)(unsigned)(ar4 + 0x188) = 0;
  }
  if (((-1 < *(short *)(unsigned)(ar4 + 0x18c)) && (*(int *)(unsigned)(ar4 + 0x188) == 0)) &&
     ((*(short *)(unsigned)(ar4 + 0x18c) = *(short *)(unsigned)(ar4 + 0x18c) + -1, *(int *)(unsigned)(ar4 + 0x188) == 0 &&
      (*(short *)(unsigned)(ar4 + 0x18c) < 1)))) {
    *(undefined4 *)(unsigned)(ar4 + 0x188) = 6;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a538(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), input_get_word_a53c(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x42fe0000,(float)iVar1);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x14c) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x14c) = in_xd0;
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x42fe0000,(float)iVar2);
  }
  else {
    dVar4 = 7.13545887092076e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x150) = fVar3;
    dVar4 = CONCAT44D(0x41000000,*(undefined4 *)(unsigned)(ar4 + 0x14c));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x150) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x14c);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x13c) = fVar3;
    dVar4 = CONCAT44D(0x41000000,*(undefined4 *)(unsigned)(ar4 + 0x150));
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x13c) = in_xd0;
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x150);
    dVar4 = 6.79577441102687e-312;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    *(float *)(unsigned)(ar4 + 0x140) = fVar3;
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x140) = in_xd0;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f398(*(undefined4 *)(unsigned)(ar4 + 0xcc),ar5,ar6,ar7));
  if (iVar1 == 0) {
    *(short *)(unsigned)(ar4 + 0x18e) = *(short *)(unsigned)(ar4 + 0x18e) + 1;
  }
  else {
    *(undefined2 *)(unsigned)(ar4 + 0x18e) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1016f0(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0ffdb0\n.set _FUN_8c0ffdb0, _FUN_8c0ffdb0_def\n");
