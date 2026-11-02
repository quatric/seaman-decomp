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
undefined4 FUN_8c101510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c101510";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  undefined4 ar6_00;
  
  ((int *)(fr0_ - 0x24))[0] = 0;
  (*(int *)(fr0_ - 0x28)) = 0;
  (*(int *)(fr0_ - 0x2c)) = 0;
  (*(int *)(fr0_ - 0x30)) = 0;
  bVar5 = *(char *)(unsigned)(0x598 + ar4) + (char)ar5 * -8;
  do {
    if (bVar5 == *(byte *)(unsigned)(0x598 + ar4)) {
      return 0;
    }
    cVar1 = *(char *)(unsigned)(0x190 + ar4 + (uint)bVar5 * 4);
    cVar2 = *(char *)(unsigned)(0x191 + ar4 + (uint)bVar5 * 4);
    cVar3 = *(char *)(unsigned)(0x190 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    cVar4 = *(char *)(unsigned)(0x191 + ar4 + (uint)(byte)(bVar5 + (char)ar5) * 4);
    if ((cVar1 < cVar3) && (cVar4 < cVar2)) {
      ar6_00 = 0;
LAB_8c1015f0:
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c1013f4(ar4,((int *)(fr0_ - 0x24)),ar6_00,ar7));
      if (((int *)(fr0_ - 0x24))[0] == 4) {
        (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + 1;
        ((int *)(fr0_ - 0x24))[0] = 0;
        if (1 < (*(int *)(fr0_ - 0x28))) {
          return 1;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c101480(ar4,&(*(int *)(fr0_ - 0x2c)),ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x2c)) == 4) {
        (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0x30)) + 1;
        (*(int *)(fr0_ - 0x2c)) = 0;
        if (1 < (*(int *)(fr0_ - 0x30))) {
          return 1;
        }
      }
    }
    else {
      if ((cVar1 < cVar3) && (cVar2 < cVar4)) {
        ar6_00 = 1;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar2 < cVar4)) {
        ar6_00 = 2;
        goto LAB_8c1015f0;
      }
      if ((cVar3 < cVar1) && (cVar4 < cVar2)) {
        ar6_00 = 3;
        goto LAB_8c1015f0;
      }
    }
    bVar5 = bVar5 + (char)ar5;
  } while( true );
}

__asm__(".globl _FUN_8c101510\n.set _FUN_8c101510, _FUN_8c101510_def\n");
