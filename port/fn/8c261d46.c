#include "../decls.h"
int s_E9040807_can_t_find_s_ADXF_A_261d54_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *s0;
  int *piVar4;
  uint ar4_00;
  int *ar5_00;
  int *ar6_00;
  int iVar5;
  int iVar6;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int *piStack_24;
  
  ar6_00 = ar6;
  iStack_30 = ar7;
  iVar1 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar1) {
    ar5_00 = &iStack_38;
    uVar3 = ar5;
    iVar1 = FUN_8c2637ca(ar5,ar5_00,ar6_00,ar7);
    if (iVar1 < 0) {
      s0 = s_E9040807_can_t_find___s___ADXF_A_8c2721a4;
    }
    else {
      ar5_00 = &iStack_28;
      uVar3 = ar5;
      iStack_34 = FUN_8c26201c(ar5,ar5_00,ar6_00,ar7);
      if (iStack_34 != 0) {
        iVar6 = -1;
        piVar4 = (int *)(ar4 * 4 + -0x73b4c1e0);
        *ar6 = *piVar4;
        *piVar4 = (int)ar6;
        iVar5 = 0;
        iVar1 = 0;
        ar6[2] = iStack_38;
        *(undefined1 *)((int)ar6 + 0x12) = 1;
        piStack_24 = ar6 + 5;
        iStack_2c = 0;
        ar6[3] = 0;
LAB_8c261ebe:
        do {
          ar4_00 = 3;
          if (2 < iVar1) {
            if (iVar1 == 3) {
              FUN_8c25ece6(3,ar5_00,ar6_00,ar7,s_E9040809_read_error__s___ADXF_Lo_8c272204,ar5);
            }
LAB_8c261ed6:
            if (iVar6 == -4) {
              FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7,s_E9040810___s__is_broken__ADXF_Lo_8c272234,ar5)
              ;
            }
            *(undefined2 *)(ar6 + 4) = (undefined2)iStack_2c;
            ar6[1] = (uint)*(ushort *)(ar6 + 4) * 8 + *(int *)(*ar6 + 4) + 0x14;
            FUN_8c262168(iStack_34,ar5_00,ar6_00,ar7);
            return iVar6;
          }
          ar5_00 = (int *)0x1;
          ar6_00 = (int *)0x8c4b72e0;
          iVar2 = FUN_8c261ae2(iStack_34,1,0x8c4b72e0,ar7);
          if (0 < iVar2) {
            ar4_00 = 0;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b72e4) {
                _DAT_8c4b72e4 = 0x10000;
                ar4_00 = 0xfffffffc;
                iVar6 = -4;
                goto LAB_8c261ed6;
              }
              iVar1 = _DAT_8c4b72e4;
              if (iStack_30 < _DAT_8c4b72e4) {
                iVar1 = iStack_30;
              }
              ar6[3] = iVar1;
              ar4_00 = 2;
            }
            ar5_00 = (int *)0x200;
            if (ar4_00 < 0x200) {
              do {
                if (*(int *)(ar4_00 * 4 + -0x73b48d20) == 0) {
                  ar4_00 = ar4_00 + 2;
                }
                else {
                  ar7 = 0x7ff;
                  ar5_00 = piStack_24 + iStack_2c * 2;
                  *(short *)ar5_00 = (short)iVar5;
                  ar6_00 = (int *)0x800;
                  iVar2 = ar4_00 + 1;
                  iStack_2c = iStack_2c + 1;
                  iVar1 = libgcc_divide_helper_010468
                                    (*(int *)(ar4_00 * 4 + -0x73b48d20) + 0x7ff,0x800);
                  ar5_00[1] = iVar1;
                  ar4_00 = iVar2 + 1;
                  uVar3 = libgcc_divide_helper_010468
                                    (*(int *)(iVar2 * 4 + -0x73b48d20) + ar7,ar6_00);
                  *(short *)((int)ar5_00 + 2) = (short)uVar3;
                }
                iVar5 = iVar5 + 1;
                if (ar6[3] <= iVar5) {
                  iVar6 = 0;
                  goto LAB_8c261ed6;
                }
              } while ((int)ar4_00 < 0x200);
            }
            iVar1 = 0;
            goto LAB_8c261ebe;
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      s0 = s_E9040808_cannot_open___s___ADXF__8c2721d4;
      iStack_34 = 0;
    }
    FUN_8c25ece6(uVar3,ar5_00,ar6_00,ar7,s0,ar5);
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _s_E9040807_can_t_find_s_ADXF_A_261d54\n.set _s_E9040807_can_t_find_s_ADXF_A_261d54, _s_E9040807_can_t_find_s_ADXF_A_261d54_def\n");
