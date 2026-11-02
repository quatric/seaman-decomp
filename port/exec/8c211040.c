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
undefined4 FUN_8c211040_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c211040";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint a5;
  
  *(undefined4 *)(unsigned)0x8c4a9f1c = 0;
  iVar4 = *(undefined4 *)(unsigned)0x8c4a9db8;
  a5 = ar5;
  while ((iVar4 != 0 && ((vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(*(undefined4 *)(unsigned)0x8c4a9e14)))(((undefined1 *)(unsigned)1)[0x8c4a9e14],a5,ar6,ar7)), *(undefined4 *)(unsigned)0x8c4a9f1c < 0xb))
        ) {
    iVar4 = *(undefined4 *)(unsigned)0x8c4a9db8;
  }
  puVar1 = 0x8c4a9ef0;
  *(undefined4 *)(unsigned)0x8c4a9ef0 = ar4;
  *(undefined4 *)(unsigned)0x8c4a9fcc = ar5;
  *(undefined4 *)(unsigned)0x8c4a9fd0 = ar5 & 0xf;
  puVar1[2] = 0;
  puVar2 = 0x8c4a9efc;
  *(undefined4 *)(unsigned)0x8c4a9efc = 0xffffffff;
  puVar3 = 0x8c4a9f00;
  *(undefined4 *)(unsigned)0x8c4a9f00 = 0xffffffff;
  puVar1[5] = 0xffffffff;
  puVar2[3] = 0;
  puVar3[3] = 0;
  puVar1[8] = 0;
  return 0;
}

__asm__(".globl _FUN_8c211040\n.set _FUN_8c211040, _FUN_8c211040_def\n");
