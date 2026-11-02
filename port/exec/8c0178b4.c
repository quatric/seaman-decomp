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
int FUN_8c0178b4_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0178b4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined2 *puVar2;
  
  *ar4 = ar5;
  for (puVar2 = ((undefined2 *)(unsigned long)*(unsigned *)(unsigned)(*ar4 + 4)); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
  }
  ar4[3] = (int)(short)puVar2[2] & 0x3fff;
  ar4[1] = (int)(puVar2 + 3);
  ar4[2] = *(int *)(unsigned)*ar4;
  iVar1 = ar4[2];
  ar4[2] = iVar1 + 8;
  return iVar1 + 8;
}

__asm__(".globl _FUN_8c0178b4\n.set _FUN_8c0178b4, _FUN_8c0178b4_def\n");
