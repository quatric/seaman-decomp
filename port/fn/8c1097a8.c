#include "../decls.h"
int s_STATUS_LIFE_1097b2_def(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = get_field_124_027930(ar6[2],ar5,ar6,ar7);
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = FUN_8c02fcc4(ar4,ar6,piVar5,ar7), iVar1 == 1)) {
    uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
    piVar3 = (int *)0x3c;
    iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
    if (1 < iVar1) {
      piVar3 = (int *)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (**(code **)(0x11c + *ar5))(ar5,3,piVar5,ar7);
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
        iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(0xb4 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (**(code **)(0x100 + *ar5))(ar5,3,piVar3,ar7);
          iVar1 = (**(code **)(0x114 + *(int *)(iVar1 + 8)))(iVar1,uVar4,piVar5,ar7);
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (int *)((int)piVar3 + 1);
      }
      uVar2 = FUN_8c02602c(ar6[6],uVar4,piVar5,ar7);
      piVar3 = (int *)0x3c;
      iVar1 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
      if ((((0 < iVar1) &&
           (uVar4 = FUN_8c02bef8(ar6[1],piVar3,piVar5,ar7), 6 < (short)uVar4)) &&
          (iVar1 = (*(code *)(&get_field_18_02d1a0))
                             (ar6[1] + 0xa8,piVar3,piVar5,ar7), 0 < iVar1)) &&
         (((iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7),
           iVar1 == 4 && (*(int *)(0x384 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(0x98 + ar4) < '\x04' && (*(int *)(ar4 + 4) == 0)))))))
         ) {
        ar7 = (&DATA_8c1eee90) + 0x22c;
        piVar5 = (int *)0x0;
        (*(code *)(&FUN_8c030568))
                  (ar4 + 0x9c,0x16,0,ar7,(&DATA_8c1eee90) + 0x33);
        piVar3 = (int *)0x0;
        FUN_8c109b10(ar6[1] + 0xa8,0,piVar5,ar7);
      }
    }
  }
  iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7);
  if ((iVar1 == 3) ||
     (iVar1 = get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7), iVar1 == 4)) {
    uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
    iVar1 = libgcc_divide_helper_01031c(uVar2 & 0xffff,0x45,piVar5,ar7);
    if (iVar1 == 0x14) {
      *(undefined1 *)(0x854 + ar4) = 0;
    }
    iVar1 = (**(code **)(0x11c + *ar5))(ar5,3,piVar5,ar7);
    if (((((iVar1 == 1) && (iVar1 = *(int *)(0x384 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(0x98 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = FUN_8c02fcc4(ar4,ar6,piVar5,ar7), iVar1 == 1 &&
         (iVar1 = (*(code *)(&FUN_8c0637d0))
                            (*(undefined4 *)(0x7cc + ar6[6]),piVar3,piVar5,ar7), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(0x854 + ar4), iVar1 == 0)) {
      uVar2 = FUN_8c02602c(ar6[6],piVar3,piVar5,ar7);
      iVar6 = libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7);
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(0x854 + ar4) = 1;
        iVar1 = (*(code *)(&FUN_8c0303b8))
                          (ar4 + 0x9c,0x16,0,(&DATA_8c1eee90) + 0x48f,
                           (&DATA_8c1eee90) + 0x33);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LIFE_1097b2\n.set _s_STATUS_LIFE_1097b2, _s_STATUS_LIFE_1097b2_def\n");
