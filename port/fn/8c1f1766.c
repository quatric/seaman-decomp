#include "../decls.h"
int FUN_8c1f1766_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  undefined4 *a5;
  ushort uVar4;
  int iVar5;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 1;
  iVar5 = *(int *)(DAT_8c2739e0 + 0x1c);
  if (iVar5 == 0) {
    a4 = 0;
  }
  else {
    a4 = *(undefined4 *)(iVar5 + 0x3c);
  }
  a5 = &uStack_28;
  iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x10))(a4,a5,ar6,ar7);
  if (iVar5 == 0) goto LAB_8c1f19d4;
  uVar4 = (ushort)iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    sVar1 = *(short *)(iVar5 + 0x48);
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined2 *)(iVar5 + 0x48) = 0;
    if (iVar2 != 1) goto LAB_8c1f19d4;
    if (sVar1 == 1) {
      *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x4a) = 2;
      if (*(int *)(iVar5 + 0x24) != 0) {
        (**(code **)(iVar5 + 0x24))(*(undefined4 *)(iVar5 + 0x28),a5,ar6,ar7);
      }
      goto LAB_8c1f19d4;
    }
    if (sVar1 != 3) {
      if (sVar1 != 4) {
        if (sVar1 == 7) {
          iVar3 = FUN_8c1f15f4(DAT_8c2739e0 + 0x40,&uStack_40,ar6,ar7);
          if (iVar3 == 0) {
            **(undefined4 **)(iVar5 + 8) = uStack_40;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 4) = uStack_3c;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 8) = uStack_38;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 0xc) = uStack_34;
            *(uint *)(*(int *)(iVar5 + 8) + 0x10) = uStack_30 & 0xffffff;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffed;
          *(undefined4 *)(iVar5 + 0x44) = 0;
        }
        else {
          if (sVar1 != 8) goto LAB_8c1f19d4;
          ar7 = 0x8c470f9c;
          ar6 = *(undefined4 *)(iVar5 + 4);
          iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x48))
                            (0x8c470f94,0x8c470f98,ar6,0x8c470f9c);
          if (iVar3 != 0) {
            *(int *)(iVar5 + 0x3c) = iVar3;
            *(undefined2 *)(iVar5 + 0x50) = 4;
            *(undefined2 *)(iVar5 + 0x48) = 6;
            *(int *)(DAT_8c2739e0 + 0x1c) = iVar5;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffe4;
          *(undefined4 *)(iVar5 + 0x44) = 0;
          **(undefined4 **)(iVar5 + 4) = 0;
        }
        goto LAB_8c1f1988;
      }
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
    }
    *(undefined2 *)(iVar5 + 0x4a) = 2;
  }
  else {
    if (iVar2 == 0x41) {
      iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x24))
                        (*(undefined4 *)(iVar5 + 0x3c),&iStack_44,ar6,ar7);
      if (iVar3 == 0) {
        if (iStack_44 < 1) {
          *(undefined2 *)(iVar5 + 0x4a) = 2;
        }
        else {
          *(undefined2 *)(iVar5 + 0x4a) = 0;
        }
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      }
      else if (iVar3 == 1) {
        *(int *)(iVar5 + 0x18) = iStack_44;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 4) {
      *(undefined4 *)(iVar5 + 0x40) = uStack_20;
      if (*(short *)(iVar5 + 0x48) == 1) {
        *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 0x43) goto LAB_8c1f19d4;
    if ((iVar2 != 5) && (iVar2 != 0x40)) {
      *(ushort *)(iVar5 + 0x50) = uVar4 & 0xff;
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
      goto LAB_8c1f19d4;
    }
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(short *)(iVar5 + 0x52) = (short)uStack_28;
    *(undefined4 *)(iVar5 + 0x44) = uStack_24;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    if (*(short *)(iVar5 + 0x52) == -0x1d) {
      if (*(int *)(iVar5 + 0x44) == 0x3a) {
        iVar3 = FUN_8c1f23e0(a4,a5,ar6,ar7);
        if ((iVar3 == 6) || (iVar3 == 0)) {
          *(undefined2 *)(iVar5 + 0x52) = 0xffe9;
        }
      }
      else if (*(int *)(iVar5 + 0x44) == 0x104) {
        *(undefined2 *)(iVar5 + 0x52) = 0xffdb;
      }
    }
LAB_8c1f1988:
    if ((*(short *)(iVar5 + 0x52) == -0x17) || (*(short *)(iVar5 + 0x52) == -0x21)) {
      *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
    }
    if (*(int *)(DAT_8c2739e0 + 0x24) != 0) {
      (**(code **)(DAT_8c2739e0 + 0x24))
                (*(undefined4 *)(DAT_8c2739e0 + 0x28),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
    if (*(int *)(iVar5 + 0x34) != 0) {
      (**(code **)(iVar5 + 0x34))
                (*(undefined4 *)(iVar5 + 0x38),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
  }
LAB_8c1f19d4:
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c1f1766\n.set _FUN_8c1f1766, _FUN_8c1f1766_def\n");
