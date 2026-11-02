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
int FUN_8c20b160_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20b160";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *puVar2;
  undefined4 a4;
  int in_r0 = (int)(unsigned long)vin0;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  
  a4 = 0x10000000;
  puVar2 = ((void *)(unsigned)0x8c202f40);
  uVar1 = 0xf0ffffff;
  uVar7 = 0;
  puVar4 = (undefined4 *)(unsigned)(0x8c4a9f2c + *(undefined4 *)(unsigned)0x8c4a9f08 * 4);
  piVar5 = (int *)(unsigned)(0x8c4a9f7c + *(undefined4 *)(unsigned)0x8c4a9f08 * 4);
  iVar6 = (int)0x100;
  do {
    if ((*piVar5 != 0) && (ar4 != uVar7)) {
      if ((*(undefined4 *)(unsigned)0x8c4a9fe0 == 1) && ((uVar7 == 1 || (uVar7 == 3)))) {
        *(uint *)(unsigned)*(undefined4 *)(unsigned)0x8c4a9fe4 = *(uint *)(unsigned)*(undefined4 *)(unsigned)0x8c4a9fe4 & uVar1 | uVar7 << 0x18;
        do {
          iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(a4,*(undefined4 *)(unsigned)0x8c4a9fe4,*(undefined4 *)(unsigned)0x8c4a9fe8,0x10));
        } while (iVar3 == iVar6);
      }
      do {
        in_r0 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(a4,*puVar4,*piVar5 + 0x20,0x10));
      } while (in_r0 == iVar6);
    }
    uVar7 = uVar7 + 1;
    piVar5 = piVar5 + 4;
    puVar4 = puVar4 + 4;
  } while (uVar7 < 5);
  return in_r0 = 0;
}

__asm__(".globl _FUN_8c20b160\n.set _FUN_8c20b160, _FUN_8c20b160_def\n");
