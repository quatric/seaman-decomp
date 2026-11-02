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
uint FUN_8c120948_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120948";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = ((void *)(unsigned)0x8c120148);
  uVar5 = 1;
  uVar3 = 0;
  iVar4 = 0;
  if (0 < *ar4) {
    do {
      cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar5,(int)ar4 + iVar4 * 2 + 8,0,uVar5));
      iVar4 = iVar4 + 1;
      uVar3 = (uint)(cVar2 == '\0');
    } while (iVar4 < *ar4);
  }
  *ar4 = 0;
  if (ar4[1] == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar5 + 0x18))))(ar5,ar4,vr6,vr7));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c120948\n.set _FUN_8c120948, _FUN_8c120948_def\n");
