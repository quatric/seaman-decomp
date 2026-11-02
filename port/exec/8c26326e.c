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
undefined1 * FUN_8c26326e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26326e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int in_r0 = (int)(unsigned long)vin0;
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_r10 = 0;
  int *unaff_r11 = 0;
  int unaff_r14 = 0;
  
  uVar2 = 0x7fffffff;
  iVar3 = unaff_r10;
  do {
    if (*(char *)(unsigned)(iVar3 * unaff_r14 + 0x8c4b9828) == '\0') break;
    iVar3 = iVar3 + 1;
  } while (iVar3 < in_r0);
  if (iVar3 == 0x20) {
    puVar1 = (undefined1 *)(unsigned)0x0;
  }
  else {
    puVar1 = (undefined1 *)(unsigned)(iVar3 * unaff_r14 + 0x8c4b9828);
    puVar1[1] = 1;
    puVar1[2] = (char)unaff_r10;
    *(unsigned *)(unsigned)(puVar1 + 4) = unaff_r11;
    *(undefined4 *)(unsigned)(puVar1 + 8) = ar4;
    *(int *)(unsigned)(puVar1 + 0xc) = unaff_r10;
    *(undefined4 *)(unsigned)(puVar1 + 0x10) = ar5;
    *(undefined4 *)(unsigned)(puVar1 + 0x14) = ar6;
    *(undefined4 *)(unsigned)(puVar1 + 0x2c) = uVar2;
    iVar3 = *(int *)(unsigned)(puVar1 + 0x14) + (int)0x7ff;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0x7ff;
    }
    *(int *)(unsigned)(puVar1 + 0x30) = iVar3 >> 0xb;
    *puVar1 = 1;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*unaff_r11 + 0x24))))(unaff_r11,0,ar6,1));
    *(undefined4 *)(unsigned)(puVar1 + 0x18) = uVar2;
    *(undefined4 *)(unsigned)(puVar1 + 0x1c) = uVar2;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c26326e\n.set _FUN_8c26326e, _FUN_8c26326e_def\n");
