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
int s_cp_ESA_FRONT_HOME_njd_08bd28_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_cp_ESA_FRONT_HOME_njd_08bd28";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar7_00;
  
  iVar1 = -0x208;
  (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  ar7_00 = ar4 + ar6;
  (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139e9c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
  if (ar6 == 2) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f68)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f6c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    uVar4 = *(undefined4 *)(unsigned)(0x410 + ar4);
    uVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f70));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020d58(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(undefined4 *)(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(undefined4 *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar1) = uVar2;
    ar6 = *(int *)(unsigned)((fr0_ + (int)0xfffffff0) + iVar1);
    if (ar6 == -1) {
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) =
           *(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x844 + ar4));
      *(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((int)&(*(undefined4 *)(fr0_ - 0x1c)) + 0x110 + iVar1,uVar3,uVar4,ar7_00); });
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((int)((int *)(fr0_ - 0x18)) + 0x10c + iVar1,
                       (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5dd,1,2));
    }
  }
  else if (ar6 == 3) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f54)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f5c)),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f54)) + 4),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00))
    ;
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(undefined4 *)(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f5c)) + 4),*(undefined4 *)(unsigned)(0x410 + ar4),ar7_00))
    ;
    uVar4 = *(undefined4 *)(unsigned)(0x410 + ar4);
    uVar3 = *(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f4c));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020e48(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(undefined4 *)(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1 + 4) = uVar2;
    ar6 = *(int *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1 + 4);
    if (ar6 == -1) {
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) =
           *(undefined4 *)(unsigned)*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(0x844 + ar4));
      *(unsigned *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(undefined4 *)(unsigned)((int)&(*(undefined4 *)(fr0_ - 0x1c)) + iVar1)); *(unsigned *)((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((fr0_ + (int)0xfffffff4) + iVar1,uVar3,uVar4,ar7_00); });
      *(undefined4 *)(unsigned)((int)((int *)(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((fr0_ + (int)0xfffffff4) + iVar1,(&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5ff,1,2));
    }
  }
  return ar6;
}

__asm__(".globl _s_cp_ESA_FRONT_HOME_njd_08bd28\n.set _s_cp_ESA_FRONT_HOME_njd_08bd28, _s_cp_ESA_FRONT_HOME_njd_08bd28_def\n");
