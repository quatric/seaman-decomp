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
int s_E8101214_GDFS_error_adxstmf__2635aa_def(int ar4,int ar5,undefined1 *ar6,undefined1 *ar7)

{
  ring[rp++ & 255] = "s_E8101214_GDFS_error_adxstmf__2635aa";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 36; for (int i_ = 0; i_ < 36; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 a6;
  int iVar6;
  int *a4;
  
  (*(undefined4 *)(fr0_ - 0xc)) = 1;
  a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 4));
  iVar1 = ar4;
  if (*(char *)(unsigned)(ar4 + 2) == '\x01') {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f364c(*(undefined4 *)(unsigned)(ar4 + 8),ar5,ar6,ar7)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); static int tn; if (tn++ < 12) dbg_log(0x364c, iVar1, *(unsigned *)(unsigned)(ar4 + 8), *(unsigned char *)(unsigned)(ar4 + 2)); }
    if (iVar1 == 1) {
      iVar6 = *(int *)(unsigned)(ar4 + 0x20) * 0x800;
      ar7 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c26be30(ar4 + 0x24,iVar6,((undefined1 *)(fr0_ - 0x18)),ar7));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x20))))(a4,1,((undefined1 *)(fr0_ - 0x18)),ar7));
      uVar5 = 0;
      ar6 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,0,ar6,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2634dc(ar4,uVar5,ar6,ar7));
      if ((iVar1 == *(int *)(unsigned)(ar4 + 0x30)) && (*(int *)(unsigned)(ar4 + 0x38) != 0)) {
        (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x38))))(*(undefined4 *)(unsigned)(ar4 + 0x3c),uVar5,ar6,ar7));
      }
      *(int *)(unsigned)(ar4 + 0x34) = *(int *)(unsigned)(ar4 + 0x34) + iVar6;
      *(undefined1 *)(unsigned)(ar4 + 2) = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2634dc(ar4,uVar5,ar6,ar7));
      iVar6 = *(int *)(unsigned)(ar4 + 0x14) + 0x7ff;
      if (iVar6 < 0) {
        iVar6 = *(int *)(unsigned)(ar4 + 0x14) + 0xffe;
      }
      ar5 = iVar6 >> 0xb;
      if (ar5 <= iVar1) {
        *(undefined1 *)(unsigned)(ar4 + 1) = 3;
      }
    }
    else if (iVar1 == 5) {
      ({ unsigned long t0_ = (unsigned long)("E8101214: GDFS error (adxstmf_stat_exec)\n"); unsigned long t1_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 36)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 36)) - 8); FUN_8c25ece6(5,ar5,ar6,ar7); });
      *(undefined1 *)(unsigned)(ar4 + 1) = 4;
      *(undefined1 *)(unsigned)(ar4 + 2) = 0;
    }
  }
  iVar6 = (int)*(char *)(unsigned)(ar4 + 2);
  if (iVar6 == 0) {
    if ((a4 == (int *)(unsigned)0x0) || (*a4 == 0)) {
      iVar6 = ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x24))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 36)); FUN_8c26359a(iVar1,ar5,ar6,ar7); });
    }
    else {
      iVar6 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x24))))(a4,1,ar6,ar7));
      if (iVar6 < *(int *)(unsigned)(ar4 + 0x1c)) {
        a6 = *(undefined4 *)(unsigned)(ar4 + 0x18);
        uVar5 = 0;
        iVar1 = ar4 + 0x24;
        (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x18))))(a4,0,a6,iVar1));
        iVar6 = *(int *)(unsigned)(ar4 + 0x28);
        if (iVar6 < 0) {
          iVar6 = iVar6 + 0x7ff;
        }
        iVar3 = *(int *)(unsigned)(ar4 + 0x30);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c2634dc(ar4,uVar5,a6,iVar1));
        iVar4 = iVar3 - iVar2;
        if (iVar6 >> 0xb < iVar3 - iVar2) {
          iVar4 = iVar6 >> 0xb;
        }
        iVar6 = *(int *)(unsigned)(ar4 + 0x2c);
        if (iVar4 < *(int *)(unsigned)(ar4 + 0x2c)) {
          iVar6 = iVar4;
        }
        if (iVar6 != 0) {
          iVar6 = (vsp = ((unsigned long)(fr0_ - 36)), FUN_8c1f332c(*(undefined4 *)(unsigned)(ar4 + 8),iVar6,*(undefined4 *)(unsigned)(ar4 + 0x24),iVar1)); { extern void dbg_log(unsigned long,unsigned long,unsigned long,unsigned long); dbg_log(0x332c, iVar6, *(unsigned *)(unsigned)(ar4 + 0x24), *(unsigned *)(unsigned)(ar4 + 0x30)); }
          *(int *)(unsigned)(ar4 + 0x20) = iVar6;
          if (0 < iVar6) {
            *(undefined1 *)(unsigned)(ar4 + 2) = 1;
            return 1;
          }
        }
        iVar6 = (vsp = ((unsigned long)(fr0_ - 36)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 0x1c))))(a4,0,ar4 + 0x24,iVar1));
      }
    }
  }
  return iVar6;
}

__asm__(".globl _s_E8101214_GDFS_error_adxstmf__2635aa\n.set _s_E8101214_GDFS_error_adxstmf__2635aa, _s_E8101214_GDFS_error_adxstmf__2635aa_def\n");
