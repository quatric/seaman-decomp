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
undefined4 FUN_8c2357d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2357d8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 420; for (int i_ = 0; i_ < 420; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int a6;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  puVar4 = ((undefined1 *)(fr0_ - 0x1a4));
  iVar2 = 0;
  a6 = 0;
  iVar5 = ar5 + 1 >> 1;
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x1a4))));
  iVar6 = ar5;
  if (0 < iVar5) {
    do {
      iVar6 = iVar6 + -1;
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x124)) + iVar2 * 8,a6 * 8 + *(int *)(unsigned)ar4,vr7));
      *(undefined4 *)(unsigned)(puVar4 + iVar2 * 4) = *(undefined4 *)(unsigned)(a6 * 4 + *(int *)(unsigned)(ar4 + 4));
      iVar3 = iVar2 + 1;
      a6 = a6 + 1;
      (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x124)) + iVar3 * 8,iVar6 * 8 + *(int *)(unsigned)ar4,vr7));
      iVar2 = iVar3 + 1;
      *(undefined4 *)(unsigned)(puVar4 + iVar3 * 4) = *(undefined4 *)(unsigned)(iVar6 * 4 + *(int *)(unsigned)(ar4 + 4));
      (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(puVar4));
    } while (a6 < iVar5);
  }
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x124))));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 420)), FUN_8c235704(((undefined1 * *)(fr0_ - 0x24)),ar5 + -2,a6,((undefined1 *)(unsigned long)*(unsigned *)(fr0_ - 0x20))));
  return uVar1;
}

__asm__(".globl _FUN_8c2357d8\n.set _FUN_8c2357d8, _FUN_8c2357d8_def\n");
