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
int FUN_8c267d88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c267d88";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0xd000001;
  if ((((*(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)) != 0) && (iVar4 = 0x7000103, ar4 != 0)) &&
      (iVar3 = (int)(char)ar5, iVar4 = 0x3000001, 0 < iVar3)) &&
     (((iVar3 < 3 &&
       (iVar2 = (short)*(char *)(unsigned)(ar4 + 1) * 0x2c + (int)0xa8 + *(int *)(unsigned)(&(*(undefined1 *)(unsigned)0x8c2784c0)),
       -1 < iVar3)) && (iVar3 <= *(char *)(unsigned)(iVar2 + 4))))) {
    *(char *)(unsigned)(iVar2 + 5) = (char)ar5;
    puVar1 = ((void *)(unsigned)0x8c267b30);
    iVar5 = 0;
    iVar4 = 0;
    if (0 < iVar3) {
      do {
        (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4,iVar5,*(undefined4 *)(unsigned)(iVar5 * 4 + iVar2 + 0x1c),0));
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
  }
  if (iVar4 != 0) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c2688a0(((void *)(unsigned)0x8c267d88),iVar4,vr6,vr7));
  }
  return iVar4;
}

__asm__(".globl _FUN_8c267d88\n.set _FUN_8c267d88, _FUN_8c267d88_def\n");
