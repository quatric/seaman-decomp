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
int FUN_8c1f67c2_def(int ar4,int ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c1f67c2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 176; for (int i_ = 0; i_ < 176; i_++) z_[i_] = 0; }
  int iVar1;
  int ar5_00;
  undefined4 ar6_00;
  uint ar7_00;
  int *piVar2;
  
  ar7_00 = ar7;
  (vsp = ((unsigned long)(fr0_ - 176)), memset(((undefined1 *)(fr0_ - 0xb0)),0,0x98,ar7));
  if (*(int *)(unsigned)(ar4 + 0x20c) == *(int *)(unsigned)(ar4 + 0x208)) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    for (piVar2 = (int *)(unsigned)(ar4 + 0x210); piVar2[3] != 0; piVar2 = piVar2 + 0x49) {
      iVar1 = iVar1 + 1;
    }
    ar6_00 = 0x100;
    piVar2[2] = 0;
    piVar2[3] = 1;
    ar5_00 = ar4 + 0x104;
    piVar2[5] = *(int *)(unsigned)(ar4 + 0x204);
    *piVar2 = ar6;
    piVar2[1] = ar7 >> 2;
    piVar2[0x46] = 0;
    piVar2[4] = 0;
    piVar2[0x47] = 0;
    (vsp = ((unsigned long)(fr0_ - 176)), memmove(piVar2 + 6,ar5_00,0x100,ar7_00));
    ({ unsigned long ri0_ = (unsigned long)(ar6); unsigned long ri1_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vin1 = (unsigned)ri1_; vsp = ((unsigned long)(fr0_ - 176)); FUN_8c01422c(((undefined1 *)(fr0_ - 0xb0)),ar5_00,ar6_00,ar7_00); });
    (vsp = ((unsigned long)(fr0_ - 176)), memmove(piVar2 + 6,((undefined1 *)(fr0_ - 0xb0)),0x100,ar7_00));
    piVar2[6] = ((ar7 >> 2) - 1) * 4 + ar6;
    piVar2[8] = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f67c2\n.set _FUN_8c1f67c2, _FUN_8c1f67c2_def\n");
