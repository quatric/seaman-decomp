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
int s_GRAPHICS_MESSAGE_0cef1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_MESSAGE_0cef1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x10; iVar2 = iVar2 + 1) {
    *(le<undefined4>* )(unsigned)(0x3ec + iVar2 * 0xc + ar4) = 0;
  }
  a7 = 0x10;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x3e0,ar4 + 0x3e8,0x8c4312a8,0x10));
  iVar2 = ar4 + 0x3e0;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x158) + 8))))((le<int>* )(unsigned)(ar4 + 0x158),iVar2,uVar1,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x158,iVar2,uVar1,a7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c02100c))))
                    (ar5,(&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x261,
                     (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x19,uVar1));
  if (iVar2 == -1) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      ((&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x26c,
                       (&(*(undefined1 *)(unsigned)0x8c13d004)) + 0x287,0,2));
  }
  return iVar2;
}

__asm__(".globl s_GRAPHICS_MESSAGE_0cef1c\n.set s_GRAPHICS_MESSAGE_0cef1c, s_GRAPHICS_MESSAGE_0cef1c_def\n");

}
