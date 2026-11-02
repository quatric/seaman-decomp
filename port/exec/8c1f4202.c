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
undefined4 FUN_8c1f4202_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f4202";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2 = 0;
  char *pcVar4;
  int iVar5;
  undefined4 in_PR = 0;
  
  if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfc0) == 1) {
    if ((*(uint *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x18) & 1) == 0) {
      bVar1 = *(&(*(undefined1 *)(unsigned)0x8c1f5a2c));
      *(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfb0) != *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfac)) {
          *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfb0) = *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfac);
          if (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfac) == 0) {
            *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(300000,0x14,vr6,vr7));
            *(int *)(unsigned)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x14) = 0;
          *(uint *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x80) =
               *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10c0) | *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10d0);
          *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x14) = 1;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4102(ar4,ar5,ar6,ar7));
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b0) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b8) * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10a8);
        iVar3 = *(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f59f2(*(undefined4 *)(unsigned)
                              (*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b8) * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10a8),ar5,
                             ar6,ar7));
        *(undefined4 *)(unsigned)(iVar3 + 4) = uVar2;
        *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10f4) + 0x18) = 1;
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfd8) = 0;
        *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b8) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b8) ^ 1;
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfcc) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b8) * 4 + (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10a8);
        *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b4) = *(uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x10b4) ^ 1;
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfdc) = 0;
        iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(unsigned)(iVar3 + 7) = *(undefined1 *)(unsigned)(iVar3 + 6);
            *(undefined1 *)(unsigned)(iVar3 + 6) = 0;
            *(undefined4 *)(unsigned)(iVar3 + 0x1c) = *(undefined4 *)(unsigned)(iVar3 + 0x18);
            *(undefined4 *)(unsigned)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4727b4) + 0xfc0) = 0;
        uVar2 = 0;
        *(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = 0;
      }
      else {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c26c6b8)); unsigned long t1_ = (unsigned long)(in_PR); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c1f4570(ar4,ar5,ar6,ar7); });
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f4202\n.set _FUN_8c1f4202, _FUN_8c1f4202_def\n");
