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
uint FUN_8c2565c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2565c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  uint ain0 = (uint)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int ain0_00;
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *ar4_00;
  
  iVar3 = 0;
  for (uVar2 = 0; uVar2 < (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c); uVar2 = uVar2 + 1) {
    ar4_00 = (uint *)(unsigned)((*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + iVar3);
    if ((ar4_00[4] & 1) != 0) {
      ain0_00 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a1ee(ar4_00[6] >> 0x10 & 0xff00,ar5,ar6,ar7));
      ({ unsigned long ri0_ = (unsigned long)(ain0_00); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c2362de(ar4_00[5],ar5,ar6,ar7); });
      if (ain0_00 == 1) {
        ar6 = 0;
        ar5 = 1;
        ({ unsigned long ri0_ = (unsigned long)(1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 4)); FUN_8c25a674(*ar4_00,1,0,ar7); });
      }
      else {
        uVar1 = ar4_00[4];
        ar4_00[4] = uVar1 & 0xfffffffe;
        if ((uVar1 & 0xfffffffe) == 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(ar4_00,ar5,ar6,ar7));
        }
      }
    }
    ain0 = *ar4_00;
    if ((ain0 != 0xffffffff) && (ain0 = ar4_00[4], (ain0 & 3) == 0)) {
      ain0 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c25a49e(ar4_00,ar5,ar6,ar7));
    }
    iVar3 = iVar3 + 0x44;
  }
  return ain0;
}

__asm__(".globl _FUN_8c2565c4\n.set _FUN_8c2565c4, _FUN_8c2565c4_def\n");
