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
uint FUN_8c10ea62_def(int ar4,uint ar5,undefined2 *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ea62";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ar6_00;
  undefined2 *ar6_01;
  
  uVar1 = ar5 & 0xff;
  if (uVar1 == 2) {
    uVar5 = 1;
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 10) {
        if (ar6 == (undefined2 *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar5,0,ar7));
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d1bc(ar4,ar5,ar6,ar7));
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d2f0(ar4,*ar7 + (int)ar6,ar6,ar7));
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(unsigned)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(unsigned)(iVar2 + *(int *)(unsigned)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xb) {
        if (ar6 != (undefined2 *)(unsigned)0x0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d366(ar4,*ar7 + (int)ar6,ar6,ar7));
        }
        iVar2 = (int)0x90;
        *ar7 = *ar7 + 8;
        iVar4 = 0;
        if (*(short *)(unsigned)(iVar2 + ar4) == 0) {
          return 1;
        }
        do {
          iVar2 = iVar4 * 0xc;
          iVar4 = iVar4 + 1;
          *ar7 = (uint)*(ushort *)(unsigned)(iVar2 + *(int *)(unsigned)(0x84 + ar4) + 4) * 2 + *ar7;
        } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(0x90 + ar4));
        return 1;
      }
      if (uVar1 == 0xd) {
        ar6[1] = *(undefined2 *)(unsigned)(0x96 + ar4);
        *ar6 = *(undefined2 *)(unsigned)(0x94 + ar4);
        return 1;
      }
      if (uVar1 == 0xf) {
        *(undefined2 *)(unsigned)(0x96 + ar4) = ar6[1];
        iVar2 = (int)0x94;
        *(undefined2 *)(unsigned)(iVar2 + ar4) = *ar6;
        if (*(int *)(unsigned)(iVar2 + 0x20 + ar4) == 0) {
          return 1;
        }
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d3ec(ar4,ar5,ar6,ar7));
        return 1;
      }
      if (uVar1 == 0x10) {
        ar6_01 = ar6;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d458(ar4,ar6,ar6,ar7));
        puVar3 = (&(*(undefined1 *)(unsigned)0x8c10dda0));
        if ((uVar1 & 0xff) == 0) {
          (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar6,ar6_01,ar7));
          puVar3 = ((void *)(unsigned)0x8c10e818);
        }
        *(unsigned *)(unsigned)(ar4 + 0x18) = puVar3;
        return 1;
      }
      if (uVar1 == 0x16) {
        (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10d29c(ar4,ar5,ar6,ar7));
        return 1;
      }
      if (uVar1 == 0x17) {
        (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
        uVar5 = 7;
LAB_8c10eaee:
        uVar5 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c1113d0(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),uVar5,ar6_00,ar6));
        return uVar5;
      }
      if (uVar1 == 0x18) {
        (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc))));
        uVar5 = 6;
        ar6 = (undefined2 *)(unsigned)0x0;
        ar6_00 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1];
        goto LAB_8c10eaee;
      }
      if (uVar1 != (int)0xff) {
        return 0;
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10ddaa(ar4,ar5,ar6,ar7));
      goto LAB_8c10ec56;
    }
    uVar5 = 0;
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c10ea24(ar4,uVar5,ar6,ar7));
LAB_8c10ec56:
  return (uint)((uVar1 & 0xff) == 0);
}

__asm__(".globl _FUN_8c10ea62\n.set _FUN_8c10ea62, _FUN_8c10ea62_def\n");
