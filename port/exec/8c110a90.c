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
undefined8 * FUN_8c110a90_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c110a90";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  uint uVar6;
  float fVar7;
  
  uVar6 = 0;
  puVar1 = ((undefined1 *)(unsigned)0x8c110bd0);
  if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
    do {
      iVar2 = uVar6 * 4;
      *ar6 = 10.0;
      pfVar3 = ((float *)(unsigned long)*(unsigned *)(unsigned)(*(int *)(unsigned)(ar4 + 0x2c) + iVar2));
      puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x30));
      pfVar5 = pfVar3 + *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x34) + iVar2);
      pfVar4 = (float *)(unsigned)(*(int *)(unsigned)((int)puVar1 + iVar2) * 4 + ar5);
      for (; pfVar3 < pfVar5; pfVar3 = pfVar3 + 1) {
        fVar7 = *pfVar4;
        pfVar4 = pfVar4 + 1;
        *ar6 = fVar7 * *pfVar3 + *ar6;
      }
      uVar6 = uVar6 + 1;
      ar6 = ar6 + 1;
    } while (uVar6 < *(uint *)(unsigned)(ar4 + 0x28));
  }
  return puVar1;
}

__asm__(".globl _FUN_8c110a90\n.set _FUN_8c110a90, _FUN_8c110a90_def\n");
