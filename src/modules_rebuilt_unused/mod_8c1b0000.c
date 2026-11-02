/* Seaman (USA) region 0x8c1b0000-0x8c1c0000 (Ghidra decompiler) */

/* FUN_8c1b8a34 @ 8c1b8a34 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b8a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b8ec2 @ 8c1b8ec2 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b8ec2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b8f5c @ 8c1b8f5c callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b8f5c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9044 @ 8c1b9044 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9044(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r13;
  
  *(undefined4 *)(unaff_r13 + 0x30) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b90e4 @ 8c1b90e4 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b90e4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b91a2 @ 8c1b91a2 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b91a2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b8f5c(ar4,ar5,ar6,ar7);
  FUN_8c1b8a34(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b91d8 @ 8c1b91d8 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b91d8(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9994(ar4,ar5,ar6,ar7);
  TrapAlways(0xcb);
  FUN_8c1b9044(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* halt_baddata_wrap_1b939a @ 8c1b939a callers=1 callees=1 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 halt_baddata_wrap_1b939a(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r2;
  
  if (in_r2 <= *(int *)(ar5 + 0x2c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  FUN_8c1b90e4(ar4,ar5,ar6,(int)sRam8c1b9432);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b93be @ 8c1b93be callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b93be(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *unaff_r9;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_lOp(CONCAT44(in_MACH,in_MACL),(longlong)*unaff_r9 * (longlong)*ar4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b93e2 @ 8c1b93e2 callers=1 callees=1 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b93e2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1b8ec2(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1b940a @ 8c1b940a callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b940a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1aa) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9422 @ 8c1b9422 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9422(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x172) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9428 @ 8c1b9428 callers=1 callees=2 */

/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9428(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_GBR;
  
  uVar1 = FUN_8c1ba396(ar4,ar5,ar6,ar7);
  *(short *)(in_GBR + 0x196) = (short)uVar1;
  uVar1 = FUN_8c1ba1a4(ar4,ar5,ar6,ar7);
  return uVar1;
}



/* FUN_8c1b9444 @ 8c1b9444 callers=1 callees=1 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9444(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r1;
  undefined4 in_R7_BANK;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1a2) = *(undefined2 *)(in_GBR + 0x194);
  *(undefined4 *)(in_r1 + -0xc) = in_R7_BANK;
  FUN_8c1b9b9e(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b946e @ 8c1b946e callers=1 callees=1 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b946e(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b979e(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b94ce @ 8c1b94ce callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b94ce(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *in_r1;
  char in_S;
  undefined4 in_MACH;
  undefined4 in_MACL;
  
  if (in_S != '\0') {
    mac_wOp(CONCAT44(in_MACH,in_MACL),(int)*in_r1 * (int)*in_r1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9552 @ 8c1b9552 callers=1 callees=0 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9552(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined2 in_r0;
  undefined4 in_r2;
  int in_GBR;
  
  *(undefined4 *)(ar7 + 0x14) = in_r2;
  *(undefined2 *)(in_GBR + 0x1a8) = in_r0;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* FUN_8c1b9556 @ 8c1b9556 callers=1 callees=1 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9556(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1a8) = in_r0;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* FUN_8c1b95f2 @ 8c1b95f2 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b95f2(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *extraout_r1;
  char *unaff_r12;
  int in_GBR;
  char extraout_S;
  undefined4 extraout_MACH;
  undefined4 extraout_MACL;
  
  FUN_8c1b91a2(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b940a(ar4,ar5,ar6,(int)*unaff_r12);
  *(short *)(in_GBR + 0x1cc) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_wOp(CONCAT44(extraout_MACH,extraout_MACL),(int)*extraout_r1 * (int)*extraout_r1);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b960a @ 8c1b960a callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b960a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9664 @ 8c1b9664 callers=1 callees=1 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9664(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9428(ar4,ar5,ar6,ar7);
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* halt_unimplemented_wrap_1b9668 @ 8c1b9668 callers=1 callees=1 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4
halt_unimplemented_wrap_1b9668(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* FUN_8c1b9702 @ 8c1b9702 callers=1 callees=1 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9702(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_GBR;
  
  uVar1 = FUN_8c1b9552(ar4,ar5,ar6,ar7);
  *(char *)(in_GBR + 0xd1) = (char)uVar1;
  *(short *)(in_GBR + 0x192) = (short)uVar1;
  FUN_8c1b9444(ar4,ar5,ar6,ar7);
  FUN_8c1b9556(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b970a @ 8c1b970a callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b970a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(char *)(in_GBR + 0xd1) = (char)in_r0;
  *(undefined2 *)(in_GBR + 0x192) = in_r0;
  FUN_8c1b9444(ar4,ar5,ar6,ar7);
  FUN_8c1b9556(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9750 @ 8c1b9750 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9750(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9756 @ 8c1b9756 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9756(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int in_GBR;
  
  *(undefined4 *)(in_GBR + 0x54) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9794 @ 8c1b9794 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9794(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b979e @ 8c1b979e callers=1 callees=4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b979e(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  uint in_r0;
  int iVar2;
  uint uVar3;
  uint extraout_r2;
  uint in_r2;
  undefined1 extraout_r3;
  undefined1 in_r3;
  int a7;
  int iVar4;
  char *unaff_r9;
  int unaff_r12;
  undefined4 in_R1_BANK;
  int in_GBR;
  bool bVar5;
  
  while( true ) {
    a7 = (int)*unaff_r9;
    unaff_r9 = unaff_r9 + 1;
    iVar4 = (uint)((in_r2 & 0x80000000) != 0) + ar4;
    *(uint *)(unaff_r12 + 4) = in_r0;
    *ar5 = in_r3;
    *(char *)(in_GBR + 0xeb) = (char)in_r0;
    iVar2 = FUN_8c1b9422(ar4,ar5,ar6,a7);
    *(undefined4 *)(iVar2 + -4) = in_R1_BANK;
    *(short *)(in_GBR + 0x108) = (short)(undefined4 *)(iVar2 + -4);
    *(undefined1 **)(ar5 + 0x38) = (undefined1 *)((int)register0x0000003c + iVar4);
    uVar3 = FUN_8c1b960a(ar4,ar5,ar6,a7);
    bVar5 = (uVar3 & 0x80000000) != 0;
    uVar1 = (ushort)(uVar3 << 1) | (ushort)bVar5;
    if (bVar5) break;
    uVar3 = FUN_8c1b946e(ar4,ar5,ar6,a7);
    if ((int)unaff_r9 < 0) {
      in_r0 = uVar3 >> (~(uint)unaff_r9 & 0x1f) + 1;
    }
    else {
      in_r0 = uVar3 << ((uint)unaff_r9 & 0x1f);
    }
    register0x0000003c = (BADSPACEBASE *)(int)(char)ar4;
    *(short *)(in_GBR + 0x72) = (short)in_r0;
    in_r2 = extraout_r2;
    in_r3 = extraout_r3;
  }
  *(ushort *)(in_GBR + 0x11a) = uVar1;
  iVar4 = (int)DAT_8c1b988a;
  *(ushort *)(in_GBR + 0xc) = uVar1;
  FUN_8c1b9664(ar4,ar5,ar6,iVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9802 @ 8c1b9802 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9802(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b982c @ 8c1b982c callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b982c(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 unaff_r9;
  
  *(undefined1 *)(ar5 + -1) = unaff_r9;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9834 @ 8c1b9834 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9834(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  
  *(BADSPACEBASE **)(in_r3 + 0xc) = register0x0000003c;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9902 @ 8c1b9902 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9902(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 unaff_r11;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x150) = in_r0;
  *ar6 = unaff_r11;
  FUN_8c1b9794(ar4,ar5,ar6,ar7);
  FUN_8c1b9750(ar4,ar5,(int)DAT_8c1b9aa2,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* mac_wOp_wrap_1b992a @ 8c1b992a callers=1 callees=1 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention */

undefined4 mac_wOp_wrap_1b992a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9966 @ 8c1b9966 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9966(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9994 @ 8c1b9994 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Possible PIC construction at 0x8c1b99d6: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x8c1b99da) */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9994(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int ar7_00;
  int in_GBR;
  
  do {
    ar7_00 = (int)DAT_8c1b9a52;
    *(short *)(in_GBR + 0xc) = (short)in_r0;
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
    in_r0 = FUN_8c1b95f2(ar4,ar5,ar6,ar7_00);
  } while( true );
}



/* FUN_8c1b9996 @ 8c1b9996 callers=1 callees=7 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9996(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined4 uVar1;
  int a7;
  int in_GBR;
  
  a7 = (int)DAT_8c1b9a52;
  *(undefined2 *)(in_GBR + 0xc) = in_r0;
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
  uVar1 = FUN_8c1b9996(ar4,ar5,ar6,a7);
  *(short *)(in_GBR + 0x12a) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9a34 @ 8c1b9a34 callers=1 callees=1 */

/* WARNING: Control flow encountered unimplemented instructions */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9a34(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 in_r0;
  int in_GBR;
  
  *(undefined1 *)(in_GBR + 0x95) = in_r0;
  *(undefined1 *)(in_GBR + 0xf1) = in_r0;
                    /* WARNING: Unimplemented instruction - Truncating control flow here */
  halt_unimplemented();
}



/* FUN_8c1b9a54 @ 8c1b9a54 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9a54(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9a72 @ 8c1b9a72 callers=1 callees=4 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9a72(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int extraout_r2;
  undefined1 extraout_r3;
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
  
  FUN_8c1b9902(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b9756(ar4,ar5,ar6,ar7);
  *(char *)(in_GBR + 0x9d) = (char)uVar1;
  *(short *)(in_GBR + 0x72) = (short)uVar1;
  a7 = (int)*unaff_r9;
  *(undefined4 *)(unaff_r12 + 4) = uVar1;
  mac_wOp_wrap_1b992a(ar4,ar5,ar6,a7);
  *ar5 = extraout_r3;
  uVar1 = FUN_8c1b970a(ar4,ar5,ar6,a7);
  *(char *)(in_GBR + 0xb3) = (char)uVar1;
  *(ushort *)(in_GBR + 0x9a) = (ushort)uVar1 ^ 0x9f;
  *(uint *)(extraout_r2 + -4) =
       (uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4 | (uint)extraout_Q << 8 |
       (uint)extraout_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
       (uint)in_MD << 0x1e;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9aa8 @ 8c1b9aa8 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9aa8(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9b02 @ 8c1b9b02 callers=1 callees=3 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9b02(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9b9e @ 8c1b9b9e callers=2 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9b9e(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  undefined1 unaff_r12;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 10) = in_r0;
  *(undefined2 *)(in_GBR + 0x1a4) = in_r0;
  *ar4 = unaff_r12;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9c3a @ 8c1b9c3a callers=1 callees=3 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9c3a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int extraout_r3;
  int in_GBR;
  
  FUN_8c1ba52c(ar4,ar5,ar6,ar7);
  *(undefined4 *)(extraout_r3 + 0x18) = ar6;
  FUN_8c1b9a34(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1b9b9e(ar4,ar5,ar6,(int)&stack0x00000000 << 0x10 | (uint)&stack0x00000000 >> 0x10);
  *(short *)(in_GBR + 0x18e) = (short)uVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9c52 @ 8c1b9c52 callers=1 callees=3 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9c52(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
  undefined4 extraout_MACH;
  undefined4 extraout_MACH_00;
  undefined4 extraout_MACL;
  undefined4 extraout_MACL_00;
  
  iVar3 = (int)*unaff_r12;
  FUN_8c1b9a72(ar4,ar5,ar6,iVar3);
  uVar2 = DAT_8c1b9cd8;
  uVar1 = FUN_8c1b9c3a(ar4,DAT_8c1b9cd8,ar6,iVar3);
  *(short *)(in_GBR + 0x1ce) = (short)uVar1;
  if (extraout_S != '\0') {
    mac_lOp(CONCAT44(extraout_MACH,extraout_MACL),
            (longlong)*unaff_r9 *
            (longlong)*(int *)(extraout_r2 >> 1 | (uint)((extraout_r2 & 1) != 0) << 0x1f));
  }
  uVar1 = FUN_8c1bab30(ar4,uVar2,ar6,iVar3);
  *(short *)(unaff_r12 + 0xf) = (short)uVar1;
  iVar3 = (int)unaff_r12[1];
  FUN_8c1b9aa8(ar4,uVar2,ar6,iVar3);
  uVar2 = FUN_8c1b9c52(ar4,uVar2,ar6,iVar3);
  *(short *)(in_GBR + 0x1cc) = (short)uVar2;
  if (extraout_S_00 != '\0') {
    mac_wOp(CONCAT44(extraout_MACH_00,extraout_MACL_00),(int)*extraout_r1 * (int)*extraout_r1);
  }
  *(short *)(extraout_r2_00 + 0x1a) = (short)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9c70 @ 8c1b9c70 callers=1 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9c70(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

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
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1b9e00 @ 8c1b9e00 callers=0 callees=2 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1b9e00(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c1b9c70(ar4,ar5,ar6,ar7);
  FUN_8c1b9b02(ar4,ar5,ar6,ar7);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1ba1a4 @ 8c1ba1a4 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ba1a4(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1ba396 @ 8c1ba396 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ba396(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x166) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1ba442 @ 8c1ba442 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ba442(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1ba44a @ 8c1ba44a callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ba44a(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1ba52c @ 8c1ba52c callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1ba52c(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* FUN_8c1bab30 @ 8c1bab30 callers=1 callees=0 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention */

undefined4 FUN_8c1bab30(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 in_r0;
  int in_GBR;
  
  *(undefined2 *)(in_GBR + 0x1ba) = in_r0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


