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
int * FUN_8c25abf0_def(undefined4 ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c25abf0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = 0x54525650;
  puVar1 = ((void *)(unsigned)0x8c23c814);
  *ar5 = -1;
  do {
    iVar4 = *ar6;
    if (iVar4 == 0x54525650) {
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar6 + 2,8,ar7));
      ar6 = ar6 + 4;
    }
    else {
      if (iVar4 != 0x58494247) {
        return (int *)(unsigned)0;
      }
      uVar3 = ar6[1];
      *ar5 = ar6[2];
      ar6 = (int *)(unsigned)((int)(ar6 + 2) + (uVar3 & 0xfffffffc));
    }
  } while (iVar4 != iVar2);
  return ar6;
}

__asm__(".globl _FUN_8c25abf0\n.set _FUN_8c25abf0, _FUN_8c25abf0_def\n");
