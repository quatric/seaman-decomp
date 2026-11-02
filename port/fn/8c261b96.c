#include "../decls.h"
int s_E9040804_can_t_open_s_ADXF_L_261ba4_def(int ar4,undefined4 ar5,undefined4 *ar6,int ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined2 *extraout_r2;
  undefined2 *extraout_r2_00;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *ar5_00;
  undefined4 uVar7;
  int iVar8;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 *puStack_38;
  undefined4 *puStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  int iStack_24;
  
  puVar5 = ar6;
  iStack_30 = ar7;
  iVar2 = s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7);
  if (-1 < iVar2) {
    puVar6 = &uStack_3c;
    uVar7 = ar5;
    iVar2 = FUN_8c2637ca(ar5,puVar6,puVar5,ar7);
    if (iVar2 < 0) {
      s0 = s_E9040803_can_t_get_FAD_of___s____8c2720dc;
    }
    else {
      puVar6 = &uStack_2c;
      uVar7 = ar5;
      puStack_34 = (undefined4 *)FUN_8c26201c(ar5,puVar6,puVar5,ar7);
      if (puStack_34 != (undefined4 *)0x0) {
        ar5_00 = (int *)0x0;
        iVar8 = -1;
        uVar7 = 0x18;
        puVar5 = ar6;
        memset(ar6,0,0x18,ar7);
        *(undefined4 **)(ar4 * 4 + -0x73b4c1e0) = ar6;
        iVar2 = 0;
        *ar6 = 0;
        ar6[2] = uStack_3c;
        puStack_38 = ar6 + 5;
        *(undefined1 *)((int)ar6 + 0x12) = 0;
        iStack_24 = (int)ar6 + 0x16;
        iStack_40 = 0;
        ar6[3] = 0;
        puStack_28 = (undefined4 *)&DAT_8c4b5268;
LAB_8c261d02:
        do {
          puVar6 = (undefined4 *)0x3;
          if (2 < iVar2) {
            puVar6 = puVar5;
            if (iVar2 == 3) {
              FUN_8c25ece6(puVar5,ar5_00,uVar7,ar7,s_E9040805_read_error__s___ADXF_Lo_8c272144,ar5);
              puVar6 = puVar5;
            }
LAB_8c261d1a:
            if (iVar8 == -4) {
              FUN_8c25ece6(puVar6,ar5_00,uVar7,ar7,s_E9040806___s__is_broken__ADXF_Lo_8c272174,ar5);
            }
            FUN_8c262168(puStack_34,ar5_00,uVar7,ar7);
            return iVar8;
          }
          ar5_00 = (int *)0x1;
          puVar5 = puStack_34;
          uVar7 = 0x8c4b5260;
          iVar3 = FUN_8c261ae2(puStack_34,1,0x8c4b5260,ar7);
          if (0 < iVar3) {
            uVar7 = 0x800;
            if (ar6[3] == 0) {
              if (0x10000 < _DAT_8c4b5264) {
                _DAT_8c4b5264 = 0x10000;
                puVar6 = (undefined4 *)0xfffffffc;
                iVar8 = -4;
                goto LAB_8c261d1a;
              }
              if (iStack_30 < _DAT_8c4b5264) {
                uVar1 = (ushort)iStack_30;
              }
              else {
                uVar1 = (ushort)_DAT_8c4b5264;
              }
              *(ushort *)(ar6 + 4) = uVar1;
              ar6[3] = (uint)uVar1;
              ar6[1] = (uVar1 + 1) * 2 + 0x16 & 0xfffffffc;
              uVar4 = libgcc_divide_helper_010468(*puStack_28,0x800);
              *extraout_r2 = (short)uVar4;
            }
            else {
              puVar6 = (undefined4 *)0x1;
            }
            ar7 = 0x200;
            ar5_00 = (int *)((int)puVar6 * 4 + -0x73b4ada0);
            if (puVar6 < (undefined4 *)0x200) {
              do {
                iStack_40 = iStack_40 + 1;
                uVar4 = libgcc_divide_helper_010468(*ar5_00 + 0x7ff,uVar7);
                *extraout_r2_00 = (short)uVar4;
                if ((int)ar6[3] <= iStack_40) {
                  iVar8 = 0;
                  goto LAB_8c261d1a;
                }
                puVar6 = (undefined4 *)((int)puVar6 + 2);
                ar5_00 = ar5_00 + 2;
              } while ((int)puVar6 < ar7);
            }
            iVar2 = 0;
            puVar5 = puVar6;
            goto LAB_8c261d02;
          }
          iVar2 = iVar2 + 1;
        } while( true );
      }
      s0 = s_E9040804_can_t_open___s___ADXF_L_8c272114;
      puStack_34 = (undefined4 *)0x0;
    }
    FUN_8c25ece6(uVar7,puVar6,puVar5,ar7,s0,ar5);
    iVar2 = -1;
  }
  return iVar2;
}

__asm__(".globl _s_E9040804_can_t_open_s_ADXF_L_261ba4\n.set _s_E9040804_can_t_open_s_ADXF_L_261ba4, _s_E9040804_can_t_open_s_ADXF_L_261ba4_def\n");
