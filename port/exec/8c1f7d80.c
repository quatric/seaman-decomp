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
undefined4 FUN_8c1f7d80_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f7d80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 1;
  iVar5 = 0;
  do {
    if (*(char *)(unsigned)(iVar2 + ar4) == '/') break;
    if (((&(*(undefined1 *)(unsigned)0x8c125470))[*(byte *)(unsigned)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    pcVar1 = (char *)(unsigned)(iVar2 + ar4);
    iVar2 = iVar2 + 1;
    iVar5 = (int)*pcVar1 + iVar5 * 10 + -0x30;
  } while (iVar2 < 2);
  (*(int *)(fr0_ - 0x24)) = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(char *)(unsigned)(iVar2 + ar4) == ' ') break;
    if (((&(*(undefined1 *)(unsigned)0x8c125470))[*(byte *)(unsigned)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    iVar4 = (int)(char)*(byte *)(unsigned)(iVar2 + ar4) + iVar4 * 10 + -0x30;
    (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x24)) + 1;
  } while ((*(int *)(fr0_ - 0x24)) < 2);
  *ar5 = iVar4;
  *ar6 = iVar5;
  return uVar3;
}

__asm__(".globl _FUN_8c1f7d80\n.set _FUN_8c1f7d80, _FUN_8c1f7d80_def\n");
