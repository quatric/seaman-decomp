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
int FUN_8c20080e_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20080e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int *piVar1;
  int a6;
  int iVar2;
  int in_r3 = 0;
  int unaff_r9 = 0;
  int unaff_r10 = 0;
  undefined4 unaff_r12 = 0;
  int unaff_r13 = 0;
  int unaff_r14 = 0;
  int iVar3;
  
  a6 = 0xfffa;
  piVar1 = 0x8c4783dc;
  iVar3 = unaff_r14 + in_r3;
  while( true ) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2006dc(unaff_r12,ar5,ar6,ar7));
    if (iVar2 == (int)0xffffff01) {
      return (int)(int)0xffffff01;
    }
    if (iVar2 != (int)0xffffff40) break;
    ar6 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20075a(unaff_r12,ar5,ar6,ar7));
    if (ar6 < 0) {
      return (int)(int)0xffffff40;
    }
    ar5 = 0x46;
    *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0xc) = ar6;
    (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar1 + 0x10))))(*(undefined4 *)(unsigned)(iVar3 + 0x20),0x46,ar6,ar7));
    for (iVar2 = unaff_r10; unaff_r13 = unaff_r9, iVar2 < *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0x10);
        iVar2 = iVar2 + 1) {
      ar5 = *(int *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x1c) + 0xc) + iVar2;
      ar6 = a6;
      (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(unaff_r12,ar5,a6,ar7));
    }
  }
  if (unaff_r13 != 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20065a(unaff_r12,ar5,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c20080e\n.set _FUN_8c20080e, _FUN_8c20080e_def\n");
