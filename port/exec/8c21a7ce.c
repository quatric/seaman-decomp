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
undefined4 FUN_8c21a7ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c21a7ce";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *ar5_00;
  double dVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c236454(ar4,ar5,ar6,ar7));
  if (cVar4 == '\0') {
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4dc));
  }
  else {
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
  }
  ar5_00 = ((undefined1 *)(unsigned)0x8c4aa2f8);
  if (cVar3 == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa308) = (undefined4)(D2U(dVar2) >> 0x20);
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4e0));
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa308) = SUB84(dVar2,0);
    dVar2 = CONCAT44D((*(undefined4 *)(unsigned)(unsigned)0x8c4aa4ac),(*(undefined4 *)(unsigned)(unsigned)0x8c4aa4a8));
  }
  if (cVar3 == '\0') {
    dVar2 = CONCAT44D(F32HI(dVar2) * F32LO(dVar2),SUB84(dVar2,0));
  }
  else {
    dVar2 = dVar2 * dVar2;
  }
  if (cVar4 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa30c) = (undefined4)(D2U(dVar2) >> 0x20);
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa30c) = SUB84(dVar2,0);
    (*(undefined4 *)(unsigned)(unsigned)0x8c4aa318) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4bc);
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa314) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b8);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4aa310) = (*(undefined4 *)(unsigned)(unsigned)0x8c4aa4b4);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c21a678(ar4,((undefined1 *)(unsigned)0x8c4aa2f8),ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2364b2(ar4,ar5_00,ar6,ar7));
  return uVar1;
}

__asm__(".globl _FUN_8c21a7ce\n.set _FUN_8c21a7ce, _FUN_8c21a7ce_def\n");
