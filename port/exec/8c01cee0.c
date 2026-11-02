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
undefined4 FUN_8c01cee0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c01cee0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,1,0,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,2,0,ar7));
    if (iVar1 == 0) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,6,0x12c,ar7));
      if (iVar1 == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,7,1,ar7));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,10,0xc8,ar7));
          if (iVar1 == 0) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,0xd,1,ar7));
            if (iVar1 == 0) {
              iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c10c2a2(*(undefined4 *)(unsigned)0x8c27925c,0xe,0xffffffff,ar7));
              if (iVar1 == 0) {
                uVar2 = 1;
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01cee0\n.set _FUN_8c01cee0, _FUN_8c01cee0_def\n");
