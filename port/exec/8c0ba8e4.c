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
undefined4 * FUN_8c0ba8e4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0ba8e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 extraout_fr1 = 0;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba898(ar4,ar5,ar6,ar7));
  *ar4 = ((undefined1 *)(unsigned)0x8c12b350);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x12,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0162f8(ar4 + 0x14,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0ba354(ar4 + 0x56,ar5,ar6,ar7));
  ar4[2] = 0;
  ar4[0xc] = 2;
  *(undefined2 *)(unsigned)(ar4 + 0xe) = 0xff;
  ar4[0xf] = 1;
  ar4[0x10] = 0;
  ar4[0x11] = 0;
  if (cVar2 == '\0') {
    ar4[0xd] = 0x3f800000;
  }
  else {
    *(ulonglong *)(unsigned)(ar4 + 0xd) = CONCAT44(0x3f800000,extraout_fr1);
  }
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd80);
  ar4[3] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd7c);
  ar4[4] = uVar1;
  ar4[5] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd84);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd8c);
  ar4[6] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd88);
  ar4[7] = uVar1;
  ar4[8] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd90);
  uVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd98);
  ar4[9] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd94);
  ar4[10] = uVar1;
  ar4[0xb] = (*(undefined4 *)(unsigned)(unsigned)0x8c13bd9c);
  ar4[0x53] = 0;
  ar4[0x54] = 1;
  ar4[0x55] = 0xffffff;
  return ar4;
}

__asm__(".globl _FUN_8c0ba8e4\n.set _FUN_8c0ba8e4, _FUN_8c0ba8e4_def\n");
