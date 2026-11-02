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
undefined4 FUN_8c112d82_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112d82";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  code *extraout_r3 = 0;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = ar4[0x22];
  iVar6 = *ar4;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x10))))(iVar6,(iVar5 + 1) * 4,ar6,ar7));
  if (iVar1 != 0) {
    if (iVar5 != 0) {
      ar6 = iVar5 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar1,ar4[0x21],ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x18))))(iVar6,ar4[0x21],ar6,ar7));
    }
    ar4[0x21] = iVar1;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)extraout_r3))(iVar6,iVar1 * 0x18,ar6,ar7));
    if (iVar1 != 0) {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01051c((uint)*(ushort *)(unsigned)(ar4 + 0x79),0x18,vr6,vr7));
      if (ar5 == 0) {
        ar4[0x23] = iVar1;
        ar4[0x20] = 0;
      }
      else {
        *(int *)(unsigned)(ar5 + 0x10) = iVar1;
      }
      uVar4 = 0;
      if (iVar6 != 1) {
        do {
          iVar3 = uVar4 + 1;
          iVar2 = uVar4 * 0x18;
          uVar4 = uVar4 + 1;
          *(int *)(unsigned)(iVar2 + iVar1 + 0x10) = iVar3 * 0x18 + iVar1;
        } while (uVar4 < iVar6 - 1U);
      }
      *(undefined4 *)(unsigned)(uVar4 * 0x18 + iVar1 + 0x10) = 0;
      *(int *)(unsigned)(ar4[0x21] + iVar5 * 4) = iVar1;
      ar4[0x22] = iVar5 + 1;
      return iVar1;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c112d82\n.set _FUN_8c112d82, _FUN_8c112d82_def\n");
