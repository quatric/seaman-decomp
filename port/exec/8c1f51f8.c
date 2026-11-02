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
undefined4 FUN_8c1f51f8_def(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f51f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  int unaff_r12 = 0;
  uint *unaff_r13 = 0;
  uint *unaff_r14 = 0;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f518e(ar6,ar7,ar6,ar7));
  ar5_00 = unaff_r13;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5146(unaff_r14,unaff_r13,ar6,ar7));
  iVar3 = (int)0x10c4;
  *(byte *)(unsigned)((int)unaff_r14 + 2) =
       (*(byte *)(unsigned)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & (byte)*unaff_r14;
  piVar1 = 0x8c4727b4;
  *(byte *)(unsigned)((int)unaff_r14 + 3) =
       (*(byte *)(unsigned)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & ~(byte)*unaff_r14;
  if (((*(int *)(unsigned)(*piVar1 + iVar3) == 1) && ((byte)unaff_r14[2] != 0xff)) &&
     ((byte)unaff_r14[2] != 0)) {
    ar5_00 = (uint *)(unsigned)((*unaff_r13 & 0xff) + 1);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f4780(unaff_r13,ar5_00,ar6,ar7));
  }
  if ((byte)*unaff_r14 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(unsigned)(unaff_r14 + 1) = bVar2;
  if (*(byte *)(unsigned)((int)unaff_r14 + 2) != 0) {
    *(undefined1 *)(unsigned)(unaff_r12 + 0x10) = 1;
    ar5_00 = unaff_r14;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f53c2(unaff_r12,unaff_r14,unaff_r13,ar7));
    ar6 = unaff_r13;
  }
  if (*(byte *)(unsigned)((int)unaff_r14 + 3) != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f5506(unaff_r12,ar5_00,ar6,ar7));
  }
  return 0;
}

__asm__(".globl _FUN_8c1f51f8\n.set _FUN_8c1f51f8, _FUN_8c1f51f8_def\n");
