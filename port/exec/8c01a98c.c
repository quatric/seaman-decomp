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
int FUN_8c01a98c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01a98c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)(unsigned)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
       (*(int *)(unsigned)((int)ar4 + 0x2470 + *ar4 * 0x28) != 0)) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fb57c))))
                (*(undefined4 *)(unsigned)((int)ar4 + 0x2470 + *ar4 * 0x28),ar5,ar6,ar7));
    }
    iVar2 = *ar4;
    iVar1 = *(int *)(unsigned)((int)ar4 + 0x2458 + *ar4 * 0x28);
    *(undefined4 *)(unsigned)((int)ar4 + 0x244c + *ar4 * 0x28) = 0xffffffff;
    *ar4 = iVar1;
    iVar1 = *(int *)(unsigned)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((iVar1 != 2) || (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c01aa94(ar4,ar5,ar6,ar7)), iVar1 != 1)) break;
    *(undefined4 *)(unsigned)((int)ar4 + 0x2450 + iVar2 * 0x28) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01a98c\n.set _FUN_8c01a98c, _FUN_8c01a98c_def\n");
