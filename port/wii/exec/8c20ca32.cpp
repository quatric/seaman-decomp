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
int FUN_8c20ca32_def(le<uint>* ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c20ca32");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  le<uint>* puVar4;
  uint ar4_00;
  le<uint>* ar5_00;
  int iVar5;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c20d128(ar4,ar6,ar7,s0));
  if (iVar3 == 0) {
    if ((*ar4 & 0xffff) == 3) {
      iVar3 = 4;
    }
    else {
      if ((1 < ar5) && (iVar3 = 1, puVar4 = ar4, 1 < ar5)) {
        do {
          iVar3 = iVar3 + 1;
          puVar4[10] = *ar4;
          puVar4[0xb] = ar4[1];
          puVar4[0xc] = ar4[2];
          puVar4[0xd] = ar4[3];
          puVar4[0xe] = ar4[4];
          puVar4[0xf] = ar4[5];
          puVar4[0x10] = ar4[6];
          puVar4 = puVar4 + 10;
        } while (iVar3 < ar5);
      }
      puVar4 = ar4;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2038c0(ar4[5] * ar5,ar4,ar7,s0));
      puVar1 = ((void *)(unsigned)0x8c203bda);
      if (iVar3 == 3) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2072b2(3,puVar4,ar7,s0));
      }
      else {
        ar4_00 = ar4[7];
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c203bda(ar4_00,puVar4,ar7,s0));
        iVar5 = 0;
        if (0 < ar5) {
          do {
            puVar2 = ((void *)(unsigned)0x8c203980);
            ar5_00 = ar4 + iVar5 * 10;
            ar5_00[7] = ar4_00;
            puVar4 = ar5_00;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar2)))(ar5_00[5],ar5_00,ar7,s0));
            ar4_00 = ar4_00 + (ar5_00[5] & 0xfffffffc);
            if (iVar3 == 3) {
              iVar3 = 0;
              if (0 < iVar5) {
                do {
                  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4[iVar5 * 10 + 7],puVar4,ar7,s0));
                  iVar3 = iVar3 + 1;
                } while (iVar3 < iVar5);
              }
              (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c2072b2(3,puVar4,ar7,s0));
              return 3;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < ar5);
        }
      }
    }
  }
  return iVar3;
}

__asm__(".globl FUN_8c20ca32\n.set FUN_8c20ca32, FUN_8c20ca32_def\n");

}
