#include "../decls.h"
undefined4 s_E9040811_adxf_is_NULL_adxf_r_26220e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  if ((ar4 == 0) || (ar5 < 0)) {
    FUN_8c25ece6(ar4,ar5,ar6,ar7);
  }
  else {
    if (ar6 != 0) {
      if (*(char *)(ar4 + 1) == '\x02') {
        return 0;
      }
      if (*(int *)(ar4 + 4) != 0) {
        FUN_8c25ece6(ar4,ar5,ar6,ar7);
        return 0xffffffff;
      }
      FUN_8c260ca0(ar4,ar5,ar6,ar7,ar6);
      *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0xc) + *(int *)(ar4 + 0x18);
      iVar2 = *(int *)(ar4 + 0x10) - *(int *)(ar4 + 0x18);
      if (ar5 < iVar2) {
        iVar2 = ar5;
      }
      *(int *)(ar4 + 0x20) = iVar2;
      *(undefined4 *)(ar4 + 0x24) = 0;
      ar5_00 = *(undefined4 *)(ar4 + 0x20);
      iVar2 = ar6;
      iVar1 = s_E8101212_can_t_open_fad_d_ns_26338a(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6,ar7);
      if (iVar1 == 0) {
        uVar3 = 0xffffffff;
        ar4_00 = 0;
      }
      else {
        *(int *)(ar4 + 4) = iVar1;
        *(undefined1 *)(ar4 + 1) = 2;
        ar4_00 = *(undefined4 *)(ar4 + 4);
        FUN_8c26346e(ar4_00,ar5_00,ar6,ar7);
        uVar3 = *(undefined4 *)(ar4 + 0x20);
      }
      FUN_8c260cc8(ar4_00,ar5_00,ar6,ar7,iVar2);
      return uVar3;
    }
    FUN_8c25ece6(ar4,ar5,0,ar7);
  }
  return 0xfffffffd;
}

__asm__(".globl _s_E9040811_adxf_is_NULL_adxf_r_26220e\n.set _s_E9040811_adxf_is_NULL_adxf_r_26220e, _s_E9040811_adxf_is_NULL_adxf_r_26220e_def\n");
