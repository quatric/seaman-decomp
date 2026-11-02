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
int FUN_8c266d28_def(int ar4,undefined4 ar5,int *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c266d28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  int *piVar2;
  int *piVar3;
  int ar5_00;
  
  ar5_00 = 0;
  piVar2 = ar6;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_00 = 0xd000001;
  }
  else if (ar4 == 0) {
    ar5_00 = 0x7000103;
  }
  else if (ar6 == (int *)(unsigned)0x0) {
    ar5_00 = 0x7000203;
  }
  else {
    piVar3 = (int *)(unsigned)((short)*(char *)(unsigned)(ar4 + 1) * 0x2c + (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0xa8);
    (vsp = ((unsigned long)(fr0_ - 80)), aica_ram_268618(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1b8) + *(char *)(unsigned)(ar4 + 1) * 0x40 + (char)ar5 * 0x20 +
                    0x418,(fr0_ + (int)0xffffffd8),ar6,ar7));
    ar7 = ((undefined1 *)(fr0_ - 0x18));
    piVar2 = &(*(int *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c2684f0(0x52535053,(int)*(char *)(unsigned)((int)piVar3 + (char)ar5 + 7),piVar2,ar7));
    iVar1 = *piVar3;
    if (iVar1 == 1) {
      (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) * 2;
    }
    else if ((iVar1 != 0) && (iVar1 == 2)) {
      (*(int *)(fr0_ - 0x28)) = (int)((*(int *)(fr0_ - 0x28)) + (uint)((*(int *)(fr0_ - 0x28)) < 0)) >> 1;
    }
    *ar6 = (*(int *)(fr0_ - 0x28));
  }
  if (ar5_00 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c2688a0(((void *)0x8c266d28),ar5_00,piVar2,ar7); });
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c266d28\n.set _FUN_8c266d28, _FUN_8c266d28_def\n");
