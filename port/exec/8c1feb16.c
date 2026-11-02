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
int FUN_8c1feb16_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1feb16";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (ar4 == 0) {
    iVar1 = (int)(int)0xffffff00;
  }
  else if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
    iVar1 = (int)(int)0xffffff01;
  }
  else {
    pcVar4 = (code *)((void *)(unsigned)0x8c1febd6);
    if ((*(int *)(unsigned)(ar4 + 4) == 1) || (pcVar4 = (code *)((void *)(unsigned)0x8c1fecf2), *(int *)(unsigned)(ar4 + 4) == 2)) {
      iVar3 = (int)0x200;
      iVar1 = 0x8c4783e0 + *(int *)(unsigned)(ar4 + 0x28) * (int)0x148;
      *(undefined4 *)(unsigned)(iVar1 + 0x30) = 1;
      *(int *)(unsigned)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)pcVar4))(ar4,ar5,vr6,vr7));
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(int)0xffffff0b;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1feb16\n.set _FUN_8c1feb16, _FUN_8c1feb16_def\n");
