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
undefined1 * FUN_8c211a20_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c211a20";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d6f8);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d6fc);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d700);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d704);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d708);
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d70c);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d710);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined4 *)(unsigned)(unsigned)0x8c26d714);
  if ((((uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa014) & 1) != 0) &&
     (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc) != (undefined1 *)(unsigned)0x20)))) {
    puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4aa22c);
    (*(uint *)(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*puVar1,&(*(undefined4 *)(fr0_ - 0x40)),0x20,ar7));
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        puVar1 = puVar1 + 5;
      } while ((*(uint *)(fr0_ - 0x44)) < ar4);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa288) = 8;
  }
  if ((((uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa014) & 2) != 0) &&
     (((*(undefined4 *)(fr0_ - 0x40)) = 0x81000000, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc) != (undefined1 *)(unsigned)0x21)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(uint *)(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(undefined4 *)(unsigned)(puVar2 + 4),&(*(undefined4 *)(fr0_ - 0x40)),0x20,ar7));
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(uint *)(fr0_ - 0x44)) < ar4);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa28c) = 8;
  }
  if ((((uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa014) & 4) != 0) &&
     (((*(undefined4 *)(fr0_ - 0x40)) = 0x82000000, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc) != (undefined1 *)(unsigned)0x22)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(uint *)(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(undefined4 *)(unsigned)(puVar2 + 8),&(*(undefined4 *)(fr0_ - 0x40)),0x20,ar7));
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(uint *)(fr0_ - 0x44)) < ar4);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa290) = 8;
  }
  if ((((uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa014) & 8) != 0) &&
     (((*(undefined4 *)(fr0_ - 0x40)) = 0x83000000, (*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0 || (((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc) != (undefined1 *)(unsigned)0x23)))) {
    puVar2 = ((undefined1 *)(unsigned)0x8c4aa22c);
    (*(uint *)(fr0_ - 0x44)) = 0;
    if (ar4 != 0) {
      do {
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(undefined4 *)(unsigned)(puVar2 + 0xc),&(*(undefined4 *)(fr0_ - 0x40)),0x20,ar7));
        (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
        puVar2 = puVar2 + 0x14;
      } while ((*(uint *)(fr0_ - 0x44)) < ar4);
    }
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa294) = 8;
  }
  puVar2 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa014);
  if (((uint)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa014) & 0x10) != 0) {
    (*(undefined4 *)(fr0_ - 0x40)) = 0x84000000;
    puVar2 = ((undefined1 *)(unsigned)0x8c4a9ef0);
    if (((*(undefined4 *)(unsigned)(unsigned)0x8c4a9ef0) == 0) || (puVar2 = ((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc), ((undefined4 *)(unsigned long)*(unsigned *)0x8c4a9fcc) != (undefined1 *)(unsigned)0x24)) {
      puVar3 = ((undefined1 *)(unsigned)0x8c4aa22c);
      (*(uint *)(fr0_ - 0x44)) = 0;
      if (ar4 != 0) {
        do {
          puVar2 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c20731e(*(undefined4 *)(unsigned)(puVar3 + 0x10),&(*(undefined4 *)(fr0_ - 0x40)),0x20,ar7));
          (*(uint *)(fr0_ - 0x44)) = (*(uint *)(fr0_ - 0x44)) + 1;
          puVar3 = puVar3 + 0x14;
        } while ((*(uint *)(fr0_ - 0x44)) < ar4);
      }
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa298) = 8;
    }
  }
  return puVar2;
}

__asm__(".globl _FUN_8c211a20\n.set _FUN_8c211a20, _FUN_8c211a20_def\n");
