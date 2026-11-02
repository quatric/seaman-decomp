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
int s_UUUU_t_20ed60_def(int ar4,byte *ar5,int ar6,int ar7)

{
  ring[rp++ & 255] = "s_UUUU_t_20ed60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  byte bVar1;
  uint uVar2;
  int in_r0 = (int)(unsigned long)vin0;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r14 = 0;
  uint uVar10;
  
  uVar8 = (uint)0xf0;
  uVar5 = 0;
  uVar9 = uVar8 + 8;
  iVar4 = ar6;
  uVar2 = 0xaaaaaaaa;
  do {
    if (iVar4 == 0) {
      *(undefined4 *)(unsigned)0xaaaaaaaa = uVar2;
      uVar2 = (uint)(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c20eeb0)+0)) >> 0x10;
      uVar5 = (uint)(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c20eeb0)+0)) >> 0x18;
      ((undefined1 *)(unsigned)0x8c20eeb0)[0] = (char)(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c20eeb0)+0));
      ((undefined1 *)(unsigned)0x8c20eeb0)[1] = (char)((uint)(*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c20eeb0)+0)) >> 8);
      ((undefined1 *)(unsigned)0x8c20eeb0)[2] = (char)uVar2;
      ((undefined1 *)(unsigned)0x8c20eeb0)[3] = (char)uVar5;
      return in_r0;
    }
    uVar7 = 0;
    pbVar3 = ar5;
    for (iVar6 = ar6; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (ar7 == 0x8000000) {
        uVar10 = (pbVar3[3] & uVar9) << 8 | (pbVar3[2] & 0xfc) << 3;
        bVar1 = pbVar3[1] >> 3;
LAB_8c20ede2:
        unaff_r14 = uVar10 | bVar1;
      }
      else {
        if (ar7 == 0x10000000) {
          uVar10 = (*pbVar3 & uVar8) << 8 | (pbVar3[3] & uVar8) << 4 | pbVar3[2] & uVar8;
          bVar1 = pbVar3[1] >> 4;
          goto LAB_8c20ede2;
        }
        if (ar7 == 0) {
          unaff_r14 = ((int)0x80 & (uint)*pbVar3) << 8 | (pbVar3[3] & uVar9) << 7 |
                      (pbVar3[2] & uVar9) << 2 | (uint)(pbVar3[1] >> 3);
        }
      }
      uVar10 = 0x55555556 + uVar7;
      in_r0 = (uVar7 | uVar5) * 2;
      *(undefined4 *)(unsigned)0xaaaaaaaa = uVar2;
      *(short *)(unsigned)(in_r0 + ar4) = (short)unaff_r14;
      pbVar3 = pbVar3 + 4;
      uVar7 = uVar2 & uVar10;
      uVar2 = 0xaaaaaaaa;
    }
    iVar4 = iVar4 + -1;
    ar5 = ar5 + ar6 * 4;
    uVar5 = (*(uint*)((uchar*)((undefined1 *)(unsigned)0x8c20eeb0)+0)) & 0xaaaaaaab + uVar5;
  } while( true );
}

__asm__(".globl _s_UUUU_t_20ed60\n.set _s_UUUU_t_20ed60, _s_UUUU_t_20ed60_def\n");
