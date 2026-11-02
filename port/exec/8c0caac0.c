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
undefined4 FUN_8c0caac0_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0caac0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  uint a5;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(undefined4 *)(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51c4(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar1 * 4 + 8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x138 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1006bc(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  }
  if (iVar1 != 0) {
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0x78))))(piVar3,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c51b8(*(undefined4 *)(unsigned)(0x7cc + ar5),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x70))))
              (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021720(0x8c2b59d0,1,ar6,ar7));
    ar6 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d1c20))))
              (*(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 8),*(undefined4 *)(unsigned)(ar4 + 8),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8))))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  *(undefined4 *)(unsigned)(0x2d1b0 + ar4) = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x88 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10))))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),0x8c3eb334,ar6,ar7));
  a5 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x98 + *piVar3))))(piVar3,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c235ee4(piVar3,a5,ar6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0caac0\n.set _FUN_8c0caac0, _FUN_8c0caac0_def\n");
