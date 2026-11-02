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
undefined4 FUN_8c235248_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c235248";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 8; for (int i_ = 0; i_ < 8; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *puVar2;
  double in_dr2 = 0;
  undefined4 uVar3;
  undefined8 in_dr4 = 0;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  double in_xd2 = 0;
  bool bVar4;
  undefined4 in_PR = 0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  
  if (in_FPSCR_SZ == '\0') {
    puVar2 = ((undefined1 *)(fr0_ - 0x4));
  }
  else {
    puVar2 = ((undefined1 *)(fr0_ - 0x8));
  }
  *(undefined4 *)(unsigned)(puVar2 + -4) = in_PR;
  *(int *)(unsigned)(puVar2 + -8) = ar4;
  if (in_FPSCR_SZ == '\0') {
    in_fr15 = F32HI(in_dr4);
  }
  uVar1 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c277ac0) + ar4 * 4);
  ({ unsigned long ri0_ = (unsigned long)(*(undefined4 *)(unsigned)(puVar2 + -8)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 8)); FUN_8c237124(uVar1,ar5,ar6,ar7); });
  uVar3 = (undefined4)in_dr4;
  if (*(int *)(unsigned)(puVar2 + -8) == 0) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c23666c(uVar1,ar5,ar6,ar7)); *(unsigned *)(unsigned)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 8)), FUN_8c236718(uVar1,ar5,ar6,ar7)); *(unsigned *)(unsigned)0x8c4aa3e4 = (unsigned)(unsigned long)uVar1;
  }
  if (in_FPSCR_PR == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = CONCAT44D(0xbf800000,uVar3);
    uVar3 = 0xbf800000;
    bVar4 = in_fr15 < -1.0;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = -CONCAT44D(0x3f800000,uVar3);
    uVar3 = (undefined4)((ulonglong)(*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) >> 0x20);
    bVar4 = CONCAT44D(in_fr14,in_fr15) < (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0);
  }
  if (bVar4) {
    if (in_FPSCR_SZ == '\0') {
      in_dr2 = CONCAT44D((int)((ulonglong)in_dr2 >> 0x20),uVar3);
      (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = in_xd2;
    }
    if (in_FPSCR_PR == '\0') {
      in_fr15 = F32LO(in_dr2) / in_fr15;
    }
    else {
      in_fr15 = SUB84(in_dr2 / CONCAT44D(in_fr14,in_fr15),0);
    }
  }
  else {
    in_fr15 = 1.0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = in_xd2;
  }
  if (in_FPSCR_SZ == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa3e0) = CONCAT44D(uVar1,in_fr15);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c235248\n.set _FUN_8c235248, _FUN_8c235248_def\n");
