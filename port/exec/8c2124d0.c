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
undefined4 FUN_8c2124d0_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c2124d0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 52; for (int i_ = 0; i_ < 52; i_++) z_[i_] = 0; }
  undefined *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = ((void *)(unsigned)0x8c23c814);
  iVar6 = *ar5 + ar4;
  iVar5 = 0;
  (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c23c814(&(*(int *)(fr0_ - 0x30)),iVar6,4,ar7));
  iVar7 = iVar6 + 4;
  uVar4 = 4;
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(int *)(fr0_ - 0x34)),iVar7,4,ar7));
  *ar5 = *ar5 + 8;
  (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2124aa((*(int *)(fr0_ - 0x30)),iVar7,uVar4,ar7));
  if ((*(int *)(fr0_ - 0x30)) == 0x4e4a494e) {
    *ar6 = 0x4e4a494e;
    goto LAB_8c212588;
  }
  iVar8 = 0x4e4a434d;
  if ((*(int *)(fr0_ - 0x30)) != 0x4e4a434d) {
    iVar8 = 0x4e4a424d;
    if ((*(int *)(fr0_ - 0x30)) == 0x4e4a424d) {
LAB_8c212580:
      *ar6 = iVar8;
      goto LAB_8c212588;
    }
    iVar8 = 0x4e4a544c;
    if ((*(int *)(fr0_ - 0x30)) != 0x4e4a544c) {
      iVar8 = 0x4e4a4c49;
      if ((*(int *)(fr0_ - 0x30)) == 0x4e4a4c49) goto LAB_8c212580;
      iVar8 = 0x4e4a4341;
      if ((*(int *)(fr0_ - 0x30)) != 0x4e4a4341) {
        iVar8 = 0x4e4d444d;
        if ((*(int *)(fr0_ - 0x30)) == 0x4e4d444d) goto LAB_8c212580;
        iVar8 = 0x4e4c494d;
        if ((*(int *)(fr0_ - 0x30)) != 0x4e4c494d) {
          iVar8 = 0x4e43414d;
          if ((*(int *)(fr0_ - 0x30)) == 0x4e43414d) goto LAB_8c212580;
          iVar8 = 0x4e53534d;
          if ((*(int *)(fr0_ - 0x30)) != 0x4e53534d) {
            *ar6 = 0x2a2a2a2a;
            return 0;
          }
        }
      }
    }
  }
  *ar6 = iVar8;
LAB_8c212588:
  iVar7 = (vsp = ((unsigned long)(fr0_ - 52)), malloc_thunk((*(int *)(fr0_ - 0x34)),iVar7,uVar4,ar7));
  if (iVar7 == 0) {
    return 0;
  }
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(iVar7,iVar6 + 8,(*(int *)(fr0_ - 0x34)),ar7));
  iVar8 = iVar6 + 8 + (*(int *)(fr0_ - 0x34));
  *ar5 = *ar5 + (*(int *)(fr0_ - 0x34));
  uVar4 = 4;
  iVar6 = iVar8;
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(int *)(fr0_ - 0x30)),iVar8,4,ar7));
  *ar5 = *ar5 + 4;
  (*(int *)(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 52)), FUN_8c2124aa((*(int *)(fr0_ - 0x30)),iVar6,uVar4,ar7));
  if ((*(int *)(fr0_ - 0x30)) != 0x504f4630) {
    return iVar7;
  }
  (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(&(*(int *)(fr0_ - 0x34)),iVar8 + 4,4,ar7));
  *ar5 = *ar5 + 4;
  iVar6 = iVar8 + 8;
  while( true ) {
    do {
      iVar8 = iVar6;
      if ((*(int *)(fr0_ - 0x34)) == 0) {
        return iVar7;
      }
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x28)),iVar8,1,ar7));
      uVar2 = (uint)0xc0;
      iVar6 = iVar8 + 1;
      *ar5 = *ar5 + 1;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1;
      uVar2 = ((byte *)(fr0_ - 0x28))[0] & uVar2;
    } while (uVar2 == 0);
    if (uVar2 == 0x40) break;
    if (uVar2 == (int)0x80) {
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x2c)),iVar6,1,ar7));
      iVar6 = iVar8 + 2;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1;
      *ar5 = *ar5 + 1;
      uVar2 = (((byte *)(fr0_ - 0x28))[0] & 0x3f) << 8 | (uint)((byte *)(fr0_ - 0x2c))[0];
      goto LAB_8c21270c;
    }
    if (uVar2 == (int)0xc0) {
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x2c)),iVar6,1,ar7));
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x20)),iVar8 + 2,1,ar7));
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1;
      (vsp = ((unsigned long)(fr0_ - 52)), (*(code *)xlat((unsigned long)(puVar1)))(((byte *)(fr0_ - 0x24)),iVar8 + 3,1,ar7));
      iVar6 = iVar8 + 4;
      (*(int *)(fr0_ - 0x34)) = (*(int *)(fr0_ - 0x34)) + -1;
      *ar5 = *ar5 + 3;
      uVar2 = (((byte *)(fr0_ - 0x28))[0] & 0x3f) << 0x18 | (uint)((byte *)(fr0_ - 0x2c))[0] << 0x10 |
              (uint)((byte *)(fr0_ - 0x20))[0] << 8 | (uint)((byte *)(fr0_ - 0x24))[0];
LAB_8c21270c:
      iVar5 = iVar5 + uVar2 * 4;
      piVar3 = (int *)(unsigned)(iVar7 + iVar5);
      if (*piVar3 != 0) {
        *piVar3 = *piVar3 + iVar7;
      }
    }
  }
  uVar2 = ((byte *)(fr0_ - 0x28))[0] & 0x3f;
  goto LAB_8c21270c;
}

__asm__(".globl _FUN_8c2124d0\n.set _FUN_8c2124d0, _FUN_8c2124d0_def\n");
