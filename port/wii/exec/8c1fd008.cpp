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
undefined4 FUN_8c1fd008_def(int ar4,le<uint>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1fd008");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 300; for (int i_ = 0; i_ < 300; i_++) z_[i_] = 0; }
  char *pcVar1;
  le<uint>* puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  le<uint>* ar5_00;
  undefined4 uVar6;
  int a4;
  undefined4 uVar7;
  
  uVar7 = *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c26d1e8) + ar4 * 4);
  ar5_00 = ar5;
  pcVar1 = (char *)(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efd14(uVar7,ar5,ar6,ar7));
  puVar2 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efd26(uVar7,ar5_00,ar6,ar7));
  if ((*pcVar1 == '\0') || ((*puVar2 & 2) == 0)) {
override_prt_8c1fd1c8_7a4d7f16:
    (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f6a30(puVar2,ar5_00,ar6,ar7));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f4646(uVar7,ar5_00,ar6,ar7));
    do {
      while( true ) {
        (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efd14(uVar7,ar5_00,ar6,ar7));
        ar5_00 = (le<uint>* )(unsigned)0x2;
        ar6 = 0;
        uVar6 = uVar7;
        puVar2 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efe3a(uVar7,2,0,ar7));
        if (-1 < (int)puVar2) break;
        (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7));
      }
      while (uVar6 = uVar7, ar5_00 = puVar2, iVar3 = (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f461c(uVar7,puVar2,ar6,ar7)),
            iVar3 == 0) {
        (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7));
      }
      iVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efd14(uVar7,ar5_00,ar6,ar7));
      uVar6 = uVar7;
      iVar4 = (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f4636(uVar7,ar5_00,ar6,ar7));
      if (iVar4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 300)), thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7));
        return 0xffffff30;
      }
      iVar4 = *(le<int>* )(unsigned)(iVar3 + 8);
      a4 = iVar4 + 8;
      if (*(char *)(unsigned)(iVar3 + 4) == '\b') {
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,0,ar6,ar7));
        *ar5 = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,2,ar6,ar7));
        ar5[1] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,4,ar6,ar7));
        ar5[2] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,6,ar6,ar7));
        ar5[3] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,8,ar6,ar7));
        ar5[4] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,10,ar6,ar7));
        ar5[5] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,0xc,ar6,ar7));
        ar5[6] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,0x10,ar6,ar7));
        ar5[7] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,0x12,ar6,ar7));
        uVar6 = 0x14;
        ar5[8] = uVar5 & 0xffff;
        uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)(((*(le<undefined4>* )(unsigned)(unsigned)0x8c4783dc) + 0xc))))(a4,0x14,ar6,ar7));
        ar5[0xd] = uVar5 & 0xffff;
        ar5[0xe] = 0x80;
        ar5[9] = (uint)*(byte *)(unsigned)(iVar4 + 0x16);
        ar5[10] = (uint)*(byte *)(unsigned)(iVar4 + 0x17);
        ar5[0xb] = 0x1ff;
        ar5_00 = (le<uint>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1efd26(uVar7,uVar6,ar6,ar7));
        puVar2 = &(*(le<uint>* )(fr0_ - 0x2c));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 300)), FUN_8c1f0074(puVar2,ar5_00,ar6,ar7));
        if (-1 < iVar3) {
          uVar7 = 0x200;
          ar5[0xf] = (uint)(*(le<ushort>* )(fr0_ - 0x26));
          ar5[0x10] = (uint)(*(le<ushort>* )(fr0_ - 0x28));
          uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), libgcc_divide_helper_010468(0x200,(uint)(*(le<ushort>* )(fr0_ - 0x26)),vr6,vr7));
          ar5[0x11] = uVar5;
          uVar5 = (vsp = ((unsigned long)(fr0_ - 300)), libgcc_divide_helper_010468(uVar7,(uint)(*(le<ushort>* )(fr0_ - 0x28)),vr6,vr7));
          ar5[0x12] = uVar5;
          return 0;
        }
        goto override_prt_8c1fd1c8_7a4d7f16;
      }
    } while (*(char *)(unsigned)(iVar3 + 4) == -4);
  }
  return 0xffffff01;
}

__asm__(".globl FUN_8c1fd008\n.set FUN_8c1fd008, FUN_8c1fd008_def\n");

}
