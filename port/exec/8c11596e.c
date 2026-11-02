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
undefined4 FUN_8c11596e_def(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11596e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  puVar1 = ((void *)(unsigned)0x8c1133f6);
  uVar7 = *ar5;
  uVar10 = ar5[1];
  iVar9 = *ar4;
  uVar6 = ar5[2];
  uVar8 = ar5[3];
  *(uint *)(unsigned)((int)0x1b4 + (int)ar4) = uVar10;
  ar4[0xe] = uVar7 + 2;
  cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,vr5,vr6,vr7));
  if (cVar2 == '\0') {
    iVar4 = (uVar10 - 1) * 2 + uVar7 + 2;
    ar4[0x10] = iVar4;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x10))))(iVar9,iVar4 * 2,vr6,vr7));
    ar4[0x12] = iVar4;
    if (ar4[0x12] == 0) {
      uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,vr6,vr7));
      return uVar3;
    }
    if (ar4[0x13] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar9 + 0x18))))(iVar9,ar4[0x13],vr6,vr7));
      ar4[0x13] = 0;
    }
    iVar9 = 0;
    uVar5 = 0;
    if (uVar7 != 0) {
      do {
        iVar4 = uVar5 * 2;
        uVar5 = uVar5 + 1;
        *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar6);
        iVar9 = iVar9 + 1;
      } while (uVar5 < uVar7);
    }
    uVar6 = 0;
    if (uVar10 != 0) {
      do {
        iVar4 = uVar6 * 2;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar8);
        iVar9 = iVar9 + 1;
      } while (uVar6 < uVar10);
      uVar6 = 0;
      if (uVar10 != 0) {
        do {
          iVar4 = uVar6 * 2;
          uVar6 = uVar6 + 1;
          *(undefined2 *)(unsigned)(iVar9 * 2 + ar4[0x12]) = *(undefined2 *)(unsigned)(iVar4 + uVar8);
          iVar9 = iVar9 + 1;
        } while (uVar6 < uVar10);
      }
    }
    cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11372e(ar4,vr5,vr6,vr7));
    if (cVar2 == '\0') {
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c11596e\n.set _FUN_8c11596e, _FUN_8c11596e_def\n");
