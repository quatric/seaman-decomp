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
undefined4 FUN_8c25b08a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25b08a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
  if (-1 < iVar1) {
    uVar2 = 0;
    iVar3 = iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
    ar7_00 = *(int *)(unsigned)(iVar3 + 0x28) + -1;
    iVar3 = *(int *)(unsigned)(iVar3 + 0x24) + -1;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,iVar3,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20bdc0(iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 0x18,uVar2,iVar3,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a482(0,0,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa508) + -1,(*(undefined4 *)(unsigned)(unsigned)0x8c4aa50c) + -1));
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c25b08a\n.set _FUN_8c25b08a, _FUN_8c25b08a_def\n");
