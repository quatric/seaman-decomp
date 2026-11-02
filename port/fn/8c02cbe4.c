#include "../decls.h"
undefined4 FUN_8c02cbe4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ain0;
  int in_stack_ffffffd0;
  
  FUN_8c02ce4c(ar4,*ar5,ar6,ar7);
  FUN_8c02ce40(ar4,ar5[1],ar6,ar7);
  FUN_8c02ce34(ar4,ar5[2],ar6,ar7);
  FUN_8c02ce28(ar4,ar5[3],ar6,ar7);
  FUN_8c02cbbc(ar4 + 0x90,ar5[4],ar6,ar7);
  FUN_8c02ce10(ar4 + 0x90,ar5[5],ar6,ar7);
  FUN_8c02cb7c(ar4 + 0xa8,(int)*(char *)(ar5 + 6),ar6,ar7,in_stack_ffffffd0);
  FUN_8c02cb74(ar4 + 0xa8,(int)*(char *)((int)ar5 + 0x19),ar6,ar7);
  FUN_8c028edc(ar4 + 0xa8,ar5[7],ar6,ar7,in_stack_ffffffd0);
  FUN_8c028ed4(ar4 + 0xa8,ar5[8],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02cbd4(ar4 + 0xa8,ar5[9],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(ar5 + 10),ar6,ar7);
  FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)((int)ar5 + 0x2a),ar6,ar7);
  FUN_8c02cb84(ar4 + 0xa8,ar5[0xb],ar6,ar7,in_stack_ffffffd0);
  FUN_8c02ce08(ar4 + 0xf8,ar5[0xc],ar6,ar7,in_stack_ffffffd0);
  for (ain0 = 0; ain0 < 6; ain0 = ain0 + 1) {
    FUN_8c02bd94(ain0 * 0x18 + ar4,(int)*(char *)(ar5 + ain0 * 3 + 0xd),ar6,ar7);
    FUN_8c02c330(ain0 * 0x18 + ar4,(int)*(char *)((int)ar5 + ain0 * 0xc + 0x35),ar6,ar7,
                 in_stack_ffffffd0);
    FUN_8c02c338(ain0 * 0x18 + ar4,(int)*(char *)(ar5 + ain0 * 3 + 0xf),ar6,ar7);
    in_stack_ffffffd0 = ain0;
    FUN_8c02ce00(ain0 * 0x18 + ar4,ar5[ain0 * 3 + 0xe],ar6,ar7,ain0);
  }
  FUN_8c02cdf8(ar4 + 0x78,(int)*(char *)(ar5 + 0x1e),ar6,ar7);
  uVar1 = FUN_8c02c338(ar4 + 0x78,0,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02cbe4\n.set _FUN_8c02cbe4, _FUN_8c02cbe4_def\n");
