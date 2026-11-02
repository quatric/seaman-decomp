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
uint FUN_8c20213e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20213e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  uint a4;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(unsigned)(ar4 + 8);
  iVar4 = *(int *)(unsigned)(ar5 + 0x48);
  a4 = (uint)*(byte *)(unsigned)(iVar5 + 0xb);
  if (a4 == 0) {
    a4 = 0;
  }
  else {
    iVar3 = ar5;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x28)),ar5 + 0x3c,vr7));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x28)),vr7));
    (*(unsigned *)(fr0_ - 0x3c) = (unsigned)(unsigned long)((undefined1 *)(unsigned)&(*(undefined4 *)(fr0_ - 0x30))));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c2027c0(a4,iVar3,ar6,ar7));
    *(undefined4 *)(unsigned)(ar5 + 0x3c) = (*(undefined4 *)(fr0_ - 0x30));
    *(undefined4 *)(unsigned)(ar5 + 0x40) = (*(undefined4 *)(fr0_ - 0x2c));
    if (*(int *)(unsigned)(ar5 + 8) == 0) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x28)),vr7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c202924(*(undefined4 *)(unsigned)(ar5 + 0x14),iVar3,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x40)),&(*(undefined4 *)(fr0_ - 0x30)),vr7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c202924(*(undefined4 *)(unsigned)(ar5 + 0x14),iVar3,ar6,ar7));
      iVar1 = iVar2 * 2 + iVar4;
      if (iVar3 < iVar2) {
        (vsp = ((unsigned long)(fr0_ - 64)), memmove(iVar1,iVar5 + 0xc,(*(int *)(unsigned)(ar5 + 0x14) - iVar2) * 2,ar7));
        iVar5 = (*(int *)(unsigned)(ar5 + 0x14) - iVar2) * 2 + 0xc + iVar5;
        iVar1 = iVar4;
      }
      else {
        iVar3 = iVar3 - iVar2;
        iVar5 = iVar5 + 0xc;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), memmove(iVar1,iVar5,iVar3 << 1,ar7));
    }
    else if (*(int *)(unsigned)(ar5 + 8) == 1) {
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(fr0_ - 0x28)),vr7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c202924(*(undefined4 *)(unsigned)(ar5 + 0x14),iVar3,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x40)),&(*(undefined4 *)(fr0_ - 0x30)),vr7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c202924(*(undefined4 *)(unsigned)(ar5 + 0x14),iVar3,ar6,ar7));
      iVar3 = iVar1 + iVar4;
      if (iVar2 < iVar1) {
        (vsp = ((unsigned long)(fr0_ - 64)), memmove(iVar3,iVar5 + 0xc,*(int *)(unsigned)(ar5 + 0x14) - iVar1,ar7));
        iVar5 = (*(int *)(unsigned)(ar5 + 0x14) - iVar1) + 0xc + iVar5;
        iVar3 = iVar4;
      }
      else {
        iVar5 = iVar5 + 0xc;
        iVar2 = iVar2 - iVar1;
      }
      (vsp = ((unsigned long)(fr0_ - 64)), memmove(iVar3,iVar5,iVar2,ar7));
    }
  }
  return a4;
}

__asm__(".globl _FUN_8c20213e\n.set _FUN_8c20213e, _FUN_8c20213e_def\n");
