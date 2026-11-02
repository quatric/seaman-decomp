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
int FUN_8c202342_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c202342");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  char cVar1;
  bool bVar2;
  int iVar3;
  
  cVar1 = *ar4;
  bVar2 = false;
  if (cVar1 == '\0') {
    iVar3 = *(le<int>* )(unsigned)(ar4 + 0x28);
    if ((iVar3 == 0) || (iVar3 != 1)) goto LAB_8c2023fe;
LAB_8c2023be:
    iVar3 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2022ac(ar4,&(*(undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x28);
      if ((iVar3 != 1) && (iVar3 != 2)) {
joined_r0x8c20239e:
        if (iVar3 != 4) goto LAB_8c2023fe;
        goto LAB_8c2023be;
      }
    }
    else if (cVar1 == '\x02') {
      iVar3 = *(le<int>* )(unsigned)(ar4 + 0x28);
      if (iVar3 == 3) goto LAB_8c2023be;
      if (iVar3 != 2) goto LAB_8c2023fe;
    }
    else if (cVar1 != '\x04') {
      if (cVar1 == '\x05') {
        (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2022ac(ar4,&(*(undefined1 *)(fr0_ - 0x14)),ar6,ar7));
        iVar3 = 0;
        (*(undefined1 *)(fr0_ - 0x14)) = (undefined1)0xfc;
        (*(undefined1 *)(fr0_ - 0x13)) = 0;
        (*(undefined1 *)(fr0_ - 0x12)) = 0;
        (*(undefined1 *)(fr0_ - 0x11)) = 0;
      }
      else {
        if (cVar1 == '\x06') {
          iVar3 = *(le<int>* )(unsigned)(ar4 + 0x28);
          goto joined_r0x8c20239e;
        }
        iVar3 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2022ac(ar4,&(*(undefined1 *)(fr0_ - 0x14)),ar6,ar7));
      }
      goto LAB_8c2023fc;
    }
    iVar3 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c2022ac(ar4,&(*(undefined1 *)(fr0_ - 0x14)),ar6,ar7));
  }
LAB_8c2023fc:
  bVar2 = true;
LAB_8c2023fe:
  if (bVar2) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 20)), FUN_8c1eff32(*(le<undefined4>* )(unsigned)(ar4 + 0x24),&(*(undefined1 *)(fr0_ - 0x14)),ar6,ar7));
    *(le<int>* )(unsigned)(ar4 + 0x1c) = iVar3;
    ar4[0x20] = '\x01';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  else {
    ar4[0x20] = '\0';
    ar4[0x21] = '\0';
    ar4[0x22] = '\0';
    ar4[0x23] = '\0';
  }
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = *(le<undefined4>* )(unsigned)(ar4 + 0x28);
  return iVar3;
}

__asm__(".globl FUN_8c202342\n.set FUN_8c202342, FUN_8c202342_def\n");

}
