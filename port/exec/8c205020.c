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
undefined4 FUN_8c205020_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c205020";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int ar6_00;
  int iVar5;
  
  if (*ar4 != 0) {
    iVar1 = *ar4;
    iVar3 = 0;
    iVar5 = iVar1;
    do {
      iVar4 = iVar3;
      if (*(int *)(unsigned)(iVar5 + 0xc) < *(int *)(unsigned)(iVar1 + 0xc)) {
        iVar5 = iVar1;
      }
      iVar1 = *(int *)(unsigned)(iVar1 + 8);
      iVar3 = iVar4 + 1;
    } while (iVar1 != 0);
    if (1 < iVar3) {
      if (*ar5 != iVar5) {
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(ar4,ar5,iVar5,ar7); });
        ain0 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204eb6(ar5,iVar5,*ar5,ar7); });
      }
      iVar4 = iVar4 + -1;
      iVar5 = 0;
      iVar3 = iVar4;
      if (0 < iVar4) {
        do {
          iVar1 = *ar4;
          iVar2 = 0;
          ar6_00 = iVar1;
          if (0 < iVar3) {
            do {
              ar6_00 = *(int *)(unsigned)(ar6_00 + 8);
              iVar2 = iVar2 + 1;
              if (*(int *)(unsigned)(iVar1 + 0xc) < *(int *)(unsigned)(ar6_00 + 0xc)) {
                iVar1 = ar6_00;
              }
            } while (iVar2 < iVar3);
          }
          if (ar6_00 != iVar1) {
            ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204ed2(ar4,ar5,iVar1,ar7); });
            ain0 = ({ unsigned long ri0_ = (unsigned long)(iVar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c204eb6(ar5,iVar1,ar6_00,ar7); });
          }
          iVar3 = iVar3 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c205020\n.set _FUN_8c205020, _FUN_8c205020_def\n");
