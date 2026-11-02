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
undefined4 FUN_8c0f4258_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0f4258");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* ar5_00;
  undefined4 uVar2;
  int iVar3;
  le<int>* a5;
  int iVar4;
  int iVar5;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_bb4_0e06e4(ar5,ar5,ar6,ar7));
  iVar4 = 0;
  do {
    if (iVar1 <= iVar4) {
LAB_8c0f42f4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x118 + *ar5))))(ar5,ar5_00,ar6,ar7));
      uVar2 = 1;
      if (1 < iVar1) {
        iVar1 = ar4;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0db864(ar5,ar4,ar6,ar7));
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(ar4,iVar1,ar6,ar7));
        for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_a4_032154(uVar2,iVar1,ar6,ar7));
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0x14))))
                            (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),iVar1,ar6,ar7));
          if (iVar3 == 1) {
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4dc4(ar4,uVar2,ar6,ar7));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4dc4(uVar2,ar4,ar6,ar7));
            return uVar2;
          }
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), list_node_next(uVar2,iVar1,ar6,ar7));
        }
      }
      return uVar2;
    }
    ar5_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x104 + *ar5))))(ar5,iVar4,ar6,ar7));
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)) + 0x14))))
                      (((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0xa4 + ar4)),(int)ar5_00 + 0xc4,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e1c(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    a5 = (le<int>* )(unsigned)((int)ar5_00 + 0xc4);
    iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0xa8) + 0x14))))
                      ((le<int>* )(unsigned)(ar4 + 0xa8),a5,ar6,ar7));
    if (iVar5 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4e28(ar4,ar5_00,ar6,ar7));
      goto LAB_8c0f42f4;
    }
    iVar4 = iVar4 + 1;
    ar5_00 = a5;
  } while( true );
}

__asm__(".globl FUN_8c0f4258\n.set FUN_8c0f4258, FUN_8c0f4258_def\n");

}
