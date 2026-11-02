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
undefined4 FUN_8c0cac08_def(int ar4,undefined4 ar5,undefined4 ar6,float *ar7)

{
  ring[rp++ & 255] = "FUN_8c0cac08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 136; for (int i_ = 0; i_ < 136; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined4 in_fr1 = 0;
  double dVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  puVar3 = ((undefined1 *)(unsigned)0x8c4372ca);
  if ((*(undefined1 *)(unsigned)0x8c4372ca) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) = 0;
    (*(undefined1 *)(unsigned)0x8c4372ca) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4372ce) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372cc) = 0;
    (*(undefined1 *)(unsigned)0x8c4372ce) = '\x01';
  }
  puVar2 = ((undefined1 *)(unsigned)0x8c4372d2);
  if ((*(undefined1 *)(unsigned)0x8c4372d2) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372d0) = 0;
    puVar2 = (undefined1 *)(unsigned)0x1;
    (*(undefined1 *)(unsigned)0x8c4372d2) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4372d8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372d4) = 0;
    (*(undefined1 *)(unsigned)0x8c4372d8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4372e0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372dc) = 0;
    (*(undefined1 *)(unsigned)0x8c4372e0) = '\x01';
  }
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x1c)),puVar2,((undefined1 *)(unsigned)0x8c4372ca),ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x2c)),puVar2,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x3c)),puVar2,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0c84cc(((undefined1 *)(fr0_ - 0x5c)),puVar2,puVar3,ar7));
  if ((*(undefined1 *)(unsigned)0x8c4372e8) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372e4) =
         (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x144))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),puVar2,puVar3,ar7));
    (*(undefined1 *)(unsigned)0x8c4372e8) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c4372f0) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4372ec) = 0xaa;
    (*(undefined1 *)(unsigned)0x8c4372f0) = '\x01';
  }
  iVar1 = (int)*(short *)(unsigned)(ar4 + 0x2d1ac);
  if ((iVar1 < 8) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019384(0x8c436f4c,puVar2,puVar3,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4372cc) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c4372d0) = 0;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436a18) = 0xffffff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436a14) = 0xffffff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436a10) = 0xffffff;
      (*(undefined4 *)(unsigned)(unsigned)0x8c436a0c) = 0xffffff;
      ar7 = (float *)(unsigned)0x4;
      puVar3 = ((undefined1 *)(unsigned)0x8c436a0c);
      puVar2 = ((undefined1 *)(unsigned)0x8c4369ec);
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x84))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 136)); FUN_8c016318(0x8c436978,((undefined1 *)(unsigned)0x8c4369ec),((undefined1 *)(unsigned)0x8c436a0c),4); });
      (*(undefined4 *)(unsigned)(unsigned)0x8c4372dc) =
           (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x10c))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),puVar2,puVar3,ar7));
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar8 == '\0') {
        in_fr1 = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4372dc) + 0x14);
      }
      if (cVar7 == '\0') {
        dVar4 = CONCAT44D((float)(*(undefined4 *)(unsigned)(unsigned)0x8c4372ec),in_fr1);
      }
      else {
        dVar4 = (double)(*(undefined4 *)(unsigned)(unsigned)0x8c4372ec);
      }
      if (cVar7 == '\0' && F32HI(dVar4) < SUB84(dVar4,0)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4372d4) =
             (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xe4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),puVar2,puVar3,ar7));
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 2;
      }
      break;
    case 2:
      (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xe0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),puVar2,puVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc4))))
                (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),(*(undefined4 *)(unsigned)(unsigned)0x8c4372e4) >> 2,puVar3,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4372cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8);
      *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 3;
      break;
    case 3:
      (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xec))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),puVar2,puVar3,ar7));
      if ((4 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372cc)) &&
         ((int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372cc) < 0x88)) {
        puVar2 = (undefined1 *)(unsigned)0x2;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), libgcc_divide_helper_01031c((int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372cc),2,puVar3,ar7));
        if (iVar1 == 0) {
          (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019b38(0x8c436f4c,puVar2,puVar3,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019b48(0x8c436f4c,puVar2,puVar3,ar7));
        }
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0xf0))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),puVar2,puVar3,ar7));
      if (iVar1 == 1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) = 0;
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0cb1e0(0x8c436f4c,((undefined1 *)(fr0_ - 0x1c)),((undefined1 *)(fr0_ - 0x18)),((float *)(fr0_ - 0x14))));
        (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4) + 8) + 0x134))))
                  ((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4),((undefined1 *)(fr0_ - 0x3c)),((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x34))));
        ar7 = ((float *)(fr0_ - 0x24));
        puVar3 = ((undefined1 *)(fr0_ - 0x28));
        puVar2 = ((undefined1 *)(fr0_ - 0x2c));
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0507a4((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4),puVar2,puVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7));
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 4;
      }
      break;
    case 4:
      ar7 = ((float *)(fr0_ - 0x24));
      puVar3 = ((undefined1 *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0507a4((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4),((undefined1 *)(fr0_ - 0x2c)),puVar3,ar7));
      if (cVar8 == '\0') {
        fVar5 = 10.0;
      }
      else {
        ((float *)(fr0_ - 0x24))[0] = 10.0;
        fVar5 = 2.58887e-40;
      }
      if (cVar7 == '\0' && ((float *)(fr0_ - 0x24))[0] < fVar5) {
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019b58(0x8c436f4c,puVar2,puVar3,ar7));
      ar7 = ((float *)(fr0_ - 0x14));
      puVar3 = ((undefined1 *)(fr0_ - 0x18));
      puVar2 = ((undefined1 *)(fr0_ - 0x1c));
      (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0cb1e0(0x8c436f4c,puVar2,puVar3,ar7));
      if (cVar8 == '\0') {
        pcVar6 = (code *)0x426b3340;
      }
      else {
        ((float *)(fr0_ - 0x14))[0] = 58.80005;
        pcVar6 = ((void *)0x8c019560);
      }
      if (cVar7 == '\0' && ((float *)(fr0_ - 0x14))[0] < (float)(uint)pcVar6) {
        (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c019560(0x8c436f4c,puVar2,puVar3,ar7));
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 6;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4) + 8) + 0xfc))))((*(undefined4 *)(unsigned)(unsigned)0x8c4372d4),puVar2,puVar3,ar7));
      if (iVar1 == 1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c4372cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8);
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 7;
      }
      break;
    case 7:
      if (0x59 < (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) - (int)(*(undefined4 *)(unsigned)(unsigned)0x8c4372cc)) {
        *(undefined2 *)(unsigned)(ar4 + 0x2d1ac) = 0;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4372d4) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc4))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),(*(undefined4 *)(unsigned)(unsigned)0x8c4372e4) >> 2,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,((undefined1 *)(fr0_ - 0x5c)),ar7));
  puVar3 = ((undefined1 *)(fr0_ - 0x5c));
  (vsp = ((unsigned long)(fr0_ - 136)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x14))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),ar5,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Class_129a24_m1_019b68(0x8c436f4c,ar5,puVar3,ar7));
  (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c4372c8) + 1;
  (vsp = ((unsigned long)(fr0_ - 136)), FUN_8c0c8480(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,puVar3,ar7));
  (vsp = ((unsigned long)(fr0_ - 136)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,puVar3,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0cac08\n.set _FUN_8c0cac08, _FUN_8c0cac08_def\n");
