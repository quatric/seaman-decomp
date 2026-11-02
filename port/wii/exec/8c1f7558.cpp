#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c1f7558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f7558");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 352; for (int i_ = 0; i_ < 352; i_++) z_[i_] = 0; }
  bool bVar1;
  le<int>* piVar2;
  le<int>* piVar3;
  int iVar4;
  le<int>* piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  le<int>* piVar9;
  le<int>* piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f8176(0x8c4749e8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f826c(0x8c4749e8,((undefined1 *)(unsigned)0x8c4749d8),ar6,ar7));
  uVar11 = 0x8c4748c4;
  (*(le<undefined4>* )(unsigned)(unsigned)0x8c474a06) = 0;
  iVar4 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f7b64((*(le<undefined4>* )(unsigned)(unsigned)0x8c4748bc),0x8c4748c4,ar6,ar7));
  if (iVar4 == 0) {
    uVar11 = 0;
  }
  else {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6fc8((*(le<undefined4>* )(unsigned)(unsigned)0x8c4748bc),uVar11,ar6,ar7));
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c474972) == -1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c474972) = 0;
    }
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c474978) == -1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c474978) = 0;
    }
    if ((*(undefined1 *)(unsigned)0x8c47497a) == -1) {
      (*(undefined1 *)(unsigned)0x8c47497a) = '\0';
    }
    if ((*(undefined1 *)(unsigned)0x8c47497b) == -1) {
      (*(undefined1 *)(unsigned)0x8c47497b) = '\0';
    }
    if ((*(le<undefined4>* )(unsigned)(unsigned)0x8c474940) == -1) {
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c474940) = -2;
    }
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748c0) = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6f06(0xffff,0xff,ar6,ar7));
    if (2 < (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748c0)) {
      bVar1 = false;
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e0c(0x14,((le<int>* )(fr0_ - 0x98)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e0c(0x15,((le<int>* )(fr0_ - 0x98)) + 0xf,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e0c(0x16,((le<int>* )(fr0_ - 0x110)),ar6,ar7));
      piVar9 = ((le<int>* )(fr0_ - 0x110)) + 0xf;
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e0c(0x17,piVar9,ar6,ar7));
      piVar10 = ((le<int>* )(fr0_ - 0x120));
      pbVar14 = ((undefined1 *)(unsigned)0x8c26c8c3);
      pbVar15 = ((undefined1 *)(unsigned)0x8c26c8c7);
      do {
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f62cc((uint)*pbVar14,piVar9,ar6,ar7));
        if (piVar5 == (le<int>* )(unsigned)0x0) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piVar10 = *piVar5;
        piVar10 = piVar10 + 1;
      } while (pbVar14 < pbVar15);
      piVar10 = ((le<int>* )(fr0_ - 0x38));
      for (iVar12 = 0; iVar12 < 4; iVar12 = iVar12 + 1) {
        piVar5 = ((le<int>* )(fr0_ - 0x120)) + iVar12;
        if (*piVar5 != 0) {
          iVar8 = 0;
          do {
            if (((le<int>* )(fr0_ - 0x98))[iVar8] == *piVar5) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar2 = ((le<int>* )(fr0_ - 0x98));
          piVar3 = ((le<int>* )(fr0_ - 0x98));
          if (iVar8 == 0x18) {
            for (; piVar9 = piVar3, piVar2 < piVar10; piVar2 = piVar2 + 1) {
              if (*piVar2 == -1) {
                *piVar9 = *piVar5;
                bVar1 = true;
                break;
              }
              piVar3 = piVar9 + 1;
            }
          }
        }
      }
      if (bVar1) {
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e5e(0x14,((le<int>* )(fr0_ - 0x98)),iVar12,piVar10));
        piVar9 = ((le<int>* )(fr0_ - 0x98)) + 0xf;
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e5e(0x15,piVar9,iVar12,piVar10));
      }
      (*(le<unsigned>* )(fr0_ - 0x160) = (unsigned)(unsigned long)(((le<int>* )(fr0_ - 0x140))));
      pbVar14 = ((undefined1 *)(unsigned)0x8c26c8c7);
      pbVar15 = ((undefined1 *)(unsigned)0x8c26c8cf);
      do {
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6342((uint)*pbVar14,piVar9,iVar12,piVar10));
        if (piVar5 == (le<int>* )(unsigned)0x0) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x160)) = *piVar5;
        (*(le<unsigned>* )(fr0_ - 0x160) = (unsigned)(unsigned long)(((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x160)) + 1));
      } while (pbVar14 < pbVar15);
      piVar9 = ((le<int>* )(fr0_ - 0xb0));
      bVar1 = false;
      for (iVar12 = 0; iVar12 < 8; iVar12 = iVar12 + 1) {
        piVar10 = ((le<int>* )(fr0_ - 0x140)) + iVar12;
        if (*piVar10 != 0) {
          iVar8 = 0;
          do {
            if (((le<int>* )(fr0_ - 0x110))[iVar8] == *piVar10) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar5 = ((le<int>* )(fr0_ - 0x110));
          piVar2 = ((le<int>* )(fr0_ - 0x110));
          if (iVar8 == 0x18) {
            for (; piVar5 < piVar9; piVar5 = piVar5 + 1) {
              if (*piVar5 == -1) {
                *piVar2 = *piVar10;
                bVar1 = true;
                break;
              }
              piVar2 = piVar2 + 1;
            }
          }
        }
      }
      if (bVar1) {
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e5e(0x16,((le<int>* )(fr0_ - 0x110)),iVar12,piVar9));
        (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e5e(0x17,((le<int>* )(fr0_ - 0x110)) + 0xf,iVar12,piVar9));
      }
      (*(le<unsigned>* )(fr0_ - 0x160) = (unsigned)(unsigned long)((le<int>* )(unsigned)0x0));
      uVar13 = 0;
      uVar6 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f752a(0x8c474936,3,iVar12,piVar9));
      uVar7 = (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f752a(0x8c474939,3,iVar12,piVar9));
      for (iVar12 = 0; iVar12 < 0x18; iVar12 = iVar12 + 1) {
        piVar10 = ((le<int>* )(fr0_ - 0x120));
        for (piVar9 = ((le<int>* )(fr0_ - 0x120)); piVar9 < ((le<int>* )(fr0_ - 0x110)); piVar9 = piVar9 + 1) {
          if ((*piVar9 != 0) && (((le<int>* )(fr0_ - 0x98))[iVar12] == *piVar10)) {
            (*(le<unsigned>* )(fr0_ - 0x160) = (unsigned)(unsigned long)((le<int>* )(unsigned)((uint)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x160)) | 1)));
          }
          piVar10 = piVar10 + 1;
        }
        (*(le<unsigned>* )(fr0_ - 0x160) = (unsigned)(unsigned long)((le<int>* )(unsigned)((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x160)) << 1)));
        piVar9 = ((le<int>* )(fr0_ - 0x110)) + iVar12;
        piVar5 = ((le<int>* )(fr0_ - 0x140));
        for (piVar10 = ((le<int>* )(fr0_ - 0x140)); piVar10 < ((le<int>* )(fr0_ - 0x120)); piVar10 = piVar10 + 1) {
          if ((*piVar10 != 0) && (*piVar9 == *piVar5)) {
            uVar13 = uVar13 | 1;
          }
          piVar5 = piVar5 + 1;
        }
        uVar13 = uVar13 << 1;
      }
      uVar7 = ~((int)uVar13 >> 1 | ~uVar7);
      ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 352)); FUN_8c1f7540(~((int)((le<int>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x160)) >> 1 | ~uVar6),3,0x8c474936,piVar9); });
      uVar11 = 0x8c474939;
      ({ unsigned long ri0_ = (unsigned long)(uVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 352)); FUN_8c1f7540(uVar7,3,0x8c474939,piVar9); });
      (vsp = ((unsigned long)(fr0_ - 352)), FUN_8c1f6e5e(iVar4 * 4 + 0x19,0x8c474900,uVar11,piVar9));
    }
    uVar11 = 1;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4749e4) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4749e0) = 0;
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c474a04) = 0;
  }
  return uVar11;
}

__asm__(".globl FUN_8c1f7558\n.set FUN_8c1f7558, FUN_8c1f7558_def\n");

}
