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
int s_GRAPHICS_SQUIDLINE_0ac6a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_SQUIDLINE_0ac6a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined *ar5_00;
  undefined2 *ar5_01;
  undefined4 uVar2;
  undefined4 ar7_00;
  int iVar3;
  
  ar7_00 = 0xc;
  uVar2 = 1;
  uVar1 = 2;
  ({ unsigned long t0_ = (unsigned long)(0); unsigned long t1_ = (unsigned long)(ar5); unsigned long t2_ = (unsigned long)(0x8c2868d8); unsigned long t3_ = (unsigned long)(0x8c286a08); unsigned long t4_ = (unsigned long)(*(undefined4 *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c13b4d4))); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 4) = (unsigned)t1_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 8) = (unsigned)t2_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 12) = (unsigned)t3_; *(unsigned *)((((unsigned long)(fr0_ - 4)) - 24) + 16) = (unsigned)t4_; vsp = (((unsigned long)(fr0_ - 4)) - 24); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0254d0))))
            (ar4,2,1,0xc); });
  *(unsigned *)(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12b110));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0b5a30(ar4 + 0x490,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0afa50(ar4 + 0x53c,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016fcc(ar4 + 0x894,uVar1,uVar2,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c015224(ar4 + 0x9bc,uVar1,uVar2,ar7_00));
  ({ unsigned long t0_ = (unsigned long)(10); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0x9c4,((void *)(unsigned)0x8c016410),0,0x44); });
  uVar2 = 0x44;
  uVar1 = 0;
  ar5_00 = ((void *)(unsigned)0x8c016410);
  ({ unsigned long t0_ = (unsigned long)(0x28); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c010120(ar4 + 0xc6c,((void *)(unsigned)0x8c016410),0,0x44); });
  ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x338); *(unsigned *)((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c014334))))
            (ar4 + 0xc,ar5_00,uVar1,uVar2); });
  *(undefined4 *)(unsigned)(0x170c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1710 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x1714 + ar4) = 0xffffffff;
  *(int *)(unsigned)(0x308 + ar4) = ar4 + 0x490;
  *(int *)(unsigned)(0x30c + ar4) = ar4 + 0x53c;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(0x928 + ar4 + iVar3 * 4) = 0;
    *(undefined4 *)(unsigned)(0x948 + ar4 + iVar3 * 4) = 0;
  }
  *(undefined1 *)(unsigned)(0x968 + ar4) = 0;
  *(undefined4 *)(unsigned)(0x88c + ar4) = 0;
  *(undefined4 *)(unsigned)(0x890 + ar4) = 0;
  *(uint *)(unsigned)(ar4 + 0x74) = *(uint *)(unsigned)(ar4 + 0x74) | 0x10;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f532c))))
            (ar4,*(undefined4 *)(unsigned)(0xb4 + *(int *)(unsigned)(0x328 + ar4)),ar4 + 0x894,
             uVar2));
  for (iVar3 = 0; iVar3 < 6; iVar3 = iVar3 + 1) {
    *(undefined4 *)(unsigned)(0x970 + iVar3 * 0xc + ar4) = 0;
  }
  uVar2 = 6;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c239170(ar4 + 0x9b4,ar4 + 0x96c,0x8c4312a8,6));
  iVar3 = ar4 + 0x9b4;
  (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x9bc) + 8))))((int *)(unsigned)(ar4 + 0x9bc),iVar3,uVar1,uVar2));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_4_0253e4(ar4 + 0x9bc,iVar3,uVar1,uVar2));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x342,
                     (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x10,uVar1));
  if (iVar3 == -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
              ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x351,
               (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x36a,0,2));
  }
  *(undefined4 *)(unsigned)0x8c286868 = 0;
  ((undefined1 *)(unsigned)1)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)2)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)3)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)4)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)5)[0x8c286868] = (short)0xff;
  ((undefined1 *)(unsigned)6)[0x8c286868] = 0;
  ((undefined1 *)(unsigned)7)[0x8c286868] = (short)0xff;
  *(undefined4 *)(unsigned)0x8c286858 = 0xffffffff;
  ((undefined1 *)(unsigned)1)[0x8c286858] = 0xffffffff;
  ((undefined1 *)(unsigned)2)[0x8c286858] = 0xffffffff;
  ((undefined1 *)(unsigned)3)[0x8c286858] = 0xffffffff;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 3) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 7) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 0xb) = 0;
  *(undefined1 *)(unsigned)((unsigned)0x8c286858 + 0xf) = 0;
  for (iVar3 = 0; iVar3 < 10; iVar3 = iVar3 + 1) {
    uVar2 = 4;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c016464(iVar3 * 0x44 + ar4 + 0x9c4,(&(*(undefined1 *)(unsigned)0x8c13b474)),0x8c286858,4));
    uVar1 = 4;
    ar5_01 = 0x8c286868;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0164c8(iVar3 * 0x44 + ar4 + 0x9c4,0x8c286868,4,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014790(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014764(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c014a64(iVar3 * 0x44 + ar4 + 0x9c4,ar5_01,uVar1,uVar2));
  }
  return ar4;
}

__asm__(".globl _s_GRAPHICS_SQUIDLINE_0ac6a4\n.set _s_GRAPHICS_SQUIDLINE_0ac6a4, _s_GRAPHICS_SQUIDLINE_0ac6a4_def\n");
