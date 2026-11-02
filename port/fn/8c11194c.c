#include "../decls.h"
int * FUN_8c11194c_def(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int a5;
  undefined8 in_dr0;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar8 = '\0';
  FUN_8c120550(ar4,1,ar6,ar7);
  if (cVar8 == '\0') {
    fVar5 = 2.1474836e+09;
  }
  else {
    fVar5 = -NAN;
  }
  fVar4 = fVar3;
  if (fVar5 < fVar3) {
    fVar4 = fVar3 + -4.2949673e+09;
  }
  a5 = 2;
  iVar6 = (int)fVar4;
  FUN_8c120550(ar4,2,ar6,ar7);
  uVar7 = (uint)fVar3;
  if ((uVar7 & 0xffff) == 0xffff) {
    uVar7 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    a5 = ar4[7];
    (**(code **)(*ar4 + 0x18))(*ar4,a5,ar6,ar7);
  }
  if ((uVar7 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    ar6 = uVar7 & 0xffff;
    a5 = iVar6;
    iVar1 = (**(code **)(*ar4 + 0x14))(*ar4,iVar6,ar6,ar7);
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (**(code **)(*ar4 + 0x18))(*ar4,ar4,ar6,ar7);
      FUN_8c1204c4(ar4,2,ar6,ar7);
      return (int *)0;
    }
  }
  ar4[2] = iVar6;
  iVar6 = (uVar7 & 0xffff) * iVar6;
  *(short *)(ar4 + 3) = (short)uVar7;
  ar4[4] = iVar6;
  ar4[8] = ar4[7] + iVar6;
  FUN_8c112234(ar4,a5,ar6,ar7);
  FUN_8c120550(ar4,3,ar6,ar7);
  if (((int)fVar3 & 0xffU) == 0) {
    ar4[6] = 0;
    uVar7 = 0;
    if (ar4[5] != 0) {
      do {
        uVar2 = uVar7 + 1;
        *(undefined4 *)(uVar7 * 4 + ar4[0xb]) = 0;
        uVar7 = uVar2;
      } while (uVar2 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  FUN_8c120550(ar4,4,ar6,ar7);
  *(ushort *)((int)ar4 + 0xe) = (ushort)(int)fVar3 & 0xff;
  FUN_8c120550(ar4,5,ar6,ar7);
  *(char *)((int)ar4 + 0x31) = (char)(int)fVar3;
  return ar4;
}

__asm__(".globl _FUN_8c11194c\n.set _FUN_8c11194c, _FUN_8c11194c_def\n");
