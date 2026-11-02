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
int FUN_8c1fe9ae_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fe9ae");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *a4;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (ar4 == 0) {
    return 0xffffff00;
  }
  iVar6 = 0;
  iVar7 = ar5;
  if ((((((undefined1 *)(unsigned)0x8c4783e2))[*(le<int>* )(unsigned)(ar4 + 0x28) * 0x148] != '\0') &&
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(le<undefined4>* )(unsigned)(ar4 + 0x28),ar5,ar6,ar7)), iVar1 != 0)) &&
     ((((undefined1 *)(unsigned)0x8c4783e8))[*(le<int>* )(unsigned)(ar4 + 0x28) * 0x148] != '\0')) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(le<undefined4>* )(unsigned)(ar4 + 0x28),iVar7,ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(le<undefined4>* )(unsigned)(ar4 + 0x28),iVar7,ar6,ar7));
    }
    else {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(*(le<undefined4>* )(unsigned)(ar4 + 0x28),iVar7,ar6,ar7));
      if (-1 < iVar1) {
        iVar1 = *(le<int>* )(unsigned)(ar4 + 0x28);
        if (*(le<int>* )(unsigned)(ar4 + 4) != 0) {
          if (ar5 != 0) {
            iVar7 = iVar1 * 0x148;
            *(le<undefined4>* )(unsigned)(iVar7 + -0x73b87bf0) = 1;
            *(le<undefined4>* )(unsigned)(iVar7 + -0x73b87bec) =
                 *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c273a84) + *(le<int>* )(unsigned)(iVar7 + -0x73b87c1c) * 0x50);
          }
          a4 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200a84(iVar1,*(le<undefined4>* )(unsigned)(ar4 + 0x2c),ar6,ar7));
          if (*(le<int>* )(unsigned)(ar4 + 8) == 1) {
            uVar2 = 0xcc;
          }
          else {
            uVar2 = 0x33;
          }
          *a4 = uVar2;
          a4[1] = *(undefined1 *)(unsigned)(ar4 + 1);
          (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0x10))))(a4,2,*(le<undefined4>* )(unsigned)(ar4 + 0x38),ar7));
          (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0x10))))(a4,0x18,*(le<undefined4>* )(unsigned)(ar4 + 0x30),ar7));
          (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0x10))))(a4,0x1a,(int)*(le<short>* )(unsigned)(ar4 + 2),ar7));
          puVar4 = (undefined1 *)(unsigned)(ar4 + 0x10);
          puVar5 = a4 + 0x10;
          for (puVar3 = a4 + 4; puVar3 < puVar5; puVar3 = puVar3 + 1) {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar2;
          }
          puVar3 = (undefined1 *)(unsigned)(ar4 + 0x20);
          ar6 = a4 + 0x18;
          for (; puVar5 < ar6; puVar5 = puVar5 + 1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar5 = uVar2;
          }
          iVar7 = *(le<int>* )(unsigned)(ar4 + 0x2c);
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200a9c(iVar1,iVar7,ar6,ar7));
          iVar6 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200346(iVar1,iVar7,ar6,ar7));
          if (iVar6 < 0) goto LAB_8c1feafe;
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2007f0(iVar1,iVar7,ar6,ar7));
        }
        iVar6 = 0;
      }
    }
  }
LAB_8c1feafe:
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200ae4(ar4,iVar7,ar6,ar7));
  return iVar6;
}

__asm__(".globl FUN_8c1fe9ae\n.set FUN_8c1fe9ae, FUN_8c1fe9ae_def\n");

}
