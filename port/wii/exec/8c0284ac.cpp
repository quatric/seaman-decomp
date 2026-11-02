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
undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8_def(int ar4,undefined4 ar5,int ar6,le<undefined4>* ar7)

{
  TRACE_ENTER("s_Failed_to_Load_CAnimal_LoadG_0284b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 100; for (int i_ = 0; i_ < 100; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  le<undefined4>* ar7_00;
  le<undefined4>* ar7_01;
  int iVar5;
  
  iVar5 = *(le<int>* )(unsigned)(ar4 + 0x328) + ar6 * 0x124;
  ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
  (*(le<undefined4>* )(fr0_ - 0x24)) = 0;
  ar7_01 = (le<undefined4>* )(unsigned)(ar4 + ar6);
  iVar3 = ar6;
  if (*(le<int>* )(unsigned)(iVar5 + 0x18) != 0) {
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ddc(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0x18),iVar3,ar7_01));
    if (iVar1 == 0) {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message(*(le<undefined4>* )(unsigned)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2));
    }
  }
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4))) == '\0') {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      (vsp = ((unsigned long)(fr0_ - 100)), report_error_message("Attach NULL!!",((undefined1 *)(unsigned)0x8c130008),0,2));
      ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((le<undefined4>* )(fr0_ - 0x20));
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (le<undefined4>* )(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(*(le<int>* )(unsigned)(iVar5 + 0xa0) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  if (*(le<int>* )(unsigned)(iVar5 + 0x1c) != 0) {
    ar7 = ((le<undefined4>* )(fr0_ - 0x20));
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020bec(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0x1c),iVar3,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015bb0(iVar5 + 0xb0,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
    }
    else {
      ar7 = (le<undefined4>* )(unsigned)0x2;
      iVar3 = 0;
      report_error_message
                (*(le<undefined4>* )(unsigned)(iVar5 + 0x1c),((undefined1 *)(unsigned)0x8c13001e),0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(le<short>* )(unsigned)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8))) == '\0') {
      ((le<undefined4>* )(fr0_ - 0x20))[0] = 0;
    }
    else {
      ar7 = ((le<undefined4>* )(fr0_ - 0x20));
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x410);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c020ce4(ar5,*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8)),iVar3,ar7));
      if (iVar2 == 0) {
        ar7 = (le<undefined4>* )(unsigned)0x2;
        iVar3 = 0;
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar1 * 4 + *(le<int>* )(unsigned)(iVar5 + 8)),((undefined1 *)(unsigned)0x8c130041),0,
                   2);
      }
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],
                   iVar3,ar7); });
    }
    (*(le<int>* )(fr0_ - 0x64)) = iVar1;
    ({ unsigned long ri0_ = (unsigned long)(iVar1); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015be4(*(le<int>* )(unsigned)(iVar5 + 0xa8) + iVar1 * 4,((le<undefined4>* )(fr0_ - 0x20))[0],iVar3,ar7); });
  }
  ar7_00 = &(*(le<undefined4>* )(fr0_ - 0x24));
  uVar4 = *(le<undefined4>* )(unsigned)(ar4 + 0x410);
  iVar3 = (vsp = ((unsigned long)(fr0_ - 100)), FUN_8c0209fc(ar5,*(le<undefined4>* )(unsigned)(iVar5 + 0xc),uVar4,ar7_00));
  if (iVar3 == 0) {
    ar7_00 = (le<undefined4>* )(unsigned)0x2;
    uVar4 = 0;
    report_error_message
              (*(le<undefined4>* )(unsigned)(iVar5 + 0xc),((undefined1 *)(unsigned)0x8c130054),0,2);
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x64))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 100)); FUN_8c015ad4(iVar5 + 0x70,(*(le<undefined4>* )(fr0_ - 0x24)),uVar4,ar7_00); });
  (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01));
  uVar4 = 0;
  if (*(le<int>* )(unsigned)(iVar5 + 0x34) != 0) {
    uVar4 = (vsp = ((unsigned long)(fr0_ - 100)), s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01));
  }
  return uVar4;
}

__asm__(".globl s_Failed_to_Load_CAnimal_LoadG_0284b8\n.set s_Failed_to_Load_CAnimal_LoadG_0284b8, s_Failed_to_Load_CAnimal_LoadG_0284b8_def\n");

}
