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
uint FUN_8c11d374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d374";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int unaff_r14 = 0;
  
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    if (*(short *)(unsigned)(ar4 + 0x3e) == 2) {
      iVar2 = (int)0x118;
      *(undefined4 *)(unsigned)(iVar2 + 0xc + unaff_r14) = *(undefined4 *)(unsigned)(iVar2 + unaff_r14);
      *(undefined4 *)(unsigned)(iVar2 + 0x24 + unaff_r14) = 0;
      *(undefined4 *)(unsigned)(iVar2 + 0x28 + unaff_r14) = 0;
      *(undefined2 *)(unsigned)(iVar2 + 0x2c + unaff_r14) = 0;
      puVar1 = ((void *)(unsigned)0x8c120348);
      iVar2 = (int)0x22a;
      *(undefined2 *)(unsigned)(iVar2 + unaff_r14) = 0;
      *(undefined2 *)(unsigned)(iVar2 + 0x1a + unaff_r14) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(0x10c + unaff_r14) = 3;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(unaff_r14 + 0x48,1,0,0));
      if (((uVar3 & 0xff) == 0) && (*(int *)(unsigned)(0x88 + unaff_r14) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(unaff_r14 + 0x48,2,0,0));
      }
      uVar3 = *(uint *)(unsigned)(ar4 + 0x40);
    }
    else {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14 + 0x48,7,ar6,ar7));
      uVar3 = uVar3 & 0xff;
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11d374\n.set _FUN_8c11d374, _FUN_8c11d374_def\n");
