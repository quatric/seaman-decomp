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
int s_E9040807_can_t_find_s_ADXF_A_261d54_def(int ar4,undefined4 ar5,int *ar6,int ar7)

{
  ring[rp++ & 255] = "s_E9040807_can_t_find_s_ADXF_A_261d54";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 60; for (int i_ = 0; i_ < 60; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *s0;
  int *piVar4;
  uint ar4_00;
  int *ar5_00;
  int *ar6_00;
  int iVar5;
  int iVar6;
  
  ar6_00 = ar6;
  (*(int *)(fr0_ - 0x30)) = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7));
  if (-1 < iVar1) {
    ar5_00 = &(*(int *)(fr0_ - 0x38));
    uVar3 = ar5;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c2637ca(ar5,ar5_00,ar6_00,ar7));
    if (iVar1 < 0) {
      s0 = ((undefined1 *)(unsigned)0x8c2721a4);
    }
    else {
      ar5_00 = &(*(int *)(fr0_ - 0x28));
      uVar3 = ar5;
      (*(int *)(fr0_ - 0x34)) = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c26201c(ar5,ar5_00,ar6_00,ar7));
      if ((*(int *)(fr0_ - 0x34)) != 0) {
        iVar6 = -1;
        piVar4 = (int *)(unsigned)(ar4 * 4 + -0x73b4c1e0);
        *ar6 = *piVar4;
        *piVar4 = (int)ar6;
        iVar5 = 0;
        iVar1 = 0;
        ar6[2] = (*(int *)(fr0_ - 0x38));
        *(undefined1 *)(unsigned)((int)ar6 + 0x12) = 1;
        (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar6 + 5));
        (*(int *)(fr0_ - 0x2c)) = 0;
        ar6[3] = 0;
LAB_8c261ebe:
        do {
          ar4_00 = 3;
          if (2 < iVar1) {
            if (iVar1 == 3) {
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272204)); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c25ece6(3,ar5_00,ar6_00,ar7); });
            }
LAB_8c261ed6:
            if (iVar6 == -4) {
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272234)); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c25ece6(ar4_00,ar5_00,ar6_00,ar7); })
              ;
            }
            *(undefined2 *)(unsigned)(ar6 + 4) = (undefined2)(*(int *)(fr0_ - 0x2c));
            ar6[1] = (uint)*(ushort *)(unsigned)(ar6 + 4) * 8 + *(int *)(unsigned)(*ar6 + 4) + 0x14;
            (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c262168((*(int *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7));
            return iVar6;
          }
          ar5_00 = (int *)(unsigned)0x1;
          ar6_00 = (int *)(unsigned)0x8c4b72e0;
          iVar2 = (vsp = ((unsigned long)(fr0_ - 60)), FUN_8c261ae2((*(int *)(fr0_ - 0x34)),1,0x8c4b72e0,ar7));
          if (0 < iVar2) {
            ar4_00 = 0;
            if (ar6[3] == 0) {
              if (0x10000 < (*(undefined4 *)(unsigned)(unsigned)0x8c4b72e4)) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4b72e4) = 0x10000;
                ar4_00 = 0xfffffffc;
                iVar6 = -4;
                goto LAB_8c261ed6;
              }
              iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c4b72e4);
              if ((*(int *)(fr0_ - 0x30)) < (*(undefined4 *)(unsigned)(unsigned)0x8c4b72e4)) {
                iVar1 = (*(int *)(fr0_ - 0x30));
              }
              ar6[3] = iVar1;
              ar4_00 = 2;
            }
            ar5_00 = (int *)(unsigned)0x200;
            if (ar4_00 < 0x200) {
              do {
                if (*(int *)(unsigned)(ar4_00 * 4 + -0x73b48d20) == 0) {
                  ar4_00 = ar4_00 + 2;
                }
                else {
                  ar7 = 0x7ff;
                  ar5_00 = ((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) + (*(int *)(fr0_ - 0x2c)) * 2;
                  *(short *)(unsigned)ar5_00 = (short)iVar5;
                  ar6_00 = (int *)(unsigned)0x800;
                  iVar2 = ar4_00 + 1;
                  (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x2c)) + 1;
                  iVar1 = libgcc_divide_helper_010468
                                    (*(int *)(unsigned)(ar4_00 * 4 + -0x73b48d20) + 0x7ff,0x800);
                  ar5_00[1] = iVar1;
                  ar4_00 = iVar2 + 1;
                  uVar3 = libgcc_divide_helper_010468
                                    (*(int *)(unsigned)(iVar2 * 4 + -0x73b48d20) + ar7,ar6_00);
                  *(short *)(unsigned)((int)ar5_00 + 2) = (short)uVar3;
                }
                iVar5 = iVar5 + 1;
                if (ar6[3] <= iVar5) {
                  iVar6 = 0;
                  goto LAB_8c261ed6;
                }
              } while ((int)ar4_00 < 0x200);
            }
            iVar1 = 0;
            goto LAB_8c261ebe;
          }
          iVar1 = iVar1 + 1;
        } while( true );
      }
      s0 = ((undefined1 *)(unsigned)0x8c2721d4);
      (*(int *)(fr0_ - 0x34)) = 0;
    }
    ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 60)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 60)) - 8); FUN_8c25ece6(uVar3,ar5_00,ar6_00,ar7); });
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _s_E9040807_can_t_find_s_ADXF_A_261d54\n.set _s_E9040807_can_t_find_s_ADXF_A_261d54, _s_E9040807_can_t_find_s_ADXF_A_261d54_def\n");
