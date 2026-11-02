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
undefined4 FUN_8c0d46cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d46cc";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 88; for (int i_ = 0; i_ < 88; i_++) z_[i_] = 0; }
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  code *pcVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar1 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 88)), get_field_4_0253e4(ar4 + 8,ar5,ar6,ar7));
  uVar2 = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c01538c(ar4 + 8,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c233dac(ar4 + 0x5ec,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c015af8(ar4 + 0x1c,ar5,ar6,ar7));
  for (iVar3 = 0; iVar3 < 3; iVar3 = iVar3 + 1) {
    (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d43cc(&(*(float *)(fr0_ - 0x24)),ar5,ar6,ar7));
    if (cVar8 == '\0') {
      fVar5 = -150.0;
      fVar4 = (*(float *)(fr0_ - 0x24));
    }
    else {
      fVar4 = -150.0;
      fVar5 = 800.0;
    }
    if (cVar7 != '\0' || fVar5 <= fVar4) {
      if (cVar8 == '\0') {
        fVar5 = 800.0;
        fVar4 = (*(float *)(fr0_ - 0x24));
      }
      else {
        fVar4 = 800.0;
        fVar5 = -100.0;
      }
      if (cVar7 != '\0' || fVar4 <= fVar5) {
        if (cVar8 == '\0') {
          fVar5 = -100.0;
          fVar4 = (*(float *)(fr0_ - 0x20));
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar7 != '\0' || fVar5 <= fVar4) {
          if (cVar8 == '\0') {
            pcVar6 = (code *)0x44160000;
            fVar4 = (*(float *)(fr0_ - 0x20));
          }
          else {
            fVar4 = 600.0;
            pcVar6 = ((void *)0x8c256328);
          }
          if (cVar7 != '\0' || fVar4 <= (float)(uint)pcVar6) {
            uVar2 = 0;
            ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x58))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 88)); FUN_8c256328(0,ar5,ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c019058(uVar2,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c019160(uVar2,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c015af8(ar4 + iVar3 * 4 + 0x20,ar5,ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c256210(1,ar5,ar6,ar7));
          }
        }
      }
    }
  }
  uVar2 = *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8);
  *(undefined4 *)(unsigned)(*(short *)(unsigned)(ar4 + 4) * 0xc + *piVar1 + 8) = *(undefined4 *)(unsigned)(*piVar1 + 8);
  *(undefined4 *)(unsigned)(*piVar1 + 8) = uVar2;
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c233dac(((undefined1 *)(unsigned)0x8c13f320),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d49cc(ar4,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d4a90(ar4,ar5,ar6,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 88)), FUN_8c0d5d28(ar4,ar5,ar6,ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c0d46cc\n.set _FUN_8c0d46cc, _FUN_8c0d46cc_def\n");
