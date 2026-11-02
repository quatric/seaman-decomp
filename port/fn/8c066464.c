#include "../decls.h"
int s_STATUS_LASTONE_066468_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int ar5_00;
  undefined4 ar5_01;
  
  iVar3 = ar6;
  iVar1 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 == 7) {
    iVar1 = (**(code **)(0x11c + *ar5))(ar5,5,iVar3,ar7);
    if (iVar1 == 1) {
      ar5_00 = ar6;
      iVar1 = FUN_8c02fcc4(ar4,ar6,iVar3,ar7);
      if (iVar1 == 1) {
        iVar1 = (*(code *)(&get_field_40_03598c))
                          (*(undefined4 *)(ar6 + 0xc),ar5_00,iVar3,ar7);
        if (iVar1 == 0) {
          iVar1 = (*(code *)(&FUN_8c0637d0))
                            (*(undefined4 *)(0x7cc + *(int *)(ar6 + 0x18)),ar5_00,iVar3,ar7);
          if (((iVar1 == 0) && (iVar1 = *(int *)(0x384 + ar4), iVar1 == -1)) &&
             (iVar1 = 3, *(char *)(0x98 + ar4) < '\x04')) {
            uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5_00,iVar3,ar7);
            ar5_01 = 0x43;
            iVar1 = (*(code *)(&libgcc_divide_helper_01031c))
                              (uVar2 & 0xffff,0x43,iVar3,ar7);
            if (iVar1 == 2) {
              uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5_01,iVar3,ar7);
              iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                                (uVar2 & 0xffff,0x3c,iVar3,ar7);
              iVar1 = 2;
              if ((2 < iVar3) && (iVar1 = *(int *)(0x868 + ar4), iVar1 == 0)) {
                *(undefined4 *)(0x868 + ar4) = 1;
                iVar1 = (*(code *)(&FUN_8c0303b8))
                                  (ar4 + 0x9c,0x16,0,
                                   (&DATA_8c136988) + 0x4dc,
                                   (&DATA_8c136988) + 0x37);
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LASTONE_066468\n.set _s_STATUS_LASTONE_066468, _s_STATUS_LASTONE_066468_def\n");
