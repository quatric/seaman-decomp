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
undefined4 FUN_8c112b6e_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c112b6e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int ar6_00;
  uint uVar5;
  int iVar6;
  int a4;
  
  iVar6 = ar4[0x17];
  a4 = *ar4;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x10))))(a4,(iVar6 + 1) * 4,ar6,ar7));
  if (iVar2 != 0) {
    if (iVar6 != 0) {
      ar6_00 = iVar6 << 2;
      (vsp = ((unsigned long)(fr0_ - 0)), memmove(iVar2,ar4[0x16],ar6_00,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,ar4[0x16],ar6_00,ar7));
    }
    ar4[0x16] = iVar2;
    ar6 = 0x20;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))
                      (a4,(uint)(*(ushort *)(unsigned)((int)0x1e4 + (int)ar4) >> 5),0x20,ar7));
    if (iVar2 != 0) {
      if (ar5 != 0) {
        uVar1 = *(ushort *)(unsigned)((int)0x1e4 + (int)ar4);
        *(int *)(unsigned)(ar5 + 0x18) = iVar2;
        uVar5 = (uint)(uVar1 >> 5);
        uVar3 = 0;
        uVar4 = uVar3;
        if (uVar5 != 1) {
          do {
            uVar3 = uVar4 + 1;
            *(uint *)(unsigned)(uVar4 * 0x20 + iVar2 + 0x18) = (uVar4 + 1) * 0x20 + iVar2;
            uVar4 = uVar3;
          } while (uVar3 < uVar5 - 1);
        }
        *(undefined4 *)(unsigned)(uVar3 * 0x20 + iVar2 + 0x18) = 0;
      }
      *(int *)(unsigned)(ar4[0x16] + iVar6 * 4) = iVar2;
      ar4[0x17] = iVar6 + 1;
      return iVar2;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c112b6e\n.set _FUN_8c112b6e, _FUN_8c112b6e_def\n");
