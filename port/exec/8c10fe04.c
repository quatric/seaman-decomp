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
undefined4 FUN_8c10fe04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fe04";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0x48;
  if ((*(int *)(unsigned)(ar4 + 0x48) != 0) &&
     (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),ar5,ar6,ar7)), uVar1 = 0, iVar2 != 0)) {
    if ((*(char *)(unsigned)(ar4 + 0x32) == '\0') &&
       ((*(int *)(unsigned)(ar4 + 0x28) == 0 || ((float)*(int *)(unsigned)(ar4 + 0x88) < *(float *)(unsigned)(ar4 + 0x54))))) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fd82(ar4,ar5,ar6,ar7));
      *(short *)(unsigned)(ar4 + 0x30) = (short)uVar1;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar2,(*(ushort *)(unsigned)(ar4 + 0x30) - 1) * *(int *)(unsigned)(ar4 + 0x70) * 4 + *(int *)(unsigned)(ar4 + 0x3c),
            *(int *)(unsigned)(ar4 + 0x70) << 2,ar7));
    iVar2 = *(int *)(unsigned)(ar4 + 0x3c) + *(int *)(unsigned)(ar4 + 0x80) * 4;
    *(int *)(unsigned)(ar4 + 0x3c) = iVar2;
    uVar1 = 0x48;
    if (iVar2 == *(int *)(unsigned)(ar4 + 0x38)) {
      *(undefined4 *)(unsigned)(ar4 + 0x3c) = *(undefined4 *)(unsigned)(ar4 + 0x34);
    }
    *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + -1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10fe04\n.set _FUN_8c10fe04, _FUN_8c10fe04_def\n");
