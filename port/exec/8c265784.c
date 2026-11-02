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
int FUN_8c265784_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c265784";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  iVar2 = 0xd000001;
  if (((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) && (iVar2 = 0x7000102, ar4 != (int *)(unsigned)0x0)) && (*ar4 == 1))
  {
    iVar2 = (int)0x184;
    *ar4 = 0;
    *(int *)(unsigned)(iVar2 + *(int *)(unsigned)puVar1) = *(int *)(unsigned)(iVar2 + *(int *)(unsigned)puVar1) + -1;
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c265784),iVar2,vr6,vr7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c265784\n.set _FUN_8c265784, _FUN_8c265784_def\n");
