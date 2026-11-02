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
int FUN_8c0d1c84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d1c84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int *a4;
  uint a5;
  
  if (*(undefined4 *)(unsigned)0x8c437c5c == '\0') {
    *(undefined4 *)(unsigned)0x8c437c58 = 0;
    *(undefined4 *)(unsigned)0x8c437c5c = '\x01';
  }
  iVar1 = 0;
  if ((*(undefined4 *)(unsigned)0x8c43785c != 0) && (iVar1 = 0, *(undefined4 *)(unsigned)0x8c437860 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016340(0x8c431294,ar5,ar6,ar7));
    do {
    } while (*(undefined4 *)(unsigned)0x8c431a50 != 1);
    if (*(undefined4 *)(unsigned)0x8c437c58 < 1) {
      iVar1 = *(undefined4 *)(unsigned)0x8c437c58 + 1;
      *(undefined4 *)(unsigned)0x8c437c58 = iVar1;
    }
    else {
      a5 = (uint)*(undefined4 *)(unsigned)0x8c437864;
      a4 = (int *)(unsigned)*(undefined4 *)(unsigned)0x8c43785c;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x9c + *a4))))(a4,a5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f7ea0(a4,a5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x98 + *(int *)(unsigned)*(undefined4 *)(unsigned)0x8c437860))))
                ((int *)(unsigned)*(undefined4 *)(unsigned)0x8c437860,(uint)*(undefined4 *)(unsigned)0x8c437864,ar6,ar7));
      *(undefined4 *)(unsigned)0x8c43785c = 0;
      *(undefined4 *)(unsigned)0x8c437860 = 0;
      iVar1 = 0;
      *(undefined4 *)(unsigned)0x8c437c58 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0d1c84\n.set _FUN_8c0d1c84, _FUN_8c0d1c84_def\n");
