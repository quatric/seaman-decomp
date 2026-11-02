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
undefined4 FUN_8c0a3624_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a3624";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined4 uVar3;
  float in_fr1 = 0;
  float extraout_fr1 = 0;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  uVar3 = 1;
  uVar2 = ar5;
  if (*(int *)(unsigned)(ar4 + 300) == 0) {
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c032518(ar4,ar5,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x20)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), Vec3_dtor(((undefined1 *)(fr0_ - 0x20)),0xffffffff,ar6,ar7));
    ar7 = 0;
    ar6_00 = 0xffffffff;
    ar5_00 = 1;
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,1,0xffffffff,0));
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar5_00,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031b68(ar4,0x8c2851b0,ar6_00,ar7));
    ar6 = ar4 + 0x54;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031bb4(ar4,ar5,ar6,ar7));
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    in_fr1 = extraout_fr1;
  }
  else if (*(int *)(unsigned)(ar4 + 300) != 1) {
    return 1;
  }
  if (cVar5 == '\0') {
    in_fr1 = *(float *)(unsigned)(ar4 + 0x130);
  }
  if (cVar4 == '\0' && in_fr1 < 0.0) {
    (vsp = ((unsigned long)(fr0_ - 36)), vec3_clear(ar4 + 0x224,uVar2,ar6,ar7));
    uVar2 = ar5;
    (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031c74(ar4,ar5,ar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,uVar2,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 36)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,uVar2,ar6,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c031764(ar4,ar4 + 0x54,ar5,ar7));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c0a3624\n.set _FUN_8c0a3624, _FUN_8c0a3624_def\n");
