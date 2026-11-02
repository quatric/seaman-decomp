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
undefined4 FUN_8c1155a0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1155a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  
  iVar8 = *ar4;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(ar4[0xe] + 1) * 4,vr6,vr7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = uVar2;
  if (*(int *)(unsigned)((int)0xa8 + (int)ar4) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                      (iVar8,(*(int *)(unsigned)((int)0x144 + (int)ar4) +
                             *(int *)(unsigned)((int)0xb4 + (int)ar4)) * 4,vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = uVar2;
    if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
      if (*(int *)(unsigned)((int)0x124 + (int)ar4) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(ar4,0,vr6,vr7));
      }
      piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x9c + (int)ar4));
      piVar5 = piVar7 + *(int *)(unsigned)(0x9c + 0x18 + (int)ar4);
      iVar3 = 0;
      for (; piVar7 < piVar5; piVar7 = piVar7 + 1) {
        iVar4 = *(int *)(unsigned)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(unsigned)(*piVar7 * 4 + ar4[0x11]);
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(unsigned)(iVar4 + (int)ar4) = iVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(ar4[0xe] + *(int *)(unsigned)(iVar4 + (int)ar4) + 1) * 4,vr6,vr7));
      *(undefined4 *)(unsigned)((int)0xa0 + (int)ar4) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(unsigned)(iVar8 + -0x14 + (int)ar4) =
           (ar4[0xe] + *(int *)(unsigned)(iVar8 + (int)ar4) + 1) * 4 + *(int *)(unsigned)(iVar8 + -0x18 + (int)ar4);
      if (*(int *)(unsigned)(iVar8 + -0x18 + (int)ar4) != 0) {
        uVar6 = 0;
        iVar8 = ar4[0xe] * 4 + *(int *)(unsigned)((int)0xa0 + (int)ar4);
        if (ar4[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(unsigned)(*(int *)(unsigned)((int)0xa0 + (int)ar4) + uVar6 * 4) = iVar8;
            for (piVar7 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)ar4) + uVar6 * 4));
                piVar7 < ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar6 + 1) * 4 + *(int *)(unsigned)(iVar3 + (int)ar4)));
                piVar7 = piVar7 + 1) {
              iVar4 = *(int *)(unsigned)((*piVar7 + 1) * 4 + ar4[0x11]) - *(int *)(unsigned)(*piVar7 * 4 + ar4[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < (uint)ar4[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,0x71,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c1155a0\n.set _FUN_8c1155a0, _FUN_8c1155a0_def\n");
