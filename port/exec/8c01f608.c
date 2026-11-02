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
undefined4 s_SPEECH_01f60c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SPEECH_01f60c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar4_00;
  char *ar5_00;
  int iVar2;
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), malloc_thunk(0x4b800,ar5,ar6,ar7));
  ar4[4] = uVar1;
  (*(undefined4 *)(unsigned)(unsigned)0x8c2792a0) = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)(unsigned)(ar4 + iVar2 * 0x580d + 0xe) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"\\",0,ar7));
  ar6_00 = 2;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"SPEECH",1,ar7));
  ar5_00 = "GRAPHICS";
  ar4_00 = ar4;
  uVar1 = ar6_00;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01f6dc(ar4,"GRAPHICS",2,ar7));
  ({ unsigned long ri0_ = (unsigned long)(uVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c262810(ar4_00,ar5_00,ar6_00,ar7); });
  *(undefined1 *)(unsigned)(ar4 + 7) = 0;
  return 1;
}

__asm__(".globl _s_SPEECH_01f60c\n.set _s_SPEECH_01f60c, _s_SPEECH_01f60c_def\n");
