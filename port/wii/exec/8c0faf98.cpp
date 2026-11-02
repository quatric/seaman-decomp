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
undefined4 s_SPEECH_0faf9e_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  TRACE_ENTER("s_SPEECH_0faf9e");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 0) {
    return 0;
  }
  if (*ar5 == '\0') {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),*(le<undefined4>* )(unsigned)(ar4 + 0x38),ar6,ar7); });
    iVar2 = 0;
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7); });
    iVar2 = 0;
    while ((iVar2 < *(le<int>* )(unsigned)(ar4 + 0x34) &&
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38),((undefined1 *)(fr0_ - 0x30)),ar6,ar7)), iVar1 != 0
           ))) {
      iVar2 = iVar2 + 1;
    }
    if (*(le<int>* )(unsigned)(ar4 + 0x34) <= iVar2) {
      return 0;
    }
  }
  if ((*(char *)(unsigned)(ar4 + 0x5c) != '\0') &&
     ((*(le<int>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x20) != *(le<int>* )(unsigned)(ar4 + 0x7c) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c0faf30(((undefined1 *)(fr0_ - 0x30)),ar4 + 0x5c,ar6,ar7)), iVar1 != 0)))) {
    ar7 = 1;
    ar6 = ((undefined1 *)(unsigned)0x8c141dd0);
    (vsp = ((unsigned long)(fr0_ - 72)), FUN_8c021338(0x8c3eb334,ar4 + 0x3c,((undefined1 *)(unsigned)0x8c141dd0),1));
    *(undefined1 *)(unsigned)(ar4 + 0x5c) = 0;
  }
  ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x48))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 72)); strcpy(ar4 + 0x5c,((undefined1 *)(fr0_ - 0x30)),ar6,ar7); });
  *(le<undefined4>* )(unsigned)(ar4 + 0x7c) = *(le<undefined4>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x20);
  *(le<undefined4>* )(unsigned)(ar4 + 0x80) = *(le<undefined4>* )(unsigned)(iVar2 * 0x28 + *(le<int>* )(unsigned)(ar4 + 0x38) + 0x24);
  return 1;
}

__asm__(".globl s_SPEECH_0faf9e\n.set s_SPEECH_0faf9e, s_SPEECH_0faf9e_def\n");

}
