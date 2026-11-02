#include "../decls.h"
undefined4 s_BUGBOX_4_0c8c30_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 *a6;
  undefined4 uVar5;
  char cVar6;
  undefined1 auStack_34 [36];
  
  cVar6 = '\0';
  if (DAT_8c437244 == '\0') {
    _DAT_8c437240 = 0;
    DAT_8c437244 = '\x01';
  }
  uVar5 = 1;
  iVar4 = ar5;
  FUN_8c0c84cc(auStack_34,ar5,ar6,ar7);
  sVar1 = *(short *)(ar4 + 0x2d1ac);
  if (sVar1 == 3) {
    _DAT_8c437240 = 0;
    _DAT_8c437248 = 0;
    (**(code **)(**(int **)(ar4 + 0xc) + 200))(*(int **)(ar4 + 0xc),iVar4,ar6,ar7);
    iVar4 = DAT_8c13cbf4;
    iVar2 = FUN_8c021f18(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
    if (iVar2 == 1) {
      pack_release_entry_handle(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
      DAT_8c13cbf4 = 0xffffffff;
      iVar4 = pack_acquire_entry_handle(0x8c2b59d0,s_BUGBOX_4_8c13d1b2,ar6,ar7);
      ar7 = 0;
      ar6 = 0;
      DAT_8c13cbf4 = iVar4;
      FUN_8c021d90(0x8c2b59d0,iVar4,0,0);
      *(undefined2 *)(ar4 + 0x2d1ac) = 4;
    }
  }
  else if (sVar1 == 4) {
    if (_DAT_8c437240 - _DAT_8c437248 < 0x28) {
      iVar4 = 2;
      iVar2 = libgcc_divide_helper_01031c(_DAT_8c437240 - _DAT_8c437248,2,ar6,ar7);
      if (iVar2 == 0) {
        if (cVar6 != '\0') {
          _DAT_8c437240 = 0x3dcccccd;
        }
        _DAT_8c43723c = 0x3ecccccd;
      }
      else if (iVar2 == 1) {
        if (cVar6 != '\0') {
          _DAT_8c437240 = 0x3f000000;
        }
        _DAT_8c43723c = 0x3dcccccd;
      }
    }
    else if ((_DAT_8c437240 - _DAT_8c437248 < 0x28) || (0x45 < _DAT_8c437240 - _DAT_8c437248)) {
      if (0x45 < _DAT_8c437240 - _DAT_8c437248) {
        if (cVar6 == '\0') {
          _DAT_8c43723c = 0x3f800000;
        }
        else {
          _DAT_8c437240 = 0x3f800000;
          _DAT_8c43723c = 0x7cc;
        }
        _DAT_8c437238 = 0x3f19999a;
        *(undefined2 *)(ar4 + 0x2d1ac) = 5;
        _DAT_8c437248 = _DAT_8c437240;
      }
    }
    else {
      if (cVar6 != '\0') {
        _DAT_8c437240 = 0x3f19999a;
      }
      _DAT_8c43723c = 0x3f000000;
    }
    (**(code **)(**(int **)(ar4 + 0xc) + 200))(*(int **)(ar4 + 0xc),iVar4,ar6,ar7);
  }
  else if (sVar1 == 5) {
    iVar4 = DAT_8c13cbf4;
    iVar2 = FUN_8c021f18(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
    if (iVar2 == 1) {
      pack_release_entry_handle(0x8c2b59d0,DAT_8c13cbf4,ar6,ar7);
      DAT_8c13cbf4 = -1;
      FUN_8c0c51b8(*(undefined4 *)(ar5 + 0x7cc),0,ar6,ar7);
      ar6 = 0;
      FUN_8c0d1c20(*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 8),0,ar7);
      (**(code **)(**(int **)(ar4 + 0xc) + 0x78))(*(int **)(ar4 + 0xc),0,ar6,ar7);
      iVar4 = 0;
      (**(code **)(**(int **)(ar4 + 8) + 0x70))(*(int **)(ar4 + 8),0,ar6,ar7);
      (**(code **)(**(int **)(ar4 + 8) + 0xb4))(*(int **)(ar4 + 8),iVar4,ar6,ar7);
      _DAT_8c437248 = _DAT_8c437240;
      *(undefined2 *)(ar4 + 0x2d1ac) = 6;
    }
  }
  else if ((sVar1 == 6) && (0x1e < _DAT_8c437240 - _DAT_8c437248)) {
    *(undefined4 *)(ar4 + 0x2d15c) = 3;
    uVar5 = 0;
  }
  iVar4 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar4,ar6,ar7);
  a6 = auStack_34;
  piVar3 = *(int **)(ar4 + iVar4 * 4 + 8);
  iVar4 = ar5;
  (**(code **)(*piVar3 + 0xc))(piVar3,ar5,a6,ar7);
  iVar2 = get_field_d0_0c51fc(*(undefined4 *)(ar5 + 0x7cc),iVar4,a6,ar7);
  piVar3 = *(int **)(ar4 + iVar2 * 4 + 8);
  (**(code **)(*piVar3 + 0xb0))(piVar3,iVar4,a6,ar7);
  _DAT_8c437240 = _DAT_8c437240 + 1;
  FUN_8c0c8480(auStack_34,0xffffffff,a6,ar7);
  return uVar5;
}

__asm__(".globl _s_BUGBOX_4_0c8c30\n.set _s_BUGBOX_4_0c8c30, _s_BUGBOX_4_0c8c30_def\n");
