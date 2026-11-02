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
undefined4 FUN_8c0cf1e4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0cf1e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x150);
  if ((iVar2 < 5) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
        *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
      }
      *(undefined2 *)(unsigned)(ar4 + 0x146) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x150) = 1;
      break;
    case 1:
      if (*(uint *)(unsigned)(ar4 + 0x4c8) < 0xfaffffff) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(unsigned)(iVar1 + 0x4c8) = *(int *)(unsigned)(iVar1 + 0x4c8) + 0x5000000;
        }
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffffff;
        }
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 2;
      }
      break;
    case 2:
      *(short *)(unsigned)(ar4 + 0x146) = *(short *)(unsigned)(ar4 + 0x146) + 1;
      if (*(short *)(unsigned)(ar5 + 0x10) <= *(short *)(unsigned)(ar4 + 0x146)) {
        *(undefined2 *)(unsigned)(ar4 + 0x146) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 3;
      }
      break;
    case 3:
      if (*(uint *)(unsigned)(ar4 + 0x4c8) < 0x6000000) {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          *(undefined4 *)(unsigned)(ar4 + iVar2 * 4 + 0x4c8) = 0xffffff;
        }
        *(undefined2 *)(unsigned)(ar4 + 0x146) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 4;
      }
      else {
        for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
          iVar1 = ar4 + iVar2 * 4;
          *(int *)(unsigned)(iVar1 + 0x4c8) = *(int *)(unsigned)(iVar1 + 0x4c8) + -0x5000000;
        }
      }
      break;
    case 4:
      *(short *)(unsigned)(ar4 + 0x146) = *(short *)(unsigned)(ar4 + 0x146) + 1;
      if (0x59 < *(short *)(unsigned)(ar4 + 0x146)) {
        *(undefined2 *)(unsigned)(ar4 + 0x146) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x150) = 0;
        return 5;
      }
    }
  }
  return *(undefined4 *)(unsigned)(ar4 + 0x150);
}

__asm__(".globl _FUN_8c0cf1e4\n.set _FUN_8c0cf1e4, _FUN_8c0cf1e4_def\n");
