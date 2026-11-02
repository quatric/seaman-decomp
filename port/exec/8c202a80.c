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
undefined4 FUN_8c202a80_def(undefined4 *ar4,int ar5,undefined4 ar6,int ar7)

{
  ring[rp++ & 255] = "FUN_8c202a80";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(int *)(vsp + 0);
  undefined4 s4 = *(undefined4 *)(vsp + 4);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 2608; for (int i_ = 0; i_ < 2608; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 *puVar2;
  int ar7_00;
  uint uVar3;
  
  puVar2 = ((undefined4 *)(unsigned)0x8c273be0);
  ((undefined4 *)(fr0_ - 0xa30))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c26d250);
  ((undefined4 *)(fr0_ - 0xa30))[1] = (*(undefined4 *)(unsigned)(unsigned)0x8c26d254);
  ((undefined4 *)(fr0_ - 0xa30))[2] = (*(undefined4 *)(unsigned)(unsigned)0x8c26d258);
  ((undefined4 *)(fr0_ - 0xa30))[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c26d25c);
  (*(undefined4 *)(fr0_ - 0xa20)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d260);
  (*(undefined4 *)(fr0_ - 0xa1c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d264);
  *(unsigned *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa1bc) + (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) * 0x10) = ar4;
  *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c0) + (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) * 0x10) = ar5;
  *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c4) + (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) * 0x10) = ar6;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1b8) = ar7;
  *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c4aa1c8) + (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) * 0x10) = s0;
  (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) = (*(undefined4 *)(unsigned)(unsigned)0x8c273be0) + 1 & 1;
  ar7_00 = ar7;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4a9be0) = ar7;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4aa1f4) != 0) {
    puVar2 = (undefined4 *)(unsigned)0xff;
    ar5 = ar7;
    (vsp = ((unsigned long)(fr0_ - 2608)), sh4_dmac_202c60(0xff,ar7,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 2608)), FUN_8c212148(puVar2,ar5,ar6,ar7_00));
  if (iVar1 == -0x80000000) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 2608)), FUN_8c2036a0((*(undefined4 *)(unsigned)(unsigned)0x8c4aa200),ar4,ar6,ar7_00));
    if (iVar1 != 0) {
      return iVar1;
    }
    *ar4 = 1;
    ar4[1] = ((undefined4 *)(fr0_ - 0xa30))[(*(undefined4 *)(unsigned)(unsigned)0x8c4a9bd0)];
    ar4[2] = (*(undefined4 *)(unsigned)(unsigned)0x8c4a9bd0);
    ar4[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1e8);
    ar4[4] = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa1ec);
    if (ar7 == 1) {
      ar4[6] = 1;
    }
    else {
      ar4[6] = 0;
    }
    if (s0 == 1) {
      for (puVar2 = ((undefined4 *)(fr0_ - 0xa18)); puVar2 < &(*(undefined4 *)(fr0_ - 0x18)); puVar2 = puVar2 + 1) {
        *puVar2 = 0;
      }
      uVar3 = 0;
      if (ar4[5] != 0) {
        do {
          (vsp = ((unsigned long)(fr0_ - 2608)), FUN_8c20a87c(ar4[7] + uVar3,((undefined4 *)(fr0_ - 0xa18)),0xa00,ar7_00));
          uVar3 = uVar3 + 0xa00;
        } while (uVar3 < (uint)ar4[5]);
      }
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 2608)), FUN_8c2120c0(0x200,ar5,ar6,ar7_00));
  }
  return 0;
}

__asm__(".globl _FUN_8c202a80\n.set _FUN_8c202a80, _FUN_8c202a80_def\n");
