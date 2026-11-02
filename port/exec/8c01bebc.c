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
int FUN_8c01bebc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01bebc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f8176(&(*(undefined2 *)(fr0_ - 0x18)),ar5,ar6,ar7));
  (*(undefined2 *)(fr0_ - 0x38)) = (*(undefined2 *)(fr0_ - 0x18));
  (*(undefined1 *)(fr0_ - 0x36)) = (*(undefined1 *)(fr0_ - 0x16));
  (*(undefined1 *)(fr0_ - 0x35)) = (*(undefined1 *)(fr0_ - 0x15));
  (*(undefined1 *)(fr0_ - 0x34)) = (*(undefined1 *)(fr0_ - 0x14));
  (*(undefined1 *)(fr0_ - 0x33)) = (*(undefined1 *)(fr0_ - 0x13));
  (*(undefined1 *)(fr0_ - 0x32)) = (*(undefined1 *)(fr0_ - 0x12));
  (*(undefined1 *)(fr0_ - 0x31)) = (*(undefined1 *)(fr0_ - 0x11));
  (*(int *)(fr0_ - 0x20)) = *ar4;
  (*(int *)(fr0_ - 0x24)) = *ar4;
  (*(int *)(fr0_ - 0x28)) = *ar4;
  iVar2 = ({ unsigned long t0_ = (unsigned long)(&(*(undefined2 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 56)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 56)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fc740))))
                    (*(undefined4 *)(unsigned)0x8c2791b4,(int)ar4 + 0x245c + (*(int *)(fr0_ - 0x20)) * 0x28,
                     *(undefined4 *)(unsigned)((int)ar4 + 0x2470 + (*(int *)(fr0_ - 0x24)) * 0x28),
                     *(undefined4 *)(unsigned)((int)ar4 + 0x246c + (*(int *)(fr0_ - 0x28)) * 0x28)); });
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)(unsigned)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01bebc\n.set _FUN_8c01bebc, _FUN_8c01bebc_def\n");
