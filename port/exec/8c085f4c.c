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
undefined4 s_gm1_Home_njd_085f50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_gm1_Home_njd_085f50";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 336; for (int i_ = 0; i_ < 336; i_++) z_[i_] = 0; }
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  code *pcVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  undefined8 in_xd0 = 0;
  char cVar11;
  char cVar12;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = (ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  cVar12 = '\0';
  cVar11 = '\0';
  for (iVar8 = 0; iVar8 < 8; iVar8 = iVar8 + 1) {
    *(unsigned *)(unsigned)(iVar8 * 0x124 + -0x73d7f04c) = ((undefined1 *)(unsigned)0x8c27d1fc);
  }
  *(unsigned *)0x8c280fb8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137b58));
  *(unsigned *)0x8c280fbc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137ba0));
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b34);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b4c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fc8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b50);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fcc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b38);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b54);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281068) = 0x8c283444;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = CONCAT44(0x3ca3d70a,(*(undefined4 *)(unsigned)(unsigned)0x8c28107c));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281084) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281088) = 0x42f00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28108c) = 0;
  uVar2 = 0xdc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281090) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281094) = 0x41100000;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28103c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13841c),0xdc,0x8c280fb4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c281044,&(*(undefined4 *)(unsigned)(unsigned)0x8c13841c),uVar2,0x8c281044); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b3c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fd8) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fe4) = 0x8c282160;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fe8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b40);
  (*(undefined4 *)(unsigned)(unsigned)0x8c280fec) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280ff8) = 0x8c282184;
  (*(undefined4 *)(unsigned)(unsigned)0x8c280ffc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b44);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281000) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28100c) = 0x8c2821a8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281010) = (*(undefined4 *)(unsigned)(unsigned)0x8c137b48);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281014) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281020) = 0x8c282220;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281054) = 0x8c28191c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281058) = 0x12;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28105c) = 0x8c281970;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281060) = 0x12;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x18)),0x12,0x8c28191c,0x8c282220));
  uVar5 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810ac,((undefined1 *)(fr0_ - 0x18)),((void *)0x8c023d8c),0x8c280fb4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x18)),0xffffffff,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x24)),uVar2,pcVar3,uVar5));
  uVar4 = 0x8c2810b8;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810b8,((undefined1 *)(fr0_ - 0x24)),0x8c2810b8,uVar5));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x24)),0xffffffff,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x30)),uVar2,uVar4,uVar5));
  uVar2 = 0x8c2810c4;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2810c4,((undefined1 *)(fr0_ - 0x30)),0x8c2810c4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,uVar2,uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810d4) = CONCAT44((*(undefined1 *)(unsigned)0x8c2810d4),0x42b40000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810a0) = CONCAT44((*(undefined1 *)(unsigned)0x8c2810a0),0x41600000);
    dVar10 = CONCAT44D(0x3f000000,(*(undefined4 *)(unsigned)(unsigned)0x8c28107c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810d4) = 0x12842b40000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2810a0) = 0xc841600000;
    dVar10 = -1.7008876239802676e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281080),(*(undefined4 *)(unsigned)(unsigned)0x8c281194));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c28107c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28107c) = uVar1;
  *(unsigned *)0x8c2810dc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137c10));
  *(unsigned *)0x8c2810e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137c60));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c04);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810ec) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c08);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c0c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2810fc) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281108) = 0x8c282298;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28110c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bf8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281110) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28111c) = 0x8c2822bc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281120) = (*(undefined4 *)(unsigned)(unsigned)0x8c137bfc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281124) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281130) = 0x8c2822e0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281134) = (*(undefined4 *)(unsigned)(unsigned)0x8c137c00);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281138) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281144) = 0x8c282358;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28118c) = 0x8c2834e4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = 0.75;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281190) = 0x3f400000;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281194) = 1.0;
    dVar10 = 0.0004882813655058271;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281198) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281194));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281194),0x3f400000);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281198),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28119e),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c28119c),(*(undefined4 *)(unsigned)(unsigned)0x8c281198)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c28119c) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28119c) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = 0x430c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811ac) = 0x430c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a8) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2811a0));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4) = 0;
  }
  else {
    *(unsigned *)0x8c2811bc = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138460));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811b8) = 0x4179999a;
  uVar4 = 0x8c281160;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c2811b4);
  Class_129920_m0_015248
            (0x8c281160,&(*(undefined4 *)(unsigned)(unsigned)0x8c138460),((void *)0x8c015248),0x8c281160,(*(undefined4 *)(fr0_ - 0x14c)));
  uVar2 = 0x8c280fb4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c281168,&(*(undefined4 *)(unsigned)(unsigned)0x8c138460),0x8c280fb4,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c281178) = 0x8c2819c4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28117c) = 0x14;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281180) = 0x8c281a20;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281184) = 0x14;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x3c)),0x14,uVar2,uVar4));
  puVar6 = ((undefined1 *)(fr0_ - 0x3c));
  uVar4 = 0x8c280fb4;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(&(*(uint *)(unsigned)0x8c2811d0),puVar6,0x8c280fb4,puVar6));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x3c)),0xffffffff,uVar4,puVar6));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x48)),uVar2,uVar4,puVar6));
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2811dc,((undefined1 *)(fr0_ - 0x48)),uVar4,((void *)0x8c023d8c)));
  uVar2 = 0xffffffff;
  puVar6 = ((undefined1 *)(fr0_ - 0x48));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x54)),uVar2,puVar6,pcVar3));
  puVar6 = ((undefined1 *)(fr0_ - 0x54));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2811e8,puVar6,puVar6,pcVar3));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x54)),0xffffffff,puVar6,pcVar3));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811f8) = CONCAT44((*(undefined1 *)(unsigned)0x8c2811f8),0x42c80000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811c8) = 0x43938000;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811f8) = 0x21442c80000;
    (*(uint *)(unsigned)0x8c2811d0) = 0x210;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811c8) = 0x1ec;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811cc) = 0x43960000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811c4) = 0x41b00000;
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2811a0));
  }
  else {
    dVar10 = 1.24825739279838e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2811a4),(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2811a0) = uVar1;
  *(unsigned *)0x8c281200 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137cd8));
  *(unsigned *)0x8c281204 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137d44));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281208) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cb4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28120c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137ccc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281210) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cd0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281214) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cb8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281218) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cd4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28121c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cbc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281220) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28122c) = 0x8c2823d0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281230) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281234) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281240) = 0x8c282418;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281244) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281248) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281254) = 0x8c282460;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281258) = (*(undefined4 *)(unsigned)(unsigned)0x8c137cc8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28125c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281268) = 0x8c2824d8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812b0) = 0x8c283584;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = 0.85;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812b4) = 0x3f59999a;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812b8) = 1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812bc) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
  }
  puVar6 = ((undefined1 *)(unsigned)0x8c2812b4);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f59999a,(*(undefined4 *)(unsigned)(unsigned)0x8c2812b8));
  }
  else {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2812b8),0x3f59999a);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2812bc),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c2812c2),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c2812c0),(*(undefined4 *)(unsigned)(unsigned)0x8c2812bc)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 1.0361173199865e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c0) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = 0x430c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812d0) = 0x430c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812cc) = 0x3f4ccccd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = CONCAT44(0x3ca3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2812c4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812d4) = 0;
  }
  else {
    *(unsigned *)0x8c2812e0 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812dc) = 0x41b40000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812d8) = 0xbfa66666;
  pcVar3 = ((void *)0x8c015248);
  Class_129920_m0_015248
            (0x8c281284,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4),((void *)0x8c015248),((undefined1 *)(unsigned)0x8c2812b4),(*(undefined4 *)(fr0_ - 0x14c)));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28128c,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384a4),pcVar3,puVar6); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c28129c) = 0x8c281a7c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a0) = 0x1b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a4) = 0x8c281af4;
  uVar4 = 0x1b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812a8) = 0x1b;
  puVar6 = ((undefined1 *)(fr0_ - 0x60));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(puVar6,0x8c281af4,puVar6,0x1b));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(&(*(uint *)(unsigned)0x8c2812f4),((undefined1 *)(fr0_ - 0x60)),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x6c)),((void *)0x8c023d68),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281300,((undefined1 *)(fr0_ - 0x6c)),puVar6,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x78)),uVar2,puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28130c,((undefined1 *)(fr0_ - 0x78)),puVar6,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x78)),0xffffffff,puVar6,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28131c) = CONCAT44((*(undefined1 *)(unsigned)0x8c28131c),0x430c0000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812ec) = 0x43938000;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28131c) = 0x338430c0000;
    (*(uint *)(unsigned)0x8c2812f4) = 0x334;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812ec) = 0x310;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812f0) = 0x43960000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812e8) = 0x42040000;
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2812c4));
  }
  else {
    dVar10 = 1.86788016376024e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2812c8),fVar9);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2812c4) = uVar1;
  *(unsigned *)0x8c281324 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137e08));
  *(unsigned *)0x8c281328 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137e78));
  (*(undefined4 *)(unsigned)(unsigned)0x8c28132c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281330) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281334) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281338) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28133c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dfc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281340) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281344) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281350) = 0x8c282550;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281354) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281358) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281364) = 0x8c2825bc;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281368) = (*(undefined4 *)(unsigned)(unsigned)0x8c137ddc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28136c) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281378) = 0x8c2827d8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28137c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281380) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28138c) = 0x8c282850;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813d4) = 0x8c283624;
  if (cVar12 == '\0') {
    dVar10 = 5.004884578511337e-05;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e0) = 0x430;
    in_xd0 = 0x4303f2e147b;
    dVar10 = 0.00022949223013711163;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813dc) = 0x3f2e147b;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813d8) = 0x3f0a3d71;
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c2813e0),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c2813e6),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c2813e4),(*(undefined4 *)(unsigned)(unsigned)0x8c2813e0)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.29233882823794e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e4) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813f4) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813f0) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = CONCAT44(0x3a1d4952,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c2813e8));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813f8) = 0;
  }
  else {
    *(unsigned *)0x8c281404 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281400) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813fc) = 0x3f400000;
  uVar4 = 0x8c280fb4;
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c2813a8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((undefined1 *)(unsigned)0x8c2813f4),0x8c280fb4); });
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c2813b0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),0x3fc,uVar4); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c0) = 0x8c281b6c;
  uVar2 = 0x410;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c4) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813c8) = 0x8c281be8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813cc) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x84)),0x418,0x410,uVar4));
  uVar5 = 0x464;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281418,((undefined1 *)(fr0_ - 0x84)),uVar2,0x464));
  uVar4 = 0xffffffff;
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x84)),0xffffffff,0xffffffff,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x90)),uVar2,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281424,((undefined1 *)(fr0_ - 0x90)),uVar4,uVar5));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x90)),0xffffffff,uVar4,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x9c)),uVar2,uVar4,uVar5));
  uVar2 = 0x8c281430;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281430,((undefined1 *)(fr0_ - 0x9c)),0x8c281430,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,uVar2,uVar5));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281440) = CONCAT44((*(undefined1 *)(unsigned)0x8c281440),0x43160000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c28140c) = CONCAT44((*(undefined1 *)(unsigned)0x8c28140c),0x427c0000);
    dVar10 = CONCAT44D(0x3f333333,(*(undefined4 *)(unsigned)(unsigned)0x8c2813e8));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281440) = 0x45843160000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28140c) = 0x434427c0000;
    dVar10 = 2.48750293472209e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c2813ec),(*(undefined4 *)(unsigned)(unsigned)0x8c281500));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2813e8) = uVar1;
  *(unsigned *)0x8c281448 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137ee8));
  *(unsigned *)0x8c28144c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137f58));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281450) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281454) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281458) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28145c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dbc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281460) = (*(undefined4 *)(unsigned)(unsigned)0x8c137e00);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281464) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dcc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281468) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281474) = 0x8c282628;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281478) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28147c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281488) = 0x8c282694;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28148c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281490) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28149c) = 0x8c2828c8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137de8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814a4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814b0) = 0x8c282940;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814f8) = 0x8c283624;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = 0.68;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814fc) = 0x3f2e147b;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281500) = 1.0;
    dVar10 = 0.0002294922303462954;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281504) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281500));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281500),0x3f2e147b);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281504),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28150a),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281508),(*(undefined4 *)(unsigned)(unsigned)0x8c281504)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 2.9119615991998e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = (short)(int)dVar10;
  }
  iVar8 = (int)(*(undefined4 *)(unsigned)(unsigned)0x8c281508);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281508) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281508) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281518) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281514) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = CONCAT44(0x3a03126f,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c28150c));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28151c) = 0;
  }
  else {
    *(unsigned *)0x8c281528 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281524) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281520) = 0x3f400000;
  pcVar3 = ((void *)0x8c015248);
  Class_129920_m0_015248
            (0x8c2814cc,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((void *)0x8c015248),iVar8,(*(undefined4 *)(fr0_ - 0x14c)));
  Class_129920_m0_015248
            (0x8c2814d4,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),pcVar3,((void *)0x8c015248),(*(undefined4 *)(fr0_ - 0x14c)));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814e4) = 0x8c281c64;
  uVar2 = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814e8) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814ec) = 0x8c281ce0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2814f0) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xa8)),0x8c280fb4,0x1c,0x8c281c64));
  pcVar7 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28153c,((undefined1 *)(fr0_ - 0xa8)),uVar2,((void *)0x8c023d8c)));
  pcVar3 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xa8)),0xffffffff,((void *)0x8c014a34),pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xb4)),((undefined1 *)(fr0_ - 0xb4)),pcVar3,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281548,((undefined1 *)(fr0_ - 0xb4)),((void *)0x8c023d8c),pcVar7));
  puVar6 = ((undefined1 *)(fr0_ - 0xb4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(puVar6,0xffffffff,puVar6,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc0)),((undefined1 *)(fr0_ - 0xc0)),puVar6,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281554,((undefined1 *)(fr0_ - 0xc0)),((void *)0x8c023d8c),pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc0)),0xffffffff,((undefined1 *)(fr0_ - 0xc0)),pcVar7));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281564) = CONCAT44((*(undefined1 *)(unsigned)0x8c281564),0x43160000);
    (*(undefined4 *)(unsigned)(unsigned)0x8c281530) = CONCAT44((*(undefined1 *)(unsigned)0x8c281530),0x427c0000);
    dVar10 = CONCAT44D(0x3f666666,(*(undefined4 *)(unsigned)(unsigned)0x8c28150c));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281564) = 0x8c280fb443160000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281530) = 0x558427c0000;
    dVar10 = 3.10712736349307e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c28150c);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281510),(*(undefined4 *)(unsigned)(unsigned)0x8c281620));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c28150c);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28150c) = uVar1;
  *(unsigned *)0x8c28156c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c137fc8));
  *(unsigned *)0x8c281570 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138038));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281574) = (*(undefined4 *)(unsigned)(unsigned)0x8c137db4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281578) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28157c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281580) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dc0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281584) = (*(undefined4 *)(unsigned)(unsigned)0x8c137e04);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281588) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28158c) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281598) = 0x8c282700;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28159c) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dd8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815a0) = 9;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815ac) = 0x8c28276c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815b0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137dec);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815b4) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c0) = 0x8c2829b8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137df0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815c8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2815d4) = 0x8c282a30;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28161c) = 0x8c283624;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281620) = 1.0;
    dVar10 = 0.007812501854205038;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281628) = 0x678;
    in_xd0 = 0x6783fb5c28f;
    dVar10 = CONCAT44D(0x3fb5c28f,(*(undefined4 *)(unsigned)(unsigned)0x8c281620));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281624) = 0x3fb5c28f;
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281628),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c28162e),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c28162c),(*(undefined4 *)(unsigned)(unsigned)0x8c281628)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 3.53158437016166e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c28162c) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28162c) = 1;
  }
  if (cVar12 == '\0') {
    uVar2 = SUB84(dVar10,0);
  }
  else {
    uVar2 = 0x435c0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28163c) = 0x435c0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281638) = 0x3e99999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281634) = 0x3a03126f;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281640) = 0;
    uVar4 = uVar2;
  }
  else {
    uVar4 = 0x42630000;
    *(unsigned *)0x8c28164c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281640) = uVar2;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281648) = 0x42630000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281644) = 0x3f400000;
  Class_129920_m0_015248
            (0x8c2815f0,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((undefined1 *)(unsigned)0x8c281624),((void *)0x8c015248),(*(undefined4 *)(fr0_ - 0x14c)));
  uVar2 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c015248);
  (vsp = ((unsigned long)(fr0_ - 336)), Class_129920_m0_015248(0x8c2815f8,&(*(undefined4 *)(unsigned)(unsigned)0x8c1384e8),((void *)0x8c015248),0x8c280fb4));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281608) = 0x8c281d5c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28160c) = 0x1c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281610) = 0x8c281dd8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281614) = 0x1c;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xcc)),0x65c,pcVar3,uVar2));
  uVar5 = 0x8c281660;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281660,((undefined1 *)(fr0_ - 0xcc)),((void *)0x8c023d8c),0x8c281660));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xcc)),0xffffffff,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xd8)),uVar2,pcVar3,uVar5));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28166c,((undefined1 *)(fr0_ - 0xd8)),pcVar3,uVar5));
  uVar2 = 0xffffffff;
  pcVar7 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,pcVar3,((void *)0x8c014a34)));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xe4)),uVar2,((void *)0x8c023d68),pcVar7));
  uVar2 = 0x8c281678;
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281678,((undefined1 *)(fr0_ - 0xe4)),0x8c281678,pcVar7));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,uVar2,pcVar7));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281654) = CONCAT44((*(undefined1 *)(unsigned)0x8c281654),0x427c0000);
  }
  else {
    uVar4 = 0x427c0000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281654) = 0x558427c0000;
  }
  *(unsigned *)0x8c281690 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c1380d0));
  *(unsigned *)0x8c281694 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138174));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281698) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380ac);
  (*(undefined4 *)(unsigned)(unsigned)0x8c28169c) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816a8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380cc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816ac) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b4);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816b0) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816bc) = 0x8c282aa8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380b8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816c4) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d0) = 0x8c282b44;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d4) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380bc);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816d8) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816e4) = 0x8c282be0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c1380c0);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816ec) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2816f8) = 0x8c282c58;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281740) = 0x8c2836c4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = uVar4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = 0x3f5374bc;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281744) = 0x3f5374bc;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281748) = 0x3f800000;
    dVar10 = 0.0011874998435814632;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28174c) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c281748));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281748),0x3f5374bc);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c28174c),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c281752),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281750),(*(undefined4 *)(unsigned)(unsigned)0x8c28174c)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.15120714112352e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281750) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281750) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0x3e19999a;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c28175c) = 0x3e19999a;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = CONCAT44(0x3ba3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c281754));
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0x43b40000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281760) = 0x43b40000;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281764) = 0;
  }
  else {
    (*(uint *)(unsigned)0x8c281770) = 0x7c0;
    *(unsigned *)0x8c281778 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281774) = 0x41ec0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28176c) = 0x429f0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281768) = 0x3fd33333;
  Class_129920_m0_015248
            (0x8c281714,&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c),((void *)0x8c015248),0x8c280fb4,(*(undefined4 *)(fr0_ - 0x14c)));
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x14c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 336)); Class_129920_m0_015248(0x8c28171c,&(*(undefined4 *)(unsigned)(unsigned)0x8c13852c),0x8c280fb4,uVar2); });
  (*(undefined4 *)(unsigned)(unsigned)0x8c28172c) = 0x8c281e54;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281730) = 0x29;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281734) = 0x8c281f04;
  uVar4 = 0x784;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281738) = 0x29;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xf0)),0x29,0x784,uVar2));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281784,((undefined1 *)(fr0_ - 0xf0)),uVar4,uVar2));
  uVar4 = 0xffffffff;
  pcVar3 = ((void *)0x8c014a34);
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xf0)),0xffffffff,((void *)0x8c014a34),uVar2));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xfc)),uVar4,pcVar3,uVar2));
  uVar4 = 0x8c281790;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c281790,((undefined1 *)(fr0_ - 0xfc)),((void *)0x8c023d8c),0x8c281790));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0xfc)),0xffffffff,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x108)),uVar2,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c28179c,((undefined1 *)(fr0_ - 0x108)),pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x108)),0xffffffff,pcVar3,uVar4));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2817ac) = CONCAT44((*(undefined1 *)(unsigned)0x8c2817ac),0x437a0000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2817ac) = 0x7c4437a0000;
    (*(uint *)(unsigned)0x8c28177c) = 0x7a0;
  }
  *(unsigned *)0x8c281778 = (unsigned)(unsigned long)((undefined **)(unsigned)0x42e40000);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3fa66666,(*(undefined4 *)(unsigned)(unsigned)0x8c281754));
  }
  else {
    dVar10 = 4.3463749776783e-311;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c281754);
  }
  if (cVar11 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c281758),(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c281754);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281754) = uVar1;
  *(unsigned *)0x8c2817b4 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138240));
  *(unsigned *)0x8c2817b8 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138310));
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817bc) = (*(undefined4 *)(unsigned)(unsigned)0x8c13821c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c0) = (*(undefined4 *)(unsigned)(unsigned)0x8c138234);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c4) = (*(undefined4 *)(unsigned)(unsigned)0x8c138238);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817c8) = (*(undefined4 *)(unsigned)(unsigned)0x8c138220);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817cc) = (*(undefined4 *)(unsigned)(unsigned)0x8c13823c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817d0) = (*(undefined4 *)(unsigned)(unsigned)0x8c138224);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817d4) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e0) = 0x8c282cd0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c138228);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817e8) = 0xd;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817f4) = 0x8c282d6c;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817f8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13822c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c2817fc) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281808) = 0x8c282e08;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28180c) = (*(undefined4 *)(unsigned)(unsigned)0x8c138230);
  (*(undefined4 *)(unsigned)(unsigned)0x8c281810) = 10;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28181c) = 0x8c282e80;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281864) = 0x8c283764;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c28186c) = 1.0;
    dVar10 = 0.007812501848093234;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281870) = 0x3f800000;
    in_xd0 = CONCAT44(0x3f800000,(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c28186c),(*(undefined4 *)(unsigned)(unsigned)0x8c28186c));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) - F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 - dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c281870),fVar9);
  }
  else {
    dVar10 = (double)CONCAT26((*(uint *)(unsigned)0x8c281876),CONCAT24((*(undefined4 *)(unsigned)(unsigned)0x8c281874),(*(undefined4 *)(unsigned)(unsigned)0x8c281870)));
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) / F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 / dVar10,0);
  }
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x46610000,fVar9);
  }
  else {
    dVar10 = 4.77082991208538e-311;
  }
  if (cVar11 == '\0') {
    fVar9 = F32HI(dVar10) / F32LO(dVar10);
    dVar10 = CONCAT44D(fVar9,SUB84(dVar10,0));
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = (short)(int)fVar9;
  }
  else {
    dVar10 = dVar10 / dVar10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = (short)(int)dVar10;
  }
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c281874) == 0) {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281874) = 1;
  }
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = SUB84(dVar10,0);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0x3ba3d70a;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = CONCAT44(0x3ba3d70a,(int)(*(undefined4 *)(unsigned)(unsigned)0x8c281878));
  uVar2 = 0x8c280fb4;
  if (cVar12 != '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0x43be0000;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281884) = 0x43be0000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281880) = 0x3e19999a;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281888) = 0;
  }
  else {
    (*(uint *)(unsigned)0x8c281894) = 0x8e4;
    *(unsigned *)0x8c28189c = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c138570));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281898) = 0x42120000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281890) = 0x42c00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28188c) = 0x40000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281868) = (*(undefined4 *)(unsigned)(unsigned)0x8c28186c);
  Class_129920_m0_015248
            (0x8c281838,&(*(undefined4 *)(unsigned)(unsigned)0x8c138570),((void *)0x8c015248),0x8c280fb4,(*(undefined4 *)(fr0_ - 0x14c)));
  pcVar3 = ((void *)0x8c015248);
  (vsp = ((unsigned long)(fr0_ - 336)), Class_129920_m0_015248(0x8c281840,&(*(undefined4 *)(unsigned)(unsigned)0x8c138570),((void *)0x8c015248),uVar2));
  (*(undefined4 *)(unsigned)(unsigned)0x8c281850) = 0x8c281fb4;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281854) = 0x34;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281858) = 0x8c282090;
  uVar4 = 0x8a8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28185c) = 0x34;
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x114)),0x8c280fb4,pcVar3,0x8a8));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818a8,((undefined1 *)(fr0_ - 0x114)),0x8f4,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x114)),0xffffffff,((undefined1 *)(fr0_ - 0x114)),uVar4));
  pcVar3 = ((void *)0x8c023d68);
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),uVar2,((void *)0x8c023d68),uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818b4,((undefined1 *)(fr0_ - 0x120)),pcVar3,uVar4));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,pcVar3,uVar4));
  (vsp = ((unsigned long)(fr0_ - 336)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x12c)),uVar2,pcVar3,((void *)0x8c023d68)));
  uVar2 = 0x8c280fb4;
  pcVar3 = ((void *)0x8c023d8c);
  (vsp = ((unsigned long)(fr0_ - 336)), vec3_copy_8c023d8c(0x8c2818c0,((undefined1 *)(fr0_ - 0x12c)),((void *)0x8c023d8c),0x8c280fb4));
  (vsp = ((unsigned long)(fr0_ - 336)), object_dtor_delete(((undefined1 *)(fr0_ - 0x12c)),0xffffffff,pcVar3,uVar2));
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2818d0) = CONCAT44((*(undefined1 *)(unsigned)0x8c2818d0),0x43960000);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c2818d0) = 0x8e843960000;
    (*(uint *)(unsigned)0x8c2818a0) = 0x8c4;
  }
  *(unsigned *)0x8c28189c = (unsigned)(unsigned long)((undefined **)(unsigned)0x42fe0000);
  if (cVar12 == '\0') {
    dVar10 = CONCAT44D(0x3fc00000,(*(undefined4 *)(unsigned)(unsigned)0x8c281878));
  }
  else {
    dVar10 = -4.2070694879144825e-250;
    in_xd0 = (*(undefined4 *)(unsigned)(unsigned)0x8c281878);
  }
  if (cVar11 == '\0') {
    fVar9 = F32LO(dVar10) * F32HI(dVar10);
  }
  else {
    fVar9 = SUB84(dVar10 * dVar10,0);
  }
  uVar1 = in_xd0;
  if (cVar12 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = CONCAT44((*(undefined4 *)(unsigned)(unsigned)0x8c28187c),fVar9);
    uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c281878);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c281878) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e0) = 3;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818e8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818ec) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f0) = 6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f4) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818f8) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2818fc) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281900) = 0xffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281904) = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c281908) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c28190c) = 0;
  return 0x20;
}

__asm__(".globl _s_gm1_Home_njd_085f50\n.set _s_gm1_Home_njd_085f50, _s_gm1_Home_njd_085f50_def\n");
