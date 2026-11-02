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
undefined4 s_GRAPHICS_ENV_0e69c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0e69c8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 a7;
  uint uVar5;
  undefined4 in_fr1 = 0;
  char cVar6;
  
  cVar6 = '\0';
  uVar3 = ar5;
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_ctor_zero(&(*(undefined4 *)(fr0_ - 0x24)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), Vec3_set_zero(&(*(undefined4 *)(fr0_ - 0x30)),uVar3,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x34)) = 0;
  (*(undefined4 *)(fr0_ - 0x38)) = 0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c13f8cb),&(*(undefined4 *)(fr0_ - 0x34))));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c140052),0,2));
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x38));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c13f8cb),puVar4));
  if (iVar1 == 0) {
    puVar4 = (undefined4 *)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c140048),((undefined1 *)(unsigned)0x8c140074),0,2));
  }
  ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x54))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c015ad4(ar4 + 0x30,(*(undefined4 *)(fr0_ - 0x34)),pcVar2,puVar4); });
  a7 = 0xd;
  uVar3 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c239170(0x8c437600,0x8c437608,0x8c4312a8,0xd));
  for (uVar5 = 0; uVar5 < 0xd; uVar5 = uVar5 + 1) {
    *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc89f4) = *(uint *)(unsigned)(uVar5 * 0xc + -0x73bc89f4) | 0x80000000;
  }
  ar5_00 = 0x8c437600;
  (vsp = ((unsigned long)(fr0_ - 88)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x28) + 8))))((int *)(unsigned)(ar4 + 0x28),0x8c437600,uVar3,a7));
  (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 0x28,ar5_00,uVar3,a7));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c140093),((undefined1 *)(unsigned)0x8c13f8cb),uVar3));
  if (iVar1 == 0) {
    uVar3 = 2;
    pcVar2 = (char *)(unsigned)0x0;
    (vsp = ((unsigned long)(fr0_ - 88)), report_error_message(((undefined1 *)(unsigned)0x8c14009e),((undefined1 *)(unsigned)0x8c13f91d),0,2));
  }
  (vsp = ((unsigned long)(fr0_ - 88)), s_GRAPHICS_COMMON_0dbb1a(ar4,ar5,pcVar2,uVar3));
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x20)) = 0;
    (*(undefined4 *)(fr0_ - 0x28)) = in_fr1;
  }
  else {
    (*(undefined4 *)(fr0_ - 0x18)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x28)) = 0xc2700000;
    (*(undefined4 *)(fr0_ - 0x20)) = in_fr1;
  }
  (*(undefined4 *)(fr0_ - 0x1c)) = 0xbf800000;
  (*(undefined4 *)(fr0_ - 0x30)) = 0xc2700000;
  if (cVar6 == '\0') {
    (*(undefined4 *)(fr0_ - 0x28)) = 0;
    (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(fr0_ - 0x20));
  }
  else {
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
  }
  puVar4 = &(*(undefined4 *)(fr0_ - 0x30));
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(fr0_ - 0x28));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d167c(&(*(undefined4 *)(fr0_ - 0x24)),ar4 + 0x10cc,puVar4,uVar3));
  (vsp = ((unsigned long)(fr0_ - 88)), object_dtor_delete(&(*(undefined4 *)(fr0_ - 0x30)),0xffffffff,puVar4,uVar3));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 88)), Vec3_dtor(&(*(undefined4 *)(fr0_ - 0x24)),0xffffffff,puVar4,uVar3));
  return uVar3;
}

__asm__(".globl _s_GRAPHICS_ENV_0e69c8\n.set _s_GRAPHICS_ENV_0e69c8, _s_GRAPHICS_ENV_0e69c8_def\n");
