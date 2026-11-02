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
undefined4 FUN_8c0e8598_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0e8598");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar6_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = 0;
  iVar4 = 0;
  for (iVar6 = 0; iVar6 < 3; iVar6 = iVar6 + 1) {
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      if (*(le<int>* )(unsigned)(iVar5 * 0x80 + ar5) != -1) {
        ar6_00 = *(le<undefined4>* )(unsigned)(ar5 + iVar5 * 0x80 + 0x2c);
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0fef94))))
                          (0x8c3eb324,*(le<undefined4>* )(unsigned)(iVar5 * 0x80 + ar5),ar6_00,ar7));
        *(le<undefined4>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20) = uVar1;
        if (*(le<int>* )(unsigned)(iVar5 * 0x80 + ar5) == 0xf) {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x108 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
        }
        else {
          iVar3 = ar5 + iVar5 * 0x80;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x108 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x148 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,iVar3,ar6_00,ar7));
          iVar3 = (int)(short)uVar1;
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          uVar1 = 0x8c3eb334;
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xe0 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,0x8c3eb334,iVar3,ar7));
          iVar2 = *(le<int>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar2 + 8) + 0x5c))))(iVar2,uVar1,iVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d6fb8))))
                    (ar4 + iVar6 * 0x80 + iVar7 * 0x20 + 0xa4,uVar1,iVar3,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c4da0))))
                  (ar4,*(le<undefined4>* )(unsigned)(0xa4 + ar4 + iVar6 * 0x80 + iVar7 * 0x20),iVar3,ar7));
        iVar4 = iVar4 + 1;
      }
      iVar5 = iVar5 + 1;
    }
  }
  *(le<int>* )(unsigned)(0x410 + ar4) = iVar4;
  return 1;
}

__asm__(".globl FUN_8c0e8598\n.set FUN_8c0e8598, FUN_8c0e8598_def\n");

}
