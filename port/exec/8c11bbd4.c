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
undefined4 FUN_8c11bbd4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11bbd4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int ar6_00;
  int iVar6;
  undefined4 *ar5_00;
  int *piVar7;
  longlong in_dr0 = 0;
  float fVar8;
  float in_fr15 = 0;
  char cVar9;
  
  puVar3 = ar5 + 2;
  uVar5 = *(uint *)(unsigned)(ar4 + 0x54);
  *(short *)(unsigned)(ar4 + 0x28) = (short)*ar5;
  ar6_00 = uVar5 * 4;
  *(short *)(unsigned)(ar4 + 0x2a) = (short)ar5[1];
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x2c),puVar3,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x34),puVar3 + uVar5,ar6_00,ar7));
  ar5_00 = puVar3 + uVar5 + uVar5;
  cVar9 = '\0';
  puVar3 = ar5_00;
  (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x38),ar5_00,ar6_00,ar7));
  uVar2 = 0;
  piVar7 = ar5_00 + uVar5;
  uVar4 = 0;
  iVar6 = 0;
  if (cVar9 == '\0') {
    in_fr15 = 0.5;
  }
  if (uVar5 != 0) {
    do {
      fVar8 = F32HI(in_dr0);
      iVar1 = *(int *)(unsigned)(ar4 + 0x30);
      (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013dfc(uVar2,puVar3,ar6_00,ar7));
      uVar4 = uVar4 + 1;
      in_dr0 = (ulonglong)(uint)(fVar8 * in_fr15) << 0x20;
      *(float *)(unsigned)(iVar1 + iVar6) = fVar8 * in_fr15;
      iVar6 = iVar6 + 4;
    } while (uVar4 < uVar5);
  }
  *(int *)(unsigned)(ar4 + 0x44) = *piVar7 * 4 + *(int *)(unsigned)(ar4 + 0x3c);
  *(int *)(unsigned)(ar4 + 0x48) = piVar7[1] * 4 + *(int *)(unsigned)(ar4 + 0x3c);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), memmove(*(undefined4 *)(unsigned)(ar4 + 0x3c),piVar7 + 2,uVar5 * (*(ushort *)(unsigned)(ar4 + 0x4c) + 1) * 4,
                  ar7));
  return uVar2;
}

__asm__(".globl _FUN_8c11bbd4\n.set _FUN_8c11bbd4, _FUN_8c11bbd4_def\n");
