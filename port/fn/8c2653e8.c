#include "../decls.h"
int FUN_8c2653e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int iVar2;
  int *unaff_r14;
  undefined4 in_PR;
  
  iVar1 = *unaff_r14;
  ar5_00 = 0;
  if (iVar1 == 0) {
    ar5_00 = 0xd000001;
  }
  else {
    iVar2 = *(int *)(iVar1 + 0x1cc);
    *(int *)(iVar1 + 0x1b0) = iVar2 + 0x20;
    FUN_8c268650(iVar2 + 0x20,*unaff_r14 + 0x1d0,ar6,ar7);
    FUN_8c268650(iVar2 + 0x21,*unaff_r14 + 0x1d1,ar6,ar7);
    if ((*(char *)(*unaff_r14 + 0x1d0) == '\x01') && (*(char *)(*unaff_r14 + 0x1d1) == '\0')) {
      iVar1 = iVar2 + 0x23;
    }
    else {
      iVar1 = iVar2 + 0x22;
    }
    FUN_8c268650(iVar1,*unaff_r14 + 0x1d2,ar6,ar7);
    *(undefined1 *)(*unaff_r14 + 0x1d3) = 0;
    aica_ram_268618(iVar2 + 0xc0,*unaff_r14 + 0x1b4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xc4,*unaff_r14 + 0x1b8,ar6,ar7);
    aica_ram_268618(iVar2 + 200,*unaff_r14 + 0x1bc,ar6,ar7);
    aica_ram_268618(iVar2 + 0xcc,*unaff_r14 + 0x1c0,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd0,*unaff_r14 + 0x1c4,ar6,ar7);
    aica_ram_268618(iVar2 + 0xd4,*unaff_r14 + 0x1c8,ar6,ar7);
  }
  if (ar5_00 != 0) {
    FUN_8c2688a0(FUN_8c2653e0,ar5_00,ar6,ar7,in_PR);
  }
  return ar5_00;
}

__asm__(".globl _FUN_8c2653e8\n.set _FUN_8c2653e8, _FUN_8c2653e8_def\n");
