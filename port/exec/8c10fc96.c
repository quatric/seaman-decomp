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
undefined4 FUN_8c10fc96_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10fc96";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined4 uVar2;
  float *pfVar3;
  int ar4_00;
  undefined4 *puVar4;
  int a4;
  float extraout_fr3 = 0;
  float fVar5;
  float fVar6;
  char cVar7;
  
  a4 = *(int *)(unsigned)(ar4 + 0x40);
  ar4_00 = *(int *)(unsigned)(ar4 + 0xc);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112170(ar4_00,*(int *)(unsigned)(ar4 + 0x78) + 1,ar6,ar7));
  uVar2 = 0;
  if ((uVar1 & 0xff) != 0) {
    uVar1 = 1;
    if (*(int *)(unsigned)(ar4 + 0x78) != 0) {
      do {
        if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 0x6c) + uVar1) != '\0') {
          puVar4 = (undefined4 *)(unsigned)(uVar1 * 8 + ar4_00);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*puVar4,puVar4[1],ar6,ar7));
          ar6 = *(int *)(unsigned)(ar4 + 0x70) << 2;
          (vsp = ((unsigned long)(fr0_ - 0)), memmove(a4,uVar2,ar6,ar7));
        }
        uVar1 = uVar1 + 1;
        a4 = a4 + *(int *)(unsigned)(ar4 + 0x70) * 4;
      } while (uVar1 <= *(uint *)(unsigned)(ar4 + 0x78));
    }
    cVar7 = '\0';
    pfVar3 = (float *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1],ar6
                                   ,ar7));
    if (cVar7 == '\0') {
      fVar6 = *pfVar3;
    }
    else {
      fVar6 = (float)((ulonglong)*(undefined8 *)(unsigned)pfVar3 >> 0x20);
    }
    if (*(char *)(unsigned)(ar4 + 0x32) == '\0') {
      fVar5 = extraout_fr3;
      if (cVar7 == '\0') {
        fVar5 = 0.0009999999;
      }
      if (fVar5 < fVar6) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c10fab2(ar4,*(undefined4 *)(unsigned)(ar4 + 0x40),ar6,ar7));
      }
    }
    *(int *)(unsigned)(ar4 + 0x48) = *(int *)(unsigned)(ar4 + 0x48) + 1;
    uVar2 = 0x40;
    if (a4 == *(int *)(unsigned)(ar4 + 0x38)) {
      a4 = *(int *)(unsigned)(ar4 + 0x34);
    }
    *(int *)(unsigned)(ar4 + 0x40) = a4;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c10fc96\n.set _FUN_8c10fc96, _FUN_8c10fc96_def\n");
