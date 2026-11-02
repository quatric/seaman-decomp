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
undefined4 s_CAnimal_RunIncubator_026882_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_CAnimal_RunIncubator_026882");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7));
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7));
  if (*(le<int>* )(unsigned)(0x30c + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = (&(*(undefined1 *)(unsigned)0x8c12fdac)) + 0x73;
    (vsp = ((unsigned long)(fr0_ - 68)), report_error_message((&(*(undefined1 *)(unsigned)0x8c12fdac)) + 99,ar5,1,2));
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)) + 0x14))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(0x30c + ar4)),ar5,ar6,ar7));
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02aabc(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl s_CAnimal_RunIncubator_026882\n.set s_CAnimal_RunIncubator_026882, s_CAnimal_RunIncubator_026882_def\n");

}
