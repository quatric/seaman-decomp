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
uint FUN_8c1206ba_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1206ba";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  uVar4 = 0;
  uVar5 = 0;
  if (*(char *)(unsigned)(ar4 + 8) != '\0') {
    do {
      puVar3 = (undefined4 *)(unsigned)(uVar5 * 8 + *(int *)(unsigned)(ar4 + 0xc));
      cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*puVar3,6,puVar3[1],0));
      uVar4 = uVar4 | cVar2 == '\0';
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(byte *)(unsigned)(ar4 + 8));
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1206ba\n.set _FUN_8c1206ba, _FUN_8c1206ba_def\n");
