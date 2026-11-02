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
int Class_12ad14_m3_0a427c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12ad14_m3_0a427c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (*(int *)(unsigned)(0x128 + ar4) == 0) {
    uVar4 = 0;
    uVar3 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,3,0xffffffff,0))
    ;
    uVar2 = 3;
    (vsp = ((unsigned long)(fr0_ - 4)), s_Check_This_Motion_Data_0314fc(ar4 + 0xb0,3,uVar3,uVar4));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                      (ar4 + 0xb0,uVar2,uVar3,uVar4));
  }
  else {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7));
    if ((iVar1 == 0xd) ||
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7)),
       iVar1 == 0xe)) {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03f3ac(ar4 + 0xb0,ar5,ar6,ar7));
      if (iVar1 == 7) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), rand_range(ar4,0,100,ar7));
        if (iVar1 < 0x50) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                            (ar4 + 0xb0,0xd,0xffffffff,0));
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                            (ar4 + 0xb0,0xe,0xffffffff,0));
        }
      }
    }
    else {
      uVar4 = 0;
      uVar3 = 0xffffffff;
      uVar2 = 0xe;
      (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033a8c))))
                (ar4 + 0xb0,0xe,0xffffffff,0));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c033e68))))
                        (ar4 + 0xb0,uVar2,uVar3,uVar4));
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12ad14_m3_0a427c\n.set _Class_12ad14_m3_0a427c, _Class_12ad14_m3_0a427c_def\n");
