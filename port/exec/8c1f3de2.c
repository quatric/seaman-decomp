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
undefined4 FUN_8c1f3de2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f3de2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int in_r2 = 0;
  int in_r3 = 0;
  int iVar1;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_r14 = 0;
  
  *unaff_r14 = in_r3;
  *(undefined4 *)(unsigned)(ain0 + in_r2) = ar4;
  *(undefined4 *)(unsigned)(ain0 + 4 + *unaff_r14) = ar6;
  a6 = 0x1f;
  if ((*(uint *)(unsigned)(ain0 + *unaff_r14) & 0x1f) != 0) {
    *(int *)(unsigned)(*unaff_r14 + 0xfc4) = *(int *)(unsigned)(*unaff_r14 + 0xfc4) + 0x20;
    *(uint *)(unsigned)(*unaff_r14 + 0xfc4) = *(uint *)(unsigned)(*unaff_r14 + 0xfc4) & 0xffffffe0;
  }
  iVar1 = *unaff_r14;
  if ((*(uint *)(unsigned)(iVar1 + 0xfc8) & 0x1f) != 0) {
    *(int *)(unsigned)(iVar1 + 0xfc8) = *(int *)(unsigned)(iVar1 + 0xfc8) + 0x20;
    *(uint *)(unsigned)(*unaff_r14 + 0xfc8) = *(uint *)(unsigned)(*unaff_r14 + 0xfc8) & 0xffffffe0;
  }
  *(uint *)(unsigned)(*unaff_r14 + 0xfc4) = *(uint *)(unsigned)(*unaff_r14 + 0xfc4) | 0xa0000000;
  *(uint *)(unsigned)(*unaff_r14 + 0xfc8) = *(uint *)(unsigned)(*unaff_r14 + 0xfc8) | 0xa0000000;
  (vsp = ((unsigned long)(fr0_ - 32)), g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7));
  a4 = ((undefined4 *)(unsigned)0x8c26c728);
  a5 = ((undefined4 *)(unsigned)0x8c26c728);
  puVar2 = ((undefined4 *)(unsigned)0x8c26c728);
  piVar3 = ((undefined4 *)(unsigned)0x8c26c728);
  do {
    if (*(char *)(unsigned)(*unaff_r14 + 0xf90 + *piVar3) != '\0') {
      a4 = (undefined4 *)(unsigned)*puVar2;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f55e4(a4,a5,a6,ar7));
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)(unsigned)0x8c26c738);
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c1f59c8(a4,a5,a6,ar7));
  *(undefined4 *)(unsigned)(*unaff_r14 + 0xfc0) = 1;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x10) = 0;
  iVar1 = *unaff_r14;
  *(uint *)(unsigned)(*(int *)(unsigned)(iVar1 + 0x10f4) + 0x80) = *(uint *)(unsigned)(iVar1 + 0x10c0) | *(uint *)(unsigned)(iVar1 + 0x10d0)
  ;
  *(undefined4 *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3de2\n.set _FUN_8c1f3de2, _FUN_8c1f3de2_def\n");
