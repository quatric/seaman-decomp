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
undefined4 FUN_8c10be9c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10be9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int *a4;
  int iVar2;
  int *ar7_00;
  undefined4 uVar3;
  
  uVar3 = 0;
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[1];
  (*(undefined4 *)(fr0_ - 0x14)) = 0;
  ar7_00 = ar7;
  a4 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[2])))(8,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c11e8d6);
  a4[1] = (int)ar4;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(puVar1)))(*ar4,ar5,ar6,ar7_00));
  *a4 = iVar2;
  if (iVar2 == 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c11cd44(*ar4,0,ar6,ar7_00));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)((uint)ar4[3])))(a4,&(*(undefined4 *)(fr0_ - 0x18)),ar6,ar7_00));
  }
  *ar7 = (int)a4;
  return uVar3;
}

__asm__(".globl _FUN_8c10be9c\n.set _FUN_8c10be9c, _FUN_8c10be9c_def\n");
