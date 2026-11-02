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
undefined4 FUN_8c0cf39c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cf39c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if ((*(undefined1 *)(unsigned)0x8c43742c) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c437428) = 0;
    (*(undefined1 *)(unsigned)0x8c43742c) = '\x01';
  }
  if (*(int *)(unsigned)(ar4 + 0x154) == 0) {
    for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x60))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c0cf630(iVar2 * 0x78 + ar4 + iVar3 * 0x18 + 0x174,ar5,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0c5304(iVar2 * 0x78 + ar4 + iVar3 * 0x18 + 0x174,ar5,ar6,ar7));
      }
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c437428) = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0cf9b4(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0cf628((*(undefined4 *)(unsigned)(unsigned)0x8c437428),ar5,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x154) = 1;
  }
  else if (*(int *)(unsigned)(ar4 + 0x154) == 1) {
    if ((2.0 <= *(float *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c437428) + 0x10)) &&
       ((*(undefined4 *)(unsigned)(unsigned)0x8c437428) = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0cf9b4(ar4,ar5,ar6,ar7)), (*(undefined4 *)(unsigned)(unsigned)0x8c437428) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0cf628((*(undefined4 *)(unsigned)(unsigned)0x8c437428),ar5,ar6,ar7));
    }
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_14_0cf620(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7));
        if (iVar1 == 1) {
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0c5294(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7));
        }
      }
    }
    for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
      for (iVar4 = 0; iVar4 < 5; iVar4 = iVar4 + 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_14_0cf620(iVar3 * 0x78 + ar4 + iVar4 * 0x18 + 0x174,ar5,ar6,ar7));
        if (iVar1 == 1) {
          iVar2 = iVar2 + 1;
        }
      }
    }
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c437428) == 0) && (iVar2 == 0)) {
      *(undefined4 *)(unsigned)(ar4 + 0x154) = 0;
      return 2;
    }
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x154);
}

__asm__(".globl _FUN_8c0cf39c\n.set _FUN_8c0cf39c, _FUN_8c0cf39c_def\n");
