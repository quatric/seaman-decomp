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
int s_E9040804_can_t_open_s_ADXF_L_261ba4_def(int ar4,undefined4 ar5,undefined4 *ar6,int ar7)

{
  ring[rp++ & 255] = "s_E9040804_can_t_open_s_ADXF_L_261ba4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  char *s0;
  undefined2 *extraout_r2 = 0;
  undefined2 *extraout_r2_00 = 0;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *ar5_00;
  undefined4 uVar7;
  int iVar8;
  
  puVar5 = ar6;
  (*(int *)(fr0_ - 0x30)) = ar7;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), s_E9040801_ptid_is_range_outsi_261ab2(ar4,ar6,ar6,ar7));
  if (-1 < iVar2) {
    puVar6 = &(*(undefined4 *)(fr0_ - 0x3c));
    uVar7 = ar5;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c2637ca(ar5,puVar6,puVar5,ar7));
    if (iVar2 < 0) {
      s0 = ((undefined1 *)(unsigned)0x8c2720dc);
    }
    else {
      puVar6 = &(*(undefined4 *)(fr0_ - 0x2c));
      uVar7 = ar5;
      (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 68)), FUN_8c26201c(ar5,puVar6,puVar5,ar7))));
      if (((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)) != (undefined4 *)(unsigned)0x0) {
        ar5_00 = (int *)(unsigned)0x0;
        iVar8 = -1;
        uVar7 = 0x18;
        puVar5 = ar6;
        (vsp = ((unsigned long)(fr0_ - 68)), memset(ar6,0,0x18,ar7));
        *(unsigned *)(unsigned)(ar4 * 4 + -0x73b4c1e0) = ar6;
        iVar2 = 0;
        *ar6 = 0;
        ar6[2] = (*(undefined4 *)(fr0_ - 0x3c));
        (*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)(ar6 + 5));
        *(undefined1 *)(unsigned)((int)ar6 + 0x12) = 0;
        (*(int *)(fr0_ - 0x24)) = (int)ar6 + 0x16;
        (*(int *)(fr0_ - 0x40)) = 0;
        ar6[3] = 0;
        (*(unsigned *)(fr0_ - 0x28) = (unsigned)(unsigned long)((undefined4 *)(unsigned)((undefined1 *)(unsigned)0x8c4b5268)));
LAB_8c261d02:
        do {
          puVar6 = (undefined4 *)(unsigned)0x3;
          if (2 < iVar2) {
            puVar6 = puVar5;
            if (iVar2 == 3) {
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272144)); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c25ece6(puVar5,ar5_00,uVar7,ar7); });
              puVar6 = puVar5;
            }
LAB_8c261d1a:
            if (iVar8 == -4) {
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c272174)); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c25ece6(puVar6,ar5_00,uVar7,ar7); });
            }
            (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c262168(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)),ar5_00,uVar7,ar7));
            return iVar8;
          }
          ar5_00 = (int *)(unsigned)0x1;
          puVar5 = ((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34));
          uVar7 = 0x8c4b5260;
          iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c261ae2(((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x34)),1,0x8c4b5260,ar7));
          if (0 < iVar3) {
            uVar7 = 0x800;
            if (ar6[3] == 0) {
              if (0x10000 < (*(undefined4 *)(unsigned)(unsigned)0x8c4b5264)) {
                (*(undefined4 *)(unsigned)(unsigned)0x8c4b5264) = 0x10000;
                puVar6 = (undefined4 *)(unsigned)0xfffffffc;
                iVar8 = -4;
                goto LAB_8c261d1a;
              }
              if ((*(int *)(fr0_ - 0x30)) < (*(undefined4 *)(unsigned)(unsigned)0x8c4b5264)) {
                uVar1 = (ushort)(*(int *)(fr0_ - 0x30));
              }
              else {
                uVar1 = (ushort)(*(undefined4 *)(unsigned)(unsigned)0x8c4b5264);
              }
              *(ushort *)(unsigned)(ar6 + 4) = uVar1;
              ar6[3] = (uint)uVar1;
              ar6[1] = (uVar1 + 1) * 2 + 0x16 & 0xfffffffc;
              uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), libgcc_divide_helper_010468(*((undefined4 *)(unsigned long)*(unsigned *)(fr0_ - 0x28)),0x800,vr6,vr7));
              *(short *)(unsigned)(*(unsigned *)(fr0_ - 0x38) = (unsigned)(unsigned long)((short)uVar4));
            }
            else {
              puVar6 = (undefined4 *)(unsigned)0x1;
            }
            ar7 = 0x200;
            ar5_00 = (int *)(unsigned)((int)puVar6 * 4 + -0x73b4ada0);
            if (puVar6 < (undefined4 *)(unsigned)0x200) {
              do {
                (*(int *)(fr0_ - 0x40)) = (*(int *)(fr0_ - 0x40)) + 1;
                uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), libgcc_divide_helper_010468(*ar5_00 + 0x7ff,uVar7,vr6,vr7));
                *(short *)(unsigned)((*(int *)(fr0_ - 0x24)) + ((*(int *)(fr0_ - 0x40)) - 1) * 2) = (short)uVar4;
                if ((int)ar6[3] <= (*(int *)(fr0_ - 0x40))) {
                  iVar8 = 0;
                  goto LAB_8c261d1a;
                }
                puVar6 = (undefined4 *)(unsigned)((int)puVar6 + 2);
                ar5_00 = ar5_00 + 2;
              } while ((int)puVar6 < ar7);
            }
            iVar2 = 0;
            puVar5 = puVar6;
            goto LAB_8c261d02;
          }
          iVar2 = iVar2 + 1;
        } while( true );
      }
      s0 = ((undefined1 *)(unsigned)0x8c272114);
      (*(unsigned *)(fr0_ - 0x34) = (unsigned)(unsigned long)((undefined4 *)(unsigned)0x0));
    }
    ({ unsigned long t0_ = (unsigned long)(s0); unsigned long t1_ = (unsigned long)(ar5); *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 68)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 68)) - 8); FUN_8c25ece6(uVar7,puVar6,puVar5,ar7); });
    iVar2 = -1;
  }
  return iVar2;
}

__asm__(".globl _s_E9040804_can_t_open_s_ADXF_L_261ba4\n.set _s_E9040804_can_t_open_s_ADXF_L_261ba4, _s_E9040804_can_t_open_s_ADXF_L_261ba4_def\n");
