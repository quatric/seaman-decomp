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
undefined4 FUN_8c203a92_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c203a92");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 96; for (int i_ = 0; i_ < 96; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<ushort>* puVar3;
  le<ushort>* puVar4;
  uint ar5_00;
  uint uVar5;
  uint unaff_r12 = 0;
  le<ushort>* ar5_01;
  
  ar5_00 = ar4;
  (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c205640(&(*(le<uint>* )(fr0_ - 0x28)),ar4,ar6,ar7));
  ar5_01 = (le<ushort>* )(unsigned)0x0;
  if (((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c275428) != (void* )(le<ushort>* )(unsigned)0x0) {
    ar7 = 0xf000;
    puVar4 = (le<short unsigned int>*)(((le<undefined4>* )(unsigned long)*(le<unsigned>* )0x8c275428));
    do {
      if (((*puVar4 & 0xf000) == (*(le<uint>* )(fr0_ - 0x28))) &&
         (ar5_00 = 0, puVar3 = puVar4, ar6 = (*(le<uint>* )(fr0_ - 0x18)), (*(le<uint>* )(fr0_ - 0x18)) != 0)) {
        do {
          puVar4 = puVar3;
          uVar5 = ar5_00;
          if (*(le<int>* )(unsigned)(puVar3 + ar5_00 * 2 + 6) == 0) {
            puVar4 = (le<ushort>* )(unsigned)0x0;
            uVar5 = (*(le<uint>* )(fr0_ - 0x18));
            unaff_r12 = ar5_00;
            ar5_01 = puVar3;
          }
          ar5_00 = uVar5 + 1;
          puVar3 = puVar4;
        } while (ar5_00 < (*(le<uint>* )(fr0_ - 0x18)));
      }
      if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
        puVar4 = ((le<ushort>* )(unsigned long)*(le<unsigned>* )(unsigned)(puVar4 + 2));
      }
    } while (puVar4 != (le<ushort>* )(unsigned)0x0);
  }
  if (ar5_01 == (le<ushort>* )(unsigned)0x0) {
    ar5_01 = (le<ushort>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 96)), FUN_8c205768(0,ar5_00,ar6,ar7));
    if (ar5_01 != (le<ushort>* )(unsigned)0x0) {
      puVar4 = ar5_01 + 6;
      do {
        puVar4[0] = 0;
        puVar4[1] = 0;
        puVar4 = puVar4 + 2;
      } while (puVar4 < ar5_01 + 0x26);
      unaff_r12 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c2057e6(((le<undefined4>* )(unsigned)0x8c275428),ar5_01,ar6,ar7); });
      *ar5_01 = *ar5_01 | (ushort)(*(le<uint>* )(fr0_ - 0x28));
      puVar4 = ar5_01;
      if (((*(le<undefined4>* )(unsigned)(unsigned)0x8c4a9bb0) & 4) == 0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2049ec(1,(*(le<undefined4>* )(fr0_ - 0x1c)),ar5_01,ar7));
      }
      else {
        (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c204006((fr0_ + (int)0xffffffd0),&(*(le<int>* )(fr0_ - 0x2c)),ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 96)), FUN_8c2049ec((uint)((*(le<int>* )(fr0_ - 0x30)) < (*(le<int>* )(fr0_ - 0x2c))),(*(le<undefined4>* )(fr0_ - 0x1c)),ar5_01,ar7));
      }
      if (iVar1 == 0) goto LAB_8c203baa;
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x30))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 96)); FUN_8c2057c0(ar5_01,(*(le<undefined4>* )(fr0_ - 0x1c)),puVar4,ar7); });
    }
    uVar2 = 3;
  }
  else {
LAB_8c203baa:
    *(le<uint>* )(unsigned)(ar4 + 0x1c) = unaff_r12 * ((*(le<uint>* )(fr0_ - 0x24)) >> 2) * 4 + *(le<int>* )(unsigned)(ar5_01 + 4);
    *(le<uint>* )(unsigned)(ar5_01 + unaff_r12 * 2 + 6) = ar4;
    *ar5_01 = *ar5_01 | 2;
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl FUN_8c203a92\n.set FUN_8c203a92, FUN_8c203a92_def\n");

}
