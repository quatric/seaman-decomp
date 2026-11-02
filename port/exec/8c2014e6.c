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
int FUN_8c2014e6_def(int ar4,undefined4 ar5,int ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c2014e6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint s0 = *(uint *)(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 304; for (int i_ = 0; i_ < 304; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  undefined1 *ar6_00;
  uint a7;
  int iVar3;
  
  ar6_00 = ((undefined1 *)(fr0_ - 0x30));
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  *(undefined4 *)(unsigned)(iVar3 + 0x30) = 1;
  puVar1 = ((void *)(unsigned)0x8c1fdd44);
  *(uint *)(unsigned)(iVar3 + 0x34) = s0;
  a7 = ar7;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,ar5,ar6_00,ar7));
  if (-1 < iVar3) {
    if ((*(char *)(fr0_ - 0x2a)) == '\x01') {
      uVar2 = (uint)(*(ushort *)(fr0_ - 0x2c));
      if (((ar7 < uVar2) && (s0 <= uVar2)) && (ar7 + s0 <= uVar2)) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c200b10(ar4,ar5,ar6_00,a7));
        if (-1 < iVar3) {
          uVar2 = 0;
          if (s0 != 0) {
            do {
              iVar3 = (vsp = ((unsigned long)(fr0_ - 304)), FUN_8c1fbc44(ar4,ar7,ar6,a7));
              if (iVar3 < 0) {
                return iVar3;
              }
              uVar2 = uVar2 + 1;
              ar6 = ar6 + 0x200;
              ar7 = ar7 + 1;
            } while (uVar2 < s0);
          }
          iVar3 = 0;
        }
      }
      else {
        iVar3 = (int)(int)0xffffff00;
      }
    }
    else {
      iVar3 = (int)(int)0xffffff0b;
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c2014e6\n.set _FUN_8c2014e6, _FUN_8c2014e6_def\n");
