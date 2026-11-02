#include "../decls.h"
undefined4
FUN_8c260658_def(int ar4,uint ar5,short *ar6,undefined1 *ar7,char *s0,char *s4,char *s8,uint *s12,
            undefined4 s16,undefined4 *s20,undefined2 *s24)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *extraout_r2;
  undefined4 *extraout_r3;
  byte *pbVar8;
  undefined1 *a7;
  ushort *puVar9;
  uint uVar10;
  
  uVar10 = 0;
  a7 = ar7;
  if (0 < (int)ar5) {
    do {
      iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa0,4,a7);
      if (iVar5 == 0) break;
      uVar10 = uVar10 + 1;
    } while ((int)uVar10 < (int)ar5);
  }
  if (uVar10 != ar5) {
    if ((int)uVar10 < 0) {
      uVar6 = ~(~uVar10 + 1 & 3) + 1;
    }
    else {
      uVar6 = uVar10 & 3;
    }
    if ((uVar6 == 0) && (puVar9 = (ushort *)(uVar10 + 8 + ar4), *puVar9 < 2)) {
      uVar10 = 0;
      if (0 < (int)ar5) {
        do {
          iVar5 = FUN_8c013ec0(uVar10 + ar4,PTR_DAT_8c277fa8,4,a7);
          if (iVar5 == 0) break;
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)ar5);
      }
      if (uVar10 != ar5) {
        pbVar8 = (byte *)(uVar10 + 4 + ar4);
        bVar2 = pbVar8[1];
        bVar1 = *pbVar8;
        bVar3 = pbVar8[2];
        bVar4 = pbVar8[3];
        *ar6 = (short)uVar10 + 8;
        uVar10 = (uint)bVar2 << 8 | (uint)bVar3 << 0x10 | (uint)bVar4 << 0x18 | (uint)bVar1;
        *ar7 = 0xff;
        *s12 = (uint)*(byte *)((int)puVar9 + 5) << 8 | (uint)(byte)puVar9[3] << 0x10 |
               (uint)*(byte *)((int)puVar9 + 7) << 0x18 | (uint)(byte)puVar9[2];
        *s8 = (char)puVar9[1];
        *s0 = (char)puVar9[7];
        *s4 = (char)puVar9[6];
        uVar7 = libgcc_divide_helper_010468(uVar10,(int)*s4);
        *extraout_r3 = uVar7;
        *s20 = 1;
        if (*s0 == '\x10') {
          *s24 = 0;
        }
        else if (*s0 == '\b') {
          *s24 = 1;
        }
        else if (*s0 == '\x04') {
          *s4 = *s8 << 1;
          *s20 = 4;
          uVar7 = libgcc_divide_helper_01051c(uVar10 >> 1,(int)*s8);
          *extraout_r2 = uVar7;
          *s0 = '\x10';
          *s24 = 2;
        }
        if ((((*s0 != '\0') && (*s4 != '\0')) && ('\0' < *s8)) && ((*s8 < '\x03' && (*s12 != 0)))) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c260658\n.set _FUN_8c260658, _FUN_8c260658_def\n");
