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
undefined4 FUN_8c1f74b0_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1f74b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(unsigned)0x8c4748bc;
  iVar3 = ar5;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6fc8(uVar4,ar5,ar6,ar7));
  puVar1 = 0x8c4748a8;
  if (iVar2 < 0) {
    *(undefined4 *)(unsigned)0x8c4748a8 = 9;
  }
  else if ((ar5 <= *(undefined4 *)(unsigned)0x8c4748c0) || (iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f716c(uVar4,iVar3,ar6,ar7)), iVar3 != 0)) {
    iVar3 = iVar2 * 4 + 0x18;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c1f6e0c(iVar3,0x8c4748c4,ar6,ar7));
    if ((((undefined1 *)(unsigned)3)[0x8c474a28] == '\0') || (*(undefined4 *)(unsigned)0x8c474a28 == '\0')) {
      *puVar1 = 3;
    }
    else {
      if (*(undefined4 *)(unsigned)0x8c4748c5 != '\0') {
                    
                    
        uVar4 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)ar4))(iVar3,vr5,vr6,vr7));
        return uVar4;
      }
      *puVar1 = 4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f74b0\n.set _FUN_8c1f74b0, _FUN_8c1f74b0_def\n");
