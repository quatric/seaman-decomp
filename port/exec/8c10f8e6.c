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
uint FUN_8c10f8e6_def(int *ar4,uint ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10f8e6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 ar5_00;
  int a5;
  undefined4 ar6_00;
  int iVar2;
  uint uVar3;
  
  iVar2 = *ar4;
  uVar1 = ar5 & 0xff;
  uVar3 = 1;
  if (uVar1 == 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f736(ar4,ar6,ar6,ar7));
    uVar3 = (uint)((uVar1 & 0xff) == 0);
  }
  else if (uVar1 == 2) {
    *(char *)(unsigned)((int)ar6 + ar4[0x1b] + 1) = (char)ar7;
  }
  else if (uVar1 == 3) {
    if ((ar4[0x12] != 0) || (ar6 != (int *)(unsigned)0x0)) {
      if ((short)ar4[0xc] == 0) {
        ar4[0x15] = (int)((float)ar4[0x22] + 1.0);
      }
      ar4[10] = 1;
    }
  }
  else {
    if (uVar1 == 4) {
      (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[3]));
      ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
      ar5_00 = 7;
    }
    else {
      if (uVar1 != 5) {
        if (uVar1 == 6) {
          if (ar6 != (int *)(unsigned)0x0) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f6f0(ar4,*ar7 + (int)ar6,ar6,ar7));
            *ar7 = *ar7 + (ar4[0x1e] + 6) * 4;
            return 1;
          }
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10fa6c(ar4,ar5,0,ar7));
          return 1;
        }
        if (uVar1 == 7) {
          if (ar6 != (int *)(unsigned)0x0) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f69c(ar4,*ar7 + (int)ar6,ar6,ar7));
          }
          iVar2 = *ar7 + (ar4[0x1e] + 6) * 4;
        }
        else {
          if (uVar1 == 8) {
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10f850(ar4,*ar6,ar6,ar7));
            return 1;
          }
          if (uVar1 == 9) {
            *ar6 = ar4[0xb];
            return 1;
          }
          if (uVar1 != 0xf8) {
            if (uVar1 != 0xff) {
              return 0;
            }
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0x11],ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,ar4[0xd],ar6,ar7));
            a5 = ar4[0x1b];
            (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar2 + 0x18))))(iVar2,a5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c120668(ar4,a5,ar6,ar7));
            return 1;
          }
          iVar2 = ar4[0x12];
        }
        *ar7 = iVar2;
        return 1;
      }
      (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(uint)ar4[3]));
      ar5_00 = 6;
      ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
    }
    uVar3 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),ar5_00,ar6_00,ar6));
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10f8e6\n.set _FUN_8c10f8e6, _FUN_8c10f8e6_def\n");
