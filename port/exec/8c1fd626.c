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
undefined4 FUN_8c1fd626_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1fd626";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  undefined1 *ar4_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  
  (*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) = -0x73b87c38;
  puVar1 = (undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c478e20);
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)(unsigned)0x8c478e40);
  (vsp = ((unsigned long)(fr0_ - 0)), memset(0x8c4783c8,0,0x14,ar7));
  a6 = 0xa40;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), memset(((undefined1 *)(unsigned)0x8c4783e0),0,0xa40,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fd5f8(0,uVar2,a6,ar7));
  iVar3 = 0;
  uVar4 = 1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e8) = 0;
  do {
    iVar3 = iVar3 + 1;
    if ((ar5 & uVar4) != 0) {
      (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e8) + 1;
    }
    uVar4 = uVar4 << 1;
  } while (iVar3 < 8);
  if (ar6 == 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fd720(ar4,ar5,0,ar7));
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 8) = 1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fd75c(ar4,ar5,ar6,ar7));
    *(undefined4 *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c4783dc) + 8) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e0) = 8;
  (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1fba90(10,ar5,ar6,ar7));
  ar4_00 = ((undefined1 *)(unsigned)0x8c47d0a0);
  iVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c47d2e0) * 0x48;
  uVar2 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), memset(((undefined1 *)(unsigned)0x8c47d0a0),0,iVar3,ar7));
  ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c1fcffc(ar4_00,uVar2,iVar3,ar7); });
  return 0;
}

__asm__(".globl _FUN_8c1fd626\n.set _FUN_8c1fd626, _FUN_8c1fd626_def\n");
