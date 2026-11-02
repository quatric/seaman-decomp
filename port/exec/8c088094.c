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
undefined4 CAnimal_m2_088094_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "CAnimal_m2_088094";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  
  cVar1 = *(char *)(unsigned)(0x524 + ar4);
  uVar4 = ar5;
  uVar5 = ar6;
  piVar6 = ar7;
  if (cVar1 == -1) {
    if (*(int *)(unsigned)(0x330 + ar4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    }
    *(undefined1 *)(unsigned)(0x524 + ar4) = 0;
  }
  else if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uVar5 = 0x1b;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x16,0x1b,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x110 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
                (*(int *)(unsigned)(0x330 + ar4),0,uVar5,piVar6));
      uVar4 = *(undefined4 *)(unsigned)(0x330 + ar4);
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x4c))))(ar7,uVar4,uVar5,piVar6));
      *(undefined4 *)(unsigned)(0x330 + ar4) = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f4d84(ar4,uVar4,uVar5,piVar6));
      *(undefined1 *)(unsigned)(0x524 + ar4) = 2;
    }
    goto LAB_8c0881ac;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar4,uVar5,piVar6));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_c_02d1b8(ar4 + 0x21c,uVar4,uVar5,piVar6));
  uVar4 = 0x3c;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                    ((uVar2 & 0xffff) - iVar3,0x3c,uVar5,piVar6));
  if (9 < iVar3) {
    *(undefined1 *)(unsigned)(0x524 + ar4) = 1;
  }
  if (*(int *)(unsigned)(0x330 + ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x110 + *(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8)))))
              (*(int *)(unsigned)(0x330 + ar4),1,uVar5,piVar6));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(0x330 + ar4) + 8) + 0x10))))
              (*(int *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c036988(*(undefined4 *)(unsigned)(0x330 + ar4),ar5,ar6,ar7));
    uVar4 = ar5;
    uVar5 = ar6;
    piVar6 = ar7;
  }
LAB_8c0881ac:
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xf8 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar4,uVar5,piVar6));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0f79b8(ar4 + 0xa0,uVar4,uVar5,piVar6));
  return 1;
}

__asm__(".globl _CAnimal_m2_088094\n.set _CAnimal_m2_088094, _CAnimal_m2_088094_def\n");
