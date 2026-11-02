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
undefined4 FUN_8c262d6c_def(int ar4,uint *ar5,uint *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c262d6c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 ar4_00;
  uint uVar3;
  uint *a5;
  uint uVar4;
  uint *a6;
  int *a7;
  uint *a6_00;
  int *a4;
  int iVar5;
  
  puVar1 = ((void *)(unsigned)0x8c25feca);
  a6_00 = (uint *)(unsigned)(int)0x4000;
  ar4_00 = *(undefined4 *)(unsigned)(ar4 + 0xc);
  a5 = ar5;
  a6 = ar6;
  a7 = ar7;
  for (iVar5 = 0; iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(ar4 + 4),a5,a6,a7)), iVar5 < iVar2;
      iVar5 = iVar5 + 1) {
    a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar5 * 4 + ar4 + 0xc));
    a5 = (uint *)(unsigned)0x0;
    a7 = (int *)(unsigned)(iVar5 * 8 + ar4 + 0x1c);
    a6 = a6_00;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,0,a6_00,a7));
  }
  iVar5 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_1c_26b94e(ar4_00,a5,a6,a7));
  *ar5 = (uint)(*(int *)(unsigned)(ar4 + 0x1c) - iVar5) >> 1;
  uVar4 = *(uint *)(unsigned)(ar4 + 0x38);
  uVar3 = *(uint *)(unsigned)(ar4 + 0x20) >> 1;
  if ((int)uVar3 < (int)uVar4) {
    uVar4 = uVar3;
  }
  *ar6 = uVar4;
  if (*(int *)(unsigned)(ar4 + 0x3c) < 0) {
    *ar7 = 0x1fffffff;
  }
  else {
    *ar7 = *(int *)(unsigned)(ar4 + 0x3c) - *(int *)(unsigned)(ar4 + 0x40);
  }
  return *(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 4) + 0x3c);
}

__asm__(".globl _FUN_8c262d6c\n.set _FUN_8c262d6c, _FUN_8c262d6c_def\n");
