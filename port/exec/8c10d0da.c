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
undefined4 FUN_8c10d0da_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10d0da";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint ar6_00;
  uint ar6_01;
  int iVar2;
  
  ar6_01 = ar5 * 2;
  if (*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 100) + 0xc) == ar6_01) {
LAB_8c10d11a:
    ar6_00 = ar5 * 3;
    if (*(ushort *)(unsigned)(*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)) + 0xc) != ar6_00) {
      ar7 = 1;
      uVar1 = 1;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111adc(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),1,ar6_00,1));
      if (iVar2 == 0) goto LAB_8c10d152;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111dfe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),uVar1,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0x28) = iVar2;
      *(uint *)(unsigned)(ar4 + 0x2c) = ar6_01 + iVar2;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c111fbe))))
              (*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)))[1],ar6_00,ar7));
    uVar1 = 0;
  }
  else {
    iVar2 = *(int *)(unsigned)(ar4 + 100);
    ar7 = *(undefined4 *)(unsigned)(iVar2 + 0x18);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111adc(iVar2,*(undefined4 *)(unsigned)(iVar2 + 8),ar6_01,ar7));
    if (iVar2 != 0) goto LAB_8c10d11a;
LAB_8c10d152:
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c10d0da\n.set _FUN_8c10d0da, _FUN_8c10d0da_def\n");
