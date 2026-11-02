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
undefined * FUN_8c0b6440_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0b6440";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar6_00;
  
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  puVar1 = (undefined *)(unsigned)0x7;
  if ((iVar2 < 8) && (puVar1 = (undefined *)(unsigned)0x2, 1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0b6474))[iVar2 + -2];
                    
    switch(iVar2) {
    case 2:
      puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x8c));
      if (puVar1 == (undefined *)(unsigned)0x1) {
        puVar1 = (undefined *)(unsigned)0x8c;
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02f414(ar4,ar5,ar6,ar7));
      if ((puVar1 == (undefined *)(unsigned)0x1) &&
         (puVar1 = ((undefined *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x88)), puVar1 == (undefined *)(unsigned)0x1)) {
        ar6_00 = 0x1b;
        uVar3 = 7;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(*(undefined4 *)(unsigned)(ar6 + 0x18),7,0x1b,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_6c_02f46c(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
        *(char *)(unsigned)(ar4 + 0x9c) = *(char *)(unsigned)(ar4 + 0x9c) + '\x01';
        if (*(char *)(unsigned)(ar4 + 0x9c) == '\b') {
          uVar3 = 1;
          ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c02cb84(*(int *)(unsigned)(ar6 + 4) + 0xa8,1,ar6_00,ar7); });
        }
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                    (*(int *)(unsigned)(ar4 + 0x6c),uVar3,ar6_00,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        }
        puVar1 = (undefined *)(unsigned)0x88;
        *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
      }
      break;
    case 5:
      puVar1 = (undefined *)(unsigned)0x9d;
      *(char *)(unsigned)(ar4 + 0x9d) = *(char *)(unsigned)(ar4 + 0x9d) + '\x01';
      break;
    case 6:
      puVar1 = (undefined *)(unsigned)0x2;
      if ('\x01' < *(char *)(unsigned)(ar4 + 0x9d)) {
        *(undefined1 *)(unsigned)(ar4 + 0x98) = 3;
        puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
      }
      break;
    case 7:
      *(undefined1 *)(unsigned)(ar4 + 0x98) = 6;
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c4e2c(ar4,ar5,ar6,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0b6440\n.set _FUN_8c0b6440, _FUN_8c0b6440_def\n");
