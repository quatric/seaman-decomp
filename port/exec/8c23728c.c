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
uint FUN_8c23728c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c23728c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  bool bVar1;
  int iVar2;
  
  bVar1 = false;
  if (ar4 == (*(undefined4 *)(unsigned)(unsigned)0x8c277b10)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c277b14) != *(int *)(unsigned)(iVar2 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 4)) {
      bVar1 = true;
    }
  }
  else {
    bVar1 = true;
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
  }
  if (bVar1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),ar4,ar7));
    iVar2 = iVar2 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b14) = *(int *)(unsigned)(iVar2 + 4);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) = (*(undefined4 *)(unsigned)(unsigned)0x8c4ab240) & 0xffffffc0 | *(uint *)(unsigned)(iVar2 + 8) & 0x3f;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4ab244) = *(undefined4 *)(unsigned)(iVar2 + 0xc);
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c) = *(uint *)(unsigned)(iVar2 + 0x18) >> 0x10;
    (*(undefined4 *)(unsigned)(unsigned)0x8c277b10) = ar4;
  }
  return (*(undefined4 *)(unsigned)(unsigned)0x8c277b1c);
}

__asm__(".globl _FUN_8c23728c\n.set _FUN_8c23728c, _FUN_8c23728c_def\n");
