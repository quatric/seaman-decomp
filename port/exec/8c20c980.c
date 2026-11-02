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
int FUN_8c20c980_def(uint *ar4,uint *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20c980";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(undefined4 *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d128(ar4,ar6,ar7,s0));
  puVar1 = ((void *)(unsigned)0x8c2072b2);
  if (iVar2 == 0) {
    *ar5 = *ar4;
    ar5[1] = ar4[1];
    ar5[2] = ar4[2];
    ar5[3] = ar4[3];
    ar5[4] = ar4[4];
    ar5[5] = ar4[5];
    ar5[6] = ar4[6];
    if ((*ar4 & 0xffff) == 3) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203a92(ar4,ar6,ar7,s0));
      if (iVar2 != 3) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203a92(ar5,ar6,ar7,s0));
        if (iVar2 != 3) {
          return iVar2;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203cd0(ar4,ar6,ar7,s0));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar6,ar7,s0));
        return 3;
      }
    }
    else {
      ar6 = ar4;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2038c0(ar4[5],ar4,ar7,s0));
      if (iVar2 != 3) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2038c0(ar5[5],ar5,ar7,s0));
        if (iVar2 != 3) {
          return iVar2;
        }
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c203bda(ar4[7],ar5,ar7,s0));
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar5,ar7,s0));
        return 3;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(3,ar6,ar7,s0));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c20c980\n.set _FUN_8c20c980, _FUN_8c20c980_def\n");
