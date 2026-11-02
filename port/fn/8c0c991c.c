#include "../decls.h"
undefined4 s_44_OUTWATERCAT_0c9920_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  float *a6;
  float *a7;
  float in_fr1;
  float fVar3;
  double dVar4;
  float fVar7;
  double dVar5;
  undefined1 *puVar8;
  double dVar6;
  undefined4 in_fr3;
  double in_xd0;
  bool bVar9;
  char cVar10;
  char cVar11;
  float fStack_5c;
  undefined4 uStack_58;
  float afStack_54 [7];
  undefined4 uStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  if (DAT_8c43726e == '\0') {
    _DAT_8c43726c = 0;
    DAT_8c43726e = '\x01';
  }
  if (DAT_8c437274 == '\0') {
    _DAT_8c437270 = (double)CONCAT35((*(uint*)((uchar*)&DAT_8c437270_4+1)),0x144610000);
  }
  if (DAT_8c43727c == '\0') {
    _DAT_8c437278 = 0;
    DAT_8c43727c = '\x01';
  }
  if (DAT_8c437284 == '\0') {
    _DAT_8c437280 = 0x3c75c28f;
    _DAT_8c437284 = CONCAT31(DAT_8c437284_1,1);
  }
  if (DAT_8c43728c == '\0') {
    _DAT_8c437288 = 0x3b03126f;
    _DAT_8c43728c = CONCAT31(DAT_8c43728c_1,1);
  }
  if (DAT_8c437294 == '\0') {
    _DAT_8c437290 = (double)CONCAT35((*(uint*)((uchar*)&DAT_8c437290_4+1)),0x1c0000000);
  }
  if (DAT_8c43729c == '\0') {
    _DAT_8c437298 = 0;
    DAT_8c43729c = '\x01';
  }
  if (DAT_8c4372a4 == '\0') {
    _DAT_8c4372a0 = 0xffffffff;
    DAT_8c4372a4 = '\x01';
  }
  ar5_00 = ar5;
  Vec3_ctor_zero(auStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,ar5_00,ar6,ar7);
  FUN_8c0c84cc(afStack_54 + 2,ar5_00,ar6,ar7);
  afStack_54[0] = in_fr1;
  if (cVar11 == '\0') {
    afStack_54[0] = 0.0;
  }
  afStack_54[1] = 0.0;
  if (cVar11 == '\0') {
    fStack_5c = 0.0;
  }
  else {
    afStack_54[0] = 0.0;
    fStack_5c = in_fr1;
  }
  uStack_58 = 0;
  iVar2 = (int)*(short *)(ar4 + 0x2d1ac);
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      if (cVar11 == '\0') {
        _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,0x44610000);
        _DAT_8c437018 = 0.0;
        _DAT_8c437040 = 5.08118523482294e-315;
        _DAT_8c437290 = (double)CONCAT44(_DAT_8c437294,0xc0000000);
        _DAT_8c43700c = _DAT_8c437018;
      }
      else {
        _DAT_8c437270 = -1.3574323400435666e-249;
        _DAT_8c43700c = 900.0;
        (*(uint *)0x8c43701c) = 0;
        _DAT_8c437040 = -1.3581185561256157e-249;
        in_fr1 = -2.0;
        _DAT_8c437290 = 8.75853762720916e-312;
      }
      _DAT_8c437010 = _DAT_8c43700c;
      _DAT_8c437014 = _DAT_8c43700c;
      _DAT_8c437018 = _DAT_8c43700c;
      _DAT_8c437278 = (**(code **)(**(int **)(ar4 + 8) + 0x19c))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0xb4))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      _DAT_8c437298 = (**(code **)(**(int **)(ar4 + 8) + 0x104))(*(int **)(ar4 + 8),0,ar6,ar7);
      *(undefined2 *)(ar4 + 0x2d1ac) = 1;
      break;
    case 1:
      if (cVar11 == '\0') {
        in_fr1 = *(float *)(_DAT_8c437298 + 4);
        fVar3 = 665.32495;
      }
      else {
        in_fr1 = 665.32495;
        fVar3 = 2.58887e-40;
      }
      if (cVar10 != '\0' || in_fr1 <= fVar3) {
        *(undefined2 *)(ar4 + 0x2d1ac) = 3;
      }
      break;
    case 3:
      iVar2 = pack_acquire_entry_handle(0x8c2b59d0,s_44_OUTWATERCAT_8c13d1cf,ar6,ar7);
      *(int *)(ar4 + 0x2d1b8) = iVar2;
      if (iVar2 == -1) {
        report_error_message(s_44_OUTWATERCAT_8c13d1cf,s_Faild_to_get_port_8c13d1de,1,2);
      }
      *(undefined2 *)(ar4 + 0x2d1ac) = 4;
      break;
    case 4:
      if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(0x3fc00000,_DAT_8c437270);
      }
      else {
        dVar4 = 4.33415568043142e-312;
        in_xd0 = _DAT_8c437270;
      }
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      dVar4 = in_xd0;
      if (cVar11 == '\0') {
        _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,fVar3);
        dVar4 = _DAT_8c437270;
      }
      _DAT_8c437270 = dVar4;
      (**(code **)(**(int **)(ar4 + 8) + 0xcc))(*(int **)(ar4 + 8),ar5_00,ar6,ar7);
      if (cVar11 == '\0') {
        dVar4 = (double)CONCAT44(0xbe19999a,_DAT_8c437290);
      }
      else {
        dVar4 = -1.357462683469945e-249;
        in_xd0 = _DAT_8c437290;
      }
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      dVar6 = in_xd0;
      dVar4 = _DAT_8c437038;
      dVar5 = in_xd0;
      if (cVar11 == '\0') {
        _DAT_8c437290 = (double)CONCAT44(_DAT_8c437294,fVar3);
        dVar6 = (double)CONCAT44(fVar3,_DAT_8c437038);
        dVar4 = in_xd0;
        dVar5 = _DAT_8c437290;
      }
      _DAT_8c437290 = dVar5;
      if (cVar10 == '\0') {
        fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar6 + dVar6,0);
      }
      dVar6 = dVar4;
      if (cVar11 == '\0') {
        _DAT_8c437038 = (double)CONCAT44(DAT_8c437038_4,fVar3);
        dVar6 = _DAT_8c437038;
      }
      _DAT_8c437038 = dVar6;
      if (_DAT_8c437044 == 0) {
        if (cVar11 == '\0') {
          fVar7 = 630.0;
          fVar3 = _DAT_8c437270;
        }
        else {
          fVar3 = 630.0;
          fVar7 = 9.114239e+09;
          dVar4 = _DAT_8c437270;
        }
        if (cVar10 != '\0' || fVar3 <= fVar7) {
          _DAT_8c437040 = (double)CONCAT44(1,_DAT_8c437040);
        }
      }
      else if (_DAT_8c437044 == 1) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(_DAT_8c437280,_DAT_8c437040);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c437284,_DAT_8c437280);
          dVar4 = _DAT_8c437040;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 + dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          _DAT_8c437040 = fVar3;
          _DAT_8c437040 = SUB84(_DAT_8c437040,0);
          dVar5 = (double)CONCAT44(0x44348000,_DAT_8c437040);
          dVar6 = (double)CONCAT44(_DAT_8c437270,in_fr3);
          _DAT_8c437040 = _DAT_8c437040;
        }
        else {
          dVar5 = 5629500678504448.0;
          dVar6 = _DAT_8c437270;
          _DAT_8c437040 = dVar4;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 * dVar5,0);
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(0x43340000,fVar3);
        }
        else {
          dVar5 = 3.446719454007875e+77;
        }
        if (cVar10 == '\0') {
          bVar9 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20) <
                  (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          bVar9 = dVar5 + dVar5 < dVar6;
        }
        if (!bVar9) {
          _DAT_8c437040 = (double)CONCAT44(2,_DAT_8c437040);
        }
      }
      else if (_DAT_8c437044 == 2) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(_DAT_8c437288,_DAT_8c437040);
        }
        else {
          dVar6 = (double)CONCAT44(_DAT_8c43728c,_DAT_8c437288);
          dVar4 = _DAT_8c437040;
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar6 - dVar6,0);
        }
                    
        if (cVar11 == '\0') {
          _DAT_8c437040 = fVar3;
          _DAT_8c437040 = SUB84(_DAT_8c437040,0);
          puVar8 = (undefined1 *)0x3dcccccd;
          dVar6 = _DAT_8c437040;
          fVar3 = _DAT_8c437040;
        }
        else {
          fVar3 = 0.1;
          puVar8 = &DAT_8c437270;
          dVar6 = dVar4;
        }
        _DAT_8c437040 = dVar6;
        if (cVar10 != '\0' || fVar3 <= (float)(uint)puVar8) {
          _DAT_8c437040 = 6.87825041940734e-314;
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)0x44340000;
        fVar3 = _DAT_8c437270;
      }
      else {
        fVar3 = 720.0;
        puVar8 = &DAT_8c43700c;
        dVar4 = _DAT_8c437270;
      }
      if (cVar10 == '\0' && fVar3 < (float)(uint)puVar8) {
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x3a902de0,_DAT_8c43700c);
        }
        else {
          dVar4 = (double)CONCAT44(_DAT_8c437010,_DAT_8c43700c);
          dVar6 = -0.007812501704413444;
        }
        if (cVar10 == '\0') {
          _DAT_8c43700c = SUB84(dVar6,0) - (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          _DAT_8c43700c = SUB84(dVar6 - dVar6,0);
        }
        if (cVar11 == '\0') {
          fVar7 = -1.0;
          fVar3 = _DAT_8c43700c;
        }
        else {
          _DAT_8c43700c = SUB84(dVar4,0);
          _DAT_8c437010 = (float)((ulonglong)dVar4 >> 0x20);
          fVar3 = -1.0;
          fVar7 = 160.0;
        }
        if (cVar10 == '\0' && fVar3 < fVar7) {
          if (cVar11 == '\0') {
            _DAT_8c43700c = -1.0;
          }
          else {
            _DAT_8c43700c = -1.0;
            _DAT_8c437010 = 160.0;
          }
        }
      }
      if (cVar11 == '\0') {
        puVar8 = (undefined1 *)0x43200000;
        in_fr1 = _DAT_8c437270;
      }
      else {
        in_fr1 = 160.0;
        puVar8 = &DAT_8c437278;
      }
      if (cVar10 != '\0' || in_fr1 <= (float)(uint)puVar8) {
        FUN_8c022104(0x8c2b59d0,*(undefined4 *)(_DAT_8c437278 + 0x5e4),ar6,ar7);
        FUN_8c0220bc(0x8c2b59d0,*(undefined4 *)(_DAT_8c437278 + 0x5e4),ar6,ar7);
        if (cVar11 == '\0') {
          _DAT_8c437270 = (double)CONCAT44(_DAT_8c437274,0x43200000);
        }
        else {
          in_fr1 = 160.0;
          _DAT_8c437270 = -1.358093006003901e-249;
        }
        _DAT_8c43726c = (ushort)*ar5;
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
      }
      break;
    case 5:
      if (0x2d < *ar5 - (uint)_DAT_8c43726c) {
        *(undefined4 *)(ar4 + 0x2d15c) = 3;
      }
    }
  }
  a7 = &fStack_5c;
  (**(code **)(**(int **)(ar4 + 8) + 0x13c))(*(int **)(ar4 + 8),afStack_54,&uStack_58,a7);
  if (cVar11 != '\0') {
    uStack_30 = uStack_58;
    in_fr1 = fStack_5c;
  }
  fStack_34 = fStack_5c;
  uStack_38 = uStack_58;
  afStack_54[6] = afStack_54[0];
  if (cVar11 == '\0') {
    afStack_54[2] = 0.0;
    afStack_54[4] = in_fr1;
  }
  else {
    afStack_54[4] = 500.0;
    afStack_54[2] = in_fr1;
  }
  afStack_54[3] = 500.0;
  if (cVar11 == '\0') {
    afStack_54[4] = 0.0;
  }
  else {
    afStack_54[5] = 0.0;
  }
  a6 = afStack_54 + 2;
  (**(code **)(**(int **)(ar4 + 8) + 0xc))(*(int **)(ar4 + 8),ar5,a6,a7);
  (**(code **)(**(int **)(ar4 + 8) + 0xd4))(*(int **)(ar4 + 8),&DAT_8c43700c,a6,a7);
  if (*(int *)(ar4 + 0x2d1b0) != 4) {
    uVar1 = s_GRAPHICS_ENV_0ca2d4(ar4,ar4 + 0x2d1b0,a6,a7);
    *(undefined4 *)(ar4 + 0x2d1b0) = uVar1;
  }
  FUN_8c0c8480(afStack_54 + 2,0xffffffff,a6,a7);
  Vec3_dtor(auStack_2c,0xffffffff,a6,a7);
  Vec3_dtor(auStack_1c,0xffffffff,a6,a7);
  return 0;
}

__asm__(".globl _s_44_OUTWATERCAT_0c9920\n.set _s_44_OUTWATERCAT_0c9920, _s_44_OUTWATERCAT_0c9920_def\n");
