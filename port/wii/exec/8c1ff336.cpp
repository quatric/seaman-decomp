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
int FUN_8c1ff336_def(int ar4,byte *ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1ff336");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 324; for (int i_ = 0; i_ < 324; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  le<int>* ar6_00;
  byte *ar6_01;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)0x148;
  iVar8 = ar4 * iVar7 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    ar6_00 = ar6;
    iVar4 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar4 == 0) {
      (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fdd1a(ar4,pbVar5,ar6_00,ar7));
    }
    else {
      iVar4 = (vsp = ((unsigned long)(fr0_ - 324)), FUN_8c1fd550(ar4,pbVar5,ar6_00,ar7));
      if ((iVar4 != 0) && (*(char *)(unsigned)(ar4 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
        iVar7 = (vsp = ((unsigned long)(fr0_ - 324)), thunk_FUN_8c1ffcc2(ar4,pbVar5,ar6_00,ar7));
        if (iVar7 < 0) {
          return (int)(int)0xffffff03;
        }
        pbVar5 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 324)), FUN_8c200a84(ar4,*(le<undefined4>* )(unsigned)(iVar8 + 0x18),ar6_00,ar7));
        iVar7 = *(le<int>* )(unsigned)(iVar8 + 0x18);
        bVar2 = false;
        do {
          if (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff400:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; puVar3 = ((void *)(unsigned)0x8c2004ea), ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            (vsp = ((unsigned long)(fr0_ - 324)), (*(code *)xlat((unsigned long)(puVar3)))(pbVar5,((undefined1 *)(fr0_ - 0x44)),ar6_01,ar7));
            *ar6 = (*(le<int>* )(fr0_ - 0x1c)) * (*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(iVar8 + 0x1c) + 0x2c) + 1);
            iVar7 = (int)0xcc;
            *(le<short>* )(unsigned)(ar6 + 1) = (short)(*(le<int>* )(fr0_ - 0x1c));
            *(undefined1 *)(unsigned)((int)ar6 + 6) = (undefined1)(*(le<int>* )(fr0_ - 0x40));
            *(undefined1 *)(unsigned)((int)ar6 + 7) = (*(undefined1 *)(fr0_ - 0x3a));
            *(le<undefined2>* )(unsigned)(ar6 + 2) = (*(le<undefined2>* )(fr0_ - 0x3c));
            puVar3 = ((void *)(unsigned)0x8c200c82);
            *(bool *)(unsigned)((int)ar6 + 6) = (*(le<int>* )(fr0_ - 0x40)) == iVar7;
            (vsp = ((unsigned long)(fr0_ - 324)), (*(code *)xlat((unsigned long)(puVar3)))((int)ar6 + 10,((undefined1 *)(fr0_ - 0x24)),ar6_01,ar7));
            return 0;
          }
          *(le<int>* )(unsigned)(iVar8 + 0x18) = *(le<int>* )(unsigned)(iVar8 + 0x18) + 1;
          bVar1 = *pbVar5;
          ar7 = (int)(char)bVar1;
          if ((bVar1 == 0x33) || (bVar1 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff400;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl FUN_8c1ff336\n.set FUN_8c1ff336, FUN_8c1ff336_def\n");

}
