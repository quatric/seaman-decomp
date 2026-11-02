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
undefined4 FUN_8c076750_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c076750";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar2 = ar6;
  ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x1c))); *(unsigned *)((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5,ar6,ar7); });
  (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x1c)),iVar2,ar7));
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,iVar2,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c053724(ar5,uVar4,iVar2,ar7));
  if ((char)uVar1 == '\0') {
    (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c031748(ar4,uVar4,iVar2,ar7));
    iVar3 = *(int *)(unsigned)(ar4 + 0x260);
    if (iVar3 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7));
      if (iVar2 == 1) {
        iVar2 = (vsp = ((unsigned long)(fr0_ - 32)), rand_range(ar4,0,100,ar7));
        if (((iVar2 == 0) && (2 < *(int *)(unsigned)(ar4 + 0x128))) && (*(int *)(unsigned)(ar4 + 0x128) < 6)) {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0x13;
          (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
        }
        else {
          ar7_00 = 0;
          uVar4 = 0xffffffff;
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
        }
        (vsp = ((unsigned long)(fr0_ - 32)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar1,uVar4,ar7_00));
      }
    }
    else if (((iVar3 == 3) || (iVar3 == 4)) &&
            ((iVar3 = *(int *)(unsigned)(ar4 + 0x128), iVar3 < 8 && (-1 < iVar3)))) {
                    
      switch(iVar3) {
      case 0:
      case 1:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      case 2:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      default:
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        break;
      case 6:
        if (ar6 == 0) {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03f3ac(ar4 + 0xb0,uVar4,iVar2,ar7));
        }
      }
    }
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 32)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar4,iVar2,ar7));
    if (iVar3 == 1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c03c314(ar4,uVar4,iVar2,ar7));
      uVar5 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
  }
  return uVar5;
}

__asm__(".globl _FUN_8c076750\n.set _FUN_8c076750, _FUN_8c076750_def\n");
