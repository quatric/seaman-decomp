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
undefined4 FUN_8c0ba494_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba494";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bd0c));
  (*(undefined4 *)(fr0_ - 0x18)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 4);
  (*(undefined4 *)(fr0_ - 0x14)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 8);
  (*(undefined4 *)(fr0_ - 0x10)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd0c)) + 0xc);
  (*(undefined4 *)(fr0_ - 0x2c)) = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13bd1c));
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 4);
  (*(undefined4 *)(fr0_ - 0x24)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 8);
  (*(undefined4 *)(fr0_ - 0x20)) = *(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c13bd1c)) + 0xc);
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c2595aa(2,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x10) == 0) {
    if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
    }
  }
  else if (*(int *)(unsigned)(ar4 + 0x14) == 1) {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba5e0(ar4,ar5,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c0ba6bc(ar4,ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c2595aa(0,&(*(undefined4 *)(fr0_ - 0x2c)),ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c0ba494\n.set _FUN_8c0ba494, _FUN_8c0ba494_def\n");
