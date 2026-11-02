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
undefined4 FUN_8c234d68_def(undefined4 ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "FUN_8c234d68";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 132; for (int i_ = 0; i_ < 132; i_++) z_[i_] = 0; }
  undefined1 *ar4_00;
  int iVar1;
  undefined1 *a7;
  int iVar2;
  undefined4 uVar3;
  uint a5;
  undefined1 *a6;
  undefined1 *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  code *pcVar7;
  undefined8 in_dr12 = 0;
  undefined8 in_dr14 = 0;
  
  (*(undefined4 *)(fr0_ - 0x20)) = (undefined4)in_dr14;
  (*(undefined4 *)(fr0_ - 0x24)) = (undefined4)((ulonglong)in_dr14 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x28)) = (undefined4)in_dr12;
  (*(undefined4 *)(fr0_ - 0x2c)) = (undefined4)((ulonglong)in_dr12 >> 0x20);
  a5 = ar5;
  a6 = ar6;
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c236454(((undefined1 *)(unsigned)0x8c4aa4a8),ar5,ar6,ar7));
  if (((uint)ar6 & 0x80000000) == 0) {
    if (((uint)ar6 & 0x40) == 0) {
      uVar3 = 0x80002;
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c237124(0x80002,a5,a6,ar7));
      ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c236510(uVar3,a5,a6,ar7));
    }
    else {
      uVar3 = 0x2100002;
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c237124(0x2100002,a5,a6,ar7));
      ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c2365e2(uVar3,a5,a6,ar7));
    }
    pcVar7 = ((void *)0x8c233f1c);
    iVar2 = 0x10;
    pcVar5 = ((void *)0x8c25c3a4);
  }
  else {
    if (((uint)ar6 & 0x40) == 0) {
      uVar3 = 0x8000a;
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c237124(0x8000a,a5,a6,ar7));
      ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c23666c(uVar3,a5,a6,ar7));
    }
    else {
      uVar3 = 0x210000a;
      (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c237124(0x210000a,a5,a6,ar7));
      ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), FUN_8c236718(uVar3,a5,a6,ar7));
    }
    pcVar7 = ((void *)0x8c233e70);
    pcVar5 = ((void *)0x8c25c868);
    iVar2 = 0x18;
  }
  if (((uint)ar6 & 2) == 0) {
    if (((uint)ar6 & 1) == 0) {
      (*(int *)(fr0_ - 0x7c)) = 0;
      (*(uint *)(fr0_ - 0x80)) = 0;
      puVar4 = ar4_00;
      if (0 < ar5) {
        do {
          a5 = (*(uint *)(fr0_ - 0x80));
          ar7 = ((undefined1 *)(fr0_ - 0x60));
          puVar6 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar7))(ar4,(*(uint *)(fr0_ - 0x80)),2,((undefined1 *)(fr0_ - 0x60))));
          a6 = puVar6;
          ar4_00 = puVar4;
          if (puVar6 != (undefined1 *)(unsigned)0xffffffff) {
            a5 = 2;
            ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar5))(((undefined1 *)(fr0_ - 0x60)),2,puVar4,puVar6));
            a6 = puVar4;
            ar7 = puVar6;
          }
          (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 1;
          (*(uint *)(fr0_ - 0x80)) = (*(uint *)(fr0_ - 0x80)) + 2;
          puVar4 = ar4_00;
        } while ((*(int *)(fr0_ - 0x7c)) < ar5);
      }
    }
    else {
      a6 = (undefined1 *)(unsigned)0x1;
      a5 = 0;
      ar7 = ((undefined1 *)(fr0_ - 0x60));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar7))(ar4,0,1,((undefined1 *)(fr0_ - 0x60))));
      if (iVar1 != -1) {
        (*(int *)(fr0_ - 0x7c)) = 0;
        (*(uint *)(fr0_ - 0x80)) = 1;
        puVar6 = ((undefined1 *)(fr0_ - 0x60)) + iVar2;
        puVar4 = ar4_00;
        if (0 < ar5) {
          do {
            a5 = (*(uint *)(fr0_ - 0x80));
            ar7 = puVar6;
            a7 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar7))(ar4,(*(uint *)(fr0_ - 0x80)),1,puVar6));
            a6 = a7;
            ar4_00 = puVar4;
            if (a7 != (undefined1 *)(unsigned)0xffffffff) {
              a5 = 2;
              ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar5))(((undefined1 *)(fr0_ - 0x60)),2,puVar4,a7));
              a6 = puVar4;
              ar7 = a7;
            }
            (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 1;
            (*(uint *)(fr0_ - 0x80)) = (*(uint *)(fr0_ - 0x80)) + 1;
            puVar4 = ar4_00;
          } while ((*(int *)(fr0_ - 0x7c)) < ar5);
        }
      }
    }
  }
  else {
    a6 = (undefined1 *)(unsigned)0x1;
    a5 = 0;
    ar7 = ((undefined1 *)(fr0_ - 0x60));
    ((int *)(fr0_ - 0x68))[0] = (vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar7))(ar4,0,1,((undefined1 *)(fr0_ - 0x60))));
    (*(uint *)(fr0_ - 0x80)) = 1;
    (*(int *)(fr0_ - 0x70)) = 0;
    (*(int *)(fr0_ - 0x7c)) = 1;
    puVar4 = ar4_00;
    if (0 < ar5) {
      do {
        a6 = (undefined1 *)(unsigned)0x1;
        ar7 = ((undefined1 *)(fr0_ - 0x60)) + (*(uint *)(fr0_ - 0x80)) * iVar2;
        a5 = (*(int *)(fr0_ - 0x7c));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar7))(ar4,(*(int *)(fr0_ - 0x7c)),1,ar7));
        ((int *)(fr0_ - 0x68))[(*(uint *)(fr0_ - 0x80))] = iVar1;
        ar4_00 = puVar4;
        if ((((int *)(fr0_ - 0x68))[0] != -1) && (((int *)(fr0_ - 0x68))[1] != -1)) {
          a5 = 2;
          ar7 = (undefined1 *)(unsigned)(((int *)(fr0_ - 0x68))[0] + ((int *)(fr0_ - 0x68))[1]);
          ar4_00 = (undefined1 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 132)), (*(code *)xlat((unsigned long)pcVar5))(((undefined1 *)(fr0_ - 0x60)),2,puVar4,ar7));
          a6 = puVar4;
        }
        (*(uint *)(fr0_ - 0x80)) = (*(uint *)(fr0_ - 0x80)) ^ 1;
        (*(int *)(fr0_ - 0x70)) = (*(int *)(fr0_ - 0x70)) + 1;
        (*(int *)(fr0_ - 0x7c)) = (*(int *)(fr0_ - 0x7c)) + 1;
        puVar4 = ar4_00;
      } while ((*(int *)(fr0_ - 0x70)) < ar5);
    }
  }
  (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c2370dc(ar4_00,a5,a6,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 132)), FUN_8c2364b2(ar4_00,a5,a6,ar7));
  return uVar3;
}

__asm__(".globl _FUN_8c234d68\n.set _FUN_8c234d68, _FUN_8c234d68_def\n");
