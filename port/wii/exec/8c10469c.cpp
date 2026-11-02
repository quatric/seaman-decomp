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
int s_REACTION_CATCH_1046a0_def(int ar4,int ar5,int ar6,char *ar7)

{
  TRACE_ENTER("s_REACTION_CATCH_1046a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 32; for (int i_ = 0; i_ < 32; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  if (*(le<int>* )(unsigned)(ar4 + 4) == 1) {
    iVar1 = 1;
  }
  else {
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      (vsp = ((unsigned long)(fr0_ - 32)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
    }
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x1c)),ar5 + 0x10,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x1c)),ar6,ar7));
    uVar2 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 32)), Vec3_dtor(((undefined1 *)(fr0_ - 0x1c)),0xffffffff,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x15;
    if (*(le<int>* )(unsigned)(ar4 + 900) == -1) {
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
      ar7 = "REACTION_CATCH";
      uVar2 = 0;
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(le<unsigned>* )((((unsigned long)(fr0_ - 32)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 32)) - 8); FUN_8c030568(ar4 + 0x9c,0x25,0,"REACTION_CATCH"); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xbc,"REACTION_CATCH",uVar2,ar7); });
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 32)); strcpy(ar4 + 0xdc,((undefined1 *)(unsigned)0x8c1eeec3),uVar2,ar7); });
      *(le<undefined4>* )(unsigned)(ar4 + 0xfc) = 0;
      ar6 = ar4 + 0x9c;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0f8320(0x8c35468c,*(le<undefined4>* )(unsigned)(ar4 + 0x388),ar6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 900) = uVar2;
      *(le<undefined4>* )(unsigned)(ar4 + 0x14c) = 0;
      uVar2 = 2;
      (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,2,ar6,ar7));
    }
    iVar1 = *(le<int>* )(unsigned)(ar4 + 900);
    if (iVar1 != -1) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
      iVar1 = (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c0fa2b8(0x8c35468c,uVar2,ar6,ar7));
      if (iVar1 == 0) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
        (vsp = ((unsigned long)(fr0_ - 32)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x19;
        *(undefined1 *)(unsigned)(ar4 + 0x91) = 1;
        *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
        *(undefined1 *)(unsigned)(ar4 + 0x80) = 1;
        iVar1 = 900;
        *(le<undefined4>* )(unsigned)(ar4 + 900) = 0xffffffff;
      }
    }
  }
  return iVar1;
}

__asm__(".globl s_REACTION_CATCH_1046a0\n.set s_REACTION_CATCH_1046a0, s_REACTION_CATCH_1046a0_def\n");

}
