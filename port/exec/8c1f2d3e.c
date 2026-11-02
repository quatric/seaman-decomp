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
undefined4 FUN_8c1f2d3e_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1f2d3e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  ushort *ar5_00;
  int iVar2;
  uint a6;
  uint a6_00;
  uint uVar3;
  ushort *a5;
  byte *ar5_01;
  byte *ar4_00;
  byte *ain0;
  
  ar4_00 = (byte *)(unsigned)(ar4 + 0x800);
  a6_00 = 0;
  a5 = (ushort *)(unsigned)(ar7 + 1);
  (*(uint *)(fr0_ - 0x24)) = 1;
  uVar3 = 1;
  (*(int *)(fr0_ - 0x2c)) = 0;
  ain0 = ar4_00;
  (*(int *)(fr0_ - 0x30)) = ar5;
  (*(int *)(fr0_ - 0x28)) = ar6;
  do {
    if ((ain0 <= ar4_00) || (ar5_01 = ar4_00, ain0 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar2 = (ar4 - (int)ar4_00) + 0x800;
      ar5_01 = (byte *)(unsigned)(ar4 - iVar2);
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c1f2a5c(ar4_00,ar5_01,iVar2,ar7); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f19ec((*(int *)(fr0_ - 0x30)),1,ar4,ar7));
      if (iVar2 != 0) {
        return 0;
      }
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
    }
    ar5_00 = ((ushort *)(fr0_ - 0x34));
    a6 = 2;
    ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 52)); FUN_8c1f2a5c(ar5_01 + 6,ar5_00,2,ar7); });
    if ((((ushort *)(fr0_ - 0x34))[0] == (*(uint *)(fr0_ - 0x24))) &&
       ((uVar3 == 1 ||
        ((*ar5_01 == a6_00 &&
         (ar5_00 = a5, a6 = a6_00, iVar2 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f2a74(ar5_01 + 8,a5,a6_00,ar7)), iVar2 != 0)))))) {
      a5 = (ushort *)(unsigned)((int)a5 + a6_00);
      (*(uint *)(fr0_ - 0x24)) = uVar3;
      if ((char)*a5 == '\0') {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f1714(ar5_01 + 2,ar5_00,a6,ar7));
        return uVar1;
      }
      if (uVar3 != 1) {
        a5 = (ushort *)(unsigned)((int)a5 + 1);
      }
      a6_00 = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c1f2b1c(a5,((undefined1 *)(unsigned)0x8c26c560),a6,ar7));
    }
    uVar3 = uVar3 + 1;
    iVar2 = (*ar5_01 & 1) + (uint)*ar5_01 + 8;
    (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + iVar2;
    ar4_00 = ar5_01 + iVar2;
  } while ((*(int *)(fr0_ - 0x2c)) < (*(int *)(fr0_ - 0x28)));
  return 0;
}

__asm__(".globl _FUN_8c1f2d3e\n.set _FUN_8c1f2d3e, _FUN_8c1f2d3e_def\n");
