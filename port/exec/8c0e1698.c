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
undefined4 s_GRAPHICS_ENV_0e16a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e16a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint a7;
  code *pcVar6;
  int *piVar7;
  code *ar7_00;
  uint uVar8;
  undefined4 in_fr1 = 0;
  char cVar9;
  
  cVar9 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 160)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 160)), Vec3_set_zero(((int *)(fr0_ - 0x38)) + 2,uVar3,ar6,ar7));
  ((int *)(fr0_ - 0x38))[1] = 0;
  ((int *)(fr0_ - 0x38))[0] = 0;
  (*(undefined4 *)(fr0_ - 0x3c)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 160)), report_error_message(((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13fe45),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 160)), report_error_message(((undefined1 *)(unsigned)0x8c13fdbf),((undefined1 *)(unsigned)0x8c13fe6b),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x30,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  uVar5 = 5;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c239170(0x8c437554,0x8c43755c,0x8c4312a8,5));
  for (uVar8 = 0; uVar8 < 5; uVar8 = uVar8 + 1) {
    uVar5 = 0x8c43755c;
    *(uint *)(unsigned)(uVar8 * 0xc + -0x73bc8aa0) = *(uint *)(unsigned)(uVar8 * 0xc + -0x73bc8aa0) | 0x80000000;
  }
  ar5_00 = 0x8c437554;
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437554,uVar3,uVar5));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,uVar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13fe91),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe9c),((undefined1 *)(unsigned)0x8c13fec0),0,2)
    ;
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fdc9),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x1074,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fde5),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x1078,((int *)(fr0_ - 0x38))[0],0x1078,puVar4); });
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))
                      ));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13fe45),0,
               2);
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x3c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe01),((undefined1 *)(unsigned)0x8c13fe6b),0,
               2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015ad4(ar4 + 0x107c,((int *)(fr0_ - 0x38))[0],pcVar2,puVar4); });
  a7 = 3;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c239170(ar4 + 0x1080,ar4 + 0x1088,0x8c4312a8,3));
  uVar8 = 0;
  while (uVar8 < 3) {
    *(uint *)(unsigned)(uVar8 * 0xc + ar4 + 0x108c) = *(uint *)(unsigned)(uVar8 * 0xc + ar4 + 0x108c) | 0x80000000;
    a7 = uVar8 + 1;
    uVar8 = a7;
  }
  iVar1 = ar4 + 0x1080;
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x106c) + 8))))((int *)(unsigned)(ar4 + 0x106c),iVar1,3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x106c,iVar1,((void *)0x8c0253e4),ar4 + 0x106c));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13feda),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13feea),((undefined1 *)(unsigned)0x8c13fec0),0,2
              );
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13f8cb),((int *)(fr0_ - 0x38))));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13fe45),0,2);
  }
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x3c))));
  if (iVar1 == 0) {
    pcVar2 = (char *)(unsigned)0x0;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe1d),((undefined1 *)(unsigned)0x8c13fe6b),0,2);
  }
  pcVar6 = ((void *)0x8c015ad4);
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c015ad4(ar4 + 0x226f8,((int *)(fr0_ - 0x38))[0],pcVar2,((void *)0x8c015ad4)));
  uVar3 = (*(undefined4 *)(fr0_ - 0x3c));
  uVar5 = (*(undefined4 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 160)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x226fc) + 8))))((int *)(unsigned)(ar4 + 0x226fc),(*(undefined4 *)(fr0_ - 0x3c)),(*(undefined4 *)(fr0_ - 0x3c)),pcVar6));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x226fc,uVar3,uVar5,pcVar6));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13ff14);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13ff14),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = ((undefined1 *)(unsigned)0x8c13fec0);
    report_error_message
              (((undefined1 *)(unsigned)0x8c13ff20),((undefined1 *)(unsigned)0x8c13fec0),0,2)
    ;
  }
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_4_0253e4(ar4 + 0x22d40,pcVar2,((void *)0x8c0253e4),uVar3));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13ff45),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13ff50),((undefined1 *)(unsigned)0x8c13fec0),0,2);
  }
  piVar7 = ((int *)(fr0_ - 0x38));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fe31),((undefined1 *)(unsigned)0x8c13f8cb),piVar7));
  if (iVar1 == 0) {
    piVar7 = (int *)(unsigned)0x2;
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fe31),((undefined1 *)(unsigned)0x8c13fe45),0,2);
  }
  uVar3 = 0x2274c;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0178b4(ar4 + 0x2274c,*(undefined4 *)(unsigned)(((int *)(fr0_ - 0x38))[0] + 4),0x2274c,piVar7));
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d0006(ar4 + 0x13b24,ar5,uVar3,piVar7));
  pcVar6 = ((void *)0x8c0d07ec);
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d07f2(ar4 + 0x13b70,ar5,uVar3,((void *)0x8c0d07ec)));
  uVar3 = 0x22704;
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_ENV_0d93b0(ar4 + 0x22704,ar5,0x22704,pcVar6));
  (vsp = ((unsigned long)(fr0_ - 160)), s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,uVar3,pcVar6));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    uVar3 = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0x80;
    uVar3 = 0xc23c0000;
    (*(undefined4 *)(fr0_ - 0x20)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  ((int *)(fr0_ - 0x38))[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
  }
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x227d0,((int *)(fr0_ - 0x38)) + 2,pcVar6));
  if (cVar9 != '\0') {
    uVar3 = 0x423c0000;
  }
  ((int *)(fr0_ - 0x38))[2] = 0x423c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar3;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x24));
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(puVar4,ar4 + 0x227e0,((int *)(fr0_ - 0x38)) + 2,puVar4));
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    uVar5 = uVar3;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0x80;
    uVar5 = 0xc23c0000;
    (*(undefined4 *)(fr0_ - 0x20)) = uVar3;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  ((int *)(fr0_ - 0x38))[2] = 0xc23c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = uVar5;
  }
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x227f0,((int *)(fr0_ - 0x38)) + 2,puVar4));
  (*(undefined4 *)(fr0_ - 0x28)) = uVar5;
  if (cVar9 != '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0x423c0000;
  }
  ((int *)(fr0_ - 0x38))[2] = 0x423c0000;
  if (cVar9 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
  }
  ar7_00 = ((void *)0x8c0d167c);
  ((int *)(fr0_ - 0x38))[3] = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x22800,((int *)(fr0_ - 0x38)) + 2,((void *)0x8c0d167c)));
  pcVar6 = (code *)0x0;
  while (pcVar6 < (code *)0x3) {
    (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0d70e4(ar4 + (int)pcVar6 * 0x16c + 0x22d48,(int)pcVar6 * 0x16c,3,ar7_00));
    ar7_00 = pcVar6 + 1;
    pcVar6 = ar7_00;
  }
  piVar7 = ((int *)(fr0_ - 0x38)) + 2;
  (vsp = ((unsigned long)(fr0_ - 160)), object_dtor_delete(piVar7,0xffffffff,piVar7,ar7_00));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 160)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,piVar7,ar7_00));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e16a0\n.set _s_GRAPHICS_ENV_0e16a0, _s_GRAPHICS_ENV_0e16a0_def\n");
