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
char * FUN_8c268b48_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c268b48";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar2 = 0x8c4bd580;
  for (pcVar1 = 0x8c4bd580;
      (pcVar3 = (char *)(unsigned)0x0, pcVar1 < 0x8c4bd580 + 0x480 &&
      (pcVar3 = pcVar2, *pcVar1 != '\0')); pcVar1 = pcVar1 + 0x90) {
    pcVar2 = pcVar2 + 0x90;
  }
  return pcVar3;
}

__asm__(".globl _FUN_8c268b48\n.set _FUN_8c268b48, _FUN_8c268b48_def\n");
