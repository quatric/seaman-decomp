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
undefined4 FUN_8c111cdc_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c111cdc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  iVar5 = ar6 * *(ushort *)(unsigned)(ar4 + 0xc);
  if ((*(char *)(unsigned)(ar4 + 0x30) == '\0') && (ar6 <= *(uint *)(unsigned)(ar4 + 8))) {
    if (*(uint *)(unsigned)(ar4 + 0x24) < *(uint *)(unsigned)(ar4 + 0x28)) {
      if (*(uint *)(unsigned)(ar4 + 0x28) < (uint)(*(int *)(unsigned)(ar4 + 0x24) + iVar5)) goto LAB_8c111d40;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,iVar5,vr7));
      *(int *)(unsigned)(ar4 + 0x24) = *(int *)(unsigned)(ar4 + 0x24) + iVar5;
    }
    else {
      if (*(uint *)(unsigned)(ar4 + 0x28) < (uint)((*(int *)(unsigned)(ar4 + 0x24) + iVar5) - *(int *)(unsigned)(ar4 + 0x10)))
      goto LAB_8c111d40;
      if (*(uint *)(unsigned)(ar4 + 0x20) < (uint)(*(int *)(unsigned)(ar4 + 0x24) + iVar5)) {
        iVar4 = *(int *)(unsigned)(ar4 + 0x20) - *(int *)(unsigned)(ar4 + 0x24);
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(ar5,iVar4,vr6,vr7));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(ar4 + 0x1c),ar5 + iVar4,iVar5 - iVar4,vr7));
        *(int *)(unsigned)(ar4 + 0x24) = (iVar5 - iVar4) + *(int *)(unsigned)(ar4 + 0x1c);
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x24),ar5,iVar5,vr7));
        iVar5 = *(int *)(unsigned)(ar4 + 0x24) + iVar5;
        *(int *)(unsigned)(ar4 + 0x24) = iVar5;
        if (iVar5 == *(int *)(unsigned)(ar4 + 0x20)) {
          *(undefined4 *)(unsigned)(ar4 + 0x24) = *(undefined4 *)(unsigned)(ar4 + 0x1c);
        }
      }
    }
    uVar3 = 0;
    if (*(int *)(unsigned)(ar4 + 0x14) != 0) {
      do {
        if (*(int *)(unsigned)(uVar3 * 4 + *(int *)(unsigned)(ar4 + 0x2c)) == 0) {
          *(uint *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar3 * 4) =
               *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x40) + uVar3 * 4) + ar6;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(unsigned)(ar4 + 0x14));
    }
    if ((*(int *)(unsigned)(ar4 + 0x24) == *(int *)(unsigned)(ar4 + 0x28)) && (*(int *)(unsigned)(ar4 + 0x18) != 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x30) = 1;
    }
    uVar2 = 1;
    *(uint *)(unsigned)(ar4 + 0x3c) = *(int *)(unsigned)(ar4 + 0x3c) + ar6;
  }
  else {
LAB_8c111d40:
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c111cdc\n.set _FUN_8c111cdc, _FUN_8c111cdc_def\n");
