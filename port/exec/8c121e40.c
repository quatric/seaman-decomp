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
undefined4 FUN_8c121e40_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c121e40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *a7;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(unsigned)(0xfc + ar4);
  iVar4 = *ar7;
  if (s0 == 1) {
    iVar3 = (int)0x268;
    iVar5 = (uint)*(ushort *)(unsigned)(0x244 + ar4) * 8;
    *(int *)(unsigned)(0x268 + ar4 + iVar5) = iVar4;
    a7 = ar7;
    if (*(int *)(unsigned)(iVar3 + ar4 + iVar5 + 4) != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x18))))
                (*(undefined4 *)(unsigned)(0x268 + ar4 + iVar5 + 4),0xf4 + ar4,ar6,ar7));
    }
    iVar3 = (int)0x268;
    iVar4 = iVar4 << 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x14))))(iVar4,0xf4 + ar4,ar6,a7));
    puVar1 = ((void *)(unsigned)0x8c013ef4);
    iVar6 = (int)0x268;
    *(undefined4 *)(unsigned)(iVar3 + ar4 + iVar5 + 4) = uVar2;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(iVar6 + ar4 + iVar5 + 4),ar7 + 1,iVar4,a7));
    *(undefined4 *)(unsigned)(0x148 + ar4) = 1;
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c121e40\n.set _FUN_8c121e40, _FUN_8c121e40_def\n");
