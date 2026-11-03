//@unit 8c02000c
#include "../decls.h"
undefined4 *
FUN_8c02000c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
            )

{
  undefined4 *puVar1;
  undefined4 ar6_00;
  undefined4 ar7_00;
  int iVar2;
  
  ar6_00 = ar6;
  ar7_00 = ar7;
  puVar1 = (undefined4 *)malloc_thunk(0xd8,ar5,ar6,ar7);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = ar5;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    strcpy(puVar1 + 4,ar6,ar6_00,ar7_00,ar5);
    strcpy(puVar1 + 0xc,ar7,ar6_00,ar7_00,ar5);
    puVar1[0x14] = s0;
    puVar1[0x15] = s4;
    for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
      puVar1[iVar2 + 0x16] = 0;
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c02000c\n.set _FUN_8c02000c, _FUN_8c02000c_def\n");
//@unit 8c02009c
#include "../decls.h"
int FUN_8c02009c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  
  ar4[1] = 0;
  *ar4 = 0;
  iVar1 = 0;
  if (ar4[8] != 0) {
    for (ar5_00 = (int *)(uint)ar4[8]; ar5_00[1] != 0; ar5_00 = (int *)ar5_00[1]) {
    }
    iVar1 = FUN_8c020148(ar4,ar5_00 + 0xc,ar6,ar7);
    if (iVar1 == 0) {
      iVar1 = FUN_8c02049c(ar4,ar5_00,ar6,ar7);
    }
    else {
      iVar1 = *ar5_00;
      if (iVar1 == 0xb) {
        iVar1 = FUN_8c02041c(ar4,ar5_00,ar6,ar7);
      }
      else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
        iVar1 = 1;
      }
      else {
        iVar1 = FUN_8c0202c0(ar4,ar5_00,ar6,ar7);
      }
      if (iVar1 == 1) {
        ar4[1] = ar5_00;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02009c\n.set _FUN_8c02009c, _FUN_8c02009c_def\n");
//@unit 8c020148
#include "../decls.h"
uint FUN_8c020148_def(int ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_3c [36];
  
  if (*ar5 != '\0') {
    acStack_3c[0] = '\0';
    iVar3 = 0;
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < 0x40; iVar1 = iVar1 + 1) {
      if ((ar5[iVar3] == '\\') || (ar5[iVar3] == '\0')) {
        acStack_3c[iVar2] = '\0';
        iVar1 = 0;
        while( true ) {
          if ((2 < iVar1) || (*(char *)(ar4 + iVar1 * 0x16034 + 0x38) == '\0')) {
            return 0;
          }
          iVar3 = ar4 + iVar1 * 0x16034 + 0x38;
          iVar2 = FUN_8c020258(acStack_3c,iVar3,ar6,ar7);
          if ((iVar2 == 0) &&
             (iVar2 = (*(code *)(&FUN_8c1f3952))
                                (*(undefined4 *)(ar4 + iVar1 * 0x16034 + 0x58),iVar3,ar6,ar7),
             iVar2 == 0)) break;
          iVar1 = iVar1 + 1;
        }
        return 1;
      }
      acStack_3c[iVar2] = ar5[iVar3];
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 1;
    }
  }
  iVar1 = FUN_8c1f3952(*(undefined4 *)(ar4 + 0x58),ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c020148\n.set _FUN_8c020148, _FUN_8c020148_def\n");
//@unit 8c020258
#include "../decls.h"
undefined4 FUN_8c020258_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl _FUN_8c020258\n.set _FUN_8c020258, _FUN_8c020258_def\n");
//@unit 8c0202c0
#include "../decls.h"
undefined4 FUN_8c0202c0_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_ffffffbc;
  undefined1 auStack_30 [36];
  
  ar5[2] = 0;
  *ar4 = 0;
  strcpy(auStack_30,ar5 + 4,ar6,ar7,in_stack_ffffffbc);
  iVar3 = 0;
  iVar1 = FUN_8c26201c(auStack_30,0,ar6,ar7);
  *ar4 = iVar1;
  if (*ar4 == 0) {
    FUN_8c02049c(ar4,ar5,ar6,ar7);
    uVar2 = 0;
  }
  else {
    iVar1 = s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar3,ar6,ar7);
    ar5[3] = iVar1;
    iVar1 = ar5[3] + 0x7ff >> 0xb;
    if (ar5[0x15] != 0) {
      iVar1 = ar5[0x15];
      ar5[3] = iVar1 << 0xb;
      ar6 = 0;
      iVar3 = ar5[0x14];
      FUN_8c262554(*ar4,iVar3,0,ar7);
    }
    if ((*ar5 < 0xb) && (-1 < *ar5)) {
                    
      ar5[2] = ar4[4];
    }
    else {
      iVar3 = malloc_thunk(ar5[3] + 0x800,iVar3,ar6,ar7);
      ar5[2] = iVar3;
      if (ar5[2] == 0) {
        FUN_8c02049c(ar4,ar5,ar6,ar7);
        return 0;
      }
    }
    iVar3 = ar5[2];
    iVar1 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,iVar1,iVar3,ar7);
    if (iVar1 < 0) {
      FUN_8c02049c(ar4,ar5,iVar3,ar7);
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0202c0\n.set _FUN_8c0202c0, _FUN_8c0202c0_def\n");
//@unit 8c02041c
#include "../decls.h"
uint FUN_8c02041c_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(ar5 + 8) = 0;
  ar4[5] = 0;
  iVar2 = ar5;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    iVar2 = 0;
    iVar1 = FUN_8c26201c(ar5 + 0x10,0,ar6,ar7);
    *ar4 = iVar1;
    if (*ar4 != 0) break;
  }
  iVar3 = *ar4;
  if (iVar3 != 0) {
    ar4[5] = 1;
    iVar2 = s_E9040829_adxf_is_NULL_ADXF_G_262646(*ar4,iVar2,ar6,ar7);
    ar4[6] = iVar2;
  }
  else {
    FUN_8c02049c(ar4,ar5,ar6,ar7);
  }
  return (uint)(iVar3 != 0);
}

__asm__(".globl _FUN_8c02041c\n.set _FUN_8c02041c, _FUN_8c02041c_def\n");
//@unit 8c02049c
#include "../decls.h"
undefined4 FUN_8c02049c_def(int *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  iVar1 = *ar5;
  if (((iVar1 != 0xc) && (iVar1 != 0xd)) && (iVar1 != 0xe)) {
    piVar3 = ar5;
    if (*ar4 != 0) {
      FUN_8c262168(*ar4,ar5,ar6,ar7);
    }
    if (ar5[2] != 0) {
      FUN_8c1fb57c(ar5[2],piVar3,ar6,ar7);
    }
  }
  *ar4 = 0;
  ar5[2] = 0;
  piVar3 = ar5 + 4;
  FUN_8c020600(ar4,*ar5,ar4 + 8,piVar3);
  uVar2 = FUN_8c0205e8(ar4,ar4 + 9,ar5,piVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c02049c\n.set _FUN_8c02049c, _FUN_8c02049c_def\n");
//@unit 8c02051c
#include "../decls.h"
int FUN_8c02051c_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  undefined4 in_stack_00000000;
  
  if (ar6 == 0) {
    ar6_00 = 0;
  }
  else {
    do {
      ar6_00 = ar6;
      if (ar6_00 == 0) {
        return 0;
      }
      ar6 = *(int *)(ar6_00 + 4);
      iVar1 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    } while (iVar1 != 1);
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c02051c\n.set _FUN_8c02051c, _FUN_8c02051c_def\n");
//@unit 8c020588
#include "../decls.h"
undefined4 FUN_8c020588_def(undefined4 ar4,int ar5,int *ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  int iVar2;
  int *ar6_00;
  
  if (*ar6 == ar5) {
    ar6_00 = ar6;
    iVar2 = FUN_8c020258(ar6 + 4,ar7,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = FUN_8c020258(ar6 + 0xc,s0,ar6_00,ar7);
      if (iVar2 == 0) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c020588\n.set _FUN_8c020588, _FUN_8c020588_def\n");
//@unit 8c0205e8
#include "../decls.h"
undefined4 FUN_8c0205e8_def(undefined4 ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar5 == 0) {
    *ar5 = ar6;
    return 0;
  }
  iVar1 = *ar5;
  *(int *)(ar6 + 4) = iVar1;
  *ar5 = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c0205e8\n.set _FUN_8c0205e8, _FUN_8c0205e8_def\n");
//@unit 8c020600
#include "../decls.h"
int FUN_8c020600_def(undefined4 ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int ar6_00;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 in_stack_00000000;
  
  ar6_00 = *ar6;
  if (ar6_00 == 0) {
    ar6_00 = 0;
  }
  else {
    iVar1 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000);
    if (iVar1 == 1) {
      *ar6 = *(int *)(ar6_00 + 4);
    }
    else if (*(int *)(ar6_00 + 4) == 0) {
      ar6_00 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
      iVar1 = ar6_00;
      ar6_00 = *(int *)(ar6_00 + 4);
      while (iVar2 = FUN_8c020588(ar4,ar5,ar6_00,ar7,in_stack_00000000), iVar2 != 1)
      {
        if (iVar3 == 0) {
          return 0;
        }
        iVar3 = *(int *)(*(int *)(ar6_00 + 4) + 4);
        iVar1 = ar6_00;
        ar6_00 = *(int *)(ar6_00 + 4);
      }
      *(int *)(iVar1 + 4) = iVar3;
    }
  }
  return ar6_00;
}

__asm__(".globl _FUN_8c020600\n.set _FUN_8c020600, _FUN_8c020600_def\n");
//@unit 8c0206b8
#include "../decls.h"
undefined4 FUN_8c0206b8_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 0x20; iVar2 = iVar2 + 1) {
    iVar1 = *(int *)(ar5 + iVar2 * 4 + 0x58);
    if (iVar1 == ar6) {
      return iVar1;
    }
  }
  iVar2 = 0;
  while( true ) {
    if (0x1f < iVar2) {
      return 0x20;
    }
    if (*(int *)(ar5 + iVar2 * 4 + 0x58) == 0) break;
    iVar2 = iVar2 + 1;
  }
  *(int *)(ar5 + iVar2 * 4 + 0x58) = ar6;
  return 0x58;
}

__asm__(".globl _FUN_8c0206b8\n.set _FUN_8c0206b8, _FUN_8c0206b8_def\n");
//@unit 8c020714
#include "../decls.h"
undefined4 FUN_8c020714_def(undefined4 ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (0x1f < iVar1) {
LAB_8c02074c:
      iVar1 = 0;
      while( true ) {
        if (0x1f < iVar1) {
          return 0;
        }
        if (*(int *)(ar5 + iVar1 * 4 + 0x58) != 0) break;
        iVar1 = iVar1 + 1;
      }
      return 1;
    }
    if (*(int *)(ar5 + iVar1 * 4 + 0x58) == ar6) {
      *(undefined4 *)(ar5 + iVar1 * 4 + 0x58) = 0;
      goto LAB_8c02074c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c020714\n.set _FUN_8c020714, _FUN_8c020714_def\n");
//@unit 8c02077c
#include "../decls.h"
undefined4
FUN_8c02077c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 *s4,
            undefined4 *s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar5,*(undefined4 *)(ar4 + 0x20),ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c02051c(ar4,ar5,*(undefined4 *)(ar4 + 0x24),ar7);
    if (iVar1 == 0) {
      uVar2 = ar7;
      iVar1 = FUN_8c02051c(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
          iVar1 = FUN_8c02000c(ar4,ar5,ar7,s0,0,0);
          if (iVar1 == 0) {
            return 0;
          }
          *(undefined4 *)(iVar1 + 8) = *s4;
          FUN_8c0205e8(ar4,ar4 + 0x20,iVar1,s0);
        }
        else {
          iVar1 = FUN_8c01ffa0(ar4,ar5,ar7,s0,s12,s16,s20);
          if (iVar1 == 0) {
            return 0;
          }
        }
        uVar2 = 2;
      }
      else {
        FUN_8c0206b8(ar4,iVar1,s20,uVar2);
        *s4 = *(undefined4 *)(iVar1 + 8);
        *s8 = *(undefined4 *)(iVar1 + 0xc);
        uVar2 = 1;
      }
    }
    else {
      FUN_8c0208ec(ar4,ar5,ar4 + 0x24,ar7,s0,s20);
      uVar2 = 0;
    }
  }
  else {
    FUN_8c0206b8(ar4,iVar1,s20,uVar2);
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02077c\n.set _FUN_8c02077c, _FUN_8c02077c_def\n");
//@unit 8c0208ec
#include "../decls.h"
undefined4
FUN_8c0208ec_def(undefined4 ar4,int ar5,undefined4 *ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar5,*ar6,ar7);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (((ar5 == 0xc) || (ar5 == 0xd)) || (ar5 == 0xe)) {
      FUN_8c020600(ar4,ar5,ar6,ar7);
    }
    else {
      iVar1 = FUN_8c020714(ar4,iVar1,s4,ar7_00);
      if (iVar1 == 1) {
        return 1;
      }
      iVar1 = FUN_8c020600(ar4,ar5,ar6,ar7);
      if (*(int *)(iVar1 + 8) != 0) {
        FUN_8c1fb57c(*(undefined4 *)(iVar1 + 8),ar5,ar6,ar7);
      }
    }
    uVar2 = FUN_8c1fb57c(iVar1,ar5,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0208ec\n.set _FUN_8c0208ec, _FUN_8c0208ec_def\n");
//@unit 8c0209b0
#include "../decls.h"
undefined4 FUN_8c0209b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c0209b0\n.set _FUN_8c0209b0, _FUN_8c0209b0_def\n");
//@unit 8c0209fc
#include "../decls.h"
undefined4 FUN_8c0209fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c0209b0(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0209fc\n.set _FUN_8c0209fc, _FUN_8c0209fc_def\n");
//@unit 8c020a70
#include "../decls.h"
undefined4 FUN_8c020a70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020a70\n.set _FUN_8c020a70, _FUN_8c020a70_def\n");
//@unit 8c020aa8
#include "../decls.h"
undefined4 FUN_8c020aa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,2,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c020aa8\n.set _FUN_8c020aa8, _FUN_8c020aa8_def\n");
//@unit 8c020af4
#include "../decls.h"
undefined4 FUN_8c020af4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020aa8(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020af4\n.set _FUN_8c020af4, _FUN_8c020af4_def\n");
//@unit 8c020b68
#include "../decls.h"
undefined4 FUN_8c020b68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,2,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020b68\n.set _FUN_8c020b68, _FUN_8c020b68_def\n");
//@unit 8c020ba0
#include "../decls.h"
undefined4 FUN_8c020ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,5,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c020ba0\n.set _FUN_8c020ba0, _FUN_8c020ba0_def\n");
//@unit 8c020bec
#include "../decls.h"
undefined4 FUN_8c020bec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020ba0(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020bec\n.set _FUN_8c020bec, _FUN_8c020bec_def\n");
//@unit 8c020c60
#include "../decls.h"
undefined4 FUN_8c020c60_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,5,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020c60\n.set _FUN_8c020c60, _FUN_8c020c60_def\n");
//@unit 8c020c98
#include "../decls.h"
undefined4 FUN_8c020c98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,8,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7,ar4 + 8,0,0,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c020c98\n.set _FUN_8c020c98, _FUN_8c020c98_def\n");
//@unit 8c020ce4
#include "../decls.h"
undefined4 FUN_8c020ce4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020c98(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ce4\n.set _FUN_8c020ce4, _FUN_8c020ce4_def\n");
//@unit 8c020d58
#include "../decls.h"
undefined4 FUN_8c020d58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,8,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020d58\n.set _FUN_8c020d58, _FUN_8c020d58_def\n");
//@unit 8c020d90
#include "../decls.h"
undefined4 FUN_8c020d90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xb,*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar4 + 0xc,ar4 + 8,0,0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020d90\n.set _FUN_8c020d90, _FUN_8c020d90_def\n");
//@unit 8c020ddc
#include "../decls.h"
undefined4 FUN_8c020ddc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020d90(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ddc\n.set _FUN_8c020ddc, _FUN_8c020ddc_def\n");
//@unit 8c020e48
#include "../decls.h"
undefined4 FUN_8c020e48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0xb,ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c020e48\n.set _FUN_8c020e48, _FUN_8c020e48_def\n");
//@unit 8c020e80
#include "../decls.h"
int FUN_8c020e80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  undefined4 uStack_1c;
  int iStack_18;
  
  ar7_00 = ar5;
  uStack_1c = ar7;
  iVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xc,*(undefined4 *)(ar4 + 0x2c),ar5,ar6,&uStack_1c,ar4 + 8,0,0,1);
  if (iVar1 == 1) {
    iStack_18 = iVar1;
    FUN_8c020f5c(ar4,ar5,ar6,ar7_00);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020e80\n.set _FUN_8c020e80, _FUN_8c020e80_def\n");
//@unit 8c020ef0
#include "../decls.h"
undefined4 FUN_8c020ef0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020e80(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c020ef0\n.set _FUN_8c020ef0, _FUN_8c020ef0_def\n");
//@unit 8c020f5c
#include "../decls.h"
undefined4 FUN_8c020f5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0xc,ar4 + 0x2c,ar5,ar6,1);
  return uVar1;
}

__asm__(".globl _FUN_8c020f5c\n.set _FUN_8c020f5c, _FUN_8c020f5c_def\n");
//@unit 8c020f90
#include "../decls.h"
int FUN_8c020f90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uStack_1c;
  int iStack_18;
  
  uStack_1c = ar7;
  iVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xe,*(undefined4 *)(ar4 + 0x2c),ar5,ar6,&uStack_1c,ar4 + 8,0,0,1);
  if (iVar1 == 1) {
    iStack_18 = iVar1;
    FUN_8c0208ec(ar4,0xe,ar4 + 0x2c,ar5,ar6,1);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c020f90\n.set _FUN_8c020f90, _FUN_8c020f90_def\n");
//@unit 8c02100c
#include "../decls.h"
undefined4 FUN_8c02100c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c020f90(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c02100c\n.set _FUN_8c02100c, _FUN_8c02100c_def\n");
//@unit 8c021078
#include "../decls.h"
int s_CDCGD_ReadPVMFileReq_021082_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  int iVar1;
  int iVar2;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 auStack_1c [2];
  
  ar6_00 = *(undefined4 *)(ar4 + 0x34);
  ar7_00 = ar5;
  iVar1 = FUN_8c02077c(ar4,0x10,ar6_00,ar5,ar6,auStack_1c,ar4 + 8,0,0,s0);
  if (iVar1 == 1) {
    iVar2 = FUN_8c23a29c(auStack_1c[0],ar7,ar6_00,ar7_00);
    if (iVar2 == 1) {
      FUN_8c021138(ar4,ar5,ar6,s0);
    }
    else {
      FUN_8c021138(ar4,ar5,ar6,s0);
      (*(code *)(&report_error_message))
                ((&DATA_8c12fc0c) + 0x12,(&DATA_8c12fc0c) + 0x27,1,2);
      iVar1 = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _s_CDCGD_ReadPVMFileReq_021082\n.set _s_CDCGD_ReadPVMFileReq_021082, _s_CDCGD_ReadPVMFileReq_021082_def\n");
//@unit 8c021138
#include "../decls.h"
undefined4 FUN_8c021138_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021138\n.set _FUN_8c021138, _FUN_8c021138_def\n");
//@unit 8c021170
#include "../decls.h"
undefined4 FUN_8c021170_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0xf,*(undefined4 *)(ar4 + 0x30),ar5,ar6,ar7,in_stack_00000000,0,0,
                     in_stack_00000004);
  return uVar1;
}

__asm__(".globl _FUN_8c021170\n.set _FUN_8c021170, _FUN_8c021170_def\n");
//@unit 8c0211b8
#include "../decls.h"
undefined4 file_load_to_buffer_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c021170(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _file_load_to_buffer\n.set _file_load_to_buffer, _file_load_to_buffer_def\n");
//@unit 8c021234
#include "../decls.h"
undefined4 FUN_8c021234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0xf,ar4 + 0x30,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021234\n.set _FUN_8c021234, _FUN_8c021234_def\n");
//@unit 8c02126c
#include "../decls.h"
undefined4 FUN_8c02126c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5,ar6,ar7,ar4 + 8,in_stack_00000000,
                     in_stack_00000004,in_stack_00000008);
  return uVar1;
}

__asm__(".globl _FUN_8c02126c\n.set _FUN_8c02126c, _FUN_8c02126c_def\n");
//@unit 8c0212b8
#include "../decls.h"
undefined4 file_load_into_object_buffer_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c02126c(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _file_load_into_object_buffer\n.set _file_load_into_object_buffer, _file_load_into_object_buffer_def\n");
//@unit 8c021338
#include "../decls.h"
undefined4 FUN_8c021338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021338\n.set _FUN_8c021338, _FUN_8c021338_def\n");
//@unit 8c021370
#include "../decls.h"
undefined4 FUN_8c021370_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c02077c))
                    (ar4,0x10,*(undefined4 *)(ar4 + 0x34),ar5,ar6,ar7,ar4 + 8,0,0,1);
  return uVar1;
}

__asm__(".globl _FUN_8c021370\n.set _FUN_8c021370, _FUN_8c021370_def\n");
//@unit 8c0213bc
#include "../decls.h"
undefined4 FUN_8c0213bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  while( true ) {
    ar5_00 = ar5;
    ar6_00 = ar6;
    ar7_00 = ar7;
    iVar1 = FUN_8c021370(ar4,ar5,ar6,ar7);
    if (iVar1 == 1) {
      return 1;
    }
    if (iVar1 == 0) break;
    iVar1 = FUN_8c01f810(ar4,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c0213bc\n.set _FUN_8c0213bc, _FUN_8c0213bc_def\n");
//@unit 8c021428
#include "../decls.h"
undefined4 FUN_8c021428_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0208ec(ar4,0x10,ar4 + 0x34,ar5,ar6,1);
  return uVar1;
}

__asm__(".globl _FUN_8c021428\n.set _FUN_8c021428, _FUN_8c021428_def\n");
//@unit 8c02145c
#include "../decls.h"
undefined4 * FUN_8c02145c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0xffffffff;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02145c\n.set _FUN_8c02145c, _FUN_8c02145c_def\n");
//@unit 8c02147c
#include "../decls.h"
undefined4 * pack_ctor_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c022190(ar4 + 1,ar5,ar6,ar7);
  *ar4 = 0;
  *(undefined1 *)(0x9ec14 + (int)ar4) = 0;
  *(undefined4 *)(0x9ec94 + (int)ar4) = 0xffffffff;
  for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
  }
  return ar4;
}

__asm__(".globl _pack_ctor\n.set _pack_ctor, _pack_ctor_def\n");
//@unit 8c0214e0
#include "../decls.h"
int FUN_8c0214e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_022198(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0214e0\n.set _FUN_8c0214e0, _FUN_8c0214e0_def\n");
//@unit 8c021520
#include "../decls.h"
undefined4
pack_open_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  
  *ar4 = 0;
  iVar1 = FUN_8c0221c8(ar4 + 1,ar5,ar6,s4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)(&file_load_to_buffer))
                      (0x8c3eb334,ar7,(&DATA_8c12fc50) + 0x34,
                       (int)ar4 + 0x9ec10);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = (*(code *)(&file_load_to_buffer))
                        (0x8c3eb334,s0,(&DATA_8c12fc50) + 0x34,
                         (int)ar4 + 0x9ec0c);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        *ar4 = 1;
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_open\n.set _pack_open, _pack_open_def\n");
//@unit 8c0215d4
#include "../decls.h"
undefined4 pack_close_and_flush_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    FUN_8c022384(ar4 + 1,ar5,ar6,ar7);
    iVar1 = FUN_8c01f780(0x8c3eb334,ar5,ar6,ar7);
    uVar2 = 1;
    if (iVar1 != 1) {
      if (-1 < *(int *)(0x9ec94 + (int)ar4)) {
        FUN_8c0228e4(ar4 + 1,*(undefined4 *)(0x9ec94 + (int)ar4),ar6,ar7);
        FUN_8c022128(ar4,0x3e8,ar6,ar7);
        *(undefined4 *)(0x9ec94 + (int)ar4) = 0xffffffff;
      }
      for (iVar1 = 0; uVar2 = 3, iVar1 < 3; iVar1 = iVar1 + 1) {
        if (-1 < *(int *)((int)ar4 + 0x9ec98 + iVar1 * 8)) {
          (*(code *)(&FUN_8c022894))
                    (ar4 + 1,*(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8),
                     *(undefined4 *)((int)ar4 + 0x9ec9c + iVar1 * 8),
                     *(int *)(0x9ec10 + (int)ar4) +
                     (*(uint *)(*(int *)((int)ar4 + 0x9ec9c + iVar1 * 8) * 0x28 +
                                *(int *)(0x9ec0c + (int)ar4) + 0x20) & 0xfffffffe));
          *(undefined4 *)((int)ar4 + 0x9ec98 + iVar1 * 8) = 0xffffffff;
        }
      }
    }
  }
  return uVar2;
}

__asm__(".globl _pack_close_and_flush\n.set _pack_close_and_flush, _pack_close_and_flush_def\n");
//@unit 8c021720
#include "../decls.h"
undefined4 FUN_8c021720_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c02257c(ar4 + 1,0,ar5,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021720\n.set _FUN_8c021720, _FUN_8c021720_def\n");
//@unit 8c02174c
#include "../decls.h"
int FUN_8c02174c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 ar5_00;
  uint in_fr1;
  double dVar3;
  undefined4 in_fr5;
  float in_fr4;
  undefined4 in_fr14;
  bool bVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 uStack_30;
  
  cVar7 = '\0';
  cVar6 = '\0';
  if (*ar4 == 0) {
    return 0;
  }
  uVar1 = FUN_8c013adc((int)in_fr4,ar5,ar6,ar7);
  ar5_00 = 0x14d;
  iVar2 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar2 < 9) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      iVar2 = 0;
      break;
    case 1:
      iVar2 = 0x10;
      break;
    case 2:
      iVar2 = 0x20;
      break;
    case 3:
      iVar2 = 0x30;
      break;
    case 4:
      iVar2 = 0x40;
      break;
    case 5:
      iVar2 = 0x50;
      break;
    case 6:
      iVar2 = 0x60;
      break;
    case 7:
      iVar2 = 0x70;
      break;
    case 8:
      goto switchD_8c021798_caseD_8;
    }
  }
  else {
switchD_8c021798_caseD_8:
    iVar2 = 0x7f;
  }
  if (cVar6 == '\0') {
    bVar4 = in_fr4 < 0.0;
  }
  else {
    bVar4 = (double)CONCAT44(in_fr14,in_fr4) < (double)(ulonglong)in_fr1;
  }
  if (bVar4) {
    iVar2 = -iVar2;
  }
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(in_fr5,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_30,in_fr5);
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar5 = (int)dVar3;
  }
  uVar1 = FUN_8c013adc(iVar5,ar5_00,ar6,ar7);
  iVar5 = libgcc_divide_helper_0101e4(uVar1,0x14d,ar6,ar7);
  if ((iVar5 < 9) && (-1 < iVar5)) {
                    
    switch(iVar5) {
    case 0:
      uVar1 = 0x7f;
      break;
    case 1:
      uVar1 = 0x1e;
      break;
    case 2:
      uVar1 = 0x14;
      break;
    case 3:
      uVar1 = 7;
      break;
    case 4:
      uVar1 = 0;
      break;
    case 5:
      uVar1 = 0xfffffff9;
      break;
    case 6:
      uVar1 = 0xfffffff4;
      break;
    case 7:
      uVar1 = 0xffffffe7;
      break;
    case 8:
      uVar1 = 0xffffffe2;
    }
  }
  else {
    uVar1 = 0xffffff81;
  }
  iVar5 = FUN_8c0225f4(ar4 + 1,2,ar5,ar7);
  if (-1 < iVar5) {
    FUN_8c0227bc(ar4 + 1,iVar5,iVar2,ar7);
    FUN_8c022804(ar4 + 1,iVar5,uVar1,ar7);
    FUN_8c0226d8(ar4 + 1,iVar5,uVar1,ar7);
    iVar5 = FUN_8c022688(ar4 + 1,iVar5,uVar1,ar7);
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02174c\n.set _FUN_8c02174c, _FUN_8c02174c_def\n");
//@unit 8c02190c
#include "../decls.h"
undefined4 FUN_8c02190c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02194c(ar4,1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02190c\n.set _FUN_8c02190c, _FUN_8c02190c_def\n");
//@unit 8c02192c
#include "../decls.h"
undefined4 FUN_8c02192c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02194c(ar4,3,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02192c\n.set _FUN_8c02192c, _FUN_8c02192c_def\n");
//@unit 8c02194c
#include "../decls.h"
int FUN_8c02194c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*ar4 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = FUN_8c0225f4(ar4 + 1,ar5,0,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02194c\n.set _FUN_8c02194c, _FUN_8c02194c_def\n");
//@unit 8c021994
#include "../decls.h"
undefined4 FUN_8c021994_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0219dc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021994\n.set _FUN_8c021994, _FUN_8c021994_def\n");
//@unit 8c0219b8
#include "../decls.h"
undefined4 FUN_8c0219b8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0219dc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0219b8\n.set _FUN_8c0219b8, _FUN_8c0219b8_def\n");
//@unit 8c0219dc
#include "../decls.h"
undefined4 FUN_8c0219dc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c022710(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0219dc\n.set _FUN_8c0219dc, _FUN_8c0219dc_def\n");
//@unit 8c021a0c
#include "../decls.h"
undefined4 FUN_8c021a0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c021a30(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021a0c\n.set _FUN_8c021a0c, _FUN_8c021a0c_def\n");
//@unit 8c021a30
#include "../decls.h"
undefined4 FUN_8c021a30_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c022804(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021a30\n.set _FUN_8c021a30, _FUN_8c021a30_def\n");
//@unit 8c021a60
#include "../decls.h"
undefined4 FUN_8c021a60_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c022778(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021a60\n.set _FUN_8c021a60, _FUN_8c021a60_def\n");
//@unit 8c021a8c
#include "../decls.h"
undefined4 FUN_8c021a8c_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c021ad4(ar4,*ar5,ar6,ar7);
  *ar5 = 0xffffffff;
  return 0xffffffff;
}

__asm__(".globl _FUN_8c021a8c\n.set _FUN_8c021a8c, _FUN_8c021a8c_def\n");
//@unit 8c021ab4
#include "../decls.h"
undefined4 FUN_8c021ab4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c021ad4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c021ab4\n.set _FUN_8c021ab4, _FUN_8c021ab4_def\n");
//@unit 8c021ad4
#include "../decls.h"
undefined4 FUN_8c021ad4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = 0x7f;
    FUN_8c022804(ar4 + 1,ar5,0x7f,ar7);
    uVar1 = FUN_8c022688(ar4 + 1,ar5,uVar1,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021ad4\n.set _FUN_8c021ad4, _FUN_8c021ad4_def\n");
//@unit 8c021b10
#include "../decls.h"
int pack_acquire_entry_handle_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  int iVar1;
  
  if (*ar4 == 0) {
    ar5_00 = -1;
  }
  else {
    ar5_00 = handle_slot_alloc(ar4 + 1,ar5,ar6,ar7);
    if (ar5_00 == -1) {
      ar5_00 = -1;
    }
    else {
      iVar1 = pack_find_entry_by_name(ar4,ar5,ar6,ar7);
      if (iVar1 == -1) {
        handle_slot_free(ar4 + 1,ar5_00,ar6,ar7);
        ar5_00 = -1;
      }
      else {
        *(int *)((int)ar4 + 0x9ec98 + ar5_00 * 8) = ar5_00;
        *(int *)((int)ar4 + 0x9ec9c + ar5_00 * 8) = iVar1;
      }
    }
  }
  return ar5_00;
}

__asm__(".globl _pack_acquire_entry_handle\n.set _pack_acquire_entry_handle, _pack_acquire_entry_handle_def\n");
//@unit 8c021bac
#include "../decls.h"
undefined4 pack_find_entry_by_name_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  char acStack_8c [132];
  
  strcpy(acStack_8c,&DAT_8c12fc84,ar6,ar7,ar5);
  strcpy(acStack_8c,ar5,ar6,ar7,ar5);
  FUN_8c01437c(acStack_8c,&DAT_8c12fc85,ar6,ar7);
  iVar2 = 0;
  while( true ) {
    if ((0x7fff < iVar2) || (*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == '\0')) {
      return 0xffffffff;
    }
    if ((*(char *)(*(int *)(ar4 + 0x9ec0c) + iVar2 * 0x28) == acStack_8c[0]) &&
       (iVar1 = FUN_8c021c80(iVar2 * 0x28 + *(int *)(ar4 + 0x9ec0c),acStack_8c,ar6,ar7), iVar1 == 0)
       ) break;
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _pack_find_entry_by_name\n.set _pack_find_entry_by_name, _pack_find_entry_by_name_def\n");
//@unit 8c021c80
#include "../decls.h"
undefined4 FUN_8c021c80_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  
  do {
    bVar1 = *ar4;
    if (bVar1 != *ar5) {
      return (uint)bVar1 - (uint)*ar5;
    }
    ar5 = ar5 + 1;
    ar4 = ar4 + 1;
  } while (bVar1 != 0);
  return 0;
}

__asm__(".globl _FUN_8c021c80\n.set _FUN_8c021c80, _FUN_8c021c80_def\n");
//@unit 8c021ce8
#include "../decls.h"
int pack_release_entry_handle_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    *(undefined4 *)((int)ar4 + 0x9ec98 + ar5 * 8) = 0xffffffff;
    FUN_8c02296c(ar4 + 1,ar5,ar6,ar7);
    iVar1 = handle_slot_free(ar4 + 1,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _pack_release_entry_handle\n.set _pack_release_entry_handle, _pack_release_entry_handle_def\n");
//@unit 8c021d4c
#include "../decls.h"
undefined4 FUN_8c021d4c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    FUN_8c0229a8(ar4 + 1,ar5,ar6,ar7);
    for (ar5_00 = 0; uVar1 = 3, ar5_00 < 3; ar5_00 = ar5_00 + 1) {
      FUN_8c02296c(ar4 + 1,ar5_00,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021d4c\n.set _FUN_8c021d4c, _FUN_8c021d4c_def\n");
//@unit 8c021d90
#include "../decls.h"
int FUN_8c021d90_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 uVar2;
  
  iVar1 = *ar4;
  if (((iVar1 != 0) && (-1 < ar5)) && (iVar1 = 3, ar5 < 3)) {
    uVar2 = ar6;
    ar6_00 = FUN_8c021ec8(ar4,ar7,ar6,ar7);
    uVar2 = FUN_8c021e10(ar4,ar6,uVar2,ar7);
    FUN_8c022b68(ar4 + 1,ar5,uVar2,ar7);
    iVar1 = FUN_8c022bb0(ar4 + 1,ar5,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021d90\n.set _FUN_8c021d90, _FUN_8c021d90_def\n");
//@unit 8c021e10
#include "../decls.h"
int FUN_8c021e10_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  
  ar4_00 = FUN_8c013adc(ar5,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_0101e4(ar4_00,0x14d,ar6,ar7);
  if ((iVar1 < 9) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      iVar1 = 0;
      break;
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = 2;
      break;
    case 3:
      iVar1 = 3;
      break;
    case 4:
      iVar1 = 4;
      break;
    case 5:
      iVar1 = 5;
      break;
    case 6:
      iVar1 = 6;
      break;
    case 7:
      iVar1 = 7;
      break;
    case 8:
      iVar1 = 8;
    }
  }
  else {
    iVar1 = 0xf;
  }
  if (ar5 < 0) {
    iVar1 = -iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c021e10\n.set _FUN_8c021e10, _FUN_8c021e10_def\n");
//@unit 8c021ec8
#include "../decls.h"
int FUN_8c021ec8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c013adc(ar5,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_0101e4(iVar1 * 0x78,0xbb8,ar6,ar7);
  return -iVar1;
}

__asm__(".globl _FUN_8c021ec8\n.set _FUN_8c021ec8, _FUN_8c021ec8_def\n");
//@unit 8c021f18
#include "../decls.h"
undefined4 FUN_8c021f18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  undefined1 auStack_8 [8];
  
  uVar1 = FUN_8c021f4c(ar4,ar5,auStack_8,auStack_c,auStack_10);
  return uVar1;
}

__asm__(".globl _FUN_8c021f18\n.set _FUN_8c021f18, _FUN_8c021f18_def\n");
//@unit 8c021f4c
#include "../decls.h"
undefined4 FUN_8c021f4c_def(int *ar4,int ar5,int *ar6,int *ar7,int *s0)

{
  undefined4 uVar1;
  ushort *ar6_00;
  int *ar7_00;
  ushort auStack_18 [2];
  int iStack_14;
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  if (*ar4 == 0) {
    return 2;
  }
  if ((ar5 < 0) || (2 < ar5)) {
    return 2;
  }
  ar6_00 = auStack_18;
  ar7_00 = ar7;
  iStack_14 = FUN_8c022a1c(ar4 + 1,ar5,ar6_00,ar7);
  if (iStack_14 == 1) {
    pack_release_entry_handle(ar4,ar5,ar6_00,ar7_00);
    return 1;
  }
  if (iStack_14 == 2) {
    return 3;
  }
  if (iStack_14 != 3) {
    return 2;
  }
  *ar6 = (int)(auStack_18[0] & 0xf0) >> 4;
  *ar7 = (int)(auStack_18[0] & 0xf00) >> 8;
  *s0 = (int)(auStack_18[0] & 0xf000) >> 0xc;
  if ((auStack_18[0] & 0xf) < 8) {
                    
    switch(auStack_18[0] & 0xf) {
    case 0:
      uVar1 = 5;
      break;
    default:
      uVar1 = 6;
      break;
    case 4:
    case 5:
    case 6:
      uVar1 = 7;
      break;
    case 7:
      goto switchD_8c022008_caseD_7;
    }
  }
  else {
switchD_8c022008_caseD_7:
    uVar1 = 8;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c021f4c\n.set _FUN_8c021f4c, _FUN_8c021f4c_def\n");
//@unit 8c022068
#include "../decls.h"
undefined4 pack_find_by_name_buffered_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*ar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    *(undefined1 *)(ar4 + 0x27b05) = 0;
    strcpy(ar4 + 0x27b05,ar5,ar6,ar7,ar5);
    uVar1 = pack_find_entry_by_name(ar4,ar4 + 0x27b05,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _pack_find_by_name_buffered\n.set _pack_find_by_name_buffered, _pack_find_by_name_buffered_def\n");
//@unit 8c0220bc
#include "../decls.h"
int FUN_8c0220bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x9ec94 + ar4) = 0xffffffff;
  iVar1 = 0x9ec14;
  *(undefined1 *)(0x9ec14 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c0220bc\n.set _FUN_8c0220bc, _FUN_8c0220bc_def\n");
//@unit 8c0220d4
#include "../decls.h"
undefined4 FUN_8c0220d4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 0) {
    return 0;
  }
  if (*(char *)(0x9ec14 + (int)ar4) == '\0') {
    return 0;
  }
  *(undefined4 *)(0x9ec94 + (int)ar4) = ar5;
  return 1;
}

__asm__(".globl _FUN_8c0220d4\n.set _FUN_8c0220d4, _FUN_8c0220d4_def\n");
//@unit 8c022104
#include "../decls.h"
undefined4 FUN_8c022104_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*ar4 != 0) {
    uVar1 = FUN_8c0229a8(ar4 + 1,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022104\n.set _FUN_8c022104, _FUN_8c022104_def\n");
//@unit 8c022128
#include "../decls.h"
undefined4 FUN_8c022128_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if (*ar4 != 0) {
    iVar1 = FUN_8c013adc(ar5,ar5,ar6,ar7);
    iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                      (iVar1 * 0x190,0xbb8,ar6,ar7);
    uVar2 = FUN_8c022bf8(ar4 + 1,-iVar1,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022128\n.set _FUN_8c022128, _FUN_8c022128_def\n");
//@unit 8c022190
#include "../decls.h"
undefined4 FUN_8c022190_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c022190\n.set _FUN_8c022190, _FUN_8c022190_def\n");
//@unit 8c022198
#include "../decls.h"
int free_if_nonnull_wrap_022198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_022198\n.set _free_if_nonnull_wrap_022198, _free_if_nonnull_wrap_022198_def\n");
//@unit 8c0221c8
#include "../decls.h"
undefined4 FUN_8c0221c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *ar6_00;
  int iVar4;
  int aiStack_10 [2];
  
  for (iVar4 = 0; iVar4 < 7; iVar4 = iVar4 + 1) {
    *(undefined4 *)(iVar4 * 0x10 + ar4) = 0;
  }
  *(undefined4 *)(ar4 + 0x70) = 1;
  for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
    *(undefined4 *)(0x2d150 + ar4 + iVar4 * 0x208e0) = 0;
  }
  thunk_FUN_8c25ecdc(ar7,0,ar6,ar7);
  iVar4 = ar4 + 0x8ebf0;
  uVar1 = 0x8000;
  s_E9040804_can_t_open_s_ADXF_L_261ba4(0,ar6,iVar4,0x8000);
  uVar3 = 0;
  thunk_FUN_8c25ecdc((&DATA_8c022c48),0,iVar4,uVar1);
  iVar4 = aica_driver_load_manatee(ar4,uVar3,iVar4,uVar1);
  if (iVar4 == 1) {
    ar6_00 = (&DATA_8c12fc98);
    iVar4 = FUN_8c022494(ar4,ar5,(&DATA_8c12fc98),uVar1);
    if (iVar4 == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c1f7f1e(aiStack_10,ar5,ar6_00,uVar1);
      if (aiStack_10[0] == 0) {
        FUN_8c268818(0x4f525453,ar5,ar6_00,uVar1);
      }
      else {
        FUN_8c268818(0x4f4e4f4d,ar5,ar6_00,uVar1);
      }
      FUN_8c265f84(1,ar5,ar6_00,uVar1);
      uVar3 = 0x2d0c4;
      uVar2 = FUN_8c263840(2,ar4 + 0x8c,0x2d0c4,uVar1);
      *(undefined4 *)(ar4 + 0x74) = uVar2;
      FUN_8c263ffa(*(undefined4 *)(ar4 + 0x74),2,uVar3,uVar1);
      for (iVar4 = 0; iVar4 < 3; iVar4 = iVar4 + 1) {
        uVar3 = 0x208c4;
        uVar2 = (*(code *)(&FUN_8c263840))
                          (2,ar4 + iVar4 * 0x208e0 + 0x2d16c,0x208c4,uVar1);
        *(undefined4 *)(0x2d154 + ar4 + iVar4 * 0x208e0) = uVar2;
        (*(code *)(&FUN_8c263ffa))
                  (*(undefined4 *)(0x2d154 + ar4 + iVar4 * 0x208e0),1,uVar3,uVar1);
      }
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0221c8\n.set _FUN_8c0221c8, _FUN_8c0221c8_def\n");
//@unit 8c022384
#include "../decls.h"
undefined4 FUN_8c022384_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2688e0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c022384\n.set _FUN_8c022384, _FUN_8c022384_def\n");
//@unit 8c022398
#include "../decls.h"
uint aica_driver_load_manatee_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined *ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_8 [2];
  
  ar7_00 = auStack_8;
  ar6_00 = (&DATA_8c12fc98);
  iVar1 = (*(code *)(&file_load_to_buffer))
                    (0x8c3eb334,(&DATA_8c12fc98) + 1,(&DATA_8c12fc98),ar7_00);
  if (iVar1 != 0) {
    aica_driver_upload(ar4,auStack_8[0],ar6_00,ar7_00);
    FUN_8c021234(0x8c3eb334,(&DATA_8c12fc98) + 1,(&DATA_8c12fc98),1);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _aica_driver_load_manatee\n.set _aica_driver_load_manatee, _aica_driver_load_manatee_def\n");
//@unit 8c022404
#include "../decls.h"
int aica_driver_upload_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  undefined4 ar6_00;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar6_00 = 0;
  ar5_00 = 0;
  iVar1 = FUN_8c2655f4(0,0,0,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c265704(aiStack_10,ar5_00,ar6_00,ar7);
    if (iVar1 == 0) {
      ar7 = 0xffffffff;
      ar6_00 = 0;
      iVar1 = FUN_8c265ea0(aiStack_10[0],ar5,0,0xffffffff,0);
      ar5_00 = ar5;
      if (iVar1 == 0) {
        iVar1 = FUN_8c2654f4(aiStack_10[0],ar5,ar6_00,ar7);
        ar5_00 = ar5;
      }
    }
  }
  if (aiStack_10[0] != 0) {
    FUN_8c265784(aiStack_10[0],ar5_00,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _aica_driver_upload\n.set _aica_driver_upload, _aica_driver_upload_def\n");
//@unit 8c022494
#include "../decls.h"
uint FUN_8c022494_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar6_00;
  undefined4 *ar7_00;
  undefined4 auStack_10 [2];
  
  ar7_00 = auStack_10;
  ar6_00 = ar6;
  iVar1 = file_load_to_buffer(0x8c3eb334,ar5,ar6,ar7_00);
  if (iVar1 != 0) {
    FUN_8c022504(ar4,auStack_10[0],ar6_00,ar7_00);
    FUN_8c021234(0x8c3eb334,ar5,ar6,1);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c022494\n.set _FUN_8c022494, _FUN_8c022494_def\n");
//@unit 8c022504
#include "../decls.h"
int FUN_8c022504_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  int aiStack_10 [2];
  
  aiStack_10[0] = 0;
  ar5_00 = ar5;
  iVar1 = FUN_8c265704(aiStack_10,ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar7 = 0xffffffff;
    ar6 = 0;
    iVar1 = FUN_8c265ea0(aiStack_10[0],ar5,0,0xffffffff,0);
    ar5_00 = ar5;
    if (iVar1 == 0) {
      iVar1 = FUN_8c2669f4(aiStack_10[0],ar5,ar6,ar7);
      ar5_00 = ar5;
    }
  }
  if (aiStack_10[0] != 0) {
    FUN_8c265784(aiStack_10[0],ar5_00,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022504\n.set _FUN_8c022504, _FUN_8c022504_def\n");
//@unit 8c02257c
#include "../decls.h"
int FUN_8c02257c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar7_00;
  undefined4 auStack_8 [2];
  
  iVar1 = FUN_8c2680ec(auStack_8,ar5,ar6,ar7);
  if (iVar1 == 0) {
    FUN_8c2681d0(auStack_8[0],0,0,ar7);
    FUN_8c268250(auStack_8[0],0x7f,0,ar7);
    ar7_00 = 0;
    iVar1 = FUN_8c26813c(auStack_8[0],ar5,ar6,0);
    if (iVar1 == 0) {
      iVar1 = FUN_8c26809c(auStack_8[0],ar5,ar6,ar7_00);
    }
    else {
      iVar1 = FUN_8c26809c(auStack_8[0],ar5,ar6,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02257c\n.set _FUN_8c02257c, _FUN_8c02257c_def\n");
//@unit 8c0225f4
#include "../decls.h"
uint FUN_8c0225f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  
  for (uVar2 = 0; (uVar2 < 7 && (*(int *)(uVar2 * 0x10 + ar4) != 0)); uVar2 = uVar2 + 1) {
  }
  if (uVar2 == 7) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = FUN_8c2680ec(ar4 + uVar2 * 0x10 + 0xc,ar5,ar6,ar7);
    if (iVar1 == 0) {
      *(undefined4 *)(uVar2 * 0x10 + ar4) = 1;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 4) = ar5;
      *(undefined4 *)(ar4 + uVar2 * 0x10 + 8) = ar6;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c0225f4\n.set _FUN_8c0225f4, _FUN_8c0225f4_def\n");
//@unit 8c022688
#include "../decls.h"
int FUN_8c022688_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      FUN_8c26809c(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7);
      iVar1 = ar5 * 0x10;
      *(undefined4 *)(iVar1 + ar4) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022688\n.set _FUN_8c022688, _FUN_8c022688_def\n");
//@unit 8c0226d8
#include "../decls.h"
undefined4 FUN_8c0226d8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c022710(ar4,ar5,*(undefined4 *)(ar4 + ar5 * 0x10 + 8),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0226d8\n.set _FUN_8c0226d8, _FUN_8c0226d8_def\n");
//@unit 8c022710
#include "../decls.h"
undefined4 FUN_8c022710_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(ar5 * 0x10 + ar4) == 1) {
    iVar2 = (*(code *)(&FUN_8c26813c))
                      (*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),*(undefined4 *)(ar4 + ar5 * 0x10 + 4)
                       ,ar6,1);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022710\n.set _FUN_8c022710, _FUN_8c022710_def\n");
//@unit 8c022778
#include "../decls.h"
int FUN_8c022778_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = FUN_8c2682bc(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar5,ar6,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022778\n.set _FUN_8c022778, _FUN_8c022778_def\n");
//@unit 8c0227bc
#include "../decls.h"
int FUN_8c0227bc_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = FUN_8c2681d0(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0227bc\n.set _FUN_8c0227bc, _FUN_8c0227bc_def\n");
//@unit 8c022804
#include "../decls.h"
int FUN_8c022804_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 7;
  if (ar5 < 7) {
    iVar1 = *(int *)(ar5 * 0x10 + ar4);
    if (iVar1 == 1) {
      iVar1 = FUN_8c268250(*(undefined4 *)(ar4 + ar5 * 0x10 + 0xc),ar6,0,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022804\n.set _FUN_8c022804, _FUN_8c022804_def\n");
//@unit 8c02284c
#include "../decls.h"
undefined4 handle_slot_alloc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    if (2 < iVar2) {
      return 0xffffffff;
    }
    piVar1 = (int *)(ar4 + iVar2 * 0x208e0 + 0x2d150);
    if (*piVar1 == 0) break;
    iVar2 = iVar2 + 1;
  }
  *piVar1 = 1;
  return iVar2;
}

__asm__(".globl _handle_slot_alloc\n.set _handle_slot_alloc, _handle_slot_alloc_def\n");
//@unit 8c022894
#include "../decls.h"
undefined4 FUN_8c022894_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_stack_00000000;
  
  uVar1 = (*(code *)(&FUN_8c022918))
                    (ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7,in_stack_00000000);
  return uVar1;
}

__asm__(".globl _FUN_8c022894\n.set _FUN_8c022894, _FUN_8c022894_def\n");
//@unit 8c0228e4
#include "../decls.h"
undefined4 FUN_8c0228e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c022918(ar4,ar4 + 0x70,ar5,0,0);
  return uVar1;
}

__asm__(".globl _FUN_8c0228e4\n.set _FUN_8c0228e4, _FUN_8c0228e4_def\n");
//@unit 8c022918
#include "../decls.h"
undefined4 FUN_8c022918_def(undefined4 ar4,int *ar5,undefined4 ar6,int ar7,int s0)

{
  undefined4 uVar1;
  
  if ((*ar5 == 1) || (*ar5 == 3)) {
    s_E8101202_can_t_open_d_d_ADXT_26440a(ar5[1],0,ar6,ar7);
    *ar5 = 2;
    ar5[2] = ar7;
    ar5[3] = s0;
    ar5[4] = 0;
    ar5[5] = 0;
    ar5[6] = 0;
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022918\n.set _FUN_8c022918, _FUN_8c022918_def\n");
//@unit 8c02296c
#include "../decls.h"
undefined4 FUN_8c02296c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0229c8(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02296c\n.set _FUN_8c02296c, _FUN_8c02296c_def\n");
//@unit 8c0229a8
#include "../decls.h"
undefined4 FUN_8c0229a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0229c8(ar4,ar4 + 0x70,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0229a8\n.set _FUN_8c0229a8, _FUN_8c0229a8_def\n");
//@unit 8c0229c8
#include "../decls.h"
int FUN_8c0229c8_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    FUN_8c263c64(ar5[1],ar5,ar6,ar7);
    iVar1 = 3;
    *ar5 = 3;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0229c8\n.set _FUN_8c0229c8, _FUN_8c0229c8_def\n");
//@unit 8c0229ec
#include "../decls.h"
undefined4 handle_slot_free_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  
  piVar1 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return 0;
}

__asm__(".globl _handle_slot_free\n.set _handle_slot_free, _handle_slot_free_def\n");
//@unit 8c022a1c
#include "../decls.h"
undefined4 FUN_8c022a1c_def(int ar4,int ar5,undefined2 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *piVar3;
  uint uStack_18;
  int aiStack_14 [2];
  undefined1 *puStack_c;
  
  puStack_c = &DAT_8c4366c0;
  *ar6 = 0;
  piVar3 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar3;
  if (iVar1 == 0) {
LAB_8c022adc:
    uVar2 = 0;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 == 2) {
        iVar1 = FUN_8c263cd4(piVar3[1],ar5,ar6,ar7);
        if (iVar1 != 1) {
          if ((iVar1 == 2) || (iVar1 == 3)) {
            ar6_00 = aiStack_14;
            FUN_8c263cd8(piVar3[1],&uStack_18,ar6_00,ar7);
            if (0 < (int)uStack_18) {
              if ((uint)piVar3[5] < uStack_18) {
                piVar3[6] = 0;
              }
              else {
                piVar3[6] = piVar3[6] + 1;
                if (4 < (uint)piVar3[6]) {
                  piVar3[6] = 0;
                  return 1;
                }
              }
            }
            piVar3[5] = uStack_18;
            if (piVar3[3] == 0) {
              return 2;
            }
            if ((uint)piVar3[3] <= (uint)piVar3[4]) {
              return 2;
            }
            aiStack_14[0] =
                 libgcc_divide_helper_0101e4(aiStack_14[0],0x1e,ar6_00,ar7);
            aiStack_14[0] = aiStack_14[0] * 5;
            iVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                              (uStack_18,aiStack_14[0],ar6_00,ar7);
            if (piVar3[4] + 1U <= iVar1 + 3U) {
              *ar6 = *(undefined2 *)(piVar3[4] * 2 + piVar3[2]);
              piVar3[4] = piVar3[4] + 1;
              return 3;
            }
            return 2;
          }
          if (iVar1 != 4) {
            return 1;
          }
        }
        return 2;
      }
      if (iVar1 != 3) goto LAB_8c022adc;
    }
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c022a1c\n.set _FUN_8c022a1c, _FUN_8c022a1c_def\n");
//@unit 8c022b68
#include "../decls.h"
int FUN_8c022b68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(ar4 + ar5 * 0x208e0 + 0x2d150);
  iVar1 = *piVar2;
  if (iVar1 == 2) {
    iVar1 = FUN_8c263e50(piVar2[1],0,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022b68\n.set _FUN_8c022b68, _FUN_8c022b68_def\n");
//@unit 8c022bb0
#include "../decls.h"
undefined4 FUN_8c022bb0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c022c20(ar4,ar4 + ar5 * 0x208e0 + 0x2d150,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c022bb0\n.set _FUN_8c022bb0, _FUN_8c022bb0_def\n");
//@unit 8c022bf8
#include "../decls.h"
undefined4 FUN_8c022bf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c022c20(ar4,ar4 + 0x70,ar5,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c022bf8\n.set _FUN_8c022bf8, _FUN_8c022bf8_def\n");
//@unit 8c022c20
#include "../decls.h"
int FUN_8c022c20_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar5;
  if (iVar1 == 2) {
    iVar1 = FUN_8c263e8e(ar5[1],ar6,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c022c20\n.set _FUN_8c022c20, _FUN_8c022c20_def\n");
//@unit 8c022c4c
#include "../decls.h"
undefined4 * Vec3_ctor_zero_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = &DAT_8c129a7c;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _Vec3_ctor_zero\n.set _Vec3_ctor_zero, _Vec3_ctor_zero_def\n");
//@unit 8c022c88
#include "../decls.h"
undefined4 * Vec3_ctor_copy_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[3] = &DAT_8c129a7c;
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _Vec3_ctor_copy\n.set _Vec3_ctor_copy, _Vec3_ctor_copy_def\n");
//@unit 8c022cb0
#include "../decls.h"
int Vec3_dtor_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (*(undefined **)(ar4 + 0xc) = &DAT_8c129a7c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _Vec3_dtor\n.set _Vec3_dtor, _Vec3_dtor_def\n");
//@unit 8c022ce8
#include "../decls.h"
undefined4 * Vec3_ctor_xyz_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  ar4[3] = &DAT_8c129a7c;
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _Vec3_ctor_xyz\n.set _Vec3_ctor_xyz, _Vec3_ctor_xyz_def\n");
//@unit 8c022d04
#include "../decls.h"
undefined4 * FUN_8c022d04_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c022d04\n.set _FUN_8c022d04, _FUN_8c022d04_def\n");
//@unit 8c022d14
#include "../decls.h"
int FUN_8c022d14_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return ar5 + 4;
}

__asm__(".globl _FUN_8c022d14\n.set _FUN_8c022d14, _FUN_8c022d14_def\n");
//@unit 8c022d3c
#include "../decls.h"
undefined4 FUN_8c022d3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_xyz(s0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c022d3c\n.set _FUN_8c022d3c, _FUN_8c022d3c_def\n");
//@unit 8c022dac
#include "../decls.h"
undefined4 FUN_8c022dac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar5_00;
  undefined8 in_dr0;
  double dVar2;
  undefined4 in_fr15;
  double dVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar5_00 = ar5;
  FUN_8c022d14(ar4,ar5,ar6,ar7);
  uStack_1c = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 != '\0') {
    uStack_1c = (undefined4)in_dr0;
  }
  Vec3_length_sq(ar4,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_20 = uVar1;
  if (cVar6 != '\0') {
    uStack_20 = (undefined4)in_dr0;
    uStack_1c = uVar1;
  }
  Vec3_length_sq(ar5,ar5_00,ar6,ar7);
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uStack_20,in_fr15);
    uStack_24 = uVar1;
  }
  else {
    dVar3 = (double)CONCAT44(uStack_1c,uVar1);
    uStack_24 = (int)in_dr0;
    uStack_20 = uVar1;
  }
  uVar1 = 8;
  if (cVar6 == '\0') {
    dVar2 = (double)CONCAT44(uStack_24,(int)in_dr0);
  }
  else {
    dVar2 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * (float)((ulonglong)dVar2 >> 0x20),
                             SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar2;
  }
  if (cVar5 == '\0') {
    bVar4 = 0.0 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar4 = (double)((ulonglong)dVar2 & 0xffffffff) < dVar3;
  }
  if (bVar4) {
    FUN_8c013aec(ar5,ar5_00,ar6,ar7);
    FUN_8c022e5c(ar5,ar5_00,ar6,ar7);
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c022dac\n.set _FUN_8c022dac, _FUN_8c022dac_def\n");
//@unit 8c022e5c
#include "../decls.h"
undefined4 FUN_8c022e5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x8c022e74;
}

__asm__(".globl _FUN_8c022e5c\n.set _FUN_8c022e5c, _FUN_8c022e5c_def\n");
//@unit 8c022e78
#include "../decls.h"
undefined4 Vec3_length_sq_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  FUN_8c258030(ar4,ar5,ar6,ar7,in_stack_fffffff4);
  return 0;
}

__asm__(".globl _Vec3_length_sq\n.set _Vec3_length_sq, _Vec3_length_sq_def\n");
//@unit 8c022ec0
#include "../decls.h"
undefined4 Vec3_normalize_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr0;
  float fVar3;
  double dVar1;
  double dVar2;
  undefined4 uVar4;
  float in_fr15;
  undefined4 in_fr14;
  char cVar5;
  char cVar6;
  undefined4 in_stack_00000000;
  float fStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar6 = '\0';
  cVar5 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  if (cVar6 == '\0') {
    in_fr15 = fVar3;
    fVar3 = fStack_1c;
  }
  fStack_1c = fVar3;
  if (in_fr15 == 0.0) {
    Vec3_assign(&fStack_1c,ar4,ar6,ar7);
  }
  else {
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)ar4,(int)in_dr0);
    }
    else {
      dVar1 = *ar4;
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    fStack_1c = SUB84(dVar1,0);
    if (cVar6 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fStack_1c);
      fStack_1c = (float)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar5 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uStack_18 = SUB84(dVar2,0);
    if (cVar6 == '\0') {
      dVar1 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),uStack_18);
      uStack_18 = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      dVar1 = ar4[1];
    }
    if (cVar5 == '\0') {
      dVar1 = (double)CONCAT44((float)((ulonglong)dVar1 >> 0x20) / in_fr15,SUB84(dVar1,0));
    }
    else {
      dVar1 = dVar1 / (double)CONCAT44(in_fr14,in_fr15);
    }
    uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
    uStack_14 = uVar4;
    if (cVar6 != '\0') {
      uStack_14 = SUB84(dVar1,0);
      uStack_10 = uVar4;
    }
  }
  Vec3_ctor_copy(in_stack_00000000,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Vec3_normalize\n.set _Vec3_normalize, _Vec3_normalize_def\n");
//@unit 8c022f54
#include "../decls.h"
double * Vec3_length_def(double *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr0;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    fVar1 = in_fr15;
  }
  else {
    fVar1 = (float)in_dr0;
  }
  if (fVar1 != 0.0) {
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
    }
    else {
      dVar2 = *ar4;
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)ar4 = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),SUB84(dVar2,0));
    }
    else {
      *ar4 = dVar2;
      dVar2 = *(double *)((int)ar4 + 4);
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)((int)ar4 + 4) = (int)((ulonglong)dVar2 >> 0x20);
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),SUB84(dVar2,0));
    }
    else {
      *(double *)((int)ar4 + 4) = dVar2;
      dVar2 = ar4[1];
    }
    if (cVar3 == '\0') {
      dVar2 = (double)CONCAT44((float)((ulonglong)dVar2 >> 0x20) / in_fr15,SUB84(dVar2,0));
    }
    else {
      dVar2 = dVar2 / (double)CONCAT44(in_fr14,in_fr15);
    }
    if (cVar4 == '\0') {
      *(int *)(ar4 + 1) = (int)((ulonglong)dVar2 >> 0x20);
    }
    else {
      ar4[1] = dVar2;
    }
  }
  return ar4;
}

__asm__(".globl _Vec3_length\n.set _Vec3_length, _Vec3_length_def\n");
//@unit 8c022fc0
#include "../decls.h"
undefined4 FUN_8c022fc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 auStack_28 [4];
  undefined1 auStack_18 [24];
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  Vec3_sub(ar5,ar4,ar6,ar7,auStack_28);
  Vec3_ctor_copy(auStack_18,auStack_28,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_length_sq(auStack_18,ar5_00,ar6,ar7);
  if (cVar2 != '\0') {
    auStack_28[0] = uVar1;
  }
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0xc;
}

__asm__(".globl _FUN_8c022fc0\n.set _FUN_8c022fc0, _FUN_8c022fc0_def\n");
//@unit 8c023040
#include "../decls.h"
undefined4 FUN_8c023040_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined8 in_dr0;
  undefined4 uVar1;
  char cVar2;
  undefined4 auStack_38 [4];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [24];
  
  uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  cVar2 = '\0';
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_sub(auStack_18,ar4,ar6,ar7,auStack_38);
  Vec3_ctor_copy(auStack_28,auStack_38,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_38,0xffffffff,ar6,ar7);
  Vec3_length_sq(auStack_28,ar5_00,ar6,ar7);
  if (cVar2 != '\0') {
    auStack_38[0] = uVar1;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0x14;
}

__asm__(".globl _FUN_8c023040\n.set _FUN_8c023040, _FUN_8c023040_def\n");
//@unit 8c0230f0
#include "../decls.h"
undefined4 FUN_8c0230f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0230f0\n.set _FUN_8c0230f0, _FUN_8c0230f0_def\n");
//@unit 8c023138
#include "../decls.h"
undefined4 FUN_8c023138_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c023138\n.set _FUN_8c023138, _FUN_8c023138_def\n");
//@unit 8c023180
#include "../decls.h"
undefined4 FUN_8c023180_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c023180\n.set _FUN_8c023180, _FUN_8c023180_def\n");
//@unit 8c0231c8
#include "../decls.h"
undefined4 * FUN_8c0231c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 ar5_00;
  float fVar2;
  ulonglong in_dr0;
  bool bVar3;
  char cVar4;
  char cVar5;
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [20];
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,auStack_1c);
  Vec3_length_sq(auStack_1c,ar5,ar6,ar7);
  if (cVar5 == '\0') {
    in_dr0 = in_dr0 >> 0x20;
  }
  fVar2 = (float)in_dr0;
  bVar3 = fVar2 == 0.0;
  ar5_00 = 0xffffffff;
  Vec3_dtor(auStack_1c,0xffffffff,ar6,ar7);
  if (bVar3) {
    puVar1 = (undefined4 *)&DAT_8c023270;
  }
  else {
    FUN_8c0230f0(ar4,ar5_00,ar6,ar7,auStack_2c);
    FUN_8c022dac(ar4,auStack_2c,ar6,ar7);
    puVar1 = (undefined4 *)Vec3_dtor(auStack_2c,0xffffffff,ar6,ar7);
  }
  if (cVar5 == '\0') {
    fVar2 = *(float *)(ar4 + 4);
  }
  if (cVar4 == '\0' && 0.0 < fVar2) {
    puVar1 = &DAT_8c023278;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c0231c8\n.set _FUN_8c0231c8, _FUN_8c0231c8_def\n");
//@unit 8c02327c
#include "../decls.h"
undefined4 * FUN_8c02327c_def(float *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  float fVar3;
  undefined8 in_dr0;
  char cVar4;
  char cVar5;
  undefined8 uStack_20;
  
  cVar5 = '\0';
  cVar4 = '\0';
  FUN_8c0230f0(ar4,ar5,ar6,ar7,(int)&uStack_20 + 4);
  FUN_8c022dac(&DAT_8c1259a8,(int)&uStack_20 + 4,ar6,ar7);
  uVar1 = in_dr0;
  if (cVar5 == '\0') {
    uStack_20 = CONCAT44((*(uint*)((uchar*)&uStack_20+4)),(int)((ulonglong)in_dr0 >> 0x20));
    uVar1 = uStack_20;
  }
  uStack_20 = uVar1;
  puVar2 = (undefined4 *)Vec3_dtor((int)&uStack_20 + 4,0xffffffff,ar6,ar7);
  fVar3 = (float)in_dr0;
  if (cVar5 == '\0') {
    fVar3 = *ar4;
  }
  if (cVar4 == '\0' && fVar3 < 0.0) {
    puVar2 = &DAT_8c0232e4;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c02327c\n.set _FUN_8c02327c, _FUN_8c02327c_def\n");
//@unit 8c0232e8
#include "../decls.h"
undefined4 FUN_8c0232e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr0;
  float extraout_fr0_00;
  float in_fr15;
  float fVar2;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 2;
  FUN_8c0231c8(ar5,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr15 = extraout_fr0;
  }
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  fVar2 = extraout_fr1;
  if (cVar4 == '\0') {
    fVar2 = in_fr15;
  }
  if (cVar3 == '\0' && fVar2 < extraout_fr0_00) {
    uVar1 = 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0232e8\n.set _FUN_8c0232e8, _FUN_8c0232e8_def\n");
//@unit 8c023334
#include "../decls.h"
undefined4 FUN_8c023334_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  undefined8 in_dr0;
  code *pcVar4;
  char cVar5;
  char cVar6;
  float afStack_6c [4];
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined1 auStack_20 [20];
  undefined4 uStack_c;
  
  fVar3 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar6 = '\0';
  cVar5 = '\0';
  uStack_c = 1;
  uVar2 = ar5;
  FUN_8c02327c(ar5,ar5,ar6,ar7);
  fVar1 = fVar3;
  if (cVar6 == '\0') {
    fVar1 = afStack_6c[0];
  }
  afStack_6c[0] = fVar1;
  FUN_8c02327c(ar4,uVar2,ar6,ar7);
  FUN_8c0230f0(ar4,uVar2,ar6,ar7,auStack_40);
  Vec3_ctor_copy(auStack_20,auStack_40,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_40,0xffffffff,ar6,ar7);
  FUN_8c0230f0(ar5,uVar2,ar6,ar7,auStack_50);
  Vec3_ctor_copy(auStack_30,auStack_50,ar6,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6,ar7);
  Vec3_set_xyz(auStack_5c,uVar2,ar6,ar7);
  FUN_8c023484(auStack_20,auStack_5c,ar6,ar7,afStack_6c);
  Vec3_assign(auStack_20,afStack_6c,ar6,ar7);
  Vec3_dtor(afStack_6c,0xffffffff,ar6,ar7);
  object_dtor_delete(auStack_5c,0xffffffff,ar6,ar7);
  FUN_8c022dac(auStack_20,auStack_30,ar6,ar7);
  if (cVar6 == '\0') {
    pcVar4 = (code *)0x42b40000;
  }
  else {
    fVar3 = 90.0;
    pcVar4 = Vec3_set_xyz;
  }
  if (cVar5 == '\0' && (float)(uint)pcVar4 < fVar3) {
    uVar2 = 4;
  }
  else {
    uVar2 = 3;
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6,ar7);
  Vec3_dtor(auStack_20,0xffffffff,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c023334\n.set _FUN_8c023334, _FUN_8c023334_def\n");
//@unit 8c023484
#include "../decls.h"
undefined4 FUN_8c023484_def(undefined8 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int ar6_01;
  int ar5_01;
  char cVar3;
  char cVar4;
  undefined4 in_stack_ffffff8c;
  undefined1 auStack_64 [12];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 auStack_4c [17];
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar5;
  Vec3_ctor_zero(&stack0xffffff8c,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_58 = *(undefined4 *)ar4;
    uStack_54 = *(undefined4 *)((int)ar4 + 4);
    uStack_50 = *(undefined4 *)(ar4 + 1);
  }
  else {
    uStack_58 = (undefined4)*ar4;
    uStack_54 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_50 = (undefined4)ar4[1];
    auStack_4c[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  FUN_8c25cddc(auStack_4c,ar5_00,ar6,ar7,in_stack_ffffff8c);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,ar5[2]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,ar5[1]);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*ar5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_4c,ar5_01,ar6_01,ar7_00,in_stack_ffffff8c);
  ar6_00 = auStack_64;
  FUN_8c21279c(auStack_4c,&uStack_58,ar6_00,ar7_00,in_stack_ffffff8c);
  Vec3_ctor_copy(s0,&stack0xffffff8c,ar6_00,ar7_00);
  Vec3_dtor(&stack0xffffff8c,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c023484\n.set _FUN_8c023484, _FUN_8c023484_def\n");
//@unit 8c023570
#include "../decls.h"
undefined4 FUN_8c023570_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 *ar6_00;
  float fVar1;
  double dVar2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar3;
  char cVar4;
  undefined1 auStack_70 [12];
  undefined4 uStack_64;
  undefined1 auStack_60 [12];
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [17];
  
  cVar4 = '\0';
  cVar3 = '\0';
  Vec3_ctor_zero(auStack_70,ar5,ar6,ar7);
  if (cVar4 == '\0') {
    uStack_54 = *(undefined4 *)ar4;
    uStack_50 = *(undefined4 *)((int)ar4 + 4);
    uStack_4c = *(undefined4 *)(ar4 + 1);
  }
  else {
    uStack_54 = (undefined4)*ar4;
    uStack_50 = (undefined4)*(undefined8 *)((int)ar4 + 4);
    uStack_4c = (undefined4)ar4[1];
    auStack_48[0] = (undefined4)((ulonglong)ar4[1] >> 0x20);
  }
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr6);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr5);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar3 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar4 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar3 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar4 != '\0') {
    uStack_64 = uStack_54;
  }
  Vec3_ctor_copy(s0,auStack_70,ar6_00,ar7_00);
  Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c023570\n.set _FUN_8c023570, _FUN_8c023570_def\n");
//@unit 8c023668
#include "../decls.h"
undefined4 FUN_8c023668_def(undefined8 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [68];
  
  cVar5 = '\0';
  cVar4 = '\0';
  uStack_54 = *(undefined4 *)ar4;
  uStack_50 = *(undefined4 *)((int)ar4 + 4);
  uStack_4c = *(undefined4 *)(ar4 + 1);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_fr4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr6);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr5);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar6_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar3 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar2 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar3 * dVar3,0);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x43b40000,fVar2);
  }
  else {
    dVar3 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(auStack_48,ar5_00,ar6_01,ar7_00,in_fr4);
  ar6_00 = &uStack_60;
  FUN_8c21279c(auStack_48,&uStack_54,ar6_00,ar7_00,in_fr4);
  if (cVar5 == '\0') {
    *(undefined4 *)ar4 = uStack_60;
    *(undefined4 *)((int)ar4 + 4) = uStack_5c;
    *(undefined4 *)(ar4 + 1) = uStack_58;
  }
  else {
    *ar4 = CONCAT44(uStack_5c,uStack_60);
    *(ulonglong *)((int)ar4 + 4) = CONCAT44(uStack_58,uStack_5c);
    ar4[1] = CONCAT44(uStack_54,uStack_58);
  }
  uVar1 = Vec3_ctor_copy(s0,ar4,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _FUN_8c023668\n.set _FUN_8c023668, _FUN_8c023668_def\n");
//@unit 8c02374c
#include "../decls.h"
undefined4 FUN_8c02374c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 ar7_00;
  float fVar3;
  undefined4 uVar4;
  double in_dr0;
  ulonglong uVar5;
  double dVar6;
  float fVar7;
  undefined4 in_fr4;
  undefined4 in_fr15;
  double dVar8;
  int iVar9;
  int ar5_00;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  undefined4 uStack_80;
  undefined4 auStack_78 [3];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 auStack_50 [17];
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  if (cVar11 == '\0') {
    in_fr15 = uVar4;
    uVar4 = auStack_78[0];
  }
  auStack_78[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uStack_80 = SUB84(in_dr0,0);
  uStack_5c = uStack_80;
  dVar8 = in_dr0;
  if (cVar11 == '\0') {
    uStack_5c = 0;
    dVar8 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),in_fr15);
  }
  uVar5 = (ulonglong)in_dr0 & 0xffffffff;
  if (cVar11 == '\0') {
    uStack_58 = 0;
  }
  else {
    uStack_54 = 0;
    uStack_58 = uStack_80;
  }
  Vec3_length_sq(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)(uVar5 >> 0x20);
  uStack_54 = uVar4;
  if (cVar11 != '\0') {
    uStack_54 = (undefined4)uVar5;
    auStack_50[0] = uVar4;
  }
  FUN_8c25cddc(auStack_50,ar5,ar6,ar7,in_fr4);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar7 = (float)((ulonglong)dVar6 >> 0x20);
    fVar3 = SUB84(dVar6,0) / fVar7;
    dVar6 = (double)CONCAT44(fVar7,fVar3);
    iVar9 = (int)fVar3;
  }
  else {
    dVar6 = dVar6 / dVar6;
    iVar9 = (int)dVar6;
  }
  uVar4 = SUB84(dVar6,0);
  FUN_8c256a78(auStack_50,iVar9,ar6,ar7,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7,in_fr4);
  uStack_5c = uStack_68;
  uStack_58 = uStack_64;
  uStack_54 = uStack_60;
  FUN_8c25cddc(auStack_50,puVar1,puVar2,ar7,in_fr4);
  ar7_00 = 0;
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,uVar4);
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar8,0));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    fVar3 = (float)((ulonglong)dVar8 >> 0x20) / (float)((ulonglong)dVar6 >> 0x20);
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0));
    iVar9 = (int)fVar3;
  }
  else {
    dVar8 = dVar8 / dVar6;
    fVar3 = (float)((ulonglong)dVar8 >> 0x20);
    iVar9 = (int)dVar8;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,SUB84(dVar6,0));
  }
  else {
    dVar6 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    dVar8 = (double)CONCAT44(fVar3,SUB84(dVar8,0) * (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    dVar8 = dVar8 * dVar6;
  }
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(0x43b40000,SUB84(dVar6,0));
  }
  else {
    dVar6 = -3.7389520302648205e-250;
  }
  if (cVar10 == '\0') {
    ar5_00 = (int)(SUB84(dVar8,0) / (float)((ulonglong)dVar6 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar8 / dVar6);
  }
  FUN_8c256b0c(auStack_50,ar5_00,iVar9,0,in_fr4);
  puVar2 = &uStack_68;
  puVar1 = &uStack_5c;
  FUN_8c21279c(auStack_50,puVar1,puVar2,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_78,puVar1,puVar2,ar7_00);
  if (cVar11 != '\0') {
    uStack_6c = uStack_5c;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_78,puVar2,ar7_00);
  Vec3_dtor(auStack_78,0xffffffff,puVar2,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c02374c\n.set _FUN_8c02374c, _FUN_8c02374c_def\n");
//@unit 8c0238b4
#include "../decls.h"
undefined4 FUN_8c0238b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  float fVar1;
  undefined8 in_dr0;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar2;
  undefined4 in_fr4;
  int ar7_00;
  int ar6_01;
  int iVar5;
  char cVar6;
  char cVar7;
  undefined4 in_stack_00000000;
  undefined4 auStack_7c [3];
  undefined4 uStack_70;
  undefined1 auStack_6c [12];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  Vec3_set_zero(&uStack_14,ar5,ar6,ar7);
  FUN_8c0231c8(ar4,ar5,ar6,ar7);
  uStack_14 = (undefined4)in_dr0;
  uVar3 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uVar4 = uVar3;
  if (cVar7 == '\0') {
    uVar4 = auStack_7c[0];
    uStack_14 = uVar3;
    uVar3 = uStack_10;
  }
  uStack_10 = uVar3;
  auStack_7c[0] = uVar4;
  FUN_8c02327c(ar4,ar5,ar6,ar7);
  uVar4 = (undefined4)((ulonglong)in_dr0 >> 0x20);
  uStack_10 = (undefined4)in_dr0;
  if (cVar7 == '\0') {
    uStack_60 = 0;
    uStack_58 = 0x3f800000;
    uStack_10 = uVar4;
  }
  else {
    auStack_54[0] = 0x3f800000;
    uStack_58 = uStack_10;
    uStack_60 = uStack_10;
    uStack_c = uVar4;
  }
  uStack_5c = uStack_60;
  FUN_8c25cddc(auStack_54,ar5,ar6,ar7,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_c);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_10);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    ar6_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar6_01 = (int)(dVar2 / dVar2);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,uStack_14);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,in_fr4);
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar6 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar7 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar6 == '\0') {
    iVar5 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar5 = (int)(dVar2 / dVar2);
  }
  FUN_8c256ce0(auStack_54,iVar5,ar6_01,ar7_00,in_fr4);
  ar6_00 = auStack_6c;
  ar5_00 = &uStack_60;
  FUN_8c21279c(auStack_54,ar5_00,ar6_00,ar7_00,in_fr4);
  Vec3_ctor_zero(auStack_7c,ar5_00,ar6_00,ar7_00);
  if (cVar7 != '\0') {
    uStack_70 = uStack_60;
  }
  Vec3_ctor_copy(in_stack_00000000,auStack_7c,ar6_00,ar7_00);
  Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7_00);
  object_dtor_delete(&uStack_14,0xffffffff,ar6_00,ar7_00);
  return 0;
}

__asm__(".globl _FUN_8c0238b4\n.set _FUN_8c0238b4, _FUN_8c0238b4_def\n");
//@unit 8c023a14
#include "../decls.h"
undefined4 * Vec3_assign_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _Vec3_assign\n.set _Vec3_assign, _Vec3_assign_def\n");
//@unit 8c023a34
#include "../decls.h"
undefined4 Vec3_add_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) + (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 + dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Vec3_add\n.set _Vec3_add, _Vec3_add_def\n");
//@unit 8c023aa0
#include "../decls.h"
float * FUN_8c023aa0_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 + *ar5;
  ar4[1] = ar4[1] + ar5[1];
  ar4[2] = ar4[2] + ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023aa0\n.set _FUN_8c023aa0, _FUN_8c023aa0_def\n");
//@unit 8c023ae0
#include "../decls.h"
undefined4 Vec3_sub_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *(double *)((int)ar5 + 4);
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = ar5[1];
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) - (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 - dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Vec3_sub\n.set _Vec3_sub, _Vec3_sub_def\n");
//@unit 8c023b4c
#include "../decls.h"
float * FUN_8c023b4c_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 - *ar5;
  ar4[1] = ar4[1] - ar5[1];
  ar4[2] = ar4[2] - ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023b4c\n.set _FUN_8c023b4c, _FUN_8c023b4c_def\n");
//@unit 8c023b8c
#include "../decls.h"
undefined4 Vec3_scale_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) * (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 * dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Vec3_scale\n.set _Vec3_scale, _Vec3_scale_def\n");
//@unit 8c023bf4
#include "../decls.h"
float * FUN_8c023bf4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 * *ar5;
  ar4[1] = ar4[1] * *ar5;
  ar4[2] = ar4[2] * *ar5;
  return ar4;
}

__asm__(".globl _FUN_8c023bf4\n.set _FUN_8c023bf4, _FUN_8c023bf4_def\n");
//@unit 8c023c30
#include "../decls.h"
undefined4 FUN_8c023c30_def(undefined8 *ar4,double *ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  double dVar1;
  undefined8 in_xd0;
  char cVar2;
  char cVar3;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined4 uStack_10;
  
  cVar3 = '\0';
  cVar2 = '\0';
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)ar4);
  }
  else {
    in_xd0 = *ar4;
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_1c = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_1c = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)((int)ar4 + 4));
  }
  else {
    fStack_1c = (float)in_xd0;
    in_xd0 = *(undefined8 *)((int)ar4 + 4);
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_18 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_18 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 == '\0') {
    dVar1 = (double)CONCAT44(*(undefined4 *)ar5,*(undefined4 *)(ar4 + 1));
  }
  else {
    fStack_18 = (float)in_xd0;
    in_xd0 = ar4[1];
    dVar1 = *ar5;
  }
  if (cVar2 == '\0') {
    fStack_14 = SUB84(dVar1,0) / (float)((ulonglong)dVar1 >> 0x20);
  }
  else {
    fStack_14 = SUB84(dVar1 / dVar1,0);
  }
  if (cVar3 != '\0') {
    fStack_14 = (float)in_xd0;
    uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(s0,&fStack_1c,ar6,ar7);
  Vec3_dtor(&fStack_1c,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c023c30\n.set _FUN_8c023c30, _FUN_8c023c30_def\n");
//@unit 8c023c98
#include "../decls.h"
float * FUN_8c023c98_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar4 / *ar5;
  ar4[1] = ar4[1] / *ar5;
  ar4[2] = ar4[2] / *ar5;
  return ar4;
}

__asm__(".globl _FUN_8c023c98\n.set _FUN_8c023c98, _FUN_8c023c98_def\n");
//@unit 8c023cd4
#include "../decls.h"
undefined4 FUN_8c023cd4_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c023cd4\n.set _FUN_8c023cd4, _FUN_8c023cd4_def\n");
//@unit 8c023d04
#include "../decls.h"
undefined4 FUN_8c023d04_def(float *ar4,float *ar5,undefined4 ar6,undefined4 ar7)

{
  if (((*ar4 == *ar5) && (ar4[1] == ar5[1])) && (ar4[2] == ar5[2])) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c023d04\n.set _FUN_8c023d04, _FUN_8c023d04_def\n");
//@unit 8c023d34
#include "../decls.h"
undefined4 * Vec3_set_zero_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _Vec3_set_zero\n.set _Vec3_set_zero, _Vec3_set_zero_def\n");
//@unit 8c023d68
#include "../decls.h"
undefined4 * Vec3_set_xyz_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _Vec3_set_xyz\n.set _Vec3_set_xyz, _Vec3_set_xyz_def\n");
//@unit 8c023d7c
#include "../decls.h"
undefined4 * FUN_8c023d7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c023d7c\n.set _FUN_8c023d7c, _FUN_8c023d7c_def\n");
//@unit 8c023d8c
#include "../decls.h"
undefined4 * vec3_copy_8c023d8c_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _vec3_copy_8c023d8c\n.set _vec3_copy_8c023d8c, _vec3_copy_8c023d8c_def\n");
//@unit 8c023dac
#include "../decls.h"
undefined4 * FUN_8c023dac_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0x3f800000;
  ar4[1] = 0x3f800000;
  *ar4 = 0x3f800000;
  return ar4;
}

__asm__(".globl _FUN_8c023dac\n.set _FUN_8c023dac, _FUN_8c023dac_def\n");
//@unit 8c023de0
#include "../decls.h"
undefined4 * FUN_8c023de0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4;
}

__asm__(".globl _FUN_8c023de0\n.set _FUN_8c023de0, _FUN_8c023de0_def\n");
//@unit 8c023df4
#include "../decls.h"
undefined4 * FUN_8c023df4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *ar4 = in_fr4;
  ar4[1] = in_fr5;
  ar4[2] = in_fr6;
  return ar4 + 1;
}

__asm__(".globl _FUN_8c023df4\n.set _FUN_8c023df4, _FUN_8c023df4_def\n");
//@unit 8c023e04
#include "../decls.h"
undefined4 * FUN_8c023e04_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023e04\n.set _FUN_8c023e04, _FUN_8c023e04_def\n");
//@unit 8c023e24
#include "../decls.h"
undefined4 * FUN_8c023e24_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _FUN_8c023e24\n.set _FUN_8c023e24, _FUN_8c023e24_def\n");
//@unit 8c023e44
#include "../decls.h"
undefined4 FUN_8c023e44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c023e44\n.set _FUN_8c023e44, _FUN_8c023e44_def\n");
//@unit 8c023e4c
#include "../decls.h"
int free_if_nonnull_wrap_023e4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_023e4c\n.set _free_if_nonnull_wrap_023e4c, _free_if_nonnull_wrap_023e4c_def\n");
//@unit 8c023e7c
#include "../decls.h"
undefined4 FUN_8c023e7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25cddc(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023e7c\n.set _FUN_8c023e7c, _FUN_8c023e7c_def\n");
//@unit 8c023e98
#include "../decls.h"
undefined4 FUN_8c023e98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c255d6c(ar4,ar5,ar6,ar7,ar5);
  return ar4;
}

__asm__(".globl _FUN_8c023e98\n.set _FUN_8c023e98, _FUN_8c023e98_def\n");
//@unit 8c023ebc
#include "../decls.h"
undefined4 FUN_8c023ebc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256a78(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023ebc\n.set _FUN_8c023ebc, _FUN_8c023ebc_def\n");
//@unit 8c023ef8
#include "../decls.h"
undefined4 FUN_8c023ef8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023ef8\n.set _FUN_8c023ef8, _FUN_8c023ef8_def\n");
//@unit 8c023f34
#include "../decls.h"
undefined4 FUN_8c023f34_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256d7c(ar4,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023f34\n.set _FUN_8c023f34, _FUN_8c023f34_def\n");
//@unit 8c023f70
#include "../decls.h"
undefined4 FUN_8c023f70_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  uVar1 = FUN_8c256b0c(ar4,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0),ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023f70\n.set _FUN_8c023f70, _FUN_8c023f70_def\n");
//@unit 8c023fdc
#include "../decls.h"
undefined4 FUN_8c023fdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c256fec(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c023fdc\n.set _FUN_8c023fdc, _FUN_8c023fdc_def\n");
//@unit 8c024010
#include "../decls.h"
void FUN_8c024010_def(undefined4 param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 in_PR;
  char in_FPSCR_SZ = 0;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (in_FPSCR_SZ == '\0') {
    uStack_18 = *(undefined4 *)param_3;
    uStack_14 = *(undefined4 *)((int)param_3 + 4);
    uStack_10 = *(undefined4 *)(param_3 + 1);
    uStack_c = in_PR;
  }
  else {
    uStack_18 = (undefined4)*param_3;
    uStack_14 = (undefined4)*(undefined8 *)((int)param_3 + 4);
    uStack_10 = (undefined4)param_3[1];
    uStack_c = (undefined4)((ulonglong)param_3[1] >> 0x20);
  }
  FUN_8c21279c(param_1,&uStack_18,&uStack_24);
  if (in_FPSCR_SZ == '\0') {
    *(undefined4 *)param_2 = uStack_24;
    *(undefined4 *)((int)param_2 + 4) = uStack_20;
    *(undefined4 *)(param_2 + 1) = uStack_1c;
  }
  else {
    *param_2 = CONCAT44(uStack_20,uStack_24);
    *(ulonglong *)((int)param_2 + 4) = CONCAT44(uStack_1c,uStack_20);
    param_2[1] = CONCAT44(uStack_18,uStack_1c);
  }
  return;
}

__asm__(".globl _FUN_8c024010\n.set _FUN_8c024010, _FUN_8c024010_def\n");
//@unit 8c024088
#include "../decls.h"
int FUN_8c024088_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c0241c4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c024088\n.set _FUN_8c024088, _FUN_8c024088_def\n");
//@unit 8c0240bc
#include "../decls.h"
undefined4 FUN_8c0240bc_def(double *ar4,double *ar5,float *ar6,undefined4 ar7)

{
  float fVar1;
  float fVar2;
  double dVar3;
  undefined4 in_fr3;
  double dVar4;
  undefined4 in_fr15;
  double dVar5;
  undefined4 uVar6;
  double in_xd0;
  char cVar7;
  char cVar8;
  undefined4 in_stack_00000000;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar8 = '\0';
  cVar7 = '\0';
  fVar1 = *(float *)(ar5 + 1) * ar6[2];
  dVar5 = (double)CONCAT44(*(float *)ar5 * *ar6 + *(float *)((int)ar5 + 4) * ar6[1] + fVar1,in_fr15)
  ;
  Vec3_ctor_zero(&uStack_30,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,in_fr3);
    dVar3 = (double)CONCAT44(*(undefined4 *)ar4,fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = *ar4;
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[1];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) -
                             ((float)((ulonglong)dVar4 >> 0x20) + fVar1),SUB84(dVar5,0));
  }
  else {
    fVar1 = SUB84(dVar3 * dVar3,0);
    dVar5 = dVar5 - (dVar4 + dVar3 * dVar3);
  }
  uVar6 = (undefined4)((ulonglong)dVar5 >> 0x20);
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar5,uVar6);
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 2),fVar1);
  }
  else {
    dVar4 = *ar5;
    dVar3 = ar4[2];
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar3 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 0x14),*(undefined4 *)((int)ar5 + 4));
  }
  else {
    in_xd0 = *(double *)((int)ar5 + 4);
    dVar3 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) +
                             SUB84(dVar3,0) * (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 + dVar3 * dVar3;
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(*(undefined4 *)(ar4 + 3),*(undefined4 *)(ar5 + 1));
  }
  else {
    in_xd0 = ar5[1];
    dVar3 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar3 >> 0x20);
    fVar1 = SUB84(dVar3,0) * fVar2;
    dVar3 = (double)CONCAT44(fVar2,fVar1);
    fVar1 = SUB84(dVar4,0) / ((float)((ulonglong)dVar4 >> 0x20) + fVar1);
  }
  else {
    dVar3 = dVar3 * dVar3;
    fVar1 = SUB84((dVar4 + dVar3) / (dVar4 + dVar3),0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uVar6,fVar1);
    dVar3 = (double)CONCAT44((int)((ulonglong)dVar3 >> 0x20),*(undefined4 *)(ar4 + 2));
  }
  else {
    in_xd0 = ar4[2];
  }
  fVar1 = SUB84(dVar5,0);
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar3,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar3 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)ar4,fVar2);
  }
  else {
    dVar4 = *ar4;
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_30 = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)((int)ar4 + 0x14));
  }
  else {
    uStack_30 = SUB84(in_xd0,0);
    in_xd0 = *(double *)((int)ar4 + 0x14);
  }
  if (cVar7 == '\0') {
    fVar2 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar2 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)((int)ar4 + 4),fVar2);
  }
  else {
    dVar4 = *(double *)((int)ar4 + 4);
  }
  if (cVar7 == '\0') {
    fVar2 = (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(fVar2,SUB84(dVar4,0) + fVar2);
  }
  else {
    dVar4 = dVar4 + dVar4;
  }
  if (cVar8 == '\0') {
    uStack_2c = SUB84(dVar4,0);
    dVar4 = (double)CONCAT44((int)((ulonglong)dVar4 >> 0x20),*(undefined4 *)(ar4 + 3));
  }
  else {
    uStack_2c = SUB84(in_xd0,0);
    in_xd0 = ar4[3];
  }
  if (cVar7 == '\0') {
    fVar1 = SUB84(dVar4,0) * fVar1;
  }
  else {
    fVar1 = SUB84(dVar4 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 1),fVar1);
  }
  else {
    dVar5 = ar4[1];
  }
  if (cVar7 == '\0') {
    fStack_28 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fStack_28 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 != '\0') {
    fStack_28 = SUB84(in_xd0,0);
    uStack_24 = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  Vec3_ctor_copy(in_stack_00000000,&uStack_30,ar6,ar7);
  Vec3_dtor(&uStack_30,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c0240bc\n.set _FUN_8c0240bc, _FUN_8c0240bc_def\n");
//@unit 8c0241c4
#include "../decls.h"
undefined4 FUN_8c0241c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  vec3_clear(ar4,ar5,ar6,ar7);
  uVar1 = vec3_clear(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0241c4\n.set _FUN_8c0241c4, _FUN_8c0241c4_def\n");
//@unit 8c0241e8
#include "../decls.h"
int FUN_8c0241e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x10,ar5,ar6,ar7);
  FUN_8c02421c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0241e8\n.set _FUN_8c0241e8, _FUN_8c0241e8_def\n");
//@unit 8c02421c
#include "../decls.h"
undefined4 FUN_8c02421c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  vec3_clear(ar4,ar5,ar6,ar7);
  uVar1 = vec3_clear(ar4 + 0x10,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02421c\n.set _FUN_8c02421c, _FUN_8c02421c_def\n");
//@unit 8c024240
#include "../decls.h"
undefined4 FUN_8c024240_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125988),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792a8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792a8,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125998),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792b4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792b4,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1259a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2792c0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2792c0,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1259b8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c2792cc,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c024240\n.set _FUN_8c024240, _FUN_8c024240_def\n");
//@unit 8c0242e8
#include "../decls.h"
undefined4 FUN_8c0242e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c25cddc(0x8c27c1ec,ar5,ar6,ar7,in_PR);
  _DAT_8c27d1ec = 0;
  return 0;
}

__asm__(".globl _FUN_8c0242e8\n.set _FUN_8c0242e8, _FUN_8c0242e8_def\n");
//@unit 8c02430c
#include "../decls.h"
undefined4 FUN_8c02430c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c255d6c(_DAT_8c27d1ec * 0x40 + -0x73d83e14,ar4,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c02430c\n.set _FUN_8c02430c, _FUN_8c02430c_def\n");
//@unit 8c024340
#include "../decls.h"
undefined4 FUN_8c024340_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c013fb4(ar4,*(undefined4 *)0x8c27d1ec * 0x40 + 0x8c27c1ec,0x40,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c024340\n.set _FUN_8c024340, _FUN_8c024340_def\n");
//@unit 8c024378
#include "../decls.h"
undefined4 FUN_8c024378_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c013fb4(*(undefined4 *)0x8c27d1ec * 0x40 + 0x8c27c1ec,ar4,0x40,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c024378\n.set _FUN_8c024378, _FUN_8c024378_def\n");
//@unit 8c0243b0
#include "../decls.h"
int FUN_8c0243b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c0f3e30(ar4,ar5,ar6,ar7);
  FUN_8c02d50c(ar4 + 0x4c,ar5,ar6,ar7);
  FUN_8c02ff40(ar4 + 200,ar5,ar6,ar7);
  FUN_8c036058(ar4 + 0xd8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0xe8) = 1;
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0xec) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0xec) = CONCAT44(0x3f800000,extraout_fr1);
  }
  return ar4;
}

__asm__(".globl _FUN_8c0243b0\n.set _FUN_8c0243b0, _FUN_8c0243b0_def\n");
//@unit 8c02441c
#include "../decls.h"
int FUN_8c02441c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_016ac4(ar4 + 0x38,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c02441c\n.set _FUN_8c02441c, _FUN_8c02441c_def\n");
//@unit 8c02447c
#include "../decls.h"
int FUN_8c02447c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  Vec3_set_zero(ar4,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0xc,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x18,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = 0;
    *(undefined4 *)(ar4 + 0x28) = 0x43660000;
    *(undefined4 *)(ar4 + 0xc) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x10) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x14) = 0x43b40000;
    *(undefined4 *)(ar4 + 0x18) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x1c) = 0xc3b40000;
    *(undefined4 *)(ar4 + 0x20) = 0xc3b40000;
  }
  else {
    *(ulonglong *)(ar4 + 0x24) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x28) = 0x43b4000043660000;
    *(undefined8 *)(ar4 + 0xc) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x10) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x14) = 0xc3b4000043b40000;
    *(undefined8 *)(ar4 + 0x18) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x1c) = 0x2402e000c3b40000;
    *(undefined8 *)(ar4 + 0x20) = 0x2402e000c3b40000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02447c\n.set _FUN_8c02447c, _FUN_8c02447c_def\n");
//@unit 8c024508
#include "../decls.h"
undefined4 * FUN_8c024508_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024508\n.set _FUN_8c024508, _FUN_8c024508_def\n");
//@unit 8c024518
#include "../decls.h"
undefined4 * FUN_8c024518_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024518\n.set _FUN_8c024518, _FUN_8c024518_def\n");
//@unit 8c02452c
#include "../decls.h"
undefined4 * FUN_8c02452c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  code *pcVar1;
  code *pcVar2;
  undefined4 uVar3;
  uint in_fr1;
  char cVar4;
  
  cVar4 = '\0';
  FUN_8c010120(ar4 + 8,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  FUN_8c010120(ar4 + 0x12,FUN_8c024518,free_if_nonnull_wrap_0247e0,0x14,2);
  uVar3 = 4;
  pcVar2 = free_if_nonnull_wrap_016bfc;
  pcVar1 = FUN_8c015ab8;
  FUN_8c010120(ar4 + 0x1c,FUN_8c015ab8,free_if_nonnull_wrap_016bfc,4,1);
  FUN_8c015ab8(ar4 + 0x1d,pcVar1,pcVar2,uVar3);
  FUN_8c010120(ar4 + 0x1e,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  uVar3 = 8;
  pcVar2 = free_if_nonnull_wrap_0153e4;
  pcVar1 = FUN_8c015224;
  FUN_8c010120(ar4 + 0x22,FUN_8c015224,free_if_nonnull_wrap_0153e4,8,2);
  FUN_8c015224(ar4 + 0x26,pcVar1,pcVar2,uVar3);
  FUN_8c015b94(ar4 + 0x2c,pcVar1,pcVar2,uVar3);
  Vec3_ctor_zero(ar4 + 0x36,pcVar1,pcVar2,uVar3);
  FUN_8c02447c(ar4 + 0x3e,pcVar1,pcVar2,uVar3);
  *ar4 = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  ar4[3] = 0;
  ar4[5] = 0;
  ar4[4] = 0;
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[0x28] = 0;
  ar4[0x2a] = 0;
  *(undefined2 *)(ar4 + 0x2b) = 0;
  *(undefined2 *)(ar4 + 0x29) = 0;
  ar4[0x2d] = 0;
  if (cVar4 == '\0') {
    ar4[0x2f] = 0x3f800000;
    ar4[0x2e] = 0x3f800000;
    ar4[0x30] = 0x3c23d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x2f) = CONCAT44(0x3f800000,in_fr1);
    *(ulonglong *)(ar4 + 0x2e) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x3c23d70a;
    *(undefined8 *)(ar4 + 0x30) = 0xc43c23d70a;
  }
  *(undefined2 *)(ar4 + 0x31) = 0;
  if (cVar4 == '\0') {
    ar4[0x32] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x32) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x33] = 0x3f800000;
  }
  else {
    *(ulonglong *)(ar4 + 0x33) = CONCAT44(0x3f800000,in_fr1);
  }
  if (cVar4 == '\0') {
    ar4[0x34] = 0x3f800000;
    ar4[0x35] = 0x42c80000;
  }
  else {
    *(ulonglong *)(ar4 + 0x34) = CONCAT44(0x3f800000,in_fr1);
    in_fr1 = 0x42c80000;
    *(undefined8 *)(ar4 + 0x35) = 0xe842c80000;
  }
  if (cVar4 == '\0') {
    ar4[0x3a] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x3a) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    ar4[0x3b] = 0x3f800000;
    ar4[0x3c] = 0x43160000;
    ar4[0x3d] = 0x43480000;
  }
  else {
    *(ulonglong *)(ar4 + 0x3b) = CONCAT44(0x3f800000,in_fr1);
    *(undefined8 *)(ar4 + 0x3c) = 0xf443160000;
    *(undefined8 *)(ar4 + 0x3d) = 0x4f222fe643480000;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02452c\n.set _FUN_8c02452c, _FUN_8c02452c_def\n");
//@unit 8c024758
#include "../decls.h"
int FUN_8c024758_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0x18,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0xc,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c024758\n.set _FUN_8c024758, _FUN_8c024758_def\n");
//@unit 8c0247b0
#include "../decls.h"
int free_if_nonnull_wrap_0247b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0247b0\n.set _free_if_nonnull_wrap_0247b0, _free_if_nonnull_wrap_0247b0_def\n");
//@unit 8c0247e0
#include "../decls.h"
int free_if_nonnull_wrap_0247e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0247e0\n.set _free_if_nonnull_wrap_0247e0, _free_if_nonnull_wrap_0247e0_def\n");
//@unit 8c024810
#include "../decls.h"
undefined4 * FUN_8c024810_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 1;
  ar4[1] = 1;
  ar4[2] = 1;
  return ar4;
}

__asm__(".globl _FUN_8c024810\n.set _FUN_8c024810, _FUN_8c024810_def\n");
//@unit 8c024824
#include "../decls.h"
undefined2 * FUN_8c024824_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c024810(ar4 + 2,ar5,ar6,ar7);
  *ar4 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024824\n.set _FUN_8c024824, _FUN_8c024824_def\n");
//@unit 8c024848
#include "../decls.h"
undefined4 * FUN_8c024848_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 8,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0xc,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x10,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x13,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x17,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 0x1b,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x84,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0xb8,ar5,ar6,ar7);
  ar4[6] = 0;
  ar4[7] = 0;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[3] = 0;
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  *(undefined4 *)(0x98 + (int)ar4) = 0;
  *(undefined4 *)(0x94 + (int)ar4) = 0;
  *(undefined4 *)(0x9c + (int)ar4) = 0;
  *(undefined4 *)(0xa4 + (int)ar4) = 0;
  *(undefined4 *)(0xa0 + (int)ar4) = 0;
  *(undefined4 *)(0xa8 + (int)ar4) = 0;
  *(undefined2 *)(0xac + (int)ar4) = 0;
  *(undefined4 *)(0xb0 + (int)ar4) = 0;
  *(undefined2 *)(0xb4 + (int)ar4) = 0;
  *(undefined2 *)(0xb6 + (int)ar4) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c024848\n.set _FUN_8c024848, _FUN_8c024848_def\n");
//@unit 8c024968
#include "../decls.h"
int s_GRAPHICS_COMMON_02496e_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined **ar5_00;
  undefined4 uVar4;
  char *ar6_00;
  undefined4 ar7_00;
  char cVar5;
  undefined4 in_stack_ffffffd8;
  
  cVar5 = '\0';
  _DAT_8c27d1fc = &DAT_8c12fcac;
  _DAT_8c27d200 = 300;
  _DAT_8c27d204 = &DAT_8c12fd28;
  _DAT_8c27d208 = 6;
  _DAT_8c27d20c = &DAT_8c12fd34;
  _DAT_8c27d210 = 0x10;
  _DAT_8c27d214 = &DAT_8c12fd58;
  _DAT_8c27d218 = 6;
  _DAT_8c27d21c = &DAT_8c12fd64;
  _DAT_8c27d220 = 0x10;
  _DAT_8c27d224 = &DAT_8c12fd40;
  _DAT_8c27d228 = 6;
  _DAT_8c27d22c = &DAT_8c12fd4c;
  _DAT_8c27d230 = 0x10;
  _DAT_8c27d234 = &DAT_8c12fd70;
  _DAT_8c27d238 = 8;
  _DAT_8c27d23c = &DAT_8c162858;
  _DAT_8c27d240 = 0x8c1651ec;
  _DAT_8c27d244 = &DAT_8c167b80;
  _DAT_8c27d248 = &DAT_8c16a514;
  _DAT_8c27d24c = &DAT_8c16cea8;
  _DAT_8c27d354 = 10;
  _DAT_8c27d356 = 5;
  _DAT_8c27d358 = 5;
  _DAT_8c27d35a = 5;
  _DAT_8c27d35c = 5;
  _DAT_8c27d250 = &DAT_8c16f83c;
  _DAT_8c27d254 = &DAT_8c1721d0;
  _DAT_8c27d258 = &DAT_8c174b64;
  _DAT_8c27d25c = &DAT_8c1774f8;
  _DAT_8c27d260 = &DAT_8c179e8c;
  _DAT_8c27d35e = 10;
  _DAT_8c27d360 = 5;
  _DAT_8c27d362 = 5;
  _DAT_8c27d364 = 5;
  _DAT_8c27d366 = 5;
  _DAT_8c27d264 = &DAT_8c1a0e38;
  _DAT_8c27d268 = &DAT_8c1a37cc;
  _DAT_8c27d26c = &DAT_8c1a6160;
  _DAT_8c27d270 = &DAT_8c1a0e38;
  _DAT_8c27d274 = &DAT_8c1a8af4;
  _DAT_8c27d368 = 0x1e;
  _DAT_8c27d36a = 5;
  _DAT_8c27d36c = 5;
  _DAT_8c27d36e = 5;
  _DAT_8c27d370 = 5;
  _DAT_8c27d278 = &DAT_8c1d4dc8;
  _DAT_8c27d27c = &DAT_8c1d775c;
  _DAT_8c27d280 = &DAT_8c1da0f0;
  _DAT_8c27d284 = &DAT_8c1d4dc8;
  _DAT_8c27d288 = &DAT_8c1dca84;
  _DAT_8c27d372 = 0xf;
  _DAT_8c27d374 = 5;
  _DAT_8c27d376 = 5;
  _DAT_8c27d378 = 5;
  _DAT_8c27d37a = 5;
  _DAT_8c27d28c = &DAT_8c17c820;
  _DAT_8c27d290 = &DAT_8c17c820;
  _DAT_8c27d294 = &DAT_8c17f1b4;
  _DAT_8c27d298 = &DAT_8c181b48;
  _DAT_8c27d29c = &DAT_8c1844dc;
  _DAT_8c27d37c = 10;
  _DAT_8c27d37e = 5;
  _DAT_8c27d380 = 5;
  _DAT_8c27d382 = 5;
  _DAT_8c27d384 = 5;
  _DAT_8c27d2a0 = &DAT_8c1967e8;
  _DAT_8c27d2a4 = &DAT_8c19917c;
  _DAT_8c27d2a8 = &DAT_8c19bb10;
  _DAT_8c27d2ac = &DAT_8c1967e8;
  _DAT_8c27d2b0 = &DAT_8c19e4a4;
  _DAT_8c27d386 = 0xf;
  _DAT_8c27d388 = 5;
  _DAT_8c27d38a = 5;
  _DAT_8c27d38c = 5;
  _DAT_8c27d38e = 5;
  _DAT_8c27d2b4 = &DAT_8c1c5450;
  _DAT_8c27d2b8 = &DAT_8c1ca778;
  _DAT_8c27d2bc = &DAT_8c1cd10c;
  _DAT_8c27d2c0 = &DAT_8c1cfaa0;
  _DAT_8c27d2c4 = &DAT_8c1d2434;
  _DAT_8c27d390 = 0x1e;
  _DAT_8c27d392 = 5;
  _DAT_8c27d394 = 5;
  _DAT_8c27d396 = 5;
  _DAT_8c27d398 = 5;
  _DAT_8c27d2c8 = &DAT_8c1ab488;
  _DAT_8c27d2cc = &DAT_8c1ade1c;
  _DAT_8c27d2d0 = &DAT_8c1b07b0;
  _DAT_8c27d2d4 = &DAT_8c1b3144;
  _DAT_8c27d2d8 = &DAT_8c1b5ad8;
  _DAT_8c27d39a = 10;
  _DAT_8c27d39c = 5;
  _DAT_8c27d39e = 5;
  _DAT_8c27d3a0 = 5;
  _DAT_8c27d3a2 = 5;
  _DAT_8c27d2dc = &DAT_8c1b846c;
  _DAT_8c27d2e0 = &DAT_8c1b846c;
  _DAT_8c27d2e4 = &DAT_8c1bae00;
  _DAT_8c27d2e8 = &DAT_8c1bd794;
  _DAT_8c27d2ec = &DAT_8c1c0128;
  _DAT_8c27d3a4 = 0xf;
  _DAT_8c27d3a6 = 5;
  ar7_00 = 5;
  _DAT_8c27d3a8 = 5;
  _DAT_8c27d3aa = 5;
  _DAT_8c27d3ac = 5;
  _DAT_8c27d2f0 = &DAT_8c1df418;
  _DAT_8c27d2f4 = &DAT_8c1e4740;
  _DAT_8c27d2f8 = &DAT_8c1e70d4;
  _DAT_8c27d2fc = &DAT_8c1e9a68;
  _DAT_8c27d300 = &DAT_8c1ec3fc;
  _DAT_8c27d3ae = 0xf;
  _DAT_8c27d3b0 = 5;
  _DAT_8c27d3b2 = 5;
  _DAT_8c27d3b4 = 5;
  _DAT_8c27d3b6 = 5;
  _DAT_8c27d304 = &DAT_8c189804;
  _DAT_8c27d308 = &DAT_8c18c198;
  _DAT_8c27d30c = &DAT_8c18eb2c;
  _DAT_8c27d310 = &DAT_8c1914c0;
  _DAT_8c27d3b8 = 10;
  _DAT_8c27d3ba = 8;
  _DAT_8c27d3bc = 8;
  _DAT_8c27d3be = 8;
  _DAT_8c27d314 = &DAT_8c186e70;
  _DAT_8c27d3c0 = 10;
  _DAT_8c27d318 = &DAT_8c1c2abc;
  _DAT_8c27d3c2 = 0x1e;
  _DAT_8c27d31c = &DAT_8c16a514;
  _DAT_8c27d320 = &DAT_8c162858;
  _DAT_8c27d3c4 = 3;
  _DAT_8c27d3c6 = 3;
  _DAT_8c27d324 = &DAT_8c16a514;
  _DAT_8c27d328 = &DAT_8c162858;
  _DAT_8c27d3c8 = 8;
  _DAT_8c27d3ca = 8;
  _DAT_8c27d33c = &DAT_8c1c7de4;
  _DAT_8c27d340 = &DAT_8c1c5450;
  _DAT_8c27d3d4 = 3;
  _DAT_8c27d3d6 = 3;
  _DAT_8c27d344 = &DAT_8c1c7de4;
  _DAT_8c27d348 = &DAT_8c1c5450;
  _DAT_8c27d3d8 = 8;
  _DAT_8c27d3da = 8;
  _DAT_8c27d32c = &DAT_8c1e1dac;
  _DAT_8c27d330 = &DAT_8c1df418;
  _DAT_8c27d3cc = 3;
  _DAT_8c27d3ce = 3;
  _DAT_8c27d334 = &DAT_8c1e1dac;
  _DAT_8c27d338 = &DAT_8c1df418;
  _DAT_8c27d3d0 = 8;
  _DAT_8c27d3d2 = 8;
  _DAT_8c27d34c = &DAT_8c193e54;
  _DAT_8c27d350 = &DAT_8c162858;
  _DAT_8c27d3dc = 4;
  _DAT_8c27d3de = 4;
  FUN_8c015508(0x8c27d3e0,&DAT_8c143df8,&DAT_8c27d1fc,5,in_stack_ffffffd8);
  puVar1 = _DAT_8c27d23c;
  _DAT_8c27c1e8 = (*_DAT_8c27d23c >> 0x10) + 2;
  uVar4 = 8;
  FUN_8c23c814(0x8c279308,_DAT_8c27d23c,8,ar7_00);
  iVar2 = _DAT_8c27c1e8 + -1;
  puVar3 = (uint *)((_DAT_8c27c1e8 + -1) * 4 + -0x73d86cf8);
  if (cVar5 == '\0') {
    *puVar3 = puVar1[iVar2];
  }
  else {
    *(undefined8 *)puVar3 = *(undefined8 *)(puVar1 + iVar2);
  }
  FUN_8c015508(0x8c27d3e4,&PTR_DAT_8c14442c,uVar4,ar7_00,iVar2);
  FUN_8c015ad4(0x8c27d3e8,&DAT_8c146400,uVar4,ar7_00,iVar2);
  Class_129920_m0_015248(0x8c27d3ec,&PTR_PTR_8c143e1c,uVar4,ar7_00,iVar2);
  ar5_00 = &PTR_PTR_8c1444b0;
  Class_129920_m0_015248(0x8c27d3f4,&PTR_PTR_8c1444b0,uVar4,ar7_00);
  uVar4 = get_field_4_0253e4(0x8c27d3ec,ar5_00,uVar4,ar7_00);
  ar6_00 = "GRAPHICS\\COMMON";
  iVar2 = FUN_8c020ef0(ar4,"COMMON_EYE","GRAPHICS\\COMMON",uVar4);
  if (iVar2 == 0) {
    uVar4 = 2;
    ar6_00 = (char *)0x0;
    report_error_message("Failed to load eye textuer..",&DAT_8c12fde4,0,2);
  }
  uVar4 = get_field_4_0253e4(0x8c27d3f4,0x8c27d3f4,ar6_00,uVar4);
  iVar2 = FUN_8c020ef0(ar4,"COMMON_SCSI","GRAPHICS\\COMMON",uVar4);
  if (iVar2 == 0) {
    iVar2 = report_error_message("Failed to load scsi textuer..",&DAT_8c12fde4,0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_COMMON_02496e\n.set _s_GRAPHICS_COMMON_02496e, _s_GRAPHICS_COMMON_02496e_def\n");
//@unit 8c0253e4
#include "../decls.h"
undefined4 get_field_4_0253e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_0253e4\n.set _get_field_4_0253e4, _get_field_4_0253e4_def\n");
//@unit 8c0253ec
#include "../decls.h"
int FUN_8c0253ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    object_dtor_delete(ar4 + 0xb8,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x84,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x6c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x5c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x4c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x40,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x30,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0253ec\n.set _FUN_8c0253ec, _FUN_8c0253ec_def\n");
//@unit 8c025490
#include "../decls.h"
int FUN_8c025490_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c025490\n.set _FUN_8c025490, _FUN_8c025490_def\n");
//@unit 8c0254d0
#include "../decls.h"
int FUN_8c0254d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 uVar1;
  undefined4 ar7_00;
  undefined8 *puVar2;
  undefined4 ar5_00;
  int iVar3;
  float fVar4;
  undefined8 uVar5;
  double dVar6;
  undefined8 in_xd0;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar3 = ar4;
  FUN_8c0f4040(ar4,ar5,ar6,s0,s4);
  *(undefined **)(ar4 + 8) = &DAT_8c129a88;
  uVar1 = rand(iVar3,ar5,ar6,s0);
  ar7_00 = libgcc_divide_helper_01031c(uVar1,2,ar6,s0);
  ar5_00 = 0;
  uVar1 = ar7;
  FUN_8c02b9a8(ar4 + 0x174,0,ar7,ar7_00);
  uVar1 = FUN_8c02bfd8(ar4 + 0x174,ar5_00,uVar1,ar7_00);
  iVar3 = (int)(short)uVar1;
  FUN_8c034c50(ar4 + 0x2dc,iVar3,ar7,ar7_00);
  FUN_8c02b1dc(ar4 + 0x310,iVar3,ar7,ar7_00);
  Vec3_set_zero(ar4 + 0x338,iVar3,ar7,ar7_00);
  FUN_8c024848(ar4 + 0x344,iVar3,ar7,ar7_00);
  FUN_8c023dac(ar4 + 0x480,iVar3,ar7,ar7_00);
  FUN_8c02911c(ar4,iVar3,ar7,ar7_00);
  *(undefined4 *)(ar4 + 0x328) = s8;
  *(undefined4 *)(ar4 + 0x32c) = s12;
  *(undefined4 *)(ar4 + 0x410) = s16;
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xbc);
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar2;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xb8);
  if (cVar8 == '\0') {
    uVar1 = *(undefined4 *)puVar2;
    *(undefined4 *)(ar4 + 100) = uVar1;
    *(undefined4 *)(ar4 + 0x60) = uVar1;
    *(undefined4 *)(ar4 + 0x5c) = uVar1;
  }
  else {
    uVar5 = *puVar2;
    *(undefined8 *)(ar4 + 100) = uVar5;
    *(undefined8 *)(ar4 + 0x60) = uVar5;
    *(undefined8 *)(ar4 + 0x5c) = uVar5;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xe8);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x60);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x408) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + 0xec);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar2);
  }
  else {
    in_xd0 = *puVar2;
    dVar6 = *(double *)(ar4 + 0x5c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0254d0\n.set _FUN_8c0254d0, _FUN_8c0254d0_def\n");
//@unit 8c025688
#include "../decls.h"
int CAnimal_m0_025688_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c129a88;
    free_if_nonnull_wrap_016ac4(ar4 + 0x480,0xffffffff,ar6,ar7);
    FUN_8c0253ec(ar4 + 0x344,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x338,0xffffffff,ar6,ar7);
    FUN_8c025490(ar4 + 0x310,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_034d08(ar4 + 0x2dc,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _CAnimal_m0_025688\n.set _CAnimal_m0_025688, _CAnimal_m0_025688_def\n");
//@unit 8c02573c
#include "../decls.h"
undefined4 CAnimal_m2_02573c_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  uint ar5_00;
  int ****a6_00;
  float fVar8;
  ulonglong in_dr0;
  double dVar9;
  float fVar10;
  undefined4 in_fr3;
  double dVar11;
  char cVar12;
  char cVar13;
  int ****ain0;
  undefined1 auStack_108 [16];
  undefined1 auStack_f8 [4];
  undefined8 uStack_f4;
  undefined1 auStack_ec [64];
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  int ***pppiStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint uStack_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int ***pppiStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  int iStack_28;
  int iStack_24;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar5 = ar5;
  ar7_00 = ar7;
  ain0 = ar6;
  FUN_8c030e10(auStack_3c,ar5,ar6,ar7);
  FUN_8c030e5c(&uStack_ac,uVar5,ar6,ar7_00);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00);
  a6_00 = (int ****)(int)(short)uVar2;
  FUN_8c023e44(auStack_ec,uVar5,ar6,ar7_00);
  uVar3 = FUN_8c02602c(ar5,uVar5,ar6,ar7_00);
  ar5_00 = uVar3 & 0xffff;
  iVar4 = get_field_24_026024(ar7,uVar5,ar6,ar7_00);
  if ((iVar4 != 2) && (*(int *)(ar4 + 0x48c) == 0)) {
    uVar5 = FUN_8c1011b0(*(undefined4 *)(ar5 + 0x7cc),uVar5,ar6,ar7_00);
    FUN_8c02601c(ar4 + 0x26c,uVar5 & 0xffff,ar6,ar7_00,ain0);
    uVar5 = ar5_00;
    ar6 = ar7;
    FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00);
  }
  iVar6 = FUN_8c025ff4(ar4 + 0x174,uVar5,ar6,ar7_00);
  if (iVar6 == 1) {
    FUN_8c02a6f8(ar4,uVar5,ar6,ar7_00);
  }
  uVar2 = FUN_8c025fc4(ar4 + 0x174,uVar5,ar6,ar7_00);
  if ((short)uVar2 == 1) {
    if (*(int *)(ar4 + 0x24) == 3) {
      uVar5 = 2;
      iVar6 = (*(code *)(*ar7)[0x47])(ar7,2,ar6,ar7_00);
      if (iVar6 != 0) {
        uVar5 = 0;
        FUN_8c025fbc(ar4 + 0x21c,0,ar6,ar7_00);
        goto LAB_8c02590e;
      }
    }
    uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar5,ar6,ar7_00);
    a6_00 = (int ****)(int)(short)uVar2;
    if (a6_00 != (int ****)0x0) {
      (**(code **)(*(int *)(ar4 + 8) + 0xec))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0xe0))(ar4,0x8c3eb334,a6_00,ar7_00);
      uVar5 = ar5;
      ar6 = a6_00;
      (**(code **)(**(int **)(ar4 + 0x308) + 0x18))(*(int **)(ar4 + 0x308),ar5,a6_00,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar5,ar6,ar7_00);
    }
  }
LAB_8c02590e:
  if ((ar5_00 != *(ushort *)(ar4 + 0x464)) &&
     (*(short *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar5 = (uint)*(ushort *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar6 = libgcc_divide_helper_01031c(ar5_00,uVar5,ar6,ar7_00);
    if (iVar6 == 0) {
      FUN_8c02ae38(ar4,uVar5,ar6,ar7_00);
    }
    *(short *)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(ar4 + 0x358) != 0) || (*(int *)(ar4 + 0x354) != 0)) ||
      (*(int *)(ar4 + 0x360) != 0)) || (*(int *)(ar4 + 0x35c) != 0)) {
    if (cVar13 == '\0') {
      dVar11 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar11 = *(double *)(ar4 + 0x468);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x361b5837,(float)(int)*(char *)(ar4 + 0x46c));
    }
    else {
      dVar9 = 512.0001032005592;
    }
    if (cVar12 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar13 == '\0') {
      dVar9 = (double)CONCAT44(0x40800000,fVar8);
    }
    else {
      dVar9 = 5.441987277913441e+158;
    }
    if (cVar12 == '\0') {
      fVar10 = (float)((ulonglong)dVar9 >> 0x20);
      fVar8 = SUB84(dVar9,0) * fVar10;
      dVar9 = (double)CONCAT44(fVar10,fVar8);
      dVar11 = (double)CONCAT44((float)((ulonglong)dVar11 >> 0x20) + fVar8,SUB84(dVar11,0));
    }
    else {
      dVar9 = dVar9 * dVar9;
      dVar11 = dVar11 + dVar9;
    }
    fVar8 = SUB84(dVar9,0);
    if (cVar13 == '\0') {
      *(int *)(ar4 + 0x468) = (int)((ulonglong)dVar11 >> 0x20);
      fVar8 = *(float *)(ar4 + 0x468);
    }
    else {
      *(double *)(ar4 + 0x468) = dVar11;
    }
    if (cVar12 != '\0' || fVar8 <= 1.0) {
      if (cVar13 == '\0') {
        fVar8 = *(float *)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar8;
      if (cVar12 == '\0' && fVar8 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar8;
        if (cVar13 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar8);
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    iStack_58 = ar4 + 0x174;
    uStack_54 = *(undefined4 *)(ar4 + 0x30c);
    uStack_50 = *(undefined4 *)(ar4 + 0x308);
    iStack_48 = ar4 + 0x2dc;
    pppiStack_60 = (int ***)ar7;
    iStack_5c = ar4;
    pppiStack_44 = (int ***)ain0;
    uStack_40 = ar5;
    uStack_4c = (*(code *)(*ar7)[0x52])(ar7,uVar5,ar6,ar7_00);
    uVar5 = FUN_8c02602c(ar5,uVar5,ar6,ar7_00);
    ar6 = &pppiStack_60;
    uVar5 = uVar5 & 0xffff;
    FUN_8c034d48(ar4 + 0x2dc,uVar5,ar6,ar7_00);
  }
  iStack_78 = ar4 + 0x174;
  uStack_74 = *(undefined4 *)(ar4 + 0x30c);
  iStack_7c = ar4;
  pppiStack_68 = (int ***)ain0;
  uStack_64 = ar5;
  uStack_70 = (*(code *)(*ar7)[0x52])(ar7,uVar5,ar6,ar7_00);
  iStack_6c = ar4 + 0x2dc;
  (**(code **)(**(int **)(ar4 + 0x308) + 0xc))(*(int **)(ar4 + 0x308),ar7,&iStack_7c,ar7_00);
  (*(uint*)((uchar*)&uStack_30+4)) = ar4 + 0x30;
  iStack_28 = ar4 + 0x50;
  iStack_24 = ar4 + 0x5c;
  a7 = auStack_34;
  a6 = auStack_38;
  a5 = auStack_3c;
  (*(code *)(*ar7)[0x48])(ar7,a5,a6,a7);
  (*(code *)(*ar7)[0x61])(ar7,a5,a6,a7);
  uVar1 = in_dr0;
  if (cVar13 == '\0') {
    uStack_30 = CONCAT44((*(uint*)((uchar*)&uStack_30+4)),(int)(in_dr0 >> 0x20));
    uVar1 = uStack_30;
  }
  uStack_30 = uVar1;
  uStack_ac = *(undefined4 *)(ar4 + 0x308);
  iStack_a8 = (int)&uStack_30 + 4;
  uStack_a4 = get_field_140_025f70(ar4 + 0x174,a5,a6,a7);
  puStack_90 = auStack_3c;
  if (cVar13 == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + 0x408);
    uStack_88 = *(undefined4 *)(ar4 + 0x40c);
  }
  else {
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x408);
    uStack_88 = (undefined4)*(undefined8 *)(ar4 + 0x40c);
    uStack_84 = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x40c) >> 0x20);
  }
  uStack_84 = CONCAT31((*(uint*)((uchar*)&uStack_84+1)),1);
  iStack_9c = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  pppiStack_94 = (int ***)ar7;
  FUN_8c10277c(auStack_f8,a5,a6,a7);
  iVar4 = get_field_24_026024(ar7,a5,a6,a7);
  if (iVar4 == 0) {
    if (cVar13 == '\0') {
      uStack_f4 = CONCAT44((*(uint*)((uchar*)&uStack_f4+4)),(int)uStack_30);
    }
    else {
      uStack_f4 = uStack_30;
    }
  }
  puStack_a0 = auStack_f8;
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,a5,a6,a7);
  uStack_80 = (uint)((char)uVar2 != '\0');
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0xc))(*(int **)(ar4 + 0x30c),a5_00,a6,a7);
  FUN_8c025f44(*(undefined4 *)(ar4 + 0x30c),a5_00,a6,a7,auStack_108);
  FUN_8c023aa0(ar4 + 0x30,auStack_108,a6,a7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_108,0xffffffff,a6,a7);
  FUN_8c023e7c(auStack_ec,uVar2,a6,a7);
  FUN_8c023f70(auStack_ec,uVar2,a6,a7);
  FUN_8c023fdc(auStack_ec,uVar2,a6,a7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar2,a6,a7);
  iVar6 = *(int *)(ar4 + 0x328) + (short)uVar2 * 0x124 + 0xd8;
  iVar4 = ar4 + 0x3c8;
  FUN_8c024010(auStack_ec,iVar4,iVar6,a7);
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,iVar4,iVar6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,iVar4,iVar6,a7);
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,iVar4,iVar6,a7);
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(ar4 + 0x45c) + -1;
    *(int *)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar7 = *(int *)(ar4 + 0x45c);
    *(int *)(ar4 + 0x45c) = iVar7 + 1;
    if (0x707 < iVar7 + 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar7 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,iVar4,iVar6,a7);
  if (iVar7 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,iVar4,iVar6,a7);
  }
  *(undefined4 *)(ar4 + 0x48c) = 0;
  free_if_nonnull_wrap_102790(auStack_f8,0xffffffff,iVar6,a7);
  free_if_nonnull_wrap_023e4c(auStack_ec,0xffffffff,iVar6,a7);
  FUN_8c026038(auStack_3c,0xffffffff,iVar6,a7);
  return 1;
}

__asm__(".globl _CAnimal_m2_02573c\n.set _CAnimal_m2_02573c, _CAnimal_m2_02573c_def\n");
//@unit 8c025f44
#include "../decls.h"
undefined4 FUN_8c025f44_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c025f44\n.set _FUN_8c025f44, _FUN_8c025f44_def\n");
//@unit 8c025f68
#include "../decls.h"
int FUN_8c025f68_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}

__asm__(".globl _FUN_8c025f68\n.set _FUN_8c025f68, _FUN_8c025f68_def\n");
//@unit 8c025f70
#include "../decls.h"
undefined4 get_field_140_025f70_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x140 + ar4);
}

__asm__(".globl _get_field_140_025f70\n.set _get_field_140_025f70, _get_field_140_025f70_def\n");
//@unit 8c025f7c
#include "../decls.h"
undefined4 FUN_8c025f7c_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0xba8);
  *ar6 = *(undefined4 *)(ar4 + 0xbac);
  *ar7 = *(undefined4 *)(ar4 + 0xbb0);
  return 0xbb0;
}

__asm__(".globl _FUN_8c025f7c\n.set _FUN_8c025f7c, _FUN_8c025f7c_def\n");
//@unit 8c025fa8
#include "../decls.h"
int FUN_8c025fa8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0xf4c;
}

__asm__(".globl _FUN_8c025fa8\n.set _FUN_8c025fa8, _FUN_8c025fa8_def\n");
//@unit 8c025fb8
#include "../decls.h"
undefined4 noop_025fb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_025fb8\n.set _noop_025fb8, _noop_025fb8_def\n");
//@unit 8c025fbc
#include "../decls.h"
undefined4 FUN_8c025fbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 0x16) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c025fbc\n.set _FUN_8c025fbc, _FUN_8c025fbc_def\n");
//@unit 8c025fc4
#include "../decls.h"
int FUN_8c025fc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c025fec(ar4 + 0xa8,ar5,ar6,ar7);
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c025fc4\n.set _FUN_8c025fc4, _FUN_8c025fc4_def\n");
//@unit 8c025fec
#include "../decls.h"
int FUN_8c025fec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x1e);
}

__asm__(".globl _FUN_8c025fec\n.set _FUN_8c025fec, _FUN_8c025fec_def\n");
//@unit 8c025ff4
#include "../decls.h"
undefined4 FUN_8c025ff4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02db04(ar4 + 0xa8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c025ff4\n.set _FUN_8c025ff4, _FUN_8c025ff4_def\n");
//@unit 8c02601c
#include "../decls.h"
undefined4 FUN_8c02601c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02601c\n.set _FUN_8c02601c, _FUN_8c02601c_def\n");
//@unit 8c026024
#include "../decls.h"
undefined4 get_field_24_026024_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x24);
}

__asm__(".globl _get_field_24_026024\n.set _get_field_24_026024, _get_field_24_026024_def\n");
//@unit 8c02602c
#include "../decls.h"
int FUN_8c02602c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(0xa4 + ar4);
}

__asm__(".globl _FUN_8c02602c\n.set _FUN_8c02602c, _FUN_8c02602c_def\n");
//@unit 8c026038
#include "../decls.h"
int FUN_8c026038_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_102790(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c026038\n.set _FUN_8c026038, _FUN_8c026038_def\n");
//@unit 8c026078
#include "../decls.h"
undefined4 CAnimal_m3_026078_def(int ar4,uint ar5,int ****ar6,int ****ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint ar5_00;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined1 *a5;
  undefined4 *a5_00;
  undefined4 a5_01;
  int ****ar6_00;
  undefined1 *a6;
  int ****ar7_00;
  undefined1 *a7;
  int ****a6_00;
  float fVar7;
  ulonglong in_dr0;
  double dVar8;
  float fVar9;
  undefined4 in_fr3;
  double dVar10;
  char cVar11;
  char cVar12;
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [4];
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  undefined1 *puStack_a0;
  int iStack_9c;
  int ***pppiStack_94;
  undefined1 *puStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint uStack_84;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int iStack_6c;
  int ***pppiStack_68;
  uint uStack_64;
  int ***pppiStack_60;
  int iStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  int iStack_48;
  int ***pppiStack_44;
  uint uStack_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined8 uStack_30;
  int iStack_28;
  int iStack_24;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c030e10(auStack_3c,ar5,ar6,ar7);
  FUN_8c030e5c(&uStack_ac,uVar6,ar6_00,ar7_00);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  a6_00 = (int ****)(int)(short)uVar2;
  uVar3 = FUN_8c02602c(ar5,uVar6,ar6_00,ar7_00);
  ar5_00 = uVar3 & 0xffff;
  iVar4 = get_field_24_026024(ar7,uVar6,ar6_00,ar7_00);
  if ((iVar4 != 2) && (*(int *)(ar4 + 0x48c) == 0)) {
    uVar6 = ar5_00;
    ar6_00 = ar7;
    FUN_8c02c030(ar4 + 0x174,ar5_00,ar7,ar7_00);
  }
  iVar5 = FUN_8c025ff4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if (iVar5 == 1) {
    FUN_8c02a6f8(ar4,uVar6,ar6_00,ar7_00);
  }
  uVar2 = FUN_8c025fc4(ar4 + 0x174,uVar6,ar6_00,ar7_00);
  if ((short)uVar2 == 1) {
    uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar6,ar6_00,ar7_00);
    a6_00 = (int ****)(int)(short)uVar2;
    if (a6_00 != (int ****)0x0) {
      (**(code **)(*(int *)(ar4 + 8) + 0xec))(ar4,0x8c3eb334,(int)a6_00 + -1,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0xe0))(ar4,0x8c3eb334,a6_00,ar7_00);
      uVar6 = ar5;
      ar6_00 = a6_00;
      (**(code **)(**(int **)(ar4 + 0x308) + 0x18))(*(int **)(ar4 + 0x308),ar5,a6_00,ar7_00);
      (**(code **)(*(int *)(ar4 + 8) + 0x5c))(ar4,uVar6,ar6_00,ar7_00);
    }
  }
  if ((ar5_00 != *(ushort *)(ar4 + 0x464)) &&
     (*(short *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4) != 0)) {
    uVar6 = (uint)*(ushort *)(*(int *)(ar4 + 0x328) + (int)a6_00 * 0x124 + 0xc4);
    iVar5 = libgcc_divide_helper_01031c(ar5_00,uVar6,ar6_00,ar7_00);
    if (iVar5 == 0) {
      FUN_8c02ae38(ar4,uVar6,ar6_00,ar7_00);
    }
    *(short *)(ar4 + 0x464) = (short)uVar3;
  }
  if ((((*(int *)(ar4 + 0x358) != 0) || (*(int *)(ar4 + 0x354) != 0)) ||
      (*(int *)(ar4 + 0x360) != 0)) || (*(int *)(ar4 + 0x35c) != 0)) {
    if (cVar12 == '\0') {
      dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x468),in_fr3);
    }
    else {
      dVar10 = *(double *)(ar4 + 0x468);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x361b5837,(float)(int)*(char *)(ar4 + 0x46c));
    }
    else {
      dVar8 = 512.0001032005592;
    }
    if (cVar11 == '\0') {
      fVar7 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar7 = SUB84(dVar8 * dVar8,0);
    }
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(0x40800000,fVar7);
    }
    else {
      dVar8 = 5.442117166052762e+158;
    }
    if (cVar11 == '\0') {
      fVar9 = (float)((ulonglong)dVar8 >> 0x20);
      fVar7 = SUB84(dVar8,0) * fVar9;
      dVar8 = (double)CONCAT44(fVar9,fVar7);
      dVar10 = (double)CONCAT44((float)((ulonglong)dVar10 >> 0x20) + fVar7,SUB84(dVar10,0));
    }
    else {
      dVar8 = dVar8 * dVar8;
      dVar10 = dVar10 + dVar8;
    }
    fVar7 = SUB84(dVar8,0);
    if (cVar12 == '\0') {
      *(int *)(ar4 + 0x468) = (int)((ulonglong)dVar10 >> 0x20);
      fVar7 = *(float *)(ar4 + 0x468);
    }
    else {
      *(double *)(ar4 + 0x468) = dVar10;
    }
    if (cVar11 != '\0' || fVar7 <= 1.0) {
      if (cVar12 == '\0') {
        fVar7 = *(float *)(ar4 + 0x468);
      }
      in_dr0 = (ulonglong)(uint)fVar7;
      if (cVar11 == '\0' && fVar7 < 0.0) {
        in_dr0 = (ulonglong)(uint)fVar7;
        if (cVar12 == '\0') {
          *(undefined4 *)(ar4 + 0x468) = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x468) = in_dr0;
        }
      }
    }
    else {
      in_dr0 = CONCAT44(0x3f800000,fVar7);
      if (cVar12 == '\0') {
        *(undefined4 *)(ar4 + 0x468) = 0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x468) = in_dr0;
      }
    }
  }
  if (iVar4 != 2) {
    iStack_58 = ar4 + 0x174;
    uStack_54 = *(undefined4 *)(ar4 + 0x30c);
    uStack_50 = *(undefined4 *)(ar4 + 0x308);
    iStack_48 = ar4 + 0x2dc;
    pppiStack_60 = (int ***)ar7;
    iStack_5c = ar4;
    pppiStack_44 = (int ***)ar6;
    uStack_40 = ar5;
    uStack_4c = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
    uVar2 = 1;
    FUN_8c0266d4(ar4 + 0x2dc,1,ar6_00,ar7_00);
    uVar6 = FUN_8c02602c(ar5,uVar2,ar6_00,ar7_00);
    ar6_00 = &pppiStack_60;
    uVar6 = uVar6 & 0xffff;
    FUN_8c034d48(ar4 + 0x2dc,uVar6,ar6_00,ar7_00);
  }
  iStack_78 = ar4 + 0x174;
  uStack_74 = *(undefined4 *)(ar4 + 0x30c);
  iStack_7c = ar4;
  pppiStack_68 = (int ***)ar6;
  uStack_64 = ar5;
  uStack_70 = (*(code *)(*ar7)[0x52])(ar7,uVar6,ar6_00,ar7_00);
  iStack_6c = ar4 + 0x2dc;
  (**(code **)(**(int **)(ar4 + 0x308) + 0x10))(*(int **)(ar4 + 0x308),ar7,&iStack_7c,ar7_00);
  (*(uint*)((uchar*)&uStack_30+4)) = ar4 + 0x30;
  iStack_28 = ar4 + 0x50;
  iStack_24 = ar4 + 0x5c;
  a7 = auStack_34;
  a6 = auStack_38;
  a5 = auStack_3c;
  (*(code *)(*ar7)[0x48])(ar7,a5,a6,a7);
  (*(code *)(*ar7)[0x61])(ar7,a5,a6,a7);
  uVar1 = in_dr0;
  if (cVar12 == '\0') {
    uStack_30 = CONCAT44((*(uint*)((uchar*)&uStack_30+4)),(int)(in_dr0 >> 0x20));
    uVar1 = uStack_30;
  }
  uStack_30 = uVar1;
  uStack_ac = *(undefined4 *)(ar4 + 0x308);
  iStack_a8 = (int)&uStack_30 + 4;
  uStack_a4 = get_field_140_025f70(ar4 + 0x174,a5,a6,a7);
  puStack_90 = auStack_3c;
  if (cVar12 == '\0') {
    uStack_8c = *(undefined4 *)(ar4 + 0x408);
    uStack_88 = *(undefined4 *)(ar4 + 0x40c);
  }
  else {
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x408);
    uStack_88 = (undefined4)*(undefined8 *)(ar4 + 0x40c);
    uStack_84 = (uint)((ulonglong)*(undefined8 *)(ar4 + 0x40c) >> 0x20);
  }
  uStack_84 = uStack_84 & 0xffffff00;
  iStack_9c = ((*(uint *)(ar4 + 0x74) & 0x70) >> 4) - 1;
  pppiStack_94 = (int ***)ar7;
  FUN_8c10277c(auStack_b8,a5,a6,a7);
  iVar4 = get_field_24_026024(ar7,a5,a6,a7);
  if (iVar4 == 0) {
    if (cVar12 == '\0') {
      uStack_b4 = CONCAT44((*(uint*)((uchar*)&uStack_b4+4)),(int)uStack_30);
    }
    else {
      uStack_b4 = uStack_30;
    }
  }
  puStack_a0 = auStack_b8;
  a5_00 = &uStack_ac;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0xc))(*(int **)(ar4 + 0x30c),a5_00,a6,a7);
  FUN_8c025f44(*(undefined4 *)(ar4 + 0x30c),a5_00,a6,a7,auStack_c8);
  FUN_8c023aa0(ar4 + 0x30,auStack_c8,a6,a7);
  a5_01 = 0xffffffff;
  Vec3_dtor(auStack_c8,0xffffffff,a6,a7);
  (**(code **)(*(int *)(ar4 + 8) + 0xf8))(ar4,a5_01,a6,a7);
  FUN_8c0f79b8(ar4 + 0xa0,a5_01,a6,a7);
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,a5_01,a6,a7);
  if ((char)uVar2 == '\0') {
    iVar4 = *(int *)(ar4 + 0x45c) + -1;
    *(int *)(ar4 + 0x45c) = iVar4;
    if (iVar4 < 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0;
    }
  }
  else {
    iVar4 = *(int *)(ar4 + 0x45c);
    *(int *)(ar4 + 0x45c) = iVar4 + 1;
    if (0x707 < iVar4 + 1) {
      *(undefined4 *)(ar4 + 0x45c) = 0x708;
    }
  }
  iVar4 = (**(code **)(*(int *)(ar4 + 8) + 0xb4))(ar4,a5_01,a6,a7);
  if (iVar4 == 0) {
    (**(code **)(*(int *)(ar4 + 8) + 0x4c))(ar4,a5_01,a6,a7);
  }
  *(undefined4 *)(ar4 + 0x48c) = 0;
  free_if_nonnull_wrap_102790(auStack_b8,0xffffffff,a6,a7);
  FUN_8c026038(auStack_3c,0xffffffff,a6,a7);
  return 1;
}

__asm__(".globl _CAnimal_m3_026078\n.set _CAnimal_m3_026078, _CAnimal_m3_026078_def\n");
//@unit 8c0266d4
#include "../decls.h"
undefined4 FUN_8c0266d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 2) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c0266d4\n.set _FUN_8c0266d4, _FUN_8c0266d4_def\n");
//@unit 8c0266dc
#include "../decls.h"
undefined4 CAnimal_m4_0266dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  uVar1 = ar6;
  (**(code **)(**(int **)(0x308 + ar4) + 0x14))(*(int **)(0x308 + ar4),ar6,ar6,ar7);
  (**(code **)(**(int **)(0x30c + ar4) + 0x1c))(*(int **)(0x30c + ar4),ar6,uVar1,ar7);
  FUN_8c02a788(ar4,ar6,uVar1,ar7);
  uVar1 = FUN_8c02aabc(ar4,ar6,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m4_0266dc\n.set _CAnimal_m4_0266dc, _CAnimal_m4_0266dc_def\n");
//@unit 8c026774
#include "../decls.h"
undefined4 CAnimal_m5_026774_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  *(undefined4 *)(ar4 + 0x70) = 0;
  (**(code **)(**(int **)(0x30c + ar4) + 0x14))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  FUN_8c02a788(ar4,ar5,ar6,ar7);
  uVar1 = FUN_8c02aabc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimal_m5_026774\n.set _CAnimal_m5_026774, _CAnimal_m5_026774_def\n");
//@unit 8c026834
#include "../decls.h"
undefined4
CAnimBody_AdvanceFrame_wrapper_wrap_026834_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper_wrap_026834\n.set _CAnimBody_AdvanceFrame_wrapper_wrap_026834, _CAnimBody_AdvanceFrame_wrapper_wrap_026834_def\n");
//@unit 8c026858
#include "../decls.h"
undefined4
CAnimBody_AdvanceFrame_wrapper_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = s_CAnimBody_AdvanceFrame_033ba0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _CAnimBody_AdvanceFrame_wrapper\n.set _CAnimBody_AdvanceFrame_wrapper, _CAnimBody_AdvanceFrame_wrapper_def\n");
//@unit 8c026880
#include "../decls.h"
undefined4 s_CAnimal_RunIncubator_026882_def(int ar4,undefined *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  FUN_8c02c398(ar4 + 0x174,ar5,ar6,ar7);
  if (*(int *)(0x30c + ar4) == 0) {
    ar7 = 2;
    ar6 = 1;
    ar5 = (&DATA_8c12fdac) + 0x73;
    report_error_message((&DATA_8c12fdac) + 99,ar5,1,2);
  }
  else {
    (**(code **)(**(int **)(0x30c + ar4) + 0x14))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  }
  uVar1 = FUN_8c02aabc(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_CAnimal_RunIncubator_026882\n.set _s_CAnimal_RunIncubator_026882, _s_CAnimal_RunIncubator_026882_def\n");
//@unit 8c026968
#include "../decls.h"
int FUN_8c026968_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  undefined4 in_stack_ffffff24;
  undefined2 uVar15;
  undefined4 uStack_b0;
  undefined4 uStack_94;
  undefined1 auStack_8c [64];
  undefined1 auStack_4c [68];
  
  uVar15 = (undefined2)((uint)in_stack_ffffff24 >> 0x10);
  cVar14 = '\0';
  cVar13 = '\0';
  FUN_8c233dac(ar4 + 0x438,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar6 = CONCAT22(uVar15,(short)uVar1);
  iVar7 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c25cddc(auStack_4c,ar5,ar6,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,ar5,ar6,ar7,uVar6);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  uVar1 = 0x40;
  iVar4 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar4,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c25b5d0(auStack_8c,iVar4,uVar1,ar7,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,uVar1,ar7,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,uVar1,ar7,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar12 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar12 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(auStack_8c,iVar12,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25cddc(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c256fec(auStack_8c,puVar5,iVar11,iVar4,uVar6);
  puVar5 = auStack_8c;
  FUN_8c255d6c(auStack_4c,puVar5,iVar11,iVar4,uVar6);
  FUN_8c024378(auStack_4c,puVar5,iVar11,iVar4);
  FUN_8c256328(0,puVar5,iVar11,iVar4,uVar6);
  FUN_8c25b5d0(0,puVar5,iVar11,iVar4,uVar6);
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar4 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar4 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    iVar11 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar9 / dVar9);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar13 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar14 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = -3.739346301775294e-250;
  }
  if (cVar13 == '\0') {
    fVar10 = (float)((ulonglong)dVar9 >> 0x20);
    fVar8 = SUB84(dVar9,0) / fVar10;
    dVar9 = (double)CONCAT44(fVar10,fVar8);
    iVar12 = (int)fVar8;
  }
  else {
    dVar9 = dVar9 / dVar9;
    iVar12 = (int)dVar9;
  }
  uStack_b0 = (undefined4)((ulonglong)dVar9 >> 0x20);
  FUN_8c256b0c(0,iVar12,iVar11,iVar4,uVar6);
  FUN_8c256fec(0,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uVar1 = deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  uStack_94 = uStack_b0;
  if (cVar14 == '\0') {
    uStack_94 = uVar1;
  }
  FUN_8c2540a0(uStack_94,iVar12,iVar11,iVar4,uVar6);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar7 + 0xa0) + iVar2 * 4,iVar12,iVar11,iVar4);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
  iVar2 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,iVar12,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c029510(ar4,uVar1,0,iVar4);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    uVar1 = FUN_8c026d74(*(int *)(iVar7 + 0xa8) + iVar2 * 4,iVar12,iVar11,iVar4);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),iVar12,iVar11,iVar4);
    if (cVar14 == '\0') {
      uStack_b0 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_b0,0x29,iVar11,iVar4,uVar6);
    uVar1 = FUN_8c015bb8(iVar7 + 0x70,uVar1,iVar11,iVar4);
    uVar6 = 0;
    FUN_8c0297b8(ar4,uVar1,0,iVar4);
  }
  FUN_8c256210(1,uVar1,uVar6,iVar4);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  FUN_8c233dac(&DAT_8c12fd7c,uVar1,uVar6,iVar4);
  iVar7 = *(int *)(ar4 + 0x474);
  if (iVar7 == 1) {
    iVar7 = FUN_8c02b058(ar4,uVar1,uVar6,iVar4);
  }
  return iVar7;
}

__asm__(".globl _FUN_8c026968\n.set _FUN_8c026968, _FUN_8c026968_def\n");
//@unit 8c026d74
#include "../decls.h"
undefined4 FUN_8c026d74_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c026d74\n.set _FUN_8c026d74, _FUN_8c026d74_def\n");
//@unit 8c026d7c
#include "../decls.h"
undefined4 FUN_8c026d7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  CAnimBody_GetCurFrame(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return 4;
}

__asm__(".globl _FUN_8c026d7c\n.set _FUN_8c026d7c, _FUN_8c026d7c_def\n");
//@unit 8c026da8
#include "../decls.h"
undefined4 CAnimBody_GetCurFrame_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _CAnimBody_GetCurFrame\n.set _CAnimBody_GetCurFrame, _CAnimBody_GetCurFrame_def\n");
//@unit 8c026db0
#include "../decls.h"
undefined4 FUN_8c026db0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_1c_026dd8(ar4 + 0xb0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c026db0\n.set _FUN_8c026db0, _FUN_8c026db0_def\n");
//@unit 8c026dd8
#include "../decls.h"
undefined4 get_field_1c_026dd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x1c);
}

__asm__(".globl _get_field_1c_026dd8\n.set _get_field_1c_026dd8, _get_field_1c_026dd8_def\n");
//@unit 8c026de0
#include "../decls.h"
undefined4 FUN_8c026de0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 extraout_fr0;
  undefined4 extraout_fr0_00;
  char cVar5;
  undefined4 in_stack_ffffffac;
  undefined2 uVar6;
  undefined4 ain0;
  undefined4 uStack_30;
  undefined4 uStack_14;
  
  uVar6 = (undefined2)((uint)in_stack_ffffffac >> 0x10);
  cVar5 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar6,(short)uVar1);
  iVar4 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5,ar6,ar7);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uVar1 = deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  uStack_14 = extraout_fr0;
  if (cVar5 == '\0') {
    uStack_14 = uVar1;
  }
  FUN_8c2540a0(uStack_14,ar5,ar6,ar7,ain0);
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  puVar3 = (undefined4 *)deref_u32(*(int *)(iVar4 + 0xa0) + iVar2 * 4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x434) = *puVar3;
  iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
  iVar2 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
  if (iVar2 == 0) {
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,ar5,ar6,ar7);
    uVar1 = FUN_8c029510(ar4,uVar1,0,ar7);
  }
  else {
    iVar2 = FUN_8c026db0(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uVar1 = FUN_8c026d74(*(int *)(iVar4 + 0xa8) + iVar2 * 4,ar5,ar6,ar7);
    FUN_8c026d7c(*(undefined4 *)(ar4 + 0x30c),ar5,ar6,ar7);
    uStack_30 = extraout_fr0_00;
    if (cVar5 == '\0') {
      uStack_30 = uVar1;
    }
    uVar1 = 0x29;
    FUN_8c21f200(uStack_30,0x29,ar6,ar7,ain0);
    uVar1 = FUN_8c015bb8(iVar4 + 0x70,uVar1,ar6,ar7);
    uVar1 = FUN_8c0297b8(ar4,uVar1,0,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c026de0\n.set _FUN_8c026de0, _FUN_8c026de0_def\n");
//@unit 8c026f7c
#include "../decls.h"
int FUN_8c026f7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  puVar2 = (undefined4 *)
           (*(code *)(&FUN_8c015510))
                     (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) +
                      0x1e4,ar5,ar6,ar7);
  *puVar2 = *(undefined4 *)
             (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) + 0x40);
  iVar3 = *(int *)(0x344 + ar4);
  *(undefined4 **)(iVar3 + 4) = puVar2;
  return iVar3;
}

__asm__(".globl _FUN_8c026f7c\n.set _FUN_8c026f7c, _FUN_8c026f7c_def\n");
//@unit 8c02702c
#include "../decls.h"
undefined4 FUN_8c02702c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  int a5;
  undefined4 a5_00;
  int ar6_00;
  int iVar4;
  float fVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 in_xd0;
  char cVar9;
  char cVar10;
  undefined4 in_stack_ffffffc8;
  undefined2 uVar11;
  undefined4 uVar8;
  
  uVar11 = (undefined2)((uint)in_stack_ffffffc8 >> 0x10);
  cVar10 = '\0';
  cVar9 = '\0';
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  uVar8 = CONCAT22(uVar11,sVar1);
  iVar4 = *(int *)(ar4 + 0x328) + sVar1 * 0x124;
  uVar2 = *(undefined4 *)(iVar4 + 0xa8);
  ar6_00 = (int)*(short *)(iVar4 + 0xa4);
  FUN_8c027234(*(undefined4 *)(ar4 + 0x30c),*(undefined4 *)(iVar4 + 0xa0),ar6_00,uVar2);
  if ((*(uint *)(ar4 + 0x74) & 0x70) == 0x20) {
    FUN_8c02722c(*(undefined4 *)(ar4 + 0x30c),1,ar6_00,uVar2);
  }
  a5 = (int)sVar1;
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x20))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  (**(code **)(**(int **)(ar4 + 0x30c) + 0x2c))(*(int **)(ar4 + 0x30c),a5,ar6_00,uVar2);
  *(undefined4 *)(ar4 + 0xa0) = *(undefined4 *)(iVar4 + 0xb4);
  a5_00 = *(undefined4 *)(ar4 + 0xa0);
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x24))(*(int **)(ar4 + 0xa4),a5_00,ar6_00,uVar2);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),a5_00,ar6_00,uVar2,uVar8);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,ar6_00,uVar2);
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xbc);
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x170) = *(undefined4 *)puVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x170) = *puVar3;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xb8);
  if (cVar10 == '\0') {
    uVar8 = *(undefined4 *)puVar3;
    *(undefined4 *)(ar4 + 100) = uVar8;
    *(undefined4 *)(ar4 + 0x60) = uVar8;
    *(undefined4 *)(ar4 + 0x5c) = uVar8;
  }
  else {
    uVar6 = *puVar3;
    *(undefined8 *)(ar4 + 100) = uVar6;
    *(undefined8 *)(ar4 + 0x60) = uVar6;
    *(undefined8 *)(ar4 + 0x5c) = uVar6;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xe8);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x5c);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x408) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  puVar3 = (undefined8 *)(*(int *)(ar4 + 0x328) + sVar1 * 0x124 + 0xec);
  if (cVar10 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)puVar3);
  }
  else {
    in_xd0 = *puVar3;
    dVar7 = *(double *)(ar4 + 0x60);
  }
  if (cVar9 == '\0') {
    fVar5 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar5 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar10 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar5;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x478),ar6_00,uVar2);
  return uVar2;
}

__asm__(".globl _FUN_8c02702c\n.set _FUN_8c02702c, _FUN_8c02702c_def\n");
//@unit 8c027224
#include "../decls.h"
undefined4 FUN_8c027224_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _FUN_8c027224\n.set _FUN_8c027224, _FUN_8c027224_def\n");
//@unit 8c02722c
#include "../decls.h"
undefined4 FUN_8c02722c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = ar5;
  return 100;
}

__asm__(".globl _FUN_8c02722c\n.set _FUN_8c02722c, _FUN_8c02722c_def\n");
//@unit 8c027234
#include "../decls.h"
undefined4 FUN_8c027234_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027264(ar4 + 0xb0,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c027234\n.set _FUN_8c027234, _FUN_8c027234_def\n");
//@unit 8c027264
#include "../decls.h"
undefined4 FUN_8c027264_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x14) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  *(undefined4 *)(ar4 + 0x18) = ar7;
  return in_r0;
}

__asm__(".globl _FUN_8c027264\n.set _FUN_8c027264, _FUN_8c027264_def\n");
//@unit 8c027270
#include "../decls.h"
undefined4 FUN_8c027270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  undefined4 uVar2;
  
  uVar2 = 1;
  FUN_8c027388(ar4 + 0x174,1,ar6,ar7);
  uVar1 = get_field_138_02737c(ar4 + 0x174,uVar2,ar6,ar7);
  uVar2 = FUN_8c02bef8(ar4 + 0x174,uVar2,ar6,ar7);
  ar6_00 = (int)(short)uVar2;
  uVar1 = FUN_8c02775c(ar4,uVar1,ar6_00,ar7);
  uVar1 = FUN_8c0fa388(0x8c35468c,uVar1,ar6_00,ar7);
  FUN_8c027374(ar4 + 0x21c,uVar1,ar6_00,ar7);
  uVar1 = FUN_8c027364(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7);
  FUN_8c02735c(ar4 + 0x21c,uVar1,ar6_00,ar7);
  uVar1 = 1;
  FUN_8c027354(ar4 + 0x2dc,1,ar6_00,ar7);
  uVar1 = FUN_8c027344(*(undefined4 *)(0x308 + ar4),uVar1,ar6_00,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027270\n.set _FUN_8c027270, _FUN_8c027270_def\n");
//@unit 8c027344
#include "../decls.h"
int FUN_8c027344_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x9b;
  *(undefined1 *)(0x9b + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c027344\n.set _FUN_8c027344, _FUN_8c027344_def\n");
//@unit 8c027354
#include "../decls.h"
undefined4 FUN_8c027354_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x28) = (undefined1)ar5;
  return 0x28;
}

__asm__(".globl _FUN_8c027354\n.set _FUN_8c027354, _FUN_8c027354_def\n");
//@unit 8c02735c
#include "../decls.h"
undefined4 FUN_8c02735c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x40) = (undefined1)ar5;
  return 0x40;
}

__asm__(".globl _FUN_8c02735c\n.set _FUN_8c02735c, _FUN_8c02735c_def\n");
//@unit 8c027364
#include "../decls.h"
int FUN_8c027364_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(0x99 + ar4);
}

__asm__(".globl _FUN_8c027364\n.set _FUN_8c027364, _FUN_8c027364_def\n");
//@unit 8c027374
#include "../decls.h"
undefined4 FUN_8c027374_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x44) = ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c027374\n.set _FUN_8c027374, _FUN_8c027374_def\n");
//@unit 8c02737c
#include "../decls.h"
undefined4 get_field_138_02737c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x138 + ar4);
}

__asm__(".globl _get_field_138_02737c\n.set _get_field_138_02737c, _get_field_138_02737c_def\n");
//@unit 8c027388
#include "../decls.h"
int FUN_8c027388_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(0x144 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027388\n.set _FUN_8c027388, _FUN_8c027388_def\n");
//@unit 8c027394
#include "../decls.h"
undefined4 FUN_8c027394_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c0f4c0c(ar4,ar5,ar6,ar7);
  (**(code **)(**(int **)(0x30c + ar4) + 0x24))(*(int **)(0x30c + ar4),ar5,ar6,ar7);
  uVar1 = (**(code **)(0xa8 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027394\n.set _FUN_8c027394, _FUN_8c027394_def\n");
//@unit 8c0273d0
#include "../decls.h"
undefined4 noop_0273d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0273d0\n.set _noop_0273d0, _noop_0273d0_def\n");
//@unit 8c0273d4
#include "../decls.h"
undefined4 FUN_8c0273d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0273f8(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0273d4\n.set _FUN_8c0273d4, _FUN_8c0273d4_def\n");
//@unit 8c0273f8
#include "../decls.h"
int FUN_8c0273f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x81;
  *(undefined1 *)(0x81 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0273f8\n.set _FUN_8c0273f8, _FUN_8c0273f8_def\n");
//@unit 8c027404
#include "../decls.h"
undefined4 FUN_8c027404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c027448(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  uVar1 = FUN_8c02743c(*(undefined4 *)(0x30c + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027404\n.set _FUN_8c027404, _FUN_8c027404_def\n");
//@unit 8c02743c
#include "../decls.h"
int FUN_8c02743c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x21c;
  *(undefined4 *)(0x21c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02743c\n.set _FUN_8c02743c, _FUN_8c02743c_def\n");
//@unit 8c027448
#include "../decls.h"
int FUN_8c027448_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x82;
  *(undefined1 *)(0x82 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027448\n.set _FUN_8c027448, _FUN_8c027448_def\n");
//@unit 8c027454
#include "../decls.h"
undefined4 FUN_8c027454_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027478(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027454\n.set _FUN_8c027454, _FUN_8c027454_def\n");
//@unit 8c027478
#include "../decls.h"
int FUN_8c027478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x84;
  *(undefined1 *)(0x84 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c027478\n.set _FUN_8c027478, _FUN_8c027478_def\n");
//@unit 8c027484
#include "../decls.h"
undefined4 noop_027484_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_027484\n.set _noop_027484, _noop_027484_def\n");
//@unit 8c027488
#include "../decls.h"
undefined4 noop_027488_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_027488\n.set _noop_027488, _noop_027488_def\n");
//@unit 8c02748c
#include "../decls.h"
undefined4 FUN_8c02748c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0274b0(*(undefined4 *)(0x308 + ar4),1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02748c\n.set _FUN_8c02748c, _FUN_8c02748c_def\n");
//@unit 8c0274b0
#include "../decls.h"
int FUN_8c0274b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x87;
  *(undefined1 *)(0x87 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c0274b0\n.set _FUN_8c0274b0, _FUN_8c0274b0_def\n");
//@unit 8c0274bc
#include "../decls.h"
undefined4 FUN_8c0274bc_def(int ar4,ushort *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  ushort *ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  iVar1 = get_field_138_02737c(ar4 + 0x174,ar5,ar6,ar7);
  if (iVar1 != 1) {
    iVar1 = get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7);
    if (iVar1 != 2) goto LAB_8c027550;
  }
  uVar2 = get_field_138_02737c(ar4 + 0x174,ar5_00,ar6,ar7);
  uVar3 = FUN_8c02bef8(ar4 + 0x174,ar5_00,ar6,ar7);
  ar6 = (int)(short)uVar3;
  uVar2 = FUN_8c02775c(ar4,uVar2,ar6,ar7);
  uVar2 = FUN_8c0fa388(0x8c35468c,uVar2,ar6,ar7);
  FUN_8c027374(ar4 + 0x21c,uVar2,ar6,ar7);
  ar5_00 = (ushort *)FUN_8c027364(*(undefined4 *)(0x308 + ar4),uVar2,ar6,ar7);
  FUN_8c02735c(ar4 + 0x21c,ar5_00,ar6,ar7);
LAB_8c027550:
  iVar1 = FUN_8c0fa5b4(0x8c35468c,ar5_00,ar6,ar7);
  iVar4 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                    (*(int **)(0x308 + ar4),ar5_00,ar6,ar7);
  if (iVar1 == iVar4) {
    iVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                      (*(int **)(0x308 + ar4),ar5_00,ar6,ar7);
    if (0 < iVar1) {
      ar5_00 = (ushort *)0x1;
      FUN_8c02b04c(ar4,1,ar6,ar7);
    }
  }
  if (*ar5 == 0) {
    if ((*ar5 == 0) && (7 < ar5[1])) {
      if (ar5[1] < 0x18) {
        ar5_00 = (ushort *)
                 libgcc_divide_helper_0101e4((uint)ar5[1],8,ar6,ar7);
        FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
      }
      else {
        ar5_00 = (ushort *)
                 libgcc_divide_helper_0101e4((uint)ar5[1],0x18,ar6,ar7);
        FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
      }
      FUN_8c027344(*(undefined4 *)(0x308 + ar4),ar5_00,ar6,ar7);
    }
  }
  else {
    ar5_00 = (ushort *)(uint)*ar5;
    FUN_8c02d2e0(ar4 + 0x174,ar5_00,ar6,ar7);
    FUN_8c027344(*(undefined4 *)(0x308 + ar4),ar5_00,ar6,ar7);
  }
  iVar1 = FUN_8c025ff4(ar4 + 0x174,ar5_00,ar6,ar7);
  if (iVar1 == 1) {
    FUN_8c02a6f8(ar4,ar5_00,ar6,ar7);
  }
  uVar2 = FUN_8c025f68(ar4 + 0x1ec,ar5_00,ar6,ar7);
  if ((char)uVar2 != '\0') {
    FUN_8c02b190(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c0353bc(ar4 + 0x2dc,ar4 + 0x174,ar6,ar7);
  uVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x3c))
                    (*(int **)(0x308 + ar4),ar4 + 0x174,ar4 + 0x2dc,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0274bc\n.set _FUN_8c0274bc, _FUN_8c0274bc_def\n");
//@unit 8c0276ec
#include "../decls.h"
undefined4 ret_const_ffffffff_0276ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xffffffff;
}

__asm__(".globl _ret_const_ffffffff_0276ec\n.set _ret_const_ffffffff_0276ec, _ret_const_ffffffff_0276ec_def\n");
//@unit 8c0276f4
#include "../decls.h"
int FUN_8c0276f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c0fa5b4(0x8c35468c,ar5,ar6,ar7);
  iVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  if (iVar1 == iVar2) {
    iVar2 = (**(code **)(**(int **)(0x308 + ar4) + 0x40))
                      (*(int **)(0x308 + ar4),ar5,ar6,ar7);
    if (0 < iVar2) {
      iVar2 = FUN_8c02b04c(ar4,1,ar6,ar7);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0276f4\n.set _FUN_8c0276f4, _FUN_8c0276f4_def\n");
//@unit 8c02775c
#include "../decls.h"
undefined4 FUN_8c02775c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((ar5 == 1) && (iVar1 = (int)(short)ar6, iVar1 < 8)) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      return 0;
    case 1:
      return 1;
    case 2:
      return 2;
    case 3:
      return 3;
    case 4:
      return 4;
    case 5:
      return 5;
    case 6:
      return 6;
    case 7:
      return 7;
    }
  }
  if (((ar5 == 2) && (iVar1 = (int)(short)ar6, iVar1 < 5)) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      return 8;
    case 1:
      return 9;
    case 2:
      return 10;
    case 3:
      return 0xb;
    case 4:
      return 0xc;
    }
  }
  return 0xc;
}

__asm__(".globl _FUN_8c02775c\n.set _FUN_8c02775c, _FUN_8c02775c_def\n");
//@unit 8c02781c
#include "../decls.h"
undefined4 FUN_8c02781c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&Vec3_assign_wrap_027844))
                    (*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02781c\n.set _FUN_8c02781c, _FUN_8c02781c_def\n");
//@unit 8c027844
#include "../decls.h"
undefined4 Vec3_assign_wrap_027844_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x13c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_027844\n.set _Vec3_assign_wrap_027844, _Vec3_assign_wrap_027844_def\n");
//@unit 8c02786c
#include "../decls.h"
undefined4 FUN_8c02786c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c027894(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02786c\n.set _FUN_8c02786c, _FUN_8c02786c_def\n");
//@unit 8c027894
#include "../decls.h"
undefined4 FUN_8c027894_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = vec3_copy_8c023d8c(ar4 + 0x14c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027894\n.set _FUN_8c027894, _FUN_8c027894_def\n");
//@unit 8c0278bc
#include "../decls.h"
undefined4 FUN_8c0278bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0336e8(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0278bc\n.set _FUN_8c0278bc, _FUN_8c0278bc_def\n");
//@unit 8c0278e4
#include "../decls.h"
undefined4 FUN_8c0278e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x1c))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0278e4\n.set _FUN_8c0278e4, _FUN_8c0278e4_def\n");
//@unit 8c027904
#include "../decls.h"
undefined4 noop_027904_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_027904\n.set _noop_027904, _noop_027904_def\n");
//@unit 8c027908
#include "../decls.h"
undefined4 FUN_8c027908_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&get_field_124_027930))
                    (*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c027908\n.set _FUN_8c027908, _FUN_8c027908_def\n");
//@unit 8c027930
#include "../decls.h"
undefined4 get_field_124_027930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x124 + ar4);
}

__asm__(".globl _get_field_124_027930\n.set _get_field_124_027930, _get_field_124_027930_def\n");
//@unit 8c02793c
#include "../decls.h"
undefined4 FUN_8c02793c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 1) == 1) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02793c\n.set _FUN_8c02793c, _FUN_8c02793c_def\n");
//@unit 8c027954
#include "../decls.h"
undefined4 FUN_8c027954_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xfffffffe;
  return 1;
}

__asm__(".globl _FUN_8c027954\n.set _FUN_8c027954, _FUN_8c027954_def\n");
//@unit 8c027970
#include "../decls.h"
undefined4 FUN_8c027970_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 2) == 2) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027970\n.set _FUN_8c027970, _FUN_8c027970_def\n");
//@unit 8c027988
#include "../decls.h"
undefined4 FUN_8c027988_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x40) == 0x40) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027988\n.set _FUN_8c027988, _FUN_8c027988_def\n");
//@unit 8c0279a0
#include "../decls.h"
undefined4 FUN_8c0279a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x100) == 0x100) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0279a0\n.set _FUN_8c0279a0, _FUN_8c0279a0_def\n");
//@unit 8c0279c0
#include "../decls.h"
undefined4 FUN_8c0279c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x100;
  return 1;
}

__asm__(".globl _FUN_8c0279c0\n.set _FUN_8c0279c0, _FUN_8c0279c0_def\n");
//@unit 8c0279e0
#include "../decls.h"
undefined4 FUN_8c0279e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(uint *)(ar4 + 0x74) & 0x80) == 0x80) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c0279e0\n.set _FUN_8c0279e0, _FUN_8c0279e0_def\n");
//@unit 8c027a00
#include "../decls.h"
undefined4 FUN_8c027a00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(0x308 + ar4) + 0x20))
                    (*(int **)(0x308 + ar4),ar5,ar6,ar7);
  if ((iVar1 != 0) &&
     (iVar1 = (*(code *)(&get_field_214_027a4c))
                        (*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7), iVar1 != 0)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c027a00\n.set _FUN_8c027a00, _FUN_8c027a00_def\n");
//@unit 8c027a4c
#include "../decls.h"
undefined4 get_field_214_027a4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x214 + ar4);
}

__asm__(".globl _get_field_214_027a4c\n.set _get_field_214_027a4c, _get_field_214_027a4c_def\n");
//@unit 8c027a58
#include "../decls.h"
undefined4 FUN_8c027a58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x80;
  return 1;
}

__asm__(".globl _FUN_8c027a58\n.set _FUN_8c027a58, _FUN_8c027a58_def\n");
//@unit 8c027a78
#include "../decls.h"
undefined4 s_Failed_to_load_Pack_CAnimal__027a86_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int a5;
  undefined4 uVar3;
  undefined *ar7_00;
  undefined4 *puVar4;
  undefined4 uVar5;
  int s0;
  int iVar6;
  undefined4 in_stack_ffffff50;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  uStack_28 = 0;
  uVar5 = 0;
  iVar6 = ar6 * 0x124;
  iVar1 = *(int *)(ar4 + 0x328) + iVar6;
  s0 = ar4 + ar6;
  uStack_2c = 0;
  iVar2 = *(int *)(ar4 + 0x418);
  if ((iVar2 < 0xc) && (-1 < iVar2)) {
    ar7_00 = (&switchdata_8c027ae0_8c027afc)[iVar2];
    a5 = ar5;
                    
    switch(iVar2) {
    case 0:
      *(undefined2 *)(ar4 + 0x414) = 0;
      *(undefined4 *)(ar4 + 0x418) = 1;
      break;
    case 1:
      if (*(int *)(iVar1 + 0x18) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 2;
      }
      else {
        iVar2 = FUN_8c020d90(ar5,*(undefined4 *)(iVar1 + 0x18),*(undefined4 *)(ar4 + 0x410),s0);
        if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x418) = 2;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 2:
      if (*(int *)(iVar1 + 4) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 3;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 4)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa0) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xa4),ar5,s0,0);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 3;
        }
      }
      break;
    case 3:
      if (*(int *)(iVar1 + 0x1c) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 4;
      }
      else {
        puVar4 = &uStack_2c;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020ba0(ar5,*(undefined4 *)(iVar1 + 0x1c),uVar3,puVar4);
        if (iVar2 == 1) {
          FUN_8c015bb0(iVar1 + 0xb0,uStack_2c,uVar3,puVar4,in_stack_ffffff50);
          *(undefined4 *)(ar4 + 0x418) = 4;
        }
        else if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x18),"Failed to load Pack:CAnimal::LoadGRReq()",0,2);
        }
      }
      break;
    case 4:
      if (*(int *)(iVar1 + 8) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 5;
      }
      else {
        iVar1 = s_Failed_to_Read_CAnimal_LoadM_02839e
                          (ar4,*(undefined4 *)(*(short *)(ar4 + 0x414) * 4 + *(int *)(iVar1 + 8)),
                           *(undefined4 *)(ar4 + 0x410),
                           *(int *)(iVar1 + 0xa8) + *(short *)(ar4 + 0x414) * 4,ar4 + 0x414,
                           (int)*(short *)(iVar1 + 0xac),ar5,s0,1);
        if (iVar1 == 1) {
          *(undefined2 *)(ar4 + 0x414) = 0;
          *(undefined4 *)(ar4 + 0x418) = 5;
        }
      }
      break;
    case 5:
      puVar4 = auStack_24;
      uVar3 = *(undefined4 *)(ar4 + 0x410);
      iVar2 = FUN_8c0209b0(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
      if (iVar2 == 1) {
        FUN_8c015ad4(iVar1 + 0x70,auStack_24[0],uVar3,puVar4,in_stack_ffffff50);
        *(undefined4 *)(ar4 + 0x418) = 6;
      }
      else if (iVar2 == 0) {
        report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJCM Failed..",0,2);
      }
      break;
    case 6:
      if (*(int *)(iVar1 + 0x20) == 0) {
        puVar4 = &uStack_28;
        uVar3 = *(undefined4 *)(ar4 + 0x410);
        iVar2 = FUN_8c020aa8(ar5,*(undefined4 *)(iVar1 + 0xc),uVar3,puVar4);
        if (iVar2 == 1) {
          (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),uStack_28,uVar3,puVar4);
          *(undefined4 *)(ar4 + 0x418) = 7;
        }
        else if (iVar2 == 0) {
          report_error_message(*(undefined4 *)(iVar1 + 0xc),"Read NJTL Failed..",0,2);
        }
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0xc);
        s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x20,uVar3,ar7_00);
        (**(code **)(*(int *)(iVar1 + 0x78) + 8))((int *)(iVar1 + 0x78),iVar1 + 0x28,uVar3,ar7_00);
        *(undefined4 *)(ar4 + 0x418) = 7;
      }
      break;
    case 7:
      if (*(int *)(iVar1 + 0x20) == 0) {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(ar4 + 0x410),uVar3);
        if (iVar2 == 0) {
          report_error_message
                    (*(undefined4 *)(iVar1 + 0x14),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
        }
      }
      else {
        uVar3 = get_field_4_0253e4(iVar1 + 0x78,ar5,iVar6,ar7_00);
        iVar2 = s_CDCGD_ReadPVMFileReq_021082
                          (ar5,*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
        if (iVar2 == 0) {
          report_error_message
                    ("Failed to load body pvm textuer..","CAnimal::LoadTextureResourceReq()",0,2);
        }
      }
      if (iVar2 == 1) {
        if (*(int *)(iVar1 + 0x34) == 0) {
          *(undefined4 *)(ar4 + 0x418) = 8;
        }
        else {
          *(undefined4 *)(ar4 + 0x418) = 9;
        }
      }
      break;
    case 8:
      if (*(int *)(iVar1 + 0x10) == 0) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
      else {
        if (*(int *)(iVar1 + 0x48) == 0) {
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,get_field_4_0253e4,iVar6,ar7_00);
          iVar2 = FUN_8c020e80(ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(ar4 + 0x410),uVar3)
          ;
          if (iVar2 == 0) {
            report_error_message
                      (*(undefined4 *)(iVar1 + 0x10),"Failed to load tex:CAnimal::LoadTRReq()",0,2);
          }
        }
        else {
          s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x48,*(undefined4 *)(iVar1 + 0xc),ar7_00);
          iVar6 = iVar1 + 0x50;
          uVar3 = 0x88;
          iVar2 = iVar6;
          (**(code **)(*(int *)(iVar1 + 0x88) + 8))((int *)(iVar1 + 0x88),iVar6,0x88,iVar6);
          uVar3 = get_field_4_0253e4(iVar1 + 0x88,iVar6,uVar3,iVar2);
          iVar2 = s_CDCGD_ReadPVMFileReq_021082
                            (ar5,*(undefined4 *)(iVar1 + 0x48),*(undefined4 *)(ar4 + 0x410),uVar3,s0
                            );
          if (iVar2 == 0) {
            report_error_message
                      ("Failed to load face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
          }
        }
        if (iVar2 == 1) {
          if (*(int *)(iVar1 + 0x5c) == 0) {
            *(undefined4 *)(ar4 + 0x418) = 0;
            uVar5 = 1;
          }
          else {
            *(undefined4 *)(ar4 + 0x418) = 0xb;
          }
        }
      }
      break;
    case 9:
      iVar6 = *(int *)(iVar1 + 0xc);
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar1 + 0x34,iVar6,ar7_00);
      a5 = iVar1 + 0x3c;
      (**(code **)(*(int *)(iVar1 + 0x80) + 8))((int *)(iVar1 + 0x80),a5,iVar6,ar7_00);
      *(undefined4 *)(ar4 + 0x418) = 10;
    case 10:
      uVar3 = get_field_4_0253e4(iVar1 + 0x80,a5,iVar6,ar7_00);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x34),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL body pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 8;
      }
      break;
    case 0xb:
      uVar3 = *(undefined4 *)(iVar1 + 0xc);
      iVar6 = iVar1 + 0x5c;
      s_CAnimal_SetPVMTexture_s_029404(ar4,iVar6,uVar3,iVar6);
      iVar2 = iVar1 + 100;
      (**(code **)(*(int *)(iVar1 + 0x90) + 8))((int *)(iVar1 + 0x90),iVar2,uVar3,iVar6);
      uVar3 = get_field_4_0253e4(iVar1 + 0x90,iVar2,uVar3,iVar6);
      iVar1 = s_CDCGD_ReadPVMFileReq_021082
                        (ar5,*(undefined4 *)(iVar1 + 0x5c),*(undefined4 *)(ar4 + 0x410),uVar3,s0);
      if (iVar1 == 0) {
        report_error_message
                  ("Failed to load SPECIAL face pvm textuer..","CAnimal::LoadGResourceReq()",0,2);
      }
      if (iVar1 == 1) {
        *(undefined4 *)(ar4 + 0x418) = 0;
        uVar5 = 1;
      }
    }
  }
  else {
    report_error_message("Invalid Load Sequence..","CAnimal::LoadGResourceReq()",0,2);
  }
  return uVar5;
}

__asm__(".globl _s_Failed_to_load_Pack_CAnimal__027a86\n.set _s_Failed_to_load_Pack_CAnimal__027a86, _s_Failed_to_load_Pack_CAnimal__027a86_def\n");
//@unit 8c028390
#include "../decls.h"
undefined4
s_Failed_to_Read_CAnimal_LoadM_02839e_def
          (undefined4 ar4,char *ar5,undefined4 ar6,undefined4 *ar7,short *s0,undefined4 s4,
          undefined4 s8,undefined4 s12,int s16)

{
  undefined4 *ar7_00;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 auStack_24 [2];
  
  uVar1 = 0;
  iVar2 = 2;
  auStack_24[0] = 0;
  uVar3 = ar6;
  if (s16 == 0) {
    ar7_00 = auStack_24;
    iVar2 = FUN_8c020ba0(s8,ar5,ar6,ar7_00);
  }
  else {
    ar7_00 = ar7;
    if (s16 == 1) {
      if (*ar5 == '\0') {
        iVar2 = 1;
      }
      else {
        ar7_00 = auStack_24;
        iVar2 = FUN_8c020c98(s8,ar5,ar6,ar7_00);
      }
    }
  }
  if (iVar2 == 1) {
    if (s16 == 0) {
      FUN_8c015bb0(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    else if (s16 == 1) {
      FUN_8c015be4(ar7,auStack_24[0],ar6,ar7_00,uVar3);
    }
    *s0 = *s0 + 1;
    if (*s0 == (short)s4) {
      uVar1 = 1;
    }
  }
  else if (iVar2 == 0) {
    report_error_message(ar5,"Failed to Read ..:CAnimal::LoadMFile()",1,2);
  }
  return uVar1;
}

__asm__(".globl _s_Failed_to_Read_CAnimal_LoadM_02839e\n.set _s_Failed_to_Read_CAnimal_LoadM_02839e, _s_Failed_to_Read_CAnimal_LoadM_02839e_def\n");
//@unit 8c0284ac
#include "../decls.h"
undefined4 s_Failed_to_Load_CAnimal_LoadG_0284b8_def(int ar4,undefined4 ar5,int ar6,undefined4 *ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *ar7_00;
  undefined4 *ar7_01;
  int iVar5;
  int in_stack_ffffff9c;
  undefined4 uStack_24;
  undefined4 auStack_20 [2];
  
  iVar5 = *(int *)(ar4 + 0x328) + ar6 * 0x124;
  auStack_20[0] = 0;
  uStack_24 = 0;
  ar7_01 = (undefined4 *)(ar4 + ar6);
  iVar3 = ar6;
  if (*(int *)(iVar5 + 0x18) != 0) {
    iVar3 = *(int *)(ar4 + 0x410);
    ar7 = ar7_01;
    iVar1 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar5 + 0x18),iVar3,ar7_01);
    if (iVar1 == 0) {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message(*(undefined4 *)(iVar5 + 0x18),"Failed to Load :CAnimal::LoadGRWait",0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xa4); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 4)) == '\0') {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message("Attach NULL!!",s_CAnimal__LoadGRWait___8c130008,0,2);
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020bec(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 4)),"Read NMDM Failed..",0,2);
      }
    }
    FUN_8c015bb0(*(int *)(iVar5 + 0xa0) + iVar1 * 4,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
  }
  if (*(int *)(iVar5 + 0x1c) != 0) {
    ar7 = auStack_20;
    iVar3 = *(int *)(ar4 + 0x410);
    iVar1 = FUN_8c020bec(ar5,*(undefined4 *)(iVar5 + 0x1c),iVar3,ar7);
    if (iVar1 == 1) {
      FUN_8c015bb0(iVar5 + 0xb0,auStack_20[0],iVar3,ar7,in_stack_ffffff9c);
    }
    else {
      ar7 = (undefined4 *)0x2;
      iVar3 = 0;
      report_error_message
                (*(undefined4 *)(iVar5 + 0x1c),s_Failed_to_read_Munzu_hand_motion_8c13001e,0,2);
    }
  }
  for (iVar1 = 0; iVar1 < *(short *)(iVar5 + 0xac); iVar1 = iVar1 + 1) {
    if (**(char **)(iVar1 * 4 + *(int *)(iVar5 + 8)) == '\0') {
      auStack_20[0] = 0;
    }
    else {
      ar7 = auStack_20;
      iVar3 = *(int *)(ar4 + 0x410);
      iVar2 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),iVar3,ar7);
      if (iVar2 == 0) {
        ar7 = (undefined4 *)0x2;
        iVar3 = 0;
        report_error_message
                  (*(undefined4 *)(iVar1 * 4 + *(int *)(iVar5 + 8)),s_Read_NSSM_Failed___8c130041,0,
                   2);
      }
      FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x328) + ar6 * 0x124 + 0xa8) + iVar1 * 4,auStack_20[0],
                   iVar3,ar7,in_stack_ffffff9c);
    }
    in_stack_ffffff9c = iVar1;
    FUN_8c015be4(*(int *)(iVar5 + 0xa8) + iVar1 * 4,auStack_20[0],iVar3,ar7,iVar1);
  }
  ar7_00 = &uStack_24;
  uVar4 = *(undefined4 *)(ar4 + 0x410);
  iVar3 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar5 + 0xc),uVar4,ar7_00);
  if (iVar3 == 0) {
    ar7_00 = (undefined4 *)0x2;
    uVar4 = 0;
    report_error_message
              (*(undefined4 *)(iVar5 + 0xc),s_Read_NJCM_Failed___CAnimal__Load_8c130054,0,2);
  }
  FUN_8c015ad4(iVar5 + 0x70,uStack_24,uVar4,ar7_00,in_stack_ffffff9c);
  s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,0,ar7_01);
  uVar4 = 0;
  if (*(int *)(iVar5 + 0x34) != 0) {
    uVar4 = s_CAnimal_LoadGResourceWait_0287ac(ar4,ar5,1,ar7_01);
  }
  return uVar4;
}

__asm__(".globl _s_Failed_to_Load_CAnimal_LoadG_0284b8\n.set _s_Failed_to_Load_CAnimal_LoadG_0284b8, _s_Failed_to_Load_CAnimal_LoadG_0284b8_def\n");
//@unit 8c0287a4
#include "../decls.h"
int s_CAnimal_LoadGResourceWait_0287ac_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined *ar5_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *ar7_00;
  undefined4 auStack_18 [2];
  
  iVar1 = (**(code **)(0x144 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  if (*(int *)(ar6 * 0x14 + iVar1 + 0x20) == 0) {
    auStack_18[0] = 0;
    ar7_00 = auStack_18;
    uVar4 = *(undefined4 *)(0x410 + ar4);
    iVar3 = FUN_8c020af4(ar5,*(undefined4 *)(iVar1 + 0xc),uVar4,ar7_00);
    if (iVar3 == 0) {
      ar7_00 = (undefined4 *)0x2;
      uVar4 = 0;
      (*(code *)(&report_error_message))
                (*(undefined4 *)(iVar1 + 0xc),(&DATA_8c12fdac) + 0x2ee,0,2);
    }
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    uVar5 = auStack_18[0];
    (**(code **)(*piVar2 + 8))(piVar2,auStack_18[0],uVar4,ar7_00);
    uVar4 = get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,uVar5,uVar4,ar7_00);
    uVar5 = *(undefined4 *)(0x410 + ar4);
    ar5_00 = *(undefined **)(iVar1 + 0x14);
    iVar3 = FUN_8c020ef0(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&DATA_8c12fdac) + 0x317;
      report_error_message(*(undefined4 *)(iVar1 + 0x14),ar5_00,0,2);
    }
  }
  else {
    uVar4 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)(&s_CAnimal_SetPVMTexture_s_029404))
              (ar4,ar6 * 0x14 + iVar1 + 0x20,uVar4,ar7);
    iVar3 = ar6 * 0x14 + iVar1 + 0x28;
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x78);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar4,ar7);
    uVar4 = get_field_4_0253e4(iVar1 + ar6 * 8 + 0x78,iVar3,uVar4,ar7);
    uVar5 = *(undefined4 *)(0x410 + ar4);
    ar5_00 = *(undefined **)(ar6 * 0x14 + iVar1 + 0x20);
    iVar3 = FUN_8c02100c(ar5,ar5_00,uVar5,uVar4);
    if (iVar3 == 0) {
      uVar4 = 2;
      uVar5 = 0;
      ar5_00 = (&DATA_8c12fdac) + 0x2d1;
      (*(code *)(&report_error_message))
                ((&DATA_8c12fdac) + 0xda,ar5_00,0,2);
    }
  }
  if (*(int *)(iVar1 + 0x10) == 0) {
    iVar3 = 0;
  }
  else if (*(int *)(ar6 * 0x14 + iVar1 + 0x48) == 0) {
    uVar4 = (*(code *)(&get_field_4_0253e4))
                      (iVar1 + ar6 * 8 + 0x88,ar5_00,uVar5,uVar4);
    iVar3 = (*(code *)(&FUN_8c020ef0))
                      (ar5,*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(0x410 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)(&report_error_message))
                        (*(undefined4 *)(iVar1 + 0x10),(&DATA_8c12fdac) + 0x340
                         ,0,2);
    }
  }
  else {
    uVar5 = *(undefined4 *)(iVar1 + 0xc);
    (*(code *)(&s_CAnimal_SetPVMTexture_s_029404))
              (ar4,ar6 * 0x14 + iVar1 + 0x48,uVar5,uVar4);
    iVar3 = ar6 * 0x14 + iVar1 + 0x50;
    piVar2 = (int *)(iVar1 + ar6 * 8 + 0x88);
    (**(code **)(*piVar2 + 8))(piVar2,iVar3,uVar5,uVar4);
    uVar4 = (*(code *)(&get_field_4_0253e4))
                      (iVar1 + ar6 * 8 + 0x88,iVar3,uVar5,uVar4);
    iVar3 = (*(code *)(&FUN_8c02100c))
                      (ar5,*(undefined4 *)(ar6 * 0x14 + iVar1 + 0x48),
                       *(undefined4 *)(0x410 + ar4),uVar4);
    if (iVar3 == 0) {
      iVar3 = (*(code *)(&report_error_message))
                        ((&DATA_8c12fdac) + 0x18c,
                         (&DATA_8c12fdac) + 0x2d1,0,2);
    }
  }
  return iVar3;
}

__asm__(".globl _s_CAnimal_LoadGResourceWait_0287ac\n.set _s_CAnimal_LoadGResourceWait_0287ac, _s_CAnimal_LoadGResourceWait_0287ac_def\n");
//@unit 8c028ab8
#include "../decls.h"
int FUN_8c028ab8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return *(int *)(0x328 + ar4) + (short)uVar1 * 0x124;
}

__asm__(".globl _FUN_8c028ab8\n.set _FUN_8c028ab8, _FUN_8c028ab8_def\n");
//@unit 8c028afc
#include "../decls.h"
undefined4 FUN_8c028afc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar7_00;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(0x328 + ar4) + ar6 * 0x124;
  ar7_00 = ar4 + ar6;
  for (iVar3 = 0; iVar3 < *(short *)(0xa4 + iVar2); iVar3 = iVar3 + 1) {
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 4)) != '\0') {
      (*(code *)(&FUN_8c020c60))
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 4)),
                 *(undefined4 *)(0x410 + ar4),ar7_00);
    }
    if (**(char **)(iVar3 * 4 + *(int *)(iVar2 + 8)) != '\0') {
      (*(code *)(&FUN_8c020d58))
                (ar5,*(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 8)),
                 *(undefined4 *)(0x410 + ar4),ar7_00);
    }
  }
  iVar3 = ar7_00;
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(0x410 + ar4),ar7_00);
  if (*(int *)(iVar2 + 0x20) == 0) {
    iVar3 = ar7_00;
    (*(code *)(&FUN_8c020b68))
              (ar5,*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(0x410 + ar4),ar7_00);
  }
  if (*(int *)(iVar2 + 0x18) != 0) {
    (*(code *)(&FUN_8c020e48))
              (ar5,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(0x410 + ar4),ar7_00);
    iVar3 = ar7_00;
  }
  uVar1 = (**(code **)(0xf0 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c028afc\n.set _FUN_8c028afc, _FUN_8c028afc_def\n");
//@unit 8c028c18
#include "../decls.h"
undefined4 s_Failed_wrap_028c18_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(0x328 + ar4) + ar6 * 0x124;
  s_Failed_s_015312(iVar2 + 0x78,ar5,ar6,ar7);
  if (*(int *)(iVar2 + 0x34) != 0) {
    s_Failed_s_015312(iVar2 + 0x80,ar5,ar6,ar7);
  }
  uVar1 = 0;
  if (*(int *)(iVar2 + 0x10) != 0) {
    s_Failed_s_015312(iVar2 + 0x88,ar5,ar6,ar7);
    uVar1 = 0;
    if (*(int *)(iVar2 + 0x5c) != 0) {
      uVar1 = s_Failed_s_015312(iVar2 + 0x90,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _s_Failed_wrap_028c18\n.set _s_Failed_wrap_028c18, _s_Failed_wrap_028c18_def\n");
//@unit 8c028c9c
#include "../decls.h"
undefined4 FUN_8c028c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&get_field_6c_028cc4))
                    (*(undefined4 *)(0x308 + ar4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c028c9c\n.set _FUN_8c028c9c, _FUN_8c028c9c_def\n");
//@unit 8c028cc4
#include "../decls.h"
undefined4 get_field_6c_028cc4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x6c);
}

__asm__(".globl _get_field_6c_028cc4\n.set _get_field_6c_028cc4, _get_field_6c_028cc4_def\n");
//@unit 8c028ccc
#include "../decls.h"
undefined4 FUN_8c028ccc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  FUN_8c02cbe4(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  iVar1 = ar5 + 0xd8;
  FUN_8c035338(ar4 + 0x2dc,iVar1,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,iVar1,ar6,ar7);
  if (iVar1 == 2) {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x2c))(*(int **)(ar4 + 0x308),ar5 + 200,2,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x24))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x460) = *(undefined4 *)(ar5 + 0xe8);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = *(undefined4 *)(ar5 + 0xec);
  }
  else {
    *(undefined8 *)(ar4 + 0x468) = *(undefined8 *)(ar5 + 0xec);
  }
  return 0xec;
}

__asm__(".globl _FUN_8c028ccc\n.set _FUN_8c028ccc, _FUN_8c028ccc_def\n");
//@unit 8c028d9c
#include "../decls.h"
undefined4 get_field_13c_028d9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x13c + ar4);
}

__asm__(".globl _get_field_13c_028d9c\n.set _get_field_13c_028d9c, _get_field_13c_028d9c_def\n");
//@unit 8c028da8
#include "../decls.h"
int FUN_8c028da8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c0f4ebc(ar4,ar5,ar6,ar7);
  FUN_8c02ce58(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  FUN_8c035338(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x24))
            (*(int **)(0x308 + ar4),ar5 + 0x48,ar6,ar7);
  iVar1 = 0x460;
  *(undefined4 *)(0x460 + ar4) = *(undefined4 *)(ar5 + 0x68);
  return iVar1;
}

__asm__(".globl _FUN_8c028da8\n.set _FUN_8c028da8, _FUN_8c028da8_def\n");
//@unit 8c028e20
#include "../decls.h"
undefined4 FUN_8c028e20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint ar5_00;
  undefined4 uVar2;
  undefined2 in_stack_ffffffe8;
  undefined2 uVar3;
  
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  uVar2 = CONCAT22((short)uVar1,in_stack_ffffffe8);
  uVar1 = uVar1 & 0xffff;
  FUN_8c028edc(ar4 + 0x21c,uVar1,ar6,ar7,uVar2);
  uVar3 = (undefined2)((uint)uVar2 >> 0x10);
  uVar1 = FUN_8c02602c(ar5,uVar1,ar6,ar7);
  ar5_00 = uVar1 & 0xffff;
  FUN_8c028ed4(ar4 + 0x21c,ar5_00,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  uVar2 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  uVar2 = FUN_8c034d38(ar4 + 0x2dc,uVar2,ar6,ar7);
  uVar2 = FUN_8c028ec8(*(undefined4 *)(ar4 + 0x308),uVar2,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c028e20\n.set _FUN_8c028e20, _FUN_8c028e20_def\n");
//@unit 8c028ec8
#include "../decls.h"
int FUN_8c028ec8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x98;
  *(undefined1 *)(0x98 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c028ec8\n.set _FUN_8c028ec8, _FUN_8c028ec8_def\n");
//@unit 8c028ed4
#include "../decls.h"
undefined4 FUN_8c028ed4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c028ed4\n.set _FUN_8c028ed4, _FUN_8c028ed4_def\n");
//@unit 8c028edc
#include "../decls.h"
undefined4 FUN_8c028edc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c028edc\n.set _FUN_8c028edc, _FUN_8c028edc_def\n");
//@unit 8c028ee4
#include "../decls.h"
int FUN_8c028ee4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(0xa2 + ar4);
}

__asm__(".globl _FUN_8c028ee4\n.set _FUN_8c028ee4, _FUN_8c028ee4_def\n");
//@unit 8c028ef0
#include "../decls.h"
undefined4 FUN_8c028ef0_def(int ar4,float *ar5,float *ar6,float *ar7)

{
  *ar5 = *(float *)(ar4 + 0x30) + *(float *)(ar4 + 0x3c8);
  *ar6 = *(float *)(ar4 + 0x34) + *(float *)(ar4 + 0x3cc);
  *ar7 = *(float *)(ar4 + 0x38) + *(float *)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028ef0\n.set _FUN_8c028ef0, _FUN_8c028ef0_def\n");
//@unit 8c028f34
#include "../decls.h"
undefined4 FUN_8c028f34_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x3c8);
  *ar6 = *(undefined4 *)(ar4 + 0x3cc);
  *ar7 = *(undefined4 *)(ar4 + 0x3d0);
  return 0x3d0;
}

__asm__(".globl _FUN_8c028f34\n.set _FUN_8c028f34, _FUN_8c028f34_def\n");
//@unit 8c028f60
#include "../decls.h"
undefined4 FUN_8c028f60_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 a6;
  int ar5_00;
  char cVar2;
  
  cVar2 = '\0';
  FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
  FUN_8c02cf20(ar4 + 0x174,ar5 + 0x4c,ar6,ar7);
  ar5_00 = ar5 + 0xd8;
  FUN_8c03539c(ar4 + 0x2dc,ar5_00,ar6,ar7);
  iVar1 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
  if (iVar1 == 2) {
    a6 = get_field_13c_028d9c(ar4 + 0x174,ar5_00,ar6,ar7);
    (**(code **)(**(int **)(ar4 + 0x308) + 0x30))(*(int **)(ar4 + 0x308),ar5 + 200,a6,ar7);
  }
  else {
    (**(code **)(**(int **)(ar4 + 0x308) + 0x28))(*(int **)(ar4 + 0x308),ar5 + 200,ar6,ar7);
  }
  *(undefined4 *)(ar5 + 0xe8) = *(undefined4 *)(ar4 + 0x460);
  if (cVar2 == '\0') {
    *(undefined4 *)(ar5 + 0xec) = *(undefined4 *)(ar4 + 0x468);
  }
  else {
    *(undefined8 *)(ar5 + 0xec) = *(undefined8 *)(ar4 + 0x468);
  }
  return 0x468;
}

__asm__(".globl _FUN_8c028f60\n.set _FUN_8c028f60, _FUN_8c028f60_def\n");
//@unit 8c02903c
#include "../decls.h"
undefined4 FUN_8c02903c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c0f4fa4(ar4,ar5,ar6,ar7);
  FUN_8c02d1f4(ar4 + 0x174,ar5 + 0x24,ar6,ar7);
  FUN_8c03539c(ar4 + 0x2dc,ar5 + 0x58,ar6,ar7);
  (**(code **)(**(int **)(0x308 + ar4) + 0x28))
            (*(int **)(0x308 + ar4),ar5 + 0x48,ar6,ar7);
  *(undefined4 *)(ar5 + 0x68) = *(undefined4 *)(0x460 + ar4);
  return 0x68;
}

__asm__(".globl _FUN_8c02903c\n.set _FUN_8c02903c, _FUN_8c02903c_def\n");
//@unit 8c0290b8
#include "../decls.h"
undefined4 FUN_8c0290b8_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  
  cVar3 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  puVar2 = (undefined8 *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124 + 0xf4);
  if (cVar3 == '\0') {
    *(undefined4 *)ar5 = *(undefined4 *)puVar2;
  }
  else {
    *ar5 = *puVar2;
  }
  return 0xf0;
}

__asm__(".globl _FUN_8c0290b8\n.set _FUN_8c0290b8, _FUN_8c0290b8_def\n");
//@unit 8c02911c
#include "../decls.h"
undefined4 FUN_8c02911c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  undefined4 in_fr1;
  ulonglong uVar2;
  char cVar3;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x330) = 0;
  *(undefined4 *)(ar4 + 0x308) = 0;
  *(undefined4 *)(ar4 + 0x30c) = 0;
  *(undefined4 *)(ar4 + 0x328) = 0;
  *(undefined4 *)(ar4 + 0x32c) = 0;
  *(undefined4 *)(ar4 + 0x424) = 1;
  *(undefined4 *)(ar4 + 0x428) = 0;
  *(undefined4 *)(ar4 + 0x364) = 0;
  *(undefined4 *)(ar4 + 0x368) = 0;
  *(undefined4 *)(ar4 + 0x36c) = 0x3f800000;
  *(undefined4 *)(ar4 + 0x390) = 0;
  *(undefined4 *)(ar4 + 0x394) = 0;
  *(undefined4 *)(ar4 + 0x398) = 0x3f800000;
  uVar2 = CONCAT44(0x3e4ccccd,in_fr1);
  *(undefined4 *)(ar4 + 0x170) = 0x3e4ccccd;
  FUN_8c0293d4(ar4 + 0x174,ar5,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 1;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x334) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x334) = uVar2 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x430) = 0;
  *(undefined4 *)(ar4 + 0x42c) = 0;
  *(undefined4 *)(ar4 + 0x434) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x408) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x408) = uVar2 & 0xffffffff;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x40c) = 0x3f800000;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = CONCAT44(0x3f800000,(int)uVar2);
  }
  *(undefined4 *)(ar4 + 0x410) = 0;
  *(undefined2 *)(ar4 + 0x414) = 0;
  *(undefined4 *)(ar4 + 0x418) = 0;
  *(undefined4 *)(ar4 + 0x420) = 0;
  *(undefined2 *)(ar4 + 0x41c) = 0;
  *(undefined4 *)(ar4 + 0x45c) = 0;
  *(undefined4 *)(ar4 + 0x470) = 0;
  *(undefined4 *)(ar4 + 0x458) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x438) = 0;
    *(undefined4 *)(ar4 + 0x43c) = 0;
    *(undefined4 *)(ar4 + 0x440) = 0;
    *(undefined4 *)(ar4 + 0x444) = 0;
    *(undefined4 *)(ar4 + 0x448) = 0;
    *(undefined4 *)(ar4 + 0x44c) = 0;
    *(undefined4 *)(ar4 + 0x450) = 0;
    uVar2 = uVar2 & 0xffffffff;
    *(undefined4 *)(ar4 + 0x454) = 0;
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = 0;
    *(undefined8 *)(ar4 + 0x43c) = 0;
    *(undefined8 *)(ar4 + 0x440) = 0;
    *(undefined8 *)(ar4 + 0x444) = 0x3f80000000000000;
    *(undefined8 *)(ar4 + 0x448) = 0;
    *(undefined8 *)(ar4 + 0x44c) = 0;
    *(undefined8 *)(ar4 + 0x450) = 0;
    uVar2 = 0;
    *(undefined8 *)(ar4 + 0x454) = 0x3f80000000000000;
  }
  *(undefined2 *)(ar4 + 0x464) = 0;
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x468) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x468) = uVar2;
  }
  *(undefined1 *)(ar4 + 0x46c) = 1;
  *(undefined4 *)(ar4 + 0x474) = 0;
  *(undefined4 *)(ar4 + 0x47c) = 0;
  *(undefined4 *)(ar4 + 0x478) = 0;
  *(undefined4 *)(ar4 + 0x48c) = 0;
  ar4_00 = rand(ar4,ar5,ar6,ar7);
  iVar1 = libgcc_divide_helper_01031c(ar4_00,100,ar6,ar7);
  if (iVar1 < 0x14) {
    *(undefined4 *)(ar4 + 0x460) = 0;
  }
  else if (iVar1 < 0x5a) {
    *(undefined4 *)(ar4 + 0x460) = 1;
  }
  else {
    *(undefined4 *)(ar4 + 0x460) = 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c02911c\n.set _FUN_8c02911c, _FUN_8c02911c_def\n");
//@unit 8c0293d4
#include "../decls.h"
undefined4 FUN_8c0293d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0293f8(ar4 + 0xf8,1,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0293d4\n.set _FUN_8c0293d4, _FUN_8c0293d4_def\n");
//@unit 8c0293f8
#include "../decls.h"
undefined4 FUN_8c0293f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c0293f8\n.set _FUN_8c0293f8, _FUN_8c0293f8_def\n");
//@unit 8c029400
#include "../decls.h"
undefined1 *
s_CAnimal_SetPVMTexture_s_029404_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined1 auStack_10c [260];
  
  ar5_00 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5,ar6,ar7,(&DATA_8c12fdac) + 0x36f);
    ar7 = 2;
    ar6 = 0;
    ar5_00 = auStack_10c;
    (*(code *)(&report_error_message))
              ((&DATA_8c12fdac) + 0x38b,ar5_00,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5_00,ar6,ar7,(&DATA_8c12fdac) + 0x36f);
    (*(code *)(&report_error_message))
              ((&DATA_8c12fdac) + 0x3a6,auStack_10c,0,2);
  }
  (*(code *)(&FUN_8c239170))
            (ar5 + 8,*(undefined4 *)(ar5 + 0x10),0x8c4312a8,*(undefined4 *)(ar5 + 4));
  return ar5 + 8;
}

__asm__(".globl _s_CAnimal_SetPVMTexture_s_029404\n.set _s_CAnimal_SetPVMTexture_s_029404, _s_CAnimal_SetPVMTexture_s_029404_def\n");
//@unit 8c0294c0
#include "../decls.h"
undefined4 FUN_8c0294c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c0294c0\n.set _FUN_8c0294c0, _FUN_8c0294c0_def\n");
//@unit 8c029510
#include "../decls.h"
undefined4 FUN_8c029510_def(int ar4,int ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  int iVar3;
  int ar6_00;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffd4;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffd4 >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c256328(0,iVar3,uVar1,ar7,ain0);
  iVar3 = ar5;
  ar6_00 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  if (*(int *)(ar5 + 4) != 0) {
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)pdVar2;
    }
    else {
      in_xd14 = *pdVar2;
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)pdVar2 = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *pdVar2 = dVar5;
    }
    if (*(int *)(ar4 + 0x344) == ar5) {
      iVar3 = ar5;
      FUN_8c029dec(ar4,ar5,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x348) == ar5) {
      ar7 = ar4 + 900;
      ar6_00 = ar4 + 0x374;
      iVar3 = ar4 + 0x364;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 900;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if (*(int *)(ar4 + 0x34c) == ar5) {
      ar7 = ar4 + 0x3b0;
      ar6_00 = ar4 + 0x3a0;
      iVar3 = ar4 + 0x390;
      FUN_8c02a2b8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar3,ar6_00,ar7);
      iVar3 = ar4 + 0x3b0;
      FUN_8c029ca8(ar4,iVar3,ar6_00,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
    }
    else if ((((*(int *)(ar4 + 0x358) == ar5) || (*(int *)(ar4 + 0x354) == ar5)) ||
             (*(int *)(ar4 + 0x360) == ar5)) || (*(int *)(ar4 + 0x35c) == ar5)) {
      iVar3 = ar5;
      (**(code **)(*(int *)(ar4 + 8) + 0x198))(ar4,ar5,ar6_00,ar7);
    }
    else {
      iVar3 = *(int *)(ar5 + 4);
      FUN_8c02a29c(ar4,iVar3,ar6_00,ar7);
    }
    pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
    if (cVar7 == '\0') {
      *(undefined4 *)pdVar2 = in_fr15;
    }
    else {
      *pdVar2 = in_xd14;
    }
  }
  if (*(int *)(ar4 + 0x350) == ar5) {
    FUN_8c01538c(*piVar4 + 0x1f8,iVar3,ar6_00,ar7);
    iVar3 = FUN_8c015bb8(0x8c27d3e8,iVar3,ar6_00,ar7);
    ar6_00 = ar6;
    FUN_8c029d64(ar4,iVar3,ar6,ar7);
    FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),iVar3,ar6_00,ar7);
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    iVar3 = *(int *)(ar5 + 0x2c);
    ar6_00 = ar6;
    FUN_8c029510(ar4,iVar3,ar6,ar7);
  }
  FUN_8c256210(1,iVar3,ar6_00,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  uVar1 = 0;
  if (*(int *)(ar5 + 0x30) != 0) {
    uVar1 = FUN_8c029510(ar4,*(undefined4 *)(ar5 + 0x30),ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c029510\n.set _FUN_8c029510, _FUN_8c029510_def\n");
//@unit 8c0297b8
#include "../decls.h"
undefined4 FUN_8c0297b8_def(int ar4,uint *ar5,int ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint *ar5_00;
  undefined4 unaff_r10;
  int *piVar4;
  double dVar5;
  undefined4 in_fr15;
  double in_xd14;
  char cVar6;
  char cVar7;
  undefined4 in_stack_ffffffcc;
  undefined2 uVar8;
  undefined4 ain0;
  
  uVar8 = (undefined2)((uint)in_stack_ffffffcc >> 0x10);
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  ain0 = CONCAT22(uVar8,(short)uVar1);
  piVar4 = (int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124);
  uVar1 = 0x40;
  iVar3 = _DAT_8c27d1ec * 0x40 + -0x73d83e14;
  FUN_8c013fb4((_DAT_8c27d1ec + 1) * 0x40 + -0x73d83e14,iVar3,0x40,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + 1;
  FUN_8c256328(0,iVar3,uVar1,ar7,ain0);
  ar5_00 = ar5;
  iVar3 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  if (ar5[1] != 0) {
    unaff_r10 = *(undefined4 *)(uint)ar5[1];
  }
  if ((*ar5 & 0x80) == 0) {
    ar5_00 = (uint *)0x8c42d408;
    iVar3 = ar6;
    iVar2 = FUN_8c21f27c(ar5,0x8c42d408,ar6,ar7);
    if (iVar2 == 1) {
      *(undefined4 *)(uint)ar5[1] = 0x8c42d408;
    }
  }
  if (ar5[1] != 0) {
    if (cVar7 == '\0') {
      in_fr15 = *(undefined4 *)(ar5[1] + 0x14);
    }
    else {
      in_xd14 = *(double *)(ar5[1] + 0x14);
    }
    dVar5 = in_xd14;
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(in_fr15,*(undefined4 *)(ar4 + 0x5c));
    }
    if (cVar6 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * SUB84(dVar5,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar5;
    }
    if (cVar7 == '\0') {
      *(int *)(ar5[1] + 0x14) = (int)((ulonglong)dVar5 >> 0x20);
    }
    else {
      *(double *)(ar5[1] + 0x14) = dVar5;
    }
    if (*(uint **)(ar4 + 0x344) == ar5) {
      ar5_00 = ar5;
      FUN_8c029dec(ar4,ar5,iVar3,ar7);
    }
    else if (*(uint **)(ar4 + 0x348) == ar5) {
      FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
      ar7 = ar4 + 900;
      iVar3 = ar4 + 0x374;
      iVar2 = ar4 + 0x364;
      FUN_8c02a2b8(ar4,iVar2,iVar3,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7);
      ar5_00 = (uint *)(ar4 + 900);
      FUN_8c029ca8(ar4,ar5_00,iVar3,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
      FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
    }
    else if (*(uint **)(ar4 + 0x34c) == ar5) {
      FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
      ar7 = ar4 + 0x3b0;
      iVar3 = ar4 + 0x3a0;
      iVar2 = ar4 + 0x390;
      FUN_8c02a2b8(ar4,iVar2,iVar3,ar7);
      FUN_8c01538c(*piVar4 + 0x1f0,iVar2,iVar3,ar7);
      ar5_00 = (uint *)(ar4 + 0x3b0);
      FUN_8c029ca8(ar4,ar5_00,iVar3,ar7);
      FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
      FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
    }
    else if ((((*(uint **)(ar4 + 0x358) == ar5) || (*(uint **)(ar4 + 0x354) == ar5)) ||
             (*(uint **)(ar4 + 0x360) == ar5)) || (*(uint **)(ar4 + 0x35c) == ar5)) {
      ar5_00 = ar5;
      (**(code **)(*(int *)(ar4 + 8) + 0x198))(ar4,ar5,iVar3,ar7);
      *(undefined4 *)(uint)ar5[1] = unaff_r10;
    }
    else {
      ar5_00 = (uint *)(uint)ar5[1];
      FUN_8c02a29c(ar4,ar5_00,iVar3,ar7);
      *(undefined4 *)(uint)ar5[1] = unaff_r10;
    }
    if (cVar7 == '\0') {
      *(undefined4 *)(ar5[1] + 0x14) = in_fr15;
    }
    else {
      *(double *)(ar5[1] + 0x14) = in_xd14;
    }
  }
  if (*(uint **)(ar4 + 0x350) == ar5) {
    FUN_8c0f52c8(ar4,ar5_00,iVar3,ar7);
    FUN_8c01538c(*piVar4 + 0x1f8,ar5_00,iVar3,ar7);
    ar5_00 = (uint *)FUN_8c015bb8(0x8c27d3e8,ar5_00,iVar3,ar7);
    iVar3 = ar6;
    FUN_8c029d64(ar4,ar5_00,ar6,ar7);
    FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),ar5_00,iVar3,ar7);
    FUN_8c0f5308(ar4,ar5_00,iVar3,ar7);
  }
  if (ar5[0xb] != 0) {
    ar5_00 = (uint *)(uint)ar5[0xb];
    iVar3 = ar6;
    FUN_8c0297b8(ar4,ar5_00,ar6,ar7);
  }
  FUN_8c256210(1,ar5_00,iVar3,ar7);
  _DAT_8c27d1ec = _DAT_8c27d1ec + -1;
  uVar1 = 0;
  if (ar5[0xc] != 0) {
    uVar1 = FUN_8c0297b8(ar4,ar5[0xc],ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0297b8\n.set _FUN_8c0297b8, _FUN_8c0297b8_def\n");
//@unit 8c029af0
#include "../decls.h"
undefined4 FUN_8c029af0_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  undefined4 in_stack_ffffff88;
  undefined1 auStack_74 [64];
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  iVar2 = ar6;
  if (**(int **)(ar4 + 0x434) == 0) {
    uStack_1c = *(undefined4 *)(ar5 + 8);
    uStack_18 = *(undefined4 *)(ar5 + 0xc);
    uStack_14 = *(undefined4 *)(ar5 + 0x10);
    ar5_00 = ar5;
  }
  else {
    ar5_00 = ar6;
    FUN_8c2545ec(&uStack_1c,ar6,ar6,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 4) == 0) {
    uStack_34 = *(undefined4 *)(ar5 + 0x14);
    uStack_30 = *(undefined4 *)(ar5 + 0x18);
    uStack_2c = *(undefined4 *)(ar5 + 0x1c);
  }
  else {
    ar5_00 = ar6;
    FUN_8c254698(&uStack_34,ar6,iVar2,ar7);
  }
  if (*(int *)(*(int *)(ar4 + 0x434) + 8) == 0) {
    if (cVar5 == '\0') {
      uStack_28 = *(undefined4 *)(ar5 + 0x20);
      uStack_24 = *(undefined4 *)(ar5 + 0x24);
      uStack_20 = *(undefined4 *)(ar5 + 0x28);
    }
    else {
      uStack_28 = (undefined4)*(undefined8 *)(ar5 + 0x20);
      uStack_24 = (undefined4)*(undefined8 *)(ar5 + 0x24);
      uStack_20 = (undefined4)*(undefined8 *)(ar5 + 0x28);
      uStack_1c = (undefined4)((ulonglong)*(undefined8 *)(ar5 + 0x28) >> 0x20);
    }
  }
  else {
    FUN_8c254780(&uStack_28,ar6,iVar2,ar7);
    ar5_00 = ar6;
  }
  FUN_8c25b5d0(0,ar5_00,iVar2,ar7,in_stack_ffffff88);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(0,uStack_34,uStack_30,uStack_2c,in_stack_ffffff88);
  ar4_00 = 0;
  FUN_8c256fec(0,uVar1,uVar3,uVar4,in_stack_ffffff88);
  FUN_8c25484c(ar4_00,uVar1,uVar3,uVar4);
  *(int *)(ar4 + 0x434) = *(int *)(ar4 + 0x434) + 0x18;
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c25b5d0(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = uStack_34;
  uVar3 = uStack_30;
  uVar4 = uStack_2c;
  FUN_8c256e18(auStack_74,uStack_34,uStack_30,uStack_2c,ar4);
  FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  FUN_8c25cddc(auStack_74,uVar1,uVar3,uVar4,ar4);
  FUN_8c256fec(auStack_74,uVar1,uVar3,uVar4,ar4);
  uVar1 = FUN_8c02430c(auStack_74,uVar1,uVar3,uVar4);
  return uVar1;
}

__asm__(".globl _FUN_8c029af0\n.set _FUN_8c029af0, _FUN_8c029af0_def\n");
//@unit 8c029ca8
#include "../decls.h"
undefined4 FUN_8c029ca8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar4_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar3;
  
  uVar3 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328);
  ar4_00 = 0;
  FUN_8c256328(0,ar5,ar6,ar7,CONCAT22(uVar3,(short)uVar1));
  FUN_8c019088(ar4_00,ar5,ar6,ar7);
  FUN_8c019198(ar4_00,ar5,ar6,ar7);
  uVar1 = FUN_8c015510(*(int *)(iVar2 + (short)uVar1 * 0x124) + 0x1e8,ar5,ar6,ar7);
  FUN_8c02a29c(ar4,uVar1,ar6,ar7);
  uVar1 = FUN_8c256210(1,uVar1,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c029ca8\n.set _FUN_8c029ca8, _FUN_8c029ca8_def\n");
//@unit 8c029d64
#include "../decls.h"
undefined4 FUN_8c029d64_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  double *pdVar2;
  undefined4 ar5_00;
  double dVar3;
  undefined4 uVar4;
  double in_xd14;
  undefined4 in_PR;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  uVar4 = *(undefined4 *)(*(int *)(ar5 + 4) + 0x14);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  uVar1 = ar6;
  FUN_8c029af0(ar4,ar5,ar6,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  dVar3 = in_xd14;
  if (cVar6 == '\0') {
    dVar3 = (double)CONCAT44(uVar4,*(undefined4 *)(ar4 + 0x5c));
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44((float)((ulonglong)dVar3 >> 0x20) * SUB84(dVar3,0),SUB84(dVar3,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
  }
  if (cVar6 == '\0') {
    *(int *)pdVar2 = (int)((ulonglong)dVar3 >> 0x20);
  }
  else {
    *pdVar2 = dVar3;
  }
  ar5_00 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,ar5_00,uVar1,ar7);
  pdVar2 = (double *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar6 == '\0') {
    *(undefined4 *)pdVar2 = uVar4;
  }
  else {
    *pdVar2 = in_xd14;
  }
  if (*(int *)(ar5 + 0x2c) != 0) {
    ar5_00 = *(undefined4 *)(ar5 + 0x2c);
    FUN_8c029d64(ar4,ar5_00,ar6,ar7);
    uVar1 = ar6;
  }
  uVar1 = FUN_8c256210(1,ar5_00,uVar1,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c029d64\n.set _FUN_8c029d64, _FUN_8c029d64_def\n");
//@unit 8c029dec
#include "../decls.h"
undefined4 FUN_8c029dec_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  double in_dr14;
  undefined8 in_xd0;
  bool bVar12;
  int ar6_00;
  int iVar13;
  char cVar14;
  char cVar15;
  undefined4 in_stack_ffffff9c;
  undefined2 uVar16;
  
  uVar16 = (undefined2)((uint)in_stack_ffffff9c >> 0x10);
  cVar15 = '\0';
  cVar14 = '\0';
  iVar3 = ar5;
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar7 = CONCAT22(uVar16,(short)uVar1);
  if (*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) {
    **(undefined4 **)(ar5 + 4) =
         *(undefined4 *)
          (*(int *)(*(int *)(ar4 + 0x328) + (short)uVar1 * 0x124) + *(int *)(ar4 + 0x3e4) * 4 + 0x40
          );
  }
  else {
    ar6 = (int)*(short *)(ar4 + 0x3fa);
    iVar3 = -0x73d86cf8;
    FUN_8c02ab24(ar4,0x8c279308,ar6,ar7);
    **(undefined4 **)(ar5 + 4) = 0x8c279308;
  }
  FUN_8c0f52c8(ar4,iVar3,ar6,ar7);
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  iVar4 = 0;
  piVar2 = (int *)get_field_4_0253e4(*(undefined4 *)(ar4 + 0x430),iVar3,ar6,ar7);
  if (*(int *)(ar4 + 0x460) != 0) {
    if (*(int *)(ar4 + 0x460) != 2) goto LAB_8c029f42;
    iVar4 = 2;
  }
  iVar4 = iVar4 + 6;
  for (iVar3 = 0; iVar3 < 2; iVar3 = iVar3 + 1) {
    uVar1 = *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8);
    *(undefined4 *)(iVar3 * 0xc + *piVar2 + 8) =
         *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8);
    *(undefined4 *)((iVar4 + iVar3) * 0xc + *piVar2 + 8) = uVar1;
  }
LAB_8c029f42:
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar3 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    ar6_00 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar9 / dVar9);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 1.4411521878487204e+18;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x43b40000,fVar8);
  }
  else {
    dVar9 = 2.17348488426987e-311;
  }
  if (cVar14 == '\0') {
    iVar13 = (int)(SUB84(dVar9,0) / (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    iVar13 = (int)(dVar9 / dVar9);
  }
  FUN_8c256b0c(0,iVar13,ar6_00,iVar3,uVar7);
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x3fc));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x3fc);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x3fc) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x400));
  }
  else {
    *(undefined8 *)(ar4 + 0x3fc) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x400);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x400) = fVar8;
    dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x404));
  }
  else {
    *(undefined8 *)(ar4 + 0x400) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x404);
    dVar9 = 5.238690724707756e-11;
  }
  if (cVar14 == '\0') {
    fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    fVar8 = SUB84(dVar9 * dVar9,0);
  }
  if (cVar15 == '\0') {
    *(float *)(ar4 + 0x404) = fVar8;
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x3fc));
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x400),fVar8);
  }
  else {
    *(undefined8 *)(ar4 + 0x404) = in_xd0;
    dVar9 = *(double *)(ar4 + 0x400);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x404),SUB84(dVar9,0));
  }
  else {
    dVar9 = *(double *)(ar4 + 0x404);
  }
  if (cVar14 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               SUB84(in_dr14,0) + (float)((ulonglong)dVar9 >> 0x20));
  }
  else {
    in_dr14 = in_dr14 + dVar9;
  }
  if (cVar15 == '\0') {
    dVar9 = (double)CONCAT44(0x3dcccccd,SUB84(dVar9,0));
  }
  else {
    dVar9 = -5.238690707360522e-11;
  }
  if (cVar14 == '\0') {
    bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)dVar9 >> 0x20);
  }
  else {
    bVar12 = in_dr14 < dVar9;
  }
  if (bVar12) {
    if (cVar15 == '\0') {
      dVar9 = (double)CONCAT44(0xbdcccccd,SUB84(dVar9,0));
    }
    else {
      dVar9 = -8.132627400321583e-251;
    }
    if (cVar14 == '\0') {
      bVar12 = (float)((ulonglong)dVar9 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar12 = dVar9 < in_dr14;
    }
    if (bVar12) {
      FUN_8c02a1fc(ar4 + 0x3fc,iVar13,ar6_00,iVar3);
    }
  }
  uVar6 = SUB84(dVar9,0);
  uVar11 = SUB84(in_dr14,0);
  uVar1 = *(undefined4 *)(ar5 + 4);
  FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
  if (*(int *)(ar4 + 0x460) != 1) {
    for (iVar13 = 0; iVar13 < 2; iVar13 = iVar13 + 1) {
      uVar5 = *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8);
      *(undefined4 *)((iVar4 + iVar13) * 0xc + *piVar2 + 8) =
           *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8);
      *(undefined4 *)(iVar13 * 0xc + *piVar2 + 8) = uVar5;
    }
  }
  if (*(int *)(ar4 + 0x45c) != 0) {
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)*(int *)(ar4 + 0x45c),uVar11);
    }
    else {
      dVar9 = (double)*(int *)(ar4 + 0x45c);
    }
    if (cVar15 == '\0') {
      dVar10 = (double)CONCAT44(0x44e10000,uVar6);
    }
    else {
      dVar10 = 2.3262783273243e-311;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) /
                               (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 / dVar10;
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) - 1.0,SUB84(dVar9,0));
    }
    else {
      dVar9 = dVar9 - (double)CONCAT44(0x3f800000,SUB84(dVar10,0));
    }
    if (cVar15 == '\0') {
      *(int *)(ar4 + 0x448) = (int)((ulonglong)dVar9 >> 0x20);
      *(undefined4 *)(ar4 + 0x44c) = *(undefined4 *)(ar4 + 0x43c);
      *(undefined4 *)(ar4 + 0x450) = *(undefined4 *)(ar4 + 0x440);
      *(undefined4 *)(ar4 + 0x454) = *(undefined4 *)(ar4 + 0x444);
    }
    else {
      *(double *)(ar4 + 0x448) = dVar9;
      *(undefined8 *)(ar4 + 0x44c) = *(undefined8 *)(ar4 + 0x43c);
      *(undefined8 *)(ar4 + 0x450) = *(undefined8 *)(ar4 + 0x440);
      *(undefined8 *)(ar4 + 0x454) = *(undefined8 *)(ar4 + 0x444);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
    uVar6 = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = uVar6;
    FUN_8c256328(0,uVar1,ar6_00,iVar3,uVar7);
    FUN_8c256fec(0,uVar1,ar6_00,iVar3,uVar7);
    uVar1 = *(undefined4 *)(ar5 + 4);
    FUN_8c02a29c(ar4,uVar1,ar6_00,iVar3);
    FUN_8c256210(1,uVar1,ar6_00,iVar3);
    uVar7 = *(undefined4 *)(*piVar2 + 0x44);
    *(undefined4 *)(*piVar2 + 0x44) = *(undefined4 *)(*piVar2 + 8);
    *(undefined4 *)(*piVar2 + 8) = uVar7;
    if (cVar15 == '\0') {
      *(undefined4 *)(ar4 + 0x448) = *(undefined4 *)(ar4 + 0x438);
    }
    else {
      *(undefined8 *)(ar4 + 0x448) = *(undefined8 *)(ar4 + 0x438);
    }
    FUN_8c233dac(ar4 + 0x448,uVar1,ar6_00,iVar3);
  }
  FUN_8c01538c(*(undefined4 *)(ar4 + 0x42c),uVar1,ar6_00,iVar3);
  uVar1 = FUN_8c0f5308(ar4,uVar1,ar6_00,iVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c029dec\n.set _FUN_8c029dec, _FUN_8c029dec_def\n");
//@unit 8c02a1fc
#include "../decls.h"
undefined4 FUN_8c02a1fc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[2] = 0;
  ar4[1] = 0;
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c02a1fc\n.set _FUN_8c02a1fc, _FUN_8c02a1fc_def\n");
//@unit 8c02a230
#include "../decls.h"
float * FUN_8c02a230_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  float *pfVar1;
  float fVar2;
  undefined8 in_xd14;
  undefined4 in_PR;
  char cVar3;
  
  cVar3 = '\0';
  fVar2 = *(float *)(*(int *)(ar5 + 4) + 0x14);
  *(float *)(*(int *)(ar5 + 4) + 0x14) = fVar2 * *(float *)(ar4 + 0x468);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c02a29c(ar4,*(undefined4 *)(ar5 + 4),ar6,ar7);
  pfVar1 = (float *)(*(int *)(ar5 + 4) + 0x14);
  if (cVar3 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd14;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c02a230\n.set _FUN_8c02a230, _FUN_8c02a230_def\n");
//@unit 8c02a29c
#include "../decls.h"
undefined4 FUN_8c02a29c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c219a86(ar5,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02a29c\n.set _FUN_8c02a29c, _FUN_8c02a29c_def\n");
//@unit 8c02a2b8
#include "../decls.h"
undefined4 FUN_8c02a2b8_def(int ar4,undefined4 ar5,undefined4 ar6,double *ar7)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  undefined1 *ar6_01;
  double *ar7_00;
  float *pfVar3;
  float fVar4;
  code *pcVar5;
  ulonglong uVar6;
  double dVar7;
  code *pcVar9;
  double dVar8;
  float fVar10;
  double in_xd0;
  char cVar11;
  char cVar12;
  undefined4 uStack_7c;
  undefined4 auStack_74 [4];
  undefined4 uStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  code *pcStack_54;
  code *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [16];
  float fStack_1c;
  float fStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar12 = '\0';
  cVar11 = '\0';
  uVar2 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(&fStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_2c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_3c,uVar2,ar6_00,ar7_00);
  Vec3_ctor_zero(&uStack_4c,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_58,uVar2,ar6_00,ar7_00);
  Vec3_set_zero(&uStack_64,uVar2,ar6_00,ar7_00);
  FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),uVar2,ar6_00,ar7_00,auStack_74);
  Vec3_assign(&uStack_3c,auStack_74,ar6_00,ar7_00);
  Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
  if (cVar12 == '\0') {
    uVar6 = CONCAT44(0xc7c35000,uStack_3c);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
    uVar6 = 0x8c014a34c7c35000;
  }
  if ((float)uVar6 == (float)(uVar6 >> 0x20)) {
    if (cVar12 == '\0') {
      *(float *)ar7 = 0.0;
    }
    else {
      *ar7 = (double)(uVar6 & 0xffffffff);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = 0.0;
    }
    else {
      *(ulonglong *)((int)ar7 + 4) = uVar6 & 0xffffffff;
    }
    if (cVar12 == '\0') {
      *(float *)(ar7 + 1) = 0.0;
    }
    else {
      ar7[1] = (double)(uVar6 & 0xffffffff);
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_00,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_00,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_00,ar7_00);
  }
  else {
    FUN_8c02a568(ar4,ar6,&uStack_4c,ar7_00);
    ar6_01 = auStack_2c;
    FUN_8c02a5d4(ar4,ar5,ar6_01,ar7_00);
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_4c,uStack_3c);
    }
    else {
      in_xd0 = (double)CONCAT44(uStack_38,uStack_3c);
      dVar7 = (double)CONCAT44(uStack_48,uStack_4c);
    }
    if (cVar11 == '\0') {
      fStack_1c = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_48,uStack_38);
    }
    else {
      fStack_1c = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_34,uStack_38);
      dVar7 = (double)CONCAT44(uStack_44,uStack_48);
    }
    if (cVar11 == '\0') {
      fStack_18 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar7 - dVar7,0);
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44(uStack_44,uStack_34);
    }
    else {
      fStack_18 = SUB84(in_xd0,0);
      in_xd0 = (double)CONCAT44(uStack_30,uStack_34);
      dVar7 = (double)CONCAT44(uStack_40,uStack_44);
    }
    if (cVar11 == '\0') {
      fVar4 = (float)((ulonglong)dVar7 >> 0x20);
      dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) - fVar4);
    }
    else {
      dVar7 = dVar7 - dVar7;
    }
    if (cVar12 == '\0') {
      uStack_14 = SUB84(dVar7,0);
    }
    else {
      uStack_14 = SUB84(in_xd0,0);
      uStack_10 = (undefined4)((ulonglong)in_xd0 >> 0x20);
    }
    FUN_8c0231c8(auStack_2c,ar5,ar6_01,ar7_00);
    uStack_58 = SUB84(dVar7,0);
    pcVar5 = (code *)((ulonglong)dVar7 >> 0x20);
    uVar2 = pcVar5;
    if (cVar12 == '\0') {
      uVar2 = auStack_74[0];
      uStack_58 = pcVar5;
      pcVar5 = pcStack_54;
    }
    pcStack_54 = pcVar5;
    auStack_74[0] = uVar2;
    FUN_8c0231c8(&fStack_1c,ar5,ar6_01,ar7_00);
    uStack_64 = (undefined4)((ulonglong)dVar7 >> 0x20);
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(uStack_58,uStack_64);
      dVar7 = in_xd0;
    }
    else {
      uStack_7c = SUB84(dVar7,0);
      dVar8 = (double)CONCAT44(pcStack_54,uStack_58);
      uStack_64 = uStack_7c;
      pcStack_60 = (code *)uStack_64;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)ar7 = fVar4;
      pcVar5 = *(code **)ar7;
      fVar4 = -20.0;
    }
    else {
      *ar7 = dVar7;
      dVar7 = *ar7;
      pcVar5 = (code *)0xc1a00000;
      fVar4 = 20.0;
    }
    if (cVar11 != '\0' || fVar4 <= (float)(uint)pcVar5) {
      if (cVar12 == '\0') {
        pcVar5 = *(code **)ar7;
        pcVar9 = (code *)0x41a00000;
      }
      else {
        dVar7 = *ar7;
        pcVar5 = (code *)0x41a00000;
        pcVar9 = FUN_8c02327c;
      }
      if (cVar11 == '\0' && (float)(uint)pcVar9 < (float)(uint)pcVar5) {
        if (cVar12 == '\0') {
          pcVar9 = (code *)0x41a00000;
          *(float *)ar7 = 20.0;
        }
        else {
          pcVar5 = (code *)0x41a00000;
          pcVar9 = FUN_8c02327c;
          *ar7 = -7.94252136586639e-251;
        }
      }
    }
    else if (cVar12 == '\0') {
      pcVar9 = (code *)0xc1a00000;
      *(float *)ar7 = -20.0;
    }
    else {
      pcVar5 = (code *)0xc1a00000;
      pcVar9 = (code *)0x41a00000;
      *ar7 = 134217824.8125;
    }
    FUN_8c02327c(auStack_2c,ar5,ar6_01,ar7_00);
    pcStack_54 = pcVar5;
    pcVar1 = pcVar9;
    if (cVar12 == '\0') {
      pcStack_54 = pcVar9;
      pcVar1 = pcStack_50;
    }
    pcStack_50 = pcVar1;
    FUN_8c02327c(&fStack_1c,ar5,ar6_01,ar7_00);
    pcStack_60 = pcVar5;
    if (cVar12 == '\0') {
      dVar8 = (double)CONCAT44(pcStack_54,pcVar9);
      pcStack_60 = pcVar9;
    }
    else {
      dVar7 = (double)CONCAT44(pcVar9,pcStack_60);
      dVar8 = (double)CONCAT44(pcStack_50,pcStack_54);
      pcStack_5c = pcVar9;
    }
    if (cVar11 == '\0') {
      fVar4 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar8 - dVar8,0);
    }
    if (cVar12 == '\0') {
      *(float *)((int)ar7 + 4) = fVar4;
      fVar4 = *(float *)((int)ar7 + 4);
      fVar10 = -40.0;
    }
    else {
      *(double *)((int)ar7 + 4) = dVar7;
      fVar4 = -40.0;
      fVar10 = 40.0;
    }
    if (cVar11 != '\0' || fVar10 <= fVar4) {
      if (cVar12 == '\0') {
        fVar4 = *(float *)((int)ar7 + 4);
        fVar10 = 40.0;
      }
      else {
        fVar4 = 40.0;
        fVar10 = NAN;
      }
      if (cVar11 == '\0' && fVar10 < fVar4) {
        pfVar3 = (float *)((int)ar7 + 4);
        if (cVar12 == '\0') {
          *pfVar3 = 40.0;
        }
        else {
          pfVar3[0] = 40.0;
          pfVar3[1] = NAN;
        }
      }
    }
    else {
      pfVar3 = (float *)((int)ar7 + 4);
      if (cVar12 == '\0') {
        *pfVar3 = -40.0;
      }
      else {
        pfVar3[0] = -40.0;
        pfVar3[1] = 40.0;
      }
    }
    object_dtor_delete(&uStack_64,0xffffffff,ar6_01,ar7_00);
    object_dtor_delete(&uStack_58,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_4c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(&uStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar2 = Vec3_dtor(&fStack_1c,0xffffffff,ar6_01,ar7_00);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02a2b8\n.set _FUN_8c02a2b8, _FUN_8c02a2b8_def\n");
//@unit 8c02a544
#include "../decls.h"
undefined4 FUN_8c02a544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x70,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02a544\n.set _FUN_8c02a544, _FUN_8c02a544_def\n");
//@unit 8c02a568
#include "../decls.h"
undefined4 FUN_8c02a568_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_stack_ffffff9c;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [68];
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  FUN_8c212740(auStack_4c,&uStack_58,&stack0xffffff9c,ar7,in_stack_ffffff9c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = in_stack_ffffff9c;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,in_stack_ffffff9c);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 8;
}

__asm__(".globl _FUN_8c02a568\n.set _FUN_8c02a568, _FUN_8c02a568_def\n");
//@unit 8c02a5d4
#include "../decls.h"
undefined4 FUN_8c02a5d4_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  char cVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined1 auStack_4c [48];
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  cVar1 = '\0';
  uStack_58 = *ar5;
  uStack_54 = ar5[1];
  uStack_50 = ar5[2];
  uStack_1c = in_fr1;
  FUN_8c024340(auStack_4c,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    uStack_1c = 0;
  }
  else {
    uStack_64 = 0;
    uStack_10 = 0;
  }
  uStack_14 = 0;
  uStack_18 = 0;
  FUN_8c212740(auStack_4c,&uStack_58,&uStack_64,ar7,uStack_1c);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = uStack_64;
    *(undefined4 *)((int)ar6 + 4) = uStack_60;
  }
  else {
    *ar6 = CONCAT44(uStack_60,uStack_64);
    *(ulonglong *)((int)ar6 + 4) = CONCAT44(uStack_5c,uStack_60);
  }
  if (cVar1 == '\0') {
    *(undefined4 *)(ar6 + 1) = uStack_5c;
  }
  else {
    ar6[1] = CONCAT44(uStack_58,uStack_5c);
  }
  return 0x10;
}

__asm__(".globl _FUN_8c02a5d4\n.set _FUN_8c02a5d4, _FUN_8c02a5d4_def\n");
//@unit 8c02a668
#include "../decls.h"
undefined4 FUN_8c02a668_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int a5;
  undefined1 auStack_18 [20];
  
  a5 = ar4 + 0x30;
  (**(code **)(**(int **)(0x30c + ar4) + 0x38))(*(int **)(0x30c + ar4),a5,ar5,ar6);
  FUN_8c02a6d0(*(undefined4 *)(0x30c + ar4),a5,ar5,ar6,auStack_18);
  FUN_8c023aa0(ar4 + 0x30,auStack_18,ar5,ar6);
  Vec3_dtor(auStack_18,0xffffffff,ar5,ar6);
  return 1;
}

__asm__(".globl _FUN_8c02a668\n.set _FUN_8c02a668, _FUN_8c02a668_def\n");
//@unit 8c02a6d0
#include "../decls.h"
undefined4 FUN_8c02a6d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x200,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02a6d0\n.set _FUN_8c02a6d0, _FUN_8c02a6d0_def\n");
//@unit 8c02a6f8
#include "../decls.h"
undefined4 FUN_8c02a6f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  
  FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7);
  ar5_00 = FUN_8c02a758(ar4 + 0x174,ar5,ar6,ar7);
  FUN_8c02c758(ar4 + 0x174,ar5_00,ar6,ar7);
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xfffffff7;
  return 0x74;
}

__asm__(".globl _FUN_8c02a6f8\n.set _FUN_8c02a6f8, _FUN_8c02a6f8_def\n");
//@unit 8c02a758
#include "../decls.h"
undefined4 FUN_8c02a758_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_30_02a780(ar4 + 0xa8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02a758\n.set _FUN_8c02a758, _FUN_8c02a758_def\n");
//@unit 8c02a780
#include "../decls.h"
undefined4 get_field_30_02a780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x30);
}

__asm__(".globl _get_field_30_02a780\n.set _get_field_30_02a780, _get_field_30_02a780_def\n");
//@unit 8c02a788
#include "../decls.h"
undefined4 FUN_8c02a788_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 *ar6_00;
  undefined1 auStack_1c [20];
  
  uVar2 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  sVar1 = (short)uVar2;
  if (*(short *)(ar4 + 0x3f8) < *(short *)(ar4 + 0x3fa)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    *(undefined2 *)(ar4 + 0x3f8) = 1;
    if (*(int *)(ar4 + 0x3f4) == 0) {
      *(undefined4 *)(ar4 + 0x3dc) = *(undefined4 *)(ar4 + 0x3d8);
    }
    else if (*(int *)(ar4 + 0x3f4) == 1) {
      *(short *)(ar4 + 0x3f0) = *(short *)(ar4 + 0x3f0) + 1;
      if (*(int *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec)) == 0x50) {
        ar5 = *(undefined4 *)(ar4 + 0x3e4);
        FUN_8c02aab0(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
        *(undefined2 *)(ar4 + 0x3f0) = 0;
        *(undefined4 *)(ar4 + 0x3f4) = 0;
        *(undefined4 *)(ar4 + 0x3ec) = 0;
        *(undefined4 *)(ar4 + 0x3e0) = 0;
      }
      else {
        *(undefined4 *)(ar4 + 0x3e4) =
             *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      }
    }
  }
  if (*(int *)(ar4 + 0x3e0) == 0) {
    uVar2 = get_field_94_02aaa4(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    FUN_8c02a544(*(undefined4 *)(ar4 + 0x308),ar5,ar6,ar7,auStack_1c);
    ar6_00 = auStack_1c;
    uVar2 = FUN_8c02b208(ar4 + 0x310,*(undefined4 *)(ar4 + 0x3e4),ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x3e4) = uVar2;
    Vec3_dtor(auStack_1c,0xffffffff,ar6_00,ar7);
  }
  else {
    *(undefined4 *)(ar4 + 0x3e4) =
         *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
  }
  if (*(int *)(ar4 + 0x3e4) != *(int *)(ar4 + 1000)) {
    *(undefined2 *)(ar4 + 0x3fa) = 0;
    if ((*(int *)(ar4 + 0x3e4) < 0x4f) && (0x46 < *(int *)(ar4 + 0x3e4))) {
                    
      *(int *)(ar4 + 0x3ec) =
           *(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + (*(int *)(ar4 + 0x3e4) + -0x47) * 8;
      *(undefined4 *)(ar4 + 0x3e4) =
           *(undefined4 *)(*(short *)(ar4 + 0x3f0) * 4 + **(int **)(ar4 + 0x3ec));
      *(undefined4 *)(ar4 + 0x3f4) = 1;
      *(undefined4 *)(ar4 + 0x3e0) = 1;
    }
    *(undefined4 *)(ar4 + 0x3d8) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 4 + 0x40);
    *(undefined4 *)(ar4 + 0x3dc) =
         *(undefined4 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 1000) * 4 + 0x40);
    *(undefined2 *)(ar4 + 0x3f8) =
         *(undefined2 *)
          (*(int *)(sVar1 * 0x124 + *(int *)(ar4 + 0x328)) + *(int *)(ar4 + 0x3e4) * 2 + 0x158);
  }
  if (*(int *)(ar4 + 0x3dc) != *(int *)(ar4 + 0x3d8)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3fa) + 1;
  }
  if (((*(int *)(ar4 + 0x3dc) == *(int *)(ar4 + 0x3d8)) &&
      (*(short *)(ar4 + 0x3fa) < *(short *)(ar4 + 0x3f8))) && (*(int *)(ar4 + 0x3e0) == 1)) {
    *(short *)(ar4 + 0x3fa) = *(short *)(ar4 + 0x3f8) + 1;
  }
  *(undefined4 *)(ar4 + 1000) = *(undefined4 *)(ar4 + 0x3e4);
  return 1000;
}

__asm__(".globl _FUN_8c02a788\n.set _FUN_8c02a788, _FUN_8c02a788_def\n");
//@unit 8c02aaa4
#include "../decls.h"
undefined4 get_field_94_02aaa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x94 + ar4);
}

__asm__(".globl _get_field_94_02aaa4\n.set _get_field_94_02aaa4, _get_field_94_02aaa4_def\n");
//@unit 8c02aab0
#include "../decls.h"
int FUN_8c02aab0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x94;
  *(undefined4 *)(0x94 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02aab0\n.set _FUN_8c02aab0, _FUN_8c02aab0_def\n");
//@unit 8c02aabc
#include "../decls.h"
int FUN_8c02aabc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c015510))
                    (*(int *)((short)uVar1 * 0x124 + *(int *)(0x328 + ar4)) +
                     0x1e4,ar5,ar6,ar7);
  iVar2 = *(int *)(0x344 + ar4);
  *(undefined4 *)(iVar2 + 4) = uVar1;
  return iVar2;
}

__asm__(".globl _FUN_8c02aabc\n.set _FUN_8c02aabc, _FUN_8c02aabc_def\n");
//@unit 8c02ab24
#include "../decls.h"
uint FUN_8c02ab24_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 2; uVar1 < _DAT_8c27c1e8 - 1U; uVar1 = uVar1 + 1) {
    *(float *)(ar5 + uVar1 * 4) =
         *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4) +
         ((*(float *)(*(int *)(ar4 + 0x3d8) + uVar1 * 4) -
          *(float *)(*(int *)(ar4 + 0x3dc) + uVar1 * 4)) * (float)ar6) /
         (float)(int)*(short *)(ar4 + 0x3f8);
  }
  return _DAT_8c27c1e8 - 1U;
}

__asm__(".globl _FUN_8c02ab24\n.set _FUN_8c02ab24, _FUN_8c02ab24_def\n");
//@unit 8c02aba0
#include "../decls.h"
undefined4 FUN_8c02aba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int a7;
  undefined8 in_dr0;
  double dVar4;
  undefined8 in_xd0;
  char cVar5;
  char cVar6;
  undefined4 in_stack_ffffffac;
  float fStack_4c;
  undefined4 auStack_48 [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [20];
  
  cVar6 = '\0';
  cVar5 = '\0';
  a7 = ar4 + 0x5c;
  iVar3 = ar4 + 0x50;
  iVar1 = ar4 + 0x30;
  (**(code **)(**(int **)(ar4 + 0xa4) + 0x10))(*(int **)(ar4 + 0xa4),iVar1,iVar3,a7);
  FUN_8c02ace4(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,auStack_28);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),iVar1,iVar3,a7,in_stack_ffffffac);
  if (cVar6 == '\0') {
    dVar4 = (double)CONCAT44(0x40000000,(int)((ulonglong)in_dr0 >> 0x20));
    in_dr0 = in_xd0;
  }
  else {
    dVar4 = -7.957972504406915e-251;
  }
  if (cVar5 == '\0') {
    fStack_4c = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_4c = SUB84(dVar4 * dVar4,0);
  }
  if (cVar6 != '\0') {
    fStack_4c = (float)in_dr0;
    auStack_48[0] = (undefined4)((ulonglong)in_dr0 >> 0x20);
  }
  Vec3_scale(auStack_28,&fStack_4c,iVar3,a7,auStack_38);
  Vec3_add(ar4 + 0x30,auStack_38,iVar3,a7,auStack_48);
  Vec3_ctor_copy(auStack_18,auStack_48,iVar3,a7);
  Vec3_dtor(auStack_48,0xffffffff,iVar3,a7);
  Vec3_dtor(auStack_38,0xffffffff,iVar3,a7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_28,0xffffffff,iVar3,a7);
  FUN_8c027224(*(undefined4 *)(ar4 + 0x30c),uVar2,iVar3,a7,in_stack_ffffffac);
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x28))((int *)(ar4 + 0xa8),ar4 + 0x30,iVar3,a7);
  iVar3 = ar4 + 0x5c;
  iVar1 = ar4 + 0x50;
  (**(code **)(*(int *)(ar4 + 0xa8) + 0x10))((int *)(ar4 + 0xa8),auStack_18,iVar1,iVar3);
  uVar2 = Vec3_dtor(auStack_18,0xffffffff,iVar1,iVar3);
  return uVar2;
}

__asm__(".globl _FUN_8c02aba0\n.set _FUN_8c02aba0, _FUN_8c02aba0_def\n");
//@unit 8c02ace4
#include "../decls.h"
undefined4 FUN_8c02ace4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x80,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02ace4\n.set _FUN_8c02ace4, _FUN_8c02ace4_def\n");
//@unit 8c02ad0c
#include "../decls.h"
undefined4 FUN_8c02ad0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  FUN_8c02ad38(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7,s0);
  return s0;
}

__asm__(".globl _FUN_8c02ad0c\n.set _FUN_8c02ad0c, _FUN_8c02ad0c_def\n");
//@unit 8c02ad38
#include "../decls.h"
undefined4 FUN_8c02ad38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  Vec3_normalize(ar4 + 4,ar5,ar6,ar7);
  return s0;
}

__asm__(".globl _FUN_8c02ad38\n.set _FUN_8c02ad38, _FUN_8c02ad38_def\n");
//@unit 8c02ad5c
#include "../decls.h"
undefined4 FUN_8c02ad5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  FUN_8c02ace4(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7,s0);
  return s0;
}

__asm__(".globl _FUN_8c02ad5c\n.set _FUN_8c02ad5c, _FUN_8c02ad5c_def\n");
//@unit 8c02ad88
#include "../decls.h"
undefined4 FUN_8c02ad88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  
  fVar3 = (float)*(int *)(ar4 + 0x458) / 5400.0;
  *(float *)(ar4 + 0x438) = fVar3 * 0.0;
  *(float *)(ar4 + 0x43c) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x440) = fVar3 * -0.84705883;
  *(float *)(ar4 + 0x444) = fVar3 * -1.0;
  iVar1 = *(int *)(ar4 + 0x458);
  *(int *)(ar4 + 0x458) = iVar1 + 1;
  uVar2 = 0x1518;
  if (0x1518 < iVar1 + 1) {
    *(undefined4 *)(ar4 + 0x458) = 0;
    uVar2 = 0x74;
    *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0x7fffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02ad88\n.set _FUN_8c02ad88, _FUN_8c02ad88_def\n");
//@unit 8c02ae38
#include "../decls.h"
undefined4 FUN_8c02ae38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  float fStack_18;
  int iStack_14;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  iVar2 = *(int *)(ar4 + 0x328) + (short)uVar1 * 0x124;
  if (cVar7 == '\0') {
    uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x170);
    uVar4 = *(undefined8 *)(ar4 + 0x5c);
  }
  if (cVar6 != '\0' || (float)uVar4 <= (float)((ulonglong)uVar4 >> 0x20)) {
    if (cVar7 == '\0') {
      uVar4 = CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(ar4 + 0x170));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x170);
      uVar4 = *(undefined8 *)(ar4 + 0x5c);
    }
    if (cVar6 == '\0' && (float)uVar4 < (float)((ulonglong)uVar4 >> 0x20)) {
      if (cVar7 == '\0') {
        uVar1 = *(undefined4 *)(ar4 + 0x170);
        *(undefined4 *)(ar4 + 100) = uVar1;
        *(undefined4 *)(ar4 + 0x60) = uVar1;
        *(undefined4 *)(ar4 + 0x5c) = uVar1;
      }
      else {
        uVar4 = *(undefined8 *)(ar4 + 0x170);
        *(undefined8 *)(ar4 + 100) = uVar4;
        *(undefined8 *)(ar4 + 0x60) = uVar4;
        *(undefined8 *)(ar4 + 0x5c) = uVar4;
      }
    }
  }
  else {
    if (cVar7 == '\0') {
      dVar5 = (double)CONCAT44(*(undefined4 *)(iVar2 + 0xc0),*(undefined4 *)(ar4 + 100));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 100);
      dVar5 = *(double *)(iVar2 + 0xc0);
    }
    if (cVar6 == '\0') {
      fStack_18 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar5 + dVar5,0);
    }
    iStack_14 = ar4;
    if (cVar7 != '\0') {
      fStack_18 = (float)in_xd0;
      iStack_14 = (int)((ulonglong)in_xd0 >> 0x20);
    }
    if (cVar7 == '\0') {
      *(float *)(iStack_14 + 100) = fStack_18;
      *(float *)(ar4 + 0x60) = fStack_18;
      *(float *)(ar4 + 0x5c) = fStack_18;
    }
    else {
      *(ulonglong *)(iStack_14 + 100) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x60) = CONCAT44(iStack_14,fStack_18);
      *(ulonglong *)(ar4 + 0x5c) = CONCAT44(iStack_14,fStack_18);
    }
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x60),*(undefined4 *)(iVar2 + 0xe8));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xe8);
    dVar5 = *(double *)(ar4 + 0x60);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x408) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x408) = in_xd0;
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x5c),*(undefined4 *)(iVar2 + 0xec));
  }
  else {
    in_xd0 = *(undefined8 *)(iVar2 + 0xec);
    dVar5 = *(double *)(ar4 + 0x5c);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x40c) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x40c) = in_xd0;
  }
  return 0xec;
}

__asm__(".globl _FUN_8c02ae38\n.set _FUN_8c02ae38, _FUN_8c02ae38_def\n");
//@unit 8c02af68
#include "../decls.h"
int FUN_8c02af68_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(0x47c + ar4);
  if (iVar1 != ar5) {
    *(undefined4 *)(0x474 + ar4) = 1;
    *(undefined4 *)(0x470 + ar4) = 0;
    iVar1 = 0x47c;
    *(int *)(0x47c + ar4) = ar5;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02af68\n.set _FUN_8c02af68, _FUN_8c02af68_def\n");
//@unit 8c02af90
#include "../decls.h"
int s_CAnimal_ChangeBodyTexture_02af96_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = ar5;
  iVar1 = (**(code **)(0x144 + *(int *)(ar4 + 8)))(ar4,ar5,ar6,ar7);
  iVar2 = get_field_4_0253e4(iVar1 + ar5 * 8 + 0x78,iVar2,ar6,ar7);
  if (iVar2 == 0) {
    iVar2 = (*(code *)(&report_error_message))
                      ((&DATA_8c12fdac) + 0x3ba,
                       (&DATA_8c12fdac) + 0x3c8,0,2);
  }
  else {
    *(int *)(0x42c + ar4) = iVar1 + ar5 * 8 + 0x78;
    *(int *)(0x430 + ar4) = iVar1 + ar5 * 8 + 0x88;
    iVar2 = 0x478;
    *(int *)(0x478 + ar4) = ar5;
  }
  return iVar2;
}

__asm__(".globl _s_CAnimal_ChangeBodyTexture_02af96\n.set _s_CAnimal_ChangeBodyTexture_02af96, _s_CAnimal_ChangeBodyTexture_02af96_def\n");
//@unit 8c02b04c
#include "../decls.h"
int FUN_8c02b04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x478;
  *(undefined4 *)(0x478 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02b04c\n.set _FUN_8c02b04c, _FUN_8c02b04c_def\n");
//@unit 8c02b058
#include "../decls.h"
undefined4 FUN_8c02b058_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  undefined4 in_fr1;
  double dVar3;
  float fVar4;
  undefined8 in_dr14;
  double dVar5;
  undefined8 in_xd14;
  char cVar6;
  char cVar7;
  
  uVar2 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  cVar7 = '\0';
  cVar6 = '\0';
  (**(code **)(*(int *)(ar4 + 8) + 0x144))(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar3 = (double)CONCAT44(0x43e10000,in_fr1);
  }
  else {
    dVar3 = 2.2923181056228e-311;
  }
  if (cVar6 == '\0') {
    fVar4 = (float)*(int *)(ar4 + 0x470) / (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fVar4 = SUB84((double)CONCAT44(uVar2,(float)*(int *)(ar4 + 0x470)) / dVar3,0);
  }
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x438),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x438);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((int)((ulonglong)dVar5 >> 0x20),SUB84(dVar5,0) - 1.0);
  }
  else {
    dVar5 = dVar5 - (double)CONCAT44(0x3f800000,SUB84(dVar3,0));
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x438) = in_xd14;
  }
  ar5_00 = *(undefined4 *)(ar4 + 0x478);
  uVar2 = *(undefined4 *)(ar4 + 0x47c);
  s_CAnimal_ChangeBodyTexture_02af96(ar4,uVar2,ar6,ar7);
  *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + 1;
  FUN_8c023df4(ar4 + 0x480,uVar2,ar6,ar7);
  (**(code **)(*(int *)(ar4 + 8) + 0x34))(ar4,uVar2,ar6,ar7);
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x438) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x438) = dVar5;
  }
  s_CAnimal_ChangeBodyTexture_02af96(ar4,ar5_00,ar6,ar7);
  iVar1 = *(int *)(ar4 + 0x470);
  *(int *)(ar4 + 0x470) = iVar1 + 1;
  if (iVar1 < 0x1c2) {
    uVar2 = 0x474;
    *(int *)(ar4 + 0x474) = *(int *)(ar4 + 0x474) + -1;
  }
  else {
    FUN_8c023df4(ar4 + 0x480,ar5_00,ar6,ar7);
    *(undefined4 *)(ar4 + 0x470) = 0;
    *(undefined4 *)(ar4 + 0x474) = 0;
    uVar2 = s_CAnimal_ChangeBodyTexture_02af96(ar4,*(undefined4 *)(ar4 + 0x47c),ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02b058\n.set _FUN_8c02b058, _FUN_8c02b058_def\n");
//@unit 8c02b190
#include "../decls.h"
undefined4 FUN_8c02b190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x45c) = 0x708;
  *(undefined4 *)(ar4 + 0x448) = 0;
  return 0x448;
}

__asm__(".globl _FUN_8c02b190\n.set _FUN_8c02b190, _FUN_8c02b190_def\n");
//@unit 8c02b1b0
#include "../decls.h"
undefined4 FUN_8c02b1b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c026d7c(*(undefined4 *)(0x30c + ar4),ar5,ar6,ar7);
  return 4;
}

__asm__(".globl _FUN_8c02b1b0\n.set _FUN_8c02b1b0, _FUN_8c02b1b0_def\n");
//@unit 8c02b1dc
#include "../decls.h"
int FUN_8c02b1dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  Vec3_ctor_zero(ar4 + 4,ar5,ar6,ar7);
  FUN_8c02b3d4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c02b1dc\n.set _FUN_8c02b1dc, _FUN_8c02b1dc_def\n");
//@unit 8c02b208
#include "../decls.h"
int FUN_8c02b208_def(short *ar4,int ar5,float *ar6,undefined4 ar7)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  
  cVar4 = '\0';
  bVar1 = false;
  if (((ar5 == 0) || (ar5 == 0x2d)) || (ar5 == 0x1e)) {
    if ((*(float *)(ar4 + 2) == -100000.0) && (*ar6 != -100000.0)) {
      bVar1 = true;
    }
    else if ((*(float *)(ar4 + 2) != -100000.0) && (*ar6 == -100000.0)) {
      bVar1 = true;
    }
    *ar4 = *ar4 + 1;
    if (ar4[1] < *ar4) {
      bVar1 = true;
    }
    if (bVar1) {
      if (ar5 == 0) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x48;
        }
        else {
          iVar3 = 0x49;
        }
      }
      else if (ar5 == 0x2d) {
        if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
          iVar3 = 0x4a;
        }
        else {
          iVar3 = 0x4b;
        }
      }
      else {
        iVar3 = ar5;
        if (ar5 == 0x1e) {
          if ((int)((uint)*(byte *)(ar4 + 10) << 0x1e) < 0) {
            iVar3 = 0x4c;
          }
          else {
            iVar3 = 0x4d;
          }
        }
      }
      *ar4 = 0;
      uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
      ar4[1] = (short)uVar2;
      ar5 = iVar3;
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 2) = *ar6;
    }
    else {
      *(undefined8 *)(ar4 + 2) = *(undefined8 *)ar6;
    }
  }
  else {
    *ar4 = 0;
    uVar2 = FUN_8c02b340(ar4,ar5,ar6,ar7);
    ar4[1] = (short)uVar2;
  }
  return ar5;
}

__asm__(".globl _FUN_8c02b208\n.set _FUN_8c02b208, _FUN_8c02b208_def\n");
//@unit 8c02b340
#include "../decls.h"
int FUN_8c02b340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 ar5_00;
  
  uVar2 = rand(ar4,ar5,ar6,ar7);
  ar5_00 = 2;
  uVar2 = libgcc_divide_helper_01031c(uVar2,2,ar6,ar7);
  bVar1 = (byte)uVar2 & 1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfe | bVar1;
  *(byte *)(ar4 + 0x14) = *(byte *)(ar4 + 0x14) & 0xfd | bVar1 << 1;
  uVar2 = rand(ar4,ar5_00,ar6,ar7);
  iVar3 = libgcc_divide_helper_01031c(uVar2,0x96,ar6,ar7);
  return iVar3 + 0x1e;
}

__asm__(".globl _FUN_8c02b340\n.set _FUN_8c02b340, _FUN_8c02b340_def\n");
//@unit 8c02b3d4
#include "../decls.h"
undefined4 FUN_8c02b3d4_def(undefined2 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[1] = 0;
  *ar4 = 0;
  FUN_8c022d04(ar4 + 2,ar5,ar6,ar7);
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfe | 1;
  *(byte *)(ar4 + 10) = *(byte *)(ar4 + 10) & 0xfd | 2;
  return 0x14;
}

__asm__(".globl _FUN_8c02b3d4\n.set _FUN_8c02b3d4, _FUN_8c02b3d4_def\n");
//@unit 8c02b444
#include "../decls.h"
undefined4 get_field_48c_02b444_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x48c + ar4);
}

__asm__(".globl _get_field_48c_02b444\n.set _get_field_48c_02b444, _get_field_48c_02b444_def\n");
//@unit 8c02b450
#include "../decls.h"
int FUN_8c02b450_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x48c;
  *(undefined4 *)(0x48c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02b450\n.set _FUN_8c02b450, _FUN_8c02b450_def\n");
//@unit 8c02b45c
#include "../decls.h"
undefined4 FUN_8c02b45c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return 0xc8;
}

__asm__(".globl _FUN_8c02b45c\n.set _FUN_8c02b45c, _FUN_8c02b45c_def\n");
//@unit 8c02b4ac
#include "../decls.h"
undefined4 FUN_8c02b4ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return 0xcc;
}

__asm__(".globl _FUN_8c02b4ac\n.set _FUN_8c02b4ac, _FUN_8c02b4ac_def\n");
//@unit 8c02b4fc
#include "../decls.h"
undefined4 FUN_8c02b4fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_13c_028d9c(ar4 + 0x174,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02b4fc\n.set _FUN_8c02b4fc, _FUN_8c02b4fc_def\n");
//@unit 8c02b524
#include "../decls.h"
undefined4 FUN_8c02b524_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return 0x120;
}

__asm__(".globl _FUN_8c02b524\n.set _FUN_8c02b524, _FUN_8c02b524_def\n");
//@unit 8c02b574
#include "../decls.h"
undefined4 FUN_8c02b574_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x334;
}

__asm__(".globl _FUN_8c02b574\n.set _FUN_8c02b574, _FUN_8c02b574_def\n");
//@unit 8c02b584
#include "../decls.h"
undefined4 FUN_8c02b584_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return 0xd0;
}

__asm__(".globl _FUN_8c02b584\n.set _FUN_8c02b584, _FUN_8c02b584_def\n");
//@unit 8c02b5d4
#include "../decls.h"
undefined4 FUN_8c02b5d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = vec3_copy_8c02b5fc(s0,ar4 + 0x338,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02b5d4\n.set _FUN_8c02b5d4, _FUN_8c02b5d4_def\n");
//@unit 8c02b5fc
#include "../decls.h"
undefined4 * vec3_copy_8c02b5fc_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  return ar4;
}

__asm__(".globl _vec3_copy_8c02b5fc\n.set _vec3_copy_8c02b5fc, _vec3_copy_8c02b5fc_def\n");
//@unit 8c02b61c
#include "../decls.h"
undefined4 FUN_8c02b61c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return 0xd4;
}

__asm__(".globl _FUN_8c02b61c\n.set _FUN_8c02b61c, _FUN_8c02b61c_def\n");
//@unit 8c02b670
#include "../decls.h"
int FUN_8c02b670_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02bef8(ar4 + 0x174,ar5,ar6,ar7);
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02b670\n.set _FUN_8c02b670, _FUN_8c02b670_def\n");
//@unit 8c02b698
#include "../decls.h"
int FUN_8c02b698_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02bfbc(ar4 + 0x174,ar5,ar6,ar7);
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02b698\n.set _FUN_8c02b698, _FUN_8c02b698_def\n");
//@unit 8c02b6c0
#include "../decls.h"
undefined4 FUN_8c02b6c0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x40c;
}

__asm__(".globl _FUN_8c02b6c0\n.set _FUN_8c02b6c0, _FUN_8c02b6c0_def\n");
//@unit 8c02b6d0
#include "../decls.h"
undefined4 FUN_8c02b6d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x408;
}

__asm__(".globl _FUN_8c02b6d0\n.set _FUN_8c02b6d0, _FUN_8c02b6d0_def\n");
//@unit 8c02b6e0
#include "../decls.h"
int FUN_8c02b6e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x174;
}

__asm__(".globl _FUN_8c02b6e0\n.set _FUN_8c02b6e0, _FUN_8c02b6e0_def\n");
//@unit 8c02b6f0
#include "../decls.h"
undefined4 get_field_308_02b6f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x308 + ar4);
}

__asm__(".globl _get_field_308_02b6f0\n.set _get_field_308_02b6f0, _get_field_308_02b6f0_def\n");
//@unit 8c02b6fc
#include "../decls.h"
undefined4 get_field_30c_02b6fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x30c + ar4);
}

__asm__(".globl _get_field_30c_02b6fc\n.set _get_field_30c_02b6fc, _get_field_30c_02b6fc_def\n");
//@unit 8c02b708
#include "../decls.h"
undefined4 noop_02b708_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b708\n.set _noop_02b708, _noop_02b708_def\n");
//@unit 8c02b70c
#include "../decls.h"
undefined4 noop_02b70c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b70c\n.set _noop_02b70c, _noop_02b70c_def\n");
//@unit 8c02b710
#include "../decls.h"
undefined4 noop_02b710_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b710\n.set _noop_02b710, _noop_02b710_def\n");
//@unit 8c02b714
#include "../decls.h"
undefined4 noop_02b714_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b714\n.set _noop_02b714, _noop_02b714_def\n");
//@unit 8c02b718
#include "../decls.h"
undefined4 noop_02b718_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b718\n.set _noop_02b718, _noop_02b718_def\n");
//@unit 8c02b71c
#include "../decls.h"
undefined4 noop_02b71c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b71c\n.set _noop_02b71c, _noop_02b71c_def\n");
//@unit 8c02b720
#include "../decls.h"
undefined4 noop_02b720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b720\n.set _noop_02b720, _noop_02b720_def\n");
//@unit 8c02b724
#include "../decls.h"
undefined4 noop_02b724_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b724\n.set _noop_02b724, _noop_02b724_def\n");
//@unit 8c02b728
#include "../decls.h"
undefined4 noop_02b728_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b728\n.set _noop_02b728, _noop_02b728_def\n");
//@unit 8c02b72c
#include "../decls.h"
undefined4 noop_02b72c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b72c\n.set _noop_02b72c, _noop_02b72c_def\n");
//@unit 8c02b730
#include "../decls.h"
undefined4 ret_const_0_02b730_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b730\n.set _ret_const_0_02b730, _ret_const_0_02b730_def\n");
//@unit 8c02b738
#include "../decls.h"
undefined4 ret_const_0_02b738_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b738\n.set _ret_const_0_02b738, _ret_const_0_02b738_def\n");
//@unit 8c02b740
#include "../decls.h"
undefined4 ret_const_0_02b740_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b740\n.set _ret_const_0_02b740, _ret_const_0_02b740_def\n");
//@unit 8c02b748
#include "../decls.h"
undefined4 noop_02b748_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b748\n.set _noop_02b748, _noop_02b748_def\n");
//@unit 8c02b74c
#include "../decls.h"
undefined4 noop_02b74c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b74c\n.set _noop_02b74c, _noop_02b74c_def\n");
//@unit 8c02b750
#include "../decls.h"
undefined4 noop_02b750_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b750\n.set _noop_02b750, _noop_02b750_def\n");
//@unit 8c02b754
#include "../decls.h"
undefined4 noop_02b754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b754\n.set _noop_02b754, _noop_02b754_def\n");
//@unit 8c02b758
#include "../decls.h"
undefined4 noop_02b758_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b758\n.set _noop_02b758, _noop_02b758_def\n");
//@unit 8c02b75c
#include "../decls.h"
undefined4 ret_const_0_02b75c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b75c\n.set _ret_const_0_02b75c, _ret_const_0_02b75c_def\n");
//@unit 8c02b764
#include "../decls.h"
undefined4 noop_02b764_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02b764\n.set _noop_02b764, _noop_02b764_def\n");
//@unit 8c02b768
#include "../decls.h"
undefined4 ret_const_0_02b768_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b768\n.set _ret_const_0_02b768, _ret_const_0_02b768_def\n");
//@unit 8c02b770
#include "../decls.h"
undefined4 ret_const_0_02b770_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02b770\n.set _ret_const_0_02b770, _ret_const_0_02b770_def\n");
//@unit 8c02b778
#include "../decls.h"
undefined4 FUN_8c02b778_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259c8,ar5,ar6,ar7);
  uVar3 = 0x8c2792d8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792d8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259d8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792e4;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792e4,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259e8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792f0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792f0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c1259f8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2792fc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2792fc,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125a08 = CONCAT44(_UNK_8c125a0c,0x800000);
                    
  }
  else {
    _DAT_8c125a08 = 0xffffffff00800000;
  }
  uVar1 = FUN_8c02b920(&DAT_8c27d1fc,pcVar2,uVar3,ar7);
  uVar1 = global_list_push(uVar1,FUN_8c02b858,0x8c27d1f0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02b778\n.set _FUN_8c02b778, _FUN_8c02b778_def\n");
//@unit 8c02b858
#include "../decls.h"
int FUN_8c02b858_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_0153e4(ar4 + 0x1f8,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x1f0,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x1ec,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_02b8f0(ar4 + 0x1e8,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_02b8f0(ar4 + 0x1e4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c02b858\n.set _FUN_8c02b858, _FUN_8c02b858_def\n");
//@unit 8c02b8f0
#include "../decls.h"
int free_if_nonnull_wrap_02b8f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_02b8f0\n.set _free_if_nonnull_wrap_02b8f0, _free_if_nonnull_wrap_02b8f0_def\n");
//@unit 8c02b920
#include "../decls.h"
int FUN_8c02b920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 8;
  ar6_00 = 0;
  ar5_00 = (&FUN_8c024508);
  FUN_8c010120(ar4,(&FUN_8c024508),0,8,8);
  FUN_8c0154ec(ar4 + 0x1e4,ar5_00,ar6_00,ar7_00);
  FUN_8c0154ec(ar4 + 0x1e8,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x1ec,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x1f0,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x1f8,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c02b920\n.set _FUN_8c02b920, _FUN_8c02b920_def\n");
//@unit 8c02b9a8
#include "../decls.h"
int FUN_8c02b9a8_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 ar6_00;
  undefined *ar7_00;
  int iVar2;
  int iVar3;
  
  FUN_8c010120(ar4,&LAB_8c02df08,0,0x18,6);
  FUN_8c02d7c8(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1305e0 + ar6 * 0x140));
  ar7_00 = &DAT_8c1304b6 + ar6 * 0x140;
  FUN_8c02da5c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + ar6 * 0x140),
               (int)*(short *)(&DAT_8c1304b4 + ar6 * 0x140),ar7_00,
               *(undefined4 *)(&DAT_8c1304c4 + ar6 * 0x140),
               *(undefined4 *)(&DAT_8c1304c8 + ar6 * 0x140));
  ar6_00 = *(undefined4 *)(&DAT_8c1304d0 + ar6 * 0x140);
  uVar1 = *(undefined4 *)(&DAT_8c1304cc + ar6 * 0x140);
  FUN_8c02e460(ar4 + 0xf8,uVar1,ar6_00,ar7_00);
  iVar3 = ar6 * 0x140;
  *(undefined4 *)(ar4 + 0x134) = ar5;
  *(int *)(ar4 + 0x13c) = ar6;
  uVar1 = FUN_8c02bfd8(ar4,uVar1,ar6_00,ar7_00);
  *(int *)(ar4 + 0x138) = (int)(short)uVar1;
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(undefined4 *)(ar4 + 0x140) = 0;
  *(undefined4 *)(ar4 + 0x148) = 0;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(undefined4 *)(ar4 + iVar2 * 4 + 0x14c) = 0;
  }
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4,iVar3 + -0x73ecfb28,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4,iVar3 + -0x73ecfb14,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x18,iVar3 + -0x73ecfafc,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x18,iVar3 + -0x73ecfae8,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x30,iVar3 + -0x73ecfad0,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x30,iVar3 + -0x73ecfabc,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x48,iVar3 + -0x73ecfaa4,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x48,iVar3 + -0x73ecfa90,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x60,iVar3 + -0x73ecfa78,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x60,iVar3 + -0x73ecfa64,ar6_00,ar7_00,ar5);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar3],ar6_00,ar7_00);
  FUN_8c02bd8c(ar4 + 0x78,iVar3 + -0x73ecfa4c,ar6_00,ar7_00,ar5);
  FUN_8c02bd84(ar4 + 0x78,iVar3 + -0x73ecfa38,ar6_00,ar7_00,ar5);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar3),ar7_00);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar3),ar7_00);
  iVar2 = (int)*(short *)(&DAT_8c1304c0 + iVar3);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar2,ar7_00);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar3),iVar2,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c02b9a8\n.set _FUN_8c02b9a8, _FUN_8c02b9a8_def\n");
//@unit 8c02bd68
#include "../decls.h"
undefined4 FUN_8c02bd68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(short *)(ar4 + 0x14) = (short)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02bd68\n.set _FUN_8c02bd68, _FUN_8c02bd68_def\n");
//@unit 8c02bd70
#include "../decls.h"
undefined4 FUN_8c02bd70_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + ar5 * 2 + 0x22) = (undefined2)ar6;
  return 0x22;
}

__asm__(".globl _FUN_8c02bd70\n.set _FUN_8c02bd70, _FUN_8c02bd70_def\n");
//@unit 8c02bd84
#include "../decls.h"
undefined4 FUN_8c02bd84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02bd84\n.set _FUN_8c02bd84, _FUN_8c02bd84_def\n");
//@unit 8c02bd8c
#include "../decls.h"
undefined4 FUN_8c02bd8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02bd8c\n.set _FUN_8c02bd8c, _FUN_8c02bd8c_def\n");
//@unit 8c02bd94
#include "../decls.h"
undefined4 FUN_8c02bd94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0xb) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02bd94\n.set _FUN_8c02bd94, _FUN_8c02bd94_def\n");
//@unit 8c02bd9c
#include "../decls.h"
undefined4 FUN_8c02bd9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c02bea4(ar4,ar5,ar6,ar7);
  if ((iVar1 < 1) && (uVar2 = FUN_8c025f68(ar4,ar5,ar6,ar7), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  iVar1 = get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7);
  if ((iVar1 == 0x2710) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c02bd9c\n.set _FUN_8c02bd9c, _FUN_8c02bd9c_def\n");
//@unit 8c02be9c
#include "../decls.h"
undefined4 get_field_4_02be9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_02be9c\n.set _get_field_4_02be9c, _get_field_4_02be9c_def\n");
//@unit 8c02bea4
#include "../decls.h"
int FUN_8c02bea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(int *)(*(char *)(ar4 + 8) * 4 + *(int *)(ar4 + 0x10)) - *(int *)(ar4 + 4);
}

__asm__(".globl _FUN_8c02bea4\n.set _FUN_8c02bea4, _FUN_8c02bea4_def\n");
//@unit 8c02bebc
#include "../decls.h"
undefined4 FUN_8c02bebc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (5 < iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(0x14c + ar4 + iVar1 * 4) == 2) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02bebc\n.set _FUN_8c02bebc, _FUN_8c02bebc_def\n");
//@unit 8c02bef8
#include "../decls.h"
int FUN_8c02bef8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_10;
  
  uVar1 = FUN_8c02bfd8(ar4,ar5,ar6,ar7);
  iStack_10 = *(short *)((&DATA_8c1302bc) + (short)uVar1 * 2) + -1;
  uVar1 = FUN_8c02bf8c(ar4,ar5,ar6,ar7);
  if ((int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + ar4) * 2) + (int)(short)uVar1 <
      iStack_10) {
    uVar1 = FUN_8c02bf8c(ar4,ar5,ar6,ar7);
    iStack_10 = (int)*(short *)((&DATA_8c1302e0) + *(int *)(0x13c + ar4) * 2) +
                (int)(short)uVar1;
  }
  return iStack_10;
}

__asm__(".globl _FUN_8c02bef8\n.set _FUN_8c02bef8, _FUN_8c02bef8_def\n");
//@unit 8c02bf8c
#include "../decls.h"
int FUN_8c02bf8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02bfb4(ar4 + 0xa8,ar5,ar6,ar7);
  return (int)(short)uVar1;
}

__asm__(".globl _FUN_8c02bf8c\n.set _FUN_8c02bf8c, _FUN_8c02bf8c_def\n");
//@unit 8c02bfb4
#include "../decls.h"
int FUN_8c02bfb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x16);
}

__asm__(".globl _FUN_8c02bfb4\n.set _FUN_8c02bfb4, _FUN_8c02bfb4_def\n");
//@unit 8c02bfbc
#include "../decls.h"
int FUN_8c02bfbc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)((&DATA_8c1302bc) + *(int *)(0x138 + ar4) * 2);
}

__asm__(".globl _FUN_8c02bfbc\n.set _FUN_8c02bfbc, _FUN_8c02bfbc_def\n");
//@unit 8c02bfd8
#include "../decls.h"
undefined4 FUN_8c02bfd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    if (0x11 < iVar1) {
      return 0xffffffff;
    }
    for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
      if (*(int *)((&DATA_8c13019c) + iVar2 * 4 + iVar1 * 0x10) == *(int *)(0x13c + ar4)) {
        return iVar1;
      }
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c02bfd8\n.set _FUN_8c02bfd8, _FUN_8c02bfd8_def\n");
//@unit 8c02c030
#include "../decls.h"
undefined4 FUN_8c02c030_def(int ar4,int *ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int *ar6_00;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 ar6_01;
  int ar5_01;
  undefined4 in_stack_ffffffb4;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  iVar1 = get_field_24_026024(ar6,ar5,ar6,ar7);
  if (*(char *)(ar4 + 0x144) == '\x01') {
    FUN_8c02c390(ar4 + 0xa8,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    FUN_8c02c388(ar4 + 0x18,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    if (iVar1 == 0) {
      FUN_8c02c388(ar4 + 0x30,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    if (iVar1 == 1) {
      FUN_8c02c388(ar4 + 0x48,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    }
    FUN_8c02c388(ar4 + 0x60,(int)*(char *)(ar4 + 0x144),ar6_00,ar7);
    ar5_00 = (int *)(int)*(char *)(ar4 + 0x144);
    FUN_8c02c388(ar4 + 0x78,ar5_00,ar6_00,ar7);
  }
  if (iVar1 == 0) {
    FUN_8c02df24(ar4,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x18,ar6,ar6_00,ar7);
    FUN_8c02df24(ar4 + 0x30,ar6,ar6_00,ar7);
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x48,ar6,ar6_00,ar7);
    uVar2 = FUN_8c025f68(ar4 + 0x78,ar5_00,ar6_00,ar7);
    in_stack_ffffffb4 =
         CONCAT22((short)((uint)in_stack_ffffffb4 >> 0x10),
                  CONCAT11((char)uVar2,(char)in_stack_ffffffb4));
    if ((char)uVar2 == '\x01') {
      ar5_00 = ar6;
      FUN_8c02df24(ar4 + 0x78,ar6,ar6_00,ar7);
    }
  }
  if (ar5 != *(int **)(ar4 + 0x148)) {
    ar7 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
    ar5_00 = ar6;
    ar6_00 = ar5;
    FUN_8c02e4cc(ar4 + 0xf8,ar6,ar5,ar7);
  }
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5_00,ar6_00,ar7);
  if ((iVar1 == 0) && (ar5 != *(int **)(ar4 + 0x148))) {
    if (ar5 != *(int **)(ar4 + 0x148)) {
      ar6_00 = (int *)FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
      ar5_00 = ar5;
      FUN_8c02d854(ar4 + 0x90,ar5,ar6_00,ar7);
    }
    iVar1 = FUN_8c02c340(ar4 + 0x90,ar5_00,ar6_00,ar7);
    uVar3 = 0xd;
    uVar2 = libgcc_divide_helper_0101e4(iVar1 + -0x32,0xd,ar6_00,ar7);
    ar5_01 = (int)(char)uVar2;
    iVar1 = FUN_8c02c340(ar4 + 0x90,uVar3,ar6_00,ar7);
    if ((iVar1 == 100) && (ar5_01 = 5, _DAT_8c27d430 == 1)) {
      ar5_01 = 4;
    }
    FUN_8c02c338(ar4 + 0x60,ar5_01,ar6_00,ar7);
    iVar1 = FUN_8c02d8fc(ar4 + 0x90,ar5_01,ar6_00,ar7);
    if (iVar1 == 1) {
      FUN_8c02c330(ar4 + 0x60,1,ar6_00,ar7,in_stack_ffffffb4);
    }
    else {
      FUN_8c02c330(ar4 + 0x60,0,ar6_00,ar7,in_stack_ffffffb4);
    }
    ar5_00 = ar6;
    FUN_8c02df24(ar4 + 0x60,ar6,ar6_00,ar7);
  }
  uVar2 = FUN_8c02c518(ar4,ar5_00,ar6_00,ar7);
  FUN_8c02c328(ar4 + 0xa8,uVar2,ar6_00,ar7);
  uVar3 = (**(code **)(*ar6 + 0x148))(ar6,uVar2,ar6_00,ar7);
  uVar2 = FUN_8c02bfd8(ar4,uVar2,ar6_00,ar7);
  ar6_01 = *(undefined4 *)(ar4 + 0x140);
  uVar2 = FUN_8c02c310(uVar3,(int)(short)uVar2,ar6_01,ar7);
  FUN_8c02c308(ar4 + 0xa8,(int)(char)uVar2,ar6_01,ar7);
  uVar2 = *(undefined4 *)(ar4 + 0x13c);
  FUN_8c02db6c(ar4 + 0xa8,uVar2,ar6_01,ar7);
  *(undefined1 *)(ar4 + 0x144) = 0;
  FUN_8c02c5b4(ar4,uVar2,ar6_01,ar7);
  *(int **)(ar4 + 0x148) = ar5;
  return 0x148;
}

__asm__(".globl _FUN_8c02c030\n.set _FUN_8c02c030, _FUN_8c02c030_def\n");
//@unit 8c02c308
#include "../decls.h"
undefined4 FUN_8c02c308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 3) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c308\n.set _FUN_8c02c308, _FUN_8c02c308_def\n");
//@unit 8c02c310
#include "../decls.h"
int FUN_8c02c310_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51);
}

__asm__(".globl _FUN_8c02c310\n.set _FUN_8c02c310, _FUN_8c02c310_def\n");
//@unit 8c02c328
#include "../decls.h"
undefined4 FUN_8c02c328_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x48) = ar5;
  return 0x48;
}

__asm__(".globl _FUN_8c02c328\n.set _FUN_8c02c328, _FUN_8c02c328_def\n");
//@unit 8c02c330
#include "../decls.h"
undefined4 FUN_8c02c330_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02c330\n.set _FUN_8c02c330, _FUN_8c02c330_def\n");
//@unit 8c02c338
#include "../decls.h"
undefined4 FUN_8c02c338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 8) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c338\n.set _FUN_8c02c338, _FUN_8c02c338_def\n");
//@unit 8c02c340
#include "../decls.h"
undefined4 FUN_8c02c340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (*(int *)(ar4 + 4) * 0x3e8,*(int *)(ar4 + 0xc) * 10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02c340\n.set _FUN_8c02c340, _FUN_8c02c340_def\n");
//@unit 8c02c380
#include "../decls.h"
undefined4 FUN_8c02c380_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c02c380\n.set _FUN_8c02c380, _FUN_8c02c380_def\n");
//@unit 8c02c388
#include "../decls.h"
undefined4 FUN_8c02c388_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 10) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02c388\n.set _FUN_8c02c388, _FUN_8c02c388_def\n");
//@unit 8c02c390
#include "../decls.h"
undefined4 FUN_8c02c390_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x4c) = (undefined1)ar5;
  return 0x4c;
}

__asm__(".globl _FUN_8c02c390\n.set _FUN_8c02c390, _FUN_8c02c390_def\n");
//@unit 8c02c398
#include "../decls.h"
int FUN_8c02c398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x144;
  *(undefined1 *)(0x144 + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c02c398\n.set _FUN_8c02c398, _FUN_8c02c398_def\n");
//@unit 8c02c3a8
#include "../decls.h"
undefined4 FUN_8c02c3a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c02bea4(ar4 + 0x48,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x48,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 3;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x30,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x30,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 2;
  }
  iVar1 = FUN_8c02bea4(ar4,ar5,ar6,ar7);
  if ((iVar1 < 1) && (uVar2 = FUN_8c025f68(ar4,ar5,ar6,ar7), (char)uVar2 == '\x01'))
  {
    return 0;
  }
  iVar1 = FUN_8c02bea4(ar4 + 0x18,ar5,ar6,ar7);
  if ((iVar1 < 1) &&
     (uVar2 = FUN_8c025f68(ar4 + 0x18,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
    return 1;
  }
  iVar1 = get_field_4_02be9c(ar4 + 0x18,ar5,ar6,ar7);
  if (iVar1 == 0x2710) {
    uVar2 = 1;
  }
  else {
    iVar1 = get_field_4_02be9c(ar4 + 0x60,ar5,ar6,ar7);
    if ((iVar1 == 0x2710) &&
       (uVar2 = FUN_8c025f68(ar4 + 0x60,ar5,ar6,ar7), (char)uVar2 == '\x01')) {
      return 4;
    }
    iVar1 = FUN_8c02c4e8(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 10;
    }
    else {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02c3a8\n.set _FUN_8c02c3a8, _FUN_8c02c3a8_def\n");
//@unit 8c02c4e8
#include "../decls.h"
int FUN_8c02c4e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02c510(ar4 + 0xa8,ar5,ar6,ar7);
  return (int)(char)uVar1;
}

__asm__(".globl _FUN_8c02c4e8\n.set _FUN_8c02c4e8, _FUN_8c02c4e8_def\n");
//@unit 8c02c510
#include "../decls.h"
int FUN_8c02c510_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x1c);
}

__asm__(".globl _FUN_8c02c510\n.set _FUN_8c02c510, _FUN_8c02c510_def\n");
//@unit 8c02c518
#include "../decls.h"
int FUN_8c02c518_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  cVar3 = -1;
  iVar2 = -1;
  for (iVar4 = 0; iVar4 < 6; iVar4 = iVar4 + 1) {
    uVar1 = FUN_8c025f68(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
    if (((char)uVar1 == '\x01') && (iVar4 != 5)) {
      uVar1 = FUN_8c02c5ac(iVar4 * 0x18 + ar4,ar5,ar6,ar7);
      if (cVar3 < (char)uVar1) {
        iVar2 = iVar4;
        cVar3 = (char)uVar1;
      }
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c02c518\n.set _FUN_8c02c518, _FUN_8c02c518_def\n");
//@unit 8c02c5ac
#include "../decls.h"
int FUN_8c02c5ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 8);
}

__asm__(".globl _FUN_8c02c5ac\n.set _FUN_8c02c5ac, _FUN_8c02c5ac_def\n");
//@unit 8c02c5b4
#include "../decls.h"
undefined4 FUN_8c02c5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    uVar1 = FUN_8c025f68(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\0') {
      if (*(int *)(0x14c + ar4 + iVar2 * 4) == 2) {
        *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 0;
      }
      else if (*(int *)(0x14c + ar4 + iVar2 * 4) == 1) {
        *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 2;
      }
    }
    else {
      *(undefined4 *)(0x14c + ar4 + iVar2 * 4) = 1;
    }
  }
  return 6;
}

__asm__(".globl _FUN_8c02c5b4\n.set _FUN_8c02c5b4, _FUN_8c02c5b4_def\n");
//@unit 8c02c668
#include "../decls.h"
int FUN_8c02c668_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
  if (iVar1 != -1) {
    iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
    uVar2 = FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
    if ((char)uVar2 == '\0') {
      iVar4 = 0;
    }
    else {
      iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
      uVar2 = FUN_8c02e400(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
      uVar3 = FUN_8c02c5ac(iVar1 * 0x18 + ar4,ar5,ar6,ar7);
      ar5 = (int)(char)uVar2;
      iVar4 = libgcc_divide_helper_0101e4(0x1e,ar5,ar6,ar7);
      iVar4 = iVar4 * (char)uVar3;
    }
  }
  iVar1 = FUN_8c02c518(ar4,ar5,ar6,ar7);
  return iVar4 + (uint)(iVar1 != -1) * 0x46;
}

__asm__(".globl _FUN_8c02c668\n.set _FUN_8c02c668, _FUN_8c02c668_def\n");
//@unit 8c02c758
#include "../decls.h"
undefined4 FUN_8c02c758_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_stack_ffffffe4;
  undefined2 uVar5;
  undefined4 ain0;
  
  iVar4 = ar5 * 0x140;
  iVar3 = ar5;
  iVar1 = get_field_34_02cbdc(ar4 + 0xa8,ar5,ar6,ar7);
  if (iVar1 != 0x13) {
    FUN_8c02cbd4(ar4 + 0xa8,0,ar6,ar7,in_stack_ffffffe4);
    iVar3 = 0;
    FUN_8c02cbbc(ar4 + 0x90,0,ar6,ar7);
  }
  uVar5 = (undefined2)((uint)in_stack_ffffffe4 >> 0x10);
  *(undefined1 *)(ar4 + 0x144) = 0;
  *(undefined1 *)(ar4 + 0x164) = 0;
  *(int *)(ar4 + 0x13c) = ar5;
  uVar2 = FUN_8c02bfd8(ar4,iVar3,ar6,ar7);
  ain0 = CONCAT22(uVar5,(short)uVar2);
  *(int *)(ar4 + 0x138) = (int)(short)uVar2;
  FUN_8c02bd94(ar4,(int)(char)(&DAT_8c1304d4)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4,iVar4 + -0x73ecfb28,ar6,ar7,ain0);
  FUN_8c02bd84(ar4,iVar4 + -0x73ecfb14,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x18,(int)(char)(&DAT_8c130500)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x18,iVar4 + -0x73ecfafc,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x18,iVar4 + -0x73ecfae8,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x30,(int)(char)(&DAT_8c13052c)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x30,iVar4 + -0x73ecfad0,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x30,iVar4 + -0x73ecfabc,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x48,(int)(char)(&DAT_8c130558)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x48,iVar4 + -0x73ecfaa4,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x48,iVar4 + -0x73ecfa90,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x60,(int)(char)(&DAT_8c130584)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x60,iVar4 + -0x73ecfa78,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x60,iVar4 + -0x73ecfa64,ar6,ar7,ain0);
  FUN_8c02bd94(ar4 + 0x78,(int)(char)(&DAT_8c1305b0)[iVar4],ar6,ar7);
  FUN_8c02bd8c(ar4 + 0x78,iVar4 + -0x73ecfa4c,ar6,ar7,ain0);
  FUN_8c02bd84(ar4 + 0x78,iVar4 + -0x73ecfa38,ar6,ar7,ain0);
  FUN_8c02cbb4(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305dc + iVar4),ar6,ar7,ain0);
  FUN_8c02cbac(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e4 + iVar4),ar6,ar7,ain0);
  FUN_8c02d81c(ar4 + 0x90,*(undefined4 *)(&DAT_8c1305e0 + iVar4),ar6,ar7);
  FUN_8c02cba4(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304b0 + iVar4),ar6,ar7,ain0);
  FUN_8c02cb9c(ar4 + 0xa8,(int)*(short *)(&DAT_8c1304b4 + iVar4),ar6,ar7);
  FUN_8c02bd70(ar4 + 0xa8,0,(int)*(short *)(&DAT_8c1304b6 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,1,(int)*(short *)(&DAT_8c1304b8 + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,2,(int)*(short *)(&DAT_8c1304ba + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,3,(int)*(short *)(&DAT_8c1304bc + iVar4),ar7);
  FUN_8c02bd70(ar4 + 0xa8,4,(int)*(short *)(&DAT_8c1304be + iVar4),ar7);
  iVar3 = (int)*(short *)(&DAT_8c1304c0 + iVar4);
  FUN_8c02bd70(ar4 + 0xa8,5,iVar3,ar7);
  FUN_8c02cb94(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c4 + iVar4),iVar3,ar7,ain0);
  FUN_8c02cb8c(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304c8 + iVar4),iVar3,ar7,ain0);
  FUN_8c02bd68(ar4 + 0xa8,*(undefined4 *)(&DAT_8c1304ac + iVar4),iVar3,ar7);
  FUN_8c025fbc(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb84(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb7c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb74(ar4 + 0xa8,0,iVar3,ar7);
  FUN_8c02cb6c(ar4 + 0xa8,0,iVar3,ar7,ain0);
  FUN_8c02cb24(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304cc + iVar4),iVar3,ar7);
  uVar2 = FUN_8c02cadc(ar4 + 0xf8,*(undefined4 *)(&DAT_8c1304d0 + iVar4),iVar3,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02c758\n.set _FUN_8c02c758, _FUN_8c02c758_def\n");
//@unit 8c02cadc
#include "../decls.h"
undefined4 FUN_8c02cadc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02cadc\n.set _FUN_8c02cadc, _FUN_8c02cadc_def\n");
//@unit 8c02cb24
#include "../decls.h"
undefined4 FUN_8c02cb24_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (ar5 * 0x708 * 0x3e8,0x34bc0,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02cb24\n.set _FUN_8c02cb24, _FUN_8c02cb24_def\n");
//@unit 8c02cb6c
#include "../decls.h"
undefined4 FUN_8c02cb6c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb6c\n.set _FUN_8c02cb6c, _FUN_8c02cb6c_def\n");
//@unit 8c02cb74
#include "../decls.h"
undefined4 FUN_8c02cb74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 1) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02cb74\n.set _FUN_8c02cb74, _FUN_8c02cb74_def\n");
//@unit 8c02cb7c
#include "../decls.h"
undefined4 FUN_8c02cb7c_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb7c\n.set _FUN_8c02cb7c, _FUN_8c02cb7c_def\n");
//@unit 8c02cb84
#include "../decls.h"
undefined4 FUN_8c02cb84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x18) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb84\n.set _FUN_8c02cb84, _FUN_8c02cb84_def\n");
//@unit 8c02cb8c
#include "../decls.h"
undefined4 FUN_8c02cb8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x30) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb8c\n.set _FUN_8c02cb8c, _FUN_8c02cb8c_def\n");
//@unit 8c02cb94
#include "../decls.h"
undefined4 FUN_8c02cb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x34) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cb94\n.set _FUN_8c02cb94, _FUN_8c02cb94_def\n");
//@unit 8c02cb9c
#include "../decls.h"
undefined4 FUN_8c02cb9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined2 *)(ar4 + 0x20) = (undefined2)ar5;
  return 0x20;
}

__asm__(".globl _FUN_8c02cb9c\n.set _FUN_8c02cb9c, _FUN_8c02cb9c_def\n");
//@unit 8c02cba4
#include "../decls.h"
undefined4 FUN_8c02cba4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cba4\n.set _FUN_8c02cba4, _FUN_8c02cba4_def\n");
//@unit 8c02cbac
#include "../decls.h"
undefined4 FUN_8c02cbac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cbac\n.set _FUN_8c02cbac, _FUN_8c02cbac_def\n");
//@unit 8c02cbb4
#include "../decls.h"
undefined4 FUN_8c02cbb4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cbb4\n.set _FUN_8c02cbb4, _FUN_8c02cbb4_def\n");
//@unit 8c02cbbc
#include "../decls.h"
undefined4 FUN_8c02cbbc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0xc) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 4) = *(undefined4 *)(ar4 + 0xc);
    return *(undefined4 *)(ar4 + 0xc);
  }
  *(int *)(ar4 + 4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02cbbc\n.set _FUN_8c02cbbc, _FUN_8c02cbbc_def\n");
//@unit 8c02cbd4
#include "../decls.h"
undefined4 FUN_8c02cbd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02cbd4\n.set _FUN_8c02cbd4, _FUN_8c02cbd4_def\n");
//@unit 8c02cbdc
#include "../decls.h"
undefined4 get_field_34_02cbdc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _get_field_34_02cbdc\n.set _get_field_34_02cbdc, _get_field_34_02cbdc_def\n");
//@unit 8c02cbe4
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
//@unit 8c02cdf8
#include "../decls.h"
undefined4 FUN_8c02cdf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 9) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c02cdf8\n.set _FUN_8c02cdf8, _FUN_8c02cdf8_def\n");
//@unit 8c02ce00
#include "../decls.h"
undefined4 FUN_8c02ce00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02ce00\n.set _FUN_8c02ce00, _FUN_8c02ce00_def\n");
//@unit 8c02ce08
#include "../decls.h"
undefined4 FUN_8c02ce08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02ce08\n.set _FUN_8c02ce08, _FUN_8c02ce08_def\n");
//@unit 8c02ce10
#include "../decls.h"
undefined4 FUN_8c02ce10_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x10) - ar5;
  if (iVar1 < 1) {
    *(undefined4 *)(ar4 + 8) = *(undefined4 *)(ar4 + 0x10);
    return *(undefined4 *)(ar4 + 0x10);
  }
  *(int *)(ar4 + 8) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce10\n.set _FUN_8c02ce10, _FUN_8c02ce10_def\n");
//@unit 8c02ce28
#include "../decls.h"
int FUN_8c02ce28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x140;
  *(undefined4 *)(0x140 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce28\n.set _FUN_8c02ce28, _FUN_8c02ce28_def\n");
//@unit 8c02ce34
#include "../decls.h"
int FUN_8c02ce34_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x13c;
  *(undefined4 *)(0x13c + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce34\n.set _FUN_8c02ce34, _FUN_8c02ce34_def\n");
//@unit 8c02ce40
#include "../decls.h"
int FUN_8c02ce40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x138;
  *(undefined4 *)(0x138 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce40\n.set _FUN_8c02ce40, _FUN_8c02ce40_def\n");
//@unit 8c02ce4c
#include "../decls.h"
int FUN_8c02ce4c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x134;
  *(undefined4 *)(0x134 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c02ce4c\n.set _FUN_8c02ce4c, _FUN_8c02ce4c_def\n");
//@unit 8c02ce58
#include "../decls.h"
undefined4 FUN_8c02ce58_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  FUN_8c02ce4c(ar4,*ar5,ar6,ar7);
  FUN_8c02ce40(ar4,ar5[1],ar6,ar7);
  FUN_8c02ce34(ar4,ar5[2],ar6,ar7);
  FUN_8c02ce28(ar4,ar5[3],ar6,ar7);
  FUN_8c028edc(ar4 + 0xa8,ar5[4],ar6,ar7,uVar1);
  FUN_8c028ed4(ar4 + 0xa8,ar5[5],ar6,ar7,uVar1);
  FUN_8c02cbd4(ar4 + 0xa8,ar5[6],ar6,ar7,uVar1);
  FUN_8c02bd68(ar4 + 0xa8,(int)*(short *)(ar5 + 7),ar6,ar7);
  FUN_8c025fbc(ar4 + 0xa8,(int)*(short *)((int)ar5 + 0x1e),ar6,ar7);
  uVar1 = FUN_8c02cb84(ar4 + 0xa8,ar5[8],ar6,ar7,uVar1);
  return uVar1;
}

__asm__(".globl _FUN_8c02ce58\n.set _FUN_8c02ce58, _FUN_8c02ce58_def\n");
//@unit 8c02cf20
#include "../decls.h"
undefined4 FUN_8c02cf20_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  int iVar2;
  
  ar5_00 = ar5;
  uVar1 = get_field_134_02d1e8(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = get_field_138_02737c(ar4,ar5_00,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = get_field_13c_028d9c(ar4,ar5_00,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = get_field_140_025f70(ar4,ar5_00,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = get_field_4_02d1e0(ar4 + 0x90,ar5_00,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = get_field_8_02d1d8(ar4 + 0x90,ar5_00,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = FUN_8c02d1d0(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(char *)(ar5 + 6) = (char)uVar1;
  uVar1 = FUN_8c02d1c8(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(char *)((int)ar5 + 0x19) = (char)uVar1;
  uVar1 = get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[7] = uVar1;
  uVar1 = get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[8] = uVar1;
  uVar1 = get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[9] = uVar1;
  uVar1 = FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)(ar5 + 10) = (short)uVar1;
  uVar1 = FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)((int)ar5 + 0x2a) = (short)uVar1;
  uVar1 = get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[0xb] = uVar1;
  uVar1 = get_field_10_02d198(ar4 + 0xf8,ar5_00,ar6,ar7);
  ar5[0xc] = uVar1;
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    *(char *)(ar5 + iVar2 * 3 + 0xd) = (char)iVar2;
    uVar1 = FUN_8c025f68(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    *(char *)((int)ar5 + iVar2 * 0xc + 0x35) = (char)uVar1;
    uVar1 = get_field_4_02be9c(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    ar5[iVar2 * 3 + 0xe] = uVar1;
    uVar1 = FUN_8c02c5ac(iVar2 * 0x18 + ar4,ar5_00,ar6,ar7);
    *(char *)(ar5 + iVar2 * 3 + 0xf) = (char)uVar1;
  }
  uVar1 = FUN_8c02d190(ar4 + 0x78,ar5_00,ar6,ar7);
  *(char *)(ar5 + 0x1e) = (char)uVar1;
  return 0x78;
}

__asm__(".globl _FUN_8c02cf20\n.set _FUN_8c02cf20, _FUN_8c02cf20_def\n");
//@unit 8c02d190
#include "../decls.h"
int FUN_8c02d190_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 9);
}

__asm__(".globl _FUN_8c02d190\n.set _FUN_8c02d190, _FUN_8c02d190_def\n");
//@unit 8c02d198
#include "../decls.h"
undefined4 get_field_10_02d198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_02d198\n.set _get_field_10_02d198, _get_field_10_02d198_def\n");
//@unit 8c02d1a0
#include "../decls.h"
undefined4 get_field_18_02d1a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x18);
}

__asm__(".globl _get_field_18_02d1a0\n.set _get_field_18_02d1a0, _get_field_18_02d1a0_def\n");
//@unit 8c02d1a8
#include "../decls.h"
int FUN_8c02d1a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(short *)(ar4 + 0x14);
}

__asm__(".globl _FUN_8c02d1a8\n.set _FUN_8c02d1a8, _FUN_8c02d1a8_def\n");
//@unit 8c02d1b0
#include "../decls.h"
undefined4 get_field_10_02d1b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x10);
}

__asm__(".globl _get_field_10_02d1b0\n.set _get_field_10_02d1b0, _get_field_10_02d1b0_def\n");
//@unit 8c02d1b8
#include "../decls.h"
undefined4 get_field_c_02d1b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}

__asm__(".globl _get_field_c_02d1b8\n.set _get_field_c_02d1b8, _get_field_c_02d1b8_def\n");
//@unit 8c02d1c0
#include "../decls.h"
undefined4 get_field_8_02d1c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_02d1c0\n.set _get_field_8_02d1c0, _get_field_8_02d1c0_def\n");
//@unit 8c02d1c8
#include "../decls.h"
int FUN_8c02d1c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 1);
}

__asm__(".globl _FUN_8c02d1c8\n.set _FUN_8c02d1c8, _FUN_8c02d1c8_def\n");
//@unit 8c02d1d0
#include "../decls.h"
int FUN_8c02d1d0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}

__asm__(".globl _FUN_8c02d1d0\n.set _FUN_8c02d1d0, _FUN_8c02d1d0_def\n");
//@unit 8c02d1d8
#include "../decls.h"
undefined4 get_field_8_02d1d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_02d1d8\n.set _get_field_8_02d1d8, _get_field_8_02d1d8_def\n");
//@unit 8c02d1e0
#include "../decls.h"
undefined4 get_field_4_02d1e0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_02d1e0\n.set _get_field_4_02d1e0, _get_field_4_02d1e0_def\n");
//@unit 8c02d1e8
#include "../decls.h"
undefined4 get_field_134_02d1e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x134 + ar4);
}

__asm__(".globl _get_field_134_02d1e8\n.set _get_field_134_02d1e8, _get_field_134_02d1e8_def\n");
//@unit 8c02d1f4
#include "../decls.h"
undefined4 FUN_8c02d1f4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  
  ar5_00 = ar5;
  uVar1 = get_field_134_02d1e8(ar4,ar5,ar6,ar7);
  *ar5 = uVar1;
  uVar1 = get_field_138_02737c(ar4,ar5_00,ar6,ar7);
  ar5[1] = uVar1;
  uVar1 = get_field_13c_028d9c(ar4,ar5_00,ar6,ar7);
  ar5[2] = uVar1;
  uVar1 = get_field_140_025f70(ar4,ar5_00,ar6,ar7);
  ar5[3] = uVar1;
  uVar1 = get_field_8_02d1c0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[4] = uVar1;
  uVar1 = get_field_c_02d1b8(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[5] = uVar1;
  uVar1 = get_field_10_02d1b0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[6] = uVar1;
  uVar1 = FUN_8c02d1a8(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)(ar5 + 7) = (short)uVar1;
  uVar1 = FUN_8c02bfb4(ar4 + 0xa8,ar5_00,ar6,ar7);
  *(short *)((int)ar5 + 0x1e) = (short)uVar1;
  uVar1 = get_field_18_02d1a0(ar4 + 0xa8,ar5_00,ar6,ar7);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d1f4\n.set _FUN_8c02d1f4, _FUN_8c02d1f4_def\n");
//@unit 8c02d2e0
#include "../decls.h"
undefined4 FUN_8c02d2e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 ain0;
  
  ar5_00 = ar5;
  FUN_8c02d944(ar4 + 0x90,ar5,ar6,ar7,in_stack_ffffffe4);
  for (iVar2 = 0; iVar2 < 6; iVar2 = iVar2 + 1) {
    ar5_00 = ar5;
    FUN_8c02e3cc(iVar2 * 0x18 + ar4,ar5,ar6,ar7);
  }
  if ((6 < ar5) && ((*(int *)(ar4 + 0x13c) == 2 || (*(int *)(ar4 + 0x13c) == 6)))) {
    ar5_00 = 10000;
    FUN_8c02ce00(ar4 + 0x18,10000,ar6,ar7,in_stack_ffffffe4);
  }
  uVar1 = FUN_8c02d3e0(ar4 + 0x90,ar5_00,ar6,ar7);
  ain0 = CONCAT31((int3)((uint)in_stack_ffffffe4 >> 8),(char)uVar1);
  if ((char)uVar1 == '\0') {
    uVar1 = FUN_8c02c518(ar4,ar5_00,ar6,ar7);
    FUN_8c02c328(ar4 + 0xa8,uVar1,ar6,ar7);
    uVar1 = FUN_8c02de00(ar4 + 0xa8,ar5,*(undefined4 *)(ar4 + 0x13c),ar7);
  }
  else {
    FUN_8c02ce00(ar4 + 0x60,10000,ar6,ar7,ain0);
    uVar1 = FUN_8c02c330(ar4 + 0x60,1,ar6,ar7,ain0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02d2e0\n.set _FUN_8c02d2e0, _FUN_8c02d2e0_def\n");
//@unit 8c02d3e0
#include "../decls.h"
int FUN_8c02d3e0_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*ar4;
}

__asm__(".globl _FUN_8c02d3e0\n.set _FUN_8c02d3e0, _FUN_8c02d3e0_def\n");
//@unit 8c02d3e8
#include "../decls.h"
undefined4 FUN_8c02d3e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02c340(ar4 + 0x90,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02d3e8\n.set _FUN_8c02d3e8, _FUN_8c02d3e8_def\n");
//@unit 8c02d410
#include "../decls.h"
undefined4 FUN_8c02d410_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02d438(ar4 + 0x90,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02d410\n.set _FUN_8c02d410, _FUN_8c02d410_def\n");
//@unit 8c02d438
#include "../decls.h"
undefined4 FUN_8c02d438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (*(int *)(ar4 + 8) * 0x3e8,*(int *)(ar4 + 0x10) * 10,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02d438\n.set _FUN_8c02d438, _FUN_8c02d438_def\n");
//@unit 8c02d478
#include "../decls.h"
int FUN_8c02d478_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7);
  iVar2 = get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7);
  return iVar1 * iVar2;
}

__asm__(".globl _FUN_8c02d478\n.set _FUN_8c02d478, _FUN_8c02d478_def\n");
//@unit 8c02d4bc
#include "../decls.h"
undefined4 get_field_4_02d4bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_02d4bc\n.set _get_field_4_02d4bc, _get_field_4_02d4bc_def\n");
//@unit 8c02d4c4
#include "../decls.h"
int FUN_8c02d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c02c380(ar4 + 0xf8,ar5,ar6,ar7);
  iVar2 = get_field_4_02d4bc(ar4 + 0xf8,ar5,ar6,ar7);
  return (1 - iVar1) * iVar2;
}

__asm__(".globl _FUN_8c02d4c4\n.set _FUN_8c02d4c4, _FUN_8c02d4c4_def\n");
//@unit 8c02d50c
#include "../decls.h"
undefined4 * FUN_8c02d50c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  *(undefined1 *)(ar4 + 6) = 0;
  *(undefined1 *)((int)ar4 + 0x19) = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined2 *)(ar4 + 10) = 0;
  *(undefined2 *)((int)ar4 + 0x2a) = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(char *)(ar4 + iVar1 * 3 + 0xd) = (char)iVar1;
    *(undefined1 *)((int)ar4 + iVar1 * 0xc + 0x35) = 0;
    ar4[iVar1 * 3 + 0xe] = 0;
    *(undefined1 *)(ar4 + iVar1 * 3 + 0xf) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c02d50c\n.set _FUN_8c02d50c, _FUN_8c02d50c_def\n");
//@unit 8c02d5b8
#include "../decls.h"
undefined4 * FUN_8c02d5b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0xffffffff;
  ar4[1] = 0x13;
  ar4[2] = 0x1b;
  ar4[3] = 2;
  ar4[4] = 0;
  ar4[5] = 0;
  ar4[6] = 0;
  *(undefined2 *)(ar4 + 7) = 0;
  *(undefined2 *)((int)ar4 + 0x1e) = 0;
  ar4[8] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d5b8\n.set _FUN_8c02d5b8, _FUN_8c02d5b8_def\n");
//@unit 8c02d5e8
#include "../decls.h"
undefined4 FUN_8c02d5e8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a10),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d400;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d400,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a20),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d40c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d40c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a30),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d418;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d418,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125a40),puVar3,uVar2,ar7);
  global_list_push(uVar2,(&Vec3_dtor),0x8c27d424,ar7);
  *(undefined2 *)((&DATA_8c1302e0) + 6) = *(undefined2 *)((&DATA_8c1304a8) + 0x28c);
  *(short *)((&DATA_8c1302e0) + 8) =
       *(short *)((&DATA_8c1304a8) + 0x28c) + *(short *)((&DATA_8c1304a8) + 0x3cc);
  *(undefined2 *)((&DATA_8c1302e0) + 0xe) = *(undefined2 *)((&DATA_8c1304a8) + 0x78c);
  *(undefined2 *)((&DATA_8c1302e0) + 0x1e) = *(undefined2 *)((&DATA_8c1304a8) + 0x118c);
  *(short *)((&DATA_8c1302e0) + 0x20) =
       *(short *)((&DATA_8c1304a8) + 0x118c) + *(short *)((&DATA_8c1304a8) + 0x12cc);
  *(undefined2 *)((&DATA_8c1302e0) + 0x24) = *(undefined2 *)((&DATA_8c1304a8) + 0x154c);
  *(short *)((&DATA_8c1302e0) + 0x26) =
       *(short *)((&DATA_8c1304a8) + 0x154c) + *(short *)((&DATA_8c1304a8) + 0x168c);
  return 0x26;
}

__asm__(".globl _FUN_8c02d5e8\n.set _FUN_8c02d5e8, _FUN_8c02d5e8_def\n");
//@unit 8c02d720
#include "../decls.h"
undefined4 FUN_8c02d720_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a50),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d438;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d438,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a60),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d444;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d444,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a70),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d450;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d450,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125a80),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d45c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02d720\n.set _FUN_8c02d720, _FUN_8c02d720_def\n");
//@unit 8c02d7c8
#include "../decls.h"
undefined1 * FUN_8c02d7c8_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  *(undefined4 *)(ar4 + 0x10) = ar6;
  uVar1 = libgcc_divide_helper_0101e4(ar7 * 0x3840,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d7c8\n.set _FUN_8c02d7c8, _FUN_8c02d7c8_def\n");
//@unit 8c02d81c
#include "../decls.h"
undefined4 FUN_8c02d81c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&libgcc_divide_helper_0101e4))
                    (ar5 * 0x3840,*(undefined4 *)(ar4 + 0xc),ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02d81c\n.set _FUN_8c02d81c, _FUN_8c02d81c_def\n");
//@unit 8c02d854
#include "../decls.h"
uint FUN_8c02d854_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint ar4_00;
  undefined4 uVar4;
  
  cVar1 = (char)ar6;
  uVar3 = 0;
  if (*(int *)(ar4 + 0x14) != 0) {
    uVar4 = *(undefined4 *)(ar4 + 0x14);
    ar4_00 = ar5;
    iVar2 = libgcc_divide_helper_0103d0(ar5,uVar4,ar6,ar7);
    if ((iVar2 == 0) && (*(int *)(ar4 + 4) < *(int *)(ar4 + 0xc))) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    uVar3 = *(uint *)(ar4 + 8);
    if (((*(uint *)(ar4 + 8) == 1) && (uVar3 = (int)cVar1, (int)cVar1 == 0xffffffff)) &&
       (uVar3 = 0x258, 0x258 < ar5)) {
      uVar4 = rand(ar4_00,uVar4,ar6,ar7);
      uVar3 = libgcc_divide_helper_01031c(uVar4,100,ar6,ar7);
      if (uVar3 == 1) {
        uVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                          (*(undefined4 *)(ar4 + 0x10),10,ar6,ar7);
        *(uint *)(ar4 + 8) = uVar3 * 6;
      }
    }
  }
  return uVar3;
}

__asm__(".globl _FUN_8c02d854\n.set _FUN_8c02d854, _FUN_8c02d854_def\n");
//@unit 8c02d8fc
#include "../decls.h"
uint FUN_8c02d8fc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = libgcc_divide_helper_0101e4(*(undefined4 *)(ar4 + 0xc),2,ar6,ar7);
  return (uint)(iVar1 < *(int *)(ar4 + 4));
}

__asm__(".globl _FUN_8c02d8fc\n.set _FUN_8c02d8fc, _FUN_8c02d8fc_def\n");
//@unit 8c02d930
#include "../decls.h"
uint FUN_8c02d930_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x14) != 0;
  if (bVar1) {
    *(undefined4 *)(ar4 + 4) = 1;
    *(undefined4 *)(ar4 + 8) = 1;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02d930\n.set _FUN_8c02d930, _FUN_8c02d930_def\n");
//@unit 8c02d944
#include "../decls.h"
int FUN_8c02d944_def(undefined1 *ar4,int ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  int iVar1;
  
  if ((0 < ar5) && (ain0 = 0, *(int *)(ar4 + 0x14) != 0)) {
    iVar1 = *(int *)(ar4 + 0xc) - *(int *)(ar4 + 4);
    if ((ar5 < 5) && (-1 < ar5)) {
                    
      switch((uint)ar5) {
      case 1:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,2,ar6,ar7);
        iVar1 = iVar1 + -1;
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        break;
      case 2:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 3:
        iVar1 = libgcc_divide_helper_0101e4(iVar1,0x10,ar6,ar7);
        break;
      case 4:
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 0;
    }
    if (iVar1 == 0) {
      *ar4 = 1;
    }
    ain0 = *(int *)(ar4 + 0xc) - iVar1;
    *(int *)(ar4 + 4) = ain0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c02d944\n.set _FUN_8c02d944, _FUN_8c02d944_def\n");
//@unit 8c02d9f4
#include "../decls.h"
undefined1 * FUN_8c02d9f4_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02d9f4\n.set _FUN_8c02d9f4, _FUN_8c02d9f4_def\n");
//@unit 8c02da0c
#include "../decls.h"
undefined4 noop_02da0c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02da0c\n.set _noop_02da0c, _noop_02da0c_def\n");
//@unit 8c02da10
#include "../decls.h"
undefined4 FUN_8c02da10_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if (((ar5 != 4) && (ar5 != 7)) && (ar5 != 0x13)) {
    *ar4 = '\0';
    return 0;
  }
  if (((ar4[3] == '\0') && (ar4[1] == '\0')) && ((ar4[4] == '\0' && (*ar4 == '\x01')))) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02da10\n.set _FUN_8c02da10, _FUN_8c02da10_def\n");
//@unit 8c02da5c
#include "../decls.h"
int FUN_8c02da5c_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  
  FUN_8c02d9f4(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined2 *)(ar4 + 0x14) = 0;
  *(undefined2 *)(ar4 + 0x16) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x3c) = 0;
  *(undefined1 *)(ar4 + 0x1c) = 1;
  *(undefined1 *)(ar4 + 0x40) = 0;
  *(undefined4 *)(ar4 + 0x44) = 1;
  *(short *)(ar4 + 0x20) = (short)ar6;
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined2 *)(ar4 + iVar1 * 2 + 0x22) = *(undefined2 *)(iVar1 * 2 + ar7);
  }
  *(undefined4 *)(ar4 + 0x34) = s0;
  *(undefined4 *)(ar4 + 0x30) = s4;
  *(undefined4 *)(ar4 + 0x38) = ar5;
  *(undefined4 *)(ar4 + 0x38) = 0x270f;
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02da5c\n.set _FUN_8c02da5c, _FUN_8c02da5c_def\n");
//@unit 8c02db04
#include "../decls.h"
uint FUN_8c02db04_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(short *)(ar4 + 0x20) <= *(short *)(ar4 + 0x16)) {
    if ((int)*(short *)(ar4 + 0x14) != *(int *)(ar4 + 0x30)) {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
    uVar1 = FUN_8c02d1c8(ar4,ar5,ar6,ar7);
    if ((char)uVar1 == '\x01') {
      *(undefined2 *)(ar4 + 0x1e) = 1;
      return 1;
    }
  }
  bVar2 = *(int *)(ar4 + 0x3c) == 1;
  if (bVar2) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c02db04\n.set _FUN_8c02db04, _FUN_8c02db04_def\n");
//@unit 8c02db6c
#include "../decls.h"
undefined4 FUN_8c02db6c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int ar5_00;
  int iVar4;
  undefined4 in_stack_ffffffcc;
  
  iVar3 = ar4;
  ar5_00 = ar5;
  noop_02da0c(ar4,ar5,ar6,ar7,CONCAT31((uint3)((uint)in_stack_ffffffcc >> 8) & 0xffff00,1));
  *(undefined2 *)(ar4 + 0x1e) = 0;
  if (*(char *)(ar4 + 0x4c) == '\x01') {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + 1;
    iVar1 = *(int *)(&DAT_8c1304b0 + ar5 * 0x140);
    iVar4 = *(int *)(ar4 + 0x10) - iVar1;
    if (2 < iVar4) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    if (*(int *)(ar4 + 0x10) == iVar1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 1) {
      uVar2 = rand(iVar3,ar5_00,ar6,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,100,ar6,ar7);
      if (iVar3 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar4 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    FUN_8c02dc8c(ar4,ar5,ar6,ar7);
  }
  *(undefined1 *)(ar4 + 0x4c) = 0;
  return 0x4c;
}

__asm__(".globl _FUN_8c02db6c\n.set _FUN_8c02db6c, _FUN_8c02db6c_def\n");
//@unit 8c02dc8c
#include "../decls.h"
int FUN_8c02dc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\x01';
  if ((*(int *)(ar4 + 0x48) != -1) && (*(int *)(ar4 + 0x48) != 4)) {
    return *(int *)(ar4 + 0x48);
  }
  iVar1 = (int)*(short *)(ar4 + 0x14);
  if ((iVar1 < 8) && (1 < iVar1)) {
                    
    switch(iVar1) {
    case 2:
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      break;
    case 3:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x02')) {
        cVar2 = '\0';
      }
      break;
    case 5:
      goto switchD_8c02dcc2_caseD_5;
    case 6:
      cVar2 = '\x01';
      if ((*(short *)(ar4 + 0x16) < 2) && (*(char *)(ar4 + 0x40) < '\x01')) {
        cVar2 = '\0';
      }
      if ((*(short *)(ar4 + 0x16) == 2) && (*(char *)(ar4 + 0x40) < '\x03')) {
        cVar2 = '\0';
      }
      break;
    case 7:
      if ((*(short *)(ar4 + 0x16) == 0) && (*(char *)(ar4 + 0x40) < '\x04')) {
        cVar2 = '\0';
      }
    }
  }
  else {
switchD_8c02dcc2_caseD_5:
    *(undefined4 *)(ar4 + 0x44) = 1;
  }
  iVar1 = *(int *)(ar4 + 0x44);
  if (((iVar1 == 1) && (iVar1 = (int)cVar2, iVar1 == 1)) &&
     (iVar1 = *(int *)(ar4 + 0x18), *(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) <= iVar1)) {
    *(undefined2 *)(ar4 + 0x1e) = 1;
    if (*(short *)(ar4 + *(short *)(ar4 + 0x16) * 2 + 0x22) != 0) {
      *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x16) + 1;
    }
    *(undefined4 *)(ar4 + 0x18) = 0;
    iVar1 = (int)*(short *)(ar4 + 0x20);
    if (iVar1 <= *(short *)(ar4 + 0x16)) {
      if ((int)*(short *)(ar4 + 0x14) == *(int *)(ar4 + 0x30)) {
        *(undefined2 *)(ar4 + 0x1e) = 0;
        iVar1 = *(short *)(ar4 + 0x20) + -1;
        *(short *)(ar4 + 0x16) = (short)iVar1;
      }
      else {
        iVar1 = (int)*(short *)(ar4 + 0x20);
        *(short *)(ar4 + 0x16) = *(short *)(ar4 + 0x20);
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02dc8c\n.set _FUN_8c02dc8c, _FUN_8c02dc8c_def\n");
//@unit 8c02de00
#include "../decls.h"
undefined4 FUN_8c02de00_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 1;
  if (0 < ar5) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + 1;
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + ar5;
    if (2 < *(int *)(ar4 + 0x10) - *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8)) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    iVar2 = *(int *)(ar4 + 0x10) - *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8);
    iVar3 = ar6;
    if (*(int *)(ar4 + 0x10) == *(int *)((&DATA_8c1304a8) + ar6 * 0x140 + 8)) {
      uVar1 = rand(ar4,ar5,ar6,ar7);
      iVar2 = libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x32) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = rand(ar4,ar5,ar6,ar7);
      iVar2 = libgcc_divide_helper_01031c(uVar1,100,iVar3,ar7);
      if (iVar2 < 0x4b) {
        *(undefined1 *)(ar4 + 0x1c) = 0;
      }
    }
    else if (iVar2 == 2) {
      *(undefined1 *)(ar4 + 0x1c) = 0;
    }
    *(undefined4 *)(ar4 + 0xc) = 0;
    uVar1 = FUN_8c02dc8c(ar4,ar6,iVar3,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02de00\n.set _FUN_8c02de00, _FUN_8c02de00_def\n");
//@unit 8c02df08
#include "../decls.h"
undefined1 * FUN_8c02df08_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  *(undefined4 *)(ar4 + 4) = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02df08\n.set _FUN_8c02df08, _FUN_8c02df08_def\n");
//@unit 8c02df24
#include "../decls.h"
undefined4 FUN_8c02df24_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02dfa0(ar4,ar5,ar6,ar7);
  if (*ar4 == '\x01') {
    if (ar4[10] == '\x01') {
      if (ar4[0xb] == '\x05') {
        FUN_8c02e38c(ar4,1,ar6,ar7);
      }
      else {
        *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
      }
    }
    if ((ar4[0xb] == '\x05') && (2 < *(int *)(ar4 + 4))) {
      *ar4 = '\0';
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  else {
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  ar4[10] = '\0';
  return 0;
}

__asm__(".globl _FUN_8c02df24\n.set _FUN_8c02df24, _FUN_8c02df24_def\n");
//@unit 8c02dfa0
#include "../decls.h"
int FUN_8c02dfa0_def(char *ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *piVar4;
  char cVar5;
  float fVar6;
  ulonglong in_dr0;
  float fVar7;
  char cVar8;
  char cVar9;
  ulonglong uStack_54;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  cVar9 = '\0';
  cVar8 = '\0';
  iVar3 = (int)ar4[0xb];
  if ((iVar3 < 6) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_28 = uVar2;
          if (cVar9 != '\0') {
            uStack_28 = (undefined4)in_dr0;
            uStack_24 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_28,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_24,uStack_28);
          }
          if (cVar8 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      fVar6 = (float)(in_dr0 >> 0x20);
      if (cVar9 == '\0') {
        fVar7 = 35.0;
      }
      else {
        fVar6 = 35.0;
        fVar7 = 3.78351e-42;
      }
      if ((cVar8 != '\0' || fVar7 <= fVar6) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 1:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_34 = uVar2;
          if (cVar9 != '\0') {
            uStack_34 = (undefined4)in_dr0;
            uStack_30 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_34,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_30,uStack_34);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      ar4_00 = ar5;
      (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar4_00,piVar4,ar6,ar7);
        piVar4 = (int *)0x3e8;
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      iVar3 = FUN_8c02bea4(ar4,piVar4,ar6,ar7);
      if (iVar3 < 1) {
        (**(code **)(*ar5 + 0x178))(ar5,piVar4,ar6,ar7);
      }
      break;
    case 2:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
          uVar2 = (undefined4)(in_dr0 >> 0x20);
          uStack_48 = uVar2;
          if (cVar9 != '\0') {
            uStack_48 = (undefined4)in_dr0;
            uStack_44 = uVar2;
          }
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44(uStack_48,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)));
          }
          else {
            in_dr0 = CONCAT44(uStack_44,uStack_48);
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      (**(code **)(*ar5 + 0x17c))(ar5,piVar4,ar6,ar7);
      if (cVar9 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      if (((float)in_dr0 == 0.0) &&
         (*(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + 1, 0xa8c < *(uint *)(ar4 + 0x14))) {
        uVar2 = rand(ar5,piVar4,ar6,ar7);
        iVar3 = libgcc_divide_helper_01031c(uVar2,1000,ar6,ar7);
        if (iVar3 == 4) {
          ar4[4] = '\x10';
          ar4[5] = '\'';
          ar4[6] = '\0';
          ar4[7] = '\0';
        }
      }
      break;
    case 3:
      *ar4 = '\0';
      piVar4 = ar5;
      for (cVar5 = '\0'; cVar5 < '\x05'; cVar5 = cVar5 + '\x01') {
        if (*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc)) != -1) {
          (**(code **)(*ar5 + 0x188))(ar5,piVar4,ar6,ar7);
          uVar1 = in_dr0;
          if (cVar9 == '\0') {
            uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),(int)(in_dr0 >> 0x20));
            uVar1 = uStack_54;
          }
          uStack_54 = uVar1;
          in_dr0 = uStack_54;
          if (cVar9 == '\0') {
            in_dr0 = CONCAT44((undefined4)uStack_54,(float)*(int *)(cVar5 * 4 + *(int *)(ar4 + 0xc))
                             );
          }
          if (cVar8 == '\0' && (float)(in_dr0 >> 0x20) < (float)in_dr0) {
            ar4[8] = cVar5;
            *ar4 = '\x01';
          }
        }
      }
      break;
    case 4:
      if ((*ar4 == '\x01') && (ar4[8] == '\x05')) {
        ar4[4] = '\x10';
        ar4[5] = '\'';
        ar4[6] = '\0';
        ar4[7] = '\0';
      }
      break;
    case 5:
      if (*ar4 == '\x01') {
        ar4[8] = '\x02' - (char)*(undefined4 *)(ar4 + 4);
      }
    }
  }
  iVar3 = (int)*ar4;
  if (iVar3 == 0) {
    iVar3 = 0;
    ar4[4] = '\0';
    ar4[5] = '\0';
    ar4[6] = '\0';
    ar4[7] = '\0';
  }
  return iVar3;
}

__asm__(".globl _FUN_8c02dfa0\n.set _FUN_8c02dfa0, _FUN_8c02dfa0_def\n");
//@unit 8c02e38c
#include "../decls.h"
int FUN_8c02e38c_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if ((0 < ar5) && (iVar1 = (int)*ar4, iVar1 == 1)) {
    if (ar5 == 1) {
      *(int *)(ar4 + 4) = *(int *)(ar4 + 4) + 1;
    }
    ar4[9] = '\0';
    iVar1 = 3;
    if (2 < *(int *)(ar4 + 4)) {
      *ar4 = '\0';
      iVar1 = 0;
      ar4[4] = '\0';
      ar4[5] = '\0';
      ar4[6] = '\0';
      ar4[7] = '\0';
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e38c\n.set _FUN_8c02e38c, _FUN_8c02e38c_def\n");
//@unit 8c02e3cc
#include "../decls.h"
int FUN_8c02e3cc_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = (int)*ar4;
  if ((iVar1 == 1) && (iVar1 = (int)ar4[0xb], iVar1 == 5)) {
    iVar1 = FUN_8c02e38c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e3cc\n.set _FUN_8c02e3cc, _FUN_8c02e3cc_def\n");
//@unit 8c02e400
#include "../decls.h"
int FUN_8c02e400_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  for (iVar2 = 0; (iVar2 < 5 && (*(int *)(iVar2 * 4 + *(int *)(ar4 + 0xc)) != -1));
      iVar2 = iVar2 + 1) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e400\n.set _FUN_8c02e400, _FUN_8c02e400_def\n");
//@unit 8c02e438
#include "../decls.h"
int FUN_8c02e438_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 1;
  if (*(char *)(ar4 + 9) < '\x01') {
    *(char *)(ar4 + 9) = *(char *)(ar4 + 9) + '\x01';
    iVar1 = *(int *)(ar4 + 4) + 1;
    *(int *)(ar4 + 4) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e438\n.set _FUN_8c02e438, _FUN_8c02e438_def\n");
//@unit 8c02e460
#include "../decls.h"
undefined4 * FUN_8c02e460_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 1;
  ar6_00 = ar6;
  FUN_8c02cb24(ar4,ar5,ar6,ar7);
  FUN_8c02cadc(ar4,ar6,ar6_00,ar7);
  ar4[4] = 0;
  ar4[10] = 0;
  ar4[5] = 0;
  ar4[7] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[6] = 0;
  *(undefined1 *)(ar4 + 0xc) = 0;
  ar4[0xd] = 0;
  ar4[0xe] = 0;
  ar4[0xb] = 5;
  return ar4;
}

__asm__(".globl _FUN_8c02e460\n.set _FUN_8c02e460, _FUN_8c02e460_def\n");
//@unit 8c02e4cc
#include "../decls.h"
uint FUN_8c02e4cc_def(uint *ar4,int *ar5,uint ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int *a5;
  char cVar6;
  char cVar7;
  byte bStack_48;
  undefined1 auStack_40 [36];
  
  puVar1 = auStack_40;
  puVar3 = &DAT_8c13252c;
  iVar5 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  ar4[0xd] = 0;
  if (ar6 < 0x4b0) {
    ar4[5] = 0;
  }
  uVar2 = ar4[7];
  if (((int)uVar2 < 8) && (-1 < (int)uVar2)) {
                    
    switch(uVar2) {
    default:
      break;
    case 2:
    case 3:
      break;
    case 4:
      break;
    case 5:
    }
  }
  if (ar4[2] * ar4[3] == 0) {
    uVar2 = 0;
  }
  else {
    cVar6 = (char)ar7;
    if (*ar4 == 0) {
      if (ar4[5] != ar4[0xe]) {
        ar4[0xe] = ar4[5];
        ar4[6] = ar4[6] + 1;
        if ((ar4[5] == 0) || (cVar6 != -1)) {
          ar4[6] = 0;
        }
      }
      if (cVar6 != -1) {
        ar4[6] = 0;
        ar4[9] = 0;
      }
      ar4[0xb] = 5;
      a5 = ar5;
      if ((ar4[9] == 1) && (cVar6 == -1)) {
        ar4[8] = ar4[8] + 1;
        (**(code **)(*ar5 + 0x198))(ar5,ar5,ar6,ar7);
        *(byte *)(ar4 + 0xc) = (byte)(((uint)bStack_48 << 0x1e) >> 0x1f);
        a5 = (int *)0xffffffe1;
        *(char *)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)bStack_48 << 0x1f) >> 0x1f);
        if ((0xb4 < (int)ar4[8]) || ((char)ar4[0xc] < '\x02')) {
          ar4[8] = 0;
          *ar4 = 1;
          ar4[1] = 0x5a;
          if ((char)ar4[0xc] < '\x02') {
            ar4[0xd] = 1;
          }
          ar4[9] = 0;
          ar4[4] = ar4[4] + 1;
        }
      }
      uVar2 = ar4[6];
      if (299 < uVar2) {
        if (ar4[9] == 1) {
          uVar2 = 1;
        }
        else {
          uVar2 = (uint)cVar6;
          if (uVar2 == 0xffffffff) {
            (**(code **)(*ar5 + 0x198))(ar5,a5,ar6,ar7);
            *(byte *)(ar4 + 0xc) = (byte)(((uint)bStack_48 << 0x1e) >> 0x1f);
            *(char *)(ar4 + 0xc) = (char)ar4[0xc] - (char)((int)((uint)bStack_48 << 0x1f) >> 0x1f);
            if ((char)ar4[0xc] < '\x02') {
              ar4[9] = 0;
              *ar4 = 1;
              ar4[1] = 0x5a;
            }
            else {
              ar4[9] = 1;
            }
            uVar2 = 0;
            ar4[8] = 0;
          }
        }
      }
    }
    else {
      ar4[6] = 0;
      ar4[8] = ar4[8] + 1;
      (**(code **)(*ar5 + 0x198))(ar5,ar5,ar6,ar7);
      cVar7 = -(char)((int)((uint)bStack_48 << 0x1f) >> 0x1f) -
              (char)((int)((uint)bStack_48 << 0x1e) >> 0x1f);
      if (ar4[0xb] == 5) {
        if ((char)ar4[0xc] < cVar7) {
          ar4[0xb] = 3;
          ar4[8] = 0;
        }
        else {
          *(char *)(ar4 + 0xc) = cVar7;
        }
        if ((((cVar6 == '\0') || (cVar6 == '\x01')) || (cVar6 == '\x02')) || (cVar6 == '\x03')) {
          ar4[0xb] = 0;
        }
      }
      uVar2 = ar4[0xb];
      if (uVar2 == 0) {
        *ar4 = 0;
      }
      else if (uVar2 == 1) {
        *ar4 = 0;
      }
      else if (uVar2 == 2) {
        *ar4 = 0;
      }
      else if (uVar2 == 3) {
        if (5 < (int)ar4[8]) {
          *ar4 = 0;
        }
      }
      else if (600 < (int)ar4[8]) {
        *ar4 = 0;
        ar4[0xb] = 5;
      }
      uVar2 = *ar4;
      if (uVar2 == 0) {
        *(undefined1 *)(ar4 + 0xc) = 0xff;
        ar4[1] = 100;
        ar4[9] = 0;
        ar4[0xd] = 0;
        uVar2 = 0;
        ar4[8] = 0;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c02e4cc\n.set _FUN_8c02e4cc, _FUN_8c02e4cc_def\n");
//@unit 8c02e838
#include "../decls.h"
undefined4 FUN_8c02e838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125a90),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d468;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d468,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125aa0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d474;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d474,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ab0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d480;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d480,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125ac0),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d48c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02e838\n.set _FUN_8c02e838, _FUN_8c02e838_def\n");
//@unit 8c02e8e0
#include "../decls.h"
int FUN_8c02e8e0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (ar5 == 0) {
    FUN_8c02ea98(ar4,0,ar6,ar7);
    FUN_8c02eaac(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0xc) != 0) {
    *(int *)(ar4 + 0xc) = *(int *)(ar4 + 0xc) + -1;
  }
  if (*(int *)(ar4 + 0x14) != 0) {
    *(int *)(ar4 + 0x14) = *(int *)(ar4 + 0x14) + -1;
  }
  if (*(int *)(ar4 + 0x10) != 0) {
    *(int *)(ar4 + 0x10) = *(int *)(ar4 + 0x10) + -1;
  }
  if (*(int *)(ar4 + 0x10) == 0) {
    FUN_8c02ea98(ar4,ar5,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x18) != 0) {
    *(int *)(ar4 + 0x18) = *(int *)(ar4 + 0x18) + -1;
  }
  if (*(int *)(ar4 + 0x20) != 0) {
    *(int *)(ar4 + 0x20) = *(int *)(ar4 + 0x20) + -1;
  }
  if (*(int *)(ar4 + 0x1c) != 0) {
    *(int *)(ar4 + 0x1c) = *(int *)(ar4 + 0x1c) + -1;
  }
  iVar1 = *(int *)(ar4 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = FUN_8c02eaac(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02e8e0\n.set _FUN_8c02e8e0, _FUN_8c02e8e0_def\n");
//@unit 8c02e99c
#include "../decls.h"
uint FUN_8c02e99c_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (*ar4 < 3) {
    if (ar4[4] == 0) {
      ar4[3] = 0x1e;
    }
    if (ar4[5] == 0) {
      ar4[4] = 0x708;
      uVar1 = 0x258;
      ar4[5] = 0x258;
    }
    else {
      ar4[4] = ar4[4] + 0x708;
      uVar1 = 0x258;
      ar4[5] = ar4[5] + 0x258;
    }
  }
  else {
    uVar1 = ar4[6];
    if ((uVar1 == 0) && (uVar1 = 0, ar4[8] != 0)) {
      uVar1 = 1;
      ar4[2] = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c02e99c\n.set _FUN_8c02e99c, _FUN_8c02e99c_def\n");
//@unit 8c02ea00
#include "../decls.h"
undefined4 FUN_8c02ea00_def(uint *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 < 3) {
    if (ar4[1] == 1) {
      FUN_8c02ea98(ar4,ar5,ar6,ar7);
      FUN_8c02eaac(ar4,ar5,ar6,ar7);
      *ar4 = *ar4 + 1;
      *(undefined4 *)0x8c27d49c = 0;
      if (2 < *ar4) {
        *(undefined4 *)0x8c27d49c = 1;
      }
    }
  }
  else if (ar4[2] == 1) {
    *(undefined4 *)0x8c27d49c = 2;
    FUN_8c02ea98(ar4,ar5,ar6,ar7);
    FUN_8c02eaac(ar4,ar5,ar6,ar7);
    if (4 < *ar4) {
      return 1;
    }
    *ar4 = *ar4 + 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02ea00\n.set _FUN_8c02ea00, _FUN_8c02ea00_def\n");
//@unit 8c02ea98
#include "../decls.h"
undefined4 FUN_8c02ea98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02ea98\n.set _FUN_8c02ea98, _FUN_8c02ea98_def\n");
//@unit 8c02eaac
#include "../decls.h"
undefined4 FUN_8c02eaac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02eaac\n.set _FUN_8c02eaac, _FUN_8c02eaac_def\n");
//@unit 8c02eac0
#include "../decls.h"
undefined4 * FUN_8c02eac0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  FUN_8c02ea98(ar4,ar5,ar6,ar7);
  FUN_8c02eaac(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c02eac0\n.set _FUN_8c02eac0, _FUN_8c02eac0_def\n");
//@unit 8c02eaec
#include "../decls.h"
int free_if_nonnull_wrap_02eaec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_02eaec\n.set _free_if_nonnull_wrap_02eaec, _free_if_nonnull_wrap_02eaec_def\n");
//@unit 8c02eb1c
#include "../decls.h"
undefined4 FUN_8c02eb1c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c02eb1c\n.set _FUN_8c02eb1c, _FUN_8c02eb1c_def\n");
//@unit 8c02eb24
#include "../decls.h"
undefined4 get_field_4_02eb24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_02eb24\n.set _get_field_4_02eb24, _get_field_4_02eb24_def\n");
//@unit 8c02eb2c
#include "../decls.h"
int FUN_8c02eb2c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if ((ar5 < 8) && (0 < ar5)) {
                    
    switch((uint)ar5) {
    case 1:
      iVar1 = 1;
      break;
    case 2:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x10) + -0x46,6,ar6,ar7);
      break;
    case 3:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x14) + -0x50,4,ar6,ar7);
      break;
    case 4:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x18) + -0x50,4,ar6,ar7);
      break;
    case 5:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x24) + -0x3c,8,ar6,ar7);
      break;
    case 6:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x20) + -0x32,0xd,ar6,ar7);
      iVar1 = iVar1 + 1;
      break;
    case 7:
      iVar1 = libgcc_divide_helper_0101e4(*(int *)(ar4 + 0x1c) + -0x32,0xd,ar6,ar7);
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02eb2c\n.set _FUN_8c02eb2c, _FUN_8c02eb2c_def\n");
//@unit 8c02ebfc
#include "../decls.h"
int FUN_8c02ebfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_38 [9];
  
  iVar3 = 0;
  iVar4 = 0;
  uVar2 = ar5;
  uVar1 = FUN_8c02c4e8(ar5,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = FUN_8c02bd9c(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  uVar1 = FUN_8c02c668(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x10) = uVar1;
  uVar1 = FUN_8c02d4c4(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x18) = uVar1;
  uVar1 = FUN_8c02d478(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x14) = uVar1;
  uVar1 = FUN_8c02d410(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x24) = uVar1;
  uVar1 = FUN_8c02d3e8(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x20) = uVar1;
  uVar2 = FUN_8c02ede0(ar5,uVar2,ar6,ar7);
  *(undefined4 *)(ar4 + 0x1c) = uVar2;
  if (100 < *(int *)(ar4 + 0x14)) {
    *(undefined4 *)(ar4 + 0x14) = 100;
  }
  if (100 < *(int *)(ar4 + 0x18)) {
    *(undefined4 *)(ar4 + 0x18) = 100;
  }
  iVar5 = 0xc7;
  if ((0 < *(int *)(ar4 + 0xc)) && (*(int *)(ar4 + 8) != 0)) {
    for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
      aiStack_38[iVar5] = 0;
    }
    aiStack_38[2] = FUN_8c02ee48(ar4,2,*(undefined4 *)(ar4 + 0x10),ar7);
    aiStack_38[3] = FUN_8c02ee48(ar4,3,*(undefined4 *)(ar4 + 0x14),ar7);
    aiStack_38[4] = FUN_8c02ee48(ar4,4,*(undefined4 *)(ar4 + 0x18),ar7);
    aiStack_38[5] = FUN_8c02ee48(ar4,5,*(undefined4 *)(ar4 + 0x24),ar7);
    aiStack_38[6] = FUN_8c02ee48(ar4,6,*(undefined4 *)(ar4 + 0x20),ar7);
    aiStack_38[7] = FUN_8c02ee48(ar4,7,*(undefined4 *)(ar4 + 0x1c),ar7);
    for (iVar6 = 0; iVar5 = iVar3, iVar6 < 8; iVar6 = iVar6 + 1) {
      if (iVar4 < aiStack_38[iVar6]) {
        iVar4 = aiStack_38[iVar6];
        iVar3 = iVar6 * 100 + aiStack_38[iVar6];
      }
    }
  }
  return iVar5;
}

__asm__(".globl _FUN_8c02ebfc\n.set _FUN_8c02ebfc, _FUN_8c02ebfc_def\n");
//@unit 8c02ede0
#include "../decls.h"
int FUN_8c02ede0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c02da10))
                    (ar4 + 0xa8,*(undefined4 *)(0x13c + ar4),ar6,ar7);
  return (char)uVar1 * 0x62;
}

__asm__(".globl _FUN_8c02ede0\n.set _FUN_8c02ede0, _FUN_8c02ede0_def\n");
//@unit 8c02ee20
#include "../decls.h"
undefined4 FUN_8c02ee20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c02ebfc(ar4,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c02ee20\n.set _FUN_8c02ee20, _FUN_8c02ee20_def\n");
//@unit 8c02ee48
#include "../decls.h"
int FUN_8c02ee48_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int ar5_00;
  
  iVar4 = ar6;
  iVar1 = FUN_8c02ef60(ar4,ar5,ar6,ar7);
  uVar2 = rand(ar4,ar5,iVar4,ar7);
  ar5_00 = 0x65 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc);
  iVar3 = libgcc_divide_helper_01031c(uVar2,ar5_00,iVar4,ar7);
  if (ar6 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc) < iVar3) {
    iVar4 = 0;
  }
  else {
    uVar2 = rand(uVar2,ar5_00,iVar4,ar7);
    iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                      ((ar6 - *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0xc)) *
                       *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 8),
                       *(undefined4 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 4),iVar4,ar7);
    iVar4 = (*(code *)(&libgcc_divide_helper_01031c))
                      (uVar2,*(undefined4 *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x14),iVar4,ar7);
    iVar4 = *(int *)((&DATA_8c1327b4) + iVar1 * 0x18 + 0x10) + iVar3 + iVar4;
  }
  return iVar4;
}

__asm__(".globl _FUN_8c02ee48\n.set _FUN_8c02ee48, _FUN_8c02ee48_def\n");
//@unit 8c02ef60
#include "../decls.h"
undefined4 FUN_8c02ef60_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((ar5 < 8) && (1 < ar5)) {
                    
    switch((uint)ar5) {
    case 2:
      return 0;
    case 3:
      return 1;
    case 4:
      return 2;
    case 5:
      return 3;
    case 6:
      return 4;
    case 7:
      return 5;
    }
  }
  return 0xffffffff;
}

__asm__(".globl _FUN_8c02ef60\n.set _FUN_8c02ef60, _FUN_8c02ef60_def\n");
//@unit 8c02efbc
#include "../decls.h"
undefined4 FUN_8c02efbc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ad0),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4a0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4a0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125ae0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4ac;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4ac,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125af0),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27d4b8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27d4b8,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125b00),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27d4c4,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c02efbc\n.set _FUN_8c02efbc, _FUN_8c02efbc_def\n");
//@unit 8c02f064
#include "../decls.h"
undefined4 * FUN_8c02f064_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  char cVar1;
  
  cVar1 = '\0';
  *ar4 = &DAT_8c129c70;
  Vec3_ctor_zero(ar4 + 10,ar5,ar6,ar7);
  FUN_8c02eb1c(ar4 + 0x11,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 0x1c,ar5,ar6,ar7);
  ar4[1] = 0;
  ar4[0x1b] = 0;
  ar4[3] = 0;
  ar4[0xf] = 2;
  ar4[4] = 0;
  ar4[9] = 0;
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[5] = 0;
  *(undefined1 *)((int)ar4 + 0x91) = 0;
  ar4[0x10] = 0;
  ar4[0x25] = 0;
  *(undefined1 *)(ar4 + 0x26) = 0;
  *(undefined1 *)((int)ar4 + 0x99) = 0;
  if (cVar1 == '\0') {
    ar4[10] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 10) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xb] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xb) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
    ar4[0x1c] = 0xc7c35000;
    ar4[0x1d] = 0xc7c35000;
    ar4[0x1e] = 0xc7c35000;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0x1c) = 0x88c7c35000;
    *(undefined8 *)(ar4 + 0x1d) = 0x88c7c35000;
    *(undefined8 *)(ar4 + 0x1e) = 0x88c7c35000;
  }
  ar4[0x22] = 0;
  ar4[0x23] = 0;
  *(undefined1 *)((int)ar4 + 0x82) = 0;
  *(undefined1 *)(ar4 + 0x21) = 0;
  *(undefined1 *)((int)ar4 + 0x85) = 0;
  *(undefined1 *)((int)ar4 + 0x87) = 0;
  *(undefined1 *)((int)ar4 + 0x86) = 0;
  *(undefined1 *)(ar4 + 0x24) = 0;
  *(undefined1 *)((int)ar4 + 0x83) = 4;
  *(undefined1 *)((int)ar4 + 0x9a) = 2;
  *(undefined1 *)((int)ar4 + 0x9b) = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02f064\n.set _FUN_8c02f064, _FUN_8c02f064_def\n");
//@unit 8c02f1b8
#include "../decls.h"
undefined4 * Class_129c70_m0_02f1b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129c70;
    Vec3_dtor(ar4 + 0x1c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 10,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129c70_m0_02f1b8\n.set _Class_129c70_m0_02f1b8, _Class_129c70_m0_02f1b8_def\n");
//@unit 8c02f20c
#include "../decls.h"
undefined4 FUN_8c02f20c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar5 + 4);
  FUN_8c02ee20(ar4 + 0x44,uVar1,ar6,ar7);
  uVar1 = get_field_4_02eb24(ar4 + 0x44,uVar1,ar6,ar7);
  FUN_8c02f298(ar4,uVar1,ar6,ar7);
  FUN_8c02f2c8(ar4,uVar1,ar6,ar7);
  *(undefined1 *)(0x9b + ar4) = 0;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0;
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c02f20c\n.set _FUN_8c02f20c, _FUN_8c02f20c_def\n");
//@unit 8c02f290
#include "../decls.h"
undefined4 noop_02f290_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02f290\n.set _noop_02f290, _noop_02f290_def\n");
//@unit 8c02f294
#include "../decls.h"
undefined4 noop_02f294_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02f294\n.set _noop_02f294, _noop_02f294_def\n");
//@unit 8c02f298
#include "../decls.h"
int FUN_8c02f298_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 5;
  if (*(int *)(ar4 + 0x10) < 5) {
    *(undefined4 *)(ar4 + *(int *)(ar4 + 0x10) * 4 + 0x14) = ar5;
    iVar1 = *(int *)(ar4 + 0x10) + 1;
    *(int *)(ar4 + 0x10) = iVar1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f298\n.set _FUN_8c02f298, _FUN_8c02f298_def\n");
//@unit 8c02f2c0
#include "../decls.h"
undefined4 FUN_8c02f2c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x3c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02f2c0\n.set _FUN_8c02f2c0, _FUN_8c02f2c0_def\n");
//@unit 8c02f2c8
#include "../decls.h"
undefined4 FUN_8c02f2c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(undefined1 *)(0x91 + ar4) = 0;
  uVar1 = FUN_8c02f3ac(ar4,ar5,ar6,ar7);
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  if ((*(int *)(ar4 + 0x38) == 2) || (*(int *)(ar4 + 0x38) == 0)) {
    *(undefined1 *)(0x91 + ar4) = 1;
    uVar2 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 4) = uVar2;
    uVar1 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
    *(undefined4 *)(ar4 + 8) = uVar1;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
  else if (*(int *)(ar4 + 0x38) == 3) {
    iVar3 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
    if (*(int *)(ar4 + 8) < iVar3) {
      uVar2 = libgcc_divide_helper_01031c(uVar1,100,ar6,ar7);
      *(undefined4 *)(ar4 + 8) = uVar2;
      iVar3 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
      if (*(int *)(ar4 + 4) != iVar3) {
        *(undefined1 *)(0x91 + ar4) = 1;
        uVar1 = libgcc_divide_helper_0101e4(uVar1,100,ar6,ar7);
        *(undefined4 *)(ar4 + 4) = uVar1;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  if (*(int *)(ar4 + 4) == 8) {
    *(undefined4 *)(ar4 + 4) = 8;
  }
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _FUN_8c02f2c8\n.set _FUN_8c02f2c8, _FUN_8c02f2c8_def\n");
//@unit 8c02f3ac
#include "../decls.h"
int FUN_8c02f3ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x2710;
  for (iVar2 = 0; iVar2 < *(int *)(ar4 + 0x10); iVar2 = iVar2 + 1) {
    if ((*(int *)(ar4 + iVar2 * 4 + 0x14) < iVar1) && (*(int *)(ar4 + iVar2 * 4 + 0x14) != 0)) {
      iVar1 = *(int *)(ar4 + iVar2 * 4 + 0x14);
    }
  }
  if (iVar1 == 0x2710) {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c02f3ac\n.set _FUN_8c02f3ac, _FUN_8c02f3ac_def\n");
//@unit 8c02f404
#include "../decls.h"
undefined4 FUN_8c02f404_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x38) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c02f404\n.set _FUN_8c02f404, _FUN_8c02f404_def\n");
//@unit 8c02f40c
#include "../decls.h"
undefined4 ret_const_1_02f40c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_02f40c\n.set _ret_const_1_02f40c, _ret_const_1_02f40c_def\n");
//@unit 8c02f414
#include "../decls.h"
undefined4 FUN_8c02f414_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (((*(int *)(ar4 + 0x6c) != 0) &&
      (iVar1 = get_field_6c_02f46c(*(undefined4 *)(ar4 + 0x6c),ar5,ar6,ar7),
      iVar1 != 0)) &&
     (iVar1 = (**(code **)(0xb4 + *(int *)(*(int *)(ar4 + 0x6c) + 8)))
                        (*(int *)(ar4 + 0x6c),ar5,ar6,ar7), iVar1 == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c02f414\n.set _FUN_8c02f414, _FUN_8c02f414_def\n");
//@unit 8c02f46c
#include "../decls.h"
undefined4 get_field_6c_02f46c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x6c);
}

__asm__(".globl _get_field_6c_02f46c\n.set _get_field_6c_02f46c, _get_field_6c_02f46c_def\n");
//@unit 8c02f474
#include "../decls.h"
undefined4 FUN_8c02f474_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  undefined4 uVar3;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar4;
  undefined4 *a6;
  uint in_fr1;
  double dVar5;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  uint auStack_30 [5];
  double dVar6;
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar4 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_30,ar5,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = 1e+07;
    auStack_30[0] = 0;
  }
  else {
    auStack_30[3] = 0;
    auStack_30[0] = in_fr1;
  }
  dVar5 = (double)(ulonglong)in_fr1;
  auStack_30[2] = 0;
  auStack_30[1] = 0;
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_40);
    Vec3_length_sq(auStack_40,ar5_00,ar6_00,ar7_00);
    if (cVar9 == '\0') {
      in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
    }
    Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7_00);
    uVar4 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar2; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar3 = ar7;
    ar6_00 = a6;
    uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar2 = get_field_6c_02f46c(uVar1,uVar3,ar6_00,ar7_00);
    if (iVar2 != 0) {
      FUN_8c02f670(*ar6,uVar3,ar6_00,ar7_00,auStack_50);
      uVar3 = ar7;
      ar6_00 = a6;
      uVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(uVar1,uVar3,ar6_00,ar7_00,auStack_60);
      Vec3_sub(auStack_50,auStack_60,ar6_00,ar7_00,auStack_70);
      Vec3_assign(auStack_30,auStack_70,ar6_00,ar7_00);
      Vec3_dtor(auStack_70,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7_00);
      uVar3 = 0xffffffff;
      Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
      if (cVar8 == '\0') {
        bVar7 = (float)((ulonglong)dVar5 >> 0x20) < in_fr15;
      }
      else {
        bVar7 = dVar5 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar7) {
        Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
        dVar6 = dVar5;
        if (cVar9 == '\0') {
          dVar6 = (double)((ulonglong)dVar5 >> 0x20);
        }
        dVar5 = (double)((ulonglong)dVar6 & 0xffffffff);
        if (SUB84(dVar6,0) != 0.0) {
          Vec3_length_sq(auStack_30,uVar3,ar6_00,ar7_00);
          if (cVar9 == '\0') {
            in_fr15 = (float)((ulonglong)dVar5 >> 0x20);
          }
          ar6_00 = a6;
          uVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7_00);
  return uVar4;
}

__asm__(".globl _FUN_8c02f474\n.set _FUN_8c02f474, _FUN_8c02f474_def\n");
//@unit 8c02f670
#include "../decls.h"
undefined4 FUN_8c02f670_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_ctor_copy(s0,ar4 + 0x30,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c02f670\n.set _FUN_8c02f670, _FUN_8c02f670_def\n");
//@unit 8c02f694
#include "../decls.h"
undefined4 FUN_8c02f694_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  int iVar1;
  int *ar5_00;
  undefined4 uVar2;
  undefined4 *ar6_00;
  undefined4 ar7_00;
  undefined4 uVar3;
  undefined4 *a6;
  double in_dr0;
  double dVar4;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar5;
  char cVar6;
  char cVar7;
  int in_stack_00000000;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [20];
  
  cVar7 = '\0';
  cVar6 = '\0';
  uVar3 = 0;
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    in_fr15 = 1e+07;
  }
  if (*(int *)(ar4 + 0x6c) != 0) {
    FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),ar5_00,ar6_00,ar7_00,auStack_44);
    Vec3_length_sq(auStack_44,ar5_00,ar6_00,ar7_00);
    if (cVar7 == '\0') {
      in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
    }
    Vec3_dtor(auStack_44,0xffffffff,ar6_00,ar7_00);
    uVar3 = *(undefined4 *)(ar4 + 0x6c);
  }
  for (a6 = (undefined4 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,ar6_00,ar7_00),
      (int)a6 < iVar1; a6 = (undefined4 *)((int)a6 + 1)) {
    uVar2 = ar7;
    ar6_00 = a6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_00,ar7_00);
    if (in_stack_00000000 == iVar1) {
      FUN_8c02f670(*ar6,uVar2,ar6_00,ar7_00,auStack_54);
      uVar2 = ar7;
      ar6_00 = a6;
      ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
      FUN_8c02f670(ar4_00,uVar2,ar6_00,ar7_00,auStack_64);
      Vec3_sub(auStack_54,auStack_64,ar6_00,ar7_00,auStack_74);
      Vec3_assign(auStack_34,auStack_74,ar6_00,ar7_00);
      Vec3_dtor(auStack_74,0xffffffff,ar6_00,ar7_00);
      Vec3_dtor(auStack_64,0xffffffff,ar6_00,ar7_00);
      uVar2 = 0xffffffff;
      Vec3_dtor(auStack_54,0xffffffff,ar6_00,ar7_00);
      Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
      if (cVar6 == '\0') {
        bVar5 = (float)((ulonglong)in_dr0 >> 0x20) < in_fr15;
      }
      else {
        bVar5 = in_dr0 < (double)CONCAT44(in_fr14,in_fr15);
      }
      if (bVar5) {
        Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
        dVar4 = in_dr0;
        if (cVar7 == '\0') {
          dVar4 = (double)((ulonglong)in_dr0 >> 0x20);
        }
        in_dr0 = (double)((ulonglong)dVar4 & 0xffffffff);
        if (SUB84(dVar4,0) != 0.0) {
          Vec3_length_sq(auStack_34,uVar2,ar6_00,ar7_00);
          if (cVar7 == '\0') {
            in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
          }
          ar6_00 = a6;
          uVar3 = (**(code **)(*ar5 + 0x100))(ar5,ar7,a6,ar7_00);
        }
      }
    }
  }
  Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _FUN_8c02f694\n.set _FUN_8c02f694, _FUN_8c02f694_def\n");
//@unit 8c02f878
#include "../decls.h"
undefined4 ret_const_1b_02f878_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x1b;
}

__asm__(".globl _ret_const_1b_02f878\n.set _ret_const_1b_02f878, _ret_const_1b_02f878_def\n");
//@unit 8c02f880
#include "../decls.h"
undefined4 FUN_8c02f880_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar4_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 a7;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint in_fr1;
  double dVar7;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar9;
  char cVar10;
  char cVar11;
  int in_stack_00000000;
  short in_stack_00000004;
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  uint auStack_34 [5];
  double dVar8;
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = 0;
  puVar3 = ar6;
  a7 = ar7;
  Vec3_ctor_zero(auStack_34,ar5,ar6,ar7);
  if (cVar11 == '\0') {
    in_fr15 = 1e+07;
  }
  iVar4 = 0;
  if (cVar11 == '\0') {
    auStack_34[0] = 0;
  }
  else {
    auStack_34[3] = 0;
    auStack_34[0] = in_fr1;
  }
  dVar7 = (double)(ulonglong)in_fr1;
  auStack_34[2] = 0;
  auStack_34[1] = 0;
  (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7);
  for (puVar6 = (undefined4 *)0x0; uVar2 = ar7,
      iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7), (int)puVar6 < iVar1;
      puVar6 = (undefined4 *)((int)puVar6 + 1)) {
    uVar2 = ar7;
    puVar3 = puVar6;
    iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
    iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,puVar3,a7);
    if (in_stack_00000000 == iVar1) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar2,puVar3,a7);
      if (iVar1 == 1) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar1 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar2,puVar3,a7);
        if (iVar1 == 0) {
          iVar4 = iVar4 + 1;
        }
      }
    }
  }
  if (in_stack_00000004 < iVar4) {
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),uVar2,puVar3,a7,auStack_44);
      Vec3_length_sq(auStack_44,uVar2,puVar3,a7);
      if (cVar11 == '\0') {
        in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
      }
      Vec3_dtor(auStack_44,0xffffffff,puVar3,a7);
      uVar5 = *(undefined4 *)(ar4 + 0x6c);
    }
    for (puVar6 = (undefined4 *)0x0; iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,ar7,puVar3,a7),
        (int)puVar6 < iVar4; puVar6 = (undefined4 *)((int)puVar6 + 1)) {
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      uVar2 = ar7;
      puVar3 = puVar6;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
      iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,puVar3,a7);
      if (in_stack_00000000 == iVar4) {
        uVar2 = ar7;
        puVar3 = puVar6;
        iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
        iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4,uVar2,puVar3,a7);
        if (iVar4 == 1) {
          uVar2 = ar7;
          puVar3 = puVar6;
          iVar4 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
          iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb8))(iVar4,uVar2,puVar3,a7);
          if (iVar4 == 0) {
            FUN_8c02f670(*ar6,uVar2,puVar3,a7,auStack_54);
            uVar2 = ar7;
            puVar3 = puVar6;
            ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
            FUN_8c02f670(ar4_00,uVar2,puVar3,a7,auStack_64);
            Vec3_sub(auStack_54,auStack_64,puVar3,a7,auStack_74);
            Vec3_assign(auStack_34,auStack_74,puVar3,a7);
            Vec3_dtor(auStack_74,0xffffffff,puVar3,a7);
            Vec3_dtor(auStack_64,0xffffffff,puVar3,a7);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_54,0xffffffff,puVar3,a7);
            Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
            if (cVar10 == '\0') {
              bVar9 = (float)((ulonglong)dVar7 >> 0x20) < in_fr15;
            }
            else {
              bVar9 = dVar7 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar9) {
              Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
              dVar8 = dVar7;
              if (cVar11 == '\0') {
                dVar8 = (double)((ulonglong)dVar7 >> 0x20);
              }
              dVar7 = (double)((ulonglong)dVar8 & 0xffffffff);
              if (SUB84(dVar8,0) != 0.0) {
                Vec3_length_sq(auStack_34,uVar2,puVar3,a7);
                if (cVar11 == '\0') {
                  in_fr15 = (float)((ulonglong)dVar7 >> 0x20);
                }
                puVar3 = puVar6;
                uVar5 = (**(code **)(*ar5 + 0x100))(ar5,ar7,puVar6,a7);
              }
            }
          }
        }
      }
    }
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
  }
  else {
    Vec3_dtor(auStack_34,0xffffffff,puVar3,a7);
    uVar5 = 0;
  }
  return uVar5;
}

__asm__(".globl _FUN_8c02f880\n.set _FUN_8c02f880, _FUN_8c02f880_def\n");
//@unit 8c02fc8c
#include "../decls.h"
uint FUN_8c02fc8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  bool bVar1;
  
  bVar1 = *(int *)(ar4 + 0x6c) != 0;
  if (bVar1) {
    (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  return (uint)bVar1;
}

__asm__(".globl _FUN_8c02fc8c\n.set _FUN_8c02fc8c, _FUN_8c02fc8c_def\n");
//@unit 8c02fcc4
#include "../decls.h"
uint FUN_8c02fcc4_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float *ar6_00;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  float fStack_3c;
  float fStack_38;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [16];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  uVar1 = FUN_8c1011b0(*(undefined4 *)(ar5[6] + 0x7cc),ar5,ar6,ar7);
  if ((ushort)uVar1 < 5) {
    FUN_8c02f670(*ar5,ar5_00,ar6,ar7,auStack_34);
    Vec3_ctor_copy(auStack_24,auStack_34,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    ar6_00 = &fStack_3c;
    FUN_8c256294(0,auStack_14,ar6_00,ar7);
    if (cVar5 == '\0') {
      fVar3 = 150.0;
      fVar2 = fStack_3c;
    }
    else {
      fVar2 = 150.0;
      fVar3 = 500.0;
    }
    if (cVar4 == '\0' && fVar3 < fVar2) {
      if (cVar5 == '\0') {
        fVar2 = 500.0;
      }
      else {
        fStack_3c = 500.0;
        fVar2 = 80.0;
      }
      if (cVar4 == '\0' && fStack_3c < fVar2) {
        if (cVar5 == '\0') {
          fVar3 = 80.0;
          fVar2 = fStack_38;
        }
        else {
          fVar2 = 80.0;
          fVar3 = 400.0;
        }
        if (cVar4 == '\0' && fVar3 < fVar2) {
          if (cVar5 == '\0') {
            fVar2 = 400.0;
          }
          else {
            fStack_38 = 400.0;
            fVar2 = 1.82169e-43;
          }
          if (cVar4 == '\0' && fStack_38 < fVar2) {
            Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
            return 1;
          }
        }
      }
    }
    Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
  }
  return (uint)(*(char *)(ar4 + 0x82) == '\x01');
}

__asm__(".globl _FUN_8c02fcc4\n.set _FUN_8c02fcc4, _FUN_8c02fcc4_def\n");
//@unit 8c02fdd8
#include "../decls.h"
double * FUN_8c02fdd8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  double *pdVar1;
  undefined1 *a5;
  float *a6;
  float *a7;
  float fVar2;
  double dVar3;
  float fVar4;
  undefined4 in_fr3;
  undefined4 uVar5;
  double dVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  undefined1 auStack_10 [8];
  
  cVar9 = '\0';
  cVar8 = '\0';
  a7 = &fStack_18;
  a6 = &fStack_14;
  a5 = auStack_10;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  if (cVar9 == '\0') {
    dVar6 = (double)CONCAT44(fStack_18,in_fr3);
    dVar3 = (double)CONCAT44(0x3dcccccd,fStack_14);
  }
  else {
    dVar6 = (double)CONCAT44(fStack_14,fStack_18);
    dVar3 = 8.15358646777176e-312;
  }
  if (cVar8 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    fVar2 = SUB84(dVar3,0) * fVar4;
    dVar3 = (double)CONCAT44(fVar4,fVar2);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
  }
  else {
    dVar3 = dVar3 * dVar3;
    dVar6 = dVar6 - dVar3;
  }
  fVar2 = (float)((ulonglong)dVar6 >> 0x20);
  fStack_18 = fVar2;
  if (cVar9 != '\0') {
    fStack_18 = SUB84(dVar6,0);
    fStack_14 = fVar2;
  }
  (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
  uVar5 = SUB84(dVar6,0);
  fVar2 = (float)((ulonglong)dVar3 >> 0x20);
  if (cVar9 == '\0') {
    dVar3 = 4.14452302922905e-317;
    fStack_1c = fVar2;
  }
  else {
    fStack_1c = SUB84(dVar3,0);
    fStack_18 = fVar2;
  }
  pdVar1 = (double *)0x8;
  fVar2 = fStack_1c;
  fVar4 = fStack_18;
  if (cVar9 == '\0') {
    fVar2 = SUB84(dVar3,0);
    fVar4 = fStack_1c;
  }
  if (fVar2 != fVar4) {
    (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
    if (cVar9 == '\0') {
      dVar6 = (double)CONCAT44(fStack_18,uVar5);
      dVar3 = (double)CONCAT44(0x42c80000,fVar4);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_14,fStack_18);
      dVar3 = 2.0000004975590855;
    }
    if (cVar8 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) *
                               (SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20)),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 * (dVar3 / dVar3);
    }
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(0x40000000,fStack_14);
    }
    else {
      dVar3 = 1.6514225348597613e-308;
    }
    if (cVar8 == '\0') {
      fVar2 = SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20);
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar2,SUB84(dVar6,0));
    }
    else {
      fVar2 = SUB84(dVar3 / dVar3,0);
      dVar6 = dVar6 - dVar3 / dVar3;
    }
    pdVar1 = (double *)(ar4 + 0x2c);
    if (cVar9 == '\0') {
      dVar3 = (double)CONCAT44(*(undefined4 *)pdVar1,fVar2);
    }
    else {
      dVar3 = *pdVar1;
    }
    if (cVar8 == '\0') {
      bVar7 = (float)((ulonglong)dVar3 >> 0x20) < (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      bVar7 = dVar3 < dVar6;
    }
    if (!bVar7) {
      (**(code **)(*ar5 + 0x180))(ar5,a5,a6,a7);
      if (cVar9 == '\0') {
        dVar6 = (double)CONCAT44(fStack_18,SUB84(dVar6,0));
        dVar3 = (double)CONCAT44(0x42c80000,(int)((ulonglong)dVar3 >> 0x20));
      }
      else {
        dVar6 = (double)CONCAT44(fStack_14,fStack_18);
        dVar3 = 2.0000004975590855;
      }
      if (cVar8 == '\0') {
        fVar4 = (float)((ulonglong)dVar3 >> 0x20);
        fVar2 = SUB84(dVar3,0) / fVar4;
        dVar3 = (double)CONCAT44(fVar4,fVar2);
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar2,SUB84(dVar6,0));
      }
      else {
        dVar3 = dVar3 / dVar3;
        dVar6 = dVar6 * dVar3;
      }
      fVar2 = SUB84(dVar3,0);
      if (cVar9 == '\0') {
        fVar2 = fStack_14;
      }
      pdVar1 = (double *)&DAT_8c02febc;
      if (cVar9 == '\0') {
        dVar3 = (double)CONCAT44(0x40000000,fVar2);
      }
      else {
        dVar3 = 1.6514225348597613e-308;
      }
      if (cVar8 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) -
                                 SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 - dVar3 / dVar3;
      }
      if (cVar9 == '\0') {
        *(int *)(ar4 + 0x2c) = (int)((ulonglong)dVar6 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x2c) = dVar6;
      }
    }
  }
  return pdVar1;
}

__asm__(".globl _FUN_8c02fdd8\n.set _FUN_8c02fdd8, _FUN_8c02fdd8_def\n");
//@unit 8c02fec0
#include "../decls.h"
undefined4 ret_const_0_02fec0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02fec0\n.set _ret_const_0_02fec0, _ret_const_0_02fec0_def\n");
//@unit 8c02fec8
#include "../decls.h"
undefined4 noop_02fec8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02fec8\n.set _noop_02fec8, _noop_02fec8_def\n");
//@unit 8c02fecc
#include "../decls.h"
undefined4 noop_02fecc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02fecc\n.set _noop_02fecc, _noop_02fecc_def\n");
//@unit 8c02fed0
#include "../decls.h"
int FUN_8c02fed0_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _FUN_8c02fed0\n.set _FUN_8c02fed0, _FUN_8c02fed0_def\n");
//@unit 8c02feec
#include "../decls.h"
int FUN_8c02feec_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(0x98 + ar4);
  cVar1 = *(char *)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c02feec\n.set _FUN_8c02feec, _FUN_8c02feec_def\n");
//@unit 8c02ff08
#include "../decls.h"
int FUN_8c02ff08_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined1 *)(0x98 + ar4) = *ar5;
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _FUN_8c02ff08\n.set _FUN_8c02ff08, _FUN_8c02ff08_def\n");
//@unit 8c02ff24
#include "../decls.h"
int FUN_8c02ff24_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  
  *(undefined4 *)(ar5 + 4) = 0;
  *ar5 = *(undefined1 *)(0x98 + ar4);
  cVar1 = *(char *)(0x99 + ar4);
  ar5[1] = cVar1;
  return (int)cVar1;
}

__asm__(".globl _FUN_8c02ff24\n.set _FUN_8c02ff24, _FUN_8c02ff24_def\n");
//@unit 8c02ff40
#include "../decls.h"
undefined1 * FUN_8c02ff40_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030d44(ar4 + 8,ar5,ar6,ar7);
  *(undefined4 *)(ar4 + 4) = 0;
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c02ff40\n.set _FUN_8c02ff40, _FUN_8c02ff40_def\n");
//@unit 8c02ff6c
#include "../decls.h"
undefined4 * FUN_8c02ff6c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c02f064(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129c24);
  return ar4;
}

__asm__(".globl _FUN_8c02ff6c\n.set _FUN_8c02ff6c, _FUN_8c02ff6c_def\n");
//@unit 8c02ff90
#include "../decls.h"
undefined4 * Class_129c24_m0_02ff90_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129c24;
    ar5_00 = 0;
    Class_129c70_m0_02f1b8(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129c24_m0_02ff90\n.set _Class_129c24_m0_02ff90, _Class_129c24_m0_02ff90_def\n");
//@unit 8c02ffd8
#include "../decls.h"
undefined4 noop_02ffd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_02ffd8\n.set _noop_02ffd8, _noop_02ffd8_def\n");
//@unit 8c02ffdc
#include "../decls.h"
undefined4 ret_const_0_02ffdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02ffdc\n.set _ret_const_0_02ffdc, _ret_const_0_02ffdc_def\n");
//@unit 8c02ffe4
#include "../decls.h"
undefined4 ret_const_0_02ffe4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_02ffe4\n.set _ret_const_0_02ffe4, _ret_const_0_02ffe4_def\n");
//@unit 8c02ffec
#include "../decls.h"
undefined4 FUN_8c02ffec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b10,ar5,ar6,ar7);
  uVar3 = 0x8c27d4d0;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4d0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b20,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4dc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4dc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b30,pcVar2,uVar3,ar7);
  uVar3 = 0x8c27d4e8;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c27d4e8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125b40,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c27d4f4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125b50 = CONCAT44(_UNK_8c125b54,0x800000);
                    
  }
  else {
    _DAT_8c125b50 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c02ffec\n.set _FUN_8c02ffec, _FUN_8c02ffec_def\n");
