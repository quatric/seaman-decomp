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
undefined4 s_CMothLine_08ad54_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_CMothLine_08ad54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 400; for (int i_ = 0; i_ < 400; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  (*(unsigned *)(fr0_ - 0xc4) = (unsigned)(unsigned long)(ar5));
  (*(undefined4 *)(fr0_ - 0xc0)) = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 400)), get_field_25c_08a6f8(ar4 + 0x538,ar5,ar6,ar7));
  (*(int *)(fr0_ - 0xa0)) = iVar1;
  (vsp = ((unsigned long)(fr0_ - 400)), Vec3_ctor_zero((int)((int * *)(fr0_ - 0xc4)) + 0xa8,ar5,ar6,ar7));
  (*(int *)(fr0_ - 0xa4)) = iVar1;
  if (*(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4) == 0) {
    ar7 = 2;
    ar6 = 1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x466,
               (&(*(undefined1 *)(unsigned)0x8c139fcc)) + 0x470,1,2));
  }
  else {
    iVar3 = *(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    uVar2 = (*(undefined4 *)(fr0_ - 0xc0));
    (*(int *)(fr0_ - 0xa8)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x10c + *(int *)(unsigned)(iVar3 + 8)))))(iVar3,(*(undefined4 *)(fr0_ - 0xc0)),ar6,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x140 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)((int)((int * *)(fr0_ - 0xc4)) + 0x88); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0230f0))))
                ((fr0_ + (int)0xffffff38) + 0x9c,uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_normalize((fr0_ + (int)0xffffff38) + 0x8c,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x5c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x4c)),(&(*(undefined1 *)(unsigned)0x8c139fc4)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_assign((int)((int * *)(fr0_ - 0xc4)) + 0xa8,((undefined1 *)(fr0_ - 0x5c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x5c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x4c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0x88,0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0x98,0xffffffff,ar6,ar7));
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x140 + *(int *)(unsigned)(ar4 + 8)))))(ar4,uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x7c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0x6c)),uVar2,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_normalize(((undefined1 *)(fr0_ - 0x7c)),uVar2,ar6,ar7));
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x9c))); *(unsigned *)((((unsigned long)(fr0_ - 400)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 400)) - 8); Vec3_scale(((undefined1 *)(fr0_ - 0x8c)),(&(*(undefined1 *)(unsigned)0x8c139fc8)),ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_assign((int)((int * *)(fr0_ - 0xc4)) + 0xa8,((undefined1 *)(fr0_ - 0x9c)),ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x9c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x8c)),0xffffffff,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x7c)),0xffffffff,ar6,ar7));
      uVar2 = 0xffffffff;
      (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor(((undefined1 *)(fr0_ - 0x6c)),0xffffffff,ar6,ar7));
    }
    (*(int *)(fr0_ - 0xac)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), FUN_8c036988(*(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7));
    iVar3 = *(int *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    (*(int *)(fr0_ - 0xb0)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(iVar3 + 8) + 0x5c))))(iVar3,uVar2,ar6,ar7));
    uVar2 = *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4);
    (*(int *)(fr0_ - 0xb4)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc4)) + 0x4c))))(((int *)(unsigned long)*(unsigned *)(fr0_ - 0xc4)),uVar2,ar6,ar7));
    (*(int *)(fr0_ - 0xb8)) = iVar1;
    (vsp = ((unsigned long)(fr0_ - 400)), FUN_8c036988(*(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4),uVar2,ar6,ar7));
    *(undefined4 *)(unsigned)(0x8ec + ar4 + iVar1 * 4) = 0;
    (*(int *)(fr0_ - 0xbc)) = iVar1;
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 400)), Vec3_dtor((int)((int * *)(fr0_ - 0xc4)) + 0xa8,0xffffffff,ar6,ar7));
  return uVar2;
}

__asm__(".globl _s_CMothLine_08ad54\n.set _s_CMothLine_08ad54, _s_CMothLine_08ad54_def\n");
