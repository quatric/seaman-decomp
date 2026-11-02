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
int FUN_8c26ae54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26ae54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  int iVar1;
  int a7;
  int iVar2;
  int a6;
  int iVar3;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_010468(0x100,*(undefined4 *)(unsigned)(ar4 + 0x10),vr6,vr7));
  iVar1 = iVar1 * 8;
  a7 = (vsp = ((unsigned long)(fr0_ - 52)), libgcc_divide_helper_010614(ar6,iVar1,vr6,vr7));
  if (0 < a7) {
    a6 = 0;
    (vsp = ((unsigned long)(fr0_ - 52)), s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,0x8c4bee28,0));
    (*(int *)(fr0_ - 0x34)) = 0;
    iVar2 = iVar1 - a7;
    do {
      iVar3 = iVar1;
      if ((*(int *)(fr0_ - 0x34)) == 0x3f) {
        iVar3 = iVar2;
      }
      (vsp = ((unsigned long)(fr0_ - 52)), s_E1227_sdMoveSndMemToWrkMem_r_26ae04(ar4,ar5,iVar1 + -0x73b411d8,a7));
      (vsp = ((unsigned long)(fr0_ - 52)), s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,iVar1 + -0x73b411d8));
      a6 = a6 + iVar3;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + 1;
      a7 = a7 + iVar3;
    } while ((*(int *)(fr0_ - 0x34)) < 0x40);
    a7 = (vsp = ((unsigned long)(fr0_ - 52)), s_E1242_sdMemBlkSetPrm_return__26abf6(ar4,ar5,a6,0x8c4bee28));
  }
  return a7;
}

__asm__(".globl _FUN_8c26ae54\n.set _FUN_8c26ae54, _FUN_8c26ae54_def\n");
