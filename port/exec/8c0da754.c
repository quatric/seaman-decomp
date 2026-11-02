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
undefined4 FUN_8c0da754_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0da754";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  int ar4_00;
  int iVar1;
  int iVar2;
  undefined1 *ar5_00;
  float *ar6_00;
  undefined1 *ar7_00;
  int iVar3;
  float fVar4;
  float fVar5;
  char cVar6;
  char cVar7;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0da588(ar4 + 0xa4,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_300_0bf154(ar4 + 0xa4,ar5,ar6,ar7));
  if (iVar1 != 0) {
    if ((*(undefined4 *)(unsigned)(unsigned)0x8c437550) < iVar1) {
      iVar1 = (*(undefined4 *)(unsigned)(unsigned)0x8c437550);
    }
    for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
      ar7_00 = ((undefined1 *)(fr0_ - 0x18));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0507a4(ar4_00,((undefined1 *)(fr0_ - 0x20)),((undefined1 *)(fr0_ - 0x1c)),ar7_00));
      ar6_00 = &(*(float *)(fr0_ - 0x28));
      ar5_00 = ((undefined1 *)(fr0_ - 0x20));
      (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c256294(0,ar5_00,ar6_00,ar7_00));
      if (cVar7 == '\0') {
        fVar5 = -150.0;
        fVar4 = (*(float *)(fr0_ - 0x28));
      }
      else {
        fVar4 = -150.0;
        fVar5 = 800.0;
      }
      if (cVar6 == '\0' && fVar4 < fVar5) {
LAB_8c0da802:
        iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), get_field_24_05c284(ar4_00,ar5_00,ar6_00,ar7_00));
        if (iVar2 == 0xe) goto LAB_8c0da812;
      }
      else {
        if (cVar7 == '\0') {
          fVar5 = 800.0;
          fVar4 = (*(float *)(fr0_ - 0x28));
        }
        else {
          fVar4 = 800.0;
          fVar5 = -100.0;
        }
        if (cVar6 == '\0' && fVar5 < fVar4) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = -100.0;
          fVar4 = (*(float *)(fr0_ - 0x24));
        }
        else {
          fVar4 = -100.0;
          fVar5 = 600.0;
        }
        if (cVar6 == '\0' && fVar4 < fVar5) goto LAB_8c0da802;
        if (cVar7 == '\0') {
          fVar5 = 600.0;
          fVar4 = (*(float *)(fr0_ - 0x24));
        }
        else {
          fVar4 = 600.0;
          fVar5 = 3.52567e-42;
        }
        if ((cVar6 == '\0' && fVar5 < fVar4) || (ar4_00 == *(int *)(unsigned)(ar4 + 0x9d4)))
        goto LAB_8c0da802;
LAB_8c0da812:
        (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0f4b44(ar4_00,ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4_00 + 8) + 0x34))))(ar4_00,ar5_00,ar6_00,ar7_00));
      }
      ar4_00 = (vsp = ((unsigned long)(fr0_ - 40)), list_node_next(ar4_00,ar5_00,ar6_00,ar7_00));
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c0da754\n.set _FUN_8c0da754, _FUN_8c0da754_def\n");
