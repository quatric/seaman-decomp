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
uint FUN_8c1209ec_def(int *ar4,int ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c1209ec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  int *ar6_00;
  int *ar7_00;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  piVar3 = (int *)(unsigned)(fr0_ + (int)0xffffffd8);
  uVar4 = 0;
  ar4[1] = ar4[1] + 1;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar5 != 0) {
    cVar1 = *(char *)(unsigned)(ar5 + 4);
    iVar5 = 0;
    if (0 < *ar4) {
      do {
        if (cVar1 == *(char *)(unsigned)((int)ar4 + iVar5 * 2 + 8)) {
          ar7_00 = (int *)(unsigned)0x0;
          ar6_00 = ar7;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x1c))))(ar5,(int)*(char *)(unsigned)((int)ar4 + iVar5 * 2 + 9),ar7,0));
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          ({ unsigned long ri0_ = (unsigned long)((*(int *)(fr0_ - 0x28))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c1209be(ar4,iVar5,ar6_00,ar7_00); });
        }
        else {
          iVar5 = iVar5 + 1;
        }
      } while (iVar5 < *ar4);
    }
    if (*ar4 != 0) {
      iVar5 = 0;
      ar6_00 = ar4;
      (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x1c))))(ar5,0xf8,ar4,(fr0_ + (int)0xffffffd8)));
      ar7_00 = piVar3;
      if (-1 < iVar5) {
        piVar3 = (int *)(unsigned)(iVar5 + (int)ar7);
        for (iVar6 = 0; iVar6 < (int)(uint)*(byte *)(unsigned)(ar5 + 9); iVar6 = iVar6 + 1) {
          ar6_00 = ar4;
          piVar7 = piVar3;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c1113d0(*(undefined4 *)(unsigned)(iVar6 * 4 + *(int *)(unsigned)(ar5 + 0x10)),0xf8,ar4,piVar3));
          uVar4 = uVar4 | (uVar2 & 0xff) == 0;
          ar7_00 = piVar3;
          piVar3 = piVar7;
        }
      }
    }
  }
  iVar5 = ar4[1];
  ar4[1] = iVar5 + -1;
  if (iVar5 + -1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)((uint)ar6[6])))(ar6,ar4,ar6_00,ar7_00));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1209ec\n.set _FUN_8c1209ec, _FUN_8c1209ec_def\n");
