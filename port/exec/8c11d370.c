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
uint FUN_8c11d370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c11d370";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c11ca24(ar4,ar5,ar6,ar7));
  if (iVar3 == 0) {
    if (*(short *)(unsigned)(ar4 + 0x3e) == 2) {
      iVar3 = (int)0x118;
      *(undefined4 *)(unsigned)(iVar3 + 0xc + ar4) = *(undefined4 *)(unsigned)(iVar3 + ar4);
      *(undefined4 *)(unsigned)(iVar3 + 0x24 + ar4) = 0;
      *(undefined4 *)(unsigned)(iVar3 + 0x28 + ar4) = 0;
      *(undefined2 *)(unsigned)(iVar3 + 0x2c + ar4) = 0;
      puVar1 = ((void *)(unsigned)0x8c120348);
      iVar3 = (int)0x22a;
      *(undefined2 *)(unsigned)(iVar3 + ar4) = 0;
      *(undefined2 *)(unsigned)(iVar3 + 0x1a + ar4) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x40) = 0;
      *(undefined4 *)(unsigned)(0x10c + ar4) = 3;
      cVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(puVar1)))(ar4 + 0x48,1,0,vr7));
      if ((cVar2 == '\0') && (*(int *)(unsigned)(0x88 + ar4) == 0)) {
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c120348(ar4 + 0x48,2,0,vr7));
      }
      uVar4 = *(uint *)(unsigned)(ar4 + 0x40);
    }
    else {
      uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1204c4(ar4 + 0x48,7,vr6,vr7));
      uVar4 = uVar4 & 0xff;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c11d370\n.set _FUN_8c11d370, _FUN_8c11d370_def\n");
