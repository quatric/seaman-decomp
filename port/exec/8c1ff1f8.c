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
int FUN_8c1ff1f8_def(int ar4,byte *ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c1ff1f8";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 320; for (int i_ = 0; i_ < 320; i_++) z_[i_] = 0; }
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  int iVar6;
  int iVar7;
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(unsigned)(iVar7 + 2) != '\0') {
    pbVar4 = ar5;
    ar6_00 = ar6;
    iVar3 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fd510(ar4,ar5,ar6,ar7));
    if (iVar3 == 0) {
      (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fdd1a(ar4,pbVar4,ar6_00,ar7));
    }
    else {
      iVar3 = (vsp = ((unsigned long)(fr0_ - 320)), FUN_8c1fd550(ar4,pbVar4,ar6_00,ar7));
      if ((iVar3 != 0) && (*(char *)(unsigned)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = (vsp = ((unsigned long)(fr0_ - 320)), thunk_FUN_8c1ffcc2(ar4,pbVar4,ar6_00,ar7));
        puVar2 = ((void *)(unsigned)0x8c200a84);
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined4 *)(unsigned)(iVar7 + 0x18) = 0;
        pbVar4 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 320)), (*(code *)xlat((unsigned long)(puVar2)))(ar4,0,ar6_00,ar7));
        iVar6 = 0;
        iVar3 = 0;
        do {
          if (*(int *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x1c) + 0x30) <= iVar6) {
LAB_8c1ff298:
            if (iVar3 == 0) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar4 + 4;
            pbVar5 = ar5 + 0xc;
            for (; puVar2 = ((void *)(unsigned)0x8c2004ea), ar5 < pbVar5; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar5 = 0;
            *(int *)(unsigned)(iVar7 + 0x18) = *(int *)(unsigned)(iVar7 + 0x18) + 1;
            (vsp = ((unsigned long)(fr0_ - 320)), (*(code *)xlat((unsigned long)(puVar2)))(pbVar4,((undefined1 *)(fr0_ - 0x40)),ar6_01,iVar3));
            iVar6 = (int)0xcc;
            *ar6 = (*(int *)(fr0_ - 0x18)) * (*(int *)(unsigned)(*(int *)(unsigned)(iVar7 + 0x1c) + 0x2c) + 1);
            *(short *)(unsigned)(ar6 + 1) = (short)(*(int *)(fr0_ - 0x18));
            *(undefined1 *)(unsigned)((int)ar6 + 6) = (undefined1)(*(int *)(fr0_ - 0x3c));
            *(undefined1 *)(unsigned)((int)ar6 + 7) = (*(undefined1 *)(fr0_ - 0x36));
            *(undefined2 *)(unsigned)(ar6 + 2) = (*(undefined2 *)(fr0_ - 0x38));
            puVar2 = ((void *)(unsigned)0x8c200c82);
            *(bool *)(unsigned)((int)ar6 + 6) = (*(int *)(fr0_ - 0x3c)) == iVar6;
            (vsp = ((unsigned long)(fr0_ - 320)), (*(code *)xlat((unsigned long)(puVar2)))((int)ar6 + 10,((undefined1 *)(fr0_ - 0x20)),ar6_01,iVar3));
            return 0;
          }
          if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
            iVar3 = 1;
            goto LAB_8c1ff298;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar6 = iVar6 + 1;
          *(int *)(unsigned)(iVar7 + 0x18) = *(int *)(unsigned)(iVar7 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff1f8\n.set _FUN_8c1ff1f8, _FUN_8c1ff1f8_def\n");
