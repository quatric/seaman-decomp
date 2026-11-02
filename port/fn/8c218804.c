#include "../decls.h"
uint FUN_8c218804_def(ushort *ar4,int ar5,undefined1 *ar6,undefined4 ar7,uint ain0)

{
  ushort uVar1;
  int iVar2;
  uint ar4_00;
  uint uVar3;
  undefined1 *a5;
  ushort uVar4;
  uint a6;
  undefined1 *ar7_00;
  ushort *puVar5;
  undefined4 uVar6;
  uint a6_00;
  code *pcVar7;
  bool bVar8;
  undefined1 *ar6_00;
  undefined1 *puStack_28;
  
  puStack_28 = (undefined1 *)0x8c4aa2e0;
  ar7_00 = &DAT_8c4aa2d4;
  ar6_00 = &DAT_8c4aa2d0;
  do {
    while( true ) {
      uVar4 = *ar4;
      puVar5 = ar4 + 1;
      if (uVar4 == 0xff) {
        return ain0;
      }
      uVar3 = (uint)(short)(uVar4 & 0xff);
      if (7 < uVar3) break;
      if (uVar3 == 1) {
        pcVar7 = FUN_8c2375ae;
        iVar2 = 1;
override_prt_8c218916_7a4d7f16:
        ain0 = (*pcVar7)((int)(short)uVar4,iVar2,(int)(short)uVar4,ar7_00);
        ar4 = puVar5;
      }
      else {
        ain0 = uVar3;
        ar4 = puVar5;
        if ((uVar3 != 2) && (uVar3 != 3)) {
          if (uVar3 == 4) {
            iVar2 = (short)(uVar4 >> 8) * 4;
            *(ushort **)(iVar2 + -0x73b3f054) = puVar5;
            _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + 1;
            return iVar2;
          }
          if (uVar3 == 5) {
            ain0 = FUN_8c218804(*(undefined4 *)((short)(uVar4 >> 8) * 4 + -0x73b3f054),ar5,ar6,
                                ar7_00,ar6_00);
            _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + -1;
          }
        }
      }
    }
    if (uVar3 < 0x10) {
      iVar2 = (int)(short)*puVar5;
      puVar5 = ar4 + 2;
      pcVar7 = FUN_8c23752c;
      goto override_prt_8c218916_7a4d7f16;
    }
    if (uVar3 < 0x40) {
      iVar2 = (int)(short)*puVar5;
      puVar5 = ar4 + 2;
      ar7_00 = puStack_28;
      ain0 = FUN_8c21d7d4((int)(short)uVar4,puVar5,ar6_00,0x8c4aa2e0,0);
    }
    else {
      uVar1 = *puVar5;
      a6_00 = (uint)(short)ar4[2];
      puVar5 = ar4 + 3;
      if (ar5 < _DAT_8c4c0fa4) {
        if ((_DAT_8c4aa4f0 & 0x800) != 0) {
          uVar4 = uVar4 & (ushort)_DAT_8c4aa524 | (ushort)_DAT_8c4aa528;
        }
        a5 = &DAT_8c4aa554;
        a6 = (int)(short)uVar4 >> 8;
        ar4_00 = 0;
        if (_DAT_8c4aa554 != 0) {
          a6 = a6 | 8;
        }
        ar7_00 = (undefined1 *)0x20;
        bVar8 = (a6 & 0x20) != 0;
        if (bVar8) {
          a5 = (undefined1 *)0x1;
        }
        DAT_8c277acc = (uint)bVar8;
        if ((uVar3 == 0x41) || (uVar3 == 0x42)) {
          if ((a6 & 8) == 0) {
            if ((a6 & 2) == 0) {
              if ((a6 & 0x20) == 0) {
                uVar6 = 0x8001e;
              }
              else {
                uVar6 = 0x8001c;
              }
              FUN_8c237124(uVar6,a5,a6,0x20);
            }
            else {
              if ((a6 & 0x20) == 0) {
                uVar6 = 0x8001a;
              }
              else {
                uVar6 = 0x80018;
              }
              FUN_8c237124(uVar6,a5,a6,0x20);
            }
            pcVar7 = FUN_8c23666c;
          }
          else {
            if ((a6 & 2) == 0) {
              if ((a6 & 0x20) == 0) {
                uVar6 = 0x210001e;
              }
              else {
                uVar6 = 0x210001c;
              }
              FUN_8c237124(uVar6,a5,a6,0x20);
            }
            else {
              if ((a6 & 0x20) == 0) {
                uVar6 = 0x210001a;
              }
              else {
                uVar6 = 0x2100018;
              }
              FUN_8c237124(uVar6,a5,a6,0x20);
            }
            pcVar7 = FUN_8c236718;
          }
          ar7_00 = (undefined1 *)(*pcVar7)(uVar6,a5,a6,ar7_00);
          if (ar5 == 0) {
            a5 = ar6;
            uVar3 = FUN_8c21496c(puVar5,ar6,a6_00,ar7_00);
            ar4_00 = uVar3;
            a6 = a6_00;
          }
          else {
            a5 = ar6;
            uVar3 = FUN_8c214aec(puVar5,ar6,a6_00,ar7_00);
            ar4_00 = uVar3;
            a6 = a6_00;
          }
        }
        else if (uVar3 == 0x40) {
          if ((a6 & 8) == 0) {
            if ((a6 & 0x20) == 0) {
              uVar6 = 0x80012;
            }
            else {
              uVar6 = 0x80010;
            }
            FUN_8c237124(uVar6,a5,a6,0x20);
            pcVar7 = FUN_8c236510;
          }
          else {
            if ((a6 & 0x20) == 0) {
              uVar6 = 0x2100012;
            }
            else {
              uVar6 = 0x2100010;
            }
            FUN_8c237124(uVar6,a5,a6,0x20);
            pcVar7 = FUN_8c2365e2;
          }
          ar7_00 = (undefined1 *)(*pcVar7)(uVar6,a5,a6,ar7_00);
          if (ar5 == 0) {
            a5 = ar6;
            uVar3 = FUN_8c21423c(puVar5,ar6,a6_00,ar7_00);
            ar4_00 = uVar3;
            a6 = a6_00;
          }
          else {
            a5 = ar6;
            uVar3 = FUN_8c214358(puVar5,ar6,a6_00,ar7_00);
            ar4_00 = uVar3;
            a6 = a6_00;
          }
        }
        ain0 = uVar3;
        if (ar4_00 != 0) {
          ain0 = FUN_8c2370dc(ar4_00,a5,a6,ar7_00);
        }
      }
      iVar2 = uVar1 - 1;
    }
    ar4 = puVar5 + iVar2;
  } while( true );
}

__asm__(".globl _FUN_8c218804\n.set _FUN_8c218804, _FUN_8c218804_def\n");
