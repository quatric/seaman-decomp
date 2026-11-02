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
undefined4 FUN_8c0c8fc4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0c8fc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined1 *a6;
  
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c84cc(((undefined1 *)(fr0_ - 0x2c)),ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(undefined4 *)(unsigned)(0x7cc + ar5),iVar1,ar6,ar7));
  a6 = ((undefined1 *)(fr0_ - 0x2c));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar1 * 4 + 8));
  iVar1 = ar5;
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0xc))))(piVar3,ar5,a6,ar7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(undefined4 *)(unsigned)(0x7cc + ar5),iVar1,a6,ar7));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar2 * 4 + 8));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb0 + *piVar3))))(piVar3,iVar1,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x30))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),iVar1,a6,ar7));
  ar5_00 = 0;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c51a0(*(undefined4 *)(unsigned)(0x7cc + ar5),0,a6,ar7));
  ar4_00 = *(undefined4 *)(unsigned)(0x7cc + ar5);
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c90d0(ar4_00,ar5_00,a6,ar7));
  *(undefined2 *)(unsigned)(0x2d1ac + ar4) = 0;
  *(undefined1 *)(unsigned)(0xa0 + ar5) = 1;
  *(undefined4 *)(unsigned)(0x2d160 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x2d15c + ar4) = 2;
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c4e2c(ar4_00,ar5_00,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c4e48(ar4_00,ar5_00,a6,ar7));
  (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0c8480(((undefined1 *)(fr0_ - 0x2c)),0xffffffff,a6,ar7));
  return 0;
}

__asm__(".globl _FUN_8c0c8fc4\n.set _FUN_8c0c8fc4, _FUN_8c0c8fc4_def\n");
