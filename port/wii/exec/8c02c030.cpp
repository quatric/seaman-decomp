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
undefined4 FUN_8c02c030_def(int ar4,le<int>* ar5,le<int>* ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c02c030");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 76; for (int i_ = 0; i_ < 76; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  le<int>* ar6_00;
  le<int>* ar5_00;
  undefined4 uVar3;
  undefined4 ar6_01;
  int ar5_01;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), get_field_24_026024(ar6,ar5,ar6,ar7));
  if (*(char *)(unsigned)(ar4 + 0x144) == '\x01') {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c390(ar4 + 0xa8,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x18,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    if (iVar1 == 0) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x30,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    }
    if (iVar1 == 1) {
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x48,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x60,(int)*(char *)(unsigned)(ar4 + 0x144),ar6_00,ar7));
    ar5_00 = (le<int>* )(unsigned)(int)*(char *)(unsigned)(ar4 + 0x144);
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7));
  }
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7));
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7));
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7));
    (*(le<undefined4>* )(fr0_ - 0x4c)) =
         CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x4c)) >> 0x10),
                  CONCAT11((char)uVar2,(char)(*(le<undefined4>* )(fr0_ - 0x4c))));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7));
    }
  }
  if (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148))) {
    ar7 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
    ar5_00 = ar6;
    ar6_00 = ar5;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7));
  if ((iVar1 == 0) && (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148)))) {
    if (ar5 != ((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x148))) {
      ar6_00 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
      ar5_00 = ar5;
      (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7));
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7));
    uVar3 = 0xd;
    uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7));
    ar5_01 = (int)(char)uVar2;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7));
    if ((iVar1 == 100) && (ar5_01 = 5, (*(le<undefined4>* )(unsigned)(unsigned)0x8c27d430) == 1)) {
      ar5_01 = 4;
    }
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7));
    iVar1 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7));
    if (iVar1 == 1) {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7); });
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x4c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 76)); FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7); });
    }
    ar5_00 = ar6;
    (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7));
  }
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c518(ar4,ar5_00,ar6_00,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7));
  uVar3 = (vsp = ((unsigned long)(fr0_ - 76)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar6 + 0x148))))(ar6,uVar2,ar6_00,ar7));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7));
  ar6_01 = *(le<undefined4>* )(unsigned)(ar4 + 0x140);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7));
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7));
  uVar2 = *(le<undefined4>* )(unsigned)(ar4 + 0x13c);
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7));
  *(undefined1 *)(unsigned)(ar4 + 0x144) = 0;
  (vsp = ((unsigned long)(fr0_ - 76)), FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7));
  *(le<unsigned>* )(unsigned)(ar4 + 0x148) = ar5;
  return 0x148;
}

__asm__(".globl FUN_8c02c030\n.set FUN_8c02c030, FUN_8c02c030_def\n");

}
