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
uint FUN_8c1fbe84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fbe84";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c273a44) != 0) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c475f98) == 0) {
      pcVar2 = ((void *)0x8c1fc00e);
    }
    else {
      pcVar2 = ((void *)0x8c1fbfd2);
    }
    (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c1fcfbe(ar4,ar5,ar6,ar7));
    (*(undefined4 *)(unsigned)(unsigned)0x8c475f88) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c);
    (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c) = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fda44(ar4,ar5,ar6,ar7));
    uVar3 = 0;
    iVar6 = 0;
    uVar4 = 1;
    (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c) & (*(undefined4 *)(unsigned)(unsigned)0x8c475f9c);
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fc5c4(iVar6,ar5,ar6,ar7));
      uVar5 = uVar4;
      if (iVar1 != 0) {
        uVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 | uVar5;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = ((*(undefined4 *)(unsigned)(unsigned)0x8c475f88) ^ (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c)) & (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c);
    ain0 = (*(undefined4 *)(unsigned)(unsigned)0x8c475f8c);
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) | uVar5;
        }
        else {
          ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar2))(iVar6,ar5,ar6,ar7));
          (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && (((*(undefined4 *)(unsigned)(unsigned)0x8c475f90) & uVar5) != 0)) {
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)pcVar2))(iVar6,ar5,ar6,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f90) & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = ((*(undefined4 *)(unsigned)(unsigned)0x8c475f8c) ^ (*(undefined4 *)(unsigned)(unsigned)0x8c475f88)) & (*(undefined4 *)(unsigned)(unsigned)0x8c475f88);
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) | uVar5;
        }
        else {
          ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fcd9c(iVar6,2,0,ar7));
          (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && (((*(undefined4 *)(unsigned)(unsigned)0x8c475f94) & uVar5) != 0)) {
        ain0 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fcd9c(iVar6,2,0,ar7));
        (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) = (*(undefined4 *)(unsigned)(unsigned)0x8c475f94) & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1fbe84\n.set _FUN_8c1fbe84, _FUN_8c1fbe84_def\n");
