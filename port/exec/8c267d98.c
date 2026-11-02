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
int FUN_8c267d98_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c267d98";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *in_r3 = 0;
  int iVar1;
  int unaff_r10 = 0;
  int iVar2;
  int iVar3;
  int ar5_00;
  undefined4 in_PR = 0;
  
  iVar1 = ar7;
  if (*in_r3 == 0) {
    ar7 = 0xd000001;
  }
  else if (unaff_r10 == 0) {
    ar7 = 0x7000103;
  }
  else {
    iVar3 = (int)(char)ar5;
    if ((0 < iVar3) && (iVar3 < 3)) {
      ar6 = (int)*(char *)(unsigned)(unaff_r10 + 1);
      iVar2 = (short)*(char *)(unsigned)(unaff_r10 + 1) * 0x2c + *in_r3 + 0xa8;
      if ((-1 < iVar3) && (iVar3 <= *(char *)(unsigned)(iVar2 + 4))) {
        *(char *)(unsigned)(iVar2 + 5) = (char)ar5;
        ar5_00 = ar7;
        if (0 < iVar3) {
          do {
            ar6 = *(int *)(unsigned)(ar5_00 * 4 + iVar2 + 0x1c);
            iVar1 = 0;
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267b30(unaff_r10,ar5_00,ar6,0));
            ar5_00 = ar5_00 + 1;
          } while (ar5_00 < iVar3);
        }
        goto LAB_8c267e0a;
      }
    }
    ar7 = 0x3000001;
  }
LAB_8c267e0a:
  if (ar7 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c267d88),ar7,ar6,iVar1); });
  }
  return ar7;
}

__asm__(".globl _FUN_8c267d98\n.set _FUN_8c267d98, _FUN_8c267d98_def\n");
