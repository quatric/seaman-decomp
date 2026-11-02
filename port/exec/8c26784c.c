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
int FUN_8c26784c_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26784c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int ar5_00;
  uint *puVar1;
  undefined4 in_PR = 0;
  
  puVar1 = ((undefined4 *)(unsigned)0x8c278520);
  do {
    if ((int)*puVar1 < 1) {
      ar5_00 = 0x3000001;
LAB_8c267878:
      if (ar5_00 != 0) {
        ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c2688a0(((void *)0x8c26784c),ar5_00,ar6,ar7); });
      }
      return ar5_00;
    }
    if ((ar6 & 0xffff) == *puVar1) {
      ar6 = (uint)(short)puVar1[1];
      ar5_00 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c267740(ar4,ar5,ar6,ar7));
      goto LAB_8c267878;
    }
    puVar1 = puVar1 + 2;
  } while( true );
}

__asm__(".globl _FUN_8c26784c\n.set _FUN_8c26784c, _FUN_8c26784c_def\n");
