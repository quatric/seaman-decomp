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
undefined4 s_GRAPHICS_ENV_0e47de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e47de";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 124; for (int i_ = 0; i_ < 124; i_++) z_[i_] = 0; }
  int iVar1;
  int *ar7_00;
  undefined4 ar5_00;
  undefined **ar5_01;
  undefined *ar5_02;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  uint uVar6;
  undefined4 in_fr1 = 0;
  char cVar7;
  
  cVar7 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 124)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x3c)),uVar3,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x40)) = 0;
  (*(undefined4 *)(fr0_ - 0x44)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x40))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13ff83),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x44));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ff77),((undefined1 *)(unsigned)0x8c13ffa6),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c015ad4(ar4 + 0x30,(*(undefined4 *)(fr0_ - 0x40)),pcVar2,puVar4); });
  a7 = 8;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c239170(0x8c437598,0x8c4375a0,0x8c4312a8,8));
  for (uVar5 = 0; uVar5 < 8; uVar5 = uVar5 + 1) {
    *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc8a5c) = *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc8a5c) | 0x80000000;
  }
  ar5_00 = 0x8c437598;
  (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437598,uVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13ffc6),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 124)), report_error_message(((undefined1 *)(unsigned)0x8c13ffd3),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 124)), s_GRAPHICS_ENV_0d5ee6(ar4 + 0x15bc,ar5,pcVar2,uVar3));
  ar5_01 = &(*(undefined4 *)(unsigned)(unsigned)0x8c13f1a4);
  (vsp = ((unsigned long)(fr0_ - 124)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x10dc) + 8))))((int *)(unsigned)(ar4 + 0x10dc),&(*(undefined4 *)(unsigned)(unsigned)0x8c13f1a4),pcVar2,uVar3));
  ar7_00 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 124)), get_field_4_0253e4(ar4 + 0x10dc,ar5_01,pcVar2,uVar3));
  uVar5 = 0;
  while (uVar6 = uVar5, uVar6 < (uint)ar7_00[1]) {
    *(uint *)(unsigned)(uVar6 * 0xc + *ar7_00 + 4) = *(uint *)(unsigned)(uVar6 * 0xc + *ar7_00 + 4) | 0x80000000;
    (*(uint *)(fr0_ - 0x78)) = uVar6;
    uVar5 = uVar6 + 1;
  }
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fff5),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    ar7_00 = (int *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c140000),((undefined1 *)(unsigned)0x8c14001e),0,2);
  }
  ar5_02 = ((undefined1 *)(unsigned)0x8c13f268);
  ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x78))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 124)); FUN_8c015ad4(ar4 + 0x10e4,((undefined1 *)(unsigned)0x8c13f268),pcVar2,ar7_00); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c015bb8(ar4 + 0x10e4,ar5_02,pcVar2,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 124)), thunk_FUN_8c0151e8(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar1 + 4) + 4),0x17,pcVar2,ar7_00));
  *(int *)(unsigned)(ar4 + 0x10e8) = iVar1 + 4;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    uVar3 = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xc2700000;
    uVar3 = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x2c)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0xc2700000;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x34)) = 0;
    (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = 0;
    (*(undefined4 *)(fr0_ - 0x34)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x30)),ar4 + 0x10fc,&(*(undefined4 *)(fr0_ - 0x3c)),ar7_00));
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x2c)) = 0;
    (*(undefined4 *)(fr0_ - 0x34)) = uVar3;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x34)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x2c)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x28)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0xc2700000;
  if (cVar7 == '\0') {
    (*(undefined4 *)(fr0_ - 0x34)) = 0;
    (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(fr0_ - 0x2c));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x30)) = 0;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(fr0_ - 0x34));
  (vsp = ((unsigned long)(fr0_ - 124)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x30)),ar4 + 0x10ec,puVar4,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 124)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x3c)),0xffffffff,puVar4,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 124)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,puVar4,ar7_00));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e47de\n.set _s_GRAPHICS_ENV_0e47de, _s_GRAPHICS_ENV_0e47de_def\n");
