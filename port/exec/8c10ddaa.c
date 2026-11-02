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
undefined4 FUN_8c10ddaa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10ddaa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = *ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)((int)0x134 + (int)ar4)),1,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0x134 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0x120 + (int)ar4),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,ar4 + 0x1b,(int)0x8c + (int)ar4,0));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10cf6c(ar4,ar4 + 0x1c,(int)0x8e + (int)ar4,0));
  iVar2 = 0;
  piVar1 = (int *)(unsigned)((int)0xc0 + (int)ar4);
  piVar3 = piVar1;
  do {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*piVar1,vr6,vr7));
    }
    if (piVar3[1] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[1],vr6,vr7));
    }
    if (piVar3[2] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[2],vr6,vr7));
    }
    if (piVar3[3] != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,piVar1[3],vr6,vr7));
    }
    iVar2 = iVar2 + 4;
    piVar1 = piVar1 + 4;
    piVar3 = piVar3 + 4;
  } while (iVar2 < 6);
  for (; iVar2 < 10; iVar2 = iVar2 + 1) {
    if (*piVar3 != 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*piVar1,vr6,vr7));
    }
    piVar1 = piVar1 + 1;
    piVar3 = piVar3 + 1;
  }
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),vr6,vr7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4[3],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4[4],vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x18))))(iVar4,ar4,vr6,vr7));
  return 0;
}

__asm__(".globl _FUN_8c10ddaa\n.set _FUN_8c10ddaa, _FUN_8c10ddaa_def\n");
