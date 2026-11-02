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
int s_STATUS_LIFE_1097b2_def(int ar4,int *ar5,int *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "s_STATUS_LIFE_1097b2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  
  iVar6 = 0;
  piVar3 = ar5;
  piVar5 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_124_027930(ar6[2],ar5,ar6,ar7));
  if ((iVar1 != 2) &&
     (piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
    piVar3 = (int *)(unsigned)0x3c;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
    if (1 < iVar1) {
      piVar3 = (int *)(unsigned)0x0;
      while( true ) {
        uVar4 = 3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
        if (iVar1 <= (int)piVar3) break;
        uVar4 = 3;
        piVar5 = piVar3;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
        if (iVar1 == 4) {
LAB_8c1098a4:
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0xb4 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 1) {
            iVar6 = iVar6 + 1;
          }
        }
        else {
          uVar4 = 3;
          piVar5 = piVar3;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x100 + *ar5))))(ar5,3,piVar3,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x114 + *(int *)(unsigned)(iVar1 + 8)))))(iVar1,uVar4,piVar5,ar7));
          if (iVar1 == 3) goto LAB_8c1098a4;
        }
        piVar3 = (int *)(unsigned)((int)piVar3 + 1);
      }
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],uVar4,piVar5,ar7));
      piVar3 = (int *)(unsigned)0x3c;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      if ((((0 < iVar1) &&
           (uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bef8(ar6[1],piVar3,piVar5,ar7)), 6 < (short)uVar4)) &&
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02d1a0))))
                             (ar6[1] + 0xa8,piVar3,piVar5,ar7)), 0 < iVar1)) &&
         (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7)),
           iVar1 == 4 && (*(int *)(unsigned)(0x384 + ar4) == -1)) &&
          ((iVar6 == 1 && ((*(char *)(unsigned)(0x98 + ar4) < '\x04' && (*(int *)(unsigned)(ar4 + 4) == 0)))))))
         ) {
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x22c;
        piVar5 = (int *)(unsigned)0x0;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030568))))
                  (ar4 + 0x9c,0x16,0,ar7); });
        piVar3 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c109b10(ar6[1] + 0xa8,0,piVar5,ar7));
      }
    }
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7));
  if ((iVar1 == 3) ||
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(ar6[1],piVar3,piVar5,ar7)), iVar1 == 4)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_01031c(uVar2 & 0xffff,0x45,piVar5,ar7));
    if (iVar1 == 0x14) {
      *(undefined1 *)(unsigned)(0x854 + ar4) = 0;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((0x11c + *ar5))))(ar5,3,piVar5,ar7));
    if (((((iVar1 == 1) && (iVar1 = *(int *)(unsigned)(0x384 + ar4), iVar1 == -1)) &&
         (iVar1 = 3, *(char *)(unsigned)(0x98 + ar4) < '\x04')) &&
        ((piVar3 = ar6, iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,piVar5,ar7)), iVar1 == 1 &&
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0637d0))))
                            (*(undefined4 *)(unsigned)(0x7cc + ar6[6]),piVar3,piVar5,ar7)), iVar1 == 0))
        )) && (iVar1 = (int)*(char *)(unsigned)(0x854 + ar4), iVar1 == 0)) {
      uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar6[6],piVar3,piVar5,ar7));
      iVar6 = (vsp = ((unsigned long)(fr0_ - 0)), libgcc_divide_helper_0101e4(uVar2 & 0xffff,0x3c,piVar5,ar7));
      iVar1 = 2;
      if (2 < iVar6) {
        *(undefined1 *)(unsigned)(0x854 + ar4) = 1;
        iVar1 = ({ unsigned long t0_ = (unsigned long)(
                           (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(unsigned *)((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                          (ar4 + 0x9c,0x16,0,(&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x48f); });
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LIFE_1097b2\n.set _s_STATUS_LIFE_1097b2, _s_STATUS_LIFE_1097b2_def\n");
