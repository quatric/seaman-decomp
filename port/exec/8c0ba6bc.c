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
undefined4 FUN_8c0ba6bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba6bc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(undefined1 *)(unsigned)0x8c43660c) == '\0') {
    *(unsigned *)0x8c436608 = (unsigned)(unsigned long)((undefined **)(unsigned)0x3f866666);
    (*(undefined4 *)(unsigned)(unsigned)0x8c43660c) = CONCAT31((*(undefined4 *)(unsigned)(unsigned)0x8c43660d),1);
  }
  (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f8176(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  if (cVar2 != '\0') {
    *(unsigned *)0x8c436608 = (unsigned)(unsigned long)(&(*(undefined4 *)(unsigned)(unsigned)0x8c13bd4c));
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436604) = 0x41980000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436600) = 0x42480000;
  if ((*(byte *)(fr0_ - 0xc)) < 0xc) {
    if ((*(byte *)(fr0_ - 0xc)) == 0) {
      (*(byte *)(fr0_ - 0xc)) = 0xc;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c86b)); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
  }
  else {
    if ((*(byte *)(fr0_ - 0xc)) != 0xc) {
      (*(byte *)(fr0_ - 0xc)) = (*(byte *)(fr0_ - 0xc)) - 0xc;
    }
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c87e)); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c014334(((undefined1 *)(fr0_ - 0x24)),ar5,ar6,ar7); });
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c0c4370(((undefined1 *)(unsigned)0x8c2b5628),((undefined1 *)(fr0_ - 0x24)),0,0xe));
  return uVar1;
}

__asm__(".globl _FUN_8c0ba6bc\n.set _FUN_8c0ba6bc, _FUN_8c0ba6bc_def\n");
