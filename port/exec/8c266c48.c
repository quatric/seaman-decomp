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
int FUN_8c266c48_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c266c48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  
  iVar2 = (int)0x15c;
  iVar3 = *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0));
  iVar4 = 0xa000001;
  if (*(int *)(unsigned)(iVar2 + iVar3) < 0x20) {
    iVar4 = *(int *)(unsigned)(iVar2 + iVar3);
    *(int *)(unsigned)(iVar2 + iVar3) = iVar4 + 1;
    puVar1 = ((void *)(unsigned)0x8c013ef4);
    puVar5 = (undefined1 *)(unsigned)(iVar4 * 0x10 + *(int *)(unsigned)(iVar2 + -4 + iVar3));
    *puVar5 = (char)*ar4;
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(puVar5 + 2,ar4 + 1,0xe,0));
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c2784c0));
    iVar4 = (int)0x16c;
    ar4[5] = 0;
    *(int *)(unsigned)(iVar4 + *(int *)(unsigned)puVar1) = *(int *)(unsigned)(iVar4 + *(int *)(unsigned)puVar1) + -1;
    iVar4 = 0;
  }
  if (iVar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c266c48),iVar4,vr6,vr7));
  }
  return iVar4;
}

__asm__(".globl _FUN_8c266c48\n.set _FUN_8c266c48, _FUN_8c266c48_def\n");
