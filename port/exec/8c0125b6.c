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
undefined4 FUN_8c0125b6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0125b6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5 = 0;
  undefined4 in_fr4 = 0;
  undefined4 in_PR = 0;
  char cVar4;
  
  cVar4 = '\0';
  (*(undefined2 *)(fr0_ - 0x24)) = (undefined2)in_fr4;
  (*(ushort *)(fr0_ - 0x22)) = (ushort)((uint)in_fr4 >> 0x10);
  (*(undefined4 *)(fr0_ - 0x28)) = in_fr5;
  (*(undefined4 *)(fr0_ - 0x20)) = in_PR;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c010df4(ar4,ar5,ar6,ar7));
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      dVar3 = 0.0;
      dVar2 = CONCAT44D(CONCAT22((*(ushort *)(fr0_ - 0x22)),(*(undefined2 *)(fr0_ - 0x24))),(*(undefined4 *)(fr0_ - 0x28)));
    }
    else {
      dVar3 = -7.491824698174533e-251;
      dVar2 = CONCAT44D((*(undefined4 *)(fr0_ - 0x20)),CONCAT22((*(ushort *)(fr0_ - 0x22)),(*(undefined2 *)(fr0_ - 0x24))));
    }
    if (dVar2 == dVar3) {
      *ar4 = 0;
      return ((undefined4 *)(unsigned)0x8c0126c0);
    }
    iVar1 = ((*(ushort *)(fr0_ - 0x22)) >> 4 & 0x7ff) - 0x3fe;
    *ar4 = iVar1;
    if (iVar1 == -0x3fe) {
      *ar4 = *ar4 + 1;
      (*(ushort *)(fr0_ - 0x22)) = (*(ushort *)(fr0_ - 0x22)) & 0x800f;
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c012a24(&(*(undefined1 *)(fr0_ - 0x30)),&(*(undefined2 *)(fr0_ - 0x24)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c012a24(((undefined1 *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x28)),ar6,ar7));
      while ((((byte *)(fr0_ - 0x2f))[0] & 0x10) == 0) {
        (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c012854(((byte *)(fr0_ - 0x2f)),7,ar6,ar7));
        *ar4 = *ar4 + -1;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c012a24(&(*(undefined2 *)(fr0_ - 0x24)),&(*(undefined1 *)(fr0_ - 0x30)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c012a24(&(*(undefined4 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x2c)),ar6,ar7));
    }
  }
  else {
    if (iVar1 == 1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x4b8;
    }
    if (iVar1 == 2) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c2787a8) = 0x44c;
    }
  }
  return 0x18;
}

__asm__(".globl _FUN_8c0125b6\n.set _FUN_8c0125b6, _FUN_8c0125b6_def\n");
