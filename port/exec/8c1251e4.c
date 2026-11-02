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
undefined4 FUN_8c1251e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1251e4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  int a4;
  int *unaff_r14 = 0;
  undefined8 in_dr0 = 0;
  float fVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  
  fVar5 = F32HI(in_dr0);
  a4 = *unaff_r14;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  uVar7 = (uint)fVar5;
  *(short *)(unsigned)((int)unaff_r14 + 0x36) = (short)uVar7;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(unaff_r14,2,ar6,ar7));
  uVar8 = (uint)fVar5;
  uVar4 = uVar8 & 0xffff;
  *(short *)(unsigned)(unaff_r14 + 0xd) = (short)uVar8;
  iVar3 = uVar4 - (uVar7 & 0xffff);
  *(short *)(unsigned)(unaff_r14 + 0xe) = (short)((int)(iVar3 + (uint)(iVar3 < 0)) >> 1);
  if (((uVar7 & 0xffff) <= uVar4) && (uVar4 <= (uVar7 & 0xffff) * 3)) {
    *(short *)(unsigned)(*(int *)(unsigned)unaff_r14[4] + 0xc) = (short)(uVar8 << 2);
    *(undefined2 *)(unsigned)((int)unaff_r14 + 0x3a) = 3;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,(uint)*(ushort *)(unsigned)((int)unaff_r14 + 0x36) * 3,4,ar7));
    unaff_r14[10] = iVar3;
    a6 = 4;
    uVar8 = uVar8 & 0xffff;
    cVar9 = '\0';
    iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a4 + 0x14))))(a4,uVar8,4,ar7));
    unaff_r14[0x11] = iVar3;
    if ((unaff_r14[10] != 0) && (unaff_r14[0x11] != 0)) {
      unaff_r14[0xb] = unaff_r14[10];
      unaff_r14[0xc] = (uVar7 & 0xffff) * 0xc + unaff_r14[10];
      iVar3 = 0;
      if (cVar9 == '\0') {
        uVar6 = 0x3f0a3d703eeb851e;
      }
      else {
        uVar6 = 0x3eeb851e3f0a3d70;
      }
      if (uVar4 != 0) {
        do {
          iVar1 = unaff_r14[0x11];
          iVar2 = iVar3 * 4;
          fVar5 = (float)((ulonglong)(double)(int)(uVar4 - 1) >> 0x20);
          (vsp = ((unsigned long)(fr0_ - 0)), thunk_FUN_8c013c88(a4,uVar8,a6,ar7));
          iVar3 = iVar3 + 1;
          cVar9 = '\0';
          *(float *)(unsigned)(iVar1 + iVar2) = -(fVar5 * (float)uVar6) + F32HI(uVar6);
        } while (iVar3 < (int)uVar4);
      }
      if (cVar9 == '\0') {
        unaff_r14[0xf] = 0;
      }
      else {
        unaff_r14[0xf] = 0;
        unaff_r14[0x10] = -0x73edae94;
      }
      *(undefined1 *)(unsigned)(unaff_r14 + 0x10) = 1;
      return 0;
    }
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(unaff_r14,2,a6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c1251e4\n.set _FUN_8c1251e4, _FUN_8c1251e4_def\n");
