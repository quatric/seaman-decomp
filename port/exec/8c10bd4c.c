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
undefined4 FUN_8c10bd4c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10bd4c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined1 *ar6_00;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)(unsigned)(uint)ar4[1];
  uVar3 = 0;
  ar6_00 = ((undefined1 *)(fr0_ - 0x20));
  (*(undefined4 *)(fr0_ - 0x18)) = puVar2[1];
  (*(undefined4 *)(fr0_ - 0x14)) = ar4[2];
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar5));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11d996(*ar4,((undefined4 * *)(fr0_ - 0x24)),ar6_00,ar7));
  if (iVar1 != 0) {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c11cd44(*puVar2,*ar4,ar6_00,ar7));
  }
  *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) = *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[1];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[2] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[2];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[3] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[3];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[4] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[4];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[5] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[5];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[6] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[6];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[7] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[7];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[8] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[8];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[9] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[9];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[10] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[10];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xb] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xb];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xc] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xc];
  ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[0xd] = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24))[0xd];
  (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)(puVar2[3])))(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x24)),&(*(undefined4 *)(fr0_ - 0x18)),ar6_00,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c10bd4c\n.set _FUN_8c10bd4c, _FUN_8c10bd4c_def\n");
