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
int FUN_8c267ccc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267ccc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  int iVar1;
  int iVar2;
  
  iVar1 = ar6;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    iVar2 = 0xd000001;
  }
  else if (ar4 == 0) {
    iVar2 = 0x7000103;
  }
  else {
    iVar2 = (int)(short)ar5;
    if ((iVar2 < -0x18ff) || (0x18ff < iVar2)) {
      iVar2 = 0x3000001;
    }
    else {
      (*(undefined4 *)(unsigned)(unsigned)0x8c4bd4b8) = 0x28;
      (*(undefined1 *)(unsigned)0x8c4bd4bc) = *(undefined1 *)(unsigned)(ar4 + 1);
      iVar2 = iVar2 + 0x8000;
      (*(undefined1 *)(unsigned)0x8c4bd4be) = (undefined1)iVar2;
      (*(undefined1 *)(unsigned)0x8c4bd4bf) = (undefined1)((uint)iVar2 >> 8);
      (*(undefined1 *)(unsigned)0x8c4bd4c0) = (undefined1)ar6;
      iVar1 = ar6 >> 8;
      (*(undefined1 *)(unsigned)0x8c4bd4c1) = (undefined1)((uint)ar6 >> 8);
      in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267fe8(((undefined1 *)(unsigned)0x8c4bd4b8),iVar2 >> 8,iVar1,ar7));
      iVar2 = in_r0;
    }
  }
  if (iVar2 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_r0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267ccc),iVar2,iVar1,ar7); });
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267ccc\n.set _FUN_8c267ccc, _FUN_8c267ccc_def\n");
