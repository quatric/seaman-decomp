#include "../decls.h"
undefined4 s_EVENT_ROCK_PUSH_030ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c030c9c(ar5,(&DATA_8c132a04) + 0x32,ar6,ar7);
  if (((((((iVar1 == 0) ||
          (iVar1 = FUN_8c030c9c(ar5,(&DATA_8c132a04) + 0x42,ar6,ar7),
          iVar1 == 0)) ||
         (iVar1 = FUN_8c030c9c(ar5,(&DATA_8c132a04) + 0x54,ar6,ar7),
         iVar1 == 0)) ||
        ((iVar1 = FUN_8c030c9c(ar5,(&DATA_8c132a04) + 0x68,ar6,ar7),
         iVar1 == 0 ||
         (iVar1 = FUN_8c030c9c(ar5,(&DATA_8c132a04) + 0x7a,ar6,ar7),
         iVar1 == 0)))) ||
       ((iVar1 = (*(code *)(&FUN_8c030c9c))
                           (ar5,(&DATA_8c132a04) + 0x8a,ar6,ar7), iVar1 == 0
        || ((iVar1 = (*(code *)(&FUN_8c030c9c))
                               (ar5,(&DATA_8c132a04) + 0xa2,ar6,ar7),
            iVar1 == 0 ||
            (iVar1 = (*(code *)(&FUN_8c030c9c))
                               (ar5,(&DATA_8c132a04) + 0xb2,ar6,ar7),
            iVar1 == 0)))))) ||
      (iVar1 = (*(code *)(&FUN_8c030c9c))
                         (ar5,(&DATA_8c132a04) + 0xc7,ar6,ar7), iVar1 == 0))
     || ((((iVar1 = (*(code *)(&FUN_8c030c9c))
                              (ar5,(&DATA_8c132a04) + 0xd7,ar6,ar7),
           iVar1 == 0 ||
           (iVar1 = (*(code *)(&FUN_8c030c9c))
                              (ar5,(&DATA_8c132a04) + 0xed,ar6,ar7),
           iVar1 == 0)) ||
          (iVar1 = (*(code *)(&FUN_8c030c9c))
                             (ar5,(&DATA_8c132a04) + 0xfb,ar6,ar7), iVar1 == 0
          )) || (((iVar1 = (*(code *)(&FUN_8c030c9c))
                                     (ar5,(&DATA_8c132a04) + 0x107,ar6,ar7),
                  iVar1 == 0 ||
                  (iVar1 = (*(code *)(&FUN_8c030c9c))
                                     (ar5,(&DATA_8c132a04) + 0x113,ar6,ar7),
                  iVar1 == 0)) ||
                 ((iVar1 = (*(code *)(&FUN_8c030c9c))
                                     (ar5,(&DATA_8c132a04) + 0x11f,ar6,ar7),
                  iVar1 == 0 ||
                  ((iVar1 = (*(code *)(&FUN_8c030c9c))
                                      (ar5,(&DATA_8c132a04) + 0x12c,ar6,ar7),
                   iVar1 == 0 ||
                   (iVar1 = (*(code *)(&FUN_8c030c9c))
                                      (ar5,(&DATA_8c132a04) + 0x137,ar6,ar7),
                   iVar1 == 0)))))))))) {
    uVar2 = 5;
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}

__asm__(".globl _s_EVENT_ROCK_PUSH_030ac6\n.set _s_EVENT_ROCK_PUSH_030ac6, _s_EVENT_ROCK_PUSH_030ac6_def\n");
