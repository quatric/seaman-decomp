#include "../decls.h"
int FUN_8c21092e_def(undefined4 *ar4,int ar5,int ar6,int ar7,int s0)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int ar6_00;
  int *piVar6;
  int ar7_00;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iStack_30;
  int aiStack_2c [4];
  
  iVar7 = 0;
  _DAT_8c4aa1f4 = 1;
  uVar9 = 2;
  if ((_DAT_8c4a9bb0 & 0x40) != 0) {
    ar5 = ar5 + 0x20;
  }
  _DAT_8c4aa1b0 = s0;
  _DAT_8c4aa1a0 = ar4;
  _DAT_8c4aa1a4 = ar5;
  _DAT_8c4aa1a8 = ar6;
  _DAT_8c4aa1ac = ar7;
  if (DAT_8c2758e8 == 0x80000000) {
    iVar7 = FUN_8c211730(ar5,ar6,ar7,s0);
    ar4[4] = _DAT_8c4aa014;
    DAT_8c2758ec = 0;
    for (puVar2 = (undefined4 *)&DAT_8c4aa288; puVar2 < &DAT_8c4aa298; puVar2 = puVar2 + 1) {
      *puVar2 = 0;
    }
    iVar4 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
    uVar1 = FUN_8c211876(ar5,ar6,ar7,s0,0,0);
    FUN_8c211ba4(uVar1,iVar4,ar6_00,ar7_00);
    uVar8 = ar5 + ar6 + ar7 + s0;
    aiStack_2c[0] = ar6;
    aiStack_2c[1] = ar7;
    aiStack_2c[2] = s0;
    iStack_30 = ar5;
    if (ar5 != 0) {
      iStack_30 = ar5 + -0x10;
    }
    piVar5 = aiStack_2c;
    piVar6 = piVar5;
    for (; piVar5 < aiStack_2c + 3; piVar5 = piVar5 + 1) {
      if (*piVar5 != 0) {
        *piVar6 = *piVar6 + -0x10;
      }
      piVar6 = piVar6 + 1;
    }
    _DAT_8c4aa1a4 = iStack_30;
    _DAT_8c4aa1a8 = aiStack_2c[0];
    _DAT_8c4aa1ac = aiStack_2c[1];
    _DAT_8c4aa1b0 = aiStack_2c[2];
    if (_DAT_8c4a9ef0 == 1) {
      uVar9 = 1;
    }
    iVar4 = aiStack_2c[2];
    iVar7 = FUN_8c211c98(iStack_30,aiStack_2c[0],aiStack_2c[1],aiStack_2c[2],0,
                         iVar7 * 8 + uVar8 + 0xa0,uVar9);
    if (iVar7 == 0) {
      sh4_dmac_202c60(0xff,_DAT_8c4aa1b8,_DAT_8c4aa1c4,iVar4);
      if (uVar8 < 0x10000) {
        uVar8 = 0x10000;
      }
      _DAT_8c4aa1f8 = uVar8 * 4 + _DAT_8c4aa204;
      if (0x200000U - _DAT_8c4aa200 < _DAT_8c4aa1f8) {
        _DAT_8c4aa1f8 = 0x200000U - _DAT_8c4aa200;
      }
      iVar7 = FUN_8c203820(_DAT_8c4aa1f8,&DAT_8c4aa280,&DAT_8c4aa284,iVar4);
      if (iVar7 == 0) {
        _DAT_8c4aa004 = _DAT_8c4aa1f8;
        uVar8 = _DAT_8c4a9c24 >> 7;
        FUN_8c25d7c6(_DAT_8c4a9c18 >> 7,_DAT_8c4a9c1c >> 7,_DAT_8c4a9c20 >> 7,uVar8,
                     ~_DAT_8c4aa1b8 & uVar1);
        _DAT_8c4aa254 = _DAT_8c4aa22c;
        _DAT_8c4aa258 = _DAT_8c4aa230;
        _DAT_8c4aa25c = _DAT_8c4aa234;
        _DAT_8c4aa260 = _DAT_8c4aa238;
        for (uVar1 = 0; uVar1 < 0x10; uVar1 = uVar1 + 4) {
          *(undefined4 *)(uVar1 + 0x8c4aa268) = *(undefined4 *)(&DAT_8c4aa254 + uVar1);
        }
        _DAT_8c4aa208 = 0;
        _DAT_8c4aa20c = 0;
        _DAT_8c4aa210 = 0;
        _DAT_8c4aa214 = 0;
        puVar3 = &DAT_8c4aa22c;
        _DAT_8c4aa218 = &DAT_8c4aa22c;
        puVar2 = (undefined4 *)&DAT_8c4aa224;
        _DAT_8c4aa21c = &DAT_8c4aa254;
        uVar1 = 0;
        if (uVar9 != 0) {
          do {
            uVar1 = uVar1 + 1;
            *puVar2 = puVar3;
            puVar3 = puVar3 + 0x14;
            puVar2 = puVar2 + 1;
          } while (uVar1 < uVar9);
        }
        FUN_8c211a20(uVar9,puVar2,uVar1,uVar8);
        for (uVar9 = 0; uVar9 < 0x10; uVar9 = uVar9 + 4) {
          *(int *)(_DAT_8c4aa21c + uVar9) =
               *(int *)(_DAT_8c4aa21c + uVar9) + *(int *)(&DAT_8c4aa288 + uVar9) * 4;
        }
        *ar4 = &DAT_8c4aa254;
        ar4[1] = &DAT_8c2757a8;
        ar4[2] = &DAT_8c4aa208;
        ar4[3] = &DAT_8c4aa224;
      }
    }
  }
  else {
    DAT_8c2758e8 = DAT_8c2758e8 | 0x100;
    if (DAT_8c2758e8 == 0xb00) {
      DAT_8c2758e8 = 0x80000000;
      iVar7 = FUN_8c211f40(1,0x80000000,0xb00,ar7);
    }
  }
  return iVar7;
}

__asm__(".globl _FUN_8c21092e\n.set _FUN_8c21092e, _FUN_8c21092e_def\n");
