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
undefined4 FUN_8c01e1e8_def(int *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01e1e8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c279278) = 0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c27927c) = 0;
  if ((ar4 != (int *)(unsigned)0x0) && ((*(undefined4 *)(unsigned)(unsigned)0x8c27924c) != 0)) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c2791c0) == 2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c279274) = 0;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(undefined4 *)(unsigned)(unsigned)0x8c27926c),0,ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 2;
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb3),ar6,ar7); });
    }
    else if ((*(undefined4 *)(unsigned)(unsigned)0x8c2791c0) == 3) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c279274) = (*(undefined4 *)(unsigned)(unsigned)0x8c279274) + 2;
      if (0x10 < (*(undefined4 *)(unsigned)(unsigned)0x8c279274)) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c279274) = 0x10;
      }
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(undefined4 *)(unsigned)(unsigned)0x8c27926c),(*(undefined4 *)(unsigned)(unsigned)0x8c279274),ar6,ar7));
      (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 3;
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else if (*ar4 == 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c279274) = 0x10;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c201c28((*(undefined4 *)(unsigned)(unsigned)0x8c27926c),0x10,ar6,ar7));
    }
    else if (*(int *)(unsigned)(ar4[1] + 4) < 1000) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 1;
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else if (*(int *)(unsigned)(ar4[1] + 4) < (*(undefined4 *)(unsigned)(unsigned)0x8c279280)) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c279280) = (*(undefined4 *)(unsigned)(unsigned)0x8c279280) + -500;
      if ((*(undefined4 *)(unsigned)(unsigned)0x8c279280) < 3000) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c279280) = 3000;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 1;
      ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbb7),ar6,ar7); });
    }
    else {
      if (((*(undefined4 *)(unsigned)(unsigned)0x8c279280) + 1000 < *(int *)(unsigned)(ar4[1] + 4)) &&
         ((*(undefined4 *)(unsigned)(unsigned)0x8c279280) = (*(undefined4 *)(unsigned)(unsigned)0x8c279280) + 500, 8000 < (*(undefined4 *)(unsigned)(unsigned)0x8c279280))) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c279280) = 8000;
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c2791bc) = 1;
      (*(undefined1 *)(unsigned)0x8c2791c8) = '\0';
      for (iVar1 = 0; iVar1 < *(int *)(unsigned)(uint)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(uint *)(unsigned)(*(int *)(unsigned)(*(int *)(unsigned)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if ((((*(undefined4 *)(unsigned)(unsigned)0x8c279250) != 0) && (uVar2 < (*(undefined4 *)(unsigned)(unsigned)0x8c279254))) &&
           (*((char *)(unsigned long)*(unsigned *)(unsigned)(uVar2 * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c279250))) != '\0')) {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01437c(((undefined1 *)(unsigned)0x8c2791c8),*(undefined4 *)(unsigned)(uVar2 * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c279250)),ar6,ar7));
          ar5 = " ";
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c01437c(((undefined1 *)(unsigned)0x8c2791c8),((undefined1 *)(unsigned)0x8c12fbbb),ar6,ar7));
          (*(uint *)(fr0_ - 0x20)) = uVar2;
        }
      }
      if ((*(undefined1 *)(unsigned)0x8c2791c8) == '\0') {
        ar5 = "@NAME";
        ({ unsigned long ri0_ = (unsigned long)((*(uint *)(fr0_ - 0x20))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(((undefined1 *)(unsigned)0x8c2791c8),"@NAME",ar6,ar7); });
        (*(undefined4 *)(unsigned)(unsigned)0x8c27927c) = 1;
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), log_message(((undefined1 *)(unsigned)0x8c2791c8),ar5,ar6,ar7));
      if ((0 < iVar1) && (*(char *)(unsigned)(iVar1 + -0x73d86e39) == ' ')) {
        *(undefined1 *)(unsigned)(iVar1 + -0x73d86e39) = 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c01e1e8\n.set _FUN_8c01e1e8, _FUN_8c01e1e8_def\n");
