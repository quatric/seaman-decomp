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
uint FUN_8c057e58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c057e58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  double dVar4;
  undefined8 in_dr4 = 0;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_set_zero(&(*(float *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 84)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c8),(*(undefined4 *)(fr0_ - 0x24)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x20)),(*(undefined4 *)(fr0_ - 0x24)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c8);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x18)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x18)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(*(undefined4 *)(fr0_ - 0x20)));
  }
  else {
    (*(float *)(fr0_ - 0x18)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x1c)),(*(undefined4 *)(fr0_ - 0x20)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2cc);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x14)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x14)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2d0),(*(undefined4 *)(fr0_ - 0x1c)));
  }
  else {
    (*(float *)(fr0_ - 0x14)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(float *)(fr0_ - 0x18)),(*(undefined4 *)(fr0_ - 0x1c)));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) - F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 - dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2c0),fVar3);
  }
  else {
    dVar4 = *(double *)(unsigned)(ar4 + 0x2c0);
  }
  if (cVar5 == '\0') {
    (*(float *)(fr0_ - 0x10)) = F32LO(dVar4) * F32HI(dVar4);
  }
  else {
    (*(float *)(fr0_ - 0x10)) = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x10)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0xc)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c023d8c(ar4 + 0x2c8,&(*(undefined4 *)(fr0_ - 0x24)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),&(*(float *)(fr0_ - 0x18)),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 84)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 84)) - 8); FUN_8c023484(ar4 + 0x14,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_assign(ar4 + 0x14,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), Vec3_length(ar4 + 0x14,uVar2,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 84)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 0;
    (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c023d7c(ar4 + 0x2c8,uVar2,ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 84)), object_dtor_delete(&(*(float *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  (*(uint *)(fr0_ - 0x50)) = (uint)(iVar1 != 1);
  return (*(uint *)(fr0_ - 0x50));
}

__asm__(".globl _FUN_8c057e58\n.set _FUN_8c057e58, _FUN_8c057e58_def\n");
