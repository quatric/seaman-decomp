#include "../decls.h"
byte * FUN_8c25ed3c_def(byte *ar4,uint *ar5,uint *ar6,uint *ar7,uint *s0)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  ushort *puVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  byte *pbStack_20;
  
  uVar7 = 0xff00;
  uVar6 = 0xff0000;
  bVar3 = false;
  bVar4 = false;
  pbStack_20 = (byte *)((uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4
                       );
  bVar2 = ar4[7];
  bVar1 = ar4[4];
  uVar13 = (uint)ar4[5] << 8 | (uint)ar4[6] << 0x10 | (uint)bVar2 << 0x18 | (uint)bVar1;
  uVar9 = (int)uVar13 >> 8 & 0xff00;
  uVar13 = uVar13 << 8 & 0xff0000;
  if ((pbStack_20 == 0x4d524f46) &&
     (((uint)ar4[9] << 8 | (uint)ar4[10] << 0x10 | (uint)ar4[0xb] << 0x18 | (uint)ar4[8]) ==
      0x46464941)) {
    puVar11 = (ushort *)(ar4 + 0xc);
joined_r0x8c25edfe:
    puVar5 = puVar11;
    if ((ushort *)((int)(ar4 + 0xc) + ((bVar2 | uVar9 | uVar13 | (uint)bVar1 << 0x18) - 4)) <=
        puVar5) {
      return pbStack_20;
    }
    uVar10 = (uint)*(byte *)((int)puVar5 + 1) << 8 | (uint)(byte)puVar5[1] << 0x10 |
             (uint)*(byte *)((int)puVar5 + 3) << 0x18 | (uint)(byte)*puVar5;
    uVar14 = (uint)*(byte *)((int)puVar5 + 5) << 8 | (uint)(byte)puVar5[3] << 0x10 |
             (uint)*(byte *)((int)puVar5 + 7) << 0x18 | (uint)(byte)puVar5[2];
    uVar14 = (uint)*(byte *)((int)puVar5 + 7) | (int)uVar14 >> 8 & uVar7 | uVar14 << 8 & uVar6 |
             (uint)(byte)puVar5[2] << 0x18;
    puVar11 = puVar5 + 4;
    if (uVar10 == 0x4d4d4f43) {
      if (bVar3) goto joined_r0x8c25edfe;
      if ((int)uVar14 < 0x12) goto LAB_8c25ee98;
      *ar6 = (int)(uint)*puVar11 >> 8 | (uint)*puVar11 << 8 & uVar7;
      uVar14 = (uint)*(byte *)((int)puVar5 + 0xb) << 8 | (uint)(byte)puVar5[6] << 0x10 |
               (uint)*(byte *)((int)puVar5 + 0xd) << 0x18 | (uint)(byte)puVar5[5];
      *s0 = (uint)*(byte *)((int)puVar5 + 0xd) | (int)uVar14 >> 8 & uVar7 | uVar14 << 8 & uVar6 |
            (uint)(byte)puVar5[5] << 0x18;
      *ar7 = (int)(uint)puVar5[7] >> 8 | (uint)puVar5[7] << 8 & uVar7;
      uVar8 = puVar5[9] >> 8 | puVar5[9] << 8 & (ushort)uVar7;
      uVar14 = -((int)0x400e -
                ((int)(uint)puVar5[8] >> 8 | (uint)puVar5[8] << 8 & uVar7 & 0xffff));
      if ((int)uVar14 < 0) {
        uVar14 = (uint)(uVar8 >> (~uVar14 & 0x1f) + 1);
      }
      else {
        uVar14 = (uint)uVar8 << (uVar14 & 0x1f);
      }
      puVar12 = puVar5 + 0xd;
      *ar5 = uVar14;
      bVar3 = true;
    }
    else {
      if (uVar10 != 0x444e5353) {
        puVar11 = (ushort *)((int)puVar11 + (uVar14 + 1 & 0xfffffffe));
        goto joined_r0x8c25edfe;
      }
      if (bVar4) goto joined_r0x8c25edfe;
      uVar14 = (uint)*(byte *)((int)puVar5 + 9) << 8 | (uint)(byte)puVar5[5] << 0x10 |
               (uint)*(byte *)((int)puVar5 + 0xb) << 0x18;
      puVar12 = puVar5 + 6;
      pbStack_20 = (byte *)(((uint)*(byte *)((int)puVar5 + 0xb) | (uVar14 & uVar7 << 8) >> 8 |
                             (uVar14 | (byte)*puVar11) << 8 & uVar6 | (uint)(byte)*puVar11 << 0x18)
                           + (int)puVar12);
      bVar4 = true;
    }
    puVar11 = puVar12;
    if ((!bVar3) || (!bVar4)) goto joined_r0x8c25edfe;
  }
  else {
LAB_8c25ee98:
    pbStack_20 = (byte *)0x0;
  }
  return pbStack_20;
}

__asm__(".globl _FUN_8c25ed3c\n.set _FUN_8c25ed3c, _FUN_8c25ed3c_def\n");
