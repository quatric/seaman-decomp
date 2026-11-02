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
undefined4 FUN_8c11d7b8_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d7b8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint *a7;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  a7 = &(*(uint *)(fr0_ - 0x2c));
  iVar7 = 0;
  iVar8 = 0;
  (*(unsigned *)(fr0_ - 0x24) = (unsigned)(unsigned long)(ar5));
  (*(unsigned *)(fr0_ - 0x20) = (unsigned)(unsigned long)(ar6));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  puVar2 = ((void *)(unsigned)0x8c120348);
  if (iVar3 == 0) {
    if ((((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) == (int *)(unsigned)0x0) || (((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) == (int *)(unsigned)0x0)) {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c1204c4(ar4 + 0x48,0x13,ar6,ar7));
      return uVar4 & 0xff;
    }
    (*(int *)(fr0_ - 0x1c)) = *(int *)(unsigned)(0xfc + ar4);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    piVar6 = &(*(int *)(fr0_ - 0x28));
    uVar4 = (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,0x1a,piVar6,&(*(uint *)(fr0_ - 0x2c))));
    puVar2 = ((void *)(unsigned)0x8c1204c4);
    if ((uVar4 & 0xff) == 0) {
      uVar9 = (uint)0x80;
      uVar4 = 0;
      if ((*(uint *)(fr0_ - 0x2c)) != 0) {
        do {
          piVar6 = (int *)(unsigned)(int)(char)*(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)*(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4) & uVar5 & 0xff) != 0) {
              iVar8 = iVar8 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (*(uint *)(fr0_ - 0x2c)));
      }
      if (iVar8 == 0) {
        piVar6 = (int *)(unsigned)0x0;
      }
      else {
        piVar6 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)(((*(int *)(fr0_ - 0x1c)) + 0x14))))(iVar8 << 2,0xf4 + ar4,piVar6,a7));
      }
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x20)) = iVar8;
      *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x24)) = (int)piVar6;
      uVar4 = 0;
      if ((*(uint *)(fr0_ - 0x2c)) != 0) {
        do {
          bVar1 = *(byte *)(unsigned)((*(int *)(fr0_ - 0x28)) + uVar4);
          uVar5 = uVar9;
          do {
            if (((uint)bVar1 & uVar5 & 0xff) != 0) {
              *piVar6 = iVar7;
              piVar6 = piVar6 + 1;
            }
            uVar5 = (uVar5 & 0xff) >> 1;
            iVar7 = iVar7 + 1;
          } while (uVar5 != 0);
          uVar4 = uVar4 + 1;
        } while (uVar4 < (*(uint *)(fr0_ - 0x2c)));
      }
      return 0;
    }
    *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
    (vsp = ((unsigned long)(fr0_ - 44)), (*(code *)xlat((unsigned long)(puVar2)))(ar4 + 0x48,7,piVar6,a7));
  }
  return 1;
}

__asm__(".globl _FUN_8c11d7b8\n.set _FUN_8c11d7b8, _FUN_8c11d7b8_def\n");
