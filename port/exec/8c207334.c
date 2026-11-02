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
undefined4 FUN_8c207334_def(code *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c207334";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined8 in_dr0 = 0;
  undefined4 in_PR = 0;
  byte in_FPSCR_RM = 0;
  byte in_FPSCR_FLAG = 0;
  byte in_FPSCR_ENABLE = 0;
  byte in_FPSCR_CAUSE = 0;
  byte in_FPSCR_DN = 0;
  char cVar3;
  byte in_FPSCR_FR = 0;
  
  (*(uint *)(fr0_ - 0x4)) = (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
             (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
  cVar3 = (char)((~(~(*(uint *)(fr0_ - 0x4)) | 0x100000) & 0x100000) >> 0x14);
  if (cVar3 == '\0') {
    (*(undefined8 *)(fr0_ - 0xc)) = CONCAT44((int)((ulonglong)in_dr0 >> 0x20),(undefined4)(*(undefined8 *)(fr0_ - 0xc)));
                    
    (*(uint*)((uchar*)&(*(undefined8 *)(fr0_ - 0xc))+0)) = (int)in_dr0;
    puVar1 = ((undefined1 *)(fr0_ - 0x44));
  }
  else {
    puVar1 = ((undefined1 *)(fr0_ - 0x84));
    (*(undefined8 *)(fr0_ - 0xc)) = in_dr0;
  }
  *(undefined4 *)(unsigned)(puVar1 + -4) = in_PR;
  (vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)ar4))(ar5,vr5,vr6,vr7));
  if (cVar3 == '\0') {
    puVar2 = (undefined4 *)(unsigned)(puVar1 + 0x40);
  }
  else {
    puVar2 = (undefined4 *)(unsigned)(puVar1 + 0x80);
  }
  return *puVar2;
}

__asm__(".globl _FUN_8c207334\n.set _FUN_8c207334, _FUN_8c207334_def\n");
