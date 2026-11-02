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
undefined4 s_GRAPHICS_ENV_0c97c4_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0c97c4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 24; for (int i_ = 0; i_ < 24; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  
  ar5_00 = ar5;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0c51fc))))
                    (*(undefined4 *)(unsigned)(0x7cc + ar5),ar5,ar6,ar7));
  ((undefined4 *)(fr0_ - 0x18))[0] = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c51c4(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar1 * 4 + 8));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x138 + *piVar3))))(piVar3,ar5_00,ar6,ar7));
  if (iVar2 == 2) {
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c1006bc(*(undefined4 *)(unsigned)(0x7cc + ar5),ar5_00,ar6,ar7));
  }
  if (iVar1 != 0) {
    piVar3 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + iVar1 * 4 + 8));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*piVar3 + 0x78))))(piVar3,(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c0c51b8(*(undefined4 *)(unsigned)(0x7cc + ar5),0,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)) + 0x70))))
              (((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),(uint)*(byte *)(unsigned)(0xa0 + ar5),ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 24)), FUN_8c021720(0x8c2b59d0,1,ar6,ar7));
    ar6 = (uint)*(byte *)(unsigned)(0xa0 + ar5);
    (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0d1c20))))
              (*(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 8),*(undefined4 *)(unsigned)(ar4 + 8),ar6,ar7));
  }
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x84 + *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8))))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 8)),0x8c3eb334,ar6,ar7));
  *(undefined4 *)(unsigned)(0x2d1b0 + ar4) = 2;
  *(undefined4 *)(unsigned)(0x2d1b4 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 24)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0209b0))))
            (0x8c3eb334,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1b7,
             (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x1be,((undefined4 *)(fr0_ - 0x18))));
  return 0;
}

__asm__(".globl _s_GRAPHICS_ENV_0c97c4\n.set _s_GRAPHICS_ENV_0c97c4, _s_GRAPHICS_ENV_0c97c4_def\n");
