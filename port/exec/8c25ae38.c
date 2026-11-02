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
undefined4 FUN_8c25ae38_def(uint *ar4,uint *ar5,undefined4 *ar6,undefined4 *ar7)

{
  ring[rp++ & 255] = "FUN_8c25ae38";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar4));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)(ar6));
  (*(unsigned *)(fr0_ - 0x18) = (unsigned)(unsigned long)(ar7));
  do {
    puVar1 = ((void *)(unsigned)0x8c259c48);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c259c48(&(*(int *)(fr0_ - 0x2c)),4,ar6,ar7));
    if (iVar2 < 0) {
      return 0xffffffff;
    }
    if ((*(int *)(fr0_ - 0x2c)) == 0x54525650) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(undefined4 *)(fr0_ - 0x14)),0xc,ar6,ar7));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
    }
    else {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 48)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(undefined4 *)(fr0_ - 0x28)),4,ar6,ar7));
      if (iVar2 < 0) {
        return 0xffffffff;
      }
      (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c25a122((*(undefined4 *)(fr0_ - 0x28)),1,ar6,ar7));
    }
    iVar2 = 0x8c4aa6ac;
  } while ((*(int *)(fr0_ - 0x2c)) != 0x54525650);
  *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x18)) = (*(undefined4 *)(fr0_ - 0x14));
  *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = (uint)(*(ushort *)(fr0_ - 0xc));
  uVar3 = *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x24));
  if ((((uVar3 == 8) || (uVar3 == 0x10)) || (uVar3 == 0x20)) ||
     (((uVar3 == 0x40 || (uVar3 == (int)0x80)) ||
      ((uVar3 == (int)0x100 || ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))
       ))))) {
    *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) = (uint)(*(ushort *)(fr0_ - 0xa));
    uVar3 = *((uint *)(unsigned long)*(unsigned *)(fr0_ - 0x20));
    if ((uVar3 == 8) ||
       (((((uVar3 == 0x10 || (uVar3 == 0x20)) || (uVar3 == 0x40)) ||
         ((uVar3 == (int)0x80 || (uVar3 == (int)0x100)))) ||
        ((uVar3 == (int)0x200 || (uVar3 == (int)0x400)))))) {
      *((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)) = (*(undefined4 *)(fr0_ - 0x10));
      return 1;
    }
  }
  *(undefined4 *)(unsigned)(iVar2 + 8) = 4;
  return 0xfffffffc;
}

__asm__(".globl _FUN_8c25ae38\n.set _FUN_8c25ae38, _FUN_8c25ae38_def\n");
