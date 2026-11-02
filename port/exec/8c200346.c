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
int FUN_8c200346_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c200346";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 ar6_00;
  uint unaff_r8 = 0;
  int iVar6;
  int iVar7;
  uint a5;
  
  iVar6 = ar4 * 0x148 + 0x8c4783e0;
  uVar5 = *(uint *)(unsigned)(iVar6 + 0x1c);
  iVar3 = *(int *)(unsigned)(uVar5 + 0x18);
  uVar4 = *(uint *)(unsigned)(uVar5 + 0x14);
  iVar7 = 0;
  bVar1 = false;
  do {
    a5 = uVar4 & 0xffff;
    if (iVar3 <= iVar7) {
      if ((!bVar1) ||
         ((iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2007f0(ar4,uVar5,ar6,ar7)), -1 < iVar3 &&
          (iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(ar4,uVar5,ar6,ar7)), -1 < iVar3)))) {
        iVar3 = 0;
      }
      return iVar3;
    }
    if (*(char *)(unsigned)(iVar6 + 0x48 + iVar7) == '\0') {
      uVar5 = a5;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
    }
    else {
      while( true ) {
        ar6 = *(int *)(unsigned)(iVar6 + 0x28) + iVar7 * 0x200;
        iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbc44(ar4,a5,ar6,ar7));
        if (iVar2 == 0) break;
        if (iVar2 == (int)0xffffff01) {
          return iVar2;
        }
        bVar1 = true;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
        ar6_00 = 0xffff;
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,a5,0xffff,ar7));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fe15a(ar4,0xfffc,ar6_00,ar7));
        if ((int)uVar5 < 0) {
          return (int)(int)0xffffff04;
        }
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,uVar5,uVar4 & 0xffff,ar7));
        if (iVar7 == 0) {
          (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(undefined4 *)(unsigned)0x8c4783dc + 0x10))))(*(undefined4 *)(unsigned)(iVar6 + 0x20),0x4a,uVar5,ar7));
          unaff_r8 = a5;
          a5 = uVar5;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(ar4,unaff_r8,uVar5,ar7));
          unaff_r8 = a5;
          a5 = uVar5;
        }
      }
      uVar5 = a5;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2009d0(ar4,a5,ar6,ar7));
      *(undefined1 *)(unsigned)(iVar6 + 0x48 + iVar7) = 0;
    }
    iVar7 = iVar7 + 1;
    unaff_r8 = a5;
  } while( true );
}

__asm__(".globl _FUN_8c200346\n.set _FUN_8c200346, _FUN_8c200346_def\n");
