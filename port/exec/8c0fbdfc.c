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
undefined4 s_SPEECH_0fbe00_def(undefined4 *ar4,undefined4 ar5,char *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_SPEECH_0fbe00";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *ar5_00;
  char *ar6_00;
  int ar5_01;
  
  ar5_01 = ar4[0x22];
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0faf30(ar5_01 + 0x2c,ar4 + 0x24,ar6,ar7));
  if (iVar1 != 0) {
    if (*(char *)(unsigned)(ar4 + 0x24) != '\0') {
      ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d658(ar4[2],ar4 + 0x24,((undefined1 *)(unsigned)0x8c141dd0),ar7));
    }
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x1c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0x24,ar5_01 + 0x2c,ar6,ar7); });
  }
  ar6_00 = ((undefined1 *)(unsigned)0x8c141dd0);
  ar5_00 = ar4 + 0x24;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), asr_register_strings(ar4[2],ar5_00,((undefined1 *)(unsigned)0x8c141dd0),ar7));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d868(ar4[2],ar5_00,ar6_00,ar7));
    uVar2 = 2;
    *ar4 = 2;
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c01d71c(ar4[2],ar5_00,ar6_00,ar7));
    if (iVar1 == 0) {
      uVar2 = 2;
      *ar4 = 2;
    }
    else {
      ar4[0x2e] = 0x96;
      ar4[0x33] = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0fc4fc(ar4,ar5_01,ar6_00,ar7));
      if ((iVar1 == 1) || (*(int *)(unsigned)(ar5_01 + 0x28) == 4)) {
        ar4[0x2e] = 300;
        ar4[0x33] = 1;
      }
      else if (*(int *)(unsigned)(ar5_01 + 0x28) == 1) {
        ar4[0x2e] = 0x96;
      }
      else if (*(int *)(unsigned)(ar5_01 + 0x28) == 2) {
        ar4[0x2e] = 0x5a;
      }
      uVar2 = 8;
      *ar4 = 8;
    }
  }
  return uVar2;
}

__asm__(".globl _s_SPEECH_0fbe00\n.set _s_SPEECH_0fbe00, _s_SPEECH_0fbe00_def\n");
