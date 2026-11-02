#include "../decls.h"
int s_E8101214_GDFS_error_adxstmf__2635aa_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  int iVar6;
  int *a4;
  undefined4 in_stack_ffffffdc;
  undefined1 auStack_20 [8];
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  uStack_c = 1;
  a4 = *(int **)(ar4 + 4);
  iVar1 = ar4;
  if (*(char *)(ar4 + 2) == '\x01') {
    iVar1 = FUN_8c1f364c(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      iVar6 = *(int *)(ar4 + 0x20) * 0x800;
      ar7 = auStack_20;
      FUN_8c26be30(ar4 + 0x24,iVar6,auStack_18,ar7);
      (**(code **)(*a4 + 0x20))(a4,1,auStack_18,ar7);
      uVar5 = 0;
      ar6 = auStack_20;
      (**(code **)(*a4 + 0x1c))(a4,0,ar6,ar7);
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      if ((iVar1 == *(int *)(ar4 + 0x30)) && (*(int *)(ar4 + 0x38) != 0)) {
        (**(code **)(ar4 + 0x38))(*(undefined4 *)(ar4 + 0x3c),uVar5,ar6,ar7);
      }
      *(int *)(ar4 + 0x34) = *(int *)(ar4 + 0x34) + iVar6;
      *(undefined1 *)(ar4 + 2) = 0;
      iVar1 = FUN_8c2634dc(ar4,uVar5,ar6,ar7);
      iVar6 = *(int *)(ar4 + 0x14) + 0x7ff;
      if (iVar6 < 0) {
        iVar6 = *(int *)(ar4 + 0x14) + 0xffe;
      }
      ar5 = iVar6 >> 0xb;
      if (ar5 <= iVar1) {
        *(undefined1 *)(ar4 + 1) = 3;
      }
    }
    else if (iVar1 == 5) {
      FUN_8c25ece6(5,ar5,ar6,ar7,"E8101214: GDFS error (adxstmf_stat_exec)\n",in_stack_ffffffdc);
      *(undefined1 *)(ar4 + 1) = 4;
      *(undefined1 *)(ar4 + 2) = 0;
    }
  }
  iVar6 = (int)*(char *)(ar4 + 2);
  if (iVar6 == 0) {
    if ((a4 == (int *)0x0) || (*a4 == 0)) {
      iVar6 = FUN_8c26359a(iVar1,ar5,ar6,ar7,in_stack_ffffffdc);
    }
    else {
      iVar6 = (**(code **)(*a4 + 0x24))(a4,1,ar6,ar7);
      if (iVar6 < *(int *)(ar4 + 0x1c)) {
        a6 = *(undefined4 *)(ar4 + 0x18);
        uVar5 = 0;
        iVar1 = ar4 + 0x24;
        (**(code **)(*a4 + 0x18))(a4,0,a6,iVar1);
        iVar6 = *(int *)(ar4 + 0x28);
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x7ff;
        }
        iVar3 = *(int *)(ar4 + 0x30);
        iVar2 = FUN_8c2634dc(ar4,uVar5,a6,iVar1);
        iVar4 = iVar3 - iVar2;
        if (iVar6 >> 0xb < iVar3 - iVar2) {
          iVar4 = iVar6 >> 0xb;
        }
        iVar6 = *(int *)(ar4 + 0x2c);
        if (iVar4 < *(int *)(ar4 + 0x2c)) {
          iVar6 = iVar4;
        }
        if (iVar6 != 0) {
          iVar6 = FUN_8c1f332c(*(undefined4 *)(ar4 + 8),iVar6,*(undefined4 *)(ar4 + 0x24),iVar1);
          *(int *)(ar4 + 0x20) = iVar6;
          if (0 < iVar6) {
            *(undefined1 *)(ar4 + 2) = 1;
            return 1;
          }
        }
        iVar6 = (**(code **)(*a4 + 0x1c))(a4,0,ar4 + 0x24,iVar1);
      }
    }
  }
  return iVar6;
}

__asm__(".globl _s_E8101214_GDFS_error_adxstmf__2635aa\n.set _s_E8101214_GDFS_error_adxstmf__2635aa, _s_E8101214_GDFS_error_adxstmf__2635aa_def\n");
