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
undefined4 FUN_8c12215c_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c12215c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint a5;
  
  puVar3 = ((void *)(unsigned)0x8c111cdc);
  puVar2 = ((void *)(unsigned)0x8c1204c4);
  puVar1 = ((void *)(unsigned)0x8c120284);
  iVar8 = ar6 * 4;
  uVar6 = (uint)*(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 0xc);
  iVar5 = *(int *)(unsigned)(0x118 + ar4 + iVar8);
  a5 = ar7 * uVar6 + iVar5;
  uVar6 = uVar6 * s0 + iVar5;
  if (*(uint *)(unsigned)(0x124 + ar4 + iVar8) < a5) {
    a5 = *(uint *)(unsigned)(0x124 + ar4 + iVar8);
  }
  if (*(uint *)(unsigned)(0x124 + ar4 + iVar8) < uVar6) {
    uVar6 = *(uint *)(unsigned)(0x124 + ar4 + iVar8);
  }
  while( true ) {
    if (uVar6 <= a5) {
      return 0;
    }
    uVar7 = 1;
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(*(undefined4 *)(unsigned)(ar4 + 0x6c),a5,1,ar7));
    if ((uVar4 & 0xff) == 0) break;
    a5 = a5 + *(ushort *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 0xc);
    uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,uVar7,ar7));
    if ((uVar4 & 0xff) != 0) {
      return 1;
    }
  }
  uVar7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,1,uVar7,ar7));
  return uVar7;
}

__asm__(".globl _FUN_8c12215c\n.set _FUN_8c12215c, _FUN_8c12215c_def\n");
