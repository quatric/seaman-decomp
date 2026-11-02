#include "../decls.h"
undefined4 FUN_8c10a312_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint uVar1;
  int ar6_00;
  undefined4 unaff_r13;
  int unaff_r14;
  undefined4 in_fr3;
  undefined8 uVar2;
  byte in_FPSCR_DN;
  byte bVar3;
  byte in_FPSCR_PR;
  byte bVar4;
  byte in_FPSCR_SZ;
  byte bVar5;
  char cVar6;
  
  *(undefined4 *)(unaff_r14 + 0x30) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x34) = *(undefined4 *)(unaff_r14 + 0x28);
  *(undefined4 *)(unaff_r14 + 0x38) = unaff_r13;
  *(undefined4 *)(in_r0 + unaff_r14) = 2;
  *(char *)(unaff_r14 + 0x50) = (char)unaff_r13;
  if (in_FPSCR_SZ == 0) {
    in_fr3 = _DAT_8c10a3f8;
  }
  if (in_FPSCR_SZ == 0) {
    uVar2 = CONCAT44(*(undefined4 *)(0xa0 + unaff_r14),in_fr3);
  }
  else {
    uVar2 = *(undefined8 *)(0xa0 + unaff_r14);
  }
  if (in_FPSCR_PR != 0 || (float)((ulonglong)uVar2 >> 0x20) <= (float)uVar2) {
    (*(code *)(&memset))
              (*(undefined4 *)(unaff_r14 + 0x58),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
    *(char *)(unaff_r14 + 0x51) = (char)unaff_r13;
  }
  else {
    (*(code *)(&memmove))
              (*(undefined4 *)(unaff_r14 + 0x58),*(undefined4 *)(unaff_r14 + 0xa8),
               *(int *)(unaff_r14 + 0x7c) << 2,ar7);
    ar6_00 = *(int *)(unaff_r14 + 0x7c) << 2;
    bVar3 = 0;
    bVar4 = 0;
    bVar5 = (byte)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 |
                    (uint)in_FPSCR_SZ << 0x14) & 0xffe7ffff & 0x100000) >> 0x14);
    (*(code *)(&memmove))
              (*(undefined4 *)(unaff_r14 + 0x54),*(undefined4 *)(unaff_r14 + 0xa8),ar6_00,ar7);
    in_FPSCR_DN = 0;
    in_FPSCR_PR = 0;
    in_FPSCR_SZ = (byte)((((uint)bVar3 << 0x12 | (uint)bVar4 << 0x13 | (uint)bVar5 << 0x14) &
                          0xffe7ffff & 0x100000) >> 0x14);
    uVar1 = (*(code *)(&FUN_8c11b93c))
                      (*(undefined4 *)(unaff_r14 + 0xb0),*(undefined4 *)(unaff_r14 + 0x54),ar6_00,
                       ar7);
    if ((uVar1 & 0xff) != 0) {
      return 1;
    }
    *(undefined1 *)(unaff_r14 + 0x51) = 1;
  }
  cVar6 = (char)((((uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_PR << 0x13 | (uint)in_FPSCR_SZ << 0x14
                  ) & 0xffe7ffff & 0x100000) >> 0x14);
  (*(code *)(&memset))
            (*(undefined4 *)(unaff_r14 + 0x5c),0,*(int *)(unaff_r14 + 0x7c) << 2,ar7);
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x60) = (undefined4)DAT_8c10a408;
    *(undefined4 *)(unaff_r14 + 100) = *(undefined4 *)(unaff_r14 + 0xa0);
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x60) = CONCAT44((*(uint*)((uchar*)&DAT_8c10a408+4)),(undefined4)DAT_8c10a408);
    *(undefined8 *)(unaff_r14 + 100) = *(undefined8 *)(unaff_r14 + 0xa0);
  }
  *(undefined4 *)(unaff_r14 + 0x68) = 0;
  if (cVar6 == '\0') {
    *(undefined4 *)(unaff_r14 + 0x6c) = (*(uint*)((uchar*)&DAT_8c10a408+4));
    *(undefined4 *)(unaff_r14 + 0x70) = _DAT_8c10a3f8;
  }
  else {
    *(ulonglong *)(unaff_r14 + 0x6c) = CONCAT44(0,(*(uint*)((uchar*)&DAT_8c10a408+4)));
    *(ulonglong *)(unaff_r14 + 0x70) = CONCAT44((&memmove),_DAT_8c10a3f8);
  }
  *(undefined4 *)(unaff_r14 + 0x74) = unaff_r13;
  *(undefined4 *)(unaff_r14 + 0x78) = 0;
  return 0;
}

__asm__(".globl _FUN_8c10a312\n.set _FUN_8c10a312, _FUN_8c10a312_def\n");
