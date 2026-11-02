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
uint FUN_8c12071a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c12071a";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  if (ar5 == 0) {
    uVar3 = 5;
  }
  else {
    uVar3 = 7;
  }
  uVar5 = 0;
  uVar6 = 0;
  if (*(char *)(unsigned)(ar4 + 8) != '\0') {
    do {
      puVar4 = (undefined4 *)(unsigned)(uVar6 * 8 + *(int *)(unsigned)(ar4 + 0xc));
      cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*puVar4,uVar3,puVar4[1],ar5));
      uVar5 = uVar5 | cVar2 == '\0';
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(byte *)(unsigned)(ar4 + 8));
  }
  return uVar5;
}

__asm__(".globl _FUN_8c12071a\n.set _FUN_8c12071a, _FUN_8c12071a_def\n");
