#include "../decls.h"
undefined4 FUN_8c2387a0_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *ar5_00;
  int ar5_01;
  int ar5_02;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *ar4_00;
  int *a4;
  uint *a5;
  uint in_stack_ffffffc4;
  int iStack_38;
  undefined1 auStack_30 [4];
  int iStack_2c;
  uint uStack_28;
  ushort uStack_24;
  ushort uStack_22;
  
  ar5_00 = &stack0xffffffc4;
  ar4_00 = (undefined4 *)(*ar4 + ar5 * 0xc);
  a4 = ar4_00 + 2;
  if (((ar4_00[1] & 0x10000) != 0) && (ar5 != 0)) {
    iVar5 = *ar4;
    iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    if ((*(uint *)(iVar1 * 0x44 + DAT_8c277b08 + 0x10) & 1) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar1 = iVar5 + (ar5 + -1) * 0xc + 0x1c;
    FUN_8c25a380(a4,iVar1,in_stack_ffffffc4,uVar7);
    *(undefined2 *)(*a4 + 0x42) = 0;
    FUN_8c2571fe(*a4,iVar1,in_stack_ffffffc4,uVar7);
    goto LAB_8c238e44;
  }
  if ((ar4_00[1] & 0x800000) == 0) {
    if ((*(uint *)(ar5 * 0xc + *ar4 + 4) & 0x1000000) != 0) {
      uVar4 = ar4_00[2] & 0x3ffffff;
      uVar2 = (uint)ar4_00[2] >> 0x1a;
      iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,uVar4,ar7);
      a5 = (uint *)*ar4_00;
      in_stack_ffffffc4 = *a5;
      uVar3 = FUN_8c25abf0(&uStack_28,auStack_30,in_stack_ffffffc4,ar7);
      if (uVar3 != 0) {
        *a5 = uVar3;
        a5[4] = (uint)uStack_24;
        a5[5] = (uint)uStack_22;
        a5[1] = uStack_28 << 0x10;
      }
      uVar3 = uVar4;
      if (iStack_38 < 0) {
        iVar1 = 2;
        uVar2 = ar7;
      }
      else {
        iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,uVar4,uVar2);
        in_stack_ffffffc4 = uVar4;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else {
          iVar1 = 1;
        }
      }
      iVar5 = 1;
      ar7 = uVar2;
      goto LAB_8c238a34;
    }
    a5 = (uint *)*ar4_00;
    uVar4 = *a5;
    uVar2 = FUN_8c25abf0(&uStack_28,&stack0xffffffc4,uVar4,ar7);
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)uStack_24;
      a5[5] = (uint)uStack_22;
      a5[1] = uStack_28 << 0x10;
    }
    if (in_stack_ffffffc4 == 0xffffffff) {
      while (uVar7 = DAT_8c277b0c, in_stack_ffffffc4 = DAT_8c277b18,
            iVar1 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,DAT_8c277b18,ar7), iVar1 != -1) {
        DAT_8c277b18 = DAT_8c277b18 - 1;
      }
      uVar3 = DAT_8c277b18;
      iVar5 = FUN_8c25a1ee(uStack_28 & 0xff00,uVar7,in_stack_ffffffc4,ar7);
      iStack_38 = -1;
LAB_8c238a2e:
      iVar1 = 2;
      goto LAB_8c238a34;
    }
    iVar5 = FUN_8c25a1ee(uStack_28 & 0xff00,ar5_00,uVar4,ar7);
    uVar2 = in_stack_ffffffc4;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    uVar3 = uVar2;
    if (iVar5 == 1) {
      uVar4 = (uint)ar4_00[2] >> 0x1a;
      if (iStack_38 < 0) goto LAB_8c238a2e;
      iVar1 = FUN_8c25a5c0(DAT_8c277b08,DAT_8c277b0c,uVar2,uVar4);
      in_stack_ffffffc4 = uVar2;
      ar7 = uVar4;
      if (-1 < iVar1) goto LAB_8c238a32;
      iVar1 = 0;
      goto LAB_8c238a34;
    }
    if (uVar2 != 0xffffffff) {
      if (iStack_38 < 0) goto LAB_8c238a2e;
LAB_8c238a32:
      iVar1 = 1;
      goto LAB_8c238a34;
    }
    FUN_8c25a380(a4,a5,0xffffffff,0);
    *(undefined2 *)(*a4 + 0x42) = 9;
    *(undefined2 *)(*a4 + 0x40) = 0;
    _DAT_8c4aa6b4 = 9;
LAB_8c238e20:
    uVar7 = 0xffffffff;
  }
  else {
    in_stack_ffffffc4 = ar4_00[2];
    a5 = (uint *)*ar4_00;
    uVar2 = FUN_8c25abf0(&uStack_28,auStack_30,*a5,ar7);
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)uStack_24;
      a5[5] = (uint)uStack_22;
      a5[1] = uStack_28 << 0x10;
    }
    uVar3 = in_stack_ffffffc4;
    iStack_38 = FUN_8c25a536(DAT_8c277b08,DAT_8c277b0c,in_stack_ffffffc4,ar7);
    if (iStack_38 < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    iVar5 = 0;
LAB_8c238a34:
    ar5_01 = iStack_38 * 0x44 + DAT_8c277b08;
    uVar2 = uVar3;
    if (iVar1 == 0) {
      if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
        uVar2 = ar4_00[1] & 0xa0000000;
        if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
          if (uVar2 == 0x80000000) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
LAB_8c238dc6:
            *(undefined2 *)(*a4 + 0x42) = 0;
          }
          goto LAB_8c238e44;
        }
        iStack_2c = FUN_8c25a914(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
        if (-1 < iStack_2c) {
          ar7 = 1;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
          *(undefined2 *)(*a4 + 0x42) = 0;
          goto LAB_8c238d18;
        }
        FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1);
        _DAT_8c4aa6b0 = uVar3;
LAB_8c238e0a:
        *(short *)(*a4 + 0x42) = -(short)iStack_2c;
        _DAT_8c4aa6ac = ar5;
        goto LAB_8c238e20;
      }
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        ar7 = *(uint *)(ar5_01 + 0x10);
LAB_8c238b9e:
        iVar1 = ar5_01 + 0x14;
        FUN_8c25a380(a4,iVar1,uVar3,ar7);
        *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
        *(undefined2 *)(*a4 + 0x42) = 0;
        in_stack_ffffffc4 = uVar3;
LAB_8c238cee:
        FUN_8c25a6ea(uVar2,iVar1,in_stack_ffffffc4,ar7,uVar2);
      }
      else {
        if (uVar4 == 0x80000000) {
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,3);
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            goto LAB_8c238dc6;
          }
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
            _DAT_8c4aa6b0 = uVar3;
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            *(short *)(*a4 + 0x42) = -(short)iVar1;
            *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) & 0xfffffff7;
            _DAT_8c4aa6ac = ar5;
            goto LAB_8c238e20;
          }
          ar7 = 2;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
          *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
          *(undefined2 *)(*a4 + 0x42) = 0;
          *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) & 0xfffffff7;
LAB_8c238c8e:
          uVar6 = *(undefined4 *)(ar5_01 + 0x14);
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x20000000) goto LAB_8c238e44;
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) {
            ar7 = 3;
            goto LAB_8c238b9e;
          }
          iStack_2c = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
            *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
            _DAT_8c4aa6b0 = uVar3;
            goto LAB_8c238e0a;
          }
          ar7 = 2;
          FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2);
          *(undefined2 *)(*a4 + 0x40) = *(undefined2 *)(ar5_01 + 0x40);
          *(undefined2 *)(*a4 + 0x42) = 0;
LAB_8c238cd4:
          uVar6 = *(undefined4 *)(ar5_01 + 0x14);
          uVar7 = 3;
        }
        FUN_8c25a608(uVar3,uVar7,uVar6,ar7,uVar3);
      }
    }
    else if (iVar1 == 1) {
      ar4_00[2] = ar5_01;
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = FUN_8c25a914(ar4_00,ar5_02,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) {
LAB_8c238d18:
            FUN_8c25a608(uVar3,2,*(undefined4 *)(ar5_01 + 0x14),ar7,uVar3);
            *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 8;
            goto LAB_8c238e44;
          }
LAB_8c238d2a:
          FUN_8c2571fe(ar5_01,ar5_02,in_stack_ffffffc4,ar7);
          *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 2;
        }
        else {
joined_r0x8c238cec:
          iVar1 = ar5_01;
          if (iVar5 != 0) goto LAB_8c238cee;
        }
LAB_8c238d36:
        *(short *)(ar5_01 + 0x40) = *(short *)(ar5_01 + 0x40) + 1;
      }
      else if (uVar4 == 0x80000000) {
        if ((*(uint *)(ar5_01 + 0x10) & 1) == 0) {
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) goto LAB_8c238c8e;
          *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 1;
        }
      }
      else if (uVar4 == 0x20000000) {
        if ((*(uint *)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = FUN_8c25a914(ar4_00,ar5_02,in_stack_ffffffc4,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_01 + 0x42) = 0;
            if (iVar5 == 0) goto LAB_8c238d2a;
            goto LAB_8c238d18;
          }
        }
        else {
          if ((*(uint *)(ar5_01 + 0x10) & 1) != 0) goto joined_r0x8c238cec;
          iVar1 = FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,in_stack_ffffffc4,ar7);
          if (-1 < iVar1) {
            *(undefined2 *)(ar5_01 + 0x42) = 0;
            if (iVar5 != 0) goto LAB_8c238cd4;
            *(uint *)(ar5_01 + 0x10) = *(uint *)(ar5_01 + 0x10) | 1;
            goto LAB_8c238d36;
          }
        }
LAB_8c238d08:
        _DAT_8c4aa6b0 = uVar3;
        *(short *)(ar5_01 + 0x42) = -(short)iVar1;
        _DAT_8c4aa6ac = ar5;
        goto LAB_8c238e20;
      }
    }
    else if (iVar1 == 2) {
      uVar7 = FUN_8c25a710(uVar3,ar5_01,in_stack_ffffffc4,ar7);
      uVar6 = 0x2c;
      FUN_8c23c814(uVar7,a5,0x2c,ar7);
      uVar2 = ar4_00[1] & 0xa0000000;
      if (uVar2 == 0) {
        iStack_2c = FUN_8c25a914(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(a4,uVar7,uVar3,2);
          *(undefined2 *)(*a4 + 0x42) = 0;
joined_r0x8c238da2:
          if (iVar5 != 0) {
            *(uint *)(*a4 + 0x10) = *(uint *)(*a4 + 0x10) | 8;
          }
          goto LAB_8c238e44;
        }
      }
      else if (uVar2 == 0x80000000) {
        iStack_2c = FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          FUN_8c25a380(a4,uVar7,uVar3,1);
          goto LAB_8c238dc6;
        }
      }
      else {
        if (uVar2 != 0x20000000) goto LAB_8c238e44;
        iStack_2c = FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7);
        if (-1 < iStack_2c) {
          iStack_2c = FUN_8c25a914(ar4_00,uVar7,uVar6,ar7);
          if (iStack_2c < 0) {
            FUN_8c25a380(a4,uVar7,uVar3,1);
            _DAT_8c4aa6b0 = uVar3;
            goto LAB_8c238e0a;
          }
          FUN_8c25a380(a4,uVar7,uVar3,3);
          *(undefined2 *)(*a4 + 0x42) = 0;
          goto joined_r0x8c238da2;
        }
      }
      FUN_8c25a380(a4,uVar7,uVar3,0);
      _DAT_8c4aa6b0 = uVar3;
      goto LAB_8c238e0a;
    }
LAB_8c238e44:
    uVar7 = 1;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c2387a0\n.set _FUN_8c2387a0, _FUN_8c2387a0_def\n");
