//@unit 8c010080
#include "../decls.h"
undefined4 * FUN_8c010080_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  while( true ) {
    puVar1 = (undefined4 *)*(undefined4 *)0x8c2787a0;
    if (puVar1 == (undefined4 *)0x0) break;
    *(undefined4 *)0x8c2787a0 = *puVar1;
    (*(code *)puVar1[1])(puVar1[2],0xffffffff,ar6,ar7);
  }
  return 0x8c2787a0;
}

__asm__(".globl _FUN_8c010080\n.set _FUN_8c010080, _FUN_8c010080_def\n");
//@unit 8c0100b0
#include "../decls.h"
undefined4 FUN_8c0100b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DATA_8c12c410);
  if ((&DATA_8c12c410) != (undefined *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*puVar1 == (code *)0x0) break;
      (*(code *)*puVar1)();
      puVar1 = puVar1 + 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100b0\n.set _FUN_8c0100b0, _FUN_8c0100b0_def\n");
//@unit 8c0100b6
#include "../decls.h"
undefined4 FUN_8c0100b6_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  undefined4 *unaff_r13;
  
  if (unaff_r13 != (undefined4 *)0x0) {
    while( true ) {
      in_r0 = 0;
      if ((code *)*unaff_r13 == (code *)0x0) break;
      (*(code *)*unaff_r13)(ar4,ar5,ar6,ar7);
      unaff_r13 = unaff_r13 + 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100b6\n.set _FUN_8c0100b6, _FUN_8c0100b6_def\n");
//@unit 8c0100dc
#include "../decls.h"
undefined4 vec_delete_array_def(int ar4,code *ar5,int ar6,int ar7)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar6 * ar7 + ar4;
  for (; ar7 != 0; ar7 = ar7 + -1) {
    iVar1 = iVar1 - ar6;
    in_r0 = (*ar5)(iVar1,0xffffffff,uVar2);
  }
  return in_r0;
}

__asm__(".globl _vec_delete_array\n.set _vec_delete_array, _vec_delete_array_def\n");
//@unit 8c0100ec
#include "../decls.h"
undefined4 FUN_8c0100ec_def(int ar4,code *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int unaff_r10;
  int unaff_r11;
  int a4;
  
  a4 = unaff_r10 * unaff_r11 + ar4;
  for (; unaff_r11 != 0; unaff_r11 = unaff_r11 + -1) {
    a4 = a4 - unaff_r10;
    in_r0 = (*ar5)(a4,0xffffffff,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _FUN_8c0100ec\n.set _FUN_8c0100ec, _FUN_8c0100ec_def\n");
//@unit 8c010120
#include "../decls.h"
uint FUN_8c010120_def(int ar4,code *ar5,code *ar6,int ar7,uint s0)

{
  int iVar1;
  undefined4 uStackY_1c;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = ar4;
  for (uStackY_1c = 0; uStackY_1c < s0; uStackY_1c = uStackY_1c + 1) {
    (*ar5)(iVar1,1,uVar2);
    iVar1 = iVar1 + ar7;
  }
  if ((uStackY_1c < s0) && (s0 = 0, ar6 != (code *)0x0)) {
    iVar1 = ar7 * uStackY_1c + ar4;
    for (; s0 = 0, uStackY_1c != 0; uStackY_1c = uStackY_1c - 1) {
      iVar1 = iVar1 - ar7;
      (*ar6)(iVar1,0xffffffff);
    }
  }
  return s0;
}

__asm__(".globl _FUN_8c010120\n.set _FUN_8c010120, _FUN_8c010120_def\n");
//@unit 8c01012c
#include "../decls.h"
uint FUN_8c01012c_def(int ar4,code *ar5,code *ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8,undefined4 s12,undefined4 s16,uint s20)

{
  code *a6;
  int unaff_r11;
  int iVar1;
  undefined4 uStack_8;
  
  a6 = ar6;
  iVar1 = ar4;
  for (uStack_8 = 0; uStack_8 < s20; uStack_8 = uStack_8 + 1) {
    (*ar5)(iVar1,1,a6,ar7);
    iVar1 = iVar1 + unaff_r11;
  }
  if ((uStack_8 < s20) && (s20 = 0, ar6 != (code *)0x0)) {
    iVar1 = unaff_r11 * uStack_8 + ar4;
    for (; s20 = 0, uStack_8 != 0; uStack_8 = uStack_8 - 1) {
      iVar1 = iVar1 - unaff_r11;
      (*ar6)(iVar1,0xffffffff,a6,ar7);
    }
  }
  return s20;
}

__asm__(".globl _FUN_8c01012c\n.set _FUN_8c01012c, _FUN_8c01012c_def\n");
//@unit 8c0101a0
#include "../decls.h"
undefined4 global_list_push_def(undefined4 ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  
  puVar1 = 0x8c2787a0;
  *ar6 = *(undefined4 *)0x8c2787a0;
  ar6[1] = ar5;
  ar6[2] = ar4;
  *puVar1 = ar6;
  return ar4;
}

__asm__(".globl _global_list_push\n.set _global_list_push, _global_list_push_def\n");
//@unit 8c0101bc
#include "../decls.h"
undefined4 pure_virtual_stub_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
                    
  halt_unimplemented();
}

__asm__(".globl _pure_virtual_stub\n.set _pure_virtual_stub, _pure_virtual_stub_def\n");
//@unit 8c0101d4
#include "../decls.h"
undefined4 strcpy_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  undefined4 in_r0;
  
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *ar4 = cVar1;
    ar4 = ar4 + 1;
  } while (cVar1 != '\0');
  return in_r0;
}

__asm__(".globl _strcpy\n.set _strcpy, _strcpy_def\n");
//@unit 8c0101e4
#include "../decls.h"
int libgcc_divide_helper_0101e4_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar7;
  
  if (ar5 == 0) {
    return ar4;
  }
  uVar2 = (uint)((ar4 & 0x80000000) != 0);
  uVar3 = ar4 - (uVar2 != 0);
  bVar5 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (ar5 & 0x80000000) != 0;
  uVar1 = uVar3 * 2;
  bVar6 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar5 || bVar4) {
    if (!bVar5 && bVar4) {
      uVar3 = uVar2 + ar5;
      bVar7 = uVar3 < uVar2;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
    else if (bVar5 && !bVar4) {
      uVar3 = uVar2 + ar5;
      bVar7 = uVar3 < uVar2;
      if (!bVar6) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar3 = uVar2 - ar5;
      bVar7 = uVar2 < uVar3;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar7 = uVar2 < uVar3;
    if (!bVar6) {
      bVar7 = !bVar7;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000000) != 0);
  if (bVar7 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar8 = uVar2 < uVar3;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar8 = uVar3 < uVar2;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar8 = uVar3 < uVar2;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar8 = uVar2 < uVar3;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000000) != 0);
  if (bVar8 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar9 = uVar2 < uVar3;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar9 = uVar3 < uVar2;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar9 = uVar3 < uVar2;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar9 = uVar2 < uVar3;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000000) != 0);
  if (bVar9 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar10 = uVar2 < uVar3;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar10 = uVar3 < uVar2;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar10 = uVar3 < uVar2;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar10 = uVar2 < uVar3;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000000) != 0);
  if (bVar10 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar11 = uVar2 < uVar3;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar11 = uVar3 < uVar2;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar11 = uVar3 < uVar2;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar11 = uVar2 < uVar3;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000000) != 0);
  if (bVar11 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar12 = uVar2 < uVar3;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar12 = uVar3 < uVar2;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar12 = uVar3 < uVar2;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar12 = uVar2 < uVar3;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000000) != 0);
  if (bVar12 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar13 = uVar2 < uVar3;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar13 = uVar3 < uVar2;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar13 = uVar3 < uVar2;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar13 = uVar2 < uVar3;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000000) != 0);
  if (bVar13 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar14 = uVar2 < uVar3;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar14 = uVar3 < uVar2;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar14 = uVar3 < uVar2;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar14 = uVar2 < uVar3;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000000) != 0);
  if (bVar14 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar15 = uVar2 < uVar3;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar15 = uVar3 < uVar2;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar15 = uVar3 < uVar2;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar15 = uVar2 < uVar3;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800000) != 0);
  if (bVar15 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar16 = uVar2 < uVar3;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar16 = uVar3 < uVar2;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar16 = uVar3 < uVar2;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar16 = uVar2 < uVar3;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400000) != 0);
  if (bVar16 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar17 = uVar2 < uVar3;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar17 = uVar3 < uVar2;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar17 = uVar3 < uVar2;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar17 = uVar2 < uVar3;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200000) != 0);
  if (bVar17 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar18 = uVar2 < uVar3;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar18 = uVar3 < uVar2;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar18 = uVar3 < uVar2;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar18 = uVar2 < uVar3;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100000) != 0);
  if (bVar18 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar19 = uVar2 < uVar3;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar19 = uVar3 < uVar2;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar19 = uVar3 < uVar2;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar19 = uVar2 < uVar3;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000) != 0);
  if (bVar19 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar20 = uVar2 < uVar3;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar20 = uVar3 < uVar2;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar20 = uVar3 < uVar2;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar20 = uVar2 < uVar3;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000) != 0);
  if (bVar20 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar21 = uVar2 < uVar3;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar21 = uVar3 < uVar2;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar21 = uVar3 < uVar2;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar21 = uVar2 < uVar3;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000) != 0);
  if (bVar21 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar22 = uVar2 < uVar3;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar22 = uVar3 < uVar2;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar22 = uVar3 < uVar2;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar22 = uVar2 < uVar3;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000) != 0);
  if (bVar22 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar23 = uVar2 < uVar3;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar23 = uVar3 < uVar2;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar23 = uVar3 < uVar2;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar23 = uVar2 < uVar3;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000) != 0);
  if (bVar23 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar24 = uVar2 < uVar3;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar24 = uVar3 < uVar2;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar24 = uVar3 < uVar2;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar24 = uVar2 < uVar3;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000) != 0);
  if (bVar24 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar25 = uVar2 < uVar3;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar25 = uVar3 < uVar2;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar25 = uVar3 < uVar2;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar25 = uVar2 < uVar3;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000) != 0);
  if (bVar25 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar26 = uVar2 < uVar3;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar26 = uVar3 < uVar2;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar26 = uVar3 < uVar2;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar26 = uVar2 < uVar3;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000) != 0);
  if (bVar26 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar27 = uVar2 < uVar3;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar27 = uVar3 < uVar2;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar27 = uVar3 < uVar2;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar27 = uVar2 < uVar3;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800) != 0);
  if (bVar27 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar28 = uVar2 < uVar3;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar28 = uVar3 < uVar2;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar28 = uVar3 < uVar2;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar28 = uVar2 < uVar3;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400) != 0);
  if (bVar28 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar29 = uVar2 < uVar3;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar29 = uVar3 < uVar2;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar29 = uVar3 < uVar2;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar29 = uVar2 < uVar3;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200) != 0);
  if (bVar29 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar30 = uVar2 < uVar3;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar30 = uVar3 < uVar2;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar30 = uVar3 < uVar2;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar30 = uVar2 < uVar3;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100) != 0);
  if (bVar30 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar31 = uVar2 < uVar3;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar31 = uVar3 < uVar2;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar31 = uVar3 < uVar2;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar31 = uVar2 < uVar3;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80) != 0);
  if (bVar31 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar32 = uVar2 < uVar3;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar32 = uVar3 < uVar2;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar32 = uVar3 < uVar2;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar32 = uVar2 < uVar3;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40) != 0);
  if (bVar32 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar33 = uVar2 < uVar3;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar33 = uVar3 < uVar2;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar33 = uVar3 < uVar2;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar33 = uVar2 < uVar3;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20) != 0);
  if (bVar33 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar34 = uVar2 < uVar3;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar34 = uVar3 < uVar2;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar34 = uVar3 < uVar2;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar34 = uVar2 < uVar3;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10) != 0);
  if (bVar34 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar35 = uVar2 < uVar3;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar35 = uVar3 < uVar2;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar35 = uVar3 < uVar2;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar35 = uVar2 < uVar3;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 8) != 0);
  if (bVar35 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar36 = uVar2 < uVar3;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar36 = uVar3 < uVar2;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar36 = uVar3 < uVar2;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar36 = uVar2 < uVar3;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 4) != 0);
  if (bVar36 == false && !bVar4) {
    uVar3 = uVar2 - ar5;
    bVar37 = uVar2 < uVar3;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == false && bVar4) {
    uVar3 = uVar2 + ar5;
    bVar37 = uVar3 < uVar2;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == true && !bVar4) {
    uVar3 = uVar2 + ar5;
    bVar37 = uVar3 < uVar2;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else {
    uVar3 = uVar2 - ar5;
    bVar37 = uVar2 < uVar3;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 2) != 0);
  if (bVar37 == false && !bVar4) {
    bVar38 = uVar2 < uVar2 - ar5;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == false && bVar4) {
    bVar38 = uVar2 + ar5 < uVar2;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == true && !bVar4) {
    bVar38 = uVar2 + ar5 < uVar2;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else {
    bVar38 = uVar2 < uVar2 - ar5;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  return ((((((((((((((((((((((((((((((((uint)(bVar7 == bVar4) << 1 | (uint)(bVar8 == bVar4)) << 1 |
                                      (uint)(bVar9 == bVar4)) << 1 | (uint)(bVar10 == bVar4)) << 1 |
                                    (uint)(bVar11 == bVar4)) << 1 | (uint)(bVar12 == bVar4)) << 1 |
                                  (uint)(bVar13 == bVar4)) << 1 | (uint)(bVar14 == bVar4)) << 1 |
                                (uint)(bVar15 == bVar4)) << 1 | (uint)(bVar16 == bVar4)) << 1 |
                              (uint)(bVar17 == bVar4)) << 1 | (uint)(bVar18 == bVar4)) << 1 |
                            (uint)(bVar19 == bVar4)) << 1 | (uint)(bVar20 == bVar4)) << 1 |
                          (uint)(bVar21 == bVar4)) << 1 | (uint)(bVar22 == bVar4)) << 1 |
                        (uint)(bVar23 == bVar4)) << 1 | (uint)(bVar24 == bVar4)) << 1 |
                      (uint)(bVar25 == bVar4)) << 1 | (uint)(bVar26 == bVar4)) << 1 |
                    (uint)(bVar27 == bVar4)) << 1 | (uint)(bVar28 == bVar4)) << 1 |
                  (uint)(bVar29 == bVar4)) << 1 | (uint)(bVar30 == bVar4)) << 1 |
                (uint)(bVar31 == bVar4)) << 1 | (uint)(bVar32 == bVar4)) << 1 |
              (uint)(bVar33 == bVar4)) << 1 | (uint)(bVar34 == bVar4)) << 1 |
            (uint)(bVar35 == bVar4)) << 1 | (uint)(bVar36 == bVar4)) << 1 | (uint)(bVar37 == bVar4))
          << 1 | (uint)(bVar38 == bVar4)) + (uint)(bVar4 != bVar5);
}

__asm__(".globl _libgcc_divide_helper_0101e4\n.set _libgcc_divide_helper_0101e4, _libgcc_divide_helper_0101e4_def\n");
//@unit 8c010284
#include "../decls.h"
uint libgcc_divide_helper_010284_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar6;
  
  if (ar5 == 0) {
    return ar4;
  }
  uVar3 = (uint)((ar4 & 0x80000000) != 0);
  uVar1 = uVar3 - ar5;
  bVar4 = uVar3 < uVar1;
  uVar3 = ar4 << 2;
  bVar5 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 * 2 | (uint)((ar4 & 0x40000000) != 0);
  if (bVar4) {
    if (bVar4) {
      uVar2 = uVar1 + ar5;
      bVar6 = uVar2 < uVar1;
      if (!bVar5) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar5) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar6 = uVar1 < uVar2;
    if (!bVar5) {
      bVar6 = !bVar6;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6) {
    if (bVar6) {
      uVar2 = uVar1 + ar5;
      bVar7 = uVar2 < uVar1;
      if (!bVar5) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar7 = uVar1 < uVar2;
      if (bVar5) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar7 = uVar1 < uVar2;
    if (!bVar5) {
      bVar7 = !bVar7;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000000) != 0);
  if (bVar7) {
    if (bVar7) {
      uVar2 = uVar1 + ar5;
      bVar8 = uVar2 < uVar1;
      if (!bVar5) {
        bVar8 = !bVar8;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar8 = uVar1 < uVar2;
      if (bVar5) {
        bVar8 = !bVar8;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar8 = uVar1 < uVar2;
    if (!bVar5) {
      bVar8 = !bVar8;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000000) != 0);
  if (bVar8) {
    if (bVar8) {
      uVar2 = uVar1 + ar5;
      bVar9 = uVar2 < uVar1;
      if (!bVar5) {
        bVar9 = !bVar9;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar9 = uVar1 < uVar2;
      if (bVar5) {
        bVar9 = !bVar9;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar9 = uVar1 < uVar2;
    if (!bVar5) {
      bVar9 = !bVar9;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000000) != 0);
  if (bVar9) {
    if (bVar9) {
      uVar2 = uVar1 + ar5;
      bVar10 = uVar2 < uVar1;
      if (!bVar5) {
        bVar10 = !bVar10;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar10 = uVar1 < uVar2;
      if (bVar5) {
        bVar10 = !bVar10;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar10 = uVar1 < uVar2;
    if (!bVar5) {
      bVar10 = !bVar10;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000000) != 0);
  if (bVar10) {
    if (bVar10) {
      uVar2 = uVar1 + ar5;
      bVar11 = uVar2 < uVar1;
      if (!bVar5) {
        bVar11 = !bVar11;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar11 = uVar1 < uVar2;
      if (bVar5) {
        bVar11 = !bVar11;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar11 = uVar1 < uVar2;
    if (!bVar5) {
      bVar11 = !bVar11;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000000) != 0);
  if (bVar11) {
    if (bVar11) {
      uVar2 = uVar1 + ar5;
      bVar12 = uVar2 < uVar1;
      if (!bVar5) {
        bVar12 = !bVar12;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar12 = uVar1 < uVar2;
      if (bVar5) {
        bVar12 = !bVar12;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar12 = uVar1 < uVar2;
    if (!bVar5) {
      bVar12 = !bVar12;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000000) != 0);
  if (bVar12) {
    if (bVar12) {
      uVar2 = uVar1 + ar5;
      bVar13 = uVar2 < uVar1;
      if (!bVar5) {
        bVar13 = !bVar13;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar13 = uVar1 < uVar2;
      if (bVar5) {
        bVar13 = !bVar13;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar13 = uVar1 < uVar2;
    if (!bVar5) {
      bVar13 = !bVar13;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000000) != 0);
  if (bVar13) {
    if (bVar13) {
      uVar2 = uVar1 + ar5;
      bVar14 = uVar2 < uVar1;
      if (!bVar5) {
        bVar14 = !bVar14;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar14 = uVar1 < uVar2;
      if (bVar5) {
        bVar14 = !bVar14;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar14 = uVar1 < uVar2;
    if (!bVar5) {
      bVar14 = !bVar14;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800000) != 0);
  if (bVar14) {
    if (bVar14) {
      uVar2 = uVar1 + ar5;
      bVar15 = uVar2 < uVar1;
      if (!bVar5) {
        bVar15 = !bVar15;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar15 = uVar1 < uVar2;
      if (bVar5) {
        bVar15 = !bVar15;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar15 = uVar1 < uVar2;
    if (!bVar5) {
      bVar15 = !bVar15;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400000) != 0);
  if (bVar15) {
    if (bVar15) {
      uVar2 = uVar1 + ar5;
      bVar16 = uVar2 < uVar1;
      if (!bVar5) {
        bVar16 = !bVar16;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar16 = uVar1 < uVar2;
      if (bVar5) {
        bVar16 = !bVar16;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar16 = uVar1 < uVar2;
    if (!bVar5) {
      bVar16 = !bVar16;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200000) != 0);
  if (bVar16) {
    if (bVar16) {
      uVar2 = uVar1 + ar5;
      bVar17 = uVar2 < uVar1;
      if (!bVar5) {
        bVar17 = !bVar17;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar17 = uVar1 < uVar2;
      if (bVar5) {
        bVar17 = !bVar17;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar17 = uVar1 < uVar2;
    if (!bVar5) {
      bVar17 = !bVar17;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100000) != 0);
  if (bVar17) {
    if (bVar17) {
      uVar2 = uVar1 + ar5;
      bVar18 = uVar2 < uVar1;
      if (!bVar5) {
        bVar18 = !bVar18;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar18 = uVar1 < uVar2;
      if (bVar5) {
        bVar18 = !bVar18;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar18 = uVar1 < uVar2;
    if (!bVar5) {
      bVar18 = !bVar18;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000) != 0);
  if (bVar18) {
    if (bVar18) {
      uVar2 = uVar1 + ar5;
      bVar19 = uVar2 < uVar1;
      if (!bVar5) {
        bVar19 = !bVar19;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar19 = uVar1 < uVar2;
      if (bVar5) {
        bVar19 = !bVar19;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar19 = uVar1 < uVar2;
    if (!bVar5) {
      bVar19 = !bVar19;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000) != 0);
  if (bVar19) {
    if (bVar19) {
      uVar2 = uVar1 + ar5;
      bVar20 = uVar2 < uVar1;
      if (!bVar5) {
        bVar20 = !bVar20;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar20 = uVar1 < uVar2;
      if (bVar5) {
        bVar20 = !bVar20;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar20 = uVar1 < uVar2;
    if (!bVar5) {
      bVar20 = !bVar20;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000) != 0);
  if (bVar20) {
    if (bVar20) {
      uVar2 = uVar1 + ar5;
      bVar21 = uVar2 < uVar1;
      if (!bVar5) {
        bVar21 = !bVar21;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar21 = uVar1 < uVar2;
      if (bVar5) {
        bVar21 = !bVar21;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar21 = uVar1 < uVar2;
    if (!bVar5) {
      bVar21 = !bVar21;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000) != 0);
  if (bVar21) {
    if (bVar21) {
      uVar2 = uVar1 + ar5;
      bVar22 = uVar2 < uVar1;
      if (!bVar5) {
        bVar22 = !bVar22;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar22 = uVar1 < uVar2;
      if (bVar5) {
        bVar22 = !bVar22;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar22 = uVar1 < uVar2;
    if (!bVar5) {
      bVar22 = !bVar22;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000) != 0);
  if (bVar22) {
    if (bVar22) {
      uVar2 = uVar1 + ar5;
      bVar23 = uVar2 < uVar1;
      if (!bVar5) {
        bVar23 = !bVar23;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar23 = uVar1 < uVar2;
      if (bVar5) {
        bVar23 = !bVar23;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar23 = uVar1 < uVar2;
    if (!bVar5) {
      bVar23 = !bVar23;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000) != 0);
  if (bVar23) {
    if (bVar23) {
      uVar2 = uVar1 + ar5;
      bVar24 = uVar2 < uVar1;
      if (!bVar5) {
        bVar24 = !bVar24;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar24 = uVar1 < uVar2;
      if (bVar5) {
        bVar24 = !bVar24;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar24 = uVar1 < uVar2;
    if (!bVar5) {
      bVar24 = !bVar24;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000) != 0);
  if (bVar24) {
    if (bVar24) {
      uVar2 = uVar1 + ar5;
      bVar25 = uVar2 < uVar1;
      if (!bVar5) {
        bVar25 = !bVar25;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar25 = uVar1 < uVar2;
      if (bVar5) {
        bVar25 = !bVar25;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar25 = uVar1 < uVar2;
    if (!bVar5) {
      bVar25 = !bVar25;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000) != 0);
  if (bVar25) {
    if (bVar25) {
      uVar2 = uVar1 + ar5;
      bVar26 = uVar2 < uVar1;
      if (!bVar5) {
        bVar26 = !bVar26;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar26 = uVar1 < uVar2;
      if (bVar5) {
        bVar26 = !bVar26;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar26 = uVar1 < uVar2;
    if (!bVar5) {
      bVar26 = !bVar26;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800) != 0);
  if (bVar26) {
    if (bVar26) {
      uVar2 = uVar1 + ar5;
      bVar27 = uVar2 < uVar1;
      if (!bVar5) {
        bVar27 = !bVar27;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar27 = uVar1 < uVar2;
      if (bVar5) {
        bVar27 = !bVar27;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar27 = uVar1 < uVar2;
    if (!bVar5) {
      bVar27 = !bVar27;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400) != 0);
  if (bVar27) {
    if (bVar27) {
      uVar2 = uVar1 + ar5;
      bVar28 = uVar2 < uVar1;
      if (!bVar5) {
        bVar28 = !bVar28;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar28 = uVar1 < uVar2;
      if (bVar5) {
        bVar28 = !bVar28;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar28 = uVar1 < uVar2;
    if (!bVar5) {
      bVar28 = !bVar28;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200) != 0);
  if (bVar28) {
    if (bVar28) {
      uVar2 = uVar1 + ar5;
      bVar29 = uVar2 < uVar1;
      if (!bVar5) {
        bVar29 = !bVar29;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar29 = uVar1 < uVar2;
      if (bVar5) {
        bVar29 = !bVar29;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar29 = uVar1 < uVar2;
    if (!bVar5) {
      bVar29 = !bVar29;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100) != 0);
  if (bVar29) {
    if (bVar29) {
      uVar2 = uVar1 + ar5;
      bVar30 = uVar2 < uVar1;
      if (!bVar5) {
        bVar30 = !bVar30;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar30 = uVar1 < uVar2;
      if (bVar5) {
        bVar30 = !bVar30;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar30 = uVar1 < uVar2;
    if (!bVar5) {
      bVar30 = !bVar30;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80) != 0);
  if (bVar30) {
    if (bVar30) {
      uVar2 = uVar1 + ar5;
      bVar31 = uVar2 < uVar1;
      if (!bVar5) {
        bVar31 = !bVar31;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar31 = uVar1 < uVar2;
      if (bVar5) {
        bVar31 = !bVar31;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar31 = uVar1 < uVar2;
    if (!bVar5) {
      bVar31 = !bVar31;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40) != 0);
  if (bVar31) {
    if (bVar31) {
      uVar2 = uVar1 + ar5;
      bVar32 = uVar2 < uVar1;
      if (!bVar5) {
        bVar32 = !bVar32;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar32 = uVar1 < uVar2;
      if (bVar5) {
        bVar32 = !bVar32;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar32 = uVar1 < uVar2;
    if (!bVar5) {
      bVar32 = !bVar32;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20) != 0);
  if (bVar32) {
    if (bVar32) {
      uVar2 = uVar1 + ar5;
      bVar33 = uVar2 < uVar1;
      if (!bVar5) {
        bVar33 = !bVar33;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar33 = uVar1 < uVar2;
      if (bVar5) {
        bVar33 = !bVar33;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar33 = uVar1 < uVar2;
    if (!bVar5) {
      bVar33 = !bVar33;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10) != 0);
  if (bVar33) {
    if (bVar33) {
      uVar2 = uVar1 + ar5;
      bVar34 = uVar2 < uVar1;
      if (!bVar5) {
        bVar34 = !bVar34;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar34 = uVar1 < uVar2;
      if (bVar5) {
        bVar34 = !bVar34;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar34 = uVar1 < uVar2;
    if (!bVar5) {
      bVar34 = !bVar34;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 8) != 0);
  if (bVar34) {
    if (bVar34) {
      uVar2 = uVar1 + ar5;
      bVar35 = uVar2 < uVar1;
      if (!bVar5) {
        bVar35 = !bVar35;
      }
    }
    else {
      uVar2 = uVar1 - ar5;
      bVar35 = uVar1 < uVar2;
      if (bVar5) {
        bVar35 = !bVar35;
      }
    }
  }
  else {
    uVar2 = uVar1 - ar5;
    bVar35 = uVar1 < uVar2;
    if (!bVar5) {
      bVar35 = !bVar35;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 4) != 0);
  if (bVar35) {
    if (bVar35) {
      bVar36 = uVar1 + ar5 < uVar1;
      if (!bVar5) {
        bVar36 = !bVar36;
      }
    }
    else {
      bVar36 = uVar1 < uVar1 - ar5;
      if (bVar5) {
        bVar36 = !bVar36;
      }
    }
  }
  else {
    bVar36 = uVar1 < uVar1 - ar5;
    if (!bVar5) {
      bVar36 = !bVar36;
    }
  }
  return (((((((((((((((((((((((((((((((uint)!bVar4 << 1 | (uint)!bVar6) << 1 | (uint)!bVar7) << 1 |
                                    (uint)!bVar8) << 1 | (uint)!bVar9) << 1 | (uint)!bVar10) << 1 |
                                 (uint)!bVar11) << 1 | (uint)!bVar12) << 1 | (uint)!bVar13) << 1 |
                              (uint)!bVar14) << 1 | (uint)!bVar15) << 1 | (uint)!bVar16) << 1 |
                           (uint)!bVar17) << 1 | (uint)!bVar18) << 1 | (uint)!bVar19) << 1 |
                        (uint)!bVar20) << 1 | (uint)!bVar21) << 1 | (uint)!bVar22) << 1 |
                     (uint)!bVar23) << 1 | (uint)!bVar24) << 1 | (uint)!bVar25) << 1 | (uint)!bVar26
                  ) << 1 | (uint)!bVar27) << 1 | (uint)!bVar28) << 1 | (uint)!bVar29) << 1 |
              (uint)!bVar30) << 1 | (uint)!bVar31) << 1 | (uint)!bVar32) << 1 | (uint)!bVar33) << 1
          | (uint)!bVar34) << 1 | (uint)!bVar35) << 1 | (uint)!bVar36;
}

__asm__(".globl _libgcc_divide_helper_010284\n.set _libgcc_divide_helper_010284, _libgcc_divide_helper_010284_def\n");
//@unit 8c01031c
#include "../decls.h"
int libgcc_divide_helper_01031c_def(uint ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 in_r0;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (ar5 == 0) {
    return in_r0;
  }
  bVar5 = (ar4 & 0x80000000) != 0;
  uVar2 = (uint)bVar5;
  uVar3 = ar4 - (uVar2 != 0);
  bVar6 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (ar5 & 0x80000000) != 0;
  bVar7 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 << 1 | (uint)((uVar3 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar2 + ar5;
      bVar6 = uVar1 < uVar2;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar2 - ar5;
      bVar6 = uVar2 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar2 - ar5;
    bVar6 = uVar2 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar2 = uVar1 << 1 | (uint)((uVar3 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else if (bVar6 && !bVar4) {
      uVar2 = uVar2 + ar5;
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  else {
    uVar2 = uVar2 - ar5;
  }
  if (((uVar2 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar2 & 0x80000000) != 0;
    bVar4 = (ar5 & 0x80000000) != 0;
    uVar2 = ((int)uVar2 >> 1) << 1 | (uint)((uVar2 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else if (bVar6 && !bVar4) {
        uVar2 = uVar2 + ar5;
      }
      else {
        uVar2 = uVar2 - ar5;
      }
    }
    else {
      uVar2 = uVar2 - ar5;
    }
  }
  return uVar2 + bVar5;
}

__asm__(".globl _libgcc_divide_helper_01031c\n.set _libgcc_divide_helper_01031c, _libgcc_divide_helper_01031c_def\n");
//@unit 8c0103d0
#include "../decls.h"
uint libgcc_divide_helper_0103d0_def(uint ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  undefined4 in_r0;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  if (ar5 == 0) {
    return in_r0;
  }
  uVar2 = (uint)((ar4 & 0x80000000) != 0);
  uVar1 = uVar2 - ar5;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 * 2 | (uint)((ar4 & 0x40000000) != 0);
  if (uVar2 < uVar1) {
    if (uVar2 < uVar1) {
      uVar1 = uVar3 + ar5;
      bVar5 = uVar1 < uVar3;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar3 - ar5;
      bVar5 = uVar3 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar3 - ar5;
    bVar5 = uVar3 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((ar4 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar3 & 0x80000000) == 0;
  uVar1 = uVar3 << 1 | (uint)((ar4 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar3 = uVar1 + ar5;
      bVar5 = uVar3 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar3 = uVar1 - ar5;
      bVar5 = uVar1 < uVar3;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar3 = uVar1 - ar5;
    bVar5 = uVar1 < uVar3;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (bVar5) {
    uVar3 = uVar3 + ar5;
  }
  return uVar3;
}

__asm__(".globl _libgcc_divide_helper_0103d0\n.set _libgcc_divide_helper_0103d0, _libgcc_divide_helper_0103d0_def\n");
//@unit 8c010468
#include "../decls.h"
int libgcc_divide_helper_010468_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint in_r0;
  uint in_r1;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  bool bVar38;
  bool bVar7;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar2 = (uint)((in_r1 & 0x80000000) != 0);
  uVar3 = in_r1 - (uVar2 != 0);
  bVar5 = (-uVar2 & 0x80000000) != 0;
  bVar4 = (in_r0 & 0x80000000) != 0;
  uVar1 = uVar3 * 2;
  bVar6 = (-uVar2 & 0x80000000) == 0;
  uVar2 = uVar2 * -2 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar5 || bVar4) {
    if (!bVar5 && bVar4) {
      uVar3 = uVar2 + in_r0;
      bVar7 = uVar3 < uVar2;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
    else if (bVar5 && !bVar4) {
      uVar3 = uVar2 + in_r0;
      bVar7 = uVar3 < uVar2;
      if (!bVar6) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar3 = uVar2 - in_r0;
      bVar7 = uVar2 < uVar3;
      if (bVar6) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar7 = uVar2 < uVar3;
    if (!bVar6) {
      bVar7 = !bVar7;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000000) != 0);
  if (bVar7 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar8 = uVar2 < uVar3;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar8 = uVar3 < uVar2;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  else if (bVar7 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar8 = uVar3 < uVar2;
    if (!bVar6) {
      bVar8 = !bVar8;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar8 = uVar2 < uVar3;
    if (bVar6) {
      bVar8 = !bVar8;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000000) != 0);
  if (bVar8 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar9 = uVar2 < uVar3;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar9 = uVar3 < uVar2;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  else if (bVar8 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar9 = uVar3 < uVar2;
    if (!bVar6) {
      bVar9 = !bVar9;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar9 = uVar2 < uVar3;
    if (bVar6) {
      bVar9 = !bVar9;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000000) != 0);
  if (bVar9 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar10 = uVar2 < uVar3;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar10 = uVar3 < uVar2;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  else if (bVar9 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar10 = uVar3 < uVar2;
    if (!bVar6) {
      bVar10 = !bVar10;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar10 = uVar2 < uVar3;
    if (bVar6) {
      bVar10 = !bVar10;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000000) != 0);
  if (bVar10 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar11 = uVar2 < uVar3;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar11 = uVar3 < uVar2;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  else if (bVar10 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar11 = uVar3 < uVar2;
    if (!bVar6) {
      bVar11 = !bVar11;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar11 = uVar2 < uVar3;
    if (bVar6) {
      bVar11 = !bVar11;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000000) != 0);
  if (bVar11 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar12 = uVar2 < uVar3;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar12 = uVar3 < uVar2;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  else if (bVar11 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar12 = uVar3 < uVar2;
    if (!bVar6) {
      bVar12 = !bVar12;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar12 = uVar2 < uVar3;
    if (bVar6) {
      bVar12 = !bVar12;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000000) != 0);
  if (bVar12 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar13 = uVar2 < uVar3;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar13 = uVar3 < uVar2;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  else if (bVar12 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar13 = uVar3 < uVar2;
    if (!bVar6) {
      bVar13 = !bVar13;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar13 = uVar2 < uVar3;
    if (bVar6) {
      bVar13 = !bVar13;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000000) != 0);
  if (bVar13 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar14 = uVar2 < uVar3;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar14 = uVar3 < uVar2;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  else if (bVar13 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar14 = uVar3 < uVar2;
    if (!bVar6) {
      bVar14 = !bVar14;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar14 = uVar2 < uVar3;
    if (bVar6) {
      bVar14 = !bVar14;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000000) != 0);
  if (bVar14 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar15 = uVar2 < uVar3;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar15 = uVar3 < uVar2;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  else if (bVar14 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar15 = uVar3 < uVar2;
    if (!bVar6) {
      bVar15 = !bVar15;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar15 = uVar2 < uVar3;
    if (bVar6) {
      bVar15 = !bVar15;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800000) != 0);
  if (bVar15 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar16 = uVar2 < uVar3;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar16 = uVar3 < uVar2;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  else if (bVar15 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar16 = uVar3 < uVar2;
    if (!bVar6) {
      bVar16 = !bVar16;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar16 = uVar2 < uVar3;
    if (bVar6) {
      bVar16 = !bVar16;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400000) != 0);
  if (bVar16 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar17 = uVar2 < uVar3;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar17 = uVar3 < uVar2;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  else if (bVar16 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar17 = uVar3 < uVar2;
    if (!bVar6) {
      bVar17 = !bVar17;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar17 = uVar2 < uVar3;
    if (bVar6) {
      bVar17 = !bVar17;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200000) != 0);
  if (bVar17 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar18 = uVar2 < uVar3;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar18 = uVar3 < uVar2;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  else if (bVar17 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar18 = uVar3 < uVar2;
    if (!bVar6) {
      bVar18 = !bVar18;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar18 = uVar2 < uVar3;
    if (bVar6) {
      bVar18 = !bVar18;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100000) != 0);
  if (bVar18 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar19 = uVar2 < uVar3;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar19 = uVar3 < uVar2;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  else if (bVar18 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar19 = uVar3 < uVar2;
    if (!bVar6) {
      bVar19 = !bVar19;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar19 = uVar2 < uVar3;
    if (bVar6) {
      bVar19 = !bVar19;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80000) != 0);
  if (bVar19 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar20 = uVar2 < uVar3;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar20 = uVar3 < uVar2;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  else if (bVar19 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar20 = uVar3 < uVar2;
    if (!bVar6) {
      bVar20 = !bVar20;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar20 = uVar2 < uVar3;
    if (bVar6) {
      bVar20 = !bVar20;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40000) != 0);
  if (bVar20 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar21 = uVar2 < uVar3;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar21 = uVar3 < uVar2;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  else if (bVar20 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar21 = uVar3 < uVar2;
    if (!bVar6) {
      bVar21 = !bVar21;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar21 = uVar2 < uVar3;
    if (bVar6) {
      bVar21 = !bVar21;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20000) != 0);
  if (bVar21 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar22 = uVar2 < uVar3;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar22 = uVar3 < uVar2;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  else if (bVar21 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar22 = uVar3 < uVar2;
    if (!bVar6) {
      bVar22 = !bVar22;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar22 = uVar2 < uVar3;
    if (bVar6) {
      bVar22 = !bVar22;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10000) != 0);
  if (bVar22 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar23 = uVar2 < uVar3;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar23 = uVar3 < uVar2;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  else if (bVar22 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar23 = uVar3 < uVar2;
    if (!bVar6) {
      bVar23 = !bVar23;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar23 = uVar2 < uVar3;
    if (bVar6) {
      bVar23 = !bVar23;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x8000) != 0);
  if (bVar23 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar24 = uVar2 < uVar3;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar24 = uVar3 < uVar2;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  else if (bVar23 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar24 = uVar3 < uVar2;
    if (!bVar6) {
      bVar24 = !bVar24;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar24 = uVar2 < uVar3;
    if (bVar6) {
      bVar24 = !bVar24;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x4000) != 0);
  if (bVar24 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar25 = uVar2 < uVar3;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar25 = uVar3 < uVar2;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  else if (bVar24 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar25 = uVar3 < uVar2;
    if (!bVar6) {
      bVar25 = !bVar25;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar25 = uVar2 < uVar3;
    if (bVar6) {
      bVar25 = !bVar25;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x2000) != 0);
  if (bVar25 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar26 = uVar2 < uVar3;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar26 = uVar3 < uVar2;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  else if (bVar25 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar26 = uVar3 < uVar2;
    if (!bVar6) {
      bVar26 = !bVar26;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar26 = uVar2 < uVar3;
    if (bVar6) {
      bVar26 = !bVar26;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x1000) != 0);
  if (bVar26 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar27 = uVar2 < uVar3;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar27 = uVar3 < uVar2;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  else if (bVar26 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar27 = uVar3 < uVar2;
    if (!bVar6) {
      bVar27 = !bVar27;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar27 = uVar2 < uVar3;
    if (bVar6) {
      bVar27 = !bVar27;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x800) != 0);
  if (bVar27 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar28 = uVar2 < uVar3;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar28 = uVar3 < uVar2;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  else if (bVar27 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar28 = uVar3 < uVar2;
    if (!bVar6) {
      bVar28 = !bVar28;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar28 = uVar2 < uVar3;
    if (bVar6) {
      bVar28 = !bVar28;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x400) != 0);
  if (bVar28 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar29 = uVar2 < uVar3;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar29 = uVar3 < uVar2;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  else if (bVar28 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar29 = uVar3 < uVar2;
    if (!bVar6) {
      bVar29 = !bVar29;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar29 = uVar2 < uVar3;
    if (bVar6) {
      bVar29 = !bVar29;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x200) != 0);
  if (bVar29 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar30 = uVar2 < uVar3;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar30 = uVar3 < uVar2;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  else if (bVar29 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar30 = uVar3 < uVar2;
    if (!bVar6) {
      bVar30 = !bVar30;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar30 = uVar2 < uVar3;
    if (bVar6) {
      bVar30 = !bVar30;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x100) != 0);
  if (bVar30 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar31 = uVar2 < uVar3;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar31 = uVar3 < uVar2;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  else if (bVar30 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar31 = uVar3 < uVar2;
    if (!bVar6) {
      bVar31 = !bVar31;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar31 = uVar2 < uVar3;
    if (bVar6) {
      bVar31 = !bVar31;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x80) != 0);
  if (bVar31 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar32 = uVar2 < uVar3;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar32 = uVar3 < uVar2;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  else if (bVar31 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar32 = uVar3 < uVar2;
    if (!bVar6) {
      bVar32 = !bVar32;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar32 = uVar2 < uVar3;
    if (bVar6) {
      bVar32 = !bVar32;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x40) != 0);
  if (bVar32 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar33 = uVar2 < uVar3;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar33 = uVar3 < uVar2;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  else if (bVar32 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar33 = uVar3 < uVar2;
    if (!bVar6) {
      bVar33 = !bVar33;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar33 = uVar2 < uVar3;
    if (bVar6) {
      bVar33 = !bVar33;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x20) != 0);
  if (bVar33 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar34 = uVar2 < uVar3;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar34 = uVar3 < uVar2;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  else if (bVar33 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar34 = uVar3 < uVar2;
    if (!bVar6) {
      bVar34 = !bVar34;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar34 = uVar2 < uVar3;
    if (bVar6) {
      bVar34 = !bVar34;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 0x10) != 0);
  if (bVar34 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar35 = uVar2 < uVar3;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar35 = uVar3 < uVar2;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  else if (bVar34 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar35 = uVar3 < uVar2;
    if (!bVar6) {
      bVar35 = !bVar35;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar35 = uVar2 < uVar3;
    if (bVar6) {
      bVar35 = !bVar35;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 8) != 0);
  if (bVar35 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar36 = uVar2 < uVar3;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar36 = uVar3 < uVar2;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  else if (bVar35 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar36 = uVar3 < uVar2;
    if (!bVar6) {
      bVar36 = !bVar36;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar36 = uVar2 < uVar3;
    if (bVar6) {
      bVar36 = !bVar36;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 4) != 0);
  if (bVar36 == false && !bVar4) {
    uVar3 = uVar2 - in_r0;
    bVar37 = uVar2 < uVar3;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == false && bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar37 = uVar3 < uVar2;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  else if (bVar36 == true && !bVar4) {
    uVar3 = uVar2 + in_r0;
    bVar37 = uVar3 < uVar2;
    if (!bVar6) {
      bVar37 = !bVar37;
    }
  }
  else {
    uVar3 = uVar2 - in_r0;
    bVar37 = uVar2 < uVar3;
    if (bVar6) {
      bVar37 = !bVar37;
    }
  }
  bVar6 = (uVar3 & 0x80000000) == 0;
  uVar2 = uVar3 << 1 | (uint)((uVar1 & 2) != 0);
  if (bVar37 == false && !bVar4) {
    bVar38 = uVar2 < uVar2 - in_r0;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == false && bVar4) {
    bVar38 = uVar2 + in_r0 < uVar2;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  else if (bVar37 == true && !bVar4) {
    bVar38 = uVar2 + in_r0 < uVar2;
    if (!bVar6) {
      bVar38 = !bVar38;
    }
  }
  else {
    bVar38 = uVar2 < uVar2 - in_r0;
    if (bVar6) {
      bVar38 = !bVar38;
    }
  }
  return ((((((((((((((((((((((((((((((((uint)(bVar7 == bVar4) << 1 | (uint)(bVar8 == bVar4)) << 1 |
                                      (uint)(bVar9 == bVar4)) << 1 | (uint)(bVar10 == bVar4)) << 1 |
                                    (uint)(bVar11 == bVar4)) << 1 | (uint)(bVar12 == bVar4)) << 1 |
                                  (uint)(bVar13 == bVar4)) << 1 | (uint)(bVar14 == bVar4)) << 1 |
                                (uint)(bVar15 == bVar4)) << 1 | (uint)(bVar16 == bVar4)) << 1 |
                              (uint)(bVar17 == bVar4)) << 1 | (uint)(bVar18 == bVar4)) << 1 |
                            (uint)(bVar19 == bVar4)) << 1 | (uint)(bVar20 == bVar4)) << 1 |
                          (uint)(bVar21 == bVar4)) << 1 | (uint)(bVar22 == bVar4)) << 1 |
                        (uint)(bVar23 == bVar4)) << 1 | (uint)(bVar24 == bVar4)) << 1 |
                      (uint)(bVar25 == bVar4)) << 1 | (uint)(bVar26 == bVar4)) << 1 |
                    (uint)(bVar27 == bVar4)) << 1 | (uint)(bVar28 == bVar4)) << 1 |
                  (uint)(bVar29 == bVar4)) << 1 | (uint)(bVar30 == bVar4)) << 1 |
                (uint)(bVar31 == bVar4)) << 1 | (uint)(bVar32 == bVar4)) << 1 |
              (uint)(bVar33 == bVar4)) << 1 | (uint)(bVar34 == bVar4)) << 1 |
            (uint)(bVar35 == bVar4)) << 1 | (uint)(bVar36 == bVar4)) << 1 | (uint)(bVar37 == bVar4))
          << 1 | (uint)(bVar38 == bVar4)) + (uint)(bVar4 != bVar5);
}

__asm__(".globl _libgcc_divide_helper_010468\n.set _libgcc_divide_helper_010468, _libgcc_divide_helper_010468_def\n");
//@unit 8c01051c
#include "../decls.h"
uint libgcc_divide_helper_01051c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int in_r0;
  uint in_r1;
  bool bVar5;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  bool bVar35;
  bool bVar36;
  bool bVar6;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = uVar3 < uVar1;
  uVar3 = in_r1 << 2;
  bVar5 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (bVar4) {
    if (bVar4) {
      uVar2 = uVar1 + in_r0;
      bVar6 = uVar2 < uVar1;
      if (!bVar5) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar6 = uVar1 < uVar2;
      if (bVar5) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar6 = uVar1 < uVar2;
    if (!bVar5) {
      bVar6 = !bVar6;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000000) != 0);
  if (bVar6) {
    if (bVar6) {
      uVar2 = uVar1 + in_r0;
      bVar7 = uVar2 < uVar1;
      if (!bVar5) {
        bVar7 = !bVar7;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar7 = uVar1 < uVar2;
      if (bVar5) {
        bVar7 = !bVar7;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar7 = uVar1 < uVar2;
    if (!bVar5) {
      bVar7 = !bVar7;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000000) != 0);
  if (bVar7) {
    if (bVar7) {
      uVar2 = uVar1 + in_r0;
      bVar8 = uVar2 < uVar1;
      if (!bVar5) {
        bVar8 = !bVar8;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar8 = uVar1 < uVar2;
      if (bVar5) {
        bVar8 = !bVar8;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar8 = uVar1 < uVar2;
    if (!bVar5) {
      bVar8 = !bVar8;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000000) != 0);
  if (bVar8) {
    if (bVar8) {
      uVar2 = uVar1 + in_r0;
      bVar9 = uVar2 < uVar1;
      if (!bVar5) {
        bVar9 = !bVar9;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar9 = uVar1 < uVar2;
      if (bVar5) {
        bVar9 = !bVar9;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar9 = uVar1 < uVar2;
    if (!bVar5) {
      bVar9 = !bVar9;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000000) != 0);
  if (bVar9) {
    if (bVar9) {
      uVar2 = uVar1 + in_r0;
      bVar10 = uVar2 < uVar1;
      if (!bVar5) {
        bVar10 = !bVar10;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar10 = uVar1 < uVar2;
      if (bVar5) {
        bVar10 = !bVar10;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar10 = uVar1 < uVar2;
    if (!bVar5) {
      bVar10 = !bVar10;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000000) != 0);
  if (bVar10) {
    if (bVar10) {
      uVar2 = uVar1 + in_r0;
      bVar11 = uVar2 < uVar1;
      if (!bVar5) {
        bVar11 = !bVar11;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar11 = uVar1 < uVar2;
      if (bVar5) {
        bVar11 = !bVar11;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar11 = uVar1 < uVar2;
    if (!bVar5) {
      bVar11 = !bVar11;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000000) != 0);
  if (bVar11) {
    if (bVar11) {
      uVar2 = uVar1 + in_r0;
      bVar12 = uVar2 < uVar1;
      if (!bVar5) {
        bVar12 = !bVar12;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar12 = uVar1 < uVar2;
      if (bVar5) {
        bVar12 = !bVar12;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar12 = uVar1 < uVar2;
    if (!bVar5) {
      bVar12 = !bVar12;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000000) != 0);
  if (bVar12) {
    if (bVar12) {
      uVar2 = uVar1 + in_r0;
      bVar13 = uVar2 < uVar1;
      if (!bVar5) {
        bVar13 = !bVar13;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar13 = uVar1 < uVar2;
      if (bVar5) {
        bVar13 = !bVar13;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar13 = uVar1 < uVar2;
    if (!bVar5) {
      bVar13 = !bVar13;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000000) != 0);
  if (bVar13) {
    if (bVar13) {
      uVar2 = uVar1 + in_r0;
      bVar14 = uVar2 < uVar1;
      if (!bVar5) {
        bVar14 = !bVar14;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar14 = uVar1 < uVar2;
      if (bVar5) {
        bVar14 = !bVar14;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar14 = uVar1 < uVar2;
    if (!bVar5) {
      bVar14 = !bVar14;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800000) != 0);
  if (bVar14) {
    if (bVar14) {
      uVar2 = uVar1 + in_r0;
      bVar15 = uVar2 < uVar1;
      if (!bVar5) {
        bVar15 = !bVar15;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar15 = uVar1 < uVar2;
      if (bVar5) {
        bVar15 = !bVar15;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar15 = uVar1 < uVar2;
    if (!bVar5) {
      bVar15 = !bVar15;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400000) != 0);
  if (bVar15) {
    if (bVar15) {
      uVar2 = uVar1 + in_r0;
      bVar16 = uVar2 < uVar1;
      if (!bVar5) {
        bVar16 = !bVar16;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar16 = uVar1 < uVar2;
      if (bVar5) {
        bVar16 = !bVar16;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar16 = uVar1 < uVar2;
    if (!bVar5) {
      bVar16 = !bVar16;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200000) != 0);
  if (bVar16) {
    if (bVar16) {
      uVar2 = uVar1 + in_r0;
      bVar17 = uVar2 < uVar1;
      if (!bVar5) {
        bVar17 = !bVar17;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar17 = uVar1 < uVar2;
      if (bVar5) {
        bVar17 = !bVar17;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar17 = uVar1 < uVar2;
    if (!bVar5) {
      bVar17 = !bVar17;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100000) != 0);
  if (bVar17) {
    if (bVar17) {
      uVar2 = uVar1 + in_r0;
      bVar18 = uVar2 < uVar1;
      if (!bVar5) {
        bVar18 = !bVar18;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar18 = uVar1 < uVar2;
      if (bVar5) {
        bVar18 = !bVar18;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar18 = uVar1 < uVar2;
    if (!bVar5) {
      bVar18 = !bVar18;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80000) != 0);
  if (bVar18) {
    if (bVar18) {
      uVar2 = uVar1 + in_r0;
      bVar19 = uVar2 < uVar1;
      if (!bVar5) {
        bVar19 = !bVar19;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar19 = uVar1 < uVar2;
      if (bVar5) {
        bVar19 = !bVar19;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar19 = uVar1 < uVar2;
    if (!bVar5) {
      bVar19 = !bVar19;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40000) != 0);
  if (bVar19) {
    if (bVar19) {
      uVar2 = uVar1 + in_r0;
      bVar20 = uVar2 < uVar1;
      if (!bVar5) {
        bVar20 = !bVar20;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar20 = uVar1 < uVar2;
      if (bVar5) {
        bVar20 = !bVar20;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar20 = uVar1 < uVar2;
    if (!bVar5) {
      bVar20 = !bVar20;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20000) != 0);
  if (bVar20) {
    if (bVar20) {
      uVar2 = uVar1 + in_r0;
      bVar21 = uVar2 < uVar1;
      if (!bVar5) {
        bVar21 = !bVar21;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar21 = uVar1 < uVar2;
      if (bVar5) {
        bVar21 = !bVar21;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar21 = uVar1 < uVar2;
    if (!bVar5) {
      bVar21 = !bVar21;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10000) != 0);
  if (bVar21) {
    if (bVar21) {
      uVar2 = uVar1 + in_r0;
      bVar22 = uVar2 < uVar1;
      if (!bVar5) {
        bVar22 = !bVar22;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar22 = uVar1 < uVar2;
      if (bVar5) {
        bVar22 = !bVar22;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar22 = uVar1 < uVar2;
    if (!bVar5) {
      bVar22 = !bVar22;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x8000) != 0);
  if (bVar22) {
    if (bVar22) {
      uVar2 = uVar1 + in_r0;
      bVar23 = uVar2 < uVar1;
      if (!bVar5) {
        bVar23 = !bVar23;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar23 = uVar1 < uVar2;
      if (bVar5) {
        bVar23 = !bVar23;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar23 = uVar1 < uVar2;
    if (!bVar5) {
      bVar23 = !bVar23;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x4000) != 0);
  if (bVar23) {
    if (bVar23) {
      uVar2 = uVar1 + in_r0;
      bVar24 = uVar2 < uVar1;
      if (!bVar5) {
        bVar24 = !bVar24;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar24 = uVar1 < uVar2;
      if (bVar5) {
        bVar24 = !bVar24;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar24 = uVar1 < uVar2;
    if (!bVar5) {
      bVar24 = !bVar24;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x2000) != 0);
  if (bVar24) {
    if (bVar24) {
      uVar2 = uVar1 + in_r0;
      bVar25 = uVar2 < uVar1;
      if (!bVar5) {
        bVar25 = !bVar25;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar25 = uVar1 < uVar2;
      if (bVar5) {
        bVar25 = !bVar25;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar25 = uVar1 < uVar2;
    if (!bVar5) {
      bVar25 = !bVar25;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x1000) != 0);
  if (bVar25) {
    if (bVar25) {
      uVar2 = uVar1 + in_r0;
      bVar26 = uVar2 < uVar1;
      if (!bVar5) {
        bVar26 = !bVar26;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar26 = uVar1 < uVar2;
      if (bVar5) {
        bVar26 = !bVar26;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar26 = uVar1 < uVar2;
    if (!bVar5) {
      bVar26 = !bVar26;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x800) != 0);
  if (bVar26) {
    if (bVar26) {
      uVar2 = uVar1 + in_r0;
      bVar27 = uVar2 < uVar1;
      if (!bVar5) {
        bVar27 = !bVar27;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar27 = uVar1 < uVar2;
      if (bVar5) {
        bVar27 = !bVar27;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar27 = uVar1 < uVar2;
    if (!bVar5) {
      bVar27 = !bVar27;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x400) != 0);
  if (bVar27) {
    if (bVar27) {
      uVar2 = uVar1 + in_r0;
      bVar28 = uVar2 < uVar1;
      if (!bVar5) {
        bVar28 = !bVar28;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar28 = uVar1 < uVar2;
      if (bVar5) {
        bVar28 = !bVar28;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar28 = uVar1 < uVar2;
    if (!bVar5) {
      bVar28 = !bVar28;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x200) != 0);
  if (bVar28) {
    if (bVar28) {
      uVar2 = uVar1 + in_r0;
      bVar29 = uVar2 < uVar1;
      if (!bVar5) {
        bVar29 = !bVar29;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar29 = uVar1 < uVar2;
      if (bVar5) {
        bVar29 = !bVar29;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar29 = uVar1 < uVar2;
    if (!bVar5) {
      bVar29 = !bVar29;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x100) != 0);
  if (bVar29) {
    if (bVar29) {
      uVar2 = uVar1 + in_r0;
      bVar30 = uVar2 < uVar1;
      if (!bVar5) {
        bVar30 = !bVar30;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar30 = uVar1 < uVar2;
      if (bVar5) {
        bVar30 = !bVar30;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar30 = uVar1 < uVar2;
    if (!bVar5) {
      bVar30 = !bVar30;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x80) != 0);
  if (bVar30) {
    if (bVar30) {
      uVar2 = uVar1 + in_r0;
      bVar31 = uVar2 < uVar1;
      if (!bVar5) {
        bVar31 = !bVar31;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar31 = uVar1 < uVar2;
      if (bVar5) {
        bVar31 = !bVar31;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar31 = uVar1 < uVar2;
    if (!bVar5) {
      bVar31 = !bVar31;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x40) != 0);
  if (bVar31) {
    if (bVar31) {
      uVar2 = uVar1 + in_r0;
      bVar32 = uVar2 < uVar1;
      if (!bVar5) {
        bVar32 = !bVar32;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar32 = uVar1 < uVar2;
      if (bVar5) {
        bVar32 = !bVar32;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar32 = uVar1 < uVar2;
    if (!bVar5) {
      bVar32 = !bVar32;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x20) != 0);
  if (bVar32) {
    if (bVar32) {
      uVar2 = uVar1 + in_r0;
      bVar33 = uVar2 < uVar1;
      if (!bVar5) {
        bVar33 = !bVar33;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar33 = uVar1 < uVar2;
      if (bVar5) {
        bVar33 = !bVar33;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar33 = uVar1 < uVar2;
    if (!bVar5) {
      bVar33 = !bVar33;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 0x10) != 0);
  if (bVar33) {
    if (bVar33) {
      uVar2 = uVar1 + in_r0;
      bVar34 = uVar2 < uVar1;
      if (!bVar5) {
        bVar34 = !bVar34;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar34 = uVar1 < uVar2;
      if (bVar5) {
        bVar34 = !bVar34;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar34 = uVar1 < uVar2;
    if (!bVar5) {
      bVar34 = !bVar34;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 8) != 0);
  if (bVar34) {
    if (bVar34) {
      uVar2 = uVar1 + in_r0;
      bVar35 = uVar2 < uVar1;
      if (!bVar5) {
        bVar35 = !bVar35;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar35 = uVar1 < uVar2;
      if (bVar5) {
        bVar35 = !bVar35;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar35 = uVar1 < uVar2;
    if (!bVar5) {
      bVar35 = !bVar35;
    }
  }
  bVar5 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((uVar3 & 4) != 0);
  if (bVar35) {
    if (bVar35) {
      bVar36 = uVar1 + in_r0 < uVar1;
      if (!bVar5) {
        bVar36 = !bVar36;
      }
    }
    else {
      bVar36 = uVar1 < uVar1 - in_r0;
      if (bVar5) {
        bVar36 = !bVar36;
      }
    }
  }
  else {
    bVar36 = uVar1 < uVar1 - in_r0;
    if (!bVar5) {
      bVar36 = !bVar36;
    }
  }
  return (((((((((((((((((((((((((((((((uint)!bVar4 << 1 | (uint)!bVar6) << 1 | (uint)!bVar7) << 1 |
                                    (uint)!bVar8) << 1 | (uint)!bVar9) << 1 | (uint)!bVar10) << 1 |
                                 (uint)!bVar11) << 1 | (uint)!bVar12) << 1 | (uint)!bVar13) << 1 |
                              (uint)!bVar14) << 1 | (uint)!bVar15) << 1 | (uint)!bVar16) << 1 |
                           (uint)!bVar17) << 1 | (uint)!bVar18) << 1 | (uint)!bVar19) << 1 |
                        (uint)!bVar20) << 1 | (uint)!bVar21) << 1 | (uint)!bVar22) << 1 |
                     (uint)!bVar23) << 1 | (uint)!bVar24) << 1 | (uint)!bVar25) << 1 | (uint)!bVar26
                  ) << 1 | (uint)!bVar27) << 1 | (uint)!bVar28) << 1 | (uint)!bVar29) << 1 |
              (uint)!bVar30) << 1 | (uint)!bVar31) << 1 | (uint)!bVar32) << 1 | (uint)!bVar33) << 1
          | (uint)!bVar34) << 1 | (uint)!bVar35) << 1 | (uint)!bVar36;
}

__asm__(".globl _libgcc_divide_helper_01051c\n.set _libgcc_divide_helper_01051c, _libgcc_divide_helper_01051c_def\n");
//@unit 8c0105c4
#include "../decls.h"
int FUN_8c0105c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  short in_r0;
  int iVar2;
  uint uVar3;
  short in_r1;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  iVar2 = (int)in_r0;
  if (iVar2 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar4 = (int)in_r1 - (uint)(((int)in_r1 & 0x80000000U) != 0);
  uVar3 = iVar2 * 0x10000;
  bVar6 = (uVar4 & 0x80000000) != 0;
  bVar5 = (uVar3 & 0x80000000) != 0;
  bVar7 = (uVar4 & 0x80000000) == 0;
  uVar4 = uVar4 * 2 | (uint)(bVar5 != bVar6);
  if (bVar6 || bVar5) {
    if (!bVar6 && bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar5) {
      uVar1 = uVar4 + uVar3;
      bVar6 = uVar1 < uVar4;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar4 + iVar2 * -0x10000;
      bVar6 = uVar4 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar1 = uVar4 + uVar3;
    bVar6 = uVar1 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar1 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar1;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar4 = uVar1 << 1 | (uint)(bVar6 == bVar5);
  if (bVar6 == false && !bVar5) {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == false && bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  else if (bVar6 == true && !bVar5) {
    uVar3 = uVar4 + uVar3;
    bVar6 = uVar3 < uVar4;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  else {
    uVar3 = uVar4 + iVar2 * -0x10000;
    bVar6 = uVar4 < uVar3;
    if (bVar7) {
      bVar6 = !bVar6;
    }
  }
  return ((int)(short)uVar3 << 1 | (uint)(bVar6 == bVar5)) +
         (uint)(((int)(short)uVar3 & 0x80000000U) != 0);
}

__asm__(".globl _FUN_8c0105c4\n.set _FUN_8c0105c4, _FUN_8c0105c4_def\n");
//@unit 8c010614
#include "../decls.h"
int libgcc_divide_helper_010614_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint in_r0;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  bVar5 = (in_r1 & 0x80000000) != 0;
  uVar3 = (uint)bVar5;
  uVar2 = in_r1 - (uVar3 != 0);
  bVar6 = (-uVar3 & 0x80000000) != 0;
  bVar4 = (in_r0 & 0x80000000) != 0;
  bVar7 = (-uVar3 & 0x80000000) == 0;
  uVar3 = uVar3 * -2 | (uint)((uVar2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 2 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 4 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 8 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x80000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x100000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x200000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x400000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x800000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x1000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x2000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x4000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x8000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x10000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x20000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  bVar7 = (uVar1 & 0x80000000) == 0;
  uVar3 = uVar1 << 1 | (uint)((uVar2 * 0x40000000 & 0x80000000) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
    else if (bVar6 && !bVar4) {
      uVar1 = uVar3 + in_r0;
      bVar6 = uVar1 < uVar3;
      if (!bVar7) {
        bVar6 = !bVar6;
      }
    }
    else {
      uVar1 = uVar3 - in_r0;
      bVar6 = uVar3 < uVar1;
      if (bVar7) {
        bVar6 = !bVar6;
      }
    }
  }
  else {
    uVar1 = uVar3 - in_r0;
    bVar6 = uVar3 < uVar1;
    if (!bVar7) {
      bVar6 = !bVar6;
    }
  }
  uVar3 = uVar1 << 1 | (uint)((uVar2 & 1) != 0);
  if (bVar6 || bVar4) {
    if (!bVar6 && bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else if (bVar6 && !bVar4) {
      uVar3 = uVar3 + in_r0;
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  else {
    uVar3 = uVar3 - in_r0;
  }
  if (((uVar3 & 0x80000000) != 0) != bVar5) {
    bVar6 = (uVar3 & 0x80000000) != 0;
    bVar4 = (in_r0 & 0x80000000) != 0;
    uVar3 = ((int)uVar3 >> 1) << 1 | (uint)((uVar3 & 1) != 0);
    if (bVar6 || bVar4) {
      if (!bVar6 && bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else if (bVar6 && !bVar4) {
        uVar3 = uVar3 + in_r0;
      }
      else {
        uVar3 = uVar3 - in_r0;
      }
    }
    else {
      uVar3 = uVar3 - in_r0;
    }
  }
  return uVar3 + bVar5;
}

__asm__(".globl _libgcc_divide_helper_010614\n.set _libgcc_divide_helper_010614, _libgcc_divide_helper_010614_def\n");
//@unit 8c0106dc
#include "../decls.h"
uint libgcc_divide_helper_0106dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_r0;
  uint in_r1;
  bool bVar4;
  bool bVar5;
  
  if (in_r0 == 0) {
    *(undefined4 *)0x8c2787a8 = 0x44e;
    return 0;
  }
  uVar3 = (uint)((in_r1 & 0x80000000) != 0);
  uVar1 = uVar3 - in_r0;
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar2 = uVar1 * 2 | (uint)((in_r1 & 0x40000000) != 0);
  if (uVar3 < uVar1) {
    if (uVar3 < uVar1) {
      uVar1 = uVar2 + in_r0;
      bVar5 = uVar1 < uVar2;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar1 = uVar2 - in_r0;
      bVar5 = uVar2 < uVar1;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar1 = uVar2 - in_r0;
    bVar5 = uVar2 < uVar1;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar1 & 0x80000000) == 0;
  uVar1 = uVar1 << 1 | (uint)((in_r1 & 0x20000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x8000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x4000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x2000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x1000) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x800) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x400) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x200) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x100) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x80) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x40) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x20) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 0x10) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 8) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 4) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 2) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  bVar4 = (uVar2 & 0x80000000) == 0;
  uVar1 = uVar2 << 1 | (uint)((in_r1 & 1) != 0);
  if (bVar5) {
    if (bVar5) {
      uVar2 = uVar1 + in_r0;
      bVar5 = uVar2 < uVar1;
      if (!bVar4) {
        bVar5 = !bVar5;
      }
    }
    else {
      uVar2 = uVar1 - in_r0;
      bVar5 = uVar1 < uVar2;
      if (bVar4) {
        bVar5 = !bVar5;
      }
    }
  }
  else {
    uVar2 = uVar1 - in_r0;
    bVar5 = uVar1 < uVar2;
    if (!bVar4) {
      bVar5 = !bVar5;
    }
  }
  if (!bVar5) {
    return uVar2;
  }
  return in_r0 + uVar2;
}

__asm__(".globl _libgcc_divide_helper_0106dc\n.set _libgcc_divide_helper_0106dc, _libgcc_divide_helper_0106dc_def\n");
//@unit 8c010794
#include "../decls.h"
undefined4 FUN_8c010794_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
  return uVar1;
}

__asm__(".globl _FUN_8c010794\n.set _FUN_8c010794, _FUN_8c010794_def\n");
//@unit 8c0107a0
#include "../decls.h"
undefined4 FUN_8c0107a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  
                    
                    
  uVar1 = (**(code **)((&DATA_8c0107f4) + in_r0))();
  return uVar1;
}

__asm__(".globl _FUN_8c0107a0\n.set _FUN_8c0107a0, _FUN_8c0107a0_def\n");
//@unit 8c0107f0
#include "../decls.h"
undefined4 FUN_8c0107f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _FUN_8c0107f0\n.set _FUN_8c0107f0, _FUN_8c0107f0_def\n");
//@unit 8c010838
#include "../decls.h"
undefined4 FUN_8c010838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 *in_r1;
  undefined4 *in_r2;
  undefined4 *puVar2;
  
                    
  switch(in_r0) {
  case 0:
    return in_r0;
  default:
    puVar2 = (undefined4 *)((int)in_r2 + in_r0);
  }
  while( true ) {
    if (puVar2 < in_r2 + 1) {
      return *in_r2;
    }
    *in_r1 = *in_r2;
    uVar1 = in_r2[1];
    in_r2 = in_r2 + 2;
    if (puVar2 < in_r2) break;
    in_r1[1] = uVar1;
    in_r1 = in_r1 + 2;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c010838\n.set _FUN_8c010838, _FUN_8c010838_def\n");
//@unit 8c0108f8
#include "../decls.h"
uint * FUN_8c0108f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint *in_r0;
  uint *puVar2;
  uint *in_r1;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)((int)puVar3 + -3);
        *(char *)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)((int)puVar3 + -2);
          *(char *)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}

__asm__(".globl _FUN_8c0108f8\n.set _FUN_8c0108f8, _FUN_8c0108f8_def\n");
//@unit 8c0108fc
#include "../decls.h"
uint * FUN_8c0108fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  uint *in_r0;
  uint *puVar2;
  uint *in_r1;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *in_r1;
  puVar2 = in_r0;
  do {
    puVar3 = in_r1 + 1;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
LAB_8c010934:
      uVar4 = puVar3[-1];
      *(char *)puVar2 = (char)uVar4;
      if ((char)uVar4 != '\0') {
        cVar1 = *(char *)((int)puVar3 + -3);
        *(char *)((int)puVar2 + 1) = cVar1;
        if (cVar1 != '\0') {
          cVar1 = *(char *)((int)puVar3 + -2);
          *(char *)((int)puVar2 + 2) = cVar1;
          if (cVar1 != '\0') {
            *(char *)((int)puVar2 + 3) = *(char *)((int)puVar3 + -1);
          }
        }
      }
      return in_r0;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 2;
    *puVar2 = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 1;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar3 = in_r1 + 3;
    puVar2[1] = uVar5;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) {
      puVar2 = puVar2 + 2;
      goto LAB_8c010934;
    }
    uVar5 = *puVar3;
    puVar3 = in_r1 + 4;
    puVar2[2] = uVar4;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) {
      puVar2 = puVar2 + 3;
      goto LAB_8c010934;
    }
    uVar4 = *puVar3;
    puVar2[3] = uVar5;
    puVar2 = puVar2 + 4;
    in_r1 = puVar3;
  } while( true );
}

__asm__(".globl _FUN_8c0108fc\n.set _FUN_8c0108fc, _FUN_8c0108fc_def\n");
//@unit 8c010960
#include "../decls.h"
int FUN_8c010960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int in_r0;
  int iVar2;
  char *in_r1;
  char *in_r2;
  char *pcVar3;
  
  iVar2 = 0;
  if (in_r0 != 0) {
    pcVar3 = in_r2 + in_r0;
    do {
      cVar1 = *in_r2;
      *in_r1 = cVar1;
      if (pcVar3 <= in_r2 + 1) {
        return (int)cVar1;
      }
      cVar1 = in_r2[1];
      in_r1[1] = cVar1;
      if (pcVar3 <= in_r2 + 2) {
        return (int)cVar1;
      }
      cVar1 = in_r2[2];
      in_r1[2] = cVar1;
      if (pcVar3 <= in_r2 + 3) {
        return (int)cVar1;
      }
      cVar1 = in_r2[3];
      iVar2 = (int)cVar1;
      in_r2 = in_r2 + 4;
      in_r1[3] = cVar1;
      in_r1 = in_r1 + 4;
    } while (in_r2 < pcVar3);
  }
  return iVar2;
}

__asm__(".globl _FUN_8c010960\n.set _FUN_8c010960, _FUN_8c010960_def\n");
//@unit 8c010998
#include "../decls.h"
char * FUN_8c010998_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char *in_r0;
  undefined4 uVar2;
  char *in_r1;
  char *pcVar3;
  
  if (((uint)in_r1 & 3) == 0 && ((uint)in_r0 & 3) == 0) {
    uVar2 = FUN_8c0108fc(ar4);
    return (char *)uVar2;
  }
  cVar1 = *in_r1;
  pcVar3 = in_r0;
  while( true ) {
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[1];
    pcVar3[1] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[2];
    pcVar3[2] = cVar1;
    if (cVar1 == '\0') {
      return in_r0;
    }
    cVar1 = in_r1[3];
    in_r1 = in_r1 + 4;
    pcVar3[3] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = *in_r1;
    pcVar3 = pcVar3 + 4;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c010998\n.set _FUN_8c010998, _FUN_8c010998_def\n");
//@unit 8c0109e8
#include "../decls.h"
int FUN_8c0109e8_def(uint *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  
  if ((((uint)ar4 | (uint)ar5) & 3) != 0) {
    while( true ) {
      iVar1 = (int)(char)*ar4;
      iVar3 = (int)(char)*ar5;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 1);
      iVar3 = (int)*(char *)((int)ar5 + 1);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 2);
      iVar3 = (int)*(char *)((int)ar5 + 2);
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
      iVar1 = (int)*(char *)((int)ar4 + 3);
      ar4 = ar4 + 1;
      iVar3 = (int)*(char *)((int)ar5 + 3);
      ar5 = ar5 + 1;
      if ((iVar1 == 0) || (iVar3 != iVar1)) break;
    }
    return iVar1 - iVar3;
  }
  uVar4 = *ar5;
  puVar7 = ar5 + 1;
  do {
    puVar6 = ar4 + 1;
    puVar8 = puVar7;
    if (((uVar4 >> 0x18 == 0 || (uVar4 & 0xff0000) == 0) || (uVar4 & 0xff00) == 0) ||
        (uVar4 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar7;
    puVar8 = puVar7 + 1;
    if (uVar4 != *ar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 2;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar5 = *puVar8;
    puVar8 = puVar7 + 2;
    if (uVar2 != uVar4) break;
    uVar4 = *puVar6;
    puVar6 = ar4 + 3;
    if (((uVar5 >> 0x18 == 0 || (uVar5 & 0xff0000) == 0) || (uVar5 & 0xff00) == 0) ||
        (uVar5 & 0xff) == 0) goto LAB_8c010a26;
    uVar2 = *puVar8;
    puVar8 = puVar7 + 3;
    if (uVar5 != uVar4) break;
    uVar5 = *puVar6;
    puVar6 = ar4 + 4;
    if (((uVar2 >> 0x18 == 0 || (uVar2 & 0xff0000) == 0) || (uVar2 & 0xff00) == 0) ||
        (uVar2 & 0xff) == 0) goto LAB_8c010a26;
    uVar4 = *puVar8;
    puVar7 = puVar7 + 4;
    ar4 = puVar6;
    puVar8 = puVar7;
  } while (uVar2 == uVar5);
  puVar8 = puVar8 + -1;
LAB_8c010a26:
  iVar3 = (int)(char)puVar8[-1];
  iVar1 = (int)(char)puVar6[-1];
  if ((iVar3 != 0) && (iVar3 == iVar1)) {
    iVar3 = (int)*(char *)((int)puVar8 + -3);
    iVar1 = (int)*(char *)((int)puVar6 + -3);
    if ((iVar3 != 0) && (iVar3 == iVar1)) {
      iVar3 = (int)*(char *)((int)puVar8 + -2);
      iVar1 = (int)*(char *)((int)puVar6 + -2);
      if ((iVar3 != 0) && (iVar3 == iVar1)) {
        iVar1 = (int)*(char *)((int)puVar6 + -1);
        iVar3 = (int)*(char *)((int)puVar8 + -1);
      }
    }
  }
  return iVar1 - iVar3;
}

__asm__(".globl _FUN_8c0109e8\n.set _FUN_8c0109e8, _FUN_8c0109e8_def\n");
//@unit 8c010a90
#include "../decls.h"
undefined4 FUN_8c010a90_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 5;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}

__asm__(".globl _FUN_8c010a90\n.set _FUN_8c010a90, _FUN_8c010a90_def\n");
//@unit 8c010ab4
#include "../decls.h"
undefined4 FUN_8c010ab4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 6;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}

__asm__(".globl _FUN_8c010ab4\n.set _FUN_8c010ab4, _FUN_8c010ab4_def\n");
//@unit 8c010ad4
#include "../decls.h"
undefined4 FUN_8c010ad4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  
  iVar1 = 6;
  do {
    iVar1 = iVar1 + -1;
  } while (0 < iVar1);
  return in_r0;
}

__asm__(".globl _FUN_8c010ad4\n.set _FUN_8c010ad4, _FUN_8c010ad4_def\n");
//@unit 8c010af8
#include "../decls.h"
int FUN_8c010af8_def(char *ar4,int ar5,int ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  
  pbVar2 = (byte *)(ar6 + -1 + ar5);
  pbVar1 = (byte *)(ar4 + ar6 + -1);
  iVar3 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar3 = (uint)*pbVar1 + (uint)*pbVar2 + iVar3;
      *pbVar1 = (byte)iVar3;
      ain0 = libgcc_divide_helper_010468(iVar3,0x100);
      pbVar1 = pbVar1 + -1;
      pbVar2 = pbVar2 + -1;
      iVar3 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl _FUN_8c010af8\n.set _FUN_8c010af8, _FUN_8c010af8_def\n");
//@unit 8c010b08
#include "../decls.h"
int FUN_8c010b08_def(char *ar4,int ar5,char *ar6,undefined4 ar7,int ain0)

{
  byte *pbVar1;
  undefined4 unaff_r13;
  int iVar2;
  
  pbVar1 = (byte *)(ar4 + ar5);
  iVar2 = 0;
  if (ar4 <= pbVar1) {
    do {
      iVar2 = (uint)*pbVar1 + (uint)(byte)*ar6 + iVar2;
      *pbVar1 = (byte)iVar2;
      ain0 = libgcc_divide_helper_010468(iVar2,unaff_r13);
      pbVar1 = pbVar1 + -1;
      ar6 = ar6 + -1;
      iVar2 = ain0;
    } while (ar4 <= pbVar1);
  }
  return ain0;
}

__asm__(".globl _FUN_8c010b08\n.set _FUN_8c010b08, _FUN_8c010b08_def\n");
//@unit 8c010b40
#include "../decls.h"
undefined4 FUN_8c010b40_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  if (0 < ar5) {
    do {
      if (*ar4 != '\0') {
        return 0;
      }
      iVar1 = iVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar1 < ar5);
  }
  return 1;
}

__asm__(".globl _FUN_8c010b40\n.set _FUN_8c010b40, _FUN_8c010b40_def\n");
//@unit 8c010b60
#include "../decls.h"
undefined4 FUN_8c010b60_def(undefined4 ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined1 auStackY_8028 [8];
  undefined1 auStackY_8020 [32748];
  undefined4 in_stack_ffffffcc;
  undefined4 in_stack_ffffffd0;
  undefined1 auStack_20 [16];
  
  puVar5 = &stack0xffffffcc;
  puVar8 = &stack0xffffffcc;
  uVar4 = CONCAT22((short)((uint)in_stack_ffffffd0 >> 0x10),(undefined2)ar4);
  puVar6 = auStack_20;
  if (ar6 < 1) {
    FUN_8c012b1c(-ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c0129b4(&stack0xffffffcc,auStack_20,iVar2,ar5);
  }
  else {
    FUN_8c012b1c(ar6,&stack0xffffffcc,auStack_20,ar7);
    iVar2 = (int)(short)uVar4;
    FUN_8c010c60(&stack0xffffffcc,auStack_20,iVar2,ar5);
    puVar8 = puVar5;
  }
  iVar9 = 0x3f - (short)in_stack_ffffffcc;
  iVar3 = FUN_8c0105c4(puVar8,puVar6,iVar2,ar5,in_stack_ffffffcc,uVar4);
  FUN_8c012e00(auStack_20,9,0x42 - (short)iVar9,ar5);
  iVar7 = (int)(short)iVar3;
  iVar2 = 8;
  if (iVar7 < 9) {
    do {
      sVar1 = (short)iVar2;
      auStack_20[sVar1] = auStack_20[sVar1 - iVar7];
      iVar2 = sVar1 + -1;
    } while (iVar7 <= (short)iVar2);
  }
  sVar1 = (short)iVar2;
  puVar8 = auStack_20 + sVar1 + 1;
  while (-1 < sVar1) {
    iVar2 = iVar2 + -1;
    puVar8 = puVar8 + -1;
    *puVar8 = 0;
    sVar1 = (short)iVar2;
  }
  iVar9 = iVar9 + iVar3 * -8;
  FUN_8c012da8(auStack_20,9,iVar9,ar5,in_stack_ffffffcc);
  FUN_8c012c70(auStack_20,0x40,iVar9,ar5);
  uVar4 = memmove(ar7,auStack_20,8,ar5);
  return uVar4;
}

__asm__(".globl _FUN_8c010b60\n.set _FUN_8c010b60, _FUN_8c010b60_def\n");
//@unit 8c010c60
#include "../decls.h"
undefined4 FUN_8c010c60_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *a6;
  int iVar3;
  char *ain0;
  undefined1 auStack_48 [4];
  byte bStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  byte bStack_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [8];
  char cStack_2c;
  char cStack_2b;
  char cStack_2a;
  char cStack_29;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  
  uVar2 = ar7;
  memset(&cStack_2c,0,4,ar7);
  memmove(&cStack_28,uVar2,8,ar7);
  memset(auStack_38,0,4,ar7);
  memmove(auStack_34,ar5,8,ar7);
  a6 = (undefined1 *)0x10;
  memset(auStack_48,0,0x10,ar7);
  ain0 = &cStack_3d;
  for (iVar3 = 0x42; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012854(auStack_48,0xc,a6,ar7);
    ar7 = 0xc;
    a6 = auStack_38;
    iVar1 = FUN_8c012eac(0,&cStack_2c,auStack_38,0xc);
    if (iVar1 < 0) {
      a6 = (undefined1 *)0xc;
      FUN_8c010af8(&cStack_2c,auStack_38,0xc,ar7,ain0);
    }
    else {
      *ain0 = *ain0 + '\x01';
    }
    FUN_8c012854(&cStack_2c,0xc,a6,ar7);
  }
  for (iVar3 = 2; iVar3 != 0; iVar3 = iVar3 + -1) {
    FUN_8c012d5c(auStack_48,0x10,a6,ar7);
  }
  if (((((cStack_2c != '\0') || (cStack_2b != '\0')) || (cStack_2a != '\0')) ||
      (((cStack_29 != '\0' || (cStack_28 != '\0')) ||
       ((cStack_27 != '\0' || ((cStack_26 != '\0' || (cStack_25 != '\0')))))))) ||
     ((cStack_24 != '\0' || (((cStack_23 != '\0' || (cStack_22 != '\0')) || (cStack_21 != '\0'))))))
  {
    bStack_3c = bStack_3c | 0x20;
  }
  *ar4 = (short)ar6 - *ar4;
  if ((((bStack_44 != 0) || (cStack_43 != '\0')) ||
      (((cStack_42 != '\0' || ((cStack_41 != '\0' || (cStack_40 != '\0')))) || (cStack_3f != '\0')))
      ) || (((cStack_3e != '\0' || (*ain0 != '\0')) || (bStack_3c != 0)))) {
    while ((bStack_44 & 0x80) == 0) {
      FUN_8c012854(&bStack_44,9,a6,ar7);
      *ar4 = *ar4 + -1;
    }
  }
  uVar2 = memmove(ar5,&bStack_44,9,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c010c60\n.set _FUN_8c010c60, _FUN_8c010c60_def\n");
//@unit 8c010df4
#include "../decls.h"
undefined4 FUN_8c010df4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int in_fr5;
  uint in_fr4;
  
  if ((in_fr4 & 0x7ff00000) != 0x7ff00000) {
    return 0;
  }
  if (((in_fr4 & 0xfffff) == 0) && (in_fr5 == 0)) {
    return 2;
  }
  return 1;
}

__asm__(".globl _FUN_8c010df4\n.set _FUN_8c010df4, _FUN_8c010df4_def\n");
//@unit 8c010e38
#include "../decls.h"
undefined4 FUN_8c010e38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint in_fr4;
  
  if ((in_fr4 & 0x7f800000) == 0x7f800000) {
    if ((in_fr4 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c010e38\n.set _FUN_8c010e38, _FUN_8c010e38_def\n");
//@unit 8c010e84
#include "../decls.h"
undefined4 FUN_8c010e84_def(int ar4,byte *ar5,int *ar6,byte *ar7)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  byte *a7;
  byte *pbVar8;
  byte *pbVar9;
  uint in_stack_00000000;
  byte *pbStack_f0;
  byte *pbStack_ec;
  undefined1 auStack_e8 [4];
  byte *pbStack_e4;
  byte *pbStack_e0;
  byte abStack_dc [128];
  byte abStack_5c [4];
  int iStack_58;
  byte *pbStack_54;
  int iStack_50;
  byte *pbStack_4c;
  byte *pbStack_48;
  undefined4 uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  byte *pbStack_24;
  
  abStack_5c[1] = 0;
  abStack_5c[2] = 0;
  abStack_5c[3] = 0;
  iStack_58 = 0;
  pbStack_54 = (byte *)0x0;
  pbStack_4c = (byte *)0x0;
  pbStack_48 = (byte *)0x0;
  uStack_44 = 0;
  iStack_40 = 0;
  iStack_3c = 0;
  iStack_38 = 0;
  iStack_34 = 0;
  a7 = ar7;
  if (ar4 == 0) {
    if (ar6 == (int *)0x0) {
      _DAT_8c2787a8 = 0x452;
      return 0xffffffff;
    }
    if ((*(byte *)(ar6 + 4) & 7) == 0) {
      _DAT_8c2787a8 = 0x514;
      return 0xffffffff;
    }
    a7 = (byte *)(int)(char)ar6[4];
    pbStack_24 = ar5;
    if ((((uint)a7 & 4) == 0) && (((uint)a7 & 1) != 0)) {
      _DAT_8c2787a8 = 0x516;
      return 0xffffffff;
    }
  }
  uStack_28 = 0;
  abStack_5c[0] = 0;
  auStack_e8[0] = 0x30;
  iStack_30 = ar4;
  piStack_2c = ar6;
  iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  pbStack_e0 = abStack_dc;
  do {
    while( true ) {
      if (((*ar7 == 0) || (iVar2 = FUN_8c011836(&iStack_30,ar5,ar6,a7), iVar2 != 0)) ||
         ((abStack_5c[0] & 1) != 0)) {
        FUN_8c011826(&iStack_30,ar5,ar6,a7);
        return uStack_28;
      }
      pbStack_f0 = ar7;
      if (*ar7 == 0x25) break;
      for (; (*pbStack_f0 != 0 && (*pbStack_f0 != 0x25)); pbStack_f0 = pbStack_f0 + 1) {
      }
      ar5 = pbStack_f0 + -(int)ar7;
      ar6 = &iStack_30;
      FUN_8c0117ce(ar7,ar5,&iStack_30,a7);
      ar7 = pbStack_f0;
    }
    abStack_5c[0] = 0;
    uStack_44 = 0;
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_38 = 0;
    iStack_34 = 0;
    while( true ) {
      pbVar8 = ar7 + 1;
      bVar1 = *pbVar8;
      if (((bVar1 != 0x2d) && (bVar1 != 0x2b)) && ((bVar1 != 0x20 && (bVar1 != 0x23)))) break;
      bVar1 = *pbVar8;
      ar7 = pbVar8;
      if (bVar1 == 0x2d) {
        abStack_5c[0] = abStack_5c[0] | 2;
      }
      else if (bVar1 == 0x2b) {
        abStack_5c[0] = abStack_5c[0] | 8;
      }
      else if (bVar1 == 0x20) {
        if ((abStack_5c[0] & 8) == 0) {
          abStack_5c[0] = abStack_5c[0] | 0x10;
        }
      }
      else if (bVar1 == 0x23) {
        abStack_5c[0] = abStack_5c[0] | 4;
      }
    }
    abStack_5c[1] = 0x20;
    if (*pbVar8 == 0x30) {
      pbVar8 = ar7 + 2;
      abStack_5c[1] = 0x30;
    }
    iStack_58 = 0;
    if (*pbVar8 == 0x2a) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar9 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar9 = (byte *)(uVar3 - 8);
      }
      iStack_58 = *(int *)pbVar9;
      if (iStack_58 < 0) {
        abStack_5c[0] = abStack_5c[0] | 2;
        iStack_58 = -iStack_58;
      }
      pbVar8 = pbVar8 + 1;
      in_stack_00000000 = uVar3;
      if (0x200 < iStack_58) {
        abStack_5c[0] = abStack_5c[0] | 1;
        _DAT_8c2787a8 = 0x518;
      }
    }
    pbStack_4c = abStack_dc;
    pbStack_48 = abStack_dc;
    if (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
      iStack_58 = 0;
      while (((&DAT_8c125470)[*pbVar8] & 4) != 0) {
        iVar6 = (char)*pbVar8 + -0x30;
        iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
        pbVar8 = pbVar8 + 1;
        if (iVar2 < iStack_58) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
        else {
          iStack_58 = iStack_58 * 10 + iVar6;
        }
      }
    }
    pbStack_54 = (byte *)0xffffffff;
    pbVar9 = pbVar8;
    if (*pbVar8 == 0x2e) {
      pbVar9 = pbVar8 + 1;
      if (*pbVar9 == 0x2a) {
        uVar3 = in_stack_00000000 + 4;
        if ((uVar3 & 3) != 0) {
          uVar3 = in_stack_00000000 + 8;
        }
        ar5 = (byte *)(uVar3 - 4);
        pbStack_54 = ar5;
        if (((uint)ar5 & 3) != 0) {
          pbStack_54 = (byte *)(uVar3 - 8);
        }
        pbStack_54 = *(byte **)pbStack_54;
        if ((int)pbStack_54 < 0) {
          pbStack_54 = (byte *)0xffffffff;
        }
        pbVar9 = pbVar8 + 2;
        in_stack_00000000 = uVar3;
        if (0x200 < (int)pbStack_54) {
          abStack_5c[0] = abStack_5c[0] | 1;
          _DAT_8c2787a8 = 0x518;
        }
      }
      if (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
        pbStack_54 = (byte *)0x0;
        while (((&DAT_8c125470)[*pbVar9] & 4) != 0) {
          iVar6 = (char)*pbVar9 + -0x30;
          iVar2 = libgcc_divide_helper_010468(0x200 - iVar6,10);
          pbVar9 = pbVar9 + 1;
          if (iVar2 < (int)pbStack_54) {
            abStack_5c[0] = abStack_5c[0] | 1;
            _DAT_8c2787a8 = 0x518;
          }
          else {
            pbStack_54 = (byte *)((int)pbStack_54 * 10 + iVar6);
          }
        }
      }
    }
    iStack_50 = 0x20;
    bVar1 = *pbVar9;
    if (((bVar1 == 0x68) || (bVar1 == 0x6c)) || (bVar1 == 0x4c)) {
      iStack_50 = (int)(char)*pbVar9;
      pbVar9 = pbVar9 + 1;
    }
    bVar1 = *pbVar9;
    if (((((bVar1 == 100) || (bVar1 == 0x69)) || (bVar1 == 0x6f)) ||
        ((bVar1 == 0x75 || (bVar1 == 0x78)))) || (bVar1 == 0x58)) {
      if (iStack_50 == 0x6c) {
        uVar7 = in_stack_00000000 + 4;
        if ((uVar7 & 3) != 0) {
          uVar7 = in_stack_00000000 + 8;
        }
        puVar5 = (uint *)(uVar7 - 4);
        if (((uint)puVar5 & 3) != 0) {
          puVar5 = (uint *)(uVar7 - 8);
        }
        uVar3 = *puVar5;
        in_stack_00000000 = uVar7;
      }
      else if (iStack_50 == 0x68) {
        bVar1 = *pbVar9;
        if ((((bVar1 == 0x75) || (bVar1 == 0x58)) || (bVar1 == 0x78)) || (bVar1 == 0x6f)) {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar7 - 4);
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar7 - 8);
          }
          uVar3 = *puVar5 & 0xffff;
          in_stack_00000000 = uVar7;
        }
        else {
          uVar7 = in_stack_00000000 + 4;
          if ((uVar7 & 3) != 0) {
            uVar7 = in_stack_00000000 + 8;
          }
          puVar4 = (undefined4 *)(uVar7 - 4);
          if (((uint)puVar4 & 3) != 0) {
            puVar4 = (undefined4 *)(uVar7 - 8);
          }
          uVar3 = (uint)(short)*puVar4;
          in_stack_00000000 = uVar7;
        }
      }
      else {
        bVar1 = *pbVar9;
        if (((bVar1 == 0x75) || (bVar1 == 0x58)) || ((bVar1 == 0x78 || (bVar1 == 0x6f)))) {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        else {
          uVar3 = in_stack_00000000 + 4;
          if ((uVar3 & 3) != 0) {
            uVar3 = in_stack_00000000 + 8;
          }
          puVar5 = (uint *)(uVar3 - 4);
          in_stack_00000000 = uVar3;
          if (((uint)puVar5 & 3) != 0) {
            puVar5 = (uint *)(uVar3 - 8);
          }
        }
        uVar3 = *puVar5;
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c0115c4(uVar3,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (((bVar1 == 0x66) || (bVar1 == 0x65)) ||
            ((bVar1 == 0x45 || ((bVar1 == 0x67 || (bVar1 == 0x47)))))) {
      ar6 = (int *)(int)(char)*pbVar9;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      FUN_8c013374(&stack0x00000000,abStack_dc,ar6,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 99) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      *pbStack_e0 = (byte)*(undefined4 *)pbVar8;
      in_stack_00000000 = uVar3;
LAB_8c011442:
      pbStack_e4 = (byte *)0x1;
      iStack_3c = 0;
      iStack_34 = iStack_58 + -1;
      pbStack_ec = abStack_dc;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x73) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      pbStack_ec = *(byte **)pbVar8;
      in_stack_00000000 = uVar3;
      pbStack_e4 = (byte *)log_message(pbStack_ec,ar5,ar6,a7);
      if ((pbStack_54 != (byte *)0xffffffff) && ((int)pbStack_54 < (int)pbStack_e4)) {
        pbStack_e4 = pbStack_54;
      }
      iStack_3c = 0;
      iStack_34 = iStack_58 - (int)pbStack_e4;
      pbStack_48 = abStack_dc;
    }
    else if (bVar1 == 0x70) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      puVar4 = (undefined4 *)(uVar3 - 4);
      if (((uint)puVar4 & 3) != 0) {
        puVar4 = (undefined4 *)(uVar3 - 8);
      }
      if (pbStack_54 == (byte *)0xffffffff) {
        pbStack_54 = (byte *)0x1;
      }
      ar6 = (int *)0x78;
      ar5 = abStack_dc;
      a7 = abStack_5c;
      in_stack_00000000 = uVar3;
      FUN_8c0115c4(*puVar4,abStack_dc,0x78,abStack_5c);
      pbStack_e4 = (byte *)log_message(abStack_dc,ar5,ar6,a7);
      pbStack_ec = abStack_dc;
    }
    else if (bVar1 == 0x6e) {
      uVar3 = in_stack_00000000 + 4;
      if ((uVar3 & 3) != 0) {
        uVar3 = in_stack_00000000 + 8;
      }
      ar5 = (byte *)(uVar3 - 4);
      pbVar8 = ar5;
      if (((uint)ar5 & 3) != 0) {
        pbVar8 = (byte *)(uVar3 - 8);
      }
      **(undefined4 **)pbVar8 = uStack_28;
      in_stack_00000000 = uVar3;
    }
    else {
      if (bVar1 == 0x25) {
        *pbStack_e0 = 0x25;
        goto LAB_8c011442;
      }
      _DAT_8c2787a8 = 0x518;
      abStack_5c[0] = abStack_5c[0] | 1;
    }
    if ((*pbVar9 != 0x6e) && ((abStack_5c[0] & 1) == 0)) {
      if (((abStack_5c[0] & 2) == 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
      if (((iStack_40 == 0) && (iStack_3c == 0)) && (iStack_38 == 0)) {
        ar5 = pbStack_e4;
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_ec,pbStack_e4,&iStack_30,a7);
      }
      else {
        iVar2 = (int)pbStack_4c - (int)pbStack_ec;
        if (0 < iVar2) {
          FUN_8c0117ce(pbStack_ec,iVar2,&iStack_30,a7);
        }
        for (; 0 < iStack_40; iStack_40 = iStack_40 + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        iVar6 = (int)pbStack_48 - (int)pbStack_4c;
        if (0 < iVar6) {
          FUN_8c0117ce(pbStack_4c,iVar6,&iStack_30,a7);
        }
        for (; 0 < iStack_3c; iStack_3c = iStack_3c + -1) {
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
        ar5 = pbStack_e4 + -(iVar2 + iVar6);
        ar6 = &iStack_30;
        FUN_8c0117ce(pbStack_48,ar5,&iStack_30,a7);
        for (; 0 < iStack_38; iStack_38 = iStack_38 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(auStack_e8,1,&iStack_30,a7);
        }
      }
      if (((abStack_5c[0] & 2) != 0) && (0 < iStack_34)) {
        for (; 0 < iStack_34; iStack_34 = iStack_34 + -1) {
          ar5 = (byte *)0x1;
          ar6 = &iStack_30;
          FUN_8c0117ce(abStack_5c + 1,1,&iStack_30,a7);
        }
      }
    }
    ar7 = pbVar9 + 1;
  } while( true );
}

__asm__(".globl _FUN_8c010e84\n.set _FUN_8c010e84, _FUN_8c010e84_def\n");
//@unit 8c0115c4
#include "../decls.h"
int FUN_8c0115c4_def(int ar4,char *ar5,int ar6,byte *ar7)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  undefined1 *extraout_r2;
  char *pcVar5;
  undefined4 unaff_r8;
  int iVar6;
  int iVar7;
  char acStack_2d [17];
  
  *ar5 = '\0';
  if (((ar6 == 100) || (ar6 == 0x69)) || (ar6 == 0x75)) {
    unaff_r8 = 10;
  }
  else if (ar6 == 0x6f) {
    unaff_r8 = 8;
  }
  else if ((ar6 == 0x78) || (ar6 == 0x58)) {
    unaff_r8 = 0x10;
  }
  iVar3 = ar4;
  if (((ar6 == 100) || (ar6 == 0x69)) && (ar4 < 0)) {
    iVar3 = -ar4;
  }
  iVar7 = 0;
  iVar6 = 0;
  pcVar5 = ar5;
  if ((iVar3 == 0) && (*(int *)(ar7 + 8) != 0)) {
    acStack_2d[1] = 0x30;
    iVar7 = 1;
  }
  else {
    while (iVar3 != 0) {
      uVar2 = libgcc_divide_helper_0106dc(iVar3,unaff_r8);
      *extraout_r2 = (char)uVar2;
      if (acStack_2d[iVar7 + 1] < '\n') {
        acStack_2d[iVar7 + 1] = acStack_2d[iVar7 + 1] + '0';
      }
      else {
        pcVar4 = acStack_2d + iVar7 + 1;
        if (ar6 == 0x78) {
          *pcVar4 = *pcVar4 + 'W';
        }
        else {
          *pcVar4 = *pcVar4 + '7';
        }
      }
      iVar3 = libgcc_divide_helper_01051c(iVar3,unaff_r8);
      iVar7 = iVar7 + 1;
    }
  }
  if ((*ar7 & 4) != 0) {
    if (ar6 == 0x6f) {
      if (ar4 != 0) {
        acStack_2d[iVar7 + 1] = '0';
        iVar7 = iVar7 + 1;
      }
    }
    else if (((ar6 == 0x78) || (ar6 == 0x58)) && (ar4 != 0)) {
      *pcVar5 = '0';
      pcVar5[1] = (char)ar6;
      iVar6 = 2;
      pcVar5 = pcVar5 + 2;
    }
  }
  iVar6 = iVar6 + iVar7;
  if (((ar6 == 100) || (ar6 == 0x69)) && ((*(int *)(ar7 + 8) != 0 || (ar4 != 0)))) {
    if (ar4 < 0) {
      *pcVar5 = '-';
    }
    else {
      if ((*ar7 & 8) == 0) {
        if ((*ar7 & 0x10) != 0) {
          *pcVar5 = ' ';
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 1;
        }
        goto LAB_8c011706;
      }
      *pcVar5 = '+';
    }
    iVar6 = iVar6 + 1;
    pcVar5 = pcVar5 + 1;
  }
LAB_8c011706:
  cVar1 = *ar5;
  if (((cVar1 == '+') || (cVar1 == '-')) || (cVar1 == ' ')) {
    *(char **)(ar7 + 0x14) = ar5 + 1;
  }
  else if ((*ar7 & 4) == 0) {
    *(char **)(ar7 + 0x14) = ar5;
  }
  else if ((ar6 == 0x58) || (ar6 == 0x78)) {
    *(char **)(ar7 + 0x14) = ar5 + 2;
  }
  else if (ar6 == 0x6f) {
    *(char **)(ar7 + 0x14) = ar5 + 1;
  }
  if (iVar6 < *(int *)(ar7 + 8)) {
    *(int *)(ar7 + 0x20) = *(int *)(ar7 + 8) - iVar6;
    iVar6 = *(int *)(ar7 + 8);
  }
  else {
    ar7[0x20] = 0;
    ar7[0x21] = 0;
    ar7[0x22] = 0;
    ar7[0x23] = 0;
  }
  iVar3 = (int)*ar5;
  if (((iVar3 == 0x2b) || (iVar3 == 0x2d)) || (iVar3 == 0x20)) {
    if (iVar6 < *(int *)(ar7 + 4)) {
      iVar3 = (int)(char)ar7[1];
      if (iVar3 == 0x30) {
        *(int *)(ar7 + 0x20) = *(int *)(ar7 + 0x20) + (*(int *)(ar7 + 4) - iVar6);
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
        goto joined_r0x8c0117a8;
      }
      goto LAB_8c011792;
    }
  }
  else {
LAB_8c011792:
    if (iVar6 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar6;
      goto joined_r0x8c0117a8;
    }
  }
  ar7[0x28] = 0;
  ar7[0x29] = 0;
  ar7[0x2a] = 0;
  ar7[0x2b] = 0;
joined_r0x8c0117a8:
  while (iVar6 = iVar7 + -1, -1 < iVar6) {
    *pcVar5 = acStack_2d[iVar7];
    pcVar5 = pcVar5 + 1;
    iVar3 = iVar6;
    iVar7 = iVar6;
  }
  *pcVar5 = '\0';
  return iVar3;
}

__asm__(".globl _FUN_8c0115c4\n.set _FUN_8c0115c4, _FUN_8c0115c4_def\n");
//@unit 8c0117ce
#include "../decls.h"
int FUN_8c0117ce_def(char *ar4,int ar5,int *ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *ar6;
  if (iVar2 == 1) {
    iVar2 = memmove(ar6[1],ar4,ar5);
    ar6[1] = ar6[1] + ar5;
    ar6[2] = ar6[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *ar4;
        ar4 = ar4 + 1;
        iVar2 = (*(code *)(uint)ar6[3])((int)cVar1,ar6[1]);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        ar6[2] = ar6[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0117ce\n.set _FUN_8c0117ce, _FUN_8c0117ce_def\n");
//@unit 8c0117da
#include "../decls.h"
int FUN_8c0117da_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  char *unaff_r11;
  int iVar3;
  int *unaff_r14;
  
  iVar2 = *unaff_r14;
  if (iVar2 == 1) {
    iVar2 = memmove(unaff_r14[1],unaff_r11,ar5,ar7);
    unaff_r14[1] = unaff_r14[1] + ar5;
    unaff_r14[2] = unaff_r14[2] + ar5;
  }
  else {
    iVar3 = 0;
    if (0 < ar5) {
      do {
        cVar1 = *unaff_r11;
        unaff_r11 = unaff_r11 + 1;
        iVar2 = (*(code *)unaff_r14[3])((int)cVar1,unaff_r14[1],ar6,ar7);
        if (iVar2 == -1) {
          return 0xffffffff;
        }
        iVar3 = iVar3 + 1;
        unaff_r14[2] = unaff_r14[2] + 1;
      } while (iVar3 < ar5);
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c0117da\n.set _FUN_8c0117da, _FUN_8c0117da_def\n");
//@unit 8c011826
#include "../decls.h"
int FUN_8c011826_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *ar4;
  if (iVar1 == 1) {
    *(undefined1 *)(uint)ar4[1] = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c011826\n.set _FUN_8c011826, _FUN_8c011826_def\n");
//@unit 8c011836
#include "../decls.h"
undefined4 FUN_8c011836_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 == 1) {
    return 0;
  }
  return (int)*(char *)(ar4[1] + 0x10) & 0x40;
}

__asm__(".globl _FUN_8c011836\n.set _FUN_8c011836, _FUN_8c011836_def\n");
//@unit 8c011850
#include "../decls.h"
undefined4 FUN_8c011850_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01186c(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c011850\n.set _FUN_8c011850, _FUN_8c011850_def\n");
//@unit 8c01186c
#include "../decls.h"
undefined4 FUN_8c01186c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar4_00;
  undefined4 *ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  
  uVar1 = 4;
  ain0 = (float)(in_dr4 >> 0x20);
  ar4_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar4_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (ain0 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(ain0) == INFINITY) {
    uVar1 = 2;
    ar4_00 = ar4_00 | 2;
  }
  ar5_00 = &DAT_8c1257f8;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -ain0;
  }
  if (((ain0 <= 1.0) && (ain0 != 1.0)) && ((ar4_00 & 4) == 0)) {
    FUN_8c011960(ar4_00,&DAT_8c1257f8,1,4);
    uVar1 = FUN_8c011d50(1,ar5_00,ar6_00,ar7_00,ain0);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01186c\n.set _FUN_8c01186c, _FUN_8c01186c_def\n");
//@unit 8c011960
#include "../decls.h"
undefined4 FUN_8c011960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint ar5_00;
  int *ar4_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float ain0;
  ulonglong in_dr4;
  undefined8 in_dr12;
  undefined8 in_dr14;
  int iStack_24;
  float fStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)in_dr14;
  uStack_10 = (undefined4)((ulonglong)in_dr14 >> 0x20);
  uStack_14 = (undefined4)in_dr12;
  uStack_18 = (undefined4)((ulonglong)in_dr12 >> 0x20);
  fStack_20 = (float)(in_dr4 >> 0x20);
  ar5_00 = 0;
  if ((longlong)in_dr4 < 0) {
    ar5_00 = 8;
  }
  ar7_00 = 4;
  ar6_00 = 1;
  if (fStack_20 == 0.0) {
    ar5_00 = ar5_00 | 4;
  }
  else if (ABS(fStack_20) == INFINITY) {
    ar5_00 = ar5_00 | 2;
  }
  ain0 = fStack_20;
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = -fStack_20;
  }
  uVar1 = 0x20;
  if (((((int)((uint)ain0 & 0x7f800000) >> 0x17) + -0x7f < 0x20) && ((ar5_00 & 4) == 0)) &&
     ((ain0 < 1.0 || (ain0 != 1.0)))) {
    ar4_00 = &iStack_24;
    FUN_8c011c5c(ar4_00,ar5_00,1,4,ain0);
    if (iStack_24 != 0) {
      if ((iStack_24 == 1) || (iStack_24 == 2)) {
        ar4_00 = (int *)0xfffffffe;
        FUN_8c011d50(0xfffffffe,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((iStack_24 == 3) || (iStack_24 == 4)) {
        ar4_00 = (int *)0xffffffff;
        FUN_8c011d50(0xffffffff,ar5_00,ar6_00,ar7_00,ain0);
      }
      else if ((((iStack_24 != 5) && (iStack_24 != 6)) && (iStack_24 != 7)) && (iStack_24 != 8)) {
        return iStack_24;
      }
    }
    uVar1 = FUN_8c010a90(ar4_00,ar5_00,ar6_00,ar7_00);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c011960\n.set _FUN_8c011960, _FUN_8c011960_def\n");
//@unit 8c011b44
#include "../decls.h"
undefined4 FUN_8c011b44_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c011960(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c011b44\n.set _FUN_8c011b44, _FUN_8c011b44_def\n");
//@unit 8c011b9c
#include "../decls.h"
int FUN_8c011b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  ulonglong in_dr4;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) == 0) {
    ain0 = 4;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011b9c\n.set _FUN_8c011b9c, _FUN_8c011b9c_def\n");
//@unit 8c011bfc
#include "../decls.h"
int FUN_8c011bfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,int ain0)

{
  ulonglong in_dr4;
  float fVar1;
  
  fVar1 = (float)(in_dr4 >> 0x20);
  if (((uint)fVar1 & 0x7f800000) < 0x4b000000) {
    ain0 = (int)fVar1;
  }
  if ((in_dr4 & 0x8000000000000000) != 0) {
    ain0 = 4;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011bfc\n.set _FUN_8c011bfc, _FUN_8c011bfc_def\n");
//@unit 8c011c5c
#include "../decls.h"
undefined4 * FUN_8c011c5c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 *ain0)

{
  uint uVar1;
  float fVar2;
  ulonglong in_dr4;
  float fVar3;
  float fStack_14;
  
  fVar3 = (float)(in_dr4 >> 0x20);
  fVar2 = (float)in_dr4;
  if ((((uint)fVar3 & 0x7f800000) == 0x7f800000) ||
     (((((uint)fVar2 & 0x7f800000) == 0x7f800000 && ((in_dr4 & 0x7fffff) != 0)) ||
      (ain0 = (undefined4 *)0x14, fVar2 == 0.0)))) {
    *ar4 = 0;
  }
  else if (((uint)fVar2 & 0x7f800000) == 0x7f800000) {
    *ar4 = 0;
  }
  else {
    fStack_14 = ABS(fVar3) / ABS(fVar2);
    uVar1 = (uint)fStack_14 & 0x80000000;
    if (((uint)fStack_14 & 0x7f800000) < 0x4b000000) {
      fStack_14 = (float)(int)fStack_14;
    }
    fStack_14 = (float)((uint)fStack_14 | uVar1);
    ain0 = &DAT_8c011d48;
    if (2.1474836e+09 < fStack_14) {
      ain0 = &DAT_8c011d4c;
      fStack_14 = fStack_14 + -4.2949673e+09;
    }
    *ar4 = (int)fStack_14;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011c5c\n.set _FUN_8c011c5c, _FUN_8c011c5c_def\n");
//@unit 8c011d50
#include "../decls.h"
undefined4 FUN_8c011d50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint uVar1;
  int iVar2;
  ulonglong in_dr4;
  
  uVar1 = (uint)(in_dr4 >> 0x20) & 0x7f800000;
  if (uVar1 != 0x7f800000) {
    if ((in_dr4 & 0x7f80000000000000) != 0) {
      iVar2 = ((int)uVar1 >> 0x17) + ar4;
      if ((0 < iVar2) && (iVar2 < 0xff)) {
        return ain0;
      }
      if (-1 < ar4) goto joined_r0x8c011d76;
    }
    if ((in_dr4 & 0x8000000000000000) != 0) {
      return ain0;
    }
    return ain0;
  }
  ain0 = 0x7fffff;
  if ((in_dr4 & 0x7fffff00000000) != 0) {
    return ain0;
  }
joined_r0x8c011d76:
  if ((in_dr4 & 0x8000000000000000) != 0) {
    return ain0;
  }
  return ain0;
}

__asm__(".globl _FUN_8c011d50\n.set _FUN_8c011d50, _FUN_8c011d50_def\n");
//@unit 8c011e10
#include "../decls.h"
uint FUN_8c011e10_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  double in_dr0;
  float extraout_fr3;
  float fVar3;
  undefined4 extraout_fr2;
  undefined4 uVar4;
  longlong in_dr4;
  bool bVar5;
  char cVar6;
  char cVar7;
  uint in_stack_fffffff4;
  
  cVar7 = '\0';
  cVar6 = '\0';
  ar4_00 = &stack0xfffffff4;
  fVar3 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  ar5_00 = 8;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar3 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar3) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 3) != 0) {
    return uVar2;
  }
  uVar4 = 0x3f490fdb;
  uVar1 = FUN_8c011c5c(&stack0xfffffff4,8,ar6,ar7,in_stack_fffffff4);
  fVar3 = extraout_fr3;
  if (cVar7 == '\0') {
    in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar4);
    fVar3 = 0.7853982;
  }
  if (cVar6 == '\0') {
    bVar5 = fVar3 < (float)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    bVar5 = (double)CONCAT44(extraout_fr2,fVar3) < in_dr0;
  }
  if (bVar5) {
    return uVar1;
  }
  uVar2 = in_stack_fffffff4 & 7;
  if ((uVar2 == 0) || (uVar2 == 7)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 1) || (uVar2 == 2)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 3) || (uVar2 == 4)) {
    uVar2 = FUN_8c010ab4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  else if ((uVar2 == 5) || (uVar2 == 6)) {
    uVar2 = FUN_8c010ad4(ar4_00,ar5_00,ar6,ar7,uVar2);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011e10\n.set _FUN_8c011e10, _FUN_8c011e10_def\n");
//@unit 8c011f18
#include "../decls.h"
uint FUN_8c011f18_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  float fVar4;
  longlong in_dr4;
  int ar4_00;
  float fStack_c;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) != 0) {
    return uVar2;
  }
  if (((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f < 0xf) {
    fVar4 = fVar4 * 1.4426951;
    fStack_c = fVar4;
    if (((uint)fVar4 & 0x7f800000) < 0x4b000000) {
      fStack_c = (float)(int)fVar4;
    }
    fStack_c = (float)((uint)fStack_c | (uint)fVar4 & 0x80000000);
    fVar4 = fVar4 - fStack_c;
    ar4_00 = (int)fStack_c;
    if (-2 < ((int)((uint)fVar4 & 0x7f800000) >> 0x17) + -0x7f) {
      if (((uint)fVar4 & 0x80000000) == 0) {
        ar4_00 = ar4_00 + 1;
        fVar4 = fVar4 + -1.0;
      }
      else {
        fVar4 = fVar4 + 1.0;
        ar4_00 = ar4_00 + -1;
      }
    }
    iVar3 = 6;
    do {
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    iVar3 = 6;
    ar6_00 = -0x73edaa58;
    do {
      ar6_00 = ar6_00 + 4;
      iVar3 = iVar3 + -1;
    } while (0 < iVar3);
    uVar1 = FUN_8c011d50(ar4_00,iVar3,ar6_00,6,fVar4);
    return uVar1;
  }
  if ((uVar2 & 8) == 0) {
    return (uint)&DAT_8c125800;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c011f18\n.set _FUN_8c011f18, _FUN_8c011f18_def\n");
//@unit 8c012090
#include "../decls.h"
undefined4 * FUN_8c012090_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong in_dr4;
  float fVar4;
  
  fVar4 = (float)((ulonglong)in_dr4 >> 0x20);
  uVar2 = 0;
  if (in_dr4 < 0) {
    uVar2 = 8;
  }
  if (fVar4 == 0.0) {
    uVar2 = uVar2 | 4;
  }
  else if (ABS(fVar4) == INFINITY) {
    uVar2 = uVar2 | 2;
  }
  if ((uVar2 & 4) == 0) {
    if ((uVar2 & 8) != 0) {
      return (undefined4 *)uVar2;
    }
    if ((uVar2 & 2) == 0) {
      if (fVar4 != 1.0) {
        iVar3 = 7;
        do {
          iVar3 = iVar3 + -1;
        } while (0 < iVar3);
        return (undefined4 *)fVar4;
      }
      return (undefined4 *)8;
    }
    puVar1 = (undefined4 *)&DAT_8c125800;
  }
  else {
    puVar1 = &DAT_8c125830;
  }
  return puVar1;
}

__asm__(".globl _FUN_8c012090\n.set _FUN_8c012090, _FUN_8c012090_def\n");
//@unit 8c0121bc
#include "../decls.h"
undefined4 FUN_8c0121bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  uint ar4_00;
  uint ar4_01;
  undefined4 ar5_00;
  uint ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  float fVar2;
  longlong in_dr4;
  
  fVar2 = (float)in_dr4;
  ar6_00 = 8;
  ar7_00 = 1;
  ar5_00 = 4;
  ar4_00 = 0;
  if ((int)fVar2 < 0) {
    ar4_00 = 8;
  }
  if (fVar2 == 0.0) {
    ar4_00 = ar4_00 | 4;
  }
  else if (ABS(fVar2) == INFINITY) {
    ar4_00 = ar4_00 | 2;
  }
  if ((float)((ulonglong)in_dr4 >> 0x20) == 0.0) {
    ain0 = 0xc;
    if ((ar4_00 & 0xc) != 0) {
      ain0 = 0xc;
    }
  }
  else if ((ar4_00 & 4) == 0) {
    if (in_dr4 < 0) {
      ar5_01 = (uint)fVar2 & 0x80000000;
      ar4_01 = (uint)fVar2 & 0x7f800000;
      fVar1 = fVar2;
      if (ar4_01 < 0x4b000000) {
        fVar1 = (float)(int)fVar2;
      }
      fVar1 = (float)((uint)fVar1 | ar5_01);
      if ((fVar2 == fVar1) && ((ar4_00 & 2) == 0)) {
        FUN_8c012090(ar4_01,ar5_01,8,1);
        FUN_8c011f18(ar4_01,ar5_01,ar6_00,ar7_00);
        ain0 = FUN_8c011d50(0xffffffff,ar5_01,ar6_00,ar7_00,fVar1);
      }
    }
    else {
      FUN_8c012090(ar4_00,4,8,1);
      ain0 = FUN_8c011f18(ar4_00,ar5_00,ar6_00,ar7_00);
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c0121bc\n.set _FUN_8c0121bc, _FUN_8c0121bc_def\n");
//@unit 8c012328
#include "../decls.h"
uint FUN_8c012328_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ain0;
  undefined1 *ar4_00;
  undefined4 ar5_00;
  undefined4 ar6_00;
  double in_dr0;
  float extraout_fr3;
  float fVar1;
  undefined4 extraout_fr2;
  undefined4 uVar2;
  undefined8 in_dr4;
  bool bVar3;
  char cVar4;
  char cVar5;
  uint in_stack_ffffffec;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar4_00 = &stack0xffffffec;
  ain0 = 4;
  fVar1 = (float)((ulonglong)in_dr4 >> 0x20);
  ar6_00 = 0;
  ar5_00 = 8;
  bVar3 = false;
  if (fVar1 == 0.0) {
    bVar3 = false;
  }
  else if (ABS(fVar1) == INFINITY) {
    ain0 = 2;
    bVar3 = true;
  }
  if (!bVar3) {
    uVar2 = 0x3f490fdb;
    ain0 = FUN_8c011c5c(&stack0xffffffec,8,0,ar7,in_stack_ffffffec);
    fVar1 = extraout_fr3;
    if (cVar5 == '\0') {
      in_dr0 = (double)CONCAT44((int)((ulonglong)in_dr0 >> 0x20),uVar2);
      fVar1 = 0.7853982;
    }
    if (cVar4 == '\0') {
      bVar3 = fVar1 < (float)((ulonglong)in_dr0 >> 0x20);
    }
    else {
      bVar3 = (double)CONCAT44(extraout_fr2,fVar1) < in_dr0;
    }
    if (!bVar3) {
      ain0 = in_stack_ffffffec & 7;
      if ((ain0 == 0) || (ain0 == 7)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 1) || (ain0 == 2)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 3) || (ain0 == 4)) {
        ain0 = FUN_8c010ad4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
      else if ((ain0 == 5) || (ain0 == 6)) {
        ain0 = FUN_8c010ab4(ar4_00,ar5_00,ar6_00,ar7,ain0);
      }
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c012328\n.set _FUN_8c012328, _FUN_8c012328_def\n");
//@unit 8c01243c
#include "../decls.h"
int FUN_8c01243c_def(undefined4 ar4,char *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  int ar6_00;
  int iVar6;
  int ain0;
  int iStack_48;
  int iStack_44;
  int iStack_3c;
  undefined *puStack_38;
  int iStack_34;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [4];
  
  iStack_34 = 1;
  pcVar5 = ar5 + ar6;
  *pcVar5 = '\0';
  iVar2 = memmove(auStack_28,ar4,8,ar7);
  iStack_48 = ar6 + -1;
  puStack_38 = &DAT_8c1255f0 + iStack_48 * 8;
  iStack_3c = ar6;
  do {
    if (iStack_48 < 0) {
      return iVar2;
    }
    iVar2 = libgcc_divide_helper_010468(iStack_3c,5);
    iVar1 = (iVar2 + 1) * -2;
    iVar6 = iVar1 + 8;
    ar6_00 = 8 - iVar6;
    memmove(auStack_28 + iVar1,puStack_38 + iVar6,ar6_00,ar7);
    iVar4 = 8;
    iStack_44 = 0;
    ain0 = 0;
    do {
      iVar2 = FUN_8c012f24(auStack_28 + iVar6,auStack_28 + iVar1,ar6_00,ar7);
      if (-1 < iVar2) {
        ar7 = ar6_00;
        iVar2 = FUN_8c012eac(0,auStack_28 + iVar6,auStack_28 + iVar1,ar6_00);
        iStack_44 = iStack_44 + iVar4;
        iStack_34 = iVar2;
      }
      iVar4 = iVar4 >> 1;
      if (iVar4 == 0) break;
      iVar2 = FUN_8c012da8(auStack_28 + iVar1,ar6_00,1,ar7,ain0);
      ain0 = ain0 + 1;
    } while (ain0 < 4);
    cVar3 = (char)iStack_44 + '0';
    if (iStack_34 == 0) {
      pcVar5 = pcVar5 + -1;
      *pcVar5 = cVar3;
      while (pcVar5 = pcVar5 + -1, ar5 <= pcVar5) {
        *pcVar5 = '0';
      }
      return iVar2;
    }
    pcVar5 = pcVar5 + -1;
    *pcVar5 = cVar3;
    iStack_48 = iStack_48 + -1;
    puStack_38 = puStack_38 + -8;
    iStack_3c = iStack_3c + -1;
  } while( true );
}

__asm__(".globl _FUN_8c01243c\n.set _FUN_8c01243c, _FUN_8c01243c_def\n");
//@unit 8c01256c
#include "../decls.h"
int FUN_8c01256c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  char cVar2;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 auStack_8 [2];
  
  FUN_8c0125b6(auStack_8,ar5,ar6,ar7);
  cVar2 = '\0';
  FUN_8c012734(&uStack_10,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    dVar1 = (double)CONCAT44(uStack_c,uStack_10);
  }
  else {
    dVar1 = (double)CONCAT44(auStack_8[0],uStack_c);
  }
  return (int)dVar1;
}

__asm__(".globl _FUN_8c01256c\n.set _FUN_8c01256c, _FUN_8c01256c_def\n");
//@unit 8c0125b6
#include "../decls.h"
undefined4 FUN_8c0125b6_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  double dVar2;
  double dVar3;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_PR;
  char cVar4;
  undefined1 uStack_30;
  byte abStack_2f [3];
  undefined1 auStack_2c [4];
  undefined4 uStack_28;
  undefined2 uStack_24;
  ushort uStack_22;
  undefined4 uStack_20;
  
  cVar4 = '\0';
  uStack_24 = (undefined2)in_fr4;
  uStack_22 = (ushort)((uint)in_fr4 >> 0x10);
  uStack_28 = in_fr5;
  uStack_20 = in_PR;
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if (cVar4 == '\0') {
      dVar3 = 0.0;
      dVar2 = (double)CONCAT44(CONCAT22(uStack_22,uStack_24),uStack_28);
    }
    else {
      dVar3 = -7.491824698174533e-251;
      dVar2 = (double)CONCAT44(uStack_20,CONCAT22(uStack_22,uStack_24));
    }
    if (dVar2 == dVar3) {
      *ar4 = 0;
      return &DAT_8c0126c0;
    }
    iVar1 = (uStack_22 >> 4 & 0x7ff) - 0x3fe;
    *ar4 = iVar1;
    if (iVar1 == -0x3fe) {
      *ar4 = *ar4 + 1;
      uStack_22 = uStack_22 & 0x800f;
      FUN_8c012a24(&uStack_30,&uStack_24,ar6,ar7);
      FUN_8c012a24(auStack_2c,&uStack_28,ar6,ar7);
      while ((abStack_2f[0] & 0x10) == 0) {
        FUN_8c012854(abStack_2f,7,ar6,ar7);
        *ar4 = *ar4 + -1;
      }
      FUN_8c012a24(&uStack_24,&uStack_30,ar6,ar7);
      FUN_8c012a24(&uStack_28,auStack_2c,ar6,ar7);
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
    }
  }
  return 0x18;
}

__asm__(".globl _FUN_8c0125b6\n.set _FUN_8c0125b6, _FUN_8c0125b6_def\n");
//@unit 8c012734
#include "../decls.h"
undefined4 FUN_8c012734_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 in_fr5;
  uint in_fr4;
  undefined8 in_xd2;
  undefined4 in_PR;
  char cVar3;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  cVar3 = '\0';
  uStack_10 = (undefined2)in_fr4;
  uStack_e = (undefined1)(in_fr4 >> 0x10);
  uStack_d = (undefined1)(in_fr4 >> 0x18);
  iVar1 = FUN_8c010df4(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    if ((int)((in_fr4 >> 0x14 & 0x7ff) - 0x3ff) < 0) {
      if (cVar3 == '\0') {
        ar4[1] = 0;
        *ar4 = 0;
      }
      else {
        *(undefined8 *)(ar4 + 1) = 0x7001600700000000;
        *(undefined8 *)(ar4 + -1) = 0x7001600700000000;
      }
    }
    else {
      if (cVar3 == '\0') {
        uVar2 = CONCAT44(in_fr4,in_fr5);
      }
      else {
        in_xd2 = CONCAT17(uStack_d,CONCAT16(uStack_e,CONCAT24(uStack_10,in_fr5)));
        uVar2 = CONCAT44(in_PR,in_fr4);
      }
      if (cVar3 == '\0') {
        ar4[1] = (int)((ulonglong)uVar2 >> 0x20);
        *ar4 = (int)uVar2;
      }
      else {
        *(undefined8 *)(ar4 + 1) = uVar2;
        *(undefined8 *)(ar4 + -1) = in_xd2;
      }
    }
  }
  else {
    if (iVar1 == 1) {
      _DAT_8c2787a8 = 0x4b8;
    }
    if (iVar1 == 2) {
      _DAT_8c2787a8 = 0x44c;
    }
  }
  return 4;
}

__asm__(".globl _FUN_8c012734\n.set _FUN_8c012734, _FUN_8c012734_def\n");
//@unit 8c012854
#include "../decls.h"
undefined4 FUN_8c012854_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  uVar1 = 0x80;
  uVar2 = 0;
  pbVar3 = ar4 + ar5 + -1;
  pbVar4 = pbVar3;
  for (; ar4 <= pbVar3; pbVar3 = pbVar3 + -1) {
    bVar5 = uVar2 != 0;
    uVar2 = *pbVar3 & uVar1;
    *pbVar3 = *pbVar3 << 1;
    if (bVar5) {
      *pbVar4 = *pbVar4 | 1;
    }
    pbVar4 = pbVar4 + -1;
  }
  if (uVar2 == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c012854\n.set _FUN_8c012854, _FUN_8c012854_def\n");
//@unit 8c01289c
#include "../decls.h"
undefined4 FUN_8c01289c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 in_r0;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (uint)(short)(8 - (short)ar6);
  if (uVar7 != 0) {
    pbVar5 = ar4 + ar5 + -1;
    if ((int)uVar7 < 0) {
      uVar2 = (int)0xff >> (~uVar7 & 0x1f) + 1;
    }
    else {
      uVar2 = (int)0xff << (uVar7 & 0x1f);
    }
    uVar6 = 0;
    while (ar4 <= pbVar5) {
      uVar4 = (uint)(short)ar6;
      bVar1 = *pbVar5;
      if ((int)uVar4 < 0) {
        bVar3 = (byte)((uint)(int)(char)*pbVar5 >> (~uVar4 & 0x1f) + 1);
      }
      else {
        bVar3 = (byte)((int)(char)*pbVar5 << (uVar4 & 0x1f));
      }
      *pbVar5 = bVar3;
      *pbVar5 = *pbVar5 | (byte)uVar6;
      pbVar5 = pbVar5 + -1;
      uVar6 = (int)(char)bVar1 & uVar2 & 0xff;
      uVar4 = -uVar7;
      if ((int)uVar4 < 0) {
        uVar6 = uVar6 >> (~uVar4 & 0x1f) + 1;
      }
      else {
        uVar6 = uVar6 << (uVar4 & 0x1f);
      }
    }
    if ((uVar6 & 0xff) != 0) {
      return 1;
    }
    in_r0 = 0;
  }
  return in_r0;
}

__asm__(".globl _FUN_8c01289c\n.set _FUN_8c01289c, _FUN_8c01289c_def\n");
//@unit 8c0128e8
#include "../decls.h"
int FUN_8c0128e8_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int ar6_00;
  undefined4 in_stack_ffffffc4;
  byte abStack_34 [24];
  
  memset(ar6,0,0x10,ar7);
  sVar2 = 7;
  do {
    iVar4 = (int)sVar2;
    if (*(char *)(iVar4 + ar5) != '\0') {
      memset(abStack_34,0,0x10,ar7);
      sVar3 = 7;
      do {
        iVar1 = iVar4 + sVar3;
        ar6_00 = (uint)*(byte *)(ar4 + sVar3) * (uint)*(byte *)(ar5 + iVar4);
        in_stack_ffffffc4 =
             CONCAT22((short)((uint)in_stack_ffffffc4 >> 0x10),
                      (ushort)abStack_34[iVar1 + 1] + (short)ar6_00);
        FUN_8c012a40(abStack_34 + iVar1,&stack0xffffffc4,ar6_00,ar7);
        sVar3 = sVar3 + -1;
      } while (-1 < sVar3);
      if (sVar2 == 7) {
        iVar4 = memmove(ar6 + 7,abStack_34 + 7,9,ar7);
      }
      else {
        iVar4 = FUN_8c010af8(iVar4 + ar6,abStack_34 + iVar4,9,ar7,in_stack_ffffffc4);
      }
    }
    sVar2 = sVar2 + -1;
  } while (-1 < sVar2);
  return iVar4;
}

__asm__(".globl _FUN_8c0128e8\n.set _FUN_8c0128e8, _FUN_8c0128e8_def\n");
//@unit 8c0129b4
#include "../decls.h"
undefined4 FUN_8c0129b4_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte *ar6_00;
  byte abStack_1c [8];
  byte bStack_14;
  
  puVar1 = (&FUN_8c0128e8);
  *ar4 = (short)ar6 + *ar4;
  ar6_00 = abStack_1c;
  (*(code *)puVar1)(ar5,ar7,abStack_1c,ar7);
  if ((abStack_1c[0] & 0x80) == 0) {
    FUN_8c012854(abStack_1c,0x10,ar6_00,ar7);
  }
  else {
    *ar4 = *ar4 + 1;
  }
  FUN_8c012e00(abStack_1c,0x10,0x42,ar7);
  bStack_14 = bStack_14 & 0xe0;
  uVar2 = memmove(ar5,abStack_1c,9,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0129b4\n.set _FUN_8c0129b4, _FUN_8c0129b4_def\n");
//@unit 8c012a24
#include "../decls.h"
undefined1 * FUN_8c012a24_def(undefined1 *ar4,uint *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  puVar1 = ar4 + 4;
  iVar4 = 0x18;
  do {
    uVar3 = -iVar4;
    if ((int)uVar3 < 0) {
      uVar2 = (undefined1)(*ar5 >> (~uVar3 & 0x1f) + 1);
    }
    else {
      uVar2 = (undefined1)(*ar5 << (uVar3 & 0x1f));
    }
    *ar4 = uVar2;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < puVar1);
  return puVar1;
}

__asm__(".globl _FUN_8c012a24\n.set _FUN_8c012a24, _FUN_8c012a24_def\n");
//@unit 8c012a40
#include "../decls.h"
char * FUN_8c012a40_def(char *ar4,ushort *ar5,undefined4 ar6,undefined4 ar7)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  pcVar1 = ar4 + 2;
  iVar4 = 8;
  do {
    uVar2 = -iVar4;
    if ((int)uVar2 < 0) {
      cVar3 = (char)(*ar5 >> (~uVar2 & 0x1f) + 1);
    }
    else {
      cVar3 = (char)*ar5 << (uVar2 & 0x1f);
    }
    *ar4 = cVar3;
    ar4 = ar4 + 1;
    iVar4 = iVar4 + -8;
  } while (ar4 < pcVar1);
  return pcVar1;
}

__asm__(".globl _FUN_8c012a40\n.set _FUN_8c012a40, _FUN_8c012a40_def\n");
//@unit 8c012a60
#include "../decls.h"
undefined4 FUN_8c012a60_def(undefined4 ar4,short *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int ar6_00;
  byte *ar4_00;
  byte abStack_1c [12];
  
  *ar5 = (short)ar4 + 0x3f;
  FUN_8c012af8(ar4,abStack_1c,ar6,ar7);
  memset(ar6,0,8,ar7);
  iVar3 = 0;
  ar6_00 = 0;
  for (ar4_00 = abStack_1c; *ar4_00 == 0; ar4_00 = ar4_00 + 1) {
    iVar3 = iVar3 + 1;
    *ar5 = *ar5 + -8;
  }
  for (uVar2 = 0x80; (*ar4_00 & uVar2) == 0; uVar2 = uVar2 >> 1) {
    ar6_00 = ar6_00 + 1;
  }
  FUN_8c01289c(ar4_00,8 - iVar3,ar6_00,ar7,ar6);
  *ar5 = *ar5 - (short)ar6_00;
  uVar1 = memmove(ar6,ar4_00,8 - iVar3,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c012a60\n.set _FUN_8c012a60, _FUN_8c012a60_def\n");
//@unit 8c012af8
#include "../decls.h"
undefined4 FUN_8c012af8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = memmove(ar5,(&DATA_8c125678) + ar4 * 8,8);
  return uVar1;
}

__asm__(".globl _FUN_8c012af8\n.set _FUN_8c012af8, _FUN_8c012af8_def\n");
//@unit 8c012b1c
#include "../decls.h"
undefined4 FUN_8c012b1c_def(int ar4,short *ar5,undefined *ar6,undefined *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined *ar7_00;
  short *psVar7;
  bool bVar8;
  short asStack_48 [2];
  byte *pbStack_44;
  short *psStack_40;
  undefined *puStack_3c;
  byte abStack_2c [8];
  undefined1 uStack_24;
  
  bVar8 = ar4 < 0;
  if (bVar8) {
    ar4 = -ar4;
  }
  uVar6 = (uint)bVar8;
  iVar4 = 0x1b;
  psStack_40 = ar5;
  puStack_3c = ar6;
  uVar1 = libgcc_divide_helper_010468(ar4,0x1b);
  iVar2 = libgcc_divide_helper_010614(ar4,iVar4);
  if ((uVar6 == 1) && (iVar2 != 0)) {
    iVar2 = iVar4 - iVar2;
    asStack_48[0] = -0x5a;
    memmove(abStack_2c,&DAT_8c125798,8,ar7);
    uStack_24 = 0;
  }
  else {
    memset(abStack_2c,0,9,ar7);
    abStack_2c[0] = abStack_2c[0] | 0x80;
    asStack_48[0] = 0;
  }
  iVar4 = 0;
  psVar7 = &DAT_8c1257d8 + uVar6 * 8;
  ar7_00 = &DAT_8c125758 + uVar6 * 0x40;
  pbStack_44 = abStack_2c;
  do {
    if ((uVar1 & 1) != 0) {
      iVar5 = (int)*psVar7;
      ar7 = ar7_00;
      FUN_8c0129b4(asStack_48,abStack_2c,iVar5,ar7_00);
      iVar5 = FUN_8c012c70(abStack_2c,0x40,iVar5,ar7);
      if (iVar5 != 0) {
        asStack_48[0] = asStack_48[0] + 1;
        *pbStack_44 = *pbStack_44 | 0x80;
      }
    }
    iVar4 = iVar4 + 1;
    uVar1 = (int)uVar1 >> 1;
    psVar7 = psVar7 + 1;
    ar7_00 = ar7_00 + 8;
  } while (iVar4 < 8);
  if (iVar2 != 0) {
    FUN_8c012a60(iVar2,psStack_40,puStack_3c,ar7);
    iVar2 = (int)*psStack_40;
    ar7 = puStack_3c;
    FUN_8c0129b4(asStack_48,abStack_2c,iVar2,puStack_3c);
    iVar2 = FUN_8c012c70(abStack_2c,0x40,iVar2,ar7);
    if (iVar2 == 1) {
      asStack_48[0] = asStack_48[0] + 1;
      *pbStack_44 = *pbStack_44 | 0x80;
    }
  }
  *psStack_40 = asStack_48[0];
  uVar3 = memmove(puStack_3c,abStack_2c,8,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c012b1c\n.set _FUN_8c012b1c, _FUN_8c012b1c_def\n");
//@unit 8c012c70
#include "../decls.h"
undefined4 FUN_8c012c70_def(byte *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  undefined4 d;
  uint uVar7;
  byte *pbVar8;
  
  d = 8;
  bVar2 = false;
  iVar3 = libgcc_divide_helper_010468(ar5,8);
  pbVar8 = ar4 + iVar3;
  if ((int)ar5 < 0) {
    uVar4 = ~(~ar5 + 1 & 7) + 1;
  }
  else {
    uVar4 = ar5 & 7;
  }
  uVar4 = -uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = 0x80 >> (~uVar4 & 0x1f) + 1;
  }
  else {
    uVar4 = 0x80 << (uVar4 & 0x1f);
  }
  uVar4 = uVar4 & 0xff;
  uVar7 = ar5 - 1;
  iVar3 = libgcc_divide_helper_010468(uVar7,d);
  pbVar6 = ar4 + iVar3;
  if ((int)uVar7 < 0) {
    uVar7 = ~(~uVar7 + 1 & 7) + 1;
  }
  else {
    uVar7 = uVar7 & 7;
  }
  uVar7 = -uVar7;
  if ((int)uVar7 < 0) {
    uVar7 = 0x80 >> (~uVar7 & 0x1f) + 1;
  }
  else {
    uVar7 = 0x80 << (uVar7 & 0x1f);
  }
  if ((*pbVar8 & uVar4) != 0) {
    uVar5 = (uint)*pbVar8;
    if (((uVar5 & (int)uVar4 >> 1) == 0) && (((int)uVar4 >> 2 & uVar5) == 0)) {
      if (((uint)*pbVar6 & uVar7 & 0xff) != 0) {
        bVar2 = true;
      }
    }
    else {
      bVar2 = true;
    }
  }
  if (bVar2) {
    while ((bVar1 = (byte)uVar7, ((uint)*pbVar6 & uVar7 & 0xff) != 0 && (ar4 <= pbVar6))) {
      uVar7 = uVar7 << 1;
      *pbVar6 = *pbVar6 & ~bVar1;
      if ((uVar7 & 0xff) == 0) {
        uVar7 = 1;
        pbVar6 = pbVar6 + -1;
      }
    }
    if (pbVar6 < ar4) {
      return 1;
    }
    *pbVar6 = *pbVar6 | bVar1;
  }
  return 0;
}

__asm__(".globl _FUN_8c012c70\n.set _FUN_8c012c70, _FUN_8c012c70_def\n");
//@unit 8c012d5c
#include "../decls.h"
uint FUN_8c012d5c_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = 0;
  iVar3 = 0;
  pbVar1 = ar4;
  if (0 < ar5) {
    do {
      bVar4 = uVar2 != 0;
      uVar2 = *ar4 & 1;
      *ar4 = *ar4 >> 1;
      if (bVar4) {
        *pbVar1 = *pbVar1 | 0x80;
      }
      iVar3 = iVar3 + 1;
      pbVar1 = pbVar1 + 1;
      ar4 = ar4 + 1;
    } while (iVar3 < ar5);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012d5c\n.set _FUN_8c012d5c, _FUN_8c012d5c_def\n");
//@unit 8c012da8
#include "../decls.h"
undefined4 FUN_8c012da8_def(byte *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  byte bVar1;
  undefined4 in_r0;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (uint)(short)(8 - (short)ar6);
  if (uVar6 != 0) {
    uVar3 = -uVar6;
    uVar5 = 0;
    if ((int)uVar3 < 0) {
      uVar3 = (int)0xff >> (~uVar3 & 0x1f) + 1;
    }
    else {
      uVar3 = (int)0xff << (uVar3 & 0x1f);
    }
    iVar7 = 0;
    if (0 < ar5) {
      do {
        bVar1 = *ar4;
        uVar4 = -(int)(short)ar6;
        iVar7 = iVar7 + 1;
        if ((int)uVar4 < 0) {
          bVar2 = *ar4 >> (~uVar4 & 0x1f) + 1;
        }
        else {
          bVar2 = *ar4 << (uVar4 & 0x1f);
        }
        *ar4 = bVar2;
        uVar4 = (int)(char)bVar1 & uVar3 & 0xff;
        *ar4 = *ar4 | (byte)uVar5;
        if ((int)uVar6 < 0) {
          uVar5 = uVar4 >> (~uVar6 & 0x1f) + 1;
        }
        else {
          uVar5 = uVar4 << (uVar6 & 0x1f);
        }
        ar4 = ar4 + 1;
      } while (iVar7 < ar5);
    }
    if ((uVar5 & 0xff) == 0) {
      in_r0 = 0;
    }
    else {
      in_r0 = 1;
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c012da8\n.set _FUN_8c012da8, _FUN_8c012da8_def\n");
//@unit 8c012e00
#include "../decls.h"
uint FUN_8c012e00_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = libgcc_divide_helper_010468(ar6,8);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012e00\n.set _FUN_8c012e00, _FUN_8c012e00_def\n");
//@unit 8c012e04
#include "../decls.h"
uint FUN_8c012e04_def(int ar4,int ar5,uint ar6,undefined4 ar7)

{
  undefined4 in_r0;
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  iVar1 = libgcc_divide_helper_010468(ar6,in_r0);
  pbVar6 = (byte *)(iVar1 + ar4);
  if ((int)ar6 < 0) {
    uVar2 = ~(~ar6 + 1 & 7) + 1;
  }
  else {
    uVar2 = ar6 & 7;
  }
  uVar2 = -uVar2;
  if ((int)uVar2 < 0) {
    uVar5 = 0x80 >> (~uVar2 & 0x1f) + 1;
  }
  else {
    uVar5 = 0x80 << (uVar2 & 0x1f);
  }
  if (((uint)*pbVar6 & uVar5 & 0xff) == 0) {
    uVar2 = 0;
    for (uVar3 = uVar5; (uVar3 & 0xff) != 0; uVar3 = (uVar3 & 0xff) >> 1) {
      uVar2 = uVar2 | uVar3;
    }
    uVar2 = uVar2 & 0xff;
    if ((*pbVar6 & uVar2) == 0) {
      pbVar4 = pbVar6;
      do {
        pbVar4 = pbVar4 + 1;
        if ((byte *)(ar4 + ar5) <= pbVar4) {
          return uVar2;
        }
      } while (*pbVar4 == 0);
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
    else {
      *pbVar6 = *pbVar6 | (byte)uVar5;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012e04\n.set _FUN_8c012e04, _FUN_8c012e04_def\n");
//@unit 8c012e84
#include "../decls.h"
undefined4 FUN_8c012e84_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*ar4 != '\0') && ((int)0x200 <= (int)ar4 - ar5)) {
    *(undefined4 *)0x8c2787a8 = (int)0x450;
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c012e84\n.set _FUN_8c012e84, _FUN_8c012e84_def\n");
//@unit 8c012eac
#include "../decls.h"
undefined4 FUN_8c012eac_def(int ar4,byte *ar5,int ar6,int ar7)

{
  bool bVar1;
  undefined4 uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  int iStack_14;
  
  pbVar5 = (byte *)(ar7 + -1 + ar6);
  pbVar3 = ar5 + ar7 + -1;
  uVar6 = 0;
  bVar1 = true;
  pbVar4 = pbVar3 + 1;
  for (; ar5 <= pbVar3; pbVar3 = pbVar3 + -1) {
    iStack_14 = ((uint)*pbVar3 - (uint)*pbVar5) - uVar6;
    bVar7 = iStack_14 < 0;
    if (bVar7) {
      iStack_14 = 0x100 + iStack_14;
    }
    uVar6 = (uint)bVar7;
    if (iStack_14 != 0) {
      bVar1 = false;
    }
    pbVar4 = pbVar4 + -1;
    *pbVar4 = (byte)iStack_14;
    pbVar5 = pbVar5 + -1;
  }
  if ((uVar6 == 1) && (ar4 == 0)) {
    uVar2 = 0xffffffff;
  }
  else if (bVar1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c012eac\n.set _FUN_8c012eac, _FUN_8c012eac_def\n");
//@unit 8c012f24
#include "../decls.h"
undefined4 FUN_8c012f24_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl _FUN_8c012f24\n.set _FUN_8c012f24, _FUN_8c012f24_def\n");
//@unit 8c012f58
#include "../decls.h"
uint FUN_8c012f58_def(undefined1 *ar4,ushort *ar5,byte *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 ar6_00;
  undefined4 in_fr4;
  undefined4 in_stack_ffffffe0;
  undefined1 auStack_1c [4];
  undefined1 auStack_18 [2];
  ushort uStack_16;
  
  uStack_16 = (ushort)((uint)in_fr4 >> 0x10);
  if ((uStack_16 & 0x8000) == 0x8000) {
    uVar2 = 0xff;
  }
  else {
    uVar2 = 1;
  }
  *ar4 = uVar2;
  *ar5 = uStack_16;
  *ar5 = (short)(*ar5 & 0x7ff0) >> 4;
  FUN_8c012a24(&stack0xffffffe0,auStack_18,ar6,ar7);
  ar6_00 = 3;
  memmove(ar6,&stack0xffffffe1,3,ar7);
  FUN_8c012a24(&stack0xffffffe0,auStack_1c,ar6_00,ar7);
  memmove(ar6 + 3,&stack0xffffffe0,4,ar7);
  FUN_8c01289c(ar6,7,3,ar7,in_stack_ffffffe0);
  if ((short)*ar5 < 1) {
    *ar5 = *ar5 + 1;
    uVar1 = (int)(char)*ar6 & 0x7f;
    *ar6 = (byte)uVar1;
    while ((*ar6 & 0x80) == 0) {
      uVar1 = FUN_8c01289c(ar6,7,1,ar7);
      *ar5 = *ar5 - 1;
    }
  }
  else {
    uVar1 = (int)(char)*ar6 | 0x80;
    *ar6 = (byte)uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c012f58\n.set _FUN_8c012f58, _FUN_8c012f58_def\n");
//@unit 8c013060
#include "../decls.h"
undefined4 FUN_8c013060_def(int ar4,undefined1 *ar5,int *ar6,char *ar7)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  char *ar4_00;
  char *ar4_01;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *ar6_00;
  char *ar7_00;
  ulonglong in_dr4;
  undefined4 in_stack_ffffffa4;
  undefined4 ain0;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [7];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  puVar6 = &stack0xffffffa4;
  ar4_01 = (char *)&uStack_28;
  uStack_28 = (undefined4)in_dr4;
  uStack_24 = (uint)(in_dr4 >> 0x20);
  bVar1 = false;
  ar7_00 = ar7;
  if (((in_dr4 & 0x7f00000000000000) == 0) && (iVar2 = FUN_8c010b40(ar4_01,7,ar6,ar7), iVar2 != 0))
  {
    puVar6 = ar5 + 8;
    for (; ar5 < puVar6; ar5 = ar5 + 1) {
      *ar5 = 0;
    }
    *ar6 = 0;
    if ((uStack_24 & 0x80000000) == 0) {
      *ar7 = '\x01';
    }
    else {
      *ar7 = -1;
    }
  }
  else {
    ar4_00 = ar7;
    ar6_00 = auStack_30;
    FUN_8c012f58(ar7,&stack0xffffffa4,auStack_30,ar7_00);
    if (*ar7 == -1) {
      uStack_24 = uStack_24 & 0x7fffffff;
    }
    if ((short)in_stack_ffffffa4 == 0x7ff) {
      if ((*(uint*)((uchar*)&uStack_24+2)) != -0x10) {
        return 2;
      }
      puVar6 = (undefined1 *)0x6;
      iVar2 = FUN_8c010b40(ar4_01,6,ar6_00,ar7_00);
      if (iVar2 == 0) {
        return 2;
      }
      if (*ar7 == '\x01') {
        return 1;
      }
      ar4_00 = ar4_01;
      if (*ar7 == -1) {
        return 0xffffffff;
      }
    }
    sVar4 = (short)in_stack_ffffffa4 + -0x3ff;
    ain0 = CONCAT22((short)((uint)in_stack_ffffffa4 >> 0x10),sVar4);
    if (sVar4 < 0) {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
      iVar2 = iVar2 + -1;
    }
    else {
      iVar2 = FUN_8c01256c(ar4_00,puVar6,ar6_00,ar7_00);
    }
    uStack_29 = 0;
    *ar6 = (iVar2 - ar4) + 1;
    FUN_8c012af8(ar4,auStack_38,ar6_00,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_38[iVar2] = auStack_38[iVar2 + iVar3];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_38 + iVar5; puVar6 < auStack_30; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    iVar2 = ar4 + iVar3 * -8;
    FUN_8c01289c(auStack_38,8,iVar2,ar7_00,ain0);
    FUN_8c012af8(ar4 + -1,auStack_40,iVar2,ar7_00);
    iVar3 = libgcc_divide_helper_010468(ar4 + -1,8);
    iVar5 = 0;
    iVar2 = iVar5;
    if (0 < 8 - iVar3) {
      do {
        iVar5 = iVar2 + 1;
        auStack_40[iVar2] = auStack_40[iVar3 + iVar2];
        iVar2 = iVar5;
      } while (iVar5 < 8 - iVar3);
    }
    for (puVar6 = auStack_40 + iVar5; puVar6 < auStack_38; puVar6 = puVar6 + 1) {
      *puVar6 = 0;
    }
    FUN_8c01289c(auStack_40,8,ar4 + iVar3 * -8 + -1,ar7_00,ain0);
    while( true ) {
      while( true ) {
        puVar6 = ar5;
        FUN_8c010b60((int)(short)ain0,auStack_30,*ar6,ar5);
        memmove(auStack_48,ar5,8,puVar6);
        iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
        if (iVar2 < 1) break;
        bVar1 = true;
        *ar6 = *ar6 + 1;
      }
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_38,8,puVar6);
      if (iVar2 == 0) break;
      memmove(auStack_48,ar5,8,puVar6);
      iVar2 = FUN_8c013ec0(auStack_48,auStack_40,8,puVar6);
      if (-1 < iVar2) {
        return 0;
      }
      if (bVar1) {
        return 0;
      }
      *ar6 = *ar6 + -1;
    }
    iVar2 = *ar6;
    *ar6 = iVar2 + 1;
    FUN_8c010b60((int)(short)ain0,auStack_30,iVar2 + 1,ar5);
  }
  return 0;
}

__asm__(".globl _FUN_8c013060\n.set _FUN_8c013060, _FUN_8c013060_def\n");
//@unit 8c013374
#include "../decls.h"
int FUN_8c013374_def(uint *ar4,char *ar5,int ar6,byte *ar7)

{
  byte bVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  float *pfVar7;
  int iVar8;
  char *pcVar9;
  char *ar4_00;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  char *pcVar13;
  float fVar14;
  bool bVar15;
  byte in_FPSCR_DN;
  int in_stack_ffffffa0;
  int iStack_58;
  char acStack_4c [4];
  char acStack_48 [32];
  undefined1 auStack_28 [12];
  
  pcVar13 = (char *)*ar4;
  uVar11 = 3;
  pcVar5 = pcVar13 + 4;
  if (((uint)pcVar5 & 3) != 0) {
    pcVar5 = pcVar13 + 8;
  }
  *ar4 = (uint)pcVar5;
  pfVar7 = (float *)(pcVar5 + -4);
  if (((uint)pfVar7 & 3) != 0) {
    pfVar7 = (float *)(pcVar5 + -8);
  }
  fVar14 = *pfVar7;
  if (*(int *)(ar7 + 8) == -1) {
    ar7[8] = 6;
    ar7[9] = 0;
    ar7[10] = 0;
    ar7[0xb] = 0;
  }
  acStack_48[0] = '0';
  if ((char)((in_FPSCR_DN & 4) >> 2) == '\0') {
    fVar2 = 0.0;
  }
  else {
    fVar2 = -INFINITY;
  }
  if (fVar14 == fVar2) {
    acStack_4c[0] = '\x01';
    acStack_48[1] = 0;
  }
  else {
    pcVar13 = acStack_4c;
    iVar3 = FUN_8c013060(0x11,auStack_28,&stack0xffffffa0,pcVar13);
    if (iVar3 != 0) {
      *ar5 = '\0';
      if (*(int *)(ar7 + 4) < *(int *)(ar7 + 8)) {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 8);
      }
      else {
        *(undefined4 *)(ar7 + 0x28) = *(undefined4 *)(ar7 + 4);
      }
      if (iVar3 == 1) {
        uVar11 = 0x2b;
      }
      else if (iVar3 == -1) {
        uVar11 = 0x2d;
      }
      else {
        uVar11 = 0x2a;
      }
      ar7[1] = (byte)uVar11;
      return uVar11;
    }
    pcVar5 = acStack_48 + 1;
    uVar11 = 0x11;
    FUN_8c01243c(auStack_28,pcVar5,0x11,pcVar13);
  }
  for (iVar3 = 1; acStack_48[iVar3] == '0'; iVar3 = iVar3 + 1) {
  }
  if (1 < iVar3) {
    pcVar5 = (char *)log_message(acStack_48 + iVar3,pcVar5,uVar11,pcVar13);
    iVar8 = 1;
    in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3 + -1;
    if (0 < (int)pcVar5) {
      do {
        acStack_48[iVar8] = acStack_48[iVar3];
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + 1;
      } while (iVar8 <= (int)pcVar5);
    }
    acStack_48[iVar8] = '\0';
  }
  ar4_00 = acStack_48 + 1;
  iVar3 = log_message(ar4_00,pcVar5,uVar11,pcVar13);
  iVar8 = (int)(iVar3 + (uint)(iVar3 < 0)) >> 1;
  pcVar9 = ar4_00 + iVar3;
  iVar12 = 0;
  pcVar5 = ar4_00;
  if (0 < iVar8) {
    do {
      pcVar9 = pcVar9 + -1;
      cVar6 = *pcVar5;
      pcVar13 = (char *)(int)cVar6;
      iVar12 = iVar12 + 1;
      *pcVar5 = *pcVar9;
      *pcVar9 = cVar6;
      pcVar5 = pcVar5 + 1;
    } while (iVar12 < iVar8);
  }
  if (iVar3 == 0) {
    iVar3 = 1;
    acStack_48[1] = 0x30;
    in_stack_ffffffa0 = 0;
  }
  if ((ar6 == 0x67) || (iStack_58 = ar6, ar6 == 0x47)) {
    *ar7 = *ar7 | 0x20;
    iVar8 = in_stack_ffffffa0 + iVar3 + -1;
    if ((iVar8 < -4) || (*(int *)(ar7 + 8) < iVar8)) {
      iStack_58 = ar6 + -2;
    }
    else {
      iStack_58 = 0x66;
    }
  }
  if (acStack_4c[0] == '\x01') {
    if ((*ar7 & 0x18) == 8) {
      cVar6 = '+';
    }
    else {
      pcVar5 = ar5;
      if ((*ar7 & 0x18) != 0x10) goto LAB_8c013572;
      cVar6 = ' ';
    }
    *ar5 = cVar6;
    pcVar5 = ar5 + 1;
  }
  else {
    *ar5 = '-';
    pcVar5 = ar5 + 1;
  }
LAB_8c013572:
  pcVar9 = ar5 + 1;
  if (iStack_58 == 0x66) {
    if (in_stack_ffffffa0 < 0) {
      in_stack_ffffffa0 = in_stack_ffffffa0 + iVar3;
      iVar8 = in_stack_ffffffa0 + *(int *)(ar7 + 8);
      if ((iVar8 < iVar3) && (-1 < iVar8)) {
        FUN_8c013a72(acStack_48,iVar8 + 1,iVar12,pcVar13,in_stack_ffffffa0);
      }
      if (in_stack_ffffffa0 < 1) {
        bVar15 = acStack_48[0] != '0';
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        if (in_stack_ffffffa0 < 1) {
          *pcVar5 = '0';
        }
        else {
          uVar10 = 1;
          *pcVar5 = acStack_48[0];
        }
        pcVar5[1] = '.';
        iVar8 = 2;
        pcVar5 = pcVar5 + 2;
        if (in_stack_ffffffa0 < 0) {
          *(char **)(ar7 + 0x14) = pcVar5;
          if (-in_stack_ffffffa0 < *(int *)(ar7 + 8)) {
            *(int *)(ar7 + 0x20) = -in_stack_ffffffa0;
            iVar8 = -in_stack_ffffffa0;
          }
          else {
            *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
            iVar8 = *(int *)(ar7 + 8);
          }
          iVar8 = iVar8 + 2;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + in_stack_ffffffa0;
        }
        while (((int)(uVar10 - !bVar15) < iVar3 && (0 < *(int *)(ar7 + 8)))) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          if (0 < *(int *)(ar7 + 8)) {
            *(char **)(ar7 + 0x18) = pcVar5;
            *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
            iVar8 = iVar8 + *(int *)(ar7 + 8);
          }
        }
        else if (pcVar5[-1] == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           (((*(int *)(ar7 + 0x20) == 0 && (*(int *)(ar7 + 0x24) == 0)) || ((*ar7 & 0x20) != 0)))) {
          iVar12 = *(int *)(ar7 + 0x20);
          iVar3 = *(int *)(ar7 + 0x24);
          pcVar5 = pcVar5 + -1;
          ar7[0x24] = 0;
          ar7[0x25] = 0;
          ar7[0x26] = 0;
          ar7[0x27] = 0;
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          *(char **)(ar7 + 0x14) = ar5;
          ar7[0x18] = 0;
          ar7[0x19] = 0;
          ar7[0x1a] = 0;
          ar7[0x1b] = 0;
          iVar8 = ((iVar8 - iVar12) - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
      else {
        bVar15 = acStack_48[0] != '0';
        iVar8 = 0;
        if (bVar15) {
          iVar3 = iVar3 + 1;
          in_stack_ffffffa0 = in_stack_ffffffa0 + 1;
        }
        uVar10 = (uint)!bVar15;
        for (; 0 < in_stack_ffffffa0; in_stack_ffffffa0 = in_stack_ffffffa0 + -1) {
          iVar8 = iVar8 + 1;
          *pcVar5 = acStack_48[uVar10];
          uVar10 = uVar10 + 1;
          pcVar5 = pcVar5 + 1;
        }
        *pcVar5 = '.';
        pcVar13 = pcVar5;
        while( true ) {
          pcVar5 = pcVar13 + 1;
          iVar8 = iVar8 + 1;
          if ((iVar3 <= (int)(uVar10 - !bVar15)) || (*(int *)(ar7 + 8) < 1)) break;
          pcVar13 = acStack_48 + uVar10;
          uVar10 = uVar10 + 1;
          *pcVar5 = *pcVar13;
          *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
          pcVar13 = pcVar5;
        }
        bVar1 = *ar7;
        if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
          *(char **)(ar7 + 0x14) = pcVar5;
          iVar8 = iVar8 + *(int *)(ar7 + 8);
          *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
        }
        else if (*pcVar13 == '0') {
          for (; pcVar5[-1] == '0'; pcVar5 = pcVar5 + -1) {
            iVar8 = iVar8 + -1;
          }
        }
        if ((((*ar7 & 4) == 0) && (pcVar5[-1] == '.')) &&
           ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
          iVar3 = *(int *)(ar7 + 0x20);
          ar7[0x20] = 0;
          ar7[0x21] = 0;
          ar7[0x22] = 0;
          ar7[0x23] = 0;
          pcVar5 = pcVar5 + -1;
          *(char **)(ar7 + 0x14) = ar5;
          iVar8 = (iVar8 - iVar3) + -1;
        }
        iVar12 = (int)*ar5;
        if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
           ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
          *(char **)(ar7 + 0x10) = pcVar9;
          *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        else if (iVar8 < *(int *)(ar7 + 4)) {
          *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
        }
        else {
          ar7[0x28] = 0;
          ar7[0x29] = 0;
          ar7[0x2a] = 0;
          ar7[0x2b] = 0;
        }
        if (*(char **)(ar7 + 0x14) == ar5) {
          *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
        }
      }
    }
    else {
      iVar8 = 0;
      if (0 < iVar3) {
        do {
          cVar6 = *ar4_00;
          ar4_00 = ar4_00 + 1;
          iVar8 = iVar8 + 1;
          *pcVar5 = cVar6;
          pcVar5 = pcVar5 + 1;
        } while (iVar8 < iVar3);
      }
      *(char **)(ar7 + 0x14) = pcVar5;
      *(int *)(ar7 + 0x20) = in_stack_ffffffa0;
      iVar8 = 0;
      if ((((*ar7 & 0x20) == 0) && (0 < *(int *)(ar7 + 8))) || ((*ar7 & 4) != 0)) {
        *pcVar5 = '.';
        iVar8 = 1;
        pcVar5 = pcVar5 + 1;
      }
      bVar1 = *ar7;
      if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
        *(char **)(ar7 + 0x18) = pcVar5;
        *(undefined4 *)(ar7 + 0x24) = *(undefined4 *)(ar7 + 8);
        iVar8 = iVar8 + *(int *)(ar7 + 8);
      }
      iVar12 = (int)*ar5;
      iVar3 = iVar8 + in_stack_ffffffa0 + iVar3;
      if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
         ((iVar3 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
        *(char **)(ar7 + 0x10) = pcVar9;
        *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar3;
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
      else if (iVar3 < *(int *)(ar7 + 4)) {
        *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar3;
      }
      else {
        ar7[0x28] = 0;
        ar7[0x29] = 0;
        ar7[0x2a] = 0;
        ar7[0x2b] = 0;
      }
    }
  }
  else {
    if (*(int *)(ar7 + 8) + 1 < iVar3) {
      FUN_8c013a72(acStack_48,*(int *)(ar7 + 8) + 2,iVar12,pcVar13,in_stack_ffffffa0);
    }
    if (acStack_48[0] != '0') {
      iVar3 = iVar3 + 1;
      in_stack_ffffffa0 = in_stack_ffffffa0 + -1;
    }
    uVar10 = (uint)(acStack_48[0] == '0');
    in_stack_ffffffa0 = in_stack_ffffffa0 + (iVar3 - uVar10);
    iVar8 = 1;
    *pcVar5 = acStack_48[uVar10];
    pcVar5[1] = '.';
    pcVar5 = pcVar5 + 1;
    while( true ) {
      pcVar13 = pcVar5 + 1;
      uVar10 = uVar10 + 1;
      iVar8 = iVar8 + 1;
      if ((iVar3 < (int)uVar10) || (*(int *)(ar7 + 8) < 1)) break;
      *pcVar13 = acStack_48[uVar10];
      *(int *)(ar7 + 8) = *(int *)(ar7 + 8) + -1;
      pcVar5 = pcVar13;
    }
    bVar1 = *ar7;
    if (((bVar1 & 0x20) == 0) || (((bVar1 & 0x20) != 0 && ((bVar1 & 4) != 0)))) {
      *(char **)(ar7 + 0x14) = pcVar13;
      *(undefined4 *)(ar7 + 0x20) = *(undefined4 *)(ar7 + 8);
      iVar8 = iVar8 + *(int *)(ar7 + 8);
    }
    else if (*pcVar5 == '0') {
      for (; pcVar13[-1] == '0'; pcVar13 = pcVar13 + -1) {
        iVar8 = iVar8 + -1;
      }
    }
    if ((((*ar7 & 4) == 0) && (pcVar13[-1] == '.')) &&
       ((*(int *)(ar7 + 0x20) == 0 || ((*ar7 & 0x20) != 0)))) {
      iVar3 = *(int *)(ar7 + 0x20);
      *(char **)(ar7 + 0x14) = ar5;
      pcVar13 = pcVar13 + -1;
      ar7[0x20] = 0;
      ar7[0x21] = 0;
      ar7[0x22] = 0;
      ar7[0x23] = 0;
      iVar8 = (iVar8 - iVar3) + -1;
    }
    if (iStack_58 == 0x65) {
      cVar6 = 'e';
    }
    else {
      cVar6 = 'E';
    }
    *pcVar13 = cVar6;
    if (in_stack_ffffffa0 < 0) {
      pcVar13[1] = '-';
      in_stack_ffffffa0 = -in_stack_ffffffa0;
    }
    else {
      pcVar13[1] = '+';
    }
    if (in_stack_ffffffa0 < 100) {
      pcVar13[2] = '0';
      pcVar13 = pcVar13 + 3;
      iVar8 = iVar8 + 4;
      *pcVar13 = '0';
    }
    else {
      pcVar13 = pcVar13 + 4;
      iVar8 = iVar8 + 5;
    }
    pcVar5 = pcVar13 + 1;
    uVar11 = 10;
    for (; 0 < in_stack_ffffffa0;
        in_stack_ffffffa0 = libgcc_divide_helper_010468(in_stack_ffffffa0,uVar11)) {
      uVar4 = libgcc_divide_helper_010614(in_stack_ffffffa0,uVar11);
      *pcVar13 = (char)uVar4 + '0';
      pcVar13 = pcVar13 + -1;
    }
    iVar12 = (int)*ar5;
    if ((((iVar12 == 0x2b) || (iVar12 == 0x2d)) || (iVar12 == 0x20)) &&
       ((iVar8 < *(int *)(ar7 + 4) && (iVar12 = (int)(char)ar7[1], iVar12 == 0x30)))) {
      *(char **)(ar7 + 0x10) = pcVar9;
      *(int *)(ar7 + 0x1c) = *(int *)(ar7 + 4) - iVar8;
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    else if (iVar8 < *(int *)(ar7 + 4)) {
      *(int *)(ar7 + 0x28) = *(int *)(ar7 + 4) - iVar8;
    }
    else {
      ar7[0x28] = 0;
      ar7[0x29] = 0;
      ar7[0x2a] = 0;
      ar7[0x2b] = 0;
    }
    if (*(char **)(ar7 + 0x14) == ar5) {
      *(undefined4 *)(ar7 + 0x14) = *(undefined4 *)(ar7 + 0x10);
    }
  }
  *pcVar5 = '\0';
  return iVar12;
}

__asm__(".globl _FUN_8c013374\n.set _FUN_8c013374, _FUN_8c013374_def\n");
//@unit 8c013a72
#include "../decls.h"
undefined4 FUN_8c013a72_def(char *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  char *pcVar1;
  char *pcVar2;
  
  if ('4' < ar4[ar5]) {
    pcVar1 = ar4 + ar5 + -1;
    ar4[ar5] = '0';
    *pcVar1 = *pcVar1 + '\x01';
    pcVar2 = pcVar1;
    for (; ar4 < pcVar1; pcVar1 = pcVar1 + -1) {
      if ('9' < *pcVar1) {
        *pcVar2 = *pcVar2 + -10;
        pcVar2[-1] = pcVar2[-1] + '\x01';
      }
      pcVar2 = pcVar2 + -1;
    }
    pcVar1 = ar4 + 1;
    if ('9' < *pcVar1) {
      *pcVar1 = *pcVar1 + -10;
      *ar4 = *ar4 + '\x01';
    }
  }
  return in_r0;
}

__asm__(".globl _FUN_8c013a72\n.set _FUN_8c013a72, _FUN_8c013a72_def\n");
//@unit 8c013adc
#include "../decls.h"
int FUN_8c013adc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}

__asm__(".globl _FUN_8c013adc\n.set _FUN_8c013adc, _FUN_8c013adc_def\n");
//@unit 8c013aec
#include "../decls.h"
undefined4 FUN_8c013aec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011850(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013aec\n.set _FUN_8c013aec, _FUN_8c013aec_def\n");
//@unit 8c013b3c
#include "../decls.h"
undefined4 FUN_8c013b3c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011850(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013b3c\n.set _FUN_8c013b3c, _FUN_8c013b3c_def\n");
//@unit 8c013b8c
#include "../decls.h"
undefined4 FUN_8c013b8c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011b44(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013b8c\n.set _FUN_8c013b8c, _FUN_8c013b8c_def\n");
//@unit 8c013bdc
#include "../decls.h"
undefined4 FUN_8c013bdc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0143f0(0,10);
  return uVar1;
}

__asm__(".globl _FUN_8c013bdc\n.set _FUN_8c013bdc, _FUN_8c013bdc_def\n");
//@unit 8c013be8
#include "../decls.h"
undefined4 FUN_8c013be8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011b9c(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013be8\n.set _FUN_8c013be8, _FUN_8c013be8_def\n");
//@unit 8c013c38
#include "../decls.h"
undefined4 FUN_8c013c38_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011e10(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013c38\n.set _FUN_8c013c38, _FUN_8c013c38_def\n");
//@unit 8c013c88
#include "../decls.h"
undefined4 FUN_8c013c88_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011e10(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013c88\n.set _FUN_8c013c88, _FUN_8c013c88_def\n");
//@unit 8c013cd8
#include "../decls.h"
undefined4 FUN_8c013cd8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011f18(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013cd8\n.set _FUN_8c013cd8, _FUN_8c013cd8_def\n");
//@unit 8c013d28
#include "../decls.h"
undefined4 FUN_8c013d28_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c011bfc(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013d28\n.set _FUN_8c013d28, _FUN_8c013d28_def\n");
//@unit 8c013d78
#include "../decls.h"
undefined4 FUN_8c013d78_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0)

{
  float in_fr4;
  
  if (in_fr4 == 0.0) {
    *ar4 = 0;
  }
  else {
    if (((uint)in_fr4 & 0x7f800000) != 0x7f800000) {
      *ar4 = ((int)((uint)in_fr4 & 0x7f800000) >> 0x17) + -0x7e;
      return ain0;
    }
    if (((uint)in_fr4 & 0x7fffff) == 0) {
      ain0 = 0x44c;
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return ain0;
}

__asm__(".globl _FUN_8c013d78\n.set _FUN_8c013d78, _FUN_8c013d78_def\n");
//@unit 8c013dec
#include "../decls.h"
int FUN_8c013dec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (0 < ar4) {
    return ar4;
  }
  return -ar4;
}

__asm__(".globl _FUN_8c013dec\n.set _FUN_8c013dec, _FUN_8c013dec_def\n");
//@unit 8c013dfc
#include "../decls.h"
undefined4 FUN_8c013dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012090(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c013dfc\n.set _FUN_8c013dfc, _FUN_8c013dfc_def\n");
//@unit 8c013e4c
#include "../decls.h"
int FUN_8c013e4c_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c2787b0 = ar5;
  iVar1 = *(undefined4 *)0x8c2787b0;
  if (iVar1 == 0) {
    iVar1 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c013e4c\n.set _FUN_8c013e4c, _FUN_8c013e4c_def\n");
//@unit 8c013ec0
#include "../decls.h"
undefined4 FUN_8c013ec0_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  
  if (ar6 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (ar6 != 0) {
    do {
      cVar1 = *ar5;
      ar5 = ar5 + 1;
      cVar2 = *ar4;
      ar4 = ar4 + 1;
      if (cVar2 != cVar1) break;
      uVar3 = uVar3 + 1;
    } while (uVar3 < ar6);
  }
  return (uint)(byte)ar4[-1] - (uint)(byte)ar5[-1];
}

__asm__(".globl _FUN_8c013ec0\n.set _FUN_8c013ec0, _FUN_8c013ec0_def\n");
//@unit 8c013ef4
#include "../decls.h"
undefined4 * memmove_def(undefined4 *ar4,undefined4 *ar5,uint ar6,undefined4 ar7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  if ((ar4 != ar5) && (ar6 != 0)) {
    uVar6 = ar6 >> 1;
    uVar5 = (uint)ar4 | (uint)ar5 | ar6;
    uVar7 = ar6 >> 2;
    if (ar4 < ar5) {
      puVar3 = ar4;
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            uVar4 = *ar5;
            ar5 = ar5 + 1;
            uVar7 = uVar7 - 1;
            *puVar3 = uVar4;
            puVar3 = puVar3 + 1;
          } while (uVar7 != 0);
        }
        else {
          do {
            uVar2 = *(undefined2 *)ar5;
            ar5 = (undefined4 *)((int)ar5 + 2);
            uVar6 = uVar6 - 1;
            *(undefined2 *)puVar3 = uVar2;
            puVar3 = (undefined4 *)((int)puVar3 + 2);
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          uVar1 = *(undefined1 *)ar5;
          ar5 = (undefined4 *)((int)ar5 + 1);
          ar6 = ar6 - 1;
          *(undefined1 *)puVar3 = uVar1;
          puVar3 = (undefined4 *)((int)puVar3 + 1);
        } while (ar6 != 0);
      }
    }
    else {
      puVar3 = (undefined4 *)((int)ar4 + ar6);
      puVar8 = (undefined4 *)((int)ar5 + ar6);
      if ((uVar5 & 1) == 0) {
        if ((uVar5 & 3) == 0) {
          do {
            puVar8 = puVar8 + -1;
            uVar7 = uVar7 - 1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar8;
          } while (uVar7 != 0);
        }
        else {
          do {
            puVar8 = (undefined4 *)((int)puVar8 + -2);
            uVar6 = uVar6 - 1;
            puVar3 = (undefined4 *)((int)puVar3 + -2);
            *(undefined2 *)puVar3 = *(undefined2 *)puVar8;
          } while (uVar6 != 0);
        }
      }
      else {
        do {
          puVar8 = (undefined4 *)((int)puVar8 + -1);
          ar6 = ar6 - 1;
          puVar3 = (undefined4 *)((int)puVar3 + -1);
          *(undefined1 *)puVar3 = *(undefined1 *)puVar8;
        } while (ar6 != 0);
      }
    }
  }
  return ar4;
}

__asm__(".globl _memmove\n.set _memmove, _memmove_def\n");
//@unit 8c013fb4
#include "../decls.h"
undefined1 * FUN_8c013fb4_def(undefined1 *ar4,undefined1 *ar5,uint ar6,undefined4 ar7)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  if (ar4 != ar5) {
    if (ar4 < ar5) {
      uVar2 = 0;
      puVar3 = ar4;
      if (ar6 != 0) {
        do {
          uVar1 = *ar5;
          ar5 = ar5 + 1;
          uVar2 = uVar2 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar3 + 1;
        } while (uVar2 < ar6);
      }
    }
    else {
      uVar2 = 0;
      puVar4 = ar4 + ar6;
      puVar3 = ar5 + ar6;
      if (ar6 != 0) {
        do {
          puVar3 = puVar3 + -1;
          uVar2 = uVar2 + 1;
          puVar4 = puVar4 + -1;
          *puVar4 = *puVar3;
        } while (uVar2 < ar6);
      }
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c013fb4\n.set _FUN_8c013fb4, _FUN_8c013fb4_def\n");
//@unit 8c013ff8
#include "../decls.h"
undefined1 * memset_def(undefined1 *ar4,undefined4 ar5,uint ar6,undefined4 ar7)

{
  undefined1 *puVar1;
  uint uVar2;
  
  uVar2 = 0;
  puVar1 = ar4;
  if (ar6 != 0) {
    do {
      uVar2 = uVar2 + 1;
      *puVar1 = (undefined1)ar5;
      puVar1 = puVar1 + 1;
    } while (uVar2 < ar6);
  }
  return ar4;
}

__asm__(".globl _memset\n.set _memset, _memset_def\n");
//@unit 8c014010
#include "../decls.h"
undefined4 free_if_nonnull_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  if (ar4 != 0) {
    in_r0 = FUN_8c1fb586(ar4,ar5,ar6,ar7);
  }
  return in_r0;
}

__asm__(".globl _free_if_nonnull\n.set _free_if_nonnull, _free_if_nonnull_def\n");
//@unit 8c014028
#include "../decls.h"
int FUN_8c014028_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  puVar2 = (&FUN_8c1fb4b8);
  puVar1 = (&DATA_8c12c4f0);
  while ((iVar3 = (*(code *)puVar2)(ar4,ar5,ar6,ar7), iVar3 == 0 && (*(int *)(&DATA_8c12c4f0) != 0))
        ) {
    (**(code **)puVar1)(0,ar5,ar6,ar7);
  }
  return iVar3;
}

__asm__(".globl _FUN_8c014028\n.set _FUN_8c014028, _FUN_8c014028_def\n");
//@unit 8c014064
#include "../decls.h"
undefined4 FUN_8c014064_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  undefined4 in_stack_fffffff8;
  uint uVar3;
  
  cVar2 = '\0';
  uVar1 = FUN_8c0121bc(ar4,ar5,ar6,ar7,in_stack_fffffff8);
  if (cVar2 == '\0') {
    uVar3 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uVar3 = (uint)in_dr0;
  }
  if ((uVar3 & 0x7f800000) == 0x7f800000) {
    if ((uVar3 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c014064\n.set _FUN_8c014064, _FUN_8c014064_def\n");
//@unit 8c0140b4
#include "../decls.h"
undefined4 FUN_8c0140b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0140cc(1,ar5,&stack0xfffffff0,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0140b4\n.set _FUN_8c0140b4, _FUN_8c0140b4_def\n");
//@unit 8c0140cc
#include "../decls.h"
int FUN_8c0140cc_def(uint ar4,uint ar5,int *ar6,int ar7,int ain0)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *a6;
  uint ain0_00;
  int a5;
  uint ar5_00;
  uint uVar4;
  uint ar4_00;
  int iVar5;
  
  a6 = ar6;
  do {
    while( true ) {
      ain0_00 = (ar5 - ar4 >> 1) + ar4;
      a5 = (ain0_00 - 1) * ar6[1] + *ar6;
      ar5_00 = ar5;
      ar4_00 = ar4;
      while ((ar4_00 != 0 && (ar4_00 <= ar5_00))) {
        while (iVar2 = (*(code *)(uint)ar6[2])((ar4_00 - 1) * ar6[1] + *ar6,a5,a6,ar7), uVar4 = ar5_00,
              iVar2 < 0) {
          ar4_00 = ar4_00 + 1;
        }
        while (ain0 = (*(code *)(uint)ar6[2])(a5,(uVar4 - 1) * ar6[1] + *ar6,a6,ar7), ain0 < 0) {
          uVar4 = uVar4 - 1;
        }
        ar5_00 = uVar4;
        if (ar4_00 <= uVar4) {
          ar5_00 = uVar4 - 1;
          for (uVar3 = 0; uVar3 < (uint)ar6[1]; uVar3 = uVar3 + 1) {
            iVar2 = *ar6;
            iVar5 = (ar4_00 - 1) * ar6[1];
            ain0 = iVar5 + iVar2;
            cVar1 = *(char *)(ain0 + uVar3);
            ar7 = (int)cVar1;
            a6 = (int *)(ar5_00 * ar6[1] + iVar2 + uVar3);
            *(char *)(iVar5 + iVar2 + uVar3) = (char)*a6;
            *(char *)(ar5_00 * ar6[1] + *ar6 + uVar3) = cVar1;
          }
          if (ar4_00 == ain0_00) {
            a5 = ar5_00 * ar6[1] + *ar6;
          }
          else if (uVar4 == ain0_00) {
            a5 = (ar4_00 - 1) * ar6[1] + *ar6;
          }
          ar4_00 = ar4_00 + 1;
        }
      }
      if (ar5 - ar4_00 <= ar5_00 - ar4) break;
      if (ar4 < ar5_00) {
        a6 = ar6;
        ain0 = FUN_8c0140cc(ar4,ar5_00,ar6,ar7,ain0_00);
      }
      ar4 = ar4_00;
      if (ar5 <= ar4_00) {
        return ain0;
      }
    }
    if (ar4_00 < ar5) {
      a6 = ar6;
      ain0 = FUN_8c0140cc(ar4_00,ar5,ar6,ar7,ain0_00);
    }
    ar5 = ar5_00;
  } while (ar4 < ar5_00);
  return ain0;
}

__asm__(".globl _FUN_8c0140cc\n.set _FUN_8c0140cc, _FUN_8c0140cc_def\n");
//@unit 8c014200
#include "../decls.h"
uint rand_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)0x7fff;
  uVar2 = *(int *)(&DATA_8c12c4e8) * 0x41c64e6d + (int)0x3039;
  *(uint *)(&DATA_8c12c4e8) = uVar2;
  return uVar2 >> 0x10 & uVar1;
}

__asm__(".globl _rand\n.set _rand, _rand_def\n");
//@unit 8c01422c
#include "../decls.h"
undefined4
FUN_8c01422c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 ain0,undefined4 ain1)

{
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined4 unaff_r13;
  undefined4 unaff_r14;
  undefined4 in_fr1;
  undefined4 in_fr0;
  undefined4 in_fr3;
  undefined4 in_fr2;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined4 in_fr13;
  undefined4 in_fr12;
  undefined4 in_fr15;
  undefined4 in_fr14;
  undefined4 in_GBR;
  undefined4 in_MACH;
  undefined4 in_MACL;
  undefined4 in_PR;
  undefined4 in_FPUL;
  byte in_FPSCR_RM;
  byte in_FPSCR_FLAG;
  byte in_FPSCR_ENABLE;
  byte in_FPSCR_CAUSE;
  byte in_FPSCR_DN;
  byte in_FPSCR_FR;
  
  *(BADSPACEBASE **)ar4 = register0x0000003c;
  *(undefined4 *)(ar4 + 4) = unaff_r14;
  *(undefined4 *)(ar4 + 8) = in_PR;
  *(undefined4 *)(ar4 + 0xc) = unaff_r13;
  *(undefined4 *)(ar4 + 0x10) = 0;
  *(undefined4 *)(ar4 + 0x14) = unaff_r11;
  *(undefined4 *)(ar4 + 0x18) = unaff_r10;
  *(undefined4 *)(ar4 + 0x1c) = unaff_r9;
  *(undefined4 *)(ar4 + 0x20) = unaff_r8;
  *(undefined4 *)(ar4 + 0x24) = ar7;
  *(undefined4 *)(ar4 + 0x28) = ar6;
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  *(int *)(ar4 + 0x30) = ar4;
  *(undefined4 *)(ar4 + 0x34) = in_r3;
  *(undefined4 *)(ar4 + 0x38) = in_r2;
  *(undefined4 *)(ar4 + 0x3c) = ain1;
  *(undefined4 *)(ar4 + 0x40) = ain0;
  *(undefined4 *)(ar4 + 0x44) = in_MACH;
  *(undefined4 *)(ar4 + 0x48) = in_MACL;
  *(undefined4 *)(ar4 + 0x4c) = in_GBR;
  *(uint *)(ar4 + 0x94) =
       (uint)in_FPSCR_RM | (uint)in_FPSCR_FLAG << 2 | (uint)in_FPSCR_ENABLE << 7 |
       (uint)in_FPSCR_CAUSE << 0xc | (uint)in_FPSCR_DN << 0x12 | (uint)in_FPSCR_FR << 0x15;
  *(undefined4 *)(ar4 + 0x90) = in_FPUL;
  *(undefined4 *)(ar4 + 0x8c) = in_fr15;
  *(undefined4 *)(ar4 + 0x88) = in_fr14;
  *(undefined4 *)(ar4 + 0x84) = in_fr13;
  *(undefined4 *)(ar4 + 0x80) = in_fr12;
  *(undefined4 *)(ar4 + 0x7c) = in_fr11;
  *(undefined4 *)(ar4 + 0x78) = in_fr10;
  *(undefined4 *)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(ar4 + 100) = in_fr5;
  *(undefined4 *)(ar4 + 0x60) = in_fr4;
  *(undefined4 *)(ar4 + 0x5c) = in_fr3;
  *(undefined4 *)(ar4 + 0x58) = in_fr2;
  *(undefined4 *)(ar4 + 0x54) = in_fr1;
  *(undefined4 *)(ar4 + 0x50) = in_fr0;
  return 0;
}

__asm__(".globl _FUN_8c01422c\n.set _FUN_8c01422c, _FUN_8c01422c_def\n");
//@unit 8c014294
#include "../decls.h"
undefined4 FUN_8c014294_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012328(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c014294\n.set _FUN_8c014294, _FUN_8c014294_def\n");
//@unit 8c0142e4
#include "../decls.h"
undefined4 FUN_8c0142e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr0;
  char cVar2;
  uint uStack_8;
  
  cVar2 = '\0';
  uVar1 = FUN_8c012328(ar4,ar5,ar6,ar7);
  if (cVar2 == '\0') {
    uStack_8 = (uint)((ulonglong)in_dr0 >> 0x20);
  }
  else {
    uStack_8 = (uint)in_dr0;
  }
  if ((uStack_8 & 0x7f800000) == 0x7f800000) {
    if ((uStack_8 & 0x7fffff) == 0) {
      _DAT_8c2787a8 = 0x44c;
    }
    else {
      uVar1 = 0x44d;
      _DAT_8c2787a8 = 0x44d;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c0142e4\n.set _FUN_8c0142e4, _FUN_8c0142e4_def\n");
//@unit 8c014334
#include "../decls.h"
undefined4 FUN_8c014334_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c010e84(1,0,ar4,s0);
  return uVar1;
}

__asm__(".globl _FUN_8c014334\n.set _FUN_8c014334, _FUN_8c014334_def\n");
//@unit 8c014370
#include "../decls.h"
undefined4 FUN_8c014370_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(&DATA_8c12c4e8) = ar4;
  return in_r0;
}

__asm__(".globl _FUN_8c014370\n.set _FUN_8c014370, _FUN_8c014370_def\n");
//@unit 8c01437c
#include "../decls.h"
char * FUN_8c01437c_def(char *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = ar4; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
  }
  do {
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return ar4;
}

__asm__(".globl _FUN_8c01437c\n.set _FUN_8c01437c, _FUN_8c01437c_def\n");
//@unit 8c01439c
#include "../decls.h"
undefined4 FUN_8c01439c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0109e8(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01439c\n.set _FUN_8c01439c, _FUN_8c01439c_def\n");
//@unit 8c0143b0
#include "../decls.h"
int log_message_def(char *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  while (cVar1 = *ar4, ar4 = ar4 + 1, cVar1 != '\0') {
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}

__asm__(".globl _log_message\n.set _log_message, _log_message_def\n");
//@unit 8c0143c0
#include "../decls.h"
char * FUN_8c0143c0_def(char *ar4,char *ar5,uint ar6,undefined4 ar7)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  
  uVar2 = 0;
  pcVar3 = ar4;
  while( true ) {
    if (ar6 <= uVar2) {
      return ar4;
    }
    if (*ar5 == '\0') break;
    cVar1 = *ar5;
    ar5 = ar5 + 1;
    uVar2 = uVar2 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  }
  for (; uVar2 < ar6; uVar2 = uVar2 + 1) {
    *pcVar3 = '\0';
    pcVar3 = pcVar3 + 1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0143c0\n.set _FUN_8c0143c0, _FUN_8c0143c0_def\n");
//@unit 8c0143f0
#include "../decls.h"
undefined4 FUN_8c0143f0_def(byte *ar4,undefined4 *ar5,int ar6,undefined4 ar7)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uStack_34;
  uint uStack_30;
  
  uStack_34 = 0;
  uStack_30 = 0;
  iVar6 = ar6;
  pbVar7 = ar4;
  while (((&DAT_8c125470)[*pbVar7] & 0x40) != 0) {
    pbVar7 = pbVar7 + 1;
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((*pbVar7 == 0x2b) || (*pbVar7 == 0x2d)) {
    bVar1 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    uStack_30 = (uint)(bVar1 == 0x2d);
    iVar4 = FUN_8c012e84(pbVar7,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  pbVar8 = pbVar7;
  if (ar6 == 0) {
    if (*pbVar7 == 0x30) {
      pbVar8 = pbVar7 + 1;
      iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
      if (iVar4 != 0) {
        return 0;
      }
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x78) {
        iVar4 = FUN_8c012e84(pbVar7 + 2,ar4,iVar6,ar7);
        if (iVar4 != 0) {
          return 0;
        }
        ar6 = 0x10;
        pbVar8 = pbVar7 + 2;
      }
      else {
        ar6 = 8;
      }
    }
    else {
      ar6 = 10;
    }
  }
  else if ((ar6 == 0x10) && (*pbVar7 == 0x30)) {
    pbVar8 = pbVar7 + 1;
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    if (iVar4 == 0x78) {
      pbVar8 = pbVar7 + 2;
    }
    iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar4 != 0) {
      return 0;
    }
  }
  if ((ar6 < 2) || (0x24 < ar6)) {
    _DAT_8c2787a8 = 0x4b0;
  }
  else {
    if (ar6 < 0xb) {
      cVar3 = (char)ar6 + '/';
    }
    else {
      cVar3 = (char)ar6 + 'V';
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 7) != 0) {
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 <= cVar3) {
        while (*pbVar8 == 0x30) {
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        bVar2 = false;
        uStack_34 = 0;
        while( true ) {
          iVar4 = (int)(char)*pbVar8;
          if (((&DAT_8c125470)[*pbVar8] & 7) == 0) break;
          if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
            iVar4 = iVar4 + 0x20;
          }
          if (cVar3 < iVar4) break;
          if (!bVar2) {
            if (((&DAT_8c125470)[*pbVar8] & 4) == 0) {
              iVar4 = (int)(char)*pbVar8;
              if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
                iVar4 = iVar4 + 0x20;
              }
              iVar4 = iVar4 + -0x57;
            }
            else {
              iVar4 = (char)*pbVar8 + -0x30;
            }
            uVar5 = libgcc_divide_helper_01051c((uStack_30 - iVar4) + 0x7fffffff,ar6);
            if (uVar5 < uStack_34) {
              bVar2 = true;
            }
            else {
              uStack_34 = ar6 * uStack_34 + iVar4;
            }
          }
          pbVar8 = pbVar8 + 1;
          iVar4 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
          if (iVar4 != 0) {
            return 0;
          }
        }
        if (bVar2) {
          _DAT_8c2787a8 = 0x44c;
          if (uStack_30 == 0) {
            uStack_34 = 0x7fffffff;
          }
          else {
            uStack_34 = 0x80000000;
          }
        }
        else if (uStack_30 != 0) {
          uStack_34 = -uStack_34;
        }
      }
    }
    iVar4 = (int)(char)*pbVar8;
    if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar7 = pbVar8;
    if (iVar4 == 0x75) {
      pbVar7 = pbVar8 + 1;
      iVar4 = (int)(char)*pbVar7;
      if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x6c) {
        pbVar7 = pbVar8 + 2;
      }
    }
    iVar4 = (int)(char)*pbVar7;
    if (((&DAT_8c125470)[*pbVar7] & 1) != 0) {
      iVar4 = iVar4 + 0x20;
    }
    pbVar8 = pbVar7;
    if (iVar4 == 0x6c) {
      pbVar8 = pbVar7 + 1;
      iVar4 = (int)(char)*pbVar8;
      if (((&DAT_8c125470)[*pbVar8] & 1) != 0) {
        iVar4 = iVar4 + 0x20;
      }
      if (iVar4 == 0x75) {
        pbVar8 = pbVar7 + 2;
      }
    }
    iVar6 = FUN_8c012e84(pbVar8,ar4,iVar6,ar7);
    if (iVar6 != 0) {
      return 0;
    }
  }
  if (ar5 != (undefined4 *)0x0) {
    *ar5 = pbVar8;
    return uStack_34;
  }
  return uStack_34;
}

__asm__(".globl _FUN_8c0143f0\n.set _FUN_8c0143f0, _FUN_8c0143f0_def\n");
//@unit 8c0146b4
#include "../decls.h"
int FUN_8c0146b4_def(uint ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (((&DATA_8c125470)[ar4 & 0xff] & 2) != 0) {
    return ar4 - 0x20;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0146b4\n.set _FUN_8c0146b4, _FUN_8c0146b4_def\n");
//@unit 8c0146d0
#include "../decls.h"
undefined4 vsprintf_like_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c010e84(1,0,ar4,ar5);
  return uVar1;
}

__asm__(".globl _vsprintf_like\n.set _vsprintf_like, _vsprintf_like_def\n");
//@unit 8c0146f8
#include "../decls.h"
int * FUN_8c0146f8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (int)(&DATA_8c129808);
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_ctor_zero(ar4 + 5,ar5,ar6,ar7);
  ar4[10] = 0x8c2787e8;
  *(undefined4 *)0x8c27882c = 0x3f777777;
  ((undefined1 *)1)[0x8c27882c] = 0x3333333;
  FUN_8c014764(ar4[10],ar5,ar6,ar7);
  (**(code **)(*ar4 + 0x14))(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0146f8\n.set _FUN_8c0146f8, _FUN_8c0146f8_def\n");
//@unit 8c014764
#include "../decls.h"
undefined4 FUN_8c014764_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 0x40;
  uVar1 = FUN_8c014790(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014764\n.set _FUN_8c014764, _FUN_8c014764_def\n");
//@unit 8c014790
#include "../decls.h"
uint FUN_8c014790_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x14) | 0x20;
  *(uint *)(ar4 + 0x14) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c014790\n.set _FUN_8c014790, _FUN_8c014790_def\n");
//@unit 8c0147a4
#include "../decls.h"
undefined4
Class_129808_m0_0147a4_def
          (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  double dVar4;
  undefined4 in_fr3;
  double dVar5;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  undefined4 in_fr10;
  undefined8 in_xd0;
  char cVar6;
  char cVar7;
  undefined4 uStack_1c;
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar2 = ar4;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr5,in_fr3);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr6,in_fr5);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr4,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr5,in_fr4);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar5;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr7,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(in_fr8,in_fr7);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr6,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr7,in_fr6);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar5;
  }
  iVar1 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr9,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(in_fr10,in_fr9);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr8,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr9,in_fr8);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar5 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar5;
  }
  iVar2 = rand(iVar2,ar5,ar6,ar7);
  if (cVar7 == '\0') {
    dVar5 = (double)CONCAT44(in_fr11,SUB84(dVar5,0));
  }
  else {
    dVar5 = (double)CONCAT44(uStack_1c,in_fr11);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar4 = 1.6066918754608114e+73;
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * fVar3,SUB84(dVar5,0));
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar5 = dVar5 * (dVar4 / dVar4);
  }
  if (cVar7 == '\0') {
    dVar4 = (double)CONCAT44(in_fr10,fVar3);
  }
  else {
    dVar4 = (double)CONCAT44(in_fr11,in_fr10);
  }
  if (cVar6 == '\0') {
    dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) + (float)((ulonglong)dVar4 >> 0x20),
                             SUB84(dVar5,0));
  }
  else {
    dVar5 = dVar5 + dVar4;
  }
  if (cVar7 == '\0') {
    *(int *)(ar4 + 0x24) = (int)((ulonglong)dVar5 >> 0x20);
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x18));
  }
  else {
    *(double *)(ar4 + 0x24) = dVar5;
    in_xd0 = *(undefined8 *)(ar4 + 0x18);
    dVar5 = *(double *)(ar4 + 0x24);
  }
  if (cVar6 == '\0') {
    fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar7 == '\0') {
    *(float *)(ar4 + 0x18) = fVar3;
  }
  else {
    *(undefined8 *)(ar4 + 0x18) = in_xd0;
  }
  if (cVar7 == '\0') {
    *(undefined4 *)(ar4 + 0x14) = s0;
  }
  else {
    *(undefined8 *)(ar4 + 0x14) = CONCAT44(s4,s0);
  }
  return 0x3c;
}

__asm__(".globl _Class_129808_m0_0147a4\n.set _Class_129808_m0_0147a4, _Class_129808_m0_0147a4_def\n");
//@unit 8c014894
#include "../decls.h"
undefined4 Class_129808_m1_014894_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int *ar5_00;
  float in_fr1;
  float fVar2;
  float in_fr4;
  float in_PR;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  ar5_00 = ar4 + 5;
  FUN_8c023aa0(ar4 + 1,ar5_00,ar6,ar7);
  if (cVar4 == '\0') {
    in_fr1 = (float)ar4[2];
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  if (cVar4 == '\0') {
    fVar2 = in_fr1;
    in_PR = in_fr4;
  }
  if (cVar3 == '\0' && fVar2 < in_PR) {
    uVar1 = (**(code **)(*ar4 + 0x14))(ar4,ar5_00,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _Class_129808_m1_014894\n.set _Class_129808_m1_014894, _Class_129808_m1_014894_def\n");
//@unit 8c0148d8
#include "../decls.h"
undefined4 Class_129808_m2_0148d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *ar5_00;
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  ar5_00 = &uStack_20;
  uStack_20 = *(undefined4 *)(ar4 + 4);
  uStack_1c = *(undefined4 *)(ar4 + 8);
  uStack_18 = *(undefined4 *)(ar4 + 0xc);
  fStack_14 = *(float *)(ar4 + 4) - *(float *)(ar4 + 0x14) * 3.0;
  fStack_10 = *(float *)(ar4 + 8) - *(float *)(ar4 + 0x18) * 3.0;
  fStack_c = *(float *)(ar4 + 0xc) - *(float *)(ar4 + 0x1c) * 3.0;
  uVar1 = 2;
  ar6_00 = &DAT_8c27882c;
  FUN_8c016464(*(undefined4 *)(ar4 + 0x28),&uStack_20,&DAT_8c27882c,2);
  uVar1 = FUN_8c016504(*(undefined4 *)(ar4 + 0x28),ar5_00,ar6_00,uVar1);
  return uVar1;
}

__asm__(".globl _Class_129808_m2_0148d8\n.set _Class_129808_m2_0148d8, _Class_129808_m2_0148d8_def\n");
//@unit 8c014978
#include "../decls.h"
undefined4 Class_129808_m3_014978_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x24) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0x14) = 0;
  *(undefined4 *)(ar4 + 0x18) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  uVar1 = FUN_8c0149d4(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m3_014978\n.set _Class_129808_m3_014978, _Class_129808_m3_014978_def\n");
//@unit 8c0149d4
#include "../decls.h"
undefined4 FUN_8c0149d4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0149d4\n.set _FUN_8c0149d4, _FUN_8c0149d4_def\n");
//@unit 8c0149dc
#include "../decls.h"
undefined4 FUN_8c0149dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)0x8c27882c = ar5;
  ((undefined1 *)1)[0x8c27882c] = ar6;
  uVar1 = FUN_8c014764(*(undefined4 *)(ar4 + 0x28),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0149dc\n.set _FUN_8c0149dc, _FUN_8c0149dc_def\n");
//@unit 8c014a0c
#include "../decls.h"
uint FUN_8c014a0c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 0x20;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c014a0c\n.set _FUN_8c014a0c, _FUN_8c014a0c_def\n");
//@unit 8c014a20
#include "../decls.h"
uint FUN_8c014a20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = *(uint *)(ar4 + 0x28) | 0x10;
  *(uint *)(ar4 + 0x28) = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c014a20\n.set _FUN_8c014a20, _FUN_8c014a20_def\n");
//@unit 8c014a34
#include "../decls.h"
int object_dtor_delete_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _object_dtor_delete\n.set _object_dtor_delete, _object_dtor_delete_def\n");
//@unit 8c014a64
#include "../decls.h"
undefined4 FUN_8c014a64_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(uint *)(ar4 + 0x14) = *(uint *)(ar4 + 0x14) | 0x80000000;
  uVar1 = FUN_8c014790(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014a64\n.set _FUN_8c014a64, _FUN_8c014a64_def\n");
//@unit 8c014a94
#include "../decls.h"
undefined4 FUN_8c014a94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25b434(ar5,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014a94\n.set _FUN_8c014a94, _FUN_8c014a94_def\n");
//@unit 8c014ab0
#include "../decls.h"
undefined4 * FUN_8c014ab0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 ar5_00;
  int iVar2;
  uint uVar3;
  undefined8 in_dr0;
  undefined8 uVar4;
  uint in_PR;
  char cVar5;
  uint uStack_10;
  uint uStack_c;
  
  cVar5 = '\0';
  *ar4 = 0x8c1297f4;
  Vec3_ctor_zero(ar4 + 0x15,ar5,ar6,ar7);
  ar4[0x1f] = 0;
  ar4[0x20] = 0xffffffff;
  ar4[0x21] = FUN_8c014f74;
  ar4[0x22] = 0;
  ar4[0x23] = 0xffffffff;
  ar4[0x24] = FUN_8c014fd0;
  ar4[0x25] = 0;
  ar4[0x26] = 0xffffffff;
  ar4[0x27] = FUN_8c015054;
  ar4[0x28] = 0;
  ar4[0x29] = 0xffffffff;
  ar4[0x2a] = FUN_8c015098;
  uStack_c = in_PR;
  for (iVar2 = 0; uVar3 = (uint)in_dr0, iVar2 < 5; iVar2 = iVar2 + 1) {
    if (cVar5 == '\0') {
      uStack_10 = 0;
    }
    else {
      uStack_c = 0;
      uStack_10 = uVar3;
    }
    uVar1 = uStack_10;
    if (cVar5 == '\0') {
      ar4[iVar2 * 3 + 3] = uStack_10;
    }
    else {
      *(ulonglong *)(ar4 + iVar2 * 3 + 3) = CONCAT44(uStack_c,uStack_10);
      uStack_10 = uStack_c;
      uVar3 = uVar1;
    }
    if (cVar5 == '\0') {
      uVar4 = CONCAT44(uVar1,uVar3);
      ar4[iVar2 * 3 + 2] = uVar1;
    }
    else {
      uVar4 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 2) = uVar4;
    }
    if (cVar5 == '\0') {
      in_dr0 = CONCAT44(uVar1,(int)uVar4);
      ar4[iVar2 * 3 + 1] = uVar1;
    }
    else {
      in_dr0 = CONCAT44(uStack_10,uVar1);
      *(undefined8 *)(ar4 + iVar2 * 3 + 1) = in_dr0;
    }
  }
  ar5_00 = 0xffffffff;
  FUN_8c014ef8(ar4,0xffffffff,ar6,ar7);
  ar4[0x1a] = 0;
  *(undefined1 *)(ar4 + 0x1e) = 1;
  if (cVar5 == '\0') {
    ar4[0x1d] = 0;
    ar4[0x1c] = 0x3ca3d70a;
  }
  else {
    *(ulonglong *)(ar4 + 0x1d) = (ulonglong)uVar3;
    *(undefined8 *)(ar4 + 0x1c) = 0x8c014d903ca3d70a;
  }
  FUN_8c014d90(ar4,ar5_00,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c014ab0\n.set _FUN_8c014ab0, _FUN_8c014ab0_def\n");
//@unit 8c014be4
#include "../decls.h"
undefined4 FUN_8c014be4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  double dVar5;
  undefined4 in_fr3;
  double dVar6;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  char cVar7;
  char cVar8;
  undefined4 uStack_20;
  
  cVar8 = '\0';
  cVar7 = '\0';
  iVar2 = ar4;
  uVar3 = ar5;
  iVar1 = rand(ar4,ar5,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr5,in_fr3);
  }
  else {
    dVar6 = (double)CONCAT44(in_fr6,in_fr5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr4,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr5,in_fr4);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 4) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 4) = dVar6;
  }
  iVar1 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr7,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(in_fr8,in_fr7);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar1);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr6,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr7,in_fr6);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 8) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 8) = dVar6;
  }
  iVar2 = rand(iVar2,uVar3,ar6,ar7);
  if (cVar8 == '\0') {
    dVar6 = (double)CONCAT44(in_fr9,SUB84(dVar6,0));
  }
  else {
    dVar6 = (double)CONCAT44(uStack_20,in_fr9);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47000000,(float)iVar2);
  }
  else {
    dVar5 = -7.554616947321253e-251;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) * fVar4,SUB84(dVar6,0));
  }
  else {
    fVar4 = SUB84(dVar5 / dVar5,0);
    dVar6 = dVar6 * (dVar5 / dVar5);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(in_fr8,fVar4);
  }
  else {
    dVar5 = (double)CONCAT44(in_fr9,in_fr8);
  }
  if (cVar7 == '\0') {
    dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) + (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar6,0));
  }
  else {
    dVar6 = dVar6 + dVar5;
  }
  if (cVar8 == '\0') {
    *(int *)(ar4 + 0xc) = (int)((ulonglong)dVar6 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0xc) = dVar6;
  }
  *(undefined4 *)(ar4 + 0x40) = ar5;
  for (iVar2 = 1; iVar2 < 5; iVar2 = iVar2 + 1) {
    iVar1 = iVar2 * 0xc + ar4;
    uVar3 = *(undefined4 *)(ar4 + 8);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(ar4 + 4);
    *(undefined4 *)(iVar1 + 8) = uVar3;
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(ar4 + 0xc);
  }
  uVar3 = FUN_8c014ef8(ar4,ar5,ar6,ar7);
  return uVar3;
}

__asm__(".globl _FUN_8c014be4\n.set _FUN_8c014be4, _FUN_8c014be4_def\n");
//@unit 8c014cd4
#include "../decls.h"
undefined4 FUN_8c014cd4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c014d90(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014cd4\n.set _FUN_8c014cd4, _FUN_8c014cd4_def\n");
//@unit 8c014cf0
#include "../decls.h"
undefined4 Class_1297f4_m0_014cf0_def(float ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr1;
  float fVar2;
  float fVar3;
  float in_fr4;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  pure_virtual_stub(ar4,ar5,ar6,ar7);
  *(short *)((int)ar4 + 0x6c) = *(short *)((int)ar4 + 0x6c) + 1;
  if (cVar5 == '\0') {
    in_fr1 = *(float *)((int)ar4 + 8);
  }
  uVar1 = 0;
  fVar2 = in_fr4;
  fVar3 = ar4;
  if (cVar5 == '\0') {
    fVar2 = in_fr1;
    fVar3 = in_fr4;
  }
  if (cVar4 == '\0' && fVar2 < fVar3) {
    uVar1 = FUN_8c014d90(ar4,ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _Class_1297f4_m0_014cf0\n.set _Class_1297f4_m0_014cf0, _Class_1297f4_m0_014cf0_def\n");
//@unit 8c014d54
#include "../decls.h"
undefined4 FUN_8c014d54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014d54\n.set _FUN_8c014d54, _FUN_8c014d54_def\n");
//@unit 8c014d90
#include "../decls.h"
undefined4 FUN_8c014d90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 5; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar4 + 0xc) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 8) = 0;
    *(undefined4 *)(iVar1 * 0xc + ar4 + 4) = 0;
  }
  *(undefined4 *)(ar4 + 100) = 0;
  vec3_clear(ar4 + 0x54,ar5,ar6,ar7);
  *(undefined2 *)(ar4 + 0x6c) = 0;
  return 0x6c;
}

__asm__(".globl _FUN_8c014d90\n.set _FUN_8c014d90, _FUN_8c014d90_def\n");
//@unit 8c014e20
#include "../decls.h"
undefined4 * vec3_clear_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  return ar4 + 1;
}

__asm__(".globl _vec3_clear\n.set _vec3_clear, _vec3_clear_def\n");
//@unit 8c014e38
#include "../decls.h"
undefined4 FUN_8c014e38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *(float *)(ar4 + 0x54) = *(float *)(ar4 + 0x54) + in_fr4;
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) + in_fr5;
  *(float *)(ar4 + 0x5c) = *(float *)(ar4 + 0x5c) + in_fr6;
  uVar1 = FUN_8c014ea0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c014e38\n.set _FUN_8c014e38, _FUN_8c014e38_def\n");
//@unit 8c014ea0
#include "../decls.h"
undefined4 FUN_8c014ea0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 100) = 1;
  return 100;
}

__asm__(".globl _FUN_8c014ea0\n.set _FUN_8c014ea0, _FUN_8c014ea0_def\n");
//@unit 8c014eac
#include "../decls.h"
undefined4 FUN_8c014eac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_18 [20];
  
  Vec3_ctor_xyz(auStack_18,ar5,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_18,ar6,ar7);
  Vec3_dtor(auStack_18,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c014eac\n.set _FUN_8c014eac, _FUN_8c014eac_def\n");
//@unit 8c014ef8
#include "../decls.h"
undefined4 FUN_8c014ef8_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 uStack_c;
  
  fVar3 = 1.0;
  if (*(int *)(ar4 + 0x68) == 1) {
    for (iVar2 = 0; uVar1 = 5, iVar2 < 5; iVar2 = iVar2 + 1) {
      fVar3 = fVar3 - 0.2;
      uStack_c = CONCAT13((char)(int)((float)(ar5 >> 0x18) * fVar3),(int3)ar5);
      *(undefined4 *)(ar4 + iVar2 * 4 + 0x40) = uStack_c;
    }
  }
  else {
    uVar1 = 0x40;
    *(uint *)(ar4 + 0x40) = ar5;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c014ef8\n.set _FUN_8c014ef8, _FUN_8c014ef8_def\n");
//@unit 8c014f74
#include "../decls.h"
float * FUN_8c014f74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(float *)(ar4 + 4) = *(float *)(ar4 + 4) + *(float *)(ar4 + 0x54);
  *(float *)(ar4 + 8) = *(float *)(ar4 + 8) + *(float *)(ar4 + 0x58);
  *(float *)(ar4 + 0xc) = *(float *)(ar4 + 0xc) + *(float *)(ar4 + 0x5c);
  *(float *)(ar4 + 0x58) = *(float *)(ar4 + 0x58) - *(float *)(ar4 + 0x70);
  return (float *)(ar4 + 0x58);
}

__asm__(".globl _FUN_8c014f74\n.set _FUN_8c014f74, _FUN_8c014f74_def\n");
//@unit 8c014fd0
#include "../decls.h"
undefined4 FUN_8c014fd0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint ar5_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  ar5_00 = (uint)*(byte *)(ar4 + 0x78);
  iVar1 = (*(code *)(&libgcc_divide_helper_01031c))
                    ((uint)*(ushort *)(ar4 + 0x6c),ar5_00,ar6,ar7);
  if (iVar1 == 0) {
    for (iVar1 = 4; 0 < iVar1; iVar1 = iVar1 + -1) {
      iVar4 = iVar1 * 0xc + ar4;
      iVar3 = (iVar1 + -1) * 0xc + ar4;
      uVar2 = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(iVar3 + 4);
      *(undefined4 *)(iVar4 + 8) = uVar2;
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    }
  }
  uVar2 = FUN_8c014f74(ar4,ar5_00,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c014fd0\n.set _FUN_8c014fd0, _FUN_8c014fd0_def\n");
//@unit 8c015054
#include "../decls.h"
undefined4 FUN_8c015054_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)((&DATA_8c12c52c) + 8);
  uStack_c = *(undefined4 *)((&DATA_8c12c52c) + 0xc);
  iStack_18 = ar4 + 4;
  iStack_14 = ar4 + 0x40;
  uVar1 = FUN_8c234fd0(&iStack_18,1,0x40,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015054\n.set _FUN_8c015054, _FUN_8c015054_def\n");
//@unit 8c015098
#include "../decls.h"
undefined4 FUN_8c015098_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_10 = *(undefined4 *)((&DATA_8c12c53c) + 8);
  uStack_c = *(undefined4 *)((&DATA_8c12c53c) + 0xc);
  iStack_18 = ar4 + 4;
  iStack_14 = ar4 + 0x40;
  uVar1 = FUN_8c234d68(&iStack_18,4,0x42,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015098\n.set _FUN_8c015098, _FUN_8c015098_def\n");
//@unit 8c0150dc
#include "../decls.h"
undefined4 noop_0150dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_0150dc\n.set _noop_0150dc, _noop_0150dc_def\n");
//@unit 8c0150e0
#include "../decls.h"
undefined4 FUN_8c0150e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125888),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787b8;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787b8,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125898),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787c4;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787c4,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258a8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787d0;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787d0,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258b8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c2787dc;
  global_list_push(uVar1,(&Vec3_dtor),0x8c2787dc,ar7);
  uVar2 = FUN_8c016410(0x8c2787e8,puVar3,uVar2,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c0150e0\n.set _FUN_8c0150e0, _FUN_8c0150e0_def\n");
//@unit 8c015198
#include "../decls.h"
undefined4 FUN_8c015198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x10) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015198\n.set _FUN_8c015198, _FUN_8c015198_def\n");
//@unit 8c0151a0
#include "../decls.h"
int free_if_nonnull_wrap_0151a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0151a0\n.set _free_if_nonnull_wrap_0151a0, _free_if_nonnull_wrap_0151a0_def\n");
//@unit 8c0151d0
#include "../decls.h"
undefined4 thunk_FUN_8c0151e8_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  while( true ) {
    if (*ar4 == 0xff) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}

__asm__(".globl _thunk_FUN_8c0151e8\n.set _thunk_FUN_8c0151e8, _thunk_FUN_8c0151e8_def\n");
//@unit 8c0151e8
#include "../decls.h"
undefined4 FUN_8c0151e8_def(short *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  while( true ) {
    if (*ar4 == 0xff) {
      return 0;
    }
    if ((char)*ar4 == (char)ar5) break;
    ar4 = ar4 + 1;
  }
  return ar4;
}

__asm__(".globl _FUN_8c0151e8\n.set _FUN_8c0151e8, _FUN_8c0151e8_def\n");
//@unit 8c0151fc
#include "../decls.h"
undefined4 FUN_8c0151fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = thunk_FUN_8c0151e8(ar4,0x17,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0151fc\n.set _FUN_8c0151fc, _FUN_8c0151fc_def\n");
//@unit 8c015224
#include "../decls.h"
undefined4 * FUN_8c015224_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c129920);
  FUN_8c0153b0(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015224\n.set _FUN_8c015224, _FUN_8c015224_def\n");
//@unit 8c015248
#include "../decls.h"
undefined4 Class_129920_m0_015248_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}

__asm__(".globl _Class_129920_m0_015248\n.set _Class_129920_m0_015248, _Class_129920_m0_015248_def\n");
//@unit 8c015250
#include "../decls.h"
undefined4 s_Failed_to_set_texture_s_015252_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [260];
  
  iVar1 = FUN_8c25b3ec(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)(&FUN_8c014334))
              (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x2a);
    (*(code *)(&report_error_message))
              (auStack_108,(&DATA_8c12c550) + 0x45,1,2);
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_8c2377e4(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
    if (iVar1 == -1) {
      (*(code *)(&FUN_8c014334))
                (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x5f);
      (*(code *)(&report_error_message))
                (auStack_108,(&DATA_8c12c550) + 0x45,1,2);
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _s_Failed_to_set_texture_s_015252\n.set _s_Failed_to_set_texture_s_015252, _s_Failed_to_set_texture_s_015252_def\n");
//@unit 8c015310
#include "../decls.h"
uint s_Failed_s_015312_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined1 auStack_108 [260];
  
  iVar1 = FUN_8c256670(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  if (iVar1 == -1) {
    (*(code *)(&FUN_8c014334))
              (auStack_108,ar5,ar6,ar7,(&DATA_8c12c550) + 0x7e);
    (*(code *)(&report_error_message))
              (auStack_108,(&DATA_8c12c550) + 0x8a,1,2);
  }
  return (uint)(iVar1 == -1);
}

__asm__(".globl _s_Failed_s_015312\n.set _s_Failed_s_015312, _s_Failed_s_015312_def\n");
//@unit 8c01538c
#include "../decls.h"
undefined4 FUN_8c01538c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25b3ec(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01538c\n.set _FUN_8c01538c, _FUN_8c01538c_def\n");
//@unit 8c0153b0
#include "../decls.h"
undefined4 FUN_8c0153b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  return 0;
}

__asm__(".globl _FUN_8c0153b0\n.set _FUN_8c0153b0, _FUN_8c0153b0_def\n");
//@unit 8c0153b8
#include "../decls.h"
undefined4 * FUN_8c0153b8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015224(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129908);
  ar4[1] = ar4 + 2;
  return ar4;
}

__asm__(".globl _FUN_8c0153b8\n.set _FUN_8c0153b8, _FUN_8c0153b8_def\n");
//@unit 8c0153e4
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_0153e4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c129920, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0153e4\n.set _free_if_nonnull_wrap_0153e4, _free_if_nonnull_wrap_0153e4_def\n");
//@unit 8c01541c
#include "../decls.h"
int FUN_8c01541c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  **(undefined4 **)(ar4 + 4) = ar5;
  iVar1 = *(int *)(ar4 + 4);
  *(undefined4 *)(iVar1 + 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c01541c\n.set _FUN_8c01541c, _FUN_8c01541c_def\n");
//@unit 8c015428
#include "../decls.h"
undefined4 * FUN_8c015428_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129908;
    ar5_00 = 0;
    free_if_nonnull_wrap_0153e4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c015428\n.set _FUN_8c015428, _FUN_8c015428_def\n");
//@unit 8c015470
#include "../decls.h"
undefined4 FUN_8c015470_def(int ar4,undefined4 ar5,uint ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  undefined4 uVar1;
  
  FUN_8c257188(ar4 + 0x10,ar5,ar6 | 0x900,ar7,s0,ar5);
  uVar1 = FUN_8c257196(ar4 + 0x3c,ar4 + 0x10,s4,0x40800000,ar5);
  return uVar1;
}

__asm__(".globl _FUN_8c015470\n.set _FUN_8c015470, _FUN_8c015470_def\n");
//@unit 8c0154c4
#include "../decls.h"
undefined4 FUN_8c0154c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c25b044(0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0154c4\n.set _FUN_8c0154c4, _FUN_8c0154c4_def\n");
//@unit 8c0154ec
#include "../decls.h"
undefined4 FUN_8c0154ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015518(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0154ec\n.set _FUN_8c0154ec, _FUN_8c0154ec_def\n");
//@unit 8c015508
#include "../decls.h"
undefined4 FUN_8c015508_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015508\n.set _FUN_8c015508, _FUN_8c015508_def\n");
//@unit 8c015510
#include "../decls.h"
undefined4 FUN_8c015510_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c015510\n.set _FUN_8c015510, _FUN_8c015510_def\n");
//@unit 8c015518
#include "../decls.h"
undefined4 FUN_8c015518_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c015518\n.set _FUN_8c015518, _FUN_8c015518_def\n");
//@unit 8c015520
#include "../decls.h"
int * FUN_8c015520_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (int)(&DATA_8c1298b8);
  (**(code **)(*ar4 + 0xc))(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015520\n.set _FUN_8c015520, _FUN_8c015520_def\n");
//@unit 8c015544
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_015544_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c1298b8, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_015544\n.set _free_if_nonnull_wrap_015544, _free_if_nonnull_wrap_015544_def\n");
//@unit 8c01557c
#include "../decls.h"
undefined4 Class_1298b8_m1_01557c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  return 0;
}

__asm__(".globl _Class_1298b8_m1_01557c\n.set _Class_1298b8_m1_01557c, _Class_1298b8_m1_01557c_def\n");
//@unit 8c015588
#include "../decls.h"
undefined4 Class_1298b8_m2_015588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m2_015588\n.set _Class_1298b8_m2_015588, _Class_1298b8_m2_015588_def\n");
//@unit 8c0155e8
#include "../decls.h"
undefined4 Class_1298b8_m3_0155e8_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6_00,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
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
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
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
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
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
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m3_0155e8\n.set _Class_1298b8_m3_0155e8, _Class_1298b8_m3_0155e8_def\n");
//@unit 8c0156a0
#include "../decls.h"
undefined4 Class_1298b8_m4_0156a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m4_0156a0\n.set _Class_1298b8_m4_0156a0, _Class_1298b8_m4_0156a0_def\n");
//@unit 8c015720
#include "../decls.h"
undefined4 Class_1298b8_m5_015720_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6_00,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
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
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
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
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
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
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c256fec(0,ar5_00,ar6_01,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m5_015720\n.set _Class_1298b8_m5_015720, _Class_1298b8_m5_015720_def\n");
//@unit 8c0157f8
#include "../decls.h"
undefined4 Class_1298b8_m6_0157f8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5_00,ar6,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[2]);
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
    dVar3 = (double)CONCAT44(0x47800000,ar5[1]);
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
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar5);
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
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_01,ar6_00,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_01,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m6_0157f8\n.set _Class_1298b8_m6_0157f8, _Class_1298b8_m6_0157f8_def\n");
//@unit 8c015890
#include "../decls.h"
undefined4 Class_1298b8_m7_015890_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar5_00;
  float fVar2;
  double dVar3;
  undefined4 in_PR;
  int ar7_00;
  int ar6_00;
  int ar5_01;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5_00,ar6,ar7,in_PR);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar5[2]);
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
    dVar3 = (double)CONCAT44(0x47800000,ar5[1]);
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
    ar6_00 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar3 / dVar3);
  }
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,*ar5);
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
    ar5_01 = (int)(SUB84(dVar3,0) / (float)((ulonglong)dVar3 >> 0x20));
  }
  else {
    ar5_01 = (int)(dVar3 / dVar3);
  }
  FUN_8c256b0c(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c256fec(0,ar5_01,ar6_00,ar7_00,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_01,ar6_00,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_01,ar6_00,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m7_015890\n.set _Class_1298b8_m7_015890, _Class_1298b8_m7_015890_def\n");
//@unit 8c015948
#include "../decls.h"
undefined4 Class_1298b8_m8_015948_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m8_015948\n.set _Class_1298b8_m8_015948, _Class_1298b8_m8_015948_def\n");
//@unit 8c0159a8
#include "../decls.h"
undefined4 Class_1298b8_m9_0159a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  uVar1 = FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m9_0159a8\n.set _Class_1298b8_m9_0159a8, _Class_1298b8_m9_0159a8_def\n");
//@unit 8c0159d0
#include "../decls.h"
undefined4 Class_1298b8_m10_0159d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m10_0159d0\n.set _Class_1298b8_m10_0159d0, _Class_1298b8_m10_0159d0_def\n");
//@unit 8c0159ec
#include "../decls.h"
undefined4 Class_1298b8_m11_0159ec_def(int ar4,undefined4 ar5,undefined4 *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar6_00;
  float fVar2;
  double dVar3;
  int ar7_00;
  int ar6_01;
  int ar5_00;
  char cVar4;
  char cVar5;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  FUN_8c256328(0,ar5,ar6,ar7,ar4);
  FUN_8c25b5d0(0,ar5,ar6_00,ar7,ar4);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(0x47800000,ar6[2]);
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
    dVar3 = (double)CONCAT44(0x47800000,ar6[1]);
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
    dVar3 = (double)CONCAT44(0x47800000,*ar6);
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
  FUN_8c256b0c(0,ar5_00,ar6_01,ar7_00,ar4);
  FUN_8c256fec(0,ar5_00,ar6_01,ar7_00,ar4);
  FUN_8c254042(*(undefined4 *)(ar4 + 4),ar5_00,ar6_01,ar7_00);
  uVar1 = FUN_8c256210(1,ar5_00,ar6_01,ar7_00);
  return uVar1;
}

__asm__(".globl _Class_1298b8_m11_0159ec\n.set _Class_1298b8_m11_0159ec, _Class_1298b8_m11_0159ec_def\n");
//@unit 8c015ab8
#include "../decls.h"
undefined4 FUN_8c015ab8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015b8c(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015ab8\n.set _FUN_8c015ab8, _FUN_8c015ab8_def\n");
//@unit 8c015ad4
#include "../decls.h"
undefined4 FUN_8c015ad4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015ad4\n.set _FUN_8c015ad4, _FUN_8c015ad4_def\n");
//@unit 8c015adc
#include "../decls.h"
undefined4 FUN_8c015adc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c219a9a(*ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015adc\n.set _FUN_8c015adc, _FUN_8c015adc_def\n");
//@unit 8c015af8
#include "../decls.h"
undefined4 FUN_8c015af8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2187ce(*ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015af8\n.set _FUN_8c015af8, _FUN_8c015af8_def\n");
//@unit 8c015b14
#include "../decls.h"
undefined4 FUN_8c015b14_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c21a80e(*ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015b14\n.set _FUN_8c015b14, _FUN_8c015b14_def\n");
//@unit 8c015b30
#include "../decls.h"
undefined4 FUN_8c015b30_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c218f96(*ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015b30\n.set _FUN_8c015b30, _FUN_8c015b30_def\n");
//@unit 8c015b4c
#include "../decls.h"
undefined4 deref_u32_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _deref_u32\n.set _deref_u32, _deref_u32_def\n");
//@unit 8c015b54
#include "../decls.h"
undefined4 FUN_8c015b54_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = deref_u32(ar5,ar5,ar6,ar7);
  uVar1 = FUN_8c21ba62(*ar4,uVar1,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c015b54\n.set _FUN_8c015b54, _FUN_8c015b54_def\n");
//@unit 8c015b8c
#include "../decls.h"
undefined4 FUN_8c015b8c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c015b8c\n.set _FUN_8c015b8c, _FUN_8c015b8c_def\n");
//@unit 8c015b94
#include "../decls.h"
undefined4 FUN_8c015b94_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015bc0(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015b94\n.set _FUN_8c015b94, _FUN_8c015b94_def\n");
//@unit 8c015bb0
#include "../decls.h"
undefined4 FUN_8c015bb0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015bb0\n.set _FUN_8c015bb0, _FUN_8c015bb0_def\n");
//@unit 8c015bb8
#include "../decls.h"
undefined4 FUN_8c015bb8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *ar4;
}

__asm__(".globl _FUN_8c015bb8\n.set _FUN_8c015bb8, _FUN_8c015bb8_def\n");
//@unit 8c015bc0
#include "../decls.h"
undefined4 FUN_8c015bc0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c015bc0\n.set _FUN_8c015bc0, _FUN_8c015bc0_def\n");
//@unit 8c015bc8
#include "../decls.h"
undefined4 FUN_8c015bc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015bec(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015bc8\n.set _FUN_8c015bc8, _FUN_8c015bc8_def\n");
//@unit 8c015be4
#include "../decls.h"
undefined4 FUN_8c015be4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015be4\n.set _FUN_8c015be4, _FUN_8c015be4_def\n");
//@unit 8c015bec
#include "../decls.h"
undefined4 FUN_8c015bec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  return 0;
}

__asm__(".globl _FUN_8c015bec\n.set _FUN_8c015bec, _FUN_8c015bec_def\n");
//@unit 8c015bf4
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_015bf4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c1298ac, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_015bf4\n.set _free_if_nonnull_wrap_015bf4, _free_if_nonnull_wrap_015bf4_def\n");
//@unit 8c015c2c
#include "../decls.h"
undefined4 * FUN_8c015c2c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c12988c);
  FUN_8c015dc0(ar4,0,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015c2c\n.set _FUN_8c015c2c, _FUN_8c015c2c_def\n");
//@unit 8c015c58
#include "../decls.h"
undefined4 * FUN_8c015c58_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c12988c);
  FUN_8c015dc0(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c015c58\n.set _FUN_8c015c58, _FUN_8c015c58_def\n");
//@unit 8c015c94
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_015c94_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c12988c, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_015c94\n.set _free_if_nonnull_wrap_015c94, _free_if_nonnull_wrap_015c94_def\n");
//@unit 8c015ccc
#include "../decls.h"
undefined4 FUN_8c015ccc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x1c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015ccc\n.set _FUN_8c015ccc, _FUN_8c015ccc_def\n");
//@unit 8c015cd4
#include "../decls.h"
undefined4 FUN_8c015cd4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x20) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c015cd4\n.set _FUN_8c015cd4, _FUN_8c015cd4_def\n");
//@unit 8c015cdc
#include "../decls.h"
undefined4 s_Can_t_Find_File_s_015ce0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_10c [260];
  
  uVar2 = 0;
  while( true ) {
    if (*(uint *)(*(int *)(ar4 + 0x1c) + 4) <= uVar2) {
      return 1;
    }
    iVar1 = FUN_8c25b3a2(*(undefined4 *)(ar4 + 0x1c),ar5,ar6,ar7);
    if (iVar1 == -1) break;
    uVar2 = uVar2 + 1;
  }
  (*(code *)(&FUN_8c014334))
            (auStack_10c,ar5,ar6,ar7,(&DATA_8c12c550) + 0x115);
  (*(code *)(&report_error_message))
            (auStack_10c,(&DATA_8c12c550) + 0x12a,1,2);
  return 0;
}

__asm__(".globl _s_Can_t_Find_File_s_015ce0\n.set _s_Can_t_Find_File_s_015ce0, _s_Can_t_Find_File_s_015ce0_def\n");
//@unit 8c015d74
#include "../decls.h"
undefined4 FUN_8c015d74_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  *(int *)(ar4 + 4) = (int)((ulonglong)in_dr4 >> 0x20);
  *(int *)(ar4 + 8) = (int)in_dr4;
  uVar1 = FUN_8c25748c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015d74\n.set _FUN_8c015d74, _FUN_8c015d74_def\n");
//@unit 8c015dc0
#include "../decls.h"
undefined4 FUN_8c015dc0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 4) = 0;
  *(undefined4 *)(ar4 + 8) = 0;
  *(undefined4 *)(ar4 + 0xc) = 0;
  *(undefined4 *)(ar4 + 0x18) = ar5;
  *(undefined4 *)(ar4 + 0x10) = in_fr4;
  *(undefined4 *)(ar4 + 0x14) = in_fr5;
  *(undefined4 *)(ar4 + 0x1c) = 0;
  *(undefined4 *)(ar4 + 0x20) = 0;
  *(undefined4 *)(ar4 + 0x24) = 0;
  *(undefined4 *)(ar4 + 0x28) = 1;
  return 1;
}

__asm__(".globl _FUN_8c015dc0\n.set _FUN_8c015dc0, _FUN_8c015dc0_def\n");
//@unit 8c015dfc
#include "../decls.h"
undefined4 s_Err_wrap_015dfc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = s_Error_015f22(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _s_Err_wrap_015dfc\n.set _s_Err_wrap_015dfc, _s_Err_wrap_015dfc_def\n");
//@unit 8c015e18
#include "../decls.h"
undefined4 FUN_8c015e18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x1c),ar5,ar6,ar7);
  uVar1 = FUN_8c25b044(0,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c015e18\n.set _FUN_8c015e18, _FUN_8c015e18_def\n");
//@unit 8c015e40
#include "../decls.h"
undefined4 FUN_8c015e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_64 = 0x42c80000;
  uStack_60 = 0x42c80000;
  uStack_5c = 0x3f000000;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0xffffffff;
  uStack_4c = 0x42c80000;
  uStack_48 = 0x43960000;
  uStack_44 = 0x3f000000;
  uStack_40 = 0;
  uStack_3c = 0x3f800000;
  uStack_38 = 0xffffffff;
  uStack_34 = 0x43960000;
  uStack_30 = 0x42c80000;
  uStack_2c = 0x3f000000;
  uStack_28 = 0x3f800000;
  uStack_24 = 0;
  uStack_20 = 0xffffffff;
  uStack_1c = 0x43960000;
  uStack_18 = 0x43960000;
  uStack_14 = 0x3f000000;
  uStack_10 = 0x3f800000;
  uStack_c = 0x3f800000;
  uStack_8 = 0xffffffff;
  uVar1 = FUN_8c234bc0(&uStack_64,4,10000,0);
  return uVar1;
}

__asm__(".globl _FUN_8c015e40\n.set _FUN_8c015e40, _FUN_8c015e40_def\n");
//@unit 8c015f18
#include "../decls.h"
undefined4 s_Error_015f22_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffffdc;
  
  sVar1 = **(short **)(ar4 + 0x20);
  sVar2 = *(short *)(*(int *)(ar4 + 0x20) + 2);
  uVar3 = malloc_thunk(0x2000,ar5,ar6,ar7);
  FUN_8c257188(ar4 + 0x2c,uVar3,0xb01,(int)sVar1,(int)sVar2,in_stack_ffffffdc);
  ar7_00 = 0x40800000;
  ar6_00 = 10000;
  ar5_00 = ar4 + 0x2c;
  FUN_8c257196(**(undefined4 **)(ar4 + 0x1c),ar5_00,10000,0x40800000,in_stack_ffffffdc);
  iVar4 = FUN_8c25b3a2(*(undefined4 *)(ar4 + 0x1c),ar5_00,ar6_00,ar7_00);
  if (iVar4 == -1) {
    ar7_00 = 0xd;
    ar6_00 = 0;
    ar5_00 = 0;
    noop_102824("Error",0,0,0xd,0xffffffff);
  }
  FUN_8c25b100((int)**(short **)(ar4 + 0x20),ar5_00,ar6_00,ar7_00);
  uVar3 = FUN_8c1fb57c(uVar3,ar5_00,ar6_00,ar7_00);
  return uVar3;
}

__asm__(".globl _s_Error_015f22\n.set _s_Error_015f22, _s_Error_015f22_def\n");
//@unit 8c015ff0
#include "../decls.h"
undefined4 * FUN_8c015ff0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c015c2c(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12984c);
  return ar4;
}

__asm__(".globl _FUN_8c015ff0\n.set _FUN_8c015ff0, _FUN_8c015ff0_def\n");
//@unit 8c016014
#include "../decls.h"
undefined4 FUN_8c016014_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 4) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0xc) = in_fr6;
  uVar1 = FUN_8c25754c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016014\n.set _FUN_8c016014, _FUN_8c016014_def\n");
//@unit 8c016068
#include "../decls.h"
undefined4 FUN_8c016068_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 4) = in_fr4;
  *(undefined4 *)(ar4 + 8) = in_fr5;
  *(undefined4 *)(ar4 + 0xc) = in_fr6;
  *(undefined4 *)(ar4 + 0x24) = ar5;
  uVar1 = FUN_8c25754c(ar4 + 4,*(undefined4 *)(ar4 + 0x24),*(undefined4 *)(ar4 + 0x28),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016068\n.set _FUN_8c016068, _FUN_8c016068_def\n");
//@unit 8c0160c4
#include "../decls.h"
undefined4 s_C3DRenderPly_SetMem_0160d0_def(int ar4,int ar5,int ar6,short *ar7,undefined4 s0,int s4)

{
  int ar5_00;
  int ar5_01;
  undefined4 ar7_00;
  uint uVar1;
  undefined4 in_stack_ffffffb4;
  
  *(undefined4 *)(ar4 + 0x10) = 4;
  for (uVar1 = 0; uVar1 < *(uint *)(ar4 + 0x10); uVar1 = uVar1 + 1) {
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4)) = *(undefined4 *)(ar5 + uVar1 * 0x10);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 4) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 4);
    *(undefined4 *)(uVar1 * 0xc + *(int *)(ar4 + 4) + 8) = *(undefined4 *)(ar5 + uVar1 * 0x10 + 8);
    *(undefined4 *)(uVar1 * 4 + *(int *)(ar4 + 8)) = *(undefined4 *)(uVar1 * 4 + ar6);
  }
  *(undefined4 *)(ar4 + 0x90) = 1;
  **(undefined2 **)(ar4 + 0xc) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 2) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 4) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 6) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 8) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 10) = 0;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xc) = 0xff;
  *(undefined2 *)(*(int *)(ar4 + 0xc) + 0xe) = 0xff;
  ar5_00 = FUN_8c1fb4b8((int)*ar7 * (int)ar7[1] * s4,ar5,ar6,ar7);
  if (ar5_00 == 0) {
    report_error_message("Lack of memory!","C3DRenderPly::SetMem()",1,2);
  }
  FUN_8c257188(ar4 + 0xa0,ar5_00,0xb01,(int)*ar7,(int)ar7[1],in_stack_ffffffb4);
  ar7_00 = 0x40800000;
  ar5_01 = ar4 + 0xa0;
  FUN_8c257196(*(undefined4 *)(ar4 + 0x8c),ar5_01,s0,0x40800000,in_stack_ffffffb4);
  FUN_8c25b3a2(ar4 + 0x8c,ar5_01,s0,ar7_00);
  FUN_8c25b100((int)*ar7,ar5_01,s0,ar7_00);
  FUN_8c1fb586(ar5_00,ar5_01,s0,ar7_00);
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x80000000;
  *(uint *)(ar4 + 0xcc) = *(uint *)(ar4 + 0xcc) | 0x20;
  return 1;
}

__asm__(".globl _s_C3DRenderPly_SetMem_0160d0\n.set _s_C3DRenderPly_SetMem_0160d0, _s_C3DRenderPly_SetMem_0160d0_def\n");
//@unit 8c0162bc
#include "../decls.h"
undefined4 Class_129808_m10_0162bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c25b3ec(ar4 + 0x8c,ar5,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c235bfc))
                    (ar4 + 4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(0xcc + ar4),ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m10_0162bc\n.set _Class_129808_m10_0162bc, _Class_129808_m10_0162bc_def\n");
//@unit 8c0162f8
#include "../decls.h"
undefined4 * FUN_8c0162f8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ar4[4] = 0;
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  ar4[4] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0162f8\n.set _FUN_8c0162f8, _FUN_8c0162f8_def\n");
//@unit 8c016318
#include "../decls.h"
undefined4 FUN_8c016318_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = ar5;
  ar4[1] = ar6;
  ar4[3] = ar7;
  return in_r0;
}

__asm__(".globl _FUN_8c016318\n.set _FUN_8c016318, _FUN_8c016318_def\n");
//@unit 8c016324
#include "../decls.h"
uint FUN_8c016324_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  *(undefined4 *)(ar4 + 8) = ar5;
  uVar1 = 0x80000020;
  *(uint *)(ar4 + 0x10) = *(uint *)(ar4 + 0x10) | 0x80000020;
  return uVar1;
}

__asm__(".globl _FUN_8c016324\n.set _FUN_8c016324, _FUN_8c016324_def\n");
//@unit 8c016340
#include "../decls.h"
undefined4 FUN_8c016340_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c235b6c))
                    (ar4,*(undefined4 *)(ar4 + 0xc),*(undefined4 *)(ar4 + 0x10),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016340\n.set _FUN_8c016340, _FUN_8c016340_def\n");
//@unit 8c01636c
#include "../decls.h"
undefined4 FUN_8c01636c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 in_dr4;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  fStack_1c = (float)((ulonglong)in_dr4 >> 0x20);
  fStack_18 = (float)in_dr4;
  fStack_34 = *(float *)*ar4 + fStack_1c;
  fStack_30 = *(float *)(*ar4 + 4) + fStack_18;
  fStack_2c = *(float *)(*ar4 + 8) + fStack_1c;
  fStack_28 = *(float *)(*ar4 + 0xc) + fStack_18;
  fStack_24 = *(float *)(*ar4 + 0x10) + fStack_1c;
  fStack_20 = *(float *)(*ar4 + 0x14) + fStack_18;
  fStack_1c = *(float *)(*ar4 + 0x18) + fStack_1c;
  fStack_18 = *(float *)(*ar4 + 0x1c) + fStack_18;
  iVar2 = *ar4;
  *ar4 = (int)&fStack_34;
  uVar1 = FUN_8c235b6c(ar4,ar4[3],ar4[4],ar7);
  *ar4 = iVar2;
  return uVar1;
}

__asm__(".globl _FUN_8c01636c\n.set _FUN_8c01636c, _FUN_8c01636c_def\n");
//@unit 8c016410
#include "../decls.h"
undefined4 FUN_8c016410_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c016584(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c016410\n.set _FUN_8c016410, _FUN_8c016410_def\n");
//@unit 8c01642c
#include "../decls.h"
undefined4 FUN_8c01642c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c016584(ar4,ar5,ar6,ar7);
  FUN_8c016464(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c01642c\n.set _FUN_8c01642c, _FUN_8c01642c_def\n");
//@unit 8c016464
#include "../decls.h"
undefined4 FUN_8c016464_def(int *ar4,undefined4 *ar5,undefined4 *ar6,int ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  ar4[4] = ar7;
  if (ar4[4] == 1) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    uVar1 = *ar6;
    *(undefined4 *)(uint)ar4[1] = uVar1;
    return uVar1;
  }
  if (ar4[4] == 2) {
    puVar2 = (undefined4 *)*ar4;
    uVar1 = ar5[1];
    *puVar2 = *ar5;
    puVar2[1] = uVar1;
    puVar2[2] = ar5[2];
    iVar3 = *ar4;
    uVar1 = ar5[4];
    *(undefined4 *)(iVar3 + 0xc) = ar5[3];
    *(undefined4 *)(iVar3 + 0x10) = uVar1;
    *(undefined4 *)(iVar3 + 0x14) = ar5[5];
    *(undefined4 *)(uint)ar4[1] = *ar6;
    uVar1 = ar6[1];
    *(undefined4 *)(ar4[1] + 4) = uVar1;
    return uVar1;
  }
  *ar4 = (int)ar5;
  ar4[1] = (int)ar6;
  return ar4[4];
}

__asm__(".globl _FUN_8c016464\n.set _FUN_8c016464, _FUN_8c016464_def\n");
//@unit 8c0164c8
#include "../decls.h"
int FUN_8c0164c8_def(int ar4,undefined2 *ar5,int ar6,undefined4 ar7)

{
  short sVar1;
  undefined2 *puVar2;
  int iVar3;
  
  if (ar6 == 1) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    sVar1 = ar5[1];
    puVar2[1] = sVar1;
    return (int)sVar1;
  }
  if (ar6 == 2) {
    puVar2 = *(undefined2 **)(ar4 + 8);
    *puVar2 = *ar5;
    puVar2[1] = ar5[1];
    iVar3 = *(int *)(ar4 + 8);
    *(undefined2 *)(iVar3 + 4) = ar5[2];
    sVar1 = ar5[3];
    *(short *)(iVar3 + 6) = sVar1;
    return (int)sVar1;
  }
  *(undefined2 **)(ar4 + 8) = ar5;
  return ar6;
}

__asm__(".globl _FUN_8c0164c8\n.set _FUN_8c0164c8, _FUN_8c0164c8_def\n");
//@unit 8c016504
#include "../decls.h"
undefined4 FUN_8c016504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c234d68))
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016504\n.set _FUN_8c016504, _FUN_8c016504_def\n");
//@unit 8c016524
#include "../decls.h"
undefined4 FUN_8c016524_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)(&FUN_8c235bfc))
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016524\n.set _FUN_8c016524, _FUN_8c016524_def\n");
//@unit 8c016544
#include "../decls.h"
undefined4 FUN_8c016544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = ar5;
  FUN_8c25b3ec(*(undefined4 *)(ar4 + 0x40),ar5,ar6,ar7);
  FUN_8c25b434(ar5,uVar1,ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c235bfc))
                    (ar4,*(undefined4 *)(ar4 + 0x10),*(undefined4 *)(ar4 + 0x14),ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016544\n.set _FUN_8c016544, _FUN_8c016544_def\n");
//@unit 8c016584
#include "../decls.h"
undefined4 FUN_8c016584_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  ar4[8] = 0;
  ar4[7] = 0;
  ar4[6] = 0;
  ar4[0xb] = 0;
  ar4[9] = 0;
  ar4[10] = 0x42c80000;
  ar4[0xd] = -1;
  ar4[0xc] = -1;
  *(undefined2 *)((int)ar4 + 0x3e) = 0;
  *(undefined2 *)(ar4 + 0xf) = 0;
  *(undefined2 *)((int)ar4 + 0x3a) = 0;
  *(undefined2 *)(ar4 + 0xe) = 0;
  *ar4 = (int)(ar4 + 6);
  ar4[1] = (int)(ar4 + 0xc);
  ar4[2] = (int)(ar4 + 0xe);
  ar4[4] = 2;
  uVar1 = FUN_8c016658(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016584\n.set _FUN_8c016584, _FUN_8c016584_def\n");
//@unit 8c016658
#include "../decls.h"
undefined4 FUN_8c016658_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x14) = 0;
  return 0;
}

__asm__(".globl _FUN_8c016658\n.set _FUN_8c016658, _FUN_8c016658_def\n");
//@unit 8c016660
#include "../decls.h"
int free_if_nonnull_wrap_016660_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_016660\n.set _free_if_nonnull_wrap_016660, _free_if_nonnull_wrap_016660_def\n");
//@unit 8c016690
#include "../decls.h"
undefined4 FUN_8c016690_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c10273c(ar4,0,0,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016690\n.set _FUN_8c016690, _FUN_8c016690_def\n");
//@unit 8c0166b4
#include "../decls.h"
undefined4 Class_129808_m6_0166b4_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *ar5_00;
  int iVar2;
  int ar5_01;
  undefined1 auStack_64 [20];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [36];
  
  iVar2 = ar5;
  ar5_01 = ar6;
  FUN_8c0162f8(auStack_64,ar5,ar6,ar7);
  FUN_8c01688c(ar4,iVar2,ar6,ar7);
  FUN_8c015198(auStack_64,ar5_01,ar6,ar7,ar5_01);
  for (iVar2 = 0; *(char *)(iVar2 + ar5) != '\0'; iVar2 = iVar2 + 1) {
    FUN_8c01679c(ar4,(int)*(char *)(iVar2 + ar5),auStack_50,ar7);
    FUN_8c0168b4(ar4,iVar2,auStack_40,ar7);
    ar7 = 4;
    ar6 = ar4 + 0x1c;
    FUN_8c016318(auStack_64,auStack_40,ar6,4,ar5_01);
    ar5_00 = auStack_50;
    FUN_8c016324(auStack_64,ar5_00,ar6,ar7);
    FUN_8c016340(auStack_64,ar5_00,ar6,ar7);
  }
  uVar1 = free_if_nonnull_wrap_0151a0(auStack_64,0xffffffff,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129808_m6_0166b4\n.set _Class_129808_m6_0166b4, _Class_129808_m6_0166b4_def\n");
//@unit 8c01679c
#include "../decls.h"
int FUN_8c01679c_def(int ar4,undefined4 ar5,short *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  short *ar6_00;
  int iVar2;
  
  iVar2 = (char)ar5 + -0x20;
  ar6_00 = ar6;
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6,ar7);
  *ar6 = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[1] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18) + (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[2] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[3] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[4] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  uVar1 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  ar6[5] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x18);
  uVar1 = libgcc_divide_helper_01031c(iVar2,0x10,ar6_00,ar7);
  ar6[6] = (short)uVar1 * (short)*(undefined4 *)(ar4 + 0x14) + (short)*(undefined4 *)(ar4 + 0x14);
  iVar2 = libgcc_divide_helper_0101e4(iVar2,0x10,ar6_00,ar7);
  iVar2 = iVar2 * *(int *)(ar4 + 0x18) + *(int *)(ar4 + 0x18);
  ar6[7] = (short)iVar2;
  return iVar2;
}

__asm__(".globl _FUN_8c01679c\n.set _FUN_8c01679c, _FUN_8c01679c_def\n");
//@unit 8c01688c
#include "../decls.h"
undefined4 FUN_8c01688c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c01538c(*(undefined4 *)(ar4 + 4),ar5,ar6,ar7);
  uVar1 = FUN_8c014a94(*(undefined4 *)(ar4 + 4),*(undefined4 *)(ar4 + 8),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01688c\n.set _FUN_8c01688c, _FUN_8c01688c_def\n");
//@unit 8c0168b4
#include "../decls.h"
int FUN_8c0168b4_def(int ar4,int ar5,float *ar6,undefined4 ar7)

{
  int iVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  *ar6 = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[1] = (float)*(int *)(ar4 + 0x10) * in_fr6 + in_fr5;
  ar6[2] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4;
  ar6[3] = in_fr5;
  ar6[4] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  ar6[5] = in_fr5;
  ar6[6] = (float)*(int *)(ar4 + 0xc) * in_fr6 * (float)ar5 + in_fr4 +
           (float)*(int *)(ar4 + 0xc) * in_fr6;
  iVar1 = *(int *)(ar4 + 0x10);
  ar6[7] = (float)iVar1 * in_fr6 + in_fr5;
  return iVar1;
}

__asm__(".globl _FUN_8c0168b4\n.set _FUN_8c0168b4, _FUN_8c0168b4_def\n");
//@unit 8c01694c
#include "../decls.h"
undefined4 ret_const_1_01694c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_01694c\n.set _ret_const_1_01694c, _ret_const_1_01694c_def\n");
//@unit 8c016954
#include "../decls.h"
undefined4 noop_016954_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016954\n.set _noop_016954, _noop_016954_def\n");
//@unit 8c016958
#include "../decls.h"
undefined4 noop_016958_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016958\n.set _noop_016958, _noop_016958_def\n");
//@unit 8c01695c
#include "../decls.h"
undefined4 noop_01695c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_01695c\n.set _noop_01695c, _noop_01695c_def\n");
//@unit 8c016960
#include "../decls.h"
undefined4 noop_016960_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016960\n.set _noop_016960, _noop_016960_def\n");
//@unit 8c016964
#include "../decls.h"
undefined4 noop_016964_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016964\n.set _noop_016964, _noop_016964_def\n");
//@unit 8c016968
#include "../decls.h"
undefined4 noop_016968_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016968\n.set _noop_016968, _noop_016968_def\n");
//@unit 8c01696c
#include "../decls.h"
undefined4 noop_01696c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_01696c\n.set _noop_01696c, _noop_01696c_def\n");
//@unit 8c016970
#include "../decls.h"
undefined4 noop_016970_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016970\n.set _noop_016970, _noop_016970_def\n");
//@unit 8c016974
#include "../decls.h"
undefined4 noop_016974_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016974\n.set _noop_016974, _noop_016974_def\n");
//@unit 8c016978
#include "../decls.h"
undefined4 FUN_8c016978_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258c8),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278838;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278838,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258d8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278844;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278844,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c1258e8),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c278850;
  global_list_push(uVar1,(&Vec3_dtor),0x8c278850,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c1258f8),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c27885c,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c016978\n.set _FUN_8c016978, _FUN_8c016978_def\n");
//@unit 8c016a20
#include "../decls.h"
int FUN_8c016a20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(float *)(ar4 + 4) == 0.0) {
    *(undefined4 *)(ar4 + 4) = 0x38d1b717;
  }
  return ar4 + 8;
}

__asm__(".globl _FUN_8c016a20\n.set _FUN_8c016a20, _FUN_8c016a20_def\n");
//@unit 8c016a7c
#include "../decls.h"
undefined4 * FUN_8c016a7c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c1299b0);
  Vec3_ctor_zero(ar4 + 1,ar5,ar6,ar7);
  Vec3_set_zero(ar4 + 5,ar5,ar6,ar7);
  FUN_8c023dac(ar4 + 8,ar5,ar6,ar7);
  ar4[0xb] = 2;
  return ar4;
}

__asm__(".globl _FUN_8c016a7c\n.set _FUN_8c016a7c, _FUN_8c016a7c_def\n");
//@unit 8c016ac4
#include "../decls.h"
int free_if_nonnull_wrap_016ac4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_016ac4\n.set _free_if_nonnull_wrap_016ac4, _free_if_nonnull_wrap_016ac4_def\n");
//@unit 8c016af4
#include "../decls.h"
undefined4 * Class_1299b0_m0_016af4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299b0;
    free_if_nonnull_wrap_016ac4(ar4 + 8,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 5,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4 + 1,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_1299b0_m0_016af4\n.set _Class_1299b0_m0_016af4, _Class_1299b0_m0_016af4_def\n");
//@unit 8c016b5c
#include "../decls.h"
undefined4 noop_016b5c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016b5c\n.set _noop_016b5c, _noop_016b5c_def\n");
//@unit 8c016b60
#include "../decls.h"
undefined4 noop_016b60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_016b60\n.set _noop_016b60, _noop_016b60_def\n");
//@unit 8c016b64
#include "../decls.h"
undefined4 * FUN_8c016b64_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint in_fr1;
  undefined4 in_fr4;
  undefined8 in_xd14;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = &DAT_8c129974;
  FUN_8c015ab8(ar4 + 0x10,ar5,ar6,ar7);
  if (cVar1 == '\0') {
    ar4[0xc] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xc) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xd] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0xd) = (ulonglong)in_fr1;
  }
  if (cVar1 == '\0') {
    ar4[0xe] = 0;
    ar4[0xf] = in_fr4;
    ar4[10] = in_fr4;
    ar4[9] = in_fr4;
    ar4[8] = in_fr4;
  }
  else {
    *(ulonglong *)(ar4 + 0xe) = (ulonglong)in_fr1;
    *(undefined8 *)(ar4 + 0xf) = in_xd14;
    *(undefined8 *)(ar4 + 10) = in_xd14;
    *(undefined8 *)(ar4 + 9) = in_xd14;
    *(undefined8 *)(ar4 + 8) = in_xd14;
  }
  FUN_8c016fa4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c016b64\n.set _FUN_8c016b64, _FUN_8c016b64_def\n");
//@unit 8c016bfc
#include "../decls.h"
int free_if_nonnull_wrap_016bfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_016bfc\n.set _free_if_nonnull_wrap_016bfc, _free_if_nonnull_wrap_016bfc_def\n");
//@unit 8c016c2c
#include "../decls.h"
undefined4 * Class_129974_m0_016c2c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129974;
    free_if_nonnull_wrap_016bfc(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_1299b0_m0_016af4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129974_m0_016c2c\n.set _Class_129974_m0_016c2c, _Class_129974_m0_016c2c_def\n");
//@unit 8c016c84
#include "../decls.h"
undefined4 FUN_8c016c84_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *ar5;
  *(undefined4 *)(ar4 + 0x30) = uVar1;
  *(undefined4 *)(ar4 + 4) = uVar1;
  uVar1 = ar5[1];
  *(undefined4 *)(ar4 + 0x34) = uVar1;
  *(undefined4 *)(ar4 + 8) = uVar1;
  uVar1 = ar5[2];
  *(undefined4 *)(ar4 + 0x38) = uVar1;
  *(undefined4 *)(ar4 + 0xc) = uVar1;
  return 0;
}

__asm__(".globl _FUN_8c016c84\n.set _FUN_8c016c84, _FUN_8c016c84_def\n");
//@unit 8c016cec
#include "../decls.h"
float * FUN_8c016cec_def(int ar4,undefined8 *ar5,undefined4 ar6,undefined8 *ar7,int *s0)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  double dVar4;
  undefined8 in_xd0;
  undefined4 in_PR;
  char cVar6;
  char cVar7;
  undefined1 auStack_20 [12];
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uVar5;
  
  cVar7 = '\0';
  cVar6 = '\0';
  uStack_10 = in_PR;
  (**(code **)(*s0 + 0x34))(s0,auStack_20,ar6,ar7);
  if (cVar7 == '\0') {
    uVar5 = *(undefined4 *)ar5;
    *(undefined4 *)(ar4 + 0x30) = uVar5;
    *(undefined4 *)(ar4 + 4) = uVar5;
    uVar5 = *(undefined4 *)((int)ar5 + 4);
    *(undefined4 *)(ar4 + 0x34) = uVar5;
    *(undefined4 *)(ar4 + 8) = uVar5;
    uVar5 = *(undefined4 *)(ar5 + 1);
    *(undefined4 *)(ar4 + 0x38) = uVar5;
    *(undefined4 *)(ar4 + 0xc) = uVar5;
    *(undefined4 *)(ar4 + 0x20) = *(undefined4 *)ar7;
    *(undefined4 *)(ar4 + 0x24) = *(undefined4 *)((int)ar7 + 4);
    *(undefined4 *)(ar4 + 0x28) = *(undefined4 *)(ar7 + 1);
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x28),uStack_14);
  }
  else {
    uVar3 = *ar5;
    *(undefined8 *)(ar4 + 0x30) = uVar3;
    *(undefined8 *)(ar4 + 4) = uVar3;
    uVar3 = *(undefined8 *)((int)ar5 + 4);
    *(undefined8 *)(ar4 + 0x34) = uVar3;
    *(undefined8 *)(ar4 + 8) = uVar3;
    uVar3 = ar5[1];
    *(undefined8 *)(ar4 + 0x38) = uVar3;
    *(undefined8 *)(ar4 + 0xc) = uVar3;
    *(undefined8 *)(ar4 + 0x20) = *ar7;
    *(undefined8 *)(ar4 + 0x24) = *(undefined8 *)((int)ar7 + 4);
    *(undefined8 *)(ar4 + 0x28) = ar7[1];
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar4 = *(double *)(ar4 + 0x28);
  }
  pfVar1 = (float *)(ar4 + 0x3c);
  if (cVar6 == '\0') {
    fVar2 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar7 == '\0') {
    *pfVar1 = fVar2;
  }
  else {
    *(undefined8 *)pfVar1 = in_xd0;
  }
  return pfVar1;
}

__asm__(".globl _FUN_8c016cec\n.set _FUN_8c016cec, _FUN_8c016cec_def\n");
//@unit 8c016da8
#include "../decls.h"
undefined4 FUN_8c016da8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  FUN_8c256328(0,ar5,ar6,ar7,in_PR);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_PR);
  FUN_8c256fec(0,ar5,ar6,ar7,in_PR);
  FUN_8c015af8(ar4 + 0x40,ar5,ar6,ar7);
  uVar1 = FUN_8c256210(1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016da8\n.set _FUN_8c016da8, _FUN_8c016da8_def\n");
//@unit 8c016e18
#include "../decls.h"
undefined4 FUN_8c016e18_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar5 + 0x18))(ar5,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e18\n.set _FUN_8c016e18, _FUN_8c016e18_def\n");
//@unit 8c016e38
#include "../decls.h"
undefined4 FUN_8c016e38_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  (**(code **)(*ar5 + 0x34))(ar5,auStack_14,ar6,ar7);
  uVar1 = FUN_8c233d14(ar4 + 0x30,auStack_14,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e38\n.set _FUN_8c016e38, _FUN_8c016e38_def\n");
//@unit 8c016e6c
#include "../decls.h"
undefined4 * FUN_8c016e6c_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  ar5[3] = *(undefined4 *)(ar4 + 0x3c);
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  ar5[1] = *(undefined4 *)(ar4 + 0x34);
  ar5[2] = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c016e6c\n.set _FUN_8c016e6c, _FUN_8c016e6c_def\n");
//@unit 8c016e98
#include "../decls.h"
undefined4 FUN_8c016e98_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = FUN_8c2336e8(auStack_64,ar4 + 0x30,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016e98\n.set _FUN_8c016e98, _FUN_8c016e98_def\n");
//@unit 8c016ecc
#include "../decls.h"
undefined4 FUN_8c016ecc_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 8; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0xc + ar5) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x30);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 4) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x34);
    *(undefined4 *)(iVar1 * 0xc + ar5 + 8) = *(undefined4 *)(iVar1 * 0xc + ar4 + 0x38);
  }
  return 8;
}

__asm__(".globl _FUN_8c016ecc\n.set _FUN_8c016ecc, _FUN_8c016ecc_def\n");
//@unit 8c016f50
#include "../decls.h"
undefined4 FUN_8c016f50_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar5 + 0x34))(ar5,ar4 + 0x30,ar6,ar7);
  uVar1 = FUN_8c016f84(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016f50\n.set _FUN_8c016f50, _FUN_8c016f50_def\n");
//@unit 8c016f84
#include "../decls.h"
undefined4 FUN_8c016f84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c023e04(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c016f84\n.set _FUN_8c016f84, _FUN_8c016f84_def\n");
//@unit 8c016fa4
#include "../decls.h"
undefined4 FUN_8c016fa4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x40,&DAT_8c12f1b8,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 0;
  return 0;
}

__asm__(".globl _FUN_8c016fa4\n.set _FUN_8c016fa4, _FUN_8c016fa4_def\n");
//@unit 8c016fcc
#include "../decls.h"
undefined4 * FUN_8c016fcc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129938);
  FUN_8c015ab8((int)ar4 + 0x90,ar5,ar6,ar7);
  FUN_8c017804(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c016fcc\n.set _FUN_8c016fcc, _FUN_8c016fcc_def\n");
//@unit 8c017010
#include "../decls.h"
int * FUN_8c017010_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4
                  ,undefined4 s8,undefined4 s12,undefined4 s16)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar5_00 = ar5;
  ar6_00 = ar6;
  ar7_00 = ar7;
  FUN_8c016a7c(ar4,ar5,ar6,ar7);
  *ar4 = (int)(&DATA_8c129938);
  FUN_8c015ab8((int)ar4 + 0x90,ar5_00,ar6_00,ar7_00);
  (**(code **)(*ar4 + 0x2c))(ar4,ar5,ar6,ar7,s0,s4,s8,s12,s16);
  FUN_8c017804(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c017010\n.set _FUN_8c017010, _FUN_8c017010_def\n");
//@unit 8c017084
#include "../decls.h"
undefined4 * Class_129938_m0_017084_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129938;
    free_if_nonnull_wrap_016bfc(ar4 + 0x24,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_1299b0_m0_016af4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129938_m0_017084\n.set _Class_129938_m0_017084, _Class_129938_m0_017084_def\n");
//@unit 8c0170e0
#include "../decls.h"
undefined4 Class_129938_m1_0170e0_def(int ar4,undefined4 ar5,undefined4 ar6,int *ar7)

{
  undefined4 ar6_00;
  float fVar1;
  double dVar2;
  int ar7_00;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  (**(code **)(*ar7 + 0x38))(ar7,auStack_6c,ar6,ar7);
  Vec3_assign(ar4 + 4,ar5,ar6_00,ar7);
  vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7);
  FUN_8c25cddc(auStack_ac,ar6,ar6_00,ar7,ar5);
  FUN_8c25b5d0(auStack_ac,ar6,ar6_00,ar7,ar5);
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_00 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_ac,ar5_00,iVar3,ar7_00,ar5);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    FUN_8c212740(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_00,ar5);
  }
  return 8;
}

__asm__(".globl _Class_129938_m1_0170e0\n.set _Class_129938_m1_0170e0, _Class_129938_m1_0170e0_def\n");
//@unit 8c0171f4
#include "../decls.h"
undefined4 Class_129938_m2_0171f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 ar7_00;
  float fVar1;
  double dVar2;
  int ar7_01;
  int iVar3;
  int ar5_00;
  char cVar4;
  char cVar5;
  int *in_stack_00000000;
  undefined1 auStack_ac [64];
  undefined1 auStack_6c [100];
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar6_00 = ar6;
  ar7_00 = ar7;
  (**(code **)(*in_stack_00000000 + 0x38))(in_stack_00000000,auStack_6c,ar6,ar7);
  Vec3_assign(ar4 + 4,ar5,ar6_00,ar7_00);
  vec3_copy_8c023d8c(ar4 + 0x14,ar6,ar6_00,ar7_00);
  FUN_8c023e04(ar4 + 0x20,ar7,ar6_00,ar7_00);
  FUN_8c25cddc(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  FUN_8c25b5d0(auStack_ac,ar7,ar6_00,ar7_00,ar5);
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x1c));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar7_01 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar7_01 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x18));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    iVar3 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    iVar3 = (int)(dVar2 / dVar2);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x14));
  }
  else {
    dVar2 = 1.4411521878487204e+18;
  }
  if (cVar4 == '\0') {
    fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
  }
  else {
    fVar1 = SUB84(dVar2 * dVar2,0);
  }
  if (cVar5 == '\0') {
    dVar2 = (double)CONCAT44(0x43b40000,fVar1);
  }
  else {
    dVar2 = -3.739346301775294e-250;
  }
  if (cVar4 == '\0') {
    ar5_00 = (int)(SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20));
  }
  else {
    ar5_00 = (int)(dVar2 / dVar2);
  }
  FUN_8c256b0c(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  FUN_8c256fec(auStack_ac,ar5_00,iVar3,ar7_01,ar5);
  for (iVar3 = 0; iVar3 < 8; iVar3 = iVar3 + 1) {
    FUN_8c212740(auStack_ac,auStack_6c + iVar3 * 0xc,iVar3 * 0xc + ar4 + 0x30,ar7_01,ar5);
  }
  return 8;
}

__asm__(".globl _Class_129938_m2_0171f4\n.set _Class_129938_m2_0171f4, _Class_129938_m2_0171f4_def\n");
//@unit 8c01733c
#include "../decls.h"
undefined4 Class_129938_m6_01733c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  
  cVar6 = '\0';
  iVar1 = FUN_8c015bb8(ar4 + 0x90,ar5,ar6,ar7);
  iVar1 = **(int **)(iVar1 + 4) + 8;
  for (iVar5 = 0; iVar5 < 8; iVar5 = iVar5 + 1) {
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x30);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 4);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x34);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
    puVar4 = (undefined8 *)(iVar5 * 0x18 + iVar1 + 8);
    puVar3 = (undefined8 *)(iVar5 * 0xc + ar4 + 0x38);
    if (cVar6 == '\0') {
      *(undefined4 *)puVar4 = *(undefined4 *)puVar3;
    }
    else {
      *puVar4 = *puVar3;
    }
  }
  uVar2 = FUN_8c015af8(ar4 + 0x90,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _Class_129938_m6_01733c\n.set _Class_129938_m6_01733c, _Class_129938_m6_01733c_def\n");
//@unit 8c017408
#include "../decls.h"
undefined4 Class_129938_m3_017408_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*ar5 + 0x1c))(ar5,ar4,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129938_m3_017408\n.set _Class_129938_m3_017408, _Class_129938_m3_017408_def\n");
//@unit 8c017428
#include "../decls.h"
undefined4 Class_129938_m4_017428_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_14 [20];
  
  (**(code **)(*ar5 + 0x34))(ar5,auStack_14,ar6,ar7);
  uVar1 = FUN_8c2336e8(ar4 + 0x30,auStack_14,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129938_m4_017428\n.set _Class_129938_m4_017428, _Class_129938_m4_017428_def\n");
//@unit 8c01745c
#include "../decls.h"
undefined4 Class_129938_m5_01745c_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 auStack_64 [100];
  
  (**(code **)(*ar5 + 0x38))(ar5,auStack_64,ar6,ar7);
  uVar1 = FUN_8c23340c(ar4 + 0x30,auStack_64,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129938_m5_01745c\n.set _Class_129938_m5_01745c, _Class_129938_m5_01745c_def\n");
//@unit 8c017490
#include "../decls.h"
undefined4
FUN_8c017490_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7,undefined4 *s0,undefined4 *s4,
            undefined4 *s8,undefined4 *s12,undefined4 *s16)

{
  undefined4 *ar6_00;
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = *ar6;
  *(undefined4 *)(ar4 + 0x40) = ar6[1];
  *(undefined4 *)(ar4 + 0x44) = ar6[2];
  *(undefined4 *)(ar4 + 0x48) = *ar7;
  *(undefined4 *)(ar4 + 0x4c) = ar7[1];
  *(undefined4 *)(ar4 + 0x50) = ar7[2];
  *(undefined4 *)(ar4 + 0x54) = *s0;
  *(undefined4 *)(ar4 + 0x58) = s0[1];
  *(undefined4 *)(ar4 + 0x5c) = s0[2];
  *(undefined4 *)(ar4 + 0x60) = *s4;
  *(undefined4 *)(ar4 + 100) = s4[1];
  *(undefined4 *)(ar4 + 0x68) = s4[2];
  *(undefined4 *)(ar4 + 0x6c) = *s8;
  *(undefined4 *)(ar4 + 0x70) = s8[1];
  *(undefined4 *)(ar4 + 0x74) = s8[2];
  *(undefined4 *)(ar4 + 0x78) = *s12;
  *(undefined4 *)(ar4 + 0x7c) = s12[1];
  *(undefined4 *)(ar4 + 0x80) = s12[2];
  *(undefined4 *)(ar4 + 0x84) = *s16;
  *(undefined4 *)(ar4 + 0x88) = s16[1];
  uVar2 = s16[2];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  ar6_00 = ar6;
  FUN_8c022fc0(ar5,s0,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,s4,ar6_00,ar7);
  uStack_28 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_28 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar6,ar6_00,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_2c = uVar2;
  if (cVar3 != '\0') {
    uStack_2c = (undefined4)uVar1;
    uStack_28 = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_2c;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_28,uStack_2c);
  }
  return 4;
}

__asm__(".globl _FUN_8c017490\n.set _FUN_8c017490, _FUN_8c017490_def\n");
//@unit 8c017630
#include "../decls.h"
undefined4 FUN_8c017630_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr1;
  undefined4 uVar2;
  undefined8 uVar1;
  char cVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar3 = '\0';
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = ar5[4];
  *(undefined4 *)(ar4 + 0x40) = ar5[5];
  *(undefined4 *)(ar4 + 0x44) = ar5[6];
  *(undefined4 *)(ar4 + 0x48) = ar5[8];
  *(undefined4 *)(ar4 + 0x4c) = ar5[9];
  *(undefined4 *)(ar4 + 0x50) = ar5[10];
  *(undefined4 *)(ar4 + 0x54) = ar5[0xc];
  *(undefined4 *)(ar4 + 0x58) = ar5[0xd];
  *(undefined4 *)(ar4 + 0x5c) = ar5[0xe];
  *(undefined4 *)(ar4 + 0x60) = ar5[0x10];
  *(undefined4 *)(ar4 + 100) = ar5[0x11];
  *(undefined4 *)(ar4 + 0x68) = ar5[0x12];
  *(undefined4 *)(ar4 + 0x6c) = ar5[0x14];
  *(undefined4 *)(ar4 + 0x70) = ar5[0x15];
  *(undefined4 *)(ar4 + 0x74) = ar5[0x16];
  *(undefined4 *)(ar4 + 0x78) = ar5[0x18];
  *(undefined4 *)(ar4 + 0x7c) = ar5[0x19];
  *(undefined4 *)(ar4 + 0x80) = ar5[0x1a];
  *(undefined4 *)(ar4 + 0x84) = ar5[0x1c];
  *(undefined4 *)(ar4 + 0x88) = ar5[0x1d];
  uVar2 = ar5[0x1e];
  *(undefined4 *)(ar4 + 0x8c) = uVar2;
  FUN_8c022fc0(ar5,ar5 + 0xc,ar6,ar7);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x20) = uVar2;
  }
  else {
    *(ulonglong *)(ar4 + 0x20) = CONCAT44(uVar2,in_fr1);
  }
  uVar1 = CONCAT44(uVar2,in_fr1);
  FUN_8c022fc0(ar5,ar5 + 0x10,ar6,ar7);
  uStack_14 = (undefined4)uVar1;
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x24) = uVar2;
    uStack_14 = uVar2;
  }
  else {
    *(undefined8 *)(ar4 + 0x24) = uVar1;
  }
  FUN_8c022fc0(ar5,ar5 + 4,ar6,ar7);
  uVar2 = (undefined4)((ulonglong)uVar1 >> 0x20);
  uStack_18 = uVar2;
  if (cVar3 != '\0') {
    uStack_18 = (undefined4)uVar1;
    uStack_14 = uVar2;
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(ar4 + 0x28) = uStack_18;
  }
  else {
    *(undefined8 *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
  }
  return 0;
}

__asm__(".globl _FUN_8c017630\n.set _FUN_8c017630, _FUN_8c017630_def\n");
//@unit 8c0177d0
#include "../decls.h"
undefined4 Class_129938_m7_0177d0_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (**(code **)(*ar5 + 0x38))(ar5,ar4 + 0x30,ar6,ar7);
  uVar1 = FUN_8c016f84(ar5,ar4 + 0x20,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_129938_m7_0177d0\n.set _Class_129938_m7_0177d0, _Class_129938_m7_0177d0_def\n");
//@unit 8c017804
#include "../decls.h"
undefined4 FUN_8c017804_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_PR;
  
  FUN_8c015ad4(ar4 + 0x90,&DAT_8c12ca68,ar6,ar7,in_PR);
  *(undefined4 *)(ar4 + 0x2c) = 1;
  return 1;
}

__asm__(".globl _FUN_8c017804\n.set _FUN_8c017804, _FUN_8c017804_def\n");
//@unit 8c017830
#include "../decls.h"
undefined4 * FUN_8c017830_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint extraout_fr1;
  char cVar1;
  
  cVar1 = '\0';
  FUN_8c016410(ar4 + 4,ar5,ar6,ar7);
  *ar4 = 0;
  ar4[1] = 0;
  ar4[2] = 0;
  ar4[3] = 0;
  if (cVar1 == '\0') {
    ar4[0x15] = 0;
    ar4[0x16] = 0;
    ar4[0x17] = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x15) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x16) = (ulonglong)extraout_fr1;
    *(ulonglong *)(ar4 + 0x17) = (ulonglong)extraout_fr1;
  }
  ar4[0x1b] = ar4[0x15];
  ar4[0x1c] = ar4[0x16];
  ar4[0x1d] = ar4[0x17];
  ar4[0x18] = ar4[0x15];
  ar4[0x19] = ar4[0x16];
  ar4[0x1a] = ar4[0x17];
  ar4[0x1e] = ar4[0x15];
  ar4[0x1f] = ar4[0x16];
  ar4[0x20] = ar4[0x17];
  return ar4;
}

__asm__(".globl _FUN_8c017830\n.set _FUN_8c017830, _FUN_8c017830_def\n");
//@unit 8c0178b4
#include "../decls.h"
int FUN_8c0178b4_def(int *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined2 *puVar2;
  
  *ar4 = ar5;
  for (puVar2 = *(undefined2 **)(*ar4 + 4); (char)*puVar2 != '@'; puVar2 = puVar2 + 1) {
  }
  ar4[3] = (int)(short)puVar2[2] & 0x3fff;
  ar4[1] = (int)(puVar2 + 3);
  ar4[2] = *(int *)*ar4;
  iVar1 = ar4[2];
  ar4[2] = iVar1 + 8;
  return iVar1 + 8;
}

__asm__(".globl _FUN_8c0178b4\n.set _FUN_8c0178b4, _FUN_8c0178b4_def\n");
//@unit 8c017900
#include "../decls.h"
undefined4 FUN_8c017900_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined8 *puVar4;
  float *pfVar5;
  double *pdVar6;
  float *pfVar7;
  float *ar5_00;
  float *ar7_00;
  short sVar8;
  undefined4 in_fr1;
  undefined4 uVar9;
  float fVar10;
  double dVar11;
  undefined8 uVar12;
  float fVar14;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar15;
  undefined8 in_xd0;
  bool bVar16;
  bool bVar17;
  char cVar18;
  char cVar19;
  short asStack_1ce [5];
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  int iStack_1bc;
  int iStack_1b8;
  int iStack_1b4;
  int iStack_1b0;
  int iStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int iStack_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  float *pfStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  undefined8 uStack_e0;
  undefined4 uStack_d8;
  short *psStack_d4;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined1 auStack_6c [8];
  undefined8 uStack_64;
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  undefined4 uVar13;
  
  cVar19 = '\0';
  cVar18 = '\0';
  psVar2 = *(short **)(ar4 + 4);
  psStack_d4 = (short *)0x0;
  asStack_1ce[3] = 0;
  sVar1 = 0;
  pdVar6 = ar5;
  pfVar7 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_zero(auStack_6c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_5c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(auStack_4c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&fStack_7c,pdVar6,pfVar7,ar7_00);
  Vec3_ctor_zero(&uStack_8c,pdVar6,pfVar7,ar7_00);
  iVar3 = *(int *)(ar4 + 8);
  if (cVar19 == '\0') {
    uStack_b0 = *(undefined4 *)ar5;
    uStack_ac = *(undefined4 *)((int)ar5 + 4);
    uStack_a8 = *(undefined4 *)(ar5 + 1);
    dVar11 = (double)CONCAT44(uStack_a8,in_fr1);
  }
  else {
    uStack_b0 = SUB84(*ar5,0);
    uStack_ac = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar11 = ar5[1];
    uStack_a8 = SUB84(dVar11,0);
    fStack_a4 = (float)((ulonglong)dVar11 >> 0x20);
  }
  asStack_1ce[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_1ce[4]) {
      if (cVar19 == '\0') {
        ar6[2] = 0.0;
        uStack_1c4 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_1c0 = SUB84(dVar11,0);
        iStack_1bc = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar11 & 0xffffffff;
        uStack_1c4 = uStack_1c0;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar11 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar11 & 0xffffffff;
      }
      uStack_1c0 = 0;
      (*(uint*)((uchar*)&uStack_e0+4)) = 0xffffffff;
      Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
      return (*(uint*)((uchar*)&uStack_e0+4));
    }
    asStack_1ce[3] = *psVar2;
    bVar16 = asStack_1ce[3] < 0;
    if (bVar16) {
      iStack_e4 = (int)asStack_1ce[3];
      asStack_1ce[3] = -asStack_1ce[3];
    }
    psVar2 = psVar2 + 1;
    psStack_d4 = psVar2;
    while( true ) {
      iStack_1bc = libgcc_divide_helper_0101e4((int)psVar2 - (int)psStack_d4,2,pfVar7,ar7_00);
      uVar9 = SUB84(dVar11,0);
      if (asStack_1ce[3] <= iStack_1bc) break;
      if (psVar2 == psStack_d4) {
        asStack_1ce[0] = *psVar2;
        asStack_1ce[1] = psVar2[1];
        asStack_1ce[2] = psVar2[2];
        psVar2 = psVar2 + 3;
      }
      else {
        asStack_1ce[0] = asStack_1ce[1];
        asStack_1ce[1] = asStack_1ce[2];
        asStack_1ce[2] = *psVar2;
        psVar2 = psVar2 + 1;
      }
      iStack_e8 = (int)asStack_1ce[2];
      iStack_ec = (int)asStack_1ce[0];
      iStack_f0 = (int)asStack_1ce[1];
      puVar4 = (undefined8 *)(iStack_ec * 0x18 + iVar3);
      if (cVar19 == '\0') {
        uVar9 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar6 = (double *)(iStack_f0 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_e8 * 0x18 + iVar3);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a4 = fVar10;
      if (cVar19 != '\0') {
        fStack_a4 = (float)in_xd0;
      }
      iStack_f4 = (int)asStack_1ce[2];
      iStack_f8 = (int)asStack_1ce[0];
      iStack_fc = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_f8 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_fc * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_f4 * 0x18 + iVar3 + 4);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_a0 = fVar10;
      if (cVar19 != '\0') {
        fStack_a0 = (float)in_xd0;
      }
      iStack_100 = (int)asStack_1ce[2];
      iStack_104 = (int)asStack_1ce[0];
      iStack_108 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_104 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_108 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_100 * 0x18 + iVar3 + 8);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_9c = fVar10;
      if (cVar19 != '\0') {
        fStack_9c = (float)in_xd0;
      }
      iStack_10c = (int)asStack_1ce[2];
      iStack_110 = (int)asStack_1ce[0];
      iStack_114 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_110 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_114 * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_10c * 0x18 + iVar3 + 0xc);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_98 = fVar10;
      if (cVar19 != '\0') {
        fStack_98 = (float)in_xd0;
      }
      iStack_118 = (int)asStack_1ce[2];
      iStack_11c = (int)asStack_1ce[0];
      iStack_120 = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_11c * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_120 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_118 * 0x18 + iVar3 + 0x10);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 / dVar11,0);
      }
      fStack_94 = fVar10;
      if (cVar19 != '\0') {
        fStack_94 = (float)in_xd0;
      }
      iStack_124 = (int)asStack_1ce[2];
      iStack_128 = (int)asStack_1ce[0];
      iStack_12c = (int)asStack_1ce[1];
      pfVar7 = (float *)(iStack_128 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        fVar10 = *pfVar7;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar7;
      }
      pdVar6 = (double *)(iStack_12c * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      pdVar6 = (double *)(iStack_124 * 0x18 + iVar3 + 0x14);
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
      }
      else {
        dVar11 = *pdVar6;
      }
      if (cVar18 == '\0') {
        fVar10 = SUB84(dVar11,0) + (float)((ulonglong)dVar11 >> 0x20);
      }
      else {
        fVar10 = SUB84(dVar11 + dVar11,0);
      }
      if (cVar19 == '\0') {
        dVar11 = (double)CONCAT44(0x40400000,fVar10);
      }
      else {
        dVar11 = 6.45619291662699e-312;
      }
      if (cVar18 == '\0') {
        fVar10 = (float)((ulonglong)dVar11 >> 0x20);
        dVar11 = (double)CONCAT44(fVar10,SUB84(dVar11,0) / fVar10);
      }
      else {
        dVar11 = dVar11 / dVar11;
      }
      if (cVar19 == '\0') {
        fStack_90 = SUB84(dVar11,0);
      }
      else {
        fStack_90 = (float)in_xd0;
        uStack_8c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar7 = (float *)0x0;
      ar5_00 = &fStack_a4;
      FUN_8c234a68(&uStack_b0,ar5_00,0,ar7_00);
      fVar10 = (float)((ulonglong)dVar11 >> 0x20);
      dVar15 = dVar11;
      if (cVar19 == '\0') {
        uStack_e0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_e0+4)),fVar10);
        dVar15 = uStack_e0;
      }
      uStack_e0 = dVar15;
      if (cVar18 == '\0') {
        bVar17 = in_fr4 < fVar10;
      }
      else {
        bVar17 = (double)CONCAT44(in_fr12,in_fr4) < dVar11;
      }
      if (!bVar17) {
        sVar8 = 0;
        while( true ) {
          uVar9 = SUB84(in_dr14,0);
          fVar10 = SUB84(dVar11,0);
          if (2 < sVar8) break;
          if (sVar8 == 0) {
            iStack_130 = (int)asStack_1ce[1];
            iStack_134 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_130 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_134 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_138 = (int)asStack_1ce[1];
            iStack_13c = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_138 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_13c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_140 = (int)asStack_1ce[1];
            iStack_144 = (int)asStack_1ce[0];
            pfVar5 = (float *)(iStack_140 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_144 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 1) {
            ar5_00 = (float *)(int)asStack_1ce[2];
            iStack_14c = (int)asStack_1ce[1];
            pfVar5 = (float *)((int)ar5_00 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_14c * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_150 = (int)asStack_1ce[2];
            iStack_154 = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_150 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_154 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_158 = (int)asStack_1ce[2];
            iStack_15c = (int)asStack_1ce[1];
            pfVar5 = (float *)(iStack_158 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_15c * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            pfStack_148 = ar5_00;
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          else if (sVar8 == 2) {
            iStack_160 = (int)asStack_1ce[0];
            iStack_164 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_160 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_164 * 0x18 + iVar3);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_7c = fVar10;
            if (cVar19 != '\0') {
              fStack_7c = (float)in_xd0;
            }
            iStack_168 = (int)asStack_1ce[0];
            iStack_16c = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_168 * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_16c * 0x18 + iVar3 + 4);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_78 = fVar10;
            if (cVar19 != '\0') {
              fStack_78 = (float)in_xd0;
            }
            iStack_170 = (int)asStack_1ce[0];
            iStack_174 = (int)asStack_1ce[2];
            pfVar5 = (float *)(iStack_170 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              fVar10 = *pfVar5;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar5;
            }
            pdVar6 = (double *)(iStack_174 * 0x18 + iVar3 + 8);
            if (cVar19 == '\0') {
              dVar11 = (double)CONCAT44(*(undefined4 *)pdVar6,fVar10);
            }
            else {
              dVar11 = *pdVar6;
            }
            if (cVar18 == '\0') {
              fVar10 = SUB84(dVar11,0) - (float)((ulonglong)dVar11 >> 0x20);
            }
            else {
              fVar10 = SUB84(dVar11 - dVar11,0);
            }
            fStack_74 = fVar10;
            if (cVar19 != '\0') {
              fStack_74 = (float)in_xd0;
              uStack_70 = (undefined4)((ulonglong)in_xd0 >> 0x20);
            }
          }
          Vec3_length(&fStack_7c,ar5_00,pfVar7,ar7_00);
          iStack_178 = (int)sVar8;
          iStack_180 = (int)sVar8;
          iStack_17c = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0xc);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,fVar10);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10) = uVar12;
          }
          iStack_184 = (int)sVar8;
          iStack_18c = (int)sVar8;
          iStack_188 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 0x10);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            *(undefined8 *)(auStack_6c + sVar8 * 0x10 + 4) = uVar12;
          }
          iStack_190 = (int)sVar8;
          iStack_198 = (int)sVar8;
          iStack_194 = (int)asStack_1ce[sVar8];
          puVar4 = (undefined8 *)(iStack_194 * 0x18 + iVar3 + 0x14);
          if (cVar19 == '\0') {
            uVar13 = *(undefined4 *)puVar4;
            uVar12 = CONCAT44(uVar13,(int)uVar12);
            *(undefined4 *)(&uStack_64 + sVar8 * 2) = uVar13;
          }
          else {
            uVar12 = *puVar4;
            (&uStack_64)[sVar8 * 2] = uVar12;
          }
          uVar13 = (undefined4)uVar12;
          if (bVar16) {
            iStack_1a0 = (int)sVar8;
            FUN_8c022d3c(auStack_6c + iStack_1a0 * 0x10,&fStack_7c,pfVar7,ar7_00,auStack_d0);
            Vec3_assign(&uStack_8c,auStack_d0,pfVar7,ar7_00);
            pfVar7 = (float *)0xffffffff;
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_d0,0xffffffff,0xffffffff,ar7_00);
          }
          else {
            iStack_19c = (int)sVar8;
            FUN_8c022d3c(&fStack_7c,auStack_6c + iStack_19c * 0x10,pfVar7,ar7_00,auStack_c0);
            Vec3_assign(&uStack_8c,auStack_c0,pfVar7,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_c0,0xffffffff,pfVar7,ar7_00);
          }
          iStack_1a8 = (int)sVar8;
          iStack_1a4 = (int)asStack_1ce[sVar8];
          iStack_1b0 = (int)sVar8;
          iStack_1ac = (int)asStack_1ce[sVar8];
          iStack_1b8 = (int)sVar8;
          iStack_1b4 = (int)asStack_1ce[sVar8];
          pdVar6 = (double *)(asStack_1ce[sVar8] * 0x18 + iVar3);
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44(*(undefined4 *)pdVar6,uVar9);
            dVar11 = (double)CONCAT44(uStack_8c,uVar13);
          }
          else {
            dVar15 = *pdVar6;
            dVar11 = (double)CONCAT44(uStack_88,uStack_8c);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) *
                                      (float)((ulonglong)dVar11 >> 0x20),SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          puVar4 = (undefined8 *)(iStack_1b4 * 0x18 + iVar3 + 4);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_88,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_84,uStack_88);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20),
                                      SUB84(dVar15,0));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          puVar4 = (undefined8 *)(asStack_1ce[sVar8] * 0x18 + iVar3 + 8);
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(uStack_84,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar11 = (double)CONCAT44(uStack_80,uStack_84);
          }
          if (cVar18 == '\0') {
            fVar10 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
            dVar15 = (double)CONCAT44((float)((ulonglong)dVar15 >> 0x20) + fVar10,SUB84(dVar15,0));
          }
          else {
            fVar10 = SUB84(dVar11 * dVar11,0);
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),uStack_8c);
            dVar11 = (double)CONCAT44(*(undefined4 *)ar5,fVar10);
          }
          else {
            dVar11 = *ar5;
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_88);
          }
          else {
            in_xd0 = CONCAT44(uStack_84,uStack_88);
            dVar11 = *(double *)((int)ar5 + 4);
          }
          if (cVar18 == '\0') {
            dVar15 = (double)CONCAT44((int)((ulonglong)dVar15 >> 0x20),
                                      SUB84(dVar15,0) +
                                      SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20));
          }
          else {
            dVar15 = dVar15 + dVar11 * dVar11;
          }
          if (cVar19 == '\0') {
            dVar11 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_84);
          }
          else {
            in_xd0 = CONCAT44(uStack_80,uStack_84);
            dVar11 = ar5[1];
          }
          if (cVar18 == '\0') {
            fVar14 = (float)((ulonglong)dVar11 >> 0x20);
            fVar10 = SUB84(dVar11,0) * fVar14;
            dVar11 = (double)CONCAT44(fVar14,fVar10);
            fVar14 = (float)((ulonglong)dVar15 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar14,(SUB84(dVar15,0) + fVar10) - fVar14);
          }
          else {
            dVar11 = dVar11 * dVar11;
            in_dr14 = (dVar15 + dVar11) - (dVar15 + dVar11);
          }
          dVar11 = (double)((ulonglong)dVar11 & 0xffffffff);
          if (cVar18 == '\0') {
            bVar17 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar17 = dVar11 < in_dr14;
          }
          if (bVar17) {
            sVar1 = 0;
            break;
          }
          sVar1 = sVar1 + 1;
          if (sVar1 == 3) {
            if (cVar19 == '\0') {
              *ar6 = fStack_98;
              ar6[1] = fStack_94;
              ar6[2] = fStack_90;
              *ar7 = fStack_a4;
              ar7[1] = fStack_a0;
              ar7[2] = fStack_9c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_94,fStack_98);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_90,fStack_94);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_8c,fStack_90);
              *(ulonglong *)ar7 = CONCAT44(fStack_a0,fStack_a4);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_9c,fStack_a0);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_98,fStack_9c);
            }
            uStack_d8 = 1;
            Vec3_dtor(&uStack_8c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(&fStack_7c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_5c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_6c,0xffffffff,pfVar7,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar7,ar7_00);
            return uStack_d8;
          }
          sVar8 = sVar8 + 1;
        }
        bVar16 = (bool)(bVar16 ^ 1);
      }
    }
    asStack_1ce[4] = asStack_1ce[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c017900\n.set _FUN_8c017900, _FUN_8c017900_def\n");
//@unit 8c0185a4
#include "../decls.h"
undefined4 FUN_8c0185a4_def(int ar4,double *ar5,float *ar6,float *ar7)

{
  undefined8 uVar1;
  short sVar2;
  short *psVar3;
  undefined8 *puVar4;
  double *pdVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float *ar5_00;
  float *ar7_00;
  short sVar9;
  undefined4 in_fr1;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  float fVar13;
  float in_fr4;
  undefined4 in_fr12;
  double in_dr14;
  double dVar14;
  undefined8 in_xd0;
  bool bVar15;
  bool bVar16;
  char cVar17;
  char cVar18;
  short asStack_16a [5];
  undefined4 uStack_160;
  undefined4 uStack_15c;
  int iStack_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  short *psStack_b4;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  undefined8 uStack_54;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [20];
  
  cVar18 = '\0';
  cVar17 = '\0';
  psVar3 = *(short **)(ar4 + 4);
  psStack_b4 = (short *)0x0;
  asStack_16a[3] = 0;
  sVar2 = 0;
  pdVar5 = ar5;
  pfVar6 = ar6;
  ar7_00 = ar7;
  Vec3_ctor_zero(auStack_3c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_4c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_5c,pdVar5,pfVar6,ar7_00);
  Vec3_ctor_zero(&uStack_6c,pdVar5,pfVar6,ar7_00);
  iVar8 = *(int *)(ar4 + 8);
  if (cVar18 == '\0') {
    uStack_90 = *(undefined4 *)ar5;
    uStack_8c = *(undefined4 *)((int)ar5 + 4);
    uStack_88 = *(undefined4 *)(ar5 + 1);
    dVar12 = (double)CONCAT44(uStack_88,in_fr1);
  }
  else {
    uStack_90 = SUB84(*ar5,0);
    uStack_8c = (undefined4)*(undefined8 *)((int)ar5 + 4);
    dVar12 = ar5[1];
    uStack_88 = SUB84(dVar12,0);
    fStack_84 = (float)((ulonglong)dVar12 >> 0x20);
  }
  asStack_16a[4] = 0;
  do {
    if (*(int *)(ar4 + 0xc) <= (int)asStack_16a[4]) {
      if (cVar18 == '\0') {
        ar6[2] = 0.0;
        uStack_160 = 0;
        ar6[1] = 0.0;
        *ar6 = 0.0;
      }
      else {
        uStack_15c = SUB84(dVar12,0);
        iStack_158 = 0;
        *(ulonglong *)(ar6 + 2) = (ulonglong)dVar12 & 0xffffffff;
        uStack_160 = uStack_15c;
        *(ulonglong *)(ar6 + 1) = (ulonglong)dVar12 & 0xffffffff;
        *(ulonglong *)ar6 = (ulonglong)dVar12 & 0xffffffff;
      }
      uStack_15c = 0;
      (*(uint*)((uchar*)&uStack_c0+4)) = 0xffffffff;
      Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
      Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
      return (*(uint*)((uchar*)&uStack_c0+4));
    }
    asStack_16a[3] = *psVar3;
    bVar15 = asStack_16a[3] < 0;
    if (bVar15) {
      iStack_c4 = (int)asStack_16a[3];
      asStack_16a[3] = -asStack_16a[3];
    }
    psVar3 = psVar3 + 1;
    psStack_b4 = psVar3;
    while( true ) {
      iStack_158 = libgcc_divide_helper_0101e4((int)psVar3 - (int)psStack_b4,2,pfVar6,ar7_00);
      uVar10 = SUB84(dVar12,0);
      if (asStack_16a[3] <= iStack_158) break;
      if (psVar3 == psStack_b4) {
        asStack_16a[0] = *psVar3;
        asStack_16a[1] = psVar3[1];
        asStack_16a[2] = psVar3[2];
        psVar3 = psVar3 + 3;
      }
      else {
        asStack_16a[0] = asStack_16a[1];
        asStack_16a[1] = asStack_16a[2];
        asStack_16a[2] = *psVar3;
        psVar3 = psVar3 + 1;
      }
      iStack_c8 = (int)asStack_16a[2];
      iStack_cc = (int)asStack_16a[0];
      iStack_d0 = (int)asStack_16a[1];
      puVar4 = (undefined8 *)(iStack_cc * 0x18 + iVar8);
      if (cVar18 == '\0') {
        uVar10 = *(undefined4 *)puVar4;
      }
      else {
        in_xd0 = *puVar4;
      }
      pdVar5 = (double *)(iStack_d0 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_c8 * 0x18 + iVar8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_84 = fVar11;
      if (cVar18 != '\0') {
        fStack_84 = (float)in_xd0;
      }
      iStack_d4 = (int)asStack_16a[2];
      iStack_d8 = (int)asStack_16a[0];
      iStack_dc = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_d8 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_dc * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_d4 * 0x18 + iVar8 + 4);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_80 = fVar11;
      if (cVar18 != '\0') {
        fStack_80 = (float)in_xd0;
      }
      iStack_e0 = (int)asStack_16a[2];
      iStack_e4 = (int)asStack_16a[0];
      iStack_e8 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_e4 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_e8 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_e0 * 0x18 + iVar8 + 8);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_7c = fVar11;
      if (cVar18 != '\0') {
        fStack_7c = (float)in_xd0;
      }
      iStack_ec = (int)asStack_16a[2];
      iStack_f0 = (int)asStack_16a[0];
      iStack_f4 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_f0 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_f4 * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_ec * 0x18 + iVar8 + 0xc);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_78 = fVar11;
      if (cVar18 != '\0') {
        fStack_78 = (float)in_xd0;
      }
      iStack_f8 = (int)asStack_16a[2];
      iStack_fc = (int)asStack_16a[0];
      iStack_100 = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_fc * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_100 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_f8 * 0x18 + iVar8 + 0x10);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) / (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 / dVar12,0);
      }
      fStack_74 = fVar11;
      if (cVar18 != '\0') {
        fStack_74 = (float)in_xd0;
      }
      iStack_104 = (int)asStack_16a[2];
      iStack_108 = (int)asStack_16a[0];
      iStack_10c = (int)asStack_16a[1];
      pfVar6 = (float *)(iStack_108 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        fVar11 = *pfVar6;
      }
      else {
        in_xd0 = *(undefined8 *)pfVar6;
      }
      pdVar5 = (double *)(iStack_10c * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      pdVar5 = (double *)(iStack_104 * 0x18 + iVar8 + 0x14);
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
      }
      else {
        dVar12 = *pdVar5;
      }
      if (cVar17 == '\0') {
        fVar11 = SUB84(dVar12,0) + (float)((ulonglong)dVar12 >> 0x20);
      }
      else {
        fVar11 = SUB84(dVar12 + dVar12,0);
      }
      if (cVar18 == '\0') {
        dVar12 = (double)CONCAT44(0x40400000,fVar11);
      }
      else {
        dVar12 = 5.0132357787706e-312;
      }
      if (cVar17 == '\0') {
        fVar11 = (float)((ulonglong)dVar12 >> 0x20);
        dVar12 = (double)CONCAT44(fVar11,SUB84(dVar12,0) / fVar11);
      }
      else {
        dVar12 = dVar12 / dVar12;
      }
      if (cVar18 == '\0') {
        fStack_70 = SUB84(dVar12,0);
      }
      else {
        fStack_70 = (float)in_xd0;
        uStack_6c = (undefined4)((ulonglong)in_xd0 >> 0x20);
      }
      pfVar6 = (float *)0x0;
      ar5_00 = &fStack_84;
      FUN_8c234a68(&uStack_90,ar5_00,0,ar7_00);
      fVar11 = (float)((ulonglong)dVar12 >> 0x20);
      dVar14 = dVar12;
      if (cVar18 == '\0') {
        uStack_c0 = (double)CONCAT44((*(uint*)((uchar*)&uStack_c0+4)),fVar11);
        dVar14 = uStack_c0;
      }
      uStack_c0 = dVar14;
      if (cVar17 == '\0') {
        bVar16 = in_fr4 < fVar11;
      }
      else {
        bVar16 = (double)CONCAT44(in_fr12,in_fr4) < dVar12;
      }
      if (!bVar16) {
        sVar9 = 0;
        while( true ) {
          uVar10 = SUB84(in_dr14,0);
          fVar11 = SUB84(dVar12,0);
          if (2 < sVar9) break;
          if (sVar9 == 0) {
            iStack_110 = (int)asStack_16a[1];
            iStack_114 = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_110 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_114 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_118 = (int)asStack_16a[1];
            iStack_11c = (int)asStack_16a[0];
            pfVar7 = (float *)(iStack_118 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_11c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
              uVar1 = uStack_54;
            }
          }
          else if (sVar9 == 1) {
            iStack_120 = (int)asStack_16a[2];
            iStack_124 = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_120 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_124 * 0x18 + iVar8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
              uVar1 = uStack_5c;
            }
            uStack_5c = uVar1;
            iStack_128 = (int)asStack_16a[2];
            iStack_12c = (int)asStack_16a[1];
            pfVar7 = (float *)(iStack_128 * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              fVar11 = *pfVar7;
            }
            else {
              in_xd0 = *(undefined8 *)pfVar7;
            }
            pdVar5 = (double *)(iStack_12c * 0x18 + iVar8 + 8);
            if (cVar18 == '\0') {
              dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
            }
            else {
              dVar12 = *pdVar5;
            }
            if (cVar17 == '\0') {
              fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
            }
            else {
              fVar11 = SUB84(dVar12 - dVar12,0);
            }
            uVar1 = in_xd0;
            if (cVar18 == '\0') {
              uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
              uVar1 = uStack_54;
            }
          }
          else {
            uVar1 = uStack_54;
            if (sVar9 == 2) {
              iStack_130 = (int)asStack_16a[0];
              iStack_134 = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_130 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_134 * 0x18 + iVar8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_5c = CONCAT44((*(uint*)((uchar*)&uStack_5c+4)),fVar11);
                uVar1 = uStack_5c;
              }
              uStack_5c = uVar1;
              iStack_138 = (int)asStack_16a[0];
              iStack_13c = (int)asStack_16a[2];
              pfVar7 = (float *)(iStack_138 * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                fVar11 = *pfVar7;
              }
              else {
                in_xd0 = *(undefined8 *)pfVar7;
              }
              pdVar5 = (double *)(iStack_13c * 0x18 + iVar8 + 8);
              if (cVar18 == '\0') {
                dVar12 = (double)CONCAT44(*(undefined4 *)pdVar5,fVar11);
              }
              else {
                dVar12 = *pdVar5;
              }
              if (cVar17 == '\0') {
                fVar11 = SUB84(dVar12,0) - (float)((ulonglong)dVar12 >> 0x20);
              }
              else {
                fVar11 = SUB84(dVar12 - dVar12,0);
              }
              uVar1 = in_xd0;
              if (cVar18 == '\0') {
                uStack_54 = CONCAT44((*(uint*)((uchar*)&uStack_54+4)),fVar11);
                uVar1 = uStack_54;
              }
            }
          }
          uStack_54 = uVar1;
          Vec3_length(&uStack_5c,ar5_00,pfVar6,ar7_00);
          if (bVar15) {
            FUN_8c022d3c(auStack_4c,&uStack_5c,pfVar6,ar7_00,auStack_b0);
            Vec3_assign(&uStack_6c,auStack_b0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_b0,0xffffffff,pfVar6,ar7_00);
          }
          else {
            FUN_8c022d3c(&uStack_5c,auStack_4c,pfVar6,ar7_00,auStack_a0);
            Vec3_assign(&uStack_6c,auStack_a0,pfVar6,ar7_00);
            ar5_00 = (float *)0xffffffff;
            Vec3_dtor(auStack_a0,0xffffffff,pfVar6,ar7_00);
          }
          iStack_144 = (int)sVar9;
          iStack_140 = (int)asStack_16a[sVar9];
          iStack_14c = (int)sVar9;
          iStack_148 = (int)asStack_16a[sVar9];
          iStack_154 = (int)sVar9;
          iStack_150 = (int)asStack_16a[sVar9];
          pdVar5 = (double *)(asStack_16a[sVar9] * 0x18 + iVar8);
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44(*(undefined4 *)pdVar5,uVar10);
            dVar12 = (double)CONCAT44(uStack_6c,fVar11);
          }
          else {
            dVar14 = *pdVar5;
            dVar12 = (double)CONCAT44(uStack_68,uStack_6c);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) *
                                      (float)((ulonglong)dVar12 >> 0x20),SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          puVar4 = (undefined8 *)(iStack_150 * 0x18 + iVar8 + 4);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_68,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_64,uStack_68);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20),
                                      SUB84(dVar14,0));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          puVar4 = (undefined8 *)(asStack_16a[sVar9] * 0x18 + iVar8 + 8);
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(uStack_64,*(undefined4 *)puVar4);
          }
          else {
            in_xd0 = *puVar4;
            dVar12 = (double)CONCAT44(uStack_60,uStack_64);
          }
          if (cVar17 == '\0') {
            fVar11 = SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20);
            dVar14 = (double)CONCAT44((float)((ulonglong)dVar14 >> 0x20) + fVar11,SUB84(dVar14,0));
          }
          else {
            fVar11 = SUB84(dVar12 * dVar12,0);
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),uStack_6c);
            dVar12 = (double)CONCAT44(*(undefined4 *)ar5,fVar11);
          }
          else {
            dVar12 = *ar5;
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)((int)ar5 + 4),uStack_68);
          }
          else {
            in_xd0 = CONCAT44(uStack_64,uStack_68);
            dVar12 = *(double *)((int)ar5 + 4);
          }
          if (cVar17 == '\0') {
            dVar14 = (double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),
                                      SUB84(dVar14,0) +
                                      SUB84(dVar12,0) * (float)((ulonglong)dVar12 >> 0x20));
          }
          else {
            dVar14 = dVar14 + dVar12 * dVar12;
          }
          if (cVar18 == '\0') {
            dVar12 = (double)CONCAT44(*(undefined4 *)(ar5 + 1),uStack_64);
          }
          else {
            in_xd0 = CONCAT44(uStack_60,uStack_64);
            dVar12 = ar5[1];
          }
          if (cVar17 == '\0') {
            fVar13 = (float)((ulonglong)dVar12 >> 0x20);
            fVar11 = SUB84(dVar12,0) * fVar13;
            dVar12 = (double)CONCAT44(fVar13,fVar11);
            fVar13 = (float)((ulonglong)dVar14 >> 0x20);
            in_dr14 = (double)CONCAT44(fVar13,(SUB84(dVar14,0) + fVar11) - fVar13);
          }
          else {
            dVar12 = dVar12 * dVar12;
            in_dr14 = (dVar14 + dVar12) - (dVar14 + dVar12);
          }
          dVar12 = (double)((ulonglong)dVar12 & 0xffffffff);
          if (cVar17 == '\0') {
            bVar16 = 0.0 < SUB84(in_dr14,0);
          }
          else {
            bVar16 = dVar12 < in_dr14;
          }
          if (bVar16) {
            sVar2 = 0;
            break;
          }
          sVar2 = sVar2 + 1;
          if (sVar2 == 3) {
            if (cVar18 == '\0') {
              *ar6 = fStack_78;
              ar6[1] = fStack_74;
              ar6[2] = fStack_70;
              *ar7 = fStack_84;
              ar7[1] = fStack_80;
              ar7[2] = fStack_7c;
            }
            else {
              *(ulonglong *)ar6 = CONCAT44(fStack_74,fStack_78);
              *(ulonglong *)(ar6 + 1) = CONCAT44(fStack_70,fStack_74);
              *(ulonglong *)(ar6 + 2) = CONCAT44(uStack_6c,fStack_70);
              *(ulonglong *)ar7 = CONCAT44(fStack_80,fStack_84);
              *(ulonglong *)(ar7 + 1) = CONCAT44(fStack_7c,fStack_80);
              *(ulonglong *)(ar7 + 2) = CONCAT44(fStack_78,fStack_7c);
            }
            uStack_b8 = 1;
            Vec3_dtor(&uStack_6c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(&uStack_5c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_4c,0xffffffff,pfVar6,ar7_00);
            Vec3_dtor(auStack_3c,0xffffffff,pfVar6,ar7_00);
            return uStack_b8;
          }
          sVar9 = sVar9 + 1;
        }
        bVar15 = (bool)(bVar15 ^ 1);
      }
    }
    asStack_16a[4] = asStack_16a[4] + 1;
  } while( true );
}

__asm__(".globl _FUN_8c0185a4\n.set _FUN_8c0185a4, _FUN_8c0185a4_def\n");
//@unit 8c018f7c
#include "../decls.h"
undefined4 noop_018f7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_018f7c\n.set _noop_018f7c, _noop_018f7c_def\n");
//@unit 8c018f80
#include "../decls.h"
undefined4 * FUN_8c018f80_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x30) = *ar5;
  *(undefined4 *)(ar4 + 0x34) = ar5[1];
  *(undefined4 *)(ar4 + 0x38) = ar5[2];
  *(undefined4 *)(ar4 + 0x3c) = in_fr4;
  return (undefined4 *)(ar4 + 0x38);
}

__asm__(".globl _FUN_8c018f80\n.set _FUN_8c018f80, _FUN_8c018f80_def\n");
//@unit 8c018fa8
#include "../decls.h"
undefined4 noop_018fa8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_018fa8\n.set _noop_018fa8, _noop_018fa8_def\n");
//@unit 8c018fac
#include "../decls.h"
undefined4 noop_018fac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_018fac\n.set _noop_018fac, _noop_018fac_def\n");
//@unit 8c018fb0
#include "../decls.h"
undefined4 FUN_8c018fb0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125908),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279110;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279110,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125918),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27911c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27911c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125928),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279128;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279128,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125938),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c279134,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c018fb0\n.set _FUN_8c018fb0, _FUN_8c018fb0_def\n");
//@unit 8c019058
#include "../decls.h"
undefined4 FUN_8c019058_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  uVar1 = FUN_8c25b5d0(0,ar5,ar6,ar7,(int)((ulonglong)in_dr4 >> 0x20));
  return uVar1;
}

__asm__(".globl _FUN_8c019058\n.set _FUN_8c019058, _FUN_8c019058_def\n");
//@unit 8c019088
#include "../decls.h"
undefined4 FUN_8c019088_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr5;
  float in_fr4;
  float in_fr6;
  
  uVar1 = FUN_8c256b0c(0,(int)((in_fr4 * 65536.0) / 360.0),(int)((in_fr5 * 65536.0) / 360.0),
                       (int)((in_fr6 * 65536.0) / 360.0),in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c019088\n.set _FUN_8c019088, _FUN_8c019088_def\n");
//@unit 8c0190f0
#include "../decls.h"
undefined4 FUN_8c0190f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256a78(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c0190f0\n.set _FUN_8c0190f0, _FUN_8c0190f0_def\n");
//@unit 8c019128
#include "../decls.h"
undefined4 FUN_8c019128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256ce0(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c019128\n.set _FUN_8c019128, _FUN_8c019128_def\n");
//@unit 8c019160
#include "../decls.h"
undefined4 FUN_8c019160_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float in_fr4;
  
  uVar1 = FUN_8c256d7c(0,(int)((in_fr4 * 65536.0) / 360.0),ar6,ar7,in_fr4);
  return uVar1;
}

__asm__(".globl _FUN_8c019160\n.set _FUN_8c019160, _FUN_8c019160_def\n");
//@unit 8c019198
#include "../decls.h"
undefined4 FUN_8c019198_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  
  uVar1 = FUN_8c256fec(0,ar5,ar6,ar7,(int)((ulonglong)in_dr4 >> 0x20));
  return uVar1;
}

__asm__(".globl _FUN_8c019198\n.set _FUN_8c019198, _FUN_8c019198_def\n");
//@unit 8c0191c8
#include "../decls.h"
undefined4 FUN_8c0191c8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c23617c(ar4,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0191c8\n.set _FUN_8c0191c8, _FUN_8c0191c8_def\n");
//@unit 8c0191e4
#include "../decls.h"
undefined4 * FUN_8c0191e4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c129a50);
  FUN_8c0192a8(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c0191e4\n.set _FUN_8c0191e4, _FUN_8c0191e4_def\n");
//@unit 8c019208
#include "../decls.h"
undefined4 * FUN_8c019208_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c129a50);
  FUN_8c019384(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c019208\n.set _FUN_8c019208, _FUN_8c019208_def\n");
//@unit 8c019270
#include "../decls.h"
undefined4 *
free_if_nonnull_wrap_019270_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != (undefined4 *)0x0) && (*ar4 = &DAT_8c129a50, 0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_019270\n.set _free_if_nonnull_wrap_019270, _free_if_nonnull_wrap_019270_def\n");
//@unit 8c0192a8
#include "../decls.h"
undefined * FUN_8c0192a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x60) = 0;
  *(undefined4 *)(ar4 + 0x44) = 0;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x48) = 0;
  *(undefined4 *)(ar4 + 0x68) = 0;
  *(undefined4 *)(ar4 + 0x4c) = 0;
  *(undefined4 *)(ar4 + 0x6c) = 0;
  *(undefined4 *)(ar4 + 0x50) = 0;
  *(undefined4 *)(ar4 + 0x70) = 0;
  *(undefined4 *)(ar4 + 0x54) = 0;
  *(undefined4 *)(ar4 + 0x74) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x58) = 0xbf800000;
  *(undefined4 *)(ar4 + 0x78) = 0;
  *(undefined4 *)(ar4 + 0x5c) = 0;
  *(undefined4 *)(ar4 + 0x7c) = 0x41f00000;
  return &DAT_8c019380;
}

__asm__(".globl _FUN_8c0192a8\n.set _FUN_8c0192a8, _FUN_8c0192a8_def\n");
//@unit 8c019384
#include "../decls.h"
undefined4 FUN_8c019384_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined8 in_dr4;
  undefined4 in_fr7;
  undefined4 in_fr6;
  undefined4 in_fr9;
  undefined4 in_fr8;
  undefined4 in_fr11;
  float in_fr10;
  int iVar2;
  
  uVar1 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  *(undefined4 *)(ar4 + 0x60) = uVar1;
  *(undefined4 *)(ar4 + 0x44) = uVar1;
  *(int *)(ar4 + 100) = (int)in_dr4;
  *(int *)(ar4 + 0x48) = (int)in_dr4;
  *(undefined4 *)(ar4 + 0x68) = in_fr6;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  *(undefined4 *)(ar4 + 0x6c) = in_fr7;
  *(undefined4 *)(ar4 + 0x50) = in_fr7;
  *(undefined4 *)(ar4 + 0x70) = in_fr8;
  *(undefined4 *)(ar4 + 0x54) = in_fr8;
  *(undefined4 *)(ar4 + 0x74) = in_fr9;
  *(undefined4 *)(ar4 + 0x58) = in_fr9;
  iVar2 = (int)((in_fr10 * 65536.0) / 360.0);
  *(int *)(ar4 + 0x78) = iVar2;
  *(int *)(ar4 + 0x5c) = iVar2;
  *(undefined4 *)(ar4 + 0x7c) = in_fr11;
  uVar1 = FUN_8c0194c0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c019384\n.set _FUN_8c019384, _FUN_8c019384_def\n");
//@unit 8c0194c0
#include "../decls.h"
undefined4 FUN_8c0194c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x7c) = in_fr4;
  uVar1 = FUN_8c257148((int)((*(float *)(ar4 + 0x7c) * 65536.0) / 360.0),ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0194c0\n.set _FUN_8c0194c0, _FUN_8c0194c0_def\n");
//@unit 8c019508
#include "../decls.h"
undefined8 * FUN_8c019508_def(undefined4 ar4,undefined4 *ar5,undefined8 *ar6,undefined8 *ar7)

{
  char cVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar1 = '\0';
  uStack_14 = *ar5;
  uStack_10 = ar5[1];
  uStack_c = ar5[2];
  FUN_8c256294(0,&uStack_14,&uStack_1c,ar7);
  if (cVar1 == '\0') {
    *(undefined4 *)ar6 = uStack_1c;
    *(undefined4 *)ar7 = uStack_18;
  }
  else {
    *ar6 = CONCAT44(uStack_18,uStack_1c);
    *ar7 = CONCAT44(uStack_14,uStack_18);
  }
  return ar7;
}

__asm__(".globl _FUN_8c019508\n.set _FUN_8c019508, _FUN_8c019508_def\n");
//@unit 8c019560
#include "../decls.h"
undefined4 * FUN_8c019560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x44) = in_fr4;
  *(undefined4 *)(ar4 + 0x48) = in_fr5;
  *(undefined4 *)(ar4 + 0x4c) = in_fr6;
  return (undefined4 *)(ar4 + 0x48);
}

__asm__(".globl _FUN_8c019560\n.set _FUN_8c019560, _FUN_8c019560_def\n");
//@unit 8c019574
#include "../decls.h"
undefined4 * FUN_8c019574_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr5;
  undefined4 in_fr4;
  undefined4 in_fr6;
  
  *(undefined4 *)(ar4 + 0x50) = in_fr4;
  *(undefined4 *)(ar4 + 0x54) = in_fr5;
  *(undefined4 *)(ar4 + 0x58) = in_fr6;
  return (undefined4 *)(ar4 + 0x54);
}

__asm__(".globl _FUN_8c019574\n.set _FUN_8c019574, _FUN_8c019574_def\n");
//@unit 8c019588
#include "../decls.h"
undefined4 Class_1299f8_m4_019588_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined1 *ar6_00;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined8 in_dr4;
  undefined4 uVar8;
  undefined8 in_dr6;
  undefined4 in_fr13;
  float fVar9;
  undefined4 uVar10;
  double in_xd0;
  int iVar11;
  char cVar12;
  char cVar13;
  undefined4 in_stack_00000000;
  undefined4 uStack_168;
  undefined4 auStack_160 [4];
  undefined1 auStack_150 [12];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 auStack_138 [16];
  undefined1 auStack_f8 [64];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [64];
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 auStack_28 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar8 = (undefined4)((ulonglong)in_dr4 >> 0x20);
  dVar4 = (double)CONCAT44((int)in_dr4,in_fr13);
  uVar10 = (undefined4)((ulonglong)in_dr6 >> 0x20);
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  FUN_8c0241e8(&uStack_48,ar5,ar6,ar7);
  FUN_8c024088(&uStack_68,ar5,ar6,ar7);
  FUN_8c023e44(auStack_a8,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_b8,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    uStack_144 = *(undefined4 *)(ar4 + 0x50);
    uStack_140 = *(undefined4 *)(ar4 + 0x54);
    uStack_13c = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    uStack_144 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_140 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_13c = (undefined4)*(undefined8 *)(ar4 + 0x58);
    auStack_138[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  FUN_8c023e7c(auStack_a8,ar5,ar6,ar7);
  FUN_8c25cddc(auStack_f8,ar5,ar6,ar7,uVar8);
  puVar1 = auStack_138;
  FUN_8c25cddc(puVar1,ar5,ar6,ar7,uVar8);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b4,uVar8);
  }
  else {
    in_xd0 = (double)CONCAT44(uStack_168,uVar8);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,_DAT_8c4aa4b4);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar2 = SUB84(dVar7 - dVar7,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(_DAT_8c4aa4b8,fVar2);
  }
  else {
    fVar2 = SUB84(in_xd0,0);
    dVar7 = (double)CONCAT44(_DAT_8c4aa4bc,_DAT_8c4aa4b8);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar9 = (float)((ulonglong)(dVar4 - dVar7) >> 0x20);
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x47800000,uVar8);
    dVar7 = in_xd0;
  }
  else {
    dVar4 = 12831.689682006836;
    auStack_160[0] = uVar8;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) * (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar4 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar4 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar4,0) / (float)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44((float)(int)fVar3,uVar10);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
    dVar4 = (double)(int)(dVar4 / dVar4);
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar5;
  }
  if (cVar13 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,SUB84(dVar5,0));
  }
  else {
    dVar5 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar5 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 / dVar5;
  }
  FUN_8c013b8c(puVar1,ar5,ar6,ar7);
  if (cVar13 == '\0') {
    dVar6 = (double)CONCAT44(0x47800000,(int)((ulonglong)dVar5 >> 0x20));
    dVar5 = dVar7;
  }
  else {
    dVar6 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
  }
  else {
    fVar3 = SUB84(dVar6 * dVar6,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x40c90fd8,fVar3);
  }
  else {
    dVar7 = 1.4411521590097244e+18;
  }
  if (cVar12 == '\0') {
    fVar3 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
    iVar11 = (int)fVar3;
  }
  else {
    fVar3 = SUB84(dVar7 / dVar7,0);
    iVar11 = (int)(dVar7 / dVar7);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar3);
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11 * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(fVar9,(float)iVar11) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                             SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = dVar6 / dVar7;
  }
  uVar8 = (undefined4)((ulonglong)dVar6 >> 0x20);
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0) * (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    dVar6 = (double)CONCAT44(uVar8,-SUB84(dVar6,0)) * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    iVar11 = (int)(SUB84(dVar6,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar11 = (int)(dVar6 / dVar7);
  }
  FUN_8c256ce0(auStack_f8,iVar11,ar6,ar7,fVar2);
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44(-(float)((ulonglong)dVar4 >> 0x20),SUB84(dVar4,0));
  }
  else {
    dVar4 = -dVar4;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
  }
  else {
    dVar7 = 12831.689682006836;
  }
  if (cVar12 == '\0') {
    dVar4 = (double)CONCAT44((float)((ulonglong)dVar4 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20),
                             SUB84(dVar4,0));
  }
  else {
    dVar4 = dVar4 * dVar7;
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
  }
  else {
    dVar7 = -3.740593052227333e-250;
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar4 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20);
    dVar4 = (double)CONCAT44(fVar9,SUB84(dVar4,0));
    iVar11 = (int)fVar9;
  }
  else {
    dVar4 = dVar4 / dVar7;
    iVar11 = (int)dVar4;
  }
  FUN_8c256a78(auStack_138,iVar11,ar6,ar7,fVar2);
  FUN_8c255d6c(auStack_f8,auStack_138,ar6,ar7,fVar2);
  ar6_00 = auStack_150;
  puVar1 = &uStack_144;
  FUN_8c21279c(auStack_f8,puVar1,ar6_00,ar7,fVar2);
  FUN_8c022d04(auStack_58,puVar1,ar6_00,ar7);
  Vec3_length(auStack_58,puVar1,ar6_00,ar7);
  if (cVar13 == '\0') {
    uStack_68 = *(undefined4 *)(ar4 + 0x44);
    uStack_64 = *(undefined4 *)(ar4 + 0x48);
    uStack_60 = *(undefined4 *)(ar4 + 0x4c);
    dVar7 = (double)CONCAT44(uStack_60,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    uStack_68 = (undefined4)*(undefined8 *)(ar4 + 0x44);
    uStack_64 = (undefined4)*(undefined8 *)(ar4 + 0x48);
    dVar7 = *(double *)(ar4 + 0x4c);
    uStack_60 = SUB84(dVar7,0);
    uStack_5c = (undefined4)((ulonglong)dVar7 >> 0x20);
    dVar5 = *(double *)(ar4 + 0x50);
  }
  fVar2 = SUB84(dVar4,0);
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x44);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_48 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x54));
  }
  else {
    uStack_48 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x54);
  }
  if (cVar12 == '\0') {
    fVar9 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar9 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar7 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar9);
  }
  else {
    dVar7 = *(double *)(ar4 + 0x48);
  }
  if (cVar12 == '\0') {
    fVar9 = (float)((ulonglong)dVar7 >> 0x20);
    dVar7 = (double)CONCAT44(fVar9,SUB84(dVar7,0) + fVar9);
  }
  else {
    dVar7 = dVar7 + dVar7;
  }
  if (cVar13 == '\0') {
    uStack_44 = SUB84(dVar7,0);
    dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),*(undefined4 *)(ar4 + 0x58));
  }
  else {
    uStack_44 = SUB84(dVar5,0);
    dVar5 = *(double *)(ar4 + 0x58);
  }
  if (cVar12 == '\0') {
    fVar2 = SUB84(dVar7,0) * fVar2;
  }
  else {
    fVar2 = SUB84(dVar7 * dVar4,0);
  }
  if (cVar13 == '\0') {
    dVar4 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar2);
  }
  else {
    dVar4 = *(double *)(ar4 + 0x4c);
  }
  if (cVar12 == '\0') {
    fStack_40 = SUB84(dVar4,0) + (float)((ulonglong)dVar4 >> 0x20);
  }
  else {
    fStack_40 = SUB84(dVar4 + dVar4,0);
  }
  if (cVar13 == '\0') {
    uStack_38 = *(undefined4 *)(ar4 + 0x50);
    uStack_34 = *(undefined4 *)(ar4 + 0x54);
    uStack_30 = *(undefined4 *)(ar4 + 0x58);
  }
  else {
    fStack_40 = SUB84(dVar5,0);
    uStack_3c = (undefined4)((ulonglong)dVar5 >> 0x20);
    uStack_38 = (undefined4)*(undefined8 *)(ar4 + 0x50);
    uStack_34 = (undefined4)*(undefined8 *)(ar4 + 0x54);
    uStack_30 = (undefined4)*(undefined8 *)(ar4 + 0x58);
    uStack_2c = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x58) >> 0x20);
  }
  puVar1 = &uStack_48;
  FUN_8c0240bc(&uStack_68,&uStack_38,puVar1,ar7);
  Vec3_assign(auStack_28,auStack_160,puVar1,ar7);
  Vec3_dtor(auStack_160,0xffffffff,puVar1,ar7);
  Vec3_ctor_copy(in_stack_00000000,auStack_28,puVar1,ar7);
  Vec3_dtor(auStack_b8,0xffffffff,puVar1,ar7);
  free_if_nonnull_wrap_023e4c(auStack_a8,0xffffffff,puVar1,ar7);
  FUN_8c0198dc(&uStack_68,0xffffffff,puVar1,ar7);
  FUN_8c019928(&uStack_48,0xffffffff,puVar1,ar7);
  Vec3_dtor(auStack_28,0xffffffff,puVar1,ar7);
  return 0;
}

__asm__(".globl _Class_1299f8_m4_019588\n.set _Class_1299f8_m4_019588, _Class_1299f8_m4_019588_def\n");
//@unit 8c0198dc
#include "../decls.h"
int FUN_8c0198dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c0198dc\n.set _FUN_8c0198dc, _FUN_8c0198dc_def\n");
//@unit 8c019928
#include "../decls.h"
int FUN_8c019928_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    Vec3_dtor(ar4 + 0x10,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    Vec3_dtor(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c019928\n.set _FUN_8c019928, _FUN_8c019928_def\n");
//@unit 8c019974
#include "../decls.h"
undefined4 FUN_8c019974_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  FUN_8c014334(0x8c279178,ar5,ar6,ar7,"x:%4.1lf y:%4.1lf z:%4.1lf");
  uVar1 = noop_102824(0x8c279178,ar5,ar6,0xd,0xffffffff);
  return uVar1;
}

__asm__(".globl _FUN_8c019974\n.set _FUN_8c019974, _FUN_8c019974_def\n");
//@unit 8c0199d4
#include "../decls.h"
undefined4 * FUN_8c0199d4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c019208(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c129a24);
  Vec3_ctor_zero((int)ar4 + 0x80,ar5,ar6,ar7);
  Vec3_ctor_xyz((int)ar4 + 0x90,ar5,ar6,ar7);
  Vec3_ctor_xyz((int)ar4 + 0xa0,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0xb0,ar5,ar6,ar7);
  *(undefined4 *)(0xbc + (int)ar4) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c0199d4\n.set _FUN_8c0199d4, _FUN_8c0199d4_def\n");
//@unit 8c019aa0
#include "../decls.h"
undefined4 * Class_129a24_m0_019aa0_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c129a24;
    object_dtor_delete(ar4 + 0x2c,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x28,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x24,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x20,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    free_if_nonnull_wrap_019270(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_129a24_m0_019aa0\n.set _Class_129a24_m0_019aa0, _Class_129a24_m0_019aa0_def\n");
//@unit 8c019b38
#include "../decls.h"
undefined4 FUN_8c019b38_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x84) = in_fr4;
  return 0x84;
}

__asm__(".globl _FUN_8c019b38\n.set _FUN_8c019b38, _FUN_8c019b38_def\n");
//@unit 8c019b48
#include "../decls.h"
undefined4 FUN_8c019b48_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined8 in_dr4;
  
  *(float *)(ar4 + 0x84) = -(float)((ulonglong)in_dr4 >> 0x20);
  return 0x84;
}

__asm__(".globl _FUN_8c019b48\n.set _FUN_8c019b48, _FUN_8c019b48_def\n");
//@unit 8c019b58
#include "../decls.h"
undefined4 FUN_8c019b58_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_fr4;
  
  *(undefined4 *)(ar4 + 0x88) = in_fr4;
  return 0x88;
}

__asm__(".globl _FUN_8c019b58\n.set _FUN_8c019b58, _FUN_8c019b58_def\n");
//@unit 8c019b68
#include "../decls.h"
undefined4 Class_129a24_m1_019b68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float fVar4;
  double dVar5;
  undefined8 in_xd0;
  int iVar6;
  char cVar7;
  char cVar8;
  undefined4 in_stack_ffffff28;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 auStack_88 [16];
  undefined1 auStack_48 [68];
  
  cVar8 = '\0';
  cVar7 = '\0';
  uStack_94 = *(undefined4 *)(ar4 + 0x90);
  uStack_90 = *(undefined4 *)(ar4 + 0x94);
  uStack_8c = *(undefined4 *)(ar4 + 0x98);
  uStack_a0 = *(undefined4 *)(ar4 + 0xa0);
  uStack_9c = *(undefined4 *)(ar4 + 0xa4);
  uStack_98 = *(undefined4 *)(ar4 + 0xa8);
  FUN_8c25cddc(auStack_48,ar5,ar6,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,ar5,ar6,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb4));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb4);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256ce0(auStack_88,iVar6,ar6,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,ar6,ar7,in_stack_ffffff28);
  puVar3 = &uStack_ac;
  puVar2 = &uStack_94;
  FUN_8c21279c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_ac,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a8,uStack_ac);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_a4,*(undefined4 *)(ar4 + 0x80));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x80);
    dVar5 = (double)CONCAT44(uStack_a0,uStack_a4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  FUN_8c235f44(ar4 + 4,puVar2,puVar3,ar7);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb0));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb0);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256a78(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  puVar2 = auStack_88;
  FUN_8c255d6c(auStack_48,puVar2,puVar3,ar7,in_stack_ffffff28);
  FUN_8c25cddc(auStack_88,puVar2,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0xb8));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0xb8);
    dVar5 = 1.4411521878487204e+18;
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(0x43b40000,fVar4);
  }
  else {
    dVar5 = -3.740593052227333e-250;
  }
  if (cVar7 == '\0') {
    iVar6 = (int)(SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20));
  }
  else {
    iVar6 = (int)(dVar5 / dVar5);
  }
  FUN_8c256d7c(auStack_88,iVar6,puVar3,ar7,in_stack_ffffff28);
  FUN_8c255d6c(auStack_48,auStack_88,puVar3,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    uStack_94 = *(undefined4 *)(ar4 + 0x6c);
    uStack_90 = *(undefined4 *)(ar4 + 0x70);
    uStack_8c = *(undefined4 *)(ar4 + 0x74);
  }
  else {
    uStack_94 = (undefined4)*(undefined8 *)(ar4 + 0x6c);
    uStack_90 = (undefined4)*(undefined8 *)(ar4 + 0x70);
    uStack_8c = (undefined4)*(undefined8 *)(ar4 + 0x74);
    auStack_88[0] = (undefined4)((ulonglong)*(undefined8 *)(ar4 + 0x74) >> 0x20);
  }
  FUN_8c21279c(auStack_48,&uStack_94,&uStack_c4,ar7,in_stack_ffffff28);
  if (cVar8 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = uStack_c4;
    *(undefined4 *)(ar4 + 0x54) = uStack_c0;
    *(undefined4 *)(ar4 + 0x58) = uStack_bc;
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = CONCAT44(uStack_c0,uStack_c4);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_bc,uStack_c0);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(uStack_b8,uStack_bc);
  }
  puVar3 = &uStack_b8;
  puVar2 = &uStack_c4;
  FUN_8c255f40(&uStack_ac,puVar2,puVar3,ar7);
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(uStack_b8,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b4,uStack_b8);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x44),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x44);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x44) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b4,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x44) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_b0,uStack_b4);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x48);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x48) = fVar4;
    dVar5 = (double)CONCAT44(uStack_b0,*(undefined4 *)(ar4 + 0x84));
  }
  else {
    *(undefined8 *)(ar4 + 0x48) = in_xd0;
    in_xd0 = *(undefined8 *)(ar4 + 0x84);
    dVar5 = (double)CONCAT44(uStack_ac,uStack_b0);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 * dVar5,0);
  }
  if (cVar8 == '\0') {
    dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x4c),fVar4);
  }
  else {
    dVar5 = *(double *)(ar4 + 0x4c);
  }
  if (cVar7 == '\0') {
    fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
  }
  else {
    fVar4 = SUB84(dVar5 + dVar5,0);
  }
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x4c) = fVar4;
  }
  else {
    *(undefined8 *)(ar4 + 0x4c) = in_xd0;
  }
  vec3_clear(ar4 + 0x80,puVar2,puVar3,ar7);
  uVar1 = FUN_8c2572ec(ar4 + 4,puVar2,puVar3,ar7);
  return uVar1;
}

__asm__(".globl _Class_129a24_m1_019b68\n.set _Class_129a24_m1_019b68, _Class_129a24_m1_019b68_def\n");
//@unit 8c019e40
#include "../decls.h"
undefined4
Class_129a24_m4_019e40_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [20];
  
  Class_1299f8_m4_019588(ar4,ar5,ar6,ar7);
  Vec3_ctor_copy(auStack_14,auStack_24,ar6,ar7);
  Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
  Vec3_ctor_copy(s0,auStack_14,ar6,ar7);
  Vec3_dtor(auStack_14,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _Class_129a24_m4_019e40\n.set _Class_129a24_m4_019e40, _Class_129a24_m4_019e40_def\n");
//@unit 8c019eb8
#include "../decls.h"
undefined4 * Class_1299f8_m0_019eb8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299f8;
    ar5_00 = 0;
    free_if_nonnull_wrap_019270(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_1299f8_m0_019eb8\n.set _Class_1299f8_m0_019eb8, _Class_1299f8_m0_019eb8_def\n");
//@unit 8c019f00
#include "../decls.h"
undefined4 Class_1299f8_m3_019f00_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  double dVar1;
  undefined4 uVar2;
  undefined4 ar5_00;
  double dVar3;
  float fVar5;
  undefined4 in_fr14;
  undefined8 in_xd0;
  bool bVar6;
  char cVar7;
  char cVar8;
  undefined8 uStack_6c;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 auStack_3c [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  float fVar4;
  
  cVar8 = '\0';
  cVar7 = '\0';
  uVar2 = ar5;
  Vec3_ctor_zero(&uStack_1c,ar5,ar6,ar7);
  Vec3_ctor_zero(&uStack_2c,ar5,ar6,ar7);
  Vec3_ctor_xyz(auStack_3c,ar5,ar6,ar7);
  fVar5 = 0.0;
  Vec3_sub(uVar2,auStack_3c,ar6,ar7,auStack_58);
  Vec3_assign(&uStack_1c,auStack_58,ar6,ar7);
  Vec3_dtor(auStack_58,0xffffffff,ar6,ar7);
  FUN_8c023c30(&uStack_1c,ar4 + 0x80,ar6,ar7,(int)&uStack_6c + 4);
  Vec3_assign(&uStack_2c,(int)&uStack_6c + 4,ar6,ar7);
  ar5_00 = 0xffffffff;
  Vec3_dtor((int)&uStack_6c + 4,0xffffffff,ar6,ar7);
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_2c,uStack_1c);
  }
  else {
    in_xd0 = CONCAT44(uStack_18,uStack_1c);
    dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
  }
  if (cVar7 == '\0') {
    fStack_48 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_48 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_28,uStack_18);
  }
  else {
    fStack_48 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_14,uStack_18);
    dVar3 = (double)CONCAT44(uStack_24,uStack_28);
  }
  if (cVar7 == '\0') {
    fStack_44 = SUB84(dVar3,0) - (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    fStack_44 = SUB84(dVar3 - dVar3,0);
  }
  if (cVar8 == '\0') {
    dVar3 = (double)CONCAT44(uStack_24,uStack_14);
  }
  else {
    fStack_44 = (float)in_xd0;
    in_xd0 = CONCAT44(uStack_10,uStack_14);
    dVar3 = (double)CONCAT44(uStack_20,uStack_24);
  }
  if (cVar7 == '\0') {
    fVar4 = (float)((ulonglong)dVar3 >> 0x20);
    dVar3 = (double)CONCAT44(fVar4,SUB84(dVar3,0) - fVar4);
  }
  else {
    dVar3 = dVar3 - dVar3;
  }
  if (cVar8 == '\0') {
    uStack_40 = SUB84(dVar3,0);
  }
  else {
    uStack_40 = (undefined4)in_xd0;
    auStack_3c[0] = (undefined4)((ulonglong)in_xd0 >> 0x20);
  }
  FUN_8c2570d8(&fStack_48,ar5_00,ar6,ar7,uVar2);
  dVar1 = dVar3;
  if (cVar8 == '\0') {
    fVar5 = (float)((ulonglong)dVar3 >> 0x20);
    uStack_6c = (double)CONCAT44((*(uint*)((uchar*)&uStack_6c+4)),fVar5);
    dVar1 = uStack_6c;
  }
  uStack_6c = dVar1;
  FUN_8c25ce48(&fStack_48,ar5_00,ar6,ar7,uVar2);
  if (cVar8 == '\0') {
    *(float *)(ar4 + 0x50) = fStack_48;
    *(float *)(ar4 + 0x54) = fStack_44;
    *(undefined4 *)(ar4 + 0x58) = uStack_40;
    dVar3 = (double)CONCAT44(0x43fa0000,SUB84(dVar3,0));
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = CONCAT44(fStack_44,fStack_48);
    *(ulonglong *)(ar4 + 0x54) = CONCAT44(uStack_40,fStack_44);
    *(ulonglong *)(ar4 + 0x58) = CONCAT44(auStack_3c[0],uStack_40);
    dVar3 = 1.6066918595405548e+73;
  }
  if (cVar7 == '\0') {
    bVar6 = fVar5 < (float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    bVar6 = (double)CONCAT44(in_fr14,fVar5) < dVar3;
  }
  if (bVar6) {
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  else {
    if (cVar8 == '\0') {
      dVar3 = (double)CONCAT44(uStack_2c,*(undefined4 *)(ar4 + 0x44));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x44);
      dVar3 = (double)CONCAT44(uStack_28,uStack_2c);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x44) = fVar5;
      dVar3 = (double)CONCAT44(uStack_28,*(undefined4 *)(ar4 + 0x48));
    }
    else {
      *(undefined8 *)(ar4 + 0x44) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x48);
      dVar3 = (double)CONCAT44(uStack_24,uStack_28);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x48) = fVar5;
      dVar3 = (double)CONCAT44(uStack_24,*(undefined4 *)(ar4 + 0x4c));
    }
    else {
      *(undefined8 *)(ar4 + 0x48) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x4c);
      dVar3 = (double)CONCAT44(uStack_20,uStack_24);
    }
    if (cVar7 == '\0') {
      fVar5 = SUB84(dVar3,0) + (float)((ulonglong)dVar3 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar3 + dVar3,0);
    }
    if (cVar8 == '\0') {
      *(float *)(ar4 + 0x4c) = fVar5;
    }
    else {
      *(undefined8 *)(ar4 + 0x4c) = in_xd0;
    }
    Vec3_dtor(auStack_3c,0xffffffff,ar6,ar7);
    Vec3_dtor(&uStack_2c,0xffffffff,ar6,ar7);
    uVar2 = Vec3_dtor(&uStack_1c,0xffffffff,ar6,ar7);
  }
  return uVar2;
}

__asm__(".globl _Class_1299f8_m3_019f00\n.set _Class_1299f8_m3_019f00, _Class_1299f8_m3_019f00_def\n");
//@unit 8c01a0cc
#include "../decls.h"
undefined4 * FUN_8c01a0cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = (&DATA_8c1299ec);
  Vec3_set_zero((int)ar4 + 0x15c,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c01a0cc\n.set _FUN_8c01a0cc, _FUN_8c01a0cc_def\n");
//@unit 8c01a0f8
#include "../decls.h"
undefined4 * Class_1299ec_m0_01a0f8_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c1299ec;
    ar5_00 = 0xffffffff;
    object_dtor_delete(ar4 + 0x57,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_1299ec_m0_01a0f8\n.set _Class_1299ec_m0_01a0f8, _Class_1299ec_m0_01a0f8_def\n");
//@unit 8c01a148
#include "../decls.h"
undefined4 Class_1299f8_m1_01a148_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2572ec(ar4 + 4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1299f8_m1_01a148\n.set _Class_1299f8_m1_01a148, _Class_1299f8_m1_01a148_def\n");
//@unit 8c01a164
#include "../decls.h"
undefined4 Class_1299f8_m2_01a164_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01a180(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_1299f8_m2_01a164\n.set _Class_1299f8_m2_01a164, _Class_1299f8_m2_01a164_def\n");
//@unit 8c01a180
#include "../decls.h"
undefined4 FUN_8c01a180_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c25699c(ar4 + 4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01a180\n.set _FUN_8c01a180, _FUN_8c01a180_def\n");
//@unit 8c01a19c
#include "../decls.h"
undefined4 noop_01a19c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_01a19c\n.set _noop_01a19c, _noop_01a19c_def\n");
//@unit 8c01a1a0
#include "../decls.h"
undefined4 noop_01a1a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_01a1a0\n.set _noop_01a1a0, _noop_01a1a0_def\n");
//@unit 8c01a1a4
#include "../decls.h"
undefined4 ret_const_1_01a1a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_01a1a4\n.set _ret_const_1_01a1a4, _ret_const_1_01a1a4_def\n");
//@unit 8c01a1ac
#include "../decls.h"
int FUN_8c01a1ac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xbc;
  *(undefined4 *)(0xbc + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c01a1ac\n.set _FUN_8c01a1ac, _FUN_8c01a1ac_def\n");
//@unit 8c01a1bc
#include "../decls.h"
int FUN_8c01a1bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xbc;
  *(undefined4 *)(0xbc + ar4) = 1;
  return iVar1;
}

__asm__(".globl _FUN_8c01a1bc\n.set _FUN_8c01a1bc, _FUN_8c01a1bc_def\n");
//@unit 8c01a1cc
#include "../decls.h"
undefined4 get_field_bc_01a1cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xbc + ar4);
}

__asm__(".globl _get_field_bc_01a1cc\n.set _get_field_bc_01a1cc, _get_field_bc_01a1cc_def\n");
//@unit 8c01a1d8
#include "../decls.h"
int Class_129a24_m2_01a1d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c01a180(ar4,ar5,ar6,ar7);
  FUN_8c023d7c(ar4 + 0xb0,ar5,ar6,ar7);
  FUN_8c022d04(ar4 + 0x90,ar5,ar6,ar7);
  iVar1 = 0xbc;
  *(undefined4 *)(0xbc + ar4) = 1;
  return iVar1;
}

__asm__(".globl _Class_129a24_m2_01a1d8\n.set _Class_129a24_m2_01a1d8, _Class_129a24_m2_01a1d8_def\n");
//@unit 8c01a230
#include "../decls.h"
undefined4 Class_129a24_m3_01a230_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c23a8a4(ar4 + 4,ar5,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _Class_129a24_m3_01a230\n.set _Class_129a24_m3_01a230, _Class_129a24_m3_01a230_def\n");
//@unit 8c01a260
#include "../decls.h"
undefined4 FUN_8c01a260_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  uVar1 = Vec3_ctor_xyz((&DATA_8c125948),ar5,ar6,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279140;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279140,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125958),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c27914c;
  global_list_push(uVar1,(&Vec3_dtor),0x8c27914c,ar7);
  uVar1 = Vec3_ctor_xyz((&DATA_8c125968),puVar3,uVar2,ar7);
  puVar3 = (&Vec3_dtor);
  uVar2 = 0x8c279158;
  global_list_push(uVar1,(&Vec3_dtor),0x8c279158,ar7);
  uVar2 = Vec3_ctor_xyz((&DATA_8c125978),puVar3,uVar2,ar7);
  uVar2 = global_list_push(uVar2,(&Vec3_dtor),0x8c279164,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01a260\n.set _FUN_8c01a260, _FUN_8c01a260_def\n");
//@unit 8c01a308
#include "../decls.h"
undefined4 * FUN_8c01a308_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  for (uVar1 = 0; uVar1 < 0x80; uVar1 = uVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x244c + uVar1 * 0x28) = 0xffffffff;
  }
  *ar4 = 0xffffffff;
  *(undefined4 *)0x8c2791b4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  ar4[2] = 0xffffffff;
  *(undefined4 *)0x8c2791b0 = 0;
  ar4[3] = 10;
  ar4[6] = 0;
  ar4[7] = 0;
  FUN_8c01c944(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c01a308\n.set _FUN_8c01a308, _FUN_8c01a308_def\n");
//@unit 8c01a384
#include "../decls.h"
int free_if_nonnull_wrap_01a384_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_01a384\n.set _free_if_nonnull_wrap_01a384, _free_if_nonnull_wrap_01a384_def\n");
//@unit 8c01a3b4
#include "../decls.h"
uint FUN_8c01a3b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = s_VM_User_Icon_VMI_01a3ec(ar4,ar5,ar6,ar7);
  return (uint)(iVar1 == 3);
}

__asm__(".globl _FUN_8c01a3b4\n.set _FUN_8c01a3b4, _FUN_8c01a3b4_def\n");
//@unit 8c01a3e4
#include "../decls.h"
int s_VM_User_Icon_VMI_01a3ec_def(int *ar4,int ar5,int ar6,undefined *ar7)

{
  int iVar1;
  undefined *ar5_00;
  undefined *ar6_00;
  int *ar7_00;
  uint uVar2;
  
  if ((ar5 != ar4[1]) || (*(undefined4 *)0x8c2791b0 == 0)) {
    *(undefined4 *)0x8c2791b0 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      ar5 = 4;
      *(undefined4 *)0x8c2791b4 = 2;
      ar4[2] = 7;
    }
    else if (ar5 == 0xc) {
      ar5 = 0x10;
      *(undefined4 *)0x8c2791b4 = 4;
      ar4[2] = 0xd;
    }
    else if (ar5 == 0x12) {
      ar5 = 0x40;
      *(undefined4 *)0x8c2791b4 = 6;
      ar4[2] = 0x13;
    }
    else {
      ar5 = 1;
      *(undefined4 *)0x8c2791b4 = 0;
      ar4[2] = 1;
    }
    ar6 = (int)ar4 + 0x62c;
    ar7 = (&FUN_8c01c998);
    iVar1 = FUN_8c1fbd2c(0xf,ar5,ar6,(&FUN_8c01c998));
    if (iVar1 != 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    uVar2 = 0;
    while ((uVar2 <= 0xffff && (*(undefined4 *)0x8c2791b0 != 1))) {
      uVar2 = uVar2 + 1;
    }
    if (0xffff <= uVar2) {
      return *(undefined4 *)0x8c2791b0;
    }
  }
  if (*(undefined4 *)0x8c2791b0 == 1) {
    iVar1 = thunk_FUN_8c1fda7e(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    *(undefined4 *)0x8c2791b0 = 2;
  }
  if (*(undefined4 *)0x8c2791b0 == 2) {
    iVar1 = thunk_FUN_8c1ffcc2(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar1 != 0) {
      return *(undefined4 *)0x8c2791b0;
    }
    *(undefined4 *)0x8c2791b0 = 3;
  }
  if ((-1 < *ar4) && (*(int *)((int)ar4 + 0x2450 + *ar4 * 0x28) == 3)) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 2;
  }
  iVar1 = FUN_8c1f3b5c(ar4[2],ar5,ar6,ar7);
  if (iVar1 == 0) {
    ar4[5] = 0;
  }
  else if (iVar1 == 1) {
    ar4[5] = 3;
  }
  else {
    ar4[5] = 0;
  }
  ar7_00 = ar4 + 4;
  ar6_00 = (&DATA_8c12fb18) + 0x11;
  ar5_00 = (&DATA_8c12fb18);
  iVar1 = FUN_8c0213bc(0x8c3eb334,(&DATA_8c12fb18),ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar4[4] = 0;
  }
  ar4[6] = 0;
  FUN_8c01be1c(ar4,ar5_00,ar6_00,ar7_00);
  return *(undefined4 *)0x8c2791b0;
}

__asm__(".globl _s_VM_User_Icon_VMI_01a3ec\n.set _s_VM_User_Icon_VMI_01a3ec, _s_VM_User_Icon_VMI_01a3ec_def\n");
//@unit 8c01a5cc
#include "../decls.h"
undefined4 FUN_8c01a5cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = thunk_FUN_8c1fda7e(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)0x8c2791b0 = 1;
      uVar1 = 0;
    }
    else {
      iVar2 = FUN_8c01a630(ar4,ar5,ar6,ar7);
      if (iVar2 == 3) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a5cc\n.set _FUN_8c01a5cc, _FUN_8c01a5cc_def\n");
//@unit 8c01a630
#include "../decls.h"
undefined4 FUN_8c01a630_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int *ar5_00;
  bool bVar3;
  
  ar5_00 = (int *)(uint)ar4[9];
  uVar1 = 0x600;
  memmove(ar4 + 0xb,ar5_00,0x600,ar7);
  bVar3 = ar4[8] == 1;
  if (bVar3) {
    ar4[8] = 0;
  }
  if (0 < ar4[7]) {
    ar4[7] = ar4[7] + -1;
    if (ar4[7] < 1) {
      if (ar4[6] == 0) {
        bVar3 = true;
      }
    }
    else {
      ar5_00 = (int *)(uint)ar4[10];
      uVar1 = 0x600;
      memmove(ar4 + 0xb,ar5_00,0x600,ar7);
      bVar3 = true;
    }
  }
  if (0 < ar4[6]) {
    if ((ar4[6] == 0x1e) || (bVar3)) {
      ar5_00 = (int *)(&DATA_8c12f900);
      uVar1 = 0x210;
      memmove((int)ar4 + 0x41c,(&DATA_8c12f900),0x210,ar7);
      bVar3 = true;
    }
    ar4[6] = ar4[6] + -1;
    if (ar4[6] < 1) {
      bVar3 = true;
    }
  }
  if (bVar3) {
    ar5_00 = ar4 + 0xb;
    FUN_8c01c8c8(ar4,ar5_00,uVar1,ar7);
  }
  if (*ar4 < 0) {
    uVar1 = *(undefined4 *)0x8c2791b0;
  }
  else {
    iVar2 = *(int *)((int)ar4 + 0x2450 + *ar4 * 0x28);
    if (iVar2 == 2) {
      FUN_8c01a760(ar4,ar5_00,uVar1,ar7);
    }
    else if (iVar2 == 3) {
      FUN_8c01a900(ar4,ar5_00,uVar1,ar7);
    }
    else {
      FUN_8c01a98c(ar4,ar5_00,uVar1,ar7);
    }
    uVar1 = *(undefined4 *)0x8c2791b0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a630\n.set _FUN_8c01a630, _FUN_8c01a630_def\n");
//@unit 8c01a760
#include "../decls.h"
undefined4 FUN_8c01a760_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = ar4[*ar4 * 10 + 0x915];
  uVar1 = 0xd;
  if ((iVar2 < 0xe) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01c1a4(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01c260(ar4,ar5,ar6,ar7);
      break;
    case 2:
      iVar2 = FUN_8c01aa94(ar4,ar5,ar6,ar7);
      if (iVar2 == 1) {
        uVar1 = FUN_8c01a98c(ar4,ar5,ar6,ar7);
      }
      else {
        FUN_8c01c924(ar4,ar5,ar6,ar7);
        uVar1 = FUN_8c01bebc(ar4,ar5,ar6,ar7);
      }
      break;
    case 3:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01bfd0(ar4,ar5,ar6,ar7);
      break;
    case 4:
      FUN_8c01c924(ar4,ar5,ar6,ar7);
      uVar1 = FUN_8c01c0e4(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = FUN_8c01c450(ar4,ar5,ar6,ar7);
      break;
    case 6:
      uVar1 = FUN_8c01c4d8(ar4,ar5,ar6,ar7);
      break;
    case 7:
      uVar1 = FUN_8c01c560(ar4,ar5,ar6,ar7);
      break;
    case 8:
      uVar1 = FUN_8c01c320(ar4,ar5,ar6,ar7);
      break;
    case 9:
      uVar1 = FUN_8c01c3c4(ar4,ar5,ar6,ar7);
      break;
    case 10:
      uVar1 = FUN_8c01c6f4(ar4,ar5,ar6,ar7);
      break;
    case 0xb:
      uVar1 = FUN_8c01c774(ar4,ar5,ar6,ar7);
      break;
    case 0xc:
      uVar1 = FUN_8c01c7f4(ar4,ar5,ar6,ar7);
      break;
    case 0xd:
      uVar1 = FUN_8c01c860(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01a760\n.set _FUN_8c01a760, _FUN_8c01a760_def\n");
//@unit 8c01a900
#include "../decls.h"
int FUN_8c01a900_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_8c1fc5c4(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
  if (iVar1 == -1) {
    iVar1 = FUN_8c01c92c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar2 = FUN_8c1fc5de(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
    iVar1 = 0x2450;
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01a900\n.set _FUN_8c01a900, _FUN_8c01a900_def\n");
//@unit 8c01a98c
#include "../decls.h"
int FUN_8c01a98c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = *(int *)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) &&
       (*(int *)((int)ar4 + 0x2470 + *ar4 * 0x28) != 0)) {
      (*(code *)(&FUN_8c1fb57c))
                (*(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),ar5,ar6,ar7);
    }
    iVar2 = *ar4;
    iVar1 = *(int *)((int)ar4 + 0x2458 + *ar4 * 0x28);
    *(undefined4 *)((int)ar4 + 0x244c + *ar4 * 0x28) = 0xffffffff;
    *ar4 = iVar1;
    iVar1 = *(int *)((int)ar4 + 0x2454 + *ar4 * 0x28);
    if ((iVar1 != 2) || (iVar1 = FUN_8c01aa94(ar4,ar5,ar6,ar7), iVar1 != 1)) break;
    *(undefined4 *)((int)ar4 + 0x2450 + iVar2 * 0x28) = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01a98c\n.set _FUN_8c01a98c, _FUN_8c01a98c_def\n");
//@unit 8c01aa94
#include "../decls.h"
undefined4 FUN_8c01aa94_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (-1 < *ar4) {
    iVar1 = *(int *)((int)ar4 + 0x2458 + *ar4 * 0x28);
    while ((-1 < iVar1 && (*(int *)((int)ar4 + 0x244c + iVar1 * 0x28) != -1))) {
      if (*(int *)((int)ar4 + 0x2454 + iVar1 * 0x28) == 2) {
        return 1;
      }
      iVar1 = *(int *)((int)ar4 + 0x2458 + iVar1 * 0x28);
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c01aa94\n.set _FUN_8c01aa94, _FUN_8c01aa94_def\n");
//@unit 8c01ab2c
#include "../decls.h"
undefined4 FUN_8c01ab2c_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar4_00;
  
  do {
    ar4_00 = ar4;
    iVar1 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) break;
  } while (-1 < *ar4);
  if (0 < *(undefined4 *)0x8c2791b0) {
    FUN_8c1fbe12(ar4_00,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c2791b0 = 0;
  return 1;
}

__asm__(".globl _FUN_8c01ab2c\n.set _FUN_8c01ab2c, _FUN_8c01ab2c_def\n");
//@unit 8c01ab78
#include "../decls.h"
uint FUN_8c01ab78_def(uint *ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x80 && (ar4[uVar2 * 10 + 0x913] != 0xffffffff))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x80) {
    if ((int)*ar4 < 0) {
      *ar4 = uVar2;
    }
    else {
      uVar1 = *ar4;
      while (-1 < (int)ar4[uVar1 * 10 + 0x916]) {
        uVar1 = ar4[uVar1 * 10 + 0x916];
      }
      ar4[uVar1 * 10 + 0x916] = uVar2;
    }
    strcpy(ar4 + uVar2 * 10 + 0x917,ar6,ar6,ar7,ar5);
    ar4[uVar2 * 10 + 0x915] = ar5;
    ar4[uVar2 * 10 + 0x914] = 2;
    ar4[uVar2 * 10 + 0x916] = 0xffffffff;
    ar4[uVar2 * 10 + 0x913] = ar4[3];
    if ((int)ar4[3] < 0x10000) {
      ar4[3] = ar4[3] + 1;
    }
    else {
      ar4[3] = 10;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ab78\n.set _FUN_8c01ab78, _FUN_8c01ab78_def\n");
//@unit 8c01acd0
#include "../decls.h"
undefined4 FUN_8c01acd0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint *ar5_00;
  uint uStack_28;
  uint uStack_24;
  undefined1 auStack_20 [10];
  undefined1 auStack_16 [14];
  
  FUN_8c1f8176(auStack_16,ar5,ar6,ar7);
  ar5_00 = &uStack_24;
  FUN_8c1f826c(auStack_16,ar5_00,ar6,ar7);
  uStack_24 = uStack_24 + 10;
  while( true ) {
    FUN_8c01c984(ar4,ar5_00,ar6,ar7);
    FUN_8c1f8176(auStack_20,ar5_00,ar6,ar7);
    ar5_00 = &uStack_28;
    FUN_8c1f826c(auStack_20,ar5_00,ar6,ar7);
    if (uStack_24 < uStack_28) {
      return 0;
    }
    iVar1 = *(int *)(0x2450 + ar5 * 0x28 + ar4);
    if ((iVar1 != 2) && (iVar1 != 3)) break;
    FUN_8c01a630(ar4,ar5_00,ar6,ar7);
  }
  return *(undefined4 *)(0x2450 + ar5 * 0x28 + ar4);
}

__asm__(".globl _FUN_8c01acd0\n.set _FUN_8c01acd0, _FUN_8c01acd0_def\n");
//@unit 8c01ad88
#include "../decls.h"
undefined4 FUN_8c01ad88_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*ar4 < 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c01ad88\n.set _FUN_8c01ad88, _FUN_8c01ad88_def\n");
//@unit 8c01ad9c
#include "../decls.h"
undefined4 FUN_8c01ad9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01ade8(ar4,ar5,ar6,ar7);
  if (iVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = *(undefined4 *)(0x2450 + iVar1 * 0x28 + ar4);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ad9c\n.set _FUN_8c01ad9c, _FUN_8c01ad9c_def\n");
//@unit 8c01ade8
#include "../decls.h"
undefined4 FUN_8c01ade8_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if (0x80 <= iVar1) {
      return 0xffffffff;
    }
    if (*(int *)(0x244c + iVar1 * 0x28 + ar4) == ar5) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01ade8\n.set _FUN_8c01ade8, _FUN_8c01ade8_def\n");
//@unit 8c01ae28
#include "../decls.h"
undefined4 FUN_8c01ae28_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = FUN_8c01af14(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ae28\n.set _FUN_8c01ae28, _FUN_8c01ae28_def\n");
//@unit 8c01ae98
#include "../decls.h"
undefined4 FUN_8c01ae98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar5_00 = FUN_8c01ae28(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_8c01ade8(ar4,ar5_00,ar6,ar7);
      uVar1 = FUN_8c01acd0(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ae98\n.set _FUN_8c01ae98, _FUN_8c01ae98_def\n");
//@unit 8c01af14
#include "../decls.h"
int FUN_8c01af14_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar4_00;
  uint ar5_00;
  int iVar2;
  undefined4 uVar3;
  undefined1 *ar5_01;
  undefined4 uVar4;
  undefined4 ar7_00;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined1 auStack_80 [18];
  undefined1 auStack_6e [50];
  int iStack_3c;
  int iStack_38;
  undefined2 uStack_34;
  ushort uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  uVar3 = 2;
  ar7_00 = ar7;
  uVar4 = ar5;
  iVar1 = FUN_8c01ab78(ar4,2,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar4_00 = malloc_thunk(0x5380,uVar3,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      memset(ar4_00,0,0x5380,ar7_00);
      memmove(ar4_00,ar6,ar7,ar7_00);
      uVar3 = 0x60;
      memset(auStack_80,0,0x60,ar7_00);
      strcpy(auStack_80,in_stack_00000000,uVar3,ar7_00,uVar4);
      strcpy(auStack_6e,in_stack_00000004,uVar3,ar7_00,uVar4);
      iStack_3c = *(int *)(ar4 + 0x10) + 0xa0;
      iStack_38 = *(int *)(ar4 + 0x10) + 0xc0;
      uStack_34 = 1;
      uStack_24 = 0x5380;
      uVar4 = 0x5380;
      ar5_00 = (uint)uStack_2c;
      iStack_28 = ar4_00;
      iVar2 = FUN_8c2017a8(1,ar5_00,0x5380,ar7_00);
      iVar2 = malloc_thunk(iVar2 << 9,ar5_00,uVar4,ar7_00);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        ar5_01 = auStack_80;
        uVar3 = FUN_8c2015b0(iVar2,ar5_01,uVar4,ar7_00);
        FUN_8c1fb57c(ar4_00,ar5_01,uVar4,ar7_00);
        *(undefined4 *)(iVar1 * 0x28 + ar4 + 0x246c) = uVar3;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = iVar2;
      }
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01af14\n.set _FUN_8c01af14, _FUN_8c01af14_def\n");
//@unit 8c01b0a8
#include "../decls.h"
undefined4 FUN_8c01b0a8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_stack_ffffffe4;
  undefined4 uStack_10;
  undefined4 auStack_c [2];
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = (*(code *)(&file_load_to_buffer))
                      (0x8c3eb334,ar5,(&DATA_8c12fb18) + 0x11,auStack_c);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      (*(code *)(&FUN_8c01b144))
                (ar4,ar5,auStack_c[0],uStack_10,ar6,ar7,ar4,ar6,ar7,in_stack_ffffffe4);
      FUN_8c021234(0x8c3eb334,ar5,(&DATA_8c12fb18) + 0x11,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b0a8\n.set _FUN_8c01b0a8, _FUN_8c01b0a8_def\n");
//@unit 8c01b144
#include "../decls.h"
undefined4
FUN_8c01b144_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,uint ar7,undefined4 s0,undefined4 s4,
            undefined4 s8,undefined4 s12,undefined4 s16,undefined4 s20)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar5_00;
  uint ar7_00;
  int aiStack_20 [3];
  undefined4 uStack_c;
  
  uStack_c = 1;
  iVar1 = -0x22c;
  *(undefined4 *)((int)aiStack_20 + iVar1 + 8) = ar6;
  ar7_00 = ar7;
  uVar2 = FUN_8c1fc258(*(undefined4 *)0x8c2791b4,ar5,ar6,ar7);
  *(undefined4 *)((int)&s16 + iVar1) = uVar2;
  if (0xffffff05 != *(int *)((int)&s16 + iVar1)) {
    if (*(int *)((int)&s16 + iVar1) != 0) {
      return 0;
    }
    uVar2 = FUN_8c01bb00(ar4,ar5,ar6,ar7_00);
    *(undefined4 *)((int)&s12 + iVar1) = uVar2;
    if (*(int *)((int)&s12 + iVar1) == 0) {
      return 0;
    }
  }
  uVar3 = 1;
  uVar2 = FUN_8c1fc16a(*(undefined4 *)0x8c2791b4,1,ar6,ar7_00);
  *(undefined4 *)((int)&s8 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xffffffec + iVar1) = *(undefined4 *)((int)&s8 + iVar1);
  if ((int)((*(int *)(&stack0xffffffec + iVar1) * 0x200 - 0x280) - ar7) < 0) {
    uVar2 = FUN_8c01b9e4(ar4,uVar3,ar6,ar7_00);
    *(undefined4 *)((int)&s4 + iVar1) = uVar2;
    if (*(uint *)((int)&s4 + iVar1) < ar7) {
      return 0;
    }
    ar5_00 = (int)&s20 + iVar1;
    uVar2 = FUN_8c1fc682(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
    *(undefined4 *)((int)&s0 + iVar1) = uVar2;
    if (*(int *)((int)&s0 + iVar1) != 0) {
      return 0;
    }
    do {
      uVar2 = FUN_8c1fc5c4(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
      *(undefined4 *)(&stack0xfffffffc + iVar1) = uVar2;
    } while (*(int *)(&stack0xfffffffc + iVar1) == -1);
    uVar2 = FUN_8c1fc5de(*(undefined4 *)0x8c2791b4,ar5_00,ar6,ar7_00);
    *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar2;
    if (*(int *)(&stack0xfffffff8 + iVar1) != 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)aiStack_20 + iVar1 + 4) =
       *(undefined4 *)((int)aiStack_20 + 0x248 + iVar1 + 8);
  *(undefined4 *)((int)aiStack_20 + iVar1) =
       *(undefined4 *)((int)aiStack_20 + 0x248 + iVar1 + 4);
  uVar3 = *(undefined4 *)((int)aiStack_20 + iVar1 + 8);
  uVar2 = (*(code *)(&s_VM_App_Icon_VMI_01b2b2))
                    (ar4,ar5,uVar3,ar7,*(undefined4 *)((int)aiStack_20 + iVar1),
                     *(undefined4 *)((int)aiStack_20 + iVar1 + 4));
  *(undefined4 *)((int)&stack0xfffffff4 + iVar1) = uVar2;
  if (*(int *)((int)&stack0xfffffff4 + iVar1) < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_8c01acd0(ar4,*(int *)((int)&stack0xfffffff4 + iVar1),uVar3,ar7);
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
    uVar2 = *(undefined4 *)(&stack0xfffffff0 + iVar1);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01b144\n.set _FUN_8c01b144, _FUN_8c01b144_def\n");
//@unit 8c01b2a4
#include "../decls.h"
int s_VM_App_Icon_VMI_01b2b2_def
              (int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 uVar3;
  int *ar7_00;
  int unaff_r8;
  undefined4 ain0;
  int aiStack_24 [2];
  
  ar7_00 = aiStack_24;
  iVar1 = FUN_8c0213bc(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
  if (iVar1 == 0) {
    unaff_r8 = -1;
  }
  else {
    ain0 = ar5;
    iVar1 = FUN_8c01ab78(ar4,3,ar5,ar7_00);
    if (-1 < iVar1) {
      uVar3 = ar7;
      iVar2 = FUN_8c01b5dc(ar4,ar7,ar5,ar7_00);
      ar4_00 = malloc_thunk(iVar2 << 9,uVar3,ar5,ar7_00);
      if (ar4_00 != 0) {
        memmove(ar4_00,ar6,ar7,ar7_00);
        uVar3 = 0x280;
        memset(ar4_00 + 0x200,0,0x280,ar7_00);
        strcpy(ar4_00 + 0x200,s0,uVar3,ar7_00,ain0);
        strcpy(ar4_00 + 0x210,s4,uVar3,ar7_00,ain0);
        *(undefined2 *)(ar4_00 + 0x240) = 1;
        *(undefined4 *)(ar4_00 + 0x248) = ar7;
        memmove(ar4_00 + 0x260,aiStack_24[0] + 0xa0,0x220,ar7_00);
        *(int *)(iVar1 * 0x28 + ar4 + 0x246c) = iVar2;
        *(int *)(iVar1 * 0x28 + ar4 + 0x2470) = ar4_00;
        unaff_r8 = iVar1;
      }
    }
    FUN_8c021428(0x8c3eb334,"VM_App_Icon.VMI",&DAT_8c12fb29,ar7_00);
  }
  return unaff_r8;
}

__asm__(".globl _s_VM_App_Icon_VMI_01b2b2\n.set _s_VM_App_Icon_VMI_01b2b2, _s_VM_App_Icon_VMI_01b2b2_def\n");
//@unit 8c01b400
#include "../decls.h"
undefined4 FUN_8c01b400_def(int ar4,undefined4 ar5,undefined4 ar6,uint ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    if (0x600 < ar7) {
      uVar1 = 0xffffffff;
    }
    else {
      iVar2 = FUN_8c01b4f0(ar4,ar5,ar6,ar7);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
      }
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b400\n.set _FUN_8c01b400, _FUN_8c01b400_def\n");
//@unit 8c01b47c
#include "../decls.h"
undefined4 FUN_8c01b47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar5_00 = FUN_8c01b400(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_8c01ade8(ar4,ar5_00,ar6,ar7);
      uVar1 = FUN_8c01acd0(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b47c\n.set _FUN_8c01b47c, _FUN_8c01b47c_def\n");
//@unit 8c01b4f0
#include "../decls.h"
int FUN_8c01b4f0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int ar4_00;
  undefined4 ar5_00;
  undefined4 ar7_00;
  
  ar7_00 = ar7;
  iVar1 = FUN_8c01ab78(ar4,4,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    ar5_00 = ar7;
    iVar2 = FUN_8c01b5dc(ar4,ar7,ar5,ar7_00);
    ar4_00 = malloc_thunk(iVar2 << 9,ar5_00,ar5,ar7_00);
    if (ar4_00 == 0) {
      iVar1 = -1;
    }
    else {
      memmove(ar4_00,ar6,ar7,ar7_00);
      *(int *)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(0x2470 + iVar1 * 0x28 + ar4) = ar4_00;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b4f0\n.set _FUN_8c01b4f0, _FUN_8c01b4f0_def\n");
//@unit 8c01b5ac
#include "../decls.h"
undefined4 FUN_8c01b5ac_def(undefined4 ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01b5dc(ar4,ar5 + 0x280,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01b5ac\n.set _FUN_8c01b5ac, _FUN_8c01b5ac_def\n");
//@unit 8c01b5dc
#include "../decls.h"
uint FUN_8c01b5dc_def(undefined4 ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  
  uVar1 = ar5 >> 9;
  if ((ar5 & 0x1ff) != 0) {
    uVar1 = uVar1 + 1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b5dc\n.set _FUN_8c01b5dc, _FUN_8c01b5dc_def\n");
//@unit 8c01b5f8
#include "../decls.h"
undefined4 FUN_8c01b5f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  int iVar3;
  undefined4 ar5_01;
  undefined4 ar6_00;
  undefined4 ar7_00;
  undefined1 auStack_74 [88];
  undefined4 uStack_1c;
  
  uVar1 = 1;
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar6_00 = 0x5600;
    ar7_00 = ar7;
    ar5_00 = FUN_8c01b70c(ar4,ar5,0x5600,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      iVar3 = ar5_00;
      iVar2 = FUN_8c01acd0(ar4,ar5_00,ar6_00,ar7_00);
      if (iVar2 == 0) {
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),iVar3,ar6_00,ar7_00);
        uVar1 = 0;
      }
      else {
        ar5_01 = *(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4);
        iVar3 = FUN_8c2017fc(auStack_74,ar5_01,ar6_00,ar7_00);
        if ((0xffffff20 == iVar3) || (0xffffff21 == iVar3)) {
          uVar1 = 0;
        }
        else if (iVar3 == 0) {
          memmove(ar6,uStack_1c,ar7,ar7_00);
          uVar1 = 1;
          ar5_01 = uStack_1c;
          ar6_00 = ar7;
        }
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),ar5_01,ar6_00,ar7_00);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b5f8\n.set _FUN_8c01b5f8, _FUN_8c01b5f8_def\n");
//@unit 8c01b70c
#include "../decls.h"
int FUN_8c01b70c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c01ab78(ar4,0,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = FUN_8c01b5ac(ar4,ar6,ar5,ar7);
    iVar3 = malloc_thunk(iVar2 << 9,ar6,ar5,ar7);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(int *)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(0x2470 + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b70c\n.set _FUN_8c01b70c, _FUN_8c01b70c_def\n");
//@unit 8c01b7b0
#include "../decls.h"
undefined4 FUN_8c01b7b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  int iVar2;
  int ar5_01;
  undefined4 ar7_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    uVar1 = ar7;
    ar7_00 = ar7;
    ar5_00 = FUN_8c01b87c(ar4,ar5,ar7,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      ar5_01 = ar5_00;
      iVar2 = FUN_8c01acd0(ar4,ar5_00,uVar1,ar7_00);
      if (iVar2 == 0) {
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),ar5_01,uVar1,ar7_00);
        uVar1 = 0;
      }
      else {
        uVar1 = *(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4);
        memmove(ar6,uVar1,ar7,ar7_00);
        (*(code *)(&FUN_8c1fb57c))
                  (*(undefined4 *)(0x2470 + ar5_00 * 0x28 + ar4),uVar1,ar7,ar7_00);
        uVar1 = 1;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01b7b0\n.set _FUN_8c01b7b0, _FUN_8c01b7b0_def\n");
//@unit 8c01b87c
#include "../decls.h"
int FUN_8c01b87c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_8c01ab78(ar4,1,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  else {
    iVar2 = FUN_8c01b5dc(ar4,ar6,ar5,ar7);
    iVar3 = malloc_thunk(iVar2 << 9,ar6,ar5,ar7);
    if (iVar3 == 0) {
      iVar1 = -1;
    }
    else {
      *(int *)(0x246c + iVar1 * 0x28 + ar4) = iVar2;
      *(int *)(0x2470 + iVar1 * 0x28 + ar4) = iVar3;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b87c\n.set _FUN_8c01b87c, _FUN_8c01b87c_def\n");
//@unit 8c01b920
#include "../decls.h"
int FUN_8c01b920_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar1 = FUN_8c01b9b0(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = FUN_8c01acd0(ar4,iVar1,ar6,ar7);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(0x246c + iVar1 * 0x28 + ar4) * 0x200 - 0x280;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b920\n.set _FUN_8c01b920, _FUN_8c01b920_def\n");
//@unit 8c01b9b0
#include "../decls.h"
int FUN_8c01b9b0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,8,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b9b0\n.set _FUN_8c01b9b0, _FUN_8c01b9b0_def\n");
//@unit 8c01b9e4
#include "../decls.h"
int FUN_8c01b9e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar1 = FUN_8c01ba68(ar4,ar5,ar6,ar7);
    if (iVar1 < 0) {
      iVar1 = -1;
    }
    else {
      iVar2 = FUN_8c01acd0(ar4,iVar1,ar6,ar7);
      if (iVar2 == 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = *(int *)(0x246c + iVar1 * 0x28 + ar4) << 9;
      }
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01b9e4\n.set _FUN_8c01b9e4, _FUN_8c01b9e4_def\n");
//@unit 8c01ba68
#include "../decls.h"
int FUN_8c01ba68_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,9,(&DATA_8c12fb18) + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01ba68\n.set _FUN_8c01ba68, _FUN_8c01ba68_def\n");
//@unit 8c01baa0
#include "../decls.h"
undefined4 FUN_8c01baa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = FUN_8c01bb6c(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01baa0\n.set _FUN_8c01baa0, _FUN_8c01baa0_def\n");
//@unit 8c01bb00
#include "../decls.h"
undefined4 FUN_8c01bb00_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar5_00 = FUN_8c01baa0(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_8c01ade8(ar4,ar5_00,ar6,ar7);
      uVar1 = FUN_8c01acd0(ar4,uVar1,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bb00\n.set _FUN_8c01bb00, _FUN_8c01bb00_def\n");
//@unit 8c01bb6c
#include "../decls.h"
int FUN_8c01bb6c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,5,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bb6c\n.set _FUN_8c01bb6c, _FUN_8c01bb6c_def\n");
//@unit 8c01bba0
#include "../decls.h"
undefined4 FUN_8c01bba0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar5_00;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    ar5_00 = FUN_8c01bbf8(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_8c01acd0(ar4,ar5_00,ar6,ar7);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bba0\n.set _FUN_8c01bba0, _FUN_8c01bba0_def\n");
//@unit 8c01bbf8
#include "../decls.h"
int FUN_8c01bbf8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,6,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bbf8\n.set _FUN_8c01bbf8, _FUN_8c01bbf8_def\n");
//@unit 8c01bc2c
#include "../decls.h"
int FUN_8c01bc2c_def(int ar4,undefined4 ar5,undefined1 *ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  undefined1 *ar6_00;
  
  if (_DAT_8c2791b0 == 3) {
    ar6_00 = ar6;
    ar5_00 = FUN_8c01bcc0(ar4,ar5,ar6,ar7);
    if (ar5_00 < 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_8c01acd0(ar4,ar5_00,ar6_00,ar7);
      *ar6 = 0;
      if (iVar1 == 5) {
        strcpy(ar6,ar5_00 * 0x28 + ar4 + 0x245c,ar6_00,ar7,ar5);
      }
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bc2c\n.set _FUN_8c01bc2c, _FUN_8c01bc2c_def\n");
//@unit 8c01bcc0
#include "../decls.h"
int FUN_8c01bcc0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,7,ar5,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bcc0\n.set _FUN_8c01bcc0, _FUN_8c01bcc0_def\n");
//@unit 8c01bcf4
#include "../decls.h"
undefined4 FUN_8c01bcf4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = FUN_8c01bd50(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bcf4\n.set _FUN_8c01bcf4, _FUN_8c01bcf4_def\n");
//@unit 8c01bd50
#include "../decls.h"
int FUN_8c01bd50_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,10,(&DATA_8c12fb18) + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bd50\n.set _FUN_8c01bd50, _FUN_8c01bd50_def\n");
//@unit 8c01bd88
#include "../decls.h"
undefined4 FUN_8c01bd88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    iVar2 = FUN_8c01bde4(ar4,ar5,ar6,ar7);
    if (iVar2 < 0) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01bd88\n.set _FUN_8c01bd88, _FUN_8c01bd88_def\n");
//@unit 8c01bde4
#include "../decls.h"
int FUN_8c01bde4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,0xb,(&DATA_8c12fb18) + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01bde4\n.set _FUN_8c01bde4, _FUN_8c01bde4_def\n");
//@unit 8c01be1c
#include "../decls.h"
undefined4 FUN_8c01be1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b0 == 3) {
    if (*(int *)(ar4 + 0x18) < 1) {
      iVar2 = FUN_8c01be84(ar4,ar5,ar6,ar7);
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = *(undefined4 *)(0x244c + iVar2 * 0x28 + ar4);
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01be1c\n.set _FUN_8c01be1c, _FUN_8c01be1c_def\n");
//@unit 8c01be84
#include "../decls.h"
int FUN_8c01be84_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01ab78(ar4,0xd,(&DATA_8c12fb18) + 0x11,ar7);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01be84\n.set _FUN_8c01be84, _FUN_8c01be84_def\n");
//@unit 8c01bebc
#include "../decls.h"
int FUN_8c01bebc_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_8c1f8176(&uStack_18,ar5,ar6,ar7);
  uStack_38 = uStack_18;
  uStack_36 = uStack_16;
  uStack_35 = uStack_15;
  uStack_34 = uStack_14;
  uStack_33 = uStack_13;
  uStack_32 = uStack_12;
  uStack_31 = uStack_11;
  iStack_20 = *ar4;
  iStack_24 = *ar4;
  iStack_28 = *ar4;
  iVar2 = (*(code *)(&FUN_8c1fc740))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + iStack_20 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + iStack_24 * 0x28),
                     *(undefined4 *)((int)ar4 + 0x246c + iStack_28 * 0x28),&uStack_38);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01bebc\n.set _FUN_8c01bebc, _FUN_8c01bebc_def\n");
//@unit 8c01bfd0
#include "../decls.h"
int FUN_8c01bfd0_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined2 uStack_38;
  undefined1 uStack_36;
  undefined1 uStack_35;
  undefined1 uStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  undefined1 uStack_31;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  undefined2 uStack_18;
  undefined1 uStack_16;
  undefined1 uStack_15;
  undefined1 uStack_14;
  undefined1 uStack_13;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  FUN_8c1f8176(&uStack_18,ar5,ar6,ar7);
  uStack_38 = uStack_18;
  uStack_36 = uStack_16;
  uStack_35 = uStack_15;
  uStack_34 = uStack_14;
  uStack_33 = uStack_13;
  uStack_32 = uStack_12;
  uStack_31 = uStack_11;
  iStack_20 = *ar4;
  iStack_24 = *ar4;
  iStack_28 = *ar4;
  iVar2 = (*(code *)(&FUN_8c1fc79e))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + iStack_20 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + iStack_24 * 0x28),
                     *(undefined4 *)((int)ar4 + 0x246c + iStack_28 * 0x28),&uStack_38);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01bfd0\n.set _FUN_8c01bfd0, _FUN_8c01bfd0_def\n");
//@unit 8c01c0e4
#include "../decls.h"
int FUN_8c01c0e4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)(&FUN_8c1fc852))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),0x11);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c0e4\n.set _FUN_8c01c0e4, _FUN_8c01c0e4_def\n");
//@unit 8c01c1a4
#include "../decls.h"
int FUN_8c01c1a4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)(&FUN_8c1fc6e8))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),
                     *(undefined4 *)((int)ar4 + 0x246c + *ar4 * 0x28));
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c1a4\n.set _FUN_8c01c1a4, _FUN_8c01c1a4_def\n");
//@unit 8c01c260
#include "../decls.h"
int FUN_8c01c260_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*(code *)(&FUN_8c1fc7fc))
                    (*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,
                     *(undefined4 *)((int)ar4 + 0x2470 + *ar4 * 0x28),0x11);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c260\n.set _FUN_8c01c260, _FUN_8c01c260_def\n");
//@unit 8c01c320
#include "../decls.h"
int FUN_8c01c320_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_8c1fc654(*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 < 0) {
    iVar3 = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar3 = iVar1;
    }
  }
  else {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar3 = 0x246c;
    *(int *)((int)ar4 + 0x246c + *ar4 * 0x28) = iVar2;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c01c320\n.set _FUN_8c01c320, _FUN_8c01c320_def\n");
//@unit 8c01c3c4
#include "../decls.h"
int FUN_8c01c3c4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_8c1fc16a(*(undefined4 *)0x8c2791b4,0,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 < 0) {
    iVar3 = iVar2;
    if (iVar2 != -1) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar3 = iVar1;
    }
  }
  else {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar3 = 0x246c;
    *(int *)((int)ar4 + 0x246c + *ar4 * 0x28) = iVar2;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c01c3c4\n.set _FUN_8c01c3c4, _FUN_8c01c3c4_def\n");
//@unit 8c01c450
#include "../decls.h"
int FUN_8c01c450_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_8c1fc472(*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 3;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c450\n.set _FUN_8c01c450, _FUN_8c01c450_def\n");
//@unit 8c01c4d8
#include "../decls.h"
int FUN_8c01c4d8_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_8c1fc564(*(undefined4 *)0x8c2791b4,(int)ar4 + 0x245c + *ar4 * 0x28,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c4d8\n.set _FUN_8c01c4d8, _FUN_8c01c4d8_def\n");
//@unit 8c01c560
#include "../decls.h"
int FUN_8c01c560_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffffb4;
  char acStack_28 [36];
  
  iVar1 = FUN_8c1fc258(_DAT_8c2791b4,acStack_28,ar6,ar7);
  if (iVar1 == -0xfb) {
    iVar1 = 0x2450;
    ar4[*ar4 * 10 + 0x914] = 4;
  }
  else if (iVar1 != -1) {
    if (iVar1 == 0) {
      if (acStack_28[0] == '\0') {
        iVar1 = 0x2450;
        ar4[*ar4 * 10 + 0x914] = 4;
      }
      else {
        iVar1 = FUN_8c01c68c(acStack_28,ar4 + *ar4 * 10 + 0x917,ar6,ar7);
        if (iVar1 == 0) {
          iVar1 = 0x2450;
          ar4[*ar4 * 10 + 0x914] = 1;
        }
        else {
          ar4[*ar4 * 10 + 0x914] = 5;
          iVar1 = strcpy(ar4 + *ar4 * 10 + 0x917,acStack_28,ar6,ar7,in_stack_ffffffb4);
        }
      }
    }
    else {
      iVar1 = 0x2450;
      ar4[*ar4 * 10 + 0x914] = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01c560\n.set _FUN_8c01c560, _FUN_8c01c560_def\n");
//@unit 8c01c68c
#include "../decls.h"
undefined4 FUN_8c01c68c_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c01c68c\n.set _FUN_8c01c68c, _FUN_8c01c68c_def\n");
//@unit 8c01c6f4
#include "../decls.h"
int FUN_8c01c6f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  uStack_18 = *(&DATA_8c12fb10);
  uStack_17 = (&DATA_8c12fb10)[1];
  uStack_16 = (&DATA_8c12fb10)[2];
  uStack_15 = (&DATA_8c12fb10)[3];
  iVar2 = FUN_8c1f5d6c(ar4[2],&uStack_18,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c6f4\n.set _FUN_8c01c6f4, _FUN_8c01c6f4_def\n");
//@unit 8c01c774
#include "../decls.h"
int FUN_8c01c774_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  undefined1 uStack_18;
  undefined1 uStack_17;
  undefined1 uStack_16;
  undefined1 uStack_15;
  
  uStack_18 = *(&DATA_8c12fb14);
  uStack_17 = (&DATA_8c12fb14)[1];
  uStack_16 = (&DATA_8c12fb14)[2];
  uStack_15 = (&DATA_8c12fb14)[3];
  iVar2 = FUN_8c1f5d6c(ar4[2],&uStack_18,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 != -1) {
    if (iVar2 == 0) {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
      iVar2 = iVar1;
    }
    else {
      *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c774\n.set _FUN_8c01c774, _FUN_8c01c774_def\n");
//@unit 8c01c7f4
#include "../decls.h"
int FUN_8c01c7f4_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_8c01c8c8(ar4,ar4 + 0xb,ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 == 1) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c7f4\n.set _FUN_8c01c7f4, _FUN_8c01c7f4_def\n");
//@unit 8c01c860
#include "../decls.h"
int FUN_8c01c860_def(int *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_8c01c8c8(ar4,ar4[9],ar6,ar7);
  iVar1 = 0x2450;
  if (iVar2 == 1) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 1;
    iVar2 = iVar1;
  }
  else if (iVar2 != 2) {
    *(undefined4 *)((int)ar4 + 0x2450 + *ar4 * 0x28) = 0;
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c01c860\n.set _FUN_8c01c860, _FUN_8c01c860_def\n");
//@unit 8c01c8c8
#include "../decls.h"
undefined4 FUN_8c01c8c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f3d28(*(undefined4 *)(ar4 + 8),ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = (*(code *)(&FUN_8c1f3c78))
                      (*(undefined4 *)(ar4 + 8),ar5,*(undefined4 *)(ar4 + 0x14),ar7);
    if (iVar1 == -1) {
      uVar2 = 2;
    }
    else if (iVar1 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01c8c8\n.set _FUN_8c01c8c8, _FUN_8c01c8c8_def\n");
//@unit 8c01c924
#include "../decls.h"
undefined4 FUN_8c01c924_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x18) = 0x1e;
  return 0x1e;
}

__asm__(".globl _FUN_8c01c924\n.set _FUN_8c01c924, _FUN_8c01c924_def\n");
//@unit 8c01c92c
#include "../decls.h"
int FUN_8c01c92c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(int *)(ar4 + 0x18);
  if ((-1 < iVar1) && (iVar1 = 10, *(int *)(ar4 + 0x18) < 0xb)) {
    iVar1 = 0xf;
    *(undefined4 *)(ar4 + 0x18) = 0xf;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01c92c\n.set _FUN_8c01c92c, _FUN_8c01c92c_def\n");
//@unit 8c01c944
#include "../decls.h"
undefined4 FUN_8c01c944_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01c964(ar4,(&DATA_8c12f300),ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01c944\n.set _FUN_8c01c944, _FUN_8c01c944_def\n");
//@unit 8c01c964
#include "../decls.h"
undefined4 FUN_8c01c964_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x24) = ar5;
  *(undefined4 *)(ar4 + 0x20) = 1;
  return 1;
}

__asm__(".globl _FUN_8c01c964\n.set _FUN_8c01c964, _FUN_8c01c964_def\n");
//@unit 8c01c970
#include "../decls.h"
undefined4 FUN_8c01c970_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(ar4 + 0x24);
  *ar5 = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c01c970\n.set _FUN_8c01c970, _FUN_8c01c970_def\n");
//@unit 8c01c978
#include "../decls.h"
undefined4 FUN_8c01c978_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined4 *)(ar4 + 0x28) = ar5;
  *(undefined4 *)(ar4 + 0x1c) = 0x1e;
  return 0x1e;
}

__asm__(".globl _FUN_8c01c978\n.set _FUN_8c01c978, _FUN_8c01c978_def\n");
//@unit 8c01c984
#include "../decls.h"
undefined4 FUN_8c01c984_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c2688e0(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01c984\n.set _FUN_8c01c984, _FUN_8c01c984_def\n");
//@unit 8c01c998
#include "../decls.h"
undefined4 FUN_8c01c998_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  thunk_FUN_8c1fce34((&DATA_8c01c9f8),ar5,ar6,ar7);
  thunk_FUN_8c1fce50((&DATA_8c01c9cc),ar5,ar6,ar7);
  *(undefined4 *)0x8c2791b0 = 1;
  return 1;
}

__asm__(".globl _FUN_8c01c998\n.set _FUN_8c01c998, _FUN_8c01c998_def\n");
//@unit 8c01ca24
#include "../decls.h"
undefined4 * FUN_8c01ca24_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 0x10; iVar1 = iVar1 + 1) {
    *(undefined4 *)((int)ar4 + 0x5634 + iVar1 * 0x50) = 1;
  }
  *(undefined4 *)(0x5630 + (int)ar4) = 0xffffffff;
  *ar4 = 0xffffffff;
  ar4[1] = 0xffffffff;
  *(undefined4 *)0x8c2791b8 = 0;
  *(undefined4 *)(0x5b38 + (int)ar4) = 0;
  *(undefined4 *)(0x5b3c + (int)ar4) = 0;
  *(undefined4 *)0x8c279254 = 0;
  *(undefined4 *)0x8c279248 = 0;
  *(undefined4 *)(0x6cc0 + (int)ar4) = 0x7000;
  *(undefined4 *)0x8c279280 = 0x1f40;
  *(undefined4 *)0x8c279274 = 0;
  *(undefined4 *)0x8c279278 = 0;
  *(undefined4 *)0x8c27927c = 0;
  *(undefined4 *)0x8c2791bc = 0;
  *(undefined1 *)(0x8c2791bc + 3) = 0;
  *(undefined4 *)0x8c27924c = 0;
  *(undefined4 *)0x8c279284 = 0;
  *(undefined4 *)0x8c279288 = 0;
  *(undefined4 *)0x8c27928c = 0;
  *(undefined4 *)0x8c279290 = 0;
  *(undefined4 *)0x8c279294 = 0;
  return ar4;
}

__asm__(".globl _FUN_8c01ca24\n.set _FUN_8c01ca24, _FUN_8c01ca24_def\n");
//@unit 8c01cb24
#include "../decls.h"
int free_if_nonnull_wrap_01cb24_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_01cb24\n.set _free_if_nonnull_wrap_01cb24, _free_if_nonnull_wrap_01cb24_def\n");
//@unit 8c01cb54
#include "../decls.h"
undefined4 FUN_8c01cb54_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01cbc8(ar4,ar5,ar6,ar7);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_8c01cc74(ar4,ar5,ar6,ar7);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      iVar1 = asr_load_language_model(ar4,ar5,ar6,ar7);
      if (iVar1 == 0) {
        FUN_8c01d008(ar4,ar5,ar6,ar7);
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01cb54\n.set _FUN_8c01cb54, _FUN_8c01cb54_def\n");
//@unit 8c01cbc8
#include "../decls.h"
uint FUN_8c01cbc8_def(undefined4 *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  uint *puVar1;
  bool bVar2;
  
  if (ar5 != ar4[1]) {
    *(undefined4 *)0x8c2791b8 = 0;
    ar4[1] = ar5;
    if (ar5 == 6) {
      *ar4 = 8;
      ar4[2] = 8;
    }
    else if (ar5 == 0xc) {
      *ar4 = 0xe;
      ar4[2] = 0xe;
    }
    else if (ar5 == 0x12) {
      *ar4 = 0x14;
      ar4[2] = 0x14;
    }
    else {
      *ar4 = 2;
      ar4[2] = 2;
    }
  }
  puVar1 = (uint *)FUN_8c1f6342(ar4[2],ar5,ar6,ar7);
  bVar2 = (*puVar1 & 0x10) != 0;
  if (!bVar2) {
    FUN_8c01d440(ar4,ar5,ar6,ar7);
    *ar4 = 0xffffffff;
    ar4[1] = 0xffffffff;
    *(undefined4 *)0x8c2791b8 = 0;
  }
  return (uint)bVar2;
}

__asm__(".globl _FUN_8c01cbc8\n.set _FUN_8c01cbc8, _FUN_8c01cbc8_def\n");
//@unit 8c01cc74
#include "../decls.h"
undefined4 FUN_8c01cc74_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(undefined4 *)0x8c2791b8 < 2) {
    iVar2 = FUN_8c201994(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      uVar1 = FUN_8c201a1a(*ar4,ar5,ar6,ar7,0,0,0x113a,5,*(undefined4 *)0x8c279274,ar4 + 3)
      ;
      *(undefined4 *)0x8c27926c = uVar1;
      uVar1 = FUN_8c201c3e(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
      *(undefined4 *)0x8c279270 = uVar1;
      *(undefined4 *)0x8c2791b8 = 2;
      uVar1 = 1;
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

__asm__(".globl _FUN_8c01cc74\n.set _FUN_8c01cc74, _FUN_8c01cc74_def\n");
//@unit 8c01cd30
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
//@unit 8c01ce00
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
//@unit 8c01cee0
#include "../decls.h"
undefined4 FUN_8c01cee0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,1,0,ar7);
  if (iVar1 == 0) {
    iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,2,0,ar7);
    if (iVar1 == 0) {
      iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,6,0x12c,ar7);
      if (iVar1 == 0) {
        iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,7,1,ar7);
        if (iVar1 == 0) {
          iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,10,0xc8,ar7);
          if (iVar1 == 0) {
            iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,0xd,1,ar7);
            if (iVar1 == 0) {
              iVar1 = FUN_8c10c2a2(*(undefined4 *)0x8c27925c,0xe,0xffffffff,ar7);
              if (iVar1 == 0) {
                uVar2 = 1;
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

__asm__(".globl _FUN_8c01cee0\n.set _FUN_8c01cee0, _FUN_8c01cee0_def\n");
//@unit 8c01cfc8
#include "../decls.h"
undefined4 FUN_8c01cfc8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar4_00;
  undefined4 in_PR;
  
  FUN_8c201c82(_DAT_8c279270,ar5,ar6,ar7,in_PR);
  ar4_00 = _DAT_8c27926c;
  FUN_8c201b04(_DAT_8c27926c,ar5,ar6,ar7,in_PR);
  FUN_8c2019e0(ar4_00,ar5,ar6,ar7);
  _DAT_8c2791b8 = 1;
  return 1;
}

__asm__(".globl _FUN_8c01cfc8\n.set _FUN_8c01cfc8, _FUN_8c01cfc8_def\n");
//@unit 8c01d008
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
//@unit 8c01d0cc
#include "../decls.h"
uint FUN_8c01d0cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  if (-1 < *(int *)(0x5630 + ar4)) {
    iVar1 = *(int *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4);
    if ((iVar1 == 0) || (iVar1 == 1)) {
      FUN_8c01d3f4(ar4,ar5,ar6,ar7);
    }
    else if (iVar1 == 2) {
      FUN_8c01d338(ar4,ar5,ar6,ar7);
    }
  }
  ar5_00 = *(undefined4 *)(ar4 + 4);
  iVar1 = FUN_8c01cbc8(ar4,ar5_00,ar6,ar7);
  if (iVar1 != 0) {
    FUN_8c01d15c(ar4,ar5_00,ar6,ar7);
  }
  return (uint)(iVar1 != 0);
}

__asm__(".globl _FUN_8c01d0cc\n.set _FUN_8c01d0cc, _FUN_8c01d0cc_def\n");
//@unit 8c01d15c
#include "../decls.h"
undefined * FUN_8c01d15c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined *)0x3;
  if ((2 < _DAT_8c2791b8) &&
     (iVar2 = FUN_8c201ba2(_DAT_8c27926c,ar5,ar6,ar7), puVar1 = (undefined *)0x0, iVar2 != 0)) {
    if (iVar2 == 1) {
      FUN_8c201b92(_DAT_8c27926c,ar5,ar6,ar7);
    }
    else if (iVar2 == 3) {
      return (undefined *)3;
    }
    puVar1 = (undefined *)0x9;
    if ((_DAT_8c279248 < 10) && (puVar1 = (undefined *)0x1, 0 < _DAT_8c279248)) {
      puVar1 = (&switchdata_8c01d1d6_8c01d1dc)[_DAT_8c279248 + -1];
                    
      switch(_DAT_8c279248) {
      case 1:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          puVar1 = (undefined *)0x0;
          _DAT_8c279284 = (undefined *)0x0;
        }
        break;
      case 5:
        break;
      case 6:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      case 2:
        uVar3 = FUN_8c201c92(_DAT_8c279270,ar5,ar6,ar7);
        puVar1 = (undefined *)FUN_8c201da0(_DAT_8c279270,uVar3,ar6,ar7);
        break;
      case 7:
        if (_DAT_8c279284 == (undefined *)0x0) {
          return (undefined *)0;
        }
        _DAT_8c279284 = (undefined *)0x1;
      default:
        uVar3 = 0x113a;
        iVar2 = FUN_8c201e14(_DAT_8c279270,ar4 + 0x5b86,0x113a,ar7);
        FUN_8c201da0(_DAT_8c279270,iVar2,uVar3,ar7);
        puVar1 = (undefined *)FUN_8c10b698(_DAT_8c27925c,0,ar4 + 0x5b86,iVar2 << 1);
        break;
      case 8:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279298 = _DAT_8c279298 + 1;
          _DAT_8c279284 = (undefined *)0x2;
          if (2 < _DAT_8c279298) {
            _DAT_8c279284 = (undefined *)0x1;
          }
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
        break;
      case 9:
        puVar1 = _DAT_8c279284;
        if (_DAT_8c279284 != (undefined *)0x0) {
          _DAT_8c279284 = (undefined *)0x3;
          puVar1 = (undefined *)FUN_8c1225fc(_DAT_8c27925c,1,ar6,ar7);
        }
      }
    }
  }
  return puVar1;
}

__asm__(".globl _FUN_8c01d15c\n.set _FUN_8c01d15c, _FUN_8c01d15c_def\n");
//@unit 8c01d338
#include "../decls.h"
undefined4 FUN_8c01d338_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x563c);
  uVar1 = 5;
  if ((iVar2 < 6) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      uVar1 = FUN_8c01da90(ar4,ar5,ar6,ar7);
      break;
    case 1:
      uVar1 = FUN_8c01dea4(ar4,ar5,ar6,ar7);
      break;
    case 2:
      uVar1 = FUN_8c01d78c(ar4,ar5,ar6,ar7);
      break;
    case 3:
      uVar1 = FUN_8c01d8d8(ar4,ar5,ar6,ar7);
      break;
    case 4:
      uVar1 = FUN_8c01d7cc(ar4,ar5,ar6,ar7);
      break;
    case 5:
      uVar1 = s_SPEECH_01d92e(ar4,ar5,ar6,ar7);
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01d338\n.set _FUN_8c01d338, _FUN_8c01d338_def\n");
//@unit 8c01d3f4
#include "../decls.h"
int FUN_8c01d3f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(0x5640 + *(int *)(0x5630 + ar4) * 0x50 + ar4);
  *(undefined4 *)(0x5634 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = 0x5630;
  *(undefined4 *)(0x5630 + ar4) = uVar2;
  return iVar1;
}

__asm__(".globl _FUN_8c01d3f4\n.set _FUN_8c01d3f4, _FUN_8c01d3f4_def\n");
//@unit 8c01d440
#include "../decls.h"
undefined4 FUN_8c01d440_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(undefined4 *)0x8c2791b8;
  if (iVar1 != 2) {
    if ((iVar1 != 3) && (iVar1 != 4)) goto LAB_8c01d472;
    FUN_8c01d008(ar4,ar5,ar6,ar7);
  }
  FUN_8c01d490(ar4,ar5,ar6,ar7);
  FUN_8c01cfc8(ar4,ar5,ar6,ar7);
LAB_8c01d472:
  *(undefined4 *)0x8c2791b8 = 0;
  return 0;
}

__asm__(".globl _FUN_8c01d440\n.set _FUN_8c01d440, _FUN_8c01d440_def\n");
//@unit 8c01d490
#include "../decls.h"
int FUN_8c01d490_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c201ba2(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
  if (iVar1 == 2) {
    iVar1 = FUN_8c201b9a(*(undefined4 *)0x8c27926c,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d490\n.set _FUN_8c01d490, _FUN_8c01d490_def\n");
//@unit 8c01d4c4
#include "../decls.h"
uint FUN_8c01d4c4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while ((uVar2 < 0x10 && (*(int *)(uVar2 * 0x50 + ar4 + 0x5634) != 1))) {
    uVar2 = uVar2 + 1;
  }
  if (uVar2 < 0x10) {
    if (*(int *)(ar4 + 0x5630) < 0) {
      *(uint *)(ar4 + 0x5630) = uVar2;
    }
    else {
      iVar1 = *(int *)(ar4 + 0x5630);
      while (-1 < *(int *)(iVar1 * 0x50 + ar4 + 0x5640)) {
        iVar1 = *(int *)(iVar1 * 0x50 + ar4 + 0x5640);
      }
      *(uint *)(iVar1 * 0x50 + ar4 + 0x5640) = uVar2;
    }
    ar7_00 = ar7;
    strcpy(uVar2 * 0x50 + ar4 + 0x5644,ar6,ar6,ar7,ar5);
    strcpy(uVar2 * 0x50 + ar4 + 0x5664,ar7,ar6,ar7_00,ar5);
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x563c) = ar5;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5638) = 2;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5640) = 0xffffffff;
    *(undefined4 *)(uVar2 * 0x50 + ar4 + 0x5634) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d4c4\n.set _FUN_8c01d4c4, _FUN_8c01d4c4_def\n");
//@unit 8c01d624
#include "../decls.h"
undefined4 asr_register_strings_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c01d4c4(ar4,0,ar5,ar6);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _asr_register_strings\n.set _asr_register_strings, _asr_register_strings_def\n");
//@unit 8c01d658
#include "../decls.h"
undefined4 FUN_8c01d658_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01d4c4(ar4,1,ar5,ar6);
  return uVar1;
}

__asm__(".globl _FUN_8c01d658\n.set _FUN_8c01d658, _FUN_8c01d658_def\n");
//@unit 8c01d684
#include "../decls.h"
undefined4 FUN_8c01d684_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  if (_DAT_8c2791b8 == 4) {
    if (_DAT_8c27924c == 1) {
      *ar5 = _DAT_8c2791bc;
      strcpy(ar5 + 3,&DAT_8c2791c8,ar6,ar7,in_PR);
    }
    else {
      *ar5 = 0;
      *(undefined1 *)(ar5 + 3) = 0;
    }
    uVar1 = _DAT_8c279284;
    _DAT_8c2791bc = 0;
    ar5[2] = _DAT_8c279284;
  }
  else {
    uVar1 = 0;
    *ar5 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01d684\n.set _FUN_8c01d684, _FUN_8c01d684_def\n");
//@unit 8c01d6ec
#include "../decls.h"
undefined4 FUN_8c01d6ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)0x8c279278;
  *(undefined4 *)0x8c279278 = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c01d6ec\n.set _FUN_8c01d6ec, _FUN_8c01d6ec_def\n");
//@unit 8c01d704
#include "../decls.h"
undefined4 FUN_8c01d704_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)0x8c27927c;
  *(undefined4 *)0x8c27927c = 0;
  return uVar1;
}

__asm__(".globl _FUN_8c01d704\n.set _FUN_8c01d704, _FUN_8c01d704_def\n");
//@unit 8c01d71c
#include "../decls.h"
undefined4 FUN_8c01d71c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(&FUN_8c01d4c4))
                    (ar4,2,(&DATA_8c12fb7c) + 0x1c,
                     (&DATA_8c12fb7c) + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d71c\n.set _FUN_8c01d71c, _FUN_8c01d71c_def\n");
//@unit 8c01d754
#include "../decls.h"
undefined4 FUN_8c01d754_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(&FUN_8c01d4c4))
                    (ar4,4,(&DATA_8c12fb7c) + 0x1c,
                     (&DATA_8c12fb7c) + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d754\n.set _FUN_8c01d754, _FUN_8c01d754_def\n");
//@unit 8c01d78c
#include "../decls.h"
int FUN_8c01d78c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(undefined4 *)0x8c2791b8;
  if (iVar1 == 4) {
    iVar1 = 1;
    *(undefined4 *)0x8c27924c = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d78c\n.set _FUN_8c01d78c, _FUN_8c01d78c_def\n");
//@unit 8c01d7cc
#include "../decls.h"
int FUN_8c01d7cc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  iVar1 = *(undefined4 *)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = *(undefined4 *)0x8c279284, iVar1 == 0)) {
    if (*(undefined4 *)0x8c279288 != 0) {
      FUN_8c1fb57c(*(undefined4 *)0x8c279288,ar5,ar6,ar7);
      *(undefined4 *)0x8c279288 = 0;
      *(undefined4 *)0x8c27928c = 0;
    }
    FUN_8c122630(*(undefined4 *)0x8c27925c,0x8c279288,0x8c27928c,ar7);
    *(undefined4 *)0x8c279298 = 0;
    iVar1 = 1;
    *(undefined4 *)0x8c279284 = 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d7cc\n.set _FUN_8c01d7cc, _FUN_8c01d7cc_def\n");
//@unit 8c01d868
#include "../decls.h"
undefined4 FUN_8c01d868_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(&FUN_8c01d4c4))
                    (ar4,3,(&DATA_8c12fb7c) + 0x1c,
                     (&DATA_8c12fb7c) + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d868\n.set _FUN_8c01d868, _FUN_8c01d868_def\n");
//@unit 8c01d8a0
#include "../decls.h"
undefined4 FUN_8c01d8a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)(&FUN_8c01d4c4))
                    (ar4,5,(&DATA_8c12fb7c) + 0x1c,
                     (&DATA_8c12fb7c) + 0x1c);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01d8a0\n.set _FUN_8c01d8a0, _FUN_8c01d8a0_def\n");
//@unit 8c01d8d8
#include "../decls.h"
undefined4 FUN_8c01d8d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  *(undefined4 *)0x8c27924c = 0;
  *(undefined4 *)0x8c2791bc = 0;
  uVar1 = FUN_8c01d984(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01d8d8\n.set _FUN_8c01d8d8, _FUN_8c01d8d8_def\n");
//@unit 8c01d92c
#include "../decls.h"
undefined4 s_SPEECH_01d92e_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(0x5638 + *(int *)(0x5630 + ar4) * 0x50 + ar4) = 1;
  FUN_8c01d9ac(ar4,ar5,ar6,ar7);
  uVar1 = (*(code *)(&asr_register_strings))
                    (ar4,(&DATA_8c12fb7c) + 0x1d,
                     (&DATA_8c12fb7c) + 0x26,ar7);
  return uVar1;
}

__asm__(".globl _s_SPEECH_01d92e\n.set _s_SPEECH_01d92e, _s_SPEECH_01d92e_def\n");
//@unit 8c01d984
#include "../decls.h"
int FUN_8c01d984_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(undefined4 *)0x8c2791b8;
  if (iVar1 == 4) {
    iVar1 = FUN_8c10c356(*(undefined4 *)0x8c27925c,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d984\n.set _FUN_8c01d984, _FUN_8c01d984_def\n");
//@unit 8c01d9ac
#include "../decls.h"
int FUN_8c01d9ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = *(undefined4 *)0x8c2791b8;
  if ((iVar1 == 4) && (iVar1 = 0, *(undefined4 *)0x8c279284 != 0)) {
    iVar1 = FUN_8c1225fc(*(undefined4 *)0x8c27925c,3,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d9ac\n.set _FUN_8c01d9ac, _FUN_8c01d9ac_def\n");
//@unit 8c01d9e0
#include "../decls.h"
int FUN_8c01d9e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  if (*(undefined4 *)0x8c279248 == 2) {
    iVar1 = *(undefined4 *)0x8c27924c;
    if (iVar1 == 1) {
      *(undefined4 *)0x8c2791bc = 0;
      ((undefined1 *)1)[0x8c2791bc] = 0;
      *(undefined1 *)(0x8c2791bc + 3) = 0;
      iVar1 = FUN_8c10c322(*(undefined4 *)0x8c27925c,ar5,ar6,ar7);
    }
  }
  else if (*(undefined4 *)0x8c279284 == 0) {
    *(undefined4 *)0x8c279278 = 0;
    iVar1 = 0;
    *(undefined4 *)0x8c27927c = 0;
  }
  else {
    iVar1 = FUN_8c1225fc(*(undefined4 *)0x8c27925c,1,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01d9e0\n.set _FUN_8c01d9e0, _FUN_8c01d9e0_def\n");
//@unit 8c01da60
#include "../decls.h"
undefined4 FUN_8c01da60_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(undefined4 *)0x8c2791b8 == 4) {
    FUN_8c10c356(*(undefined4 *)0x8c27925c,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c279278 = 0;
  return 0;
}

__asm__(".globl _FUN_8c01da60\n.set _FUN_8c01da60, _FUN_8c01da60_def\n");
//@unit 8c01da90
#include "../decls.h"
undefined4 FUN_8c01da90_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 in_stack_ffffff38;
  int *piStack_98;
  undefined1 auStack_94 [132];
  
  if (_DAT_8c2791b8 == 4) {
    strcpy(auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff38);
    FUN_8c01437c(auStack_94,&DAT_8c12fba9,ar6,ar7);
    iVar1 = FUN_8c02126c(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                         &piStack_98);
    if (iVar1 == 0) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 2;
    }
    else {
      iVar1 = FUN_8c01dc80(ar4,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,
                           *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,
                           (int)piStack_98 + *piStack_98 + 0x20,
                           (int)piStack_98 + piStack_98[2] + 0x20,
                           (int)piStack_98 + piStack_98[1] + 0x20);
      if (iVar1 == 1) {
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
      }
      else {
        FUN_8c021338(0x8c3eb334,auStack_94,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,10);
        *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
      }
    }
  }
  else {
    *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 0;
  }
  return 0x5638;
}

__asm__(".globl _FUN_8c01da90\n.set _FUN_8c01da90, _FUN_8c01da90_def\n");
//@unit 8c01dc80
#include "../decls.h"
undefined4
FUN_8c01dc80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4)

{
  int iVar1;
  undefined4 uVar2;
  undefined *ar6_00;
  undefined4 ar7_00;
  undefined1 *ar7_01;
  undefined4 ar5_00;
  
  uVar2 = ar6;
  ar7_00 = ar7;
  ar5_00 = ar5;
  FUN_8c01d984(ar4,ar5,ar6,ar7);
  _DAT_8c2791bc = 0;
  if (_DAT_8c279264 != 0) {
    FUN_8c01d008(ar4,ar5,uVar2,ar7_00);
    asr_init_from_model(ar4,ar5,uVar2,ar7_00);
  }
  ar7_01 = &DAT_8c279264;
  uVar2 = 1;
  FUN_8c10be9c(_DAT_8c279258,ar7,1,&DAT_8c279264);
  *(undefined4 *)(ar4 + 0x5b38) = ar7;
  *(undefined4 *)(ar4 + 0x5b3c) = s0;
  *(undefined4 *)(ar4 + 0x5b40) = s4;
  strcpy(ar4 + 0x5b44,ar5_00,uVar2,ar7_01,ar5_00);
  strcpy(ar4 + 0x5b65,ar6,uVar2,ar7_01,ar5_00);
  iVar1 = FUN_8c01ddfc(ar4,ar6,uVar2,ar7_01);
  if (iVar1 == 1) {
    ar6_00 = &DAT_8c279268;
    iVar1 = FUN_8c10c3de(_DAT_8c279258,*(undefined4 *)(ar4 + 0x5b40),&DAT_8c279268,ar7_01);
    if ((iVar1 == 0) && (_DAT_8c279288 != (undefined1 *)0x0)) {
      FUN_8c122e7c(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279290,_DAT_8c279294);
      ar6_00 = &DAT_8c12fbae;
      ar7_01 = _DAT_8c279288;
      FUN_8c122664(_DAT_8c279264,_DAT_8c279268,&DAT_8c12fbae,_DAT_8c279288,_DAT_8c27928c,
                   &DAT_8c279290,&DAT_8c279294);
    }
    iVar1 = FUN_8c10b6cc(_DAT_8c27925c,_DAT_8c279264,ar6_00,ar7_01);
    if (iVar1 == 0) {
      uVar2 = 1;
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

__asm__(".globl _FUN_8c01dc80\n.set _FUN_8c01dc80, _FUN_8c01dc80_def\n");
//@unit 8c01ddfc
#include "../decls.h"
undefined4 FUN_8c01ddfc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)0x8c279254 = *(int *)(*(int *)(0x5b3c + ar4) + 4);
  if (*(undefined4 *)0x8c279250 != 0) {
    FUN_8c1fb57c(*(undefined4 *)0x8c279250,ar5,ar6,ar7);
  }
  iVar1 = malloc_thunk(*(undefined4 *)0x8c279254 << 2,ar5,ar6,ar7);
  *(undefined4 *)0x8c279250 = iVar1;
  if (*(undefined4 *)0x8c279250 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *(int *)(0x5b3c + ar4) + 8;
    for (iVar4 = 0; iVar4 < *(undefined4 *)0x8c279254; iVar4 = iVar4 + 1) {
      *(int *)(iVar4 * 4 + *(undefined4 *)0x8c279250) = iVar1;
      iVar3 = log_message(iVar1,ar5,ar6,ar7);
      iVar1 = iVar1 + iVar3 + 1;
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01ddfc\n.set _FUN_8c01ddfc, _FUN_8c01ddfc_def\n");
//@unit 8c01dea4
#include "../decls.h"
int FUN_8c01dea4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int ar5_00;
  int ar6_00;
  undefined4 ar7_00;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_88 [132];
  
  strcpy(auStack_88,*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar6,ar7,in_stack_ffffff5c);
  FUN_8c01437c(auStack_88,&DAT_8c12fba9,ar6,ar7);
  ar7_00 = 10;
  ar6_00 = *(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664;
  FUN_8c021338(0x8c3eb334,auStack_88,ar6_00,10);
  *(undefined4 *)(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5638) = 1;
  iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5644,ar4 + 0x5b44,ar6_00,ar7_00);
  if (iVar1 == 0) {
    ar5_00 = ar4 + 0x5b65;
    iVar1 = FUN_8c01dfc0(*(int *)(ar4 + 0x5630) * 0x50 + ar4 + 0x5664,ar5_00,ar6_00,ar7_00);
    if (iVar1 == 0) {
      iVar1 = FUN_8c01d984(ar4,ar5_00,ar6_00,ar7_00);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01dea4\n.set _FUN_8c01dea4, _FUN_8c01dea4_def\n");
//@unit 8c01dfc0
#include "../decls.h"
undefined4 FUN_8c01dfc0_def(byte *ar4,byte *ar5,undefined4 ar6,undefined4 ar7)

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

__asm__(".globl _FUN_8c01dfc0\n.set _FUN_8c01dfc0, _FUN_8c01dfc0_def\n");
//@unit 8c01e028
#include "../decls.h"
int FUN_8c01e028_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar5 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar5 + iVar1 + 4) = 0;
  }
  return 0x100;
}

__asm__(".globl _FUN_8c01e028\n.set _FUN_8c01e028, _FUN_8c01e028_def\n");
//@unit 8c01e04c
#include "../decls.h"
undefined4 FUN_8c01e04c_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  *ar5 = *(undefined4 *)0x8c27928c;
  for (iVar2 = 0; iVar2 < 0x100; iVar2 = iVar2 + 1) {
    *(undefined1 *)((int)ar5 + iVar2 + 4) = 0;
  }
  uVar1 = 0;
  if (*(undefined4 *)0x8c27928c != 0) {
    uVar1 = memmove(ar5 + 1,*(undefined4 *)0x8c279288,*(undefined4 *)0x8c27928c,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01e04c\n.set _FUN_8c01e04c, _FUN_8c01e04c_def\n");
//@unit 8c01e0a4
#include "../decls.h"
int FUN_8c01e0a4_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  
  ar5_00 = ar5;
  if (*(undefined4 *)0x8c279288 != 0) {
    FUN_8c1fb57c(*(undefined4 *)0x8c279288,ar5,ar6,ar7);
  }
  *(undefined4 *)0x8c279288 = 0;
  *(undefined4 *)0x8c27928c = 0;
  iVar1 = 0x100;
  if (*ar5 < 0x100) {
    *(undefined4 *)0x8c27928c = *ar5;
    iVar1 = 0;
    if (*(undefined4 *)0x8c27928c != 0) {
      iVar1 = malloc_thunk(*(undefined4 *)0x8c27928c,ar5_00,ar6,ar7);
      *(undefined4 *)0x8c279288 = iVar1;
      iVar1 = memmove(*(undefined4 *)0x8c279288,ar5 + 1,*(undefined4 *)0x8c27928c,ar7);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01e0a4\n.set _FUN_8c01e0a4, _FUN_8c01e0a4_def\n");
//@unit 8c01e128
#include "../decls.h"
undefined4 FUN_8c01e128_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = malloc_thunk(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01e128\n.set _FUN_8c01e128, _FUN_8c01e128_def\n");
//@unit 8c01e14c
#include "../decls.h"
undefined4 FUN_8c01e14c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c1fb57c(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01e14c\n.set _FUN_8c01e14c, _FUN_8c01e14c_def\n");
//@unit 8c01e168
#include "../decls.h"
int FUN_8c01e168_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int ar4_00;
  undefined4 ar5_00;
  
  ar5_00 = ar5;
  ar4_00 = malloc_thunk(ar5,ar5,ar6,ar7);
  if (ar4_00 != 0) {
    ar5_00 = ar4;
    memmove(ar4_00,ar4,ar5,ar7);
    ar6 = ar5;
  }
  FUN_8c1fb57c(ar4,ar5_00,ar6,ar7);
  return ar4_00;
}

__asm__(".globl _FUN_8c01e168\n.set _FUN_8c01e168, _FUN_8c01e168_def\n");
//@unit 8c01e1e8
#include "../decls.h"
undefined4 FUN_8c01e1e8_def(int *ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint in_stack_ffffffe0;
  
  _DAT_8c279278 = 0;
  _DAT_8c27927c = 0;
  if ((ar4 != (int *)0x0) && (_DAT_8c27924c != 0)) {
    if (_DAT_8c2791c0 == 2) {
      _DAT_8c279274 = 0;
      FUN_8c201c28(_DAT_8c27926c,0,ar6,ar7);
      _DAT_8c2791bc = 2;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb3,ar6,ar7,in_stack_ffffffe0);
    }
    else if (_DAT_8c2791c0 == 3) {
      _DAT_8c279274 = _DAT_8c279274 + 2;
      if (0x10 < _DAT_8c279274) {
        _DAT_8c279274 = 0x10;
      }
      FUN_8c201c28(_DAT_8c27926c,_DAT_8c279274,ar6,ar7);
      _DAT_8c2791bc = 3;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*ar4 == 0) {
      _DAT_8c279274 = 0x10;
      FUN_8c201c28(_DAT_8c27926c,0x10,ar6,ar7);
    }
    else if (*(int *)(ar4[1] + 4) < 1000) {
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else if (*(int *)(ar4[1] + 4) < _DAT_8c279280) {
      _DAT_8c279280 = _DAT_8c279280 + -500;
      if (_DAT_8c279280 < 3000) {
        _DAT_8c279280 = 3000;
      }
      _DAT_8c2791bc = 1;
      strcpy(&DAT_8c2791c8,&DAT_8c12fbb7,ar6,ar7,in_stack_ffffffe0);
    }
    else {
      if ((_DAT_8c279280 + 1000 < *(int *)(ar4[1] + 4)) &&
         (_DAT_8c279280 = _DAT_8c279280 + 500, 8000 < _DAT_8c279280)) {
        _DAT_8c279280 = 8000;
      }
      _DAT_8c2791bc = 1;
      DAT_8c2791c8 = '\0';
      for (iVar1 = 0; iVar1 < *(int *)(uint)ar4[1]; iVar1 = iVar1 + 1) {
        uVar2 = *(uint *)(*(int *)(*(int *)(ar4[1] + 0x14) + iVar1 * 0x10 + 0xc) + 8);
        if (((_DAT_8c279250 != 0) && (uVar2 < _DAT_8c279254)) &&
           (**(char **)(uVar2 * 4 + _DAT_8c279250) != '\0')) {
          FUN_8c01437c(&DAT_8c2791c8,*(undefined4 *)(uVar2 * 4 + _DAT_8c279250),ar6,ar7);
          ar5 = " ";
          FUN_8c01437c(&DAT_8c2791c8,&DAT_8c12fbbb,ar6,ar7);
          in_stack_ffffffe0 = uVar2;
        }
      }
      if (DAT_8c2791c8 == '\0') {
        ar5 = "@NAME";
        strcpy(&DAT_8c2791c8,"@NAME",ar6,ar7,in_stack_ffffffe0);
        _DAT_8c27927c = 1;
      }
      iVar1 = log_message(&DAT_8c2791c8,ar5,ar6,ar7);
      if ((0 < iVar1) && (*(char *)(iVar1 + -0x73d86e39) == ' ')) {
        *(undefined1 *)(iVar1 + -0x73d86e39) = 0;
      }
    }
  }
  return 0;
}

__asm__(".globl _FUN_8c01e1e8\n.set _FUN_8c01e1e8, _FUN_8c01e1e8_def\n");
//@unit 8c01e4dc
#include "../decls.h"
undefined4 * FUN_8c01e4dc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *ar4 = 0;
  for (iVar1 = 0; iVar1 < 0x100; iVar1 = iVar1 + 1) {
    *(undefined1 *)((int)ar4 + iVar1 + 4) = 0;
  }
  return ar4;
}

__asm__(".globl _FUN_8c01e4dc\n.set _FUN_8c01e4dc, _FUN_8c01e4dc_def\n");
//@unit 8c01e504
#include "../decls.h"
int FUN_8c01e504_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c01a308(ar4,ar5,ar6,ar7);
  FUN_8c01ca24(ar4 + 0x384c,ar5,ar6,ar7);
  *(undefined4 *)(0xa510 + ar4) = 1;
  *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
  *(undefined4 *)(0xa518 + ar4) = 0;
  *(undefined4 *)(0xa520 + ar4) = 1;
  return ar4;
}

__asm__(".globl _FUN_8c01e504\n.set _FUN_8c01e504, _FUN_8c01e504_def\n");
//@unit 8c01e560
#include "../decls.h"
int FUN_8c01e560_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    free_if_nonnull_wrap_01cb24(ar4 + 0x384c,0xffffffff,ar6,ar7);
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_01a384(ar4,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c01e560\n.set _FUN_8c01e560, _FUN_8c01e560_def\n");
//@unit 8c01e5b4
#include "../decls.h"
undefined4 FUN_8c01e5b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  input_device_select_and_reset(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _FUN_8c01e5b4\n.set _FUN_8c01e5b4, _FUN_8c01e5b4_def\n");
//@unit 8c01e5e0
#include "../decls.h"
undefined4 input_device_select_and_reset_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  
  auStack_24[0] = *(undefined4 *)(&DATA_8c12fbc8);
  auStack_24[1] = *(undefined4 *)((&DATA_8c12fbc8) + 4);
  auStack_24[2] = *(undefined4 *)((&DATA_8c12fbc8) + 8);
  auStack_24[3] = *(undefined4 *)((&DATA_8c12fbc8) + 0xc);
  uStack_14 = *(undefined4 *)((&DATA_8c12fbc8) + 0x10);
  if (*(int *)(0xa510 + ar4) == 0) {
    return *(undefined4 *)(0xa510 + ar4);
  }
  if (*(int *)(0xa510 + ar4) == 1) {
    *(undefined4 *)(0xa524 + ar4) = *(undefined4 *)(&DATA_8c12fbc8);
    *(undefined4 *)(0xa528 + ar4) = 0;
    *(undefined4 *)(0xa52c + ar4) = 0;
    *(undefined4 *)(0xa530 + ar4) = 0;
    *(undefined4 *)(0xa534 + ar4) = 0;
    *(undefined4 *)(0xa538 + ar4) = 0;
    *(undefined4 *)(0xa53c + ar4) = 0;
    *(undefined4 *)(0xa540 + ar4) = 0;
    if (ar5 == 0) {
      for (iVar3 = 0; iVar3 < 1; iVar3 = iVar3 + 1) {
        iVar1 = FUN_8c1f62cc(auStack_24[iVar3],ar5,ar6,ar7);
        iVar2 = FUN_8c1f6338(auStack_24[iVar3],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar1 + 0x30) & 1) != 0)) break;
      }
      iVar1 = 0;
      if (iVar3 != 0) {
        *(undefined4 *)(0xa524 + ar4) = auStack_24[0];
        return 1;
      }
    }
    else {
      for (iVar1 = 3; -1 < iVar1; iVar1 = iVar1 + -1) {
        iVar3 = FUN_8c1f62cc(auStack_24[iVar1],ar5,ar6,ar7);
        iVar2 = FUN_8c1f6338(auStack_24[iVar1],ar5,ar6,ar7);
        if ((iVar2 == 0) && ((**(uint **)(iVar3 + 0x30) & 1) != 0)) break;
      }
      if (iVar1 != 3) {
        *(undefined4 *)(0xa524 + ar4) = auStack_24[3];
        return 1;
      }
    }
    *(undefined4 *)(0xa524 + ar4) = auStack_24[iVar1];
    *(undefined4 *)(0xa510 + ar4) = 5;
  }
  *(undefined2 *)(0xa546 + ar4) = 0;
  *(undefined2 *)(0xa544 + ar4) = 0;
  input_update_state_gate(ar4,ar5,ar6,ar7);
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _input_device_select_and_reset\n.set _input_device_select_and_reset, _input_device_select_and_reset_def\n");
//@unit 8c01e790
#include "../decls.h"
int input_update_state_gate_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0xa510;
  if (*(int *)(0xa520 + ar4) == 0) {
    iVar2 = 1;
    if (*(int *)(0xa510 + ar4) != 1) {
      *(undefined4 *)(0xa510 + ar4) = 0;
      iVar2 = iVar1;
    }
  }
  else {
    iVar2 = input_peripheral_state_machine(ar4,ar5,ar6,ar7);
  }
  return iVar2;
}

__asm__(".globl _input_update_state_gate\n.set _input_update_state_gate, _input_update_state_gate_def\n");
//@unit 8c01e7cc
#include "../decls.h"
undefined * input_peripheral_state_machine_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(ar4 + 0xa510);
  if ((iVar2 < 6) && (0 < iVar2)) {
    puVar1 = (&switchdata_8c01e7f6_8c01e7fc)[iVar2 + -1];
                    
    switch(iVar2) {
    case 2:
      iVar2 = FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      puVar1 = (undefined *)(uint)(iVar2 == 1);
      iVar2 = FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (iVar2 == 1) {
        puVar1 = (undefined *)((uint)puVar1 | 2);
      }
      if (puVar1 == (undefined *)0x0) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      else if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 4;
      }
      else if (puVar1 == (undefined *)0x2) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 3;
      }
      else if (puVar1 == (undefined *)0x3) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 3:
      iVar2 = FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01a3b4(ar4,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
      break;
    case 4:
      iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 0xa510) = 5;
      }
      puVar1 = (undefined *)FUN_8c01cb54(ar4 + 0x384c,*(undefined4 *)(ar4 + 0xa524),ar6,ar7);
      if (puVar1 == (undefined *)0x1) {
        puVar1 = (undefined *)0xa510;
        *(undefined4 *)(ar4 + 0xa510) = 0;
      }
    }
  }
  else {
    iVar2 = FUN_8c01a5cc(ar4,ar5,ar6,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0xa510) = 3;
    }
    puVar1 = (undefined *)FUN_8c01d0cc(ar4 + 0x384c,ar5,ar6,ar7);
    if (puVar1 == (undefined *)0x0) {
      puVar1 = (undefined *)0xa510;
      *(undefined4 *)(ar4 + 0xa510) = 4;
    }
  }
  return puVar1;
}

__asm__(".globl _input_peripheral_state_machine\n.set _input_peripheral_state_machine, _input_peripheral_state_machine_def\n");
//@unit 8c01e954
#include "../decls.h"
undefined4 input_poll_device_state_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8c1f62cc(*(undefined4 *)(0xa524 + ar4),ar5,ar6,ar7);
  if ((**(uint **)(iVar1 + 0x30) & 1) == 0) {
    *(undefined4 *)(0xa518 + ar4) = 10;
    if (*(int *)(0xa51c + ar4) < 1) {
      *(undefined4 *)(0xa51c + ar4) = 0;
      *(undefined4 *)(0xa510 + ar4) = 1;
      input_update_state_gate(ar4,ar5,ar6,ar7);
      *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
      uVar2 = *(undefined4 *)(0xa510 + ar4);
    }
    else {
      *(int *)(0xa51c + ar4) = *(int *)(0xa51c + ar4) + -1;
      *(undefined4 *)(0xa510 + ar4) = 2;
      uVar2 = *(undefined4 *)(0xa510 + ar4);
    }
  }
  else {
    *(undefined4 *)(0xa540 + ar4) = 0;
    *(undefined4 *)(0xa528 + ar4) = *(undefined4 *)(iVar1 + 8);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa528 + ar4);
    *(undefined4 *)(0xa52c + ar4) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(0xa530 + ar4) = *(undefined4 *)(iVar1 + 0x10);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa530 + ar4);
    *(undefined4 *)(0xa534 + ar4) = *(undefined4 *)(iVar1 + 0x14);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa534 + ar4);
    *(int *)(0xa538 + ar4) = (int)*(short *)(iVar1 + 0x1c);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa538 + ar4);
    *(int *)(0xa53c + ar4) = (int)*(short *)(iVar1 + 0x1e);
    *(uint *)(0xa540 + ar4) = *(uint *)(0xa540 + ar4) | *(uint *)(0xa53c + ar4);
    *(undefined2 *)(0xa544 + ar4) = *(undefined2 *)(iVar1 + 0x1a);
    *(undefined2 *)(0xa546 + ar4) = *(undefined2 *)(iVar1 + 0x18);
    *(undefined4 *)(0xa51c + ar4) = 0x5a;
    if (*(int *)(0xa518 + ar4) < 1) {
      *(undefined4 *)(0xa518 + ar4) = 0;
      input_update_state_gate(ar4,ar5,ar6,ar7);
      if (((*(int *)(0xa514 + ar4) == 0) || (*(int *)(0xa514 + ar4) == 4)) &&
         (*(int *)(0xa510 + ar4) == 5)) {
        *(undefined4 *)(0xa518 + ar4) = 10;
        uVar2 = 2;
      }
      else {
        *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
        uVar2 = *(undefined4 *)(0xa510 + ar4);
      }
    }
    else {
      input_update_state_gate(ar4,ar5,ar6,ar7);
      *(int *)(0xa518 + ar4) = *(int *)(0xa518 + ar4) + -1;
      *(undefined4 *)(0xa510 + ar4) = 2;
      *(undefined4 *)(0xa514 + ar4) = *(undefined4 *)(0xa510 + ar4);
      uVar2 = 2;
    }
  }
  return uVar2;
}

__asm__(".globl _input_poll_device_state\n.set _input_poll_device_state, _input_poll_device_state_def\n");
//@unit 8c01eb50
#include "../decls.h"
undefined4 FUN_8c01eb50_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,8,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01eb50\n.set _FUN_8c01eb50, _FUN_8c01eb50_def\n");
//@unit 8c01eb94
#include "../decls.h"
undefined4 FUN_8c01eb94_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,8,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01eb94\n.set _FUN_8c01eb94, _FUN_8c01eb94_def\n");
//@unit 8c01ebd8
#include "../decls.h"
undefined4 input_is_mask_set_20000_01ebd8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x20000,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_20000_01ebd8\n.set _input_is_mask_set_20000_01ebd8, _input_is_mask_set_20000_01ebd8_def\n");
//@unit 8c01ec20
#include "../decls.h"
undefined4 FUN_8c01ec20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x20000,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ec20\n.set _FUN_8c01ec20, _FUN_8c01ec20_def\n");
//@unit 8c01ec68
#include "../decls.h"
undefined4 input_is_mask_set_10000_01ec68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10000,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_10000_01ec68\n.set _input_is_mask_set_10000_01ec68, _input_is_mask_set_10000_01ec68_def\n");
//@unit 8c01ecb0
#include "../decls.h"
undefined4 FUN_8c01ecb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10000,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ecb0\n.set _FUN_8c01ecb0, _FUN_8c01ecb0_def\n");
//@unit 8c01ecf8
#include "../decls.h"
undefined4 FUN_8c01ecf8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10000,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ecf8\n.set _FUN_8c01ecf8, _FUN_8c01ecf8_def\n");
//@unit 8c01ed40
#include "../decls.h"
undefined4 FUN_8c01ed40_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10000,3,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ed40\n.set _FUN_8c01ed40, _FUN_8c01ed40_def\n");
//@unit 8c01ed88
#include "../decls.h"
undefined4 FUN_8c01ed88_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,4,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ed88\n.set _FUN_8c01ed88, _FUN_8c01ed88_def\n");
//@unit 8c01edcc
#include "../decls.h"
undefined4 FUN_8c01edcc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,4,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01edcc\n.set _FUN_8c01edcc, _FUN_8c01edcc_def\n");
//@unit 8c01ee10
#include "../decls.h"
undefined4 FUN_8c01ee10_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,4,3,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ee10\n.set _FUN_8c01ee10, _FUN_8c01ee10_def\n");
//@unit 8c01ee54
#include "../decls.h"
undefined4 FUN_8c01ee54_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,2,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ee54\n.set _FUN_8c01ee54, _FUN_8c01ee54_def\n");
//@unit 8c01ee98
#include "../decls.h"
undefined4 FUN_8c01ee98_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,2,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ee98\n.set _FUN_8c01ee98, _FUN_8c01ee98_def\n");
//@unit 8c01eedc
#include "../decls.h"
undefined4 FUN_8c01eedc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,2,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01eedc\n.set _FUN_8c01eedc, _FUN_8c01eedc_def\n");
//@unit 8c01ef20
#include "../decls.h"
undefined4 input_is_mask_set_400_01ef20_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x400,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_400_01ef20\n.set _input_is_mask_set_400_01ef20, _input_is_mask_set_400_01ef20_def\n");
//@unit 8c01ef68
#include "../decls.h"
undefined4 FUN_8c01ef68_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x400,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01ef68\n.set _FUN_8c01ef68, _FUN_8c01ef68_def\n");
//@unit 8c01efb0
#include "../decls.h"
undefined4 FUN_8c01efb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x400,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01efb0\n.set _FUN_8c01efb0, _FUN_8c01efb0_def\n");
//@unit 8c01eff8
#include "../decls.h"
undefined4 input_is_mask_set_200_01eff8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x200,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_200_01eff8\n.set _input_is_mask_set_200_01eff8, _input_is_mask_set_200_01eff8_def\n");
//@unit 8c01f040
#include "../decls.h"
undefined4 FUN_8c01f040_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x200,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f040\n.set _FUN_8c01f040, _FUN_8c01f040_def\n");
//@unit 8c01f088
#include "../decls.h"
undefined4 input_is_mask_set_80_01f088_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x80,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_80_01f088\n.set _input_is_mask_set_80_01f088, _input_is_mask_set_80_01f088_def\n");
//@unit 8c01f0d0
#include "../decls.h"
undefined4 FUN_8c01f0d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x80,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f0d0\n.set _FUN_8c01f0d0, _FUN_8c01f0d0_def\n");
//@unit 8c01f118
#include "../decls.h"
undefined4 FUN_8c01f118_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x80,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f118\n.set _FUN_8c01f118, _FUN_8c01f118_def\n");
//@unit 8c01f160
#include "../decls.h"
undefined4 input_is_mask_set_40_01f160_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x40,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_40_01f160\n.set _input_is_mask_set_40_01f160, _input_is_mask_set_40_01f160_def\n");
//@unit 8c01f1a4
#include "../decls.h"
undefined4 FUN_8c01f1a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x40,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f1a4\n.set _FUN_8c01f1a4, _FUN_8c01f1a4_def\n");
//@unit 8c01f1e8
#include "../decls.h"
undefined4 FUN_8c01f1e8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x40,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f1e8\n.set _FUN_8c01f1e8, _FUN_8c01f1e8_def\n");
//@unit 8c01f22c
#include "../decls.h"
undefined4 input_is_mask_set_20_01f22c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x20,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_20_01f22c\n.set _input_is_mask_set_20_01f22c, _input_is_mask_set_20_01f22c_def\n");
//@unit 8c01f270
#include "../decls.h"
undefined4 FUN_8c01f270_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x20,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f270\n.set _FUN_8c01f270, _FUN_8c01f270_def\n");
//@unit 8c01f2b4
#include "../decls.h"
undefined4 input_is_mask_set_10_01f2b4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10,0,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _input_is_mask_set_10_01f2b4\n.set _input_is_mask_set_10_01f2b4, _input_is_mask_set_10_01f2b4_def\n");
//@unit 8c01f2f8
#include "../decls.h"
undefined4 FUN_8c01f2f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10,1,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f2f8\n.set _FUN_8c01f2f8, _FUN_8c01f2f8_def\n");
//@unit 8c01f33c
#include "../decls.h"
undefined4 FUN_8c01f33c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(0xa510 + ar4) == 1) {
    uVar1 = 2;
  }
  else {
    iVar2 = input_mask_test(ar4,0x10,2,ar7);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f33c\n.set _FUN_8c01f33c, _FUN_8c01f33c_def\n");
//@unit 8c01f380
#include "../decls.h"
undefined4 input_get_word_a538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa538 + ar4);
}

__asm__(".globl _input_get_word_a538\n.set _input_get_word_a538, _input_get_word_a538_def\n");
//@unit 8c01f38c
#include "../decls.h"
undefined4 input_get_word_a53c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa53c + ar4);
}

__asm__(".globl _input_get_word_a53c\n.set _input_get_word_a53c, _input_get_word_a53c_def\n");
//@unit 8c01f398
#include "../decls.h"
undefined4 FUN_8c01f398_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(0xa540 + ar4) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c01f398\n.set _FUN_8c01f398, _FUN_8c01f398_def\n");
//@unit 8c01f3b0
#include "../decls.h"
undefined4 input_mask_test_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar6 == 0) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa528,ar7);
  }
  else if (ar6 == 1) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa52c,ar7);
  }
  else if (ar6 == 2) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa530,ar7);
  }
  else if (ar6 == 3) {
    uVar1 = input_mask_test_word(ar4,ar5,ar4 + 0xa534,ar7);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

__asm__(".globl _input_mask_test\n.set _input_mask_test, _input_mask_test_def\n");
//@unit 8c01f458
#include "../decls.h"
undefined4 input_mask_test_word_def(undefined4 ar4,uint ar5,uint *ar6,undefined4 ar7)

{
  uint uVar1;
  
  if (0x80 < ar5) {
    if (0x400 < ar5) {
      uVar1 = 0x20000;
      if (ar5 <= 0x10000) {
        uVar1 = 0x10000;
      }
    }
    else {
      uVar1 = 0x200;
      if (0x400 <= ar5) goto LAB_8c01f4ea;
    }
    if (uVar1 != ar5) {
      return 0xffffffff;
    }
  }
  else if (ar5 < 0x80) {
    if (ar5 < 0x11) {
      if (ar5 < 0x10) {
        if (8 < ar5) {
          return 0xffffffff;
        }
        if (ar5 < 2) {
          return 0xffffffff;
        }
        if (((ar5 != 2) && (ar5 != 4)) && (ar5 != 8)) {
          return 0xffffffff;
        }
      }
    }
    else if (ar5 < 0x21) {
      if (ar5 != 0x20) {
        return 0xffffffff;
      }
    }
    else if (ar5 != 0x40) {
      return 0xffffffff;
    }
  }
LAB_8c01f4ea:
  if ((*ar6 & ar5) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _input_mask_test_word\n.set _input_mask_test_word, _input_mask_test_word_def\n");
//@unit 8c01f514
#include "../decls.h"
undefined4 get_field_a524_01f514_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa524 + ar4);
}

__asm__(".globl _get_field_a524_01f514\n.set _get_field_a524_01f514, _get_field_a524_01f514_def\n");
//@unit 8c01f520
#include "../decls.h"
undefined4 FUN_8c01f520_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c01f520\n.set _FUN_8c01f520, _FUN_8c01f520_def\n");
//@unit 8c01f528
#include "../decls.h"
int FUN_8c01f528_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x384c;
}

__asm__(".globl _FUN_8c01f528\n.set _FUN_8c01f528, _FUN_8c01f528_def\n");
//@unit 8c01f538
#include "../decls.h"
undefined4 get_field_a510_01f538_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa510 + ar4);
}

__asm__(".globl _get_field_a510_01f538\n.set _get_field_a510_01f538, _get_field_a510_01f538_def\n");
//@unit 8c01f544
#include "../decls.h"
undefined4 FUN_8c01f544_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01d6ec(ar4 + 0x384c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01f544\n.set _FUN_8c01f544, _FUN_8c01f544_def\n");
//@unit 8c01f56c
#include "../decls.h"
undefined4 FUN_8c01f56c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c01d704(ar4 + 0x384c,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01f56c\n.set _FUN_8c01f56c, _FUN_8c01f56c_def\n");
//@unit 8c01f594
#include "../decls.h"
undefined4 FUN_8c01f594_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c2792a0 = 0;
  iVar1 = FUN_8c1f3a34(ar4,ar5,ar6,ar7);
  if ((iVar1 == 6) || (iVar1 == 7)) {
    *(undefined4 *)0x8c2792a0 = 6;
  }
  return *(undefined4 *)0x8c2792a0;
}

__asm__(".globl _FUN_8c01f594\n.set _FUN_8c01f594, _FUN_8c01f594_def\n");
//@unit 8c01f5d0
#include "../decls.h"
undefined4 FUN_8c01f5d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4;
}

__asm__(".globl _FUN_8c01f5d0\n.set _FUN_8c01f5d0, _FUN_8c01f5d0_def\n");
//@unit 8c01f5d8
#include "../decls.h"
int free_if_nonnull_wrap_01f5d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_01f5d8\n.set _free_if_nonnull_wrap_01f5d8, _free_if_nonnull_wrap_01f5d8_def\n");
//@unit 8c01f608
#include "../decls.h"
undefined4 s_SPEECH_01f60c_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 *ar4_00;
  char *ar5_00;
  int iVar2;
  undefined4 ar6_00;
  
  *ar4 = 0;
  ar4[1] = 0;
  ar4[8] = 0;
  ar4[9] = 0;
  ar4[10] = 0;
  ar4[0xb] = 0;
  ar4[0xc] = 0;
  ar4[0xd] = 0;
  uVar1 = malloc_thunk(0x4b800,ar5,ar6,ar7);
  ar4[4] = uVar1;
  _DAT_8c2792a0 = 0;
  for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
    *(undefined1 *)(ar4 + iVar2 * 0x580d + 0xe) = 0;
  }
  FUN_8c01f6dc(ar4,"\\",0,ar7);
  ar6_00 = 2;
  FUN_8c01f6dc(ar4,"SPEECH",1,ar7);
  ar5_00 = "GRAPHICS";
  ar4_00 = ar4;
  uVar1 = ar6_00;
  FUN_8c01f6dc(ar4,"GRAPHICS",2,ar7);
  FUN_8c262810(ar4_00,ar5_00,ar6_00,ar7,uVar1);
  *(undefined1 *)(ar4 + 7) = 0;
  return 1;
}

__asm__(".globl _s_SPEECH_01f60c\n.set _s_SPEECH_01f60c, _s_SPEECH_01f60c_def\n");
//@unit 8c01f6dc
#include "../decls.h"
undefined4 FUN_8c01f6dc_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int ar6_00;
  
  uVar1 = 3;
  if (ar6 < 3) {
    ar6_00 = ar6;
    strcpy(ar4 + ar6 * 0x16034 + 0x38,ar5,ar6,ar7,ar5);
    uVar1 = FUN_8c1f3078(ar4 + ar6 * 0x16034 + 0x5c,0x800,ar6_00,ar7);
    *(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58) = uVar1;
    uVar1 = FUN_8c1f3926(ar4 + ar6 * 0x16034 + 0x38,*(undefined4 *)(ar4 + ar6 * 0x16034 + 0x58),
                         ar6_00,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f6dc\n.set _FUN_8c01f6dc, _FUN_8c01f6dc_def\n");
//@unit 8c01f780
#include "../decls.h"
undefined4 FUN_8c01f780_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if (*(int *)(ar4 + 0x20) == 0) {
    return 0;
  }
  return 1;
}

__asm__(".globl _FUN_8c01f780\n.set _FUN_8c01f780, _FUN_8c01f780_def\n");
//@unit 8c01f794
#include "../decls.h"
undefined4 FUN_8c01f794_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(ar4 + 4) == 0) {
    FUN_8c02009c(ar4,ar5,ar6,ar7);
  }
  else {
    iVar1 = **(int **)(ar4 + 4);
    if (iVar1 == 0xb) {
      FUN_8c01fab4(ar4,ar5,ar6,ar7);
    }
    else if (((iVar1 == 0xc) || (iVar1 == 0xd)) || (iVar1 == 0xe)) {
      FUN_8c01f9c4(ar4,ar5,ar6,ar7);
    }
    else {
      FUN_8c01f8a4(ar4,ar5,ar6,ar7);
    }
  }
  uVar2 = FUN_8c01f83c(ar4,ar5,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01f794\n.set _FUN_8c01f794, _FUN_8c01f794_def\n");
//@unit 8c01f810
#include "../decls.h"
uint FUN_8c01f810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c01f794(ar4,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _FUN_8c01f810\n.set _FUN_8c01f810, _FUN_8c01f810_def\n");
//@unit 8c01f83c
#include "../decls.h"
undefined4 FUN_8c01f83c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (*(undefined4 *)0x8c2792a0 == 6) {
    uVar1 = 1;
  }
  else if (*(undefined4 *)0x8c2792a0 == 7) {
    uVar1 = 2;
  }
  else {
    *(char *)(ar4 + 0x1c) = *(char *)(ar4 + 0x1c) + '\x01';
    if (((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x20) == 0)) && (*(char *)(ar4 + 0x1c) == '\0')
       ) {
      FUN_8c1f3a4c(ar4,ar5,ar6,ar7);
    }
    uVar1 = 0;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c01f83c\n.set _FUN_8c01f83c, _FUN_8c01f83c_def\n");
//@unit 8c01f8a4
#include "../decls.h"
int FUN_8c01f8a4_def(int *ar4,undefined4 ar5,int *ar6,int ar7)

{
  int iVar1;
  int *ar5_00;
  
  iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
  if ((iVar1 == 3) || (iVar1 == 4)) {
    if (*ar4 != 0) {
      FUN_8c262168(*ar4,ar5,ar6,ar7);
    }
    *ar4 = 0;
    if (iVar1 == 3) {
      ar7 = ar4[1] + 0x10;
      ar6 = ar4 + 8;
      ar5_00 = *(int **)ar4[1];
      FUN_8c020600(ar4,ar5_00,ar6,ar7);
      iVar1 = *(int *)(uint)ar4[1];
      if ((iVar1 < 0x11) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          ar5_00 = (int *)(uint)ar4[1];
          s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,ar5_00,ar6,ar7);
          break;
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
          break;
        case 0xf:
          ar6 = (int *)(uint)ar4[1];
          ar5_00 = ar4 + 0xc;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
          break;
        case 0x10:
          ar6 = (int *)(uint)ar4[1];
          ar5_00 = ar4 + 0xd;
          FUN_8c0205e8(ar4,ar5_00,ar6,ar7);
        }
      }
    }
    else {
      ar5_00 = (int *)(uint)ar4[1];
      FUN_8c02049c(ar4,ar5_00,ar6,ar7);
    }
    iVar1 = FUN_8c02009c(ar4,ar5_00,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01f8a4\n.set _FUN_8c01f8a4, _FUN_8c01f8a4_def\n");
//@unit 8c01f9c4
#include "../decls.h"
undefined4 FUN_8c01f9c4_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r13;
  
  iVar1 = **(int **)(ar4 + 4);
  if (iVar1 == 0xc) {
    iVar1 = FUN_8c25b3a2(*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar5,ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xd) {
    iVar1 = (*(code *)(&FUN_8c256164))
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  else if (iVar1 == 0xe) {
    iVar1 = (*(code *)(&FUN_8c239212))
                      (*(int *)(ar4 + 4) + 0x10,*(undefined4 *)(*(int *)(ar4 + 4) + 8),ar6,ar7);
    if (iVar1 == 1) {
      unaff_r13 = 1;
    }
    else {
      unaff_r13 = -1;
    }
  }
  if (unaff_r13 == 1) {
    ar7 = *(int *)(ar4 + 4) + 0x10;
    FUN_8c020600(ar4,**(undefined4 **)(ar4 + 4),ar4 + 0x20,ar7);
    ar6 = *(undefined4 *)(ar4 + 4);
    iVar1 = ar4 + 0x2c;
    FUN_8c0205e8(ar4,iVar1,ar6,ar7);
  }
  else {
    iVar1 = *(int *)(ar4 + 4);
    FUN_8c02049c(ar4,iVar1,ar6,ar7);
  }
  uVar2 = FUN_8c02009c(ar4,iVar1,ar6,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c01f9c4\n.set _FUN_8c01f9c4, _FUN_8c01f9c4_def\n");
//@unit 8c01fab4
#include "../decls.h"
int FUN_8c01fab4_def(int *ar4,int *ar5,int ar6,int ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = ar4[4];
  iVar1 = ar4[5];
  if (iVar1 == 1) {
    ar4[5] = 2;
    ar4[6] = ar4[6] - 0x800;
    iVar2 = ar4[4];
    iVar1 = s_E9040816_adxf_is_NULL_ADXF_R_26231a(*ar4,1,iVar2,ar7);
    if (iVar1 < 0) {
      FUN_8c02049c(ar4,ar4[1],iVar2,ar7);
      iVar1 = 5;
      ar4[5] = 5;
    }
  }
  else if (iVar1 == 2) {
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 0x800;
      if (0x800 < *(int *)(iVar2 + 0x20)) {
        ar4[5] = 3;
        uVar3 = *(int *)(iVar2 + 0x20) + 0xfffff800;
        ar4[6] = ar4[6] - uVar3;
        if (0x4b800 < uVar3) {
          FUN_8c02049c(ar4,ar4[1],ar6,ar7);
          ar4[5] = 5;
        }
        iVar2 = ar4[4] + 0x800;
        iVar1 = (*(code *)(&s_E9040816_adxf_is_NULL_ADXF_R_26231a))
                          (*ar4,uVar3 >> 0xb,iVar2,ar7);
        if (iVar1 < 0) {
          FUN_8c02049c(ar4,ar4[1],iVar2,ar7);
          iVar1 = 5;
          ar4[5] = 5;
        }
      }
    }
    else if (iVar1 == 4) {
      FUN_8c02049c(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = s_E9040832_adxf_is_NULL_ADXF_G_2626b4(*ar4,ar5,ar6,ar7);
    if (iVar1 == 3) {
      ar4[5] = 4;
      iVar1 = 4;
    }
    else if (iVar1 == 4) {
      FUN_8c02049c(ar4,ar4[1],ar6,ar7);
      ar4[5] = 5;
      iVar1 = 5;
    }
  }
  else {
    if (iVar1 == 4) {
      FUN_8c01fc78(ar4,ar4[1],ar6,ar7);
      if (0 < ar4[6]) {
        ar4[5] = 1;
        return 1;
      }
      ar7 = ar4[1] + 0x10;
      FUN_8c020600(ar4,*(undefined4 *)(uint)ar4[1],ar4 + 8,ar7);
      ar6 = ar4[1];
      ar5 = ar4 + 10;
      FUN_8c0205e8(ar4,ar5,ar6,ar7);
      if (*ar4 != 0) {
        FUN_8c262168(*ar4,ar5,ar6,ar7);
      }
      *ar4 = 0;
    }
    ar4[5] = 0;
    ar4[6] = 0;
    iVar1 = FUN_8c02009c(ar4,ar5,ar6,ar7);
  }
  return iVar1;
}

__asm__(".globl _FUN_8c01fab4\n.set _FUN_8c01fab4, _FUN_8c01fab4_def\n");
//@unit 8c01fc78
#include "../decls.h"
undefined4 FUN_8c01fc78_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int in_stack_ffffff0c;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined1 auStack_dc [32];
  undefined1 auStack_bc [40];
  undefined4 auStack_94 [33];
  
  uStack_ec = *ar5;
  uStack_e8 = 0;
  strcpy(auStack_bc,ar5 + 0xc,ar6,ar7,in_stack_ffffff0c);
  iVar2 = 0;
  while (iVar3 = iVar2, iVar3 < 0x20) {
    auStack_94[iVar3] = ar5[iVar3 + 0x16];
    in_stack_ffffff0c = iVar3;
    iVar2 = iVar3 + 1;
  }
  iVar2 = *(int *)(ar4 + 0x10);
  strcpy(auStack_dc,iVar2,ar6,ar7,in_stack_ffffff0c);
  uStack_e0 = *(undefined4 *)(iVar2 + 0x20);
  iStack_e4 = iVar2 + 0x40;
  uVar1 = s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e(ar4,&uStack_ec,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c01fc78\n.set _FUN_8c01fc78, _FUN_8c01fc78_def\n");
//@unit 8c01fd08
#include "../decls.h"
int s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def(undefined4 ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int *ar5_00;
  int *ar6_00;
  int aiStack_44 [3];
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  aiStack_44[1] = 0;
  aiStack_44[0] = 0;
  aiStack_44[2] = *(int *)(&DATA_8c12fbe0);
  iStack_38 = *(int *)((&DATA_8c12fbe0) + 4);
  iStack_34 = *(int *)((&DATA_8c12fbe0) + 8);
  iStack_30 = *(int *)((&DATA_8c12fbe0) + 0xc);
  iStack_2c = *(int *)((&DATA_8c12fbe0) + 0x10);
  iStack_28 = *(int *)((&DATA_8c12fbe0) + 0x14);
  iStack_24 = *(int *)((&DATA_8c12fbe0) + 0x18);
  iStack_20 = *(int *)((&DATA_8c12fbe0) + 0x1c);
  iStack_1c = *(int *)((&DATA_8c12fbe0) + 0x20);
  iStack_18 = *(int *)((&DATA_8c12fbe0) + 0x24);
  iStack_14 = *(int *)((&DATA_8c12fbe0) + 0x28);
  while( true ) {
    ar6_00 = aiStack_44;
    ar5_00 = aiStack_44 + 1;
    iVar1 = FUN_8c2124d0(ar5[2],ar5_00,ar6_00,ar7);
    if (iVar1 == 0) break;
    if (aiStack_44[2] == aiStack_44[0]) {
      ar7 = 0;
      FUN_8c01fec4(ar4,ar5,iVar1,0);
    }
    else if (iStack_38 == aiStack_44[0]) {
      ar7 = 1;
      FUN_8c01fec4(ar4,ar5,iVar1,1);
    }
    else if (iStack_34 == aiStack_44[0]) {
      ar7 = 2;
      FUN_8c01fec4(ar4,ar5,iVar1,2);
    }
    else if (iStack_30 == aiStack_44[0]) {
      ar7 = 3;
      FUN_8c01fec4(ar4,ar5,iVar1,3);
    }
    else if (iStack_2c == aiStack_44[0]) {
      ar7 = 4;
      FUN_8c01fec4(ar4,ar5,iVar1,4);
    }
    else if (iStack_28 == aiStack_44[0]) {
      ar7 = 5;
      FUN_8c01fec4(ar4,ar5,iVar1,5);
    }
    else if (iStack_24 == aiStack_44[0]) {
      ar7 = 6;
      FUN_8c01fec4(ar4,ar5,iVar1,6);
    }
    else if (iStack_20 == aiStack_44[0]) {
      ar7 = 7;
      FUN_8c01fec4(ar4,ar5,iVar1,7);
    }
    else if (iStack_1c == aiStack_44[0]) {
      ar7 = 8;
      FUN_8c01fec4(ar4,ar5,iVar1,8);
    }
    else if (iStack_18 == aiStack_44[0]) {
      ar7 = 9;
      FUN_8c01fec4(ar4,ar5,iVar1,9);
    }
    else if (iStack_14 == aiStack_44[0]) {
      ar7 = 10;
      FUN_8c01fec4(ar4,ar5,iVar1,10);
    }
    else {
      FUN_8c1fb57c(iVar1,ar5_00,ar6_00,ar7);
    }
  }
  iVar1 = *ar5;
  if (iVar1 != 0xb) {
    iVar1 = FUN_8c1fb57c(ar5,ar5_00,ar6_00,ar7);
  }
  return iVar1;
}

__asm__(".globl _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e\n.set _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e, _s_MCJNMBJNLTJNILJNACJNMDMNMILN_01fd0e_def\n");
//@unit 8c01fec4
#include "../decls.h"
undefined4 FUN_8c01fec4_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 ar6_00;
  int iVar3;
  int ar7_00;
  
  iVar3 = ar5 + 0x10;
  ar6_00 = *(undefined4 *)(ar4 + 0x28);
  uVar2 = ar7;
  iVar1 = FUN_8c02051c(ar4,ar7,ar6_00,iVar3);
  if (iVar1 == 0) {
    ar7_00 = ar5 + 0x30;
    iVar3 = ar5 + 0x10;
    iVar1 = (*(code *)(&FUN_8c02000c))
                      (ar4,ar7,iVar3,ar7_00,*(undefined4 *)(ar5 + 0x50),*(undefined4 *)(ar5 + 0x54))
    ;
    if (iVar1 == 0) {
      uVar2 = FUN_8c1fb57c(ar6,ar7,iVar3,ar7_00);
    }
    else {
      *(undefined4 *)(iVar1 + 8) = ar6;
      for (iVar3 = 0; iVar3 < 0x20; iVar3 = iVar3 + 1) {
        *(undefined4 *)(iVar1 + iVar3 * 4 + 0x58) = *(undefined4 *)(ar5 + iVar3 * 4 + 0x58);
      }
      uVar2 = FUN_8c0205e8(ar4,ar4 + 0x28,iVar1,ar7_00);
    }
  }
  else {
    uVar2 = FUN_8c1fb57c(ar6,uVar2,ar6_00,iVar3);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c01fec4\n.set _FUN_8c01fec4, _FUN_8c01fec4_def\n");
//@unit 8c01ffa0
#include "../decls.h"
uint FUN_8c01ffa0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0,undefined4 s4,
                 undefined4 s8)

{
  int ar6_00;
  
  ar6_00 = FUN_8c02000c(ar4,ar5,ar6,ar7,s0,s4);
  if (ar6_00 != 0) {
    FUN_8c0205e8(ar4,ar4 + 0x20,ar6_00,ar7);
    FUN_8c0206b8(ar4,ar6_00,s8,ar7);
  }
  return (uint)(ar6_00 != 0);
}

__asm__(".globl _FUN_8c01ffa0\n.set _FUN_8c01ffa0, _FUN_8c01ffa0_def\n");
