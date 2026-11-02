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
undefined4 FUN_8c1155a4_def(undefined4 ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c1155a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int *unaff_r14 = 0;
  
  iVar8 = *unaff_r14;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))(iVar8,(unaff_r14[0xe] + 1) * 4,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  *(undefined4 *)(unsigned)((int)0xa8 + (int)unaff_r14) = uVar2;
  if (*(int *)(unsigned)((int)0xa8 + (int)unaff_r14) != 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                      (iVar8,(*(int *)(unsigned)((int)0x144 + (int)unaff_r14) +
                             *(int *)(unsigned)((int)0xb4 + (int)unaff_r14)) * 4,ar6,ar7));
    *(undefined4 *)(unsigned)((int)0xac + (int)unaff_r14) = uVar2;
    if (*(int *)(unsigned)((int)0xac + (int)unaff_r14) != 0) {
      if (*(int *)(unsigned)((int)0x124 + (int)unaff_r14) == 0) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11318e(unaff_r14,0,ar6,ar7));
      }
      ar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)((int)0x9c + (int)unaff_r14));
      piVar6 = ar6 + *(int *)(unsigned)(0x9c + 0x18 + (int)unaff_r14);
      iVar3 = 0;
      for (piVar5 = ar6; piVar5 < piVar6; piVar5 = piVar5 + 1) {
        ar7 = *piVar5;
        ar6 = (int *)(unsigned)unaff_r14[0x11];
        iVar4 = ar6[ar7 + 1] - ar6[ar7];
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        iVar3 = iVar3 + (iVar4 >> 2);
      }
      iVar4 = (int)0xb8;
      *(int *)(unsigned)(iVar4 + (int)unaff_r14) = iVar3;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar8 + 0x10))))
                        (iVar8,(unaff_r14[0xe] + *(int *)(unsigned)(iVar4 + (int)unaff_r14) + 1) * 4,ar6,ar7));
      *(undefined4 *)(unsigned)((int)0xa0 + (int)unaff_r14) = uVar2;
      iVar8 = (int)0xb8;
      *(int *)(unsigned)(iVar8 + -0x14 + (int)unaff_r14) =
           (unaff_r14[0xe] + *(int *)(unsigned)(iVar8 + (int)unaff_r14) + 1) * 4 +
           *(int *)(unsigned)(iVar8 + -0x18 + (int)unaff_r14);
      if (*(int *)(unsigned)(iVar8 + -0x18 + (int)unaff_r14) != 0) {
        uVar7 = 0;
        iVar8 = unaff_r14[0xe] * 4 + *(int *)(unsigned)((int)0xa0 + (int)unaff_r14);
        if (unaff_r14[0xe] != 0) {
          do {
            iVar3 = (int)0x98;
            *(int *)(unsigned)(*(int *)(unsigned)((int)0xa0 + (int)unaff_r14) + uVar7 * 4) = iVar8;
            for (piVar5 = ((int *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(iVar3 + (int)unaff_r14) + uVar7 * 4));
                piVar5 < ((int *)(unsigned long)*(unsigned *)(unsigned)((uVar7 + 1) * 4 + *(int *)(unsigned)(iVar3 + (int)unaff_r14)));
                piVar5 = piVar5 + 1) {
              iVar4 = *(int *)(unsigned)((*piVar5 + 1) * 4 + unaff_r14[0x11]) -
                      *(int *)(unsigned)(*piVar5 * 4 + unaff_r14[0x11]);
              if (iVar4 < 0) {
                iVar4 = iVar4 + 3;
              }
              iVar8 = iVar8 + (iVar4 >> 2) * 4;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < (uint)unaff_r14[0xe]);
        }
        return 0;
      }
    }
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14,0x71,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c1155a4\n.set _FUN_8c1155a4, _FUN_8c1155a4_def\n");
