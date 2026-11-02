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
undefined4 FUN_8c1f4110_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4110";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined *puVar2;
  int in_r0 = (int)(unsigned long)vin0;
  int *unaff_r10 = 0;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *unaff_r10;
  iVar4 = iVar5 + 0x28;
  puVar3 = (uint *)(unsigned)(0x44c + iVar5);
  if (0 < *(int *)(unsigned)(in_r0 + iVar5)) {
    ar4 = *(int *)(unsigned)(in_r0 + iVar5);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4a00(ar4,ar5,ar6,ar7));
  }
  puVar2 = ((void *)(unsigned)0x8c1f55e4);
  for (iVar5 = 0; iVar5 < 0x18; iVar5 = iVar5 + 1) {
    if ((*(char *)(unsigned)((int)0xf90 + *unaff_r10 + iVar5) != '\0') &&
       (*(char *)(unsigned)(iVar4 + 6) == '\0')) {
      cVar1 = *(char *)(unsigned)(iVar4 + 4);
      if (cVar1 == '\x01') {
        ar4 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar2)))(iVar5,ar5,ar6,ar7));
      }
      else if (cVar1 == '\x02') {
        ar4 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f56b0(iVar5,ar5,ar6,ar7));
      }
      else if (cVar1 == '\x03') {
        ar4 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f566c(iVar5,ar5,ar6,ar7));
      }
      else if (cVar1 == '\x04') {
        ar4 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5628(iVar5,ar5,ar6,ar7));
      }
      else if (cVar1 == '\t') {
        ar5 = *puVar3;
        if ((ar5 & 1) != 0) {
          ar5 = 1;
        }
        ar4 = iVar5;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5582(iVar5,ar5,ar6,ar7));
      }
    }
    puVar3 = puVar3 + 0x1e;
    iVar4 = iVar4 + 0x2c;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f59c8(ar4,ar5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c1f4110\n.set _FUN_8c1f4110, _FUN_8c1f4110_def\n");
