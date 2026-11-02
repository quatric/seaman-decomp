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
undefined4 FUN_8c10ca58_def(int *ar4,undefined4 ar5,int *ar6,int *ar7)

{
  ring[rp++ & 255] = "FUN_8c10ca58";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *ar6_00;
  int *ar7_00;
  uint uVar5;
  int iVar6;
  
  puVar1 = ((void *)(unsigned)0x8c0143b0);
  iVar4 = *ar4;
  iVar6 = ar4[3];
  (*(undefined4 *)(fr0_ - 0x28)) = *(undefined4 *)(unsigned)(iVar4 + 4);
  uVar5 = 0;
  (*(undefined4 *)(fr0_ - 0x24)) = 0;
  *ar7 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  if (ar4[1] != 0) {
    do {
      uVar3 = ar5;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0109e8(iVar6,ar5,ar6_00,ar7_00));
      if (iVar2 == 0) {
        *ar7 = *ar7 + 1;
      }
      iVar2 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)(puVar1)))(iVar6,uVar3,ar6_00,ar7_00));
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + iVar2 + 1;
    } while (uVar5 < (uint)ar4[1]);
  }
  if (*ar7 == 0) {
    uVar3 = 0x78;
  }
  else {
    iVar4 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 8))))(*ar7 << 2,&(*(undefined4 *)(fr0_ - 0x28)),ar6_00,ar7_00));
    *ar6 = iVar4;
    if (iVar4 == 0) {
      uVar3 = 1;
    }
    else {
      iVar4 = ar4[3];
      *ar7 = 0;
      uVar5 = 0;
      if (ar4[1] != 0) {
        do {
          uVar3 = ar5;
          iVar6 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c0109e8(iVar4,ar5,ar6_00,ar7_00));
          if (iVar6 == 0) {
            iVar6 = *ar7;
            *ar7 = iVar6 + 1;
            *(uint *)(unsigned)(*ar6 + iVar6 * 4) = uVar5;
          }
          iVar6 = (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)(puVar1)))(iVar4,uVar3,ar6_00,ar7_00));
          uVar5 = uVar5 + 1;
          iVar4 = iVar4 + iVar6 + 1;
        } while (uVar5 < (uint)ar4[1]);
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c10ca58\n.set _FUN_8c10ca58, _FUN_8c10ca58_def\n");
