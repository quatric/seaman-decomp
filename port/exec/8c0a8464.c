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
undefined4 FUN_8c0a8464_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0a8464";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  iVar1 = *(int *)(unsigned)(ar4 + 300);
  iVar2 = ar6;
  if (iVar1 == 0) {
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x40400000;
    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
    (vsp = ((unsigned long)(fr0_ - 4)), Vec3_assign(ar4 + 0x54,ar5,ar6,ar7));
    if (cVar6 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x58) = *(undefined4 *)(unsigned)(ar6 + 4);
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x58) = *(undefined8 *)(unsigned)(ar6 + 4);
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      *(undefined4 *)(unsigned)(ar4 + 0x94) = 0x40000000;
      *(float *)(unsigned)(ar4 + 0x21a8) = *(float *)(unsigned)(ar4 + 0x21a8) + 6.0;
      *(float *)(unsigned)(ar4 + 0x2194) = *(float *)(unsigned)(ar4 + 0x2194) + 6.0;
      if (*(float *)(unsigned)(ar4 + 0x2194) < 90.0) {
        return 1;
      }
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      return 1;
    }
    if (iVar1 != 3) {
      return 1;
    }
    if (*(float *)(unsigned)(ar5 + 4) < *(float *)(unsigned)(ar6 + 4)) {
      return 1;
    }
    *(undefined4 *)(unsigned)(ar4 + 300) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x94) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x2198) = 5;
    return 0;
  }
  while( true ) {
    if (cVar6 == '\0') {
      uVar3 = CONCAT44(*(undefined4 *)(unsigned)(ar5 + 4),
                       *(undefined4 *)(unsigned)(ar4 + *(int *)(unsigned)(ar4 + 0x230) * 0x10 + 0x238));
    }
    else {
      uVar3 = *(undefined8 *)(unsigned)(ar5 + 4);
    }
    if (cVar5 == '\0' && F32HI(uVar3) < (float)uVar3) break;
    *(int *)(unsigned)(ar4 + 0x230) = *(int *)(unsigned)(ar4 + 0x230) + -1;
  }
  if (*(int *)(unsigned)(ar4 + 0x230) < 1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c022fc0(ar5,ar4 + 0x54,iVar2,ar7));
    if (cVar6 == '\0') {
      uVar4 = CONCAT44(0x42b40000,(int)((ulonglong)uVar3 >> 0x20));
    }
    else {
      uVar4 = 0x219442b40000;
    }
    if (cVar5 != '\0' || (float)uVar4 <= (float)(uVar4 >> 0x20)) {
      *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
      *(undefined4 *)(unsigned)(ar4 + 0x230) = 0;
      if (cVar6 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x2194) = 0;
      }
      else {
        *(ulonglong *)(unsigned)(ar4 + 0x2194) = uVar4 & 0xffffffff;
      }
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0a8464\n.set _FUN_8c0a8464, _FUN_8c0a8464_def\n");
