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
uint FUN_8c11ffa8_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11ffa8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = 0;
  iVar5 = (int)0xff;
  iVar4 = 0;
  if (*ar4 != 0) {
    do {
      iVar6 = *(int *)(unsigned)(*(int *)(unsigned)(ar4 + 2) + iVar4 * 4);
      if ((iVar6 != 0) && (*(int *)(unsigned)(iVar6 + 0x1c) != 0)) {
        cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((iVar6 + 0x1c))))(iVar6,iVar5,0,vr7));
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*ar4);
  }
  puVar1 = ((void *)(unsigned)0x8c1113d0);
  iVar4 = 0;
  if (ar4[4] != 0) {
    do {
      if (*(int *)(unsigned)(*(int *)(unsigned)(ar4 + 6) + iVar4 * 4) != 0) {
        cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(iVar5,0,vr6,vr7));
        uVar3 = uVar3 | cVar2 == '\0';
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)ar4[4]);
  }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,*(undefined4 *)(unsigned)(ar4 + 2),vr6,vr7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0xc))))(ar4,*(undefined4 *)(unsigned)(ar4 + 6),vr6,vr7));
  return uVar3;
}

__asm__(".globl _FUN_8c11ffa8\n.set _FUN_8c11ffa8, _FUN_8c11ffa8_def\n");
