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
undefined4 FUN_8c1f2e3e_def(int ar4,int ar5,int ar6,int ar7)

{
  TRACE_ENTER("FUN_8c1f2e3e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  char * s0 = (char *)(unsigned long)*(le<unsigned>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *a5;
  int iVar6;
  uint a6;
  uint uVar7;
  byte *ar5_00;
  byte *pbVar8;
  byte *ar4_00;
  
  bVar2 = true;
  (*(le<uint>* )(fr0_ - 0x44)) = 0;
  pcVar5 = s0;
  while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
    (*(le<uint>* )(fr0_ - 0x44)) = (*(le<uint>* )(fr0_ - 0x44)) + 1;
  }
  pcVar5 = (char *)(unsigned)(ar7 + 1);
  uVar7 = 1;
  (*(le<uint>* )(fr0_ - 0x24)) = 1;
  (*(le<int>* )(fr0_ - 0x34)) = 0;
  pbVar8 = (byte *)(unsigned)(ar4 + 0x800);
  (*(le<uint>* )(fr0_ - 0x30)) = 0;
  ar4_00 = pbVar8;
  (*(le<int>* )(fr0_ - 0x38)) = ar5;
  (*(le<int>* )(fr0_ - 0x28)) = ar6;
  do {
    if ((pbVar8 <= ar4_00) ||
       (ar5_00 = ar4_00, pbVar8 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar6 = (ar4 - (int)ar4_00) + 0x800;
      ar5_00 = (byte *)(unsigned)(ar4 - iVar6);
      ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c1f2a5c(ar4_00,ar5_00,iVar6,ar7); });
      iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f19ec((*(le<int>* )(fr0_ - 0x38)),1,ar4,ar7));
      if (iVar6 != 0) {
        return 0;
      }
      (*(le<int>* )(fr0_ - 0x38)) = (*(le<int>* )(fr0_ - 0x38)) + 1;
    }
    ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c1f2a5c(ar5_00 + 6,((le<ushort>* )(fr0_ - 0x3c)),2,ar7); });
    uVar3 = (*(le<uint>* )(fr0_ - 0x24));
    if ((((le<ushort>* )(fr0_ - 0x3c))[0] == (*(le<uint>* )(fr0_ - 0x24))) && (uVar3 = uVar7, uVar7 != 1)) {
      if (bVar2) {
        (*(le<uint>* )(fr0_ - 0x2c)) = (*(le<uint>* )(fr0_ - 0x44));
        a5 = s0;
      }
      else {
        (*(le<uint>* )(fr0_ - 0x2c)) = (*(le<uint>* )(fr0_ - 0x30));
        a5 = pcVar5;
      }
      uVar3 = (*(le<uint>* )(fr0_ - 0x24));
      if ((*ar5_00 == (*(le<uint>* )(fr0_ - 0x2c))) &&
         (a6 = (*(le<uint>* )(fr0_ - 0x2c)), iVar6 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f2a74(ar5_00 + 8,a5,(*(le<uint>* )(fr0_ - 0x2c)),ar7)), uVar3 = (*(le<uint>* )(fr0_ - 0x24)),
         iVar6 != 0)) {
        if (!bVar2) {
          pcVar5 = pcVar5 + (*(le<uint>* )(fr0_ - 0x30));
        }
        if (*pcVar5 == '\0') {
          uVar4 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f1714(ar5_00 + 2,a5,a6,ar7));
          return uVar4;
        }
        if (bVar2) {
          bVar2 = false;
        }
        else if (uVar7 != 1) {
          pcVar5 = pcVar5 + 1;
        }
        (*(le<uint>* )(fr0_ - 0x30)) = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c1f2b1c(pcVar5,((undefined1 *)(unsigned)0x8c26c560),a6,ar7));
        uVar3 = uVar7;
      }
    }
    (*(le<uint>* )(fr0_ - 0x24)) = uVar3;
    uVar7 = uVar7 + 1;
    iVar6 = (*ar5_00 & 1) + (uint)*ar5_00 + 8;
    (*(le<int>* )(fr0_ - 0x34)) = (*(le<int>* )(fr0_ - 0x34)) + iVar6;
    ar4_00 = ar5_00 + iVar6;
    if ((*(le<int>* )(fr0_ - 0x28)) <= (*(le<int>* )(fr0_ - 0x34))) {
      return 0;
    }
  } while( true );
}

__asm__(".globl FUN_8c1f2e3e\n.set FUN_8c1f2e3e, FUN_8c1f2e3e_def\n");

}
