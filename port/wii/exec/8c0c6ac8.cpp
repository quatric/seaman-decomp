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
undefined4 s_GRAPHICS_COMMON_0c6ad0_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_COMMON_0c6ad0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *ar4_00;
  undefined4 uVar4;
  le<undefined*>* ar5_00;
  undefined4 uVar5;
  char *ar6_00;
  
  uVar5 = 1;
  uVar4 = 0xffffffff;
  (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c3e78(((undefined1 *)(unsigned)0x8c2b5628),0xffffffff,1,ar7));
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x2d3a0);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      iVar3 = ar5[499];
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c1011e0(iVar3,uVar4,uVar5,ar7));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0242e8(iVar3,uVar4,uVar5,ar7));
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c431a54) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c13bcc4) = 1;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c436924) = 0;
      (*(le<undefined4>* )(unsigned)(unsigned)0x8c436928) = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c015ad4(0x8c43690c,((undefined1 *)(unsigned)0x8c1622a4),uVar5,ar7); });
      ar5_00 = (le<unsigned char*>*)(&(*(le<undefined4>* )(unsigned)(unsigned)0x8c146440));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); Class_129920_m0_015248(0x8c43691c,&(*(le<undefined4>* )(unsigned)(unsigned)0x8c146440),uVar5,ar7); });
      uVar4 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_4_0253e4(0x8c43691c,ar5_00,uVar5,ar7));
      ar6_00 = ((undefined1 *)(unsigned)0x8c13d004);
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c020ef0(0x8c3eb334,((undefined1 *)(unsigned)0x8c13d107),((undefined1 *)(unsigned)0x8c13d004),uVar4));
      if (iVar3 == 0) {
        uVar4 = 2;
        ar6_00 = (char *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 56)), report_error_message(((undefined1 *)(unsigned)0x8c13d112),((undefined1 *)(unsigned)0x8c13d12c),0,2));
      }
      uVar5 = 0;
      ar4_00 = ((undefined1 *)(unsigned)0x8c2b5628);
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0c4d70(((undefined1 *)(unsigned)0x8c2b5628),0,ar6_00,uVar4));
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c06a524(ar4_00,uVar5,ar6_00,uVar4));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 1;
      break;
    case 1:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_a510_01f538(0x8c3dd7dc,uVar4,uVar5,ar7));
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7920(uVar1,uVar4,uVar5,ar7));
      if (iVar3 == 1) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 56)), s_SEAMANDC_USR_0b76dc(uVar1,uVar4,uVar5,ar7));
        iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b787c(uVar1,uVar4,uVar5,ar7));
        if (iVar3 == 1) {
          (*(le<undefined4>* )(unsigned)(unsigned)0x8c43711c) = *ar5;
          *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 2;
        }
      }
      break;
    case 2:
      if (3 < (uint)(*ar5 - (*(le<undefined4>* )(unsigned)(unsigned)0x8c43711c))) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 3;
      }
      break;
    case 3:
      iVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13d13d),0x8c431a68,0x4208,ar7));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b7454(((undefined1 *)(unsigned)0x8c13d14a),0x8c435c7c,0x600,ar7));
      if ((iVar3 == 0) && (iVar2 == 0)) {
        uVar4 = 0x8c431a68;
        (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0cc784(ar4,ar5,0x8c431a68,ar7));
        (vsp = ((unsigned long)(fr0_ - 56)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)) + 0xc0))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 0x14)),0x8c435c7c,uVar4,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 4;
      }
      else {
        *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 1;
      }
      break;
    case 4:
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x34))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 56)); FUN_8c258e0a(((void *)0x8c0d1c3c),uVar4,uVar5,ar7); });
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0b9230(ar5,uVar4,uVar5,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d15c) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0x2d3a0) = 0;
    }
  }
  return 1;
}

__asm__(".globl s_GRAPHICS_COMMON_0c6ad0\n.set s_GRAPHICS_COMMON_0c6ad0, s_GRAPHICS_COMMON_0c6ad0_def\n");

}
