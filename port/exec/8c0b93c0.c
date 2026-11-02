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
int FUN_8c0b93c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b93c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  
  iVar3 = 0;
  iVar4 = 0;
  bVar5 = 0;
  iVar2 = 4;
  for (iVar6 = 0; iVar6 < 8; iVar6 = iVar6 + 1) {
    iVar3 = (uint)*(byte *)(unsigned)(ar4 + iVar6 + 4) + iVar3;
  }
  if (iVar3 < 5) {
    iVar2 = 3;
  }
  else {
    for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
      if (bVar5 < *(byte *)(unsigned)(ar4 + iVar3 + 4)) {
        bVar5 = *(byte *)(unsigned)(ar4 + iVar3 + 4);
        iVar4 = iVar3;
      }
    }
    iVar6 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x16)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x1a)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar1 = ({ unsigned long t0_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x20)); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)(ar4 + 0x24)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0b9afc))))
                      (ar4,ar5,ar6,ar7); });
    iVar3 = iVar6;
    if (((iVar6 != iVar1) &&
        (((iVar3 = iVar4, iVar6 != iVar4 || (iVar1 != iVar4)) &&
         (iVar2 = 3, *(int *)(unsigned)(0xbc + ar4) != iVar6)))) &&
       (*(int *)(unsigned)(0xbc + ar4) != iVar1)) {
      iVar2 = 0;
    }
    (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c013adc(iVar3 - *(int *)(unsigned)(0xbc + ar4),ar5,ar6,ar7));
    if (4 < (*(int *)(fr0_ - 0x2c))) {
      (*(int *)(fr0_ - 0x2c)) = 8 - (*(int *)(fr0_ - 0x2c));
    }
    if (iVar2 == 4) {
      if ((*(int *)(fr0_ - 0x2c)) == 0) {
        iVar2 = 1;
      }
      else if ((*(int *)(fr0_ - 0x2c)) == 1) {
        iVar2 = 3;
      }
      else {
        iVar2 = 2;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0b93c0\n.set _FUN_8c0b93c0, _FUN_8c0b93c0_def\n");
