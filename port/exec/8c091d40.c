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
uint FUN_8c091d40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c091d40";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(unsigned)(0x12c + ar4);
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030f2c(ar4 + 0x1fc,ar5,ar6,ar7));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 5;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0))
    ;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  else if (iVar1 != 1) {
    uVar2 = ar5;
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return 1;
      }
      return 0;
    }
    goto LAB_8c091dca;
  }
  *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  uVar2 = 0x21;
  ar7 = ar6;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c033474(ar4,0x21,ar5,ar6));
  ar6 = ar5;
LAB_8c091dca:
  iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c026858))))
                    (ar4 + 0xb0,uVar2,ar6,ar7));
  if (iVar1 == 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030eb8(ar4 + 0x1fc,uVar2,ar6,ar7));
    uVar4 = 0;
    uVar3 = 0xffffffff;
    uVar2 = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0))
    ;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,uVar3,uVar4));
    *(int *)(unsigned)(0x12c + ar4) = *(int *)(unsigned)(0x12c + ar4) + 1;
  }
  return (uint)(iVar1 != 1);
}

__asm__(".globl _FUN_8c091d40\n.set _FUN_8c091d40, _FUN_8c091d40_def\n");
