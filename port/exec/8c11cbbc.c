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
uint FUN_8c11cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11cbbc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  
  puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c23));
  if ((byte)ar6 != 0) {
    puVar2 = (&(*(undefined1 *)(unsigned)0x8c127c20));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,(int)(char)puVar2[ar5],ar5,(uint)(byte)ar6));
  bVar3 = (uVar1 & 0xff) == 0;
  if (bVar3) {
    *(byte *)(unsigned)(ar5 + 0xe4 + ar4) = (byte)ar6;
  }
  return (uint)!bVar3;
}

__asm__(".globl _FUN_8c11cbbc\n.set _FUN_8c11cbbc, _FUN_8c11cbbc_def\n");
