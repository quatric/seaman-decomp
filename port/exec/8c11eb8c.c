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
undefined4 FUN_8c11eb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11eb8c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c120348(ar4 + 0x48,0x11,0,0));
  if (((uVar1 & 0xff) == 0) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dc7e(ar4,1,((undefined4 *)(fr0_ - 0xc)),uVar4)), iVar2 == 0)) {
    ar6_00 = 0;
    uVar3 = 1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dda2(ar4,1,0,uVar4));
    if ((iVar2 == 0) &&
       (uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c12212e(ar4,uVar3,ar6_00,uVar4)), (uVar1 & 0xff) == 0)) {
      uVar3 = 0;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c122230(ar4,(&(*(undefined1 *)(unsigned)0x8c127c1d)),0,uVar4));
      if (((uVar1 & 0xff) == 0) &&
         (uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1222b4(ar4,(&(*(undefined1 *)(unsigned)0x8c127c1d)),uVar3,uVar4)), (uVar1 & 0xff) == 0
         )) {
        uVar4 = 0;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c120348(ar4 + 0x48,0x15,0,0));
        if (((uVar1 & 0xff) == 0) && (iVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c11dda2(ar4,1,((undefined4 *)(fr0_ - 0xc))[0],uVar4)), iVar2 == 0)) {
          *(undefined2 *)(unsigned)(0x144 + ar4) = 0;
          return 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11eb8c\n.set _FUN_8c11eb8c, _FUN_8c11eb8c_def\n");
