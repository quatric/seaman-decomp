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
int s_REACTION_TITILLATE_1080e0_def(int ar4,le<int>* ar5,int ar6,undefined *ar7)

{
  TRACE_ENTER("s_REACTION_TITILLATE_1080e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  undefined4 a6;
  
  iVar2 = ar6;
  if (*(char *)(unsigned)(0x84 + ar4) == '\x01') {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) || (*(le<int>* )(unsigned)(ar4 + 0x40) != 0)) {
      if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) &&
         (*(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1a, *(le<int>* )(unsigned)(0x384 + ar4) == -1)) {
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,0,ar6,ar7));
        ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x376;
        ({ unsigned long t0_ = (unsigned long)((&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x33); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                  (ar4 + 0x9c,0x28,0,ar7); });
        *(le<undefined4>* )(unsigned)(0xfc + ar4) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0f8320))))
                          (0x8c35468c,*(le<undefined4>* )(unsigned)(0x388 + ar4),iVar2,ar7));
        *(le<undefined4>* )(unsigned)(0x384 + ar4) = uVar1;
        *(le<undefined4>* )(unsigned)(0x14c + ar4) = 0;
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7));
      }
    }
    else {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1a;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1a;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1a;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7));
    }
  }
  else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1a) {
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x14;
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
    *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0;
    *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0;
  }
  if (*(char *)(unsigned)(0x85 + ar4) == '\x01') {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1b) || (*(le<int>* )(unsigned)(ar4 + 0x40) != 0)) {
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1b) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1b;
      }
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1b;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1b;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1b;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
    }
  }
  if ((*(char *)(unsigned)(0x87 + ar4) == '\x01') && (*(le<int>* )(unsigned)(ar4 + 0x40) != 0x19)) {
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0) ||
       ((*(le<int>* )(unsigned)(ar4 + 0x40) == 3 || (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x14)))) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x4b;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x19;
      *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x19;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x19;
      *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
      *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
      *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7));
      ar7 = (&(*(undefined1 *)(unsigned)0x8c1eee90)) + 0x389;
      iVar2 = 4;
      (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0306d4(ar4 + 0x9c,0x27,4,ar7));
    }
    else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x19) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x19;
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar5))))(ar5,0xd,iVar2,ar7));
  if (0 < iVar2) {
    a6 = 0;
    uVar1 = 0xd;
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
    iVar2 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xb4 + *(le<int>* )(unsigned)(iVar2 + 8)))))(iVar2,uVar1,a6,ar7));
    if (((iVar2 == 1) &&
        (uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c035724))))
                           (*(le<undefined4>* )(unsigned)(ar6 + 0x18),uVar1,a6,ar7)), (byte)uVar1 < 2)) &&
       (*(le<int>* )(unsigned)(ar4 + 0x40) != 0x1f)) {
      if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x100 + *ar5))))(ar5,0xd,0,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = uVar1;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xd;
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x41;
        *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1f;
        *(le<undefined4>* )(unsigned)(0x840 + ar4) = 0x1f;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0x9c) = 0x1f;
        *(le<undefined4>* )(unsigned)(0x844 + ar4) = 0x22;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa0) = 0x22;
        *(le<undefined4>* )(unsigned)(0x848 + ar4) = 0x22;
        *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1eed94)) + 0xa4) = 0x22;
      }
      else if (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x1f) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0x1f;
      }
    }
  }
  *(undefined1 *)(unsigned)(0x84 + ar4) = 0;
  *(undefined1 *)(unsigned)(0x85 + ar4) = 0;
  iVar2 = 0x87;
  *(undefined1 *)(unsigned)(0x87 + ar4) = 0;
  return iVar2;
}

__asm__(".globl s_REACTION_TITILLATE_1080e0\n.set s_REACTION_TITILLATE_1080e0, s_REACTION_TITILLATE_1080e0_def\n");

}
