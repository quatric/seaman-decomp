#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f4210_def
          (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  char *pcVar4;
  int iVar5;
  uint unaff_r12;
  int *unaff_r14;
  
  if (*(int *)(*unaff_r14 + ain1) == 1) {
    if ((*(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) & unaff_r12) == 0) {
      bVar1 = *(&DATA_8c1f5a2c);
      *(&DATA_8c1f5a2c) = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(*unaff_r14 + 0xfb0) != *(int *)(*unaff_r14 + 0xfac)) {
          *(undefined4 *)(*unaff_r14 + 0xfb0) = *(undefined4 *)(*unaff_r14 + 0xfac);
          if (*(int *)(*unaff_r14 + 0xfac) == 0) {
            *(undefined4 *)(*unaff_r14 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = libgcc_divide_helper_010468(300000,0x14);
            *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 0;
          iVar3 = *unaff_r14;
          *(uint *)(*(int *)(iVar3 + 0x10f4) + 0x80) =
               *(uint *)(iVar3 + 0x10c0) | *(uint *)(iVar3 + 0x10d0);
          *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = unaff_r12;
        }
        FUN_8c1f4102(ar4,ar5,ar6,ar7);
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0x10b0) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        iVar3 = *unaff_r14;
        iVar5 = *(int *)(iVar3 + 0x10f4);
        uVar2 = FUN_8c1f59f2(*(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8),ar5,ar6,
                             ar7);
        *(undefined4 *)(iVar5 + 4) = uVar2;
        *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) = unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfd8) = 0;
        *(uint *)(*unaff_r14 + 0x10b8) = *(uint *)(*unaff_r14 + 0x10b8) ^ unaff_r12;
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0xfcc) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        *(uint *)(*unaff_r14 + 0x10b4) = *(uint *)(*unaff_r14 + 0x10b4) ^ unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfdc) = 0;
        iVar3 = *unaff_r14 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(*unaff_r14 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(iVar3 + 6);
            *(undefined1 *)(iVar3 + 6) = 0;
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(*unaff_r14 + 0xfc0) = 0;
        uVar2 = 0;
        *(&DATA_8c1f5a2c) = 0;
      }
      else {
        FUN_8c1f4570(ar4,ar5,ar6,ar7);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f4210\n.set _s_FATAL_ERROR_Cannot_get_semap_1f4210, _s_FATAL_ERROR_Cannot_get_semap_1f4210_def\n");
