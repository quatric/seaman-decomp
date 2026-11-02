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
undefined4 FUN_8c1239f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1239f0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  float fVar2;
  undefined8 in_dr4 = 0;
  float fVar3;
  float in_PR = 0;
  byte in_FPSCR_DN = 0;
  char cVar4;
  
  fVar3 = F32HI(in_dr4);
  if (((*(char *)(unsigned)(ar4 + 0x4ac) != '\0') && (*(short *)(unsigned)(ar4 + 0x4c0) != 0)) ||
     (*(char *)(unsigned)(ar4 + 0x4ac) == '\0')) {
    cVar4 = (char)((in_FPSCR_DN & 4) >> 2);
    if (cVar4 == '\0') {
      fVar2 = 5.7564626;
    }
    else {
      fVar2 = 0.0;
    }
    if ((*(float *)(unsigned)(ar4 + 0x494) < fVar2) &&
       (3 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x4d4) - (uint)*(ushort *)(unsigned)(ar4 + 0x4d6)))) {
      cVar4 = '\0';
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12357c(ar4,0,ar6,ar7));
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
      *(undefined2 *)(unsigned)(ar4 + 0x4d6) = *(undefined2 *)(unsigned)(ar4 + 0x4d4);
    }
    fVar2 = fVar3;
    if (cVar4 == '\0') {
      fVar2 = *(float *)(unsigned)(ar4 + 0x4a8);
      in_PR = fVar3;
    }
    if ((in_PR - fVar2 <= 0.69077545) || (*(short *)(unsigned)(ar4 + 0x4d6) == *(short *)(unsigned)(ar4 + 0x4d4))) {
      fVar3 = *(float *)(unsigned)(ar4 + 0x2c);
      if (*(char *)(unsigned)(ar4 + 0x4ac) != '\0') {
        fVar3 = fVar3 + *(float *)(unsigned)(ar4 + 0x38) + *(float *)(unsigned)(ar4 + 0x3c);
      }
      if ((fVar3 - *(float *)(unsigned)(ar4 + 0x4a8) < -6.9077544) &&
         (3 < (int)((uint)*(ushort *)(unsigned)(ar4 + 0x4d4) - (uint)*(ushort *)(unsigned)(ar4 + 0x4d6)))) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12357c(ar4,2,ar6,ar7));
        if ((uVar1 & 0xff) != 0) {
          return 1;
        }
        *(undefined2 *)(unsigned)(ar4 + 0x4d6) = *(undefined2 *)(unsigned)(ar4 + 0x4d4);
      }
    }
    else {
      *(undefined2 *)(unsigned)(ar4 + 0x4d6) = *(undefined2 *)(unsigned)(ar4 + 0x4d4);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12357c(ar4,1,ar6,ar7));
      if ((uVar1 & 0xff) != 0) {
        return 1;
      }
    }
  }
  if ((((*(char *)(unsigned)(ar4 + 0x4ac) != '\0') && (*(int *)(unsigned)(ar4 + 0x4dc) != 0)) &&
      (*(uint *)(unsigned)(ar4 + 0x4dc) < *(uint *)(unsigned)(ar4 + 0x4d0))) && (*(short *)(unsigned)(ar4 + 0x4d4) == 0)) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c12357c(ar4,3,ar6,ar7));
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    if ((*(char *)(unsigned)(ar4 + 0x4c9) == '\0') && (*(char *)(unsigned)(ar4 + 0x4ac) != '\0')) {
      *(undefined1 *)(unsigned)(ar4 + 0x4c9) = 1;
      uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c123594(ar4,0xbfff,ar6,ar7));
      if ((uVar1 & 0xffff) != 0) {
        return 1;
      }
    }
    *(undefined4 *)(unsigned)(ar4 + 0x4d0) = 0;
  }
  return 0;
}

__asm__(".globl _FUN_8c1239f0\n.set _FUN_8c1239f0, _FUN_8c1239f0_def\n");
