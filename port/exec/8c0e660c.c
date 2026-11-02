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
undefined4 FUN_8c0e660c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e660c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0dbdf4(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d8808(ar4 + 0x10dc,ar5,ar6,ar7));
  if (cVar3 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x78) = *(undefined4 *)(unsigned)(ar4 + 0x1120);
    *(undefined4 *)(unsigned)(ar4 + 0x7c) = *(undefined4 *)(unsigned)(ar4 + 0x1124);
  }
  else {
    *(undefined8 *)(unsigned)(ar4 + 0x78) = *(undefined8 *)(unsigned)(ar4 + 0x1120);
    *(undefined8 *)(unsigned)(ar4 + 0x7c) = *(undefined8 *)(unsigned)(ar4 + 0x1124);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0d89d8(ar4 + 0x10dc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01538c(ar4 + 0x28,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015adc(ar4 + 0x30,ar5,ar6,ar7));
  for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f6ab0(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7));
    if (iVar1 == 1) {
      ar6 = ar4 + 4;
      ar5 = ar4 + 0xc;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7118(ar4 + iVar2 * 0x68 + 0xc0c,ar5,ar6,ar7));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0da754(ar4,ar5,ar6,ar7));
  return 1;
}

__asm__(".globl _FUN_8c0e660c\n.set _FUN_8c0e660c, _FUN_8c0e660c_def\n");
