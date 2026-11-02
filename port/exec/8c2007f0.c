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
int FUN_8c2007f0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2007f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  bool bVar1;
  int *piVar2;
  int ar6_00;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  ar6_00 = 0xfffa;
  piVar2 = 0x8c4783dc;
  uVar5 = 0;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  bVar1 = false;
  while( true ) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2006dc(ar4,ar5,ar6,ar7));
    if (iVar3 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar3 != (int)0xffffff40) break;
    ar6 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20075a(ar4,ar5,ar6,ar7));
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x1c) + 0xc) = ar6;
    (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar2 + 0x10))))(*(undefined4 *)(unsigned)(iVar4 + 0x20),uVar5,vr6,vr7));
    for (iVar3 = 0; bVar1 = true, iVar3 < *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x1c) + 0x10); iVar3 = iVar3 + 1
        ) {
      ar5 = *(int *)(unsigned)(*(int *)(unsigned)(iVar4 + 0x1c) + 0xc) + iVar3;
      ar6 = ar6_00;
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,ar5,ar6_00,ar7));
    }
  }
  if (bVar1) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(ar4,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c2007f0\n.set _FUN_8c2007f0, _FUN_8c2007f0_def\n");
