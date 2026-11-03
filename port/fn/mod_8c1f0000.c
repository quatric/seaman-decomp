//@unit 8c1f002a
#include "../decls.h"
undefined4 FUN_8c1f002a_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,1,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f002a\n.set _FUN_8c1f002a, _FUN_8c1f002a_def\n");
//@unit 8c1f0074
#include "../decls.h"
undefined4 FUN_8c1f0074_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,2,ar6,ar7);
  if (pbVar1 != (byte *)0x0) {
    *ar4 = *pbVar1 + 1;
    ar4[1] = (pbVar1[1] + 1) * 0x20;
    ar4[2] = (ushort)(pbVar1[2] >> 4);
    ar4[3] = pbVar1[2] & 0xf;
    ar4[4] = (ushort)(pbVar1[3] >> 7);
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f0074\n.set _FUN_8c1f0074, _FUN_8c1f0074_def\n");
//@unit 8c1f00f8
#include "../decls.h"
undefined4 FUN_8c1f00f8_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,0x10,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f00f8\n.set _FUN_8c1f00f8, _FUN_8c1f00f8_def\n");
//@unit 8c1f0142
#include "../decls.h"
undefined4 FUN_8c1f0142_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,4,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *pbVar1 + 1;
  ar4[1] = (pbVar1[1] + 1) * 0x20;
  ar4[2] = (ushort)(pbVar1[2] >> 4);
  *(byte *)(ar4 + 3) = pbVar1[3] >> 6;
  *(byte *)((int)ar4 + 7) = pbVar1[3] >> 5 & 1;
  return 0;
}

__asm__(".globl _FUN_8c1f0142\n.set _FUN_8c1f0142, _FUN_8c1f0142_def\n");
//@unit 8c1f01ae
#include "../decls.h"
undefined4 FUN_8c1f01ae_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_8c1efffa(ar5,8,ar6,ar7);
  if (puVar1 == (undefined1 *)0x0) {
    return 0xffffffff;
  }
  *ar4 = *puVar1;
  ar4[1] = puVar1[1];
  ar4[2] = puVar1[2];
  ar4[3] = puVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f01ae\n.set _FUN_8c1f01ae, _FUN_8c1f01ae_def\n");
//@unit 8c1f01e8
#include "../decls.h"
undefined4 FUN_8c1f01e8_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,0x20,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)pbVar1[1] << 0x10 | (uint)pbVar1[2] << 8 | (uint)*pbVar1 << 0x18 | (uint)pbVar1[3];
  return 0;
}

__asm__(".globl _FUN_8c1f01e8\n.set _FUN_8c1f01e8, _FUN_8c1f01e8_def\n");
//@unit 8c1f0232
#include "../decls.h"
undefined4 FUN_8c1f0232_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)FUN_8c1efffa(ar5,(int)0x100,ar6,ar7);
  if (pbVar1 == (byte *)0x0) {
    return 0xffffffff;
  }
  *ar4 = (uint)*pbVar1;
  ar4[1] = (uint)pbVar1[1];
  return 0;
}

__asm__(".globl _FUN_8c1f0232\n.set _FUN_8c1f0232, _FUN_8c1f0232_def\n");
//@unit 8c1f026a
#include "../decls.h"
undefined4 FUN_8c1f026a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 1) {
    FUN_8c1f468a(ar5);
  }
  else if (ar4 == 2) {
    FUN_8c1f4656(ar5);
  }
  else if (ar4 == 4) {
    FUN_8c1f46de(ar5);
  }
  else if (ar4 == 3) {
    FUN_8c1f469e(ar5);
  }
  else if (ar4 == 6) {
    FUN_8c1f46ca(ar5);
  }
  else if (ar4 == 5) {
    FUN_8c1f4672(ar5);
  }
  else if (ar4 == 0) {
    FUN_8c1f46f2(ar5);
  }
  else if (ar4 == 7) {
    FUN_8c1f4716(ar5);
  }
  else if (ar4 == 8) {
    FUN_8c1f472a(ar5);
  }
  else {
    if (ar4 != 9) {
      return 0xffffffff;
    }
    FUN_8c1f4764(ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f026a\n.set _FUN_8c1f026a, _FUN_8c1f026a_def\n");
//@unit 8c1f026e
#include "../decls.h"
undefined4 FUN_8c1f026e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  
  if (in_r0 == 1) {
    FUN_8c1f468a(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 2) {
    FUN_8c1f4656(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 4) {
    FUN_8c1f46de(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 3) {
    FUN_8c1f469e(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 6) {
    FUN_8c1f46ca(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 5) {
    FUN_8c1f4672(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 0) {
    FUN_8c1f46f2(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 7) {
    FUN_8c1f4716(ar5,ar5,ar6,ar7);
  }
  else if (in_r0 == 8) {
    FUN_8c1f472a(ar5,ar5,ar6,ar7);
  }
  else {
    if (in_r0 != 9) {
      return 0xffffffff;
    }
    FUN_8c1f4764(ar5,ar5,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f026e\n.set _FUN_8c1f026e, _FUN_8c1f026e_def\n");
//@unit 8c1f0312
#include "../decls.h"
undefined4 FUN_8c1f0312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 == 1) {
    uVar1 = FUN_8c1f4694();
    return uVar1;
  }
  if (ar4 == 2) {
    uVar1 = FUN_8c1f4662();
    return uVar1;
  }
  if (ar4 == 4) {
    uVar1 = FUN_8c1f46e8();
    return uVar1;
  }
  if (ar4 == 3) {
    uVar1 = FUN_8c1f46a8();
    return uVar1;
  }
  if (ar4 == 6) {
    uVar1 = FUN_8c1f46d4();
    return uVar1;
  }
  if (ar4 == 5) {
    uVar1 = FUN_8c1f4680();
    return uVar1;
  }
  if (ar4 == 0) {
    uVar1 = FUN_8c1f4702();
    return uVar1;
  }
  if (ar4 != 7) {
    if (ar4 == 8) {
      uVar1 = FUN_8c1f4734();
      return uVar1;
    }
    if (ar4 != 9) {
      return 0xffffffff;
    }
    uVar1 = FUN_8c1f476e();
    return uVar1;
  }
  uVar1 = FUN_8c1f4720();
  return uVar1;
}

__asm__(".globl _FUN_8c1f0312\n.set _FUN_8c1f0312, _FUN_8c1f0312_def\n");
//@unit 8c1f0392
#include "../decls.h"
undefined4 FUN_8c1f0392_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)0x8c470e74;
}

__asm__(".globl _FUN_8c1f0392\n.set _FUN_8c1f0392, _FUN_8c1f0392_def\n");
//@unit 8c1f0398
#include "../decls.h"
undefined4 FUN_8c1f0398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)0x8c470e70 = ar4 + 1;
  return in_r0;
}

__asm__(".globl _FUN_8c1f0398\n.set _FUN_8c1f0398, _FUN_8c1f0398_def\n");
//@unit 8c1f03a6
#include "../decls.h"
int FUN_8c1f03a6_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int in_r0;
  
  iVar1 = 0x8c470920;
  if (ar4 < 0x20) {
    *(undefined4 *)(0x8c470920 + ar4 * 4) = ar5;
    in_r0 = iVar1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f03a6\n.set _FUN_8c1f03a6, _FUN_8c1f03a6_def\n");
//@unit 8c1f0420
#include "../decls.h"
undefined4 FUN_8c1f0420_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (ar4 * 2 + *(int *)(_DAT_8c4727b4 + 0xfc0)) * 0xc;
  *(undefined4 *)(&DAT_8c470c28 + iVar1) = ar5;
  *(undefined4 *)(&DAT_8c470c24 + iVar1) = ar6;
  *(int *)(&DAT_8c470c20 + iVar1) = ar4;
  return 0;
}

__asm__(".globl _FUN_8c1f0420\n.set _FUN_8c1f0420, _FUN_8c1f0420_def\n");
//@unit 8c1f0444
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0446_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = FUN_8c1f55e4(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f0446\n.set _s_FATAL_ERROR_Cannot_get_semap_1f0446, _s_FATAL_ERROR_Cannot_get_semap_1f0446_def\n");
//@unit 8c1f04a0
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f04a2_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f04a2\n.set _s_FATAL_ERROR_Cannot_get_semap_1f04a2, _s_FATAL_ERROR_Cannot_get_semap_1f04a2_def\n");
//@unit 8c1f04fc
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f04fe_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = FUN_8c1f566c(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f04fe\n.set _s_FATAL_ERROR_Cannot_get_semap_1f04fe, _s_FATAL_ERROR_Cannot_get_semap_1f04fe_def\n");
//@unit 8c1f057a
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f057c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a5;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a5 = ar5;
  a4 = ar4;
  a6 = FUN_8c1f5628(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar5,a6,ar7);
    ar4 = a4;
    a5 = ar5;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,a5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f057c\n.set _s_FATAL_ERROR_Cannot_get_semap_1f057c, _s_FATAL_ERROR_Cannot_get_semap_1f057c_def\n");
//@unit 8c1f05d6
#include "../decls.h"
undefined4 s_FATAL_ERROR_Cannot_get_semap_1f05d8_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f05d8\n.set _s_FATAL_ERROR_Cannot_get_semap_1f05d8, _s_FATAL_ERROR_Cannot_get_semap_1f05d8_def\n");
//@unit 8c1f0650
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0652_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  undefined4 a7;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a7 = ar7;
  a4 = ar4;
  a6 = FUN_8c1f56f4(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,ar7,a6,a7);
    ar4 = a4;
    ar5 = ar7;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,a7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f0652\n.set _s_FATAL_ERROR_Cannot_get_semap_1f0652, _s_FATAL_ERROR_Cannot_get_semap_1f0652_def\n");
//@unit 8c1f06ac
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f06ae_def
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = FUN_8c1f574c(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s4,a6,ar7);
    ar4 = a4;
    ar5 = s4;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f06ae\n.set _s_FATAL_ERROR_Cannot_get_semap_1f06ae, _s_FATAL_ERROR_Cannot_get_semap_1f06ae_def\n");
//@unit 8c1f070c
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f070e_def
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
          undefined4 s8,undefined4 s12)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = FUN_8c1f57b4(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s12,a6,ar7);
    ar4 = a4;
    ar5 = s12;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f070e\n.set _s_FATAL_ERROR_Cannot_get_semap_1f070e, _s_FATAL_ERROR_Cannot_get_semap_1f070e_def\n");
//@unit 8c1f0790
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f0792_def
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = FUN_8c1f5816(ar4,ar5,ar6,ar7,s0);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s4,a6,ar7);
    ar4 = a4;
    ar5 = s4;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f0792\n.set _s_FATAL_ERROR_Cannot_get_semap_1f0792, _s_FATAL_ERROR_Cannot_get_semap_1f0792_def\n");
//@unit 8c1f07f0
#include "../decls.h"
undefined4 s_FATAL_ERROR_Cannot_get_semap_1f07f2_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = FUN_8c1f58c0(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f07f2\n.set _s_FATAL_ERROR_Cannot_get_semap_1f07f2, _s_FATAL_ERROR_Cannot_get_semap_1f07f2_def\n");
//@unit 8c1f086c
#include "../decls.h"
undefined4 s_FATAL_ERROR_Cannot_get_semap_1f086e_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  int a6_00;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a6_00 = ar6;
  a4 = ar4;
  a6 = FUN_8c1f5910(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    a6_00 = a6;
    FUN_8c1f0420(a4,ar6,a6,ar7);
    ar4 = a4;
    ar5 = ar6;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,a6_00,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f086e\n.set _s_FATAL_ERROR_Cannot_get_semap_1f086e, _s_FATAL_ERROR_Cannot_get_semap_1f086e_def\n");
//@unit 8c1f08c8
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f08ca_def
          (undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7,undefined4 s0)

{
  byte bVar1;
  int *piVar2;
  int a6;
  undefined4 a4;
  
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,(&DATA_8c26bfb0),ar4)
    ;
    return 0xfffffffe;
  }
  a4 = ar4;
  a6 = FUN_8c1f5970(ar4,ar5,ar6,ar7);
  if (0 < a6) {
    ar6 = a6;
    FUN_8c1f0420(a4,s0,a6,ar7);
    ar4 = a4;
    ar5 = s0;
  }
  piVar2 = 0x8c4727b4;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  if (*(int *)((int)0x10e8 + *piVar2) != 0) {
    pvr_1efaf4(ar4,ar5,ar6,ar7);
  }
  return a6;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f08ca\n.set _s_FATAL_ERROR_Cannot_get_semap_1f08ca, _s_FATAL_ERROR_Cannot_get_semap_1f08ca_def\n");
//@unit 8c1f094c
#include "../decls.h"
undefined4 FUN_8c1f094c_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  
  do {
    bVar3 = ar6 < 1;
    ar6 = ar6 + -1;
    if (bVar3) {
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}

__asm__(".globl _FUN_8c1f094c\n.set _FUN_8c1f094c, _FUN_8c1f094c_def\n");
//@unit 8c1f0958
#include "../decls.h"
undefined4 FUN_8c1f0958_def(undefined4 *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  if (ar6 < 0) {
    ar6 = ar6 + 3;
  }
  iVar2 = ar6 >> 2;
  while (bVar3 = 0 < iVar2, iVar2 = iVar2 + -1, bVar3) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f0958\n.set _FUN_8c1f0958, _FUN_8c1f0958_def\n");
//@unit 8c1f097e
#include "../decls.h"
undefined4 FUN_8c1f097e_def(undefined1 *ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f097e\n.set _FUN_8c1f097e, _FUN_8c1f097e_def\n");
//@unit 8c1f0988
#include "../decls.h"
undefined4 FUN_8c1f0988_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; 0 < ar5; ar5 = ar5 + -1) {
    *ar4 = 0xff;
    ar4 = ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f0988\n.set _FUN_8c1f0988, _FUN_8c1f0988_def\n");
//@unit 8c1f099c
#include "../decls.h"
int FUN_8c1f099c_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = ar5 << 6;
  do {
    if (iVar4 < 1) {
      return iVar3;
    }
    cVar2 = *ar4;
    ar4 = ar4 + 1;
    iVar1 = 8;
    do {
      if (((int)cVar2 & 0x80U) != 0) {
        return iVar3;
      }
      iVar1 = iVar1 + -1;
      cVar2 = cVar2 << 1;
      iVar3 = iVar3 + 1;
    } while (0 < iVar1);
    iVar4 = iVar4 + -1;
  } while( true );
}

__asm__(".globl _FUN_8c1f099c\n.set _FUN_8c1f099c, _FUN_8c1f099c_def\n");
//@unit 8c1f09d4
#include "../decls.h"
undefined4 FUN_8c1f09d4_def(int ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = ar6 << 6; 0 < iVar2; iVar2 = iVar2 + -1) {
    if (ar4 < 8) {
      if (ar4 < 1) {
        *ar5 = 0xff;
      }
      else {
        iVar1 = 8;
        do {
          ar6 = ar6 << 1;
          if (ar4 < 1) {
            ar6 = ar6 | 1;
          }
          else {
            ar4 = ar4 + -1;
          }
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
        *ar5 = (char)ar6;
      }
    }
    else {
      *ar5 = 0;
      ar4 = ar4 + -8;
    }
    ar5 = ar5 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f09d4\n.set _FUN_8c1f09d4, _FUN_8c1f09d4_def\n");
//@unit 8c1f0a22
#include "../decls.h"
undefined4 FUN_8c1f0a22_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  
  uVar2 = 0xff;
  iVar5 = 0x3c;
  pbVar6 = ar5 + 2;
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    iVar5 = iVar5 + -1;
  } while (0 < iVar5);
  sVar3 = FUN_8c1f109c(0x3e,ar5);
  if (*(short *)(ar5 + 0x3e) == sVar3) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *ar5 = (char)uVar2;
      ar5 = ar5 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0a22\n.set _FUN_8c1f0a22, _FUN_8c1f0a22_def\n");
//@unit 8c1f0a2a
#include "../decls.h"
undefined4 FUN_8c1f0a2a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  byte *pbVar6;
  undefined1 *unaff_r13;
  
  uVar2 = 0xff;
  pbVar6 = (byte *)(ar5 + 2);
  do {
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    if (bVar1 != 0xff) goto LAB_8c1f0a54;
    ar4 = ar4 + -1;
  } while (0 < ar4);
  uVar3 = FUN_8c1f109c(0x3e,unaff_r13,ar6,ar7);
  if ((uint)*(ushort *)(unaff_r13 + 0x3e) == (uVar3 & 0xffff)) {
    for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
      *unaff_r13 = (char)uVar2;
      unaff_r13 = unaff_r13 + 1;
    }
    uVar4 = 1;
  }
  else {
LAB_8c1f0a54:
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0a2a\n.set _FUN_8c1f0a2a, _FUN_8c1f0a2a_def\n");
//@unit 8c1f0a72
#include "../decls.h"
undefined4 FUN_8c1f0a72_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 ar6_00;
  int ar5_00;
  int iVar4;
  int ar4_00;
  ushort *a5;
  
  ar5_00 = *(int *)(ar4 + 0xc);
  ar4_00 = *(int *)(ar4 + 4);
  iVar1 = syscall_1f98c4(ar4_00,ar5_00,0x40,ar7);
  if (iVar1 != -1) {
    iVar4 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
    iVar1 = iVar4 + ar5_00;
    iVar3 = *(int *)(ar4 + 0x18) << 6;
    iVar4 = syscall_1f98c4(ar4_00 + iVar4,iVar1,iVar3,ar7);
    if (iVar4 != -1) {
      iVar4 = FUN_8c1f099c(iVar1,*(undefined4 *)(ar4 + 0x18),iVar3,ar7);
      *(int *)(ar4 + 0x10) = iVar4;
      if (*(short *)(ar4 + 2) != 0) {
        return 0xfffffffa;
      }
      a5 = (ushort *)(ar4 + 0x34);
      while( true ) {
        if (iVar4 < 1) {
          return 0;
        }
        ar4_00 = ar4_00 + 0x40;
        ar6_00 = 0x40;
        iVar3 = syscall_1f98c4(ar4_00,a5,0x40,ar7);
        if (iVar3 == -1) break;
        if (*a5 == 0xffff) {
          return 0;
        }
        uVar2 = FUN_8c1f109c(0x3e,a5,ar6_00,ar7);
        if (((uint)*(ushort *)(ar4 + 0x72) == (uVar2 & 0xffff)) &&
           ((int)(uint)*a5 < *(int *)(ar4 + 0x14))) {
          FUN_8c1f0958(a5,(*a5 + 1) * 0x40 + ar5_00,0x40,ar7,iVar1);
        }
        iVar4 = iVar4 + -1;
      }
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f0a72\n.set _FUN_8c1f0a72, _FUN_8c1f0a72_def\n");
//@unit 8c1f0b58
#include "../decls.h"
undefined4 FUN_8c1f0b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int a4;
  int a4_00;
  ushort *ar5_00;
  
  puVar1 = (&syscall_1f98d8);
  iVar5 = *(int *)(ar4 + 4);
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = *(ushort **)(ar4 + 0xc);
    uVar4 = 0x40;
    iVar2 = syscall_1f98d8(iVar5,ar5_00,0x40,ar7);
    if (iVar2 == 0x40) {
      a4_00 = iVar5 + 0x40;
      a4 = 0;
      for (iVar2 = *(int *)(ar4 + 0x14); ar5_00 = ar5_00 + 0x20, 0 < iVar2; iVar2 = iVar2 + -1) {
        if ((*ar5_00 != 0xffff) && (iVar3 = FUN_8c1f0a22(ar4,ar5_00,uVar4,ar7), iVar3 == 0)) {
          uVar4 = 0x40;
          iVar3 = (*(code *)puVar1)(a4_00,ar5_00,0x40,ar7);
          if (iVar3 != 0x40) goto LAB_8c1f0bf4;
          a4 = a4 + 1;
          a4_00 = a4_00 + 0x40;
        }
      }
      iVar2 = *(int *)(ar4 + 0x14);
      FUN_8c1f09d4(a4,ar5_00,*(undefined4 *)(ar4 + 0x18),ar7);
      iVar5 = (*(code *)puVar1)((iVar2 + 1) * 0x40 + iVar5,ar5_00,*(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar5 == *(int *)(ar4 + 0x18) << 6) {
        *(int *)(ar4 + 0x10) = a4;
        return 0;
      }
    }
LAB_8c1f0bf4:
    uVar4 = 0xfffffffe;
  }
  else {
    uVar4 = 0xfffffffa;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f0b58\n.set _FUN_8c1f0b58, _FUN_8c1f0b58_def\n");
//@unit 8c1f0c14
#include "../decls.h"
undefined4 FUN_8c1f0c14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 *ar5_00;
  
  if (*(short *)(ar4 + 2) == 0) {
    ar5_00 = (undefined2 *)(ar4 + 0x34);
    *ar5_00 = (short)*(undefined4 *)(ar4 + 0x28);
    uVar2 = 0x3c;
    func_0x8c1f0974(*(undefined4 *)(ar4 + 0x30),ar4 + 0x36,0x3c,ar7);
    uVar2 = FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7);
    *(short *)(ar4 + 0x72) = (short)uVar2;
    iVar1 = (*(int *)(ar4 + 0x28) + 1) * 0x40;
    FUN_8c1f0958(ar5_00,*(int *)(ar4 + 0xc) + iVar1,0x40,ar7,iVar1);
    if (*(int *)(ar4 + 0x10) < *(int *)(ar4 + 0x14)) {
      iVar1 = (*(int *)(ar4 + 0x14) + 1) * 0x40;
      FUN_8c1f09d4(*(int *)(ar4 + 0x10) + 1,*(int *)(ar4 + 0xc) + iVar1,*(undefined4 *)(ar4 + 0x18),
                   ar7);
      iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + iVar1,*(int *)(ar4 + 0xc) + iVar1,
                             *(int *)(ar4 + 0x18) << 6,ar7);
      if (iVar1 == *(int *)(ar4 + 0x18) << 6) {
        iVar1 = *(int *)(ar4 + 0x10);
        *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
        iVar1 = syscall_1f98d8(*(int *)(ar4 + 4) + (iVar1 + 1) * 0x40,ar5_00,0x40,ar7);
        if (iVar1 == 0x40) {
          return 0;
        }
      }
      uVar2 = 0xfffffffe;
    }
    else {
      uVar2 = 0xfffffff6;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0c14\n.set _FUN_8c1f0c14, _FUN_8c1f0c14_def\n");
//@unit 8c1f0cdc
#include "../decls.h"
undefined4 FUN_8c1f0cdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort *puVar3;
  
  if (*(short *)(ar4 + 2) == 0) {
    puVar3 = (ushort *)((*(int *)(ar4 + 0x28) + 1) * 0x40 + *(int *)(ar4 + 0xc));
    func_0x8c1f0974(puVar3 + 1,*(undefined4 *)(ar4 + 0x30),0x3c);
    if ((*puVar3 == 0xffff) ||
       (uVar1 = FUN_8c1f109c(0x3e,puVar3), puVar3[0x1f] == uVar1)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0cdc\n.set _FUN_8c1f0cdc, _FUN_8c1f0cdc_def\n");
//@unit 8c1f0ce2
#include "../decls.h"
undefined4 FUN_8c1f0ce2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int unaff_r13;
  ushort *ar5_00;
  
  if (*(short *)(unaff_r13 + 2) == 0) {
    uVar2 = 0x3c;
    ar5_00 = (ushort *)((*(int *)(unaff_r13 + 0x28) + 1) * 0x40 + *(int *)(unaff_r13 + 0xc));
    func_0x8c1f0974(ar5_00 + 1,*(undefined4 *)(unaff_r13 + 0x30),0x3c,ar7);
    if ((*ar5_00 == 0xffff) ||
       (uVar1 = FUN_8c1f109c(0x3e,ar5_00,uVar2,ar7),
       (uint)ar5_00[0x1f] == (uVar1 & 0xffff))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffffc;
    }
  }
  else {
    uVar2 = 0xfffffffa;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f0ce2\n.set _FUN_8c1f0ce2, _FUN_8c1f0ce2_def\n");
//@unit 8c1f0d34
#include "../decls.h"
undefined4 FUN_8c1f0d34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(ar4 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_8c1f0c14(ar4,ar5,ar6,ar7);
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_8c1f0b58(ar4,ar5,ar6,ar7);
      return uVar2;
    }
    iVar1 = syscall_1f98ec(*(undefined4 *)(ar4 + 4));
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(ar4 + 0x24) = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c1f0d34\n.set _FUN_8c1f0d34, _FUN_8c1f0d34_def\n");
//@unit 8c1f0d38
#include "../decls.h"
undefined4 FUN_8c1f0d38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r14;
  
  iVar1 = *(int *)(unaff_r14 + 0x24);
  if (iVar1 == 0) {
    iVar1 = FUN_8c1f0c14(unaff_r14,ar5,ar6,ar7);
    if (iVar1 != -10) {
      return iVar1;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0xfffffffe;
      }
      uVar2 = FUN_8c1f0b58(unaff_r14,ar5,ar6,ar7);
      return uVar2;
    }
    iVar1 = syscall_1f98ec(*(undefined4 *)(unaff_r14 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      return 0xfffffffd;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(unaff_r14 + 0x24) = uVar2;
  return 1;
}

__asm__(".globl _FUN_8c1f0d38\n.set _FUN_8c1f0d38, _FUN_8c1f0d38_def\n");
//@unit 8c1f0d94
#include "../decls.h"
undefined4 s_KATANA_FLASH_1f0d98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short *psVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  if ((ar4 < 1) || (4 < ar4)) {
    uVar2 = 0xfffffff9;
  }
  else {
    _DAT_8c2739d8 = (short *)&DAT_8c470ee0;
    syscall_1f98b0(ar4,&uStack_14,ar6,ar7);
    *_DAT_8c2739d8 = (short)ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 2) = uStack_14;
    *(undefined4 *)(_DAT_8c2739d8 + 4) = uStack_10;
    *(int *)(_DAT_8c2739d8 + 0xc) = *(int *)(_DAT_8c2739d8 + 4) + 0x7fff >> 0xf;
    *(int *)(_DAT_8c2739d8 + 10) =
         ((*(int *)(_DAT_8c2739d8 + 4) >> 6) - *(int *)(_DAT_8c2739d8 + 0xc)) + -1;
    *(undefined4 *)(_DAT_8c2739d8 + 6) = ar5;
    psVar1 = _DAT_8c2739d8;
    psVar1[0xe] = 0;
    psVar1[0xf] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x10] = 0;
    psVar1[0x11] = 0;
    psVar1 = _DAT_8c2739d8;
    psVar1[0x16] = 0;
    psVar1[0x17] = 0;
    iVar3 = syscall_1f98c4(*(undefined4 *)(_DAT_8c2739d8 + 2),_DAT_8c2739d8 + 0x1a,0x40,ar7);
    psVar1 = _DAT_8c2739d8;
    if (iVar3 == -1) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0xc;
      iVar3 = func_0x8c1f093c(_DAT_8c2739d8 + 0x1a,"KATANA_FLASH____",0xc,ar7);
      if ((iVar3 != 0) && ((int)*_DAT_8c2739d8 == (int)(char)psVar1[0x22])) {
        _DAT_8c2739d8[1] = (short)*(char *)((int)psVar1 + 0x45);
        if ((_DAT_8c2739d8[1] == 0) || (_DAT_8c2739d8[1] == 1)) {
          ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 4);
          FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 6),ar5_00,uVar2,ar7,ar5);
          iVar3 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar2,ar7);
          if (iVar3 != 0) {
            return iVar3;
          }
          return 0;
        }
      }
      uVar2 = 0xfffffff8;
    }
  }
  return uVar2;
}

__asm__(".globl _s_KATANA_FLASH_1f0d98\n.set _s_KATANA_FLASH_1f0d98, _s_KATANA_FLASH_1f0d98_def\n");
//@unit 8c1f0e98
#include "../decls.h"
int FUN_8c1f0e98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  undefined1 *ar5_01;
  undefined4 uVar3;
  
  uVar3 = 1;
  if (_DAT_8c2739d8 == (undefined1 *)0x0) {
    iVar2 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar2 = syscall_1f98ec(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5,ar6,ar7);
    puVar1 = _DAT_8c2739d8;
    if (iVar2 == 0) {
      ar5_01 = _DAT_8c2739d8 + 0x34;
      func_0x8c1f0974(s_KATANA_FLASH_____8c26c00c,ar5_01,0x10,uVar3);
      uVar3 = 0x12;
      *(short *)(_DAT_8c2739d8 + 2) = (short)ar4;
      puVar1[0x45] = (char)ar4;
      puVar1[0x44] = *_DAT_8c2739d8;
      iVar2 = syscall_1f98d8(*(undefined4 *)(_DAT_8c2739d8 + 4),ar5_01,0x12,ar7);
      if (iVar2 == 0x12) {
        ar5_00 = *(undefined4 *)(_DAT_8c2739d8 + 8);
        FUN_8c1f0988(*(undefined4 *)(_DAT_8c2739d8 + 0xc),ar5_00,uVar3,ar7,0x12);
        iVar2 = FUN_8c1f0a72(_DAT_8c2739d8,ar5_00,uVar3,ar7);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
      }
      else {
        iVar2 = -2;
      }
    }
    else {
      iVar2 = -3;
    }
  }
  else {
    iVar2 = -6;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f0e98\n.set _FUN_8c1f0e98, _FUN_8c1f0e98_def\n");
//@unit 8c1f0e9c
#include "../decls.h"
int s_KATANA_FLASH_1f0ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *unaff_r14;
  undefined4 in_PR;
  
  if (*unaff_r14 == 0) {
    iVar1 = -0xb;
  }
  else if ((ar4 == 0) || (ar4 == 1)) {
    iVar1 = syscall_1f98ec(*(undefined4 *)(*unaff_r14 + 4),ar5,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = *unaff_r14;
      func_0x8c1f0974("KATANA_FLASH____",iVar1 + 0x34,0x10,ar7);
      ar6_00 = 0x12;
      *(short *)(*unaff_r14 + 2) = (short)ar4;
      *(char *)(iVar1 + 0x45) = (char)ar4;
      *(undefined1 *)(iVar1 + 0x44) = *(undefined1 *)*unaff_r14;
      iVar1 = syscall_1f98d8(*(undefined4 *)(*unaff_r14 + 4),iVar1 + 0x34,0x12,ar7);
      if (iVar1 == 0x12) {
        ar5_00 = *(undefined4 *)(*unaff_r14 + 8);
        FUN_8c1f0988(*(undefined4 *)(*unaff_r14 + 0xc),ar5_00,ar6_00,ar7,in_PR);
        iVar1 = FUN_8c1f0a72(*unaff_r14,ar5_00,ar6_00,ar7);
        if (iVar1 == 0) {
          iVar1 = 0;
        }
      }
      else {
        iVar1 = -2;
      }
    }
    else {
      iVar1 = -3;
    }
  }
  else {
    iVar1 = -6;
  }
  return iVar1;
}

__asm__(".globl _s_KATANA_FLASH_1f0ea0\n.set _s_KATANA_FLASH_1f0ea0, _s_KATANA_FLASH_1f0ea0_def\n");
//@unit 8c1f0f24
#include "../decls.h"
undefined4 FUN_8c1f0f24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  if (*(int *)(_DAT_8c2739d8 + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(int *)(_DAT_8c2739d8 + 0x14))) {
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 1;
    *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 2;
    *(int *)(_DAT_8c2739d8 + 0x28) = ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 0x30) = ar5;
    return 0;
  }
  return 0xfffffffb;
}

__asm__(".globl _FUN_8c1f0f24\n.set _FUN_8c1f0f24, _FUN_8c1f0f24_def\n");
//@unit 8c1f0f60
#include "../decls.h"
undefined4 FUN_8c1f0f60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  if (*(int *)(_DAT_8c2739d8 + 0x1c) != 0) {
    return 0xfffffff7;
  }
  if ((-1 < ar4) && (ar4 < *(int *)(_DAT_8c2739d8 + 0x14))) {
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 2;
    *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 2;
    *(int *)(_DAT_8c2739d8 + 0x28) = ar4;
    *(undefined4 *)(_DAT_8c2739d8 + 0x30) = ar5;
    *(undefined4 *)(_DAT_8c2739d8 + 0x24) = 0;
    return 0;
  }
  return 0xfffffffb;
}

__asm__(".globl _FUN_8c1f0f60\n.set _FUN_8c1f0f60, _FUN_8c1f0f60_def\n");
//@unit 8c1f0fa0
#include "../decls.h"
undefined4 FUN_8c1f0fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c2739d8 == 0) {
    return 0;
  }
  iVar1 = *(int *)(_DAT_8c2739d8 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar1 = FUN_8c1f0cdc(_DAT_8c2739d8,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar1 = FUN_8c1f0d34(_DAT_8c2739d8,ar5,ar6,ar7);
    if (iVar1 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(_DAT_8c2739d8 + 0x1c) = 0;
    if (iVar1 == 0) {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(_DAT_8c2739d8 + 0x20) = 3;
    }
  }
  *(int *)(_DAT_8c2739d8 + 0x2c) = iVar1;
LAB_8c1f1016:
  return *(undefined4 *)(_DAT_8c2739d8 + 0x20);
}

__asm__(".globl _FUN_8c1f0fa0\n.set _FUN_8c1f0fa0, _FUN_8c1f0fa0_def\n");
//@unit 8c1f0fa4
#include "../decls.h"
undefined4 FUN_8c1f0fa4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 0) {
    return 0;
  }
  iVar1 = *(int *)(iVar2 + 0x1c);
  if (iVar1 == 0) goto LAB_8c1f1016;
  if (iVar1 == 1) {
    iVar2 = FUN_8c1f0cdc(iVar2,ar5,ar6,ar7);
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  else {
    if (iVar1 != 2) {
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(*unaff_r14 + 0x20) = 0;
      goto LAB_8c1f1016;
    }
    iVar2 = FUN_8c1f0d34(iVar2,ar5,ar6,ar7);
    if (iVar2 == 1) goto LAB_8c1f1016;
    *(undefined4 *)(*unaff_r14 + 0x1c) = 0;
    if (iVar2 == 0) {
      *(undefined4 *)(*unaff_r14 + 0x20) = 1;
    }
    else {
      *(undefined4 *)(*unaff_r14 + 0x20) = 3;
    }
  }
  *(int *)(*unaff_r14 + 0x2c) = iVar2;
LAB_8c1f1016:
  return *(undefined4 *)(*unaff_r14 + 0x20);
}

__asm__(".globl _FUN_8c1f0fa4\n.set _FUN_8c1f0fa4, _FUN_8c1f0fa4_def\n");
//@unit 8c1f103e
#include "../decls.h"
undefined4 FUN_8c1f103e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int *ain1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*ain1 == 0) {
    return 0xfffffff5;
  }
  iVar1 = syscall_1f98ec(*(undefined4 *)(*ain1 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = FUN_8c1f0b58(_DAT_8c2739d8,ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f103e\n.set _FUN_8c1f103e, _FUN_8c1f103e_def\n");
//@unit 8c1f1080
#include "../decls.h"
undefined4 FUN_8c1f1080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (_DAT_8c2739d8 == 0) {
    return 0xfffffff5;
  }
  return *(int *)(_DAT_8c2739d8 + 0x14) - *(int *)(_DAT_8c2739d8 + 0x10);
}

__asm__(".globl _FUN_8c1f1080\n.set _FUN_8c1f1080, _FUN_8c1f1080_def\n");
//@unit 8c1f109c
#include "../decls.h"
uint FUN_8c1f109c_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0xffff;
  while (ar4 = ar4 + -1, -1 < ar4) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = (uVar2 & 0xffff) << 8 ^
            (int)*(short *)(&DAT_8c26c050 + ((int)(uVar2 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ~(uVar2 & 0xffff) & 0xffff;
}

__asm__(".globl _FUN_8c1f109c\n.set _FUN_8c1f109c, _FUN_8c1f109c_def\n");
//@unit 8c1f10d8
#include "../decls.h"
undefined4 syscall_1f10d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x0);
  return uVar1;
}

__asm__(".globl _syscall_1f10d8\n.set _syscall_1f10d8, _syscall_1f10d8_def\n");
//@unit 8c1f10ec
#include "../decls.h"
undefined4 syscall_1f10ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x1);
  return uVar1;
}

__asm__(".globl _syscall_1f10ec\n.set _syscall_1f10ec, _syscall_1f10ec_def\n");
//@unit 8c1f1100
#include "../decls.h"
undefined4 syscall_1f1100_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x2);
  return uVar1;
}

__asm__(".globl _syscall_1f1100\n.set _syscall_1f1100, _syscall_1f1100_def\n");
//@unit 8c1f1114
#include "../decls.h"
undefined4 syscall_1f1114_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x3);
  return uVar1;
}

__asm__(".globl _syscall_1f1114\n.set _syscall_1f1114, _syscall_1f1114_def\n");
//@unit 8c1f1128
#include "../decls.h"
undefined4 syscall_1f1128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x4);
  return uVar1;
}

__asm__(".globl _syscall_1f1128\n.set _syscall_1f1128, _syscall_1f1128_def\n");
//@unit 8c1f1150
#include "../decls.h"
undefined4 syscall_1f1150_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x6);
  return uVar1;
}

__asm__(".globl _syscall_1f1150\n.set _syscall_1f1150, _syscall_1f1150_def\n");
//@unit 8c1f1164
#include "../decls.h"
undefined4 syscall_1f1164_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000bc)(0,0x7);
  return uVar1;
}

__asm__(".globl _syscall_1f1164\n.set _syscall_1f1164, _syscall_1f1164_def\n");
//@unit 8c1f11dc
#include "../decls.h"
undefined4 FUN_8c1f11dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  syscall_1f1114(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c1f11dc\n.set _FUN_8c1f11dc, _FUN_8c1f11dc_def\n");
//@unit 8c1f11ea
#include "../decls.h"
int FUN_8c1f11ea_def(undefined4 ar4,int ar5,uint ar6,int ar7)

{
  int iVar1;
  undefined4 ar4_00;
  uint ar6_00;
  undefined4 uStack_1c;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  ar6_00 = ar6 & 0x1fffffff;
  if (ar7 == 1) {
    ar4_00 = 0x11;
  }
  else {
    if (ar7 != 0) {
      return 0xffffffee;
    }
    ar4_00 = 0x10;
    ar6_00 = ar6_00 | 0xa0000000;
  }
  uStack_1c = ar4;
  iStack_18 = ar5;
  uStack_14 = ar6_00;
  iVar1 = syscall_1f10d8(ar4_00,&uStack_1c,ar6_00,ar7);
  if ((iVar1 != 0) && (((int)ar6 >> 0x1c & 0xeU) != 10)) {
    if ((ar6 & 0x1f) == 0) {
      FUN_8c1f9980(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
    else {
      FUN_8c1f9bde(ar6,ar5 << 0xb,ar6_00,ar7,ar5);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f11ea\n.set _FUN_8c1f11ea, _FUN_8c1f11ea_def\n");
//@unit 8c1f126a
#include "../decls.h"
undefined4 FUN_8c1f126a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar4;
  uStack_c = ar5;
  uVar1 = syscall_1f10d8(0x1c,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f126a\n.set _FUN_8c1f126a, _FUN_8c1f126a_def\n");
//@unit 8c1f1286
#include "../decls.h"
int FUN_8c1f1286_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar6_00;
  uint ain0;
  
  ar6_00 = ar6;
  ain0 = ar5;
  iVar1 = syscall_1f1150(ar4,&stack0xffffffe8,ar6,ar7);
  if (((iVar1 == 0) && (ar6 != 0)) && (((int)ar5 >> 0x1c & 0xfU) != 10)) {
    if ((ar5 & 0x1f) == 0) {
      FUN_8c1f9980(ar5,ar6,ar6_00,ar7,ain0);
    }
    else {
      FUN_8c1f9bde(ar5,ar6,ar6_00,ar7,ain0);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f1286\n.set _FUN_8c1f1286, _FUN_8c1f1286_def\n");
//@unit 8c1f12de
#include "../decls.h"
undefined4 FUN_8c1f12de_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  iVar1 = syscall_1f10ec(ar4,&iStack_18,ar6,ar7);
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 == 1) {
    *ar5 = uStack_10;
    ar5[2] = uStack_c;
    return 4;
  }
  if (iVar1 == 2) {
    *ar5 = uStack_10;
    return 1;
  }
  if (iVar1 == 3) {
    return 0x41;
  }
  if (iVar1 == 4) {
    return 0x43;
  }
  if (iVar1 != -1) {
    return iVar1;
  }
  ar5[1] = uStack_14;
  if (iStack_18 == 0) {
    *ar5 = 0xffffffe5;
    return 5;
  }
  if (iStack_18 == 1) {
    uVar2 = 0xffffffe4;
LAB_8c1f1386:
    *ar5 = uVar2;
  }
  else {
    if (iStack_18 == 2) {
      uVar2 = 0xffffffe3;
    }
    else {
      if (iStack_18 == 3) {
        uVar2 = 0xffffffe2;
        goto LAB_8c1f1386;
      }
      if (iStack_18 == 4) {
        uVar2 = 0xffffffe1;
      }
      else {
        if (iStack_18 == 5) {
          uVar2 = 0xffffffe0;
          goto LAB_8c1f1386;
        }
        if (iStack_18 == 6) {
          uVar2 = 0xffffffdf;
        }
        else {
          if (iStack_18 == 7) {
            uVar2 = 0xffffffde;
            goto LAB_8c1f1386;
          }
          if (iStack_18 == 0xb) {
            uVar2 = 0xffffffdd;
          }
          else {
            if (iStack_18 == 0x10) {
              uVar2 = 0xffffffdc;
              goto LAB_8c1f1386;
            }
            uVar2 = 0xffffffe6;
          }
        }
      }
    }
    *ar5 = uVar2;
  }
  return 5;
}

__asm__(".globl _FUN_8c1f12de\n.set _FUN_8c1f12de, _FUN_8c1f12de_def\n");
//@unit 8c1f139e
#include "../decls.h"
undefined4 FUN_8c1f139e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = syscall_1f10d8(0x1b,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f139e\n.set _FUN_8c1f139e, _FUN_8c1f139e_def\n");
//@unit 8c1f13bc
#include "../decls.h"
undefined4 FUN_8c1f13bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = syscall_1f10d8(0x18,0,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f13bc\n.set _FUN_8c1f13bc, _FUN_8c1f13bc_def\n");
//@unit 8c1f13f0
#include "../decls.h"
undefined4 FUN_8c1f13f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = syscall_1f1128(ar4,ar5,ar6,ar7);
  if (iVar1 == 1) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c1f13f0\n.set _FUN_8c1f13f0, _FUN_8c1f13f0_def\n");
//@unit 8c1f140c
#include "../decls.h"
undefined4 FUN_8c1f140c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = syscall_1f1164(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f140c\n.set _FUN_8c1f140c, _FUN_8c1f140c_def\n");
//@unit 8c1f141a
#include "../decls.h"
undefined4 FUN_8c1f141a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = syscall_1f10d8(0x14,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f141a\n.set _FUN_8c1f141a, _FUN_8c1f141a_def\n");
//@unit 8c1f143c
#include "../decls.h"
undefined4 FUN_8c1f143c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = syscall_1f10d8(0x15,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f143c\n.set _FUN_8c1f143c, _FUN_8c1f143c_def\n");
//@unit 8c1f145e
#include "../decls.h"
undefined4 FUN_8c1f145e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = syscall_1f10d8(0x16,0,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f145e\n.set _FUN_8c1f145e, _FUN_8c1f145e_def\n");
//@unit 8c1f146e
#include "../decls.h"
undefined4 FUN_8c1f146e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = syscall_1f10d8(0x17,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f146e\n.set _FUN_8c1f146e, _FUN_8c1f146e_def\n");
//@unit 8c1f148c
#include "../decls.h"
undefined4 FUN_8c1f148c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = ar4;
  uStack_c = ar5;
  uVar1 = syscall_1f10d8(0x13,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f148c\n.set _FUN_8c1f148c, _FUN_8c1f148c_def\n");
//@unit 8c1f14a8
#include "../decls.h"
undefined4 FUN_8c1f14a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uVar1 = syscall_1f10d8(0x22,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f14a8\n.set _FUN_8c1f14a8, _FUN_8c1f14a8_def\n");
//@unit 8c1f14ca
#include "../decls.h"
undefined4 FUN_8c1f14ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  syscall_1f1100(ar4,ar5,ar6,ar7);
  return 1;
}

__asm__(".globl _FUN_8c1f14ca\n.set _FUN_8c1f14ca, _FUN_8c1f14ca_def\n");
//@unit 8c1f14de
#include "../decls.h"
undefined4 FUN_8c1f14de_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_18 = ar4;
  uStack_14 = ar5;
  uStack_10 = ar6;
  uStack_c = ar7;
  uVar1 = syscall_1f10d8(0x24,&uStack_18,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f14de\n.set _FUN_8c1f14de, _FUN_8c1f14de_def\n");
//@unit 8c1f14fe
#include "../decls.h"
undefined4 FUN_8c1f14fe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0;
  uStack_10 = ar4;
  uVar1 = syscall_1f10d8(0x28,&uStack_10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f14fe\n.set _FUN_8c1f14fe, _FUN_8c1f14fe_def\n");
//@unit 8c1f151c
#include "../decls.h"
undefined ** FUN_8c1f151c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &PTR_FUN_8c26c250;
}

__asm__(".globl _FUN_8c1f151c\n.set _FUN_8c1f151c, _FUN_8c1f151c_def\n");
//@unit 8c1f153c
#include "../decls.h"
uint FUN_8c1f153c_def(uint ar4,byte *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  
  while (bVar2 = 0 < ar6, ar6 = ar6 + -1, bVar2) {
    bVar1 = *ar5;
    ar5 = ar5 + 1;
    ar4 = (ar4 & 0xff) << 8 ^
          (int)*(short *)(&DAT_8c26c2a0 + ((int)(ar4 & 0xffff) >> 8 ^ (uint)bVar1) * 2);
  }
  return ar4;
}

__asm__(".globl _FUN_8c1f153c\n.set _FUN_8c1f153c, _FUN_8c1f153c_def\n");
//@unit 8c1f1576
#include "../decls.h"
undefined4 FUN_8c1f1576_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f153c(0,ar4,10,ar7);
  if ((uint)(ushort)ar5 != (~uVar1 & 0xffff)) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f1576\n.set _FUN_8c1f1576, _FUN_8c1f1576_def\n");
//@unit 8c1f15a4
#include "../decls.h"
int FUN_8c1f15a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (((int)0xf0 & (int)(char)ar4) >> 4) * 10 + ((int)(char)ar4 & 0xfU);
}

__asm__(".globl _FUN_8c1f15a4\n.set _FUN_8c1f15a4, _FUN_8c1f15a4_def\n");
//@unit 8c1f15be
#include "../decls.h"
int FUN_8c1f15be_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1f15a4((int)*ar4,ar5,ar6,ar7);
  iVar2 = FUN_8c1f15a4((int)ar4[1],ar5,ar6,ar7);
  iVar3 = FUN_8c1f15a4((int)ar4[2],ar5,ar6,ar7);
  return (iVar1 * 0x3c + iVar2) * 0x4b + iVar3;
}

__asm__(".globl _FUN_8c1f15be\n.set _FUN_8c1f15be, _FUN_8c1f15be_def\n");
//@unit 8c1f15f4
#include "../decls.h"
undefined4 FUN_8c1f15f4_def(char *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 a7;
  byte *pbVar8;
  byte *pbVar9;
  byte abStack_38 [28];
  
  if (*ar4 == '\0') {
    if ((int)ar4[3] + ar4[2] * 0x100 == 100) {
      a7 = 0;
      uVar1 = 0x40;
      pbVar8 = (byte *)(ar4 + 4);
      for (iVar6 = 0; iVar6 < 0xc; iVar6 = iVar6 + 1) {
        iVar5 = 7;
        abStack_38[iVar6] = 0;
        abStack_38[iVar6 + 0xc] = 0;
        do {
          pbVar9 = abStack_38 + iVar6 + 0xc;
          if (iVar5 == 7) {
            *pbVar9 = *pbVar9 | (*pbVar8 & 0x40) << 1;
          }
          else {
            uVar7 = -(6 - iVar5);
            if ((int)uVar7 < 0) {
              bVar4 = (byte)((int)((int)(char)*pbVar8 & 0x40U) >> (~uVar7 & 0x1f) + 1);
            }
            else {
              bVar4 = (byte)(((int)(char)*pbVar8 & 0x40U) << (uVar7 & 0x1f));
            }
            *pbVar9 = *pbVar9 | bVar4;
          }
          pbVar8 = pbVar8 + 1;
          iVar5 = iVar5 + -1;
        } while (-1 < iVar5);
        if ((abStack_38[0xc] & 0xf) != 1) {
          return 0xfffffffb;
        }
      }
      uVar7 = (uint)CONCAT11(abStack_38[0x16],abStack_38[0x17]);
      iVar6 = FUN_8c1f1576(abStack_38 + 0xc,uVar7,0x40,0);
      if (iVar6 == 0) {
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xd],uVar7,uVar1,a7);
        *ar5 = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0xf],uVar7,uVar1,a7);
        ar5[1] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x10],uVar7,uVar1,a7);
        ar5[2] = uVar2;
        uVar2 = FUN_8c1f15a4((int)(char)abStack_38[0x11],uVar7,uVar1,a7);
        ar5[3] = uVar2;
        uVar3 = FUN_8c1f15be(abStack_38 + 0x13,uVar7,uVar1,a7);
        ar5[4] = uVar3 | (int)(char)abStack_38[0xc] << 0x18;
        uVar1 = FUN_8c1f15a4((int)(char)abStack_38[0xe],uVar7,uVar1,a7);
        ar5[5] = uVar1;
        uVar1 = 0;
      }
      else {
        uVar1 = 0xfffffffd;
      }
    }
    else {
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f15f4\n.set _FUN_8c1f15f4, _FUN_8c1f15f4_def\n");
//@unit 8c1f1714
#include "../decls.h"
uint FUN_8c1f1714_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)ar4[1] << 8 | (uint)ar4[2] << 0x10 | (uint)ar4[3] << 0x18 | (uint)*ar4;
}

__asm__(".globl _FUN_8c1f1714\n.set _FUN_8c1f1714, _FUN_8c1f1714_def\n");
//@unit 8c1f173a
#include "../decls.h"
undefined4 FUN_8c1f173a_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  pcVar3 = &DAT_8c26c528;
  iVar2 = 0;
  do {
    ar4 = ar4 + 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    if (cVar1 != *ar4) {
      return 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 1;
}

__asm__(".globl _FUN_8c1f173a\n.set _FUN_8c1f173a, _FUN_8c1f173a_def\n");
//@unit 8c1f175c
#include "../decls.h"
undefined4 FUN_8c1f175c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(DAT_8c2739e0 + 0x30) = ar4;
  return 1;
}

__asm__(".globl _FUN_8c1f175c\n.set _FUN_8c1f175c, _FUN_8c1f175c_def\n");
//@unit 8c1f1766
#include "../decls.h"
int FUN_8c1f1766_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 a4;
  undefined4 *a5;
  ushort uVar4;
  int iVar5;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  uint uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 1;
  iVar5 = *(int *)(DAT_8c2739e0 + 0x1c);
  if (iVar5 == 0) {
    a4 = 0;
  }
  else {
    a4 = *(undefined4 *)(iVar5 + 0x3c);
  }
  a5 = &uStack_28;
  iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x10))(a4,a5,ar6,ar7);
  if (iVar5 == 0) goto LAB_8c1f19d4;
  uVar4 = (ushort)iVar2;
  if ((iVar2 == 0) || (iVar2 == 1)) {
    sVar1 = *(short *)(iVar5 + 0x48);
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined2 *)(iVar5 + 0x48) = 0;
    if (iVar2 != 1) goto LAB_8c1f19d4;
    if (sVar1 == 1) {
      *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
      *(undefined2 *)(iVar5 + 0x4a) = 2;
      if (*(int *)(iVar5 + 0x24) != 0) {
        (**(code **)(iVar5 + 0x24))(*(undefined4 *)(iVar5 + 0x28),a5,ar6,ar7);
      }
      goto LAB_8c1f19d4;
    }
    if (sVar1 != 3) {
      if (sVar1 != 4) {
        if (sVar1 == 7) {
          iVar3 = FUN_8c1f15f4(DAT_8c2739e0 + 0x40,&uStack_40,ar6,ar7);
          if (iVar3 == 0) {
            **(undefined4 **)(iVar5 + 8) = uStack_40;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 4) = uStack_3c;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 8) = uStack_38;
            *(undefined4 *)(*(int *)(iVar5 + 8) + 0xc) = uStack_34;
            *(uint *)(*(int *)(iVar5 + 8) + 0x10) = uStack_30 & 0xffffff;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffed;
          *(undefined4 *)(iVar5 + 0x44) = 0;
        }
        else {
          if (sVar1 != 8) goto LAB_8c1f19d4;
          ar7 = 0x8c470f9c;
          ar6 = *(undefined4 *)(iVar5 + 4);
          iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x48))
                            (0x8c470f94,0x8c470f98,ar6,0x8c470f9c);
          if (iVar3 != 0) {
            *(int *)(iVar5 + 0x3c) = iVar3;
            *(undefined2 *)(iVar5 + 0x50) = 4;
            *(undefined2 *)(iVar5 + 0x48) = 6;
            *(int *)(DAT_8c2739e0 + 0x1c) = iVar5;
            goto LAB_8c1f19d4;
          }
          *(undefined2 *)(iVar5 + 0x50) = 5;
          *(undefined2 *)(iVar5 + 0x52) = 0xffe4;
          *(undefined4 *)(iVar5 + 0x44) = 0;
          **(undefined4 **)(iVar5 + 4) = 0;
        }
        goto LAB_8c1f1988;
      }
      *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + *(int *)(iVar5 + 0x1c);
    }
    *(undefined2 *)(iVar5 + 0x4a) = 2;
  }
  else {
    if (iVar2 == 0x41) {
      iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x24))
                        (*(undefined4 *)(iVar5 + 0x3c),&iStack_44,ar6,ar7);
      if (iVar3 == 0) {
        if (iStack_44 < 1) {
          *(undefined2 *)(iVar5 + 0x4a) = 2;
        }
        else {
          *(undefined2 *)(iVar5 + 0x4a) = 0;
        }
        *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar5 + 0x20);
      }
      else if (iVar3 == 1) {
        *(int *)(iVar5 + 0x18) = iStack_44;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 4) {
      *(undefined4 *)(iVar5 + 0x40) = uStack_20;
      if (*(short *)(iVar5 + 0x48) == 1) {
        *(undefined4 *)(iVar5 + 0x18) = uStack_28;
      }
      goto LAB_8c1f19d4;
    }
    if (iVar2 == 0x43) goto LAB_8c1f19d4;
    if ((iVar2 != 5) && (iVar2 != 0x40)) {
      *(ushort *)(iVar5 + 0x50) = uVar4 & 0xff;
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
      goto LAB_8c1f19d4;
    }
    *(ushort *)(iVar5 + 0x50) = uVar4;
    *(short *)(iVar5 + 0x52) = (short)uStack_28;
    *(undefined4 *)(iVar5 + 0x44) = uStack_24;
    *(undefined4 *)(iVar5 + 0x3c) = 0;
    *(undefined4 *)(DAT_8c2739e0 + 0x1c) = 0;
    if (*(short *)(iVar5 + 0x52) == -0x1d) {
      if (*(int *)(iVar5 + 0x44) == 0x3a) {
        iVar3 = FUN_8c1f23e0(a4,a5,ar6,ar7);
        if ((iVar3 == 6) || (iVar3 == 0)) {
          *(undefined2 *)(iVar5 + 0x52) = 0xffe9;
        }
      }
      else if (*(int *)(iVar5 + 0x44) == 0x104) {
        *(undefined2 *)(iVar5 + 0x52) = 0xffdb;
      }
    }
LAB_8c1f1988:
    if ((*(short *)(iVar5 + 0x52) == -0x17) || (*(short *)(iVar5 + 0x52) == -0x21)) {
      *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
    }
    if (*(int *)(DAT_8c2739e0 + 0x24) != 0) {
      (**(code **)(DAT_8c2739e0 + 0x24))
                (*(undefined4 *)(DAT_8c2739e0 + 0x28),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
    if (*(int *)(iVar5 + 0x34) != 0) {
      (**(code **)(iVar5 + 0x34))
                (*(undefined4 *)(iVar5 + 0x38),(int)*(short *)(iVar5 + 0x52),ar6,ar7);
    }
  }
LAB_8c1f19d4:
  *(undefined4 *)(DAT_8c2739e0 + 0x20) = 0;
  return iVar2;
}

__asm__(".globl _FUN_8c1f1766\n.set _FUN_8c1f1766, _FUN_8c1f1766_def\n");
//@unit 8c1f19ec
#include "../decls.h"
undefined4 FUN_8c1f19ec_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 uVar1;
  int ar7_00;
  
  ar7_00 = ar5 << 0xb;
  ar4_00 = FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,ar4,ar7_00);
  if (ar4_00 == 0) {
    return 0xfffffff3;
  }
  uVar1 = FUN_8c1f31c6(ar4_00,ar5,ar6,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c1f19ec\n.set _FUN_8c1f19ec, _FUN_8c1f19ec_def\n");
//@unit 8c1f1a2a
#include "../decls.h"
undefined4 FUN_8c1f1a2a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(ar4 + 0x1c);
  uVar2 = 0;
  uVar1 = 0;
  if ((iVar3 != 0) && (*(int *)(iVar3 + 0x2c) != 0)) {
    uVar2 = *(undefined4 *)(iVar3 + 0x30);
    uVar1 = *(undefined4 *)(iVar3 + 0x2c);
  }
                    
                    
  uVar1 = (*_DAT_8c0000bc)(uVar1,uVar2,0,5);
  return uVar1;
}

__asm__(".globl _FUN_8c1f1a2a\n.set _FUN_8c1f1a2a, _FUN_8c1f1a2a_def\n");
//@unit 8c1f1a44
#include "../decls.h"
undefined4 FUN_8c1f1a44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(int *)(ar4 + 0x20) == 1) {
    return 1;
  }
  uVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))();
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f1a44\n.set _FUN_8c1f1a44, _FUN_8c1f1a44_def\n");
//@unit 8c1f1a52
#include "../decls.h"
undefined4 FUN_8c1f1a52_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if ((ar4 != (int *)0x0) && (1 < *ar4)) {
    ar4[0xf] = ar4[4];
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f1a52\n.set _FUN_8c1f1a52, _FUN_8c1f1a52_def\n");
//@unit 8c1f1a7c
#include "../decls.h"
undefined4 FUN_8c1f1a7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char *a5;
  undefined4 uVar8;
  char *a6;
  undefined4 a7;
  char *ain0;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  ain0 = &DAT_8c470f66;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  a7 = 0;
  uVar7 = 0;
  uVar8 = 0;
  uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar2 = (int *)FUN_8c1f302a(uVar6,0,0,0);
  if ((piVar2 != (int *)0x0) &&
     (iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x1c))(uVar6,uVar7,uVar8,a7), iVar3 != 0))
  {
    piVar2[0xf] = iVar3;
    *(undefined2 *)(piVar2 + 0x14) = 4;
    *(int **)(*piVar2 + 0x1c) = piVar2;
    iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,a7);
    iVar4 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(&iStack_28,uVar7,uVar8,a7);
    if (iVar4 != 0) {
      if (iVar3 != 0) {
        if (iVar3 != -0x1d) {
          return iVar3;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar6 = 0;
      uVar7 = 0;
      uVar8 = 0;
      piVar2 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
      if (piVar2 != (int *)0x0) {
        *(undefined4 *)(DAT_8c2739e0 + 0x2c) = 0;
        iVar3 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x4c))(0x8c470f58,uVar7,uVar8,uVar6);
        if (iVar3 != 0) {
          piVar2[0xf] = iVar3;
          *(undefined2 *)(piVar2 + 0x14) = 4;
          *(int **)(*piVar2 + 0x1c) = piVar2;
          iVar3 = FUN_8c1f2f98(piVar2,uVar7,uVar8,uVar6);
          if (iVar3 == 0) {
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (DAT_8c470f64 + -0x30) * 0x10000;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (*ain0 + -0x30) * 0x100;
            *(uint *)(DAT_8c2739e0 + 0x2c) =
                 *(uint *)(DAT_8c2739e0 + 0x2c) | (int)DAT_8c470f67 - 0x30U;
          }
        }
        a5 = (char *)0x1;
        a6 = (char *)(DAT_8c2739e0 + 0x40);
        iVar3 = FUN_8c1f19ec(0xb06e,1,a6,uVar6);
        if (iVar3 == 0) {
          iVar3 = FUN_8c1f173a(DAT_8c2739e0 + 0x40,a5,a6,uVar6);
          if (iVar3 == 0) {
            return 0xfffffffb;
          }
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 4);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xcc,a5,a6,uVar6);
          *puVar5 = uVar7;
          *(int *)(DAT_8c2739e0 + 4) = *(int *)(DAT_8c2739e0 + 4) + 0x96;
          puVar5 = (undefined4 *)(DAT_8c2739e0 + 8);
          uVar7 = FUN_8c1f1714(DAT_8c2739e0 + 0xc4,a5,a6,uVar6);
          *puVar5 = uVar7;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar7 = uVar6;
          if (_DAT_8c470f78 == 1) {
            a5 = &DAT_8c0080f0;
            iVar3 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            a6 = &DAT_8c470f80;
            do {
              uVar7 = uVar6;
              if (*a5 == ' ') break;
              cVar1 = *a5;
              a5 = a5 + 1;
              uVar6 = 0xc;
              uVar7 = 0xc;
              iVar3 = iVar3 + 1;
              *a6 = cVar1;
              a6 = a6 + 1;
            } while (iVar3 < 0xc);
            *a6 = '\0';
          }
          iVar3 = FUN_8c1f1714(DAT_8c2739e0 + 0xde,a5,a6,uVar7);
          uVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0xe6,a5,a6,uVar7);
          *(undefined4 *)(*(int *)(DAT_8c2739e0 + 0x10) + 8) = 0;
          uVar7 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
          iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar3 + 0x96,uVar7,uVar6);
          if (iVar3 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar3 == 0) {
            if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0x38) = 1;
              return 0;
            }
            iVar3 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,uVar7,uVar6);
            if (iVar3 == 0) {
              uVar7 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              uVar6 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
              iVar3 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,uStack_2c,uVar6,1);
              if (iVar3 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar3 == 0) {
                if (**(int **)(DAT_8c2739e0 + 0x10) == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(*(undefined4 *)(DAT_8c2739e0 + 0x10),uStack_2c,uVar6,uVar7,ain0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c1f1a7c\n.set _FUN_8c1f1a7c, _FUN_8c1f1a7c_def\n");
//@unit 8c1f1d86
#include "../decls.h"
undefined4 thunk_FUN_8c1f38c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1f38c0)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f38c0\n.set _thunk_FUN_8c1f38c0, _thunk_FUN_8c1f38c0_def\n");
//@unit 8c1f1d8c
#include "../decls.h"
undefined4 FUN_8c1f1d8c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  char *ar5_00;
  undefined4 uVar9;
  undefined4 uVar10;
  byte in_IMASK;
  byte bVar11;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  byte extraout_T_00;
  undefined4 uStack_2c;
  int *piStack_28;
  int iStack_24;
  uint uStack_20;
  
  if ((DAT_8c2739e0 != (int *)0x0) && ((short)DAT_8c2739e0[0xe] == 1)) {
    return 0;
  }
  if (((uint)ar5 & 0x1f) != 0) {
    return 0xfffffff2;
  }
  piVar3 = DAT_8c2739e0;
  uVar8 = ar6;
  uVar9 = ar7;
  piStack_28 = ar5;
  iStack_24 = ar4;
  puVar5 = (undefined4 *)FUN_8c1f151c(DAT_8c2739e0,ar5,ar6,ar7);
  (*(code *)*puVar5)(piVar3,ar5,uVar8,uVar9);
  uStack_20 = (((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar11 = (byte)((((uint)extraout_T | (uint)extraout_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  DAT_8c2739e0 = piStack_28;
  *(undefined2 *)(piStack_28 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  *DAT_8c2739e0 = iStack_24;
  piVar3 = DAT_8c2739e0 + 4;
  iVar6 = FUN_8c1f3078(ar7,ar6,uVar8,uVar9);
  *piVar3 = iVar6;
  DAT_8c2739e0[3] = (int)puVar5;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[9] = 0;
  DAT_8c2739e0[0xd] = 0;
  DAT_8c2739e0[0xf] = s0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar6 = 0; iVar6 < *DAT_8c2739e0 + 1; iVar6 = iVar6 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T_00 | (uint)extraout_S_00 << 1 | (uint)bVar11 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar10 = 0;
  uVar8 = 0;
  uVar9 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar6 != 0))
  {
    piVar3[0xf] = iVar6;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar6 = FUN_8c1f2f98(piVar3,uVar8,uVar9,uVar10);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&piStack_28);
    if (iVar4 != 0) {
      if (iVar6 != 0) {
        if (iVar6 != -0x1d) {
          return iVar6;
        }
        if (piStack_28 == (int *)0x6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar6 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar6 != 0) {
          piVar3[0xf] = iVar6;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar6 = FUN_8c1f2f98(piVar3,uVar9,uVar10,uVar8);
          if (iVar6 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar6 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar8);
        if (iVar6 == 0) {
          iVar6 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar8);
          if (iVar6 == 0) {
            return 0xfffffffb;
          }
          piVar7 = DAT_8c2739e0 + 1;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar7 = DAT_8c2739e0 + 2;
          iVar6 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar8);
          *piVar7 = iVar6;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar9 = uVar8;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar6 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar9 = uVar8;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar8 = 0xc;
              uVar9 = 0xc;
              iVar6 = iVar6 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar6 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar6 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar9);
          uVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar9);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar6 + 0x96,iVar4,uVar8);
          if (iVar6 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar6 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar6 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar8);
            if (iVar6 == 0) {
              uVar8 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar6 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar6 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar6 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar8,0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c1f1d8c\n.set _FUN_8c1f1d8c, _FUN_8c1f1d8c_def\n");
//@unit 8c1f1eaa
#include "../decls.h"
undefined4 FUN_8c1f1eaa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte extraout_T;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (DAT_8c2739e0 == (int *)0x0) {
    return 0xffffffff;
  }
  piVar9 = DAT_8c2739e0 + 0x420;
  piVar3 = DAT_8c2739e0;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    piVar3 = piVar9;
    FUN_8c1f309c(piVar9,ar5,ar6,ar7);
    piVar9 = piVar9 + 0x15;
    in_S = extraout_S;
  }
  bVar10 = (byte)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  (**(code **)DAT_8c2739e0[3])(piVar3,ar5,ar6,ar7);
  *(undefined2 *)(DAT_8c2739e0 + 0xe) = 0;
  DAT_8c2739e0[8] = 0;
  DAT_8c2739e0[7] = 0;
  *(undefined2 *)((int)DAT_8c2739e0 + 0x3a) = 0;
  DAT_8c2739e0[0xd] = 0;
  piVar3 = DAT_8c2739e0 + 0x420;
  for (iVar8 = 0; iVar8 < *DAT_8c2739e0 + 1; iVar8 = iVar8 + 1) {
    *(undefined2 *)(piVar3 + 0x13) = 0;
    *piVar3 = (int)DAT_8c2739e0;
    piVar3 = piVar3 + 0x15;
  }
  DAT_8c2739e0[5] = (int)(DAT_8c2739e0 + 0x420);
  DAT_8c2739e0[6] = (int)(DAT_8c2739e0 + 0x435);
  FUN_8c1f21bc(DAT_8c2739e0[5],0,0,0);
  uVar2 = (((uint)extraout_T | (uint)extraout_S_00 << 1 | (uint)bVar10 << 4) & 0xf0) >> 4;
  if (DAT_8c2739e4 == 0) {
    DAT_8c2739e4 = FUN_8c1fa244(0x900,&LAB_8c1f1a44,0x50,DAT_8c2739e0);
  }
  if (DAT_8c2739e8 == 0) {
    DAT_8c2739e8 = FUN_8c1fa244(0xa40,&LAB_8c1f1a2a,0x10,DAT_8c2739e0);
  }
  uVar7 = 0;
  uVar5 = 0;
  uVar6 = 0;
  piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
  if ((piVar3 != (int *)0x0) && (iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x1c))(uVar2), iVar8 != 0))
  {
    piVar3[0xf] = iVar8;
    *(undefined2 *)(piVar3 + 0x14) = 4;
    *(int **)(*piVar3 + 0x1c) = piVar3;
    iVar8 = FUN_8c1f2f98(piVar3,uVar5,uVar6,uVar7);
    iVar4 = (**(code **)(DAT_8c2739e0[3] + 0x20))(&iStack_28);
    if (iVar4 != 0) {
      if (iVar8 != 0) {
        if (iVar8 != -0x1d) {
          return iVar8;
        }
        if (iStack_28 == 6) {
          return 0xffffffe9;
        }
        return 0xffffffe3;
      }
      if (iStack_24 != 0x80) {
        return 0xfffffffb;
      }
      uVar5 = 0;
      uVar6 = 0;
      uVar7 = 0;
      piVar3 = (int *)FUN_8c1f302a(DAT_8c2739e0[5],0,0,0);
      if (piVar3 != (int *)0x0) {
        DAT_8c2739e0[0xb] = 0;
        iVar8 = (**(code **)(DAT_8c2739e0[3] + 0x4c))(0x8c470f58);
        if (iVar8 != 0) {
          piVar3[0xf] = iVar8;
          *(undefined2 *)(piVar3 + 0x14) = 4;
          *(int **)(*piVar3 + 0x1c) = piVar3;
          iVar8 = FUN_8c1f2f98(piVar3,uVar6,uVar7,uVar5);
          if (iVar8 == 0) {
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f64 + -0x30) * 0x10000;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (DAT_8c470f66 + -0x30) * 0x100;
            DAT_8c2739e0[0xb] = DAT_8c2739e0[0xb] | (int)DAT_8c470f67 - 0x30U;
          }
        }
        ar5_00 = (char *)0x1;
        piVar3 = DAT_8c2739e0 + 0x10;
        iVar8 = FUN_8c1f19ec(DAT_8c26c520,1,piVar3,uVar5);
        if (iVar8 == 0) {
          iVar8 = FUN_8c1f173a(DAT_8c2739e0 + 0x10,ar5_00,piVar3,uVar5);
          if (iVar8 == 0) {
            return 0xfffffffb;
          }
          piVar9 = DAT_8c2739e0 + 1;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x33,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          DAT_8c2739e0[1] = DAT_8c2739e0[1] + 0x96;
          piVar9 = DAT_8c2739e0 + 2;
          iVar8 = FUN_8c1f1714(DAT_8c2739e0 + 0x31,ar5_00,piVar3,uVar5);
          *piVar9 = iVar8;
          _DAT_8c470f90 = (short *)&DAT_8c470f78;
          _DAT_8c470f78 = (short)DAT_8c0080fc;
          uVar6 = uVar5;
          if (_DAT_8c470f78 == 1) {
            ar5_00 = &DAT_8c0080f0;
            iVar8 = 0;
            _DAT_8c470f7a = (short)DAT_8c0080fd;
            _DAT_8c470f7c = 0;
            piVar3 = (int *)&DAT_8c470f80;
            do {
              uVar6 = uVar5;
              if (*ar5_00 == ' ') break;
              cVar1 = *ar5_00;
              ar5_00 = ar5_00 + 1;
              uVar5 = 0xc;
              uVar6 = 0xc;
              iVar8 = iVar8 + 1;
              *(char *)piVar3 = cVar1;
              piVar3 = (int *)((int)piVar3 + 1);
            } while (iVar8 < 0xc);
            *(char *)piVar3 = '\0';
          }
          iVar8 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xde,ar5_00,piVar3,uVar6);
          uVar5 = FUN_8c1f1714((int)DAT_8c2739e0 + 0xe6,ar5_00,piVar3,uVar6);
          *(undefined4 *)(DAT_8c2739e0[4] + 8) = 0;
          iVar4 = DAT_8c2739e0[4];
          iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,iVar8 + 0x96,iVar4,uVar5);
          if (iVar8 == -0xc) {
            return 0xfffffff4;
          }
          if (iVar8 == 0) {
            if (*(int *)DAT_8c2739e0[4] == 0) {
              return 0xfffffffb;
            }
            if (*_DAT_8c470f90 != 1) {
LAB_8c1f1d54:
              *(undefined2 *)(DAT_8c2739e0 + 0xe) = 1;
              return 0;
            }
            iVar8 = FUN_8c1f2172(_DAT_8c470f90 + 4,&uStack_2c,iVar4,uVar5);
            if (iVar8 == 0) {
              uVar5 = 1;
              *(undefined4 *)(_DAT_8c470f90 + 2) = uStack_2c;
              iVar4 = DAT_8c2739e0[4];
              iVar8 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x10,uStack_2c,iVar4,1);
              if (iVar8 == -0xc) {
                return 0xfffffff4;
              }
              if (iVar8 == 0) {
                if (*(int *)DAT_8c2739e0[4] == 0) {
                  return 0xfffffffb;
                }
                FUN_8c1f1a52(DAT_8c2739e0[4],uStack_2c,iVar4,uVar5,0);
                goto LAB_8c1f1d54;
              }
            }
          }
        }
        return 0xfffffffc;
      }
    }
  }
  return 0xfffffffe;
}

__asm__(".globl _FUN_8c1f1eaa\n.set _FUN_8c1f1eaa, _FUN_8c1f1eaa_def\n");
//@unit 8c1f1f98
#include "../decls.h"
undefined4 FUN_8c1f1f98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *ar4_00;
  int iVar1;
  
  if (DAT_8c2739e4 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e4,ar5,ar6,ar7);
  }
  if (DAT_8c2739e8 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e8,ar5,ar6,ar7);
  }
  DAT_8c2739e4 = 0;
  DAT_8c2739e8 = 0;
  ar4_00 = DAT_8c2739e0 + 0x420;
  for (iVar1 = 0; iVar1 < *DAT_8c2739e0 + 1; iVar1 = iVar1 + 1) {
    ain0 = FUN_8c1f309c(ar4_00,ar5,ar6,ar7,ain0);
    ar4_00 = ar4_00 + 0x15;
  }
  DAT_8c2739e0 = (int *)0x0;
  return ain0;
}

__asm__(".globl _FUN_8c1f1f98\n.set _FUN_8c1f1f98, _FUN_8c1f1f98_def\n");
//@unit 8c1f1fa0
#include "../decls.h"
undefined4
FUN_8c1f1fa0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,int *ain1)

{
  int *a4;
  int iVar1;
  
  if (*ain1 != 0) {
    ain0 = FUN_8c1fa54c(*ain1,ar5,ar6,ar7);
  }
  if (DAT_8c2739e8 != 0) {
    ain0 = FUN_8c1fa54c(DAT_8c2739e8,ar5,ar6,ar7);
  }
  DAT_8c2739e4 = 0;
  DAT_8c2739e8 = 0;
  a4 = DAT_8c2739e0 + 0x420;
  for (iVar1 = 0; iVar1 < *DAT_8c2739e0 + 1; iVar1 = iVar1 + 1) {
    ain0 = FUN_8c1f309c(a4,ar5,ar6,ar7);
    a4 = a4 + 0x15;
  }
  DAT_8c2739e0 = (int *)0x0;
  return ain0;
}

__asm__(".globl _FUN_8c1f1fa0\n.set _FUN_8c1f1fa0, _FUN_8c1f1fa0_def\n");
//@unit 8c1f1ffa
#include "../decls.h"
int FUN_8c1f1ffa_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  
  if (ar5 == 0) {
    ar5 = *(int *)(DAT_8c2739e0 + 0x10);
  }
  if ((*ar4 == '/') || (*ar4 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),ar4);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = ar5;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,ar5,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar1 = 1, iVar2 == 0 || (iVar1 = iVar2, iVar2 == -0xc)))) {
    FUN_8c1f1a52(ar5,ar5_00,ar6_00,ar7_00,iVar1);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f1ffa\n.set _FUN_8c1f1ffa, _FUN_8c1f1ffa_def\n");
//@unit 8c1f2008
#include "../decls.h"
int FUN_8c1f2008_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int ar5_00;
  undefined4 ar6_00;
  int ar7_00;
  char *unaff_r12;
  undefined4 unaff_r13;
  char in_T;
  undefined4 in_PR;
  
  if (in_T != '\0') {
    unaff_r13 = *(undefined4 *)(DAT_8c2739e0 + 0x10);
  }
  if ((*unaff_r12 == '/') || (*unaff_r12 == '\\')) {
    if (*_DAT_8c470f90 == 1) {
      iVar1 = FUN_8c1f2e3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12,_DAT_8c470f90 + 4);
    }
    else {
      iVar1 = FUN_8c1f2d3e(DAT_8c2739e0 + 0x80,*(undefined4 *)(DAT_8c2739e0 + 4),
                           *(undefined4 *)(DAT_8c2739e0 + 8),unaff_r12);
    }
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    ar7_00 = 0x800;
  }
  else {
    iVar1 = FUN_8c1f2cce(unaff_r12,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
    if (iVar1 == 0) {
      return 0xfffffff8;
    }
    piVar3 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
    if ((*(byte *)(piVar3 + 2) & 2) == 0) {
      return 0xfffffff5;
    }
    iVar1 = *piVar3;
    ar7_00 = piVar3[1];
  }
  iVar1 = iVar1 + 0x96;
  ar5_00 = iVar1;
  ar6_00 = unaff_r13;
  iVar2 = FUN_8c1f2bfe(DAT_8c2739e0 + 0x40,iVar1,unaff_r13,ar7_00);
  if (((*_DAT_8c470f90 == 1) && (*(int *)(_DAT_8c470f90 + 2) == iVar1)) &&
     ((iVar2 == 0 || (iVar2 == -0xc)))) {
    FUN_8c1f1a52(unaff_r13,ar5_00,ar6_00,ar7_00,in_PR);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f2008\n.set _FUN_8c1f2008, _FUN_8c1f2008_def\n");
//@unit 8c1f210a
#include "../decls.h"
undefined4 FUN_8c1f210a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  int *ar4_00;
  int *ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar3 = *ar4;
  piVar5 = *(int **)(DAT_8c2739e0 + 0x10);
  iVar4 = piVar5[1];
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      in_r0 = FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7,in_r0);
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f210a\n.set _FUN_8c1f210a, _FUN_8c1f210a_def\n");
//@unit 8c1f210e
#include "../decls.h"
undefined4 FUN_8c1f210e_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r3;
  int *ar4_00;
  int *ar5_00;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 in_PR;
  
  iVar3 = *ar4;
  piVar5 = *(int **)(*in_r3 + 0x10);
  iVar4 = piVar5[1];
  iVar2 = iVar4;
  if (iVar3 < iVar4) {
    iVar2 = iVar3;
  }
  iVar6 = 0;
  piVar5[2] = ar4[2];
  ar4_00 = ar4 + 4;
  ar5_00 = piVar5 + 4;
  if (0 < iVar2) {
    do {
      FUN_8c1f2a5c(ar4_00,ar5_00,0x2c,ar7,in_PR);
      iVar6 = iVar6 + 1;
      ar4_00 = ar4_00 + 0xb;
      ar5_00 = ar5_00 + 0xb;
    } while (iVar6 < iVar2);
  }
  *piVar5 = iVar6;
  if (iVar4 < iVar3) {
    uVar1 = 0xfffffff4;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f210e\n.set _FUN_8c1f210e, _FUN_8c1f210e_def\n");
//@unit 8c1f2172
#include "../decls.h"
undefined4 FUN_8c1f2172_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(DAT_8c2739e0 + 0x10),0,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *ar5 = *piVar2 + 0x96;
  ar5[1] = piVar2[1];
  *(char *)(ar5 + 2) = (char)piVar2[2];
  return 0;
}

__asm__(".globl _FUN_8c1f2172\n.set _FUN_8c1f2172, _FUN_8c1f2172_def\n");
//@unit 8c1f217a
#include "../decls.h"
undefined4 FUN_8c1f217a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  int *piVar2;
  int *unaff_r14;
  
  iVar1 = FUN_8c1f2cce(ar4,*(undefined4 *)(*in_r3 + 0x10),ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffff8;
  }
  piVar2 = (int *)(*(int *)(DAT_8c2739e0 + 0x10) + 0x10 + (iVar1 + -1) * 0x2c);
  *unaff_r14 = *piVar2 + 0x96;
  unaff_r14[1] = piVar2[1];
  *(char *)(unaff_r14 + 2) = (char)piVar2[2];
  return 0;
}

__asm__(".globl _FUN_8c1f217a\n.set _FUN_8c1f217a, _FUN_8c1f217a_def\n");
//@unit 8c1f21bc
#include "../decls.h"
undefined4 FUN_8c1f21bc_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  if (*(short *)(ar4 + 0x4c) == 0) {
    *(undefined4 *)(ar4 + 4) = ar5;
    *(undefined4 *)(ar4 + 8) = ar6;
    *(int *)(ar4 + 0xc) = ar7;
    *(int *)(ar4 + 0x10) = ar7 + 0x7ff >> 0xb;
    *(undefined4 *)(ar4 + 0x14) = 0;
    *(undefined4 *)(ar4 + 0x18) = 0;
    *(undefined4 *)(ar4 + 0x1c) = 0;
    *(undefined4 *)(ar4 + 0x20) = 0;
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x2c) = 0;
    *(undefined4 *)(ar4 + 0x34) = 0;
    *(undefined4 *)(ar4 + 0x3c) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x44) = 0;
    *(undefined2 *)(ar4 + 0x48) = 0;
    *(undefined2 *)(ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x4c) = 1;
    *(undefined2 *)(ar4 + 0x4e) = DAT_8c26c524;
    *(undefined2 *)(ar4 + 0x50) = 0;
    *(undefined2 *)(ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f21bc\n.set _FUN_8c1f21bc, _FUN_8c1f21bc_def\n");
//@unit 8c1f222c
#include "../decls.h"
undefined4 FUN_8c1f222c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  undefined4 ar6_00;
  int *piVar2;
  int ar4_00;
  int iVar3;
  
  ar6_00 = 0;
  if (ar5 == 0) {
    ar5 = DAT_8c2739e0[4];
  }
  ar5_00 = FUN_8c1f2cce(ar4,ar5,0,ar7);
  if (ar5_00 == 0) {
    FUN_8c1f175c(0xfffffff8,0,ar6_00,ar7);
  }
  else {
    iVar3 = (ar5_00 + -1) * 0x2c;
    ar4_00 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        piVar2 = (int *)(ar5 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(ar4_00,ar5_00,iVar1,iVar3);
        FUN_8c1f175c(0,ar5_00,iVar1,iVar3);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5_00,DAT_8c2739e0,iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f222c\n.set _FUN_8c1f222c, _FUN_8c1f222c_def\n");
//@unit 8c1f2236
#include "../decls.h"
undefined4 FUN_8c1f2236_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  undefined4 a6;
  int unaff_r13;
  int *piVar2;
  int a4;
  char in_T;
  int iVar3;
  
  a6 = 0;
  if (in_T != '\0') {
    unaff_r13 = DAT_8c2739e0[4];
  }
  a5 = FUN_8c1f2cce(ar4,unaff_r13,0,ar7);
  if (a5 == 0) {
    FUN_8c1f175c(0xfffffff8,0,a6,ar7);
  }
  else {
    iVar3 = (a5 + -1) * 0x2c;
    a4 = DAT_8c2739e0[6];
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        piVar2 = (int *)(unaff_r13 + 0x10 + iVar3);
        iVar3 = piVar2[1];
        iVar1 = *piVar2 + 0x96;
        FUN_8c1f21bc(a4,a5,iVar1,iVar3);
        FUN_8c1f175c(0,a5,iVar1,iVar3);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,a5,DAT_8c2739e0,iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2236\n.set _FUN_8c1f2236, _FUN_8c1f2236_def\n");
//@unit 8c1f22a8
#include "../decls.h"
undefined4 FUN_8c1f22a8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int ar7_00;
  int ar4_00;
  
  if (ar4 < 0xb05e) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    ar4_00 = DAT_8c2739e0[6];
    ar7_00 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(ar4_00 + 0x4c) == 0) {
        ar5_00 = 0;
        FUN_8c1f21bc(ar4_00,0,ar4,ar7_00);
        FUN_8c1f175c(0,ar5_00,ar4,ar7_00);
        return ar4_00;
      }
      ar4_00 = ar4_00 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f22a8\n.set _FUN_8c1f22a8, _FUN_8c1f22a8_def\n");
//@unit 8c1f22b2
#include "../decls.h"
undefined4 FUN_8c1f22b2_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int iVar1;
  undefined4 a5;
  int a7;
  int unaff_r13;
  int a4;
  
  if (unaff_r13 < in_r3) {
    FUN_8c1f175c(0xffffffe0,ar5,ar6,ar7);
  }
  else {
    a4 = DAT_8c2739e0[6];
    a7 = ar5 << 0xb;
    for (iVar1 = 0; iVar1 < *DAT_8c2739e0; iVar1 = iVar1 + 1) {
      if (*(short *)(a4 + 0x4c) == 0) {
        a5 = 0;
        FUN_8c1f21bc(a4,0,unaff_r13,a7);
        FUN_8c1f175c(0,a5,unaff_r13,a7);
        return a4;
      }
      a4 = a4 + 0x54;
    }
    FUN_8c1f175c(0xfffffff7,ar5,DAT_8c2739e0,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f22b2\n.set _FUN_8c1f22b2, _FUN_8c1f22b2_def\n");
//@unit 8c1f231a
#include "../decls.h"
undefined4 FUN_8c1f231a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))();
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f231a\n.set _FUN_8c1f231a, _FUN_8c1f231a_def\n");
//@unit 8c1f231e
#include "../decls.h"
undefined4 FUN_8c1f231e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  undefined4 uVar1;
  int *in_r2;
  
  uVar1 = (**(code **)(ain0 + *(int *)(*in_r2 + 0xc)))(ar4,ar5,ar6,ar7);
  if (*(int *)(DAT_8c2739e0 + 0x1c) != 0) {
    uVar1 = FUN_8c1f1766(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f231e\n.set _FUN_8c1f231e, _FUN_8c1f231e_def\n");
//@unit 8c1f2356
#include "../decls.h"
undefined4 FUN_8c1f2356_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar4_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 a7;
  
  a7 = 0;
  uVar2 = 0;
  ar4_00 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (ar4_00 != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x38))(ar4,ar5,uVar2,a7);
    if (iVar1 == 0) {
      uVar2 = 0xfffffff3;
    }
    else {
      ar4_00[0xf] = iVar1;
      *(undefined2 *)(ar4_00 + 0x14) = 4;
      *(int **)(*ar4_00 + 0x1c) = ar4_00;
      uVar2 = FUN_8c1f2f98(ar4_00,ar5,uVar2,a7);
    }
    return uVar2;
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2356\n.set _FUN_8c1f2356, _FUN_8c1f2356_def\n");
//@unit 8c1f23e0
#include "../decls.h"
undefined4 FUN_8c1f23e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 auStack_c [3];
  
  iVar1 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x20))(auStack_c,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return auStack_c[0];
}

__asm__(".globl _FUN_8c1f23e0\n.set _FUN_8c1f23e0, _FUN_8c1f23e0_def\n");
//@unit 8c1f2418
#include "../decls.h"
undefined4 FUN_8c1f2418_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6;
  undefined4 a7;
  
  a7 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 != (int *)0x0) {
    a5 = 0xe;
    a6 = DAT_8c2739e0 + 0x40;
    a4 = 1;
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x3c))(1,0xe,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      *(undefined2 *)(piVar1 + 0x12) = 10;
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2418\n.set _FUN_8c1f2418, _FUN_8c1f2418_def\n");
//@unit 8c1f24e8
#include "../decls.h"
undefined4 FUN_8c1f24e8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int a4;
  int a5;
  undefined4 a6;
  undefined4 a7;
  
  if (*_DAT_8c470f90 == 1) {
    ar5 = ar5 + _DAT_8c470f90[1] + -4;
    ar4 = ar4 + _DAT_8c470f90[1] + -4;
  }
  if (2 < ar4) {
    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
    if (piVar1 != (int *)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x28))(ar4,ar5,ar6,a7);
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(piVar1 + 0x14) = 4;
        if (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001) {
          *(undefined2 *)(piVar1 + 0x12) = 6;
        }
        else {
          a4 = 1;
          *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 1;
          _DAT_8c470fa0 = 1;
          _DAT_8c470fa4 = ar4;
          _DAT_8c470fa8 = ar5;
          _DAT_8c470fac = ar6;
          piVar1[1] = (int)&DAT_8c470fb0;
          *(undefined2 *)(piVar1 + 0x12) = 8;
        }
        *(int **)(*piVar1 + 0x1c) = piVar1;
        (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f24e8\n.set _FUN_8c1f24e8, _FUN_8c1f24e8_def\n");
//@unit 8c1f25f4
#include "../decls.h"
undefined4 FUN_8c1f25f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int a4;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  if (0xb05d < ar4) {
    a7 = 0;
    piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
    if (piVar1 != (int *)0x0) {
      a4 = ar4;
      a5 = ar5;
      a6 = ar6;
      iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c))(ar4,ar5,ar6,a7);
      if (iVar2 != 0) {
        piVar1[0xf] = iVar2;
        *(undefined2 *)(piVar1 + 0x14) = 4;
        if (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001) {
          *(undefined2 *)(piVar1 + 0x12) = 6;
        }
        else {
          *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 1;
          _DAT_8c470fa0 = 2;
          _DAT_8c470fa4 = ar4;
          _DAT_8c470fa8 = ar5;
          _DAT_8c470fac = ar6;
          piVar1[1] = (int)&DAT_8c470fb0;
          *(undefined2 *)(piVar1 + 0x12) = 8;
        }
        *(int **)(*piVar1 + 0x1c) = piVar1;
        (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      }
      if (iVar2 != 0) {
        return 0;
      }
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f25f4\n.set _FUN_8c1f25f4, _FUN_8c1f25f4_def\n");
//@unit 8c1f26ec
#include "../decls.h"
undefined4 FUN_8c1f26ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  ar4_00 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar1 = (int *)FUN_8c1f302a(ar4_00,0,0,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x30))(ar4_00,a5,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
        *(undefined2 *)(piVar1 + 0x12) = 6;
      }
      else {
        piVar1[1] = (int)&DAT_8c470fb4;
        *(undefined2 *)(piVar1 + 0x12) = 8;
      }
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4_00,a5,a6,a7);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f26ec\n.set _FUN_8c1f26ec, _FUN_8c1f26ec_def\n");
//@unit 8c1f2796
#include "../decls.h"
undefined4 FUN_8c1f2796_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 ar4_00;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  ar4_00 = *(undefined4 *)(DAT_8c2739e0 + 0x14);
  piVar1 = (int *)FUN_8c1f302a(ar4_00,0,0,0);
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x30))(ar4_00,a5,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
        *(undefined2 *)(piVar1 + 0x12) = 6;
      }
      else {
        piVar1[1] = (int)&DAT_8c470fb4;
        *(undefined2 *)(piVar1 + 0x12) = 8;
      }
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4_00,a5,a6,a7);
    }
    if (iVar2 != 0) {
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2796\n.set _FUN_8c1f2796, _FUN_8c1f2796_def\n");
//@unit 8c1f2852
#include "../decls.h"
undefined4 FUN_8c1f2852_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a5;
  undefined4 a6;
  undefined4 a7;
  code *pcVar3;
  
  a7 = 0;
  a6 = 0;
  a5 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 == (int *)0x0) {
    return 0xfffffff3;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) != 0) && (_DAT_8c470fb0 != _DAT_8c470fb4)) {
    *(undefined2 *)(DAT_8c2739e0 + 0x3a) = 0;
  }
  if ((*(short *)(DAT_8c2739e0 + 0x3a) == 0) || (*(int *)(DAT_8c2739e0 + 0x2c) < 0x10001)) {
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x34))(ar4,a5,a6,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    *(undefined2 *)(piVar1 + 0x12) = 6;
  }
  else {
    if (_DAT_8c470fa0 == 1) {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x28);
    }
    else {
      pcVar3 = *(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x2c);
    }
    ar4 = _DAT_8c470fa4;
    a5 = _DAT_8c470fa8;
    a6 = _DAT_8c470fac;
    iVar2 = (*pcVar3)(_DAT_8c470fa4,_DAT_8c470fa8,_DAT_8c470fac,a7);
    if (iVar2 == 0) goto LAB_8c1f2948;
    piVar1[0xf] = iVar2;
    *(undefined2 *)(piVar1 + 0x14) = 4;
    piVar1[1] = (int)&DAT_8c470fb0;
    *(undefined2 *)(piVar1 + 0x12) = 8;
  }
  *(int **)(*piVar1 + 0x1c) = piVar1;
  (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(ar4,a5,a6,a7);
LAB_8c1f2948:
  if (iVar2 == 0) {
    return 0xfffffff3;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2852\n.set _FUN_8c1f2852, _FUN_8c1f2852_def\n");
//@unit 8c1f2972
#include "../decls.h"
undefined4 FUN_8c1f2972_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 a4;
  undefined4 a5;
  int a6;
  undefined4 a7;
  
  a7 = 0;
  piVar1 = (int *)FUN_8c1f302a(*(undefined4 *)(DAT_8c2739e0 + 0x14),0,0,0);
  if (piVar1 != (int *)0x0) {
    a5 = 100;
    a6 = DAT_8c2739e0 + 0x40;
    a4 = 0;
    iVar2 = (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x3c))(0,100,a6,a7);
    if (iVar2 != 0) {
      piVar1[0xf] = iVar2;
      *(undefined2 *)(piVar1 + 0x14) = 4;
      *(undefined2 *)(piVar1 + 0x12) = 7;
      piVar1[2] = ar4;
      *(int **)(*piVar1 + 0x1c) = piVar1;
      (**(code **)(*(int *)(DAT_8c2739e0 + 0xc) + 0x40))(a4,a5,a6,a7);
      return 0;
    }
  }
  return 0xfffffff3;
}

__asm__(".globl _FUN_8c1f2972\n.set _FUN_8c1f2972, _FUN_8c1f2972_def\n");
//@unit 8c1f2a0a
#include "../decls.h"
undefined4 FUN_8c1f2a0a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r3;
  
  if (*(int *)(*in_r3 + 0x34) != 1) {
    iVar1 = FUN_8c1f23e0(ar4,ar5,ar6,ar7);
    if (iVar1 != 6) {
      if (iVar1 == 0) {
        FUN_8c1f2418(0,ar5,ar6,ar7);
      }
      return 0;
    }
    *(undefined4 *)(DAT_8c2739e0 + 0x34) = 1;
  }
  return 1;
}

__asm__(".globl _FUN_8c1f2a0a\n.set _FUN_8c1f2a0a, _FUN_8c1f2a0a_def\n");
//@unit 8c1f2a48
#include "../decls.h"
int FUN_8c1f2a48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (('`' < (char)ar4) && ((char)ar4 < '{')) {
    ar4 = ar4 + -0x20;
  }
  return ar4;
}

__asm__(".globl _FUN_8c1f2a48\n.set _FUN_8c1f2a48, _FUN_8c1f2a48_def\n");
//@unit 8c1f2a5c
#include "../decls.h"
undefined4 FUN_8c1f2a5c_def(undefined1 *ar4,undefined1 *ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  
  for (; 0 < ar6; ar6 = ar6 + -1) {
    uVar1 = *ar4;
    ar4 = ar4 + 1;
    *ar5 = uVar1;
    ar5 = ar5 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f2a5c\n.set _FUN_8c1f2a5c, _FUN_8c1f2a5c_def\n");
//@unit 8c1f2a74
#include "../decls.h"
undefined4 FUN_8c1f2a74_def(char *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *ar5_00;
  int ar6_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  while( true ) {
    if (ar6 < 1) {
      return 1;
    }
    if (*ar4 == '\0') break;
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5_00,ar6_00,ar7);
    if ((char)uVar2 != (char)uVar3) {
      return 0;
    }
    ar6 = ar6 + -1;
  }
  if (*ar5 == '\0') {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2a74\n.set _FUN_8c1f2a74, _FUN_8c1f2a74_def\n");
//@unit 8c1f2a80
#include "../decls.h"
undefined4 FUN_8c1f2a80_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *unaff_r13;
  int unaff_r14;
  char in_T;
  
  pcVar4 = ar5;
  if (in_T != '\0') {
    do {
      if (*unaff_r13 == '\0') {
        if (*pcVar4 == '\0') {
          return 1;
        }
        return 0;
      }
      cVar1 = *unaff_r13;
      unaff_r13 = unaff_r13 + 1;
      uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
      if ((char)uVar2 != (char)uVar3) {
        return 0;
      }
      unaff_r14 = unaff_r14 + -1;
    } while (0 < unaff_r14);
  }
  return 1;
}

__asm__(".globl _FUN_8c1f2a80\n.set _FUN_8c1f2a80, _FUN_8c1f2a80_def\n");
//@unit 8c1f2acc
#include "../decls.h"
undefined4 FUN_8c1f2acc_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  
  do {
    if (*ar4 == '\0') {
      if (*ar5 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    cVar2 = *ar4;
    ar4 = ar4 + 1;
  } while (cVar2 == cVar1);
  return 0;
}

__asm__(".globl _FUN_8c1f2acc\n.set _FUN_8c1f2acc, _FUN_8c1f2acc_def\n");
//@unit 8c1f2ae2
#include "../decls.h"
undefined4 FUN_8c1f2ae2_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = ar5;
  do {
    if (*ar4 == '\0') {
      if (*pcVar4 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
  } while ((char)uVar2 == (char)uVar3);
  return 0;
}

__asm__(".globl _FUN_8c1f2ae2\n.set _FUN_8c1f2ae2, _FUN_8c1f2ae2_def\n");
//@unit 8c1f2ae6
#include "../decls.h"
undefined4 FUN_8c1f2ae6_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *unaff_r14;
  
  pcVar4 = ar5;
  do {
    if (*unaff_r14 == '\0') {
      if (*pcVar4 != '\0') {
        return 0;
      }
      return 1;
    }
    cVar1 = *unaff_r14;
    unaff_r14 = unaff_r14 + 1;
    uVar2 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    uVar3 = FUN_8c1f2a48((int)cVar1,ar5,ar6,ar7);
  } while ((char)uVar2 == (char)uVar3);
  return 0;
}

__asm__(".globl _FUN_8c1f2ae6\n.set _FUN_8c1f2ae6, _FUN_8c1f2ae6_def\n");
//@unit 8c1f2b1c
#include "../decls.h"
int FUN_8c1f2b1c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    pcVar1 = ar5;
    if (*ar4 == '\0') {
      return iVar2;
    }
    for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
      if (*ar4 == *pcVar1) {
        return iVar2;
      }
    }
    iVar2 = iVar2 + 1;
    ar4 = ar4 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1f2b1c\n.set _FUN_8c1f2b1c, _FUN_8c1f2b1c_def\n");
//@unit 8c1f2b42
#include "../decls.h"
uint FUN_8c1f2b42_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)0xda;
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    uVar1 = FUN_8c1f2a48((int)*ar4,ar5,ar6,ar7);
    uVar2 = uVar2 + (uVar1 & 0xff);
  }
  return uVar2 >> 2 & 0xff;
}

__asm__(".globl _FUN_8c1f2b42\n.set _FUN_8c1f2b42, _FUN_8c1f2b42_def\n");
//@unit 8c1f2b68
#include "../decls.h"
uint FUN_8c1f2b68_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int ar5_00;
  uint ar6_00;
  
  if (*ar4 < 0x22) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(ar4 + 2,ar5,4,ar7);
    FUN_8c1f2a5c(ar4 + 10,ar5 + 4,4,ar7);
    *(byte *)(ar5 + 8) = ar4[0x19];
    uVar1 = (uint)ar4[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    ar6_00 = uVar1;
    FUN_8c1f2a5c(ar4 + 0x21,ar5_00,uVar1,ar7);
    *(undefined1 *)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(ar5 + 10) == '\0') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(ar5 + 10) == '\x01') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
        *(undefined1 *)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,ar6_00,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*ar4;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f2b68\n.set _FUN_8c1f2b68, _FUN_8c1f2b68_def\n");
//@unit 8c1f2b70
#include "../decls.h"
uint FUN_8c1f2b70_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int in_r2;
  int ar5_00;
  uint a6;
  byte *unaff_r13;
  undefined4 in_PR;
  
  if ((int)(uint)*unaff_r13 < in_r2) {
    uVar1 = 0;
  }
  else {
    FUN_8c1f2a5c(unaff_r13 + 2,ar5,4,ar7,in_PR);
    FUN_8c1f2a5c(unaff_r13 + 10,ar5 + 4,4,ar7,in_PR);
    *(byte *)(ar5 + 8) = unaff_r13[0x19];
    uVar1 = (uint)unaff_r13[0x20];
    if ((*(byte *)(ar5 + 8) & 2) == 0) {
      uVar1 = uVar1 - 2;
    }
    ar5_00 = ar5 + 10;
    a6 = uVar1;
    FUN_8c1f2a5c(unaff_r13 + 0x21,ar5_00,uVar1,ar7,in_PR);
    *(undefined1 *)(uVar1 + ar5 + 10) = 0;
    if ((*(byte *)(ar5 + 8) & 2) != 0) {
      ar5_00 = 0x2e;
      if (*(char *)(ar5 + 10) == '\0') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
      }
      else if (*(char *)(ar5 + 10) == '\x01') {
        *(undefined1 *)(ar5 + 10) = 0x2e;
        *(undefined1 *)(ar5 + 0xb) = 0x2e;
        *(undefined1 *)(ar5 + 0xc) = 0;
      }
    }
    uVar2 = FUN_8c1f2b42(ar5 + 10,ar5_00,a6,ar7);
    *(char *)(ar5 + 9) = (char)uVar2;
    uVar1 = (uint)*unaff_r13;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f2b70\n.set _FUN_8c1f2b70, _FUN_8c1f2b70_def\n");
//@unit 8c1f2bfe
#include "../decls.h"
undefined4 FUN_8c1f2bfe_def(char *ar4,int ar5,int *ar6,int ar7)

{
  int iVar1;
  char *a6;
  int iVar2;
  int iVar3;
  int iVar4;
  int *a5;
  char *unaff_r13;
  int iVar5;
  int iStack_2c;
  
  a5 = ar6 + 4;
  if (ar6[2] != ar5) {
    iVar5 = 0;
    iVar2 = (int)0x800;
    ar6[2] = ar5;
    iVar3 = ar6[1];
    iStack_2c = ar5;
    for (iVar4 = ar7; 0 < iVar4; iVar4 = iVar4 - iVar2) {
      a6 = ar4;
      iVar1 = FUN_8c1f19ec(iStack_2c,1,ar4,ar7);
      if (iVar1 != 0) {
        ar6[2] = 0;
        return iVar1;
      }
      unaff_r13 = ar4;
      if (iVar3 <= iVar5) break;
      while (iVar1 = FUN_8c1f2b68(unaff_r13,a5,a6,ar7), iVar1 != 0) {
        if ((iVar5 == 0) && (a5[1] != iVar4)) {
          iVar4 = a5[1];
        }
        unaff_r13 = unaff_r13 + iVar1;
        a5 = a5 + 0xb;
        iVar5 = iVar5 + 1;
        if ((ar4 + iVar2 <= unaff_r13) || (iVar3 <= iVar5)) break;
      }
      if (iVar3 <= iVar5) break;
      iStack_2c = iStack_2c + 1;
    }
    *ar6 = iVar5;
    if (((iVar5 == iVar3) && (iVar4 != 0)) &&
       ((iVar4 != iVar2 || ((unaff_r13 < ar4 + iVar2 && (*unaff_r13 != '\0')))))) {
      ar6[2] = 0;
      return 0xfffffff4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2bfe\n.set _FUN_8c1f2bfe, _FUN_8c1f2bfe_def\n");
//@unit 8c1f2cce
#include "../decls.h"
undefined4 FUN_8c1f2cce_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int a6;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar5 = ar5 + 4;
  iVar3 = *ar5;
  a6 = ar6;
  uVar1 = FUN_8c1f2b42(ar4,ar5,ar6,ar7);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if ((uint)*(byte *)((int)piVar5 + 9) == (uVar1 & 0xff)) {
        if (ar6 == 1) {
          iVar2 = func_0x8c1f2ac0(ar4,(int)piVar5 + 10,a6,ar7);
        }
        else {
          iVar2 = FUN_8c1f2ae2(ar4,(int)piVar5 + 10,a6,ar7);
        }
        if (iVar2 == 1) {
          return iVar4 + 1;
        }
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0xb;
    } while (iVar4 < iVar3);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f2cce\n.set _FUN_8c1f2cce, _FUN_8c1f2cce_def\n");
//@unit 8c1f2d3e
#include "../decls.h"
undefined4 FUN_8c1f2d3e_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  ushort *ar5_00;
  int iVar2;
  uint a6;
  uint a6_00;
  uint uVar3;
  ushort *a5;
  byte *ar5_01;
  byte *ar4_00;
  byte *ain0;
  ushort auStack_34 [2];
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  
  ar4_00 = (byte *)(ar4 + 0x800);
  a6_00 = 0;
  a5 = (ushort *)(ar7 + 1);
  uStack_24 = 1;
  uVar3 = 1;
  iStack_2c = 0;
  ain0 = ar4_00;
  iStack_30 = ar5;
  iStack_28 = ar6;
  do {
    if ((ain0 <= ar4_00) || (ar5_01 = ar4_00, ain0 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar2 = (ar4 - (int)ar4_00) + 0x800;
      ar5_01 = (byte *)(ar4 - iVar2);
      FUN_8c1f2a5c(ar4_00,ar5_01,iVar2,ar7,ain0);
      iVar2 = FUN_8c1f19ec(iStack_30,1,ar4,ar7);
      if (iVar2 != 0) {
        return 0;
      }
      iStack_30 = iStack_30 + 1;
    }
    ar5_00 = auStack_34;
    a6 = 2;
    FUN_8c1f2a5c(ar5_01 + 6,ar5_00,2,ar7,ain0);
    if ((auStack_34[0] == uStack_24) &&
       ((uVar3 == 1 ||
        ((*ar5_01 == a6_00 &&
         (ar5_00 = a5, a6 = a6_00, iVar2 = FUN_8c1f2a74(ar5_01 + 8,a5,a6_00,ar7), iVar2 != 0)))))) {
      a5 = (ushort *)((int)a5 + a6_00);
      uStack_24 = uVar3;
      if ((char)*a5 == '\0') {
        uVar1 = FUN_8c1f1714(ar5_01 + 2,ar5_00,a6,ar7);
        return uVar1;
      }
      if (uVar3 != 1) {
        a5 = (ushort *)((int)a5 + 1);
      }
      a6_00 = FUN_8c1f2b1c(a5,&DAT_8c26c560,a6,ar7);
    }
    uVar3 = uVar3 + 1;
    iVar2 = (*ar5_01 & 1) + (uint)*ar5_01 + 8;
    iStack_2c = iStack_2c + iVar2;
    ar4_00 = ar5_01 + iVar2;
  } while (iStack_2c < iStack_28);
  return 0;
}

__asm__(".globl _FUN_8c1f2d3e\n.set _FUN_8c1f2d3e, _FUN_8c1f2d3e_def\n");
//@unit 8c1f2e3e
#include "../decls.h"
undefined4 FUN_8c1f2e3e_def(int ar4,int ar5,int ar6,int ar7,char *s0)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *a5;
  int iVar6;
  uint a6;
  uint uVar7;
  byte *ar5_00;
  byte *pbVar8;
  byte *ar4_00;
  uint uStack_44;
  ushort auStack_3c [2];
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  uint uStack_2c;
  int iStack_28;
  uint uStack_24;
  
  bVar2 = true;
  uStack_44 = 0;
  pcVar5 = s0;
  while (cVar1 = *pcVar5, pcVar5 = pcVar5 + 1, cVar1 != '\0') {
    uStack_44 = uStack_44 + 1;
  }
  pcVar5 = (char *)(ar7 + 1);
  uVar7 = 1;
  uStack_24 = 1;
  iStack_34 = 0;
  pbVar8 = (byte *)(ar4 + 0x800);
  uStack_30 = 0;
  ar4_00 = pbVar8;
  iStack_38 = ar5;
  iStack_28 = ar6;
  do {
    if ((pbVar8 <= ar4_00) ||
       (ar5_00 = ar4_00, pbVar8 <= ar4_00 + (uint)*ar4_00 + (*ar4_00 & 1) + 8)) {
      iVar6 = (ar4 - (int)ar4_00) + 0x800;
      ar5_00 = (byte *)(ar4 - iVar6);
      FUN_8c1f2a5c(ar4_00,ar5_00,iVar6,ar7,ar4);
      iVar6 = FUN_8c1f19ec(iStack_38,1,ar4,ar7);
      if (iVar6 != 0) {
        return 0;
      }
      iStack_38 = iStack_38 + 1;
    }
    FUN_8c1f2a5c(ar5_00 + 6,auStack_3c,2,ar7,ar4);
    uVar3 = uStack_24;
    if ((auStack_3c[0] == uStack_24) && (uVar3 = uVar7, uVar7 != 1)) {
      if (bVar2) {
        uStack_2c = uStack_44;
        a5 = s0;
      }
      else {
        uStack_2c = uStack_30;
        a5 = pcVar5;
      }
      uVar3 = uStack_24;
      if ((*ar5_00 == uStack_2c) &&
         (a6 = uStack_2c, iVar6 = FUN_8c1f2a74(ar5_00 + 8,a5,uStack_2c,ar7), uVar3 = uStack_24,
         iVar6 != 0)) {
        if (!bVar2) {
          pcVar5 = pcVar5 + uStack_30;
        }
        if (*pcVar5 == '\0') {
          uVar4 = FUN_8c1f1714(ar5_00 + 2,a5,a6,ar7);
          return uVar4;
        }
        if (bVar2) {
          bVar2 = false;
        }
        else if (uVar7 != 1) {
          pcVar5 = pcVar5 + 1;
        }
        uStack_30 = FUN_8c1f2b1c(pcVar5,&DAT_8c26c560,a6,ar7);
        uVar3 = uVar7;
      }
    }
    uStack_24 = uVar3;
    uVar7 = uVar7 + 1;
    iVar6 = (*ar5_00 & 1) + (uint)*ar5_00 + 8;
    iStack_34 = iStack_34 + iVar6;
    ar4_00 = ar5_00 + iVar6;
    if (iStack_28 <= iStack_34) {
      return 0;
    }
  } while( true );
}

__asm__(".globl _FUN_8c1f2e3e\n.set _FUN_8c1f2e3e, _FUN_8c1f2e3e_def\n");
//@unit 8c1f2f98
#include "../decls.h"
undefined4 FUN_8c1f2f98_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  
  puVar1 = (&sh4_tmu_1f88e6);
  pcVar8 = FUN_8c1f302a;
  iVar7 = ar4[6];
  uVar4 = sh4_tmu_1f88e6(FUN_8c1f302a);
  uVar3 = 0xee6b28;
  puVar2 = (&FUN_8c1f88f0);
  do {
    (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
    iVar5 = FUN_8c1f364c(ar4,ar5,ar6,ar7);
    if (iVar5 == 0) {
      return 0xffffffe0;
    }
    if (iVar5 == 1) {
      return 0;
    }
    if (((iVar5 != 2) && (iVar5 != 3)) && (iVar5 != 4)) {
      if ((iVar5 != 5) && (iVar5 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)ar4 + 0x52);
    }
    if (iVar7 != ar4[6]) {
      uVar4 = (*(code *)puVar1)(iVar5,pcVar8);
      iVar7 = ar4[6];
    }
    ar5 = (*(code *)puVar1)();
    uVar6 = (*(code *)puVar2)(uVar4);
  } while (uVar6 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f98\n.set _FUN_8c1f2f98, _FUN_8c1f2f98_def\n");
//@unit 8c1f2f9c
#include "../decls.h"
undefined4 FUN_8c1f2f9c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined4 a4;
  int a4_00;
  int iVar4;
  int *unaff_r14;
  
  puVar1 = (&sh4_tmu_1f88e6);
  iVar4 = unaff_r14[6];
  a4 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  uVar3 = 0xee6b28;
  puVar2 = (&FUN_8c1f88f0);
  do {
    (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4,ar5,ar6,ar7);
    a4_00 = FUN_8c1f364c(unaff_r14,ar5,ar6,ar7);
    if (a4_00 == 0) {
      return 0xffffffe0;
    }
    if (a4_00 == 1) {
      return 0;
    }
    if (((a4_00 != 2) && (a4_00 != 3)) && (a4_00 != 4)) {
      if ((a4_00 != 5) && (a4_00 != 0x40)) {
        return 0xffffffe7;
      }
      return (int)*(short *)((int)unaff_r14 + 0x52);
    }
    if (iVar4 != unaff_r14[6]) {
      a4 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
      iVar4 = unaff_r14[6];
    }
    ar5 = (*(code *)puVar1)(a4_00,ar5,ar6,ar7);
    ar4 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (ar4 <= uVar3);
  return 0xffffffeb;
}

__asm__(".globl _FUN_8c1f2f9c\n.set _FUN_8c1f2f9c, _FUN_8c1f2f9c_def\n");
//@unit 8c1f302a
#include "../decls.h"
undefined4 FUN_8c1f302a_def(int *ar4,int ar5,int ar6,int ar7)

{
  int iVar1;
  
  if ((ar4 != (int *)0x0) && (*(int **)(*ar4 + 0x1c) != ar4)) {
    ar4[1] = ar5;
    iVar1 = (int)0x7ff;
    ar4[2] = ar6;
    ar4[3] = ar7;
    ar4[4] = ar7 + iVar1 >> 0xb;
    ar4[5] = 0;
    ar4[6] = 0;
    ar4[7] = 0;
    ar4[8] = 0;
    ar4[0xf] = 0;
    ar4[0x11] = 0;
    *(undefined2 *)(ar4 + 0x12) = 0;
    *(undefined2 *)((int)ar4 + 0x4a) = 0;
    *(undefined2 *)(ar4 + 0x13) = 1;
    *(undefined2 *)(ar4 + 0x14) = 0;
    *(undefined2 *)((int)ar4 + 0x52) = 0;
    return ar4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f302a\n.set _FUN_8c1f302a, _FUN_8c1f302a_def\n");
//@unit 8c1f3078
#include "../decls.h"
undefined4 * FUN_8c1f3078_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = ar5;
  ar4[2] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c1f3078\n.set _FUN_8c1f3078, _FUN_8c1f3078_def\n");
//@unit 8c1f309c
#include "../decls.h"
undefined4 FUN_8c1f309c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  
  if ((ar4 != 0) && (in_r0 = 0x4c, *(short *)(ar4 + 0x4c) != 0)) {
    sVar1 = *(short *)(ar4 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(ar4,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(ar4 + 0x4c) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f309c\n.set _FUN_8c1f309c, _FUN_8c1f309c_def\n");
//@unit 8c1f30a0
#include "../decls.h"
undefined4 FUN_8c1f30a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 in_r0;
  int unaff_r14;
  
  if ((unaff_r14 != 0) && (in_r0 = 0x4c, *(short *)(unaff_r14 + 0x4c) != 0)) {
    sVar1 = *(short *)(unaff_r14 + 0x50);
    if ((sVar1 == 2) || ((sVar1 == 3 || (sVar1 == 4)))) {
      FUN_8c1f367a(unaff_r14,ar5,ar6,ar7);
    }
    in_r0 = 0x4c;
    *(undefined2 *)(unaff_r14 + 0x4c) = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f30a0\n.set _FUN_8c1f30a0, _FUN_8c1f30a0_def\n");
//@unit 8c1f30d4
#include "../decls.h"
undefined4 FUN_8c1f30d4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    *ar5 = *(undefined4 *)(ar4 + 0xc);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f30d4\n.set _FUN_8c1f30d4, _FUN_8c1f30d4_def\n");
//@unit 8c1f30ee
#include "../decls.h"
undefined4 FUN_8c1f30ee_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    *ar5 = *(undefined4 *)(ar4 + 0x10);
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f30ee\n.set _FUN_8c1f30ee, _FUN_8c1f30ee_def\n");
//@unit 8c1f3122
#include "../decls.h"
undefined4 FUN_8c1f3122_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  if ((ar4 == 0) || (*(short *)(ar4 + 0x4c) == 0)) {
    return 0xfffffff6;
  }
  if (ar6 != 0) {
    if (ar6 == 1) {
      ar5 = *(int *)(ar4 + 0x14) + ar5;
    }
    else {
      if (ar6 != 2) {
        return 0xfffffff0;
      }
      ar5 = ar5 + *(int *)(ar4 + 0x10);
    }
  }
  if ((-1 < ar5) && (ar5 <= *(int *)(ar4 + 0x10))) {
    *(int *)(ar4 + 0x14) = ar5;
    return 0;
  }
  return 0xffffffef;
}

__asm__(".globl _FUN_8c1f3122\n.set _FUN_8c1f3122, _FUN_8c1f3122_def\n");
//@unit 8c1f316e
#include "../decls.h"
undefined4 FUN_8c1f316e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return *(undefined4 *)(ar4 + 0x14);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f316e\n.set _FUN_8c1f316e, _FUN_8c1f316e_def\n");
//@unit 8c1f31c6
#include "../decls.h"
int FUN_8c1f31c6_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  uint ar6_00;
  int iVar4;
  int iVar5;
  
  iVar1 = 0xc350;
  iVar2 = 0;
  iVar4 = (int)0x4e20;
  ar5_00 = ar5;
  ar6_00 = ar6;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    if ((ar6 & 0x1f) == 0) {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f332c(ar4,ar5,ar6,ar7);
    }
    else {
      ar5_00 = ar5;
      ar6_00 = ar6;
      iVar2 = FUN_8c1f3254(ar4,ar5,ar6,ar7);
    }
    if (((iVar2 != 0) || (ar5 == 0)) ||
       (iVar3 = iVar1, *(int *)(ar4 + 0x10) <= *(int *)(ar4 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5_00 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(ar4,ar5_00,ar6_00,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f31c6\n.set _FUN_8c1f31c6, _FUN_8c1f31c6_def\n");
//@unit 8c1f31da
#include "../decls.h"
int FUN_8c1f31da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r11;
  int unaff_r12;
  int iVar5;
  int unaff_r14;
  char in_T;
  
  iVar1 = 0xc350;
  iVar2 = 0;
  iVar4 = (int)0x4e20;
  for (iVar5 = 0; iVar5 < iVar4; iVar5 = iVar5 + 1) {
    ar5 = unaff_r12;
    ar6 = unaff_r11;
    if (in_T == '\0') {
      iVar2 = FUN_8c1f3254(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    else {
      iVar2 = FUN_8c1f332c(unaff_r14,unaff_r12,unaff_r11,ar7);
    }
    if (((iVar2 != 0) || (unaff_r12 == 0)) ||
       (iVar3 = iVar1, *(int *)(unaff_r14 + 0x10) <= *(int *)(unaff_r14 + 0x14))) break;
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    }
    ar5 = 0;
  }
  if (iVar5 == iVar4) {
    iVar2 = -0x15;
  }
  else if (-1 < iVar2) {
    iVar2 = FUN_8c1f2f98(unaff_r14,ar5,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f31da\n.set _FUN_8c1f31da, _FUN_8c1f31da_def\n");
//@unit 8c1f3254
#include "../decls.h"
undefined4 FUN_8c1f3254_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 a7;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 != 0) {
        a7 = 0;
        iVar2 = ar5;
        iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 4))(a4,ar5,ar6,0);
        if (iVar1 == 0) {
          *(undefined2 *)(ar4 + 0x14) = 1;
          return 0;
        }
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,a7);
        return ar5;
      }
    }
    ar4[6] = 0;
    *(undefined2 *)(ar4 + 0x14) = 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3254\n.set _FUN_8c1f3254, _FUN_8c1f3254_def\n");
//@unit 8c1f332c
#include "../decls.h"
undefined4 FUN_8c1f332c_def(int *ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a7;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    if ((ar6 & 0x1f) != 0) {
      return 0xfffffff2;
    }
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 == 0) {
        ar4[6] = 0;
        *(undefined2 *)(ar4 + 0x14) = 1;
        return 0;
      }
      a7 = (int)*(short *)((int)ar4 + 0x4e);
      iVar2 = ar5;
      iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 4))(a4,ar5,ar6,a7);
      if (iVar1 != 0) {
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 1;
        ar4[6] = 0;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,a7);
        return ar5;
      }
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
    else {
      ar4[6] = 0;
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f332c\n.set _FUN_8c1f332c, _FUN_8c1f332c_def\n");
//@unit 8c1f3416
#include "../decls.h"
undefined4 FUN_8c1f3416_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a4;
  int iVar2;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    return 0xfffffff6;
  }
  if (*(int *)(*ar4 + 0x1c) == 0) {
    a4 = ar4[5] + ar4[2];
    iVar2 = ar4[2] + ar4[4];
    if (a4 < iVar2) {
      if (iVar2 < ar5 + a4) {
        ar5 = iVar2 - a4;
      }
      if (ar5 == 0) {
        ar4[6] = 0;
        *(undefined2 *)(ar4 + 0x14) = 1;
        return 0;
      }
      iVar2 = ar5;
      iVar1 = (**(code **)(*(int *)(*ar4 + 0xc) + 8))(a4,ar5,ar6,ar7);
      if (iVar1 != 0) {
        *(int **)(*ar4 + 0x1c) = ar4;
        ar4[0xf] = iVar1;
        ar4[7] = ar5;
        *(undefined2 *)(ar4 + 0x14) = 2;
        *(undefined2 *)((int)ar4 + 0x4a) = 1;
        *(undefined2 *)(ar4 + 0x12) = 4;
        ar4[8] = 0;
        ar4[6] = 0;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,iVar2,ar6,ar7);
        return ar5;
      }
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
    else {
      ar4[6] = 0;
      *(undefined2 *)(ar4 + 0x14) = 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3416\n.set _FUN_8c1f3416, _FUN_8c1f3416_def\n");
//@unit 8c1f34f4
#include "../decls.h"
undefined4 FUN_8c1f34f4_def(int *ar4,uint ar5,uint ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint a6;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else if ((ar6 & 0x1f) == 0) {
    if ((ar5 & 0x1f) == 0) {
      if ((short)ar4[0x12] == 4) {
        a6 = ar5;
        iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0xc))(ar4[0xf],ar6,ar5,ar7);
        if (iVar2 == 0) {
          *(undefined2 *)((int)ar4 + 0x4a) = 1;
          ar4[8] = ar5;
          ar4[6] = 0;
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(0,ar6,a6,ar7);
          uVar1 = 0;
        }
        else if (iVar2 == -1) {
          uVar1 = 0xffffffe8;
        }
        else {
          uVar1 = 0xfffffff3;
        }
      }
      else {
        uVar1 = 0xffffffec;
      }
    }
    else {
      uVar1 = 0xfffffff1;
    }
  }
  else {
    uVar1 = 0xfffffff2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f34f4\n.set _FUN_8c1f34f4, _FUN_8c1f34f4_def\n");
//@unit 8c1f35ba
#include "../decls.h"
undefined4 FUN_8c1f35ba_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int a4;
  
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar1 = 0xfffffff6;
  }
  else {
    if (*(int *)(*ar4 + 0x1c) == 0) {
      a4 = ar4[2] + ar4[5];
      iVar2 = (**(code **)(*(int *)(*ar4 + 0xc) + 0x18))(a4,ar5,ar6,ar7);
      if (iVar2 != 0) {
        ar4[0xf] = iVar2;
        *(undefined2 *)(ar4 + 0x14) = 3;
        *(undefined2 *)(ar4 + 0x12) = 2;
        *(int **)(*ar4 + 0x1c) = ar4;
        (**(code **)(*(int *)(*ar4 + 0xc) + 0x40))(a4,ar5,ar6,ar7);
        uVar1 = FUN_8c1f2f98(ar4,ar5,ar6,ar7);
        return uVar1;
      }
    }
    uVar1 = 0xfffffff3;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f35ba\n.set _FUN_8c1f35ba, _FUN_8c1f35ba_def\n");
//@unit 8c1f364c
#include "../decls.h"
undefined4 FUN_8c1f364c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return (int)*(short *)(ar4 + 0x50);
  }
  return 0xfffffff6;
}

__asm__(".globl _FUN_8c1f364c\n.set _FUN_8c1f364c, _FUN_8c1f364c_def\n");
//@unit 8c1f367a
#include "../decls.h"
undefined4 FUN_8c1f367a_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  
  puVar1 = (&sh4_tmu_1f88e6);
  uVar7 = 0;
  if ((ar4 == (int *)0x0) || ((short)ar4[0x13] == 0)) {
    uVar7 = 0xfffffff6;
  }
  else if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
    if (*(int **)(*ar4 + 0x1c) == ar4) {
      uVar3 = sh4_tmu_1f88e6(0);
      while (puVar2 = (&FUN_8c1f88f0), ar4[0x10] != 1) {
        if (((short)ar4[0x14] != 2) && ((short)ar4[0x14] != 4)) goto LAB_8c1f36d4;
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar6 = (*(code *)puVar2)(uVar3,uVar4);
        if (0xee6b28 < uVar6) {
          return 0xffffffeb;
        }
        (**(code **)(*(int *)(*ar4 + 0x3c) + 0x48))();
      }
      uVar3 = (*(code *)puVar1)(uVar7);
      uVar6 = (uint)0x61b;
      do {
        uVar4 = (*(code *)puVar1)(uVar7);
        uVar5 = (*(code *)puVar2)(uVar3,uVar4);
      } while (uVar5 < uVar6);
      uVar7 = 0xfffffff3;
      if (((short)ar4[0x14] == 2) || ((short)ar4[0x14] == 4)) {
        if (*(int **)(*ar4 + 0x1c) == ar4) {
          (**(code **)(*(int *)(*ar4 + 0xc) + 0x14))(ar4[0xf]);
          *(undefined2 *)(ar4 + 0x12) = 3;
          uVar7 = FUN_8c1f2f98(ar4,uVar7,ar6,ar7);
        }
        else {
          uVar7 = 0xfffffff3;
        }
      }
      else {
        *(undefined2 *)(ar4 + 0x14) = 0;
        uVar7 = 0;
      }
    }
    else {
      uVar7 = 0xfffffff3;
    }
  }
  else {
LAB_8c1f36d4:
    *(undefined2 *)(ar4 + 0x14) = 0;
    uVar7 = 0;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c1f367a\n.set _FUN_8c1f367a, _FUN_8c1f367a_def\n");
//@unit 8c1f3682
#include "../decls.h"
undefined4 FUN_8c1f3682_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint ar4_00;
  int a4;
  undefined4 a5;
  uint uVar4;
  int *unaff_r14;
  char in_T;
  
  puVar1 = (&sh4_tmu_1f88e6);
  if ((in_T == '\x01') || ((short)unaff_r14[0x13] == 0)) {
    uVar3 = 0xfffffff6;
  }
  else {
    ar4_00 = (uint)(short)unaff_r14[0x14];
    if ((ar4_00 == 2) || (ar4_00 == 4)) {
      if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
        uVar3 = sh4_tmu_1f88e6(ar4_00,ar5,ar6,ar7);
        while (puVar2 = (&FUN_8c1f88f0), unaff_r14[0x10] != 1) {
          a4 = (int)(short)unaff_r14[0x14];
          if ((a4 != 2) && (a4 != 4)) goto LAB_8c1f36d4;
          a5 = (*(code *)puVar1)(a4,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,a5,ar6,ar7);
          if (0xee6b28 < ar4_00) {
            return 0xffffffeb;
          }
          ar5 = 0xee6b28;
          (**(code **)(*(int *)(*unaff_r14 + 0x3c) + 0x48))(ar4_00,0xee6b28,ar6,ar7);
        }
        uVar3 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
        uVar4 = (uint)0x61b;
        do {
          ar5 = (*(code *)puVar1)(ar4_00,ar5,ar6,ar7);
          ar4_00 = (*(code *)puVar2)(uVar3,ar5,ar6,ar7);
        } while (ar4_00 < uVar4);
        uVar3 = 0xfffffff3;
        if (((short)unaff_r14[0x14] == 2) || ((short)unaff_r14[0x14] == 4)) {
          if (*(int **)(*unaff_r14 + 0x1c) == unaff_r14) {
            (**(code **)(*(int *)(*unaff_r14 + 0xc) + 0x14))(unaff_r14[0xf],0xfffffff3,ar6,ar7);
            *(undefined2 *)(unaff_r14 + 0x12) = 3;
            uVar3 = FUN_8c1f2f98(unaff_r14,uVar3,ar6,ar7);
          }
          else {
            uVar3 = 0xfffffff3;
          }
        }
        else {
          *(undefined2 *)(unaff_r14 + 0x14) = 0;
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffff3;
      }
    }
    else {
LAB_8c1f36d4:
      *(undefined2 *)(unaff_r14 + 0x14) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f3682\n.set _FUN_8c1f3682, _FUN_8c1f3682_def\n");
//@unit 8c1f37a8
#include "../decls.h"
undefined4 FUN_8c1f37a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar4 != 0) && (*(short *)(ar4 + 0x4c) != 0)) {
    return (int)*(short *)(ar4 + 0x52);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f37a8\n.set _FUN_8c1f37a8, _FUN_8c1f37a8_def\n");
//@unit 8c1f38c0
#include "../decls.h"
undefined4 FUN_8c1f38c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  DAT_8c2739f0 = &DAT_8c26c4a4;
  uVar1 = FUN_8c1f1d8c(&DAT_8c26c4a4);
  return uVar1;
}

__asm__(".globl _FUN_8c1f38c0\n.set _FUN_8c1f38c0, _FUN_8c1f38c0_def\n");
//@unit 8c1f38ca
#include "../decls.h"
undefined4 FUN_8c1f38ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_r2;
  undefined4 in_r3;
  undefined4 *unaff_r14;
  
  *unaff_r14 = in_r3;
  uVar1 = (**(code **)(in_r2 + 0xc))(ar4,ar5,ar6,ar7,in_r2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f38ca\n.set _FUN_8c1f38ca, _FUN_8c1f38ca_def\n");
//@unit 8c1f38f2
#include "../decls.h"
undefined4 FUN_8c1f38f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  if (DAT_8c2739f0 != 0) {
    ain0 = (**(code **)(DAT_8c2739f0 + 0x14))();
    DAT_8c2739f0 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f38f2\n.set _FUN_8c1f38f2, _FUN_8c1f38f2_def\n");
//@unit 8c1f38f4
#include "../decls.h"
undefined4 FUN_8c1f38f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *in_r3;
  
  if (*in_r3 != 0) {
    ain0 = (**(code **)(*in_r3 + 0x14))(ar4,ar5,ar6,ar7);
    DAT_8c2739f0 = 0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f38f4\n.set _FUN_8c1f38f4, _FUN_8c1f38f4_def\n");
//@unit 8c1f3926
#include "../decls.h"
undefined4 FUN_8c1f3926_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x20))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3926\n.set _FUN_8c1f3926, _FUN_8c1f3926_def\n");
//@unit 8c1f3952
#include "../decls.h"
undefined4 FUN_8c1f3952_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x28))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3952\n.set _FUN_8c1f3952, _FUN_8c1f3952_def\n");
//@unit 8c1f3968
#include "../decls.h"
undefined4 FUN_8c1f3968_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x2c))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3968\n.set _FUN_8c1f3968, _FUN_8c1f3968_def\n");
//@unit 8c1f397e
#include "../decls.h"
undefined4 FUN_8c1f397e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x3c))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f397e\n.set _FUN_8c1f397e, _FUN_8c1f397e_def\n");
//@unit 8c1f39ac
#include "../decls.h"
undefined4 FUN_8c1f39ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x44))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f39ac\n.set _FUN_8c1f39ac, _FUN_8c1f39ac_def\n");
//@unit 8c1f39f0
#include "../decls.h"
undefined4 FUN_8c1f39f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x48))();
    return uVar1;
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f39f0\n.set _FUN_8c1f39f0, _FUN_8c1f39f0_def\n");
//@unit 8c1f3a34
#include "../decls.h"
undefined4 FUN_8c1f3a34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x54))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3a34\n.set _FUN_8c1f3a34, _FUN_8c1f3a34_def\n");
//@unit 8c1f3a4c
#include "../decls.h"
undefined4 FUN_8c1f3a4c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (DAT_8c2739f0 != 0) {
                    
                    
    uVar1 = (**(code **)(DAT_8c2739f0 + 0x58))();
    return uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3a4c\n.set _FUN_8c1f3a4c, _FUN_8c1f3a4c_def\n");
//@unit 8c1f3b1c
#include "../decls.h"
undefined4 syscall_1f3b1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b0)(0x0);
  return uVar1;
}

__asm__(".globl _syscall_1f3b1c\n.set _syscall_1f3b1c, _syscall_1f3b1c_def\n");
//@unit 8c1f3b44
#include "../decls.h"
undefined4 syscall_1f3b44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b0)(0x3);
  return uVar1;
}

__asm__(".globl _syscall_1f3b44\n.set _syscall_1f3b44, _syscall_1f3b44_def\n");
//@unit 8c1f3b5c
#include "../decls.h"
uint FUN_8c1f3b5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c1efd26((uint)(byte)(&DAT_8c26c69c)[ar4],ar5,ar6,ar7);
  iVar2 = FUN_8c1efd26(ar4,ar5,ar6,ar7);
  if ((((ar4 == 2) || (ar4 == 8)) || (ar4 == 0xe)) || (ar4 == 0x14)) {
    iVar3 = 1;
  }
  else {
    iVar3 = 0;
  }
  return (uint)(byte)(&DAT_8c26c674)
                     [(uint)*(byte *)(iVar1 + 0x12 + iVar3) * 4 + (uint)*(byte *)(iVar2 + 0x12)];
}

__asm__(".globl _FUN_8c1f3b5c\n.set _FUN_8c1f3b5c, _FUN_8c1f3b5c_def\n");
//@unit 8c1f3c78
#include "../decls.h"
undefined4 FUN_8c1f3c78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    FUN_8c1f3d9c((uint)(byte)(&DAT_8c26c684)[ar4] * 0xc0 + -0x73b8f048,ar5,ar6,ar7);
    iVar1 = FUN_8c1efeac(ar4,4,0,0);
    if (iVar1 < 0) {
      uVar2 = 0xffffffff;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f3c78\n.set _FUN_8c1f3c78, _FUN_8c1f3c78_def\n");
//@unit 8c1f3cde
#include "../decls.h"
undefined4 FUN_8c1f3cde_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f3d28(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_8c1efeac(ar4,4,0,0);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3cde\n.set _FUN_8c1f3cde, _FUN_8c1f3cde_def\n");
//@unit 8c1f3d28
#include "../decls.h"
undefined4 FUN_8c1f3d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *ar5_00;
  int iVar1;
  short sStack_10;
  ushort uStack_e;
  short sStack_c;
  char cStack_a;
  char cStack_9;
  
  ar5_00 = (int *)FUN_8c1efd26(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1f0142(&sStack_10,ar5_00,ar6,ar7);
  if ((((-1 < iVar1) && (*ar5_00 == 0xe)) && (sStack_10 == 1)) &&
     ((((uint)uStack_e == (int)0xc0 && (sStack_c == 1)) &&
      ((cStack_a == '\0' && (cStack_9 == '\0')))))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f3d28\n.set _FUN_8c1f3d28, _FUN_8c1f3d28_def\n");
//@unit 8c1f3d9c
#include "../decls.h"
uint FUN_8c1f3d9c_def(undefined1 *ar4,char *ar5,int ar6,undefined4 ar7)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  
  if (ar6 == 1) {
    iVar4 = 0x20;
    pbVar8 = ar4 + 5;
    do {
      iVar12 = 6;
      do {
        pbVar7 = pbVar8;
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          bVar2 = bVar2 << 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *pbVar7 = bVar9;
        iVar12 = iVar12 + -1;
        pbVar8 = pbVar7 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      pbVar8 = pbVar7 + 0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 2) {
    iVar4 = 0x20;
    puVar5 = ar4 + 0xba;
    do {
      iVar12 = 6;
      do {
        puVar6 = puVar5;
        uVar10 = 0;
        uVar3 = (uint)0x80;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            uVar10 = uVar10 | uVar3;
          }
          uVar3 = uVar3 >> 1;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        *puVar6 = (char)uVar10;
        iVar12 = iVar12 + -1;
        puVar5 = puVar6 + 1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
      puVar5 = puVar6 + -0xb;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  if (ar6 == 3) {
    iVar4 = 0x20;
    pbVar8 = ar4 + 0xc0;
    do {
      iVar12 = 6;
      do {
        bVar9 = 0;
        bVar2 = 1;
        iVar11 = 8;
        do {
          cVar1 = *ar5;
          ar5 = ar5 + 1;
          if (((int)cVar1 & 8U) != 0) {
            bVar9 = bVar9 | bVar2;
          }
          iVar11 = iVar11 + -1;
          bVar2 = bVar2 << 1;
        } while (iVar11 != 0);
        pbVar8 = pbVar8 + -1;
        *pbVar8 = bVar9;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    return (int)cVar1;
  }
  iVar4 = (int)0xc0;
  do {
    uVar10 = 0;
    uVar3 = (uint)0x80;
    iVar12 = 8;
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      if (((int)cVar1 & 8U) != 0) {
        uVar10 = uVar10 | uVar3;
      }
      uVar3 = uVar3 >> 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    *ar4 = (char)uVar10;
    iVar4 = iVar4 + -1;
    ar4 = ar4 + 1;
  } while (iVar4 != 0);
  return (int)cVar1;
}

__asm__(".globl _FUN_8c1f3d9c\n.set _FUN_8c1f3d9c, _FUN_8c1f3d9c_def\n");
//@unit 8c1f3dd8
#include "../decls.h"
undefined4 FUN_8c1f3dd8_def(uint ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 *puVar2;
  int *piVar3;
  
  _DAT_8c4727b4 = -0x73b8e948;
  ar6_00 = 0x1f;
  uVar1 = ar4;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar1 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar1;
  uVar1 = ar6;
  if ((_DAT_8c472680 & 0x1f) != 0) {
    uVar1 = _DAT_8c472680 + 0x20 & 0xffffffe0;
  }
  _DAT_8c472680 = uVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = _DAT_8c472680 | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  ar4_00 = &DAT_8c26c728;
  ar5_00 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar3) != '\0') {
      ar4_00 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(ar4_00,ar5_00,ar6_00,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(ar4_00,ar5_00,ar6_00,ar7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3dd8\n.set _FUN_8c1f3dd8, _FUN_8c1f3dd8_def\n");
//@unit 8c1f3de2
#include "../decls.h"
undefined4 FUN_8c1f3de2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int in_r2;
  int in_r3;
  int iVar1;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 *puVar2;
  int *piVar3;
  int *unaff_r14;
  
  *unaff_r14 = in_r3;
  *(undefined4 *)(ain0 + in_r2) = ar4;
  *(undefined4 *)(ain0 + 4 + *unaff_r14) = ar6;
  a6 = 0x1f;
  if ((*(uint *)(ain0 + *unaff_r14) & 0x1f) != 0) {
    *(int *)(*unaff_r14 + 0xfc4) = *(int *)(*unaff_r14 + 0xfc4) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) & 0xffffffe0;
  }
  iVar1 = *unaff_r14;
  if ((*(uint *)(iVar1 + 0xfc8) & 0x1f) != 0) {
    *(int *)(iVar1 + 0xfc8) = *(int *)(iVar1 + 0xfc8) + 0x20;
    *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) & 0xffffffe0;
  }
  *(uint *)(*unaff_r14 + 0xfc4) = *(uint *)(*unaff_r14 + 0xfc4) | 0xa0000000;
  *(uint *)(*unaff_r14 + 0xfc8) = *(uint *)(*unaff_r14 + 0xfc8) | 0xa0000000;
  g2dma_1f4794(0xa0000000,0xffffffe0,0x1f,ar7);
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar2 = &DAT_8c26c728;
  piVar3 = &DAT_8c26c728;
  do {
    if (*(char *)(*unaff_r14 + 0xf90 + *piVar3) != '\0') {
      a4 = (undefined4 *)*puVar2;
      FUN_8c1f55e4(a4,a5,a6,ar7);
    }
    piVar3 = piVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (piVar3 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,ar7);
  *(undefined4 *)(*unaff_r14 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x10) = 0;
  iVar1 = *unaff_r14;
  *(uint *)(*(int *)(iVar1 + 0x10f4) + 0x80) = *(uint *)(iVar1 + 0x10c0) | *(uint *)(iVar1 + 0x10d0)
  ;
  *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3de2\n.set _FUN_8c1f3de2, _FUN_8c1f3de2_def\n");
//@unit 8c1f3ef4
#include "../decls.h"
undefined4 FUN_8c1f3ef4_def(int *ar4,uint *ar5,uint ar6,int ar7)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 *a4;
  undefined4 *a5;
  undefined4 a6;
  undefined4 a7;
  undefined4 *puVar6;
  int *piVar7;
  uint *puStack_28;
  int *piStack_24;
  
  _DAT_8c4727b4 = -0x73b8e948;
  uVar5 = ar6;
  if ((_DAT_8c47267c & 0x1f) != 0) {
    uVar5 = _DAT_8c47267c + 0x20 & 0xffffffe0;
  }
  _DAT_8c47267c = uVar5;
  puVar1 = ar5;
  if (((uint)_DAT_8c472680 & 0x1f) != 0) {
    puVar1 = (uint *)((int)_DAT_8c472680 + 0x20U & 0xffffffe0);
  }
  _DAT_8c472680 = puVar1;
  _DAT_8c47267c = _DAT_8c47267c | 0xa0000000;
  _DAT_8c472680 = (uint *)((uint)_DAT_8c472680 | 0xa0000000);
  g2dma_1f4794(0x8c4716b8,ar5,ar6,ar7);
  uVar5 = 0;
  do {
    *(undefined4 *)(_DAT_8c4727b4 + 0xfe8 + uVar5) = 0;
    iVar3 = _DAT_8c4727b4 + uVar5;
    uVar5 = uVar5 + 4;
    *(undefined4 *)(iVar3 + 0x1048) = 0;
  } while (uVar5 < 0x60);
  iVar3 = 0;
  puStack_28 = ar5;
  piStack_24 = ar4;
  if (0 < ar7) {
    do {
      uVar5 = *puStack_28;
      if ((uVar5 & 0x1f) != 0) {
        uVar5 = uVar5 + 0x20 & 0xffffffe0;
      }
      iVar3 = iVar3 + 1;
      iVar2 = *piStack_24;
      *(uint *)(_DAT_8c4727b4 + 0xfe8 + iVar2 * 4) = uVar5 | 0xa0000000;
      *(uint *)(iVar2 * 4 + _DAT_8c4727b4 + 0x1048) = (uVar5 | 0xa0000000) + 0x400;
      puStack_28 = puStack_28 + 1;
      piStack_24 = piStack_24 + 1;
    } while (iVar3 < ar7);
  }
  iVar3 = 0;
  *(undefined4 *)(_DAT_8c4727b4 + 0x10a8) = *(undefined4 *)(_DAT_8c4727b4 + 0xfc4);
  *(int *)(_DAT_8c4727b4 + 0x10ac) = ar7 * 0x400 + *(int *)(_DAT_8c4727b4 + 0xfc4);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfcc) = *(undefined4 *)(_DAT_8c4727b4 + 0x10a8);
  do {
    puVar4 = (undefined1 *)(_DAT_8c4727b4 + 0xf90 + iVar3);
    iVar3 = iVar3 + 1;
    *puVar4 = 0;
  } while (iVar3 < 0x18);
  a7 = 0x65;
  iVar3 = 0;
  a6 = 0x72;
  if (0 < ar7) {
    do {
      iVar2 = *ar4;
      ar4 = ar4 + 1;
      if ((((iVar2 == 0) || (iVar2 == 6)) || (iVar2 == 0xc)) || (iVar2 == 0x12)) {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x72;
      }
      else {
        *(undefined1 *)(iVar2 + _DAT_8c4727b4 + 0xf90) = 0x65;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < ar7);
  }
  a4 = &DAT_8c26c728;
  a5 = &DAT_8c26c728;
  puVar6 = &DAT_8c26c728;
  piVar7 = &DAT_8c26c728;
  do {
    if (*(char *)(_DAT_8c4727b4 + 0xf90 + *piVar7) != '\0') {
      a4 = (undefined4 *)*puVar6;
      FUN_8c1f55e4(a4,a5,a6,a7);
    }
    piVar7 = piVar7 + 1;
    puVar6 = puVar6 + 1;
  } while (piVar7 < (int *)0x8c26c738);
  FUN_8c1f59c8(a4,a5,a6,a7);
  *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 1;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x8c) = 0x6155404f;
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x10) = 0;
  *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
       *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
  *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f3ef4\n.set _FUN_8c1f3ef4, _FUN_8c1f3ef4_def\n");
//@unit 8c1f4102
#include "../decls.h"
undefined4 FUN_8c1f4102_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = 0x8c4727b4;
  iVar7 = *(undefined4 *)0x8c4727b4;
  iVar6 = iVar7 + 0x28;
  puVar5 = (uint *)(0x44c + iVar7);
  if (0 < *(int *)(0x10e4 + iVar7)) {
    FUN_8c1f4a00(*(undefined4 *)(0x10e4 + iVar7),1);
  }
  puVar2 = (&FUN_8c1f55e4);
  for (iVar7 = 0; iVar7 < 0x18; iVar7 = iVar7 + 1) {
    if ((*(char *)((int)0xf90 + *piVar3 + iVar7) != '\0') && (*(char *)(iVar6 + 6) == '\0'))
    {
      cVar1 = *(char *)(iVar6 + 4);
      if (cVar1 == '\x01') {
        (*(code *)puVar2)(iVar7);
      }
      else if (cVar1 == '\x02') {
        FUN_8c1f56b0(iVar7);
      }
      else if (cVar1 == '\x03') {
        FUN_8c1f566c(iVar7);
      }
      else if (cVar1 == '\x04') {
        FUN_8c1f5628(iVar7);
      }
      else if (cVar1 == '\t') {
        uVar4 = *puVar5;
        if ((uVar4 & 1) != 0) {
          uVar4 = 1;
        }
        FUN_8c1f5582(iVar7,uVar4);
      }
    }
    puVar5 = puVar5 + 0x1e;
    iVar6 = iVar6 + 0x2c;
  }
  FUN_8c1f59c8();
  return 0;
}

__asm__(".globl _FUN_8c1f4102\n.set _FUN_8c1f4102, _FUN_8c1f4102_def\n");
//@unit 8c1f4110
#include "../decls.h"
undefined4 FUN_8c1f4110_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined *puVar2;
  int in_r0;
  int *unaff_r10;
  uint *puVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *unaff_r10;
  iVar4 = iVar5 + 0x28;
  puVar3 = (uint *)(0x44c + iVar5);
  if (0 < *(int *)(in_r0 + iVar5)) {
    ar4 = *(int *)(in_r0 + iVar5);
    FUN_8c1f4a00(ar4,ar5,ar6,ar7);
  }
  puVar2 = (&FUN_8c1f55e4);
  for (iVar5 = 0; iVar5 < 0x18; iVar5 = iVar5 + 1) {
    if ((*(char *)((int)0xf90 + *unaff_r10 + iVar5) != '\0') &&
       (*(char *)(iVar4 + 6) == '\0')) {
      cVar1 = *(char *)(iVar4 + 4);
      if (cVar1 == '\x01') {
        ar4 = iVar5;
        (*(code *)puVar2)(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x02') {
        ar4 = iVar5;
        FUN_8c1f56b0(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x03') {
        ar4 = iVar5;
        FUN_8c1f566c(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\x04') {
        ar4 = iVar5;
        FUN_8c1f5628(iVar5,ar5,ar6,ar7);
      }
      else if (cVar1 == '\t') {
        ar5 = *puVar3;
        if ((ar5 & 1) != 0) {
          ar5 = 1;
        }
        ar4 = iVar5;
        FUN_8c1f5582(iVar5,ar5,ar6,ar7);
      }
    }
    puVar3 = puVar3 + 0x1e;
    iVar4 = iVar4 + 0x2c;
  }
  FUN_8c1f59c8(ar4,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c1f4110\n.set _FUN_8c1f4110, _FUN_8c1f4110_def\n");
//@unit 8c1f4202
#include "../decls.h"
undefined4 FUN_8c1f4202_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  char *pcVar4;
  int iVar5;
  undefined4 in_PR;
  
  if (*(int *)(_DAT_8c4727b4 + 0xfc0) == 1) {
    if ((*(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) & 1) == 0) {
      bVar1 = *(&DATA_8c1f5a2c);
      *(&DATA_8c1f5a2c) = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(_DAT_8c4727b4 + 0xfb0) != *(int *)(_DAT_8c4727b4 + 0xfac)) {
          *(undefined4 *)(_DAT_8c4727b4 + 0xfb0) = *(undefined4 *)(_DAT_8c4727b4 + 0xfac);
          if (*(int *)(_DAT_8c4727b4 + 0xfac) == 0) {
            *(undefined4 *)(_DAT_8c4727b4 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = libgcc_divide_helper_010468(300000,0x14);
            *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 0;
          *(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x80) =
               *(uint *)(_DAT_8c4727b4 + 0x10c0) | *(uint *)(_DAT_8c4727b4 + 0x10d0);
          *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x14) = 1;
        }
        FUN_8c1f4102(ar4,ar5,ar6,ar7);
        *(undefined4 *)(_DAT_8c4727b4 + 0x10b0) =
             *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8);
        iVar3 = *(int *)(_DAT_8c4727b4 + 0x10f4);
        uVar2 = FUN_8c1f59f2(*(undefined4 *)
                              (*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8),ar5,
                             ar6,ar7);
        *(undefined4 *)(iVar3 + 4) = uVar2;
        *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) = 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfd8) = 0;
        *(uint *)(_DAT_8c4727b4 + 0x10b8) = *(uint *)(_DAT_8c4727b4 + 0x10b8) ^ 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfcc) =
             *(undefined4 *)(*(int *)(_DAT_8c4727b4 + 0x10b8) * 4 + _DAT_8c4727b4 + 0x10a8);
        *(uint *)(_DAT_8c4727b4 + 0x10b4) = *(uint *)(_DAT_8c4727b4 + 0x10b4) ^ 1;
        *(undefined4 *)(_DAT_8c4727b4 + 0xfdc) = 0;
        iVar3 = _DAT_8c4727b4 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(_DAT_8c4727b4 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(iVar3 + 6);
            *(undefined1 *)(iVar3 + 6) = 0;
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(_DAT_8c4727b4 + 0xfc0) = 0;
        uVar2 = 0;
        *(&DATA_8c1f5a2c) = 0;
      }
      else {
        FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6b8,in_PR);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f4202\n.set _FUN_8c1f4202, _FUN_8c1f4202_def\n");
//@unit 8c1f420e
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f4210_def
          (undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int extraout_r2;
  char *pcVar4;
  int iVar5;
  uint unaff_r12;
  int *unaff_r14;
  
  if (*(int *)(*unaff_r14 + ain1) == 1) {
    if ((*(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) & unaff_r12) == 0) {
      bVar1 = *(&DATA_8c1f5a2c);
      *(&DATA_8c1f5a2c) = bVar1 | 0x80;
      if (bVar1 == 0) {
        if (*(int *)(*unaff_r14 + 0xfb0) != *(int *)(*unaff_r14 + 0xfac)) {
          *(undefined4 *)(*unaff_r14 + 0xfb0) = *(undefined4 *)(*unaff_r14 + 0xfac);
          if (*(int *)(*unaff_r14 + 0xfac) == 0) {
            *(undefined4 *)(*unaff_r14 + 0x10c0) = 0xc3500000;
          }
          else {
            iVar3 = libgcc_divide_helper_010468(300000,0x14);
            *(int *)(extraout_r2 + 0x10c0) = iVar3 << 0x10;
          }
          *(undefined4 *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = 0;
          iVar3 = *unaff_r14;
          *(uint *)(*(int *)(iVar3 + 0x10f4) + 0x80) =
               *(uint *)(iVar3 + 0x10c0) | *(uint *)(iVar3 + 0x10d0);
          *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x14) = unaff_r12;
        }
        FUN_8c1f4102(ar4,ar5,ar6,ar7);
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0x10b0) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        iVar3 = *unaff_r14;
        iVar5 = *(int *)(iVar3 + 0x10f4);
        uVar2 = FUN_8c1f59f2(*(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8),ar5,ar6,
                             ar7);
        *(undefined4 *)(iVar5 + 4) = uVar2;
        *(uint *)(*(int *)(*unaff_r14 + 0x10f4) + 0x18) = unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfd8) = 0;
        *(uint *)(*unaff_r14 + 0x10b8) = *(uint *)(*unaff_r14 + 0x10b8) ^ unaff_r12;
        iVar3 = *unaff_r14;
        *(undefined4 *)(iVar3 + 0xfcc) =
             *(undefined4 *)(*(int *)(iVar3 + 0x10b8) * 4 + iVar3 + 0x10a8);
        *(uint *)(*unaff_r14 + 0x10b4) = *(uint *)(*unaff_r14 + 0x10b4) ^ unaff_r12;
        *(undefined4 *)(*unaff_r14 + 0xfdc) = 0;
        iVar3 = *unaff_r14 + 0x28;
        iVar5 = 0;
        while (iVar5 < 0x18) {
          pcVar4 = (char *)(*unaff_r14 + 0xf90 + iVar5);
          iVar5 = iVar5 + 1;
          if (*pcVar4 != '\0') {
            *(undefined1 *)(iVar3 + 7) = *(undefined1 *)(iVar3 + 6);
            *(undefined1 *)(iVar3 + 6) = 0;
            *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar3 + 0x18);
            *(undefined4 *)(iVar3 + 0x18) = 0;
          }
          iVar3 = iVar3 + 0x2c;
        }
        *(undefined4 *)(*unaff_r14 + 0xfc0) = 0;
        uVar2 = 0;
        *(&DATA_8c1f5a2c) = 0;
      }
      else {
        FUN_8c1f4570(ar4,ar5,ar6,ar7);
        uVar2 = 0xfffffffe;
      }
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  else {
    uVar2 = 0xfffffffd;
  }
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f4210\n.set _s_FATAL_ERROR_Cannot_get_semap_1f4210, _s_FATAL_ERROR_Cannot_get_semap_1f4210_def\n");
//@unit 8c1f43d2
#include "../decls.h"
undefined4 FUN_8c1f43d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int ar4_00;
  undefined4 in_PR;
  
  ar4_00 = _DAT_8c4727b4;
  if (*(int *)(_DAT_8c4727b4 + 0xfc0) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(_DAT_8c4727b4 + 0x10f4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4_00,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6b8,in_PR);
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f43d2\n.set _FUN_8c1f43d2, _FUN_8c1f43d2_def\n");
//@unit 8c1f43d6
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f43d6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  int in_r0;
  int *in_r3;
  int a4;
  
  a4 = *in_r3;
  if (*(int *)(in_r0 + a4) != 0) {
    return 0xfffffffd;
  }
  if ((*(uint *)(*(int *)(0x10f4 + a4) + 0x18) & 1) != 0) {
    return 0xffffffff;
  }
  bVar1 = **(byte **)(&DATA_8c1f5a28);
  **(byte **)(&DATA_8c1f5a28) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(a4,ar5,ar6,ar7);
    return 0xfffffffe;
  }
  return 0;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f43d6\n.set _s_FATAL_ERROR_Cannot_get_semap_1f43d6, _s_FATAL_ERROR_Cannot_get_semap_1f43d6_def\n");
//@unit 8c1f4414
#include "../decls.h"
undefined4 FUN_8c1f4414_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)((int)0xfc0 + *(undefined4 *)0x8c4727b4) = 1;
  **(undefined1 **)(&DATA_8c1f5a28) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f4414\n.set _FUN_8c1f4414, _FUN_8c1f4414_def\n");
//@unit 8c1f442a
#include "../decls.h"
undefined4 FUN_8c1f442a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = 0; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar1 = 0;
      iVar2 = ar4_01 * 6;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < 6);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f442a\n.set _FUN_8c1f442a, _FUN_8c1f442a_def\n");
//@unit 8c1f443c
#include "../decls.h"
undefined4 FUN_8c1f443c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int unaff_r8;
  int unaff_r9;
  int iVar1;
  int iVar2;
  int ar4_00;
  int ar4_01;
  
  for (ar4_01 = unaff_r8; ar4_01 < 4; ar4_01 = ar4_01 + 1) {
    if (*(char *)((&DAT_8c26c728)[ar4_01] + _DAT_8c4727b4 + 0xf90) != '\0') {
      FUN_8c1f4f82(ar4_01,ar5,ar6,ar7);
      iVar2 = ar4_01 * 6;
      iVar1 = unaff_r8;
      ar4_00 = iVar2;
      do {
        if (*(char *)(_DAT_8c4727b4 + 0xf90 + iVar2) != '\0') {
          ar5 = ar4_01;
          FUN_8c1f5048(ar4_00,ar4_01,ar6,ar7);
        }
        iVar1 = iVar1 + 1;
        ar4_00 = ar4_00 + 1;
        iVar2 = iVar2 + 1;
      } while (iVar1 < unaff_r9);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f443c\n.set _FUN_8c1f443c, _FUN_8c1f443c_def\n");
//@unit 8c1f44cc
#include "../decls.h"
undefined4 FUN_8c1f44cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 a4;
  int iVar6;
  
  puVar1 = (&sh4_tmu_1f88e6);
  uVar4 = sh4_tmu_1f88e6(ar4,ar5,ar6,ar7);
  piVar3 = 0x8c4727b4;
  puVar2 = (&FUN_8c1f88f0);
  iVar5 = 0x186a0;
  do {
    if ((*(uint *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) break;
    ar5 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
    ar4 = uVar4;
    iVar6 = (*(code *)puVar2)(uVar4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  iVar5 = (int)0x10f4;
  uVar4 = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x18) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x14) = 0;
  *(undefined4 *)(*(int *)(iVar5 + *piVar3) + 0x10) = 0;
  *(undefined4 *)((int)0x8c + *(int *)(iVar5 + *piVar3)) = 0x6155404f;
  *(undefined4 *)((int)0x80 + *(int *)((int)0x10f4 + *piVar3)) = 0xc3500000;
  *(undefined4 *)(*(int *)((int)0x10f4 + *piVar3) + 4) = 0xcff0000;
  a4 = (*(code *)puVar1)(0,ar5,ar6,ar7);
  iVar5 = (int)0x4268;
  do {
    if ((*(uint *)(*(int *)((int)0x10f4 + *piVar3) + 0x18) & 1) == 0) {
      return 0;
    }
    ar5 = (*(code *)puVar1)(uVar4,ar5,ar6,ar7);
    uVar4 = a4;
    iVar6 = (*(code *)puVar2)(a4,ar5,ar6,ar7);
  } while (iVar6 <= iVar5);
  return 0;
}

__asm__(".globl _FUN_8c1f44cc\n.set _FUN_8c1f44cc, _FUN_8c1f44cc_def\n");
//@unit 8c1f4570
#include "../decls.h"
undefined4
FUN_8c1f4570_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 uVar1;
  
  uVar1 = 0x10c8;
  if ((*(int *)(_DAT_8c4727b4 + 0x10c8) != 0) &&
     (uVar1 = vsprintf_like(0x8c4715b8,s0,&s4,ar7), DAT_8c2739f8 != (code *)0x0)) {
    uVar1 = (*DAT_8c2739f8)(0x8c4715b8);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f4570\n.set _FUN_8c1f4570, _FUN_8c1f4570_def\n");
//@unit 8c1f4574
#include "../decls.h"
int FUN_8c1f4574_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0,undefined4 s0,
                undefined4 s4)

{
  int *in_r2;
  undefined4 *ar6_00;
  
  if (*(int *)(ain0 + *in_r2) != 0) {
    ar6_00 = &s4;
    ain0 = vsprintf_like(0x8c4715b8,s0,ar6_00,ar7);
    if (DAT_8c2739f8 != (code *)0x0) {
      ain0 = (*DAT_8c2739f8)(0x8c4715b8,s0,ar6_00,ar7);
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c1f4574\n.set _FUN_8c1f4574, _FUN_8c1f4574_def\n");
//@unit 8c1f45b8
#include "../decls.h"
int FUN_8c1f45b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)0x8c4727b4 + 0x28 + ar4 * 0x2c;
}

__asm__(".globl _FUN_8c1f45b8\n.set _FUN_8c1f45b8, _FUN_8c1f45b8_def\n");
//@unit 8c1f45c8
#include "../decls.h"
int FUN_8c1f45c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)0x8c4727b4 + (int)0x44c + ar4 * 0x78;
}

__asm__(".globl _FUN_8c1f45c8\n.set _FUN_8c1f45c8, _FUN_8c1f45c8_def\n");
//@unit 8c1f45da
#include "../decls.h"
int FUN_8c1f45da_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)0x8c4727b4 + 4 + ar4 * 8;
}

__asm__(".globl _FUN_8c1f45da\n.set _FUN_8c1f45da, _FUN_8c1f45da_def\n");
//@unit 8c1f461c
#include "../decls.h"
uint FUN_8c1f461c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)(*(int *)(iVar1 + 0x20) == ar5);
}

__asm__(".globl _FUN_8c1f461c\n.set _FUN_8c1f461c, _FUN_8c1f461c_def\n");
//@unit 8c1f4636
#include "../decls.h"
uint FUN_8c1f4636_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  return (uint)*(byte *)(iVar1 + 0xc);
}

__asm__(".globl _FUN_8c1f4636\n.set _FUN_8c1f4636, _FUN_8c1f4636_def\n");
//@unit 8c1f4646
#include "../decls.h"
undefined4 FUN_8c1f4646_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f45b8(ar4,ar5,ar6,ar7);
  *(undefined1 *)(iVar1 + 0xd) = 1;
  return 1;
}

__asm__(".globl _FUN_8c1f4646\n.set _FUN_8c1f4646, _FUN_8c1f4646_def\n");
//@unit 8c1f4656
#include "../decls.h"
int FUN_8c1f4656_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10c0;
  *(int *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4 << 0x10;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4656\n.set _FUN_8c1f4656, _FUN_8c1f4656_def\n");
//@unit 8c1f4662
#include "../decls.h"
uint FUN_8c1f4662_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(uint *)(*(undefined4 *)0x8c4727b4 + (int)0x10c0) >> 0x10;
}

__asm__(".globl _FUN_8c1f4662\n.set _FUN_8c1f4662, _FUN_8c1f4662_def\n");
//@unit 8c1f4672
#include "../decls.h"
int FUN_8c1f4672_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10c4;
  *(uint *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4 & 1;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4672\n.set _FUN_8c1f4672, _FUN_8c1f4672_def\n");
//@unit 8c1f4680
#include "../decls.h"
undefined4 FUN_8c1f4680_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10c4);
}

__asm__(".globl _FUN_8c1f4680\n.set _FUN_8c1f4680, _FUN_8c1f4680_def\n");
//@unit 8c1f468a
#include "../decls.h"
int FUN_8c1f468a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10cc;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f468a\n.set _FUN_8c1f468a, _FUN_8c1f468a_def\n");
//@unit 8c1f4694
#include "../decls.h"
undefined4 FUN_8c1f4694_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10cc);
}

__asm__(".globl _FUN_8c1f4694\n.set _FUN_8c1f4694, _FUN_8c1f4694_def\n");
//@unit 8c1f469e
#include "../decls.h"
int FUN_8c1f469e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10d0;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f469e\n.set _FUN_8c1f469e, _FUN_8c1f469e_def\n");
//@unit 8c1f46a8
#include "../decls.h"
undefined4 FUN_8c1f46a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10d0);
}

__asm__(".globl _FUN_8c1f46a8\n.set _FUN_8c1f46a8, _FUN_8c1f46a8_def\n");
//@unit 8c1f46ca
#include "../decls.h"
int FUN_8c1f46ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10c8;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f46ca\n.set _FUN_8c1f46ca, _FUN_8c1f46ca_def\n");
//@unit 8c1f46d4
#include "../decls.h"
undefined4 FUN_8c1f46d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10c8);
}

__asm__(".globl _FUN_8c1f46d4\n.set _FUN_8c1f46d4, _FUN_8c1f46d4_def\n");
//@unit 8c1f46de
#include "../decls.h"
int FUN_8c1f46de_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10d8;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f46de\n.set _FUN_8c1f46de, _FUN_8c1f46de_def\n");
//@unit 8c1f46e8
#include "../decls.h"
undefined4 FUN_8c1f46e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10d8);
}

__asm__(".globl _FUN_8c1f46e8\n.set _FUN_8c1f46e8, _FUN_8c1f46e8_def\n");
//@unit 8c1f46f2
#include "../decls.h"
int FUN_8c1f46f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0x10e0;
  *(undefined4 *)(iVar2 + *(undefined4 *)0x8c4727b4) = ar4;
  iVar2 = iVar2 + 4;
  *(undefined4 *)(iVar2 + *piVar1) = ar4;
  return iVar2;
}

__asm__(".globl _FUN_8c1f46f2\n.set _FUN_8c1f46f2, _FUN_8c1f46f2_def\n");
//@unit 8c1f4702
#include "../decls.h"
undefined4 FUN_8c1f4702_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10e4);
}

__asm__(".globl _FUN_8c1f4702\n.set _FUN_8c1f4702, _FUN_8c1f4702_def\n");
//@unit 8c1f4716
#include "../decls.h"
int FUN_8c1f4716_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10dc;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4716\n.set _FUN_8c1f4716, _FUN_8c1f4716_def\n");
//@unit 8c1f4720
#include "../decls.h"
undefined4 FUN_8c1f4720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0x10dc);
}

__asm__(".globl _FUN_8c1f4720\n.set _FUN_8c1f4720, _FUN_8c1f4720_def\n");
//@unit 8c1f472a
#include "../decls.h"
int FUN_8c1f472a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0xfac;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f472a\n.set _FUN_8c1f472a, _FUN_8c1f472a_def\n");
//@unit 8c1f4734
#include "../decls.h"
undefined4 FUN_8c1f4734_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0xfb0);
}

__asm__(".globl _FUN_8c1f4734\n.set _FUN_8c1f4734, _FUN_8c1f4734_def\n");
//@unit 8c1f4764
#include "../decls.h"
int FUN_8c1f4764_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0xfbc;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = ar4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f4764\n.set _FUN_8c1f4764, _FUN_8c1f4764_def\n");
//@unit 8c1f476e
#include "../decls.h"
undefined4 FUN_8c1f476e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(*(undefined4 *)0x8c4727b4 + (int)0xfbc);
}

__asm__(".globl _FUN_8c1f476e\n.set _FUN_8c1f476e, _FUN_8c1f476e_def\n");
//@unit 8c1f4780
#include "../decls.h"
undefined4 FUN_8c1f4780_def(uint *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  do {
    uVar1 = *ar4;
    ar5 = ar5 + -1;
    *ar4 = ((uVar1 & 0xff) << 8 | (uVar1 & 0xff00) >> 8) << 0x10 | ((uVar1 & 0xff0000) >> 0x10) << 8
           | uVar1 >> 0x18;
    ar4 = ar4 + 1;
  } while (ar5 != 0);
  return 0;
}

__asm__(".globl _FUN_8c1f4780\n.set _FUN_8c1f4780, _FUN_8c1f4780_def\n");
//@unit 8c1f4794
#include "../decls.h"
undefined4 g2dma_1f4794_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  byte *ar4_00;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  undefined4 in_stack_ffffffd8;
  undefined4 in_stack_ffffffdc;
  
  iVar5 = 0x6000;
  iVar7 = 0;
  _DAT_8c4727b4[0x42d] = 0;
  _DAT_8c4727b4[0x42e] = 0;
  uVar9 = 0;
  do {
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0xfe8) = _DAT_8c4727b4[0x3f2] + iVar7;
    uVar2 = uVar9 + 4;
    *(int *)((int)_DAT_8c4727b4 + uVar9 + 0x1048) = _DAT_8c4727b4[0x3f2] + iVar5;
    iVar5 = iVar5 + 0x400;
    iVar7 = iVar7 + 0x400;
    uVar9 = uVar2;
  } while (uVar2 < 0x60);
  _DAT_8c4727b4[0x42a] = _DAT_8c4727b4[0x3f1];
  _DAT_8c4727b4[0x42b] = _DAT_8c4727b4[0x3f1] + 0x3000;
  _DAT_8c4727b4[0x3f3] = _DAT_8c4727b4[0x42a];
  FUN_8c1f59dc(_DAT_8c4727b4 + 1,0,8,iVar7);
  uVar4 = 0;
  uVar6 = 0x108;
  FUN_8c1f59dc(_DAT_8c4727b4 + 10,0,0x108,iVar7);
  uVar9 = 0;
  do {
    FUN_8c1f5506((int)_DAT_8c4727b4 + uVar9 + 0x44c,uVar4,uVar6,iVar7);
    uVar9 = uVar9 + 0x78;
  } while (uVar9 < 0xb40);
  iVar5 = 0;
  do {
    iVar1 = iVar5 + 0xf90;
    iVar5 = iVar5 + 1;
    *(undefined1 *)((int)_DAT_8c4727b4 + iVar1) = 0;
  } while (iVar5 < 0x18);
  ar4_00 = &stack0xffffffdc;
  FUN_8c010960(ar4_00,0x18,uVar6,iVar7,in_stack_ffffffd8,in_stack_ffffffdc);
  iVar5 = 0;
  if ((_DAT_a05f689c & 0xff) < 2) {
    bVar8 = 7;
  }
  else {
    bVar8 = 0xf;
  }
  pbVar3 = ar4_00 + 4;
  uVar4 = 5;
  iVar7 = 0;
  do {
    if ((*ar4_00 & bVar8) != 0) {
      iVar10 = 0;
      *(undefined1 *)((int)_DAT_8c4727b4 + iVar7 + 0xf90) = 0x52;
      iVar1 = iVar5;
      do {
        iVar10 = iVar10 + 1;
        *(undefined1 *)((int)_DAT_8c4727b4 + iVar1 + 0xf91) = 0x45;
        iVar1 = iVar1 + 1;
      } while (iVar10 < 5);
    }
    ar4_00 = ar4_00 + 1;
    iVar5 = iVar5 + 6;
    iVar7 = iVar7 + 6;
  } while (ar4_00 < pbVar3);
  _DAT_8c4727b4[0x430] = 0xc3500000;
  _DAT_8c4727b4[0x3f7] = 0;
  _DAT_8c4727b4[0x3f6] = 0;
  _DAT_8c4727b4[0x3f8] = 1;
  _DAT_8c4727b4[0x432] = 0;
  _DAT_8c4727b4[0x43b] = 0;
  _DAT_8c4727b4[0x43a] = 0;
  _DAT_8c4727b4[0x433] = 5;
  _DAT_8c4727b4[0x434] = 0;
  _DAT_8c4727b4[0x436] = 10;
  _DAT_8c4727b4[0x437] = 5;
  _DAT_8c4727b4[0x438] = 0;
  _DAT_8c4727b4[0x439] = 0;
  _DAT_8c4727b4[0x3eb] = 0;
  _DAT_8c4727b4[0x3ec] = 0;
  _DAT_8c4727b4[0x3ef] = 0;
  *_DAT_8c4727b4 = 0x54524f50;
  _DAT_8c4727b4[9] = 0x20564544;
  _DAT_8c4727b4[0x112] = 0x4f464e49;
  _DAT_8c4727b4[0x3e3] = 0x4c424e45;
  _DAT_8c4727b4[0x3ea] = 0x54415453;
  _DAT_8c4727b4[0x3f9] = 0x52444152;
  _DAT_8c4727b4[0x42f] = 0x54554f54;
  _DAT_8c4727b4[0x435] = 0x43515244;
  _DAT_8c4727b4[0x43c] = 0x434e5546;
  _DAT_8c4727b4[0x43e] = 0x20444e45;
  uVar6 = 0;
  FUN_8c1f4672(0,ar4_00,5,iVar7);
  uVar4 = FUN_8c1f59fc(uVar6,ar4_00,uVar4,iVar7);
  return uVar4;
}

__asm__(".globl _g2dma_1f4794\n.set _g2dma_1f4794, _g2dma_1f4794_def\n");
//@unit 8c1f4a00
#include "../decls.h"
undefined4 FUN_8c1f4a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0xfcc;
  iVar4 = *(undefined4 *)0x8c4727b4;
  iVar5 = (int)0x700;
  *(int *)(iVar2 + iVar4) = *(int *)(iVar2 + iVar4) + *(int *)(iVar2 + 0xc + iVar4) * 4;
  piVar3 = *(int **)(iVar2 + *piVar1);
  iVar2 = 0;
  if (0 < ar4) {
    do {
      iVar2 = iVar2 + 1;
      *piVar3 = iVar5;
      piVar3 = piVar3 + 1;
    } while (iVar2 < ar4);
  }
  iVar2 = (int)0xfd8;
  *(int *)(iVar2 + *piVar1) = ar4;
  iVar2 = iVar2 + 4;
  *(int *)(iVar2 + *piVar1) = *(int *)(iVar2 + *piVar1) + ar4 * 4;
  return 0;
}

__asm__(".globl _FUN_8c1f4a00\n.set _FUN_8c1f4a00, _FUN_8c1f4a00_def\n");
//@unit 8c1f4a44
#include "../decls.h"
undefined4 FUN_8c1f4a44_def(int ar4,undefined4 ar5,uint *ar6,int ar7,uint *s0,int s4)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint a5;
  uint *a6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  
  iVar9 = ar4 * 0x2c;
  iVar5 = _DAT_8c4727b4 + 0x28 + iVar9;
  if (*(char *)(iVar5 + 6) == '\0') {
    *(byte *)(iVar5 + 6) = (byte)ar5;
    uVar7 = ar7 + s4;
    bVar1 = (&DAT_8c26c710)[ar4];
    uVar6 = (int)(char)bVar1 & 0xc0;
    a5 = (int)uVar6 >> 6;
    uVar3 = a5;
    a6 = ar6;
    iVar5 = ar7;
    if (((0 < *(int *)(_DAT_8c4727b4 + 0x10cc)) && (0 < *(int *)(_DAT_8c4727b4 + 0xfd8))) &&
       (a5 == ((int)(short)((uint)**(undefined4 **)(_DAT_8c4727b4 + 0xfcc) >> 0x10) & 3U))) {
      FUN_8c1f4a00(*(undefined4 *)(_DAT_8c4727b4 + 0x10cc),a5,ar6,ar7);
    }
    *(int *)(_DAT_8c4727b4 + 0xfcc) =
         *(int *)(_DAT_8c4727b4 + 0xfcc) + *(int *)(_DAT_8c4727b4 + 0xfd8) * 4;
    puVar8 = *(uint **)(_DAT_8c4727b4 + 0xfcc);
    *puVar8 = a5 << 0x10 | uVar7 & 0xff;
    uVar3 = FUN_8c1f59f2(*(undefined4 *)
                          (_DAT_8c4727b4 + 0xfe8 + *(int *)(_DAT_8c4727b4 + 0x10b4) * 0x60 + ar4 * 4
                          ),uVar3,a6,iVar5);
    puVar8[1] = uVar3;
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      puVar8[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar6 << 8 | uVar7 & 0xff;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    else {
      puVar8[2] = uVar6 << 0x10 | (uint)bVar1 << 8 | uVar7 * 0x1000000 | (uint)(byte)ar5;
      puVar8 = puVar8 + 3;
      iVar5 = 0;
      if (0 < ar7) {
        do {
          uVar3 = *ar6;
          ar6 = ar6 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3 << 0x18 | (uVar3 & 0xff00) << 8 | (int)uVar3 >> 8 & 0xff00U |
                    uVar3 >> 0x18;
          puVar8 = puVar8 + 1;
        } while (iVar5 < ar7);
      }
    }
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      iVar5 = 0;
      if (0 < s4) {
        do {
          iVar5 = iVar5 + 1;
          *puVar8 = (uint)*(byte *)((int)s0 + 1) << 0x10 | (uint)*(byte *)((int)s0 + 2) << 8 |
                    (int)(char)*s0 << 0x18 | (uint)*(byte *)((int)s0 + 3);
          puVar8 = puVar8 + 1;
          s0 = s0 + 1;
        } while (iVar5 < s4);
      }
    }
    else {
      iVar5 = 0;
      if (0 < s4) {
        do {
          uVar3 = *s0;
          s0 = s0 + 1;
          iVar5 = iVar5 + 1;
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
        } while (iVar5 < s4);
      }
    }
    *(uint *)(_DAT_8c4727b4 + 0xfd8) = uVar7 + 3;
    *(uint *)(_DAT_8c4727b4 + 0xfdc) = *(int *)(_DAT_8c4727b4 + 0xfdc) + (uVar7 + 3) * 4;
    iVar5 = _DAT_8c4727b4;
    iVar4 = *(int *)(_DAT_8c4727b4 + 0xfe0);
    *(int *)(_DAT_8c4727b4 + 0xfe0) = iVar4 + 1;
    *(int *)(iVar5 + iVar9 + 0x40) = iVar4;
    *(uint *)(_DAT_8c4727b4 + 0xfe0) = *(uint *)(_DAT_8c4727b4 + 0xfe0) & 0x7fffffff;
    if (*(int *)(_DAT_8c4727b4 + 0xfe0) == 0) {
      *(undefined4 *)(_DAT_8c4727b4 + 0xfe0) = 1;
    }
    uVar2 = *(undefined4 *)(_DAT_8c4727b4 + iVar9 + 0x40);
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f4a44\n.set _FUN_8c1f4a44, _FUN_8c1f4a44_def\n");
//@unit 8c1f4cb8
#include "../decls.h"
undefined4 FUN_8c1f4cb8_def(int ar4,undefined4 ar5,uint *ar6,int ar7,uint *s0,int s4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 a5;
  uint *a6;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  
  a5 = 3;
  uVar4 = ar7 + s4;
  bVar1 = (&DAT_8c26c710)[ar4];
  uVar2 = (int)(char)bVar1 & 0xc0;
  a6 = ar6;
  iVar5 = ar7;
  if (((0 < *(int *)(_DAT_8c4727b4 + 0x10cc)) && (0 < *(int *)(_DAT_8c4727b4 + 0xfd8))) &&
     ((int)uVar2 >> 6 == ((int)(short)((uint)**(undefined4 **)(_DAT_8c4727b4 + 0xfcc) >> 0x10) & 3U)
     )) {
    FUN_8c1f4a00(*(undefined4 *)(_DAT_8c4727b4 + 0x10cc),3,ar6,ar7);
  }
  *(int *)(_DAT_8c4727b4 + 0xfcc) =
       *(int *)(_DAT_8c4727b4 + 0xfcc) + *(int *)(_DAT_8c4727b4 + 0xfd8) * 4;
  puVar6 = *(uint **)(_DAT_8c4727b4 + 0xfcc);
  *puVar6 = ((int)uVar2 >> 6) << 0x10 | uVar4 & 0xff;
  uVar3 = FUN_8c1f59f2(*(undefined4 *)
                        (_DAT_8c4727b4 + 0xfe8 + *(int *)(_DAT_8c4727b4 + 0x10b4) * 0x60 + ar4 * 4),
                       a5,a6,iVar5);
  puVar6[1] = uVar3;
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    puVar6[2] = (uint)(byte)ar5 << 0x18 | (uint)bVar1 << 0x10 | uVar2 << 8 | uVar4 & 0xff;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  else {
    puVar6[2] = uVar2 << 0x10 | (uint)bVar1 << 8 | uVar4 * 0x1000000 | (uint)(byte)ar5;
    puVar6 = puVar6 + 3;
    iVar5 = 0;
    if (0 < ar7) {
      do {
        uVar2 = *ar6;
        ar6 = ar6 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2 << 0x18 | (uVar2 & 0xff00) << 8 | (int)uVar2 >> 8 & 0xff00U | uVar2 >> 0x18;
        puVar6 = puVar6 + 1;
      } while (iVar5 < ar7);
    }
  }
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    iVar5 = 0;
    if (0 < s4) {
      do {
        iVar5 = iVar5 + 1;
        *puVar6 = (uint)*(byte *)((int)s0 + 1) << 0x10 | (uint)*(byte *)((int)s0 + 2) << 8 |
                  (int)(char)*s0 << 0x18 | (uint)*(byte *)((int)s0 + 3);
        puVar6 = puVar6 + 1;
        s0 = s0 + 1;
      } while (iVar5 < s4);
    }
  }
  else {
    iVar5 = 0;
    if (0 < s4) {
      do {
        uVar2 = *s0;
        s0 = s0 + 1;
        iVar5 = iVar5 + 1;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
      } while (iVar5 < s4);
    }
  }
  *(uint *)(_DAT_8c4727b4 + 0xfd8) = uVar4 + 3;
  *(uint *)(_DAT_8c4727b4 + 0xfdc) = *(int *)(_DAT_8c4727b4 + 0xfdc) + (uVar4 + 3) * 4;
  return 0;
}

__asm__(".globl _FUN_8c1f4cb8\n.set _FUN_8c1f4cb8, _FUN_8c1f4cb8_def\n");
//@unit 8c1f4ec6
#include "../decls.h"
undefined4 FUN_8c1f4ec6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = 0x8c4727b4;
  iVar2 = (int)0xfcc;
  iVar3 = *(undefined4 *)0x8c4727b4;
  *(int *)(iVar2 + iVar3) = *(int *)(iVar2 + iVar3) + *(int *)(iVar2 + 0xc + iVar3) * 4;
  **(uint **)(iVar2 + *piVar1) = ar4 << 0x10 | (int)0x300;
  *(undefined4 *)(iVar2 + 0xc + *piVar1) = 1;
  *(int *)(iVar2 + 0x10 + *piVar1) = *(int *)(iVar2 + 0x10 + *piVar1) + 4;
  return 0;
}

__asm__(".globl _FUN_8c1f4ec6\n.set _FUN_8c1f4ec6, _FUN_8c1f4ec6_def\n");
//@unit 8c1f4f82
#include "../decls.h"
undefined4 FUN_8c1f4f82_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  byte bVar5;
  byte bStack_3;
  byte abStack_2 [2];
  
  pbVar4 = (byte *)(_DAT_8c4727b4 + 4 + ar4 * 8);
  iVar1 = **(int **)(_DAT_8c4727b4 + 0xfe8 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 +
                    (&DAT_8c26c728)[ar4] * 4);
  if ((iVar1 == -1) || (iVar1 == -0x100)) {
    *(int *)(pbVar4 + 4) = *(int *)(pbVar4 + 4) + 1;
    if (*(uint *)(pbVar4 + 4) <= *(uint *)(_DAT_8c4727b4 + 0x10dc)) {
      return 0;
    }
    bVar5 = 0;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
      pbVar2 = &bStack_3;
    }
    else {
      pbVar2 = abStack_2;
    }
    bVar5 = *pbVar2;
    uVar3 = 0;
    pbVar4[4] = 0;
    pbVar4[5] = 0;
    pbVar4[6] = 0;
    pbVar4[7] = 0;
  }
  pbVar4[1] = *pbVar4;
  *pbVar4 = bVar5;
  pbVar4[2] = (pbVar4[1] ^ *pbVar4) & *pbVar4;
  pbVar4[3] = (pbVar4[1] ^ *pbVar4) & ~*pbVar4;
  return uVar3;
}

__asm__(".globl _FUN_8c1f4f82\n.set _FUN_8c1f4f82, _FUN_8c1f4f82_def\n");
//@unit 8c1f5048
#include "../decls.h"
undefined4 FUN_8c1f5048_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int a5;
  undefined4 uVar2;
  undefined1 *a6;
  
  iVar1 = _DAT_8c4727b4 + 4;
  a6 = (undefined1 *)(_DAT_8c4727b4 + 0x28 + ar4 * 0x2c);
  a5 = _DAT_8c4727b4 + 0x44c + ar4 * 0x78;
  uVar2 = *(undefined4 *)
           (_DAT_8c4727b4 + 0xfe8 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 + ar4 * 4);
  a6[1] = *a6;
  a6[5] = a6[4];
  if (*(int *)(a6 + 0x1c) != 0) {
    *(undefined4 *)(a6 + 0x20) = *(undefined4 *)(a6 + 0x1c);
    *(undefined4 *)(a6 + 0x1c) = 0;
  }
  if (((int)(char)(&DAT_8c26c710)[ar4] & 0x1fU) == 0) {
    uVar2 = FUN_8c1f51ec(ar5,a5,a6,uVar2);
  }
  else {
    uVar2 = FUN_8c1f5290((int)(char)(&DAT_8c26c710)[ar4] & 0x1fU,ar5 * 8 + iVar1,a5,a6);
  }
  if (a6[7] != '\0') {
    *(undefined4 *)(a6 + 0x10) =
         *(undefined4 *)
          (ar4 * 4 + (1 - *(int *)(_DAT_8c4727b4 + 0x10b4)) * 0x60 + _DAT_8c4727b4 + 0xfe8);
  }
  if (a6[0xd] != '\0') {
    a6[0xc] = 0;
    a6[0xd] = 0;
  }
  a6[0xc] = a6[0xc] | a6[2];
  a6[0xc] = a6[0xc] | a6[3];
  return uVar2;
}

__asm__(".globl _FUN_8c1f5048\n.set _FUN_8c1f5048, _FUN_8c1f5048_def\n");
//@unit 8c1f5146
#include "../decls.h"
undefined4 FUN_8c1f5146_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4[7] == '\x01') {
    if (ar4[8] == '\x05') {
      *ar4 = 1;
    }
    else {
      *ar4 = 0;
    }
  }
  else if (((byte)ar4[8] == 0xff) || ((byte)ar4[8] == 0)) {
    *ar4 = 0;
  }
  else {
    *ar4 = 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5146\n.set _FUN_8c1f5146, _FUN_8c1f5146_def\n");
//@unit 8c1f518e
#include "../decls.h"
undefined4 FUN_8c1f518e_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 uStack_4;
  undefined1 uStack_3;
  undefined1 uStack_2;
  undefined1 uStack_1;
  
  uVar1 = *ar5;
  uStack_4 = (undefined1)uVar1;
  uStack_3 = (undefined1)((uint)uVar1 >> 8);
  uStack_2 = (undefined1)((uint)uVar1 >> 0x10);
  uStack_1 = (undefined1)((uint)uVar1 >> 0x18);
  if (*(int *)(*(undefined4 *)0x8c4727b4 + (int)0x10c4) == 1) {
    *(undefined1 *)(ar4 + 0xb) = uStack_4;
    *(undefined1 *)(ar4 + 10) = uStack_3;
    *(undefined1 *)(ar4 + 9) = uStack_2;
    *(undefined1 *)(ar4 + 8) = uStack_1;
  }
  else {
    *(undefined1 *)(ar4 + 8) = uStack_4;
    *(undefined1 *)(ar4 + 9) = uStack_3;
    *(undefined1 *)(ar4 + 10) = uStack_2;
    *(undefined1 *)(ar4 + 0xb) = uStack_1;
  }
  if (*(byte *)(ar4 + 8) == 0xff) {
    *(undefined4 *)(ar4 + 0x14) = 0xffffffff;
  }
  else if ((short)(ushort)*(byte *)(ar4 + 8) < 0xe0) {
    *(undefined4 *)(ar4 + 0x14) = 0;
  }
  else {
    *(undefined4 *)(ar4 + 0x14) = ar5[1];
  }
  return 0;
}

__asm__(".globl _FUN_8c1f518e\n.set _FUN_8c1f518e, _FUN_8c1f518e_def\n");
//@unit 8c1f51ec
#include "../decls.h"
undefined4 FUN_8c1f51ec_def(undefined4 ar4,int ar5,uint *ar6,uint *ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  uint *ar6_00;
  uint *ar7_00;
  undefined4 uVar4;
  
  uVar4 = 0;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = ar7;
  FUN_8c1f5146(ar6,ar7,ar6_00,ar7_00);
  iVar3 = (int)0x10c4;
  *(byte *)((int)ar6 + 2) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & (byte)*ar6;
  piVar1 = 0x8c4727b4;
  *(byte *)((int)ar6 + 3) = (*(byte *)((int)ar6 + 1) ^ (byte)*ar6) & ~(byte)*ar6;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)ar6[2] != 0xff)) && ((byte)ar6[2] != 0)) {
    ar5_00 = (uint *)((*ar7 & 0xff) + 1);
    FUN_8c1f4780(ar7,uVar4);
  }
  if ((byte)*ar6 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(ar6 + 1) = bVar2;
  if (*(byte *)((int)ar6 + 2) != 0) {
    *(undefined1 *)(ar5 + 0x10) = 1;
    ar5_00 = ar6;
    FUN_8c1f53c2(ar5,ar6,ar7,ar7_00);
    ar6_00 = ar7;
  }
  if (*(byte *)((int)ar6 + 3) != 0) {
    FUN_8c1f5506(ar5,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f51ec\n.set _FUN_8c1f51ec, _FUN_8c1f51ec_def\n");
//@unit 8c1f51f8
#include "../decls.h"
undefined4 FUN_8c1f51f8_def(undefined4 ar4,undefined4 ar5,uint *ar6,undefined4 ar7)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  uint *ar5_00;
  int unaff_r12;
  uint *unaff_r13;
  uint *unaff_r14;
  
  FUN_8c1f518e(ar6,ar7,ar6,ar7);
  ar5_00 = unaff_r13;
  FUN_8c1f5146(unaff_r14,unaff_r13,ar6,ar7);
  iVar3 = (int)0x10c4;
  *(byte *)((int)unaff_r14 + 2) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & (byte)*unaff_r14;
  piVar1 = 0x8c4727b4;
  *(byte *)((int)unaff_r14 + 3) =
       (*(byte *)((int)unaff_r14 + 1) ^ (byte)*unaff_r14) & ~(byte)*unaff_r14;
  if (((*(int *)(*piVar1 + iVar3) == 1) && ((byte)unaff_r14[2] != 0xff)) &&
     ((byte)unaff_r14[2] != 0)) {
    ar5_00 = (uint *)((*unaff_r13 & 0xff) + 1);
    FUN_8c1f4780(unaff_r13,ar5_00,ar6,ar7);
  }
  if ((byte)*unaff_r14 == 0) {
    bVar2 = 1;
  }
  else {
    bVar2 = 9;
  }
  *(byte *)(unaff_r14 + 1) = bVar2;
  if (*(byte *)((int)unaff_r14 + 2) != 0) {
    *(undefined1 *)(unaff_r12 + 0x10) = 1;
    ar5_00 = unaff_r14;
    FUN_8c1f53c2(unaff_r12,unaff_r14,unaff_r13,ar7);
    ar6 = unaff_r13;
  }
  if (*(byte *)((int)unaff_r14 + 3) != 0) {
    FUN_8c1f5506(unaff_r12,ar5_00,ar6,ar7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f51f8\n.set _FUN_8c1f51f8, _FUN_8c1f51f8_def\n");
//@unit 8c1f5290
#include "../decls.h"
undefined4 FUN_8c1f5290_def(undefined4 ar4,byte *ar5,int ar6,char *ar7,uint *s0)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  char *ar5_00;
  uint *ar6_00;
  char *ar7_00;
  
  ar7_00 = ar7;
  FUN_8c1f518e(ar7,s0,ar6,ar7);
  ar7[2] = '\0';
  ar7[3] = '\0';
  ar5_00 = (char *)(uint)(byte)ar4;
  if ((ar5[2] & (byte)ar4) != 0) {
    ar7[4] = '\x01';
    *ar7 = '\0';
    *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
  }
  if ((ar5[3] & (byte)ar4) != 0) {
    ar7[4] = '\x04';
    *ar7 = '\0';
    ar7[3] = '\x01';
    ar7[0x24] = '\0';
    ar7[0x25] = '\0';
    ar7[0x26] = '\0';
    ar7[0x27] = '\0';
  }
  piVar1 = 0x8c4727b4;
  ar6_00 = (uint *)(int)0xff;
  cVar2 = (char)0xff;
  if ((*ar5 & (byte)ar4) == 0) {
    ar7[4] = cVar2;
    *ar7 = '\0';
    goto LAB_8c1f535e;
  }
  if (ar7[7] == '\0') {
    cVar2 = *ar7;
joined_r0x8c1f5348:
    if (cVar2 == '\0') goto LAB_8c1f535e;
  }
  else {
    if (ar7[7] != '\x01') {
      if (ar7[7] == '\x04') {
        ar7[3] = '\x01';
        goto LAB_8c1f533a;
      }
      cVar2 = ar7[7];
      goto joined_r0x8c1f5348;
    }
    if (ar7[8] != '\x05') {
      iVar3 = (int)0x10d8;
      *(int *)(ar7 + 0x24) = *(int *)(ar7 + 0x24) + 1;
      if (*(uint *)(ar7 + 0x24) <= *(uint *)(iVar3 + *piVar1)) {
        ar7[4] = '\x01';
        goto LAB_8c1f535e;
      }
LAB_8c1f533a:
      *ar7 = '\0';
      ar7[4] = cVar2;
      ar7[0x24] = '\0';
      ar7[0x25] = '\0';
      ar7[0x26] = '\0';
      ar7[0x27] = '\0';
      goto LAB_8c1f535e;
    }
    ar7[2] = '\x01';
    *ar7 = '\x01';
  }
  ar7[4] = '\0';
LAB_8c1f535e:
  if ((((*ar7 != '\0') && (ar7[7] != '\0')) && (*(int *)(*(undefined4 *)0x8c4727b4 + (int)0x10c4) == 1))
     && ((*s0 != 0xffffffff && (*s0 != (int)(int)0xffffff00)))) {
    ar5_00 = (char *)((*s0 & 0xff) + 1);
    FUN_8c1f4780(s0,ar5_00,ar6_00,ar7_00);
  }
  if (ar7[2] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    ar5_00 = ar7;
    FUN_8c1f53c2(ar6,ar7,s0,ar7_00);
    ar6_00 = s0;
  }
  if (ar7[3] != '\0') {
    *(undefined1 *)(ar6 + 0x10) = 0;
    FUN_8c1f5506(ar6,ar5_00,ar6_00,ar7_00);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5290\n.set _FUN_8c1f5290, _FUN_8c1f5290_def\n");
//@unit 8c1f53c2
#include "../decls.h"
undefined4 FUN_8c1f53c2_def(uint *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined1 uVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint *puVar5;
  
  puVar3 = (undefined1 *)(ar6 + 8);
  *ar4 = (uint)*(byte *)(ar6 + 5) << 0x10 | (uint)*(byte *)(ar6 + 6) << 8 |
         (uint)*(byte *)(ar6 + 4) << 0x18 | (uint)*(byte *)(ar6 + 7);
  for (puVar5 = ar4 + 1; puVar5 < ar4 + 2; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 2; puVar5 < ar4 + 3; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  for (puVar5 = ar4 + 3; puVar5 < ar4 + 4; puVar5 = (uint *)((int)puVar5 + 1)) {
    uVar1 = *puVar3;
    puVar3 = puVar3 + 1;
    *(undefined1 *)puVar5 = uVar1;
  }
  pbVar4 = puVar3 + 1;
  *(undefined1 *)((int)ar4 + 0x11) = *puVar3;
  if ((char)ar4[4] == '\0') {
    *(undefined *)((int)ar4 + 0x12) = (&DAT_8c273a00)[*pbVar4 & 0xf];
    *(undefined1 *)((int)ar4 + 0x13) = 0;
  }
  else {
    *(byte *)((int)ar4 + 0x12) = *pbVar4 & 3;
    *(byte *)((int)ar4 + 0x13) = *pbVar4 >> 2 & 3;
  }
  if (*(int *)(_DAT_8c4727b4 + 0x10c4) == 1) {
    for (puVar5 = ar4 + 5; puVar5 < (uint *)((int)ar4 + 0x33); puVar5 = (uint *)((int)puVar5 + 1)) {
      bVar2 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      *(byte *)puVar5 = bVar2;
    }
  }
  else {
    for (puVar5 = ar4 + 5; pbVar4 = pbVar4 + 1, puVar5 < (uint *)((int)ar4 + 0x32);
        puVar5 = (uint *)((int)puVar5 + 1)) {
      *(byte *)puVar5 = *pbVar4;
    }
    *(undefined1 *)((int)ar4 + 0x32) = 0;
  }
  *(undefined1 *)((int)ar4 + 0x33) = 0;
  for (puVar5 = ar4 + 0xd; puVar5 < ar4 + 0x1c; puVar5 = (uint *)((int)puVar5 + 1)) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    *(byte *)puVar5 = bVar2;
  }
  *(undefined1 *)(ar4 + 0x1c) = 0;
  *(undefined2 *)(ar4 + 0x1d) = *(undefined2 *)pbVar4;
  *(undefined2 *)((int)ar4 + 0x76) = *(undefined2 *)(pbVar4 + 2);
  return 0;
}

__asm__(".globl _FUN_8c1f53c2\n.set _FUN_8c1f53c2, _FUN_8c1f53c2_def\n");
//@unit 8c1f5506
#include "../decls.h"
undefined4 FUN_8c1f5506_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  FUN_8c1f59dc(ar4,0,0x1e,ar7);
  *(undefined1 *)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(ar4 + 0x1a);
  *(undefined1 *)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(ar4 + 0x33));
  *(undefined1 *)(ar4 + 0x33) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f5506\n.set _FUN_8c1f5506, _FUN_8c1f5506_def\n");
//@unit 8c1f550a
#include "../decls.h"
undefined4 FUN_8c1f550a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  
  FUN_8c1f59dc(ar4,0,ar6,ar7);
  *(undefined1 *)(ar4 + 0x14) = 0x28;
  *(undefined1 *)(ar4 + 0x15) = 0x6e;
  *(undefined1 *)(ar4 + 0x16) = 0x6f;
  *(undefined1 *)(ar4 + 0x17) = 0x6e;
  *(undefined1 *)(ar4 + 0x18) = 0x65;
  puVar1 = (undefined1 *)(ar4 + 0x1a);
  *(undefined1 *)(ar4 + 0x19) = 0x29;
  do {
    *puVar1 = 0x20;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined1 *)(ar4 + 0x33));
  *(undefined1 *)(ar4 + 0x33) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f550a\n.set _FUN_8c1f550a, _FUN_8c1f550a_def\n");
//@unit 8c1f5556
#include "../decls.h"
undefined4 FUN_8c1f5556_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5556\n.set _FUN_8c1f5556, _FUN_8c1f5556_def\n");
//@unit 8c1f5558
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5582(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5558\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5558, _s_FATAL_ERROR_Cannot_get_semap_1f5558_def\n");
//@unit 8c1f5582
#include "../decls.h"
undefined4 FUN_8c1f5582_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 auStack_8 [2];
  
  auStack_8[0] = ar5;
  uVar1 = FUN_8c1f4a44(ar4,9,auStack_8,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5582\n.set _FUN_8c1f5582, _FUN_8c1f5582_def\n");
//@unit 8c1f55b8
#include "../decls.h"
undefined4 FUN_8c1f55b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f55e4(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f55b8\n.set _FUN_8c1f55b8, _FUN_8c1f55b8_def\n");
//@unit 8c1f55ba
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f55ba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f55e4(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f55ba\n.set _s_FATAL_ERROR_Cannot_get_semap_1f55ba, _s_FATAL_ERROR_Cannot_get_semap_1f55ba_def\n");
//@unit 8c1f55e4
#include "../decls.h"
undefined4 FUN_8c1f55e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,1,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c1f55e4\n.set _FUN_8c1f55e4, _FUN_8c1f55e4_def\n");
//@unit 8c1f55fc
#include "../decls.h"
undefined4 FUN_8c1f55fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5628(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f55fc\n.set _FUN_8c1f55fc, _FUN_8c1f55fc_def\n");
//@unit 8c1f55fe
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f55fe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5628(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f55fe\n.set _s_FATAL_ERROR_Cannot_get_semap_1f55fe, _s_FATAL_ERROR_Cannot_get_semap_1f55fe_def\n");
//@unit 8c1f5628
#include "../decls.h"
undefined4 FUN_8c1f5628_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,4,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5628\n.set _FUN_8c1f5628, _FUN_8c1f5628_def\n");
//@unit 8c1f5640
#include "../decls.h"
undefined4 FUN_8c1f5640_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f566c(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5640\n.set _FUN_8c1f5640, _FUN_8c1f5640_def\n");
//@unit 8c1f5642
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5642_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f566c(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5642\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5642, _s_FATAL_ERROR_Cannot_get_semap_1f5642_def\n");
//@unit 8c1f566c
#include "../decls.h"
undefined4 FUN_8c1f566c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,3,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c1f566c\n.set _FUN_8c1f566c, _FUN_8c1f566c_def\n");
//@unit 8c1f5684
#include "../decls.h"
undefined4 FUN_8c1f5684_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5684\n.set _FUN_8c1f5684, _FUN_8c1f5684_def\n");
//@unit 8c1f5686
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5686_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56b0(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5686\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5686, _s_FATAL_ERROR_Cannot_get_semap_1f5686_def\n");
//@unit 8c1f56b0
#include "../decls.h"
undefined4 FUN_8c1f56b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,2,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c1f56b0\n.set _FUN_8c1f56b0, _FUN_8c1f56b0_def\n");
//@unit 8c1f56c8
#include "../decls.h"
undefined4 FUN_8c1f56c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56f4(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f56c8\n.set _FUN_8c1f56c8, _FUN_8c1f56c8_def\n");
//@unit 8c1f56ca
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f56ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f56f4(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f56ca\n.set _s_FATAL_ERROR_Cannot_get_semap_1f56ca, _s_FATAL_ERROR_Cannot_get_semap_1f56ca_def\n");
//@unit 8c1f56f4
#include "../decls.h"
undefined4 FUN_8c1f56f4_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_c = ar6 << 0x18;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,10,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f56f4\n.set _FUN_8c1f56f4, _FUN_8c1f56f4_def\n");
//@unit 8c1f571a
#include "../decls.h"
undefined4 FUN_8c1f571a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f574c(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f571a\n.set _FUN_8c1f571a, _FUN_8c1f571a_def\n");
//@unit 8c1f571c
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f571c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f574c(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f571c\n.set _s_FATAL_ERROR_Cannot_get_semap_1f571c, _s_FATAL_ERROR_Cannot_get_semap_1f571c_def\n");
//@unit 8c1f574c
#include "../decls.h"
undefined4 FUN_8c1f574c_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xb,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f574c\n.set _FUN_8c1f574c, _FUN_8c1f574c_def\n");
//@unit 8c1f577a
#include "../decls.h"
undefined4 FUN_8c1f577a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f57b4(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f577a\n.set _FUN_8c1f577a, _FUN_8c1f577a_def\n");
//@unit 8c1f577c
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f577c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f57b4(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f577c\n.set _s_FATAL_ERROR_Cannot_get_semap_1f577c, _s_FATAL_ERROR_Cannot_get_semap_1f577c_def\n");
//@unit 8c1f57b4
#include "../decls.h"
undefined4 FUN_8c1f57b4_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xc,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f57b4\n.set _FUN_8c1f57b4, _FUN_8c1f57b4_def\n");
//@unit 8c1f57e4
#include "../decls.h"
undefined4 FUN_8c1f57e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5816(ar4,ar5,ar6,ar7,in_stack_00000000);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f57e4\n.set _FUN_8c1f57e4, _FUN_8c1f57e4_def\n");
//@unit 8c1f57e6
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f57e6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5816(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f57e6\n.set _s_FATAL_ERROR_Cannot_get_semap_1f57e6, _s_FATAL_ERROR_Cannot_get_semap_1f57e6_def\n");
//@unit 8c1f5816
#include "../decls.h"
undefined4 FUN_8c1f5816_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,uint s0)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  uint uStack_c;
  
  uStack_c = ar6 << 0x18 | ar7 << 0x10 | s0;
  uStack_10 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xd,&uStack_10,2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5816\n.set _FUN_8c1f5816, _FUN_8c1f5816_def\n");
//@unit 8c1f5850
#include "../decls.h"
undefined4 FUN_8c1f5850_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f587c(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5850\n.set _FUN_8c1f5850, _FUN_8c1f5850_def\n");
//@unit 8c1f5852
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5852_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f587c(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5852\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5852, _s_FATAL_ERROR_Cannot_get_semap_1f5852_def\n");
//@unit 8c1f587c
#include "../decls.h"
undefined4 FUN_8c1f587c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4a44(ar4,(int)0xfc,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c1f587c\n.set _FUN_8c1f587c, _FUN_8c1f587c_def\n");
//@unit 8c1f5894
#include "../decls.h"
undefined4 FUN_8c1f5894_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f58c0(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5894\n.set _FUN_8c1f5894, _FUN_8c1f5894_def\n");
//@unit 8c1f5896
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5896_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f58c0(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5896\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5896, _s_FATAL_ERROR_Cannot_get_semap_1f5896_def\n");
//@unit 8c1f58c0
#include "../decls.h"
undefined4 FUN_8c1f58c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0x20;
  uStack_8 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0x10,&uStack_c,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f58c0\n.set _FUN_8c1f58c0, _FUN_8c1f58c0_def\n");
//@unit 8c1f58e4
#include "../decls.h"
undefined4 FUN_8c1f58e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5910(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f58e4\n.set _FUN_8c1f58e4, _FUN_8c1f58e4_def\n");
//@unit 8c1f58e6
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f58e6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5910(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f58e6\n.set _s_FATAL_ERROR_Cannot_get_semap_1f58e6, _s_FATAL_ERROR_Cannot_get_semap_1f58e6_def\n");
//@unit 8c1f5910
#include "../decls.h"
undefined4 FUN_8c1f5910_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_c = 0x10;
  uStack_8 = ar5;
  uVar1 = FUN_8c1f4a44(ar4,0xf,&uStack_c,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5910\n.set _FUN_8c1f5910, _FUN_8c1f5910_def\n");
//@unit 8c1f5934
#include "../decls.h"
undefined4 FUN_8c1f5934_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  bVar1 = *(&DATA_8c1f5a2c);
  *(&DATA_8c1f5a2c) = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5970(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _FUN_8c1f5934\n.set _FUN_8c1f5934, _FUN_8c1f5934_def\n");
//@unit 8c1f5936
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f5936_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f5970(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f5936\n.set _s_FATAL_ERROR_Cannot_get_semap_1f5936, _s_FATAL_ERROR_Cannot_get_semap_1f5936_def\n");
//@unit 8c1f5970
#include "../decls.h"
undefined4 FUN_8c1f5970_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_10 = ar5;
  uStack_c = ar6;
  uStack_8 = ar7;
  uVar1 = FUN_8c1f4a44(ar4,0xe,&uStack_10,1);
  return uVar1;
}

__asm__(".globl _FUN_8c1f5970\n.set _FUN_8c1f5970, _FUN_8c1f5970_def\n");
//@unit 8c1f5994
#include "../decls.h"
undefined4 thunk_FUN_8c1f4ec6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f4ec6(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f4ec6\n.set _thunk_FUN_8c1f4ec6, _thunk_FUN_8c1f4ec6_def\n");
//@unit 8c1f599e
#include "../decls.h"
undefined4
s_FATAL_ERROR_Cannot_get_semap_1f599e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 *in_r3;
  undefined4 in_PR;
  
  bVar1 = *(byte *)*in_r3;
  *(byte *)*in_r3 = bVar1 | 0x80;
  if (bVar1 != 0) {
    FUN_8c1f4570(ar4,ar5,ar6,ar7,s____FATAL_ERROR_Cannot_get_semaph_8c26c6e4,in_PR);
    return 0xfffffffe;
  }
  uVar2 = FUN_8c1f59c8(ar4,ar5,ar6,ar7);
  *(&DATA_8c1f5a2c) = 0;
  return uVar2;
}

__asm__(".globl _s_FATAL_ERROR_Cannot_get_semap_1f599e\n.set _s_FATAL_ERROR_Cannot_get_semap_1f599e, _s_FATAL_ERROR_Cannot_get_semap_1f599e_def\n");
//@unit 8c1f59c8
#include "../decls.h"
undefined4 FUN_8c1f59c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  **(uint **)((int)0xfcc + *(undefined4 *)0x8c4727b4) =
       **(uint **)((int)0xfcc + *(undefined4 *)0x8c4727b4) | 0x80000000;
  return 0;
}

__asm__(".globl _FUN_8c1f59c8\n.set _FUN_8c1f59c8, _FUN_8c1f59c8_def\n");
//@unit 8c1f59dc
#include "../decls.h"
int FUN_8c1f59dc_def(undefined4 *ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar6) {
    do {
      iVar1 = iVar1 + 1;
      *ar4 = ar5;
      ar4 = ar4 + 1;
    } while (iVar1 < ar6);
  }
  return ar6;
}

__asm__(".globl _FUN_8c1f59dc\n.set _FUN_8c1f59dc, _FUN_8c1f59dc_def\n");
//@unit 8c1f59f2
#include "../decls.h"
uint FUN_8c1f59f2_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xfffffff & ar4;
}

__asm__(".globl _FUN_8c1f59f2\n.set _FUN_8c1f59f2, _FUN_8c1f59f2_def\n");
//@unit 8c1f59fc
#include "../decls.h"
int FUN_8c1f59fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)0x10f4;
  *(undefined4 *)(iVar1 + *(undefined4 *)0x8c4727b4) = 0xa05f6c00;
  return iVar1;
}

__asm__(".globl _FUN_8c1f59fc\n.set _FUN_8c1f59fc, _FUN_8c1f59fc_def\n");
//@unit 8c1f5a30
#include "../decls.h"
uint FUN_8c1f5a30_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  uVar1 = (uint)(int)0xffffff0f;
  *ar4 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         uVar1 | 0xf0;
}

__asm__(".globl _FUN_8c1f5a30\n.set _FUN_8c1f5a30, _FUN_8c1f5a30_def\n");
//@unit 8c1f5a48
#include "../decls.h"
uint FUN_8c1f5a48_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  return (*ar4 & 0xf) << 4 |
         ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1f5a48\n.set _FUN_8c1f5a48, _FUN_8c1f5a48_def\n");
//@unit 8c1f5a5e
#include "../decls.h"
int FUN_8c1f5a5e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (_DAT_8c00fff0 == 0) {
    FUN_8c1f5b1a(0x8c00fc00,0x78,ar6,ar7,ar4);
  }
  iVar1 = _DAT_8c00fff0;
  *ar4 = _DAT_8c00fff4;
  return iVar1;
}

__asm__(".globl _FUN_8c1f5a5e\n.set _FUN_8c1f5a5e, _FUN_8c1f5a5e_def\n");
//@unit 8c1f5a86
#include "../decls.h"
undefined4 FUN_8c1f5a86_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_8 [8];
  
  piVar1 = (int *)FUN_8c1f5a5e(auStack_8,ar5,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if (*piVar1 <= iVar2) {
      return 0xfffffffd;
    }
    if (ar4 == piVar1[iVar2 * 2 + 2]) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f5a86\n.set _FUN_8c1f5a86, _FUN_8c1f5a86_def\n");
//@unit 8c1f5ac6
#include "../decls.h"
undefined4 FUN_8c1f5ac6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_18 [8];
  
  piVar2 = (int *)FUN_8c1f5a5e(auStack_18,ar5,ar6,ar7);
  puVar1 = (&FUN_8c013ec0);
  iVar4 = 0;
  while( true ) {
    if (*piVar2 <= iVar4) {
      return 0xfffffffe;
    }
    iVar3 = (*(code *)puVar1)(ar4,piVar2[iVar4 * 2 + 2] + 0x10,0x10,ar7);
    if (iVar3 == 0) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1f5ac6\n.set _FUN_8c1f5ac6, _FUN_8c1f5ac6_def\n");
//@unit 8c1f5b1a
#include "../decls.h"
undefined4 FUN_8c1f5b1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 in_r0;
  
  puVar1 = 0x8c00fff4;
  *(undefined4 *)0x8c00fff0 = ar4;
  *puVar1 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c1f5b1a\n.set _FUN_8c1f5b1a, _FUN_8c1f5b1a_def\n");
//@unit 8c1f5b28
#include "../decls.h"
undefined4 FUN_8c1f5b28_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = ar4;
  FUN_8c1f5a30(auStack_18,ar5,ar6,ar7);
  iStack_c = FUN_8c1f5a5e(auStack_14,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_10,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    ar5 = (undefined4 *)(iStack_c + 8 + iVar1 * 8);
    uVar2 = *ar5;
    ar5[1] = ar5[1] + 1;
  }
  FUN_8c1f5a48(auStack_18,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f5b28\n.set _FUN_8c1f5b28, _FUN_8c1f5b28_def\n");
//@unit 8c1f5b7c
#include "../decls.h"
undefined4 FUN_8c1f5b7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  int iStack_8;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  iStack_8 = FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  iVar1 = FUN_8c1f5ac6(uStack_c,ar5,ar6,ar7);
  if (-1 < iVar1) {
    iVar1 = iVar1 * 8 + iStack_8 + 8;
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
  }
  uVar2 = FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f5b7c\n.set _FUN_8c1f5b7c, _FUN_8c1f5b7c_def\n");
//@unit 8c1f5bb4
#include "../decls.h"
undefined4 FUN_8c1f5bb4_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined1 auStack_14 [4];
  int iStack_10;
  undefined1 auStack_c [8];
  
  iStack_10 = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar1 = (int *)FUN_8c1f5a5e(auStack_c,ar5,ar6,ar7);
  iVar2 = FUN_8c1f5ac6(iStack_10 + 0x10,ar5,ar6,ar7);
  if (iVar2 < 0) {
    iVar2 = *piVar1;
    piVar1[iVar2 * 2 + 2] = iStack_10;
    ar5 = piVar1 + iVar2 * 2 + 2;
    ar5[1] = 0;
    *piVar1 = *piVar1 + 1;
  }
  FUN_8c1f5a48(auStack_14,ar5,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c1f5bb4\n.set _FUN_8c1f5bb4, _FUN_8c1f5bb4_def\n");
//@unit 8c1f5c04
#include "../decls.h"
undefined4 FUN_8c1f5c04_def(undefined4 ar4,undefined4 ar5,int *ar6,int *ar7)

{
  int iVar1;
  int *piVar2;
  int a5;
  undefined4 uVar3;
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined4 uStack_c;
  
  uStack_c = ar4;
  FUN_8c1f5a30(auStack_14,ar5,ar6,ar7);
  piVar2 = (int *)FUN_8c1f5a5e(auStack_10,ar5,ar6,ar7);
  a5 = FUN_8c1f5a86(uStack_c,ar5,ar6,ar7);
  if (a5 < 0) {
    uVar3 = 0xfffffffe;
  }
  else {
    *piVar2 = *piVar2 + -1;
    for (; a5 < *piVar2; a5 = a5 + 1) {
      ar7 = piVar2 + 2;
      piVar2[a5 * 2 + 2] = piVar2[(a5 + 1) * 2 + 2];
      ar7[a5 * 2 + 1] = ar7[(a5 + 1) * 2 + 1];
    }
    iVar1 = a5 * 2;
    ar6 = piVar2 + a5 * 2 + 2;
    a5 = 0;
    piVar2[iVar1 + 2] = 0;
    ar6[1] = 0;
    uVar3 = 0;
  }
  FUN_8c1f5a48(auStack_14,a5,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c1f5c04\n.set _FUN_8c1f5c04, _FUN_8c1f5c04_def\n");
//@unit 8c1f5c9e
#include "../decls.h"
undefined4 FUN_8c1f5c9e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,0x10,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(ar4_00 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7
                          );
      if (iVar3 == 0) break;
      FUN_8c1f5bb4(ar4_00,ar5_00,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f5c9e\n.set _FUN_8c1f5c9e, _FUN_8c1f5c9e_def\n");
//@unit 8c1f5cac
#include "../decls.h"
undefined4
s_Lib_Handle_StartLib_Handle_E_1f5cac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10;
  int a4;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(a4 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7);
      if (iVar3 == 0) break;
      FUN_8c1f5bb4(a4,a5,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _s_Lib_Handle_StartLib_Handle_E_1f5cac\n.set _s_Lib_Handle_StartLib_Handle_E_1f5cac, _s_Lib_Handle_StartLib_Handle_E_1f5cac_def\n");
//@unit 8c1f5cf6
#include "../decls.h"
undefined4 FUN_8c1f5cf6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *ar5_00;
  int ar4_00;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,0x10,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      ar5_00 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      ar4_00 = iVar1 * 0x20 + ar4 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(ar4_00 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7
                          );
      if (iVar3 == 0) break;
      FUN_8c1f5c04(ar4_00,ar5_00,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f5cf6\n.set _FUN_8c1f5cf6, _FUN_8c1f5cf6_def\n");
//@unit 8c1f5d04
#include "../decls.h"
undefined4
s_Lib_Handle_StartLib_Handle_E_1f5d04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char *a5;
  int unaff_r10;
  int a4;
  
  iVar1 = FUN_8c013ec0(ar4 + 0x30,s_Lib_Handle_StartLib_Handle_End_o_8c26c744,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 1;
    while( true ) {
      a5 = s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10;
      a4 = iVar1 * 0x20 + unaff_r10 + 0x20;
      uVar2 = 0x10;
      iVar3 = FUN_8c013ec0(a4 + 0x10,s_Lib_Handle_StartLib_Handle_End_o_8c26c744 + 0x10,0x10,ar7);
      if (iVar3 == 0) break;
      FUN_8c1f5c04(a4,a5,uVar2,ar7);
      iVar1 = iVar1 + 1;
    }
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _s_Lib_Handle_StartLib_Handle_E_1f5d04\n.set _s_Lib_Handle_StartLib_Handle_E_1f5d04, _s_Lib_Handle_StartLib_Handle_E_1f5d04_def\n");
//@unit 8c1f5d6c
#include "../decls.h"
undefined4 FUN_8c1f5d6c_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined4 uStack_c;
  
  uStack_c = ar4;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    return 0xfffffffe;
  }
  uStack_10 = *ar5;
  uStack_f = ar5[1];
  uStack_e = ar5[2];
  uStack_d = ar5[3];
  iVar1 = FUN_8c1eff58(uStack_c,8,&uStack_10,1);
  if (iVar1 < 0) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f5d6c\n.set _FUN_8c1f5d6c, _FUN_8c1f5d6c_def\n");
//@unit 8c1f5dd0
#include "../decls.h"
undefined1 * FUN_8c1f5dd0_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int ar4_00;
  undefined *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int ar5_00;
  int ar6_00;
  int a4;
  int ar4_01;
  
  ar4_00 = 0x8c4727c4;
  puVar3 = 0x8c4727b8;
  puVar2 = 0x8c4727bc;
  ar5_00 = 0;
  *(undefined4 *)0x8c472d04 = ar4;
  puVar4 = 0x8c4727c0;
  *puVar2 = 0;
  puVar5 = (&memset);
  ar6_00 = (int)0x4e0;
  *puVar3 = 1;
  *puVar4 = 0;
  (*(code *)puVar5)(ar4_00,0,ar6_00,ar7);
  if ((ar6 != 0) && (ar5 != 0)) {
    *(undefined4 *)0x8c4727bc = 1;
    FUN_8c1ef78c(ar5,ar6,ar6_00,ar7);
    ar5_00 = ar6;
  }
  iVar6 = 0x8c472ca4;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar7 = FUN_8c1efd26(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(a4 + 0x30) = uVar7;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7);
    *(undefined4 *)(ar4_01 * 4 + iVar6) = 0;
    *(undefined1 *)(0x8c472d0a + ar4_01) = 0;
    *(undefined1 *)(0x8c472d22 + ar4_01) = 0;
    puVar8 = 0x8c472d09;
    uVar1 = 0xa0;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *(undefined4 *)0x8c472d08 = (char)0xc0;
  *puVar8 = (char)uVar1;
  return puVar8;
}

__asm__(".globl _FUN_8c1f5dd0\n.set _FUN_8c1f5dd0, _FUN_8c1f5dd0_def\n");
//@unit 8c1f5ea8
#include "../decls.h"
undefined1 * FUN_8c1f5ea8_def(undefined4 ar4,undefined4 ar5,int ar6,int ar7,int s0)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int ar4_00;
  undefined *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int ar5_00;
  int ar6_00;
  int ar7_00;
  int a4;
  int ar4_01;
  
  ar4_00 = 0x8c4727c4;
  puVar3 = 0x8c4727b8;
  puVar2 = 0x8c4727bc;
  ar5_00 = 0;
  ar6_00 = (int)0x4e0;
  *(undefined4 *)0x8c472d04 = ar4;
  *puVar2 = 0;
  puVar4 = (&memset);
  puVar2 = 0x8c4727c0;
  *puVar3 = 1;
  *puVar2 = 0;
  ar7_00 = ar7;
  (*(code *)puVar4)(ar4_00,0,ar6_00,ar7);
  if ((ar7 != 0) && (ar6 != 0)) {
    *(undefined4 *)0x8c4727bc = 1;
    FUN_8c1ef7e6(ar5,ar6,ar7,s0);
    ar5_00 = ar6;
    ar6_00 = ar7;
    ar7_00 = s0;
  }
  iVar5 = 0x8c472d0a;
  ar4_01 = 0;
  do {
    a4 = ar4_01 * 0x34 + ar4_00;
    uVar6 = FUN_8c1efd26(ar4_01,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(a4 + 0x30) = uVar6;
    s_no_device_1f5f4e(a4,ar5_00,ar6_00,ar7_00);
    *(undefined4 *)(0x8c472ca4 + ar4_01 * 4) = 0;
    *(undefined1 *)(ar4_01 + iVar5) = 0;
    *(undefined1 *)(0x8c472d22 + ar4_01) = 0;
    puVar7 = 0x8c472d09;
    uVar1 = 0xa0;
    ar4_01 = ar4_01 + 1;
  } while (ar4_01 < 0x18);
  *(undefined4 *)0x8c472d08 = (char)0xc0;
  *puVar7 = (char)uVar1;
  return puVar7;
}

__asm__(".globl _FUN_8c1f5ea8\n.set _FUN_8c1f5ea8, _FUN_8c1f5ea8_def\n");
//@unit 8c1f5f4e
#include "../decls.h"
undefined4 s_no_device_1f5f4e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  if (_DAT_8c472d04 == 0) {
    ar4[2] = 0;
    ar4[3] = 0xffffffff;
    ar4[4] = 0;
    ar4[5] = 0;
  }
  else {
    ar4[2] = 0xffffffff;
    ar4[3] = 0;
    ar4[4] = 0xffffffff;
    ar4[5] = 0xffffffff;
  }
  *(undefined2 *)(ar4 + 6) = 0;
  *(undefined2 *)((int)ar4 + 0x1a) = 0;
  *(undefined2 *)((int)ar4 + 0x22) = 0;
  *(undefined2 *)(ar4 + 8) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  ar4[10] = 0;
  ar4[9] = s__no_device__8c26c7c4;
  return 0;
}

__asm__(".globl _s_no_device_1f5f4e\n.set _s_no_device_1f5f4e, _s_no_device_1f5f4e_def\n");
//@unit 8c1f5f8c
#include "../decls.h"
undefined4 FUN_8c1f5f8c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  ushort uVar2;
  short sVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  
  iVar5 = *(int *)(ar5 + 8);
  pbVar8 = (byte *)(iVar5 + 0xb);
  uVar6 = *(ushort *)(iVar5 + 8) | 0xffff0000;
  pcVar9 = (char *)(0x8c472d0a + ar6);
  if (*pbVar8 < *(undefined4 *)0x8c472d08) {
    if (*(undefined4 *)0x8c472d09 < *pbVar8) {
      if (*pcVar9 != '\0') {
        uVar6 = uVar6 & 0xfffdffff;
      }
    }
    else {
      uVar6 = uVar6 | 0x20000;
      *pcVar9 = '\0';
    }
  }
  else {
    uVar6 = uVar6 & 0xfffdffff;
    *pcVar9 = '\x01';
  }
  pbVar7 = (byte *)(iVar5 + 10);
  if (*pbVar7 < *(undefined4 *)0x8c472d08) {
    if (*(undefined4 *)0x8c472d09 < *pbVar7) {
      if (*(char *)(0x8c472d22 + ar6) != '\0') {
        uVar6 = uVar6 & 0xfffeffff;
      }
      goto LAB_8c1f605e;
    }
    cVar4 = '\0';
    uVar6 = uVar6 | 0x10000;
  }
  else {
    uVar6 = uVar6 & 0xfffeffff;
    cVar4 = '\x01';
  }
  *(char *)(0x8c472d22 + ar6) = cVar4;
LAB_8c1f605e:
  uVar1 = 0x10000;
  if (*(undefined4 *)0x8c472d04 == 0) {
    uVar6 = uVar6 ^ 0xffffffff;
  }
  *(uint *)(ar4 + 8) = uVar6;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar7;
  }
  *(ushort *)(ar4 + 0x18) = uVar2;
  if ((*(uint *)(ar4 + 4) & 0x20000) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ushort)*pbVar8;
  }
  *(ushort *)(ar4 + 0x1a) = uVar2;
  if ((*(uint *)(ar4 + 4) & 0x40000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xc) - 0x80;
  }
  *(short *)(ar4 + 0x1c) = sVar3;
  uVar6 = 0x100000;
  if ((*(uint *)(ar4 + 4) & 0x80000) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xd) - 0x80;
  }
  *(short *)(ar4 + 0x1e) = sVar3;
  uVar1 = 0x200000;
  if ((*(uint *)(ar4 + 4) & uVar6) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xe) - 0x80;
  }
  *(short *)(ar4 + 0x20) = sVar3;
  if ((*(uint *)(ar4 + 4) & uVar1) == 0) {
    sVar3 = 0;
  }
  else {
    sVar3 = *(byte *)(iVar5 + 0xf) - 0x80;
  }
  *(short *)(ar4 + 0x22) = sVar3;
  return 0x22;
}

__asm__(".globl _FUN_8c1f5f8c\n.set _FUN_8c1f5f8c, _FUN_8c1f5f8c_def\n");
//@unit 8c1f6120
#include "../decls.h"
uint FUN_8c1f6120_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar4 >> 10 & 0x3fff00;
  if ((0x20000 & ar4) != 0) {
    uVar1 = uVar1 | (int)0xf0;
  }
  if ((ar4 & 0x10000) != 0) {
    uVar1 = uVar1 | 0xf;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f6120\n.set _FUN_8c1f6120, _FUN_8c1f6120_def\n");
//@unit 8c1f6142
#include "../decls.h"
int FUN_8c1f6142_def(undefined4 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *ar5_00;
  undefined4 auStack_10 [2];
  
  ar5_00 = ar5;
  if (((*ar5 & 1) == 0) || (iVar1 = FUN_8c1f002a(auStack_10,ar5,ar6,ar7), -1 < iVar1)
     ) {
    iVar1 = FUN_8c1f0312(5,ar5_00,ar6,ar7);
    if (iVar1 == 1) {
      iVar1 = FUN_8c1f6120(auStack_10[0],ar5_00,ar6,ar7);
      ar4[1] = iVar1;
    }
    else {
      ar4[1] = auStack_10[0];
    }
    *ar4 = ar4[1];
    ar4[9] = ar5 + 5;
  }
  else {
    ar4[1] = 0;
    *ar4 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6142\n.set _FUN_8c1f6142, _FUN_8c1f6142_def\n");
//@unit 8c1f6192
#include "../decls.h"
undefined4 FUN_8c1f6192_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ushort uVar1;
  
  uVar1 = (ushort)*(byte *)(ar6 + 4);
  if (uVar1 == 0xfc) {
    return 0xff0000fc;
  }
  if ((((uVar1 != 0xff) && (uVar1 != 8)) && (uVar1 != 5)) && ((uVar1 != 6 && (uVar1 != 0))))
  {
    return 0xff000000;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f6192\n.set _FUN_8c1f6192, _FUN_8c1f6192_def\n");
//@unit 8c1f61c6
#include "../decls.h"
undefined4 FUN_8c1f61c6_def(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7,undefined4 ain0)

{
  int ar6_00;
  uint *ar5_00;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int ar4_00;
  int ar4_01;
  int iVar4;
  
  if (DAT_8c26c7c0 == 0) {
    return ain0;
  }
  ar4_00 = 0;
  do {
    ar6_00 = FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
    ar5_00 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
    iVar4 = ar4_00 * 0x34;
    ar4_01 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = ar5_00;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = ar5_00;
    ar6 = ar6_00;
    uVar1 = FUN_8c1f6192(ar4_01,ar5_00,ar6_00,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + ar4_00 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(ar4_00,6);
    if (iVar2 == 0) {
      if ((((*ar5_00 & 0x21) == 0) || (*(char *)(ar6_00 + 2) != '\0')) ||
         (*(char *)(ar6_00 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(ar4_01,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(ar4_01,ar5_00,ar6,ar7);
        ar6 = ar4_00;
        iVar2 = FUN_8c1f5f8c(ar4_01,ar6_00,ar4_00,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ 0xffffffff;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = ar5_00 + 5;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 0x18);
  return iVar2;
}

__asm__(".globl _FUN_8c1f61c6\n.set _FUN_8c1f61c6, _FUN_8c1f61c6_def\n");
//@unit 8c1f620e
#include "../decls.h"
int FUN_8c1f620e_def(undefined4 ar4,uint *ar5,int ar6,undefined4 ar7)

{
  int a6;
  uint *a5;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r8;
  undefined4 unaff_r9;
  int unaff_r10;
  int unaff_r13;
  int a4;
  int iVar4;
  
  do {
    a6 = FUN_8c1efd14(unaff_r13,ar5,ar6,ar7);
    a5 = (uint *)FUN_8c1efd26(unaff_r13,ar5,ar6,ar7);
    iVar4 = unaff_r13 * 0x34;
    a4 = iVar4 + -0x73b8d83c;
    *(uint **)(iVar4 + -0x73b8d80c) = a5;
    *(undefined4 *)(iVar4 + -0x73b8d810) = *(undefined4 *)(iVar4 + -0x73b8d834);
    ar5 = a5;
    ar6 = a6;
    uVar1 = FUN_8c1f6192(a4,a5,a6,ar7);
    *(undefined4 *)(&DAT_8c472ca4 + unaff_r13 * 4) = uVar1;
    iVar2 = libgcc_divide_helper_010614(unaff_r13,unaff_r9);
    if (iVar2 == 0) {
      if ((((*a5 & 0x21) == 0) || (*(char *)(a6 + 2) != '\0')) || (*(char *)(a6 + 4) != '\b')) {
        iVar2 = s_no_device_1f5f4e(a4,ar5,ar6,ar7);
      }
      else {
        FUN_8c1f6142(a4,a5,ar6,ar7);
        ar6 = unaff_r13;
        iVar2 = FUN_8c1f5f8c(a4,a6,unaff_r13,ar7);
      }
      *(uint *)(iVar4 + -0x73b8d830) = ~*(uint *)(iVar4 + -0x73b8d834);
      if (_DAT_8c472d04 == 0) {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834);
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) & uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 & *(uint *)(iVar4 + -0x73b8d830);
      }
      else {
        uVar3 = *(uint *)(iVar4 + -0x73b8d810) ^ *(uint *)(iVar4 + -0x73b8d834) ^ unaff_r8;
        ar5 = (uint *)(*(uint *)(iVar4 + -0x73b8d834) | uVar3);
        *(uint **)(iVar4 + -0x73b8d82c) = ar5;
        uVar3 = uVar3 | *(uint *)(iVar4 + -0x73b8d830);
      }
      *(uint *)(iVar4 + -0x73b8d828) = uVar3;
    }
    else {
      *(uint **)(iVar4 + -0x73b8d818) = a5 + 5;
    }
    unaff_r13 = unaff_r13 + 1;
  } while (unaff_r13 < unaff_r10);
  return iVar2;
}

__asm__(".globl _FUN_8c1f620e\n.set _FUN_8c1f620e, _FUN_8c1f620e_def\n");
//@unit 8c1f62cc
#include "../decls.h"
int FUN_8c1f62cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 * 0x34 + 0x8c4727c4;
}

__asm__(".globl _FUN_8c1f62cc\n.set _FUN_8c1f62cc, _FUN_8c1f62cc_def\n");
//@unit 8c1f62f0
#include "../decls.h"
undefined4 FUN_8c1f62f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint ar4_00;
  
  if (*(undefined4 *)0x8c4727bc != 0) {
    FUN_8c1efcae(0x8c4594c0);
  }
  ar6_00 = (int)0x4e0;
  ar5_00 = 0;
  memset(0x8c4727c4);
  uVar2 = (int)0x4e0 + 0x8c4727c4;
  puVar3 = 0x8c472ca4;
  ar4_00 = 0x8c4727c4;
  do {
    uVar1 = s_no_device_1f5f4e(ar4_00,ar5_00,ar6_00,ar7);
    ar4_00 = ar4_00 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (ar4_00 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f62f0\n.set _FUN_8c1f62f0, _FUN_8c1f62f0_def\n");
//@unit 8c1f62f6
#include "../decls.h"
undefined4 FUN_8c1f62f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *in_r1;
  undefined4 a5;
  int ar6_00;
  uint uVar2;
  undefined4 *puVar3;
  uint a4;
  
  if (*in_r1 != 0) {
    FUN_8c1efcae(ar4,ar5,ar6,ar7);
  }
  ar6_00 = (int)0x4e0;
  a5 = 0;
  memset(0x8c4727c4,0,ar6_00,ar7);
  uVar2 = (int)0x4e0 + 0x8c4727c4;
  puVar3 = 0x8c472ca4;
  a4 = 0x8c4727c4;
  do {
    uVar1 = s_no_device_1f5f4e(a4,a5,ar6_00,ar7);
    a4 = a4 + 0x34;
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  } while (a4 < uVar2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f62f6\n.set _FUN_8c1f62f6, _FUN_8c1f62f6_def\n");
//@unit 8c1f6338
#include "../decls.h"
undefined4 FUN_8c1f6338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 * 4 + 0x8c472ca4);
}

__asm__(".globl _FUN_8c1f6338\n.set _FUN_8c1f6338, _FUN_8c1f6338_def\n");
//@unit 8c1f6342
#include "../decls.h"
undefined4 FUN_8c1f6342_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1efd26();
  return uVar1;
}

__asm__(".globl _FUN_8c1f6342\n.set _FUN_8c1f6342, _FUN_8c1f6342_def\n");
//@unit 8c1f636a
#include "../decls.h"
undefined4 FUN_8c1f636a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f0312(0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f636a\n.set _FUN_8c1f636a, _FUN_8c1f636a_def\n");
//@unit 8c1f6386
#include "../decls.h"
undefined4 FUN_8c1f6386_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r14;
  
  if (unaff_r14 != 0) {
    FUN_8c1f026a(8,unaff_r14,ar6,ar7);
    in_r0 = FUN_8c1f026a(9,0xffffffff,ar6,ar7);
    *(undefined4 *)0x8c4727c0 = unaff_r14;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f6386\n.set _FUN_8c1f6386, _FUN_8c1f6386_def\n");
//@unit 8c1f63a6
#include "../decls.h"
undefined4 FUN_8c1f63a6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c1f026a(8,0,ar6,ar7);
  FUN_8c1f026a(9,0,ar6,ar7);
  uVar1 = FUN_8c1f03a6(10,0,ar6,ar7,in_PR);
  _DAT_8c4727c0 = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c1f63a6\n.set _FUN_8c1f63a6, _FUN_8c1f63a6_def\n");
//@unit 8c1f63e4
#include "../decls.h"
undefined4 FUN_8c1f63e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f0312(9,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f63e4\n.set _FUN_8c1f63e4, _FUN_8c1f63e4_def\n");
//@unit 8c1f63f2
#include "../decls.h"
int FUN_8c1f63f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f0392(ar4,ar5,ar6,ar7);
  if (0 < iVar1) {
    iVar1 = *(int *)(&DAT_8c26c7d0 + iVar1 * 4);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f63f2\n.set _FUN_8c1f63f2, _FUN_8c1f63f2_def\n");
//@unit 8c1f6454
#include "../decls.h"
undefined4 FUN_8c1f6454_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
  if (in_r0 == 0) {
    uVar1 = 0;
  }
  else if (in_r0 == 6) {
    uVar1 = 1;
  }
  else if (in_r0 == 0xc) {
    uVar1 = 2;
  }
  else {
    if (in_r0 != 0x12) {
      return in_r0;
    }
    uVar1 = 3;
  }
  uVar1 = FUN_8c1f0398(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f6454\n.set _FUN_8c1f6454, _FUN_8c1f6454_def\n");
//@unit 8c1f6494
#include "../decls.h"
uint FUN_8c1f6494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  int iVar1;
  undefined1 auStack_8 [8];
  
  ar5_00 = FUN_8c1efd26(ar4,ar5,ar6,ar7);
  iVar1 = FUN_8c1f01ae(auStack_8,ar5_00,ar6,ar7);
  return (uint)(-1 < iVar1);
}

__asm__(".globl _FUN_8c1f6494\n.set _FUN_8c1f6494, _FUN_8c1f6494_def\n");
//@unit 8c1f64b6
#include "../decls.h"
undefined * FUN_8c1f64b6_def(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*ar7 & 4) == 0) {
    uVar2 = 0xfffffffe;
  }
  else if (*(char *)(ar6 + 4) == '\a') {
    uVar2 = 0;
  }
  else if (*(char *)(ar6 + 4) == -4) {
    uVar2 = 0xfffffffd;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  if (*(int *)(iVar1 + -0x73b8d2b8) == 0) {
    return &DAT_8c26c80c;
  }
                    
                    
  uVar2 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar2,*(undefined4 *)(iVar1 + -0x73b8d2bc));
  return (undefined *)uVar2;
}

__asm__(".globl _FUN_8c1f64b6\n.set _FUN_8c1f64b6, _FUN_8c1f64b6_def\n");
//@unit 8c1f6516
#include "../decls.h"
undefined4 FUN_8c1f6516_def(int ar4,undefined2 *ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined2 **)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    uStack_18 = *(undefined1 *)ar5;
    uStack_17 = (undefined1)((ushort)*ar5 >> 8);
    uStack_16 = *(undefined1 *)(ar5 + 1);
    uStack_15 = *(undefined1 *)((int)ar5 + 3);
    uStack_14 = *(undefined1 *)(ar5 + 2);
    uStack_13 = *(undefined1 *)((int)ar5 + 5);
    uStack_12 = *(undefined1 *)(ar5 + 3);
    uStack_11 = (&DAT_8c26c824)[*(byte *)((int)ar5 + 7) & 7];
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f070e(ar4,8,0,0,0,&uStack_18,2,&LAB_8c1f64b6);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f6516\n.set _FUN_8c1f6516, _FUN_8c1f6516_def\n");
//@unit 8c1f65e8
#include "../decls.h"
uint FUN_8c1f65e8_def(int ar4,undefined4 ar5,int ar6,uint *ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  
  uVar2 = *ar7;
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  piVar5 = (int *)(iVar1 + -0x73b8d2c0);
  if (((uVar2 & 4) == 0) || (uVar2 = (uint)*(byte *)(ar6 + 4), uVar2 != 8)) {
    uVar3 = 0xfffffffe;
  }
  else {
    iVar4 = *(int *)(ar6 + 8);
    *(ushort *)*piVar5 = (ushort)*(byte *)(iVar4 + 9) * 0x100 + (ushort)*(byte *)(iVar4 + 8);
    *(undefined1 *)(*piVar5 + 2) = *(undefined1 *)(iVar4 + 10);
    *(undefined1 *)(*piVar5 + 3) = *(undefined1 *)(iVar4 + 0xb);
    *(undefined1 *)(*piVar5 + 4) = *(undefined1 *)(iVar4 + 0xc);
    *(undefined1 *)(*piVar5 + 5) = *(undefined1 *)(iVar4 + 0xd);
    *(undefined1 *)(*piVar5 + 6) = *(undefined1 *)(iVar4 + 0xe);
    if ((*(char *)(*piVar5 + 2) == '\x02') && (0x1d < *(byte *)(*piVar5 + 3))) {
      *(undefined1 *)(*piVar5 + 3) = 0x1d;
    }
    uVar3 = 0;
    uVar2 = (uint)(char)(&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
    *(undefined *)(*piVar5 + 7) = (&DAT_8c26c82c)[*(byte *)(iVar4 + 0xf) & 7];
  }
  if (*(int *)(iVar1 + -0x73b8d2b8) != 0) {
                    
                    
    uVar3 = (**(code **)(iVar1 + -0x73b8d2b8))(uVar3,*(undefined4 *)(iVar1 + -0x73b8d2bc));
    return uVar3;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f65e8\n.set _FUN_8c1f65e8, _FUN_8c1f65e8_def\n");
//@unit 8c1f667e
#include "../decls.h"
undefined4 FUN_8c1f667e_def(int ar4,undefined4 ar5,code *ar6,undefined4 ar7)

{
  int iVar1;
  code *a6;
  undefined4 a7;
  
  iVar1 = (uint)(byte)(&DAT_8c26c80c)[ar4] * 0xc;
  *(undefined4 *)(iVar1 + -0x73b8d2c0) = ar5;
  *(undefined4 *)(iVar1 + -0x73b8d2bc) = ar7;
  *(code **)(iVar1 + -0x73b8d2b8) = ar6;
  a6 = ar6;
  a7 = ar7;
  iVar1 = FUN_8c1f6494(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = -2;
  }
  else {
    a6 = (code *)0x0;
    a7 = 0;
    iVar1 = s_FATAL_ERROR_Cannot_get_semap_1f06ae(ar4,8,0,0,0,&LAB_8c1f65e8);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar1 = 0;
    }
  }
  if ((iVar1 < 0) && (ar6 != (code *)0x0)) {
    (*ar6)(iVar1,ar7,a6,a7);
  }
  return 0;
}

__asm__(".globl _FUN_8c1f667e\n.set _FUN_8c1f667e, _FUN_8c1f667e_def\n");
//@unit 8c1f670c
#include "../decls.h"
undefined4 * FUN_8c1f670c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  memset(0x8c472da0,0,(int)0x1af8,ar7);
  puVar2 = 0x8c4748a0;
  puVar1 = 0x8c47489c;
  *(undefined4 *)0x8c474898 = 0;
  *puVar1 = 0;
  *puVar2 = 0;
  return puVar2;
}

__asm__(".globl _FUN_8c1f670c\n.set _FUN_8c1f670c, _FUN_8c1f670c_def\n");
//@unit 8c1f672c
#include "../decls.h"
int * FUN_8c1f672c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int *piVar2;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  undefined4 in_PR;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  piVar2 = (int *)&DAT_8c472da0;
  iVar1 = 0;
  do {
    if (*piVar2 == 0) break;
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 0x35f;
  } while (iVar1 < 2);
  if (iVar1 == 2) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2[0x82] = ar4;
    piVar2[0x83] = 0;
    piVar2[0x81] = 0;
    memset(piVar2 + 0x84,0,0xb68,ar7);
    ar6_00 = 0x100;
    ar5_00 = 0;
    memset(piVar2 + 0x41,0,0x100,ar7);
    FUN_8c01422c(piVar2 + 0x41,ar5_00,ar6_00,ar7,ain0,in_PR);
    *piVar2 = 1;
    _DAT_8c4748a0 = _DAT_8c4748a0 + 1;
  }
  return piVar2;
}

__asm__(".globl _FUN_8c1f672c\n.set _FUN_8c1f672c, _FUN_8c1f672c_def\n");
//@unit 8c1f67c2
#include "../decls.h"
int FUN_8c1f67c2_def(int ar4,int ar5,int ar6,uint ar7)

{
  int iVar1;
  int ar5_00;
  undefined4 ar6_00;
  uint ar7_00;
  int *piVar2;
  undefined1 auStack_b0 [156];
  
  ar7_00 = ar7;
  memset(auStack_b0,0,0x98,ar7);
  if (*(int *)(ar4 + 0x20c) == *(int *)(ar4 + 0x208)) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    for (piVar2 = (int *)(ar4 + 0x210); piVar2[3] != 0; piVar2 = piVar2 + 0x49) {
      iVar1 = iVar1 + 1;
    }
    ar6_00 = 0x100;
    piVar2[2] = 0;
    piVar2[3] = 1;
    ar5_00 = ar4 + 0x104;
    piVar2[5] = *(int *)(ar4 + 0x204);
    *piVar2 = ar6;
    piVar2[1] = ar7 >> 2;
    piVar2[0x46] = 0;
    piVar2[4] = 0;
    piVar2[0x47] = 0;
    memmove(piVar2 + 6,ar5_00,0x100,ar7_00);
    FUN_8c01422c(auStack_b0,ar5_00,ar6_00,ar7_00,ar6,ar5);
    memmove(piVar2 + 6,auStack_b0,0x100,ar7_00);
    piVar2[6] = ((ar7 >> 2) - 1) * 4 + ar6;
    piVar2[8] = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f67c2\n.set _FUN_8c1f67c2, _FUN_8c1f67c2_def\n");
//@unit 8c1f689e
#include "../decls.h"
int FUN_8c1f689e_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  *(int *)(0x20c + ar4) = *(int *)(0x20c + ar4) + -1;
  iVar1 = (int)0x118;
  *(undefined4 *)(ar5 + 0xc) = 0;
  if (*(int *)(iVar1 + ar5) != 0) {
                    
                    
    uVar2 = (**(code **)(iVar1 + ar5))();
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f689e\n.set _FUN_8c1f689e, _FUN_8c1f689e_def\n");
//@unit 8c1f68ca
#include "../decls.h"
undefined4 FUN_8c1f68ca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r12;
  int unaff_r13;
  int *a4;
  
  a4 = 0x8c472da0;
  do {
    if (*a4 != 0) {
      in_r0 = FUN_8c1f68ec(a4,ar5,ar6,ar7);
    }
    unaff_r13 = unaff_r13 + 1;
    a4 = (int *)((int)a4 + (int)0xd7c);
  } while (unaff_r13 < unaff_r12);
  return in_r0;
}

__asm__(".globl _FUN_8c1f68ca\n.set _FUN_8c1f68ca, _FUN_8c1f68ca_def\n");
//@unit 8c1f68ec
#include "../decls.h"
undefined4 FUN_8c1f68ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar5_00;
  
  ar5_00 = 0x210 + ar4;
  for (iVar2 = 0; iVar2 < *(int *)(0x208 + ar4); iVar2 = iVar2 + 1) {
    if (*(int *)(ar5_00 + 0xc) != 0) {
      FUN_8c1f689e(ar4,ar5_00,ar6,ar7);
    }
    ar5_00 = ar5_00 + 0x124;
  }
  uVar1 = memset(ar4,0,(int)0xd7c);
  return uVar1;
}

__asm__(".globl _FUN_8c1f68ec\n.set _FUN_8c1f68ec, _FUN_8c1f68ec_def\n");
//@unit 8c1f68f6
#include "../decls.h"
undefined4 FUN_8c1f68f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int unaff_r12;
  int unaff_r13;
  int a5;
  
  a5 = 0x210 + unaff_r13;
  for (; unaff_r12 < *(int *)(0x208 + unaff_r13); unaff_r12 = unaff_r12 + 1) {
    if (*(int *)(a5 + 0xc) != 0) {
      FUN_8c1f689e(unaff_r13,a5,ar6,ar7);
    }
    a5 = a5 + 0x124;
  }
  uVar1 = memset(0,(int)0xd7c);
  return uVar1;
}

__asm__(".globl _FUN_8c1f68f6\n.set _FUN_8c1f68f6, _FUN_8c1f68f6_def\n");
//@unit 8c1f692a
#include "../decls.h"
undefined4 FUN_8c1f692a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(_DAT_8c474898 + 0xd78) + 0xc) = 3;
  uVar1 = FUN_8c1f69f2(0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f692a\n.set _FUN_8c1f692a, _FUN_8c1f692a_def\n");
//@unit 8c1f6964
#include "../decls.h"
undefined4 FUN_8c1f6964_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar5 * 0x124 + ar4 + 0x210;
  if (*(int *)(iVar1 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,1);
    *(undefined4 *)(iVar1 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6964\n.set _FUN_8c1f6964, _FUN_8c1f6964_def\n");
//@unit 8c1f696e
#include "../decls.h"
undefined4 FUN_8c1f696e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r3;
  int in_MACL;
  undefined4 in_PR;
  
  if (*(int *)(in_MACL + in_r3 + 0xc) == 1) {
    FUN_8c1f69d6(ar4,ar5,ar6,ar7,in_PR);
    *(undefined4 *)(in_MACL + in_r3 + 0xc) = 2;
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f696e\n.set _FUN_8c1f696e, _FUN_8c1f696e_def\n");
//@unit 8c1f6992
#include "../decls.h"
int FUN_8c1f6992_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  int iVar1;
  
  iVar1 = 0x210 + ar4;
  for (a5 = 0; a5 < *(int *)(0x208 + ar4); a5 = a5 + 1) {
    if ((*(int *)(iVar1 + 0xc) != 0) && (*(int *)(iVar1 + 0x10) <= ar5)) {
      FUN_8c1f6964(ar4,a5,ar6,ar7);
    }
    iVar1 = iVar1 + 0x124;
  }
  return (int)0x208;
}

__asm__(".globl _FUN_8c1f6992\n.set _FUN_8c1f6992, _FUN_8c1f6992_def\n");
//@unit 8c1f69d6
#include "../decls.h"
int FUN_8c1f69d6_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  int iVar1;
  
  iVar1 = ar5 * 0x124 + 0x210 + ar4;
  if (*(int *)(iVar1 + 0xc) != 0) {
    in_r0 = (int)0x204;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(in_r0 + ar4);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f69d6\n.set _FUN_8c1f69d6, _FUN_8c1f69d6_def\n");
//@unit 8c1f69f2
#include "../decls.h"
int FUN_8c1f69f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  
  puVar2 = (&FUN_8c01422c);
  piVar1 = 0x8c474898;
  iVar4 = 0x7fffffff;
  if (-1 < ar4) {
    iVar4 = *(int *)((int)0x204 + *(undefined4 *)0x8c474898) + ar4;
  }
  iVar3 = (int)0xd78;
  *(int *)(*(int *)((int)0xd78 + *(undefined4 *)0x8c474898) + 0x14) = iVar4;
  iVar4 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar4 == 0) {
    iVar4 = FUN_8c013e4c(*piVar1 + 4,1);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1f69f2\n.set _FUN_8c1f69f2, _FUN_8c1f69f2_def\n");
//@unit 8c1f69fa
#include "../decls.h"
int FUN_8c1f69fa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  int *unaff_r14;
  char in_T;
  undefined4 in_PR;
  undefined4 in_stack_00000000;
  
  if (in_T == '\0') {
    iVar1 = 0x7fffffff;
  }
  else {
    iVar1 = *(int *)(*unaff_r14 + 0x204) + ar4;
  }
  *(int *)(*(int *)(ain0 + *unaff_r14) + 0x14) = iVar1;
  iVar1 = FUN_8c01422c(*(int *)(*unaff_r14 + 0xd78) + 0x18,ar5,ar6,ar7,in_PR,in_stack_00000000);
  if (iVar1 == 0) {
    iVar1 = FUN_8c013e4c(*unaff_r14 + 4,1,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f69fa\n.set _FUN_8c1f69fa, _FUN_8c1f69fa_def\n");
//@unit 8c1f6a30
#include "../decls.h"
int FUN_8c1f6a30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&FUN_8c01422c);
  piVar1 = 0x8c474898;
  iVar3 = (int)0xd78;
  *(int *)(*(int *)((int)0xd78 + *(undefined4 *)0x8c474898) + 0x14) =
       *(int *)((int)0x204 + *(undefined4 *)0x8c474898) + 1;
  iVar3 = (*(code *)puVar2)(*(int *)(iVar3 + *piVar1) + 0x18);
  if (iVar3 == 0) {
    iVar3 = FUN_8c013e4c(*piVar1 + 4,1);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1f6a30\n.set _FUN_8c1f6a30, _FUN_8c1f6a30_def\n");
//@unit 8c1f6a34
#include "../decls.h"
undefined4 FUN_8c1f6a34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 in_PR;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_FR;
  
  _DAT_8c47489c = _DAT_8c474898;
  a5 = ar4 + 0x210;
  _DAT_8c474898 = ar4;
  FUN_8c01422c(ar4 + 4,ar5,ar6,ar7,
               (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
               (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15,
               in_PR);
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x208); iVar2 = iVar2 + 1) {
    *(int *)(ar4 + 0xd78) = a5;
    iVar1 = *(int *)(a5 + 0xc);
    if (iVar1 != 0) {
      if (iVar1 == 3) {
        FUN_8c1f689e(ar4,a5,ar6,ar7);
      }
      else if (iVar1 == 1) {
        if (*(uint *)(a5 + 0x14) <= *(uint *)(ar4 + 0x204)) {
          FUN_8c013e4c(a5 + 0x18,1,ar6,ar7);
        }
      }
      else if (iVar1 == 2) {
        *(undefined4 *)(a5 + 0xc) = 3;
        *(code **)(a5 + 0x20) = FUN_8c1f692a;
      }
    }
    a5 = a5 + 0x124;
  }
  *(int *)(ar4 + 0x204) = *(int *)(ar4 + 0x204) + 1;
  _DAT_8c474898 = _DAT_8c47489c;
  return 0x204;
}

__asm__(".globl _FUN_8c1f6a34\n.set _FUN_8c1f6a34, _FUN_8c1f6a34_def\n");
//@unit 8c1f6b14
#include "../decls.h"
undefined4 FUN_8c1f6b14_def(undefined4 ar4,undefined4 ar5,int ar6,uint ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint a5;
  
  iVar4 = ar6;
  uVar7 = ar7;
  iVar3 = s_KATANA_FLASH_1f0d98(4,ar4,ar6,ar7);
  puVar2 = (&FUN_8c1f881c);
  puVar1 = (&memmove);
  if (iVar3 == 0) {
    iVar3 = (int)0x3fc;
    iVar9 = 0;
    do {
      iVar4 = (*(code *)puVar2)(iVar9,ar5,iVar4,uVar7);
      if (iVar4 != 0) goto LAB_8c1f6b84;
      iVar4 = 0x3c;
      (*(code *)puVar1)(iVar9 * 0x3c + ar6,ar5,0x3c,uVar7);
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar3);
    iVar9 = s_KATANA_FLASH_1f0d98(3,ar4,iVar4,uVar7);
    if (iVar9 == 0) {
      iVar9 = (int)0x1a8;
      iVar10 = 0;
      do {
        iVar4 = (*(code *)puVar2)(iVar10,ar5,iVar4,uVar7);
        if (iVar4 != 0) {
LAB_8c1f6b84:
          *(undefined4 *)0x8c4748a8 = 7;
          return 0xffffffff;
        }
        iVar4 = 0x3c;
        (*(code *)puVar1)(iVar10 * 0x3c + ar7,ar5,0x3c,uVar7);
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
      iVar4 = s_KATANA_FLASH_1f0d98(4,ar4,iVar4,uVar7);
      if (iVar4 == 0) {
        iVar5 = (int)0x254;
        iVar4 = iVar9;
        uVar7 = ar7;
        uVar8 = ar5;
        iVar10 = FUN_8c1f6d3e(iVar5,iVar9,ar7,ar5);
        iVar5 = FUN_8c1f1080(iVar5,iVar4,uVar7,uVar8);
        if ((iVar10 + 3 <= iVar5) ||
           (iVar4 = FUN_8c1f0e98(0,iVar4,uVar7,uVar8), iVar4 == 0)) {
          s_SEGA_FH01_OK_1f6ce4(2,ar5,uVar7,uVar8);
          puVar1 = (&FUN_8c1f884c);
          iVar10 = (int)0x6360;
          iVar4 = (int)0x254;
          for (a5 = ar7; a5 < ar7 + iVar10; a5 = a5 + 0x3c) {
            iVar5 = (*(code *)puVar1)(iVar4,a5,uVar7,uVar8);
            if (iVar5 == -1) goto LAB_8c1f6cc2;
            iVar4 = iVar4 + 1;
          }
          s_SEGA_FH01_OK_1f6ce4(1,ar5,uVar7,uVar8);
          uVar6 = ar4;
          iVar4 = s_KATANA_FLASH_1f0d98(3,ar4,uVar7,uVar8);
          if ((iVar4 == 0) && (iVar4 = FUN_8c1f0e98(0,uVar6,uVar7,uVar8), iVar4 == 0)
             ) {
            iVar4 = 0;
            do {
              iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar7,uVar7,uVar8);
              if (iVar10 == -1) goto LAB_8c1f6cc2;
              iVar4 = iVar4 + 1;
            } while (iVar4 < iVar9);
            iVar4 = s_KATANA_FLASH_1f0d98(4,ar4,uVar7,uVar8);
            if (iVar4 == 0) {
              s_SEGA_FH01_OK_1f6ce4(3,ar5,uVar7,uVar8);
              uVar6 = 0;
              iVar4 = iVar3;
              iVar9 = ar6;
              uVar8 = ar5;
              iVar10 = FUN_8c1f6d3e(0,iVar3,ar6,ar5);
              iVar5 = FUN_8c1f1080(uVar6,iVar4,iVar9,uVar8);
              if (iVar5 < iVar10 + 2) {
                iVar4 = FUN_8c1f0e98(0,iVar4,iVar9,uVar8);
                if (iVar4 != 0) goto LAB_8c1f6cc2;
                s_SEGA_FH01_OK_1f6ce4(3,ar5,iVar9,uVar8);
              }
              iVar4 = 0;
              do {
                iVar10 = (*(code *)puVar1)(iVar4,iVar4 * 0x3c + ar6,iVar9,uVar8);
                if (iVar10 == -1) goto LAB_8c1f6cc2;
                iVar4 = iVar4 + 1;
              } while (iVar4 < iVar3);
              s_SEGA_FH01_OK_1f6ce4(0,ar5,iVar9,uVar8);
              iVar4 = s_KATANA_FLASH_1f0d98(3,ar4,iVar9,uVar8);
              if (iVar4 == 0) {
                return 0;
              }
            }
          }
        }
      }
    }
  }
LAB_8c1f6cc2:
  *(undefined4 *)0x8c4748a8 = 8;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6b14\n.set _FUN_8c1f6b14, _FUN_8c1f6b14_def\n");
//@unit 8c1f6ce2
#include "../decls.h"
undefined4 s_SEGA_FH01_OK_1f6ce4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar5_00 = 0xff;
  ar6_00 = 0x3c;
  memset(ar5,0xff,0x3c,ar7);
  if (ar4 == 0) {
    ar4_00 = "SEGA_FH01_OK";
  }
  else if (ar4 == 1) {
    ar4_00 = "SEGA_FH01_EXIST";
  }
  else if (ar4 == 2) {
    ar4_00 = "SEGA_FH01_PROCESS1";
  }
  else {
    if (ar4 != 3) {
      return 0xffffffff;
    }
    ar4_00 = "SEGA_FH01_PROCESS2";
  }
  FUN_8c010998(ar4_00,ar5_00,ar6_00,ar7,ar4,in_PR);
  iVar1 = FUN_8c1f884c(0x3fc,ar5,ar6_00,ar7);
  if (iVar1 == -1) {
    return 0xffffffff;
  }
  return iVar1;
}

__asm__(".globl _s_SEGA_FH01_OK_1f6ce4\n.set _s_SEGA_FH01_OK_1f6ce4, _s_SEGA_FH01_OK_1f6ce4_def\n");
//@unit 8c1f6d3e
#include "../decls.h"
int FUN_8c1f6d3e_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar1 = (&FUN_8c1f881c);
  uVar5 = 1;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < ar5) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,ar7,uVar5);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      iVar2 = FUN_8c013ec0(ar7,ar6,0x3c);
      iVar4 = iVar4 + 1;
      if (iVar2 != 0) {
        iVar3 = iVar3 + 1;
      }
      ar6 = ar6 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar4 < ar5);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1f6d3e\n.set _FUN_8c1f6d3e, _FUN_8c1f6d3e_def\n");
//@unit 8c1f6d56
#include "../decls.h"
int FUN_8c1f6d56_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r9;
  undefined4 unaff_r10;
  int iVar3;
  int unaff_r13;
  
  puVar1 = (&FUN_8c1f881c);
  iVar3 = ar5;
  if (0 < unaff_r9) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,unaff_r10,ar6,ar7);
      if (iVar2 != 0) {
        return 0xffffffff;
      }
      ar6 = 0x3c;
      iVar2 = FUN_8c013ec0(unaff_r10,unaff_r13,0x3c,ar7);
      iVar3 = iVar3 + 1;
      if (iVar2 != 0) {
        ar5 = ar5 + 1;
      }
      unaff_r13 = unaff_r13 + 0x3c;
      ar4 = ar4 + 1;
    } while (iVar3 < unaff_r9);
  }
  return ar5;
}

__asm__(".globl _FUN_8c1f6d56\n.set _FUN_8c1f6d56, _FUN_8c1f6d56_def\n");
//@unit 8c1f6dcc
#include "../decls.h"
undefined4 FUN_8c1f6dcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&s_KATANA_FLASH_1f0d98);
  puVar1 = 0x8c4748ac;
  if (4 < ar4) {
    *(undefined4 *)0x8c4748a8 = 2;
    return 0;
  }
  if (*(undefined4 *)0x8c4749b8 != ar4) {
    if (ar4 < 0) {
      ar4 = -ar4;
    }
    *(undefined4 *)0x8c4749b8 = ar4;
    iVar3 = (*(code *)puVar2)(ar4,*puVar1,ar6,ar7);
    if (iVar3 != 0) {
      *(undefined4 *)0x8c4748a8 = iVar3;
      return 0;
    }
  }
  return 1;
}

__asm__(".globl _FUN_8c1f6dcc\n.set _FUN_8c1f6dcc, _FUN_8c1f6dcc_def\n");
//@unit 8c1f6e0c
#include "../decls.h"
undefined4 FUN_8c1f6e0c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 ar5_00;
  
  puVar1 = 0x8c4748b0;
  ar5_00 = *(undefined4 *)0x8c4748b0;
  iVar2 = FUN_8c1f881c(ar4,ar5_00,ar6,ar7);
  if (iVar2 != 0) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6,ar7);
    iVar2 = FUN_8c1f881c(ar4,*puVar1,ar6,ar7);
    if (iVar2 != 0) {
      *(undefined4 *)0x8c4748a8 = 7;
    }
    return 0;
  }
  if (ar5 != 0) {
    memmove(ar5,*puVar1,0x3c,ar7);
  }
  return 1;
}

__asm__(".globl _FUN_8c1f6e0c\n.set _FUN_8c1f6e0c, _FUN_8c1f6e0c_def\n");
//@unit 8c1f6e5e
#include "../decls.h"
undefined4 FUN_8c1f6e5e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 uVar4;
  
  puVar1 = 0x8c4748b0;
  uVar4 = 1;
  memset(*(undefined4 *)0x8c4748b0,(int)0xff,0x3c,ar7);
  ar6_00 = 0xf;
  FUN_8c23c7f4(*puVar1,ar5,0xf,ar7);
  piVar2 = 0x8c4748c0;
  ar5_00 = *puVar1;
  iVar3 = FUN_8c1f884c(ar4,ar5_00,ar6_00,ar7);
  if (iVar3 == 0) {
    *piVar2 = *piVar2 + -1;
  }
  else if (iVar3 != 3) {
    FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7);
    iVar3 = FUN_8c1f884c(ar4,*puVar1,ar6_00,ar7);
    if (iVar3 == 0) {
      *piVar2 = *piVar2 + -1;
    }
    else if (iVar3 != 3) {
      uVar4 = 0;
      *(undefined4 *)0x8c4748a8 = 8;
    }
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f6e5e\n.set _FUN_8c1f6e5e, _FUN_8c1f6e5e_def\n");
//@unit 8c1f6f06
#include "../decls.h"
int FUN_8c1f6f06_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1f1080(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f06\n.set _FUN_8c1f6f06, _FUN_8c1f6f06_def\n");
//@unit 8c1f6f20
#include "../decls.h"
int FUN_8c1f6f20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  _DAT_8c4749b8 = 0xffffffff;
  uVar2 = 3;
  _DAT_8c4748ac = ar4;
  _DAT_8c4748b0 = ar5;
  _DAT_8c4748b4 = ar6;
  _DAT_8c4748b8 = ar7;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  FUN_8c1f875c(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  if (DAT_8c273a10 == '\x02') {
    iVar1 = 1;
    DAT_8c273a10 = '\x01';
  }
  else {
    ar4_00 = 0x8c4749bc;
    DAT_8c273a10 = '\x01';
    FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7);
    _DAT_8c4748bc = 0x8c4749c4;
    iVar1 = FUN_8c1f7558(ar4_00,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      DAT_8c273a10 = '\0';
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f20\n.set _FUN_8c1f6f20, _FUN_8c1f6f20_def\n");
//@unit 8c1f6f2a
#include "../decls.h"
int FUN_8c1f6f2a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0,
                undefined4 *ain1)

{
  int iVar1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  *in_r3 = ar4;
  *in_r2 = ar5;
  *ain1 = ar6;
  _DAT_8c4748b8 = ar7;
  *ain0 = 0xffffffff;
  uVar2 = 3;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  FUN_8c1f875c(uVar2,ar5,ar6,ar7);
  uVar2 = 1;
  if (DAT_8c273a10 == '\x02') {
    iVar1 = 1;
    DAT_8c273a10 = 1;
  }
  else {
    ar4_00 = 0x8c4749bc;
    DAT_8c273a10 = 1;
    FUN_8c1f7d04(0x8c4749bc,1,ar6,ar7);
    _DAT_8c4748bc = 0x8c4749c4;
    iVar1 = FUN_8c1f7558(ar4_00,uVar2,ar6,ar7);
    if (iVar1 == 0) {
      DAT_8c273a10 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f6f2a\n.set _FUN_8c1f6f2a, _FUN_8c1f6f2a_def\n");
//@unit 8c1f6fc8
#include "../decls.h"
undefined4 FUN_8c1f6fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_98 [2];
  undefined1 auStack_96 [58];
  undefined1 auStack_5c [52];
  ushort uStack_28;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x18,0,ar6,ar7);
      if (iVar1 == 1) {
        ar6 = 10;
        iVar1 = FUN_8c013ec0(_DAT_8c4748b0 + 2,ar4,10,ar7);
        if (iVar1 == 0) {
          ar6 = 0x3c;
          memmove(auStack_98,_DAT_8c4748b0,0x3c,ar7);
          iVar1 = FUN_8c1f6e0c(iVar3 * 4 + 0x19,0,ar6,ar7);
          if (iVar1 == 1) {
            ar6 = 0x3c;
            memmove(auStack_5c,_DAT_8c4748b0,0x3c,ar7);
            uVar2 = FUN_8c1f109c(0x6e,auStack_96,ar6,ar7);
            if ((uint)uStack_28 == (uVar2 & 0xffff)) {
              return iVar3;
            }
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f6fc8\n.set _FUN_8c1f6fc8, _FUN_8c1f6fc8_def\n");
//@unit 8c1f70c0
#include "../decls.h"
undefined4 FUN_8c1f70c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  char *in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = 0x8c4748a8;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
LAB_8c1f7102:
    uVar4 = 0;
  }
  else {
    if ((*(undefined4 *)0x8c4748b4 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar4 = 0;
      uVar3 = 0xb;
    }
    else {
      iVar2 = FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,*(undefined4 *)0x8c4748b0,*(undefined4 *)0x8c4748b4,*(undefined4 *)0x8c4748b8);
      if (iVar2 != 0) goto LAB_8c1f7102;
      uVar3 = 0xd;
      uVar4 = 1;
    }
    *puVar1 = uVar3;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1f70c0\n.set _FUN_8c1f70c0, _FUN_8c1f70c0_def\n");
//@unit 8c1f710c
#include "../decls.h"
undefined4 FUN_8c1f710c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c273a10 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c1f710c\n.set _FUN_8c1f710c, _FUN_8c1f710c_def\n");
//@unit 8c1f7134
#include "../decls.h"
undefined4 FUN_8c1f7134_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  undefined4 in_r0;
  
  uVar1 = *ar4;
  if ((ushort)ar5 != 0) {
    if ((uint)uVar1 < (uint)uVar1 + (uint)(ushort)ar5) {
      *ar4 = (ushort)ar5 + uVar1;
    }
    else {
      *ar4 = (ushort)0xfffe;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7134\n.set _FUN_8c1f7134, _FUN_8c1f7134_def\n");
//@unit 8c1f7158
#include "../decls.h"
undefined4 FUN_8c1f7158_def(ushort *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (*ar4 < 0xfffe) {
    *ar4 = *ar4 + 1;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7158\n.set _FUN_8c1f7158, _FUN_8c1f7158_def\n");
//@unit 8c1f716c
#include "../decls.h"
undefined4 FUN_8c1f716c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(undefined4 *)0x8c4748c0 < 2) {
    if ((*(undefined4 *)0x8c4748b4 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar1 = 0;
      *(undefined4 *)0x8c4748a8 = 0xb;
    }
    else {
      FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,*(undefined4 *)0x8c4748b0,*(undefined4 *)0x8c4748b8);
      FUN_8c1f6dcc(0xfffffffd);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f716c\n.set _FUN_8c1f716c, _FUN_8c1f716c_def\n");
//@unit 8c1f7170
#include "../decls.h"
undefined4 FUN_8c1f7170_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *in_r1;
  int in_r3;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*in_r1 < in_r3) {
    ar6_00 = *(undefined4 *)0x8c4748b4;
    if ((ar6_00 == 0) || (*(undefined4 *)0x8c4748b8 == 0)) {
      uVar1 = 0;
      *(undefined4 *)0x8c4748a8 = 0xb;
    }
    else {
      ar7_00 = *(undefined4 *)0x8c4748b8;
      ar5_00 = *(undefined4 *)0x8c4748b0;
      FUN_8c1f6b14(*(undefined4 *)0x8c4748ac,ar5_00,ar6_00,ar7_00);
      FUN_8c1f6dcc(0xfffffffd,ar5_00,ar6_00,ar7_00);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7170\n.set _FUN_8c1f7170, _FUN_8c1f7170_def\n");
//@unit 8c1f71b6
#include "../decls.h"
undefined4 FUN_8c1f71b6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int in_stack_ffffffe8;
  
  uVar1 = 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&stack0xffffffe8,ar6,ar7);
  if (_DAT_8c474986 == -1) {
    _DAT_8c474986 = (short)in_stack_ffffffe8 - (short)_DAT_8c474a00;
  }
  else {
    FUN_8c1f7134(&DAT_8c474986,in_stack_ffffffe8 - _DAT_8c474a00,ar6,ar7,in_stack_ffffffe8);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f71b6\n.set _FUN_8c1f71b6, _FUN_8c1f71b6_def\n");
//@unit 8c1f7264
#include "../decls.h"
undefined4 FUN_8c1f7264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined4 uVar1;
  
  uVar1 = 1;
  if (_DAT_8c47497c == -1) {
    _DAT_8c47497c = _DAT_8c4749fc;
  }
  _DAT_8c474980 = _DAT_8c4749fc;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  ar5_00 = &DAT_8c474a00;
  FUN_8c1f826c(0x8c4749f2,&DAT_8c474a00,ar6,ar7);
  if (_DAT_8c474984 == -1) {
    _DAT_8c474984 = 1;
  }
  else {
    FUN_8c1f7158(&DAT_8c474984,ar5_00,ar6,ar7,ar4);
  }
  if (1 < _DAT_8c4748c0) {
    uVar1 = FUN_8c1f6e5e(ar4 + 3,&DAT_8c474978,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7264\n.set _FUN_8c1f7264, _FUN_8c1f7264_def\n");
//@unit 8c1f72d8
#include "../decls.h"
undefined4 FUN_8c1f72d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 ar6_00;
  int iVar5;
  int iStack_20;
  
  puVar2 = 0x8c4748b0;
  ar6_00 = 0x3c;
  memset(*(undefined4 *)0x8c4748b0,(int)0xff,0x3c,ar7);
  puVar3 = 0x8c4748a8;
  puVar1 = (&FUN_8c1f6e5e);
  iVar5 = 0;
  iStack_20 = ar4;
  do {
    iVar4 = (*(code *)puVar1)(iStack_20,*puVar2,ar6_00,ar7);
    if (iVar4 == 0) {
      *puVar3 = 8;
      return 0;
    }
    iVar5 = iVar5 + 1;
    iStack_20 = iStack_20 + 1;
  } while (iVar5 < 4);
  return 1;
}

__asm__(".globl _FUN_8c1f72d8\n.set _FUN_8c1f72d8, _FUN_8c1f72d8_def\n");
//@unit 8c1f736c
#include "../decls.h"
undefined4 FUN_8c1f736c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  int ar4_00;
  undefined1 *ar5_01;
  undefined4 ar6_00;
  uint ar5_02;
  uint uVar2;
  
  iVar1 = _DAT_8c4749d8;
  _DAT_8c4749dc = _DAT_8c4749e0;
  _DAT_8c474a04 = _DAT_8c474a04 + 1;
  FUN_8c1f8176(0x8c4749f2,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,&DAT_8c4749d8,ar6,ar7);
  ar5_00 = libgcc_divide_helper_01051c(_DAT_8c4749d8 - iVar1,0x3c);
  uVar2 = (uint)DAT_8c4749ec;
  ar5_02 = 0x3c - DAT_8c4749ed;
  if (ar5_02 < ar5_00) {
    FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_02,ar6,ar7,ar4);
    uVar2 = uVar2 + 1;
    ar5_00 = ar5_00 - ar5_02;
    if (0x17 < uVar2) {
      uVar2 = 0;
    }
    while (0x3c < ar5_00) {
      FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,0x3c,ar6,ar7,ar4);
      uVar2 = uVar2 + 1;
      ar5_00 = ar5_00 - 0x3c;
      if (0x17 < (int)uVar2) {
        uVar2 = 0;
      }
    }
  }
  FUN_8c1f7134(uVar2 * 2 + -0x73b8b6be,ar5_00,ar6,ar7,ar4);
  iVar1 = ar4 + 2;
  _DAT_8c4749b2 = _DAT_8c474a04;
  ar6_00 = 10;
  memmove(0x8c4749e8,0x8c4749f2,10,ar7);
  ar4_00 = iVar1 + 1;
  iVar1 = FUN_8c1f6e5e(iVar1,0x8c47493c,ar6_00,ar7);
  if (iVar1 == 1) {
    ar5_01 = &DAT_8c474978;
    iVar1 = FUN_8c1f6e5e(ar4_00,&DAT_8c474978,ar6_00,ar7);
    if (iVar1 == 1) {
      _DAT_8c4748c0 = FUN_8c1f6f06(ar4_00,ar5_01,ar6_00,ar7);
      return 1;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f736c\n.set _FUN_8c1f736c, _FUN_8c1f736c_def\n");
//@unit 8c1f74b0
#include "../decls.h"
undefined4 FUN_8c1f74b0_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)0x8c4748bc;
  iVar3 = ar5;
  iVar2 = FUN_8c1f6fc8(uVar4,ar5,ar6,ar7);
  puVar1 = 0x8c4748a8;
  if (iVar2 < 0) {
    *(undefined4 *)0x8c4748a8 = 9;
  }
  else if ((ar5 <= *(undefined4 *)0x8c4748c0) || (iVar3 = FUN_8c1f716c(uVar4,iVar3,ar6,ar7), iVar3 != 0)) {
    iVar3 = iVar2 * 4 + 0x18;
    FUN_8c1f6e0c(iVar3,0x8c4748c4,ar6,ar7);
    if ((((undefined1 *)3)[0x8c474a28] == '\0') || (*(undefined4 *)0x8c474a28 == '\0')) {
      *puVar1 = 3;
    }
    else {
      if (*(undefined4 *)0x8c4748c5 != '\0') {
                    
                    
        uVar4 = (*ar4)(iVar3);
        return uVar4;
      }
      *puVar1 = 4;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c1f74b0\n.set _FUN_8c1f74b0, _FUN_8c1f74b0_def\n");
//@unit 8c1f752a
#include "../decls.h"
uint FUN_8c1f752a_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (0 < ar5) {
    do {
      bVar1 = *ar4;
      ar4 = ar4 + 1;
      ar5 = ar5 + -1;
      uVar2 = uVar2 << 8 | (uint)bVar1;
    } while (ar5 != 0);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f752a\n.set _FUN_8c1f752a, _FUN_8c1f752a_def\n");
//@unit 8c1f7540
#include "../decls.h"
undefined4 FUN_8c1f7540_def(uint ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined1 *puVar1;
  
  if (0 < ar5) {
    puVar1 = (undefined1 *)(ar6 + ar5 + -1);
    do {
      *puVar1 = (char)ar4;
      ar5 = ar5 + -1;
      puVar1 = puVar1 + -1;
      ar4 = ar4 >> 8;
    } while (ar5 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f7540\n.set _FUN_8c1f7540, _FUN_8c1f7540_def\n");
//@unit 8c1f7558
#include "../decls.h"
undefined4 FUN_8c1f7558_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  int *piStack_160;
  int aiStack_140 [8];
  int aiStack_120 [4];
  int aiStack_110 [24];
  int aiStack_b0 [6];
  int aiStack_98 [24];
  int aiStack_38 [7];
  
  FUN_8c1f8176(0x8c4749e8,ar5,ar6,ar7);
  FUN_8c1f826c(0x8c4749e8,&DAT_8c4749d8,ar6,ar7);
  uVar11 = 0x8c4748c4;
  _DAT_8c474a06 = 0;
  iVar4 = FUN_8c1f7b64(_DAT_8c4748bc,0x8c4748c4,ar6,ar7);
  if (iVar4 == 0) {
    uVar11 = 0;
  }
  else {
    iVar4 = FUN_8c1f6fc8(_DAT_8c4748bc,uVar11,ar6,ar7);
    if (_DAT_8c474972 == -1) {
      _DAT_8c474972 = 0;
    }
    if (_DAT_8c474978 == -1) {
      _DAT_8c474978 = 0;
    }
    if (DAT_8c47497a == -1) {
      DAT_8c47497a = '\0';
    }
    if (DAT_8c47497b == -1) {
      DAT_8c47497b = '\0';
    }
    if (_DAT_8c474940 == -1) {
      _DAT_8c474940 = -2;
    }
    _DAT_8c4748c0 = FUN_8c1f6f06(0xffff,0xff,ar6,ar7);
    if (2 < _DAT_8c4748c0) {
      bVar1 = false;
      FUN_8c1f6e0c(0x14,aiStack_98,ar6,ar7);
      FUN_8c1f6e0c(0x15,aiStack_98 + 0xf,ar6,ar7);
      FUN_8c1f6e0c(0x16,aiStack_110,ar6,ar7);
      piVar9 = aiStack_110 + 0xf;
      FUN_8c1f6e0c(0x17,piVar9,ar6,ar7);
      piVar10 = aiStack_120;
      pbVar14 = &DAT_8c26c8c3;
      pbVar15 = &DAT_8c26c8c7;
      do {
        piVar5 = (int *)FUN_8c1f62cc((uint)*pbVar14,piVar9,ar6,ar7);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piVar10 = *piVar5;
        piVar10 = piVar10 + 1;
      } while (pbVar14 < pbVar15);
      piVar10 = aiStack_38;
      for (iVar12 = 0; iVar12 < 4; iVar12 = iVar12 + 1) {
        piVar5 = aiStack_120 + iVar12;
        if (*piVar5 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_98[iVar8] == *piVar5) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar2 = aiStack_98;
          piVar3 = aiStack_98;
          if (iVar8 == 0x18) {
            for (; piVar9 = piVar3, piVar2 < piVar10; piVar2 = piVar2 + 1) {
              if (*piVar2 == -1) {
                *piVar9 = *piVar5;
                bVar1 = true;
                break;
              }
              piVar3 = piVar9 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x14,aiStack_98,iVar12,piVar10);
        piVar9 = aiStack_98 + 0xf;
        FUN_8c1f6e5e(0x15,piVar9,iVar12,piVar10);
      }
      piStack_160 = aiStack_140;
      pbVar14 = &DAT_8c26c8c7;
      pbVar15 = &DAT_8c26c8cf;
      do {
        piVar5 = (int *)FUN_8c1f6342((uint)*pbVar14,piVar9,iVar12,piVar10);
        if (piVar5 == (int *)0x0) {
          _DAT_8c4748a8 = 0xc;
          return 0;
        }
        pbVar14 = pbVar14 + 1;
        *piStack_160 = *piVar5;
        piStack_160 = piStack_160 + 1;
      } while (pbVar14 < pbVar15);
      piVar9 = aiStack_b0;
      bVar1 = false;
      for (iVar12 = 0; iVar12 < 8; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_140 + iVar12;
        if (*piVar10 != 0) {
          iVar8 = 0;
          do {
            if (aiStack_110[iVar8] == *piVar10) break;
            iVar8 = iVar8 + 1;
          } while (iVar8 < 0x18);
          piVar5 = aiStack_110;
          piVar2 = aiStack_110;
          if (iVar8 == 0x18) {
            for (; piVar5 < piVar9; piVar5 = piVar5 + 1) {
              if (*piVar5 == -1) {
                *piVar2 = *piVar10;
                bVar1 = true;
                break;
              }
              piVar2 = piVar2 + 1;
            }
          }
        }
      }
      if (bVar1) {
        FUN_8c1f6e5e(0x16,aiStack_110,iVar12,piVar9);
        FUN_8c1f6e5e(0x17,aiStack_110 + 0xf,iVar12,piVar9);
      }
      piStack_160 = (int *)0x0;
      uVar13 = 0;
      uVar6 = FUN_8c1f752a(0x8c474936,3,iVar12,piVar9);
      uVar7 = FUN_8c1f752a(0x8c474939,3,iVar12,piVar9);
      for (iVar12 = 0; iVar12 < 0x18; iVar12 = iVar12 + 1) {
        piVar10 = aiStack_120;
        for (piVar9 = aiStack_120; piVar9 < aiStack_110; piVar9 = piVar9 + 1) {
          if ((*piVar9 != 0) && (aiStack_98[iVar12] == *piVar10)) {
            piStack_160 = (int *)((uint)piStack_160 | 1);
          }
          piVar10 = piVar10 + 1;
        }
        piStack_160 = (int *)((int)piStack_160 << 1);
        piVar9 = aiStack_110 + iVar12;
        piVar5 = aiStack_140;
        for (piVar10 = aiStack_140; piVar10 < aiStack_120; piVar10 = piVar10 + 1) {
          if ((*piVar10 != 0) && (*piVar9 == *piVar5)) {
            uVar13 = uVar13 | 1;
          }
          piVar5 = piVar5 + 1;
        }
        uVar13 = uVar13 << 1;
      }
      uVar7 = ~((int)uVar13 >> 1 | ~uVar7);
      FUN_8c1f7540(~((int)piStack_160 >> 1 | ~uVar6),3,0x8c474936,piVar9,uVar7);
      uVar11 = 0x8c474939;
      FUN_8c1f7540(uVar7,3,0x8c474939,piVar9,uVar7);
      FUN_8c1f6e5e(iVar4 * 4 + 0x19,0x8c474900,uVar11,piVar9);
    }
    uVar11 = 1;
    _DAT_8c4749e4 = 0;
    _DAT_8c4749e0 = 0;
    _DAT_8c474a04 = 0;
  }
  return uVar11;
}

__asm__(".globl _FUN_8c1f7558\n.set _FUN_8c1f7558, _FUN_8c1f7558_def\n");
//@unit 8c1f7902
#include "../decls.h"
int FUN_8c1f7902_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = (undefined1)ar6;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  iVar3 = ar7;
  if ((char)ar4 == '\0') {
    iVar2 = 0xb4;
  }
  else {
    if ((char)ar4 != '\x01') goto LAB_8c1f7970;
    iVar2 = 0xae;
  }
  *(short *)(iVar2 + -0x73b8b73c) = *(short *)(iVar2 + -0x73b8b73c) + 1;
  FUN_8c1f8176(0x8c4749f2,0,ar6,ar7);
  FUN_8c1f826c(0x8c4749f2,0x8c474a08,ar6,iVar3);
LAB_8c1f7970:
  if ((char)ar4 != '\x01') {
    DAT_8c47497a = (undefined1)ar5;
    DAT_8c47497b = uVar1;
  }
  if (ar7 != 0) {
    ar6 = 0x20;
    memmove(0x8c474988,ar7,0x20,iVar3);
  }
  _DAT_8c4748a8 = 10;
  _DAT_8c4749dc = _DAT_8c4749dc + -1;
  iVar2 = _DAT_8c4748c0;
  if (((_DAT_8c4749dc == 0) && (_DAT_8c4749e0 != 0)) &&
     (iVar2 = FUN_8c1f79d8(&DAT_8c4749dc,_DAT_8c4748c0,ar6,iVar3), iVar2 == 1)) {
    iVar2 = _DAT_8c4748c0;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c1f7902\n.set _FUN_8c1f7902, _FUN_8c1f7902_def\n");
//@unit 8c1f79d8
#include "../decls.h"
undefined4 FUN_8c1f79d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0(FUN_8c1f736c,2,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f79d8\n.set _FUN_8c1f79d8, _FUN_8c1f79d8_def\n");
//@unit 8c1f79da
#include "../decls.h"
undefined4 FUN_8c1f79da_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0((&FUN_8c1f736c),2,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f79da\n.set _FUN_8c1f79da, _FUN_8c1f79da_def\n");
//@unit 8c1f7a50
#include "../decls.h"
undefined4 FUN_8c1f7a50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 a4;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    a4 = _DAT_8c4748bc;
    ar4_00 = FUN_8c1f6fc8(_DAT_8c4748bc,ar5,ar6,ar7);
    if (ar4_00 < 0) {
      _DAT_8c4748a8 = 9;
    }
    else {
      DAT_8c4748c5 = (undefined1)ar4;
      if (_DAT_8c4748c0 < 1) {
        FUN_8c1f716c(a4,ar5,ar6,ar7);
      }
      FUN_8c1f6e5e(ar4_00,0x8c4748c4,ar6,ar7);
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7a50\n.set _FUN_8c1f7a50, _FUN_8c1f7a50_def\n");
//@unit 8c1f7aae
#include "../decls.h"
undefined4 FUN_8c1f7aae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    uVar1 = FUN_8c1f74b0((&FUN_8c1f72d8),4,ar6,ar7);
    *(undefined4 *)0x8c474a06 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7aae\n.set _FUN_8c1f7aae, _FUN_8c1f7aae_def\n");
//@unit 8c1f7ad6
#include "../decls.h"
int FUN_8c1f7ad6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  int iVar1;
  
  iVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    *(undefined4 *)0x8c4749fc = ar4;
    iVar1 = FUN_8c1f74b0((&FUN_8c1f7264),1,ar6,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)0x8c474a06 = 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f7ad6\n.set _FUN_8c1f7ad6, _FUN_8c1f7ad6_def\n");
//@unit 8c1f7b06
#include "../decls.h"
undefined4 FUN_8c1f7b06_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *in_r2;
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else if (*(undefined4 *)0x8c474a06 == 1) {
    uVar1 = FUN_8c1f74b0((&FUN_8c1f71b6),1,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7b06\n.set _FUN_8c1f7b06, _FUN_8c1f7b06_def\n");
//@unit 8c1f7b64
#include "../decls.h"
undefined4 FUN_8c1f7b64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
    return 0;
  }
  if (ar4 == 0) {
    ar4 = _DAT_8c4748bc;
  }
  iVar1 = ar5;
  FUN_8c1f6dcc(3,ar5,ar6,ar7);
  iVar1 = FUN_8c1f6fc8(ar4,iVar1,ar6,ar7);
  if (iVar1 < 0) {
    _DAT_8c4748a8 = 9;
LAB_8c1f7bfa:
    uVar3 = 0;
  }
  else {
    if (ar4 == 0) {
      memmove(ar5,0x8c4748c4,0xf0,ar7);
    }
    else {
      if (DAT_8c474a2b == '\0') {
        _DAT_8c4748a8 = 3;
        goto LAB_8c1f7bfa;
      }
      if (ar5 != 0) {
        iVar4 = 0;
        iVar1 = iVar1 * 4 + 0x18;
        do {
          iVar2 = FUN_8c1f6e0c(iVar1,ar5,ar6,ar7);
          if (iVar2 != 1) {
            _DAT_8c4748a8 = 7;
            return 0;
          }
          iVar4 = iVar4 + 1;
          ar5 = ar5 + 0x3c;
          iVar1 = iVar1 + 1;
        } while (iVar4 < 4);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1f7b64\n.set _FUN_8c1f7b64, _FUN_8c1f7b64_def\n");
//@unit 8c1f7c40
#include "../decls.h"
undefined4 FUN_8c1f7c40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  
  uVar1 = 0;
  if (DAT_8c273a10 == '\0') {
    _DAT_8c4748a8 = 5;
  }
  else {
    uVar1 = 3;
    FUN_8c1f6dcc(3,ar5,ar6,ar7);
    FUN_8c1f875c(uVar1,ar5,ar6,ar7);
    uVar1 = 0x44c;
    memset(ar4,0xff,0x44c,ar7);
    if (DAT_8c474a2b == '\0') {
      iVar3 = 100;
      puVar2 = (undefined1 *)(ar4 + 10);
      do {
        iVar3 = iVar3 + -1;
        *puVar2 = 0;
        puVar2 = puVar2 + 0xb;
      } while (iVar3 != 0);
      _DAT_8c4748a8 = 3;
      uVar1 = 0;
    }
    else {
      iVar3 = 0x18;
      do {
        FUN_8c1f6e0c(iVar3,0,uVar1,ar7);
        uVar1 = 10;
        FUN_8c23c814(ar4,_DAT_8c4748b0 + 2,10,ar7);
        iVar3 = iVar3 + 4;
        *(undefined1 *)(ar4 + 10) = 0;
        ar4 = ar4 + 0xb;
      } while (iVar3 < 0x1a8);
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f7c40\n.set _FUN_8c1f7c40, _FUN_8c1f7c40_def\n");
//@unit 8c1f7c50
#include "../decls.h"
undefined4 FUN_8c1f7c50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  char *in_r2;
  undefined4 ar4_00;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int ar4_01;
  int unaff_r13;
  undefined4 unaff_r14;
  
  if (*in_r2 == '\0') {
    *(undefined4 *)0x8c4748a8 = 5;
  }
  else {
    ar4_00 = 3;
    FUN_8c1f6dcc(3,ar5,ar6,ar7);
    FUN_8c1f875c(ar4_00,ar5,ar6,ar7);
    iVar5 = (int)0x44c;
    memset(unaff_r13,(int)0xff,iVar5,ar7);
    puVar3 = (&FUN_8c1f6e0c);
    piVar2 = 0x8c4748b0;
    puVar1 = (&FUN_8c23c814);
    if (*(undefined4 *)0x8c474a2b == '\0') {
      iVar5 = 100;
      puVar4 = (undefined1 *)(unaff_r13 + 10);
      do {
        iVar5 = iVar5 + -1;
        *puVar4 = (char)unaff_r14;
        puVar4 = puVar4 + 0xb;
      } while (iVar5 != 0);
      *(undefined4 *)0x8c4748a8 = 3;
    }
    else {
      ar4_01 = 0x18;
      iVar6 = (int)0x1a8;
      do {
        (*(code *)puVar3)(ar4_01,0,iVar5,ar7);
        iVar5 = 10;
        (*(code *)puVar1)(unaff_r13,*piVar2 + 2,10,ar7);
        ar4_01 = ar4_01 + 4;
        *(char *)(unaff_r13 + 10) = (char)unaff_r14;
        unaff_r13 = unaff_r13 + 0xb;
      } while (ar4_01 < iVar6);
      unaff_r14 = 1;
    }
  }
  return unaff_r14;
}

__asm__(".globl _FUN_8c1f7c50\n.set _FUN_8c1f7c50, _FUN_8c1f7c50_def\n");
//@unit 8c1f7d04
#include "../decls.h"
undefined4 FUN_8c1f7d04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f7d30(0x8c008000,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f7d04\n.set _FUN_8c1f7d04, _FUN_8c1f7d04_def\n");
//@unit 8c1f7d1a
#include "../decls.h"
undefined4 FUN_8c1f7d1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f7d30(0x8c008100,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1f7d1a\n.set _FUN_8c1f7d1a, _FUN_8c1f7d1a_def\n");
//@unit 8c1f7d30
#include "../decls.h"
undefined4 FUN_8c1f7d30_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  int iStack_c;
  
  if (ar5 == (undefined4 *)0x0) {
    return 0;
  }
  iStack_c = ar4 + 0x40;
  iStack_10 = ar4 + 0x2b;
  iStack_10 = FUN_8c1f7d80(iStack_10,&uStack_18,&uStack_14,ar7);
  ar5[1] = uStack_18;
  puVar1 = (&memmove);
  *ar5 = uStack_14;
  (*(code *)puVar1)(ar5 + 2,iStack_c,10,ar7);
  *(undefined1 *)((int)ar5 + 0x12) = 0;
  return iStack_10;
}

__asm__(".globl _FUN_8c1f7d30\n.set _FUN_8c1f7d30, _FUN_8c1f7d30_def\n");
//@unit 8c1f7d80
#include "../decls.h"
undefined4 FUN_8c1f7d80_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iStack_24;
  
  iVar2 = 0;
  iVar4 = 0;
  uVar3 = 1;
  iVar5 = 0;
  do {
    if (*(char *)(iVar2 + ar4) == '/') break;
    if (((&DATA_8c125470)[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    pcVar1 = (char *)(iVar2 + ar4);
    iVar2 = iVar2 + 1;
    iVar5 = (int)*pcVar1 + iVar5 * 10 + -0x30;
  } while (iVar2 < 2);
  iStack_24 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (*(char *)(iVar2 + ar4) == ' ') break;
    if (((&DATA_8c125470)[*(byte *)(iVar2 + ar4)] & 4) == 0) {
      uVar3 = 0;
    }
    iVar4 = (int)(char)*(byte *)(iVar2 + ar4) + iVar4 * 10 + -0x30;
    iStack_24 = iStack_24 + 1;
  } while (iStack_24 < 2);
  *ar5 = iVar4;
  *ar6 = iVar5;
  return uVar3;
}

__asm__(".globl _FUN_8c1f7d80\n.set _FUN_8c1f7d80, _FUN_8c1f7d80_def\n");
//@unit 8c1f7e48
#include "../decls.h"
undefined4 game_shutdown_b_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(undefined4 *)0x8c0080fc != '\x01') {
                    
                    
    uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(1);
    return uVar1;
  }
  if (*(undefined4 *)0x8c0080fe == '\x01') {
    uVar1 = (*(code *)0x8c008300)();
    return uVar1;
  }
  *(undefined4 *)0x8c000064 = 0x8c008000;
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(3);
  return uVar1;
}

__asm__(".globl _game_shutdown_b\n.set _game_shutdown_b, _game_shutdown_b_def\n");
//@unit 8c1f7e78
#include "../decls.h"
undefined4 FUN_8c1f7e78_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c1fa0c4(ar4,ar5,ar6,ar7);
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000e0)(2);
  return uVar1;
}

__asm__(".globl _FUN_8c1f7e78\n.set _FUN_8c1f7e78, _FUN_8c1f7e78_def\n");
//@unit 8c1f7ea8
#include "../decls.h"
uint FUN_8c1f7ea8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = FUN_8c1f7eba(ar4,ar5,ar6,ar7);
  return uVar1 >> 8 & 3;
}

__asm__(".globl _FUN_8c1f7ea8\n.set _FUN_8c1f7ea8, _FUN_8c1f7ea8_def\n");
//@unit 8c1f7eba
#include "../decls.h"
uint FUN_8c1f7eba_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (uint)*(undefined4 *)0xff800030 & (int)0x300;
}

__asm__(".globl _FUN_8c1f7eba\n.set _FUN_8c1f7eba, _FUN_8c1f7eba_def\n");
//@unit 8c1f7ecc
#include "../decls.h"
undefined4 FUN_8c1f7ecc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (ar4 == 0) {
    return 0xffffffff;
  }
  DAT_8c273a18 = ar4;
  return 0;
}

__asm__(".globl _FUN_8c1f7ecc\n.set _FUN_8c1f7ecc, _FUN_8c1f7ecc_def\n");
//@unit 8c1f7eea
#include "../decls.h"
undefined4 FUN_8c1f7eea_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *in_r2;
  
  if ((*in_r2 != 0) && ((ar4 == 0 || (ar4 == 1)))) {
    DAT_8c00007e = (undefined1)ar4;
    iVar1 = FUN_8c1f97b4(2,DAT_8c273a18,ar6,ar7);
    if (iVar1 != -1) {
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7eea\n.set _FUN_8c1f7eea, _FUN_8c1f7eea_def\n");
//@unit 8c1f7f1e
#include "../decls.h"
undefined4 FUN_8c1f7f1e_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((ar4 != (undefined4 *)0x0) && (*ar4 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *ar4 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *ar4 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f1e\n.set _FUN_8c1f7f1e, _FUN_8c1f7f1e_def\n");
//@unit 8c1f7f22
#include "../decls.h"
undefined4 FUN_8c1f7f22_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *unaff_r14;
  
  if (((unaff_r14 != (undefined4 *)0x0) && (*unaff_r14 = 0, DAT_8c273a18 != 0)) &&
     (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
    if (DAT_8c00007e == '\0') {
      *unaff_r14 = 0;
    }
    else {
      if (DAT_8c00007e != '\x01') {
        return 0xffffffff;
      }
      *unaff_r14 = 1;
    }
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f22\n.set _FUN_8c1f7f22, _FUN_8c1f7f22_def\n");
//@unit 8c1f7f70
#include "../decls.h"
undefined4 FUN_8c1f7f70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0x30;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 10);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f70\n.set _FUN_8c1f7f70, _FUN_8c1f7f70_def\n");
//@unit 8c1f7f96
#include "../decls.h"
int FUN_8c1f7f96_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + -0x30;
}

__asm__(".globl _FUN_8c1f7f96\n.set _FUN_8c1f7f96, _FUN_8c1f7f96_def\n");
//@unit 8c1f7f9c
#include "../decls.h"
undefined4 FUN_8c1f7f9c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int aiStack_c [2];
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    if ((DAT_8c273a18 != 0) && (iVar1 = FUN_8c1f97b4(0,DAT_8c273a18,ar6,ar7), iVar1 != -1)) {
      iVar1 = (int)DAT_8c00007d;
      if (DAT_8c00007d == -1) {
        FUN_8c1f7ffa(aiStack_c,iVar1,ar6,ar7);
        if (aiStack_c[0] == -1) {
          *ar4 = 1;
        }
        else {
          iVar1 = FUN_8c1f7f96(aiStack_c[0],iVar1,ar6,ar7);
          *ar4 = iVar1;
        }
      }
      else {
        *ar4 = (int)DAT_8c00007d;
      }
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7f9c\n.set _FUN_8c1f7f9c, _FUN_8c1f7f9c_def\n");
//@unit 8c1f7ffa
#include "../decls.h"
undefined4 FUN_8c1f7ffa_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar4 != (int *)0x0) {
    *ar4 = 0;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *ar4 = (int)*(char *)(iVar1 + 0xb);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7ffa\n.set _FUN_8c1f7ffa, _FUN_8c1f7ffa_def\n");
//@unit 8c1f7ffe
#include "../decls.h"
undefined4 FUN_8c1f7ffe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 0xb);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f7ffe\n.set _FUN_8c1f7ffe, _FUN_8c1f7ffe_def\n");
//@unit 8c1f8028
#include "../decls.h"
undefined4 FUN_8c1f8028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *unaff_r14;
  
  if (unaff_r14 != (int *)0x0) {
    *unaff_r14 = 0x30;
    iVar1 = FUN_8c1f8094(ar4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      *unaff_r14 = (int)*(char *)(iVar1 + 0xc);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f8028\n.set _FUN_8c1f8028, _FUN_8c1f8028_def\n");
//@unit 8c1f804e
#include "../decls.h"
undefined4 FUN_8c1f804e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar5_00;
  
  if (ar4 == 0) {
    return 0;
  }
  uVar2 = 0;
  syscall_1f3b1c(0,ar5,ar6,ar7);
  iVar1 = syscall_1f3b44(uVar2,ar5,ar6,ar7);
  uVar2 = 6;
  ar5_00 = iVar1 + 2;
  memmove(ar4,ar5_00,6,ar7);
  iVar1 = FUN_8c1f80d0(iVar1,ar5_00,uVar2,ar7);
  if (iVar1 == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f804e\n.set _FUN_8c1f804e, _FUN_8c1f804e_def\n");
//@unit 8c1f8094
#include "../decls.h"
undefined4 FUN_8c1f8094_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = syscall_1f3b1c(0,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = syscall_1f3b44();
  return uVar2;
}

__asm__(".globl _FUN_8c1f8094\n.set _FUN_8c1f8094, _FUN_8c1f8094_def\n");
//@unit 8c1f80d0
#include "../decls.h"
undefined4 FUN_8c1f80d0_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  bVar3 = 0;
  do {
    iVar1 = iVar2 + 2;
    iVar2 = iVar2 + 1;
    bVar3 = bVar3 + ar4[iVar1];
  } while (iVar2 < 6);
  if ((bVar3 == ar4[1]) && ((byte)~bVar3 == *ar4)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1f80d0\n.set _FUN_8c1f80d0, _FUN_8c1f80d0_def\n");
//@unit 8c1f8114
#include "../decls.h"
undefined4 FUN_8c1f8114_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c474a10 = uVar1;
  *(undefined4 *)0x8c474a14 = 0;
  FUN_8c1f814c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1fa244((int)0x900,(&FUN_8c1f814c),0x5c,0);
  *(undefined4 *)0x8c474a18 = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c1f8114\n.set _FUN_8c1f8114, _FUN_8c1f8114_def\n");
//@unit 8c1f813e
#include "../decls.h"
undefined4 FUN_8c1f813e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)0x8c474a10 = 0;
  uVar1 = FUN_8c1fa54c(*(undefined4 *)0x8c474a18);
  return uVar1;
}

__asm__(".globl _FUN_8c1f813e\n.set _FUN_8c1f813e, _FUN_8c1f813e_def\n");
//@unit 8c1f814c
#include "../decls.h"
uint FUN_8c1f814c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if ((*(undefined4 *)0x8c474a14 & 1) == 0) {
    ar4 = *(undefined4 *)0x8c474a10;
    uVar1 = FUN_8c1f8462(ar4,ar5,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar1;
  }
  uVar1 = *(undefined4 *)0x8c474a14;
  if ((uVar1 & 2) != 0) {
    uVar1 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f814c\n.set _FUN_8c1f814c, _FUN_8c1f814c_def\n");
//@unit 8c1f8176
#include "../decls.h"
uint FUN_8c1f8176_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  undefined4 uVar2;
  int a6;
  int a5;
  
  if ((*(undefined4 *)0x8c474a14 & 1) == 1) {
    uVar2 = FUN_8c1f84d8(ar4,ar5,ar6,ar7);
    FUN_8c1f8300(uVar2,ar4,ar6,ar7);
    *(undefined4 *)0x8c474a10 = uVar2;
  }
  else {
    FUN_8c1f8300(*(undefined4 *)0x8c474a10,ar4,ar6,ar7);
  }
  a6 = (int)*(char *)((int)ar4 + 3);
  a5 = (int)(char)ar4[1];
  uVar2 = FUN_8c1f8614((int)*ar4,a5,a6,ar7);
  *(char *)((int)ar4 + 7) = (char)uVar2;
  uVar2 = FUN_8c1f8650(ar4,a5,a6,ar7);
  puVar1 = 0x8c474a14;
  *(char *)(ar4 + 4) = (char)uVar2;
  return *puVar1;
}

__asm__(".globl _FUN_8c1f8176\n.set _FUN_8c1f8176, _FUN_8c1f8176_def\n");
//@unit 8c1f81dc
#include "../decls.h"
int FUN_8c1f81dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint *a5;
  uint auStack_8 [2];
  
  a5 = auStack_8;
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar1 = aica_reg_1f85a0(ar4,a5,ar6,ar7);
  if (((iVar1 == 0) && (iVar1 = aica_reg_1f85c8(auStack_8[0] & 0xffff,a5,ar6,ar7), iVar1 == 0)) &&
     (iVar1 = aica_reg_1f85ee(auStack_8[0] >> 0x10,a5,ar6,ar7), iVar1 == 0)) {
    uVar2 = FUN_8c1f84d8(0,a5,ar6,ar7);
    if ((uVar2 == auStack_8[0]) || (uVar2 == auStack_8[0] + 1)) {
      *(undefined4 *)0x8c474a10 = uVar2;
      iVar1 = 0;
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1f81dc\n.set _FUN_8c1f81dc, _FUN_8c1f81dc_def\n");
//@unit 8c1f823a
#include "../decls.h"
undefined4 FUN_8c1f823a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = ar5;
  FUN_8c1f826c(ar4,&uStack_c,ar6,ar7);
  FUN_8c1f826c(uStack_8,&uStack_10,ar6,ar7);
  if (uStack_c == uStack_10) {
    uVar1 = 0;
  }
  else if (uStack_10 < uStack_c) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1f823a\n.set _FUN_8c1f823a, _FUN_8c1f823a_def\n");
//@unit 8c1f826c
#include "../decls.h"
uint FUN_8c1f826c_def(ushort *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int aiStack_34 [13];
  
  FUN_8c010794(0x30,aiStack_34,&DAT_8c26c964);
  uVar3 = *ar4 - 0x79c;
  iVar2 = (uVar3 >> 2) + (*ar4 - 0x79e) * 0x16d;
  if (((uVar3 & 3) == 0) && ((byte)ar4[1] < 3)) {
    iVar2 = iVar2 + -1;
  }
  uVar1 = ar4[3];
  *ar5 = (((iVar2 + aiStack_34[(byte)ar4[1] - 1] + (*(byte *)((int)ar4 + 3) - 1)) * 0x18 +
          (uint)(byte)ar4[2]) * 0x3c + (uint)*(byte *)((int)ar4 + 5)) * 0x3c + (uint)(byte)uVar1;
  return (uint)(byte)uVar1;
}

__asm__(".globl _FUN_8c1f826c\n.set _FUN_8c1f826c, _FUN_8c1f826c_def\n");
//@unit 8c1f8300
#include "../decls.h"
undefined4 FUN_8c1f8300_def(undefined4 ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int a5;
  undefined4 d;
  int extraout_r2;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_38 [52];
  
  puVar6 = auStack_38;
  FUN_8c010794(0x30,auStack_38,&DAT_8c26c994);
  uVar7 = 0x3c;
  uVar1 = libgcc_divide_helper_0106dc(ar4,0x3c);
  *(char *)(ar5 + 3) = (char)uVar1;
  uVar1 = libgcc_divide_helper_01051c(ar4,uVar7);
  uVar2 = libgcc_divide_helper_0106dc(uVar1,uVar7);
  *(char *)((int)ar5 + 5) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  uVar7 = 0x18;
  uVar2 = libgcc_divide_helper_0106dc(uVar1,0x18);
  *(char *)(ar5 + 2) = (char)uVar2;
  uVar1 = libgcc_divide_helper_01051c(uVar1,uVar7);
  iVar3 = libgcc_divide_helper_01051c(uVar1,0x16d);
  uVar4 = libgcc_divide_helper_0106dc(uVar1,d);
  uVar5 = iVar3 + 1U >> 2;
  if (uVar4 < uVar5) {
    *ar5 = (short)iVar3 + 0x79d;
    uVar4 = uVar4 + (extraout_r2 - uVar5);
    if ((*ar5 & 3) == 0) {
      uVar4 = uVar4 + 1;
    }
  }
  else {
    uVar4 = uVar4 - uVar5;
    *ar5 = (short)iVar3 + 0x79e;
  }
  uVar5 = 1;
  uVar1 = 0xc;
  if ((*ar5 & 3) == 0) {
    if (*(uint *)(puVar6 + 4) <= uVar4) {
      uVar5 = 2;
      do {
        if (uVar4 < *(int *)(puVar6 + uVar5 * 4) + 1U) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 0xc);
    }
  }
  else {
    uVar5 = 1;
    do {
      if (uVar4 < *(uint *)(puVar6 + uVar5 * 4)) break;
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0xc);
  }
  *(char *)(ar5 + 1) = (char)uVar5;
  *(char *)((int)ar5 + 3) = ((char)uVar4 - (char)*(undefined4 *)(puVar6 + (uVar5 - 1) * 4)) + '\x01'
  ;
  if (((*ar5 & 3) == 0) && (2 < (byte)ar5[1])) {
    *(char *)((int)ar5 + 3) = *(char *)((int)ar5 + 3) + -1;
  }
  iVar3 = (int)*(char *)((int)ar5 + 3);
  a5 = (int)(char)ar5[1];
  uVar2 = FUN_8c1f8614((int)(short)*ar5,a5,iVar3,0xc);
  *(char *)((int)ar5 + 7) = (char)uVar2;
  uVar1 = FUN_8c1f8650(ar5,a5,iVar3,uVar1);
  *(char *)(ar5 + 4) = (char)uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1f8300\n.set _FUN_8c1f8300, _FUN_8c1f8300_def\n");
//@unit 8c1f8462
#include "../decls.h"
int FUN_8c1f8462_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *a4;
  int aiStack_24 [3];
  
  piVar3 = aiStack_24;
  piVar4 = piVar3;
  for (a4 = piVar3; a4 < aiStack_24 + 2; a4 = a4 + 1) {
    iVar2 = aica_reg_1f8544(a4,ar5,ar6,ar7);
    if (iVar2 != 0) {
      *piVar4 = ar4;
    }
    piVar4 = piVar4 + 1;
  }
  bVar1 = false;
  piVar4 = aiStack_24 + 1;
  do {
    if (aiStack_24 + 1 <= piVar3) {
LAB_8c1f84bc:
      if (!bVar1) {
        ar4 = aiStack_24[0];
      }
      return ar4;
    }
    if (*piVar3 != *piVar4) {
      bVar1 = true;
      goto LAB_8c1f84bc;
    }
    piVar3 = piVar3 + 1;
    piVar4 = piVar4 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1f8462\n.set _FUN_8c1f8462, _FUN_8c1f8462_def\n");
//@unit 8c1f84d8
#include "../decls.h"
int FUN_8c1f84d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iStack_20;
  int aiStack_1c [2];
  
  bVar1 = false;
  do {
    iVar2 = aica_reg_1f8544(aiStack_1c,ar5,ar6,ar7);
    if (iVar2 == 0) {
      bVar1 = true;
    }
  } while (!bVar1);
  if (bVar1) {
    bVar1 = false;
    do {
      iVar2 = 0;
      do {
        iVar3 = aica_reg_1f8544(&iStack_20,ar5,ar6,ar7);
        if ((iVar3 != 0) || (aiStack_1c[0] != iStack_20)) break;
        iVar2 = iVar2 + 1;
        aiStack_1c[0] = iStack_20;
      } while (iVar2 < 3);
      if (iVar2 == 3) {
        bVar1 = true;
      }
    } while (!bVar1);
  }
  else {
    iStack_20 = -1;
  }
  return iStack_20;
}

__asm__(".globl _FUN_8c1f84d8\n.set _FUN_8c1f84d8, _FUN_8c1f84d8_def\n");
//@unit 8c1f8544
#include "../decls.h"
undefined4 aica_reg_1f8544_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  undefined4 a6;
  undefined4 a7;
  int iStack_10;
  uint uStack_c;
  
  ar5_00 = &iStack_10;
  a6 = 4;
  a7 = 2;
  iVar1 = FUN_8c1f92c0(0xa0710000,ar5_00,4,2,1,1);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  *ar4 = iStack_10 << 0x10 & 0xffff0000 | uStack_c & 0xffff;
  FUN_8c1f86e4(iStack_10,ar5_00,a6,a7);
  FUN_8c1f86e4(uStack_c,ar5_00,a6,a7);
  return 0;
}

__asm__(".globl _aica_reg_1f8544\n.set _aica_reg_1f8544, _aica_reg_1f8544_def\n");
//@unit 8c1f85a0
#include "../decls.h"
undefined4 aica_reg_1f85a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 auStack_c [4];
  
  auStack_c[0] = 1;
  FUN_8c1f9610(auStack_c,0xa0710008,4,1,0,0);
  return 0;
}

__asm__(".globl _aica_reg_1f85a0\n.set _aica_reg_1f85a0, _aica_reg_1f85a0_def\n");
//@unit 8c1f85c8
#include "../decls.h"
undefined4 aica_reg_1f85c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_c [2];
  
  auStack_c[0] = ar4;
  FUN_8c1f9610(auStack_c,0xa0710004,4,1,0,0);
  return 0;
}

__asm__(".globl _aica_reg_1f85c8\n.set _aica_reg_1f85c8, _aica_reg_1f85c8_def\n");
//@unit 8c1f85ee
#include "../decls.h"
undefined4 aica_reg_1f85ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 auStack_c [2];
  
  auStack_c[0] = ar4;
  FUN_8c1f9610(auStack_c,0xa0710000,4,1,0,0);
  return 0;
}

__asm__(".globl _aica_reg_1f85ee\n.set _aica_reg_1f85ee, _aica_reg_1f85ee_def\n");
//@unit 8c1f8614
#include "../decls.h"
undefined4 FUN_8c1f8614_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((ar5 & 0xff) < 3) {
    ar5 = ar5 + 0xc;
    ar4 = ar4 - 1;
  }
  iVar1 = libgcc_divide_helper_010468((ar5 & 0xff) * 0xd + 8,5);
  uVar2 = libgcc_divide_helper_010614
                    (((int)(ar4 & 0xffff) >> 2) + iVar1 + (ar4 & 0xffff) + (ar6 & 0xff) + -0xf,7);
  return uVar2;
}

__asm__(".globl _FUN_8c1f8614\n.set _FUN_8c1f8614, _FUN_8c1f8614_def\n");
//@unit 8c1f8650
#include "../decls.h"
undefined4 FUN_8c1f8650_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint auStack_8 [2];
  
  FUN_8c1f826c(ar4,auStack_8,ar6,ar7);
  iVar3 = 0x26ee7f;
  if (auStack_8[0] < 0x5cb417d1) {
    iVar1 = libgcc_divide_helper_0106dc(0x5cb417d1 - auStack_8[0],0x26ee7f);
    iVar3 = iVar3 - iVar1;
  }
  else {
    iVar3 = libgcc_divide_helper_0106dc(auStack_8[0] + 0xa34be82f,0x26ee7f);
  }
  uVar2 = libgcc_divide_helper_01051c(iVar3,0x15180);
  return uVar2;
}

__asm__(".globl _FUN_8c1f8650\n.set _FUN_8c1f8650, _FUN_8c1f8650_def\n");
//@unit 8c1f86e4
#include "../decls.h"
uint FUN_8c1f86e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = 0x8c474a20;
  uVar2 = *(undefined4 *)0x8c474a14;
  if ((uVar2 & 8) != 0) {
    if ((undefined4 *)*(undefined4 *)0x8c474a20 < (undefined4 *)*(undefined4 *)0x8c474a24) {
      *(undefined4 *)*(undefined4 *)0x8c474a20 = ar4;
      *piVar1 = *piVar1 + 4;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f86e4\n.set _FUN_8c1f86e4, _FUN_8c1f86e4_def\n");
//@unit 8c1f8710
#include "../decls.h"
uint FUN_8c1f8710_def(byte *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  uVar2 = 0;
  pbVar4 = ar4 + 8;
  do {
    bVar1 = *ar4;
    ar4 = ar4 + 1;
    uVar3 = uVar2;
    if ((&DAT_8c26c9f0)[bVar1 & 0xf] == (&DAT_8c26c9f0)[(int)(uint)bVar1 >> 4]) {
      uVar3 = uVar2 | 1;
    }
    uVar2 = uVar3 << 1;
  } while (ar4 < pbVar4);
  return uVar3 & 0x7fffffff;
}

__asm__(".globl _FUN_8c1f8710\n.set _FUN_8c1f8710, _FUN_8c1f8710_def\n");
//@unit 8c1f875c
#include "../decls.h"
undefined4 FUN_8c1f875c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 a5;
  
  a5 = 0;
  FUN_8c1f6e0c(0,0,ar6,ar7);
  uVar1 = FUN_8c1f8710(*(undefined4 *)0x8c4748b0,a5,ar6,ar7);
  if ((((uVar1 & 0xff) != (int)0xff) && ((uint)*(byte *)*(undefined4 *)0x8c4748b0 == (int)0xff))
     && ((uVar1 & 0xff) != (uint)*(byte *)(*(undefined4 *)0x8c4748b0 + 0x3b))) {
    *(undefined4 *)0x8c4748a8 = 1;
    return 0;
  }
  memmove(0x8c474a28,*(undefined4 *)0x8c4748b0,0x3c,ar7);
  return 1;
}

__asm__(".globl _FUN_8c1f875c\n.set _FUN_8c1f875c, _FUN_8c1f875c_def\n");
//@unit 8c1f87ae
#include "../decls.h"
undefined4 FUN_8c1f87ae_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  
  iVar1 = 0x8c474a28;
  uVar3 = FUN_8c1f8710(0x8c474a28,ar5,ar6,ar7);
  puVar2 = (&FUN_8c1f6e5e);
  *(char *)(iVar1 + 0x3b) = (char)uVar3;
  uVar3 = (*(code *)puVar2)(0,iVar1);
  return uVar3;
}

__asm__(".globl _FUN_8c1f87ae\n.set _FUN_8c1f87ae, _FUN_8c1f87ae_def\n");
//@unit 8c1f881c
#include "../decls.h"
undefined4 FUN_8c1f881c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = FUN_8c1f0f24(ar4,ar5,ar6,ar7);
  puVar1 = (&FUN_8c1f0fa0);
  if (iVar2 == 0) {
    do {
      iVar2 = (*(code *)puVar1)(ar4,ar5,ar6,ar7);
      ar4 = (uint)(iVar2 == 2);
    } while (iVar2 == 2);
    return 0;
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f881c\n.set _FUN_8c1f881c, _FUN_8c1f881c_def\n");
//@unit 8c1f884c
#include "../decls.h"
undefined4 FUN_8c1f884c_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined1 auStack_48 [68];
  
  iVar2 = FUN_8c1f881c(ar4,auStack_48,ar6,ar7);
  if (iVar2 == 0) {
    ar6_00 = 0x3c;
    iVar2 = FUN_8c013ec0(auStack_48,ar5,0x3c,ar7);
    if (iVar2 == 0) {
      return 3;
    }
    iVar2 = FUN_8c1f0f60(ar4,ar5,ar6_00,ar7);
    puVar1 = (&FUN_8c1f0fa0);
    if (iVar2 == 0) {
      do {
        iVar2 = (*(code *)puVar1)(ar4,ar5,ar6_00,ar7);
        ar4 = (uint)(iVar2 == 2);
      } while (iVar2 == 2);
      return 0;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f884c\n.set _FUN_8c1f884c, _FUN_8c1f884c_def\n");
//@unit 8c1f88c0
#include "../decls.h"
uint sh4_tmu_1f88c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  puVar1 = 0xffd80000;
  *(undefined4 *)0xffd80000 = 0;
  pbVar2 = 0xffd80004;
  *(undefined4 *)0xffd80004 = *(undefined4 *)0xffd80004 & 0xfe;
  *(undefined4 *)0xffd80010 = 2;
  *(undefined4 *)0xffd80008 = 0xffffffff;
  *(undefined4 *)(puVar1 + 0xc) = 0xffffffff;
  uVar3 = (int)(char)*pbVar2 | 1;
  *pbVar2 = (byte)uVar3;
  return uVar3;
}

__asm__(".globl _sh4_tmu_1f88c0\n.set _sh4_tmu_1f88c0, _sh4_tmu_1f88c0_def\n");
//@unit 8c1f88e6
#include "../decls.h"
int sh4_tmu_1f88e6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return -1 - *(undefined4 *)0xffd8000c;
}

__asm__(".globl _sh4_tmu_1f88e6\n.set _sh4_tmu_1f88e6, _sh4_tmu_1f88e6_def\n");
//@unit 8c1f88f0
#include "../decls.h"
int FUN_8c1f88f0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 - ar4;
}

__asm__(".globl _FUN_8c1f88f0\n.set _FUN_8c1f88f0, _FUN_8c1f88f0_def\n");
//@unit 8c1f88f6
#include "../decls.h"
int FUN_8c1f88f6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 << 7,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * 0x80 + extraout_r3;
}

__asm__(".globl _FUN_8c1f88f6\n.set _FUN_8c1f88f6, _FUN_8c1f88f6_def\n");
//@unit 8c1f892a
#include "../decls.h"
int FUN_8c1f892a_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ((ar4 & 0x7f) * 100 >> 7) + (ar4 >> 7) * 100;
}

__asm__(".globl _FUN_8c1f892a\n.set _FUN_8c1f892a, _FUN_8c1f892a_def\n");
//@unit 8c1f8a64
#include "../decls.h"
uint sh4_tmu_1f8a64_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)0xffd80000 = 0;
  cVar1 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar1 | 4U);
  return (int)cVar1 | 4U;
}

__asm__(".globl _sh4_tmu_1f8a64\n.set _sh4_tmu_1f8a64, _sh4_tmu_1f8a64_def\n");
//@unit 8c1f8b34
#include "../decls.h"
uint sh4_tmu_1f8b34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = 0xffd80004;
  if (((((ushort)ar4 != 0) && ((ushort)ar4 != 1)) && ((ushort)ar4 != 2)) &&
     (((ushort)ar4 != 3 && ((ushort)ar4 != 4)))) {
    (*(uint*)((uchar*)&ar4+0)) = 2;
  }
  cVar1 = *(undefined4 *)0xffd80004;
  cVar2 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar2 & 0xfbU);
  *(undefined4 *)0xffd80028 = *(undefined4 *)0xffd80028 & 0xfff8 | (ushort)ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}

__asm__(".globl _sh4_tmu_1f8b34\n.set _sh4_tmu_1f8b34, _sh4_tmu_1f8b34_def\n");
//@unit 8c1f8b6e
#include "../decls.h"
uint sh4_tmu_1f8b6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  
  pcVar3 = 0xffd80004;
  cVar1 = *(undefined4 *)0xffd80004;
  cVar2 = *(undefined4 *)0xffd80004;
  *(undefined4 *)0xffd80004 = (char)((int)cVar2 & 0xfbU);
  *(undefined4 *)0xffd80020 = 0xffffffff;
  *(undefined4 *)0xffd80024 = -ar4;
  *pcVar3 = cVar1;
  return (int)cVar2 & 0xfbU;
}

__asm__(".globl _sh4_tmu_1f8b6e\n.set _sh4_tmu_1f8b6e, _sh4_tmu_1f8b6e_def\n");
//@unit 8c1f8b88
#include "../decls.h"
int sh4_tmu_1f8b88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return -1 - *(undefined4 *)0xffd80024;
}

__asm__(".globl _sh4_tmu_1f8b88\n.set _sh4_tmu_1f8b88, _sh4_tmu_1f8b88_def\n");
//@unit 8c1f8b92
#include "../decls.h"
int FUN_8c1f8b92_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  int iVar2;
  undefined4 d;
  
  if ((short)ar5 == 0) {
    iVar2 = 8;
  }
  else if ((short)ar5 == 1) {
    iVar2 = 0x20;
  }
  else if ((short)ar5 == 3) {
    iVar2 = 0x200;
  }
  else if ((short)ar5 == 4) {
    iVar2 = 0x800;
  }
  else {
    iVar2 = 0x80;
  }
  d = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,100);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}

__asm__(".globl _FUN_8c1f8b92\n.set _FUN_8c1f8b92, _FUN_8c1f8b92_def\n");
//@unit 8c1f8be8
#include "../decls.h"
int FUN_8c1f8be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int extraout_r3;
  undefined4 d;
  int iVar2;
  
  if ((short)ar5 == 0) {
    d = 8;
  }
  else if ((short)ar5 == 1) {
    d = 0x20;
  }
  else if ((short)ar5 == 3) {
    d = 0x200;
  }
  else if ((short)ar5 == 4) {
    d = 0x800;
  }
  else {
    d = 0x80;
  }
  iVar2 = 100;
  iVar1 = libgcc_divide_helper_0106dc(ar4,d);
  libgcc_divide_helper_01051c(iVar1 * iVar2,d);
  iVar1 = libgcc_divide_helper_01051c(ar4,d);
  return iVar1 * iVar2 + extraout_r3;
}

__asm__(".globl _FUN_8c1f8be8\n.set _FUN_8c1f8be8, _FUN_8c1f8be8_def\n");
//@unit 8c1f8c6c
#include "../decls.h"
undefined4 g2dma_1f8c6c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*(undefined4 *)0xa05f688c & 1) == 0);
  return 0;
}

__asm__(".globl _g2dma_1f8c6c\n.set _g2dma_1f8c6c, _g2dma_1f8c6c_def\n");
//@unit 8c1f8c80
#include "../decls.h"
undefined4 FUN_8c1f8c80_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int aiStack_10 [2];
  
  do {
    g2dma_1f8c6c(aiStack_10,ar5,ar6,ar7);
  } while (aiStack_10[0] != 1);
  *(int *)(DAT_8c273a28 + 0x110) = *(int *)(DAT_8c273a28 + 0x110) + 1;
  return 0;
}

__asm__(".globl _FUN_8c1f8c80\n.set _FUN_8c1f8c80, _FUN_8c1f8c80_def\n");
//@unit 8c1f8cbc
#include "../decls.h"
uint FUN_8c1f8cbc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte bVar8;
  byte in_Q;
  byte extraout_Q;
  byte bVar9;
  byte in_IMASK;
  byte bVar10;
  byte in_S;
  byte extraout_S;
  byte bVar11;
  byte in_T;
  byte bVar12;
  byte extraout_T;
  
  uVar3 = (uint)in_T | (uint)in_S << 1;
  uVar1 = uVar3 | (uint)in_IMASK << 4 | (uint)in_Q << 8;
  uVar2 = uVar1 | (uint)in_M << 9;
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar11 = (byte)((uVar3 & 2) >> 1);
  bVar10 = 0;
  bVar9 = (byte)(uVar1 >> 8) & 1;
  bVar8 = (byte)((uVar2 & 0x200) >> 9);
  bVar7 = (byte)(((uVar2 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  *(undefined4 *)(*DAT_8c273a28 + *ar4 * 0x20 + 0x14) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 1;
  DAT_8c273a28[*ar4 + 0x3b] = DAT_8c273a28[*ar4 + 0x3b] + 1;
  uVar3 = *ar4 + 0xf;
  if ((int)uVar3 < 0) {
    _DAT_a05f6900 = 1 >> (~uVar3 & 0x1f) + 1;
  }
  else {
    _DAT_a05f6900 = 1 << (uVar3 & 0x1f);
  }
  bVar12 = ar4[7] == 0;
  if (!(bool)bVar12) {
    (*(code *)(uint)ar4[7])(ar4[8],_DAT_a05f6900,&DAT_8c273a28,ar7);
    bVar8 = extraout_M;
    bVar9 = extraout_Q;
    bVar11 = extraout_S;
    bVar12 = extraout_T;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar12 | (uint)bVar11 << 1 | (uint)bVar10 << 4) & 0xffffff0f | (uint)bVar9 << 8 |
         (uint)bVar8 << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e;
}

__asm__(".globl _FUN_8c1f8cbc\n.set _FUN_8c1f8cbc, _FUN_8c1f8cbc_def\n");
//@unit 8c1f8d48
#include "../decls.h"
undefined4 FUN_8c1f8d48_def(int *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = (uint)((*(uint *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x18) & 1) != 0);
  return 0;
}

__asm__(".globl _FUN_8c1f8d48\n.set _FUN_8c1f8d48, _FUN_8c1f8d48_def\n");
//@unit 8c1f8d98
#include "../decls.h"
undefined4 FUN_8c1f8d98_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)(ar5 * 0x34 + DAT_8c273a28 + 4);
  if (piVar1[10] == 1) {
    uVar2 = 0x90101;
  }
  else {
    *(int *)(*piVar1 * 0x34 + DAT_8c273a28 + 4) = *piVar1;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x2c) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x30) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x34) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 8) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0xc) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x10) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x14) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x18) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x1c) = 3;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x20) = 0;
    *(undefined4 *)(*piVar1 * 0x34 + DAT_8c273a28 + 0x24) = 0;
    piVar1[10] = 1;
    *ar4 = piVar1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f8d98\n.set _FUN_8c1f8d98, _FUN_8c1f8d98_def\n");
//@unit 8c1f8eb0
#include "../decls.h"
undefined4 FUN_8c1f8eb0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  DAT_8c273a28[*ar4 * 0xd + 1] = *ar4;
  DAT_8c273a28[*ar4 * 0xd + 0xb] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xc] = 0;
  DAT_8c273a28[*ar4 * 0xd + 0xd] = 0;
  DAT_8c273a28[*ar4 * 0xd + 2] = 0;
  DAT_8c273a28[*ar4 * 0xd + 3] = 0;
  DAT_8c273a28[*ar4 * 0xd + 4] = 0;
  DAT_8c273a28[*ar4 * 0xd + 5] = 0;
  DAT_8c273a28[*ar4 * 0xd + 6] = 0;
  DAT_8c273a28[*ar4 * 0xd + 7] = 3;
  DAT_8c273a28[*ar4 * 0xd + 8] = 0;
  DAT_8c273a28[*ar4 * 0xd + 9] = 0;
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8eb0\n.set _FUN_8c1f8eb0, _FUN_8c1f8eb0_def\n");
//@unit 8c1f8fa8
#include "../decls.h"
undefined4 FUN_8c1f8fa8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x1c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8fa8\n.set _FUN_8c1f8fa8, _FUN_8c1f8fa8_def\n");
//@unit 8c1f8fc8
#include "../decls.h"
undefined4 FUN_8c1f8fc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_8c1f8fa8(DAT_8c273a28 + 4 + uVar1,ar5,ar6,ar7);
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0xd0);
  _DAT_8c474bac = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8fc8\n.set _FUN_8c1f8fc8, _FUN_8c1f8fc8_def\n");
//@unit 8c1f8fcc
#include "../decls.h"
undefined4 FUN_8c1f8fcc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint unaff_r14;
  
  do {
    FUN_8c1f8fa8(DAT_8c273a28 + 4 + unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  _DAT_8c474bac = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f8fcc\n.set _FUN_8c1f8fcc, _FUN_8c1f8fcc_def\n");
//@unit 8c1f900c
#include "../decls.h"
undefined4
FUN_8c1f900c_def(int ar4,uint ar5,uint ar6,uint ar7,uint s0,int s4,int s8,undefined4 s12,undefined4 s16)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0x80000000;
  uVar1 = 0x1ffffe0;
  uVar3 = ar6 & 0x1fffffe0;
  *(uint *)(ar4 + 4) = ar5 & 0x1fffffe0;
  *(uint *)(ar4 + 8) = uVar3;
  *(uint *)(ar4 + 0xc) = ar7 & uVar1 | uVar2;
  *(uint *)(ar4 + 0x10) = s0 & 1;
  if (s4 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 1;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffd;
  }
  if (s8 == 1) {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 4;
  }
  else {
    *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 0xfffffffe;
  }
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) & 7;
  *(undefined4 *)(ar4 + 0x1c) = s12;
  *(undefined4 *)(ar4 + 0x20) = s16;
  *(undefined4 *)(ar4 + 0x30) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1f900c\n.set _FUN_8c1f900c, _FUN_8c1f900c_def\n");
//@unit 8c1f90a4
#include "../decls.h"
undefined4 FUN_8c1f90a4_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  _DAT_a05f78bc = ((ar4 & 0x7f00000) >> 0x14) << 8 | (ar5 & 0x7f00000) >> 0x14 | 0x46590000;
  DAT_8c273a20 = _DAT_a05f78bc;
  return 0;
}

__asm__(".globl _FUN_8c1f90a4\n.set _FUN_8c1f90a4, _FUN_8c1f90a4_def\n");
//@unit 8c1f9108
#include "../decls.h"
undefined4 FUN_8c1f9108_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(*ar4 * 0x20 + *DAT_8c273a28 + 0x1c) = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9108\n.set _FUN_8c1f9108, _FUN_8c1f9108_def\n");
//@unit 8c1f9150
#include "../decls.h"
undefined4 FUN_8c1f9150_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    FUN_8c1f9108(DAT_8c273a28 + 4 + uVar1,ar5,ar6,ar7);
    uVar1 = uVar1 + 0x34;
  } while (uVar1 < 0xd0);
  _DAT_8c474bac = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9150\n.set _FUN_8c1f9150, _FUN_8c1f9150_def\n");
//@unit 8c1f9154
#include "../decls.h"
undefined4 FUN_8c1f9154_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint unaff_r14;
  
  do {
    FUN_8c1f9108(DAT_8c273a28 + 4 + unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 0x34;
  } while (unaff_r14 < 0xd0);
  _DAT_8c474bac = 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9154\n.set _FUN_8c1f9154, _FUN_8c1f9154_def\n");
//@unit 8c1f9194
#include "../decls.h"
undefined4 FUN_8c1f9194_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  int in_stack_ffffffe4;
  
  uVar2 = 0;
  piVar3 = (int *)(*DAT_8c273a28 + *ar4 * 0x20);
  FUN_8c1f8d48(ar4,&stack0xffffffe4,ar6,ar7);
  if (in_stack_ffffffe4 == 1) {
    uVar2 = 0x90180;
  }
  else {
    FUN_8c1f9e32(ar4[2] & 0x1fffffffU | 0xa0000000,ar4[3] & 0x7fffffe0,ar6,ar7,in_stack_ffffffe4);
    piVar3[5] = 0;
    *piVar3 = ar4[1];
    piVar3[1] = ar4[2];
    piVar3[2] = ar4[3];
    piVar3[3] = ar4[4];
    if (ar5 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    piVar3[4] = uVar1 | ar4[5];
    piVar3[5] = 1;
    ar4[0xb] = 1;
    DAT_8c273a28[*ar4 + 0x37] = DAT_8c273a28[*ar4 + 0x37] + 1;
    piVar3[6] = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1f9194\n.set _FUN_8c1f9194, _FUN_8c1f9194_def\n");
//@unit 8c1f9270
#include "../decls.h"
undefined4 g2dma_1f9270_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (uint)((*(undefined4 *)0xa05f688c & 0x10) == 0);
  return 0;
}

__asm__(".globl _g2dma_1f9270\n.set _g2dma_1f9270, _g2dma_1f9270_def\n");
//@unit 8c1f9284
#include "../decls.h"
undefined4 FUN_8c1f9284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int aiStack_10 [2];
  
  do {
    g2dma_1f9270(aiStack_10,ar5,ar6,ar7);
  } while (aiStack_10[0] != 1);
  *(int *)(DAT_8c273a28 + 0x10c) = *(int *)(DAT_8c273a28 + 0x10c) + 1;
  return 0;
}

__asm__(".globl _FUN_8c1f9284\n.set _FUN_8c1f9284, _FUN_8c1f9284_def\n");
//@unit 8c1f92c0
#include "../decls.h"
undefined4 FUN_8c1f92c0_def(undefined4 *ar4,undefined4 *ar5,undefined4 *ar6,int ar7,int s0,int s4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 *ar4_00;
  undefined4 *ar5_00;
  undefined4 *ar6_00;
  int ar7_00;
  int iVar4;
  int unaff_r13;
  
  iVar4 = 0;
  ar5_00 = (undefined4 *)0x1;
  ar4_00 = (undefined4 *)0xffffffff;
  if (s0 == 0) {
    iVar4 = 0;
  }
  else if (s0 == 1) {
    iVar4 = 1;
  }
  else if (s0 == 2) {
    iVar4 = -1;
  }
  if (s4 == 0) {
    unaff_r13 = 0;
  }
  else if (s4 == 1) {
    unaff_r13 = 1;
  }
  else if (s4 == 2) {
    unaff_r13 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f9150(0xffffffff,1,ar6,ar7);
  FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00);
  if (ar6 == (undefined4 *)0x1) {
    ar4_00 = (undefined4 *)0x0;
    ar5_00 = ar4;
    ar6_00 = ar5;
    if (0 < ar7) {
      do {
        uVar1 = *(undefined1 *)ar5_00;
        ar4_00 = (undefined4 *)((int)ar4_00 + 1);
        ar5_00 = (undefined4 *)((int)ar5_00 + iVar4);
        *(undefined1 *)ar6_00 = uVar1;
        ar6_00 = (undefined4 *)((int)ar6_00 + unaff_r13);
      } while ((int)ar4_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x2) {
    ar7_00 = iVar4 * 2;
    ar5_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar6_00 = ar4;
    if (0 < ar7) {
      do {
        uVar2 = *(undefined2 *)ar6_00;
        ar5_00 = (undefined4 *)((int)ar5_00 + 1);
        ar6_00 = (undefined4 *)((int)ar6_00 + ar7_00);
        *(undefined2 *)ar4_00 = uVar2;
        ar4_00 = (undefined4 *)((int)ar4_00 + unaff_r13 * 2);
      } while ((int)ar5_00 < ar7);
    }
  }
  else if (ar6 == (undefined4 *)0x4) {
    ar7_00 = iVar4 * 4;
    ar6_00 = (undefined4 *)0x0;
    ar4_00 = ar5;
    ar5_00 = ar4;
    if (0 < ar7) {
      do {
        uVar3 = *ar4;
        ar6_00 = (undefined4 *)((int)ar6_00 + 1);
        ar4 = ar4 + iVar4;
        *ar5 = uVar3;
        ar5 = ar5 + unaff_r13;
        ar4_00 = ar5;
        ar5_00 = ar4;
      } while ((int)ar6_00 < ar7);
    }
  }
  FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c1f92c0\n.set _FUN_8c1f92c0, _FUN_8c1f92c0_def\n");
//@unit 8c1f9408
#include "../decls.h"
undefined4
s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 a6;
  int iVar3;
  int iVar4;
  
  log_message(PTR_s_syG2_Ver_1_01_12_Build_Dec_06_19_8c273a30,ar5,ar6,ar7);
  a6 = 0x114;
  uVar2 = 0xff;
  DAT_8c273a28 = (undefined4 *)&DAT_8c474a80;
  memset(&DAT_8c474a80,0xff,0x114,ar7);
  *DAT_8c273a28 = 0xa05f7800;
  DAT_8c273a28[0x35] = 1;
  DAT_8c273a28[0x36] = 0;
  iVar3 = 0;
  do {
    DAT_8c273a28[iVar3 * 0xd + 1] = iVar3;
    DAT_8c273a28[iVar3 * 0xd + 0xb] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xc] = 0;
    DAT_8c273a28[iVar3 * 0xd + 0xd] = 0;
    DAT_8c273a28[iVar3 * 0xd + 2] = 0;
    DAT_8c273a28[iVar3 * 0xd + 3] = 0;
    DAT_8c273a28[iVar3 * 0xd + 4] = 0;
    DAT_8c273a28[iVar3 * 0xd + 5] = 0;
    DAT_8c273a28[iVar3 * 0xd + 6] = 0;
    DAT_8c273a28[iVar3 * 0xd + 7] = 3;
    DAT_8c273a28[iVar3 * 0xd + 8] = 0;
    DAT_8c273a28[iVar3 * 0xd + 9] = 0;
    FUN_8c1f8eb0(DAT_8c273a28 + iVar3 * 0xd + 1,uVar2,a6,ar7);
    iVar4 = iVar3 + 1;
    DAT_8c273a28[iVar3 + 0x37] = 0;
    DAT_8c273a28[iVar3 + 0x3f] = 0;
    DAT_8c273a28[iVar3 + 0x3b] = 0;
    iVar3 = iVar4;
  } while (iVar4 < 4);
  DAT_8c273a28[0x43] = 0;
  DAT_8c273a28[0x44] = 0;
  FUN_8c1f90a4(0xc000000,0xcffffff,a6,ar7);
  DAT_8c273a28[0x35] = 1;
  puVar1 = DAT_8c273a28 + 10;
  uVar2 = FUN_8c1fa244(0xa60,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 1);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x17;
  uVar2 = FUN_8c1fa244(0xa80,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0xe);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x24;
  uVar2 = FUN_8c1fa244(0xaa0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x1b);
  *puVar1 = uVar2;
  puVar1 = DAT_8c273a28 + 0x31;
  uVar2 = FUN_8c1fa244(0xac0,FUN_8c1f8cbc,0x10,DAT_8c273a28 + 0x28);
  *puVar1 = uVar2;
  _DAT_8c474bac = 0;
  return 0;
}

__asm__(".globl _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416\n.set _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416, _s_nsyG2_Ver_1_01_12_Build_Dec__1f9416_def\n");
//@unit 8c1f9610
#include "../decls.h"
undefined4 FUN_8c1f9610_def(undefined4 *ar4,undefined4 *ar5,int ar6,int ar7,int s0,int s4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 ar4_00;
  undefined4 ar5_00;
  int ar6_00;
  int ar7_00;
  uint uVar3;
  int unaff_r9;
  int unaff_r10;
  undefined4 *puStack_30;
  undefined4 *puStack_2c;
  
  ar5_00 = 1;
  ar4_00 = 0xffffffff;
  if (s0 == 0) {
    unaff_r10 = 0;
  }
  else if (s0 == 1) {
    unaff_r10 = 1;
  }
  else if (s0 == 2) {
    unaff_r10 = -1;
  }
  if (s4 == 0) {
    unaff_r9 = 0;
  }
  else if (s4 == 1) {
    unaff_r9 = 1;
  }
  else if (s4 == 2) {
    unaff_r9 = -1;
  }
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c1f9150(0xffffffff,1,ar6,ar7);
  puVar1 = (&FUN_8c1f9284);
  FUN_8c1f9284(ar4_00,ar5_00,ar6_00,ar7_00);
  puVar2 = (&FUN_8c1f8c80);
  puStack_30 = ar4;
  puStack_2c = ar5;
  if (ar6 == 1) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined1 *)puStack_2c = *(undefined1 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9);
      } while ((int)uVar3 < ar7);
    }
  }
  else if (ar6 == 2) {
    uVar3 = 0;
    if (0 < ar7) {
      do {
        if ((uVar3 & 7) == 0) {
          (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
          (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
        }
        uVar3 = uVar3 + 1;
        *(undefined2 *)puStack_2c = *(undefined2 *)puStack_30;
        puStack_30 = (undefined4 *)((int)puStack_30 + unaff_r10 * 2);
        puStack_2c = (undefined4 *)((int)puStack_2c + unaff_r9 * 2);
      } while ((int)uVar3 < ar7);
    }
  }
  else if ((ar6 == 4) && (uVar3 = 0, 0 < ar7)) {
    do {
      if ((uVar3 & 7) == 0) {
        (*(code *)puVar1)(ar4_00,ar5_00,ar6_00,ar7_00);
        (*(code *)puVar2)(ar4_00,ar5_00,ar6_00,ar7_00);
      }
      uVar3 = uVar3 + 1;
      *puStack_2c = *puStack_30;
      puStack_30 = puStack_30 + unaff_r10;
      puStack_2c = puStack_2c + unaff_r9;
    } while ((int)uVar3 < ar7);
  }
  FUN_8c1f8fc8(ar4_00,ar5_00,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c1f9610\n.set _FUN_8c1f9610, _FUN_8c1f9610_def\n");
//@unit 8c1f97b4
#include "../decls.h"
undefined4 FUN_8c1f97b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int a4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *a5;
  undefined1 *puVar7;
  undefined4 a7;
  undefined1 auStack_50 [7];
  undefined1 auStack_49 [57];
  
  puVar5 = auStack_50;
  puVar7 = auStack_50;
  a5 = auStack_50;
  iVar3 = s_KATANA_FLASH_1f0d98(2,ar5,ar6,ar7);
  if (iVar3 == -8) {
    iVar3 = FUN_8c1f0e98(0,ar5,ar6,ar7);
  }
  if ((iVar3 == 0) &&
     (iVar3 = FUN_8c1f0f24(5,auStack_50,ar6,ar7), puVar2 = (&FUN_8c1f0fa0),
     iVar3 == 0)) {
    iVar3 = 0;
    do {
      iVar3 = (*(code *)puVar2)(iVar3,puVar5,ar6,ar7);
    } while (iVar3 == 2);
    if (iVar3 == 1) {
      iVar3 = syscall_1f3b44(1,puVar5,ar6,ar7);
      puVar5 = (undefined1 *)(iVar3 + 0x10);
      if (ar4 == 0) {
        for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
          uVar1 = *puVar7;
          puVar7 = puVar7 + 1;
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
        }
        return 0;
      }
      puVar7 = auStack_49;
      puVar5 = (undefined1 *)(iVar3 + 0x17);
      a7 = 1;
      for (iVar3 = 0; iVar3 < 5; iVar3 = iVar3 + 1) {
        if (((ar4 & 1) != 0) && (*puVar7 = *puVar5, iVar3 == 4)) {
          puVar6 = puVar5 + -2;
          puVar7[-1] = puVar5[-1];
          puVar5 = puVar5 + -3;
          puVar7[-2] = *puVar6;
          puVar7 = puVar7 + -3;
          *puVar7 = *puVar5;
        }
        puVar5 = puVar5 + -1;
        ar4 = (int)ar4 >> 1;
        puVar7 = puVar7 + -1;
      }
      iVar4 = FUN_8c1f0f60(5,auStack_50,iVar3,1);
      a4 = 0;
      if (iVar4 == 0) {
        do {
          a4 = (*(code *)puVar2)(a4,a5,iVar3,a7);
        } while (a4 == 2);
        if (a4 == 1) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c1f97b4\n.set _FUN_8c1f97b4, _FUN_8c1f97b4_def\n");
//@unit 8c1f98b0
#include "../decls.h"
undefined4 syscall_1f98b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b8)(0x0);
  return uVar1;
}

__asm__(".globl _syscall_1f98b0\n.set _syscall_1f98b0, _syscall_1f98b0_def\n");
//@unit 8c1f98c4
#include "../decls.h"
undefined4 syscall_1f98c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b8)(0x1);
  return uVar1;
}

__asm__(".globl _syscall_1f98c4\n.set _syscall_1f98c4, _syscall_1f98c4_def\n");
//@unit 8c1f98d8
#include "../decls.h"
undefined4 syscall_1f98d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b8)(0x2);
  return uVar1;
}

__asm__(".globl _syscall_1f98d8\n.set _syscall_1f98d8, _syscall_1f98d8_def\n");
//@unit 8c1f98ec
#include "../decls.h"
undefined4 syscall_1f98ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)*(undefined4 *)0x8c0000b8)(0x3);
  return uVar1;
}

__asm__(".globl _syscall_1f98ec\n.set _syscall_1f98ec, _syscall_1f98ec_def\n");
//@unit 8c1f9914
#include "../decls.h"
uint FUN_8c1f9914_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  byte in_MD;
  byte bVar4;
  byte in_RB;
  byte bVar5;
  byte in_BL;
  byte bVar6;
  byte in_FD;
  byte bVar7;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar8;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar6 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar4 = bVar6 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar8 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar7 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar6 = (bVar6 & 0x10) >> 4;
  bVar5 = (bVar4 & 0x20) >> 5;
  bVar4 = ((bVar4 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1fa0c4(ar4,ar5,ar6,ar7);
  puVar1 = 0xff00001c;
  uVar2 = (uint)0x800;
  *(undefined4 *)0xff00001c = ar4;
  uVar3 = (uint)(int)0xffffff0f;
  *puVar1 = *puVar1 & (int)(int)0xfffff7ff | uVar2;
  *puVar1 = *puVar1 & 0xfffffff7 | 8;
  return (int)(short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar8 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar7 << 0xf | (uint)bVar6 << 0x1c | (uint)bVar5 << 0x1d |
         (uint)bVar4 << 0x1e) & uVar3;
}

__asm__(".globl _FUN_8c1f9914\n.set _FUN_8c1f9914, _FUN_8c1f9914_def\n");
//@unit 8c1f9980
#include "../decls.h"
undefined4 FUN_8c1f9980_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = 0x9fffffe0 & ar4;
    if (0x30000 <= ar5) {
                    
                    
      uVar1 = (*(code *)(0xa0000000 | 0x8c1f9a14))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockInvalidate(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f9980\n.set _FUN_8c1f9980, _FUN_8c1f9980_def\n");
//@unit 8c1f9a14
#include "../decls.h"
uint FUN_8c1f9a14_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  int unaff_r12;
  uint uVar3;
  int unaff_r13;
  uint uVar4;
  uint unaff_r14;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte bVar5;
  ushort in_stack_00000000;
  
  uVar3 = (unaff_r12 + unaff_r13) - 1U & 0x1fffffe0;
  uVar4 = _DAT_ff00001c >> 5 & 1;
  for (uVar1 = 0; uVar1 < 0x2000; uVar1 = uVar1 + 0x20) {
    uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
    if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
      CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
    }
    if ((uVar4 != 0) && (uVar1 == 0xfe0)) break;
  }
  if ((_DAT_ff00001c >> 7 & 1) == 0) {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  else {
    for (uVar1 = 0x2000; bVar5 = 0, uVar1 < 0x4000; uVar1 = uVar1 + 0x20) {
      uVar2 = *(uint *)(uVar1 | 0xf4000000) & 0x1ffffc00 | uVar1 | uVar1 & 0x1fff | uVar3;
      if (((unaff_r14 & ~(unaff_r14 & 0x80000000)) <= uVar2) && (uVar2 <= uVar3)) {
        CacheBlockInvalidate(uVar2 | unaff_r14 & 0x80000000);
      }
      if ((uVar4 != 0) && (bVar5 = 1, uVar1 == 0x2fe0)) break;
    }
  }
  return (in_stack_00000000 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xffffff0f | (uint)in_Q << 8 |
         (uint)in_M << 9 | (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d |
         (uint)in_MD << 0x1e;
}

__asm__(".globl _FUN_8c1f9a14\n.set _FUN_8c1f9a14, _FUN_8c1f9a14_def\n");
//@unit 8c1f9bde
#include "../decls.h"
undefined4 FUN_8c1f9bde_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = 0x9fffffe0 & ar4;
    if (0x10000 <= ar5) {
                    
                    
      uVar1 = (*(code *)(0xa0000000 | 0x8c1f9c68))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockPurge(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f9bde\n.set _FUN_8c1f9bde, _FUN_8c1f9bde_def\n");
//@unit 8c1f9e32
#include "../decls.h"
undefined4 FUN_8c1f9e32_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  byte in_IMASK;
  byte in_S;
  
  if (ar5 != 0) {
    uVar3 = 0x9fffffe0 & ar4;
    if (0x10000 <= ar5) {
                    
                    
      uVar1 = (*(code *)(0xa0000000 | 0x8c1f9ebc))
                        ((short)((((uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4),0);
      return uVar1;
    }
    uVar2 = (ar4 & 0x1f) + ar5 + 0x1f >> 5;
    do {
      CacheBlockWriteBack(uVar3);
      uVar2 = uVar2 - 1;
      uVar3 = uVar3 + 0x20;
    } while (uVar2 != 0);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1f9e32\n.set _FUN_8c1f9e32, _FUN_8c1f9e32_def\n");
//@unit 8c1fa0c4
#include "../decls.h"
undefined4 FUN_8c1fa0c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
                    
                    
  uVar1 = (*(code *)(0xa0000000 | 0x8c1fa0f0))
                    ((short)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4));
  return uVar1;
}

__asm__(".globl _FUN_8c1fa0c4\n.set _FUN_8c1fa0c4, _FUN_8c1fa0c4_def\n");
//@unit 8c1fa0f0
#include "../decls.h"
uint FUN_8c1fa0f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  bool bVar5;
  
  uVar1 = 0xf4000000;
  if ((*(undefined4 *)0xff00001c >> 5 & 1) == 1) {
    uVar4 = (uint)0x1000;
    uVar3 = 0;
    do {
      uVar2 = uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar2;
    } while (uVar2 < uVar4);
    uVar4 = (uint)0x3000;
    uVar3 = (int)0x2000;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  else {
    uVar4 = (uint)0x4000;
    uVar3 = 0;
    do {
      bVar5 = uVar4 <= uVar3 + 0x20;
      *(undefined4 *)(uVar3 | uVar1) = 0;
      uVar3 = uVar3 + 0x20;
    } while (!bVar5);
  }
  return ((ushort)s0 & 0xf) << 4 |
         ((uint)bVar5 | (uint)in_S << 1 | (uint)in_IMASK << 4 | (uint)in_Q << 8 | (uint)in_M << 9 |
          (uint)in_FD << 0xf | (uint)in_BL << 0x1c | (uint)in_RB << 0x1d | (uint)in_MD << 0x1e) &
         (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa0f0\n.set _FUN_8c1fa0f0, _FUN_8c1fa0f0_def\n");
//@unit 8c1fa1f4
#include "../decls.h"
uint FUN_8c1fa1f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar10;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  uVar8 = (int)0x1000 + 0x8c474bc8;
  uVar6 = 0x8c474bc8;
  do {
    *(undefined4 *)(uVar6 + 0xc) = 0;
    uVar6 = uVar6 + 0x10;
  } while (uVar6 < uVar8);
  puVar9 = (undefined4 *)((int)0x300 + (int)0x8c475bc8);
  puVar7 = 0x8c475bc8;
  do {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
    bVar10 = puVar9 <= puVar7;
  } while (!bVar10);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar10 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa1f4\n.set _FUN_8c1fa1f4, _FUN_8c1fa1f4_def\n");
//@unit 8c1fa244
#include "../decls.h"
uint FUN_8c1fa244_def(undefined4 ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  uint ar6_00;
  uint uVar9;
  uint uVar10;
  int in_VBR;
  
  iVar2 = 0x8c475bc8;
  iVar1 = 0x8c474bc8;
  iVar3 = (int)(short)ar4;
  iVar4 = iVar3 >> 4;
  uVar9 = ar6 | 0x80000000;
  iVar5 = *(int *)(iVar4 * 4 + 0x8c475bc8);
  iVar8 = iVar5;
  while ((iVar6 = iVar5, iVar6 != 0 && (*(uint *)(iVar6 + 0xc) < uVar9))) {
    iVar8 = iVar6;
    iVar5 = *(int *)(iVar6 + 4);
  }
  ar6_00 = (uint)0x100;
  uVar10 = 1;
  do {
    if ((*(uint *)(uVar10 * 0x10 + 0x8c474bc8 + 0xc) & 0x80000000) == 0) break;
    uVar10 = uVar10 + 1;
  } while (uVar10 < ar6_00);
  if (uVar10 < ar6_00) {
    if ((iVar6 == 0) && (iVar8 == 0)) {
      if (iVar3 < 0x900) {
        *(undefined **)((int)0x200 + in_VBR + ((int)0xfffffe00 + iVar3 >> 3)) = (&FUN_8c1fa3f2)
        ;
      }
      else if (iVar3 == 0x900) {
        FUN_8c20759a((&DATA_8c1fa416),0,ar6_00,0x80000000);
      }
      else if (iVar3 == 0x920) {
        FUN_8c2075bc((&DATA_8c1fa460),0,ar6_00,0x80000000);
      }
      else {
        *(undefined **)(0x22c + in_VBR) = (&DATA_8c1fa486);
      }
      puVar7 = (undefined4 *)(uVar10 * 0x10 + iVar1);
      *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      puVar7[1] = 0;
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
      uVar9 = (uint)(byte)((byte)(short)ar4 >> 5);
      if (iVar3 >> 8 == 10) {
        *(undefined4 *)0xa05f6920 = *(undefined4 *)0xa05f6920 | 1 << uVar9 + 0xc;
      }
      else if (iVar3 >> 8 == 0xb) {
        *(undefined4 *)0xa05f6924 = *(undefined4 *)0xa05f6924 | 1 << uVar9;
      }
    }
    else {
      puVar7 = (undefined4 *)(uVar10 * 0x10 + 0x8c474bc8);
      if (iVar6 == *(int *)(iVar4 * 4 + 0x8c475bc8)) {
        puVar7[1] = iVar6;
        *(undefined4 **)(iVar4 * 4 + iVar2) = puVar7;
      }
      else {
        *(undefined4 **)(iVar8 + 4) = puVar7;
        puVar7[1] = iVar6;
      }
      *puVar7 = ar5;
      puVar7[2] = ar7;
      puVar7[3] = uVar9;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

__asm__(".globl _FUN_8c1fa244\n.set _FUN_8c1fa244, _FUN_8c1fa244_def\n");
//@unit 8c1fa3f2
#include "../decls.h"
undefined1 * FUN_8c1fa3f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = &DAT_8c475bc8;
  for (puVar2 = *(undefined4 **)(&DAT_8c475bc8 + ((int)(short)ar4 >> 4) * 4);
      puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)puVar2[1]) {
    puVar1 = (undefined1 *)(*(code *)*puVar2)(puVar2[2]);
  }
  return puVar1;
}

__asm__(".globl _FUN_8c1fa3f2\n.set _FUN_8c1fa3f2, _FUN_8c1fa3f2_def\n");
//@unit 8c1fa3fa
#include "../decls.h"
int FUN_8c1fa3fa_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  uint in_r3;
  int unaff_r14;
  int iVar1;
  undefined4 *puVar2;
  
  if ((int)in_r3 < 0) {
    iVar1 = unaff_r14 >> (~in_r3 & 0x1f) + 1;
  }
  else {
    iVar1 = unaff_r14 << (in_r3 & 0x1f);
  }
  for (puVar2 = *(undefined4 **)(in_r0 + iVar1 * 4); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    in_r0 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fa3fa\n.set _FUN_8c1fa3fa, _FUN_8c1fa3fa_def\n");
//@unit 8c1fa41a
#include "../decls.h"
uint FUN_8c1fa41a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  uint in_r3;
  undefined4 *puVar2;
  
  uVar1 = in_r0 & in_r3 | 0x60;
  for (puVar2 = (undefined4 *)*(undefined4 *)0x8c475e08; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fa41a\n.set _FUN_8c1fa41a, _FUN_8c1fa41a_def\n");
//@unit 8c1fa464
#include "../decls.h"
uint FUN_8c1fa464_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_r0;
  uint uVar1;
  uint in_r3;
  undefined4 *puVar2;
  
  uVar1 = in_r0 & in_r3 | 0x60;
  for (puVar2 = (undefined4 *)*(undefined4 *)0x8c475e10; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)puVar2[1]) {
    uVar1 = (*(code *)*puVar2)(puVar2[2],ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fa464\n.set _FUN_8c1fa464, _FUN_8c1fa464_def\n");
//@unit 8c1fa496
#include "../decls.h"
uint * FUN_8c1fa496_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  char in_T;
  
  if ((in_T != '\x01') && (in_r0 == (uint *)0x36)) {
    uVar6 = (*(undefined4 *)0xa05f6900 & *(undefined4 *)0xa05f6920) >> 0xc;
    if (uVar6 == 0) {
      uVar7 = *(undefined4 *)0xa05f6904;
      uVar6 = *(undefined4 *)0xa05f6924;
      iVar4 = (int)0xb00;
      uVar3 = 0;
      while( true ) {
        if ((int)uVar3 < 0) {
          in_r0 = (uint *)(1 >> (~uVar3 & 0x1f) + 1);
        }
        else {
          in_r0 = (uint *)(1 << (uVar3 & 0x1f));
        }
        if (in_r0 == (uint *)0x10) break;
        if ((int)uVar3 < 0) {
          uVar2 = 1 >> (~uVar3 & 0x1f) + 1;
        }
        else {
          uVar2 = 1 << (uVar3 & 0x1f);
        }
        if ((uVar2 & uVar7 & uVar6) != 0) {
          FUN_8c1fa3f2(uVar3 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar3 = uVar3 + 1;
      }
    }
    else {
      iVar5 = (int)0x80;
      iVar4 = (int)0xa00;
      uVar7 = 0;
      in_r0 = 0xa05f6900;
      while( true ) {
        if ((int)uVar7 < 0) {
          iVar1 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          iVar1 = 1 << (uVar7 & 0x1f);
        }
        if (iVar1 == iVar5) break;
        if ((int)uVar7 < 0) {
          uVar3 = 1 >> (~uVar7 & 0x1f) + 1;
        }
        else {
          uVar3 = 1 << (uVar7 & 0x1f);
        }
        if ((uVar3 & uVar6) != 0) {
          in_r0 = (uint *)FUN_8c1fa3f2(uVar7 * 0x20 + iVar4,ar5,ar6,ar7);
        }
        uVar7 = uVar7 + 1;
      }
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fa496\n.set _FUN_8c1fa496, _FUN_8c1fa496_def\n");
//@unit 8c1fa54c
#include "../decls.h"
uint FUN_8c1fa54c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  short sVar3;
  uint uVar4;
  int *ar6_00;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int in_VBR;
  byte in_MD;
  byte bVar10;
  byte in_RB;
  byte bVar11;
  byte in_BL;
  byte bVar12;
  byte in_FD;
  byte bVar13;
  byte in_M;
  byte extraout_M;
  byte extraout_M_00;
  byte bVar14;
  byte in_Q;
  byte extraout_Q;
  byte extraout_Q_00;
  byte bVar15;
  byte in_IMASK;
  byte bVar16;
  byte in_S;
  byte extraout_S;
  byte extraout_S_00;
  byte bVar17;
  byte in_T;
  bool bVar18;
  
  puVar2 = 0xa05f6920;
  puVar1 = 0xa05f6924;
  uVar4 = (uint)in_T | (uint)in_S << 1;
  uVar6 = uVar4 | (uint)in_IMASK << 4;
  uVar9 = uVar6 | (uint)in_Q << 8;
  uVar7 = uVar9 | (uint)in_M << 9;
  bVar12 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar10 = bVar12 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar17 = (byte)((uVar4 & 2) >> 1);
  bVar16 = (byte)((uVar6 & 0xf0) >> 4);
  bVar15 = (byte)(uVar9 >> 8) & 1;
  bVar14 = (byte)((uVar7 & 0x200) >> 9);
  bVar13 = (byte)(((uVar7 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar12 = (bVar12 & 0x10) >> 4;
  bVar11 = (bVar10 & 0x20) >> 5;
  bVar10 = ((bVar10 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  iVar5 = ar4 * 0x10;
  uVar4 = 1;
  do {
    iVar8 = uVar4 * 0x10 + 0x8c474bc8;
    if ((*(int *)(iVar8 + 4) == iVar5 + 0x8c474bc8) &&
       ((*(uint *)(iVar8 + 0xc) & 0x80000000) != 0)) break;
    uVar4 = uVar4 + 1;
  } while (uVar4 < (uint)(int)0x100);
  if (uVar4 == (int)0x100) {
    iVar5 = iVar5 + 0x8c474bc8;
    uVar4 = (uint)0x90;
    uVar9 = 1;
    uVar6 = (uint)0xc0;
    iVar8 = (int)0x200;
    do {
      if (*(int *)(uVar9 * 4 + 0x8c475bc8) == iVar5) {
        ar6_00 = (int *)(uVar9 * 4 + 0x8c475bc8);
        *ar6_00 = *(int *)(iVar5 + 4);
        *(undefined4 *)(iVar5 + 0xc) = 0;
        if (*ar6_00 == 0) {
          if (uVar9 == uVar4) {
            FUN_8c20759a(0,0,ar6_00,uVar4);
            bVar14 = extraout_M;
            bVar15 = extraout_Q;
            bVar17 = extraout_S;
          }
          else if (uVar9 == (int)0x92) {
            FUN_8c2075bc(0,0,ar6_00,uVar4);
            bVar14 = extraout_M_00;
            bVar15 = extraout_Q_00;
            bVar17 = extraout_S_00;
          }
          else {
            uVar7 = uVar9 * 0x10;
            sVar3 = (short)uVar7 >> 8;
            uVar4 = (uVar7 & 0xff) >> 5;
            if (sVar3 == 10) {
              *puVar2 = *puVar2 & ~(1 << uVar4 + 0xc);
            }
            else if (sVar3 == 0xb) {
              *puVar1 = *puVar1 & ~(1 << uVar4);
            }
            *(undefined **)(in_VBR + (uVar7 + (int)(int)0xfffffe00 >> 3) + iVar8) = (&DATA_8c1faa94);
          }
        }
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
    bVar18 = uVar9 == uVar6;
  }
  else {
    iVar5 = iVar5 + 0x8c474bc8;
    *(undefined4 *)(uVar4 * 0x10 + 0x8c474bc8 + 4) = *(undefined4 *)(iVar5 + 4);
    *(undefined4 *)(iVar5 + 0xc) = 0;
    bVar18 = false;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar18 | (uint)bVar17 << 1 | (uint)bVar16 << 4 | (uint)bVar15 << 8 |
          (uint)bVar14 << 9 | (uint)bVar13 << 0xf | (uint)bVar12 << 0x1c | (uint)bVar11 << 0x1d |
         (uint)bVar10 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa54c\n.set _FUN_8c1fa54c, _FUN_8c1fa54c_def\n");
//@unit 8c1fa6b8
#include "../decls.h"
undefined4 FUN_8c1fa6b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined4 in_PR;
  
  FUN_8c1fa758(ar4,ar5,ar6,ar7,in_PR);
  ar5_00 = 0;
  uVar1 = 0;
  FUN_8c1fae2c(0,0,ar6,ar7);
  FUN_8c1fb924(uVar1,ar5_00,ar6,ar7);
  uVar1 = 0x105;
  (*(code *)0xac1f9914)(0x105,ar5_00,ar6,ar7);
  uVar1 = sh4_tmu_1f88c0(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fa6b8\n.set _FUN_8c1fa6b8, _FUN_8c1fa6b8_def\n");
//@unit 8c1fa6e2
#include "../decls.h"
undefined4 FUN_8c1fa6e2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c1fa1f4(ar4,ar5,ar6,ar7);
  uVar1 = s_nsyG2_Ver_1_01_12_Build_Dec__1f9416(0);
  return uVar1;
}

__asm__(".globl _FUN_8c1fa6e2\n.set _FUN_8c1fa6e2, _FUN_8c1fa6e2_def\n");
//@unit 8c1fa6f2
#include "../decls.h"
uint FUN_8c1fa6f2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte in_MD;
  byte bVar1;
  byte in_RB;
  byte bVar2;
  byte in_BL;
  byte bVar3;
  byte in_FD;
  byte bVar4;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar5;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = (byte)((((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4);
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1fb9d2(ar4,ar5,ar6,ar7);
  FUN_8c1fa72e(ar4,ar5,ar6,ar7);
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4 | (uint)extraout_Q << 8 |
          (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c | (uint)bVar2 << 0x1d |
         (uint)bVar1 << 0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fa6f2\n.set _FUN_8c1fa6f2, _FUN_8c1fa6f2_def\n");
//@unit 8c1fa72e
#include "../decls.h"
undefined4 FUN_8c1fa72e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (*(code *)((uint)(&FUN_8c1fa73e) | 0xa0000000))();
  return uVar1;
}

__asm__(".globl _FUN_8c1fa72e\n.set _FUN_8c1fa72e, _FUN_8c1fa72e_def\n");
//@unit 8c1fa73e
#include "../decls.h"
undefined4 FUN_8c1fa73e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  undefined4 in_r0;
  undefined4 *puVar3;
  
  piVar1 = 0xff00001c;
  *(undefined4 *)0xff00001c = 0;
  iVar2 = 0xf4004000;
  puVar3 = 0xf4000000;
  do {
    *puVar3 = 0;
    puVar3 = puVar3 + 8;
  } while ((int)puVar3 < iVar2);
  *piVar1 = (int)0x800;
  *piVar1 = 0;
  return in_r0;
}

__asm__(".globl _FUN_8c1fa73e\n.set _FUN_8c1fa73e, _FUN_8c1fa73e_def\n");
//@unit 8c1fa758
#include "../decls.h"
undefined4 FUN_8c1fa758_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  int *piVar1;
  
  _DAT_ffd00000 = 0;
  _DAT_ffd00004 = 0;
  _DAT_ffd00008 = 0;
  _DAT_ffd0000c = 0;
  for (piVar1 = &DAT_8c26cb34; *piVar1 != 0; piVar1 = piVar1 + 2) {
    *(int *)*piVar1 = piVar1[1];
  }
  return ain0;
}

__asm__(".globl _FUN_8c1fa758\n.set _FUN_8c1fa758, _FUN_8c1fa758_def\n");
//@unit 8c1fa7d0
#include "../decls.h"
uint s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def(uint ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  char *a4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_stack_ffffffd4;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffd4 >> 0x10),(short)ar4);
  uVar1 = ar4 & 0xffff;
  if ((((uVar1 != 0x300) && (uVar1 != 0x340)) && (uVar1 != 0x380)) && (uVar1 != 0x3c0)) {
    return uVar1;
  }
  _DAT_8c475ec8 = ar5;
  iVar2 = FUN_8c1fab8c(ar4,ar5,ar6,ar7);
  FUN_8c1fad9a("\r\n --- ADDRESS CHECKER TRAP --- \r\n",ar5,ar6,ar7,ain0);
  FUN_8c1faa08("FR0-7:    ",10,8,ar7);
  FUN_8c1faa08("FR8-15:   ",0x12,8,ar7);
  FUN_8c1faa08("FR0-7(B): ",0x1a,8,ar7);
  uVar6 = 8;
  uVar5 = 0x22;
  FUN_8c1faa08("FR8-15(B):",0x22,8,ar7);
  FUN_8c1fad9a("FPUL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2a],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" FPSCR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x2b],uVar5,uVar6,ar7);
  FUN_8c1faa08("\r\nR0-7:     ",0x2d,8,ar7);
  uVar5 = _DAT_8c475ec8[0x3c];
  _DAT_8c475ec8[0x3c] = _DAT_8c475ec8[1];
  FUN_8c1faa08("R8-15:    ",0x35,8,ar7);
  uVar6 = 8;
  _DAT_8c475ec8[0x3c] = uVar5;
  uVar5 = 2;
  FUN_8c1faa08("\r\nR0-7(B):  ",2,8,ar7);
  FUN_8c1fad9a("MACL: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3c],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" MACH: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3d],uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nVBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3e],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" GBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x3f],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" DBR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(*_DAT_8c475ec8,uVar5,uVar6,ar7);
  FUN_8c1fad9a("\r\nPR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x40],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" PC: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x41],uVar5,uVar6,ar7);
  FUN_8c1fad9a(" SR: ",uVar5,uVar6,ar7);
  FUN_8c1fadd0(_DAT_8c475ec8[0x42],uVar5,uVar6,ar7);
  uVar1 = 0;
  do {
    if ((int)uVar1 < 0) {
      uVar3 = ~(~uVar1 + 1 & 3) + 1;
    }
    else {
      uVar3 = uVar1 & 3;
    }
    if (uVar3 == 0) {
      FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
    }
    FUN_8c1fadd0((&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26cffc,uVar5,uVar6,ar7);
    FUN_8c1fadd0(*(undefined4 *)(&DAT_8c26ce10)[uVar1],uVar5,uVar6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,uVar5,uVar6,ar7);
    uVar1 = uVar1 + 1;
  } while ((int)uVar1 < 0x45);
  FUN_8c1fad9a(&DAT_8c26cff8,uVar5,uVar6,ar7);
  if (iVar2 == 0) {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER,\r\n then hit RETURN key.";
  }
  else {
    a4 = "Please, cancel the interrupt from ADRESS CHECKER.";
  }
  FUN_8c1fad9a(a4,uVar5,uVar6,ar7);
  do {
    uVar4 = FUN_8c1fad0a(a4,uVar5,uVar6,ar7);
  } while ((char)uVar4 != '\r');
  _DAT_ff000024 = ain0 & 0xffff;
  uVar5 = FUN_8c1fad44(a4,uVar5,uVar6,ar7);
  return uVar5;
}

__asm__(".globl _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de\n.set _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de, _s_r_n_ADDRESS_CHECKER_TRAP_r_n_1fa7de_def\n");
//@unit 8c1faa08
#include "../decls.h"
undefined4 FUN_8c1faa08_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a6;
  int iVar2;
  int iVar3;
  int iVar4;
  
  a6 = ar6;
  iVar3 = ar5;
  FUN_8c1fad9a(ar4,ar5,ar6,ar7,ar5);
  iVar2 = iVar3 + ar6;
  iVar4 = iVar3 << 2;
  for (; iVar3 < iVar2; iVar3 = iVar3 + 1) {
    FUN_8c1fadd0(*(undefined4 *)(_DAT_8c475ec8 + iVar4),ar5,a6,ar7);
    FUN_8c1fad9a(&DAT_8c26d000,ar5,a6,ar7);
    iVar4 = iVar4 + 4;
  }
  uVar1 = FUN_8c1fad9a(&DAT_8c26cff8,ar5,a6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1faa08\n.set _FUN_8c1faa08, _FUN_8c1faa08_def\n");
//@unit 8c1fab8c
#include "../decls.h"
int FUN_8c1fab8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  int iStack_c;
  int iStack_8;
  int iStack_4;
  
  *(undefined4 *)0xffc00004 = *(undefined4 *)0xffc00004 & 0xfe;
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed8;
  for (iStack_c = 0; iStack_c < 0x50000; iStack_c = iStack_c + 1) {
  }
  if ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x1c) & 4) == 0) {
    *(undefined4 *)0x8c475ed8 = 1;
  }
  else {
    *(undefined4 *)0x8c475ed8 = 0;
  }
  puVar6 = 0xffe00008;
  puVar5 = 0xffe80008;
  piVar4 = 0x8c475ed4;
  iVar3 = 0x80000;
  if (*piVar1 == 0) {
    *(undefined4 *)0x8c475ed4 = 0xffe80000;
    *puVar5 = 0;
    *(undefined2 *)(*piVar4 + 0x18) = 6;
    *(undefined2 *)(*piVar4 + 8) = 0;
    *(undefined2 *)*piVar4 = 0;
    *(undefined1 *)(*piVar4 + 4) = 0x28;
    for (iStack_4 = 0; iStack_4 < iVar3; iStack_4 = iStack_4 + 1) {
    }
    *(undefined2 *)(*piVar4 + 0x18) = 0x308;
    *(undefined2 *)(*piVar4 + 8) = 0x30;
  }
  else {
    *piVar2 = 0xffe00000;
    *puVar6 = 0;
    *(undefined1 *)(*piVar2 + 8) = 0;
    *(undefined1 *)*piVar2 = 0;
    *(undefined1 *)(*piVar2 + 4) = 0x28;
    for (iStack_8 = 0; iStack_8 < iVar3; iStack_8 = iStack_8 + 1) {
    }
    *(undefined1 *)(*piVar2 + 8) = 0x30;
  }
  return *piVar1;
}

__asm__(".globl _FUN_8c1fab8c\n.set _FUN_8c1fab8c, _FUN_8c1fab8c_def\n");
//@unit 8c1fac58
#include "../decls.h"
uint FUN_8c1fac58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  byte *pbVar4;
  
  piVar2 = 0x8c475ed0;
  piVar1 = 0x8c475ed4;
  uVar3 = *(undefined4 *)0x8c475ed8;
  if (uVar3 == 0) {
    do {
    } while ((*(ushort *)(*(undefined4 *)0x8c475ed4 + 0x10) & 0x20) != 0x20);
    *(undefined1 *)(*(undefined4 *)0x8c475ed4 + 0xc) = (undefined1)ar4;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)0xffdf;
    *(ushort *)(*piVar1 + 0x10) = *(ushort *)(*piVar1 + 0x10) & (ushort)0xffbf;
    do {
    } while ((*(ushort *)(*piVar1 + 0x10) & 0x40) != 0x40);
    uVar3 = 0x40;
  }
  else if (uVar3 == 1) {
    do {
    } while ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x10) & 0x80) != 0x80);
    *(undefined1 *)(*(undefined4 *)0x8c475ed0 + 0xc) = (undefined1)ar4;
    pbVar4 = (byte *)(*piVar2 + 0x10);
    *pbVar4 = *pbVar4 & 0x7f;
    do {
      uVar3 = *(byte *)(*piVar2 + 0x10) & 4;
    } while (uVar3 != 4);
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1fac58\n.set _FUN_8c1fac58, _FUN_8c1fac58_def\n");
//@unit 8c1fad0a
#include "../decls.h"
int FUN_8c1fad0a_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(undefined4 *)0x8c475ed8 == 0) {
    do {
    } while ((char)*(undefined2 *)(*(undefined4 *)0x8c475ed4 + 0x1c) == '\0');
    ar5 = (int)*(char *)(*(undefined4 *)0x8c475ed4 + 0x14);
  }
  else if ((*(undefined4 *)0x8c475ed8 == 1) && ((*(byte *)(*(undefined4 *)0x8c475ed0 + 0x1c) & 4) == 4)) {
    ar5 = 0xd;
  }
  return ar5;
}

__asm__(".globl _FUN_8c1fad0a\n.set _FUN_8c1fad0a, _FUN_8c1fad0a_def\n");
//@unit 8c1fad44
#include "../decls.h"
uint FUN_8c1fad44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = 0x8c475ed4;
  if (*(undefined4 *)0x8c475ed8 == 0) {
    *(undefined2 *)(*(undefined4 *)0x8c475ed4 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 6;
    *(undefined2 *)*piVar2 = 0;
    *(char *)(*piVar2 + 4) = (char)0xff;
    *(undefined2 *)(*piVar2 + 8) = 0;
    *(undefined2 *)(*piVar2 + 0x10) = 0;
    *(undefined2 *)(*piVar2 + 0x18) = 0;
    *(undefined2 *)(*piVar2 + 0x20) = 0;
    *(undefined2 *)(*piVar2 + 0x24) = 0;
  }
  cVar1 = *(undefined4 *)0xffc00004;
  *(undefined4 *)0xffc00004 = (char)((int)cVar1 | 1U);
  return (int)cVar1 | 1U;
}

__asm__(".globl _FUN_8c1fad44\n.set _FUN_8c1fad44, _FUN_8c1fad44_def\n");
//@unit 8c1fad9a
#include "../decls.h"
undefined4 FUN_8c1fad9a_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  for (; *ar4 != '\0'; ar4 = ar4 + 1) {
    in_r0 = FUN_8c1fac58((int)*ar4,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fad9a\n.set _FUN_8c1fad9a, _FUN_8c1fad9a_def\n");
//@unit 8c1fadd0
#include "../decls.h"
undefined4 FUN_8c1fadd0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int a4;
  
  iVar3 = 0x1c;
  do {
    uVar2 = -iVar3;
    if ((int)uVar2 < 0) {
      uVar2 = ar4 >> (~uVar2 & 0x1f) + 1;
    }
    else {
      uVar2 = ar4 << (uVar2 & 0x1f);
    }
    uVar2 = uVar2 & 0xf;
    if (uVar2 < 10) {
      a4 = uVar2 + 0x30;
    }
    else {
      a4 = uVar2 + 0x37;
    }
    uVar1 = FUN_8c1fac58(a4,ar5,ar6,ar7);
    iVar3 = iVar3 + -4;
  } while (-1 < iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c1fadd0\n.set _FUN_8c1fadd0, _FUN_8c1fadd0_def\n");
//@unit 8c1fae2c
#include "../decls.h"
uint FUN_8c1fae2c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *in_VBR;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  
  puVar6 = (&DATA_8c1fb094);
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  *(undefined4 *)0xff00001c = *(undefined4 *)0xff00001c | (int)0x800;
  puVar10 = (&FUN_8c1fb0c8);
  puVar9 = (&DATA_8c1fb3d0);
  puVar8 = (&DATA_8c1fb3d8);
  puVar7 = (&DATA_8c1fb230);
  puVar12 = in_VBR;
  if (ar4 == 0x80000000) {
    *(undefined **)(&DATA_8c1fb038) = (&DATA_8c1fb230);
    *(undefined **)puVar6 = puVar7;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = ar5;
    puVar16 = (undefined4 *)(&DATA_8c1fb098);
  }
  else {
    *(undefined **)(&DATA_8c1fb038) = (&FUN_8c1fb0c8);
    *(undefined **)puVar6 = puVar10;
    *(undefined4 *)puVar8 = 0;
    *(undefined4 *)puVar9 = 0;
    puVar16 = (undefined4 *)(&DATA_8c1fb098);
  }
  for (; puVar16 <= (&FUN_8c1fb0c8); puVar16 = puVar16 + 1) {
    *puVar12 = *puVar16;
    puVar12 = puVar12 + 1;
  }
  iVar13 = ((uint)((int)puVar12 - (int)in_VBR) >> 5) + 1;
  puVar12 = in_VBR;
  do {
    CacheBlockPurge(puVar12);
    iVar13 = iVar13 + -1;
    puVar12 = puVar12 + 8;
  } while (iVar13 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x100);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x400;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xffffff00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x400);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb004); puVar12 <= (&DATA_8c1fb03c); puVar12 = puVar12 + 1)
  {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x1000;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xfffffc00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  puVar16 = (undefined4 *)((int)in_VBR + (int)0x600);
  for (puVar12 = (undefined4 *)(&DATA_8c1fb03c); puVar6 = (&DATA_8c1faa94),
      puVar12 <= (&DATA_8c1fb098); puVar12 = puVar12 + 1) {
    *puVar16 = *puVar12;
    puVar16 = puVar16 + 1;
  }
  iVar13 = (int)in_VBR + (int)0x1800;
  iVar14 = ((uint)((int)puVar16 + ((int)(int)0xfffffa00 - (int)in_VBR)) >> 5) + 1;
  do {
    CacheBlockPurge(iVar13);
    iVar14 = iVar14 + -1;
    iVar13 = iVar13 + 0x20;
  } while (iVar14 != 0);
  iVar14 = (int)0x200;
  iVar13 = (int)(int)0xfffffe40;
  iVar15 = (int)0x620;
  do {
    iVar11 = iVar13 >> 3;
    iVar13 = iVar13 + 0x20;
    *(undefined **)((int)in_VBR + iVar14 + iVar11) = puVar6;
  } while (iVar15 > iVar13);
  return ((uint)(iVar15 <= iVar13) | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & 0xefffffff;
}

__asm__(".globl _FUN_8c1fae2c\n.set _FUN_8c1fae2c, _FUN_8c1fae2c_def\n");
//@unit 8c1fb048
#include "../decls.h"
undefined4 FUN_8c1fb048_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 extraout_r1;
  
  (*(code *)0xac004000)(0x200,0x2,ar6,ar7);
  *(undefined4 *)0x0 = in_r0;
  *(undefined4 *)(&DATA_8c1fb3d4) = _DAT_ff000028;
  uVar1 = FUN_8c1fb0c8(ar4,ar5,extraout_r1);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb048\n.set _FUN_8c1fb048, _FUN_8c1fb048_def\n");
//@unit 8c1fb09c
#include "../decls.h"
undefined4 FUN_8c1fb09c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  (*(code *)0xac004000)(0x200,0x3,ar6,ar7);
  return in_r0;
}

__asm__(".globl _FUN_8c1fb09c\n.set _FUN_8c1fb09c, _FUN_8c1fb09c_def\n");
//@unit 8c1fb0c8
#include "../decls.h"
undefined4 FUN_8c1fb0c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200) !=
      (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200))();
  }
  if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
    return in_r0;
  }
                    
                    
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb0c8\n.set _FUN_8c1fb0c8, _FUN_8c1fb0c8_def\n");
//@unit 8c1fb0ce
#include "../decls.h"
undefined4 FUN_8c1fb0ce_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200) !=
      (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (*(int *)(&DATA_8c1fb3d4) + -0x200 >> 3) + 0x200))
              (*(int *)(&DATA_8c1fb3d4),ar5,ar6,ar7);
  }
  if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
    return in_r0;
  }
                    
                    
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb0ce\n.set _FUN_8c1fb0ce, _FUN_8c1fb0ce_def\n");
//@unit 8c1fb25a
#include "../decls.h"
undefined4
FUN_8c1fb25a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            ,undefined4 s8)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 in_r1;
  undefined4 *puVar2;
  undefined8 in_dr4;
  undefined8 in_dr6;
  undefined8 in_dr8;
  undefined8 in_dr10;
  code *UNRECOVERED_JUMPTABLE;
  
  if (*(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200) != (code *)0x0) {
    (**(code **)(UNRECOVERED_JUMPTABLE + (DAT_8c1fb3d4 + -0x200 >> 3) + 0x200))
              (DAT_8c1fb3d4,ar5,ar6,ar7);
  }
  DAT_8c1fb3d8 = DAT_8c1fb3d8 + -1;
  puVar2 = &s8;
  if (DAT_8c1fb3d8 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  *(undefined4 *)((int)puVar2 + -4) = in_r0;
  *(undefined4 *)((int)puVar2 + -8) = in_r1;
  if (*(int *)(&DATA_8c1fb3d4) < 0x2 << 8) {
    return *(undefined4 *)((int)puVar2 + -4);
  }
                    
                    
  uVar1 = (*UNRECOVERED_JUMPTABLE)(in_dr4,in_dr6,in_dr8,in_dr10,ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fb25a\n.set _FUN_8c1fb25a, _FUN_8c1fb25a_def\n");
//@unit 8c1fb3e0
#include "../decls.h"
undefined4 FUN_8c1fb3e0_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  
  puVar2 = 0x8c475f0c;
  puVar1 = 0x8c475f10;
  uVar6 = 0xffffffe0;
  uVar5 = ar4 + 0x1fU & 0xffffffe0;
  *(undefined4 *)0x8c475f08 = uVar5;
  *puVar1 = uVar5;
  piVar4 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *puVar2 = ar5 & 0xffffffe0;
  *piVar4 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,0xffffffe0,ar6,ar7);
  uVar5 = *(undefined4 *)0x8c475f08;
  *(uint *)(uVar5 + 4) = ar5 >> 5;
  uVar6 = FUN_8c1fb586(uVar5 + 0x20,uVar6,ar6,ar7);
  return uVar6;
}

__asm__(".globl _FUN_8c1fb3e0\n.set _FUN_8c1fb3e0, _FUN_8c1fb3e0_def\n");
//@unit 8c1fb3f4
#include "../decls.h"
undefined4 FUN_8c1fb3f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined4 uVar2;
  uint *in_r1;
  undefined4 *in_r2;
  undefined4 *in_r3;
  int iVar3;
  uint unaff_r14;
  
  *in_r3 = ar4;
  *in_r2 = ar4;
  piVar1 = 0x8c475f04;
  iVar3 = 0x8c475ee4;
  *in_r1 = unaff_r14;
  *piVar1 = iVar3;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(iVar3 + 4) = 0;
  FUN_8c1fb426(0,ar5,ar6,ar7);
  iVar3 = *(undefined4 *)0x8c475f08;
  *(uint *)(iVar3 + 4) = unaff_r14 >> 5;
  uVar2 = FUN_8c1fb586(iVar3 + 0x20,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fb3f4\n.set _FUN_8c1fb3f4, _FUN_8c1fb3f4_def\n");
//@unit 8c1fb426
#include "../decls.h"
undefined4 FUN_8c1fb426_def(undefined **ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_8c475ee0;
  _DAT_8c475ee0 = ar4;
  if (ar4 == (undefined **)0x0) {
    _DAT_8c475ee0 = &PTR_FUN_8c26d0c8;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fb426\n.set _FUN_8c1fb426, _FUN_8c1fb426_def\n");
//@unit 8c1fb43a
#include "../decls.h"
undefined4 noop_1fb43a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_1fb43a\n.set _noop_1fb43a, _noop_1fb43a_def\n");
//@unit 8c1fb4ae
#include "../decls.h"
undefined4 malloc_thunk_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)*(undefined4 *)0x8c475ee0)();
  return uVar1;
}

__asm__(".globl _malloc_thunk\n.set _malloc_thunk, _malloc_thunk_def\n");
//@unit 8c1fb4b8
#include "../decls.h"
undefined4 FUN_8c1fb4b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)*(undefined4 *)0x8c475ee0)();
  return uVar1;
}

__asm__(".globl _FUN_8c1fb4b8\n.set _FUN_8c1fb4b8, _FUN_8c1fb4b8_def\n");
//@unit 8c1fb4c2
#include "../decls.h"
undefined4 * FUN_8c1fb4c2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = (ar4 + 0x1fU >> 5) + 1;
  puVar1 = (undefined4 *)*_DAT_8c475f04;
  puVar5 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar1;
    if (uVar4 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar4) {
        *puVar5 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar4;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
        puVar3[1] = uVar4;
      }
      _DAT_8c475f04 = puVar5;
      return puVar3 + 8;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar1 = (undefined4 *)*puVar3;
    puVar5 = puVar3;
  }
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c1fb4c2\n.set _FUN_8c1fb4c2, _FUN_8c1fb4c2_def\n");
//@unit 8c1fb57c
#include "../decls.h"
undefined4 FUN_8c1fb57c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)(*(undefined4 *)0x8c475ee0 + 4))();
  return uVar1;
}

__asm__(".globl _FUN_8c1fb57c\n.set _FUN_8c1fb57c, _FUN_8c1fb57c_def\n");
//@unit 8c1fb586
#include "../decls.h"
undefined4 FUN_8c1fb586_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)(*(undefined4 *)0x8c475ee0 + 4))();
  return uVar1;
}

__asm__(".globl _FUN_8c1fb586\n.set _FUN_8c1fb586, _FUN_8c1fb586_def\n");
//@unit 8c1fb590
#include "../decls.h"
uint FUN_8c1fb590_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte in_MD;
  byte in_RB;
  byte in_BL;
  byte in_FD;
  byte in_M;
  byte in_Q;
  byte in_IMASK;
  byte in_S;
  byte in_T;
  bool bVar8;
  
  uVar1 = (uint)in_T | (uint)in_S << 1;
  uVar2 = uVar1 | (uint)in_IMASK << 4;
  uVar3 = uVar2 | (uint)in_Q << 8;
  uVar4 = uVar3 | (uint)in_M << 9;
  uVar5 = (uint)in_BL << 0x1c | (uint)in_RB << 0x1d;
  bVar8 = ar4 == 0;
  if (!bVar8) {
    piVar7 = (int *)(ar4 + -0x20);
    for (piVar6 = (int *)*(undefined4 *)0x8c475f04;
        ((piVar7 <= piVar6 || ((int *)*piVar6 <= piVar7)) &&
        ((piVar6 < (int *)*piVar6 || ((piVar7 <= piVar6 && ((int *)*piVar6 <= piVar7))))));
        piVar6 = (int *)*piVar6) {
    }
    if (piVar7 + *(int *)(ar4 + -0x1c) * 8 == (int *)*piVar6) {
      *(int *)(ar4 + -0x1c) = *(int *)(ar4 + -0x1c) + *(int *)(*piVar6 + 4);
      *piVar7 = *(int *)*piVar6;
    }
    else {
      *piVar7 = *piVar6;
    }
    bVar8 = piVar6 + piVar6[1] * 8 == piVar7;
    if (bVar8) {
      piVar6[1] = piVar6[1] + *(int *)(ar4 + -0x1c);
      *piVar6 = *piVar7;
    }
    else {
      *piVar6 = (int)piVar7;
    }
    *(undefined4 *)0x8c475f04 = piVar6;
  }
  return ((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0 |
         ((uint)bVar8 | uVar1 & 2 | uVar2 & 0xf0 | uVar3 & 0x100 | uVar4 & 0x200 |
          (uVar4 | (uint)in_FD << 0xf) & 0x8000 | (uint)in_BL << 0x1c & 0x10000000 |
          uVar5 & 0x20000000 |
         (uint)((((byte)(uVar5 >> 0x18) | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6) <<
         0x1e) & (int)(int)0xffffff0f;
}

__asm__(".globl _FUN_8c1fb590\n.set _FUN_8c1fb590, _FUN_8c1fb590_def\n");
//@unit 8c1fb664
#include "../decls.h"
undefined4 * FUN_8c1fb664_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *unaff_r14;
  undefined4 *puVar9;
  
  uVar8 = (ar5 + 0x1fU >> 5) + 1;
  uVar7 = uVar8;
  if (*(uint *)(ar4 + -0x1c) < uVar8) {
    uVar7 = *(uint *)(ar4 + -0x1c);
  }
  FUN_8c1fb586(unaff_r14,ar5,ar6,ar7);
  puVar9 = (undefined4 *)*_DAT_8c475f04;
  puVar4 = _DAT_8c475f04;
  while( true ) {
    puVar3 = puVar9;
    if (uVar8 <= (uint)puVar3[1]) {
      if (puVar3[1] == uVar8) {
        *puVar4 = *puVar3;
      }
      else {
        iVar2 = puVar3[1] - uVar8;
        puVar3[1] = iVar2;
        puVar3 = puVar3 + iVar2 * 8;
      }
      puVar9 = puVar3 + 8;
      if (unaff_r14 != puVar9) {
        if (unaff_r14 < puVar9) {
          puVar1 = puVar3 + uVar7 * 8 + 8;
          while (puVar9 < puVar1) {
            puVar5 = puVar1 + -8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar5;
            unaff_r14 = unaff_r14 + -8;
          }
        }
        else if (puVar9 < unaff_r14) {
          puVar5 = puVar3 + uVar7 * 8 + 8;
          puVar1 = puVar9;
          while (puVar1 < puVar5) {
            puVar6 = puVar1 + 8;
            FUN_8c010794(0x20,puVar1,unaff_r14);
            puVar1 = puVar6;
            unaff_r14 = unaff_r14 + 8;
          }
        }
      }
      puVar3[1] = uVar8;
      _DAT_8c475f04 = puVar4;
      return puVar9;
    }
    if (puVar3 == _DAT_8c475f04) break;
    puVar9 = (undefined4 *)*puVar3;
    puVar4 = puVar3;
  }
  return (undefined4 *)0;
}

__asm__(".globl _FUN_8c1fb664\n.set _FUN_8c1fb664, _FUN_8c1fb664_def\n");
//@unit 8c1fb77a
#include "../decls.h"
int FUN_8c1fb77a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint a4;
  
  a4 = ar5 * ar4;
  iVar1 = FUN_8c1fb4b8(a4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar3 = 0;
    if (a4 != 0) {
      do {
        puVar2 = (undefined4 *)(iVar1 + uVar3);
        uVar3 = uVar3 + 4;
        *puVar2 = 0;
      } while (uVar3 < a4);
    }
    uVar3 = uVar3 - 4;
    puVar4 = (undefined1 *)(iVar1 + uVar3);
    for (; uVar3 < (a4 & 3); uVar3 = uVar3 + 1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fb77a\n.set _FUN_8c1fb77a, _FUN_8c1fb77a_def\n");
//@unit 8c1fb81c
#include "../decls.h"
uint FUN_8c1fb81c_def(uint ar4,uint ar5,uint ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  
  uVar1 = (uint)0x100;
  uVar6 = *(undefined4 *)0xff000010 >> 0x12 & 0x3f;
  while ((uVar6 < 0x40 && ((*(uint *)(uVar6 * 0x100 + 0xf6000000) & uVar1) == uVar1))) {
    uVar6 = uVar6 + 1;
  }
  if (uVar6 == 0x40) {
    uVar6 = (uint)0xff;
  }
  else {
    cVar5 = (char)ar6;
    uVar1 = ar5 & (int)(int)0xfffffc00 | uVar1;
    if (cVar5 == '\x01') {
      ar6 = 0;
      uVar3 = 0x1ffffc00;
    }
    else if (cVar5 == '\x02') {
      ar6 = 0x10;
      uVar3 = 0x1ffff000;
    }
    else if (cVar5 == '\x03') {
      ar6 = (uint)0x80;
      uVar3 = 0x1fff0000;
    }
    else {
      uVar3 = uVar1;
      if (cVar5 == '\x04') {
        ar6 = (uint)0x90;
        uVar3 = 0x1ff00000;
      }
    }
    uVar2 = (uint)0x13e;
    puVar4 = (uint *)(uVar6 * 0x100 + 0xf7000000);
    *(uint *)(0xf6000000 + uVar6 * 0x100) = uVar1;
    *puVar4 = ar4 & uVar3 | ar6 | uVar2;
  }
  return uVar6;
}

__asm__(".globl _FUN_8c1fb81c\n.set _FUN_8c1fb81c, _FUN_8c1fb81c_def\n");
//@unit 8c1fb8ae
#include "../decls.h"
undefined4 FUN_8c1fb8ae_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 *puVar2;
  
  if (ar4 < 0x40) {
    iVar1 = ar4 * 0x100;
    puVar2 = (undefined4 *)(iVar1 + 0xf7000000);
    *(uint *)(0xf6000000 + iVar1) = *(uint *)(iVar1 + 0xf6000000) & (int)(int)0xfffffeff;
    *puVar2 = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c1fb8ae\n.set _FUN_8c1fb8ae, _FUN_8c1fb8ae_def\n");
//@unit 8c1fb924
#include "../decls.h"
uint FUN_8c1fb924_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  iVar13 = 0xe0000000;
  iVar11 = 0xc000000;
  iVar3 = 0x100000;
  puVar2 = (&FUN_8c1fb81c);
  uVar1 = 0xd000000;
  uVar7 = *(undefined4 *)0xff000010 & 1;
  if (uVar7 == 1) {
    iVar12 = 0;
    iVar10 = 0;
    while (iVar5 = 0xe1000000, iVar4 = 0x10000000, uVar7 = 0x10800000,
          (uint)(iVar11 + iVar12) < uVar1) {
      puVar9 = (undefined4 *)(0x8c475f18 + iVar10 * 4);
      uVar8 = (*(code *)puVar2)(iVar11 + iVar12,iVar13 + iVar12,4,ar7);
      iVar10 = iVar10 + 1;
      iVar12 = iVar12 + iVar3;
      *puVar9 = uVar8;
    }
    iVar13 = 0;
    iVar11 = 0;
    while (puVar6 = 0x8c475f78, (uint)(iVar4 + iVar13) < uVar7) {
      puVar9 = (undefined4 *)(0x8c475f58 + iVar11 * 4);
      uVar8 = (*(code *)puVar2)(iVar4 + iVar13,iVar5 + iVar13,4,ar7);
      iVar11 = iVar11 + 1;
      iVar13 = iVar13 + iVar3;
      *puVar9 = uVar8;
    }
    uVar7 = (*(code *)puVar2)(uVar7,0xe1800000,4,ar7);
    *puVar6 = uVar7;
  }
  return uVar7;
}

__asm__(".globl _FUN_8c1fb924\n.set _FUN_8c1fb924, _FUN_8c1fb924_def\n");
//@unit 8c1fb9d2
#include "../decls.h"
undefined4 FUN_8c1fb9d2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (&FUN_8c1fb8ae);
  puVar3 = 0x8c475f18 + 0x10;
  for (puVar4 = 0x8c475f18; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  puVar3 = 0x8c475f58 + 8;
  for (puVar4 = 0x8c475f58; puVar4 < puVar3; puVar4 = puVar4 + 1) {
    (*(code *)puVar1)(*puVar4,ar5,ar6,ar7);
  }
  uVar2 = (*(code *)puVar1)(*(undefined4 *)0x8c475f78,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fb9d2\n.set _FUN_8c1fb9d2, _FUN_8c1fb9d2_def\n");
//@unit 8c1fba90
#include "../decls.h"
undefined4 FUN_8c1fba90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)0x8c475f80 = ar4;
  return ar4;
}

__asm__(".globl _FUN_8c1fba90\n.set _FUN_8c1fba90, _FUN_8c1fba90_def\n");
//@unit 8c1fba98
#include "../decls.h"
undefined4 FUN_8c1fba98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd008(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbb2c;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbb2c:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fba98\n.set _FUN_8c1fba98, _FUN_8c1fba98_def\n");
//@unit 8c1fbb6c
#include "../decls.h"
undefined4 FUN_8c1fbb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd1e2(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbc04;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbc04:
    uVar2 = 0xffffff01;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fbb6c\n.set _FUN_8c1fbb6c, _FUN_8c1fbb6c_def\n");
//@unit 8c1fbc44
#include "../decls.h"
undefined4 FUN_8c1fbc44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  iVar3 = _DAT_8c475f80;
  do {
    iVar1 = FUN_8c1fd312(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
    if ((DAT_8c26d178 != 0) && (iVar1 == -0xd0)) goto LAB_8c1fbce2;
    bVar4 = iVar3 != 0;
    *(int *)(iVar5 + -0x73b87bec) = *(int *)(iVar5 + -0x73b87bec) + 1;
    iVar3 = iVar3 + -1;
  } while ((bVar4) || (_DAT_8c475f80 == -1));
  iVar3 = *(int *)(iVar5 + -0x73b87bf0);
  *(int *)(iVar5 + -0x73b87bf0) = iVar3 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),iVar3,
               *(undefined4 *)(iVar5 + -0x73b87bec));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else if (iVar1 == -0xff) {
LAB_8c1fbce2:
    uVar2 = 0xffffff01;
  }
  else if (iVar1 == -0xc0) {
    uVar2 = 0xffffff40;
  }
  else {
    uVar2 = 0xffff0000;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fbc44\n.set _FUN_8c1fbc44, _FUN_8c1fbc44_def\n");
//@unit 8c1fbd2c
#include "../decls.h"
int FUN_8c1fbd2c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,code *ar7)

{
  int iVar1;
  undefined4 a4;
  code *a5;
  code *ain0;
  
  _DAT_8c475f88 = 0;
  _DAT_8c475f8c = 0;
  _DAT_8c475f90 = 0;
  _DAT_8c475f94 = 0;
  _DAT_8c475f98 = ar6;
  _DAT_8c475f9c = ar5;
  ain0 = ar7;
  FUN_8c1fc9b0(ar5,ar5,ar6,ar7);
  iVar1 = FUN_8c1fd626(ar4,ar5,ar6,ar7);
  a5 = FUN_8c1fbe84;
  a4 = 0x14;
  FUN_8c1f03a6(0x14,FUN_8c1fbe84,ar6,ar7,ain0);
  if ((iVar1 == 0) && (ain0 != (code *)0x0)) {
    (*ain0)(a4,a5,ar6,ar7);
  }
  DAT_8c273a44 = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c1fbd2c\n.set _FUN_8c1fbd2c, _FUN_8c1fbd2c_def\n");
//@unit 8c1fbdb8
#include "../decls.h"
uint FUN_8c1fbdb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  byte in_MD;
  byte bVar1;
  byte in_RB;
  byte bVar2;
  byte in_BL;
  byte bVar3;
  byte in_FD;
  byte bVar4;
  byte in_M;
  byte extraout_M;
  byte in_Q;
  byte extraout_Q;
  byte in_IMASK;
  byte bVar5;
  byte in_S;
  byte extraout_S;
  byte in_T;
  byte extraout_T;
  
  ain0 = (((uint)in_T | (uint)in_S << 1 | (uint)in_IMASK << 4) & 0xf0) >> 4;
  bVar3 = (byte)(((uint)in_BL << 0x1c) >> 0x18);
  bVar1 = bVar3 | (byte)(((uint)in_RB << 0x1d) >> 0x18);
  bVar5 = 0;
  bVar4 = (byte)((((uint)in_Q << 8 | (uint)in_M << 9 | (uint)in_FD << 0xf) & 0x8000) >> 0xf);
  bVar3 = (bVar3 & 0x10) >> 4;
  bVar2 = (bVar1 & 0x20) >> 5;
  bVar1 = ((bVar1 | (byte)(((uint)in_MD << 0x1e) >> 0x18)) & 0x40) >> 6;
  FUN_8c1f03a6(0x14,0,ar6,ar7,ain0);
  return (ain0 & 0xf) << 4 |
         ((uint)extraout_T | (uint)extraout_S << 1 | (uint)bVar5 << 4) & 0xffffff0f |
         (uint)extraout_Q << 8 | (uint)extraout_M << 9 | (uint)bVar4 << 0xf | (uint)bVar3 << 0x1c |
         (uint)bVar2 << 0x1d | (uint)bVar1 << 0x1e;
}

__asm__(".globl _FUN_8c1fbdb8\n.set _FUN_8c1fbdb8, _FUN_8c1fbdb8_def\n");
//@unit 8c1fbdfc
#include "../decls.h"
undefined4 FUN_8c1fbdfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,code *ain1)

{
  undefined4 in_r2;
  undefined4 *in_r3;
  undefined4 uVar1;
  undefined4 in_PR;
  
  *in_r3 = in_r2;
  uVar1 = 0x14;
  (*ain1)(0x14,ar5,ar6,ar7,in_PR);
  FUN_8c1fcadc(uVar1,ar5,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fbdfc\n.set _FUN_8c1fbdfc, _FUN_8c1fbdfc_def\n");
//@unit 8c1fbe12
#include "../decls.h"
undefined4 FUN_8c1fbe12_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int ar4_00;
  
  ar4_00 = 0;
  do {
    iVar2 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    ar4_00 = ar4_00 + 1;
  } while (ar4_00 < 8);
  ar5_00 = 0;
  DAT_8c273a44 = 0;
  uVar1 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,0,ar6,ar7,0);
  FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fbe12\n.set _FUN_8c1fbe12, _FUN_8c1fbe12_def\n");
//@unit 8c1fbe1a
#include "../decls.h"
undefined4 FUN_8c1fbe1a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  int unaff_r13;
  int unaff_r14;
  
  do {
    iVar2 = FUN_8c1fce88(unaff_r14,ar5,ar6,ar7);
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    unaff_r14 = unaff_r14 + 1;
  } while (unaff_r14 < unaff_r13);
  ar5_00 = 0;
  DAT_8c273a44 = 0;
  uVar1 = DAT_8c26d1e0;
  FUN_8c1f03a6(DAT_8c26d1e0,0,ar6,ar7,0);
  FUN_8c1fcadc(uVar1,ar5_00,ar6,ar7);
  uVar1 = FUN_8c1fda04(uVar1,ar5_00,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c1fbe1a\n.set _FUN_8c1fbe1a, _FUN_8c1fbe1a_def\n");
//@unit 8c1fbe84
#include "../decls.h"
uint FUN_8c1fbe84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,uint ain0)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  if (DAT_8c273a44 != 0) {
    if (_DAT_8c475f98 == 0) {
      pcVar2 = FUN_8c1fc00e;
    }
    else {
      pcVar2 = FUN_8c1fbfd2;
    }
    thunk_FUN_8c1fcfbe(ar4,ar5,ar6,ar7);
    _DAT_8c475f88 = _DAT_8c475f8c;
    _DAT_8c475f8c = FUN_8c1fda44(ar4,ar5,ar6,ar7);
    uVar3 = 0;
    iVar6 = 0;
    uVar4 = 1;
    _DAT_8c475f8c = _DAT_8c475f8c & _DAT_8c475f9c;
    do {
      iVar1 = FUN_8c1fc5c4(iVar6,ar5,ar6,ar7);
      uVar5 = uVar4;
      if (iVar1 != 0) {
        uVar5 = 0;
      }
      iVar6 = iVar6 + 1;
      uVar4 = uVar4 << 1;
      uVar3 = uVar3 | uVar5;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f88 ^ _DAT_8c475f8c) & _DAT_8c475f8c;
    ain0 = _DAT_8c475f8c;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f90 = _DAT_8c475f90 | uVar5;
        }
        else {
          ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
          _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f90 & uVar5) != 0)) {
        ain0 = (*pcVar2)(iVar6,ar5,ar6,ar7);
        _DAT_8c475f90 = _DAT_8c475f90 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
    uVar5 = 1;
    iVar6 = 0;
    uVar4 = (_DAT_8c475f8c ^ _DAT_8c475f88) & _DAT_8c475f88;
    do {
      if ((uVar4 & uVar5) != 0) {
        if ((uVar5 & uVar3) == 0) {
          _DAT_8c475f94 = _DAT_8c475f94 | uVar5;
        }
        else {
          ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
          _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
        }
      }
      if (((uVar5 & uVar3) != 0) && ((_DAT_8c475f94 & uVar5) != 0)) {
        ain0 = FUN_8c1fcd9c(iVar6,2,0,ar7);
        _DAT_8c475f94 = _DAT_8c475f94 & ~uVar5;
      }
      iVar6 = iVar6 + 1;
      uVar5 = uVar5 << 1;
    } while (iVar6 < 8);
  }
  return ain0;
}

__asm__(".globl _FUN_8c1fbe84\n.set _FUN_8c1fbe84, _FUN_8c1fbe84_def\n");
//@unit 8c1fbfb4
#include "../decls.h"
undefined4 thunk_FUN_8c1fce34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1fce34)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1fce34\n.set _thunk_FUN_8c1fce34, _thunk_FUN_8c1fce34_def\n");
//@unit 8c1fbfba
#include "../decls.h"
undefined4 thunk_FUN_8c1fce50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1fce50();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1fce50\n.set _thunk_FUN_8c1fce50, _thunk_FUN_8c1fce50_def\n");
//@unit 8c1fbfcc
#include "../decls.h"
undefined4 thunk_FUN_8c1fda7e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1fda7e)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1fda7e\n.set _thunk_FUN_8c1fda7e, _thunk_FUN_8c1fda7e_def\n");
//@unit 8c1fbfd2
#include "../decls.h"
undefined4 FUN_8c1fbfd2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,1,ar6,ar7,in_PR);
    FUN_8c1fcea8(ar4,ar4,0,0,0,0,0,in_PR);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fbfd2\n.set _FUN_8c1fbfd2, _FUN_8c1fbfd2_def\n");
//@unit 8c1fc00e
#include "../decls.h"
undefined4 FUN_8c1fc00e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x12,ar6,ar7,in_PR);
    FUN_8c1fcea8(ar4,ar4,0,0,0,0,0,in_PR);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc00e\n.set _FUN_8c1fc00e, _FUN_8c1fc00e_def\n");
//@unit 8c1fc04e
#include "../decls.h"
undefined4 FUN_8c1fc04e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fdd1a(ar4);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc04e\n.set _FUN_8c1fc04e, _FUN_8c1fc04e_def\n");
//@unit 8c1fc076
#include "../decls.h"
undefined4 thunk_FUN_8c1ffcc2_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1ffcc2)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1ffcc2\n.set _thunk_FUN_8c1ffcc2, _thunk_FUN_8c1ffcc2_def\n");
//@unit 8c1fc07c
#include "../decls.h"
undefined4 FUN_8c1fc07c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  FUN_8c1fce98(ar4,3,uVar2,ar7_00,ar5);
  uVar2 = ar5;
  FUN_8c1fcea8(ar4,ar4,ar5,ar6,ar7,in_stack_00000000,0,ar5);
  FUN_8c1fcecc(ar4,uVar2,ar5,ar6,uVar2);
  FUN_8c1fcf6e(ar4,ar7,ar5,ar6);
  return 0;
}

__asm__(".globl _FUN_8c1fc07c\n.set _FUN_8c1fc07c, _FUN_8c1fc07c_def\n");
//@unit 8c1fc13c
#include "../decls.h"
undefined4 FUN_8c1fc13c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe236(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc13c\n.set _FUN_8c1fc13c, _FUN_8c1fc13c_def\n");
//@unit 8c1fc16a
#include "../decls.h"
undefined4 FUN_8c1fc16a_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe350(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc16a\n.set _FUN_8c1fc16a, _FUN_8c1fc16a_def\n");
//@unit 8c1fc198
#include "../decls.h"
undefined4 FUN_8c1fc198_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ff018(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc198\n.set _FUN_8c1fc198, _FUN_8c1fc198_def\n");
//@unit 8c1fc1c6
#include "../decls.h"
undefined4 FUN_8c1fc1c6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ff110(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc1c6\n.set _FUN_8c1fc1c6, _FUN_8c1fc1c6_def\n");
//@unit 8c1fc1f4
#include "../decls.h"
undefined4 FUN_8c1fc1f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ff1f8(ar4,ar5,ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc1f4\n.set _FUN_8c1fc1f4, _FUN_8c1fc1f4_def\n");
//@unit 8c1fc226
#include "../decls.h"
undefined4 FUN_8c1fc226_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ff336(ar4,ar5,ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc226\n.set _FUN_8c1fc226, _FUN_8c1fc226_def\n");
//@unit 8c1fc258
#include "../decls.h"
undefined4 FUN_8c1fc258_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ffc0a(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc258\n.set _FUN_8c1fc258, _FUN_8c1fc258_def\n");
//@unit 8c1fc286
#include "../decls.h"
undefined4 FUN_8c1fc286_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe534(ar4,ar5,ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc286\n.set _FUN_8c1fc286, _FUN_8c1fc286_def\n");
//@unit 8c1fc2b8
#include "../decls.h"
undefined4 FUN_8c1fc2b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe7aa(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc2b8\n.set _FUN_8c1fc2b8, _FUN_8c1fc2b8_def\n");
//@unit 8c1fc2ee
#include "../decls.h"
undefined4 FUN_8c1fc2ee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe646(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc2ee\n.set _FUN_8c1fc2ee, _FUN_8c1fc2ee_def\n");
//@unit 8c1fc324
#include "../decls.h"
undefined4 FUN_8c1fc324_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fe8f2(ar4,(int)(short)ar5,(int)(char)ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc324\n.set _FUN_8c1fc324, _FUN_8c1fc324_def\n");
//@unit 8c1fc360
#include "../decls.h"
undefined4 FUN_8c1fc360_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(ar4 + 0x28);
  iVar1 = FUN_8c1fce88(uVar2,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(uVar2,4,ar6,ar7,ar4);
    FUN_8c1fcea8(uVar2,ar4,1,0,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc360\n.set _FUN_8c1fc360, _FUN_8c1fc360_def\n");
//@unit 8c1fc3a6
#include "../decls.h"
undefined4 FUN_8c1fc3a6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4_00,5,uVar2,ar7,ar4);
    FUN_8c1fcea8(ar4_00,ar4,ar5,ar6,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc3a6\n.set _FUN_8c1fc3a6, _FUN_8c1fc3a6_def\n");
//@unit 8c1fc428
#include "../decls.h"
undefined4 FUN_8c1fc428_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4_00,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4_00,6,uVar2,ar7,ar4);
    FUN_8c1fcea8(ar4_00,ar4,ar5,ar6,0,0,0,ar4);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc428\n.set _FUN_8c1fc428, _FUN_8c1fc428_def\n");
//@unit 8c1fc472
#include "../decls.h"
undefined4 FUN_8c1fc472_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fce98(ar4,7,ar6,ar7,0);
    ar7_00 = 0;
    FUN_8c1fcea8(ar4,ar4,ar5,0,uVar2,0,0,0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar7_00);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc472\n.set _FUN_8c1fc472, _FUN_8c1fc472_def\n");
//@unit 8c1fc476
#include "../decls.h"
undefined4 FUN_8c1fc476_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r14;
  undefined4 in_PR;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(unaff_r14,7,ar6,ar7,in_PR);
    uVar2 = 0;
    FUN_8c1fcea8(unaff_r14,unaff_r14,ar5,0,0,0,0,in_PR);
    FUN_8c1fcef8(unaff_r14,ar5,ar5,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc476\n.set _FUN_8c1fc476, _FUN_8c1fc476_def\n");
//@unit 8c1fc4be
#include "../decls.h"
undefined4 FUN_8c1fc4be_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x11,uVar2,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc4be\n.set _FUN_8c1fc4be, _FUN_8c1fc4be_def\n");
//@unit 8c1fc504
#include "../decls.h"
undefined4 FUN_8c1fc504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 in_stack_ffffffe8;
  uint ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_ffffffe8 >> 0x10),(short)ar6);
  uVar3 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,10,ar6,uVar3,ain0);
    uVar3 = ain0 & 0xffff;
    FUN_8c1fcea8(ar4,ar4,ar5,uVar3,ar7 & 0xff,0,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,uVar3);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc504\n.set _FUN_8c1fc504, _FUN_8c1fc504_def\n");
//@unit 8c1fc564
#include "../decls.h"
undefined4 FUN_8c1fc564_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fef5a(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc564\n.set _FUN_8c1fc564, _FUN_8c1fc564_def\n");
//@unit 8c1fc592
#include "../decls.h"
undefined4 FUN_8c1fc592_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1fdd44(ar4,ar5,ar6);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc592\n.set _FUN_8c1fc592, _FUN_8c1fc592_def\n");
//@unit 8c1fc5c4
#include "../decls.h"
undefined4 FUN_8c1fc5c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fc5c4\n.set _FUN_8c1fc5c4, _FUN_8c1fc5c4_def\n");
//@unit 8c1fc5de
#include "../decls.h"
undefined4 FUN_8c1fc5de_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  return *(undefined4 *)(ar4 * 4 + 0x8c475fa0);
}

__asm__(".globl _FUN_8c1fc5de\n.set _FUN_8c1fc5de, _FUN_8c1fc5de_def\n");
//@unit 8c1fc604
#include "../decls.h"
undefined4 FUN_8c1fc604_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,8,uVar2,ar7,ar5);
    uVar2 = ar6;
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,0,0,0,ar5);
    FUN_8c1fcef8(ar4,ar5,ar6,uVar2);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc604\n.set _FUN_8c1fc604, _FUN_8c1fc604_def\n");
//@unit 8c1fc654
#include "../decls.h"
undefined4 FUN_8c1fc654_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 != 0) {
    return 0xffffffff;
  }
  uVar2 = FUN_8c1ffb70(ar4,ar5);
  return uVar2;
}

__asm__(".globl _FUN_8c1fc654\n.set _FUN_8c1fc654, _FUN_8c1fc654_def\n");
//@unit 8c1fc682
#include "../decls.h"
undefined4 FUN_8c1fc682_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,9,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc682\n.set _FUN_8c1fc682, _FUN_8c1fc682_def\n");
//@unit 8c1fc6e8
#include "../decls.h"
undefined4 FUN_8c1fc6e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xb,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,0,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc6e8\n.set _FUN_8c1fc6e8, _FUN_8c1fc6e8_def\n");
//@unit 8c1fc740
#include "../decls.h"
undefined4 FUN_8c1fc740_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  undefined4 in_stack_00000004;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xc,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,s0,in_stack_00000004,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    FUN_8c1fcf6e(ar4,s0,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc740\n.set _FUN_8c1fc740, _FUN_8c1fc740_def\n");
//@unit 8c1fc79e
#include "../decls.h"
undefined4 FUN_8c1fc79e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ain0;
  undefined4 in_stack_00000004;
  
  uVar2 = ar7;
  ain0 = ar6;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xd,ar6,uVar2,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ain0,ar7,s0,in_stack_00000004,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ain0);
    FUN_8c1fcf6e(ar4,s0,ar5,ain0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc79e\n.set _FUN_8c1fc79e, _FUN_8c1fc79e_def\n");
//@unit 8c1fc7fc
#include "../decls.h"
undefined4 FUN_8c1fc7fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  
  uVar2 = ar6;
  ain0 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xe,uVar2,ar7,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,ain0,in_stack_00000000,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar6);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc7fc\n.set _FUN_8c1fc7fc, _FUN_8c1fc7fc_def\n");
//@unit 8c1fc852
#include "../decls.h"
undefined4 FUN_8c1fc852_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_stack_00000000;
  undefined4 ain0;
  
  uVar2 = ar6;
  ain0 = ar7;
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x14,uVar2,ar7,ain0);
    FUN_8c1fcea8(ar4,ar4,ar5,ar6,ain0,in_stack_00000000,0,ain0);
    FUN_8c1fcef8(ar4,ar5,ar5,ar6);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc852\n.set _FUN_8c1fc852, _FUN_8c1fc852_def\n");
//@unit 8c1fc8a8
#include "../decls.h"
undefined4 FUN_8c1fc8a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0xf,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc8a8\n.set _FUN_8c1fc8a8, _FUN_8c1fc8a8_def\n");
//@unit 8c1fc8ec
#include "../decls.h"
undefined4 FUN_8c1fc8ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fce88(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fce98(ar4,0x10,ar6,ar7,ar5);
    FUN_8c1fcea8(ar4,ar4,ar5,0,0,0,0,ar5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fc8ec\n.set _FUN_8c1fc8ec, _FUN_8c1fc8ec_def\n");
//@unit 8c1fc93c
#include "../decls.h"
undefined4 FUN_8c1fc93c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1fd8fc(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = FUN_8c1fbfd2(ar4,ar5,ar6,ar7);
    return uVar2;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fc93c\n.set _FUN_8c1fc93c, _FUN_8c1fc93c_def\n");
//@unit 8c1fc980
#include "../decls.h"
undefined4 FUN_8c1fc980_def(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = ar6 >> 2;
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 - 1;
    *ar4 = uVar1;
    ar4 = ar4 + 1;
  } while (uVar2 != 0);
  return in_r0;
}

__asm__(".globl _FUN_8c1fc980\n.set _FUN_8c1fc980, _FUN_8c1fc980_def\n");
//@unit 8c1fc9b0
#include "../decls.h"
undefined4 FUN_8c1fc9b0_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  puVar1 = 0x8c475fa0;
  iVar5 = (int)0x400;
  *(undefined4 *)0x8c475fa0 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar2 = (&memset);
  memset(0x8c475fc0,0,iVar5,4);
  (*(code *)puVar2)(0x8c4763c0,0x30,iVar5);
  (*(code *)puVar2)(0x8c4767c0,0x31,iVar5);
  (*(code *)puVar2)(0x8c476bc0,0x32,iVar5);
  (*(code *)puVar2)(0x8c476fc0,0x33,iVar5);
  (*(code *)puVar2)(0x8c4773c0,0x34,iVar5);
  (*(code *)puVar2)(0x8c4777c0,0x35,iVar5);
  (*(code *)puVar2)(0x8c477bc0,0x36,iVar5);
  (*(code *)puVar2)(0x8c477fc0,0x37,iVar5);
  iVar3 = FUN_8c1fcf90();
  puVar2 = (&FUN_8c1fcfa6);
  if (iVar3 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    if ((ar4 & 1) != 0) {
      FUN_8c1fcfa6((&DATA_8c1fcaf4),0x8c4763c0,iVar5);
    }
    if ((ar4 & 2) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcaf8),0x8c4767c0,iVar5);
    }
    if ((ar4 & 4) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcafc),0x8c476bc0,iVar5);
    }
    if ((ar4 & 8) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb00),0x8c476fc0,iVar5);
    }
    if ((ar4 & 0x10) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb04),0x8c4773c0,iVar5);
    }
    if ((ar4 & 0x20) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb08),0x8c4777c0,iVar5);
    }
    if ((ar4 & 0x40) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb0c),0x8c477bc0,iVar5);
    }
    if ((ar4 & (int)0x80) != 0) {
      (*(code *)puVar2)((&DATA_8c1fcb64),0x8c477fc0,iVar5);
    }
    uVar4 = 0;
  }
  return uVar4;
}

__asm__(".globl _FUN_8c1fc9b0\n.set _FUN_8c1fc9b0, _FUN_8c1fc9b0_def\n");
//@unit 8c1fc9c0
#include "../decls.h"
undefined4 FUN_8c1fc9c0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 unaff_r11;
  uint unaff_r12;
  undefined4 unaff_r14;
  
  *ar4 = unaff_r11;
  ar4[1] = unaff_r11;
  ar4[2] = unaff_r11;
  ar4[3] = unaff_r11;
  ar4[4] = unaff_r11;
  ar4[5] = unaff_r11;
  ar4[6] = unaff_r11;
  ar4[7] = unaff_r11;
  puVar1 = (&memset);
  memset(0x8c475fc0,unaff_r11,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4763c0,0x30,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4767c0,0x31,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c476bc0,0x32,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c476fc0,0x33,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4773c0,0x34,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c4777c0,0x35,unaff_r14,ar7);
  (*(code *)puVar1)(0x8c477bc0,0x36,unaff_r14,ar7);
  ar5_00 = 0x37;
  uVar3 = 0x8c477fc0;
  ar6_00 = unaff_r14;
  (*(code *)puVar1)(0x8c477fc0,0x37,unaff_r14,ar7);
  iVar2 = FUN_8c1fcf90(uVar3,ar5_00,ar6_00,ar7);
  puVar1 = (&FUN_8c1fcfa6);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if ((unaff_r12 & 1) != 0) {
      FUN_8c1fcfa6((&DATA_8c1fcaf4),0x8c4763c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 2) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcaf8),0x8c4767c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 4) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcafc),0x8c476bc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 8) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb00),0x8c476fc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x10) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb04),0x8c4773c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x20) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb08),0x8c4777c0,unaff_r14,ar7);
    }
    if ((unaff_r12 & 0x40) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb0c),0x8c477bc0,unaff_r14,ar7);
    }
    if ((unaff_r12 & (int)0x80) != 0) {
      (*(code *)puVar1)((&DATA_8c1fcb64),0x8c477fc0,unaff_r14,ar7);
    }
    uVar3 = 0;
  }
  return uVar3;
}

__asm__(".globl _FUN_8c1fc9c0\n.set _FUN_8c1fc9c0, _FUN_8c1fc9c0_def\n");
//@unit 8c1fcadc
#include "../decls.h"
undefined4 FUN_8c1fcadc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  memset(0x8c475fc0,0,(int)0x400,ar7);
  return 0;
}

__asm__(".globl _FUN_8c1fcadc\n.set _FUN_8c1fcadc, _FUN_8c1fcadc_def\n");
//@unit 8c1fcaee
#include "../decls.h"
undefined4 thunk_FUN_8c1fcfbe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)0x8c1fcfbe)();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1fcfbe\n.set _thunk_FUN_8c1fcfbe, _thunk_FUN_8c1fcfbe_def\n");
//@unit 8c1fcd9c
#include "../decls.h"
undefined4 FUN_8c1fcd9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x80 + 0x8c475fc0;
  if (*(int *)(iVar2 + 0x74) != 0) {
                    
                    
    uVar1 = (**(code **)(iVar2 + 0x74))(*(undefined4 *)(iVar2 + 0x7c));
    return uVar1;
  }
  return 0x74;
}

__asm__(".globl _FUN_8c1fcd9c\n.set _FUN_8c1fcd9c, _FUN_8c1fcd9c_def\n");
//@unit 8c1fcdc2
#include "../decls.h"
undefined4 FUN_8c1fcdc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x80 + 0x8c475fc0;
  if (*(int *)(iVar2 + 0x78) != 0) {
                    
                    
    uVar1 = (**(code **)(iVar2 + 0x78))();
    return uVar1;
  }
  return 0x78;
}

__asm__(".globl _FUN_8c1fcdc2\n.set _FUN_8c1fcdc2, _FUN_8c1fcdc2_def\n");
//@unit 8c1fce34
#include "../decls.h"
undefined4 FUN_8c1fce34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)0x80;
  uVar3 = 0x8c475fc0 + (int)0x400;
  uVar1 = 0x8c475fc0;
  do {
    *(undefined4 *)(uVar1 + 0x74) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x74;
}

__asm__(".globl _FUN_8c1fce34\n.set _FUN_8c1fce34, _FUN_8c1fce34_def\n");
//@unit 8c1fce50
#include "../decls.h"
undefined4 FUN_8c1fce50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (int)0x80;
  uVar3 = 0x8c475fc0 + (int)0x400;
  uVar1 = 0x8c475fc0;
  do {
    *(undefined4 *)(uVar1 + 0x78) = ar4;
    uVar1 = uVar1 + iVar2;
  } while (uVar1 < uVar3);
  return 0x78;
}

__asm__(".globl _FUN_8c1fce50\n.set _FUN_8c1fce50, _FUN_8c1fce50_def\n");
//@unit 8c1fce88
#include "../decls.h"
undefined4 FUN_8c1fce88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 * 0x80 + 0x8c475fc0 + 4);
}

__asm__(".globl _FUN_8c1fce88\n.set _FUN_8c1fce88, _FUN_8c1fce88_def\n");
//@unit 8c1fce98
#include "../decls.h"
undefined4 FUN_8c1fce98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 * 0x80 + 0x8c475fc0 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c1fce98\n.set _FUN_8c1fce98, _FUN_8c1fce98_def\n");
//@unit 8c1fcea8
#include "../decls.h"
undefined4
FUN_8c1fcea8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = ar4 * 0x80 + 0x8c475fc0;
  *(undefined4 *)(iVar1 + 0x14) = ar5;
  *(undefined4 *)(iVar1 + 0x18) = ar6;
  *(undefined4 *)(iVar1 + 0x1c) = ar7;
  *(undefined4 *)(iVar1 + 0x20) = s0;
  *(undefined4 *)(iVar1 + 0x24) = s4;
  *(undefined4 *)(iVar1 + 0x28) = s8;
  *(undefined4 *)(iVar1 + 4) = 1;
  return in_r0;
}

__asm__(".globl _FUN_8c1fcea8\n.set _FUN_8c1fcea8, _FUN_8c1fcea8_def\n");
//@unit 8c1fcecc
#include "../decls.h"
undefined4 FUN_8c1fcecc_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined4 in_r0;
  undefined1 *puVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x80 + 0x8c475fc0;
  puVar2 = (undefined1 *)(iVar3 + 0x4c);
  do {
    uVar1 = *ar5;
    ar5 = ar5 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar3 + 0x6c));
  return in_r0;
}

__asm__(".globl _FUN_8c1fcecc\n.set _FUN_8c1fcecc, _FUN_8c1fcecc_def\n");
//@unit 8c1fcef8
#include "../decls.h"
undefined4 FUN_8c1fcef8_def(int ar4,char *ar5,char *ar6,undefined4 ar7)

{
  char cVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  
  iVar5 = ar4 * 0x80 + 0x8c475fc0;
  puVar2 = (undefined1 *)(iVar5 + 0x2c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x39));
  puVar2 = (undefined1 *)(iVar5 + 0x3c);
  do {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while (puVar2 < (undefined1 *)(iVar5 + 0x49));
  pcVar4 = ar5 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x2c);
  for (pcVar3 = ar5; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  pcVar4 = ar6 + 0xc;
  pcVar6 = (char *)(iVar5 + 0x3c);
  for (pcVar3 = ar6; (pcVar3 < pcVar4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    cVar1 = *ar6;
    ar6 = ar6 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
  }
  return ar5;
}

__asm__(".globl _FUN_8c1fcef8\n.set _FUN_8c1fcef8, _FUN_8c1fcef8_def\n");
//@unit 8c1fcf6e
#include "../decls.h"
undefined4 FUN_8c1fcf6e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar4 * 0x80 + 0x8c475fc0 + 0x6c,8);
  return uVar1;
}

__asm__(".globl _FUN_8c1fcf6e\n.set _FUN_8c1fcf6e, _FUN_8c1fcf6e_def\n");
//@unit 8c1fcf90
#include "../decls.h"
undefined4 FUN_8c1fcf90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c1f670c(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c1f672c(8,ar5,ar6,ar7);
  *(undefined4 *)0x8c4783c0 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c1fcf90\n.set _FUN_8c1fcf90, _FUN_8c1fcf90_def\n");
//@unit 8c1fcfa6
#include "../decls.h"
undefined4 FUN_8c1fcfa6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f67c2(*(undefined4 *)0x8c4783c0,ar4,ar5,ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c1fcfa6\n.set _FUN_8c1fcfa6, _FUN_8c1fcfa6_def\n");
//@unit 8c1fcfbe
#include "../decls.h"
undefined4 FUN_8c1fcfbe_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f6a34(*(undefined4 *)0x8c4783c0);
  return uVar1;
}

__asm__(".globl _FUN_8c1fcfbe\n.set _FUN_8c1fcfbe, _FUN_8c1fcfbe_def\n");
//@unit 8c1fcfce
#include "../decls.h"
undefined4 thunk_FUN_8c1f6a30_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1f6a30();
  return uVar1;
}

__asm__(".globl _thunk_FUN_8c1f6a30\n.set _thunk_FUN_8c1f6a30, _thunk_FUN_8c1f6a30_def\n");
//@unit 8c1fcffc
#include "../decls.h"
undefined4 FUN_8c1fcffc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  DAT_8c273a48 = 0;
  return ain0;
}

__asm__(".globl _FUN_8c1fcffc\n.set _FUN_8c1fcffc, _FUN_8c1fcffc_def\n");
//@unit 8c1fd004
#include "../decls.h"
undefined4 noop_1fd004_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_1fd004\n.set _noop_1fd004, _noop_1fd004_def\n");
//@unit 8c1fd008
#include "../decls.h"
undefined4 FUN_8c1fd008_def(int ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *ar5_00;
  undefined4 uVar6;
  int a4;
  undefined4 uVar7;
  uint uStack_2c;
  ushort uStack_28;
  ushort uStack_26;
  
  uVar7 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  ar5_00 = ar5;
  pcVar1 = (char *)FUN_8c1efd14(uVar7,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(uVar7,ar5_00,ar6,ar7);
  if ((*pcVar1 == '\0') || ((*puVar2 & 2) == 0)) {
override_prt_8c1fd1c8_7a4d7f16:
    thunk_FUN_8c1f6a30(puVar2,ar5_00,ar6,ar7);
  }
  else {
    thunk_FUN_8c1f4646(uVar7,ar5_00,ar6,ar7);
    do {
      while( true ) {
        FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
        ar5_00 = (uint *)0x2;
        ar6 = 0;
        uVar6 = uVar7;
        puVar2 = (uint *)FUN_8c1efe3a(uVar7,2,0,ar7);
        if (-1 < (int)puVar2) break;
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      while (uVar6 = uVar7, ar5_00 = puVar2, iVar3 = thunk_FUN_8c1f461c(uVar7,puVar2,ar6,ar7),
            iVar3 == 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(uVar7,ar5_00,ar6,ar7);
      uVar6 = uVar7;
      iVar4 = thunk_FUN_8c1f4636(uVar7,ar5_00,ar6,ar7);
      if (iVar4 != 0) {
        thunk_FUN_8c1f6a30(uVar6,ar5_00,ar6,ar7);
        return 0xffffff30;
      }
      iVar4 = *(int *)(iVar3 + 8);
      a4 = iVar4 + 8;
      if (*(char *)(iVar3 + 4) == '\b') {
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0,ar6,ar7);
        *ar5 = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,2,ar6,ar7);
        ar5[1] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,4,ar6,ar7);
        ar5[2] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,6,ar6,ar7);
        ar5[3] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,8,ar6,ar7);
        ar5[4] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,10,ar6,ar7);
        ar5[5] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0xc,ar6,ar7);
        ar5[6] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x10,ar6,ar7);
        ar5[7] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x12,ar6,ar7);
        uVar6 = 0x14;
        ar5[8] = uVar5 & 0xffff;
        uVar5 = (**(code **)(_DAT_8c4783dc + 0xc))(a4,0x14,ar6,ar7);
        ar5[0xd] = uVar5 & 0xffff;
        ar5[0xe] = 0x80;
        ar5[9] = (uint)*(byte *)(iVar4 + 0x16);
        ar5[10] = (uint)*(byte *)(iVar4 + 0x17);
        ar5[0xb] = 0x1ff;
        ar5_00 = (uint *)FUN_8c1efd26(uVar7,uVar6,ar6,ar7);
        puVar2 = &uStack_2c;
        iVar3 = FUN_8c1f0074(puVar2,ar5_00,ar6,ar7);
        if (-1 < iVar3) {
          uVar7 = 0x200;
          ar5[0xf] = (uint)uStack_26;
          ar5[0x10] = (uint)uStack_28;
          uVar5 = libgcc_divide_helper_010468(0x200,(uint)uStack_26);
          ar5[0x11] = uVar5;
          uVar5 = libgcc_divide_helper_010468(uVar7,(uint)uStack_28);
          ar5[0x12] = uVar5;
          return 0;
        }
        goto override_prt_8c1fd1c8_7a4d7f16;
      }
    } while (*(char *)(iVar3 + 4) == -4);
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fd008\n.set _FUN_8c1fd008, _FUN_8c1fd008_def\n");
//@unit 8c1fd1e2
#include "../decls.h"
undefined4 FUN_8c1fd1e2_def(int ar4,int ar5,int ar6,int ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar4_00;
  undefined4 ar4_01;
  int iVar6;
  int iVar7;
  
  iVar6 = ar4 * 0x148;
  iVar7 = ar4;
  ar4_00 = ar6;
  iVar2 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    thunk_FUN_8c1f6a30(iVar7,ar5,ar6,ar7);
    return 0xffffff01;
  }
  ar4_01 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
  iVar7 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x3c) <= iVar7) {
      return 0;
    }
    while( true ) {
      while( true ) {
        iVar3 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
        if (iVar3 != 0) {
          return 0xffffff30;
        }
        ar6 = 0;
        ar5 = 2;
        uVar5 = ar4_01;
        ar7 = iVar2;
        iVar3 = FUN_8c1efe80(ar4_01,2,0,iVar2);
        if (-1 < iVar3) break;
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      while (uVar5 = ar4_01, ar5 = iVar3, iVar4 = thunk_FUN_8c1f461c(ar4_01,iVar3,ar6,ar7),
            iVar4 == 0) {
        thunk_FUN_8c1f6a30(uVar5,ar5,ar6,ar7);
      }
      iVar3 = FUN_8c1efd14(ar4_01,ar5,ar6,ar7);
      iVar4 = thunk_FUN_8c1f4636(ar4_01,ar5,ar6,ar7);
      if (iVar4 != 0) {
        return 0xffffff30;
      }
      cVar1 = *(char *)(iVar3 + 4);
      if (cVar1 == '\b') break;
      if (cVar1 != -4) {
        if (cVar1 != -5) {
          return 0xffffff01;
        }
        return 0xffff0000;
      }
    }
    ar6 = *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    ar5 = *(int *)(iVar3 + 8) + 0xc;
    FUN_8c1fc980(ar4_00,ar5,ar6,ar7,iVar7);
    iVar2 = iVar2 + 1;
    ar4_00 = ar4_00 + *(int *)(*(int *)(&DAT_8c4783fc + iVar6) + 0x44);
    iVar7 = iVar7 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fd1e2\n.set _FUN_8c1fd1e2, _FUN_8c1fd1e2_def\n");
//@unit 8c1fd312
#include "../decls.h"
undefined4 FUN_8c1fd312_def(int ar4,int ar5,char *ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int ar5_00;
  undefined4 *ar7_00;
  undefined4 ar4_00;
  char acStack_34 [4];
  undefined4 uStack_30;
  undefined1 *puStack_2c;
  int iStack_28;
  int iStack_24;
  
  puStack_2c = &DAT_8c4783e0 + ar4 * 0x148;
  iVar2 = ar4;
  ar5_00 = ar5;
  iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    thunk_FUN_8c1f6a30(iVar2,ar5_00,ar6,ar7);
  }
  else {
    ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
    FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
    uVar3 = *(undefined4 *)(*(int *)(puStack_2c + 0x1c) + 0x48);
    ar7_00 = (undefined4 *)0x0;
    for (iStack_24 = 0; iStack_24 < *(int *)(*(int *)(puStack_2c + 0x1c) + 0x40);
        iStack_24 = iStack_24 + 1) {
      while( true ) {
        while( true ) {
          iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
          if (iVar2 != 0) {
            return 0xffffff30;
          }
          libgcc_divide_helper_010468(uVar3,4);
          ar5_00 = 2;
          ar6 = (char *)0x0;
          uVar4 = ar4_00;
          ar7 = ar7_00;
          iVar2 = FUN_8c1efeac(ar4_00,2,0,ar7_00);
          if (-1 < iVar2) break;
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        while (uVar4 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
              iVar1 == 0) {
          thunk_FUN_8c1f6a30(uVar4,ar5_00,ar6,ar7);
        }
        iStack_28 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        if (*(char *)(iStack_28 + 4) == '\a') break;
        if (*(char *)(iStack_28 + 4) != -4) {
          return 0xffffff01;
        }
      }
      ar7_00 = (undefined4 *)((int)ar7_00 + 1);
    }
    do {
      while( true ) {
        iVar2 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
        if (iVar2 != 0) {
          return 0xffffff30;
        }
        ar6 = (char *)0x0;
        ar5_00 = 2;
        uVar3 = ar4_00;
        ar7 = ar7_00;
        iVar2 = FUN_8c1efee0(ar4_00,2,0,ar7_00);
        if (-1 < iVar2) break;
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      while (uVar3 = ar4_00, ar5_00 = iVar2, iVar1 = thunk_FUN_8c1f461c(ar4_00,iVar2,ar6,ar7),
            iVar1 == 0) {
        thunk_FUN_8c1f6a30(uVar3,ar5_00,ar6,ar7);
      }
      iVar2 = FUN_8c1efd14(ar4_00,ar5_00,ar6,ar7);
      iVar1 = thunk_FUN_8c1f4636(ar4_00,ar5_00,ar6,ar7);
      if (iVar1 != 0) {
        return 0xffffff30;
      }
      if (DAT_8c273a48 == (code *)0x0) {
LAB_8c1fd4ac:
        acStack_34[0] = *(char *)(iVar2 + 4);
        uStack_30 = *(undefined4 *)(iVar2 + 0xc);
      }
      else {
        ar6 = acStack_34;
        ar7 = &uStack_30;
        ar5_00 = ar5;
        iVar1 = (*DAT_8c273a48)(ar4,ar5,ar6,ar7);
        if (iVar1 == 0) goto LAB_8c1fd4ac;
      }
      if (acStack_34[0] == '\a') {
        return 0;
      }
    } while (acStack_34[0] == -4);
    if (acStack_34[0] == -5) {
      return 0xffffff40;
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fd312\n.set _FUN_8c1fd312, _FUN_8c1fd312_def\n");
//@unit 8c1fd4f0
#include "../decls.h"
undefined4 FUN_8c1fd4f0_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  uVar2 = 0;
  do {
    iVar1 = iVar1 + 1;
    if (*ar4 != *ar5) {
      uVar2 = 0xffffffff;
    }
    ar4 = ar4 + 1;
    ar5 = ar5 + 1;
  } while (iVar1 < 0x200);
  return uVar2;
}

__asm__(".globl _FUN_8c1fd4f0\n.set _FUN_8c1fd4f0, _FUN_8c1fd4f0_def\n");
//@unit 8c1fd510
#include "../decls.h"
undefined4 FUN_8c1fd510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  pcVar1 = (char *)FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
  if ((*pcVar1 != '\0') && ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd510\n.set _FUN_8c1fd510, _FUN_8c1fd510_def\n");
//@unit 8c1fd550
#include "../decls.h"
undefined4 FUN_8c1fd550_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  undefined4 ar4_00;
  
  ar4_00 = *(undefined4 *)(&DAT_8c26d1e8 + ar4 * 4);
  pcVar1 = (char *)FUN_8c1efd14(ar4_00,ar5,ar6,ar7);
  puVar2 = (uint *)FUN_8c1efd26(ar4_00,ar5,ar6,ar7);
  if (((*pcVar1 != '\0') && (iVar3 = thunk_FUN_8c1f4636(ar4_00,ar5,ar6,ar7), iVar3 == 0)) &&
     ((*puVar2 & 2) != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd550\n.set _FUN_8c1fd550, _FUN_8c1fd550_def\n");
//@unit 8c1fd5c0
#include "../decls.h"
undefined4
FUN_8c1fd5c0_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  
  if ((ar5 & (uint)&s8) == 0) {
    ar6_00 = &s8;
  }
  else {
    ar6_00 = &s12;
  }
  uVar1 = vsprintf_like(0x8c47e2ec,s4,ar6_00,ar7);
  if (DAT_8c273a50 != (code *)0x0) {
    uVar1 = (*DAT_8c273a50)(0x8c47e2ec,s4,ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c1fd5c0\n.set _FUN_8c1fd5c0, _FUN_8c1fd5c0_def\n");
//@unit 8c1fd5f8
#include "../decls.h"
undefined * FUN_8c1fd5f8_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  piVar1 = 0x8c4783dc;
  *(uint *)*(undefined4 *)0x8c4783dc = ar4 & 1;
  puVar2 = (&DATA_8c1fc9aa);
  puVar3 = (&DATA_8c1fc99a);
  if ((ar4 & 1) == 1) {
    *(undefined **)(*piVar1 + 0xc) = (&DATA_8c1fc990);
    *(undefined **)(*piVar1 + 0x10) = (&DATA_8c1fc9a2);
    puVar3 = (undefined *)0x1;
  }
  else {
    *(undefined **)(*piVar1 + 0xc) = (&DATA_8c1fc99a);
    *(undefined **)(*piVar1 + 0x10) = puVar2;
  }
  return puVar3;
}

__asm__(".globl _FUN_8c1fd5f8\n.set _FUN_8c1fd5f8, _FUN_8c1fd5f8_def\n");
//@unit 8c1fd626
#include "../decls.h"
undefined4 FUN_8c1fd626_def(undefined4 ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar4_00;
  undefined4 uVar2;
  int iVar3;
  undefined4 a6;
  uint uVar4;
  
  _DAT_8c4783dc = -0x73b87c38;
  puVar1 = (undefined4 *)&DAT_8c478e20;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 < (undefined4 *)0x8c478e40);
  memset(0x8c4783c8,0,0x14,ar7);
  a6 = 0xa40;
  uVar2 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  FUN_8c1fd5f8(0,uVar2,a6,ar7);
  iVar3 = 0;
  uVar4 = 1;
  _DAT_8c47d2e8 = 0;
  do {
    iVar3 = iVar3 + 1;
    if ((ar5 & uVar4) != 0) {
      _DAT_8c47d2e8 = _DAT_8c47d2e8 + 1;
    }
    uVar4 = uVar4 << 1;
  } while (iVar3 < 8);
  if (ar6 == 0) {
    FUN_8c1fd720(ar4,ar5,0,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 1;
  }
  else {
    FUN_8c1fd75c(ar4,ar5,ar6,ar7);
    *(undefined4 *)(_DAT_8c4783dc + 8) = 0;
  }
  _DAT_8c47d2e0 = 8;
  _DAT_8c47d2e4 = 0;
  FUN_8c1fba90(10,ar5,ar6,ar7);
  ar4_00 = &DAT_8c47d0a0;
  iVar3 = _DAT_8c47d2e0 * 0x48;
  uVar2 = 0;
  memset(&DAT_8c47d0a0,0,iVar3,ar7);
  FUN_8c1fcffc(ar4_00,uVar2,iVar3,ar7,ar4);
  return 0;
}

__asm__(".globl _FUN_8c1fd626\n.set _FUN_8c1fd626, _FUN_8c1fd626_def\n");
//@unit 8c1fd720
#include "../decls.h"
int FUN_8c1fd720_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(undefined4 *)0x8c4783dc;
  if (ar4 == 0xf) {
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  else {
    if (ar4 == 0x21) {
      uVar1 = 1;
    }
    else {
      if (ar4 == 0x41) {
        *(undefined4 *)(iVar2 + 4) = 2;
        return 0;
      }
      if (ar4 != 0x7a) {
        return (int)(int)0xffffff00;
      }
      uVar1 = 3;
    }
    *(undefined4 *)(iVar2 + 4) = uVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd720\n.set _FUN_8c1fd720, _FUN_8c1fd720_def\n");
//@unit 8c1fd75c
#include "../decls.h"
undefined4 FUN_8c1fd75c_def(int ar4,uint ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int a7;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  uint uStack_34;
  undefined2 uStack_24;
  
  a7 = _DAT_8c4783dc;
  puVar4 = (undefined2 *)&DAT_8c4783e0;
  if (ar4 == 0xf) {
    *(undefined4 *)(_DAT_8c4783dc + 4) = 0;
    uVar1 = DAT_8c273a64;
    iVar2 = DAT_8c273a54;
  }
  else {
    if (ar4 != 0x21) {
      if (ar4 == 0x41) {
        *(undefined4 *)(_DAT_8c4783dc + 4) = 2;
        uVar1 = DAT_8c273a6c;
        iVar2 = DAT_8c273a5c;
      }
      else {
        if (ar4 != 0x7a) {
          return 0xffffff00;
        }
        *(undefined4 *)(_DAT_8c4783dc + 4) = 3;
        uVar1 = DAT_8c273a70;
        iVar2 = DAT_8c273a60;
      }
      uStack_24 = (undefined2)uVar1;
      goto LAB_8c1fd7e8;
    }
    *(undefined4 *)(_DAT_8c4783dc + 4) = 1;
    uVar1 = DAT_8c273a68;
    iVar2 = DAT_8c273a58;
  }
  uStack_24 = (undefined2)uVar1;
LAB_8c1fd7e8:
  uStack_34 = 1;
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    if ((ar5 & uStack_34) != 0) {
      *(undefined1 *)(puVar4 + 1) = 1;
      *puVar4 = (short)iVar3;
      *(int *)(puVar4 + 0xe) = iVar3 * 0x4c + -0x73b831c0;
      *(undefined1 *)(puVar4 + 5) = 0;
      *(undefined1 *)((int)puVar4 + 0xb) = 0;
      *(undefined1 *)(puVar4 + 6) = 0;
      *(int *)(puVar4 + 0x16) = ar6;
      *(int *)(puVar4 + 0x10) = ar6 + 0x20;
      *(int *)(puVar4 + 0x12) = ar6 + 0x220;
      *(int *)(puVar4 + 0x14) = (iVar2 + 1) * 0x200 + ar6 + 0x20;
      *(undefined1 *)(puVar4 + 4) = 0;
      *(undefined1 *)((int)puVar4 + 9) = 0;
      puVar4[7] = 1;
      puVar4[8] = (short)iVar2;
      puVar4[9] = uStack_24;
      puVar4[10] = 0x20;
      memset(puVar4 + 0x1c,0,0x10,a7);
      memset(puVar4 + 0x24,0,0x100,a7);
      memset(*(undefined4 *)(puVar4 + 0x16),0x47,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x10),0x53,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x12),0x46,0x20,a7);
      memset(*(undefined4 *)(puVar4 + 0x14),0x44,0x20,a7);
      ar6 = ar6 + ar4 * 0x200 + 0x20;
    }
    uStack_34 = uStack_34 << 1;
    puVar4 = puVar4 + 0xa4;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fd75c\n.set _FUN_8c1fd75c, _FUN_8c1fd75c_def\n");
//@unit 8c1fd8b2
#include "../decls.h"
undefined4 FUN_8c1fd8b2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  
  ar4_00 = ar4 * 0x148 + 0x8c4783e0;
  memset(ar4_00,0,(int)0x148,ar7);
  *(int *)(ar4_00 + 0x1c) = ar4 * 0x4c + 0x8c47ce40;
  return 0;
}

__asm__(".globl _FUN_8c1fd8b2\n.set _FUN_8c1fd8b2, _FUN_8c1fd8b2_def\n");
//@unit 8c1fd8fc
#include "../decls.h"
undefined4 FUN_8c1fd8fc_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  if ((*(int *)(_DAT_8c4783dc + 8) != 0) && (ar5 != 0)) {
    iVar3 = ar4 * 0x148;
    iVar1 = *(int *)(iVar3 + -0x73b87c1c);
    ar7_00 = DAT_8c273a54;
    iVar2 = DAT_8c273a64;
    if (((iVar1 == 0) ||
        (((ar7_00 = DAT_8c273a58, iVar2 = DAT_8c273a68, iVar1 == 1 ||
          (ar7_00 = DAT_8c273a5c, iVar2 = DAT_8c273a6c, iVar1 == 2)) ||
         (ar7_00 = DAT_8c273a60, iVar2 = DAT_8c273a70, iVar1 == 3)))) &&
       ((ar7_00 + iVar2 + 1) * 0x200 + 0x20 <= ar6)) {
      (&DAT_8c4783e2)[iVar3] = 1;
      *(short *)(&DAT_8c4783e0 + iVar3) = (short)ar4;
      *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      *(int *)(&DAT_8c47840c + iVar3) = ar5;
      *(int *)(&DAT_8c478400 + iVar3) = ar5 + 0x20;
      *(int *)(&DAT_8c478404 + iVar3) = ar5 + 0x220;
      *(int *)(&DAT_8c478408 + iVar3) = (ar7_00 + 1) * 0x200 + ar5 + 0x20;
      *(undefined2 *)(&DAT_8c4783ee + iVar3) = 1;
      *(short *)(&DAT_8c4783f0 + iVar3) = (short)ar7_00;
      *(short *)(&DAT_8c4783f2 + iVar3) = (short)iVar2;
      *(undefined2 *)(&DAT_8c4783f4 + iVar3) = 0x20;
      memset(iVar3 + -0x73b87be8,0,0x10,ar7_00);
      memset(iVar3 + -0x73b87bd8,0,0x100,ar7_00);
      memset(*(undefined4 *)(&DAT_8c47840c + iVar3),0x47,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478400 + iVar3),0x53,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478404 + iVar3),0x46,0x20,ar7_00);
      memset(*(undefined4 *)(&DAT_8c478408 + iVar3),0x44,0x20,ar7_00);
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783e9)[iVar3] = 1;
      return 0;
    }
  }
  return 0xffffff00;
}

__asm__(".globl _FUN_8c1fd8fc\n.set _FUN_8c1fd8fc, _FUN_8c1fd8fc_def\n");
//@unit 8c1fda04
#include "../decls.h"
undefined4 FUN_8c1fda04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 in_PR;
  
  ar4_00 = &DAT_8c4783e0;
  ar6_00 = 0xa40;
  ar5_00 = 0;
  memset(&DAT_8c4783e0,0,0xa40,ar7);
  noop_1fd004(ar4_00,ar5_00,ar6_00,ar7,in_PR);
  return 0;
}

__asm__(".globl _FUN_8c1fda04\n.set _FUN_8c1fda04, _FUN_8c1fda04_def\n");
//@unit 8c1fda44
#include "../decls.h"
uint FUN_8c1fda44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = (&FUN_8c1fd510);
  iVar5 = 0;
  uVar4 = 1;
  uVar3 = 0;
  do {
    iVar2 = (*(code *)puVar1)(iVar5);
    iVar5 = iVar5 + 1;
    if (iVar2 != 0) {
      uVar3 = uVar3 | uVar4;
    }
    uVar4 = uVar4 << 1;
  } while (iVar5 < 8);
  return uVar3;
}

__asm__(".globl _FUN_8c1fda44\n.set _FUN_8c1fda44, _FUN_8c1fda44_def\n");
//@unit 8c1fda58
#include "../decls.h"
uint FUN_8c1fda58_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int unaff_r11;
  uint unaff_r12;
  uint unaff_r13;
  int unaff_r14;
  
  puVar1 = (&FUN_8c1fd510);
  do {
    iVar2 = (*(code *)puVar1)(unaff_r14,ar5,ar6,ar7);
    unaff_r14 = unaff_r14 + 1;
    if (iVar2 != 0) {
      unaff_r12 = unaff_r12 | unaff_r13;
    }
    unaff_r13 = unaff_r13 << 1;
  } while (unaff_r14 < unaff_r11);
  return unaff_r12;
}

__asm__(".globl _FUN_8c1fda58\n.set _FUN_8c1fda58, _FUN_8c1fda58_def\n");
//@unit 8c1fda7e
#include "../decls.h"
undefined4 FUN_8c1fda7e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
  if ((iVar1 != 0) && (*(char *)(iVar2 + 8) != '\0')) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c1fda7e\n.set _FUN_8c1fda7e, _FUN_8c1fda7e_def\n");
//@unit 8c1fdab0
#include "../decls.h"
undefined4 FUN_8c1fdab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  if (*(int *)(_DAT_8c4783dc + 8) == 1) {
    uVar1 = FUN_8c1fdc80(ar4,ar5,ar6,ar7);
    return uVar1;
  }
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
    *(undefined4 *)(iVar3 + -0x73b87bec) =
         *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
    ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
    ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
    *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
    FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
    uVar1 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
    iVar2 = FUN_8c1fba98(ar4,uVar1,ar6_00,ar7_00);
    if (-1 < iVar2) {
      iVar2 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar1,ar6_00,ar7_00);
      if (iVar2 < 0) {
        return 0xffffff83;
      }
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783e8)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
      return uVar1;
    }
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fdab0\n.set _FUN_8c1fdab0, _FUN_8c1fdab0_def\n");
//@unit 8c1fdbaa
#include "../decls.h"
undefined4 FUN_8c1fdbaa_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int ar6_00;
  undefined4 ar7_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(int *)(&DAT_8c4783fc + iVar3) = ar4 * 0x4c + -0x73b831c0;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273abc + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  ar7_00 = *(undefined4 *)(iVar3 + -0x73b87bec);
  ar6_00 = *(int *)(iVar3 + -0x73b87bf0);
  *(int *)(iVar3 + -0x73b87bf0) = ar6_00 + 1;
  FUN_8c1fcdc2(ar4,*(undefined4 *)(ar4 * 0x80 + -0x73b8a038),ar6_00,ar7_00);
  uVar2 = *(undefined4 *)(&DAT_8c4783fc + iVar3);
  iVar1 = FUN_8c1fba98(ar4,uVar2,ar6_00,ar7_00);
  if (iVar1 < 0) {
    (&DAT_8c4783e9)[iVar3] = 0;
    (&DAT_8c4783e8)[iVar3] = 0;
LAB_8c1fdc3a:
    uVar2 = 0xffffff01;
  }
  else {
    iVar1 = FUN_8c200cf4(&DAT_8c4783e0 + iVar3,uVar2,ar6_00,ar7_00);
    if (-1 < iVar1) {
      *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x30) =
           *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar3) + 0x1c);
      iVar1 = FUN_8c1fd1e2(ar4,0,0x8c47e4ec,ar7_00);
      if (iVar1 < 0) goto LAB_8c1fdc3a;
      (&DAT_8c4783e9)[iVar3] = 1;
      (&DAT_8c4783ea)[iVar3] = 0;
      (&DAT_8c4783eb)[iVar3] = 0;
      (&DAT_8c4783ec)[iVar3] = 0;
      iVar1 = *(int *)(iVar3 + -0x73b87c1c);
      if (iVar1 == 0) {
        return 0xf;
      }
      if (iVar1 == 1) {
        return 0x21;
      }
      if (iVar1 == 2) {
        return 0x41;
      }
      if (iVar1 == 3) {
        return 0x7a;
      }
    }
    uVar2 = 0xffffff83;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c1fdbaa\n.set _FUN_8c1fdbaa, _FUN_8c1fdbaa_def\n");
//@unit 8c1fdc80
#include "../decls.h"
undefined4 FUN_8c1fdc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  iVar2 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar2] == '\0') {
    return 0xffffff01;
  }
  *(undefined4 *)(iVar2 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar2 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a78 + *(int *)(iVar2 + -0x73b87c1c) * 0x50);
  ar6_00 = *(int *)(iVar2 + -0x73b87bf0);
  ar7_00 = *(undefined4 *)(iVar2 + -0x73b87bec);
  *(int *)(iVar2 + -0x73b87bf0) = ar6_00 + 1;
  uVar1 = *(undefined4 *)(ar4 * 0x80 + -0x73b8a038);
  FUN_8c1fcdc2(ar4,uVar1,ar6_00,ar7_00);
  uVar1 = FUN_8c200a00(ar4,uVar1,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c1fdc80\n.set _FUN_8c1fdc80, _FUN_8c1fdc80_def\n");
//@unit 8c1fdd1a
#include "../decls.h"
int FUN_8c1fdd1a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = ar4 * 0x148 + 0x8c4783e0;
  if (*(char *)(iVar1 + 2) == '\0') {
    return (int)(int)0xffffff01;
  }
  *(undefined1 *)(iVar1 + 9) = 0;
  *(undefined1 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 10) = 0;
  *(undefined1 *)(iVar1 + 0xb) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c1fdd1a\n.set _FUN_8c1fdd1a, _FUN_8c1fdd1a_def\n");
//@unit 8c1fdd44
#include "../decls.h"
int FUN_8c1fdd44_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 ar5_00;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_38 [4];
  int iStack_34;
  undefined2 uStack_30;
  undefined1 uStack_2e;
  undefined1 auStack_18 [8];
  int iStack_10;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff03;
        }
        ar6_01 = auStack_38;
        iVar3 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff05;
        }
        iVar3 = (int)0xcc;
        *ar6 = iStack_10 * (*(int *)(*(int *)(iVar4 + 0x1c) + 0x2c) + 1);
        *(short *)(ar6 + 1) = (short)iStack_10;
        *(char *)((int)ar6 + 6) = (char)iStack_34;
        *(undefined1 *)((int)ar6 + 7) = uStack_2e;
        *(undefined2 *)(ar6 + 2) = uStack_30;
        puVar1 = (&FUN_8c200c82);
        *(bool *)((int)ar6 + 6) = iStack_34 == iVar3;
        (*(code *)puVar1)((int)ar6 + 10,auStack_18,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fdd44\n.set _FUN_8c1fdd44, _FUN_8c1fdd44_def\n");
//@unit 8c1fde30
#include "../decls.h"
undefined4 FUN_8c1fde30_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7,int s0)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *a7;
  int iVar8;
  int iVar9;
  undefined1 auStack_28 [12];
  
  iVar9 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar9] != '\0') {
    ar5_00 = &DAT_8c273a74;
    uVar7 = ar6;
    uVar3 = ar7;
    if (s0 == 0) {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      uVar6 = libgcc_divide_helper_010468
                        (*(undefined4 *)(&DAT_8c273a80 + *(int *)(iVar9 + -0x73b87c1c) * 0x50),10);
      *(undefined4 *)(iVar9 + -0x73b87bec) = uVar6;
    }
    else {
      *(undefined4 *)(iVar9 + -0x73b87bf0) = 1;
      iVar4 = *(int *)(iVar9 + -0x73b87c1c) * 0x50;
      ar5_00 = &DAT_8c273a74 + iVar4;
      *(undefined4 *)(iVar9 + -0x73b87bec) = *(undefined4 *)(&DAT_8c273a80 + iVar4);
    }
    iVar4 = FUN_8c1fd550(ar4,ar5_00,uVar7,uVar3);
    if ((iVar4 != 0) && ((&DAT_8c4783e8)[iVar9] != '\0')) {
      iVar8 = ar4 * 0x200 + -0x73b82d14;
      memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
      uVar7 = *(undefined4 *)(&DAT_8c478400 + iVar9);
      iVar4 = FUN_8c1fbc44(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),uVar7,uVar3);
      if (iVar4 < 0) {
        if (iVar4 == -0xc0) {
          return 0xffffff81;
        }
      }
      else {
        uVar6 = *(undefined4 *)(&DAT_8c4783fc + iVar9);
        iVar4 = FUN_8c1fba98(ar4,uVar6,uVar7,uVar3);
        if (-1 < iVar4) {
          iVar4 = FUN_8c200cf4(&DAT_8c4783e0 + iVar9,uVar6,uVar7,uVar3);
          if (iVar4 < 0) {
            return 0xffffff83;
          }
          *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x30) =
               *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c);
          memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x200,uVar3);
          memset(*(int *)(&DAT_8c478400 + iVar9) + 0x10,0x20,0x20,uVar3);
          for (iVar4 = 0; iVar4 < 0x20; iVar4 = iVar4 + 1) {
            uVar1 = *ar5;
            ar5 = ar5 + 1;
            *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + iVar4 + 0x10) = uVar1;
          }
          FUN_8c200bfc(auStack_28,ar7,0x20,uVar3);
          puVar5 = (undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x30);
          a7 = auStack_28;
          for (iVar4 = 0; iVar4 < 8; iVar4 = iVar4 + 1) {
            uVar1 = *a7;
            a7 = a7 + 1;
            *puVar5 = uVar1;
            puVar5 = puVar5 + 1;
          }
          iVar4 = *(int *)(&DAT_8c4783fc + iVar9);
          uVar7 = *(undefined4 *)(iVar4 + 0xc);
          uVar3 = *(undefined4 *)(iVar4 + 0x14);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x42,*(undefined4 *)(iVar4 + 4),a7);
          *(char *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4e) = (char)ar6;
          *(undefined1 *)(*(int *)(&DAT_8c478400 + iVar9) + 0x4f) = 0;
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x40,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x4a,uVar3,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))(*(undefined4 *)(&DAT_8c478400 + iVar9),0x46,uVar7,a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x4c,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x48,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x50,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x1c),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x52,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x20),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x54,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x34),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x56,
                     *(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x38),a7);
          (**(code **)(_DAT_8c4783dc + 0x10))
                    (*(undefined4 *)(&DAT_8c478400 + iVar9),0x44,
                     **(undefined4 **)(&DAT_8c4783fc + iVar9),a7);
          memset(iVar8,0,0x200,a7);
          iVar4 = 0;
          while( true ) {
            if (**(int **)(&DAT_8c4783fc + iVar9) <= iVar4) {
              uVar7 = 0;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x18) << 9;
              memset(*(undefined4 *)(&DAT_8c478408 + iVar9),0,iVar4,a7);
              FUN_8c200226(ar4,uVar7,iVar4,a7);
              FUN_8c20099e(ar4,*(undefined4 *)(*(int *)(&DAT_8c4783fc + iVar9) + 8),0xfffa,a7);
              for (iVar4 = 0; iVar4 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar4 = iVar4 + 1) {
                FUN_8c20099e(ar4,*(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar4,0xfffa,a7);
              }
              uVar7 = 0xfffa;
              iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 8);
              FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              for (iVar8 = 0; iVar8 < *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0x10);
                  iVar8 = iVar8 + 1) {
                uVar7 = 0xfffa;
                iVar4 = *(int *)(*(int *)(&DAT_8c4783fc + iVar9) + 0xc) + iVar8;
                FUN_8c20099e(ar4,iVar4,0xfffa,a7);
              }
              FUN_8c2007f0(ar4,iVar4,uVar7,a7);
              uVar7 = 0x55;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0x55,0x10,a7);
              FUN_8c20065a(ar4,uVar7,uVar3,a7);
              uVar7 = 0;
              uVar3 = 0x10;
              memset(*(undefined4 *)(&DAT_8c478400 + iVar9),0,0x10,a7);
              (&DAT_8c4783eb)[iVar9] = 0;
              (&DAT_8c4783ec)[iVar9] = 0;
              (&DAT_8c4783ea)[iVar9] = 0;
              uVar7 = FUN_8c200a00(ar4,uVar7,uVar3,a7);
              return uVar7;
            }
            if (s0 == 0) {
              iVar2 = 0;
            }
            else {
              iVar2 = FUN_8c1fbc44(ar4,iVar4,iVar8,a7);
            }
            if (iVar2 == -0xff) break;
            if (iVar2 == -0xc0) {
              uVar7 = 0xffff;
            }
            else {
              uVar7 = 0xfffc;
            }
            FUN_8c20099e(ar4,iVar4,uVar7,a7);
            iVar4 = iVar4 + 1;
          }
        }
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fde30\n.set _FUN_8c1fde30, _FUN_8c1fde30_def\n");
//@unit 8c1fe15a
#include "../decls.h"
int FUN_8c1fe15a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar1 = *(int *)(iVar3 + 0x1c);
  iVar2 = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 0x10);
  iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar2 - *(int *)(iVar1 + 0x18),iVar2 + -1);
  if ((iVar1 < 1) &&
     (iVar2 = *(int *)(iVar3 + 0x1c), iVar1 = *(int *)(iVar2 + 0x1c),
     iVar1 = FUN_8c1fe1e4(ar4,(int)(short)ar5,iVar1,iVar1 + *(int *)(iVar2 + 0x20) + -1), iVar1 < 1)
     ) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fe15a\n.set _FUN_8c1fe15a, _FUN_8c1fe15a_def\n");
//@unit 8c1fe1e4
#include "../decls.h"
undefined4 FUN_8c1fe1e4_def(int ar4,undefined4 ar5,int ar6,int ar7)

{
  int *piVar1;
  uint uVar2;
  int a6;
  int a7;
  int iVar3;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a6 = ar6;
  a7 = ar7;
  while( true ) {
    if (ar7 < ar6) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),ar7 << 1,a6,a7);
    if ((uVar2 & 0xffff) == (uint)(ushort)ar5) break;
    ar7 = ar7 + -1;
  }
  return ar7;
}

__asm__(".globl _FUN_8c1fe1e4\n.set _FUN_8c1fe1e4, _FUN_8c1fe1e4_def\n");
//@unit 8c1fe236
#include "../decls.h"
int FUN_8c1fe236_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int ar5_00;
  undefined1 *puVar5;
  undefined1 *ar6_00;
  int iVar6;
  int iVar7;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [4];
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(iVar7 + 2) != '\0') {
    ar5_00 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7);
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        for (iVar6 = 0; iVar6 < 0x20; iVar6 = iVar6 + 1) {
          *(undefined1 *)(ar5 + iVar6) = *(undefined1 *)(*(int *)(iVar7 + 0x20) + iVar6 + 0x10);
        }
        puVar5 = (undefined1 *)(*(int *)(iVar7 + 0x20) + 0x30);
        ar6_00 = auStack_14;
        for (puVar4 = auStack_1c; puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200c82(ar5 + 0x30,auStack_1c,ar6_00,ar7);
        *(short *)(ar5 + 0x20) = (short)**(undefined4 **)(iVar7 + 0x1c) + 1;
        *(short *)(ar5 + 0x22) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x30);
        uVar3 = FUN_8c1fe350(ar4,0,ar6_00,ar7);
        *(short *)(ar5 + 0x26) = (short)uVar3;
        *(undefined2 *)(ar5 + 0x24) = *(undefined2 *)(ar5 + 0x26);
        *(short *)(ar5 + 0x28) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x38);
        uVar3 = FUN_8c1fe350(ar4,1,ar6_00,ar7);
        *(short *)(ar5 + 0x2a) = (short)uVar3;
        *(short *)(ar5 + 0x2c) = (short)*(undefined4 *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1;
        *(ushort *)(ar5 + 0x2e) = (ushort)*(byte *)(*(int *)(iVar7 + 0x20) + 0x4e);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe236\n.set _FUN_8c1fe236, _FUN_8c1fe236_def\n");
//@unit 8c1fe350
#include "../decls.h"
undefined4 FUN_8c1fe350_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = ar4 * 0x148;
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    iVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return 0xffffff03;
        }
        iVar2 = 0;
        if (ar5 == 1) {
          iVar2 = 0;
          while( true ) {
            if (*(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x38) <= iVar2) {
              return iVar2;
            }
            uVar3 = FUN_8c2009d0(ar4,iVar2,ar6,ar7);
            if ((uVar3 & 0xffff) != 0xfffc) break;
            iVar2 = iVar2 + 1;
          }
          return iVar2;
        }
        if (DAT_8c26d208 != 0) {
          for (iVar1 = 0; iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30);
              iVar1 = iVar1 + 1) {
            uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
            if (((uVar3 & 0xffff) == 0xfffc) &&
               (iVar4 = FUN_8c20093a(ar4,iVar1,ar6,ar7), -1 < iVar4)) {
              iVar2 = iVar2 + 1;
            }
          }
          return iVar2;
        }
        iVar1 = 0;
        while (iVar1 < *(int *)(*(int *)(&DAT_8c4783fc + iVar5) + 0x30)) {
          uVar3 = FUN_8c2009d0(ar4,iVar1,ar6,ar7);
          iVar1 = iVar1 + 1;
          if ((uVar3 & 0xffff) == 0xfffc) {
            iVar2 = iVar2 + 1;
          }
        }
        return iVar2;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1fe350\n.set _FUN_8c1fe350, _FUN_8c1fe350_def\n");
//@unit 8c1fe466
#include "../decls.h"
int FUN_8c1fe466_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  if (*(char *)(iVar6 + 2) != '\0') {
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,ar5,ar6,ar7);
        uVar1 = 0xfffc;
        if (iVar5 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar5 = 0;
        iVar2 = 0;
        while (iVar4 = *(int *)(iVar6 + 0x1c),
              iVar4 = *(int *)(iVar4 + 0x10) * (*(int *)(iVar4 + 0x2c) + 1),
              iVar2 < (int)(iVar4 + (uint)(iVar4 < 0)) >> 1) {
          uVar3 = FUN_8c2009d0(ar4,iVar2,ar6,ar7);
          iVar2 = iVar2 + 1;
          if ((uVar3 & 0xffff) == uVar1) {
            iVar5 = iVar5 + 1;
          }
        }
        return iVar5;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe466\n.set _FUN_8c1fe466, _FUN_8c1fe466_def\n");
//@unit 8c1fe534
#include "../decls.h"
int FUN_8c1fe534_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_40 [8];
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined4 uStack_34;
  undefined4 uStack_18;
  
  iVar1 = 0x8c4783e2;
  *ar6 = 0;
  if (*(char *)(iVar1 + ar4 * 0x148) != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar3,ar6_00,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (-1 < iVar1) {
          uVar3 = ar5;
          iVar1 = FUN_8c200b10(ar4,ar5,ar6_00,ar7);
          if (iVar1 < 0) {
            return (int)(int)0xffffff41;
          }
          iVar1 = FUN_8c200ab6(ar4,uVar3,ar6_00,ar7);
          if (iVar1 != 0) {
            ar6_01 = auStack_40;
            iVar2 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
            *(undefined4 *)0x8c47d2e4 = iVar2;
            if (iVar2 < 0) {
              FUN_8c200ae4(iVar1,ar5,ar6_01,ar7);
              return (int)(int)0xffffff05;
            }
            *(undefined4 *)(iVar1 + 4) = 0;
            *(undefined4 *)(iVar1 + 0x34) = uStack_18;
            *(undefined4 *)(iVar1 + 0x38) = uStack_34;
            *(undefined4 *)(iVar1 + 0x40) = uStack_34;
            *(int *)(iVar1 + 0x28) = ar4;
            *(undefined2 *)(iVar1 + 2) = uStack_38;
            *(undefined1 *)(iVar1 + 1) = uStack_36;
            *ar6 = iVar1;
            return 0;
          }
        }
        return (int)(int)0xffffff07;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe534\n.set _FUN_8c1fe534, _FUN_8c1fe534_def\n");
//@unit 8c1fe646
#include "../decls.h"
int FUN_8c1fe646_def(int ar4,char *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined1 *ar6_00;
  int *ar7_00;
  undefined1 auStack_44 [48];
  
  iVar4 = (int)0x148;
  iVar5 = ar4 * iVar4 + 0x8c4783e0;
  *ar7 = 0;
  if (*(char *)(iVar5 + 2) != '\0') {
    pcVar6 = ar5;
    uVar7 = ar6;
    ar7_00 = ar7;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,pcVar6,uVar7,ar7_00);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,pcVar6,uVar7,ar7_00);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar4 + 0x8c4783e0 + 8) != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,pcVar6,uVar7,ar7_00);
        if (iVar4 < 0) {
          return (int)(int)0xffffff03;
        }
        if ((*(int *)(*(int *)(iVar5 + 0x1c) + 0x38) != 0) &&
           (iVar4 = ret_const_0_200aec(ar4,ar5,uVar7,ar7_00), -1 < iVar4)) {
          ar6_00 = auStack_44;
          iVar4 = FUN_8c200566(ar4,ar5,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)(int)0xffffff06;
          }
          iVar4 = FUN_8c2005d6(ar4,auStack_44,ar6_00,ar7_00);
          if (-1 < iVar4) {
            return (int)(int)0xffffff09;
          }
          uVar7 = 0;
          uVar3 = FUN_8c2009d0(ar4,0,ar6_00,ar7_00);
          if (((uVar3 & 0xffff) == 0xfffc) &&
             (iVar4 = FUN_8c200614(ar4,uVar7,ar6_00,ar7_00), -1 < iVar4)) {
            iVar5 = iVar4;
            FUN_8c200a84(ar4,iVar4,ar6_00,ar7_00);
            iVar5 = FUN_8c200ab6(ar4,iVar5,ar6_00,ar7_00);
            uVar7 = 0xffff;
            if (iVar5 == 0) {
              return (int)(int)0xffffff07;
            }
            *(undefined4 *)(iVar5 + 8) = 1;
            *(undefined4 *)(iVar5 + 4) = 2;
            *(int *)(iVar5 + 0x2c) = iVar4;
            *(undefined4 *)(iVar5 + 0x38) = uVar7;
            *(undefined4 *)(iVar5 + 0x30) = 0;
            *(int *)(iVar5 + 0x28) = ar4;
            *(undefined2 *)(iVar5 + 2) = 1;
            *(undefined1 *)(iVar5 + 1) = 0;
            pcVar6 = (char *)(iVar5 + 0x10);
            for (; puVar1 = (&FUN_8c200bfc), *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar6 = *ar5;
              pcVar6 = pcVar6 + 1;
            }
            *pcVar6 = '\0';
            (*(code *)puVar1)(iVar5 + 0x20,ar6,ar6_00,ar7_00);
            *ar7 = iVar5;
            return 0;
          }
        }
        return (int)(int)0xffffff08;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe646\n.set _FUN_8c1fe646, _FUN_8c1fe646_def\n");
//@unit 8c1fe7aa
#include "../decls.h"
int FUN_8c1fe7aa_def(int ar4,char *ar5,undefined4 ar6,int *ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined1 *ar6_00;
  int *ar7_00;
  undefined1 auStack_44 [48];
  
  iVar2 = 0x8c4783e2;
  *ar7 = 0;
  if (*(char *)(iVar2 + ar4 * 0x148) != '\0') {
    pcVar4 = ar5;
    uVar5 = ar6;
    ar7_00 = ar7;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,pcVar4,uVar5,ar7_00);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,pcVar4,uVar5,ar7_00);
      if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,pcVar4,uVar5,ar7_00);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = ret_const_0_200aec(ar4,ar5,uVar5,ar7_00);
        if (-1 < iVar2) {
          ar6_00 = auStack_44;
          pcVar4 = ar5;
          iVar2 = FUN_8c200566(ar4,ar5,ar6_00,ar7_00);
          if ((-1 < iVar2) && (pcVar4 = ar5, iVar2 = FUN_8c1ff478(ar4,ar5,ar6_00,ar7_00), iVar2 < 0)
             ) {
            return iVar2;
          }
          iVar2 = FUN_8c200614(ar4,pcVar4,ar6_00,ar7_00);
          if (-1 < iVar2) {
            iVar3 = iVar2;
            FUN_8c200a84(ar4,iVar2,ar6_00,ar7_00);
            iVar3 = FUN_8c200ab6(ar4,iVar3,ar6_00,ar7_00);
            uVar5 = 0xffff;
            if (iVar3 == 0) {
              return (int)(int)0xffffff07;
            }
            *(undefined4 *)(iVar3 + 8) = 0;
            *(undefined4 *)(iVar3 + 4) = 1;
            *(int *)(iVar3 + 0x2c) = iVar2;
            *(undefined4 *)(iVar3 + 0x38) = uVar5;
            *(undefined4 *)(iVar3 + 0x30) = 0;
            *(int *)(iVar3 + 0x28) = ar4;
            *(undefined2 *)(iVar3 + 2) = 0;
            *(undefined1 *)(iVar3 + 1) = 0;
            pcVar4 = (char *)(iVar3 + 0x10);
            for (; puVar1 = (&FUN_8c200bfc), *ar5 != '\0'; ar5 = ar5 + 1) {
              *pcVar4 = *ar5;
              pcVar4 = pcVar4 + 1;
            }
            *pcVar4 = '\0';
            (*(code *)puVar1)(iVar3 + 0x20,ar6,ar6_00,ar7_00);
            *ar7 = iVar3;
            return 0;
          }
        }
        return (int)(int)0xffffff08;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe7aa\n.set _FUN_8c1fe7aa, _FUN_8c1fe7aa_def\n");
//@unit 8c1fe8f2
#include "../decls.h"
int FUN_8c1fe8f2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined2 uVar1;
  int iVar2;
  undefined1 uVar3;
  
  uVar1 = (undefined2)ar5;
  uVar3 = (undefined1)ar6;
  if (ar4 == 0) {
    return (int)(int)0xffffff00;
  }
  if (*(char *)(0x8c4783e2 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0') {
    iVar2 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
      if ((iVar2 != 0) &&
         (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined2 *)(ar4 + 2) = uVar1;
        *(undefined1 *)(ar4 + 1) = uVar3;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fe8f2\n.set _FUN_8c1fe8f2, _FUN_8c1fe8f2_def\n");
//@unit 8c1fe9ae
#include "../decls.h"
int FUN_8c1fe9ae_def(int ar4,int ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 *a4;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  
  if (ar4 == 0) {
    return 0xffffff00;
  }
  iVar6 = 0;
  iVar7 = ar5;
  if ((((&DAT_8c4783e2)[*(int *)(ar4 + 0x28) * 0x148] != '\0') &&
      (iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7), iVar1 != 0)) &&
     ((&DAT_8c4783e8)[*(int *)(ar4 + 0x28) * 0x148] != '\0')) {
    iVar1 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
    }
    else {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),iVar7,ar6,ar7);
      if (-1 < iVar1) {
        iVar1 = *(int *)(ar4 + 0x28);
        if (*(int *)(ar4 + 4) != 0) {
          if (ar5 != 0) {
            iVar7 = iVar1 * 0x148;
            *(undefined4 *)(iVar7 + -0x73b87bf0) = 1;
            *(undefined4 *)(iVar7 + -0x73b87bec) =
                 *(undefined4 *)(&DAT_8c273a84 + *(int *)(iVar7 + -0x73b87c1c) * 0x50);
          }
          a4 = (undefined1 *)FUN_8c200a84(iVar1,*(undefined4 *)(ar4 + 0x2c),ar6,ar7);
          if (*(int *)(ar4 + 8) == 1) {
            uVar2 = 0xcc;
          }
          else {
            uVar2 = 0x33;
          }
          *a4 = uVar2;
          a4[1] = *(undefined1 *)(ar4 + 1);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,2,*(undefined4 *)(ar4 + 0x38),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x18,*(undefined4 *)(ar4 + 0x30),ar7);
          (**(code **)(_DAT_8c4783dc + 0x10))(a4,0x1a,(int)*(short *)(ar4 + 2),ar7);
          puVar4 = (undefined1 *)(ar4 + 0x10);
          puVar5 = a4 + 0x10;
          for (puVar3 = a4 + 4; puVar3 < puVar5; puVar3 = puVar3 + 1) {
            uVar2 = *puVar4;
            puVar4 = puVar4 + 1;
            *puVar3 = uVar2;
          }
          puVar3 = (undefined1 *)(ar4 + 0x20);
          ar6 = a4 + 0x18;
          for (; puVar5 < ar6; puVar5 = puVar5 + 1) {
            uVar2 = *puVar3;
            puVar3 = puVar3 + 1;
            *puVar5 = uVar2;
          }
          iVar7 = *(int *)(ar4 + 0x2c);
          FUN_8c200a9c(iVar1,iVar7,ar6,ar7);
          iVar6 = FUN_8c200346(iVar1,iVar7,ar6,ar7);
          if (iVar6 < 0) goto LAB_8c1feafe;
          FUN_8c2007f0(iVar1,iVar7,ar6,ar7);
        }
        iVar6 = 0;
      }
    }
  }
LAB_8c1feafe:
  FUN_8c200ae4(ar4,iVar7,ar6,ar7);
  return iVar6;
}

__asm__(".globl _FUN_8c1fe9ae\n.set _FUN_8c1fe9ae, _FUN_8c1fe9ae_def\n");
//@unit 8c1feb16
#include "../decls.h"
int FUN_8c1feb16_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  
  if (ar4 == 0) {
    iVar1 = (int)(int)0xffffff00;
  }
  else if (*(char *)(*(int *)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
    iVar1 = (int)(int)0xffffff01;
  }
  else {
    pcVar4 = (code *)(&FUN_8c1febd6);
    if ((*(int *)(ar4 + 4) == 1) || (pcVar4 = (code *)(&FUN_8c1fecf2), *(int *)(ar4 + 4) == 2)) {
      iVar3 = (int)0x200;
      iVar1 = 0x8c4783e0 + *(int *)(ar4 + 0x28) * (int)0x148;
      *(undefined4 *)(iVar1 + 0x30) = 1;
      *(int *)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = (*pcVar4)(ar4,ar5);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(int)0xffffff0b;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1feb16\n.set _FUN_8c1feb16, _FUN_8c1feb16_def\n");
//@unit 8c1feb1e
#include "../decls.h"
int FUN_8c1feb1e_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int unaff_r14;
  char in_T;
  int a6;
  
  if (in_T == '\0') {
    if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
      iVar1 = (int)(int)0xffffff01;
    }
    else {
      pcVar4 = (code *)(&FUN_8c1febd6);
      if ((*(int *)(unaff_r14 + 4) == 1) ||
         (pcVar4 = (code *)(&FUN_8c1fecf2), *(int *)(unaff_r14 + 4) == 2)) {
        iVar3 = (int)0x200;
        a6 = *(int *)(unaff_r14 + 0x28) * (int)0x148;
        iVar1 = 0x8c4783e0 + a6;
        *(undefined4 *)(iVar1 + 0x30) = 1;
        *(int *)(iVar1 + 0x34) = ar6;
        iVar1 = 0;
        if (0 < ar6) {
          do {
            iVar2 = (*pcVar4)(unaff_r14,ar5,a6,ar7);
            if (iVar2 < 0) {
              return iVar2;
            }
            iVar1 = iVar1 + 1;
            ar5 = ar5 + iVar3;
          } while (iVar1 < ar6);
        }
        iVar1 = 0;
      }
      else {
        iVar1 = (int)(int)0xffffff0b;
      }
    }
  }
  else {
    iVar1 = (int)(int)0xffffff00;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1feb1e\n.set _FUN_8c1feb1e, _FUN_8c1feb1e_def\n");
//@unit 8c1febd6
#include "../decls.h"
int FUN_8c1febd6_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = ar5;
  iVar3 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),0);
  if (iVar3 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar5,ar6,ar7);
  }
  else {
    iVar3 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28));
    if ((iVar3 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar3 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28));
      if (iVar3 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar5 = *(undefined4 *)(ar4 + 0x28);
      iVar3 = FUN_8c2008f4(uVar5);
      puVar1 = (&FUN_8c1fbc44);
      if (-1 < iVar3) {
        iVar4 = FUN_8c1fbc44(uVar5,iVar3,ar5);
        iVar2 = 0xffff;
        if (iVar4 < 0) {
          if (iVar4 == (int)0xffffff01) {
            return iVar4;
          }
          do {
            FUN_8c20099e(uVar5,iVar3,iVar2);
            iVar3 = FUN_8c200890(uVar5,0xfffc);
            if (iVar3 < 0) goto LAB_8c1fec70;
            iVar4 = (*(code *)puVar1)(uVar5,iVar3,ar5);
          } while (iVar4 != 0);
        }
        FUN_8c20099e(uVar5,iVar3,0xfffa);
        if (*(int *)(ar4 + 0x38) == iVar2) {
          *(int *)(ar4 + 0x38) = (int)(short)iVar3;
        }
        else {
          FUN_8c20099e(uVar5,*(undefined4 *)(ar4 + 0x3c),iVar3);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)iVar3;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1febd6\n.set _FUN_8c1febd6, _FUN_8c1febd6_def\n");
//@unit 8c1febe6
#include "../decls.h"
int FUN_8c1febe6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int ar6_00;
  int iVar2;
  int iVar3;
  undefined4 unaff_r9;
  undefined4 ar4_00;
  int unaff_r13;
  
  iVar2 = FUN_8c1fd510(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  if (iVar2 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c1fd550(*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
    if ((iVar2 != 0) &&
       (*(char *)(0x8c4783e8 + *(int *)(unaff_r13 + 0x28) * (int)0x148) != '\0')) {
      iVar2 = (*(code *)(&thunk_FUN_8c1ffcc2))
                        (*(undefined4 *)(unaff_r13 + 0x28),ar5,ar6,ar7);
      if (iVar2 < 0) {
        return (int)(int)0xffffff03;
      }
      ar4_00 = *(undefined4 *)(unaff_r13 + 0x28);
      iVar2 = FUN_8c2008f4(ar4_00,ar5,ar6,ar7);
      puVar1 = (&FUN_8c1fbc44);
      if (-1 < iVar2) {
        iVar3 = FUN_8c1fbc44(ar4_00,iVar2,unaff_r9,ar7);
        ar6_00 = 0xffff;
        if (iVar3 < 0) {
          if (iVar3 == (int)0xffffff01) {
            return iVar3;
          }
          do {
            iVar3 = ar6_00;
            FUN_8c20099e(ar4_00,iVar2,ar6_00,ar7);
            iVar2 = FUN_8c200890(ar4_00,0xfffc,iVar3,ar7);
            if (iVar2 < 0) goto LAB_8c1fec70;
            iVar3 = (*(code *)puVar1)(ar4_00,iVar2,unaff_r9,ar7);
          } while (iVar3 != 0);
        }
        FUN_8c20099e(ar4_00,iVar2,0xfffa,ar7);
        if (*(int *)(unaff_r13 + 0x38) == ar6_00) {
          *(int *)(unaff_r13 + 0x38) = (int)(short)iVar2;
        }
        else {
          FUN_8c20099e(ar4_00,*(undefined4 *)(unaff_r13 + 0x3c),iVar2,ar7);
        }
        *(int *)(unaff_r13 + 0x3c) = (int)(short)iVar2;
        *(int *)(unaff_r13 + 0x30) = *(int *)(unaff_r13 + 0x30) + 1;
        return 0;
      }
LAB_8c1fec70:
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1febe6\n.set _FUN_8c1febe6, _FUN_8c1febe6_def\n");
//@unit 8c1fecf2
#include "../decls.h"
int FUN_8c1fecf2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ar5_00;
  
  iVar3 = *(int *)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0;
  uVar4 = ar5;
  iVar1 = FUN_8c1fd510(*(int *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),uVar4,ar6,ar7);
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      ar5_00 = *(undefined4 *)(ar4 + 0x30);
      uVar4 = *(undefined4 *)(ar4 + 0x28);
      uVar2 = FUN_8c2009d0(uVar4,ar5_00,ar6,ar7);
      if (((uVar2 & 0xffff) == 0xfffc) &&
         (*(int *)(ar4 + 0x30) < *(int *)(*(int *)(iVar3 + 0x1c) + 0x38))) {
        iVar1 = FUN_8c1fbc44(uVar4,ar5_00,ar5,ar7);
        if (iVar1 < 0) {
          return iVar1;
        }
        FUN_8c20099e(uVar4,ar5_00,0xfffa,ar7);
        if (*(int *)(ar4 + 0x38) == 0xffff) {
          *(int *)(ar4 + 0x38) = (int)(short)ar5_00;
        }
        else {
          FUN_8c20099e(uVar4,*(undefined4 *)(ar4 + 0x3c),ar5_00,ar7);
        }
        *(int *)(ar4 + 0x3c) = (int)(short)ar5_00;
        *(int *)(ar4 + 0x30) = *(int *)(ar4 + 0x30) + 1;
        return 0;
      }
      return (int)(int)0xffffff04;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fecf2\n.set _FUN_8c1fecf2, _FUN_8c1fecf2_def\n");
//@unit 8c1fedfa
#include "../decls.h"
int FUN_8c1fedfa_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int ar6_00;
  
  if (ar4 == 0) {
    iVar1 = (int)(int)0xffffff00;
  }
  else if (*(char *)(*(int *)(ar4 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
    iVar1 = (int)(int)0xffffff01;
  }
  else {
    iVar3 = (int)0x200;
    ar6_00 = *(int *)(ar4 + 0x28) * (int)0x148;
    iVar1 = 0x8c4783e0 + ar6_00;
    *(undefined4 *)(iVar1 + 0x30) = 1;
    *(int *)(iVar1 + 0x34) = ar6;
    iVar1 = 0;
    if (0 < ar6) {
      do {
        iVar2 = FUN_8c1fee6c(ar4,ar5,ar6_00,ar7);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar1 = iVar1 + 1;
        ar5 = ar5 + iVar3;
      } while (iVar1 < ar6);
    }
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fedfa\n.set _FUN_8c1fedfa, _FUN_8c1fedfa_def\n");
//@unit 8c1fee02
#include "../decls.h"
int FUN_8c1fee02_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r14;
  char in_T;
  int a6;
  
  if (in_T == '\0') {
    if (*(char *)(*(int *)(unaff_r14 + 0x28) * (int)0x148 + 0x8c4783e0 + 2) == '\0') {
      iVar1 = (int)(int)0xffffff01;
    }
    else {
      iVar3 = (int)0x200;
      a6 = *(int *)(unaff_r14 + 0x28) * (int)0x148;
      iVar1 = 0x8c4783e0 + a6;
      *(undefined4 *)(iVar1 + 0x30) = 1;
      *(int *)(iVar1 + 0x34) = ar6;
      iVar1 = 0;
      if (0 < ar6) {
        do {
          iVar2 = FUN_8c1fee6c(unaff_r14,ar5,a6,ar7);
          if (iVar2 < 0) {
            return iVar2;
          }
          iVar1 = iVar1 + 1;
          ar5 = ar5 + iVar3;
        } while (iVar1 < ar6);
      }
      iVar1 = 0;
    }
  }
  else {
    iVar1 = (int)(int)0xffffff00;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1fee02\n.set _FUN_8c1fee02, _FUN_8c1fee02_def\n");
//@unit 8c1fee6c
#include "../decls.h"
int FUN_8c1fee6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 ar5_00;
  undefined4 uVar3;
  
  uVar3 = ar5;
  iVar1 = FUN_8c1fd510(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c1fdd1a(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
  }
  else {
    iVar1 = FUN_8c1fd550(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
    if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + *(int *)(ar4 + 0x28) * (int)0x148) != '\0')
       ) {
      iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)(ar4 + 0x28),uVar3,ar6,ar7);
      if (iVar1 < 0) {
        return (int)(int)0xffffff03;
      }
      uVar3 = *(undefined4 *)(ar4 + 0x28);
      if (*(int *)(ar4 + 0x40) == 0xfffa) {
        if (*(int *)(ar4 + 0x34) != 0) {
          return 0xffff0000;
        }
      }
      else if (*(int *)(ar4 + 0x34) != 0) {
        if ((*(int *)(ar4 + 0x40) != 0xfffc) && (*(int *)(ar4 + 0x40) != 0xffff)) {
          ar5_00 = *(undefined4 *)(ar4 + 0x40);
          iVar1 = FUN_8c1fbb6c(uVar3,ar5_00,ar5,ar7);
          if (iVar1 < 0) {
            return iVar1;
          }
          uVar2 = FUN_8c2009d0(uVar3,ar5_00,ar5,ar7);
          *(uint *)(ar4 + 0x40) = uVar2 & 0xffff;
          iVar1 = *(int *)(ar4 + 0x34) + -1;
          *(int *)(ar4 + 0x34) = iVar1;
          return iVar1;
        }
        return (int)(int)0xffffff41;
      }
      return 0;
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fee6c\n.set _FUN_8c1fee6c, _FUN_8c1fee6c_def\n");
//@unit 8c1fef5a
#include "../decls.h"
int FUN_8c1fef5a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 auStack_34 [48];
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,ar5_00,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = FUN_8c200566(ar4,ar5,auStack_34,ar7);
        if (-1 < iVar1) {
          return 0;
        }
        return (int)(int)0xffffff05;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1fef5a\n.set _FUN_8c1fef5a, _FUN_8c1fef5a_def\n");
//@unit 8c1ff018
#include "../decls.h"
int FUN_8c1ff018_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = (int)0x148;
  iVar8 = ar4 * iVar7 + 0x8c4783e0;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    iVar4 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      FUN_8c1fdd1a(ar4,pbVar5,ar6,ar7);
    }
    else {
      iVar4 = FUN_8c1fd550(ar4,pbVar5,ar6,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
        iVar7 = thunk_FUN_8c1ffcc2(ar4,pbVar5,ar6,ar7);
        puVar3 = (&FUN_8c200a84);
        if (iVar7 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined4 *)(iVar8 + 0x18) = 0;
        pbVar5 = (byte *)(*(code *)puVar3)(ar4,0,ar6,ar7);
        iVar7 = 0;
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff0b4:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            pbVar5 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *pbVar5;
              pbVar5 = pbVar5 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
            return 0;
          }
          if ((*pbVar5 == 0x33) || (*pbVar5 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff0b4;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff018\n.set _FUN_8c1ff018, _FUN_8c1ff018_def\n");
//@unit 8c1ff110
#include "../decls.h"
int FUN_8c1ff110_def(int ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  if (*(char *)(iVar6 + 2) != '\0') {
    pbVar4 = ar5;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,pbVar4,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,pbVar4,ar6,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,pbVar4,ar6,ar7);
        if (iVar5 < 0) {
          return (int)(int)0xffffff03;
        }
        pbVar4 = (byte *)FUN_8c200a84(ar4,*(undefined4 *)(iVar6 + 0x18),ar6,ar7);
        iVar5 = *(int *)(iVar6 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar6 + 0x1c) + 0x30) <= iVar5) {
LAB_8c1ff1a6:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            pbVar4 = pbVar4 + 4;
            pbVar7 = ar5 + 0xc;
            for (; ar5 < pbVar7; ar5 = ar5 + 1) {
              bVar1 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              *ar5 = bVar1;
            }
            *pbVar7 = 0;
            return 0;
          }
          *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
          if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff1a6;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar5 = iVar5 + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff110\n.set _FUN_8c1ff110, _FUN_8c1ff110_def\n");
//@unit 8c1ff1f8
#include "../decls.h"
int FUN_8c1ff1f8_def(int ar4,byte *ar5,int *ar6,undefined4 ar7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  int iVar6;
  int iVar7;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 auStack_20 [8];
  int iStack_18;
  
  iVar6 = (int)0x148;
  iVar7 = ar4 * iVar6 + 0x8c4783e0;
  if (*(char *)(iVar7 + 2) != '\0') {
    pbVar4 = ar5;
    ar6_00 = ar6;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,pbVar4,ar6_00,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,pbVar4,ar6_00,ar7);
      if ((iVar3 != 0) && (*(char *)(ar4 * iVar6 + 0x8c4783e0 + 8) != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,pbVar4,ar6_00,ar7);
        puVar2 = (&FUN_8c200a84);
        if (iVar6 < 0) {
          return (int)(int)0xffffff03;
        }
        *(undefined4 *)(iVar7 + 0x18) = 0;
        pbVar4 = (byte *)(*(code *)puVar2)(ar4,0,ar6_00,ar7);
        iVar6 = 0;
        iVar3 = 0;
        do {
          if (*(int *)(*(int *)(iVar7 + 0x1c) + 0x30) <= iVar6) {
LAB_8c1ff298:
            if (iVar3 == 0) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar4 + 4;
            pbVar5 = ar5 + 0xc;
            for (; puVar2 = (&FUN_8c2004ea), ar5 < pbVar5; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar5 = 0;
            *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
            (*(code *)puVar2)(pbVar4,auStack_40,ar6_01,iVar3);
            iVar6 = (int)0xcc;
            *ar6 = iStack_18 * (*(int *)(*(int *)(iVar7 + 0x1c) + 0x2c) + 1);
            *(short *)(ar6 + 1) = (short)iStack_18;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_3c;
            *(undefined1 *)((int)ar6 + 7) = uStack_36;
            *(undefined2 *)(ar6 + 2) = uStack_38;
            puVar2 = (&FUN_8c200c82);
            *(bool *)((int)ar6 + 6) = iStack_3c == iVar6;
            (*(code *)puVar2)((int)ar6 + 10,auStack_20,ar6_01,iVar3);
            return 0;
          }
          if ((*pbVar4 == 0x33) || (*pbVar4 == 0xcc)) {
            iVar3 = 1;
            goto LAB_8c1ff298;
          }
          pbVar4 = pbVar4 + 0x20;
          iVar6 = iVar6 + 1;
          *(int *)(iVar7 + 0x18) = *(int *)(iVar7 + 0x18) + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff1f8\n.set _FUN_8c1ff1f8, _FUN_8c1ff1f8_def\n");
//@unit 8c1ff336
#include "../decls.h"
int FUN_8c1ff336_def(int ar4,byte *ar5,int *ar6,int ar7)

{
  byte bVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  byte *pbVar5;
  int *ar6_00;
  byte *ar6_01;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_44 [4];
  int iStack_40;
  undefined2 uStack_3c;
  undefined1 uStack_3a;
  undefined1 auStack_24 [8];
  int iStack_1c;
  
  iVar7 = (int)0x148;
  iVar8 = ar4 * iVar7 + 0x8c4783e0;
  if (*(char *)(iVar8 + 2) != '\0') {
    pbVar5 = ar5;
    ar6_00 = ar6;
    iVar4 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar4 == 0) {
      FUN_8c1fdd1a(ar4,pbVar5,ar6_00,ar7);
    }
    else {
      iVar4 = FUN_8c1fd550(ar4,pbVar5,ar6_00,ar7);
      if ((iVar4 != 0) && (*(char *)(ar4 * iVar7 + 0x8c4783e0 + 8) != '\0')) {
        iVar7 = thunk_FUN_8c1ffcc2(ar4,pbVar5,ar6_00,ar7);
        if (iVar7 < 0) {
          return (int)(int)0xffffff03;
        }
        pbVar5 = (byte *)FUN_8c200a84(ar4,*(undefined4 *)(iVar8 + 0x18),ar6_00,ar7);
        iVar7 = *(int *)(iVar8 + 0x18);
        bVar2 = false;
        do {
          if (*(int *)(*(int *)(iVar8 + 0x1c) + 0x30) <= iVar7) {
LAB_8c1ff400:
            if (!bVar2) {
              return (int)(int)0xffffff05;
            }
            ar6_01 = pbVar5 + 4;
            pbVar6 = ar5 + 0xc;
            for (; puVar3 = (&FUN_8c2004ea), ar5 < pbVar6; ar5 = ar5 + 1) {
              bVar1 = *ar6_01;
              ar6_01 = ar6_01 + 1;
              *ar5 = bVar1;
            }
            *pbVar6 = 0;
            (*(code *)puVar3)(pbVar5,auStack_44,ar6_01,ar7);
            *ar6 = iStack_1c * (*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) + 1);
            iVar7 = (int)0xcc;
            *(short *)(ar6 + 1) = (short)iStack_1c;
            *(undefined1 *)((int)ar6 + 6) = (undefined1)iStack_40;
            *(undefined1 *)((int)ar6 + 7) = uStack_3a;
            *(undefined2 *)(ar6 + 2) = uStack_3c;
            puVar3 = (&FUN_8c200c82);
            *(bool *)((int)ar6 + 6) = iStack_40 == iVar7;
            (*(code *)puVar3)((int)ar6 + 10,auStack_24,ar6_01,ar7);
            return 0;
          }
          *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
          bVar1 = *pbVar5;
          ar7 = (int)(char)bVar1;
          if ((bVar1 == 0x33) || (bVar1 == 0xcc)) {
            bVar2 = true;
            goto LAB_8c1ff400;
          }
          pbVar5 = pbVar5 + 0x20;
          iVar7 = iVar7 + 1;
        } while( true );
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff336\n.set _FUN_8c1ff336, _FUN_8c1ff336_def\n");
//@unit 8c1ff478
#include "../decls.h"
int FUN_8c1ff478_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar6_00;
  int iVar1;
  undefined4 ar4_00;
  int iVar2;
  uint uVar3;
  undefined1 *ar6_01;
  undefined4 ar6_02;
  uint ar5_00;
  undefined1 auStack_48 [12];
  uint uStack_3c;
  int iStack_20;
  
  ar6_01 = auStack_48;
  iVar1 = FUN_8c200566(ar4,ar5,ar6_01,ar7);
  if (iVar1 < 0) {
    iVar1 = (int)(int)0xffffff05;
  }
  else {
    ar4_00 = FUN_8c200a84(ar4,iVar1,ar6_01,ar7);
    iVar2 = FUN_8c200b10(ar4,ar5,ar6_01,ar7);
    ar6_00 = 0xfffc;
    if (iVar2 == 0) {
      ar5_00 = uStack_3c;
      for (iVar2 = 0; iVar2 < iStack_20; iVar2 = iVar2 + 1) {
        uVar3 = FUN_8c2009d0(ar4,ar5_00,ar6_01,ar7);
        ar6_01 = ar6_00;
        FUN_8c20099e(ar4,ar5_00,ar6_00,ar7);
        ar5_00 = uVar3 & 0xffff;
      }
    }
    ar6_02 = 0x20;
    memset(ar4_00,0,0x20,ar7);
    FUN_8c200a9c(ar4,iVar1,ar6_02,ar7);
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c1ff478\n.set _FUN_8c1ff478, _FUN_8c1ff478_def\n");
//@unit 8c1ff530
#include "../decls.h"
undefined4 FUN_8c1ff530_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = ar4 * 0x148;
  *(undefined4 *)(iVar3 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar3 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a90 + *(int *)(iVar3 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar3] != '\0') {
    uVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,uVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,uVar2,ar6,ar7);
      if ((iVar1 != 0) && ((&DAT_8c4783e8)[iVar3] != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,uVar2,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff03;
        }
        iVar3 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return 0xffffff0b;
        }
        iVar3 = FUN_8c1ff478(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar3 = FUN_8c200346(ar4,ar5,ar6,ar7);
        if (iVar3 < 0) {
          return iVar3;
        }
        uVar2 = FUN_8c2007f0(ar4,ar5,ar6,ar7);
        return uVar2;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff530\n.set _FUN_8c1ff530, _FUN_8c1ff530_def\n");
//@unit 8c1ff610
#include "../decls.h"
undefined4 FUN_8c1ff610_def(int ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  bool bVar1;
  int iVar2;
  undefined4 *ar5_00;
  int ar6_00;
  undefined4 *puVar3;
  int iVar4;
  
  iVar4 = ar4 * 0x148;
  *(undefined4 *)(iVar4 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar4 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273ab8 + *(int *)(iVar4 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar4] != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar4] != '\0')) {
        iVar4 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return 0xffffff03;
        }
        iVar4 = 0;
        puVar3 = ar5;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*puVar3;
            iVar2 = ret_const_0_200aec(ar4,ar5_00,ar6_00,ar7);
            if (iVar2 < 0) {
              return 0xffffff0a;
            }
            iVar4 = iVar4 + 1;
            puVar3 = puVar3 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = 0;
        bVar1 = false;
        if (0 < ar6) {
          do {
            ar5_00 = (undefined4 *)*ar5;
            iVar2 = FUN_8c1ff478(ar4,ar5_00,ar6_00,ar7);
            iVar4 = iVar4 + 1;
            if (iVar2 < 0) {
              bVar1 = true;
            }
            ar5 = ar5 + 1;
          } while (iVar4 < ar6);
        }
        iVar4 = FUN_8c200346(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        iVar4 = FUN_8c2007f0(ar4,ar5_00,ar6_00,ar7);
        if (iVar4 < 0) {
          return iVar4;
        }
        if (bVar1) {
          return 0xffffff0a;
        }
        return 0;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff610\n.set _FUN_8c1ff610, _FUN_8c1ff610_def\n");
//@unit 8c1ff72e
#include "../decls.h"
undefined4 FUN_8c1ff72e_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *ar6_00;
  int iVar5;
  undefined1 auStack_38 [48];
  
  iVar5 = ar4 * 0x148;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a94 + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar3 = ar5;
    puVar4 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,puVar4,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,puVar4,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar3,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,puVar4,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        iVar5 = FUN_8c200566(ar4,ar5,auStack_38,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        puVar4 = auStack_38;
        iVar2 = FUN_8c200566(ar4,ar6,puVar4,ar7);
        if (-1 < iVar2) {
          return 0xffffff06;
        }
        iVar2 = FUN_8c200a84(ar4,iVar5,puVar4,ar7);
        ar6_00 = (undefined1 *)(iVar2 + 0x10);
        for (puVar4 = (undefined1 *)(iVar2 + 4); puVar4 < ar6_00; puVar4 = puVar4 + 1) {
          uVar1 = *ar6;
          ar6 = ar6 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar5,ar6_00,ar6);
        uVar3 = FUN_8c200346(ar4,iVar5,ar6_00,ar6);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff72e\n.set _FUN_8c1ff72e, _FUN_8c1ff72e_def\n");
//@unit 8c1ff844
#include "../decls.h"
undefined4 FUN_8c1ff844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  int iVar6;
  undefined1 auStack_44 [44];
  undefined1 auStack_18 [12];
  
  iVar6 = ar4 * 0x148;
  *(undefined4 *)(iVar6 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar6 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar6 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar6] != '\0') {
    uVar3 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,uVar3,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,uVar3,ar6_00,ar7);
      if ((iVar2 != 0) && ((&DAT_8c4783e8)[iVar6] != '\0')) {
        iVar6 = thunk_FUN_8c1ffcc2(ar4,uVar3,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff03;
        }
        iVar6 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (iVar6 < 0) {
          return 0xffffff0b;
        }
        puVar4 = auStack_44;
        iVar6 = FUN_8c200566(ar4,ar5,puVar4,ar7);
        if (iVar6 < 0) {
          return 0xffffff05;
        }
        iVar2 = FUN_8c200a84(ar4,iVar6,puVar4,ar7);
        FUN_8c200bfc(auStack_18,ar6,puVar4,ar7);
        puVar5 = auStack_18;
        ar6_01 = (undefined1 *)(iVar2 + 0x18);
        for (puVar4 = (undefined1 *)(iVar2 + 0x10); puVar4 < ar6_01; puVar4 = puVar4 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puVar4 = uVar1;
        }
        FUN_8c200a9c(ar4,iVar6,ar6_01,ar7);
        uVar3 = FUN_8c200346(ar4,iVar6,ar6_01,ar7);
        return uVar3;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ff844\n.set _FUN_8c1ff844, _FUN_8c1ff844_def\n");
//@unit 8c1ff95a
#include "../decls.h"
int FUN_8c1ff95a_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [48];
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    ar6_00 = ar6;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6_00,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,ar5_00,ar6_00,ar7);
      if ((iVar2 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = ret_const_0_200aec(ar4,ar5,ar6_00,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff0b;
        }
        puVar3 = auStack_34;
        iVar2 = FUN_8c200566(ar4,ar5,puVar3,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        iVar2 = FUN_8c200a84(ar4,iVar2,puVar3,ar7);
        ar6_01 = (undefined1 *)(iVar2 + 0x10);
        for (puVar3 = auStack_3c; puVar3 < auStack_34; puVar3 = puVar3 + 1) {
          uVar1 = *ar6_01;
          ar6_01 = ar6_01 + 1;
          *puVar3 = uVar1;
        }
        FUN_8c200c82(ar6,auStack_3c,ar6_01,ar7);
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ff95a\n.set _FUN_8c1ff95a, _FUN_8c1ff95a_def\n");
//@unit 8c1ffa54
#include "../decls.h"
undefined4 FUN_8c1ffa54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *a6;
  int iVar5;
  undefined1 auStack_3c [48];
  
  iVar5 = ar4 * 0x148;
  sVar2 = (short)ar6;
  uVar1 = (undefined1)ar7;
  *(undefined4 *)(iVar5 + -0x73b87bf0) = 1;
  *(undefined4 *)(iVar5 + -0x73b87bec) =
       *(undefined4 *)(&DAT_8c273a9c + *(int *)(iVar5 + -0x73b87c1c) * 0x50);
  if ((&DAT_8c4783e2)[iVar5] != '\0') {
    uVar4 = ar5;
    iVar3 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar3 == 0) {
      FUN_8c1fdd1a(ar4,uVar4,ar6,ar7);
    }
    else {
      iVar3 = FUN_8c1fd550(ar4,uVar4,ar6,ar7);
      if ((iVar3 != 0) && ((&DAT_8c4783e8)[iVar5] != '\0')) {
        iVar5 = thunk_FUN_8c1ffcc2(ar4,uVar4,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff03;
        }
        iVar5 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar5 < 0) {
          return 0xffffff0b;
        }
        a6 = auStack_3c;
        iVar5 = FUN_8c200566(ar4,ar5,a6,ar7);
        if (iVar5 < 0) {
          return 0xffffff05;
        }
        iVar3 = FUN_8c200a84(ar4,iVar5,a6,ar7);
        if (DAT_8c26d20c != 0) {
          a6 = (undefined1 *)(int)sVar2;
          (**(code **)(_DAT_8c4783dc + 0x10))(iVar3,0x1a,a6,ar7);
        }
        *(undefined1 *)(iVar3 + 1) = uVar1;
        FUN_8c200a9c(ar4,iVar5,a6,ar7);
        uVar4 = FUN_8c200346(ar4,iVar5,a6,ar7);
        return uVar4;
      }
    }
  }
  return 0xffffff01;
}

__asm__(".globl _FUN_8c1ffa54\n.set _FUN_8c1ffa54, _FUN_8c1ffa54_def\n");
//@unit 8c1ffb70
#include "../decls.h"
int FUN_8c1ffb70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined1 auStack_34 [40];
  undefined4 uStack_c;
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    ar5_00 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,ar5_00,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar1 = thunk_FUN_8c1ffcc2(ar4,ar5_00,ar6,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar1 = ret_const_0_200aec(ar4,ar5,ar6,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff0b;
        }
        iVar1 = FUN_8c200566(ar4,ar5,auStack_34,ar7);
        if (iVar1 < 0) {
          return (int)(int)0xffffff05;
        }
        return uStack_c;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffb70\n.set _FUN_8c1ffb70, _FUN_8c1ffb70_def\n");
//@unit 8c1ffc0a
#include "../decls.h"
int FUN_8c1ffc0a_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [32];
  
  if (*(char *)(0x8c4783e2 + ar4 * 0x148) != '\0') {
    iVar2 = ar5;
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,iVar2,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,iVar2,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(0x8c4783e8 + ar4 * 0x148) != '\0')) {
        iVar2 = thunk_FUN_8c1ffcc2(ar4,iVar2,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff03;
        }
        iVar2 = FUN_8c2005d6(ar4,auStack_38,ar6,ar7);
        if (iVar2 < 0) {
          return (int)(int)0xffffff05;
        }
        for (iVar2 = 0; iVar2 < 0xc; iVar2 = iVar2 + 1) {
          *(undefined1 *)(iVar2 + ar5) = auStack_28[iVar2];
        }
        *(undefined1 *)(ar5 + 0xc) = 0;
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffc0a\n.set _FUN_8c1ffc0a, _FUN_8c1ffc0a_def\n");
//@unit 8c1ffcc2
#include "../decls.h"
int FUN_8c1ffcc2_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    iVar1 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      FUN_8c1fdd1a(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c1fd550(ar4,ar5,ar6,ar7);
      if ((iVar1 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        pcVar2 = *(char **)(iVar4 + 0x20);
        iVar3 = 0;
        do {
          if (*pcVar2 != 'U') {
            *(undefined1 *)(iVar4 + 0xb) = 0;
            *(undefined1 *)(iVar4 + 0xc) = 0;
            goto LAB_8c1ffd38;
          }
          iVar3 = iVar3 + 1;
          pcVar2 = pcVar2 + 1;
        } while (iVar3 < 0x10);
        if (*(int *)(0x8c478e20 + ar4 * 4) == 0) {
          return 0;
        }
LAB_8c1ffd38:
        return (int)(int)0xffffff03;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffcc2\n.set _FUN_8c1ffcc2, _FUN_8c1ffcc2_def\n");
//@unit 8c1ffd6c
#include "../decls.h"
int FUN_8c1ffd6c_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined1 *puStack_10;
  
  iVar3 = (int)0x148;
  iVar4 = ar4 * iVar3 + 0x8c4783e0;
  if (*(char *)(iVar4 + 2) != '\0') {
    puVar5 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,puVar5,ar6,ar7);
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,puVar5,ar6,ar7);
      if ((iVar2 != 0) && (*(char *)(ar4 * iVar3 + 0x8c4783e0 + 8) != '\0')) {
        iVar3 = thunk_FUN_8c1ffcc2(ar4,puVar5,ar6,ar7);
        if (iVar3 < 0) {
          return (int)(int)0xffffff03;
        }
        puVar5 = (undefined1 *)(*(int *)(iVar4 + 0x20) + 0x10);
        puStack_10 = ar5;
        for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
          uVar1 = *puVar5;
          puVar5 = puVar5 + 1;
          *puStack_10 = uVar1;
          puStack_10 = puStack_10 + 1;
        }
        return 0;
      }
    }
  }
  return (int)(int)0xffffff01;
}

__asm__(".globl _FUN_8c1ffd6c\n.set _FUN_8c1ffd6c, _FUN_8c1ffd6c_def\n");
//@unit 8c1ffdfa
#include "../decls.h"
int FUN_8c1ffdfa_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 *puStack_14;
  
  iVar5 = (int)0x148;
  iVar6 = ar4 * iVar5 + 0x8c4783e0;
  sVar1 = (int)0xffffff01;
  if (*(char *)(iVar6 + 2) != '\0') {
    puVar4 = ar5;
    iVar2 = FUN_8c1fd510(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      FUN_8c1fdd1a(ar4,puVar4,ar6,ar7);
      sVar1 = (int)0xffffff01;
    }
    else {
      iVar2 = FUN_8c1fd550(ar4,puVar4,ar6,ar7);
      sVar1 = (int)0xffffff01;
      if (((iVar2 != 0) && (*(char *)(ar4 * iVar5 + 0x8c4783e0 + 8) != '\0')) &&
         (iVar5 = thunk_FUN_8c1ffcc2(ar4,puVar4,ar6,ar7),
         sVar1 = (int)0xffffff03, -1 < iVar5)) {
        iVar5 = 0;
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        puVar4 = (undefined1 *)(*(int *)(iVar6 + 0x20) + 0x10);
        puStack_14 = ar5;
        for (; iVar5 < 0x20; iVar5 = iVar5 + 1) {
          *puVar4 = *puStack_14;
          puVar4 = puVar4 + 1;
          puStack_14 = puStack_14 + 1;
        }
        uVar3 = FUN_8c20065a(ar4,puVar4,iVar5,iVar2);
        return uVar3;
      }
    }
  }
  return (int)sVar1;
}

__asm__(".globl _FUN_8c1ffdfa\n.set _FUN_8c1ffdfa, _FUN_8c1ffdfa_def\n");
//@unit 8c1ffebe
#include "../decls.h"
undefined4 FUN_8c1ffebe_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  piVar1 = 0x8c4783dc;
  uVar5 = 0xfffc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar3 + 0x24),iVar4 << 1,uVar5);
    if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff)) break;
    iVar4 = iVar4 + 1;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c1ffebe\n.set _FUN_8c1ffebe, _FUN_8c1ffebe_def\n");
//@unit 8c1ffeca
#include "../decls.h"
undefined4 FUN_8c1ffeca_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int in_r3;
  int iVar3;
  int in_MACL;
  
  piVar1 = 0x8c4783dc;
  iVar3 = 0;
  while( true ) {
    if (*(int *)(*(int *)(in_MACL + in_r3 + 0x1c) + 0x30) <= iVar3) {
      return 0xffffffff;
    }
    uVar2 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(in_MACL + in_r3 + 0x24),iVar3 << 1,ar6,ar7)
    ;
    if (((uVar2 & 0xffff) != 0xfffc) && ((uVar2 & 0xffff) != 0xffff)) break;
    iVar3 = iVar3 + 1;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c1ffeca\n.set _FUN_8c1ffeca, _FUN_8c1ffeca_def\n");
//@unit 8c1fff0c
#include "../decls.h"
int FUN_8c1fff0c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  uVar6 = 0xfffc;
  iVar4 = ar4 * 0x148 + 0x8c4783e0;
  iVar5 = *(int *)(*(int *)(iVar4 + 0x1c) + 0x30);
  do {
    iVar5 = iVar5 + -1;
    if (iVar5 < ar5) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))(*(undefined4 *)(iVar4 + 0x24),iVar5 * 2,uVar6);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar5;
}

__asm__(".globl _FUN_8c1fff0c\n.set _FUN_8c1fff0c, _FUN_8c1fff0c_def\n");
//@unit 8c1fff20
#include "../decls.h"
int FUN_8c1fff20_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int in_r3;
  int unaff_r11;
  int unaff_r13;
  int iVar4;
  
  uVar2 = 0xfffc;
  piVar1 = 0x8c4783dc;
  iVar4 = *(int *)(*(int *)(unaff_r13 + in_r3 + 0x1c) + 0x30);
  do {
    iVar4 = iVar4 + -1;
    if (iVar4 < unaff_r11) {
      return 0xffffffff;
    }
    uVar3 = (**(code **)(*piVar1 + 0xc))
                      (*(undefined4 *)(unaff_r13 + in_r3 + 0x24),iVar4 * 2,ar6,ar7);
  } while ((uVar3 & 0xffff) != uVar2);
  return iVar4;
}

__asm__(".globl _FUN_8c1fff20\n.set _FUN_8c1fff20, _FUN_8c1fff20_def\n");
//@unit 8c1fff5e
#include "../decls.h"
undefined4 FUN_8c1fff5e_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *a4;
  
  piVar1 = 0x8c4783dc;
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  a4 = *(char **)(iVar3 + 0x28);
  iVar4 = 0;
  while( true ) {
    if (*(int *)(*(int *)(iVar3 + 0x1c) + 0x30) <= iVar4) {
      return 0;
    }
    if ((*a4 != '\0') &&
       (uVar2 = (**(code **)(*piVar1 + 0xc))(a4,2,ar6,ar7), (uVar2 & 0xffff) == ar5)) break;
    a4 = a4 + 0x20;
    iVar4 = iVar4 + 1;
  }
  return a4;
}

__asm__(".globl _FUN_8c1fff5e\n.set _FUN_8c1fff5e, _FUN_8c1fff5e_def\n");
//@unit 8c1fffca
#include "../decls.h"
undefined4 FUN_8c1fffca_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  int ar5_00;
  int iVar3;
  
  iVar3 = ar4 * 0x148 + 0x8c4783e0;
  ar5_00 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= ar5_00) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(ar4,ar5_00,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
      if (ar5_00 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    ar5_00 = ar5_00 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fffca\n.set _FUN_8c1fffca, _FUN_8c1fffca_def\n");
//@unit 8c1fffd8
#include "../decls.h"
undefined4 FUN_8c1fffd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int in_r3;
  int iVar2;
  undefined4 unaff_r12;
  int a5;
  int iVar3;
  int in_MACL;
  
  iVar3 = in_MACL + in_r3;
  a5 = 0;
  do {
    if (**(int **)(iVar3 + 0x1c) + 1 <= a5) {
      return 0;
    }
    uVar1 = FUN_8c2009d0(unaff_r12,a5,ar6,ar7);
    uVar1 = uVar1 & 0xffff;
    if (((uVar1 != 0xfffc) && (uVar1 != 0xffff)) && (uVar1 != 0xfffa)) {
      if (a5 < *(int *)(*(int *)(iVar3 + 0x1c) + 0x30)) {
        iVar2 = *(int *)(*(int *)(iVar3 + 0x1c) + 0x30);
      }
      else {
        iVar2 = **(int **)(iVar3 + 0x1c) + 1;
      }
      if (iVar2 <= (int)uVar1) {
        return 0xffffffff;
      }
    }
    a5 = a5 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c1fffd8\n.set _FUN_8c1fffd8, _FUN_8c1fffd8_def\n");
