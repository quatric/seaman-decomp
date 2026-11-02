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
int FUN_8c1f6d3e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f6d3e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = ((void *)(unsigned)0x8c1f881c);
  uVar5 = 1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < ar5) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar7,uVar5,vr7));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(ar7,ar6,0x3c,vr7));
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      ar6 = ar6 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar4 < ar5);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1f6d3e\n.set _FUN_8c1f6d3e, _FUN_8c1f6d3e_def\n");
