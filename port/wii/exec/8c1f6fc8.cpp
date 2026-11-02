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
undefined4 FUN_8c1f6fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c1f6fc8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 156; for (int i_ = 0; i_ < 156; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if ((*(undefined1 *)(unsigned)0x8c273a10) == '\0') {
    (*(le<undefined4>* )(unsigned)(unsigned)0x8c4748a8) = 5;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c1f6e0c(iVar3 * 4 + 0x18,0,ar6,ar7));
      if (iVar1 == 1) {
        ar6 = 10;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c013ec0((*(le<undefined4>* )(unsigned)(unsigned)0x8c4748b0) + 2,ar4,10,ar7));
        if (iVar1 == 0) {
          ar6 = 0x3c;
          (vsp = ((unsigned long)(fr0_ - 156)), memmove(((undefined1 *)(fr0_ - 0x98)),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4748b0),0x3c,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c1f6e0c(iVar3 * 4 + 0x19,0,ar6,ar7));
          if (iVar1 == 1) {
            ar6 = 0x3c;
            (vsp = ((unsigned long)(fr0_ - 156)), memmove(((undefined1 *)(fr0_ - 0x5c)),(*(le<undefined4>* )(unsigned)(unsigned)0x8c4748b0),0x3c,ar7));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 156)), FUN_8c1f109c(0x6e,((undefined1 *)(fr0_ - 0x96)),ar6,ar7));
            if ((uint)(*(le<ushort>* )(fr0_ - 0x28)) == (uVar2 & 0xffff)) {
              return iVar3;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0xffffffff;
}

__asm__(".globl FUN_8c1f6fc8\n.set FUN_8c1f6fc8, FUN_8c1f6fc8_def\n");

}
