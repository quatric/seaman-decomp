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
uint FUN_8c0d7b60_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0d7b60";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  int *a4;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  double in_dr0 = 0;
  float fVar8;
  undefined8 in_dr4 = 0;
  undefined8 in_dr6 = 0;
  undefined8 in_dr8 = 0;
  ulonglong uVar9;
  undefined8 in_xd14 = 0;
  float in_PR = 0;
  int iVar10;
  int ar5_00;
  char cVar11;
  char cVar12;
  
  cVar12 = '\0';
  cVar11 = '\0';
  puVar7 = ((undefined4 *)(fr0_ - 0x5c)) + 1;
  ((undefined4 *)(fr0_ - 0x5c))[1] = (undefined4)((ulonglong)in_dr4 >> 0x20);
  ((undefined4 *)(fr0_ - 0x5c))[2] = (undefined4)in_dr4;
  ((undefined4 *)(fr0_ - 0x5c))[3] = (undefined4)((ulonglong)in_dr6 >> 0x20);
  (*(undefined4 *)(fr0_ - 0x4c)) = (undefined4)in_dr6;
  (*(undefined4 *)(fr0_ - 0x48)) = (undefined4)((ulonglong)in_dr8 >> 0x20);
  uVar9 = (ulonglong)(*(uint *)(fr0_ + 0x00000000));
  iVar4 = 0;
  uVar2 = 0;
  if (*ar4 != 0) {
    (*(float *)(fr0_ - 0x28)) = in_PR;
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[7] + 8))))(ar4 + 7,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x2c)) = SUB84(in_dr0,0);
    fVar8 = F32HI(in_dr0);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x2c)) = fVar8;
      fVar1 = (*(float *)(fr0_ - 0x28));
    }
    (*(float *)(fr0_ - 0x28)) = fVar1;
    if (cVar11 == '\0') {
      iVar10 = (int)fVar8;
    }
    else {
      iVar10 = (int)in_dr0;
    }
    (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4[0xc] + 8))))(ar4 + 0xc,ar5,ar6,ar7));
    (*(float *)(fr0_ - 0x30)) = SUB84(in_dr0,0);
    fVar8 = F32HI(in_dr0);
    fVar1 = fVar8;
    if (cVar12 == '\0') {
      (*(float *)(fr0_ - 0x30)) = fVar8;
      fVar1 = (*(float *)(fr0_ - 0x2c));
    }
    (*(float *)(fr0_ - 0x2c)) = fVar1;
    if (cVar11 == '\0') {
      ar5_00 = (int)fVar8;
    }
    else {
      ar5_00 = (int)in_dr0;
    }
    uVar2 = (vsp = ((unsigned long)(fr0_ - 96)), libgcc_divide_helper_0103d0(ar4[1],ar5_00,ar6,ar7));
    if (uVar2 == 0) {
      uVar5 = 0;
      ((uint *)(fr0_ - 0x40))[2] = 0;
      while ((uVar2 = ar4[4], uVar5 < uVar2 && (iVar4 <= iVar10))) {
        puVar7[7] = uVar5;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 96)), get_field_2c_0d7ca8((puVar7[7] * 8 - puVar7[7]) * 8 + ar4[3],ar5_00,ar6,ar7));
        puVar7[9] = uVar3;
        if (puVar7[9] == 0) {
          puVar7[6] = uVar5;
          if (cVar12 == '\0') {
            puVar6 = puVar7 + 0xffffffff;
            puVar7[0xffffffff] = (int)uVar9;
          }
          else {
            puVar6 = puVar7 + 0xfffffffe;
            *(undefined8 *)(unsigned)(puVar7 + 0xfffffffe) = in_xd14;
          }
          a4 = (int *)(unsigned)((*(int *)(unsigned)((int)puVar6 + 0x1c) * 8 - *(int *)(unsigned)((int)puVar6 + 0x1c)) * 8 +
                      ar4[3]);
          (vsp = ((unsigned long)(fr0_ - 96)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*a4 + 8))))(a4,ar5_00,ar6,ar7));
          puVar7 = (undefined4 *)(unsigned)((int)puVar6 + 4);
          *(uint *)(unsigned)((int)puVar6 + 0x18) = uVar5;
          (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c0d7ca0((*(int *)(unsigned)((int)puVar6 + 0x18) * 8 - *(int *)(unsigned)((int)puVar6 + 0x18)) * 8 +
                       ar4[3],ar5_00,ar6,ar7));
          iVar4 = iVar4 + 1;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0d7b60\n.set _FUN_8c0d7b60, _FUN_8c0d7b60_def\n");
