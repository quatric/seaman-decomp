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
int FUN_8c1febd6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1febd6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = ar5;
  iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd510(*(undefined4 *)(unsigned)(ar4 + 0x28),0,vr6,vr7));
  if (iVar3 == 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fdd1a(*(undefined4 *)(unsigned)(ar4 + 0x28),uVar5,ar6,ar7));
  }
  else {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(*(undefined4 *)(unsigned)(ar4 + 0x28),vr5,vr6,vr7));
    if ((iVar3 != 0) && (*(char *)(unsigned)(0x8c4783e8 + *(int *)(unsigned)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1ffcc2(*(undefined4 *)(unsigned)(ar4 + 0x28),vr5,vr6,vr7));
      if (iVar3 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar5 = *(undefined4 *)(unsigned)(ar4 + 0x28);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c2008f4(uVar5,vr5,vr6,vr7));
      puVar1 = ((void *)(unsigned)0x8c1fbc44);
      if (-1 < iVar3) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fbc44(uVar5,iVar3,ar5,vr7));
        iVar2 = 0xffff;
        if (iVar4 < 0) {
          if (iVar4 == (int)0xffffff01) {
            return iVar4;
          }
          do {
            (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(uVar5,iVar3,iVar2,vr7));
            iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c200890(uVar5,0xfffc,vr6,vr7));
            if (iVar3 < 0) goto LAB_8c1fec70;
            iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), (*(code *)xlat((unsigned long)(puVar1)))(uVar5,iVar3,ar5,vr7));
          } while (iVar4 != 0);
        }
        (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(uVar5,iVar3,0xfffa,vr7));
        if (*(int *)(unsigned)(ar4 + 0x38) == iVar2) {
          *(int *)(unsigned)(ar4 + 0x38) = (int)(short)iVar3;
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c20099e(uVar5,*(undefined4 *)(unsigned)(ar4 + 0x3c),iVar3,vr7));
        }
        *(int *)(unsigned)(ar4 + 0x3c) = (int)(short)iVar3;
        *(int *)(unsigned)(ar4 + 0x30) = *(int *)(unsigned)(ar4 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1febd6\n.set _FUN_8c1febd6, _FUN_8c1febd6_def\n");
