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
int FUN_8c115cec_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c115cec";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *ar4;
  if (ar4[0x11] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x11],vr6,vr7));
    ar4[0x11] = 0;
  }
  if (ar4[0x12] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x12],vr6,vr7));
    ar4[0x12] = 0;
  }
  if (ar4[0x13] != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x13],vr6,vr7));
    ar4[0x13] = 0;
  }
  if (*(int *)(unsigned)((int)0x148 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x148 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x148 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x1c0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1c0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x1c0 + (int)ar4) = 0;
  }
  if ((*(char *)(unsigned)((int)0xc4 + (int)ar4) != '\0') &&
     (*(int *)(unsigned)((int)0xc0 + (int)ar4) != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xc0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xc0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x98 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x98 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x98 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x94 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x94 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x94 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x9c + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x9c + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x9c + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xa8 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa8 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xa8 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xac + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xac + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xac + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xa0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xa0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xa0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0xb0 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0xb0 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0xb0 + (int)ar4) = 0;
  }
  if (*(int *)(unsigned)((int)0x104 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x104 + (int)ar4),vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x104 + (int)ar4) = 0;
  }
  iVar1 = (int)0x1d4;
  if (*(int *)(unsigned)(iVar1 + (int)ar4) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1cc + (int)ar4),vr6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,*(undefined4 *)(unsigned)((int)0x1d0 + (int)ar4),vr6,vr7));
    iVar1 = (int)0x1d4;
    *(undefined4 *)(unsigned)(iVar1 + (int)ar4) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c115cec\n.set _FUN_8c115cec, _FUN_8c115cec_def\n");
