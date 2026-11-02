#include "../decls.h"
undefined * FUN_8c217f12_def(ushort *ar4,int ar5,int ar6,undefined4 *ar7,undefined *ain0)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined *ar4_00;
  undefined *puVar4;
  undefined4 *a5;
  ushort uVar5;
  uint a6;
  undefined4 *a7;
  undefined4 uVar6;
  code *pcVar7;
  double in_dr2;
  double dVar8;
  double in_dr4;
  float fVar9;
  undefined8 in_xd2;
  char cVar10;
  char cVar11;
  ushort *ar5_00;
  ushort *puVar12;
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  _DAT_8c4aa2a8 = 0;
  a7 = ar7;
  while( true ) {
    do {
      while( true ) {
        while( true ) {
          puVar12 = ar4 + 1;
          uVar5 = *ar4;
          if (uVar5 == 0xff) {
            return ain0;
          }
          puVar4 = (undefined *)(int)(short)(uVar5 & 0xff);
          iVar3 = (int)(short)uVar5;
          if (puVar4 < (undefined *)0x8) break;
          if (puVar4 < (undefined *)0x10) {
            ar4 = ar4 + 2;
            uVar2 = FUN_8c23752c(iVar3,(int)(short)*puVar12,(int)(short)uVar5,a7);
            ain0 = (undefined *)(uVar2 & 0xff);
            _DAT_8c4aa2a8 = 0;
            if ((ain0 == (undefined *)0x4) && ((*ar4 & 0x18) != 0)) {
              if (cVar11 == '\0') {
                in_dr4 = (double)CONCAT44(0x46fffe00,SUB84(in_dr4,0));
              }
              else {
                in_dr4 = -3.115182567042769e-250;
              }
              uVar6 = (undefined4)((ulonglong)in_dr2 >> 0x20);
              fVar9 = (float)((ulonglong)in_dr4 >> 0x20);
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[2] / fVar9);
              }
              else {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[2]) / in_dr4;
              }
              _DAT_8c4ab1dc = (undefined4)in_xd2;
              _DAT_8c4ab1f0 = _DAT_8c4ab1dc;
              if (cVar11 == '\0') {
                _DAT_8c4ab1dc = SUB84(dVar8,0);
              }
              uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[3] / fVar9);
              }
              else {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[3]) / in_dr4;
              }
              _DAT_8c4ab1e0 = _DAT_8c4ab1f0;
              if (cVar11 == '\0') {
                _DAT_8c4ab1e0 = SUB84(dVar8,0);
              }
              uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[4] / fVar9);
              }
              else {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[4]) / in_dr4;
              }
              _DAT_8c4ab1e4 = _DAT_8c4ab1f0;
              if (cVar11 == '\0') {
                _DAT_8c4ab1e4 = SUB84(dVar8,0);
              }
              uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[5] / fVar9);
              }
              else {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[5]) / in_dr4;
              }
              _DAT_8c4ab1e8 = _DAT_8c4ab1f0;
              if (cVar11 == '\0') {
                _DAT_8c4ab1e8 = SUB84(dVar8,0);
              }
              uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
              if (cVar10 == '\0') {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[6] / fVar9);
              }
              else {
                dVar8 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[6]) / in_dr4;
              }
              _DAT_8c4ab1ec = _DAT_8c4ab1f0;
              if (cVar11 == '\0') {
                _DAT_8c4ab1ec = SUB84(dVar8,0);
              }
              uVar6 = (undefined4)((ulonglong)dVar8 >> 0x20);
              if (cVar10 == '\0') {
                in_dr2 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[7] / fVar9);
              }
              else {
                in_dr2 = (double)CONCAT44(uVar6,(float)(int)(short)ar4[7]) / in_dr4;
              }
              if (cVar11 == '\0') {
                _DAT_8c4ab1f0 = SUB84(in_dr2,0);
              }
              else {
                _DAT_8c4ab1f4 = (undefined4)((ulonglong)in_xd2 >> 0x20);
              }
              _DAT_8c4aa2a8 = 1;
              ain0 = &DAT_8c2180ec;
              ar4 = ar4 + 8;
            }
          }
          else if (puVar4 < (undefined *)0x40) {
            a7 = (undefined4 *)0x0;
            ar5_00 = ar4 + 2;
            uVar5 = *puVar12;
            ain0 = (undefined *)FUN_8c21d7d4(iVar3,ar5_00,&DAT_8c275950,0,&DAT_8c275960);
            ar4 = ar5_00 + (short)uVar5;
          }
          else {
            uVar1 = *puVar12;
            puVar12 = ar4 + 3;
            uVar2 = (uint)(short)ar4[2];
            if (ar6 < _DAT_8c4c0fa4) {
              if ((_DAT_8c4aa4f0 & 0x800) != 0) {
                uVar5 = uVar5 & (ushort)_DAT_8c4aa524 | (ushort)_DAT_8c4aa528;
              }
              a5 = &DAT_8c277acc;
              a6 = (uint)(short)(char)(uVar5 >> 8);
              a7 = (undefined4 *)0x20;
              ar4_00 = (undefined *)0x0;
              DAT_8c277acc = (uint)((a6 & 0x20) != 0);
              if ((puVar4 == (undefined *)0x41) || (puVar4 == (undefined *)0x42)) {
                if (_DAT_8c4aa2a8 == 0) {
                  if (ar5 == 0x23) {
                    if ((a6 & 8) == 0) {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x8000a;
                      }
                      else {
                        uVar6 = 0x80008;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      a7 = (undefined4 *)FUN_8c23666c(uVar6,a5,a6,a7);
                    }
                    else {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x210000a;
                      }
                      else {
                        uVar6 = 0x2100008;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      if (cVar11 == '\0') {
                        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                                  (undefined4)DAT_8c275950);
                      }
                      else {
                        in_xd2 = CONCAT44((*(uint*)((uchar*)&DAT_8c275950+4)),(undefined4)DAT_8c275950);
                        _DAT_8c278724 = (*(uint*)((uchar*)&DAT_8c275950+4));
                      }
                      DAT_8c278720 = (undefined4)DAT_8c275950;
                      a7 = (undefined4 *)FUN_8c236718(uVar6,a5,a6,a7);
                    }
                  }
                  else if ((a6 & 8) == 0) {
                    if ((a6 & 2) == 0) {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x8002e;
                      }
                      else {
                        uVar6 = 0x8002c;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      a5 = (undefined4 *)&DAT_8c275960;
                      pcVar7 = FUN_8c236d20;
                    }
                    else {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x8002a;
                      }
                      else {
                        uVar6 = 0x80028;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      pcVar7 = FUN_8c236b3c;
                    }
                    a7 = (undefined4 *)(*pcVar7)(&DAT_8c278720,a5,a6,a7);
                  }
                  else {
                    if ((a6 & 2) == 0) {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x210002e;
                      }
                      else {
                        uVar6 = 0x210002c;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      pcVar7 = FUN_8c236dd8;
                      if (cVar11 == '\0') {
                        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                                  (undefined4)DAT_8c275950);
                      }
                      else {
                        in_xd2 = CONCAT44((*(uint*)((uchar*)&DAT_8c275950+4)),(undefined4)DAT_8c275950);
                      }
                      a5 = (undefined4 *)&DAT_8c275960;
                      if (cVar11 == '\0') {
                        DAT_8c278720 = SUB84(in_dr2,0);
                      }
                      else {
                        DAT_8c278720 = (undefined4)in_xd2;
                        _DAT_8c278724 = (undefined4)((ulonglong)in_xd2 >> 0x20);
                      }
                    }
                    else {
                      if ((a6 & 0x20) == 0) {
                        uVar6 = 0x210002a;
                      }
                      else {
                        uVar6 = 0x2100028;
                      }
                      FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                      pcVar7 = FUN_8c236c38;
                      if (cVar11 == '\0') {
                        in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                                  (undefined4)DAT_8c275950);
                      }
                      else {
                        in_xd2 = CONCAT44((*(uint*)((uchar*)&DAT_8c275950+4)),(undefined4)DAT_8c275950);
                        _DAT_8c278724 = (*(uint*)((uchar*)&DAT_8c275950+4));
                      }
                      DAT_8c278720 = (undefined4)DAT_8c275950;
                    }
                    a7 = (undefined4 *)(*pcVar7)(&DAT_8c278720,a5,a6,a7);
                  }
                  if (ar6 == 0) {
                    pcVar7 = FUN_8c2162bc;
                    if (puVar4 == (undefined *)0x41) {
                      if (cVar11 == '\0') {
                        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                      }
                      else {
                        in_dr4 = 6.462349967980925e-27;
                      }
                    }
                    else if (cVar11 == '\0') {
                      in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                    }
                    else {
                      in_dr4 = -3.0353264721140325e-250;
                    }
                  }
                  else {
                    pcVar7 = FUN_8c216ed0;
                    if (puVar4 == (undefined *)0x41) {
                      if (cVar11 == '\0') {
                        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                      }
                      else {
                        in_dr4 = 6.462349967980925e-27;
                      }
                    }
                    else if (cVar11 == '\0') {
                      in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                    }
                    else {
                      in_dr4 = -3.0353264721140325e-250;
                    }
                  }
                  a5 = ar7;
                  puVar4 = (undefined *)(*pcVar7)(puVar12,ar7,uVar2,a7);
                  ar4_00 = puVar4;
                  a6 = uVar2;
                }
                else {
                  if ((a6 & 8) == 0) {
                    uVar6 = 0x8000c;
                    FUN_8c237124(0x8000c,&DAT_8c277acc,a6,0x20);
                    a7 = (undefined4 *)FUN_8c23666c(uVar6,a5,a6,a7);
                  }
                  else {
                    uVar6 = 0x210000c;
                    FUN_8c237124(0x210000c,&DAT_8c277acc,a6,0x20);
                    if (cVar11 == '\0') {
                      in_dr2 = (double)CONCAT44((int)((ulonglong)in_dr2 >> 0x20),
                                                (undefined4)DAT_8c275950);
                    }
                    else {
                      in_xd2 = CONCAT44((*(uint*)((uchar*)&DAT_8c275950+4)),(undefined4)DAT_8c275950);
                      _DAT_8c278724 = (*(uint*)((uchar*)&DAT_8c275950+4));
                    }
                    DAT_8c278720 = (undefined4)DAT_8c275950;
                    a7 = (undefined4 *)FUN_8c236718(uVar6,a5,a6,a7);
                  }
                  if (ar6 == 0) {
                    pcVar7 = FUN_8c2163d4;
                    if (puVar4 == (undefined *)0x41) {
                      if (cVar11 == '\0') {
                        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                      }
                      else {
                        in_dr4 = 6.462349967980925e-27;
                      }
                    }
                    else if (cVar11 == '\0') {
                      in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                    }
                    else {
                      in_dr4 = -3.036072391187902e-250;
                    }
                  }
                  else {
                    pcVar7 = FUN_8c2166e8;
                    if (puVar4 == (undefined *)0x41) {
                      if (cVar11 == '\0') {
                        in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                      }
                      else {
                        in_dr4 = 6.462349967980925e-27;
                      }
                    }
                    else if (cVar11 == '\0') {
                      in_dr4 = (double)((ulonglong)in_dr4 & 0xffffffff);
                    }
                    else {
                      in_dr4 = -3.036072391187902e-250;
                    }
                  }
                  a5 = ar7;
                  puVar4 = (undefined *)(*pcVar7)(puVar12,ar7,uVar2,a7);
                  ar4_00 = puVar4;
                  a6 = uVar2;
                }
              }
              else if (puVar4 == (undefined *)0x40) {
                if (ar5 == 0x23) {
                  if ((a6 & 8) == 0) {
                    if ((a6 & 0x20) == 0) {
                      uVar6 = 0x80002;
                    }
                    else {
                      uVar6 = 0x80000;
                    }
                    FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                    pcVar7 = FUN_8c236510;
                  }
                  else {
                    if ((a6 & 0x20) == 0) {
                      uVar6 = 0x2100002;
                    }
                    else {
                      uVar6 = 0x2100000;
                    }
                    FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                    pcVar7 = FUN_8c2365e2;
                  }
                  a7 = (undefined4 *)(*pcVar7)(uVar6,a5,a6,a7);
                }
                else {
                  if (cVar11 == '\0') {
                    in_dr2 = (double)CONCAT44(DAT_8c27595c,DAT_8c27872c);
                  }
                  else {
                    in_xd2 = CONCAT44((*(uint *)0x8c278730),DAT_8c27872c);
                    in_dr2 = (double)CONCAT44(_DAT_8c275960,DAT_8c27595c);
                  }
                  if (cVar10 == '\0') {
                    in_dr2 = (double)CONCAT44((float)((ulonglong)in_dr2 >> 0x20) * SUB84(in_dr2,0),
                                              SUB84(in_dr2,0));
                  }
                  else {
                    in_dr2 = in_dr2 * in_dr2;
                  }
                  if ((a6 & 8) == 0) {
                    if ((a6 & 0x20) == 0) {
                      uVar6 = 0x80022;
                    }
                    else {
                      uVar6 = 0x80020;
                    }
                    FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                    pcVar7 = FUN_8c236940;
                  }
                  else {
                    if ((a6 & 0x20) == 0) {
                      uVar6 = 0x2100022;
                    }
                    else {
                      uVar6 = 0x2100020;
                    }
                    FUN_8c237124(uVar6,&DAT_8c277acc,a6,0x20);
                    pcVar7 = FUN_8c236a2a;
                  }
                  a7 = (undefined4 *)(*pcVar7)(auStack_30,a5,a6,a7);
                }
                if (ar6 == 0) {
                  pcVar7 = FUN_8c215b74;
                }
                else {
                  pcVar7 = FUN_8c215c48;
                }
                a5 = ar7;
                puVar4 = (undefined *)(*pcVar7)(puVar12,ar7,uVar2,a7);
                ar4_00 = puVar4;
                a6 = uVar2;
              }
              ain0 = puVar4;
              if (ar4_00 != (undefined *)0x0) {
                ain0 = (undefined *)FUN_8c2370dc(ar4_00,a5,a6,a7);
              }
            }
            ar4 = puVar12 + (uVar1 - 1);
          }
        }
        if (puVar4 != (undefined *)0x1) break;
        ain0 = (undefined *)FUN_8c2375ae(iVar3,1,(int)(short)uVar5,a7);
        ar4 = puVar12;
      }
      ain0 = puVar4;
      ar4 = puVar12;
    } while ((puVar4 == (undefined *)0x2) || (puVar4 == (undefined *)0x3));
    if (puVar4 == (undefined *)0x4) break;
    if (puVar4 == (undefined *)0x5) {
      a7 = ar7;
      ain0 = (undefined *)
             FUN_8c217f12(*(undefined4 *)((short)(uVar5 >> 8) * 4 + -0x73b3f054),ar5,ar6,ar7,puVar12
                         );
      _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + -1;
      ar4 = puVar12;
    }
  }
  iVar3 = (short)(uVar5 >> 8) * 4;
  *(ushort **)(iVar3 + -0x73b3f054) = puVar12;
  _DAT_8c4c0fa8 = _DAT_8c4c0fa8 + 1;
  return (undefined *)iVar3;
}

__asm__(".globl _FUN_8c217f12\n.set _FUN_8c217f12, _FUN_8c217f12_def\n");
