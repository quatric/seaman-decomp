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
undefined4 FUN_8c0b61bc_def(int ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c0b61bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  le<int>* ar6_00;
  undefined4 ar6_01;
  
  uVar3 = ar5;
  ar6_00 = ar6;
  iVar2 = ar7;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 2) {
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13bb4c) + *(le<int>* )(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b63e0(ar4,ar5,ar6,ar7));
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,1,ar6_00,ar7); });
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)(iVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02f404(ar4,3,ar6_00,ar7); });
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fdd8(ar4,ar5,ar6_00,ar7));
    }
    else if (iVar1 == 2) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb4))))(*ar6,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c027954(*ar6,uVar3,ar6_00,ar7));
      }
    }
    else if (iVar1 == 4) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,uVar3,ar6_00,ar7));
      if (iVar2 == 1) {
        if (*(le<int>* )(unsigned)(ar4 + 0x88) == 1) {
          ar6_01 = 0x1b;
          uVar3 = 7;
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar6[6],7,0x1b,ar7));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
          *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
          if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
            (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                      (*(le<int>* )(unsigned)(ar4 + 0x6c),uVar3,ar6_01,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
          }
          *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
        }
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  return 1;
}

__asm__(".globl FUN_8c0b61bc\n.set FUN_8c0b61bc, FUN_8c0b61bc_def\n");

}
