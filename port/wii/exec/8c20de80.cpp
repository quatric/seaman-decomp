#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c20de80_def(undefined1 *ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c20de80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  int s0 = *(le<int>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int unaff_r12 = 0;
  int unaff_r13 = 0;
  uint uVar9;
  
  iVar5 = ar7 + -1;
  uVar7 = (uint)0x7c00;
  uVar8 = (uint)0x3e0;
  puVar3 = (le<ushort>* )(unsigned)(ar6 * iVar5 * 2 + ar5);
  iVar6 = iVar5;
  do {
    if (iVar5 < 0) {
      return 0;
    }
    iVar2 = 0;
    puVar4 = puVar3;
    if (0 < ar6) {
      do {
        if (s0 == 0) {
          uVar1 = (uint)*puVar4;
          iVar6 = (int)(0xf800 & uVar1) >> 8;
          uVar9 = (int)((int)0x7e0 & uVar1) >> 1;
LAB_8c20df30:
          unaff_r13 = (int)uVar9 >> 2;
          unaff_r12 = (uVar1 & 0x1f) << 3;
        }
        else {
          if (s0 == 1) {
            uVar1 = (uint)*puVar4;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            uVar9 = uVar1 & uVar8;
            goto LAB_8c20df30;
          }
          if (s0 == 3) {
            uVar1 = (uint)*puVar4;
            uVar9 = uVar1 & uVar8;
            iVar6 = (int)(uVar1 & uVar7) >> 7;
            goto LAB_8c20df30;
          }
        }
        iVar2 = iVar2 + 1;
        *ar4 = (char)unaff_r12;
        ar4[1] = (char)unaff_r13;
        ar4[2] = (char)iVar6;
        ar4 = ar4 + 3;
        puVar4 = puVar4 + 1;
      } while (iVar2 < ar6);
    }
    iVar5 = iVar5 + -1;
    puVar3 = puVar3 + -ar6;
  } while( true );
}

__asm__(".globl FUN_8c20de80\n.set FUN_8c20de80, FUN_8c20de80_def\n");

}
