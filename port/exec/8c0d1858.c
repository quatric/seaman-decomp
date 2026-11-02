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
undefined4 FUN_8c0d1858_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1858";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 unaff_r14 = 0;
  undefined1 *puVar2;
  undefined4 *puVar3;
  undefined4 in_fr1 = 0;
  double dVar4;
  undefined8 in_dr4 = 0;
  float in_fr15 = 0;
  float fVar5;
  undefined4 in_fr14 = 0;
  undefined8 in_xd14 = 0;
  bool bVar6;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar2 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar2 + -4) = unaff_r14;
  *(undefined4 *)(unsigned)(puVar2 + -8) = in_PR;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = F32HI(in_dr4);
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)ar4,in_fr1);
    in_dr4 = in_xd14;
  }
  else {
    dVar4 = *ar4;
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 4),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 4);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffec1111;
      ar7 = 0xffec1111;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffec1111,0xffec1111); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 1),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[1];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0xc),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0xc);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffc8c800;
      ar7 = 0xffc8c800;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffc8c800,0xffc8c800); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 2),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[2];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x14),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x14);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xff00c1de;
      ar7 = 0xff00c1de;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xff00c1de,0xff00c1de); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 3),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[3];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x1c),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x1c);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = in_fr15 < F32HI(dVar4);
    }
    else {
      bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
    }
    if (bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffc8c800;
      ar7 = 0xffc8c800;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffc8c800,0xffc8c800); });
      goto LAB_8c0d1936;
    }
  }
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D(*(undefined4 *)(unsigned)(ar4 + 4),SUB84(dVar4,0));
  }
  else {
    dVar4 = ar4[4];
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  if (!bVar6) {
    if (in_FPSCR_SZ == '\0') {
      dVar4 = CONCAT44D(*(undefined4 *)(unsigned)((int)ar4 + 0x24),SUB84(dVar4,0));
    }
    else {
      dVar4 = *(double *)(unsigned)((int)ar4 + 0x24);
    }
    if (in_FPSCR_PR == '\0') {
      bVar6 = F32HI(dVar4) < in_fr15;
    }
    else {
      bVar6 = dVar4 < CONCAT44D(in_fr14,in_fr15);
    }
    if (!bVar6) {
      *(undefined4 *)(unsigned)(puVar2 + -0x2c) = 0xffcccccc;
      ar5 = 0xffcccccc;
      ar6 = 0xffec1111;
      ar7 = 0xffec1111;
      ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -0x2c)
                ); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0ba3b8))))
                (0x8c2b5628,0xffcccccc,0xffec1111,0xffec1111); });
    }
  }
LAB_8c0d1936:
  if (in_FPSCR_SZ == '\0') {
    dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0d19b8),SUB84(dVar4,0));
  }
  else {
    dVar4 = CONCAT44D((*(undefined1 *)(unsigned)0x8c0d19bc),(*(undefined1 *)(unsigned)0x8c0d19b8));
  }
  if (in_FPSCR_PR == '\0') {
    bVar6 = in_fr15 < F32HI(dVar4);
  }
  else {
    bVar6 = CONCAT44D(in_fr14,in_fr15) < dVar4;
  }
  fVar5 = in_fr15;
  if ((!bVar6) && (fVar5 = (*(undefined1 *)(unsigned)0x8c0d19bc), in_FPSCR_SZ != '\0')) {
    in_dr4 = CONCAT44((&(*(undefined1 *)(unsigned)0x8c13f7c0)),(*(undefined1 *)(unsigned)0x8c0d19bc));
    fVar5 = in_fr15;
  }
  if (in_FPSCR_SZ == '\0') {
    puVar3 = (undefined4 *)(unsigned)(puVar2 + -0x2c);
    *(float *)(unsigned)(puVar2 + -0x2c) = fVar5;
  }
  else {
    puVar3 = (undefined4 *)(unsigned)(puVar2 + -0x30);
    *(undefined8 *)(unsigned)(puVar2 + -0x30) = in_dr4;
  }
  puVar3[-1] = (&(*(undefined1 *)(unsigned)0x8c13f7c0)) + 0xf6;
  ({ unsigned long t0_ = (unsigned long)(puVar3[-1]); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c014334(puVar3 + 1,ar5,ar6,ar7); });
  *(undefined1 *)(unsigned)((int)puVar3 + 9) = 0;
  *puVar3 = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c0c4370(0x8c2b5628,puVar3 + 1,0,0xe));
  *puVar3 = 0xffffffff;
  uVar1 = ({ unsigned long t0_ = (unsigned long)(*puVar3); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c0ba3b8(0x8c2b5628,0xffffffff,0xffffffff,0xffffffff); });
  return uVar1;
}

__asm__(".globl _FUN_8c0d1858\n.set _FUN_8c0d1858, _FUN_8c0d1858_def\n");
