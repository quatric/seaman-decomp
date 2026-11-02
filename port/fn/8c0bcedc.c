#include "../decls.h"
undefined4 FUN_8c0bcedc_def(int ar4,int ar5,undefined4 ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint ar4_00;
  undefined1 *puVar3;
  undefined4 a5;
  undefined1 *puVar4;
  int iVar5;
  code *pcVar6;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r12;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined1 *puVar7;
  double in_dr0;
  double dVar8;
  float in_fr13;
  undefined4 in_fr12;
  undefined8 in_dr14;
  double dVar9;
  float fVar10;
  undefined8 in_xd14;
  bool bVar11;
  undefined4 in_PR;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  char acStack_1e8 [464];
  undefined1 auStack_18 [12];
  undefined1 auStack_c [4];
  undefined8 uStack_8;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_8 = CONCAT44((int)in_dr14,(undefined4)uStack_8);
                    
    (*(uint*)((uchar*)&uStack_8+0)) = (int)((ulonglong)in_dr14 >> 0x20);
    puVar7 = auStack_c;
  }
  else {
    puVar7 = auStack_18;
    uStack_8 = in_xd14;
  }
  *(undefined4 *)(puVar7 + -4) = unaff_r14;
  *(undefined4 *)(puVar7 + -8) = unaff_r13;
  *(undefined4 *)(puVar7 + -0xc) = unaff_r12;
  *(undefined4 *)(puVar7 + -0x10) = unaff_r11;
  *(undefined4 *)(puVar7 + -0x14) = unaff_r10;
  *(undefined4 *)(puVar7 + -0x18) = unaff_r9;
  *(undefined4 *)(puVar7 + -0x1c) = unaff_r8;
  *(undefined4 *)(puVar7 + -0x20) = in_PR;
  if (*(int *)(ar4 + 0x44) == 0x12) {
    return 1;
  }
  uVar1 = FUN_8c0fa2b8(0x8c35468c,ar5,ar6,ar7);
  *(undefined4 *)(puVar7 + -0x2c) = uVar1;
  if (*(int *)(puVar7 + -0x2c) == 1) {
    return 1;
  }
  iVar2 = *(int *)(ar4 + 0x44);
  puVar4 = (undefined1 *)0x14;
  if (0x14 < iVar2) {
    return 1;
  }
  if (iVar2 < 0) {
    return 1;
  }
                    
  switch(iVar2) {
  case 0:
    _DAT_8c4366f8 = 0;
    _DAT_8c43670c = 0;
    _DAT_8c436734 = 9;
    _DAT_8c436730 = 6;
    puVar4 = &DAT_8c43676c;
    DAT_8c43676c = '\0';
    DAT_8c43676d = '\0';
    DAT_8c43676e = '\0';
    DAT_8c43676f = '\0';
    DAT_8c436770 = '\0';
    DAT_8c436771 = '\0';
    FUN_8c0f803c(0x8c35468c,ar5,&DAT_8c43676c,ar7);
    for (iVar2 = 0; iVar2 < 8; iVar2 = iVar2 + 1) {
      puVar4 = &DAT_8c43670c;
      _DAT_8c43670c = (uint)*(byte *)(ar5 + iVar2 + 4) + _DAT_8c43670c;
    }
    _DAT_8c436710 = (uint)*(byte *)(ar5 + 0x2c);
    puVar3 = &DAT_8c436714;
    FUN_8c0b9d14(ar5,&DAT_8c436714,puVar4,ar7);
    uVar1 = get_field_c8_0bced0(ar5,puVar3,puVar4,ar7);
    *(undefined4 *)(puVar7 + -0x30) = uVar1;
    _DAT_8c436720 = *(undefined4 *)(puVar7 + -0x30);
    _DAT_8c436728 = *(undefined4 *)(ar5 + 0xc0);
    _DAT_8c436724 = *(undefined4 *)(ar5 + 0xc4);
    *(ushort *)(puVar7 + -0x1dc) = _DAT_8c436714;
    *(undefined2 *)(puVar7 + -0x1da) = _DAT_8c436716;
    *(undefined2 *)(puVar7 + -0x1d8) = _DAT_8c436718;
    *(undefined2 *)(puVar7 + -0x1d6) = _DAT_8c43671a;
    *(undefined2 *)(puVar7 + -0x1d4) = _DAT_8c43671c;
    uVar1 = FUN_8c0b9afc(ar5,FUN_8c0b9afc,puVar4,ar7,*(undefined4 *)(puVar7 + -0x1dc),
                         *(undefined4 *)(puVar7 + -0x1d8));
    *(undefined4 *)(puVar7 + -0x34) = uVar1;
    _DAT_8c43672c = *(undefined4 *)(puVar7 + -0x34);
    _DAT_8c4366f0 = (int *)(ar5 + 0x30);
    _DAT_8c4366f4 = ar5 + 0x44;
    *(undefined4 *)(ar4 + 0x44) = 1;
  case 1:
    if (*(char *)(_DAT_8c4366f4 + 0x25) < '\x01') {
      if (_DAT_8c43670c == 1) {
        FUN_8c0bf170(ar4,s_INTRO_FIRST_8c13c8f6,&DAT_8c13c025,ar7);
        *(undefined4 *)(ar4 + 0x44) = 0x13;
        *(undefined4 *)(ar4 + 0x14c) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x14c) = 1;
        *(undefined4 *)(ar4 + 0x44) = 2;
override_jmp_8c0bcf7a_case_2:
        FUN_8c1f826c(&DAT_8c436714,puVar7 + -0x24,puVar4,ar7);
        puVar4 = (undefined1 *)0x8c431a68;
        FUN_8c1f826c(&DAT_8c431a7c,puVar7 + -0x28,0x8c431a68,ar7);
        uVar1 = libgcc_divide_helper_010284
                          (*(int *)(puVar7 + -0x24) - *(int *)(puVar7 + -0x28),0xe10,puVar4,ar7);
        *(undefined4 *)(puVar7 + -0x8c) = uVar1;
        ar4_00 = *(uint *)(puVar7 + -0x8c) & 0xffff;
        if ((((((_DAT_8c436714 != _DAT_8c431a7c) || (DAT_8c436716 != DAT_8c431a7e)) ||
              (DAT_8c436717 != DAT_8c431a7f)) || (ar4_00 < 8)) &&
            ((puVar4 = (undefined1 *)0x18, 0x17 < ar4_00 ||
             (((puVar4 = &DAT_8c431a7f, DAT_8c436717 <= DAT_8c431a7f &&
               (ar7 = &DAT_8c436714, DAT_8c436716 <= DAT_8c431a7e)) &&
              (_DAT_8c436714 <= _DAT_8c431a7c)))))) && (0x17 < ar4_00)) {
          uVar1 = libgcc_divide_helper_010284(ar4_00,0x18,puVar4,ar7);
          *(undefined4 *)(puVar7 + -0x90) = uVar1;
        }
        for (iVar2 = 0; iVar2 < 0xb; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0x94) = iVar2;
          puVar4 = (undefined1 *)0x0;
          *(undefined4 *)(&DAT_8c436738 + *(int *)(puVar7 + -0x94) * 4) = 0;
        }
        a5 = 0;
        uVar1 = FUN_8c0bf160(*(undefined4 *)(ar5 + 0x7d8),0,puVar4,ar7);
        *(undefined4 *)(puVar7 + -0x38) = uVar1;
        _DAT_8c436704 = *(int **)(puVar7 + -0x38);
        puVar3 = (undefined1 *)(**(code **)(*_DAT_8c436704 + 0x118))(_DAT_8c436704,a5,uVar1,ar7);
        *(undefined1 **)(puVar7 + -0x3c) = puVar3;
        pcVar6 = (code *)&DAT_8c4366f8;
        _DAT_8c4366f8 = *(int *)(puVar7 + -0x3c);
        puVar4 = (undefined1 *)0x0;
        while (uVar1 = (undefined4)in_dr14, (int)puVar4 < _DAT_8c4366f8) {
          pcVar6 = (code *)(**(code **)(*_DAT_8c436704 + 0xfc))(_DAT_8c436704,puVar4,pcVar6,ar7);
          *(code **)(puVar7 + -0x40) = pcVar6;
          _DAT_8c4366fc = *(int *)(puVar7 + -0x40);
          uVar1 = get_field_28_0bf124(_DAT_8c4366fc,&DAT_8c4366fc,pcVar6,ar7);
          *(undefined4 *)(puVar7 + -0x44) = uVar1;
          if (*(int *)(puVar7 + -0x44) == 1) {
            uVar1 = (**(code **)(*(int *)(_DAT_8c4366fc + 8) + 0x164))
                              (_DAT_8c4366fc,uVar1,pcVar6,ar7);
            *(undefined4 *)(puVar7 + -0x48) = uVar1;
            iVar2 = *(int *)(puVar7 + -0x48);
            _DAT_8c436700 = iVar2;
            pcVar6 = (code *)get_field_13c_028d9c(iVar2,iVar2,pcVar6,ar7);
            *(code **)(puVar7 + -0x4c) = pcVar6;
            switch(*(undefined4 *)(puVar7 + -0x4c)) {
            case 1:
              pcVar6 = FUN_8c02c3a8;
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,FUN_8c02c3a8,ar7);
              *(undefined4 *)(puVar7 + -0x50) = uVar1;
              if (*(int *)(puVar7 + -0x50) == -1) {
                _DAT_8c436738 = _DAT_8c436738 + 1;
              }
              break;
            case 2:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x54) = uVar1;
              if (*(int *)(puVar7 + -0x54) == -1) {
                *(undefined1 **)(puVar7 + -0x98) = &DAT_8c436738;
                pcVar6 = *(code **)(*(int *)(puVar7 + -0x98) + 4);
                *(code **)(*(int *)(puVar7 + -0x98) + 4) = pcVar6 + 1;
              }
              break;
            case 3:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x58) = uVar1;
              if (*(int *)(puVar7 + -0x58) == -1) {
                *(undefined1 **)(puVar7 + -0x9c) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0x9c) + 8) = *(int *)(*(int *)(puVar7 + -0x9c) + 8) + 1;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(undefined4 *)(puVar7 + -0x5c) = uVar1;
                iVar2 = *(int *)(puVar7 + -0x5c);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar2) && (DAT_8c436771 < '\x01')) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                pcVar6 = (code *)&DAT_8c436700;
                uVar1 = FUN_8c02bef8(_DAT_8c436700,FUN_8c02bef8,&DAT_8c436700,ar7);
                *(short *)(puVar7 + -0x1ca) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1ca) == 3) {
                  DAT_8c43676d = DAT_8c43676d + '\x01';
                }
              }
              break;
            case 4:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x60) = uVar1;
              if (*(int *)(puVar7 + -0x60) == -1) {
                pcVar6 = (code *)&DAT_8c436738;
                *(undefined1 **)(puVar7 + -0xa0) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) =
                     *(int *)(*(int *)(puVar7 + -0xa0) + 0xc) + 1;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,&DAT_8c436700,&DAT_8c436738,ar7);
                *(undefined4 *)(puVar7 + -100) = uVar1;
                iVar2 = *(int *)(puVar7 + -100);
                if (iVar2 < 0x5a) {
                  if ((iVar2 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar2) && (DAT_8c436771 < '\x01')) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                uVar1 = FUN_8c02bf8c(_DAT_8c436700,&DAT_8c436700,pcVar6,ar7);
                *(short *)(puVar7 + -0x1cc) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1cc) == 0) {
                  *(undefined1 **)(puVar7 + -0xa4) = &DAT_8c436738;
                  *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) =
                       *(int *)(*(int *)(puVar7 + -0xa4) + 0xc) + -1;
                  *(undefined1 **)(puVar7 + -0xa8) = &DAT_8c436738;
                  *(int *)(*(int *)(puVar7 + -0xa8) + 8) =
                       *(int *)(*(int *)(puVar7 + -0xa8) + 8) + 1;
                  pcVar6 = (code *)(int)DAT_8c43676e;
                  DAT_8c43676e = DAT_8c43676e + '\x01';
                }
              }
              break;
            case 6:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x68) = uVar1;
              if (*(int *)(puVar7 + -0x68) == -1) {
                *(undefined1 **)(puVar7 + -0xac) = &DAT_8c436738;
                *(int *)(*(int *)(puVar7 + -0xac) + 0x10) =
                     *(int *)(*(int *)(puVar7 + -0xac) + 0x10) + 1;
              }
              break;
            case 7:
              uVar1 = FUN_8c02c3a8(_DAT_8c436700,iVar2,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x6c) = uVar1;
              if (*(int *)(puVar7 + -0x6c) == -1) {
                *(undefined1 **)(puVar7 + -0xb0) = &DAT_8c436738;
                iVar2 = *(int *)(*(int *)(puVar7 + -0xb0) + 0x14);
                pcVar6 = (code *)(iVar2 + 1);
                *(code **)(*(int *)(puVar7 + -0xb0) + 0x14) = pcVar6;
                uVar1 = FUN_8c02d3e8(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(undefined4 *)(puVar7 + -0x70) = uVar1;
                iVar5 = *(int *)(puVar7 + -0x70);
                if (iVar5 < 0x5a) {
                  if ((iVar5 < 0x46) || ('\x01' < DAT_8c436771)) {
                    if ((0x31 < iVar5) && (iVar2 = (int)DAT_8c436771, iVar2 < 1)) {
                      DAT_8c436771 = '\x01';
                    }
                  }
                  else {
                    DAT_8c436771 = '\x02';
                  }
                }
                else {
                  DAT_8c436771 = '\x03';
                }
                uVar1 = FUN_8c02bf8c(_DAT_8c436700,iVar2,pcVar6,ar7);
                *(short *)(puVar7 + -0x1ce) = (short)uVar1;
                if (*(short *)(puVar7 + -0x1ce) == 1) {
                  uVar1 = FUN_8c035000(_DAT_8c436700,iVar2,pcVar6,ar7);
                  *(undefined4 *)(puVar7 + -0x74) = uVar1;
                  pcVar6 = *(code **)(puVar7 + -0x74);
                  if (pcVar6 == (code *)0x3) {
                    pcVar6 = (code *)&DAT_8c43676f;
                    iVar2 = DAT_8c43676f + 1;
                    DAT_8c43676f = (char)iVar2;
                  }
                }
                uVar1 = FUN_8c025f68(_DAT_8c436700 + 0x78,iVar2,pcVar6,ar7);
                puVar7[-0x1d0] = (char)uVar1;
                if (puVar7[-0x1d0] == '\x01') {
                  ar7 = &DAT_8c436770;
                  DAT_8c436770 = DAT_8c436770 + '\x01';
                }
              }
              break;
            case 0xc:
            case 0xd:
              uVar1 = (**(code **)(*(int *)(_DAT_8c4366fc + 8) + 0x168))
                                (_DAT_8c4366fc,*(int *)(_DAT_8c4366fc + 8),pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x78) = uVar1;
              _DAT_8c436708 = *(int **)(puVar7 + -0x78);
              uVar1 = (**(code **)(*_DAT_8c436708 + 0x44))(_DAT_8c436708,_DAT_8c436708,pcVar6,ar7);
              *(undefined4 *)(puVar7 + -0x7c) = uVar1;
              DAT_8c43676c = (char)*(undefined4 *)(puVar7 + -0x7c);
            case 0:
            case 5:
              *(undefined1 **)(puVar7 + -0xb4) = &DAT_8c436738;
              pcVar6 = *(code **)(puVar7 + -0xb4);
              *(int *)(*(int *)(puVar7 + -0xb4) + 0x18) = *(int *)(pcVar6 + 0x18) + 1;
            }
          }
          puVar3 = puVar4 + 1;
          puVar4 = puVar3;
        }
        _DAT_8c436754 = 0;
        for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
          *(undefined1 **)(puVar7 + -0xb8) = &DAT_8c436738;
          *(int *)(puVar7 + -0xbc) = iVar2;
          puVar3 = (undefined1 *)(*(int *)(puVar7 + -0xbc) * 4);
          *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) =
               *(int *)(*(int *)(puVar7 + -0xb8) + 0x1c) + *(int *)(&DAT_8c436738 + (int)puVar3);
        }
        _DAT_8c43675c = 0;
        for (iVar2 = 0; iVar2 < 0x14; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0xc0) = iVar2;
          puVar3 = (undefined1 *)0x8c431a68;
          if (*(int *)((*(int *)(puVar7 + -0xc0) * 0x10 - *(int *)(puVar7 + -0xc0)) * 0x10 +
                      -0x73bcd0bc) != -1) {
            *(undefined1 **)(puVar7 + -0xc4) = &DAT_8c436738;
            puVar3 = (undefined1 *)(*(int *)(*(int *)(puVar7 + -0xc4) + 0x24) + 1);
            *(undefined1 **)(*(int *)(puVar7 + -0xc4) + 0x24) = puVar3;
          }
        }
        _DAT_8c436758 = 0;
        for (iVar2 = 0; iVar2 < 10; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -200) = iVar2;
          puVar3 = (undefined1 *)0x27ac;
          if (*(int *)((*(int *)(puVar7 + -200) * 0x10 - *(int *)(puVar7 + -200)) * 0x10 +
                      -0x73bcbdec) != -1) {
            puVar3 = &DAT_8c436738;
            *(undefined1 **)(puVar7 + -0xcc) = &DAT_8c436738;
            *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) =
                 *(int *)(*(int *)(puVar7 + -0xcc) + 0x20) + 1;
          }
        }
        iVar2 = _DAT_8c436754 + _DAT_8c436750;
        _DAT_8c436760 = iVar2 + _DAT_8c436758;
        (**(code **)(*_DAT_8c436704 + 0x17c))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x80) = (int)((ulonglong)in_dr0 >> 0x20);
          in_fr13 = *(float *)(puVar7 + -0x80);
        }
        else {
          *(double *)(puVar7 + -0x80) = in_dr0;
        }
        (**(code **)(*_DAT_8c436704 + 0x178))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x84) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = (double)CONCAT44(*(undefined4 *)(puVar7 + -0x84),uVar1);
        }
        else {
          *(double *)(puVar7 + -0x84) = in_dr0;
          dVar9 = *(double *)(puVar7 + -0x84);
        }
        (**(code **)(*_DAT_8c436704 + 0x188))(_DAT_8c436704,puVar3,iVar2,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)(puVar7 + -0x88) = (int)((ulonglong)in_dr0 >> 0x20);
          dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(puVar7 + -0x88));
        }
        else {
          *(double *)(puVar7 + -0x88) = in_dr0;
        }
        uVar1 = (undefined4)((ulonglong)dVar9 >> 0x20);
        if (DAT_8c431b10 == '\0') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uVar1,0x42c80000);
          }
        }
        else if (DAT_8c431b10 == '\x01') {
          if (in_FPSCR_SZ == '\0') {
            dVar9 = (double)CONCAT44(uVar1,0x42c80000);
          }
        }
        else if ((DAT_8c431b10 == '\x02') && (in_FPSCR_SZ == '\0')) {
          in_fr13 = 100.0;
        }
        if (((_DAT_8c436754 - _DAT_8c436738) - _DAT_8c43673c != _DAT_8c436748) &&
           ((*_DAT_8c4366f0 < 0x18 || (0x1e < *_DAT_8c4366f0)))) {
          if (DAT_8c436771 == '\x01') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 3;
          }
          else if (DAT_8c436771 == '\x02') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 2;
          }
          else if (DAT_8c436771 == '\x03') {
            _DAT_8c436730 = 4;
            _DAT_8c436734 = 1;
          }
        }
        for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
          *(int *)(puVar7 + -0xd0) = iVar2;
          if ((0x1f < _DAT_8c4366f0[*(int *)(puVar7 + -0xd0)]) &&
             (*(int *)(puVar7 + -0xd4) = iVar2, _DAT_8c4366f0[*(int *)(puVar7 + -0xd4)] < 0x25)) {
            if (in_FPSCR_SZ == '\0') {
              in_dr0 = (double)CONCAT44(0x42200000,SUB84(in_dr0,0));
            }
            else {
              in_dr0 = -1.3550198152570648e-249;
            }
            if (in_FPSCR_PR == '\0') {
              bVar11 = SUB84(dVar9,0) < (float)((ulonglong)in_dr0 >> 0x20);
            }
            else {
              bVar11 = dVar9 < in_dr0;
            }
            if ((bVar11) && (3 < _DAT_8c436734)) {
              _DAT_8c436730 = 3;
              _DAT_8c436734 = 3;
            }
          }
        }
        if (in_FPSCR_SZ == '\0') {
          dVar8 = (double)CONCAT44(0x42840000,SUB84(in_dr0,0));
        }
        else {
          dVar8 = 4294968360.25;
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = in_fr13 < (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          bVar11 = (double)CONCAT44(in_fr12,in_fr13) < dVar8;
        }
        if ((bVar11) && (2 < _DAT_8c436734)) {
          _DAT_8c436730 = 2;
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41f00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -3.3212364735250305e+154;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = in_fr13 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = (double)CONCAT44(in_fr12,in_fr13) < dVar8;
          }
          if (bVar11) {
            _DAT_8c436734 = 2;
          }
          else {
            _DAT_8c436734 = 3;
          }
        }
        fVar10 = (float)((ulonglong)dVar9 >> 0x20);
        if ((_DAT_8c436748 < 1) && (_DAT_8c43674c < 1)) {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41700000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550198123953496e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550837490964348e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 0;
          }
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41a00000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -1.3550155507811096e-249;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 1;
          }
          if (in_FPSCR_SZ == '\0') {
            dVar8 = (double)CONCAT44(0x41c80000,SUB84(dVar8,0));
          }
          else {
            dVar8 = -4.808587738876579e+231;
          }
          if (in_FPSCR_PR == '\0') {
            bVar11 = fVar10 < (float)((ulonglong)dVar8 >> 0x20);
          }
          else {
            bVar11 = dVar9 < dVar8;
          }
          if ((!bVar11) && (2 < _DAT_8c436734)) {
            _DAT_8c436734 = 2;
            _DAT_8c436730 = 0;
          }
        }
        if (in_FPSCR_PR == '\0') {
          bVar11 = fVar10 < 1.0;
        }
        else {
          bVar11 = dVar9 < (double)CONCAT44(0x3f800000,SUB84(dVar8,0));
        }
        if ((bVar11) && (1 < _DAT_8c436734)) {
          _DAT_8c436730 = 1;
          _DAT_8c436734 = 1;
        }
        if ('\0' < DAT_8c436770) {
          _DAT_8c436730 = 5;
          _DAT_8c436734 = 2;
        }
        *(undefined4 *)(ar4 + 0x44) = 3;
override_jmp_8c0bcf7a_case_3:
        if ((((*_DAT_8c4366f0 == 5) || (*_DAT_8c4366f0 == 6)) || (*_DAT_8c4366f0 == 7)) &&
           ((DAT_8c43676c < '\x04' && (_DAT_8c436738 == 0)))) {
          FUN_8c0bf170(ar4,&DAT_8c13c902,&DAT_8c13c907,ar7);
          *(int *)(puVar7 + -0xd8) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xd8) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else if (((*_DAT_8c4366f0 == 0x25) ||
                 ((_DAT_8c4366f0[1] == 0x25 || (_DAT_8c4366f0[2] == 0x25)))) &&
                (*(char *)(_DAT_8c4366f4 + 0x25) == '\0')) {
          FUN_8c0bf170(ar4,s_ENDING_8c13c90c,&DAT_8c13c025,ar7);
          *(int *)(puVar7 + -0xdc) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xdc) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else if ((*_DAT_8c4366f0 < 4) && (_DAT_8c43670c == 2)) {
          FUN_8c0bf170(ar4,s_NOACTION_8c13c913,&DAT_8c13c025,ar7);
          *(undefined4 *)(ar4 + 0x44) = 0x10;
        }
        else if (_DAT_8c436760 == 0) {
          FUN_8c0bf170(ar4,&DAT_8c13c902,&DAT_8c13c91c,ar7);
          *(int *)(puVar7 + -0xe0) = _DAT_8c4366f4;
          *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) =
               *(char *)(*(int *)(puVar7 + -0xe0) + 0x25) + '\x01';
          *(undefined4 *)(ar4 + 0x44) = 0x13;
        }
        else {
          puVar4 = (undefined1 *)0x44;
          *(undefined4 *)(ar4 + 0x44) = 4;
override_jmp_8c0bcf7a_case_4:
          FUN_8c0fa5bc(0x8c35468c,_DAT_8c436720,puVar4,ar7);
          FUN_8c0fa5f0(0x8c35468c,_DAT_8c436710,puVar4,ar7);
          FUN_8c0fa624(0x8c35468c,_DAT_8c43672c,0x8c35468c,ar7);
          FUN_8c0bf170(ar4,s_INTRO_NORMAL_8c13c920,&DAT_8c13c025,ar7);
          *(undefined4 *)(ar4 + 0x44) = 5;
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 0x44) = 0x13;
      *(undefined4 *)(ar4 + 0x14c) = 3;
    }
    break;
  case 2:
    goto override_jmp_8c0bcf7a_case_2;
  case 3:
    goto override_jmp_8c0bcf7a_case_3;
  case 4:
    goto override_jmp_8c0bcf7a_case_4;
  case 5:
    *(undefined4 *)(ar4 + 0x44) = 6;
    _DAT_8c436764 = 4;
    _DAT_8c436768 = 0;
    for (iVar2 = 4; -1 < iVar2; iVar2 = iVar2 + -1) {
      *(int *)(puVar7 + -0xe4) = iVar2;
      if (0x29 < _DAT_8c4366f0[*(int *)(puVar7 + -0xe4)]) {
        *(int *)(puVar7 + -0xe8) = iVar2;
        if (_DAT_8c4366f0[*(int *)(puVar7 + -0xe8)] < 0x30) {
          *(int *)(puVar7 + -0xec) = iVar2;
          FUN_8c0fa5bc(0x8c35468c,_DAT_8c4366f0[*(int *)(puVar7 + -0xec)],*(int *)(puVar7 + -0xe8),
                       ar7);
          FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,&DAT_8c13c902,ar7);
          for (iVar2 = 0; iVar2 < 5; iVar2 = iVar2 + 1) {
            *(int *)(puVar7 + -0xf0) = iVar2;
            if ((_DAT_8c4366f0[*(int *)(puVar7 + -0xf0)] < 0x2a) ||
               (*(int *)(puVar7 + -0xf4) = iVar2, 0x2f < _DAT_8c4366f0[*(int *)(puVar7 + -0xf4)])) {
              *(int *)(puVar7 + -0x100) = iVar2;
              *(int *)(puVar7 + -0xfc) = _DAT_8c4366f0[*(int *)(puVar7 + -0x100)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0xfc) = **(char **)(puVar7 + -0xfc) + '\x01';
            }
            else {
              *(int *)(puVar7 + -0xf8) = iVar2;
              _DAT_8c4366f0[*(int *)(puVar7 + -0xf8)] = 0;
            }
          }
          *(undefined4 *)(ar4 + 0x44) = 0x10;
          return 1;
        }
      }
    }
    break;
  case 6:
    for (; iVar2 = _DAT_8c436764, -1 < _DAT_8c436764; _DAT_8c436764 = _DAT_8c436764 + -1) {
      *(int *)(puVar7 + -0x104) = _DAT_8c436764;
      if ((4 < _DAT_8c4366f0[*(int *)(puVar7 + -0x104)]) &&
         (*(int *)(puVar7 + -0x108) = _DAT_8c436764,
         *(char *)(_DAT_8c4366f4 + _DAT_8c4366f0[*(int *)(puVar7 + -0x108)]) == '\0')) {
        *(int *)(puVar7 + -0x10c) = _DAT_8c436764;
        if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x10c)] == 6) ||
            ((*(int *)(puVar7 + -0x110) = _DAT_8c436764,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x110)] == 7 ||
             (*(int *)(puVar7 + -0x114) = _DAT_8c436764,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x114)] == 8)))) ||
           (*(int *)(puVar7 + -0x118) = _DAT_8c436764,
           _DAT_8c4366f0[*(int *)(puVar7 + -0x118)] == 10)) {
          iVar5 = 1;
          if (_DAT_8c436764 != 1) {
            if (_DAT_8c436764 != 2) {
              if (_DAT_8c436764 != 3) {
                if (_DAT_8c436764 != 4) goto LAB_8c0be428;
                *(undefined4 *)(puVar7 + -0x11c) = 4;
                *(undefined4 *)(puVar7 + -0x120) = 3;
                if (_DAT_8c4366f0[*(int *)(puVar7 + -0x11c)] + 1 ==
                    _DAT_8c4366f0[*(int *)(puVar7 + -0x120)]) {
                  *(undefined4 *)(puVar7 + -0x128) = 4;
                  *(int *)(puVar7 + -0x124) =
                       _DAT_8c4366f0[*(int *)(puVar7 + -0x128)] + _DAT_8c4366f4;
                  **(char **)(puVar7 + -0x124) = **(char **)(puVar7 + -0x124) + '\x01';
                  goto LAB_8c0be818;
                }
                iVar5 = 2;
              }
              *(int *)(puVar7 + -300) = _DAT_8c436764;
              *(int *)(puVar7 + -0x130) = _DAT_8c436764 - iVar5;
              if (_DAT_8c4366f0[*(int *)(puVar7 + -300)] + 1 ==
                  _DAT_8c4366f0[*(int *)(puVar7 + -0x130)]) {
                *(int *)(puVar7 + -0x138) = _DAT_8c436764;
                *(int *)(puVar7 + -0x134) = _DAT_8c4366f0[*(int *)(puVar7 + -0x138)] + _DAT_8c4366f4
                ;
                ar7 = *(char **)(puVar7 + -0x134);
                **(char **)(puVar7 + -0x134) = *ar7 + '\x01';
                goto LAB_8c0be818;
              }
              iVar5 = iVar5 + 1;
            }
            *(int *)(puVar7 + -0x13c) = _DAT_8c436764;
            *(int *)(puVar7 + -0x140) = _DAT_8c436764 - iVar5;
            if (_DAT_8c4366f0[*(int *)(puVar7 + -0x13c)] + 1 ==
                _DAT_8c4366f0[*(int *)(puVar7 + -0x140)]) {
              *(int *)(puVar7 + -0x148) = _DAT_8c436764;
              *(int *)(puVar7 + -0x144) = _DAT_8c4366f0[*(int *)(puVar7 + -0x148)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0x144) = **(char **)(puVar7 + -0x144) + '\x01';
              goto LAB_8c0be818;
            }
            iVar5 = iVar5 + 1;
          }
          *(int *)(puVar7 + -0x14c) = _DAT_8c436764;
          *(int *)(puVar7 + -0x150) = _DAT_8c436764 - iVar5;
          if (_DAT_8c4366f0[*(int *)(puVar7 + -0x14c)] + 1 ==
              _DAT_8c4366f0[*(int *)(puVar7 + -0x150)]) {
            *(int *)(puVar7 + -0x158) = _DAT_8c436764;
            *(int *)(puVar7 + -0x154) = _DAT_8c4366f0[*(int *)(puVar7 + -0x158)] + _DAT_8c4366f4;
            **(char **)(puVar7 + -0x154) = **(char **)(puVar7 + -0x154) + '\x01';
            goto LAB_8c0be818;
          }
        }
LAB_8c0be428:
        *(int *)(puVar7 + -0x15c) = _DAT_8c436764;
        if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x15c)] == 5) && (2 < _DAT_8c436764)) &&
           ((*_DAT_8c4366f0 == 8 ||
            (((_DAT_8c4366f0[1] == 8 || (*_DAT_8c4366f0 == 9)) || (_DAT_8c4366f0[1] == 9)))))) {
          *(int *)(puVar7 + -0x164) = _DAT_8c436764;
          *(int *)(puVar7 + -0x160) = _DAT_8c4366f0[*(int *)(puVar7 + -0x164)] + _DAT_8c4366f4;
          **(char **)(puVar7 + -0x160) = **(char **)(puVar7 + -0x160) + '\x01';
        }
        else {
          *(int *)(puVar7 + -0x168) = _DAT_8c436764;
          if (((_DAT_8c4366f0[*(int *)(puVar7 + -0x168)] == 7) && (0 < _DAT_8c436764)) &&
             (*(int *)(puVar7 + -0x16c) = _DAT_8c436764 + -1,
             _DAT_8c4366f0[*(int *)(puVar7 + -0x16c)] == 9)) {
            *(int *)(puVar7 + -0x174) = _DAT_8c436764;
            *(int *)(puVar7 + -0x170) = _DAT_8c4366f0[*(int *)(puVar7 + -0x174)] + _DAT_8c4366f4;
            **(char **)(puVar7 + -0x170) = **(char **)(puVar7 + -0x170) + '\x01';
          }
          else {
            *(int *)(puVar7 + -0x178) = _DAT_8c436764;
            if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x178)] == 0xe) &&
               ('\0' < *(char *)(_DAT_8c4366f4 + 0xf))) {
              *(int *)(puVar7 + -0x180) = _DAT_8c436764;
              *(int *)(puVar7 + -0x17c) = _DAT_8c4366f0[*(int *)(puVar7 + -0x180)] + _DAT_8c4366f4;
              **(char **)(puVar7 + -0x17c) = **(char **)(puVar7 + -0x17c) + '\x01';
            }
            else {
              *(int *)(puVar7 + -0x184) = _DAT_8c436764;
              if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x184)] == 0xd) && (_DAT_8c436740 == 0)) {
                *(int *)(puVar7 + -0x18c) = _DAT_8c436764;
                *(int *)(puVar7 + -0x188) = _DAT_8c4366f0[*(int *)(puVar7 + -0x18c)] + _DAT_8c4366f4
                ;
                **(char **)(puVar7 + -0x188) = **(char **)(puVar7 + -0x188) + '\x01';
              }
              else {
                *(int *)(puVar7 + -400) = _DAT_8c436764;
                if ((_DAT_8c4366f0[*(int *)(puVar7 + -400)] == 0xf) && (2 < _DAT_8c43673c)) {
                  *(int *)(puVar7 + -0x198) = _DAT_8c436764;
                  *(int *)(puVar7 + -0x194) =
                       _DAT_8c4366f0[*(int *)(puVar7 + -0x198)] + _DAT_8c4366f4;
                  **(char **)(puVar7 + -0x194) = **(char **)(puVar7 + -0x194) + '\x01';
                }
                else {
                  *(int *)(puVar7 + -0x19c) = _DAT_8c436764;
                  if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x19c)] == 0x10) &&
                     (*(char *)(_DAT_8c4366f4 + 0xc) == '\0')) {
                    *(int *)(puVar7 + -0x1a4) = _DAT_8c436764;
                    *(int *)(puVar7 + -0x1a0) =
                         _DAT_8c4366f0[*(int *)(puVar7 + -0x1a4)] + _DAT_8c4366f4;
                    **(char **)(puVar7 + -0x1a0) = **(char **)(puVar7 + -0x1a0) + '\x01';
                  }
                  else {
                    *(int *)(puVar7 + -0x1a8) = _DAT_8c436764;
                    if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x1a8)] != 0x12) ||
                       (DAT_8c43676e < '\x01')) {
                      *(int *)(puVar7 + -0x1ac) = _DAT_8c436764;
                      iVar5 = *(int *)(puVar7 + -0x1ac);
                      FUN_8c0fa5bc(0x8c35468c,_DAT_8c4366f0[iVar5],iVar5,ar7);
                      *(int *)(puVar7 + -0x1b0) = iVar2;
                      if (_DAT_8c4366f0[*(int *)(puVar7 + -0x1b0)] == 0x23) {
                        *(int *)(puVar7 + -0x1b4) = iVar2 + -1;
                        if ((_DAT_8c4366f0[*(int *)(puVar7 + -0x1b4)] == 0x22) ||
                           (*(int *)(puVar7 + -0x1b8) = iVar2 + -2,
                           _DAT_8c4366f0[*(int *)(puVar7 + -0x1b8)] == 0x22)) {
                          FUN_8c0fa5bc(0x8c35468c,0x23,iVar5,ar7);
                          *(int *)(puVar7 + -0x1bc) = _DAT_8c4366f4;
                          *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) =
                               *(char *)(*(int *)(puVar7 + -0x1bc) + 0x23) + '\x01';
                        }
                        else {
                          FUN_8c0fa5bc(0x8c35468c,0x16,0x8c35468c,ar7);
                        }
                      }
                      if (_DAT_8c436768 == 0) {
                        FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,s_GREET_8c13c934,FUN_8c0bf170);
                      }
                      else {
                        FUN_8c0bf170(ar4,s_REVIEW_8c13c92d,s_EVENT_8c13c93a,ar7);
                      }
                      *(int *)(puVar7 + -0x1c4) = iVar2;
                      *(int *)(puVar7 + -0x1c0) =
                           _DAT_8c4366f0[*(int *)(puVar7 + -0x1c4)] + _DAT_8c4366f4;
                      **(char **)(puVar7 + -0x1c0) = **(char **)(puVar7 + -0x1c0) + '\x01';
                      _DAT_8c436764 = _DAT_8c436764 + -1;
                      _DAT_8c436768 = 1;
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_8c0be818:
    }
    *(undefined4 *)(ar4 + 0x44) = 7;
    break;
  case 7:
    if (_DAT_8c436754 == 0) {
      *(undefined4 *)(ar4 + 0x44) = 0xf;
    }
    else if (*(char *)(_DAT_8c4366f4 + 5) == '\0') {
      *(undefined4 *)(ar4 + 0x44) = 0xf;
    }
    else {
      if ((((0 < _DAT_8c43674c) && (*(char *)(_DAT_8c4366f4 + 0x1e) == '\0')) &&
          (*(char *)(_DAT_8c4366f4 + 0x1f) == '\0')) && (*(char *)(_DAT_8c4366f4 + 0x20) == '\0')) {
        _DAT_8c436748 = _DAT_8c43674c;
        _DAT_8c43674c = 0;
      }
      FUN_8c0bf170(ar4,s_STATE_INTRO_8c13c940,&DAT_8c13c025,ar7);
      *(undefined4 *)(ar4 + 0x44) = 8;
    }
    break;
  case 8:
    if (0 < _DAT_8c436738) {
      FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436738,FUN_8c0fa5f0,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 9;
    break;
  case 9:
    if (0 < _DAT_8c436740 + _DAT_8c43673c) {
      FUN_8c0fa5bc(0x8c35468c,1,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436740 + _DAT_8c43673c,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 10;
    break;
  case 10:
    if (0 < _DAT_8c436744) {
      pcVar6 = FUN_8c0fa5bc;
      FUN_8c0fa5bc(0x8c35468c,2,FUN_8c0fa5bc,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436744,pcVar6,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xb;
    break;
  case 0xb:
    if (0 < _DAT_8c436748) {
      puVar4 = &DAT_8c4366f4;
      if (*(char *)(_DAT_8c4366f4 + 0x1e) == '\0') {
        FUN_8c0fa5bc(0x8c35468c,3,&DAT_8c4366f4,ar7);
        FUN_8c0fa5f0(0x8c35468c,_DAT_8c436748,puVar4,ar7);
        FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
      }
      else {
        _DAT_8c43674c = _DAT_8c436748;
        _DAT_8c436748 = 0;
      }
    }
    *(undefined4 *)(ar4 + 0x44) = 0xc;
    break;
  case 0xc:
    if (0 < _DAT_8c43674c) {
      FUN_8c0fa5bc(0x8c35468c,4,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c43674c,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_CHARA_8c13c94c,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xd;
    break;
  case 0xd:
    if (0 < _DAT_8c436754) {
      FUN_8c0bf170(ar4,s_STATE_ALL_8c13c958,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xe;
    break;
  case 0xe:
    if ((_DAT_8c436734 < 1) || (7 < _DAT_8c436734)) {
      FUN_8c0fa5bc(0x8c35468c,0,0x14,ar7);
      if (in_FPSCR_SZ == '\0') {
        puVar3 = (undefined1 *)0x42840000;
        fVar10 = _DAT_8c431c18;
      }
      else {
        fVar10 = 66.0;
        puVar3 = &DAT_8c4366f0;
      }
      if (((in_FPSCR_PR != '\0' || (float)(uint)puVar3 <= fVar10) || (*_DAT_8c4366f0 < 5)) ||
         (0x17 < *_DAT_8c4366f0)) {
        if (((_DAT_8c43675c < 3) && (0xf < *_DAT_8c4366f0)) &&
           ((*_DAT_8c4366f0 < 0x25 &&
            (puVar4 = (undefined1 *)(int)*(char *)(_DAT_8c4366f4 + 0xc),
            '\0' < *(char *)(_DAT_8c4366f4 + 0xc))))) {
          FUN_8c0fa5bc(0x8c35468c,2,puVar4,ar7);
        }
        else {
          if (in_FPSCR_SZ == '\0') {
            puVar3 = (undefined1 *)0x42200000;
            fVar10 = _DAT_8c432f24;
          }
          else {
            fVar10 = 40.0;
            puVar3 = &DAT_8c4366f0;
          }
          if (((in_FPSCR_PR == '\0' && fVar10 < (float)(uint)puVar3) &&
              (ar7 = (char *)*_DAT_8c4366f0, 0xf < (int)ar7)) &&
             ((*_DAT_8c4366f0 < 0x25 && ('\0' < *(char *)(_DAT_8c4366f4 + 0xc))))) {
            FUN_8c0fa5bc(0x8c35468c,3,puVar4,ar7);
          }
        }
      }
      else {
        FUN_8c0fa5bc(0x8c35468c,1,puVar4,ar7);
      }
      FUN_8c0bf170(ar4,s_STATE_GOOD_8c13c96f,&DAT_8c13c025,ar7);
    }
    else {
      FUN_8c0fa5bc(0x8c35468c,_DAT_8c436730,0x14,ar7);
      FUN_8c0fa5f0(0x8c35468c,_DAT_8c436734,puVar4,ar7);
      FUN_8c0bf170(ar4,s_STATE_DAMAGE_8c13c962,&DAT_8c13c025,ar7);
    }
    *(undefined4 *)(ar4 + 0x44) = 0xf;
    break;
  case 0xf:
    *(undefined4 *)(ar4 + 0x44) = 0x10;
    pcVar6 = FUN_8c0fa5bc;
    FUN_8c0fa5bc(0x8c35468c,*_DAT_8c4366f0,FUN_8c0fa5bc,ar7);
    switch(*_DAT_8c4366f0) {
    case 4:
    case 5:
    case 6:
    case 7:
      if ('\x03' < DAT_8c43676c) {
        FUN_8c0fa5bc(0x8c35468c,8,&DAT_8c43676c,ar7);
      }
      break;
    case 8:
    case 9:
    case 0xc:
    case 0x14:
    case 0x18:
    case 0x19:
    case 0x21:
      break;
    default:
      if ((DAT_8c43676e < '\x01') || (*(char *)(_DAT_8c4366f4 + 0x12) != '\0')) {
        if (DAT_8c43676f < '\x01') {
          return 1;
        }
        if (DAT_8c436770 != '\0') {
          return 1;
        }
        if (*(char *)(_DAT_8c4366f4 + 0x21) != '\0') {
          return 1;
        }
        if (_DAT_8c43674c == 1) {
          return 1;
        }
        FUN_8c0fa5bc(0x8c35468c,0x33,(char *)(_DAT_8c4366f4 + 0x21),ar7);
      }
      else {
        FUN_8c0fa5bc(0x8c35468c,0x32,pcVar6,ar7);
      }
      break;
    case 0xf:
      if (DAT_8c43676d < '\x01') {
        return 1;
      }
      if (*(char *)(_DAT_8c4366f4 + 0xc) != '\0') {
        return 1;
      }
      break;
    case 0x10:
    case 0x11:
      if ('\x01' < *(char *)(_DAT_8c4366f4 + 0x43)) {
        return 1;
      }
      if (_DAT_8c436740 != 2) {
        return 1;
      }
      if (*(char *)(_DAT_8c4366f4 + 0xd) != '\0') {
        return 1;
      }
      *(int *)(puVar7 + -0x1c8) = _DAT_8c4366f4;
      *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) =
           *(char *)(*(int *)(puVar7 + -0x1c8) + 0x43) + '\x01';
      break;
    case 0x13:
      if ('\0' < *(char *)(_DAT_8c4366f4 + 0x14)) {
        return 1;
      }
      if (_DAT_8c436744 == 1) {
        return 1;
      }
      break;
    case 0x1f:
      if ('\0' < *(char *)(_DAT_8c4366f4 + 0x20)) {
        return 1;
      }
    }
    FUN_8c0bf170(ar4,s_HIGHLIGHT_8c13c97a,&DAT_8c13c025,ar7);
    break;
  case 0x10:
    FUN_8c0bf170(ar4,s_FINISH_8c13c984,&DAT_8c13c025,ar7);
    *(undefined4 *)(ar4 + 0x44) = 0x13;
    *(undefined4 *)(ar4 + 0x14c) = 2;
    break;
  case 0x13:
    if ((*(int *)(ar4 + 0x14c) == 0) && (_DAT_8c4362f0 != 0xe)) {
      *(undefined4 *)(ar4 + 0x44) = 1;
    }
    else {
      FUN_8c0bf170(ar4,&DAT_8c13c98b,&DAT_8c13c025,ar7);
      *(undefined4 *)(ar4 + 0x44) = 0x14;
      *(undefined4 *)(ar4 + 0x14c) = 2;
    }
    break;
  case 0x14:
    *(undefined4 *)(ar4 + 0x44) = 0x12;
    *(undefined4 *)(ar4 + 0x14c) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c0bcedc\n.set _FUN_8c0bcedc, _FUN_8c0bcedc_def\n");
