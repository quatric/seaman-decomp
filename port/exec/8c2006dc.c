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
undefined4 FUN_8c2006dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2006dc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar6_00;
  int iVar1;
  int ar6_01;
  int iVar2;
  int iVar3;
  int iVar4;
  
  ar6_00 = 0xfffa;
  iVar4 = 0;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar2 = *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0x10);
  ar6_01 = 0xfffa + 5;
  if (0 < iVar2) {
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c1fbc44))))
                        (ar4,*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,
                         iVar4 * 0x200 + *(int *)(unsigned)(iVar3 + 0x24),vr7));
      if (iVar1 < 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(ar4,*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_01,ar7));
        return iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20099e(ar4,*(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0xc) + iVar4,ar6_00,ar7));
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}

__asm__(".globl _FUN_8c2006dc\n.set _FUN_8c2006dc, _FUN_8c2006dc_def\n");
