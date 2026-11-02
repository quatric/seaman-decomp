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
int FUN_8c1f6d56_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f6d56";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int unaff_r9 = 0;
  undefined4 unaff_r10 = 0;
  int iVar3;
  int unaff_r13 = 0;
  
  puVar1 = ((void *)(unsigned)0x8c1f881c);
  iVar3 = ar5;
  if (0 < unaff_r9) {
    do {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,unaff_r10,ar6,ar7));
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      ar6 = 0x3c;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c013ec0(unaff_r10,unaff_r13,0x3c,ar7));
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) {
        ar5 = ar5 + 1;
      }
      unaff_r13 = unaff_r13 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar3 < unaff_r9);
  }
  return ar5;
}

__asm__(".globl _FUN_8c1f6d56\n.set _FUN_8c1f6d56, _FUN_8c1f6d56_def\n");
