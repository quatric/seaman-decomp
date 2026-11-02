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
undefined4 FUN_8c213e2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c213e2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *ar4_00;
  undefined4 uVar3;
  char cVar4;
  
  ar4_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c0);
  uVar2 = (*(undefined1 *)(unsigned)0x8c278788);
  uVar1 = (*(undefined1 *)(unsigned)0x8c278784);
  uVar3 = (*(undefined1 *)(unsigned)0x8c278780);
  cVar4 = '\0';
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa5a0) = 1;
  *(undefined4 *)(unsigned)((int)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4c0) + 0x1c) = (*(undefined1 *)(unsigned)0x8c27878c);
  *(undefined4 *)(unsigned)(ar4_00 + 3) = uVar2;
  *(undefined4 *)(unsigned)((int)ar4_00 + 0x14) = uVar1;
  *(undefined4 *)(unsigned)(ar4_00 + 2) = uVar3;
  uVar2 = (*(undefined1 *)(unsigned)0x8c278758);
  uVar1 = (*(undefined1 *)(unsigned)0x8c278754);
  uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c278750);
  *(undefined4 *)(unsigned)((int)ar4_00 + 0xc) = (*(undefined1 *)(unsigned)0x8c27875c);
  *(undefined4 *)(unsigned)(ar4_00 + 1) = uVar2;
  *(undefined4 *)(unsigned)((int)ar4_00 + 4) = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc) = ar4_00;
  *(undefined4 *)(unsigned)ar4_00 = uVar3;
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c4aa5a0)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c256fec(ar4_00,((undefined1 *)(unsigned)0x8c278760),ar6,ar7); });
  uVar3 = ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c255d6c(ar4_00,(*(undefined4 *)(unsigned)(unsigned)0x8c4c0cc0),ar6,ar7); });
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d00) = *ar4_00;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d08) = ar4_00[1];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d10) = ar4_00[2];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = CONCAT44(*(undefined4 *)(unsigned)((int)ar4_00 + 0x1c),(*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18));
                    
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = *(undefined4 *)(unsigned)(ar4_00 + 3);
  }
  else {
    (*(uint *)(unsigned)0x8c4c0ce0) = *ar4_00;
    (*(uint *)(unsigned)0x8c4c0ce8) = ar4_00[1];
    (*(uint *)(unsigned)0x8c4c0cf0) = ar4_00[2];
    (*(uint *)(unsigned)0x8c4c0cf8) = ar4_00[3];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d00) = ar4_00[4];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d08) = ar4_00[5];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d10) = ar4_00[6];
    (*(undefined4 *)(unsigned)(unsigned)0x8c4c0d18) = ar4_00[7];
  }
  return uVar3;
}

__asm__(".globl _FUN_8c213e2c\n.set _FUN_8c213e2c, _FUN_8c213e2c_def\n");
