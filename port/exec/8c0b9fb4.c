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
int FUN_8c0b9fb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b9fb4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0243b0(ar4 + 0xb0,ar5,ar6,ar7));
  ({ unsigned long t0_ = (unsigned long)(3); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1bc,((void *)0x8c022c4c),((void *)0x8c022cb0),0x10); });
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x1ec,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9910(ar4 + 0x14ac,pcVar1,pcVar2,uVar3));
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(0x14); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x14c4,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0e9910(ar4 + 0x2784,pcVar1,pcVar2,uVar3));
  uVar3 = 0xf0;
  pcVar2 = ((void *)0x8c0ba180);
  pcVar1 = ((void *)0x8c0243b0);
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c010120(ar4 + 0x2794,((void *)0x8c0243b0),((void *)0x8c0ba180),0xf0); });
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fdc20(ar4 + 0x30f4,pcVar1,pcVar2,uVar3));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01e4dc(ar4 + 0x4104,pcVar1,pcVar2,uVar3));
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c13c026)); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c014334(ar4,pcVar1,pcVar2,uVar3); });
  *(undefined2 *)(unsigned)(ar4 + 0x28) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0xa8) = (*(undefined1 *)(unsigned)0x8c436548);
  *(undefined4 *)(unsigned)(ar4 + 0xac) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x1b0) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x1a0) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x1b0) = (ulonglong)in_fr1;
    *(ulonglong *)(unsigned)(ar4 + 0x1a0) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(unsigned)(ar4 + 0x1ac) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1a8) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x1b4) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x1b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14b8) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x14b4) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(unsigned)(ar4 + 0x14bc) = 0;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0x14bc) = (ulonglong)in_fr1;
  }
  *(undefined1 *)(unsigned)(ar4 + 0x14c0) = 0;
  *(undefined4 *)(unsigned)(ar4 + 0x278c) = 0;
  *(undefined1 *)(unsigned)(ar4 + 0x2790) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0b9fb4\n.set _FUN_8c0b9fb4, _FUN_8c0b9fb4_def\n");
