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
undefined4 FUN_8c26bbe2_def(int ar4,int ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c26bbe2";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 ain0 = (undefined4)(unsigned long)vin0;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *a6;
  undefined4 ar7_00;
  
  if ((ar5 < 0) || (3 < ar5)) {
    if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
                    
                    
      uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,vr6,vr7));
      return uVar1;
    }
  }
  else if ((0 < ar6[1]) && (*ar6 != 0)) {
    a6 = ar6;
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b960(ar4,ar5,ar6,ar7));
    ar7_00 = 0;
    piVar2 = (int *)(unsigned)(ar5 * 4 + ar4 + 0x18);
    piVar3 = (int *)(unsigned)0x0;
    while (*piVar2 != 0) {
      piVar2 = (int *)(unsigned)*piVar2;
      piVar3 = piVar2;
      a6 = piVar2;
    }
    if (((*(char *)(unsigned)(ar4 + 5) == '\x01') && (piVar3 != (int *)(unsigned)0x0)) &&
       (piVar3[2] + piVar3[3] == *ar6)) {
      piVar3[3] = piVar3[3] + ar6[1];
    }
    else {
      puVar4 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x14));
      if (puVar4 == (undefined4 *)(unsigned)0x0) {
        if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
          (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x28))))(*(undefined4 *)(unsigned)(ar4 + 0x2c),0xfffffffd,a6,0));
        }
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x14) = *puVar4;
        *puVar4 = 0;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c010794(8,puVar4 + 2,ar6,vr7));
        *piVar2 = (int)puVar4;
      }
    }
    uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c26b978(ar4,uVar1,a6,ar7_00));
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c26bbe2\n.set _FUN_8c26bbe2, _FUN_8c26bbe2_def\n");
