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
undefined4
FUN_8c21af36_def(undefined4 ar4,undefined4 *ar5,undefined4 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21af36";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 * ain0 = (undefined4 *)(unsigned long)vin0;
  undefined4 ain1 = (undefined4)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *in_r2 = 0;
  undefined1 *a4;
  uint ar5_00;
  undefined4 uVar1;
  undefined1 *a7;
  uint *unaff_r13 = 0;
  float fVar2;
  double in_dr2 = 0;
  double dVar3;
  undefined4 in_fr5 = 0;
  float in_fr4 = 0;
  char in_T = 0;
  bool bVar4;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  a7 = ((undefined1 *)(unsigned)0x8c4aad82);
  *in_r2 = ((void *)0x8c21a854);
  *ain0 = ain1;
  if (in_T == '\x01') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = 0;
  }
  else {
    fVar2 = (float)(int)ar5[1];
    in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar2);
    if ((int)ar5[1] < 0) {
      if (in_FPSCR_PR == '\0') {
        in_dr2 = CONCAT44D(0x4f800000,fVar2 + 4.2949673e+09);
      }
      else {
        in_dr2 = CONCAT44D(0x4f800000,fVar2) + CONCAT44D(0x4f800000,fVar2);
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar4 = in_fr4 < SUB84(in_dr2,0);
    }
    else {
      bVar4 = CONCAT44D(in_fr4,in_fr5) < in_dr2;
    }
    if (!bVar4) {
      return ain0;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad80) = *(ushort *)(unsigned)((int)ar5 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c0) = (ushort)((*(ushort *)(unsigned)((int)ar5 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) = *(ushort *)(unsigned)(ar5 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad48) = *ar5;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = (ulonglong)(uint)ar5[1] << 0x20;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aad58),in_fr4);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad54) = CONCAT44(in_fr4,in_fr5);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
  if (ar6 == (undefined4 *)(unsigned)0x0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = 0;
  }
  else {
    fVar2 = (float)(int)ar6[1];
    dVar3 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),fVar2);
    if ((int)ar6[1] < 0) {
      if (in_FPSCR_PR == '\0') {
        dVar3 = CONCAT44D(0x4f800000,fVar2 + 4.2949673e+09);
      }
      else {
        dVar3 = CONCAT44D(0x4f800000,fVar2) + CONCAT44D(0x4f800000,fVar2);
      }
    }
    if (in_FPSCR_PR == '\0') {
      bVar4 = in_fr4 < SUB84(dVar3,0);
    }
    else {
      bVar4 = CONCAT44D(in_fr4,in_fr5) < dVar3;
    }
    if (!bVar4) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad60) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aad5c) = 0;
      return 0xc;
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad86) = *(undefined2 *)(unsigned)(ar6 + 2);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad84) = *(ushort *)(unsigned)((int)ar6 + 10) & 0xff3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0c2) = (ushort)((*(ushort *)(unsigned)((int)ar6 + 10) & 0xc0) != 0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad64) = *ar6;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) = (ulonglong)(uint)ar6[1] << 0x20;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2759d8) = 0;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c4aad74),in_fr4);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aad70) = CONCAT44(in_fr4,in_fr5);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad78) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aad7c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa36c) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759dc))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad84)];
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa370) = ((void *)0x8c21ee94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa340) = (&(*(undefined4 *)(unsigned)(unsigned)0x8c2759a0))[(*(undefined4 *)(unsigned)(unsigned)0x8c4aad80)];
  uVar1 = 0x20;
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 1) == 0) {
    *(unsigned *)0x8c4aa344 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c21d108));
  }
  else {
    *(unsigned *)0x8c4aa344 = (unsigned)(unsigned long)(((void *)0x8c21ce02));
  }
  ar5_00 = (uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aad82);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 2) == 0) {
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 0x2000) == 0) {
      if ((*unaff_r13 & 0x20) == 0) {
        *(unsigned *)0x8c4aa348 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c21d112));
      }
      else {
        *(unsigned *)0x8c4aa348 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c21d11e));
      }
    }
    else {
      *(unsigned *)0x8c4aa348 = (unsigned)(unsigned long)(((void *)0x8c21d06c));
    }
  }
  else if ((*unaff_r13 & 0x20) == 0) {
    *(unsigned *)0x8c4aa348 = (unsigned)(unsigned long)(((void *)0x8c21cf22));
  }
  else {
    *(unsigned *)0x8c4aa348 = (unsigned)(unsigned long)(((void *)0x8c21cfd8));
  }
  a4 = ((undefined1 *)(unsigned)0x8c4aa350);
  if (((*(undefined4 *)(unsigned)(unsigned)0x8c4aad82) & 4) == 0) {
    *(unsigned *)0x8c4aa350 = (unsigned)(unsigned long)((code *)((void *)(unsigned)0x8c21d13c));
  }
  else {
    *(unsigned *)0x8c4aa350 = (unsigned)(unsigned long)(((void *)0x8c21ce92));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b4) = ((void *)0x8c21c2ea);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4ab0b8) = ((void *)0x8c21c398);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(((undefined1 *)(unsigned)0x8c4aa350),ar5_00,0x20,((undefined1 *)(unsigned)0x8c4aad82)));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(*(unsigned *)0x8c4aa338)))(a4,ar5_00,uVar1,a7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a942(unaff_r13,ar5_00,uVar1,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(unaff_r13,ar5_00,uVar1,a7));
  return uVar1;
}

__asm__(".globl _FUN_8c21af36\n.set _FUN_8c21af36, _FUN_8c21af36_def\n");
