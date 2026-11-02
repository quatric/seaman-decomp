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
int s_STATUS_LASTONE_066468_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_STATUS_LASTONE_066468";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  int ar5_00;
  undefined4 ar5_01;
  
  iVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 == 7) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,5,iVar3,ar7));
    if (iVar1 == 1) {
      ar5_00 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,iVar3,ar7));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c03598c))))
                          (*(undefined4 *)(unsigned)(ar6 + 0xc),ar5_00,iVar3,ar7));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0637d0))))
                            (*(undefined4 *)(unsigned)(0x7cc + *(int *)(unsigned)(ar6 + 0x18)),ar5_00,iVar3,ar7));
          if (((iVar1 == 0) && (iVar1 = *(int *)(unsigned)(0x384 + ar4), iVar1 == -1)) &&
             (iVar1 = 3, *(char *)(unsigned)(0x98 + ar4) < '\x04')) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5_00,iVar3,ar7));
            ar5_01 = 0x43;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                              (uVar2 & 0xffff,0x43,iVar3,ar7));
            if (iVar1 == 2) {
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(undefined4 *)(unsigned)(ar6 + 0x18),ar5_01,iVar3,ar7));
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                                (uVar2 & 0xffff,0x3c,iVar3,ar7));
              iVar1 = 2;
              if ((2 < iVar3) && (iVar1 = *(int *)(unsigned)(0x868 + ar4), iVar1 == 0)) {
                *(undefined4 *)(unsigned)(0x868 + ar4) = 1;
                iVar1 = ({ unsigned long t0_ = (unsigned long)(
                                   (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x37); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                                  (ar4 + 0x9c,0x16,0,
                                   (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x4dc); });
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LASTONE_066468\n.set _s_STATUS_LASTONE_066468, _s_STATUS_LASTONE_066468_def\n");
