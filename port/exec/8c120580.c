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
undefined4
FUN_8c120580_def(int ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c120580";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  int s4 = *(int *)(vsp + 4);
  int s8 = *(int *)(vsp + 8);
  undefined4 s12 = *(undefined4 *)(vsp + 12);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int *a5;
  int iVar1;
  uint a7;
  
  a7 = ar7;
  a5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,s12,ar7));
  (*(int *)(fr0_ - 0x1c)) = ar4;
  (*(undefined1 *)(fr0_ - 0x18)) = (undefined1)ar5;
  if (a5 == (int *)(unsigned)0x0) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1204c4(&(*(int *)(fr0_ - 0x1c)),2,s12,a7));
  }
  else {
    if ((byte)ar6 != 0) {
      s12 = 8;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,(uint)(byte)ar6,8,a7));
      a5[3] = iVar1;
    }
    if ((ar7 & 0xff) != 0) {
      s12 = 4;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,ar7 & 0xff,4,a7));
      a5[4] = iVar1;
    }
    if ((((byte)ar6 == 0) || (a5[3] != 0)) && (((ar7 & 0xff) == 0 || (a5[4] != 0)))) {
      *a5 = ar4;
      *(undefined1 *)(unsigned)(a5 + 1) = (undefined1)ar5;
      *(byte *)(unsigned)(a5 + 2) = (byte)ar6;
      *(char *)(unsigned)((int)a5 + 9) = (char)ar7;
      a5[5] = s4;
      a5[7] = s8;
      a5[6] = s0;
      a5[9] = s0;
      *(undefined1 *)(unsigned)(a5 + 8) = 1;
      return a5;
    }
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x18))))(ar4,a5,s12,a7));
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1204c4(&(*(int *)(fr0_ - 0x1c)),2,s12,a7));
  }
  return 0;
}

__asm__(".globl _FUN_8c120580\n.set _FUN_8c120580, _FUN_8c120580_def\n");
