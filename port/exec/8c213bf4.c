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
uint FUN_8c213bf4_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213bf4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = ar4[1];
  uVar3 = *ar4;
  uVar1 = *(ushort *)(unsigned)((int)ar4 + 6);
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c213a04((uint)(ushort)uVar4,(uint)uVar1,ar6,ar7));
  uVar4 = (uint)(ushort)uVar4 * (uint)uVar1;
  uVar3 = uVar3 & 0xff00;
  iVar2 = iVar2 * 4;
  if ((((uVar3 == 0x100) || (uVar3 == 0xd00)) || (uVar3 == 0x900)) || (uVar3 == 0xb00)) {
    uVar4 = uVar4 * 2;
  }
  else if (uVar3 == 0x200) {
    uVar4 = *(uint *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2);
  }
  else if (uVar3 == 0x300) {
    uVar4 = (uVar4 >> 2) + 0x800;
  }
  else if (uVar3 == 0x1000) {
    uVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277ce0) + iVar2) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d18) + iVar2);
  }
  else if (uVar3 == 0x400) {
    uVar4 = (*(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 3) + 0x800;
  }
  else if (uVar3 == 0x1100) {
    uVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277cfc) + iVar2) + *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d34) + iVar2);
  }
  else if (uVar3 == 0x500) {
    uVar4 = uVar4 >> 1;
  }
  else if (uVar3 == 0x600) {
    uVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 2;
  }
  else if (uVar3 != 0x700) {
    if (uVar3 == 0x800) {
      uVar4 = *(int *)(unsigned)(((undefined1 *)(unsigned)0x8c277d50) + iVar2) + 4U >> 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c213bf4\n.set _FUN_8c213bf4, _FUN_8c213bf4_def\n");
