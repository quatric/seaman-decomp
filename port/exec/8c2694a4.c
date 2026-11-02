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
uint FUN_8c2694a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2694a4";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(int *)(unsigned)(0x8c + ar4) == 1) {
    return 1;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7));
  puVar1 = (&(*(undefined1 *)(unsigned)0x8c2785d8));
  if ((iVar2 == 1) && (*(char *)(unsigned)(ar4 + 5) == '\x01')) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268e1a(ar4,ar5,ar6,ar7));
    if (iVar2 == 1) {
      (vsp = ((unsigned long)(fr0_ - 0)), s_E1213_mwlRnaAddWrPos_rna_sj__268f4c(ar4,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
      *(undefined4 *)(unsigned)puVar1 = 0;
    }
    else {
      *(int *)(unsigned)puVar1 = *(int *)(unsigned)puVar1 + 1;
    }
  }
  if ((*(char *)(unsigned)(ar4 + 6) == '\x01') && (*(char *)(unsigned)(ar4 + 5) == '\0')) {
    ar5 = 1;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)) + 0x24))))(((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x10)),1,ar6,ar7));
    if (iVar2 < 0x20) {
      ar5 = 0;
      (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2690dc(ar4,0,ar6,ar7));
      *(undefined1 *)(unsigned)(ar4 + 6) = 0;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7));
  if (iVar2 == 1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268ea8(ar4,ar5,ar6,ar7));
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_269a30(ar4,ar5,ar6,ar7));
  if (iVar2 == 1) {
    if (*(char *)(unsigned)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1212_mwlRnaStartTrans_rna_s_269252(ar4,ar5,ar6,ar7));
  }
  else {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_269a56(ar4,ar5,ar6,ar7));
    if ((iVar2 != 1) || (*(int *)(unsigned)(ar4 + 0x28) <= *(int *)(unsigned)(ar4 + 0x54))) goto LAB_8c26958c;
    if ((*(char *)(unsigned)(ar4 + 5) == '\x01') && (iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c268e1a(ar4,ar5,ar6,ar7)), iVar2 == 1)) {
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c269056(ar4,ar5,ar6,ar7));
      *(undefined1 *)(unsigned)(ar4 + 5) = 0;
    }
    if (*(char *)(unsigned)(ar4 + 5) != '\0') goto LAB_8c26958c;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2693ce(ar4,ar5,ar6,ar7));
  }
  if (0 < iVar2) {
    *(undefined1 *)(unsigned)(ar4 + 5) = 1;
  }
LAB_8c26958c:
  if (((*(char *)(unsigned)(ar4 + 1) == '\x05') && (*(int *)(unsigned)(ar4 + 0x40) <= *(int *)(unsigned)(ar4 + 0x34))) &&
     (*(char *)(unsigned)(ar4 + 7) == '\0')) {
    (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2691ba(ar4,1,ar6,ar7));
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0x7fffffff;
  }
  if ((*(byte *)(unsigned)(ar4 + 1) == 6) && (*(int *)(unsigned)(ar4 + 0x34) == 0)) {
    uVar3 = 0;
    (vsp = ((unsigned long)(fr0_ - 0)), s_E1205_Illigal_parameter_MWRN_2691ba(ar4,0,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), noop_268d60(ar4,uVar3,ar6,ar7));
    return uVar3;
  }
  return (uint)*(byte *)(unsigned)(ar4 + 1);
}

__asm__(".globl _FUN_8c2694a4\n.set _FUN_8c2694a4, _FUN_8c2694a4_def\n");
