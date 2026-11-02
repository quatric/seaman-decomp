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
uint FUN_8c11e3ea_def(int ar4,int ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c11e3ea";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 a5;
  undefined4 *a6;
  undefined4 *ar7_00;
  
  a6 = ar6;
  ar7_00 = ar7;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar1 = ((void *)(unsigned)0x8c1204c4);
  if (iVar2 == 0) {
    if ((ar6 == (undefined4 *)(unsigned)0x0) || (ar7 == (undefined4 *)(unsigned)0x0)) {
      a5 = 0x13;
    }
    else if (ar5 == 4) {
      if ((*(short *)(unsigned)(ar4 + 0x3e) == 2) || (*(short *)(unsigned)(ar4 + 0x3e) == 1)) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11d14c(ar4,ar6,ar7,ar7_00));
        if ((uVar3 & 0xff) == 0) {
          return 0;
        }
        goto LAB_8c11e476;
      }
      a5 = 7;
      *ar6 = 0;
      *ar7 = 0;
    }
    else {
      a5 = 0xd;
      *ar6 = 0;
      *ar7 = 0;
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,a5,a6,ar7_00));
    uVar3 = uVar3 & 0xff;
  }
  else {
LAB_8c11e476:
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c11e3ea\n.set _FUN_8c11e3ea, _FUN_8c11e3ea_def\n");
