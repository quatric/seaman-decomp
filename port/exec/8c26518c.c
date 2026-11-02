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
int FUN_8c26518c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26518c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  int iVar3;
  int iVar4;
  int iVar5;
  int ar5_01;
  
  iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c2784c0);
  ar5_00 = (fr0_ + (int)0xffffffdc);
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) == 0) {
    ar5_01 = 0xd000001;
  }
  else {
    if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x160) != 1) {
      iVar2 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x1bc);
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c26870c(iVar2,(fr0_ + (int)0xffffffdc),ar6,ar7));
      if ((char)(*(undefined4 *)(fr0_ - 0x24)) == '\0') {
        iVar4 = 0;
        iVar5 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x168);
        iVar3 = 0;
        if (0 < iVar5) {
          do {
            iVar2 = *(int *)(unsigned)(iVar1 + 0x174);
            *(int *)(unsigned)(iVar1 + 0x174) = iVar2 + 1;
            iVar2 = iVar2 * 0x1c + *(int *)(unsigned)(iVar1 + 0x164);
            if (*(int *)(unsigned)(iVar1 + 0x174) == iVar5) {
              *(undefined4 *)(unsigned)(iVar1 + 0x174) = 0;
            }
            if (*(int *)(unsigned)(iVar2 + 0x14) == 1) {
              ar5_01 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c266c48(iVar2,ar5_00,ar6,ar7));
              if (ar5_01 != 0) goto LAB_8c26522c;
              iVar4 = iVar4 + 1;
              if ((iVar4 == 0x20) || (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c2784c0) + 0x16c) == 0)) break;
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < iVar5);
        }
        ar5_01 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c266b08(iVar2,ar5_00,ar6,ar7));
        goto LAB_8c26522c;
      }
    }
    ar5_01 = 0xb000003;
  }
LAB_8c26522c:
  if (ar5_01 != 0) {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); FUN_8c2688a0(((void *)0x8c26518c),ar5_01,ar6,ar7); });
  }
  return ar5_01;
}

__asm__(".globl _FUN_8c26518c\n.set _FUN_8c26518c, _FUN_8c26518c_def\n");
