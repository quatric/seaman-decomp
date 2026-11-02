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
uint FUN_8c10e6c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e6c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float extraout_fr0 = 0;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  iVar4 = 0;
  if (*(short *)(unsigned)(ar5 + 4) != 0) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(unsigned)(ar5 + 4));
  }
  bVar8 = 0;
  bVar9 = 0;
  bVar10 = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(iVar4,ar5,ar6,ar7));
  cVar1 = (char)((((uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14) & 0x100000) >>
                0x14);
  if (cVar1 == '\0') {
    fVar2 = 255.0;
  }
  else {
    fVar2 = -0.5000001;
  }
  if (cVar1 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x124),*(undefined4 *)(unsigned)(ar4 + 0x128));
  }
  else {
    uVar6 = *(undefined8 *)(unsigned)(ar4 + 0x124);
  }
  fVar2 = (extraout_fr0 * fVar2) / (F32HI(uVar6) - (float)uVar6);
  if (0.0 <= fVar2) {
    uVar7 = 0x3fe00000;
  }
  else {
    uVar7 = 0xbfe00000;
  }
  iVar4 = 0;
  uVar3 = 0;
  if (*(short *)(unsigned)(ar5 + 4) != 0) {
    do {
      iVar5 = (uint)*(byte *)(unsigned)(iVar4 + ar6) +
              (int)((double)fVar2 + (double)((ulonglong)uVar7 << 0x20));
      if (iVar5 < 0x100) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0xff;
      }
      *(char *)(unsigned)(iVar4 + ar6) = (char)iVar5;
      iVar4 = iVar4 + 1;
      uVar3 = (uint)*(ushort *)(unsigned)(ar5 + 4);
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10e6c0\n.set _FUN_8c10e6c0, _FUN_8c10e6c0_def\n");
