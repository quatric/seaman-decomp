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
undefined4 FUN_8c0b6e6c_def(undefined *ar4,undefined *ar5,undefined *ar6,undefined *ar7)

{
  TRACE_ENTER("FUN_8c0b6e6c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 160; for (int i_ = 0; i_ < 160; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar6_00;
  undefined *ar5_00;
  undefined4 uVar2;
  undefined1 *ar6_01;
  undefined *ar7_00;
  undefined4 ar7_01;
  undefined4 uVar3;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar3 = 1;
  (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x34)),ar5_00,ar6_00,ar7_00));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01f520(0x8c3dd7dc,uVar2,ar6_00,ar7_00));
      if ((*(le<int>* )(fr0_ + 0x00000004)) == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 0) {
          ar6_00 = ((undefined *)(fr0_ - 0x48));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
          if (iVar1 == 1) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b0a8(uVar2,ar4,ar7,((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ + 0x00000000))));
            ar6_00 = ar7;
            ar7_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ + 0x00000000));
            if (iVar1 == 1) {
              uVar3 = 0;
            }
            break;
          }
        }
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00));
        if ((iVar1 == 0) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bba0(uVar2,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00)), iVar1 == 1)) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01ae98(uVar2,ar4,ar5,ar6));
          ar6_00 = ar5;
          ar7_00 = ar6;
          if (iVar1 == 1) {
            uVar3 = 0;
            ar6_00 = ar5;
            ar7_00 = ar6;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
          if ((iVar1 == 0) &&
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),((undefined *)(fr0_ - 0x48)),ar7_00)), iVar1 == 1)) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b47c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6));
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            ar7_01 = 4;
            ar6_01 = ((undefined1 *)(unsigned)0x8c4365bc);
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c016318(((undefined1 *)(fr0_ - 0x34)),((undefined1 *)(unsigned)0x8c43659c),((undefined1 *)(unsigned)0x8c4365bc),4); });
            uVar2 = 0x60;
            ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x9c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 160)); FUN_8c015198(((undefined1 *)(fr0_ - 0x34)),0x60,ar6_01,ar7_01); });
            (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c016340(((undefined1 *)(fr0_ - 0x34)),uVar2,ar6_01,ar7_01));
            ar6_00 = (undefined *)(unsigned)0x0;
            (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,ar4));
            ar7_00 = ar4;
          }
        }
      }
      else {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b0a8(uVar2,ar4,ar7,((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ + 0x00000000))));
          ar6_00 = ar7;
          ar7_00 = ((undefined *)(unsigned long)*(le<unsigned>* )(fr0_ + 0x00000000));
          if (iVar1 == 1) {
            uVar3 = 0;
          }
        }
        else {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),ar6_00,ar7_00));
          if (iVar1 == 0) {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01ae98(uVar2,ar4,ar5,ar6));
            ar6_00 = ar5;
            ar7_00 = ar6;
            if (iVar1 == 1) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
          else {
            iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
            if ((iVar1 == 0) &&
               (iVar1 = (vsp = ((unsigned long)(fr0_ - 160)), FUN_8c01b47c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6)), ar6_00 = ar5,
               ar7_00 = ar6, iVar1 == 1)) {
              uVar3 = 0;
              ar6_00 = ar5;
              ar7_00 = ar6;
            }
          }
        }
      }
      break;
    case 1:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      ar6_00 = (undefined *)(unsigned)0x0;
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 160)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      ar6_00 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 160)), get_field_a524_01f514(0x8c3dd7dc,ar5_00,ar6_00,ar7_00));
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      (vsp = ((unsigned long)(fr0_ - 160)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,ar6_00,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  (vsp = ((unsigned long)(fr0_ - 160)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7_00));
  return uVar3;
}

__asm__(".globl FUN_8c0b6e6c\n.set FUN_8c0b6e6c, FUN_8c0b6e6c_def\n");

}
