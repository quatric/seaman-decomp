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
int FUN_8c267250_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = 0xd000001;
  if ((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) && (iVar2 = 0x7000103, ar4 != 0)) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266ea8(ar4,ar5,ar6 + 0x14,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266f38(ar4,ar5,ar6 + 0x18,vr7));
    puVar1 = ((void *)(unsigned)0x8c2673f0);
    *ar6 = 0;
    ar6[1] = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6 + 2,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267058(ar4,ar5,ar6 + 3,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267130(ar4,ar5,ar6 + 6,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2671c0(ar4,ar5,ar6 + 8,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266fc8(ar4,ar5,ar6 + 4,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266e2c(ar4,ar5,ar6 + 5,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c266d28(ar4,ar5,ar6 + 0x10,vr7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267360(ar4,ar5,ar6 + 0xc,vr7));
    iVar2 = 0;
  }
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c2664c4),iVar2,vr6,vr7));
  }
  return iVar2;
}

__asm__(".globl _FUN_8c267250\n.set _FUN_8c267250, _FUN_8c267250_def\n");
