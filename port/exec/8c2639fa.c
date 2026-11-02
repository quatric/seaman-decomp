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
FUN_8c2639fa_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2639fa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int iVar3;
  int iVar4;
  
  if (ar4 != (undefined1 *)(unsigned)0x0) {
    puVar2 = ar4;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263c64(ar4,ar5,ar6,ar7));
    if (*(int *)(unsigned)(ar4 + 0xc) != 0) {
      puVar2 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc));
      (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c2629b2(puVar2,ar5,ar6,ar7));
    }
    if (*(int *)(unsigned)(ar4 + 4) != 0) {
      puVar2 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
      ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c262c04(puVar2,ar5,ar6,ar7); });
    }
    if (*(int *)(unsigned)(ar4 + 8) != 0) {
      puVar2 = ((undefined1 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
      ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c263446(puVar2,ar5,ar6,ar7); });
    }
    ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c260ca0(puVar2,ar5,ar6,ar7); });
    if (*(int *)(unsigned)(ar4 + 0x10) != 0) {
      (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10))));
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),ar5,ar6,ar7));
    }
    for (iVar3 = 0; iVar3 < (char)ar4[3]; iVar3 = iVar3 + 1) {
      iVar4 = iVar3 * 4;
      if (*(int *)(unsigned)(ar4 + iVar4 + 0x18) != 0) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x18)) + 0xc))))
                  (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x18)),ar5,ar6,ar7));
      }
      if (*(int *)(unsigned)(ar4 + iVar4 + 0x78) != 0) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x78)) + 0xc))))
                  (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x78)),ar5,ar6,ar7));
      }
      if (*(int *)(unsigned)(ar4 + iVar4 + 0x80) != 0) {
        (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x80)) + 0xc))))
                  (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar4 + 0x80)),ar5,ar6,ar7));
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x74) != 0) {
      ({ unsigned long ri0_ = (unsigned long)(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c26145e(*(undefined4 *)(unsigned)(ar4 + 0x74),ar5,ar6,ar7); });
    }
    ar5_00 = 0;
    ar6_00 = 0x94;
    puVar2 = ar4;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 24)), memset(ar4,0,0x94,ar7));
    *ar4 = 0;
    uVar1 = ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c260cc8(puVar2,ar5_00,ar6_00,ar7); });
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2639fa\n.set _FUN_8c2639fa, _FUN_8c2639fa_def\n");
