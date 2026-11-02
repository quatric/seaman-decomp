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
int FUN_8c264308_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264308";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  undefined1 *a7;
  undefined1 *a7_00;
  int d;
  int *a4;
  int iVar3;
  
  a7 = ((undefined1 *)(fr0_ - 0x28));
  a7_00 = ((undefined1 *)(fr0_ - 0x28));
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
  if (ar6 < 0) {
    ar6 = ar6 + 0x1f;
  }
  d = ar5 * 0x12;
  iVar3 = (ar6 >> 5) * d;
  puVar2 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,0,iVar3,puVar2));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_010468((*(undefined4 *)(fr0_ - 0x1c)),d,vr6,vr7));
  iVar1 = iVar1 * d;
  (vsp = ((unsigned long)(fr0_ - 40)), memset((*(undefined4 *)(fr0_ - 0x20)),0,iVar1,puVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26be30(&(*(undefined4 *)(fr0_ - 0x20)),iVar1,&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x28))));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,1,&(*(undefined4 *)(fr0_ - 0x20)),a7));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,0,((undefined1 *)(fr0_ - 0x28)),a7));
  puVar2 = &(*(undefined4 *)(fr0_ - 0x20));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,0,iVar3 - iVar1,puVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_010468((*(undefined4 *)(fr0_ - 0x1c)),d,vr6,vr7));
  iVar3 = iVar3 * d;
  (vsp = ((unsigned long)(fr0_ - 40)), memset((*(undefined4 *)(fr0_ - 0x20)),0,iVar3,puVar2));
  (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c26be30(&(*(undefined4 *)(fr0_ - 0x20)),iVar3,&(*(undefined4 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x28))));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,1,&(*(undefined4 *)(fr0_ - 0x20)),a7_00));
  (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,0,((undefined1 *)(fr0_ - 0x28)),a7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_010468(iVar1 + iVar3,d,vr6,vr7));
  return iVar1 << 5;
}

__asm__(".globl _FUN_8c264308\n.set _FUN_8c264308, _FUN_8c264308_def\n");
