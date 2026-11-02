#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c2387a0_def(int *ar4,int ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "FUN_8c2387a0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
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
  
  ar5_00 = (fr0_ + (int)0xffffffc4);
  ar4_00 = (undefined4 *)(unsigned)(*ar4 + ar5 * 0xc);
  a4 = ar4_00 + 2;
  if (((ar4_00[1] & 0x10000) != 0) && (ar5 != 0)) {
    iVar5 = *ar4;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),(*(uint *)(fr0_ - 0x3c)),ar7));
    if ((*(uint *)(unsigned)(iVar1 * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08) + 0x10) & 1) == 0) {
      uVar7 = 2;
    }
    else {
      uVar7 = 3;
    }
    iVar1 = iVar5 + (ar5 + -1) * 0xc + 0x1c;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,iVar1,(*(uint *)(fr0_ - 0x3c)),uVar7));
    *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2571fe(*a4,iVar1,(*(uint *)(fr0_ - 0x3c)),uVar7));
    goto LAB_8c238e44;
  }
  if ((ar4_00[1] & 0x800000) == 0) {
    if ((*(uint *)(unsigned)(ar5 * 0xc + *ar4 + 4) & 0x1000000) != 0) {
      uVar4 = ar4_00[2] & 0x3ffffff;
      uVar2 = (uint)ar4_00[2] >> 0x1a;
      (*(int *)(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),uVar4,ar7));
      a5 = (uint *)(unsigned)*ar4_00;
      (*(uint *)(fr0_ - 0x3c)) = *a5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25abf0(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x30)),(*(uint *)(fr0_ - 0x3c)),ar7));
      if (uVar3 != 0) {
        *a5 = uVar3;
        a5[4] = (uint)(*(ushort *)(fr0_ - 0x24));
        a5[5] = (uint)(*(ushort *)(fr0_ - 0x22));
        a5[1] = (*(uint *)(fr0_ - 0x28)) << 0x10;
      }
      uVar3 = uVar4;
      if ((*(int *)(fr0_ - 0x38)) < 0) {
        iVar1 = 2;
        uVar2 = ar7;
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a5c0((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),uVar4,uVar2));
        (*(uint *)(fr0_ - 0x3c)) = uVar4;
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
    a5 = (uint *)(unsigned)*ar4_00;
    uVar4 = *a5;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25abf0(&(*(uint *)(fr0_ - 0x28)),(fr0_ + (int)0xffffffc4),uVar4,ar7));
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)(*(ushort *)(fr0_ - 0x24));
      a5[5] = (uint)(*(ushort *)(fr0_ - 0x22));
      a5[1] = (*(uint *)(fr0_ - 0x28)) << 0x10;
    }
    if ((*(uint *)(fr0_ - 0x3c)) == 0xffffffff) {
      while (uVar7 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b0c), (*(uint *)(fr0_ - 0x3c)) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b18),
            iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),(*(undefined4 *)(unsigned)(unsigned)0x8c277b18),ar7)), iVar1 != -1) {
        (*(undefined4 *)(unsigned)(unsigned)0x8c277b18) = (*(undefined4 *)(unsigned)(unsigned)0x8c277b18) - 1;
      }
      uVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c277b18);
      iVar5 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a1ee((*(uint *)(fr0_ - 0x28)) & 0xff00,uVar7,(*(uint *)(fr0_ - 0x3c)),ar7));
      (*(int *)(fr0_ - 0x38)) = -1;
LAB_8c238a2e:
      iVar1 = 2;
      goto LAB_8c238a34;
    }
    iVar5 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a1ee((*(uint *)(fr0_ - 0x28)) & 0xff00,ar5_00,uVar4,ar7));
    uVar2 = (*(uint *)(fr0_ - 0x3c));
    (*(int *)(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),(*(uint *)(fr0_ - 0x3c)),ar7));
    uVar3 = uVar2;
    if (iVar5 == 1) {
      uVar4 = (uint)ar4_00[2] >> 0x1a;
      if ((*(int *)(fr0_ - 0x38)) < 0) goto LAB_8c238a2e;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a5c0((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),uVar2,uVar4));
      (*(uint *)(fr0_ - 0x3c)) = uVar2;
      ar7 = uVar4;
      if (-1 < iVar1) goto LAB_8c238a32;
      iVar1 = 0;
      goto LAB_8c238a34;
    }
    if (uVar2 != 0xffffffff) {
      if ((*(int *)(fr0_ - 0x38)) < 0) goto LAB_8c238a2e;
LAB_8c238a32:
      iVar1 = 1;
      goto LAB_8c238a34;
    }
    (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,a5,0xffffffff,0));
    *(undefined2 *)(unsigned)(*a4 + 0x42) = 9;
    *(undefined2 *)(unsigned)(*a4 + 0x40) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b4) = 9;
LAB_8c238e20:
    uVar7 = 0xffffffff;
  }
  else {
    (*(uint *)(fr0_ - 0x3c)) = ar4_00[2];
    a5 = (uint *)(unsigned)*ar4_00;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25abf0(&(*(uint *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x30)),*a5,ar7));
    if (uVar2 != 0) {
      *a5 = uVar2;
      a5[4] = (uint)(*(ushort *)(fr0_ - 0x24));
      a5[5] = (uint)(*(ushort *)(fr0_ - 0x22));
      a5[1] = (*(uint *)(fr0_ - 0x28)) << 0x10;
    }
    uVar3 = (*(uint *)(fr0_ - 0x3c));
    (*(int *)(fr0_ - 0x38)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a536((*(undefined4 *)(unsigned)(unsigned)0x8c277b08),(*(undefined4 *)(unsigned)(unsigned)0x8c277b0c),(*(uint *)(fr0_ - 0x3c)),ar7));
    if ((*(int *)(fr0_ - 0x38)) < 0) {
      iVar1 = 2;
    }
    else {
      iVar1 = 1;
    }
    iVar5 = 0;
LAB_8c238a34:
    ar5_01 = (*(int *)(fr0_ - 0x38)) * 0x44 + (*(undefined4 *)(unsigned)(unsigned)0x8c277b08);
    uVar2 = uVar3;
    if (iVar1 == 0) {
      if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 2) == 0) {
        uVar2 = ar4_00[1] & 0xa0000000;
        if ((uVar2 != 0) && (uVar2 != 0x20000000)) {
          if (uVar2 == 0x80000000) {
            (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1));
LAB_8c238dc6:
            *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
          }
          goto LAB_8c238e44;
        }
        (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a914(ar4_00,ar5_01 + 0x14,(*(uint *)(fr0_ - 0x3c)),ar7));
        if (-1 < (*(int *)(fr0_ - 0x2c))) {
          ar7 = 1;
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1));
          *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
          goto LAB_8c238d18;
        }
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,1));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
LAB_8c238e0a:
        *(short *)(unsigned)(*a4 + 0x42) = -(short)(*(int *)(fr0_ - 0x2c));
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = ar5;
        goto LAB_8c238e20;
      }
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        ar7 = *(uint *)(unsigned)(ar5_01 + 0x10);
LAB_8c238b9e:
        iVar1 = ar5_01 + 0x14;
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,iVar1,uVar3,ar7));
        *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
        *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
        (*(uint *)(fr0_ - 0x3c)) = uVar3;
LAB_8c238cee:
        ({ unsigned long ri0_ = (unsigned long)(uVar2); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25a6ea(uVar2,iVar1,(*(uint *)(fr0_ - 0x3c)),ar7); });
      }
      else {
        if (uVar4 == 0x80000000) {
          if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 1) != 0) {
            (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,3));
            *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
            goto LAB_8c238dc6;
          }
          iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,(*(uint *)(fr0_ - 0x3c)),ar7));
          if (iVar1 < 0) {
            (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
            *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
            *(short *)(unsigned)(*a4 + 0x42) = -(short)iVar1;
            *(uint *)(unsigned)(*a4 + 0x10) = *(uint *)(unsigned)(*a4 + 0x10) & 0xfffffff7;
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = ar5;
            goto LAB_8c238e20;
          }
          ar7 = 2;
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2));
          *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
          *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
          *(uint *)(unsigned)(*a4 + 0x10) = *(uint *)(unsigned)(*a4 + 0x10) & 0xfffffff7;
LAB_8c238c8e:
          uVar6 = *(undefined4 *)(unsigned)(ar5_01 + 0x14);
          uVar7 = 1;
        }
        else {
          if (uVar4 != 0x20000000) goto LAB_8c238e44;
          if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 1) != 0) {
            ar7 = 3;
            goto LAB_8c238b9e;
          }
          (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,(*(uint *)(fr0_ - 0x3c)),ar7));
          if ((*(int *)(fr0_ - 0x2c)) < 0) {
            (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2));
            *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
            goto LAB_8c238e0a;
          }
          ar7 = 2;
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,ar5_01 + 0x14,uVar3,2));
          *(undefined2 *)(unsigned)(*a4 + 0x40) = *(undefined2 *)(unsigned)(ar5_01 + 0x40);
          *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
LAB_8c238cd4:
          uVar6 = *(undefined4 *)(unsigned)(ar5_01 + 0x14);
          uVar7 = 3;
        }
        ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25a608(uVar3,uVar7,uVar6,ar7); });
      }
    }
    else if (iVar1 == 1) {
      ar4_00[2] = ar5_01;
      uVar4 = ar4_00[1] & 0xa0000000;
      if (uVar4 == 0) {
        if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a914(ar4_00,ar5_02,(*(uint *)(fr0_ - 0x3c)),ar7));
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(unsigned)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) {
LAB_8c238d18:
            ({ unsigned long ri0_ = (unsigned long)(uVar3); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c25a608(uVar3,2,*(undefined4 *)(unsigned)(ar5_01 + 0x14),ar7); });
            *(uint *)(unsigned)(ar5_01 + 0x10) = *(uint *)(unsigned)(ar5_01 + 0x10) | 8;
            goto LAB_8c238e44;
          }
LAB_8c238d2a:
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c2571fe(ar5_01,ar5_02,(*(uint *)(fr0_ - 0x3c)),ar7));
          *(uint *)(unsigned)(ar5_01 + 0x10) = *(uint *)(unsigned)(ar5_01 + 0x10) | 2;
        }
        else {
joined_r0x8c238cec:
          iVar1 = ar5_01;
          if (iVar5 != 0) goto LAB_8c238cee;
        }
LAB_8c238d36:
        *(short *)(unsigned)(ar5_01 + 0x40) = *(short *)(unsigned)(ar5_01 + 0x40) + 1;
      }
      else if (uVar4 == 0x80000000) {
        if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 1) == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,(*(uint *)(fr0_ - 0x3c)),ar7));
          if (iVar1 < 0) goto LAB_8c238d08;
          *(undefined2 *)(unsigned)(ar5_01 + 0x42) = 0;
          if (iVar5 != 0) goto LAB_8c238c8e;
          *(uint *)(unsigned)(ar5_01 + 0x10) = *(uint *)(unsigned)(ar5_01 + 0x10) | 1;
        }
      }
      else if (uVar4 == 0x20000000) {
        if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 2) == 0) {
          ar5_02 = ar5_01 + 0x14;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a914(ar4_00,ar5_02,(*(uint *)(fr0_ - 0x3c)),ar7));
          if (-1 < iVar1) {
            *(undefined2 *)(unsigned)(ar5_01 + 0x42) = 0;
            if (iVar5 == 0) goto LAB_8c238d2a;
            goto LAB_8c238d18;
          }
        }
        else {
          if ((*(uint *)(unsigned)(ar5_01 + 0x10) & 1) != 0) goto joined_r0x8c238cec;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,ar5_01 + 0x14,(*(uint *)(fr0_ - 0x3c)),ar7));
          if (-1 < iVar1) {
            *(undefined2 *)(unsigned)(ar5_01 + 0x42) = 0;
            if (iVar5 != 0) goto LAB_8c238cd4;
            *(uint *)(unsigned)(ar5_01 + 0x10) = *(uint *)(unsigned)(ar5_01 + 0x10) | 1;
            goto LAB_8c238d36;
          }
        }
LAB_8c238d08:
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
        *(short *)(unsigned)(ar5_01 + 0x42) = -(short)iVar1;
        (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6ac) = ar5;
        goto LAB_8c238e20;
      }
    }
    else if (iVar1 == 2) {
      uVar7 = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a710(uVar3,ar5_01,(*(uint *)(fr0_ - 0x3c)),ar7));
      uVar6 = 0x2c;
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c23c814(uVar7,a5,0x2c,ar7));
      uVar2 = ar4_00[1] & 0xa0000000;
      if (uVar2 == 0) {
        (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a914(ar4_00,uVar7,uVar6,ar7));
        if (-1 < (*(int *)(fr0_ - 0x2c))) {
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,uVar7,uVar3,2));
          *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
joined_r0x8c238da2:
          if (iVar5 != 0) {
            *(uint *)(unsigned)(*a4 + 0x10) = *(uint *)(unsigned)(*a4 + 0x10) | 8;
          }
          goto LAB_8c238e44;
        }
      }
      else if (uVar2 == 0x80000000) {
        (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7));
        if (-1 < (*(int *)(fr0_ - 0x2c))) {
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,uVar7,uVar3,1));
          goto LAB_8c238dc6;
        }
      }
      else {
        if (uVar2 != 0x20000000) goto LAB_8c238e44;
        (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a8c0(ar4_00,uVar7,uVar6,ar7));
        if (-1 < (*(int *)(fr0_ - 0x2c))) {
          (*(int *)(fr0_ - 0x2c)) = (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a914(ar4_00,uVar7,uVar6,ar7));
          if ((*(int *)(fr0_ - 0x2c)) < 0) {
            (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,uVar7,uVar3,1));
            (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
            goto LAB_8c238e0a;
          }
          (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,uVar7,uVar3,3));
          *(undefined2 *)(unsigned)(*a4 + 0x42) = 0;
          goto joined_r0x8c238da2;
        }
      }
      (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c25a380(a4,uVar7,uVar3,0));
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa6b0) = uVar3;
      goto LAB_8c238e0a;
    }
LAB_8c238e44:
    uVar7 = 1;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c2387a0\n.set _FUN_8c2387a0, _FUN_8c2387a0_def\n");
