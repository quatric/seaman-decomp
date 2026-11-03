//@unit 8c1b8a34
#include "../decls.h"
undefined4 FUN_8c1b8a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b8a34\n.set _FUN_8c1b8a34, _FUN_8c1b8a34_def\n");
//@unit 8c1b8ec2
#include "../decls.h"
undefined4 FUN_8c1b8ec2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b8ec2\n.set _FUN_8c1b8ec2, _FUN_8c1b8ec2_def\n");
//@unit 8c1b8f5c
#include "../decls.h"
undefined4 FUN_8c1b8f5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b8f5c\n.set _FUN_8c1b8f5c, _FUN_8c1b8f5c_def\n");
//@unit 8c1b9044
#include "../decls.h"
undefined4 FUN_8c1b9044_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r13;
  
  *(undefined4 *)(unaff_r13 + 0x30) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9044\n.set _FUN_8c1b9044, _FUN_8c1b9044_def\n");
//@unit 8c1b90e4
#include "../decls.h"
undefined4 FUN_8c1b90e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b90e4\n.set _FUN_8c1b90e4, _FUN_8c1b90e4_def\n");
//@unit 8c1b91a2
#include "../decls.h"
undefined4 FUN_8c1b91a2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b8f5c(ar4,ar5,ar6,ar7);
  FUN_8c1b8a34(ar4,ar5,ar6,ar7);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b91a2\n.set _FUN_8c1b91a2, _FUN_8c1b91a2_def\n");
//@unit 8c1b91d8
#include "../decls.h"
undefined4 FUN_8c1b91d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9994(ar4,ar5,ar6,ar7,(*(uint *)0xffffffd2));
  TrapAlways(0xcb);
  FUN_8c1b9044(ar4,ar5,ar6,ar7,(*(uint *)0xffffffd2));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b91d8\n.set _FUN_8c1b91d8, _FUN_8c1b91d8_def\n");
//@unit 8c1b939a
#include "../decls.h"
undefined4 halt_baddata_wrap_1b939a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r2;
  
  if (in_r2 <= *(int *)(ar5 + 0x2c)) {
                    
    halt_baddata();
  }
  FUN_8c1b90e4(ar4,ar5,ar6,(int)(*(short *)0x8c1b9432));
                    
  halt_baddata();
}

__asm__(".globl _halt_baddata_wrap_1b939a\n.set _halt_baddata_wrap_1b939a, _halt_baddata_wrap_1b939a_def\n");
//@unit 8c1b93be
#include "../decls.h"
undefined4 FUN_8c1b93be_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *unaff_r9;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_lOp(CONCAT44(in_MACH,in_MACL),(longlong)*unaff_r9 * (longlong)*ar4);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b93be\n.set _FUN_8c1b93be, _FUN_8c1b93be_def\n");
//@unit 8c1b93e2
#include "../decls.h"
undefined4 FUN_8c1b93e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1b8ec2(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1b93e2\n.set _FUN_8c1b93e2, _FUN_8c1b93e2_def\n");
//@unit 8c1b940a
#include "../decls.h"
undefined4 FUN_8c1b940a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1aa) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b940a\n.set _FUN_8c1b940a, _FUN_8c1b940a_def\n");
//@unit 8c1b9422
#include "../decls.h"
undefined4 FUN_8c1b9422_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x172) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9422\n.set _FUN_8c1b9422, _FUN_8c1b9422_def\n");
//@unit 8c1b9428
#include "../decls.h"
undefined4 FUN_8c1b9428_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r1;
  int in_GBR;
  
  uVar1 = FUN_8c1ba396(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + -in_r1));
  *(short *)(in_GBR + 0x196) = (short)uVar1;
  uVar1 = FUN_8c1ba1a4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1b9428\n.set _FUN_8c1b9428, _FUN_8c1b9428_def\n");
//@unit 8c1b9444
#include "../decls.h"
undefined4 FUN_8c1b9444_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  uint uVar1;
  int in_r2;
  undefined4 in_R7_BANK;
  int in_GBR;
  char in_M;
  char in_Q;
  undefined4 *puVar2;
  
  *(undefined2 *)(in_GBR + 0x1a2) = *(undefined2 *)(in_GBR + 0x194);
  *(undefined4 *)(ain1 + -0xc) = in_R7_BANK;
  uVar1 = (int)(char)(ain1 + -8) << 1 | (uint)(0 < ain1 + -8);
  if (in_Q == '\0' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  else if (in_Q == '\0' && in_M == '\x01') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else if (in_Q == '\x01' && in_M == '\0') {
    puVar2 = (undefined4 *)(uVar1 + in_r2);
  }
  else {
    puVar2 = (undefined4 *)(uVar1 - in_r2);
  }
  FUN_8c1b9b9e(ar4,ar5,ar6,ar7,*puVar2);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9444\n.set _FUN_8c1b9444, _FUN_8c1b9444_def\n");
//@unit 8c1b946e
#include "../decls.h"
undefined4 FUN_8c1b946e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_00000000;
  
  FUN_8c1b979e(ar4,ar5,ar6,ar7,in_stack_00000000);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b946e\n.set _FUN_8c1b946e, _FUN_8c1b946e_def\n");
//@unit 8c1b94ce
#include "../decls.h"
undefined4 FUN_8c1b94ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *in_r1;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_wOp(CONCAT44(in_MACH,in_MACL),(int)*in_r1 * (int)*in_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b94ce\n.set _FUN_8c1b94ce, _FUN_8c1b94ce_def\n");
//@unit 8c1b9552
#include "../decls.h"
undefined4 FUN_8c1b9552_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined2 in_r0;
  undefined4 in_r2;
  int in_GBR;
  
  *(undefined4 *)(ar7 + 0x14) = in_r2;
  *(undefined2 *)(in_GBR + 0x1a8) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9552\n.set _FUN_8c1b9552, _FUN_8c1b9552_def\n");
//@unit 8c1b9556
#include "../decls.h"
undefined4 FUN_8c1b9556_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1a8) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9556\n.set _FUN_8c1b9556, _FUN_8c1b9556_def\n");
//@unit 8c1b95f2
#include "../decls.h"
undefined4 FUN_8c1b95f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  undefined4 in_stack_00000000;
  
  FUN_8c1b91a2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b940a(ar4,ar5,ar6,(int)*unaff_r12,in_stack_00000000);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b95f2\n.set _FUN_8c1b95f2, _FUN_8c1b95f2_def\n");
//@unit 8c1b960a
#include "../decls.h"
undefined4 FUN_8c1b960a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b960a\n.set _FUN_8c1b960a, _FUN_8c1b960a_def\n");
//@unit 8c1b9664
#include "../decls.h"
undefined4 FUN_8c1b9664_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9428(ar4,ar5,ar6,ar7);
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9664\n.set _FUN_8c1b9664, _FUN_8c1b9664_def\n");
//@unit 8c1b9668
#include "../decls.h"
undefined4
halt_unimplemented_wrap_1b9668_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_unimplemented();
}

__asm__(".globl _halt_unimplemented_wrap_1b9668\n.set _halt_unimplemented_wrap_1b9668, _halt_unimplemented_wrap_1b9668_def\n");
//@unit 8c1b9702
#include "../decls.h"
undefined4 FUN_8c1b9702_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int unaff_r13;
  int in_GBR;
  undefined4 in_stack_00000000;
  
  uVar1 = FUN_8c1b9552(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(char *)(in_GBR + 0xd1) = (char)uVar1;
  uVar2 = *(uint *)(unaff_r13 + 0x38);
  *(short *)(in_GBR + 0x192) = (short)uVar1;
  uVar1 = FUN_8c1b9444(ar4,ar5,ar6,ar7,
                       uVar2 & 0xffff0000 | (uVar2 & 0xff) << 8 | (uVar2 & 0xff00) >> 8);
  FUN_8c1b9556(ar4,ar5,ar6,ar7,uVar1);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9702\n.set _FUN_8c1b9702, _FUN_8c1b9702_def\n");
//@unit 8c1b970a
#include "../decls.h"
undefined4 FUN_8c1b970a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int in_r3;
  int in_GBR;
  
  *(char *)(in_GBR + 0xd1) = (char)(undefined2)ain0;
  *(undefined2 *)(in_GBR + 0x192) = (undefined2)ain0;
  FUN_8c1b9444(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
  FUN_8c1b9556(ar4,ar5,ar6,ar7,*(undefined4 *)(&stack0x00000000 + in_r3));
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b970a\n.set _FUN_8c1b970a, _FUN_8c1b970a_def\n");
//@unit 8c1b9750
#include "../decls.h"
undefined4 FUN_8c1b9750_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9750\n.set _FUN_8c1b9750, _FUN_8c1b9750_def\n");
//@unit 8c1b9756
#include "../decls.h"
undefined4 FUN_8c1b9756_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int in_GBR;
  
  *(undefined4 *)(in_GBR + 0x54) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9756\n.set _FUN_8c1b9756, _FUN_8c1b9756_def\n");
//@unit 8c1b9794
#include "../decls.h"
undefined4 FUN_8c1b9794_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint in_r0;
  uint uVar2;
  int iVar3;
  uint extraout_r2;
  uint in_r2;
  undefined1 extraout_r3;
  undefined1 in_r3;
  int ar7_00;
  int iVar4;
  char *unaff_r9;
  int unaff_r12;
  undefined4 in_R1_BANK;
  int in_GBR;
  bool bVar5;
  
  while( true ) {
    if ((int)unaff_r9 < 0) {
      uVar2 = in_r0 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      uVar2 = in_r0 << ((uint)unaff_r9 & 0x1f);
    }
    *(short *)(in_GBR + 0x72) = (short)uVar2;
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    iVar4 = (char)ar4 + ar4;
    *(uint *)(unaff_r12 + 4) = uVar2;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)uVar2;
    iVar3 = FUN_8c1b9422(ar4,ar5,ar6,ar7_00);
    *(undefined4 *)(iVar3 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar3 + -4);
    *(uint *)(ar5 + 0x38) = iVar4 + (uint)((in_r2 & 0x80000000) != 0);
    uVar2 = FUN_8c1b960a(ar4,ar5,ar6,ar7_00);
    bVar5 = (uVar2 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar2 << 1) | (ushort)bVar5;
    if (bVar5) break;
    in_r0 = FUN_8c1b946e(ar4,ar5,ar6,ar7_00);
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9794\n.set _FUN_8c1b9794, _FUN_8c1b9794_def\n");
//@unit 8c1b979e
#include "../decls.h"
undefined4 FUN_8c1b979e_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint in_r2;
  undefined1 extraout_r3;
  undefined1 in_r3;
  int ar7_00;
  int iVar4;
  char *unaff_r9;
  int unaff_r12;
  undefined4 in_R1_BANK;
  int in_GBR;
  bool bVar5;
  
  while( true ) {
    ar7_00 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    uVar3 = (uint)((in_r2 & 0x80000000) != 0);
    iVar4 = uVar3 + ar4;
    *(uint *)(unaff_r12 + 4) = ain0;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)ain0;
    iVar2 = FUN_8c1b9422(ar4,ar5,ar6,ar7_00,*(undefined4 *)((int)register0x0000003c + uVar3 + ar4));
    *(undefined4 *)(iVar2 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar2 + -4);
    *(undefined1 **)(ar5 + 0x38) = (undefined1 *)((int)register0x0000003c + iVar4);
    uVar3 = FUN_8c1b960a(ar4,ar5,ar6,ar7_00);
    bVar5 = (uVar3 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar3 << 1) | (ushort)bVar5;
    if (bVar5) break;
    uVar3 = FUN_8c1b946e(ar4,ar5,ar6,ar7_00);
    if ((int)unaff_r9 < 0) {
      ain0 = uVar3 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      ain0 = uVar3 << ((uint)unaff_r9 & 0x1f);
    }
    register0x0000003c = (BADSPACEBASE *)(int)(char)ar4;
    *(short *)(in_GBR + 0x72) = (short)ain0;
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b979e\n.set _FUN_8c1b979e, _FUN_8c1b979e_def\n");
//@unit 8c1b9802
#include "../decls.h"
undefined4 FUN_8c1b9802_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9802\n.set _FUN_8c1b9802, _FUN_8c1b9802_def\n");
//@unit 8c1b982c
#include "../decls.h"
undefined4 FUN_8c1b982c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 unaff_r9;
  
  *(undefined1 *)(ar5 + -1) = unaff_r9;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b982c\n.set _FUN_8c1b982c, _FUN_8c1b982c_def\n");
//@unit 8c1b9834
#include "../decls.h"
undefined4 FUN_8c1b9834_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  
  *(BADSPACEBASE **)(in_r3 + 0xc) = register0x0000003c;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9834\n.set _FUN_8c1b9834, _FUN_8c1b9834_def\n");
//@unit 8c1b9902
#include "../decls.h"
undefined4
FUN_8c1b9902_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7,undefined4 ain0)

{
  byte unaff_r9;
  undefined4 unaff_r11;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x150) = (undefined2)ain0;
  *ar6 = unaff_r11;
  FUN_8c1b9794(ar4,ar5,ar6,ar7,*(undefined4 *)(uint)unaff_r9);
  FUN_8c1b9750(ar4,ar5,(int)DAT_8c1b9aa2,ar7);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9902\n.set _FUN_8c1b9902, _FUN_8c1b9902_def\n");
//@unit 8c1b992a
#include "../decls.h"
undefined4 mac_wOp_wrap_1b992a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint extraout_r1;
  int iVar2;
  int unaff_r10;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  iVar2 = (int)FUN_8c1b9996;
  uVar1 = halt_baddata_wrap_1b939a(ar4,ar5,ar6,ar7);
  *(int *)(unaff_r10 + 0x38) = iVar2;
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  iVar2 = (int)*(short *)(extraout_r1 >> 1 | (uint)((extraout_r1 & 1) != 0) << 0x1f);
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),iVar2 * iVar2);
  }
                    
  halt_baddata();
}

__asm__(".globl _mac_wOp_wrap_1b992a\n.set _mac_wOp_wrap_1b992a, _mac_wOp_wrap_1b992a_def\n");
//@unit 8c1b9966
#include "../decls.h"
undefined4 FUN_8c1b9966_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9966\n.set _FUN_8c1b9966, _FUN_8c1b9966_def\n");
//@unit 8c1b9994
#include "../decls.h"
undefined4 FUN_8c1b9994_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int ar7_00;
  int in_GBR;
  
  ar7_00 = (int)DAT_8c1b9a52;
  *(undefined2 *)(in_GBR + 0xc) = (undefined2)ain0;
  FUN_8c1b9702(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b982c(ar4,ar5,ar6,ar7_00);
  *(char *)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(in_GBR + 0x93) = (char)uVar1;
  *(short *)(in_GBR + 0x108) = (short)uVar1;
  *(BADSPACEBASE **)(ar5 + 0x38) = register0x0000003c;
  uVar1 = FUN_8c1b9802(ar4,ar5,ar6,ar7_00);
  *(char *)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = FUN_8c1ba442(ar4,ar5,ar6,ar7_00);
  *(short *)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(in_GBR + 0xf) = (char)uVar1;
  FUN_8c1b9834(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b95f2(ar4,ar5,ar6,ar7_00);
  uVar1 = FUN_8c1b9994(ar4,ar5,ar6,ar7_00,uVar1);
  *(short *)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9994\n.set _FUN_8c1b9994, _FUN_8c1b9994_def\n");
//@unit 8c1b9996
#include "../decls.h"
undefined4 FUN_8c1b9996_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  int a7;
  int in_GBR;
  undefined4 in_stack_00000000;
  
  a7 = (int)DAT_8c1b9a52;
  *(undefined2 *)(in_GBR + 0xc) = (undefined2)ain0;
  FUN_8c1b9702(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b982c(ar4,ar5,ar6,a7);
  *(char *)(in_GBR + 0xeb) = (char)uVar1;
  *(char *)(in_GBR + 0x93) = (char)uVar1;
  *(short *)(in_GBR + 0x108) = (short)uVar1;
  *(BADSPACEBASE **)(ar5 + 0x38) = register0x0000003c;
  uVar1 = FUN_8c1b9802(ar4,ar5,ar6,a7);
  *(char *)(in_GBR + 0x98) = (char)uVar1;
  uVar1 = FUN_8c1ba442(ar4,ar5,ar6,a7);
  *(short *)(in_GBR + 0x116) = (short)uVar1;
  *(char *)(in_GBR + 0xf) = (char)uVar1;
  FUN_8c1b9834(ar4,ar5,ar6,a7);
  FUN_8c1b95f2(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b9996(ar4,ar5,ar6,a7,in_stack_00000000);
  *(short *)(in_GBR + 0x12a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9996\n.set _FUN_8c1b9996, _FUN_8c1b9996_def\n");
//@unit 8c1b9a34
#include "../decls.h"
undefined4 FUN_8c1b9a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 in_r0;
  int in_GBR;
  
  *(undefined1 *)(in_GBR + 0x95) = in_r0;
  *(undefined1 *)(in_GBR + 0xf1) = in_r0;
                    
  halt_unimplemented();
}

__asm__(".globl _FUN_8c1b9a34\n.set _FUN_8c1b9a34, _FUN_8c1b9a34_def\n");
//@unit 8c1b9a54
#include "../decls.h"
undefined4 FUN_8c1b9a54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9a54\n.set _FUN_8c1b9a54, _FUN_8c1b9a54_def\n");
//@unit 8c1b9a72
#include "../decls.h"
undefined4 FUN_8c1b9a72_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int extraout_r1;
  int extraout_r2;
  undefined1 extraout_r3;
  char cVar2;
  int a7;
  char *unaff_r9;
  int unaff_r12;
  int in_GBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte extraout_M;
  byte extraout_Q;
  byte in_IMASK;
  byte extraout_S;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 in_stack_00000000;
  
  FUN_8c1b9902(ar4,ar5,ar6,ar7,in_stack_00000000);
  uVar1 = FUN_8c1b9756(ar4,ar5,ar6,ar7,
                       *(undefined4 *)((int)&stack0x00000000 + (uint)extraout_T + extraout_r1));
  *(char *)(in_GBR + 0x9d) = (char)uVar1;
  cVar2 = (char)ar4;
  *(short *)(in_GBR + 0x72) = (short)uVar1;
  a7 = (int)*unaff_r9;
  *(undefined4 *)(unaff_r12 + 4) = uVar1;
  mac_wOp_wrap_1b992a(ar4,ar5,ar6,a7);
  *ar5 = extraout_r3;
  uVar1 = FUN_8c1b970a(ar4,ar5,ar6,a7,*(undefined4 *)(int)cVar2);
  *(char *)(in_GBR + 0xb3) = (char)uVar1;
  *(ushort *)(in_GBR + 0x9a) = (ushort)uVar1 ^ 0x9f;
  *(uint *)(extraout_r2 + -4) =
       (uint)extraout_T_00 | (uint)extraout_S << 1 | (uint)in_IMASK << 4 | (uint)extraout_Q << 8 |
       (uint)extraout_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
       (uint)in_MD << 0x1e;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9a72\n.set _FUN_8c1b9a72, _FUN_8c1b9a72_def\n");
//@unit 8c1b9aa8
#include "../decls.h"
undefined4 FUN_8c1b9aa8_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  undefined4 in_r2;
  undefined2 unaff_r9;
  int unaff_r10;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  *(undefined4 *)(unaff_r10 + -4) = in_r2;
  halt_unimplemented_wrap_1b9668(ar4,ar5,ar6,ar7);
  *(undefined2 *)(ar5 + -2) = unaff_r9;
  uVar1 = FUN_8c1b9a54(ar4,(undefined2 *)(ar5 + -2),ar6,ar7);
  *(short *)(in_GBR + 0x13a) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9aa8\n.set _FUN_8c1b9aa8, _FUN_8c1b9aa8_def\n");
//@unit 8c1b9b02
#include "../decls.h"
undefined4 FUN_8c1b9b02_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 uVar1;
  undefined1 unaff_r12;
  int in_GBR;
  char in_T;
  
  if (in_T != '\0') {
    uVar1 = FUN_8c1b9966(ar4,ar5,ar6,ar7);
    *(char *)(in_GBR + 0x90) = (char)uVar1;
    uVar1 = FUN_8c1b93be(ar4,ar5,ar6,ar7);
    *(short *)(in_GBR + 0x146) = (short)uVar1;
    uVar1 = FUN_8c1b93e2(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  *(undefined2 *)(in_GBR + 10) = in_r0;
  *(undefined2 *)(in_GBR + 0x1a4) = in_r0;
  *ar4 = unaff_r12;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9b02\n.set _FUN_8c1b9b02, _FUN_8c1b9b02_def\n");
//@unit 8c1b9b9e
#include "../decls.h"
undefined4 FUN_8c1b9b9e_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined1 unaff_r12;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 10) = in_r0;
  *(undefined2 *)(in_GBR + 0x1a4) = in_r0;
  *ar4 = unaff_r12;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9b9e\n.set _FUN_8c1b9b9e, _FUN_8c1b9b9e_def\n");
//@unit 8c1b9c3a
#include "../decls.h"
undefined4 FUN_8c1b9c3a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int extraout_r3;
  int in_GBR;
  
  FUN_8c1ba52c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(extraout_r3 + 0x18) = ar6;
  FUN_8c1b9a34(ar4,ar5,ar6,ar7,s0);
  uVar1 = FUN_8c1b9b9e(ar4,ar5,ar6,(int)&s0 << 0x10 | (uint)&s0 >> 0x10,s0);
  *(short *)(in_GBR + 0x18e) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c3a\n.set _FUN_8c1b9c3a, _FUN_8c1b9c3a_def\n");
//@unit 8c1b9c52
#include "../decls.h"
undefined4 FUN_8c1b9c52_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  short *extraout_r1;
  uint extraout_r2;
  int extraout_r2_00;
  int iVar3;
  int *unaff_r9;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  char extraout_S_00;
  bool bVar4;
  undefined4 extraout_MACH;
  undefined4 extraout_MACH_00;
  undefined4 extraout_MACL;
  undefined4 extraout_MACL_00;
  
  iVar3 = (int)*unaff_r12;
  FUN_8c1b9a72(ar4,ar5,ar6,iVar3);
  uVar2 = DAT_8c1b9cd8;
  uVar1 = FUN_8c1b9c3a(ar4,DAT_8c1b9cd8,ar6,iVar3);
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  bVar4 = (extraout_r2 & 1) != 0;
  if (extraout_S != '\0') {
    mac_lOp(CONCAT44(extraout_MACH,extraout_MACL),
            (longlong)*unaff_r9 * (longlong)*(int *)(extraout_r2 >> 1 | (uint)bVar4 << 0x1f));
  }
  uVar1 = FUN_8c1bab30(ar4,uVar2,ar6,iVar3,*(undefined4 *)(&stack0x00000000 + (-(uint)bVar4 - ar4)))
  ;
  *(short *)(unaff_r12 + 0xf) = (short)uVar1;
  iVar3 = (int)unaff_r12[1];
  FUN_8c1b9aa8(ar4,uVar2,ar6,iVar3);
  uVar2 = FUN_8c1b9c52(ar4,uVar2,ar6,iVar3);
  *(short *)(in_GBR + 0x1cc) = (short)uVar2;
  if (extraout_S_00 != '\0') {
    mac_wOp(CONCAT44(extraout_MACH_00,extraout_MACL_00),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2_00 + 0x1a) = (short)uVar2;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c52\n.set _FUN_8c1b9c52, _FUN_8c1b9c52_def\n");
//@unit 8c1b9c70
#include "../decls.h"
undefined4 FUN_8c1b9c70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 uVar1;
  short *extraout_r1;
  int extraout_r2;
  int a7;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  *(undefined2 *)(unaff_r12 + 0xe) = in_r0;
  a7 = (int)*unaff_r12;
  FUN_8c1b9aa8(ar4,ar5,ar6,a7);
  uVar1 = FUN_8c1b9c52(ar4,ar5,ar6,a7);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2 + 0x1a) = (short)uVar1;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9c70\n.set _FUN_8c1b9c70, _FUN_8c1b9c70_def\n");
//@unit 8c1b9e00
#include "../decls.h"
undefined4 FUN_8c1b9e00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c1b9c70(ar4,ar5,ar6,ar7,in_PR);
  FUN_8c1b9b02(ar4,ar5,ar6,ar7,in_PR);
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1b9e00\n.set _FUN_8c1b9e00, _FUN_8c1b9e00_def\n");
//@unit 8c1ba1a4
#include "../decls.h"
undefined4 FUN_8c1ba1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba1a4\n.set _FUN_8c1ba1a4, _FUN_8c1ba1a4_def\n");
//@unit 8c1ba396
#include "../decls.h"
undefined4 FUN_8c1ba396_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x166) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba396\n.set _FUN_8c1ba396, _FUN_8c1ba396_def\n");
//@unit 8c1ba442
#include "../decls.h"
undefined4 FUN_8c1ba442_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba442\n.set _FUN_8c1ba442, _FUN_8c1ba442_def\n");
//@unit 8c1ba44a
#include "../decls.h"
undefined4 FUN_8c1ba44a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba44a\n.set _FUN_8c1ba44a, _FUN_8c1ba44a_def\n");
//@unit 8c1ba52c
#include "../decls.h"
undefined4 FUN_8c1ba52c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1ba52c\n.set _FUN_8c1ba52c, _FUN_8c1ba52c_def\n");
//@unit 8c1bab30
#include "../decls.h"
undefined4 FUN_8c1bab30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1ba) = in_r0;
                    
  halt_baddata();
}

__asm__(".globl _FUN_8c1bab30\n.set _FUN_8c1bab30, _FUN_8c1bab30_def\n");
