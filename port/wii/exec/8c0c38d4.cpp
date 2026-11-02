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
int s_WARNING_NOPAD_0c38d6_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_WARNING_NOPAD_0c38d6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  char *ar5_00;
  
  ar5_00 = ar5;
  if (((int)ar5 < 7) && (0 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x1:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbb4);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbb4),ar6,ar7); });
      break;
    case 0x2:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbd0),ar6,ar7); });
      break;
    case 0x3:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbde),ar6,ar7); });
      break;
    case 0x4:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbc2);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbc2),ar6,ar7); });
      break;
    case 0x5:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbde);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbde),ar6,ar7); });
      break;
    case 0x6:
      ar5_00 = ((undefined1 *)(unsigned)0x8c13cbd0);
      ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); strcpy(ar4 + 0x388,((undefined1 *)(unsigned)0x8c13cbd0),ar6,ar7); });
    }
  }
  if (*(le<int>* )(unsigned)(ar4 + 900) != -1) {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0c3a14(ar4,ar5_00,ar6,ar7));
  }
  iVar1 = *(le<int>* )(unsigned)(ar4 + 900);
  if ((iVar1 == -1) && (iVar1 = (int)*(char *)(unsigned)(ar4 + 0x388), iVar1 != 0x30)) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), pack_acquire_entry_handle(0x8c2b59d0,ar4 + 0x388,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 900) = uVar2;
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c021d90(0x8c2b59d0,*(le<undefined4>* )(unsigned)(ar4 + 900),0,0));
  }
  return iVar1;
}

__asm__(".globl s_WARNING_NOPAD_0c38d6\n.set s_WARNING_NOPAD_0c38d6, s_WARNING_NOPAD_0c38d6_def\n");

}
