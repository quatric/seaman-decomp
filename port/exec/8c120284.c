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
undefined4 FUN_8c120284_def(ushort *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120284";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 a5;
  byte *a5_00;
  ushort uVar7;
  uint uVar8;
  int a4;
  int *piVar9;
  byte *pbVar10;
  
  puVar3 = ((void *)(unsigned)0x8c1112e2);
  a5_00 = ar5;
  if (ar5 == (byte *)(unsigned)0x0) {
    uVar2 = *ar4;
    a5 = 0;
    do {
      uVar8 = 0;
      piVar9 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 2));
      uVar7 = 0;
      if (uVar2 != 0) {
        do {
          uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar9 + 0x18))))(*piVar9,a5,ar6,ar7));
          iVar6 = *piVar9;
          piVar9 = piVar9 + 1;
          uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(iVar6,a5,ar6,ar7));
          uVar7 = uVar7 + 1;
          uVar8 = uVar8 | uVar4 | uVar5;
        } while ((uVar7 & 0xff) < uVar2);
      }
    } while ((uVar8 & 0xff) != 0);
  }
  else {
    do {
      uVar2 = ar4[1];
      iVar6 = *(int *)(unsigned)(ar4 + 2);
      uVar8 = 0;
      bVar1 = *ar5;
      pbVar10 = ar5;
      while (bVar1 != 0) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        a4 = *(int *)(unsigned)((uint)bVar1 * 4 + iVar6 + (uint)uVar2 * -4);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x18))))(a4,a5_00,ar6,ar7));
        uVar5 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(a4,a5_00,ar6,ar7));
        uVar8 = uVar8 | uVar4 | uVar5;
        bVar1 = *pbVar10;
      }
    } while ((uVar8 & 0xff) != 0);
  }
  return 0;
}

__asm__(".globl _FUN_8c120284\n.set _FUN_8c120284, _FUN_8c120284_def\n");
