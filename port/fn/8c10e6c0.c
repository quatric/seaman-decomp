#include "../decls.h"
uint FUN_8c10e6c0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float extraout_fr0;
  undefined8 uVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  
  iVar4 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(ushort *)(ar5 + 4));
  }
  bVar8 = 0;
  bVar9 = 0;
  bVar10 = 0;
  thunk_FUN_8c013dfc(iVar4,ar5,ar6,ar7);
  cVar1 = (char)((((uint)bVar8 << 0x12 | (uint)bVar9 << 0x13 | (uint)bVar10 << 0x14) & 0x100000) >>
                0x14);
  if (cVar1 == '\0') {
    fVar2 = 255.0;
  }
  else {
    fVar2 = -0.5000001;
  }
  if (cVar1 == '\0') {
    uVar6 = CONCAT44(*(undefined4 *)(ar4 + 0x124),*(undefined4 *)(ar4 + 0x128));
  }
  else {
    uVar6 = *(undefined8 *)(ar4 + 0x124);
  }
  fVar2 = (extraout_fr0 * fVar2) / ((float)((ulonglong)uVar6 >> 0x20) - (float)uVar6);
  if (0.0 <= fVar2) {
    uVar7 = 0x3fe00000;
  }
  else {
    uVar7 = 0xbfe00000;
  }
  iVar4 = 0;
  uVar3 = 0;
  if (*(short *)(ar5 + 4) != 0) {
    do {
      iVar5 = (uint)*(byte *)(iVar4 + ar6) +
              (int)((double)fVar2 + (double)((ulonglong)uVar7 << 0x20));
      if (iVar5 < 0x100) {
        if (iVar5 < 0) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = 0xff;
      }
      *(char *)(iVar4 + ar6) = (char)iVar5;
      iVar4 = iVar4 + 1;
      uVar3 = (uint)*(ushort *)(ar5 + 4);
    } while (iVar4 < (int)uVar3);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10e6c0\n.set _FUN_8c10e6c0, _FUN_8c10e6c0_def\n");
