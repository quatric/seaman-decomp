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
uint FUN_8c02fcc4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c02fcc4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 64; for (int i_ = 0; i_ < 64; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 *ar5_00;
  float *ar6_00;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c1011b0(*(undefined4 *)(unsigned)(ar5[6] + 0x7cc),ar5,ar6,ar7));
  if ((ushort)uVar1 < 5) {
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x34))); *(unsigned *)((((unsigned long)(fr0_ - 64)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 64)) - 8); FUN_8c02f670(*ar5,ar5_00,ar6,ar7); });
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),((undefined1 *)(fr0_ - 0x34)),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
    ar6_00 = &(*(float *)(fr0_ - 0x3c));
    (vsp = ((unsigned long)(fr0_ - 64)), FUN_8c256294(0,((undefined1 *)(fr0_ - 0x14)),ar6_00,ar7));
    if (cVar5 == '\0') {
      fVar3 = 150.0;
      fVar2 = (*(float *)(fr0_ - 0x3c));
    }
    else {
      fVar2 = 150.0;
      fVar3 = 500.0;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      if (cVar5 == '\0') {
        fVar2 = 500.0;
      }
      else {
        (*(float *)(fr0_ - 0x3c)) = 500.0;
        fVar2 = 80.0;
      }
      if (cVar4 == '\0' && (*(float *)(fr0_ - 0x3c)) < fVar2) {
        if (cVar5 == '\0') {
          fVar3 = 80.0;
          fVar2 = (*(float *)(fr0_ - 0x38));
        }
        else {
          fVar2 = 80.0;
          fVar3 = 400.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
          if (cVar5 == '\0') {
            fVar2 = 400.0;
          }
          else {
            (*(float *)(fr0_ - 0x38)) = 400.0;
            fVar2 = 1.82169e-43;
          }
          if (cVar4 == '\0' && (*(float *)(fr0_ - 0x38)) < fVar2) {
            (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
            return 1;
          }
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 64)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
  }
  return (uint)(*(char *)(unsigned)(ar4 + 0x82) == '\x01');
}

__asm__(".globl _FUN_8c02fcc4\n.set _FUN_8c02fcc4, _FUN_8c02fcc4_def\n");
