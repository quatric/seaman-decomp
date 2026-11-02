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
undefined4 FUN_8c20cefe_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20cefe";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  undefined4 ar6_00;
  
  if ((*ar4 & 0xffff) == 3) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20d400(ar4[3],ar4[3],ar6,ar7));
    if ((ar4[6] & 1) == 0) {
      puVar2 = ((undefined1 *)(unsigned)0x8c26d448);
    }
    else {
      puVar2 = ((undefined1 *)(unsigned)0x8c26d464);
    }
    ar6_00 = *(undefined4 *)(unsigned)(puVar2 + iVar1 * 4);
  }
  else {
    if ((ar4[6] & 8) == 0) {
      return 4;
    }
    ar6_00 = 0x800;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c20a8e0(ar4[7],ar5,ar6_00,ar7));
  return 0;
}

__asm__(".globl _FUN_8c20cefe\n.set _FUN_8c20cefe, _FUN_8c20cefe_def\n");
