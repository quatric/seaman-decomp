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
undefined4 FUN_8c111cec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int unaff_r10 = 0;
  uint unaff_r11 = 0;
  int a6;
  int unaff_r14 = 0;
  int iVar4;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar4 = unaff_r11 * *(ushort *)(unsigned)(unaff_r14 + 0xc);
  if ((*(char *)(unsigned)(unaff_r14 + 0x30) == '\0') && (unaff_r11 <= *(uint *)(unsigned)(unaff_r14 + 8))) {
    if (*(uint *)(unsigned)(unaff_r14 + 0x24) < *(uint *)(unsigned)(unaff_r14 + 0x28)) {
      if (*(uint *)(unsigned)(unaff_r14 + 0x28) < (uint)(*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4))
      goto LAB_8c111d40;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7));
      *(int *)(unsigned)(unaff_r14 + 0x24) = *(int *)(unsigned)(unaff_r14 + 0x24) + iVar4;
    }
    else {
      if (*(uint *)(unsigned)(unaff_r14 + 0x28) <
          (uint)((*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4) - *(int *)(unsigned)(unaff_r14 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unsigned)(unaff_r14 + 0x20) < (uint)(*(int *)(unsigned)(unaff_r14 + 0x24) + iVar4)) {
        a6 = *(int *)(unsigned)(unaff_r14 + 0x20) - *(int *)(unsigned)(unaff_r14 + 0x24);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(int *)(unsigned)(unaff_r14 + 0x24),unaff_r10,a6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(unaff_r14 + 0x1c),unaff_r10 + a6,iVar4 - a6,ar7));
        *(int *)(unsigned)(unaff_r14 + 0x24) = (iVar4 - a6) + *(int *)(unsigned)(unaff_r14 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(unaff_r14 + 0x24),unaff_r10,iVar4,ar7));
        iVar4 = *(int *)(unsigned)(unaff_r14 + 0x24) + iVar4;
        *(int *)(unsigned)(unaff_r14 + 0x24) = iVar4;
        if (iVar4 == *(int *)(unsigned)(unaff_r14 + 0x20)) {
          *(undefined4 *)(unsigned)(unaff_r14 + 0x24) = *(undefined4 *)(unsigned)(unaff_r14 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unsigned)(unaff_r14 + 0x14) != 0) {
      do {
        if (*(int *)(unsigned)(uVar3 * 4 + *(int *)(unsigned)(unaff_r14 + 0x2c)) == 0) {
          *(uint *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x40) + uVar3 * 4) =
               *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 0x40) + uVar3 * 4) + unaff_r11;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unsigned)(unaff_r14 + 0x14));
    }
    if ((*(int *)(unsigned)(unaff_r14 + 0x24) == *(int *)(unsigned)(unaff_r14 + 0x28)) &&
       (*(int *)(unsigned)(unaff_r14 + 0x18) != 0)) {
      *(undefined1 *)(unsigned)(unaff_r14 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unsigned)(unaff_r14 + 0x3c) = *(int *)(unsigned)(unaff_r14 + 0x3c) + unaff_r11;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cec\n.set _FUN_8c111cec, _FUN_8c111cec_def\n");
