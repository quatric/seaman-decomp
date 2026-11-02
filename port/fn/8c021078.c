#include "../decls.h"
int s_CDCGD_ReadPVMFileReq_021082_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 auStack_1c [2];
  
  ar6_00 = *(undefined4 *)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = FUN_8c02077c(ar4,0x10,ar6_00,ar5,ar6,auStack_1c,ar4 + 8,0,0,s0);
  if (iVar1 == 1) {
    iVar2 = FUN_8c23a29c(auStack_1c[0],ar7,ar6_00,ar7_00);
    if (iVar2 == 1) {
      FUN_8c021138(ar4,ar5,ar6,s0);
    }
    else {
      FUN_8c021138(ar4,ar5,ar6,s0);
      (*(code *)(&report_error_message))
                ((&DATA_8c12fc0c) + 0x12,(&DATA_8c12fc0c) + 0x27,1,2);
      iVar1 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _s_CDCGD_ReadPVMFileReq_021082\n.set _s_CDCGD_ReadPVMFileReq_021082, _s_CDCGD_ReadPVMFileReq_021082_def\n");
