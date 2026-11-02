#include "../decls.h"
extern "C" {
#include "../trace.h"
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
  TRACE_ENTER("s_cp_ESA_FRONT_HOME_njd_08bd28");
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
            (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139e9c)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
  if (ar6 == 2) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f68)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f6c)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    uVar4 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    uVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f70));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020d58(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(le<undefined4>* )(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(le<undefined4>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar1) = uVar2;
    ar6 = *(le<int>* )(unsigned)((fr0_ + (int)0xfffffff0) + iVar1);
    if (ar6 == -1) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1) =
           *(le<undefined4>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x844 + ar4));
      *(le<unsigned>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x1c)) + iVar1)); *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((int)&(*(le<undefined4>* )(fr0_ - 0x1c)) + 0x110 + iVar1,uVar3,uVar4,ar7_00); });
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((int)((le<int>* )(fr0_ - 0x18)) + 0x10c + iVar1,
                       (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5dd,1,2));
    }
  }
  else if (ar6 == 3) {
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f44)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f54)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f5c)),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00));
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020c60))))
              (ar5,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f54)) + 4),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00))
    ;
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020d58))))
              (ar5,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c139f5c)) + 4),*(le<undefined4>* )(unsigned)(0x410 + ar4),ar7_00))
    ;
    uVar4 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    uVar3 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c139f4c));
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c020e48(ar5,uVar3,uVar4,ar7_00));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c256670(*(le<undefined4>* )(unsigned)(0x844 + ar4),uVar3,uVar4,ar7_00));
    *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1 + 4) = uVar2;
    ar6 = *(le<int>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1 + 4);
    if (ar6 == -1) {
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1) =
           *(le<undefined4>* )(unsigned)*((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x844 + ar4));
      *(le<unsigned>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x1c)) + iVar1) = (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5be;
      ({ unsigned long t0_ = (unsigned long)(
                 *(le<undefined4>* )(unsigned)((int)&(*(le<undefined4>* )(fr0_ - 0x1c)) + iVar1)); *(le<unsigned>* )((((unsigned long)(fr0_ - 44)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 44)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
                ((fr0_ + (int)0xfffffff4) + iVar1,uVar3,uVar4,ar7_00); });
      *(le<undefined4>* )(unsigned)((int)((le<int>* )(fr0_ - 0x18)) + iVar1) = 5;
      ar6 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((fr0_ + (int)0xfffffff4) + iVar1,(&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x5ff,1,2));
    }
  }
  return ar6;
}

__asm__(".globl s_cp_ESA_FRONT_HOME_njd_08bd28\n.set s_cp_ESA_FRONT_HOME_njd_08bd28, s_cp_ESA_FRONT_HOME_njd_08bd28_def\n");

}
