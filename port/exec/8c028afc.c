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
undefined4 FUN_8c028afc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c028afc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(unsigned)(0x328 + ar4) + ar6 * 0x124;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(unsigned)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 4))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
                (ar5,*(undefined4 *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 4)),
                 *(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    }
    if (*((char *)(unsigned long)*(unsigned *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 8))) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
                (ar5,*(undefined4 *)(unsigned)(iVar3 * 4 + *(int *)(unsigned)(iVar2 + 8)),
                 *(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    }
  }
  iVar3 = ar7_00;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(undefined4 *)(unsigned)(iVar2 + 0xc),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  if (*(int *)(unsigned)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(undefined4 *)(unsigned)(iVar2 + 0xc),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  }
  if (*(int *)(unsigned)(iVar2 + 0x18) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020e48))))
              (ar5,*(undefined4 *)(unsigned)(iVar2 + 0x18),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    iVar3 = ar7_00;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xf0 + *(int *)(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,iVar3));
  return uVar1;
}

__asm__(".globl _FUN_8c028afc\n.set _FUN_8c028afc, _FUN_8c028afc_def\n");
