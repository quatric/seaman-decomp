#include "../decls.h"
undefined4 s_WARNING_NOPAD_0c2f08_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  float *pfVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *ar5_00;
  undefined4 uVar8;
  int ar6_00;
  float fVar9;
  double in_dr0;
  undefined8 in_dr4;
  undefined8 in_xd0;
  char cVar10;
  char cVar11;
  float fStack_50;
  undefined8 auStack_4c [3];
  undefined1 auStack_30 [24];
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar7 = auStack_30;
  puVar5 = &DAT_8c13bfb0;
  iVar4 = 10;
  do {
    puVar6 = puVar5 + 1;
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 2;
    puVar7[1] = *puVar6;
    puVar7 = puVar7 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  if (DAT_8c436874 == '\0') {
    _DAT_8c436870 = 0;
    DAT_8c436874 = '\x01';
  }
  if (DAT_8c43687c == '\0') {
    _DAT_8c436878 = 0;
    DAT_8c43687c = '\x01';
  }
  if (DAT_8c436884 == '\0') {
    _DAT_8c436880 = (char *)0xb;
    DAT_8c436884 = '\x01';
  }
  if (DAT_8c43688c == '\0') {
    _DAT_8c436888 = 0x1f;
    DAT_8c43688c = '\x01';
  }
  if (DAT_8c436894 == '\0') {
    _DAT_8c436890 = 0xffffffff;
    DAT_8c436894 = '\x01';
  }
  if (ar5 == (char *)0xb) {
    iVar4 = FUN_8c021f18(0x8c2b59d0,_DAT_8c436890,ar6,ar7);
    if (iVar4 != 2) {
      pack_release_entry_handle(0x8c2b59d0,_DAT_8c436890,ar6,ar7);
      _DAT_8c436890 = 0xffffffff;
    }
    uVar2 = 0;
    _DAT_8c4365ec = 0;
    _DAT_8c436880 = ar5;
  }
  else {
    uVar2 = 4;
    ar6_00 = ar4 + 0x164;
    FUN_8c016318(ar4 + 0xc,ar4 + 0x34,ar6_00,4,ar6);
    iVar4 = ar4 + 0x174;
    FUN_8c016324(ar4 + 0xc,iVar4,ar6_00,uVar2);
    FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2);
    ar5_00 = ar5;
    FUN_8c014a94(ar4 + 4,ar5,ar6_00,uVar2);
    FUN_8c01636c(ar4 + 0xc,ar5_00,ar6_00,uVar2);
    uVar8 = SUB84(in_dr0,0);
    switch((uint)ar5) {
    case 0x1:
      _DAT_8c436870 = 0x113;
      _DAT_8c436878 = 0x91;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3aac(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOPAD_8c13cbb4;
      strcpy(auStack_30,s_WARNING_NOPAD_8c13cbb4,ar6_00,uVar2,ar6);
      break;
    case 0x2:
      _DAT_8c436870 = 0x114;
      _DAT_8c436878 = 0xeb;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(auStack_30,s_WARNING_NOVMS_8c13cbd0,ar6_00,uVar2,ar6);
      break;
    case 0x3:
      _DAT_8c436870 = 0xd5;
      _DAT_8c436878 = 0xe2;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(auStack_30,s_WARNING_NOTFOUND_8c13cbde,ar6_00,uVar2,ar6);
      break;
    case 0x4:
      _DAT_8c436870 = 0xda;
      _DAT_8c436878 = 0xec;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3b10(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOMIC_8c13cbc2;
      strcpy(auStack_30,s_WARNING_NOMIC_8c13cbc2,ar6_00,uVar2,ar6);
      break;
    case 0x5:
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOTFOUND_8c13cbde;
      strcpy(auStack_30,s_WARNING_NOTFOUND_8c13cbde,ar6_00,uVar2,ar6);
      break;
    case 0x6:
      _DAT_8c436870 = 0xa7;
      _DAT_8c436878 = 0xc6;
      if (cVar11 == '\0') {
        in_dr0 = (double)CONCAT44(0x41c80000,uVar8);
      }
      else {
        in_dr0 = 2.882304467837911e+17;
      }
      FUN_8c0c3a48(ar4,ar5_00,ar6_00,uVar2);
      ar5_00 = s_WARNING_NOVMS_8c13cbd0;
      strcpy(auStack_30,s_WARNING_NOVMS_8c13cbd0,ar6_00,uVar2,ar6);
    }
    if ((((ar5 == (char *)0x1) || (ar5 == (char *)0x4)) || (ar5 == (char *)0x2)) ||
       ((ar5 == (char *)0x6 || (ar5 == (char *)0x3)))) {
      uVar2 = libgcc_divide_helper_010284(ar6,6,ar6_00,uVar2);
      sVar1 = (short)uVar2 + 1;
      *(short *)(ar4 + 0x184) = sVar1 * 0x10;
      *(short *)(ar4 + 0x188) = sVar1 * 0x10;
      *(short *)(ar4 + 0x18c) = sVar1 * 0x10 + 0xf;
      *(short *)(ar4 + 400) = sVar1 * 0x10 + 0xf;
      *(undefined2 *)(ar4 + 0x186) = 0x5f;
      *(undefined2 *)(ar4 + 0x18a) = 0x40;
      *(undefined2 *)(ar4 + 0x18e) = 0x40;
      *(undefined2 *)(ar4 + 0x192) = 0x5f;
      for (iVar4 = 0; fVar9 = SUB84(in_dr0,0), iVar4 < 4; iVar4 = iVar4 + 1) {
        pfVar3 = (float *)(ar4 + iVar4 * 8 + 0x54);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar3;
        }
        if (cVar10 == '\0') {
          fVar9 = fVar9 + (float)((ulonglong)in_dr4 >> 0x20) + (float)_DAT_8c436870;
        }
        else {
          fVar9 = SUB84((double)_DAT_8c436870 + (double)_DAT_8c436870,0);
        }
        if (cVar11 == '\0') {
          (&fStack_50)[iVar4 * 2] = fVar9;
        }
        else {
          *(undefined8 *)(&fStack_50 + iVar4 * 2) = in_xd0;
        }
        pfVar3 = (float *)(ar4 + iVar4 * 8 + 0x58);
        if (cVar11 == '\0') {
          fVar9 = *pfVar3;
        }
        else {
          in_xd0 = *(undefined8 *)pfVar3;
        }
        if (cVar10 == '\0') {
          in_dr0 = (double)CONCAT44((float)_DAT_8c436878,
                                    fVar9 + (float)in_dr4 + (float)_DAT_8c436878);
        }
        else {
          in_dr0 = (double)_DAT_8c436878 + (double)_DAT_8c436878;
        }
        if (cVar11 == '\0') {
          *(int *)(auStack_4c + iVar4) = SUB84(in_dr0,0);
        }
        else {
          auStack_4c[iVar4] = in_xd0;
        }
      }
      uVar2 = 4;
      ar6_00 = ar4 + 0x164;
      FUN_8c016318(ar4 + 0x20,&fStack_50,ar6_00,4,ar6);
      iVar4 = ar4 + 0x184;
      FUN_8c016324(ar4 + 0x20,iVar4,ar6_00,uVar2);
      FUN_8c01538c(ar4 + 4,iVar4,ar6_00,uVar2);
      ar5_00 = (char *)0x0;
      FUN_8c014a94(ar4 + 4,0,ar6_00,uVar2);
      FUN_8c016340(ar4 + 0x20,ar5_00,ar6_00,uVar2);
    }
    FUN_8c0c453c(ar4,ar5_00,ar6_00,uVar2);
    if (_DAT_8c436880 == ar5) {
      uVar2 = FUN_8c021d90(0x8c2b59d0,_DAT_8c436890,0,0);
    }
    else {
      iVar4 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,uVar2);
      if (iVar4 == 1) {
        FUN_8c0f8214(0x8c35468c,ar5_00,ar6_00,uVar2);
      }
      uVar8 = _DAT_8c436890;
      iVar4 = FUN_8c021f18(0x8c2b59d0,_DAT_8c436890,ar6_00,uVar2);
      if (iVar4 != 2) {
        uVar8 = _DAT_8c436890;
        pack_release_entry_handle(0x8c2b59d0,_DAT_8c436890,ar6_00,uVar2);
        _DAT_8c436890 = 0xffffffff;
      }
      FUN_8c021d4c(0x8c2b59d0,uVar8,ar6_00,uVar2);
      _DAT_8c436880 = ar5;
      _DAT_8c436890 = pack_acquire_entry_handle(0x8c2b59d0,auStack_30,ar6_00,uVar2);
      uVar2 = FUN_8c021d90(0x8c2b59d0,_DAT_8c436890,0,0);
    }
  }
  return uVar2;
}

__asm__(".globl _s_WARNING_NOPAD_0c2f08\n.set _s_WARNING_NOPAD_0c2f08, _s_WARNING_NOPAD_0c2f08_def\n");
