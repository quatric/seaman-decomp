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
int FUN_8c2624a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2624a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined1 *ar5_00;
  
  ar5_00 = (fr0_ + (int)0xfffffff4);
  iVar1 = (int)*(char *)(unsigned)(ar4 + 1);
  if (iVar1 == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263746(*(undefined4 *)(unsigned)(ar4 + 4),ar5,ar6,ar7));
    *(char *)(unsigned)(ar4 + 1) = (char)uVar2;
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263768(*(undefined4 *)(unsigned)(ar4 + 4),(fr0_ + (int)0xfffffff4),ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x24) = (*(undefined4 *)(fr0_ - 0xc));
    iVar1 = (int)*(char *)(unsigned)(ar4 + 1);
    if ((iVar1 == 3) || (iVar1 == 4)) {
      *(int *)(unsigned)(ar4 + 0x18) = *(int *)(unsigned)(ar4 + 0x18) + *(int *)(unsigned)(ar4 + 0x24);
      iVar1 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xc))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 24)); FUN_8c26211c(ar4,ar5_00,ar6,ar7); });
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c2624a0\n.set _FUN_8c2624a0, _FUN_8c2624a0_def\n");
