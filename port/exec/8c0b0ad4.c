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
undefined4 FUN_8c0b0ad4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b0ad4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 148; for (int i_ = 0; i_ < 148; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  float in_fr1 = 0;
  float fVar3;
  double dVar4;
  undefined8 in_xd0 = 0;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar2 = 1;
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  if (iVar1 == 0) {
    ar6 = 100;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), rand_range(ar4,0,100,ar7));
    if (iVar1 < 0x1e) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 0;
    }
    else if (iVar1 < 0x3c) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 1;
    }
    else if (iVar1 < 0x46) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 2;
    }
    else if (iVar1 < 0x5a) {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 4;
    }
    else {
      *(undefined4 *)(unsigned)(ar4 + 0x330) = 3;
    }
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
LAB_8c0b0b7c:
    uVar2 = *(undefined4 *)(unsigned)(ar4 + 0x330);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c034148(ar4 + 0xb0,uVar2,ar6,ar7));
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 1;
      }
      (vsp = ((unsigned long)(fr0_ - 148)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar2,ar6,ar7));
    }
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0xa0) = 0x3d4ccccd;
    }
    else {
      in_fr1 = 0.05;
      *(undefined8 *)(unsigned)(ar4 + 0xa0) = 0x8c03c3143d4ccccd;
    }
    (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c03c314(ar4,uVar2,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x2d0) = 0x3f800000;
      *(undefined4 *)(unsigned)(ar4 + 0x2cc) = 0x45bb8000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x2d0) = CONCAT44(0x3f800000,in_fr1);
      *(undefined8 *)(unsigned)(ar4 + 0x2cc) = 0x8045bb8000;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x20))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); FUN_8c0230f0(ar4 + 0x80,uVar2,ar6,ar7); });
    uVar2 = (vsp = ((unsigned long)(fr0_ - 148)), Vec3_length(((undefined1 *)(fr0_ - 0x20)),uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_assign(ar4 + 700,uVar2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    return 1;
  }
  if (iVar1 == 1) goto LAB_8c0b0b7c;
  if (iVar1 != 2) {
    return 1;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
  if ((iVar1 < 9) && (2 < iVar1)) {
                    
    switch(iVar1) {
    default:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 7) {
        uVar2 = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
      goto LAB_8c0b0dd2;
    case 5:
      break;
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,ar5,ar6,ar7));
  if (iVar1 == 7) {
    uVar2 = 0;
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
  }
LAB_8c0b0dd2:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 148)), FUN_8c023d04(ar4 + 0x80,ar4 + 700,ar6,ar7));
  if (iVar1 == 0) {
    return uVar2;
  }
  if (cVar6 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x2d0);
  }
  else {
    in_xd0 = *(undefined8 *)(unsigned)(ar4 + 0x2d0);
  }
  if (cVar5 == '\0') {
    in_fr1 = in_fr1 + 1.0;
  }
  else {
    in_fr1 = SUB84(CONCAT44D(0x3f800000,in_fr1) + CONCAT44D(0x3f800000,in_fr1),0);
  }
  (*(undefined8 *)(fr0_ - 0x90)) = in_xd0;
  if (cVar6 == '\0') {
    (*(undefined8 *)(fr0_ - 0x90)) = CONCAT44(ar4,in_fr1);
  }
  if (cVar6 == '\0') {
    *(undefined4 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x90))+4)) + 0x2d0) = (undefined4)(*(undefined8 *)(fr0_ - 0x90));
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 0x2cc),(undefined4)(*(undefined8 *)(fr0_ - 0x90)));
  }
  else {
    *(undefined8 *)(unsigned)((*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0x90))+4)) + 0x2d0) = (*(undefined8 *)(fr0_ - 0x90));
    dVar4 = *(double *)(unsigned)(ar4 + 0x2cc);
    in_xd0 = (*(undefined8 *)(fr0_ - 0x90));
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  (*(float *)(fr0_ - 0x54)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x54)) = (float)in_xd0;
    ((undefined4 *)(fr0_ - 0x50))[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  if (cVar5 == '\0') {
    dVar4 = CONCAT44D(1.0 - fVar3,fVar3);
  }
  else {
    dVar4 = CONCAT44D(0x3f800000,fVar3) - CONCAT44D(0x3f800000,fVar3);
  }
  fVar3 = F32HI(dVar4);
  (*(float *)(fr0_ - 0x58)) = fVar3;
  if (cVar6 != '\0') {
    (*(float *)(fr0_ - 0x58)) = SUB84(dVar4,0);
    (*(float *)(fr0_ - 0x54)) = fVar3;
  }
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x30))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_scale(ar4 + 0x80,&(*(float *)(fr0_ - 0x58)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x40))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_scale(ar4 + 700,&(*(float *)(fr0_ - 0x54)),ar6,ar7); });
  ({ unsigned long t0_ = (unsigned long)(((undefined4 *)(fr0_ - 0x50))); *(unsigned *)((((unsigned long)(fr0_ - 148)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 148)) - 8); Vec3_add(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x40)),ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_assign(ar4 + 0x80,((undefined4 *)(fr0_ - 0x50)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined4 *)(fr0_ - 0x50)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x40)),0xffffffff,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 148)), Vec3_dtor(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0b0ad4\n.set _FUN_8c0b0ad4, _FUN_8c0b0ad4_def\n");
