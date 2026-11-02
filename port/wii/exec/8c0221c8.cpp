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
undefined4 FUN_8c0221c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0221c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(le<undefined4>* )(unsigned)(iVar4 * 0x10 + ar4) = 0;
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(le<undefined4>* )(unsigned)(0x2d150 + ar4 + iVar4 * 0x208e0) = 0;
  }
  (vsp = ((unsigned long)(fr0_ - 16)), thunk_FUN_8c25ecdc(ar7,0,ar6,ar7));
  iVar4 = ar4 + 0x8ebf0;
  uVar1 = 0x8000;
  (vsp = ((unsigned long)(fr0_ - 16)), s_E9040804_can_t_open_s_ADXF_L_261ba4(0,ar6,iVar4,0x8000));
  uVar3 = 0;
  (vsp = ((unsigned long)(fr0_ - 16)), thunk_FUN_8c25ecdc((&(*(undefined1 *)(unsigned)0x8c022c48)),0,iVar4,uVar1));
  iVar4 = (vsp = ((unsigned long)(fr0_ - 16)), aica_driver_load_manatee(ar4,uVar3,iVar4,uVar1));
  if (iVar4 == 1) {
    ar6_00 = (&(*(undefined1 *)(unsigned)0x8c12fc98));
    iVar4 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c022494(ar4,ar5,(&(*(undefined1 *)(unsigned)0x8c12fc98)),uVar1));
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c1f7f1e(((le<int>* )(fr0_ - 0x10)),ar5,ar6_00,uVar1));
      if (((le<int>* )(fr0_ - 0x10))[0] == 0) {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f525453,ar5,ar6_00,uVar1));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c268818(0x4f4e4f4d,ar5,ar6_00,uVar1));
      }
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c265f84(1,ar5,ar6_00,uVar1));
      uVar3 = 0x2d0c4;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263840(2,ar4 + 0x8c,0x2d0c4,uVar1)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263840, uVar2, ar4, 0); }
      *(le<undefined4>* )(unsigned)(ar4 + 0x74) = uVar2;
      (vsp = ((unsigned long)(fr0_ - 16)), FUN_8c263ffa(*(le<undefined4>* )(unsigned)(ar4 + 0x74),2,uVar3,uVar1));
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = 0x208c4;
        uVar2 = (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263840))))
                          (2,ar4 + iVar4 * 0x208e0 + 0x2d16c,0x208c4,uVar1));
        *(le<undefined4>* )(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0) = uVar2; { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x263841, uVar2, iVar4, *(le<unsigned>* )(unsigned)(ar4 + 0x74)); { extern void dbg_dump(unsigned long,int); dbg_dump(0x8c4beb48, 16); dbg_dump(0x8c4beb88, 42); } }
        (vsp = ((unsigned long)(fr0_ - 16)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c263ffa))))
                  (*(le<undefined4>* )(unsigned)(0x2d154 + ar4 + iVar4 * 0x208e0),1,uVar3,uVar1));
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl FUN_8c0221c8\n.set FUN_8c0221c8, FUN_8c0221c8_def\n");

}
