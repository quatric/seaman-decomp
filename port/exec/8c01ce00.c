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
undefined4 asr_init_from_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "asr_init_from_model";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 *ar7_00;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), asr_lib_create_engine((&(*(undefined1 *)(unsigned)0x8c12fb40)),0,0x8c279258,ar7));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10bf44))))
                      (*(undefined4 *)(unsigned)0x8c279258,*(undefined4 *)(unsigned)(0x5b34 + ar4),1,0x8c279260));
    if (iVar1 == 0) {
      *(undefined4 *)(unsigned)0x8c2791b8 = 3;
      uVar2 = 0;
      ar7_00 = 0x8c27925c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10bfc6))))
                        (*(undefined4 *)(unsigned)0x8c279258,(&(*(undefined1 *)(unsigned)0x8c12fb64)),0,0x8c27925c));
      if (iVar1 == 0) {
        ar5_00 = *(undefined4 *)(unsigned)0x8c279260;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c10b840))))
                          (*(undefined4 *)(unsigned)0x8c27925c,ar5_00,uVar2,ar7_00));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c01cee0(ar4,ar5_00,uVar2,ar7_00));
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            *(undefined4 *)(unsigned)0x8c2791b8 = 4;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _asr_init_from_model\n.set _asr_init_from_model, _asr_init_from_model_def\n");
