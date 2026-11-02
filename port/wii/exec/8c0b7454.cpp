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
undefined4 FUN_8c0b7454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0b7454");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 48; for (int i_ = 0; i_ < 48; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *ar6_00;
  undefined *ar7_00;
  undefined4 uVar4;
  
  uVar2 = ar5;
  uVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a510_01f538(0x8c3dd7dc,ar5,ar6,ar7));
  uVar4 = 1;
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      ar7_00 = ((undefined1 *)(unsigned)0x8c13c025);
      uVar3 = 0;
      uVar2 = 0xb;
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),0xb,0,((undefined1 *)(unsigned)0x8c13c025)));
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01f520(0x8c3dd7dc,uVar2,uVar3,ar7_00));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bba0(uVar2,ar4,uVar3,ar7_00));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c026),uVar3,ar7_00));
        if ((iVar1 == 0) && (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b5f8(uVar2,ar4,ar5,ar6)), iVar1 == 1)) {
          uVar4 = 0;
        }
      }
      else {
        ar6_00 = ((undefined1 *)(fr0_ - 0x30));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01bc2c(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar6_00,ar7_00));
        if (iVar1 == 1) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c0b6e04(ar4,((undefined1 *)(unsigned)0x8c13c033),ar6_00,ar7_00));
          if ((iVar1 == 0) &&
             (iVar1 = (vsp = ((unsigned long)(fr0_ - 48)), FUN_8c01b7b0(uVar2,((undefined1 *)(unsigned)0x8c13c040),ar5,ar6)), iVar1 == 1)) {
            uVar4 = 0;
          }
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),3,0,ar4));
        }
      }
      break;
    case 1:
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),1,0,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 3:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),2,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
      break;
    case 4:
      uVar2 = (vsp = ((unsigned long)(fr0_ - 48)), get_field_a524_01f514(0x8c3dd7dc,uVar2,uVar3,ar7));
      (vsp = ((unsigned long)(fr0_ - 48)), s_WARNING_NOPAD_0c2f08(((undefined1 *)(unsigned)0x8c2b5628),4,uVar2,((undefined1 *)(unsigned)0x8c13c025)));
    }
  }
  return uVar4;
}

__asm__(".globl FUN_8c0b7454\n.set FUN_8c0b7454, FUN_8c0b7454_def\n");

}
