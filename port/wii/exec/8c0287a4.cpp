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
int s_CAnimal_LoadGResourceWait_0287ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CAnimal_LoadGResourceWait_0287ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  le<int>* piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  le<undefined4>* ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x144 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    ((le<undefined4>* )(fr0_ - 0x18))[0] = 0;
    ar7_00 = ((le<undefined4>* )(fr0_ - 0x18));
    uVar4 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020af4(ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0xc),uVar4,ar7_00));
    if (iVar3 == 0) {
      ar7_00 = (le<undefined4>* )(unsigned)0x2;
      uVar4 = 0;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                (*(le<undefined4>* )(unsigned)(iVar1 + 0xc),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2ee,0,2));
    }
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = ((le<undefined4>* )(fr0_ - 0x18))[0];
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,((le<undefined4>* )(fr0_ - 0x18))[0],uVar4,ar7_00));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00));
    uVar5 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x14));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c020ef0(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x317;
      (vsp = ((unsigned long)(fr0_ - 24)), report_error_message(*(le<undefined4>* )(unsigned)(iVar1 + 0x14),ar5_00,0,2));
    }
  }
  else {
    uVar4 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7));
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x78);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar4,ar7));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7));
    uVar5 = *(le<undefined4>* )(unsigned)(0x410 + ar4);
    ar5_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x20));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c02100c(ar5,ar5_00,uVar5,uVar4));
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1;
      (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0xda,ar5_00,0,2));
    }
  }
  if (*(le<int>* )(unsigned)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(le<int>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,ar5_00,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                      (ar5,*(le<undefined4>* )(unsigned)(iVar1 + 0x10),*(le<undefined4>* )(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        (*(le<undefined4>* )(unsigned)(iVar1 + 0x10),(&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x340
                         ,0,2));
    }
  }
  else {
    uVar5 = *(le<undefined4>* )(unsigned)(iVar1 + 0xc);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c029400))))
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4));
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (le<int>* )(unsigned)(iVar1 + ar6 * 8 + 0x88);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*piVar2 + 8))))(piVar2,iVar3,uVar5,uVar4));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0253e4))))
                      (iVar1 + ar6 * 8 + 0x88,iVar3,uVar5,uVar4));
    iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                      (ar5,*(le<undefined4>* )(unsigned)(ar6 * 0x14 + iVar1 + 0x48),
                       *(le<undefined4>* )(unsigned)(0x410 + ar4),uVar4));
    if (iVar3 == 0) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                        ((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x18c,
                         (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x2d1,0,2));
    }
  }
  return iVar3;
}

__asm__(".globl s_CAnimal_LoadGResourceWait_0287ac\n.set s_CAnimal_LoadGResourceWait_0287ac, s_CAnimal_LoadGResourceWait_0287ac_def\n");

}
