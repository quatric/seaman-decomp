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
int FUN_8c200b10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200b10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 316; for (int i_ = 0; i_ < 316; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined1 *a6;
  int iVar3;
  uint a5;
  
  a6 = ((undefined1 *)(fr0_ - 0x40));
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200566(ar4,ar5,((undefined1 *)(fr0_ - 0x40)),ar7));
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c200a84(ar4,iVar1,a6,ar7));
    if ((int)(*(uint *)(fr0_ - 0x34)) < *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0x30)) {
      a5 = (*(uint *)(fr0_ - 0x34));
      for (iVar1 = 0; iVar1 < (*(int *)(fr0_ - 0x18)); iVar1 = iVar1 + 1) {
        uVar2 = (vsp = ((unsigned long)(fr0_ - 316)), FUN_8c2009d0(ar4,a5,a6,ar7));
        uVar2 = uVar2 & 0xffff;
        if (iVar1 == (*(int *)(fr0_ - 0x18)) + -1) {
          if (uVar2 != 0xfffa) goto LAB_8c200b80;
        }
        else if ((((uVar2 == a5) || (uVar2 == 0xfffa)) || (uVar2 == 0xfffc)) ||
                ((uVar2 == 0xffff || (*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0x30) <= (int)uVar2)))
                ) goto LAB_8c200b80;
        a5 = uVar2;
      }
      iVar1 = 0;
    }
    else {
LAB_8c200b80:
      iVar1 = (int)(int)0xffffff41;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c200b10\n.set _FUN_8c200b10, _FUN_8c200b10_def\n");
