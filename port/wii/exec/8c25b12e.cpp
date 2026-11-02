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
undefined4
FUN_8c25b12e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c25b12e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  undefined4 s4 = *(le<undefined4>* )(vsp + 4);
  undefined4 s8 = *(le<undefined4>* )(vsp + 8);
  undefined4 s12 = *(le<undefined4>* )(vsp + 12);
  undefined4 s16 = *(le<undefined4>* )(vsp + 16);
  undefined4 s20 = *(le<undefined4>* )(vsp + 20);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int a4;
  int a4_00;
  undefined1 *ar4_00;
  undefined1 *puVar6;
  
  iVar1 = (int)(int)0xffffff24;
  *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1 + 4) = ar5;
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20aacc((fr0_ + (int)0xffffffe4) + iVar1,ar5,ar6,ar7));
  iVar3 = 0x8c4aa70c;
  if (*(le<undefined4>* )(unsigned)0x8c4aa6f8 == *(le<int>* )(unsigned)((int)&s20 + iVar1)) {
    iVar3 = 0x8c4aa6e4;
  }
  a4 = *(le<int>* )(unsigned)(iVar3 + 0x10);
  a4_00 = *(le<int>* )(unsigned)(iVar3 + 0xc);
  ar4_00 = ((undefined1 *)(unsigned long)*(le<unsigned>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1 + 4));
  *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + 0xd0 + iVar1 + 4) = a4_00 * a4 * 3;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20d082(ar4_00,iVar3,ar6,ar7));
  if (ar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124((int)0x4d42,ar4,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(*(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + 0xd0 + iVar1 + 4),ar4 + 2,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 6,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0x36,ar4 + 10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0x28,ar4 + 0xe,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(a4_00,ar4 + 0x12,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(a4,ar4 + 0x16,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124(1,ar4 + 0x1a,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b124(0x18,ar4 + 0x1c,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x1e,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x22,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x26,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x2a,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x2e,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c25b10c(0,ar4 + 0x32,ar6,ar7));
    iVar3 = *(le<undefined4>* )(unsigned)0x8c4aa4e8;
    iVar4 = a4 + -1;
    if (iVar3 == 0) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 0;
    }
    else if (iVar3 == 1) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 1;
    }
    else {
      if (iVar3 != 3) {
        if (iVar3 == 4) {
          iVar3 = a4_00 * iVar4;
          for (; -1 < iVar4; iVar4 = iVar4 + -1) {
            iVar1 = 0;
            puVar5 = (undefined1 *)(unsigned)(iVar3 * 3 + ar4 + 0x36);
            if (0 < a4_00) {
              do {
                iVar1 = iVar1 + 1;
                *puVar5 = *ar4_00;
                puVar6 = ar4_00 + 2;
                puVar5[1] = ar4_00[1];
                ar4_00 = ar4_00 + 3;
                puVar5[2] = *puVar6;
                puVar5 = puVar5 + 3;
              } while (iVar1 < a4_00);
            }
            iVar3 = iVar3 - a4_00;
          }
          return 4;
        }
        if (iVar3 != 5) {
          return iVar3;
        }
        iVar3 = a4_00 * iVar4;
        for (; -1 < iVar4; iVar4 = iVar4 + -1) {
          iVar1 = 0;
          puVar5 = (undefined1 *)(unsigned)(iVar3 * 3 + ar4 + 0x36);
          if (0 < a4_00) {
            do {
              iVar1 = iVar1 + 1;
              *puVar5 = *ar4_00;
              puVar5[1] = ar4_00[1];
              puVar5[2] = ar4_00[2];
              ar4_00 = ar4_00 + 4;
              puVar5 = puVar5 + 3;
            } while (iVar1 < a4_00);
          }
          iVar3 = iVar3 - a4_00;
        }
        return 5;
      }
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x24)) + iVar1) = 3;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20de80(ar4 + 0x36,ar4_00,a4_00,a4));
  }
  return uVar2;
}

__asm__(".globl FUN_8c25b12e\n.set FUN_8c25b12e, FUN_8c25b12e_def\n");

}
