#include "../decls.h"
int s_UUUU_t_20ed60_def(int ar4,byte *ar5,int ar6,int ar7)

{
  byte bVar1;
  uint uVar2;
  int in_r0;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint unaff_r14;
  uint uVar10;
  
  uVar8 = (uint)0xf0;
  uVar5 = 0;
  uVar9 = uVar8 + 8;
  iVar4 = ar6;
  uVar2 = 0xaaaaaaaa;
  do {
    if (iVar4 == 0) {
      *(undefined4 *)0xaaaaaaaa = uVar2;
      uVar2 = (uint)(*(uint*)((uchar*)&s_UUUU_8c20eeb0+0)) >> 0x10;
      uVar5 = (uint)(*(uint*)((uchar*)&s_UUUU_8c20eeb0+0)) >> 0x18;
      s_UUUU_8c20eeb0[0] = (char)(*(uint*)((uchar*)&s_UUUU_8c20eeb0+0));
      s_UUUU_8c20eeb0[1] = (char)((uint)(*(uint*)((uchar*)&s_UUUU_8c20eeb0+0)) >> 8);
      s_UUUU_8c20eeb0[2] = (char)uVar2;
      s_UUUU_8c20eeb0[3] = (char)uVar5;
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
      *(undefined4 *)0xaaaaaaaa = uVar2;
      *(short *)(in_r0 + ar4) = (short)unaff_r14;
      pbVar3 = pbVar3 + 4;
      uVar7 = uVar2 & uVar10;
      uVar2 = 0xaaaaaaaa;
    }
    iVar4 = iVar4 + -1;
    ar5 = ar5 + ar6 * 4;
    uVar5 = (*(uint*)((uchar*)&s_UUUU_8c20eeb0+0)) & 0xaaaaaaab + uVar5;
  } while( true );
}

__asm__(".globl _s_UUUU_t_20ed60\n.set _s_UUUU_t_20ed60, _s_UUUU_t_20ed60_def\n");
