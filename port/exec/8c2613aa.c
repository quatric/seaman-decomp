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
undefined1 * FUN_8c2613aa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2613aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  int ar4_00;
  int ar5_00;
  int ar6_00;
  int iVar2;
  char cVar3;
  
  cVar3 = '\0';
  iVar2 = 0;
  do {
    if (*(char *)(unsigned)(iVar2 * 0x30 + -0x73b4c660) == '\0') break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  if (iVar2 == 8) {
    puVar1 = (undefined1 *)(unsigned)0x0;
  }
  else {
    ar6_00 = ar6;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260ca0(8,ar5,ar6,ar7); });
    iVar2 = iVar2 * 0x30;
    ar5_00 = 0;
    puVar1 = (undefined1 *)(unsigned)(iVar2 + -0x73b4c660);
    *(char *)(unsigned)(iVar2 + -0x73b4c65e) = (char)ar4;
    ar4_00 = 0;
    if (0 < ar4) {
      do {
        ar5_00 = ar5_00 + 1;
        *(undefined4 *)(unsigned)(iVar2 + -0x73b4c65c + ar4_00) = *(undefined4 *)(unsigned)(ar5 + ar4_00);
        *(undefined4 *)(unsigned)(iVar2 + -0x73b4c654 + ar4_00) = *(undefined4 *)(unsigned)(ar6 + ar4_00);
        *(undefined4 *)(unsigned)(iVar2 + -0x73b4c64c + ar4_00) = 0;
        ar4_00 = ar4_00 + 4;
      } while (ar5_00 < ar4);
    }
    *(undefined1 *)(unsigned)(iVar2 + -0x73b4c65f) = 0;
    *(undefined4 *)(unsigned)(iVar2 + -0x73b4c634) = 0;
    *(int *)(unsigned)(iVar2 + -0x73b4c644) = ar4;
    *(undefined4 *)(unsigned)(iVar2 + -0x73b4c640) = 0xac44;
    if (cVar3 == '\0') {
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4c63c) = 0x3dcccccd;
      *(undefined4 *)(unsigned)(iVar2 + -0x73b4c638) = 0x3dcccccd;
    }
    else {
      *(undefined8 *)(unsigned)(iVar2 + -0x73b4c63c) = 0x8c260cc83dcccccd;
      *(undefined8 *)(unsigned)(iVar2 + -0x73b4c638) = 0x8c260cc83dcccccd;
    }
    *puVar1 = 1;
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c260cc8(ar4_00,ar5_00,ar6_00,ar7); });
  }
  return puVar1;
}

__asm__(".globl _FUN_8c2613aa\n.set _FUN_8c2613aa, _FUN_8c2613aa_def\n");
