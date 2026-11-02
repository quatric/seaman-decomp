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
uint FUN_8c10e818_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10e818";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 40; for (int i_ = 0; i_ < 40; i_++) z_[i_] = 0; }
  byte bVar1;
  bool bVar2;
  uint uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  int *a5;
  int *a5_00;
  int *a4;
  char cVar8;
  
  if (*(char *)(unsigned)(*(int *)(unsigned)(ar4 + 100) + 0x30) == '\0') {
    uVar3 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c112170(*(undefined4 *)(unsigned)(ar4 + 0xc),2,ar6,ar7));
    if ((uVar3 & 0xff) == 0) {
      return 0;
    }
    pbVar4 = (byte *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)),(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)))[1],
                                  ar6,ar7));
    if (pbVar4 != (byte *)(unsigned)0x0) {
      cVar8 = '\0';
      a5 = (int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)))[1];
      uVar5 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x60)),a5,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x28) = uVar5;
      *(uint *)(unsigned)(ar4 + 0x2c) = (uint)*(ushort *)(unsigned)(ar4 + 0x9a) * 2 + *(int *)(unsigned)(ar4 + 0x28);
      if (*(char *)(unsigned)(ar4 + 0x11d) != '\0') {
        a5 = (int *)(unsigned)(((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)))[1];
        pcVar6 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111fbe(*((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0xc)),a5,ar6,ar7));
        cVar8 = '\x01' - *pcVar6;
      }
      if (*(char *)(unsigned)(ar4 + 0x11c) != '\0') {
        cVar8 = '\0';
      }
      bVar2 = false;
      if (cVar8 != '\0') {
        iVar7 = *(int *)(unsigned)(ar4 + 0x114) + 1;
        *(int *)(unsigned)(ar4 + 0x114) = iVar7;
        iVar7 = (vsp = ((unsigned long)(fr0_ - 40)), libgcc_divide_helper_0106dc(iVar7,*(undefined4 *)(unsigned)(ar4 + 0x130),vr6,vr7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x114) = 0;
          *(int *)(unsigned)(ar4 + 0x118) = *(int *)(unsigned)(ar4 + 0x118) + 1;
          bVar2 = true;
        }
      }
      iVar7 = 0;
      (*(int *)(fr0_ - 0x28)) = 0;
      a4 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x84));
      if (*(short *)(unsigned)(ar4 + 0x90) != 0) {
        do {
          a5_00 = ((int *)(unsigned long)*(unsigned *)(unsigned)(iVar7 * 4 + ar4 + 0xc0));
          if (cVar8 != '\0') {
            *(char *)(unsigned)(a4[2] + (uint)*pbVar4) = *(char *)(unsigned)(a4[2] + (uint)*pbVar4) + '\x01';
          }
          *(undefined4 *)(unsigned)(iVar7 * 4 + ar4 + 0x34) = *(undefined4 *)(unsigned)(*a4 + (uint)*pbVar4 * 4);
          if (bVar2) {
            ar6 = ((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x134));
            a5 = a5_00;
            (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10e7de(a4,a5_00,ar6,ar7));
            if (0x13 < *(uint *)(unsigned)(ar4 + 0x118)) {
              a5 = a4;
              ar6 = a5_00;
              (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c10e6c0(ar4,a4,a5_00,ar7));
            }
          }
          bVar1 = *pbVar4;
          pbVar4 = pbVar4 + 1;
          iVar7 = iVar7 + 1;
          (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x28)) + (uint)*(byte *)(unsigned)((uint)bVar1 + (int)a5_00);
          a4 = a4 + 3;
        } while (iVar7 < (int)(uint)*(ushort *)(unsigned)(ar4 + 0x90));
      }
      if (*(int *)(unsigned)(ar4 + 0x28) != 0) {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 40)), FUN_8c111dfe(*(undefined4 *)(unsigned)(ar4 + 100),a5,ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 40)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((ar4 + 0x68))))(ar4,uVar5,iVar7,(*(int *)(fr0_ - 0x28))));
      }
      if (0x13 < *(uint *)(unsigned)(ar4 + 0x118)) {
        *(undefined4 *)(unsigned)(ar4 + 0x118) = 0;
      }
    }
  }
  iVar7 = *((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c));
  return *(int *)(unsigned)((((int *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 0x5c)))[1] * 4 + *(int *)(unsigned)(iVar7 + 0x40)) == *(int *)(unsigned)(iVar7 + 0x3c)
         ^ 1;
}

__asm__(".globl _FUN_8c10e818\n.set _FUN_8c10e818, _FUN_8c10e818_def\n");
