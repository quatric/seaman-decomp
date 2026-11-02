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
int FUN_8c20202e_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c20202e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int ain0 = (int)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int a4;
  int a4_00;
  
  if (ar4 != (undefined1 *)(unsigned)0x0) {
    a4 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_201c8e(ar4,ar5,ar6,ar7));
    (*(undefined4 *)(fr0_ - 0x24)) = 0;
    a4_00 = a4;
    (*(undefined4 *)(fr0_ - 0x20)) = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c201bae(a4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x2c)),&(*(undefined4 *)(fr0_ - 0x24)),vr7));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x34)),a4 + 0x3c,vr7));
    (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(((undefined1 *)(fr0_ - 0x1c))));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c20284e(a4_00,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x40)),ar4 + 8,vr7));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c010794(8,((undefined1 *)(fr0_ - 0x48)),((undefined1 *)(fr0_ - 0x1c)),vr7));
    ain0 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c2029b4(a4_00,ar5,ar6,ar7));
    if (ain0 == 1) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c010794(8,ar4 + 8,((undefined1 *)(fr0_ - 0x1c)),vr7));
      *ar4 = 1;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c20202e\n.set _FUN_8c20202e, _FUN_8c20202e_def\n");
