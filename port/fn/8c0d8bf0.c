#include "../decls.h"
undefined4 FUN_8c0d8bf0_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  code *ar5_00;
  float fVar3;
  float fVar5;
  double dVar4;
  undefined1 *puVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  ar5_00 = ar5;
  if (DAT_8c437cb4 == '\0') {
    uVar1 = FUN_8c0d761c(&DAT_8c437cb8,ar5,ar6,ar7);
    ar6 = 0x8c437ca8;
    ar5_00 = free_if_nonnull_wrap_0d76b8;
    global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c437ca8,ar7);
    DAT_8c437cb4 = '\x01';
  }
  if (DAT_8c437cd8 == '\0') {
    uVar1 = FUN_8c0d761c(&DAT_8c437cdc,ar5_00,ar6,ar7);
    ar6 = 0x8c437ccc;
    ar5_00 = free_if_nonnull_wrap_0d76b8;
    global_list_push(uVar1,free_if_nonnull_wrap_0d76b8,0x8c437ccc,ar7);
    DAT_8c437cd8 = '\x01';
  }
  if (DAT_8c437cfc == '\0') {
    _DAT_8c437cf8 = 0;
    DAT_8c437cfc = '\x01';
  }
  switch(*(undefined4 *)(ar4 + 0x58)) {
  case 1:
    if (ar5 == *(code **)(ar4 + 0x50)) {
      *(undefined4 *)(ar4 + 0x58) = 2;
      *(undefined4 *)(ar4 + 0x74) = 0;
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar4 + 0x38);
        *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar4 + 0x3c);
        *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar4 + 0x40);
        *(undefined4 *)(ar4 + 0x68) = *(undefined4 *)(ar4 + 0x44);
        *(undefined4 *)(ar4 + 0x6c) = *(undefined4 *)(ar4 + 0x48);
        dVar4 = (double)CONCAT44(0x3e4ccccd,*(undefined4 *)(ar4 + 0x68));
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(ar4 + 0x38);
        *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(ar4 + 0x3c);
        *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar4 + 0x40);
        *(undefined8 *)(ar4 + 0x68) = *(undefined8 *)(ar4 + 0x44);
        *(undefined8 *)(ar4 + 0x6c) = *(undefined8 *)(ar4 + 0x48);
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar4 = 1548112633213747.2;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf0 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        _DAT_8c437cf0 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x3e19999a,*(undefined4 *)(ar4 + 0x6c));
      }
      else {
        _DAT_8c437cf0 = (float)in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        dVar4 = -1.3608891160156975e-249;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 - dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x43160000,fVar3);
      }
      else {
        dVar4 = -1.3609530726902538e-249;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf4 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        _DAT_8c437cf4 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 != '\0') {
        _DAT_8c437cf4 = (float)in_xd0;
        _DAT_8c437cf8 = (int)((ulonglong)in_xd0 >> 0x20);
      }
      _DAT_8c437cb8 = *(undefined4 *)(ar4 + 0x5c);
      _DAT_8c437cbc = *(undefined4 *)(ar4 + 0x60);
      _DAT_8c437cc0 = *(undefined4 *)(ar4 + 100);
      _DAT_8c437cc4 = *(float *)(ar4 + 0x68);
      _DAT_8c437cc8 = *(float *)(ar4 + 0x6c);
      iVar2 = rand(&DAT_8c437cb8,ar5_00,ar6,ar7);
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
      }
      else {
        dVar4 = 206158466560.0;
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 / dVar4,0);
      }
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(0x42480000,fVar3);
      }
      else {
        dVar4 = 4.604612304241727e-232;
      }
      if (cVar7 == '\0') {
        _DAT_8c437cf8 = (int)(SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20));
      }
      else {
        _DAT_8c437cf8 = (int)(dVar4 * dVar4);
      }
    }
    break;
  case 2:
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(_DAT_8c437cf0,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,_DAT_8c437cf0);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x68) = fVar3;
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar4 = (double)CONCAT44(_DAT_8c437cf8,_DAT_8c437cf4);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 - dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x68) = 0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = 0x3e19999a3e4ccccd;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x6c);
      fVar5 = 0.15;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      fVar3 = 0.15;
      fVar5 = -7.131649e+31;
    }
    if (cVar7 != '\0' || fVar3 <= fVar5) {
      if (cVar8 == '\0') {
        *(undefined4 *)(ar4 + 0x6c) = 0x3e19999a;
      }
      else {
        *(undefined8 *)(ar4 + 0x6c) = 0xf46109003e19999a;
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = 0.2;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      fVar5 = 0.15;
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(ar4 + 0x6c);
        fVar5 = 0.15;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        fVar3 = 0.15;
        fVar5 = -7.131649e+31;
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(ar4 + 0x58) = 3;
        uVar1 = 4100000000;
        iVar2 = ar4 + 0x78;
        FUN_8c0d7f04(iVar2,4100000000,ar6,ar7);
        iVar2 = rand(iVar2,uVar1,ar6,ar7);
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
        }
        else {
          dVar4 = 33554440.875;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 / dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0x41800000,fVar3);
        }
        else {
          dVar4 = -131072.03198242188;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 * dVar4,0);
        }
        if (cVar8 == '\0') {
          dVar4 = (double)CONCAT44(0xc1000000,fVar3);
        }
        else {
          dVar4 = 5.98249051247822e-310;
        }
        if (cVar7 == '\0') {
          fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar4 + dVar4,0);
        }
        if (cVar8 == '\0') {
          *(float *)(ar4 + 0x6e1c) = fVar3;
        }
        else {
          *(undefined8 *)(ar4 + 0x6e1c) = in_xd0;
        }
        uVar1 = pack_acquire_entry_handle(0x8c2b59d0,*(undefined4 *)(ar4 + 0x6e20),ar6,ar7);
        *(undefined4 *)(ar4 + 0x6e24) = uVar1;
        *(undefined4 *)(ar4 + 0x6e28) = 0xbae;
      }
    }
    break;
  case 3:
    *(undefined4 *)(ar4 + 0x58) = 4;
    break;
  case 4:
    if ((500 < *(int *)(ar4 + 0x6e28)) &&
       (iVar2 = *(int *)(ar4 + 0x6e28) + -10, *(int *)(ar4 + 0x6e28) = iVar2, iVar2 < 500)) {
      *(undefined4 *)(ar4 + 0x6e28) = 500;
    }
    if (*(int *)(ar4 + 0x70) == 0) {
      iVar2 = ar4 + 0x78;
      uVar1 = get_field_4_0d92a8(iVar2,ar5_00,ar6,ar7);
      if ((uint)(int)(short)uVar1 < *(uint *)(ar4 + 0x54)) {
        uVar1 = rand(iVar2,ar5_00,ar6,ar7);
        ar5_00 = (code *)0x64;
        iVar2 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
        if ((iVar2 < 0x14) && (*(int *)(ar4 + 0x6e44) == 0)) {
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x40400000,_DAT_8c437cc4);
          }
          else {
            in_xd0 = CONCAT44(_DAT_8c437cc8,_DAT_8c437cc4);
            dVar4 = 206158463104.0;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce8 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce8 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f19999a,_DAT_8c437cb8);
          }
          else {
            _DAT_8c437ce8 = (float)in_xd0;
            (*(uint *)0x8c437cec) = (undefined4)((ulonglong)in_xd0 >> 0x20);
            in_xd0 = CONCAT44(_DAT_8c437cbc,_DAT_8c437cb8);
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437cdc = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437cdc = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f19999a,_DAT_8c437cbc);
          }
          else {
            _DAT_8c437cdc = (float)in_xd0;
            in_xd0 = CONCAT44(_DAT_8c437cc0,_DAT_8c437cbc);
            dVar4 = 3.051758529863946e-05;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce0 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce0 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x3f000000,_DAT_8c437cc0);
          }
          else {
            _DAT_8c437ce0 = (float)in_xd0;
            in_xd0 = CONCAT44(_DAT_8c437cc4,_DAT_8c437cc0);
            dVar4 = 6.58340905100917e-312;
          }
          if (cVar7 == '\0') {
            fVar3 = SUB84(dVar4,0) - (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            fVar3 = SUB84(dVar4 - dVar4,0);
          }
          if (cVar8 == '\0') {
            dVar4 = (double)CONCAT44(0x42480000,fVar3);
          }
          else {
            dVar4 = 9.765628835367579e-05;
          }
          if (cVar7 == '\0') {
            _DAT_8c437ce4 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
          }
          else {
            _DAT_8c437ce4 = SUB84(dVar4 / dVar4,0);
          }
          if (cVar8 == '\0') {
            *(undefined4 *)(ar4 + 0x68) = 0x40400000;
            *(undefined4 *)(ar4 + 0x5c) = 0x3f19999a;
            *(undefined4 *)(ar4 + 0x60) = 0x3f19999a;
            *(undefined4 *)(ar4 + 100) = 0x3f000000;
          }
          else {
            _DAT_8c437ce4 = (float)in_xd0;
            _DAT_8c437ce8 = (float)((ulonglong)in_xd0 >> 0x20);
            *(undefined8 *)(ar4 + 0x68) = 0x4248000040400000;
            *(undefined8 *)(ar4 + 0x5c) = 0x3f0000003f19999a;
            *(undefined8 *)(ar4 + 0x60) = 0x3f0000003f19999a;
            *(undefined8 *)(ar4 + 100) = 0x1363f000000;
          }
          *(undefined4 *)(ar4 + 0x70) = 1;
          *(undefined4 *)(ar4 + 0x6e44) = 0x136;
          *(int *)(ar4 + 0x74) = _DAT_8c437cf8;
        }
      }
    }
    uVar1 = get_field_4_0d92a8(ar4 + 0x78,ar5_00,ar6,ar7);
    if (((*(uint *)(ar4 + 0x54) <= (uint)(int)(short)uVar1) && (*(int *)(ar4 + 0x70) == 0)) &&
       (*(int *)(ar4 + 0x6e44) == 0)) {
      *(undefined4 *)(ar4 + 0x58) = 5;
    }
    break;
  case 5:
    iVar2 = *(int *)(ar4 + 0x6e28);
    *(int *)(ar4 + 0x6e28) = iVar2 + 10;
    if (0xbae < iVar2 + 10) {
      *(undefined4 *)(ar4 + 0x6e28) = 0xbae;
      uVar1 = *(undefined4 *)(ar4 + 0x6e24);
      pack_release_entry_handle(0x8c2b59d0,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x6e24) = 0xffffffff;
      FUN_8c0d92a0(ar4 + 0x78,uVar1,ar6,ar7);
      *(undefined4 *)(ar4 + 0x58) = 6;
    }
    break;
  case 6:
    if (cVar8 == '\0') {
      dVar4 = (double)CONCAT44(_DAT_8c437cf0,*(undefined4 *)(ar4 + 0x68));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,_DAT_8c437cf0);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x68) = fVar3;
      dVar4 = (double)CONCAT44(_DAT_8c437cf4,*(undefined4 *)(ar4 + 0x6c));
    }
    else {
      *(undefined8 *)(ar4 + 0x68) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      dVar4 = (double)CONCAT44(_DAT_8c437cf8,_DAT_8c437cf4);
    }
    if (cVar7 == '\0') {
      fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar4 + dVar4,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x6c) = fVar3;
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = _DAT_8c437cc4;
    }
    else {
      *(undefined8 *)(ar4 + 0x6c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = _DAT_8c437cc4;
      fVar5 = _DAT_8c437cc8;
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x68) = _DAT_8c437cc4;
      }
      else {
        *(ulonglong *)(ar4 + 0x68) = CONCAT44(_DAT_8c437cc8,_DAT_8c437cc4);
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x6c);
      fVar5 = _DAT_8c437cc8;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x6c);
      fVar3 = _DAT_8c437cc8;
      fVar5 = (*(float *)0x8c437ccc);
    }
    if (cVar7 != '\0' || fVar5 <= fVar3) {
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x6c) = _DAT_8c437cc8;
      }
      else {
        *(ulonglong *)(ar4 + 0x6c) = CONCAT44((*(float *)0x8c437ccc),_DAT_8c437cc8);
      }
    }
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      fVar5 = _DAT_8c437cc4;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = _DAT_8c437cc4;
      fVar5 = _DAT_8c437cc8;
    }
    if (fVar3 == fVar5) {
      if (cVar8 == '\0') {
        fVar3 = *(float *)(ar4 + 0x6c);
        fVar5 = _DAT_8c437cc8;
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x6c);
        fVar3 = _DAT_8c437cc8;
        fVar5 = (*(float *)0x8c437ccc);
      }
      if (fVar3 == fVar5) {
        *(undefined4 *)(ar4 + 0x58) = 0;
      }
    }
  }
  if (*(int *)(ar4 + 0x70) == 1) {
    if (cVar8 == '\0') {
      fVar3 = *(float *)(ar4 + 0x68);
      puVar6 = (undefined1 *)0x3e4ccccd;
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x68);
      fVar3 = 0.2;
      puVar6 = &DAT_8c437cdc;
    }
    if (cVar7 == '\0' && (float)(uint)puVar6 < fVar3) {
      if (cVar8 == '\0') {
        dVar4 = (double)CONCAT44(_DAT_8c437ce8,*(undefined4 *)(ar4 + 0x68));
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x68);
        dVar4 = (double)CONCAT44((*(uint *)0x8c437cec),_DAT_8c437ce8);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x68) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437cdc,*(undefined4 *)(ar4 + 0x5c));
      }
      else {
        *(undefined8 *)(ar4 + 0x68) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x5c);
        dVar4 = (double)CONCAT44(_DAT_8c437ce0,_DAT_8c437cdc);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x5c) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437ce0,*(undefined4 *)(ar4 + 0x60));
      }
      else {
        *(undefined8 *)(ar4 + 0x5c) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 0x60);
        dVar4 = (double)CONCAT44(_DAT_8c437ce4,_DAT_8c437ce0);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 0x60) = fVar3;
        dVar4 = (double)CONCAT44(_DAT_8c437ce4,*(undefined4 *)(ar4 + 100));
      }
      else {
        *(undefined8 *)(ar4 + 0x60) = in_xd0;
        in_xd0 = *(undefined8 *)(ar4 + 100);
        dVar4 = (double)CONCAT44(_DAT_8c437ce8,_DAT_8c437ce4);
      }
      if (cVar7 == '\0') {
        fVar3 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
      }
      else {
        fVar3 = SUB84(dVar4 + dVar4,0);
      }
      if (cVar8 == '\0') {
        *(float *)(ar4 + 100) = fVar3;
        fVar3 = *(float *)(ar4 + 0x68);
        puVar6 = (undefined1 *)0x3e4ccccd;
      }
      else {
        *(undefined8 *)(ar4 + 100) = in_xd0;
        fVar3 = 0.2;
        puVar6 = &DAT_8c437cdc;
      }
      if (cVar7 == '\0' && fVar3 < (float)(uint)puVar6) {
        if (cVar8 == '\0') {
          *(undefined4 *)(ar4 + 0x68) = 0x3e4ccccd;
          *(undefined4 *)(ar4 + 0x5c) = _DAT_8c437cb8;
          *(undefined4 *)(ar4 + 0x60) = _DAT_8c437cbc;
          *(undefined4 *)(ar4 + 100) = _DAT_8c437cc0;
        }
        else {
          *(undefined8 *)(ar4 + 0x68) = 0x8c437cdc3e4ccccd;
          *(ulonglong *)(ar4 + 0x5c) = CONCAT44(_DAT_8c437cbc,_DAT_8c437cb8);
          *(ulonglong *)(ar4 + 0x60) = CONCAT44(_DAT_8c437cc0,_DAT_8c437cbc);
          *(ulonglong *)(ar4 + 100) = CONCAT44(_DAT_8c437cc4,_DAT_8c437cc0);
        }
        *(undefined4 *)(ar4 + 0x70) = 0;
      }
    }
  }
  if ((*(int *)(ar4 + 0x6e44) != 0) &&
     (*(int *)(ar4 + 0x6e44) = *(int *)(ar4 + 0x6e44) + -1, *(int *)(ar4 + 0x6e44) < 0)) {
    *(undefined4 *)(ar4 + 0x6e44) = 0;
  }
  if (0 < *(int *)(ar4 + 0x74)) {
    *(int *)(ar4 + 0x74) = *(int *)(ar4 + 0x74) + -1;
  }
  return *(undefined4 *)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c0d8bf0\n.set _FUN_8c0d8bf0, _FUN_8c0d8bf0_def\n");
