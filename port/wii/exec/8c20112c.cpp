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
uint FUN_8c20112c_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  TRACE_ENTER("FUN_8c20112c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);
  uint s4 = *(le<uint>* )(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 288; for (int i_ = 0; i_ < 288; i_++) z_[i_] = 0; }
  uint uVar1;
  le<int>* ar7_00;
  uint uVar2;
  int iVar3;
  
  ar7_00 = &(*(le<int>* )(fr0_ - 0x24));
  (*(le<int>* )(fr0_ - 0x20)) = ar6;
  (*(le<undefined4>* )(fr0_ - 0x1c)) = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe350(ar4,1,ar6,ar7));
  if (-1 < (int)uVar1) {
    if (uVar1 < ar7) {
      uVar1 = 0xffffff04;
    }
    else if ((s4 & 0x80000000) == 0) {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe646(ar4,(*(le<undefined4>* )(fr0_ - 0x1c)),s0,&(*(le<int>* )(fr0_ - 0x24))));
      if (-1 < (int)uVar1) {
        iVar3 = ar4 * 0x148;
        uVar2 = 0;
        *(char *)(unsigned)((*(le<int>* )(fr0_ - 0x24)) + 1) = (char)s4;
        *(le<undefined4>* )(unsigned)(iVar3 + -0x73b87bf0) = 1;
        *(le<uint>* )(unsigned)(iVar3 + -0x73b87bec) =
             *(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c273aa4) + *(le<int>* )(unsigned)(iVar3 + -0x73b87c1c) * 0x50) + ar7;
        iVar3 = (*(le<int>* )(fr0_ - 0x20));
        if (ar7 != 0) {
          do {
            uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fecf2((*(le<int>* )(fr0_ - 0x24)),iVar3,s0,ar7_00));
            if ((int)uVar1 < 0) goto LAB_8c201208;
            uVar2 = uVar2 + 1;
            iVar3 = iVar3 + 0x200;
          } while (uVar2 < ar7);
        }
        uVar1 = 0;
LAB_8c201208:
        (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c1fe9ae((*(le<int>* )(fr0_ - 0x24)),0,s0,ar7_00));
      }
    }
    else {
      uVar1 = (vsp = ((unsigned long)(fr0_ - 288)), FUN_8c201240(ar4,(*(le<undefined4>* )(fr0_ - 0x1c)),(*(le<int>* )(fr0_ - 0x20)),ar7));
    }
  }
  return uVar1;
}

__asm__(".globl FUN_8c20112c\n.set FUN_8c20112c, FUN_8c20112c_def\n");

}
