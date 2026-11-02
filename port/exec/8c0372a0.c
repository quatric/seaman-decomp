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
undefined4 s_Tm1_Home_njd_0372a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Tm1_Home_njd_0372a2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 208; for (int i_ = 0; i_ < 208; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined **ar5_00;
  undefined1 *ar6_00;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar6 = 0; iVar6 < 5; iVar6 = iVar6 + 1) {
    *(unsigned *)(unsigned)(iVar6 * 0x124 + -0x73d8202c) = ((undefined1 *)(unsigned)0x8c27d1fc);
  }
  *(unsigned *)0x8c27dfd8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1336b8));
  *(unsigned *)0x8c27dfdc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133718));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe0) = (*(undefined4 *)(unsigned)(unsigned)0x8c133694);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336ac);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfe8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dfec) = (*(undefined4 *)(unsigned)(unsigned)0x8c133698);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336b4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff4) = (*(undefined4 *)(unsigned)(unsigned)0x8c13369c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27dff8) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e004) = 0x8c27eea4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e008) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e00c) = 2;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e018) = 0x8c27eebc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e01c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e020) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e02c) = 0x8c27eed4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e030) = (*(undefined4 *)(unsigned)(unsigned)0x8c1336a8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e034) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e040) = 0x8c27ef4c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e088) = 0x8c27fd30;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e08c) = 0x3f000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e090) = 0x3f800000;
  uVar4 = 0x8c27dfd4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e098) = (short)(int)(14400.0 / (0.5 / (*(undefined4 *)(unsigned)(unsigned)0x8c27e094)));
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e098) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e098) = 1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0a4) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0a8) = 0x43480000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0ac) = 0;
  ar6_00 = ((undefined1 *)(unsigned)0x8c27e0b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0b0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e0b4) = 0x41400000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e05c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13400c),((undefined1 *)(unsigned)0x8c27e0b0),0x8c27dfd4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e064,&(*(undefined4 *)(unsigned)(unsigned)0x8c13400c),ar6_00,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e074) = 0x8c27e5c0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e078) = 0x18;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e07c) = 0x8c27e62c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e080) = 0x18;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x14)),0x8c27e62c,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0cc,((undefined1 *)(fr0_ - 0x14)),ar6_00,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x14)),0xffffffff,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x20)),uVar1,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0d8,((undefined1 *)(fr0_ - 0x20)),ar6_00,uVar4));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x2c)),uVar1,ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e0e4,((undefined1 *)(fr0_ - 0x2c)),ar6_00,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,ar6_00,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0f4) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e0f4),0x42dc0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0c0) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e0c0),0x41c00000);
    dVar9 = CONCAT44D(0x3f000000,(*(undefined4 *)(unsigned)(unsigned)0x8c27e09c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0f4) = 0xec42dc0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e0c0) = 0xc841c00000;
    dVar9 = 3.99457418603154e-312;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e0a0),(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4));
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e09c) = uVar10;
  *(unsigned *)0x8c27e0fc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1337a0));
  *(unsigned *)0x8c27e100 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1337f8));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e104) = (*(undefined4 *)(unsigned)(unsigned)0x8c13377c);
  uVar4 = 0x134;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e108) = (*(undefined4 *)(unsigned)(unsigned)0x8c133794);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e10c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133798);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e110) = (*(undefined4 *)(unsigned)(unsigned)0x8c133780);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e114) = (*(undefined4 *)(unsigned)(unsigned)0x8c13379c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e118) = (*(undefined4 *)(unsigned)(unsigned)0x8c133784);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e11c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e128) = 0x8c27efc4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e12c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133788);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e130) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e13c) = 0x8c27f030;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e140) = (*(undefined4 *)(unsigned)(unsigned)0x8c13378c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e144) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e150) = 0x8c27f09c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e154) = (*(undefined4 *)(unsigned)(unsigned)0x8c133790);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e158) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e164) = 0x8c27f114;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1ac) = 0x8c27fdd0;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = 0.55;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b0) = 0x3f0ccccd;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4) = 1.0;
    dVar9 = 5.493165366488029e-05;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4));
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e1b4),0x3f0ccccd);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8),fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)(unsigned)0x8c27e1be),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc),(*(undefined4 *)(unsigned)(unsigned)0x8c27e1b8)));
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = F32HI(dVar9) / F32LO(dVar9);
    dVar9 = CONCAT44D(fVar7,SUB84(dVar9,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = (short)(int)dVar9;
  }
  uVar1 = 0x8c27dfd4;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1bc) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = SUB84(dVar9,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = 0x437a0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1cc) = 0x437a0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4) = 0;
  }
  else {
    *(unsigned *)0x8c27e1dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c134050));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d8) = 0x41900000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1d4);
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e180,&(*(undefined4 *)(unsigned)(unsigned)0x8c134050),0x8c27dfd4,0x134); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xcc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e188,&(*(undefined4 *)(unsigned)(unsigned)0x8c134050),uVar1,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e198) = 0x8c27e698;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e19c) = 0x16;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1a0) = 0x8c27e6fc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1a4) = 0x16;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x38)),0x16,0x8c27dfd4,uVar4));
  uVar1 = 0x8c27e1f0;
  pcVar2 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e1f0,((undefined1 *)(fr0_ - 0x38)),((void *)0x8c023d8c),0x8c27e1f0));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x38)),0xffffffff,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x44)),((undefined1 *)(fr0_ - 0x44)),pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e1fc,((undefined1 *)(fr0_ - 0x44)),pcVar2,uVar1));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x44)),0xffffffff,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x50)),uVar4,pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e208,((undefined1 *)(fr0_ - 0x50)),pcVar2,uVar1));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x50)),0xffffffff,((undefined1 *)(fr0_ - 0x50)),uVar1));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e218) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e218),0x43200000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1e4) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e1e4),0x42200000);
    dVar9 = CONCAT44D(0x3f19999a,(*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e218) = 0x21043200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1e4) = 0x1ec42200000;
    dVar9 = 1.24825656389407e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e1c4),fVar7);
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e1c0) = uVar10;
  *(unsigned *)0x8c27e220 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133878));
  *(unsigned *)0x8c27e224 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1338d4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e228) = (*(undefined4 *)(unsigned)(unsigned)0x8c133854);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e22c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13386c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e230) = (*(undefined4 *)(unsigned)(unsigned)0x8c133870);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e234) = (*(undefined4 *)(unsigned)(unsigned)0x8c133858);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e238) = (*(undefined4 *)(unsigned)(unsigned)0x8c133874);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e23c) = (*(undefined4 *)(unsigned)(unsigned)0x8c13385c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e240) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e24c) = 0x8c27f18c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e250) = (*(undefined4 *)(unsigned)(unsigned)0x8c133860);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e254) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e260) = 0x8c27f240;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e264) = (*(undefined4 *)(unsigned)(unsigned)0x8c133864);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e268) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e274) = 0x8c27f2f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e278) = (*(undefined4 *)(unsigned)(unsigned)0x8c133868);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e27c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e288) = 0x8c27f36c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d0) = 0x8c27fe70;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 0.7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
  }
  uVar4 = 0x30c;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8));
  }
  else {
    in_xd0 = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc),(*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8));
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8),0x3f333333);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) - F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 - dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc),fVar7);
  }
  else {
    dVar9 = (double)CONCAT26((*(uint *)(unsigned)0x8c27e2e2),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0),(*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc)));
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) / F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 / dVar9,0);
  }
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x46610000,fVar7);
  }
  else {
    dVar9 = 1.05309328631423e-311;
  }
  if (cVar11 == '\0') {
    fVar7 = F32HI(dVar9) / F32LO(dVar9);
    dVar9 = CONCAT44D(fVar7,SUB84(dVar9,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = (short)(int)fVar7;
  }
  else {
    dVar9 = dVar9 / dVar9;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = (short)(int)dVar9;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e0) = 1;
  }
  if (cVar12 == '\0') {
    uVar1 = SUB84(dVar9,0);
  }
  else {
    uVar1 = 0x43660000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f0) = 0x43660000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2ec) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = (float)uVar1;
  }
  else {
    (*(uint *)(unsigned)0x8c27e300) = 0x300;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 0.92;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2fc) = 0x41ec0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d4) = 0x3f6b851f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2f8);
  Class_129920_m0_015248
            (0x8c27e2a4,&(*(undefined4 *)(unsigned)(unsigned)0x8c134094),((void *)0x8c015248),0x30c,(*(undefined4 *)(fr0_ - 0xcc)));
  ar5_00 = &(*(undefined4 *)(unsigned)(unsigned)0x8c134094);
  Class_129920_m0_015248
            (0x8c27e2ac,&(*(undefined4 *)(unsigned)(unsigned)0x8c134094),((void *)0x8c015248),uVar4,(*(undefined4 *)(fr0_ - 0xcc)));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2bc) = 0x8c27e760;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c0) = 0x17;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c4) = 0x8c27e7c8;
  uVar1 = 0x2f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2c8) = 0x17;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x5c)),ar5_00,0x2f4,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e314,((undefined1 *)(fr0_ - 0x5c)),uVar1,uVar4));
  uVar1 = 0xffffffff;
  pcVar2 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,((void *)0x8c014a34),uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x68)),uVar1,pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e320,((undefined1 *)(fr0_ - 0x68)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x68)),0xffffffff,pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x74)),((undefined1 *)(fr0_ - 0x74)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e32c,((undefined1 *)(fr0_ - 0x74)),pcVar2,uVar4));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x74)),0xffffffff,pcVar2,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e33c) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e33c),0x435c0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e308) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e308),0x42820000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e33c) = 0x334435c0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e308) = 0x31042820000;
  }
  uVar4 = 0x8c27dfd4;
  if (cVar12 == '\0') {
    dVar9 = CONCAT44D(0x3f4ccccd,(*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4));
  }
  else {
    dVar9 = 1.68963334622396e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4);
  }
  if (cVar11 == '\0') {
    fVar7 = F32LO(dVar9) * F32HI(dVar9);
  }
  else {
    fVar7 = SUB84(dVar9 * dVar9,0);
  }
  uVar10 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c27e2e8),fVar7);
    uVar10 = (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2e4) = uVar10;
  *(unsigned *)0x8c27e344 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133958));
  *(unsigned *)0x8c27e348 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133aec));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e34c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133934);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e350) = (*(undefined4 *)(unsigned)(unsigned)0x8c13394c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e354) = (*(undefined4 *)(unsigned)(unsigned)0x8c133950);
  uVar5 = 900;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e358) = (*(undefined4 *)(unsigned)(unsigned)0x8c133938);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e35c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133954);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e360) = (*(undefined4 *)(unsigned)(unsigned)0x8c13393c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e364) = 0x11;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e370) = 0x8c27f3e4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e374) = (*(undefined4 *)(unsigned)(unsigned)0x8c133940);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e378) = 0x11;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e384) = 0x8c27f4b0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e388) = (*(undefined4 *)(unsigned)(unsigned)0x8c133944);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e38c) = 10;
  uVar1 = 0x8c27dfd4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e398) = 0x8c27f57c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e39c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133948);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3a0) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3ac) = 0x8c27f5f4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3f4) = 0x8c27ff10;
  uVar10 = CONCAT44(0x3f800000,fVar7);
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e3fc) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e3fc),0x3f800000);
  }
  else {
    fVar7 = 240.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e3fc) = uVar10;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e414) = 0x43700000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e410) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e40c) = 0x3a1d4952;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e418) = 0.0;
    fVar8 = fVar7;
  }
  else {
    *(unsigned *)0x8c27e424 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8));
    fVar8 = 0.8;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e418) = fVar7;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e420) = 0x427e0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e41c) = 0x42600000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d4) = 0x3f4ccccd;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2dc) = 0x3f800000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e2d8) = fVar8;
  }
  ({ unsigned long ri0_ = (unsigned long)(0x8c27dfd4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e3c8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),0x8c27dfd4,900); });
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e3d0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),uVar1,uVar5); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e0) = 0x8c27e830;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e4) = 0x65;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3e8) = 0x8c27e9d0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e3ec) = 0x65;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x80)),0x414,((void *)0x8c023d68),uVar5));
  uVar3 = 0x8c27e438;
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e438,((undefined1 *)(fr0_ - 0x80)),0x8c27e438,uVar5));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,uVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x8c)),uVar1,uVar3,uVar5));
  uVar5 = 0x470;
  uVar3 = 0x8c27e444;
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e444,((undefined1 *)(fr0_ - 0x8c)),0x470,0x8c27e444));
  uVar1 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x98)),uVar1,uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e450,((undefined1 *)(fr0_ - 0x98)),uVar5,uVar3));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0x98)),0xffffffff,uVar5,uVar3));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e460) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e460),0x43660000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e42c) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e42c),0x42a00000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e460) = 0x45843660000;
    fVar8 = 80.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e42c) = 0x49442a00000;
  }
  *(unsigned *)0x8c27e468 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133ca8));
  *(unsigned *)0x8c27e46c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c133e3c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e470) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c84);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e474) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c9c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e478) = (*(undefined4 *)(unsigned)(unsigned)0x8c133ca0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e47c) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c88);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e480) = (*(undefined4 *)(unsigned)(unsigned)0x8c133ca4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e484) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c8c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e488) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e494) = 0x8c27f66c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e498) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c90);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e49c) = 0xf;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4a8) = 0x8c27f720;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c94);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4b0) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4bc) = 0x8c27f7d4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c133c98);
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4c4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e4d0) = 0x8c27f84c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e518) = 0x8c27ffb0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e520) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e520),0x3f800000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = fVar8;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = 270.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e520) = CONCAT44(0x3f800000,fVar8);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e538) = 0x43870000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e534) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e530) = 0x3a03126f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e53c) = 0.0;
  }
  else {
    *(unsigned *)0x8c27e548 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e544) = 0x42880000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e540) = 0x429a0000;
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e4ec,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),((void *)0x8c015248),uVar3); });
  ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 208)); Class_129920_m0_015248(0x8c27e4f4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1340d8),((void *)0x8c015248),uVar3); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e504) = 0x8c27eb70;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e508) = 0x65;
  uVar5 = 0x538;
  uVar1 = 0x8c27ed10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e50c) = 0x8c27ed10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e510) = 0x65;
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa4)),((undefined1 *)(fr0_ - 0xa4)),0x8c27ed10,0x538));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e55c,((undefined1 *)(fr0_ - 0xa4)),uVar1,uVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,uVar1,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb0)),uVar4,uVar1,uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e568,((undefined1 *)(fr0_ - 0xb0)),uVar1,uVar5));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xb0)),0xffffffff,((undefined1 *)(fr0_ - 0xb0)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xbc)),uVar4,((undefined1 *)(fr0_ - 0xbc)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), vec3_copy_8c023d8c(0x8c27e574,((undefined1 *)(fr0_ - 0xbc)),((undefined1 *)(fr0_ - 0xbc)),uVar5));
  (vsp = ((unsigned long)(fr0_ - 208)), object_dtor_delete(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,((void *)0x8c014a34),uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e584) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e584),0x43870000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e550) = CONCAT44((*(undefined1 *)(unsigned)0x8c27e550),0x42c80000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e584) = 0x56843870000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c27e550) = 0x8c27e59442c80000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e594) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e598) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e59c) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a0) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a4) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5a8) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5ac) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27e5b0) = 0;
  return 0xffffffff;
}

__asm__(".globl _s_Tm1_Home_njd_0372a2\n.set _s_Tm1_Home_njd_0372a2, _s_Tm1_Home_njd_0372a2_def\n");
