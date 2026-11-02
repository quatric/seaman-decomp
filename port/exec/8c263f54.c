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
int FUN_8c263f54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c263f54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int *a4;
  undefined4 a5;
  undefined1 *puVar3;
  undefined4 in_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar3 = ((undefined1 *)(fr0_ - 0x8));
  }
  else {
    puVar3 = ((undefined1 *)(fr0_ - 0xc));
  }
  *(undefined4 *)(unsigned)(puVar3 + -4) = in_PR;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c263cd4(ar4,ar5,ar6,ar7));
  if ((1 < iVar1) && (*(int *)(unsigned)(ar4 + 0x14) != 0)) {
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
    a5 = 1;
    *(unsigned *)(unsigned)(puVar3 + -0xc) = a4;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x24))))(a4,1,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar3 + -0xc) = uVar2;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c263df6(ar4,a5,ar6,ar7));
    *(undefined4 *)(unsigned)(puVar3 + -8) = uVar2;
    (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c263dd8(ar4,a5,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 12)), libgcc_divide_helper_010468(*(undefined4 *)(unsigned)(puVar3 + -0xc),*(int *)(unsigned)(puVar3 + -8) * 0x12,vr6,vr7))
    ;
    iVar1 = iVar1 << 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c263f54\n.set _FUN_8c263f54, _FUN_8c263f54_def\n");
