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
int FUN_8c02eb2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02eb2c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar5 < 8) && (0 < ar5)) {
                    
    switch((uint)ar5) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x10) + -0x46,6,ar6,ar7));
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x14) + -0x50,4,ar6,ar7));
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x18) + -0x50,4,ar6,ar7));
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x24) + -0x3c,8,ar6,ar7));
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x20) + -0x32,0xd,ar6,ar7));
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(*(int *)(unsigned)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7));
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02eb2c\n.set _FUN_8c02eb2c, _FUN_8c02eb2c_def\n");
