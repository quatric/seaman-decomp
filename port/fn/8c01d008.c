#include "../decls.h"
undefined4 FUN_8c01d008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(undefined4 *)0x8c27925c != 0) {
    ar5 = 0;
    asr_lib_bind_recognizer_model(*(undefined4 *)0x8c27925c,0,ar6,ar7);
  }
  if (*(undefined4 *)0x8c279268 != 0) {
    FUN_8c10c3a0(*(undefined4 *)0x8c279268,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c279264 != 0) {
    FUN_8c10ba7c(*(undefined4 *)0x8c279264,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c279260 != 0) {
    FUN_8c10bad4(*(undefined4 *)0x8c279260,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c27925c != 0) {
    FUN_8c10ba20(*(undefined4 *)0x8c27925c,ar5,ar6,ar7);
  }
  if (*(undefined4 *)0x8c279258 != 0) {
    FUN_8c10b8c6(*(undefined4 *)0x8c279258,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c279258 = 0;
  *(undefined4 *)0x8c27925c = 0;
  *(undefined4 *)0x8c279260 = 0;
  *(undefined4 *)0x8c279264 = 0;
  *(undefined4 *)0x8c2791b8 = 2;
  return 2;
}

__asm__(".globl _FUN_8c01d008\n.set _FUN_8c01d008, _FUN_8c01d008_def\n");
