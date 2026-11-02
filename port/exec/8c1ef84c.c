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
int pvr_1ef84c_def(undefined4 ar4,uint *ar5,undefined4 ar6,uint ar7)

{
  ring[rp++ & 255] = "pvr_1ef84c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  int *piVar4;
  int *piVar5;
  int *a4;
  int a7;
  int *in_r2 = 0;
  int *piVar6;
  int *ar6_00;
  uint uVar7;
  
  ar6_00 = 0x8c470e70;
  piVar6 = 0x8c470e78;
  uVar1 = 0x3ff;
  if (*in_r2 == 0) {
    a7 = 0;
  }
  else {
    uVar7 = (uint)(short)0x3ff;
    *(undefined4 *)(unsigned)0x8c470e74 = *(undefined4 *)(unsigned)0x8c470e78 + -1;
    *piVar6 = 0;
    puVar3 = 0x8c470e7c;
    puVar2 = 0xa05f80c4;
    if (*ar6_00 != 0) {
      *(undefined4 *)(unsigned)0x8c470e7c = *(undefined4 *)(unsigned)0xa05f80c4 & uVar7;
      puVar3[1] = (int)(short)((ushort)(*puVar2 >> 0x10) & uVar1);
      ar5 = puVar2;
    }
    piVar6 = 0x8c470e6c;
    *ar6_00 = 0;
    if (*piVar6 != 0) {
      *(undefined4 *)(unsigned)0xa05f8040 = *(undefined4 *)(unsigned)0x8c470e68;
      *(undefined4 *)(unsigned)0xa05f80e8 = *(undefined4 *)(unsigned)0xa05f80e8 & 0xfffffff7;
      *piVar6 = 0;
    }
    piVar5 = 0x8c470be0;
    piVar4 = 0x8c470c18;
    puVar2 = 0xa05f6908;
    if ((*(undefined4 *)(unsigned)0xa05f6908 & (int)0xf00) == 0) {
      a7 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f4202(piVar6,ar5,ar6_00,ar7));
      a4 = 0x8c470e64;
      if (a7 < 0) {
        (vsp = ((unsigned long)(fr0_ - 12)), pvr_1efaf4(piVar6,ar5,ar6_00,ar7));
        piVar5[4] = piVar5[4] + 1;
        if (*piVar4 != 0) {
          (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffff9,piVar5[2],a7));
        }
      }
      else {
        *(undefined4 *)(unsigned)0x8c470e90 = 0;
        *(undefined2 *)(unsigned)((int)piVar5 + *a4 * 2 + 0x34) = 0;
        *(ushort *)(unsigned)((int)piVar5 + *a4 * 2 + 0x2c) = (ushort)*(undefined4 *)(unsigned)0xa05f810c & uVar1;
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1ef640(a4,ar5,ar6_00,ar7));
        *piVar5 = *piVar5 + 1;
      }
    }
    else {
      if (((*(undefined4 *)(unsigned)0xa05f6908 & (int)0x800) != 0) &&
         (((undefined1 *)(unsigned)7)[0x8c470be0] = ((undefined1 *)(unsigned)7)[0x8c470be0] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffe;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffe,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x400) != 0) && (piVar5[8] = piVar5[8] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffd;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffd,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x200) != 0) && (piVar5[9] = piVar5[9] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffc;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffc,ar6_00,ar7));
      }
      if (((*puVar2 & (int)0x100) != 0) && (piVar5[10] = piVar5[10] + 1, *piVar4 != 0)) {
        ar7 = *puVar2;
        ar6_00 = (int *)(unsigned)piVar5[2];
        ar5 = (uint *)(unsigned)0xfffffffb;
        piVar6 = (int *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffb,ar6_00,ar7));
      }
      *puVar2 = (int)0xf00;
      (vsp = ((unsigned long)(fr0_ - 12)), pvr_1efaf4(piVar6,ar5,ar6_00,ar7));
      a7 = (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1f4202(piVar6,ar5,ar6_00,ar7));
      if (a7 < 0) {
        if (*piVar4 != 0) {
          (vsp = ((unsigned long)(fr0_ - 12)), (*(code *)xlat((unsigned long)(*piVar4)))(1,0xfffffffa,piVar5[2],a7));
        }
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 12)), FUN_8c1ef640(piVar6,ar5,ar6_00,ar7));
      }
    }
  }
  return a7;
}

__asm__(".globl _pvr_1ef84c\n.set _pvr_1ef84c, _pvr_1ef84c_def\n");
