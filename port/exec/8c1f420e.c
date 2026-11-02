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
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f4210_def
          (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_FATAL_ERROR_Cannot_get_semap_1f4210";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain1 = (int)(unsigned long)vin1;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2 = 0;
  char *pcVar4;
  int iVar5;
  uint unaff_r12 = 0;
  int *unaff_r14 = 0;
  
  if (*(int *)(unsigned)(*unaff_r14 + ain1) == 1) {
    if ((*(uint *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x18) & unaff_r12) == 0) {
      bVar1 = *(&(*(undefined1 *)(unsigned)0x8c1f5a2c));
      *(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(unsigned)(*unaff_r14 + 0xfb0) != *(int *)(unsigned)(*unaff_r14 + 0xfac)) {
          *(undefined4 *)(unsigned)(*unaff_r14 + 0xfb0) = *(undefined4 *)(unsigned)(*unaff_r14 + 0xfac);
          if (*(int *)(unsigned)(*unaff_r14 + 0xfac) == 0) {
            *(undefined4 *)(unsigned)(*unaff_r14 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), libgcc_divide_helper_010468(300000,0x14,vr6,vr7));
            *(int *)(unsigned)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x14) = 0;
          iVar3 = *unaff_r14;
          *(uint *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x10f4) + 0x80) =
               *(uint *)(unsigned)(iVar3 + 0x10c0) | *(uint *)(unsigned)(iVar3 + 0x10d0);
          *(uint *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x14) = unaff_r12;
        }
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4102(ar4,ar5,ar6,ar7));
        iVar3 = *unaff_r14;
        *(undefined4 *)(unsigned)(iVar3 + 0x10b0) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        iVar3 = *unaff_r14;
        iVar5 = *(int *)(unsigned)(iVar3 + 0x10f4);
        uVar2 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f59f2(*(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8),ar5,ar6,
                             ar7));
        *(undefined4 *)(unsigned)(iVar5 + 4) = uVar2;
        *(uint *)(unsigned)(*(int *)(unsigned)(*unaff_r14 + 0x10f4) + 0x18) = unaff_r12;
        *(undefined4 *)(unsigned)(*unaff_r14 + 0xfd8) = 0;
        *(uint *)(unsigned)(*unaff_r14 + 0x10b8) = *(uint *)(unsigned)(*unaff_r14 + 0x10b8) ^ unaff_r12;
        iVar3 = *unaff_r14;
        *(undefined4 *)(unsigned)(iVar3 + 0xfcc) =
             *(undefined4 *)(unsigned)(*(int *)(unsigned)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        *(uint *)(unsigned)(*unaff_r14 + 0x10b4) = *(uint *)(unsigned)(*unaff_r14 + 0x10b4) ^ unaff_r12;
        *(undefined4 *)(unsigned)(*unaff_r14 + 0xfdc) = 0;
        iVar3 = *unaff_r14 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(unsigned)(*unaff_r14 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(unsigned)(iVar3 + 7) = *(undefined1 *)(unsigned)(iVar3 + 6);
            *(undefined1 *)(unsigned)(iVar3 + 6) = 0;
            *(undefined4 *)(unsigned)(iVar3 + 0x1c) = *(undefined4 *)(unsigned)(iVar3 + 0x18);
            *(undefined4 *)(unsigned)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(unsigned)(*unaff_r14 + 0xfc0) = 0;
        uVar2 = 0;
        *(&(*(undefined1 *)(unsigned)0x8c1f5a2c)) = 0;
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c1f4570(ar4,ar5,ar6,ar7));
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

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f4210\n.set _s_FATAL_ERROR_Cannot_get_semap_1f4210, _s_FATAL_ERROR_Cannot_get_semap_1f4210_def\n");
