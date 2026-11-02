#include "../decls.h"
undefined4 asr_load_language_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined *ar5_00;
  undefined *ar6_00;
  int ar7_00;
  
  if (*(undefined4 *)0x8c2791b8 < 3) {
    *(undefined4 *)0x8c279258 = 0;
    *(undefined4 *)0x8c27925c = 0;
    *(undefined4 *)0x8c279260 = 0;
    *(undefined4 *)0x8c279268 = 0;
    *(undefined4 *)0x8c279264 = 0;
    *(undefined4 *)(0x5b34 + ar4) = 0;
    ar7_00 = ar4 + 0x5b34;
    ar6_00 = (&DATA_8c12fb7c) + 0x1c;
    ar5_00 = (&DATA_8c12fb7c);
    iVar2 = (*(code *)(&file_load_into_object_buffer))
                      (0x8c3eb334,(&DATA_8c12fb7c),ar6_00,ar7_00);
    if (iVar2 == 1) {
      iVar2 = asr_init_from_model(ar4,ar5_00,ar6_00,ar7_00);
      if (iVar2 == 0) {
        uVar1 = 0;
      }
      else {
        (*(code *)(&asr_register_strings))
                  (ar4,(&DATA_8c12fb7c) + 0x1d,
                   (&DATA_8c12fb7c) + 0x26,ar7_00);
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _asr_load_language_model\n.set _asr_load_language_model, _asr_load_language_model_def\n");
