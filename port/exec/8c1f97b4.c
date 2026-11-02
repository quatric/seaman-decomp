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
undefined4 FUN_8c1f97b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f97b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 84; for (int i_ = 0; i_ < 84; i_++) z_[i_] = 0; }
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int a4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a5;
  undefined1 *puVar7;
  undefined4 a7;
  
  puVar5 = ((undefined1 *)(fr0_ - 0x50));
  puVar7 = ((undefined1 *)(fr0_ - 0x50));
  a5 = ((undefined1 *)(fr0_ - 0x50));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), s_KATANA_FLASH_1f0d98(2,ar5,ar6,ar7));
  if (iVar3 == -8) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1f0e98(0,ar5,ar6,ar7));
  }
  if ((iVar3 == 0) &&
     (iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1f0f24(5,((undefined1 *)(fr0_ - 0x50)),ar6,ar7)), puVar2 = ((void *)(unsigned)0x8c1f0fa0),
     iVar3 == 0)) {
    iVar3 = 0;
    do {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)(puVar2)))(iVar3,puVar5,ar6,ar7));
    } while (iVar3 == 2);
    if (iVar3 == 1) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 84)), syscall_1f3b44(1,puVar5,ar6,ar7));
      puVar5 = (undefined1 *)(unsigned)(iVar3 + 0x10);
      if (ar4 == 0) {
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        }
        return 0;
      }
      puVar7 = ((undefined1 *)(fr0_ - 0x49));
      puVar5 = (undefined1 *)(unsigned)(iVar3 + 0x17);
      a7 = 1;
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        if (((ar4 & 1) != 0) && (*puVar7 = *puVar5, iVar3 == 4)) {
          puVar6 = puVar5 + -2;
          puVar7[-1] = puVar5[-1];
          puVar5 = puVar5 + -3;
          puVar7[-2] = *puVar6;
          puVar7 = puVar7 + -3;
          *puVar7 = *puVar5;
        }
        puVar5 = puVar5 + -1;
        ar4 = (int)ar4 >> 1;
        puVar7 = puVar7 + -1;
      }
      iVar4 = (vsp = ((unsigned long)(fr0_ - 84)), FUN_8c1f0f60(5,((undefined1 *)(fr0_ - 0x50)),iVar3,1));
      a4 = 0;
      if (iVar4 == 0) {
        do {
          a4 = (vsp = ((unsigned long)(fr0_ - 84)), (*(code *)xlat((unsigned long)(puVar2)))(a4,a5,iVar3,a7));
        } while (a4 == 2);
        if (a4 == 1) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f97b4\n.set _FUN_8c1f97b4, _FUN_8c1f97b4_def\n");
