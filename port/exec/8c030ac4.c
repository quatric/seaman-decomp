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
undefined4 s_EVENT_ROCK_PUSH_030ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_EVENT_ROCK_PUSH_030ac6";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x32,ar6,ar7));
  if (((((((iVar1 == 0) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x42,ar6,ar7)),
          iVar1 == 0)) ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x54,ar6,ar7)),
         iVar1 == 0)) ||
        ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x68,ar6,ar7)),
         iVar1 == 0 ||
         (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030c9c(ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x7a,ar6,ar7)),
         iVar1 == 0)))) ||
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                           (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x8a,ar6,ar7)), iVar1 == 0
        || ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                               (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xa2,ar6,ar7)),
            iVar1 == 0 ||
            (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                               (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xb2,ar6,ar7)),
            iVar1 == 0)))))) ||
      (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                         (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xc7,ar6,ar7)), iVar1 == 0))
     || ((((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                              (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xd7,ar6,ar7)),
           iVar1 == 0 ||
           (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                              (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xed,ar6,ar7)),
           iVar1 == 0)) ||
          (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                             (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0xfb,ar6,ar7)), iVar1 == 0
          )) || (((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x107,ar6,ar7)),
                  iVar1 == 0 ||
                  (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x113,ar6,ar7)),
                  iVar1 == 0)) ||
                 ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                     (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x11f,ar6,ar7)),
                  iVar1 == 0 ||
                  ((iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                      (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x12c,ar6,ar7)),
                   iVar1 == 0 ||
                   (iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c030c9c))))
                                      (ar5,(&(*(undefined1 *)(unsigned)0x8c132a04)) + 0x137,ar6,ar7)),
                   iVar1 == 0)))))))))) {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl _s_EVENT_ROCK_PUSH_030ac6\n.set _s_EVENT_ROCK_PUSH_030ac6, _s_EVENT_ROCK_PUSH_030ac6_def\n");
