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
undefined4 FUN_8c022a1c_def(int ar4,int ar5,le<undefined2>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c022a1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<int>* ar6_00;
  le<int>* piVar3;
  
  (*(le<unsigned>* )(fr0_ - 0xc) = (unsigned)(unsigned long)(((undefined1 *)(unsigned)0x8c4366c0)));
  *ar6 = 0;
  piVar3 = (le<int>* )(unsigned)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
LAB_8c022adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263cd4(piVar3[1],ar5,ar6,ar7));
        if (iVar1 != 1) {
          if ((iVar1 == 2) || (iVar1 == 3)) {
            ar6_00 = ((le<int>* )(fr0_ - 0x14));
            (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c263cd8(piVar3[1],&(*(le<uint>* )(fr0_ - 0x18)),ar6_00,ar7));
            if (0 < (int)(*(le<uint>* )(fr0_ - 0x18))) {
              if ((uint)piVar3[5] < (*(le<uint>* )(fr0_ - 0x18))) {
                piVar3[6] = 0;
              }
              else {
                piVar3[6] = piVar3[6] + 1;
                if (4 < (uint)piVar3[6]) {
                  piVar3[6] = 0;
                  return 1;
                }
              }
            }
            piVar3[5] = (*(le<uint>* )(fr0_ - 0x18));
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            ((le<int>* )(fr0_ - 0x14))[0] =
                 (vsp = ((unsigned long)(fr0_ - 24)), libgcc_divide_helper_0101e4(((le<int>* )(fr0_ - 0x14))[0],0x1e,ar6_00,ar7));
            ((le<int>* )(fr0_ - 0x14))[0] = ((le<int>* )(fr0_ - 0x14))[0] * 5;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                              ((*(le<uint>* )(fr0_ - 0x18)),((le<int>* )(fr0_ - 0x14))[0],ar6_00,ar7));
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(le<undefined2>* )(unsigned)(piVar3[4] * 2 + piVar3[2]);
              piVar3[4] = piVar3[4] + 1;
              return 3;
            }
            return 2;
          }
          if (iVar1 != 4) {
            return 1;
          }
        }
        return 2;
      }
      if (iVar1 != 3) goto LAB_8c022adc;
    }
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl FUN_8c022a1c\n.set FUN_8c022a1c, FUN_8c022a1c_def\n");

}
