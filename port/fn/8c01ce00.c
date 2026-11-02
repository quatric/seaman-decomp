#include "../decls.h"
undefined4 asr_init_from_model_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 *ar7_00;
  
  iVar1 = asr_lib_create_engine((&DATA_8c12fb40),0,0x8c279258,ar7);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&asr_lib_load_model))
                      (*(undefined4 *)0x8c279258,*(undefined4 *)(0x5b34 + ar4),1,0x8c279260);
    if (iVar1 == 0) {
      *(undefined4 *)0x8c2791b8 = 3;
      uVar2 = 0;
      ar7_00 = 0x8c27925c;
      iVar1 = (*(code *)(&asr_lib_create_recognizer))
                        (*(undefined4 *)0x8c279258,(&DATA_8c12fb64),0,0x8c27925c);
      if (iVar1 == 0) {
        ar5_00 = *(undefined4 *)0x8c279260;
        iVar1 = (*(code *)(&asr_lib_bind_recognizer_model))
                          (*(undefined4 *)0x8c27925c,ar5_00,uVar2,ar7_00);
        if (iVar1 == 0) {
          iVar1 = FUN_8c01cee0(ar4,ar5_00,uVar2,ar7_00);
          if (iVar1 == 0) {
            uVar2 = 0;
          }
          else {
            *(undefined4 *)0x8c2791b8 = 4;
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _asr_init_from_model\n.set _asr_init_from_model, _asr_init_from_model_def\n");
