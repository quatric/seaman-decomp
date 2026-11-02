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
undefined4 FUN_8c07f418_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c07f418";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  double dVar1;
  undefined8 in_xd0 = 0;
  undefined4 in_PR = 0;
  char cVar2;
  char cVar3;
  
  cVar3 = '\0';
  cVar2 = '\0';
  ar5_00 = ar5;
  (*(undefined4 *)(fr0_ - 0xc)) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(float *)(fr0_ - 0x24)),ar5_00,ar6,ar7));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); CAnimBody_GetCurFrame(ar4 + 0xb0,ar5_00,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c034650(ar4 + 0xb0,*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 0xb4) + 4),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c023d8c(&(*(undefined4 *)(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x30)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x254),(*(undefined4 *)(fr0_ - 0x18)));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x14)),(*(undefined4 *)(fr0_ - 0x18)));
    dVar1 = *(double *)(unsigned)(ar4 + 0x254);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x24)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x24)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 600),(*(undefined4 *)(fr0_ - 0x14)));
  }
  else {
    (*(float *)(fr0_ - 0x24)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0x10)),(*(undefined4 *)(fr0_ - 0x14)));
    dVar1 = *(double *)(unsigned)(ar4 + 600);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x20)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x20)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x25c),(*(undefined4 *)(fr0_ - 0x10)));
  }
  else {
    (*(float *)(fr0_ - 0x20)) = (float)in_xd0;
    in_xd0 = CONCAT44((*(undefined4 *)(fr0_ - 0xc)),(*(undefined4 *)(fr0_ - 0x10)));
    dVar1 = *(double *)(unsigned)(ar4 + 0x25c);
  }
  if (cVar2 == '\0') {
    (*(float *)(fr0_ - 0x1c)) = F32LO(dVar1) - F32HI(dVar1);
  }
  else {
    (*(float *)(fr0_ - 0x1c)) = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    (*(float *)(fr0_ - 0x1c)) = (float)in_xd0;
    (*(undefined4 *)(fr0_ - 0x18)) = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c023d8c(ar4 + 0x254,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), vec3_copy_8c02b5fc(((undefined1 *)(fr0_ - 0x3c)),&(*(float *)(fr0_ - 0x24)),ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x4c))); *(unsigned *)((((unsigned long)(fr0_ - 88)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 88)) - 8); FUN_8c023484(ar5,((undefined1 *)(fr0_ - 0x3c)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_assign(ar5,((undefined1 *)(fr0_ - 0x4c)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(float *)(fr0_ - 0x24)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  return ar5;
}

__asm__(".globl _FUN_8c07f418\n.set _FUN_8c07f418, _FUN_8c07f418_def\n");
