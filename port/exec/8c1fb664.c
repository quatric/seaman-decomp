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
undefined4 * FUN_8c1fb664_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fb664";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r14 = 0;
  undefined4 *puVar9;
  
  uVar8 = (ar5 + 0x1fU >> 5) + 1;
  uVar7 = uVar8;
  if (*(uint *)(unsigned)(ar4 + -0x1c) < uVar8) {
    uVar7 = *(uint *)(unsigned)(ar4 + -0x1c);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fb586(unaff_r14,ar5,ar6,ar7));
  puVar9 = (undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)0x8c475f04);
  puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c475f04);
  while( true ) {
    puVar3 = puVar9;
    if (uVar8 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar8) {
        *puVar4 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar8;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
      }
      puVar9 = puVar3 + 8;
      if (unaff_r14 != puVar9) {
        if (unaff_r14 < puVar9) {
          puVar1 = puVar3 + uVar7 * 8 + 8;
          while (puVar9 < puVar1) {
            puVar5 = puVar1 + -8;
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,puVar1,unaff_r14,vr7));
            puVar1 = puVar5;
            unaff_r14 = unaff_r14 + -8;
          }
        }
        else if (puVar9 < unaff_r14) {
          puVar5 = puVar3 + uVar7 * 8 + 8;
          puVar1 = puVar9;
          while (puVar1 < puVar5) {
            puVar6 = puVar1 + 8;
            (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,puVar1,unaff_r14,vr7));
            puVar1 = puVar6;
            unaff_r14 = unaff_r14 + 8;
          }
        }
      }
      puVar3[1] = uVar8;
      *(unsigned *)0x8c475f04 = (unsigned)(unsigned long)(puVar4);
      return puVar9;
    }
    if (puVar3 == ((undefined4 *)(unsigned long)*(unsigned *)0x8c475f04)) break;
    puVar9 = (undefined4 *)(unsigned)*puVar3;
    puVar4 = puVar3;
  }
  return (undefined4 *)(unsigned)0;
}

__asm__(".globl _FUN_8c1fb664\n.set _FUN_8c1fb664, _FUN_8c1fb664_def\n");
