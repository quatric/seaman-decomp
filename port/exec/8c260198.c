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
undefined4 FUN_8c260198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c260198";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 ar4_00;
  int ar5_00;
  int d;
  int iVar7;
  
  d = *(int *)(unsigned)(ar4 + 0x60);
  iVar4 = *(int *)(unsigned)(ar4 + 0x5c);
  ar5_00 = *(int *)(unsigned)(ar4 + 0x40);
  iVar5 = d + *(int *)(unsigned)(ar4 + 0x78) + -1;
  iVar7 = *(int *)(unsigned)(ar4 + 0x70);
  ar4_00 = *(undefined4 *)(unsigned)(ar4 + 100);
  uVar6 = *(undefined4 *)(unsigned)(ar4 + 0x44);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(iVar5,d,vr6,vr7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010614(iVar5,d,vr6,vr7));
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_10_264ff8(*(undefined4 *)(unsigned)(ar4 + 8),iVar5,ar6,ar7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_010468(d * iVar5,*(undefined4 *)(unsigned)(ar4 + 0x58),vr6,vr7));
  if (iVar1 <= iVar5) {
    iVar3 = iVar3 - ((d - iVar2) + -1);
  }
  iVar7 = iVar7 + iVar3;
  *(int *)(unsigned)(ar4 + 0xa0) = iVar3;
  *(int *)(unsigned)(ar4 + 0xa4) = iVar4 * iVar5;
  if (ar5_00 <= iVar7) {
    iVar7 = iVar7 - ar5_00;
    if (*(int *)(unsigned)(ar4 + 0x58) == 2) {
      uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26014c(ar4_00,ar5_00,uVar6,iVar7));
      return uVar6;
    }
    uVar6 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260180(ar4_00,ar5_00,uVar6,iVar7));
    return uVar6;
  }
  return 0xa4;
}

__asm__(".globl _FUN_8c260198\n.set _FUN_8c260198, _FUN_8c260198_def\n");
