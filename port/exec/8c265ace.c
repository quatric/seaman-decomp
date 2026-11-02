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
int FUN_8c265ace_def(undefined4 ar4,int ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c265ace";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_PR = 0;
  
  iVar2 = ar7;
  if (*ar6 == 0) {
    ar7 = 0xd000001;
  }
  else {
    *(undefined4 *)(unsigned)(*ar6 + 0x17c) = ar4;
    *(int *)(unsigned)(*ar6 + 0x180) = ar5;
    *(int *)(unsigned)(*ar6 + 0x184) = ar7;
    *(int *)(unsigned)(*ar6 + 0x188) = ar7;
    *(int *)(unsigned)(*ar6 + 0x18c) = ar7;
    *(int *)(unsigned)(*ar6 + 400) = ar7;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4bd408) = *ar6 + 0x17c;
    iVar1 = ar7;
    iVar3 = ar7;
    if (0 < ar5) {
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c010794(0x20,*(int *)(unsigned)(*ar6 + 0x17c) + iVar1,((undefined1 *)(unsigned)0x8c2784f8),vr7));
        iVar3 = iVar3 + 1;
        iVar1 = iVar1 + 0x20;
      } while (iVar3 < ar5);
    }
  }
  if (ar7 != 0) {
    ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c265ac8),ar7,ar6,iVar2); });
  }
  return ar7;
}

__asm__(".globl _FUN_8c265ace\n.set _FUN_8c265ace, _FUN_8c265ace_def\n");
