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
undefined1 * FUN_8c26325e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c26325e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = 0x7fffffff;
  iVar3 = 0;
  do {
    if (*(char *)(unsigned)(iVar3 * 100 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x20);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)(unsigned)0x0;
  }
  else {
    puVar1 = (undefined1 *)(unsigned)(iVar3 * 100 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = 0;
    *(unsigned *)(unsigned)(puVar1 + 4) = ar7;
    *(undefined4 *)(unsigned)(puVar1 + 8) = ar4;
    *(undefined4 *)(unsigned)(puVar1 + 0xc) = 0;
    *(undefined4 *)(unsigned)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(unsigned)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(unsigned)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(unsigned)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(unsigned)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar7 + 0x24))))(ar7,0,vr6,vr7));
    *(undefined4 *)(unsigned)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(unsigned)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26325e\n.set _FUN_8c26325e, _FUN_8c26325e_def\n");
