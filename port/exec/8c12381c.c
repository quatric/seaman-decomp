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
int FUN_8c12381c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12381c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x4b8;
  if ((*(short *)(unsigned)(ar4 + 0x4b8) != 0) && (iVar1 = *(int *)(unsigned)(ar4 + 0x4cc), iVar1 == 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x4cc) = 0;
    if (*(short *)(unsigned)(ar4 + 0x4c0) == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c013adc((uint)*(ushort *)(unsigned)(ar4 + 0x4b8) - (uint)*(ushort *)(unsigned)(ar4 + 0x4ba),ar5,ar6,
                           ar7));
      if ((int)((int)((float)*(ushort *)(unsigned)(ar4 + 0x4ba) * 0.01) & 0xffffU) < iVar1) {
        *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
      }
      iVar1 = 0x4b4;
      if (10 < *(ushort *)(unsigned)(ar4 + 0x4b4)) {
        *(undefined2 *)(unsigned)(ar4 + 0x4c0) = *(undefined2 *)(unsigned)(ar4 + 0x4b8);
        iVar1 = 0x4b4;
        *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
      }
    }
    else {
      iVar1 = 0x4b4;
      *(undefined2 *)(unsigned)(ar4 + 0x4b4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c12381c\n.set _FUN_8c12381c, _FUN_8c12381c_def\n");
