#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 FUN_8c012b1c_def(int ar4,le<short>* ar5,undefined *ar6,undefined *ar7)

{
  TRACE_ENTER("FUN_8c012b1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *ar7_00;
  le<short>* psVar7;
  bool bVar8;
  
  bVar8 = ar4 < 0;
  if (bVar8) {
    ar4 = -ar4;
  }
  uVar6 = (uint)bVar8;
  iVar4 = 0x1b;
  (*(le<short>*  *)(fr0_ - 0x40)) = ar5;
  (*(undefined * *)(fr0_ - 0x3c)) = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010468(ar4,0x1b,vr6,vr7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), libgcc_divide_helper_010614(ar4,iVar4,vr6,vr7));
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    ((le<short>* )(fr0_ - 0x48))[0] = -0x5a;
    (vsp = ((unsigned long)(fr0_ - 72)), memmove(((byte *)(fr0_ - 0x2c)),((undefined1 *)(unsigned)0x8c125798),8,ar7));
    (*(undefined1 *)(fr0_ - 0x24)) = 0;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 72)), memset(((byte *)(fr0_ - 0x2c)),0,9,ar7));
    ((byte *)(fr0_ - 0x2c))[0] = ((byte *)(fr0_ - 0x2c))[0] | 0x80;
    ((le<short>* )(fr0_ - 0x48))[0] = 0;
  }
  iVar4 = 0;
  psVar7 = (le<short int>*)(((undefined1 *)(unsigned)0x8c1257d8) + uVar6 * 8);
  ar7_00 = ((undefined1 *)(unsigned)0x8c125758) + uVar6 * 0x40;
  (*(byte * *)(fr0_ - 0x44)) = ((byte *)(fr0_ - 0x2c));
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = ar7_00;
      (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0129b4(((le<short>* )(fr0_ - 0x48)),((byte *)(fr0_ - 0x2c)),iVar5,ar7_00));
      iVar5 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012c70(((byte *)(fr0_ - 0x2c)),0x40,iVar5,ar7));
      if (iVar5 != 0) {
        ((le<short>* )(fr0_ - 0x48))[0] = ((le<short>* )(fr0_ - 0x48))[0] + 1;
        *(*(byte * *)(fr0_ - 0x44)) = *(*(byte * *)(fr0_ - 0x44)) | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    ar7_00 = ar7_00 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012a60(iVar2,(*(le<short>*  *)(fr0_ - 0x40)),(*(undefined * *)(fr0_ - 0x3c)),ar7));
    iVar2 = (int)*(*(le<short>*  *)(fr0_ - 0x40));
    ar7 = (*(undefined * *)(fr0_ - 0x3c));
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0129b4(((le<short>* )(fr0_ - 0x48)),((byte *)(fr0_ - 0x2c)),iVar2,(*(undefined * *)(fr0_ - 0x3c))));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c012c70(((byte *)(fr0_ - 0x2c)),0x40,iVar2,ar7));
    if (iVar2 == 1) {
      ((le<short>* )(fr0_ - 0x48))[0] = ((le<short>* )(fr0_ - 0x48))[0] + 1;
      *(*(byte * *)(fr0_ - 0x44)) = *(*(byte * *)(fr0_ - 0x44)) | 0x80;
    }
  }
  *(*(le<short>*  *)(fr0_ - 0x40)) = ((le<short>* )(fr0_ - 0x48))[0];
  uVar3 = (vsp = ((unsigned long)(fr0_ - 72)), memmove((*(undefined * *)(fr0_ - 0x3c)),((byte *)(fr0_ - 0x2c)),8,ar7));
  return uVar3;
}

__asm__(".globl FUN_8c012b1c\n.set FUN_8c012b1c, FUN_8c012b1c_def\n");

}
