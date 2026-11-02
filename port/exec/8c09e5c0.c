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
undefined4 s_Mr3_Home_njd_09e5c2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Mr3_Home_njd_09e5c2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  float *pfVar2;
  undefined4 uVar3;
  int iVar4;
  float in_fr1 = 0;
  double dVar5;
  undefined8 in_xd0 = 0;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b270) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1d0) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1bc) = 0;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1cc) = 0;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c4) = 0;
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined ***)(unsigned)(iVar4 * 0x124 + -0x73d7b26c) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ab18);
    *(undefined ***)(unsigned)(iVar4 * 0x124 + -0x73d7b268) = &(*(undefined4 *)(unsigned)(unsigned)0x8c13ab54);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b264) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab04);
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b260) = 0;
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b25c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab10);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b258) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab08);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b254) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab14);
    *(unsigned *)(unsigned)(iVar4 * 0x124 + -0x73d7b250) = (*(undefined4 *)(unsigned)(unsigned)0x8c13ab0c);
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b24c) = 7;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b240) = 0x8c284ed0;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1bc) = 0x8c2850a8;
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1b4);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a4);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a0);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x3f800000;
    }
    else {
      *puVar1 = CONCAT44(0x3f800000,in_fr1);
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b19c);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x43340000;
    }
    else {
      *puVar1 = 0xa043340000;
    }
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1d0) = 0x8c284f30;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1cc) = 0xf;
    *(undefined4 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c8) = 0x8c284f78;
    *(undefined2 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1c4) = 0xf;
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b178,((undefined1 *)(fr0_ - 0x14)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x20)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b16c,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar3,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 48)), vec3_copy_8c023d8c(iVar4 * 0x124 + -0x73d7b160,((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    ar5 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 48)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6,ar7));
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b150);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x43160000;
    }
    else {
      *puVar1 = 0xec43160000;
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b184);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x41100000;
    }
    else {
      *puVar1 = 0xc841100000;
    }
    pfVar2 = (float *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a8);
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b1a8);
    if (cVar7 == '\0') {
      dVar5 = CONCAT44D(0x3e4ccccd,*(undefined4 *)(unsigned)puVar1);
    }
    else {
      in_xd0 = *puVar1;
      dVar5 = 4.92819431073484e-312;
    }
    if (cVar6 == '\0') {
      in_fr1 = F32LO(dVar5) * F32HI(dVar5);
    }
    else {
      in_fr1 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar7 == '\0') {
      *pfVar2 = in_fr1;
    }
    else {
      *(undefined8 *)(unsigned)pfVar2 = in_xd0;
    }
    puVar1 = (undefined8 *)(unsigned)(iVar4 * 0x124 + -0x73d7b188);
    if (cVar7 == '\0') {
      *(undefined4 *)(unsigned)puVar1 = 0x41e80000;
    }
    else {
      in_fr1 = 29.0;
      *puVar1 = 0x54f31fe341e80000;
    }
  }
  for (iVar4 = 0; iVar4 < 1; iVar4 = iVar4 + 1) {
    *(undefined2 *)(unsigned)(iVar4 * 0x10 + -0x73d7b140) = 0xffff;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b13c) = 1;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b138) = 0;
    *(undefined4 *)(unsigned)(iVar4 * 0x10 + -0x73d7b134) = 0;
  }
  return 1;
}

__asm__(".globl _s_Mr3_Home_njd_09e5c2\n.set _s_Mr3_Home_njd_09e5c2, _s_Mr3_Home_njd_09e5c2_def\n");
