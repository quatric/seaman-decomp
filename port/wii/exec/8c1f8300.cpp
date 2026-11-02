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
undefined4 FUN_8c1f8300_def(undefined4 ar4,le<ushort>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f8300");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int a5;
  undefined4 d;
  int extraout_r2 = 0;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  
  puVar6 = ((undefined1 *)(fr0_ - 0x38));
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c010794(0x30,((undefined1 *)(fr0_ - 0x38)),((undefined1 *)(unsigned)0x8c26c994),vr7));
  uVar7 = 0x3c;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_0106dc(ar4,0x3c,vr6,vr7));
  *(char *)(unsigned)(ar5 + 3) = (char)uVar1;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01051c(ar4,uVar7,vr6,vr7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_0106dc(uVar1,uVar7,vr6,vr7));
  *(char *)(unsigned)((int)ar5 + 5) = (char)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01051c(uVar1,uVar7,vr6,vr7));
  uVar7 = 0x18;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_0106dc(uVar1,0x18,vr6,vr7));
  *(char *)(unsigned)(ar5 + 2) = (char)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01051c(uVar1,uVar7,vr6,vr7));
  iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_01051c(uVar1,0x16d,vr6,vr7));
  uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), libgcc_divide_helper_0106dc(uVar1,d,vr6,vr7));
  uVar5 = iVar3 + 1U >> 2;
  if (uVar4 < uVar5) {
    *ar5 = (short)iVar3 + 0x79d;
    uVar4 = uVar4 + (extraout_r2 - uVar5);
    if ((*ar5 & 3) == 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = uVar4 - uVar5;
    *ar5 = (short)iVar3 + 0x79e;
  }
  uVar5 = 1;
  uVar1 = 0xc;
  if ((*ar5 & 3) == 0) {
    if (*(le<uint>* )(unsigned)(puVar6 + 4) <= uVar4) {
      uVar5 = 2;
      do {
        if (uVar4 < *(le<int>* )(unsigned)(puVar6 + uVar5 * 4) + 1U) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
    }
  }
  else {
    uVar5 = 1;
    do {
      if (uVar4 < *(le<uint>* )(unsigned)(puVar6 + uVar5 * 4)) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
  }
  *(char *)(unsigned)(ar5 + 1) = (char)uVar5;
  *(char *)(unsigned)((int)ar5 + 3) = ((char)uVar4 - (char)*(le<undefined4>* )(unsigned)(puVar6 + (uVar5 - 1) * 4)) + '\x01'
  ;
  if (((*ar5 & 3) == 0) && (2 < (byte)ar5[1])) {
    *(char *)(unsigned)((int)ar5 + 3) = *(char *)(unsigned)((int)ar5 + 3) + -1;
  }
  iVar3 = (int)*(char *)(unsigned)((int)ar5 + 3);
  a5 = (int)(char)ar5[1];
  uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f8614((int)(short)*ar5,a5,iVar3,0xc));
  *(char *)(unsigned)((int)ar5 + 7) = (char)uVar2;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1f8650(ar5,a5,iVar3,uVar1));
  *(char *)(unsigned)(ar5 + 4) = (char)uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c1f8300\n.set FUN_8c1f8300, FUN_8c1f8300_def\n");

}
