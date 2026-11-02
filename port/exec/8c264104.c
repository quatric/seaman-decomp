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
undefined4 FUN_8c264104_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c264104";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263cd4(ar4,ar5,ar6,ar7));
  *(char *)(unsigned)(ar4 + 0x72) = (char)ar5;
  if ((iVar1 != 3) && (iVar1 != 4)) {
    return iVar1;
  }
  if (ar5 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c2691b8))))
              (*(undefined4 *)(unsigned)(ar4 + 0xc),0,ar6,ar7));
    iVar1 = 0x7a120;
    do {
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c269738))))
                      (*(undefined4 *)(unsigned)(ar4 + 0xc),vr5,vr6,vr7));
    return uVar2;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c2691b8))))
                    (*(undefined4 *)(unsigned)(ar4 + 0xc),1,vr6,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c264104\n.set _FUN_8c264104, _FUN_8c264104_def\n");
