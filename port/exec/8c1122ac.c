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
int * FUN_8c1122ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1122ac";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  undefined4 a6;
  
  a6 = 0x44;
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,1,0x44,ar7));
  if (piVar1 == (int *)(unsigned)0x0) {
    (*(int *)(fr0_ - 0x18)) = ar4;
    (*(undefined1 *)(fr0_ - 0x14)) = (undefined1)ar5;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1204c4(&(*(int *)(fr0_ - 0x18)),2,a6,ar7));
    piVar1 = (int *)(unsigned)0x0;
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x10))))(ar4,ar6 << 2,a6,ar7));
    piVar1[0xb] = iVar2;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,ar6,4,ar7));
    piVar1[0xd] = iVar2;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x14))))(ar4,ar6,4,ar7));
    piVar1[0x10] = iVar2;
    piVar1[5] = ar6;
    *(undefined1 *)(unsigned)(piVar1 + 1) = (undefined1)ar5;
    *piVar1 = ar4;
    piVar1[2] = 1;
  }
  return piVar1;
}

__asm__(".globl _FUN_8c1122ac\n.set _FUN_8c1122ac, _FUN_8c1122ac_def\n");
