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
undefined4 FUN_8c21279c_def(int ar4,float *ar5,float *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21279c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar7;
  ulonglong uVar6;
  longlong lVar8;
  undefined8 in_xd0 = 0;
  float in_xf2 = 0;
  float in_xf3 = 0;
  undefined8 in_xd4 = 0;
  float in_xf6 = 0;
  float in_xf7 = 0;
  undefined8 in_xd8 = 0;
  float in_xf10 = 0;
  float in_xf11 = 0;
  float in_xf12 = 0;
  float in_xf13 = 0;
  float in_xf14 = 0;
  float in_xf15 = 0;
  
  fVar3 = *ar5;
  fVar1 = ar5[1];
  fVar7 = ar5[2];
  uVar6 = (ulonglong)(uint)fVar7 << 0x20;
  if (ar4 == 0) {
                    
    fVar2 = (float)in_xd0 * fVar1 + (float)in_xd4 * fVar3 + (float)in_xd8 * 0.0 + in_xf12 * fVar7;
    fVar4 = F32HI(in_xd0) * fVar1 + F32HI(in_xd4) * fVar3
            + F32HI(in_xd8) * 0.0 + in_xf13 * fVar7;
    fVar5 = in_xf2 * fVar1 + in_xf6 * fVar3 + in_xf10 * 0.0 + in_xf14 * fVar7;
    fVar1 = in_xf3 * fVar1 + in_xf7 * fVar3 + in_xf11 * 0.0 + in_xf15 * fVar7;
  }
  else {
                    
    fVar2 = 0.0;
                    
    fVar4 = 0.0;
    ain0 = 0x28;
    lVar8 = 0;
                    
    fVar1 = *(float *)(unsigned)(ar4 + 0x18) * fVar1 + *(float *)(unsigned)(ar4 + 8) * fVar3 + 0.0 +
            *(float *)(unsigned)(ar4 + 0x28) * fVar7;
    uVar6 = lVar8 << 0x20;
  }
  uVar6 = uVar6 & 0xffffffff00000000;
  if ((*(undefined4 *)(unsigned)(unsigned)0x8c4ab148) != 0) {
                    
    fVar1 = (float)(uVar6 >> 0x20);
    fVar1 = fVar2 * fVar2 + fVar4 * fVar4 + 0.0 + fVar1 * fVar1;
    fVar1 = 1.0 / SQRT((float)uVar6);
    uVar6 = CONCAT44((float)(uVar6 >> 0x20) * fVar1,fVar1);
    fVar2 = fVar2 * fVar1;
    fVar4 = fVar4 * fVar1;
  }
  ar6[2] = (float)(uVar6 >> 0x20);
  ar6[1] = fVar2;
  *ar6 = fVar4;
  return ain0;
}

__asm__(".globl _FUN_8c21279c\n.set _FUN_8c21279c, _FUN_8c21279c_def\n");
