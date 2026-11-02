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
undefined4 FUN_8c262e10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c262e10";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int a7;
  undefined4 uVar3;
  int *a4;
  
  uVar3 = *(undefined4 *)(unsigned)(ar4 + 4);
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8));
  if ((*(char *)(unsigned)(ar4 + 3) == '\x01') &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x24))))(a4,1,ar6,ar7)), iVar1 == 0)) {
    *(undefined1 *)(unsigned)(ar4 + 1) = 3;
    return 3;
  }
  ar5_00 = 1;
  a7 = ar4 + 0x14;
  ar6_00 = 0x7fffffff;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,1,0x7fffffff,a7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25fec0(uVar3,ar5_00,ar6_00,a7));
  if ((((iVar1 == 0) && (1 < *(int *)(unsigned)(ar4 + 0x18))) &&
      (((int)*((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) >> 8 & 0xffU |
       (int)*((short *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14)) << 8 & 0xff00 & 0xffff) == 0x8001)) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c263186(ar4,ar5_00,ar6_00,a7)), iVar1 <= *(int *)(unsigned)(ar4 + 0x34))) {
    *(undefined1 *)(unsigned)(ar4 + 1) = 3;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26316e(ar4,ar5_00,ar6_00,a7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),0,ar6_00,a7));
    if (iVar1 <= (int)(uVar2 >> 1)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25ff3c(uVar3,*(undefined4 *)(unsigned)(ar4 + 0x14),*(undefined4 *)(unsigned)(ar4 + 0x18),a7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25ff8e(uVar3,vr5,vr6,vr7));
      return uVar3;
    }
  }
                    
                    
  uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,1,ar4 + 0x14,vr7));
  return uVar3;
}

__asm__(".globl _FUN_8c262e10\n.set _FUN_8c262e10, _FUN_8c262e10_def\n");
