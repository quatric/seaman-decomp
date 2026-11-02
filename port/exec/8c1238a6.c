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
undefined4 FUN_8c1238a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1238a6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  short sVar2;
  uint uVar3;
  uint ar5_00;
  
  if ((*(char *)(unsigned)(0x4bc + ar4) != '\0') &&
     (sVar2 = *(short *)(unsigned)(0x4be + ar4) + -1, *(short *)(unsigned)(0x4be + ar4) = sVar2,
     sVar2 == 0)) {
    iVar1 = (int)0x4bc;
    *(undefined1 *)(unsigned)(iVar1 + ar4) = 0;
    *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4) = 0;
    *(undefined2 *)(unsigned)(iVar1 + -8 + ar4) = 0;
  }
  if (*(short *)(unsigned)(0x4c0 + ar4) == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = 2;
  }
  ar5_00 = (uint)*(ushort *)(unsigned)(0x4b4 + ar4);
  if ((uVar3 <= ar5_00) && (ar5_00 != *(ushort *)(unsigned)(0x4b6 + ar4))) {
    if (*(int *)(unsigned)(0x4cc + ar4) == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1235fc(ar4,ar5_00,ar6,ar7));
      if ((uVar3 & 0xff) != 0) {
        return 1;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12381c(ar4,ar5_00,ar6,ar7));
    }
  }
  *(undefined2 *)(unsigned)(0x4b4 + 2 + ar4) = *(undefined2 *)(unsigned)(0x4b4 + ar4);
  return 0;
}

__asm__(".globl _FUN_8c1238a6\n.set _FUN_8c1238a6, _FUN_8c1238a6_def\n");
