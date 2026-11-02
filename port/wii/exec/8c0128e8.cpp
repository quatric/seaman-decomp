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
int FUN_8c0128e8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0128e8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 120; for (int i_ = 0; i_ < 120; i_++) z_[i_] = 0; }
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int ar6_00;
  
  (vsp = ((unsigned long)(fr0_ - 120)), memset(ar6,0,0x10,ar7));
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(unsigned)(iVar4 + ar5) != '\0') {
      (vsp = ((unsigned long)(fr0_ - 120)), memset(((byte *)(fr0_ - 0x34)),0,0x10,ar7));
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        ar6_00 = (uint)*(byte *)(unsigned)(ar4 + sVar3) * (uint)*(byte *)(unsigned)(ar5 + iVar4);
        (*(le<undefined4>* )(fr0_ - 0x3c)) =
             CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x3c)) >> 0x10),
                      (ushort)((byte *)(fr0_ - 0x34))[iVar1 + 1] + (short)ar6_00);
        (vsp = ((unsigned long)(fr0_ - 120)), FUN_8c012a40(((byte *)(fr0_ - 0x34)) + iVar1,(fr0_ + (int)0xffffffc4),ar6_00,ar7));
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = (vsp = ((unsigned long)(fr0_ - 120)), memmove(ar6 + 7,((byte *)(fr0_ - 0x34)) + 7,9,ar7));
      }
      else {
        iVar4 = ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x3c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 120)); FUN_8c010af8(iVar4 + ar6,((byte *)(fr0_ - 0x34)) + iVar4,9,ar7); });
      }
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return iVar4;
}

__asm__(".globl FUN_8c0128e8\n.set FUN_8c0128e8, FUN_8c0128e8_def\n");

}
