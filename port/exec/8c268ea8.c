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
undefined4 FUN_8c268ea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268ea8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c26a100(((undefined1 *)(fr0_ - 0x1c)),ar5,ar6,ar7));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x38))));
  iVar4 = *(int *)(unsigned)(ar4 + 0x30);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) + 0x20))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x18)),0,ar6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_010468(0x20,*(undefined4 *)(unsigned)(ar4 + 8),vr6,vr7));
  iVar2 = iVar2 << 3;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), libgcc_divide_helper_010468(uVar1,iVar2,vr6,vr7));
  iVar5 = iVar3 * iVar2 - iVar4;
  *(int *)(unsigned)(ar4 + 0x30) = iVar3 * iVar2;
  if (iVar5 < 0) {
    iVar5 = iVar5 + *(int *)(unsigned)(ar4 + 0x28);
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x34) - iVar5;
  if (iVar2 < 0) {
    *(undefined1 *)(unsigned)(ar4 + 4) = 1;
    iVar2 = 0;
    iVar5 = *(int *)(unsigned)(ar4 + 0x2c) - iVar4;
  }
  if ((*(char *)(unsigned)(ar4 + 4) == '\x01') &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 28)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,uVar1,ar6,ar7)), iVar3 == 1)) {
    *(undefined4 *)(unsigned)(ar4 + 0x2c) = *(undefined4 *)(unsigned)(ar4 + 0x30);
    *(undefined1 *)(unsigned)(ar4 + 4) = 0;
  }
  *(int *)(unsigned)(ar4 + 0x34) = iVar2;
  *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + iVar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c26a118(((undefined1 *)(fr0_ - 0x1c)),uVar1,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c268ea8\n.set _FUN_8c268ea8, _FUN_8c268ea8_def\n");
