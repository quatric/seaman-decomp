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
int FUN_8c266bd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266bd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;
  
  puVar3 = ((void *)(unsigned)0x8c013ff8);
  puVar2 = 0x8c4bd420;
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
  iVar4 = 0xd000001;
  if (*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) {
    iVar4 = (int)0x200;
    *(undefined4 *)(unsigned)((int)0x158 + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0))) = ar4;
    *puVar2 = ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar3)))(0,iVar4,vr6,vr7));
    *(undefined4 *)(unsigned)((int)0x160 + *(int *)(unsigned)puVar1) = 0;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c265704(*(int *)(unsigned)puVar1 + (int)0x178,vr5,vr6,vr7));
  }
  if (iVar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c266bd4),iVar4,vr6,vr7));
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266bd4\n.set _FUN_8c266bd4, _FUN_8c266bd4_def\n");
