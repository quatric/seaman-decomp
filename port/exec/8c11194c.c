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
int * FUN_8c11194c_def(int *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11194c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int a5;
  undefined8 in_dr0 = 0;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  
  fVar3 = F32HI(in_dr0);
  cVar8 = '\0';
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,1,ar6,ar7));
  if (cVar8 == '\0') {
    fVar5 = 2.1474836e+09;
  }
  else {
    fVar5 = -NAN;
  }
  fVar4 = fVar3;
  if (fVar5 < fVar3) {
    fVar4 = fVar3 + -4.2949673e+09;
  }
  a5 = 2;
  iVar6 = (int)fVar4;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,2,ar6,ar7));
  uVar7 = (uint)fVar3;
  if ((uVar7 & 0xffff) == 0xffff) {
    uVar7 = (uint)(short)ar4[3];
  }
  if (ar4[7] != 0) {
    a5 = ar4[7];
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,a5,ar6,ar7));
  }
  if ((uVar7 & 0xffff) == 0) {
    ar4[7] = 0;
  }
  else {
    ar6 = uVar7 & 0xffff;
    a5 = iVar6;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x14))))(*ar4,iVar6,ar6,ar7));
    ar4[7] = iVar1;
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar4 + 0x18))))(*ar4,ar4,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4,2,ar6,ar7));
      return (int *)(unsigned)0;
    }
  }
  ar4[2] = iVar6;
  iVar6 = (uVar7 & 0xffff) * iVar6;
  *(short *)(unsigned)(ar4 + 3) = (short)uVar7;
  ar4[4] = iVar6;
  ar4[8] = ar4[7] + iVar6;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c112234(ar4,a5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,3,ar6,ar7));
  if (((int)fVar3 & 0xffU) == 0) {
    ar4[6] = 0;
    uVar7 = 0;
    if (ar4[5] != 0) {
      do {
        uVar2 = uVar7 + 1;
        *(undefined4 *)(unsigned)(uVar7 * 4 + ar4[0xb]) = 0;
        uVar7 = uVar2;
      } while (uVar2 < (uint)ar4[5]);
    }
  }
  else {
    ar4[6] = ar4[5];
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,4,ar6,ar7));
  *(ushort *)(unsigned)((int)ar4 + 0xe) = (ushort)(int)fVar3 & 0xff;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120550(ar4,5,ar6,ar7));
  *(char *)(unsigned)((int)ar4 + 0x31) = (char)(int)fVar3;
  return ar4;
}

__asm__(".globl _FUN_8c11194c\n.set _FUN_8c11194c, _FUN_8c11194c_def\n");
