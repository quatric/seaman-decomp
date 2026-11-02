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
undefined4 FUN_8c1fd1e2_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1fd1e2");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 256; for (int i_ = 0; i_ < 256; i_++) z_[i_] = 0; }
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar4_00;
  undefined4 ar4_01;
  int iVar6;
  int iVar7;
  
  iVar6 = ar4 * 0x148;
  iVar7 = ar4;
  ar4_00 = ar6;
  iVar2 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1fd550(ar4,ar5,ar6,ar7));
  if (iVar2 == 0) {
    (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f6a30(iVar7,ar5,ar6,ar7));
    return 0xffffff01;
  }
  ar4_01 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d1e8) + ar4 * 4);
  (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1efd14(ar4_01,ar5,ar6,ar7));
  iVar7 = 0;
  iVar2 = 0;
  do {
    if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar6) + 0x3c) <= iVar7) {
      return 0;
    }
    while( true ) {
      while( true ) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7));
        if (iVar3 != 0) {
          return 0xffffff30;
        }
        ar6 = 0;
        ar5 = 2;
        uVar5 = ar4_01;
        ar7 = iVar2;
        iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1efe80(ar4_01,2,0,iVar2));
        if (-1 < iVar3) break;
        (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7));
      }
      while (uVar5 = ar4_01, ar5 = iVar3, iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f461c(ar4_01,iVar3,ar6,ar7)),
            iVar4 == 0) {
        (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7));
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 256)), FUN_8c1efd14(ar4_01,ar5,ar6,ar7));
      iVar4 = (vsp = ((unsigned long)(fr0_ - 256)), thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7));
      if (iVar4 != 0) {
        return 0xffffff30;
      }
      cVar1 = *(char *)(unsigned)(iVar3 + 4);
      if (cVar1 == '\b') break;
      if (cVar1 != -4) {
        if (cVar1 != -5) {
          return 0xffffff01;
        }
        return 0xffff0000;
      }
    }
    ar6 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar6) + 0x44);
    ar5 = *(le<int>* )(unsigned)(iVar3 + 8) + 0xc;
    ({ unsigned long ri0_ = (unsigned long)(iVar7); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 256)); FUN_8c1fc980(ar4_00,ar5,ar6,ar7); });
    iVar2 = iVar2 + 1;
    ar4_00 = ar4_00 + *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(((undefined1 *)(unsigned)0x8c4783fc) + iVar6) + 0x44);
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl FUN_8c1fd1e2\n.set FUN_8c1fd1e2, FUN_8c1fd1e2_def\n");

}
