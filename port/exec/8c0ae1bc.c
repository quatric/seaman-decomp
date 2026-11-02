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
undefined4 s_Squid_FreeGraphicResource_0ae1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Squid_FreeGraphicResource_0ae1c0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028afc(ar4,ar5,ar6,ar7));
  if ((*(int *)(unsigned)(0x88c + ar4) != 0) && (*(int *)(unsigned)(0x890 + ar4) != 0)) {
    ar6 = *(undefined4 *)(unsigned)(0x890 + ar4);
    uVar2 = 0x2ee0;
    (vsp = ((unsigned long)(fr0_ - 0)), s_GRAPHICS_SQUIDLINE_0ae646(ar5,0x2ee0,ar6,ar7));
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x9bc,uVar2,ar6,ar7));
  if (iVar1 == 0) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x38c,
                       (&(*(undefined1 *)(unsigned)0x8c13b5ec)) + 0x39f,1,2));
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x9bc,uVar2,ar6,ar7));
  }
  return uVar2;
}

__asm__(".globl _s_Squid_FreeGraphicResource_0ae1c0\n.set _s_Squid_FreeGraphicResource_0ae1c0, _s_Squid_FreeGraphicResource_0ae1c0_def\n");
