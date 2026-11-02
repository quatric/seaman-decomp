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
int s_REACTION_CATCH_05f4a2_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_REACTION_CATCH_05f4a2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 28; for (int i_ = 0; i_ < 28; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar7_00;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
    (vsp = ((unsigned long)(fr0_ - 28)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x18)),ar5 + 0x10,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x18)),ar6,ar7));
  uVar2 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 28)), Vec3_dtor(((undefined1 *)(fr0_ - 0x18)),0xffffffff,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x15;
  if (*(le<int>* )(unsigned)(ar4 + 900) != -1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7));
    if (iVar1 == 0) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
      (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x10;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x19;
      *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 900) = 0xffffffff;
    }
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 900);
  if (iVar1 == -1) {
    (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
    ar7_00 = ((undefined1 *)(unsigned)0x8c136a22);
    uVar2 = 0;
    ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 28)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 28)) - 8); FUN_8c030568(ar4 + 0x9c,0x25,0,((undefined1 *)(unsigned)0x8c136a22)); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0xbc,((undefined1 *)(unsigned)0x8c136a22),uVar2,ar7_00); });
    ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 28)); strcpy(ar4 + 0xdc,((undefined1 *)(unsigned)0x8c1369bf),uVar2,ar7_00); });
    *(le<undefined4>* )(unsigned)(ar4 + 0xfc) = 0;
    iVar1 = ar4 + 0x9c;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c0f8320(0x8c35468c,*(le<undefined4>* )(unsigned)(ar4 + 0x388),iVar1,ar7_00));
    *(le<undefined4>* )(unsigned)(ar4 + 900) = uVar2;
    *(le<undefined4>* )(unsigned)(ar4 + 0x14c) = 0;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 28)), FUN_8c030870(ar4 + 0x9c,2,iVar1,ar7_00));
  }
  return iVar1;
}

__asm__(".globl s_REACTION_CATCH_05f4a2\n.set s_REACTION_CATCH_05f4a2, s_REACTION_CATCH_05f4a2_def\n");

}
