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
int FUN_8c268250_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268250";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  int iVar7;
  
  puVar4 = 0x8c4bd534;
  puVar2 = 0x8c4bd530;
  iVar7 = 0x7000103;
  if (ar4 != 0) {
    cVar1 = (char)0x80;
    *(undefined4 *)(unsigned)0x8c4bd530 = 0x15;
    puVar5 = 0x8c4bd536;
    *puVar4 = *(undefined1 *)(unsigned)(ar4 + 1);
    puVar4[1] = (char)ar5 + cVar1;
    *puVar5 = (char)ar6;
    puVar6 = ((void *)(unsigned)0x8c267fe8);
    puVar3 = 0x8c4bd530;
    *(char *)(unsigned)((int)puVar2 + 7) = (char)((uint)ar6 >> 8);
    iVar7 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar6)))(puVar3,vr5,vr6,vr7));
  }
  if (iVar7 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c268250),iVar7,vr6,vr7));
  }
  return iVar7;
}

__asm__(".globl _FUN_8c268250\n.set _FUN_8c268250, _FUN_8c268250_def\n");
