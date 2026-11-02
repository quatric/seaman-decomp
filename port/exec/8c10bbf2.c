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
int FUN_8c10bbf2_def(undefined4 *ar4,int *ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bbf2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = ar4[1];
  (*(undefined4 *)(fr0_ - 0x1c)) = *(undefined4 *)(unsigned)(iVar3 + 4);
  (*(undefined4 *)(fr0_ - 0x18)) = ar4[2];
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar6));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(ar4));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11e48a(*ar4,((int * *)(fr0_ - 0x28)),ar6,ar7));
  if (iVar1 != 0) {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c11cd44(*(undefined4 *)(unsigned)((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x20))[1],*ar4,ar6,ar7));
  }
  if (iVar4 == 0) {
    puVar2 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 8))))(8,&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
    if (puVar2 == (undefined4 *)(unsigned)0x0) {
      iVar4 = 1;
    }
    else {
      *ar5 = (int)puVar2;
      *puVar2 = ar4[9];
      puVar2[1] = ar4[10];
    }
    if (iVar4 == 0) {
      if (*((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)) != **(int **)(unsigned)*ar5) {
        iVar4 = 0xb;
      }
      if ((1 < *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x24))) && (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28))[1] != *((int *)(unsigned long)*(unsigned *)(unsigned)ar5[1]))) {
        iVar4 = 0xb;
      }
    }
    (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar3 + 0xc))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),&(*(undefined4 *)(fr0_ - 0x1c)),ar6,ar7));
  }
  return iVar4;
}

__asm__(".globl _FUN_8c10bbf2\n.set _FUN_8c10bbf2, _FUN_8c10bbf2_def\n");
