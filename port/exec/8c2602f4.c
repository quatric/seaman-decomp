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
undefined4 FUN_8c2602f4_def(int ar4,int ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c2602f4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(unsigned)(0xa8 + ar4) == 0) {
    if ((*(int *)(unsigned)(ar4 + 4) == 1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),vr5,vr6,vr7)), iVar1 == 0)) {
      ar5 = ar4 + 0x70;
      ar7 = ar4 + 0x78;
      ar6 = ar4 + 0x74;
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + ar4))))(*(undefined4 *)(unsigned)(0x88 + 4 + ar4),vr5,vr6,vr7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260062(ar4,ar5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 4) = 2;
    }
    iVar1 = *(int *)(unsigned)(ar4 + 4);
    if (iVar1 == 2) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c26501c(*(undefined4 *)(unsigned)(ar4 + 8),vr5,vr6,vr7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_264f82(*(undefined4 *)(unsigned)(ar4 + 8),vr5,vr6,vr7));
      if (iVar1 == 3) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260198(ar4,ar5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c264fea(*(undefined4 *)(unsigned)(ar4 + 8),vr5,vr6,vr7));
        iVar1 = (int)0x90;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar1 + ar4))))
                          (*(undefined4 *)(unsigned)(iVar1 + 4 + ar4),*(undefined4 *)(unsigned)(iVar1 + 0x14 + ar4),
                           *(undefined4 *)(unsigned)(iVar1 + 0x10 + ar4),vr7));
        *(undefined4 *)(unsigned)(ar4 + 4) = 3;
      }
    }
    return iVar1;
  }
  if (*(short *)(unsigned)(0xa8 + ar4) == 2) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260540(vr4,vr5,vr6,vr7));
    return uVar2;
  }
  if (*(short *)(unsigned)(0xa8 + ar4) == 3) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25f40e(vr4,vr5,vr6,vr7));
    return uVar2;
  }
  if (*(short *)(unsigned)(0xa8 + ar4) == 4) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c25fb5c(vr4,vr5,vr6,vr7));
    return uVar2;
  }
  if (*(short *)(unsigned)(0xa8 + ar4) == 1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c260c60(vr4,vr5,vr6,vr7));
    return uVar2;
  }
  return (int)*(short *)(unsigned)(0xa8 + ar4);
}

__asm__(".globl _FUN_8c2602f4\n.set _FUN_8c2602f4, _FUN_8c2602f4_def\n");
