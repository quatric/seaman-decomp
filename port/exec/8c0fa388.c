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
undefined4 FUN_8c0fa388_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0fa388";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  if ((ar5 < 0xd) && (-1 < ar5)) {
                    
    switch((uint)ar5) {
    case 0:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (0 < iVar1) {
        return 1;
      }
      break;
    case 1:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 2:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa538(ar4,ar5,ar6,ar7));
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 3:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (1 < iVar1) {
        return 1;
      }
      break;
    case 4:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (2 < iVar1) {
        return 1;
      }
      break;
    case 5:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (3 < iVar1) {
        return 1;
      }
      break;
    case 6:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (4 < iVar1) {
        return 1;
      }
      break;
    case 7:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (6 < iVar1) {
        return 1;
      }
      break;
    case 8:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (7 < iVar1) {
        return 1;
      }
      break;
    case 9:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (8 < iVar1) {
        return 1;
      }
      break;
    case 10:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (10 < iVar1) {
        return 1;
      }
      break;
    case 0xb:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (0xc < iVar1) {
        return 1;
      }
      break;
    case 0xc:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa658(ar4,ar5,ar6,ar7));
      if (0x12 < iVar1) {
        return 1;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0fa388\n.set _FUN_8c0fa388, _FUN_8c0fa388_def\n");
