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
undefined4 FUN_8c120078_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c120078";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  iVar3 = 0;
  if (*ar4 != 0) {
    do {
      iVar4 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + iVar3 * 4);
      if ((*(int *)(unsigned)(iVar4 + 0x14) != 0) &&
         (cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar4 + 0x14))))(iVar4,uVar5,vr6,vr7)), cVar2 != '\0')) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)*ar4);
  }
  puVar1 = ((void *)(unsigned)0x8c11194c);
  iVar3 = 0;
  if (ar4[4] != 0) {
    do {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(*(undefined4 *)(unsigned)(*(int *)(unsigned)(ar4 + 6) + iVar3 * 4),vr5,vr6,vr7));
      if (iVar4 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)ar4[4]);
  }
  return 0;
}

__asm__(".globl _FUN_8c120078\n.set _FUN_8c120078, _FUN_8c120078_def\n");
