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
undefined4 FUN_8c11bcb8_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bcb8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  puVar1 = ((void *)(unsigned)0x8c013ef4);
  puVar5 = ar5 + 2;
  iVar3 = *(int *)(unsigned)(ar4 + 0x54);
  iVar4 = iVar3 * 4;
  *ar5 = (uint)*(ushort *)(unsigned)(ar4 + 0x28);
  ar5[1] = (uint)*(ushort *)(unsigned)(ar4 + 0x2a);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5,*(undefined4 *)(unsigned)(ar4 + 0x2c),iVar4,vr7));
  puVar5 = puVar5 + iVar3;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5,*(undefined4 *)(unsigned)(ar4 + 0x34),iVar4,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5 + iVar3,*(undefined4 *)(unsigned)(ar4 + 0x38),iVar4,vr7));
  iVar4 = *(int *)(unsigned)(ar4 + 0x44) - *(int *)(unsigned)(ar4 + 0x3c);
  puVar5 = puVar5 + iVar3 + iVar3;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  *puVar5 = iVar4 >> 2;
  iVar4 = *(int *)(unsigned)(ar4 + 0x48) - *(int *)(unsigned)(ar4 + 0x3c);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 3;
  }
  puVar5[1] = iVar4 >> 2;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5 + 2,*(undefined4 *)(unsigned)(ar4 + 0x3c),
                            iVar3 * (*(ushort *)(unsigned)(ar4 + 0x4c) + 1) * 4,vr7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bcb8\n.set _FUN_8c11bcb8, _FUN_8c11bcb8_def\n");
