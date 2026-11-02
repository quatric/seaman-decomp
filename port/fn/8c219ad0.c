#include "../decls.h"
int FUN_8c219ad0_def(ushort *ar4,ushort *ar5,ushort *ar6,undefined4 ar7,int ain0)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  ushort *a5;
  ushort *a6;
  undefined1 *ar7_00;
  ushort uVar4;
  ushort uVar5;
  ushort *puVar6;
  code *pcVar7;
  ushort *puVar8;
  ushort *ar6_00;
  ushort *puStack_58;
  undefined1 *puStack_28;
  
  a6 = (ushort *)&DAT_8c4aa318;
  puStack_28 = (undefined1 *)0x8c4aa328;
  a5 = (ushort *)&DAT_8c4c0ed4;
  ar7_00 = &DAT_8c4aa31c;
  ar6_00 = (ushort *)&DAT_8c4aa318;
  puStack_58 = ar4;
  do {
    while( true ) {
      puVar6 = puStack_58 + 1;
      uVar5 = *puStack_58;
      if (uVar5 == 0xff) {
        return ain0;
      }
      uVar4 = uVar5 & 0xff;
      if (7 < uVar4) break;
      ain0 = (int)(short)uVar4;
      puStack_58 = puVar6;
      if (ain0 == 1) {
        pcVar7 = FUN_8c2375ae;
override_prt_8c219cbe_7a4d7f16:
        ain0 = (*pcVar7)((int)(short)uVar5,a5,a6,ar7_00);
      }
      else if ((ain0 != 2) && (ain0 != 3)) {
        if (ain0 == 4) {
          iVar2 = (short)(uVar5 >> 8) * 4;
          *(ushort **)(iVar2 + -0x73b3f054) = puVar6;
          _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + 1;
          return iVar2;
        }
        if (ain0 == 5) {
          a5 = ar5;
          a6 = ar6;
          ain0 = FUN_8c219ad0(*(undefined4 *)((short)(uVar5 >> 8) * 4 + -0x73b3f054),ar5,ar6,ar7_00,
                              ar6_00);
          _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + -1;
        }
      }
    }
    a5 = (ushort *)0x10;
    if (uVar4 < 0x10) {
      pcVar7 = FUN_8c23752c;
      puStack_58 = puStack_58 + 2;
      a5 = (ushort *)(int)(short)*puVar6;
      goto override_prt_8c219cbe_7a4d7f16;
    }
    if (uVar4 < 0x40) {
      puStack_58 = puStack_58 + 2;
      iVar2 = (int)(short)*puVar6;
      a5 = puStack_58;
      ar7_00 = puStack_28;
      puVar6 = ar6_00;
      ain0 = FUN_8c21d7d4((int)(short)uVar5,puStack_58,ar6_00,0x8c4aa328,0);
      a6 = ar6_00;
      ar6_00 = puVar6;
    }
    else {
      puVar8 = puStack_58 + 2;
      uVar1 = *puVar6;
      puStack_58 = puStack_58 + 3;
      puVar6 = (ushort *)(int)(short)*puVar8;
      if ((int)ar5 < _DAT_8c4c0fa4) {
        if ((_DAT_8c4aa4f0 & 0x800) != 0) {
          uVar5 = uVar5 & (ushort)_DAT_8c4aa524 | (ushort)_DAT_8c4aa528;
        }
        uVar5 = (ushort)(char)(uVar5 >> 8);
        iVar2 = 0;
        if (_DAT_8c4aa554 != 0) {
          uVar5 = uVar5 | 8;
        }
        ar7_00 = (undefined1 *)((int)(short)uVar5 & 8);
        DAT_8c277acc = 0;
        a6 = (ushort *)((int)(short)uVar5 & 2);
        a5 = (ushort *)((int)(short)uVar5 & 0x20);
        ain0 = (int)(short)uVar4;
        if (ain0 == 0x40) {
          if ((uVar5 & 0x40) == 0) {
            if (ar7_00 == (undefined1 *)0x0) {
              if (a5 == (ushort *)0x0) {
                uVar3 = 0x80012;
                FUN_8c237124(0x80012,0,a6,0);
              }
              else {
                uVar3 = 0x80010;
                FUN_8c237124(0x80010,a5,a6,0);
                DAT_8c277acc = 1;
              }
              pcVar7 = FUN_8c236510;
            }
            else {
              if (a5 == (ushort *)0x0) {
                uVar3 = 0x2100012;
                FUN_8c237124(0x2100012,0,a6,ar7_00);
              }
              else {
                uVar3 = 0x2100010;
                FUN_8c237124(0x2100010,a5,a6,ar7_00);
                DAT_8c277acc = 1;
              }
              pcVar7 = FUN_8c2365e2;
            }
            ar7_00 = (undefined1 *)(*pcVar7)(uVar3,a5,a6,ar7_00);
            if (ar5 == (ushort *)0x0) {
              a5 = ar6;
              ain0 = FUN_8c221a8c(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
            else {
              a5 = ar6;
              ain0 = FUN_8c221c68(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
          }
          else {
            if (ar7_00 == (undefined1 *)0x0) {
              if (a6 == (ushort *)0x0) {
                if (a5 != (ushort *)0x0) {
                  uVar3 = 0x8001c;
                  goto override_prt_8c219e26_7a4d7f16;
                }
                uVar3 = 0x8001e;
                FUN_8c237124(0x8001e,0,0,0);
              }
              else if (a5 == (ushort *)0x0) {
                uVar3 = 0x8001a;
                FUN_8c237124(0x8001a,0,a6,0);
              }
              else {
                uVar3 = 0x80018;
override_prt_8c219e26_7a4d7f16:
                FUN_8c237124(uVar3,a5,a6,0);
                DAT_8c277acc = 1;
              }
              ar7_00 = (undefined1 *)FUN_8c23666c(uVar3,a5,a6,ar7_00);
            }
            else {
              if (a6 == (ushort *)0x0) {
                if (a5 != (ushort *)0x0) {
                  uVar3 = 0x210001c;
                  goto override_prt_8c219db6_7a4d7f16;
                }
                uVar3 = 0x210001e;
                FUN_8c237124(0x210001e,0,0,ar7_00);
              }
              else if (a5 == (ushort *)0x0) {
                uVar3 = 0x210001a;
                FUN_8c237124(0x210001a,0,a6,ar7_00);
              }
              else {
                uVar3 = 0x2100018;
override_prt_8c219db6_7a4d7f16:
                FUN_8c237124(uVar3,a5,a6,ar7_00);
                DAT_8c277acc = 1;
              }
              ar7_00 = (undefined1 *)FUN_8c236718(uVar3,a5,a6,ar7_00);
            }
            if ((_DAT_8c4aa4f0 & 0x200) == 0) {
              if (ar5 == (ushort *)0x0) {
                a5 = ar6;
                ain0 = FUN_8c221fbc(puStack_58,ar6,puVar6,ar7_00);
                iVar2 = ain0;
                a6 = puVar6;
              }
              else {
                a5 = ar6;
                ain0 = FUN_8c22233c(puStack_58,ar6,puVar6,ar7_00);
                iVar2 = ain0;
                a6 = puVar6;
              }
            }
            else if (ar5 == (ushort *)0x0) {
              a5 = ar6;
              ain0 = FUN_8c22278c(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
            else {
              a5 = ar6;
              ain0 = FUN_8c222cec(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
          }
        }
        else if ((ain0 == 0x41) || (ain0 == 0x42)) {
          if (ar7_00 == (undefined1 *)0x0) {
            if (a6 == (ushort *)0x0) {
              if (a5 != (ushort *)0x0) {
                uVar3 = 0x8001c;
                goto override_prt_8c21a0f6_7a4d7f16;
              }
              uVar3 = 0x8001e;
              FUN_8c237124(0x8001e,0,0,0);
            }
            else if (a5 == (ushort *)0x0) {
              uVar3 = 0x8001a;
              FUN_8c237124(0x8001a,0,a6,0);
            }
            else {
              uVar3 = 0x80018;
override_prt_8c21a0f6_7a4d7f16:
              FUN_8c237124(uVar3,a5,a6,0);
              DAT_8c277acc = 1;
            }
            ar7_00 = (undefined1 *)FUN_8c23666c(uVar3,a5,a6,ar7_00);
          }
          else {
            if (a6 == (ushort *)0x0) {
              if (a5 != (ushort *)0x0) {
                uVar3 = 0x210001c;
                goto override_prt_8c21a0c0_7a4d7f16;
              }
              uVar3 = 0x210001e;
              FUN_8c237124(0x210001e,0,0,ar7_00);
            }
            else if (a5 == (ushort *)0x0) {
              uVar3 = 0x210001a;
              FUN_8c237124(0x210001a,0,a6,ar7_00);
            }
            else {
              uVar3 = 0x2100018;
override_prt_8c21a0c0_7a4d7f16:
              FUN_8c237124(uVar3,a5,a6,ar7_00);
              DAT_8c277acc = 1;
            }
            ar7_00 = (undefined1 *)FUN_8c236718(uVar3,a5,a6,ar7_00);
          }
          if ((_DAT_8c4aa4f0 & 0x200) == 0) {
            if ((uVar5 & 0x40) == 0) {
              if (ar5 == (ushort *)0x0) {
                a5 = ar6;
                ain0 = FUN_8c223b34(puStack_58,ar6,puVar6,ar7_00);
                iVar2 = ain0;
                a6 = puVar6;
              }
              else {
                a5 = ar6;
                ain0 = FUN_8c223eb8(puStack_58,ar6,puVar6,ar7_00);
                iVar2 = ain0;
                a6 = puVar6;
              }
            }
            else if (ar5 == (ushort *)0x0) {
              a5 = ar6;
              ain0 = FUN_8c224330(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
            else {
              a5 = ar6;
              ain0 = FUN_8c2246a0(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
          }
          else if ((uVar5 & 0x40) == 0) {
            if (ar5 == (ushort *)0x0) {
              a5 = ar6;
              ain0 = FUN_8c2234a4(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
            else {
              a5 = ar6;
              ain0 = FUN_8c223708(puStack_58,ar6,puVar6,ar7_00);
              iVar2 = ain0;
              a6 = puVar6;
            }
          }
          else if (ar5 == (ushort *)0x0) {
            a5 = ar6;
            ain0 = FUN_8c2255e8(puStack_58,ar6,puVar6,ar7_00);
            iVar2 = ain0;
            a6 = puVar6;
          }
          else {
            a5 = ar6;
            ain0 = FUN_8c225b54(puStack_58,ar6,puVar6,ar7_00);
            iVar2 = ain0;
            a6 = puVar6;
          }
        }
        if (iVar2 != 0) {
          ain0 = FUN_8c2370dc(iVar2,a5,a6,ar7_00);
        }
      }
      iVar2 = uVar1 - 1;
    }
    puStack_58 = puStack_58 + iVar2;
  } while( true );
}

__asm__(".globl _FUN_8c219ad0\n.set _FUN_8c219ad0, _FUN_8c219ad0_def\n");
