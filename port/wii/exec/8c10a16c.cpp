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
undefined * Class_12c3c4_m4_10a16c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12c3c4_m4_10a16c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)(unsigned)0x7;
  if ((iVar2 < 8) && (-1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c10a190))[iVar2];
                    
    switch(iVar2) {
    case 0:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,10,0x1b,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x10,0x1b,ar7));
      break;
    case 6:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x12,0x1b,ar7));
      break;
    case 7:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x13,0x1b,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl Class_12c3c4_m4_10a16c\n.set Class_12c3c4_m4_10a16c, Class_12c3c4_m4_10a16c_def\n");

}
