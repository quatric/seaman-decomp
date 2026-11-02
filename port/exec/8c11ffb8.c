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
uint FUN_8c11ffb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ffb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  uint unaff_r9 = 0;
  uint uVar3;
  uint uVar4;
  int a5;
  int iVar5;
  ushort *unaff_r14 = 0;
  
  a5 = (int)0xff;
  uVar3 = unaff_r9;
  uVar4 = unaff_r9;
  if (*unaff_r14 != 0) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 2) + uVar4 * 4);
      if ((iVar5 != 0) && (*(int *)(unsigned)(iVar5 + 0x1c) != 0)) {
        ar7 = 0;
        ar6 = 0;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar5 + 0x1c))))(iVar5,a5,0,0));
        uVar3 = uVar3 | (uVar2 & 0xff) == 0;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)(uint)*unaff_r14);
  }
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  if (unaff_r14[4] != 0) {
    do {
      iVar5 = *(int *)(unsigned)(*(int *)(unsigned)(unaff_r14 + 6) + unaff_r9 * 4);
      if (iVar5 != 0) {
        ar7 = 0;
        ar6 = 0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar5,a5,0,0));
        uVar3 = uVar3 | (uVar4 & 0xff) == 0;
      }
      unaff_r9 = unaff_r9 + 1;
    } while ((int)unaff_r9 < (int)(uint)unaff_r14[4]);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0xc))))(unaff_r14,*(undefined4 *)(unsigned)(unaff_r14 + 2),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((unaff_r14 + 0xc))))(unaff_r14,*(undefined4 *)(unsigned)(unaff_r14 + 6),ar6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffb8\n.set _FUN_8c11ffb8, _FUN_8c11ffb8_def\n");
