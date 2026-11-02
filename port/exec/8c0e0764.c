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
undefined8 * FUN_8c0e0764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e0764";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined8 *puVar1;
  
  if ((*(undefined1 *)(unsigned)0x8c438258) == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = 0;
    (*(undefined1 *)(unsigned)0x8c438258) = '\x01';
  }
  if ((*(undefined1 *)(unsigned)0x8c438260) == '\0') {
    *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x0);
    (*(undefined1 *)(unsigned)0x8c438260) = '\x01';
  }
  if (((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c) == (undefined8 *)(unsigned)0x0) {
    *(float *)(unsigned)(ar4 + 0x2324c) = *(float *)(unsigned)(ar4 + 0x2324c) - 8.9;
    puVar1 = ((undefined1 *)(unsigned)0x8c0e0860);
    if (*(float *)(unsigned)(ar4 + 0x2324c) < -1314.45) {
      *(undefined4 *)(unsigned)(ar4 + 0x2324c) = 0xc4a214cc;
      (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = 0;
      *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x1);
      puVar1 = (undefined8 *)(unsigned)0x1;
    }
  }
  else {
    puVar1 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c);
    if (((undefined4 *)(unsigned long)*(unsigned *)0x8c43825c) == (undefined8 *)(unsigned)0x1) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c438254) = (*(undefined4 *)(unsigned)(unsigned)0x8c438254) + 1;
      puVar1 = (undefined8 *)(unsigned)0x5a;
      if (0x5a < (*(undefined4 *)(unsigned)(unsigned)0x8c438254)) {
        *(undefined4 *)(unsigned)(ar4 + 0x23254) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x2324c) = 0xc4a44e66;
        puVar1 = ((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2325c));
        if (((undefined8 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x2325c)) != (undefined8 *)(unsigned)0xffffffff) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022104(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x2325c),ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(unsigned)(ar4 + 0x2325c),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x2325c) = 0xffffffff;
          *(unsigned *)0x8c43825c = (unsigned)(unsigned long)((undefined8 *)(unsigned)0x0);
          puVar1 = (undefined8 *)(unsigned)0x0;
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0e0764\n.set _FUN_8c0e0764, _FUN_8c0e0764_def\n");
