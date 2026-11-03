//@unit 8c060044
#include "../decls.h"
undefined4 FUN_8c060044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(int *)(ar4 + 0x38) == 2) && (*(int *)(ar4 + 0x6c) != 0)) {
    iVar2 = *(int *)(*(int *)(ar4 + 0x6c) + 8);
    (**(code **)(iVar2 + 0x78))(*(int *)(ar4 + 0x6c),ar5,ar6,iVar2);
    *(undefined4 *)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  uVar1 = 0x10;
  if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar1 = (*(code *)((code **)&DATA_8c0600fc)[iVar2 + -1])();
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl _FUN_8c060044\n.set _FUN_8c060044, _FUN_8c060044_def\n");
//@unit 8c06115c
#include "../decls.h"
undefined4 FUN_8c06115c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51) = (undefined1)ar7;
  return 0x51;
}

__asm__(".globl _FUN_8c06115c\n.set _FUN_8c06115c, _FUN_8c06115c_def\n");
//@unit 8c061174
#include "../decls.h"
undefined4 get_field_c8_061174_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xc8 + ar4);
}

__asm__(".globl _get_field_c8_061174\n.set _get_field_c8_061174, _get_field_c8_061174_def\n");
//@unit 8c061180
#include "../decls.h"
undefined4 FUN_8c061180_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *ar4 = (undefined1)ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c061180\n.set _FUN_8c061180, _FUN_8c061180_def\n");
//@unit 8c061188
#include "../decls.h"
int FUN_8c061188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x38);
}

__asm__(".globl _FUN_8c061188\n.set _FUN_8c061188, _FUN_8c061188_def\n");
//@unit 8c061190
#include "../decls.h"
undefined4 ret_const_0_061190_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_061190\n.set _ret_const_0_061190, _ret_const_0_061190_def\n");
//@unit 8c061198
#include "../decls.h"
undefined4 get_field_2c_061198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x2c);
}

__asm__(".globl _get_field_2c_061198\n.set _get_field_2c_061198, _get_field_2c_061198_def\n");
//@unit 8c0611a0
#include "../decls.h"
undefined4 get_field_34_0611a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _get_field_34_0611a0\n.set _get_field_34_0611a0, _get_field_34_0611a0_def\n");
//@unit 8c0611a8
#include "../decls.h"
undefined4 FUN_8c0611a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_8c0293f8(ar4 + 0xf8,0x5f,ar6,ar7,ar4);
  return uVar1;
}

__asm__(".globl _FUN_8c0611a8\n.set _FUN_8c0611a8, _FUN_8c0611a8_def\n");
//@unit 8c0611cc
#include "../decls.h"
undefined ** s_GRATIFIC_EAT_0611d6_def(undefined **ar4,int *ar5,code *ar6,char *ar7)

{
  int iVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined **ppuVar4;
  uint uVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  code *pcVar11;
  code *pcVar12;
  int iVar13;
  char cVar14;
  undefined4 in_stack_fffffef4;
  undefined1 auStack_28 [20];
  
  cVar14 = '\0';
  iVar13 = 0;
  iVar1 = *(int *)(ar6 + 8);
  pcVar11 = ar6;
  ppuVar2 = (undefined **)get_field_124_027930(iVar1,ar5,ar6,ar7);
  puVar6 = (undefined *)0x35;
  ppuVar4 = ppuVar2;
  if (((int)ppuVar2 < 0x36) && (-1 < (int)ppuVar2)) {
    ppuVar4 = &switchdata_8c061214_8c061220;
                    
    switch((uint)ppuVar2) {
    case 0x0:
      if (((*(char *)((int)ar4 + 0x879) == '\x02') &&
          (puVar6 = ar4[0x21f], puVar6 == (undefined *)0x1)) &&
         ((ar4[0x220] == (undefined *)0x0 &&
          (uVar3 = get_field_a0_035724(*(int *)(ar6 + 0x18),1,pcVar11,ar7), (char)uVar3 == '\x02')))
         ) {
        pcVar11 = (code *)0x880;
        ar4[0x220] = (undefined *)0x1;
        FUN_8c0fa688(0x8c35468c,puVar6,0x880,ar7);
      }
      uVar5 = get_field_a0_035724(*(int *)(ar6 + 0x18),puVar6,pcVar11,ar7);
      ppuVar4 = (undefined **)(uVar5 & 0xff);
      if ((undefined **)(uVar5 & 0xff) == (undefined **)0x3) {
        ar4[3] = ar4[3] + -1;
        ppuVar4 = ar4;
      }
      break;
    case 0x3:
      ar4[3] = ar4[3] + -1;
      ar4[2] = (undefined *)0x32;
      ppuVar4 = ar4;
      break;
    case 0x5:
      ppuVar4 = (undefined **)FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar11,ar7);
      break;
    case 0x6:
      ppuVar4 = (undefined **)FUN_8c02f414(ar4,0x35,pcVar11,ar7);
      if (ppuVar4 == (undefined **)0x1) {
        uVar3 = get_field_6c_02f46c(ar4[0x1b],puVar6,pcVar11,ar7);
        uVar3 = FUN_8c05feec(ar4[0x1b],uVar3,pcVar11,ar7);
        pcVar11 = FUN_8c05fec4;
        FUN_8c05fec4(*(int *)(ar6 + 4),uVar3,FUN_8c05fec4,ar7);
        puVar6 = (undefined *)FUN_8c02ea00(ar4 + 0x207,0x81c,pcVar11,ar7);
        ppuVar4 = (undefined **)0x850;
        ar4[0x214] = puVar6;
      }
      if (ar4[0x1b] != (undefined *)0x0) {
        iVar1 = (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x114))(ar4[0x1b],ar4 + 0x1b,pcVar11,ar7);
        if (iVar1 == 0x18) {
          FUN_8c02c330(*(int *)(ar6 + 4) + 0x78,1,pcVar11,ar7,in_stack_fffffef4);
          pcVar7 = s_REACTION_SPIDER_AFTER_EAT_8c136c23;
          uVar8 = 0;
          uVar3 = 2;
          FUN_8c0306d4(ar4 + 0x27,2,0,s_REACTION_SPIDER_AFTER_EAT_8c136c23);
        }
        else {
          pcVar7 = s_GRATIFIC_EAT_8c136c16;
          uVar8 = 0;
          uVar3 = 2;
          FUN_8c0306d4(ar4 + 0x27,2,0,s_GRATIFIC_EAT_8c136c16);
        }
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar3,uVar8,pcVar7);
        ar4[0x1b] = (undefined *)0x0;
        ppuVar4 = (undefined **)0x6c;
      }
      break;
    case 0x8:
      (**(code **)(*(int *)(*(int *)ar6 + 8) + 0xbc))(*(int *)ar6,0x35,pcVar11,ar7);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,puVar6,pcVar11,ar7);
      uVar8 = FUN_8c02bfd8(*(int *)(ar6 + 4),puVar6,pcVar11,ar7);
      uVar9 = get_field_140_025f70(*(int *)(ar6 + 4),puVar6,pcVar11,ar7);
      uVar10 = 1;
      iVar1 = (int)(short)uVar8;
      FUN_8c0620bc(uVar3,iVar1,uVar9,1);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,iVar1,uVar9,uVar10);
      uVar8 = FUN_8c02bfd8(*(int *)(ar6 + 4),FUN_8c02bfd8,uVar9,uVar10);
      iVar1 = get_field_140_025f70(*(int *)(ar6 + 4),get_field_140_025f70,uVar9,uVar10);
      uVar3 = FUN_8c0620a4(uVar3,(int)(short)uVar8,1 - iVar1,uVar10);
      if ((char)uVar3 == '\x01') {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        iVar1 = *ar5;
        ppuVar4 = ar4;
        uVar3 = (**(code **)(iVar1 + 0x148))(ar5,iVar1,ar4,uVar10);
        uVar8 = FUN_8c02bfd8(*(int *)(ar6 + 4),iVar1,ppuVar4,uVar10);
        iVar1 = get_field_140_025f70(*(int *)(ar6 + 4),iVar1,ppuVar4,uVar10);
        uVar3 = FUN_8c02c310(uVar3,(int)(short)uVar8,1 - iVar1,uVar10);
        if ((char)uVar3 == '\x01') {
          ar4[0x216] = (undefined *)0x0;
        }
        ppuVar4 = (undefined **)ar4[0x216];
        if (0x708 < (int)ar4[0x216]) {
          uVar9 = 0;
          ar4[0x216] = (undefined *)0x0;
          uVar3 = (**(code **)(*ar5 + 0x148))(ar5,*ar5,0,uVar10);
          pcVar11 = FUN_8c02bfd8;
          uVar8 = FUN_8c02bfd8(*(int *)(ar6 + 4),FUN_8c02bfd8,uVar9,uVar10);
          uVar9 = get_field_140_025f70(*(int *)(ar6 + 4),pcVar11,uVar9,uVar10);
          uVar10 = 0;
          FUN_8c0620bc(uVar3,(int)(short)uVar8,uVar9,0);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          *(undefined1 *)(ar4 + 0x26) = 4;
          ppuVar4 = (undefined **)FUN_8c02cb74(*(int *)(ar6 + 4) + 0xa8,1,uVar9,uVar10);
        }
      }
      break;
    case 0x9:
      iVar1 = get_field_140_025f70(*(int *)(ar6 + 4),0x35,pcVar11,ar7);
      if (iVar1 == 1) {
        *(undefined1 *)(ar4 + 0x26) = 4;
        puVar6 = (undefined *)0x1;
        FUN_8c02cb74(*(int *)(ar6 + 4) + 0xa8,1,pcVar11,ar7);
        (**(code **)(*(int *)(*(int *)ar6 + 8) + 0xc0))(*(int *)ar6,puVar6,pcVar11,ar7);
      }
      iVar1 = get_field_140_025f70(*(int *)(ar6 + 4),puVar6,pcVar11,ar7);
      if (iVar1 == 0) {
        ar7 = s_GRATIFIC_COPULATION_DONE_8c136c54;
        pcVar11 = (code *)0x0;
        FUN_8c0306d4(ar4 + 0x27,9,0,s_GRATIFIC_COPULATION_DONE_8c136c54);
        *(undefined1 *)(ar4 + 0x26) = 4;
      }
      uVar3 = 1;
      iVar1 = *(int *)(ar6 + 4) + 0xa8;
      FUN_8c06209c(iVar1,1,pcVar11,ar7);
      ppuVar4 = (undefined **)FUN_8c0c4e2c(iVar1,uVar3,pcVar11,ar7);
      break;
    case 0xb:
      if (ar4[0xe1] == (undefined *)0xffffffff) {
        ppuVar4 = (undefined **)0xffffffff;
      }
      else {
        ppuVar4 = (undefined **)FUN_8c030870(ar4 + 0x27,2,ar4[0xe1],ar7);
      }
      break;
    case 0xf:
      iVar1 = FUN_8c02f414(ar4,0x35,pcVar11,ar7);
      if (iVar1 == 1) {
        uVar3 = get_field_6c_02f46c(ar4[0x1b],puVar6,pcVar11,ar7);
        uVar3 = FUN_8c05feec(ar4[0x1b],uVar3,pcVar11,ar7);
        FUN_8c05fec4(*(int *)(ar6 + 4),uVar3,pcVar11,ar7);
        (**(code **)(*(int *)(ar4[0x1b] + 8) + 0x78))(ar4[0x1b],uVar3,pcVar11,ar7);
        pcVar11 = (code *)0x0;
        ar4[0x1b] = (undefined *)0x0;
      }
      for (pcVar12 = (code *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,5,pcVar11,ar7),
          (int)pcVar12 < iVar1; pcVar12 = pcVar12 + 1) {
        uVar3 = 5;
        iVar1 = (**(code **)(*ar5 + 0x100))(ar5,5,pcVar12,ar7);
        pcVar11 = *(code **)(iVar1 + 8);
        iVar1 = (**(code **)(pcVar11 + 0x114))(iVar1,uVar3,pcVar11,ar7);
        if (iVar1 == 6) {
          uVar3 = 5;
          pcVar11 = pcVar12;
          iVar1 = (**(code **)(*ar5 + 0x100))(ar5,5,pcVar12,ar7);
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb4))(iVar1,uVar3,pcVar11,ar7);
          if (iVar1 == 1) {
            uVar3 = 5;
            pcVar11 = pcVar12;
            iVar1 = (**(code **)(*ar5 + 0x100))(ar5,5,pcVar12,ar7);
            iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0xb8))(iVar1,uVar3,pcVar11,ar7);
            if (iVar1 == 0) {
              iVar13 = iVar13 + 1;
            }
          }
        }
      }
      if (iVar13 == 2) {
        FUN_8c061180(*(int *)(ar6 + 0xc),3,pcVar11,ar7,in_stack_fffffef4);
      }
      ppuVar4 = (undefined **)FUN_8c05febc(*(int *)(ar6 + 0xc),0,pcVar11,ar7);
      break;
    case 0x13:
      *(undefined1 *)(ar4 + 0x26) = 7;
      uVar3 = get_field_13c_028d9c(*(int *)(ar6 + 4),0x35,pcVar11,ar7);
      ppuVar4 = (undefined **)FUN_8c0b9ed4(*(int *)(ar6 + 0x18),0x22,uVar3,ar7);
      break;
    case 0x14:
      ppuVar4 = (undefined **)
                FUN_8c0306d4(ar4 + 0x27,0x1f,ar4[0x41],s_REACTION_AFTER_DEKOPIN_8c136c3d);
      break;
    case 0x17:
      FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,1,pcVar11,ar7);
      FUN_8c02cbbc(*(int *)(ar6 + 4) + 0x90,1,pcVar11,ar7);
      FUN_8c02c330(*(int *)(ar6 + 4) + 0x60,0,pcVar11,ar7,in_stack_fffffef4);
      if (ar4[0x21f] == (undefined *)0x1) {
        *(undefined1 *)(ar4 + 0x26) = 9;
      }
      if (((ar4[0xe1] == (undefined *)0xffffffff) && (ar4[0x21f] != (undefined *)0x1)) &&
         (*(char *)((int)ar4 + 0x879) == '\x02')) {
        FUN_8c030870(ar4 + 0x27,0,pcVar11,ar7);
        pcVar7 = s_EVENT_ENDING_8c136c95;
        FUN_8c0303b8(ar4 + 0x27,0x2a,0,s_EVENT_ENDING_8c136c95,s_start_8c136a1c);
        ar4[0x3f] = (undefined *)0x0;
        puVar6 = (undefined *)FUN_8c0f8320(0x8c35468c,ar4[0xe2],ar4 + 0x27,pcVar7);
        ar4[0xe1] = puVar6;
        ar4[0x53] = (undefined *)0x1;
      }
      if ((*(char *)((int)ar4 + 0x879) == '\x02') && (ar4[0xe1] != (undefined *)0xffffffff)) {
        ar4[1] = (undefined *)0xd;
        ar4[2] = (undefined *)0x5f;
        ar4[3] = (undefined *)0x0;
        ar4[0x210] = (undefined *)0x30;
        DAT_8c136908 = 0x30;
        ar4[0x211] = (undefined *)0x36;
        DAT_8c13690c = 0x36;
        ar4[0x212] = (undefined *)0x36;
        DAT_8c136910 = 0x36;
        pcVar12 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_28,*(int *)(ar6 + 0x14) + 0x10,*(int *)(ar6 + 0x14),Vec3_ctor_copy);
        pcVar11 = Vec3_assign_wrap_05f640;
        Vec3_assign_wrap_05f640(ar4,auStack_28,Vec3_assign_wrap_05f640,pcVar12);
        Vec3_dtor(auStack_28,0xffffffff,pcVar11,pcVar12);
        ppuVar4 = ar4 + 0x1e;
        if (cVar14 == '\0') {
          *ppuVar4 = (undefined *)0x44af0000;
        }
        else {
          ppuVar4[0] = (undefined *)0x44af0000;
          ppuVar4[1] = (undefined *)0x80;
        }
        *(undefined1 *)(ar4 + 0x20) = 0;
      }
      *(undefined1 *)(ar4 + 0x26) = 8;
      ppuVar4 = (undefined **)0x98;
      break;
    case 0x18:
      *(undefined1 *)(ar4 + 0x26) = 2;
      ppuVar4 = (undefined **)FUN_8c0c4e2c(iVar1,0x35,pcVar11,ar7);
      break;
    case 0x1b:
      ppuVar4 = (undefined **)FUN_8c05f498(*(int *)(ar6 + 0xc),3,*(int *)(ar6 + 0xc),ar7);
      break;
    case 0x1c:
      FUN_8c05f498(*(int *)(ar6 + 0xc),8,pcVar11,ar7);
      ppuVar4 = (undefined **)
                FUN_8c030568(ar4 + 0x27,0x1f,0,s_EVENT_JUMP_FAIL_8c136c6d,&DAT_8c1369bf);
      break;
    case 0x1d:
      ppuVar4 = (undefined **)FUN_8c05f498(*(int *)(ar6 + 0xc),5,pcVar11,ar7);
      break;
    case 0x21:
    case 0x25:
      ar4[0x216] = (undefined *)0x0;
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x35,pcVar11,ar7);
      uVar9 = 0;
      uVar8 = 0;
      FUN_8c062084(uVar3,0,0,ar7);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,uVar8,uVar9,ar7);
      ppuVar4 = (undefined **)FUN_8c062054(uVar3,0,0,ar7);
      break;
    case 0x22:
    case 0x26:
      ar4[0x216] = (undefined *)0x0;
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x35,pcVar11,ar7);
      uVar9 = 0;
      uVar8 = 1;
      FUN_8c062084(uVar3,1,0,uVar3);
      uVar8 = (**(code **)(*ar5 + 0x148))(ar5,uVar8,uVar9,uVar3);
      uVar9 = 0;
      FUN_8c062054(uVar8,1,0,uVar3);
      ppuVar4 = (undefined **)FUN_8c062048(*(int *)(ar6 + 0xc),4,uVar9,uVar3);
      break;
    case 0x23:
    case 0x27:
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x35,pcVar11,ar7);
      pcVar11 = FUN_8c062084;
      FUN_8c062084(uVar3,0,1,FUN_8c062084);
      iVar1 = *ar5;
      uVar3 = (**(code **)(iVar1 + 0x148))(ar5,*(code **)(iVar1 + 0x148),iVar1,pcVar11);
      iVar1 = FUN_8c06206c(uVar3,1,iVar1,pcVar11);
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        ppuVar4 = (undefined **)0x858;
        if (0x708 < (int)ar4[0x216]) {
          ar4[0x216] = (undefined *)0x0;
          uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x858,ar4,0x858);
          uVar8 = 0;
          pcVar11 = FUN_8c062084;
          FUN_8c062084(uVar3,0,0,FUN_8c062084);
          uVar3 = (**(code **)(*ar5 + 0x148))(ar5,uVar8,*(code **)(*ar5 + 0x148),pcVar11);
          FUN_8c062054(uVar3,0,0,pcVar11);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          ppuVar4 = (undefined **)0x40;
        }
      }
      break;
    case 0x24:
    case 0x28:
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x35,pcVar11,ar7);
      uVar8 = 1;
      FUN_8c062084(uVar3,1,1,ar7);
      uVar3 = (**(code **)(*ar5 + 0x148))(ar5,*ar5,uVar8,ar7);
      iVar1 = FUN_8c06206c(uVar3,0,uVar8,ar7);
      if (iVar1 == 1) {
        ppuVar4 = (undefined **)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        ppuVar4 = (undefined **)0x858;
        if (0x708 < (int)ar4[0x216]) {
          ar4[0x216] = (undefined *)0x0;
          uVar3 = (**(code **)(*ar5 + 0x148))(ar5,0x708,uVar8,ar7);
          uVar9 = 0;
          uVar8 = 1;
          FUN_8c062084(uVar3,1,0,ar7);
          uVar3 = (**(code **)(*ar5 + 0x148))(ar5,uVar8,uVar9,ar7);
          FUN_8c062054(uVar3,1,0,ar7);
          ar4[0x10] = (undefined *)0x0;
          ar4[1] = (undefined *)0x0;
          ar4[2] = (undefined *)0x5;
          ar4[3] = (undefined *)0x0;
          ar4[0x10] = (undefined *)0x0;
          ppuVar4 = (undefined **)0x40;
        }
      }
      break;
    case 0x29:
      ppuVar4 = (undefined **)
                FUN_8c101148(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),1,pcVar11,ar7);
      break;
    case 0x30:
      ppuVar4 = (undefined **)ar4[3];
      ar4[3] = (undefined *)((int)ppuVar4 + -1);
      break;
    case 0x31:
      FUN_8c05f498(*(int *)(ar6 + 0xc),8,pcVar11,ar7);
      ppuVar4 = (undefined **)
                FUN_8c030568(ar4 + 0x27,0x1f,0,s_EVENT_JUMP_HALF_SUCCESS_8c136c7d,&DAT_8c1369bf);
    }
  }
  return ppuVar4;
}

__asm__(".globl _s_GRATIFIC_EAT_0611d6\n.set _s_GRATIFIC_EAT_0611d6, _s_GRATIFIC_EAT_0611d6_def\n");
//@unit 8c062048
#include "../decls.h"
int FUN_8c062048_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xac;
  *(undefined4 *)(0xac + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c062048\n.set _FUN_8c062048, _FUN_8c062048_def\n");
//@unit 8c062054
#include "../decls.h"
int FUN_8c062054_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xa4;
  *(undefined4 *)(0xa4 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c062054\n.set _FUN_8c062054, _FUN_8c062054_def\n");
//@unit 8c06206c
#include "../decls.h"
undefined4 FUN_8c06206c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x9c + ar4 + ar5 * 4);
}

__asm__(".globl _FUN_8c06206c\n.set _FUN_8c06206c, _FUN_8c06206c_def\n");
//@unit 8c062084
#include "../decls.h"
int FUN_8c062084_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x9c;
  *(undefined4 *)(0x9c + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl _FUN_8c062084\n.set _FUN_8c062084, _FUN_8c062084_def\n");
//@unit 8c06209c
#include "../decls.h"
undefined4 FUN_8c06209c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 4) = (char)ar5;
  return ar5;
}

__asm__(".globl _FUN_8c06209c\n.set _FUN_8c06209c, _FUN_8c06209c_def\n");
//@unit 8c0620a4
#include "../decls.h"
int FUN_8c0620a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75);
}

__asm__(".globl _FUN_8c0620a4\n.set _FUN_8c0620a4, _FUN_8c0620a4_def\n");
//@unit 8c0620bc
#include "../decls.h"
undefined4 FUN_8c0620bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75) = (undefined1)ar7;
  return 0x75;
}

__asm__(".globl _FUN_8c0620bc\n.set _FUN_8c0620bc, _FUN_8c0620bc_def\n");
//@unit 8c0620d4
#include "../decls.h"
int FUN_8c0620d4_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int ar6_00;
  char cVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0;
  float fVar9;
  code *pcVar10;
  char cVar11;
  char cVar12;
  
  fVar8 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar12 = '\0';
  cVar11 = '\0';
  iVar7 = 0;
  cVar6 = '\0';
  ar6_00 = ar6;
  uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5,ar6,ar7);
  uVar5 = 0x3c;
  uVar1 = libgcc_divide_helper_0101e4(uVar1 & 0xffff,0x3c,ar6_00,ar7);
  uVar2 = get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),uVar5,ar6_00,ar7);
  if ((char)uVar2 == '\x02') {
    iVar3 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,uVar5,ar6_00,ar7);
    if (iVar3 < 0x28) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar5,ar6_00,ar7);
      if (cVar12 == '\0') {
        fVar9 = 21.0;
      }
      else {
        fVar8 = 21.0;
        fVar9 = 2.46629e-43;
      }
      if (cVar11 == '\0' && fVar9 < fVar8) {
        (**(code **)(*ar5 + 0x178))(ar5,uVar5,ar6_00,ar7);
        if (cVar12 == '\0') {
          fVar8 = 25.0;
        }
        else {
          fVar9 = 25.0;
          fVar8 = 5.49309e-43;
        }
        if (cVar11 == '\0' && fVar9 < fVar8) {
          (**(code **)(*ar5 + 0x188))(ar5,uVar5,ar6_00,ar7);
          if (cVar12 == '\0') {
            pcVar10 = (code *)0x42a60000;
          }
          else {
            fVar8 = 83.0;
            pcVar10 = get_field_40_03598c;
          }
          if ((cVar11 == '\0' && (float)(uint)pcVar10 < fVar8) &&
             (iVar3 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),uVar5,ar6_00,ar7), iVar3 == 0))
          {
            cVar6 = '\x01';
          }
        }
      }
    }
  }
  else {
    uVar2 = get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),uVar5,ar6_00,ar7);
    if ((char)uVar2 == '\x03') {
      cVar6 = '\x01';
    }
  }
  uVar2 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),uVar5,ar6_00,ar7);
  iVar3 = 3;
  if ((((3 < (short)uVar2) && (iVar3 = (int)cVar6, iVar3 == 1)) &&
      (iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),uVar5,ar6_00,ar7), iVar3 == -1)) &&
     (iVar3 = 0xf, 0xf < uVar1)) {
    for (iVar3 = 0; iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,5,ar6_00,ar7), iVar3 < iVar4;
        iVar3 = iVar3 + 1) {
      uVar2 = 5;
      ar6_00 = iVar3;
      iVar4 = (**(code **)(*ar5 + 0x100))(ar5,5,iVar3,ar7);
      iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0xb4))(iVar4,uVar2,ar6_00,ar7);
      if (iVar4 == 1) {
        uVar2 = 5;
        ar6_00 = iVar3;
        iVar4 = (**(code **)(*ar5 + 0x100))(ar5,5,iVar3,ar7);
        iVar4 = (**(code **)(*(int *)(iVar4 + 8) + 0x114))(iVar4,uVar2,ar6_00,ar7);
        if ((iVar4 == 7) &&
           (uVar2 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),uVar2,ar6_00,ar7), 3 < (short)uVar2)) {
          iVar7 = iVar7 + 1;
        }
      }
    }
    iVar3 = 1;
    if (1 < iVar7) {
      FUN_8c06288c(*(undefined4 *)(ar6 + 0xc),0,ar6_00,ar7);
      uVar2 = 0;
      iVar7 = FUN_8c06288c(*(undefined4 *)(ar6 + 0xc),0,ar6_00,ar7);
      if ((iVar7 == 0) && (*(int *)(ar4 + 0x40) == 0)) {
        uVar5 = (**(code **)(*ar5 + 0x148))(ar5,uVar2,ar6_00,ar7);
        iVar7 = get_field_ac_062880(uVar5,uVar2,ar6_00,ar7);
        if (iVar7 == 4) {
          uVar5 = *(undefined4 *)(ar6 + 8);
          iVar7 = get_field_178_035734(uVar5,uVar2,ar6_00,ar7);
          if (iVar7 == 0) {
            uVar2 = rand(uVar5,uVar2,ar6_00,ar7);
            uVar5 = 0x1e;
            iVar7 = libgcc_divide_helper_01031c(uVar2,0x1e,ar6_00,ar7);
            if ((iVar7 == 1) &&
               (iVar7 = get_field_4_062878(*(undefined4 *)(ar6 + 0xc),uVar5,ar6_00,ar7), iVar7 == 1)
               ) {
              *(undefined4 *)(ar4 + 0x38) = 1;
              FUN_8c062054(*(undefined4 *)(ar6 + 0xc),0,1,ar7);
              ar6_00 = 0;
              FUN_8c062054(*(undefined4 *)(ar6 + 0xc),1,0,ar7);
              *(undefined4 *)(ar4 + 4) = 0xd;
              *(undefined4 *)(ar4 + 8) = 0x5f;
              *(undefined4 *)(ar4 + 0xc) = 0;
              uVar2 = 0;
              iVar7 = *(int *)(ar6 + 4) + 0x90;
              FUN_8c02ce10(iVar7,0,ar6_00,ar7);
              uVar2 = rand(iVar7,uVar2,ar6_00,ar7);
              uVar2 = libgcc_divide_helper_01031c(uVar2,3,ar6_00,ar7);
              FUN_8c062048(*(undefined4 *)(ar6 + 0xc),uVar2,ar6_00,ar7);
              iVar7 = get_field_ac_062880(*(undefined4 *)(ar6 + 0xc),uVar2,ar6_00,ar7);
              if (iVar7 == 0) {
                *(undefined4 *)(ar4 + 0x40) = 0x23;
                *(undefined4 *)(ar4 + 0x840) = 0x23;
                DAT_8c136908 = 0x23;
                *(undefined4 *)(ar4 + 0x844) = 0x21;
                DAT_8c13690c = 0x21;
                *(undefined4 *)(ar4 + 0x848) = 0x36;
                DAT_8c136910 = 0x36;
              }
              else if (iVar7 == 1) {
                *(undefined4 *)(ar4 + 0x40) = 0x27;
                *(undefined4 *)(ar4 + 0x840) = 0x27;
                DAT_8c136908 = 0x27;
                *(undefined4 *)(ar4 + 0x844) = 0x25;
                DAT_8c13690c = 0x25;
                *(undefined4 *)(ar4 + 0x848) = 0x36;
                DAT_8c136910 = 0x36;
              }
              else if (iVar7 == 2) {
                *(undefined4 *)(ar4 + 0x40) = 0x32;
                *(undefined4 *)(ar4 + 0x840) = 0x32;
                DAT_8c136908 = 0x32;
                *(undefined4 *)(ar4 + 0x844) = 0x34;
                DAT_8c13690c = 0x34;
                *(undefined4 *)(ar4 + 0x848) = 0x36;
                DAT_8c136910 = 0x36;
              }
            }
          }
        }
      }
      uVar2 = 0;
      iVar3 = FUN_8c06288c(*(undefined4 *)(ar6 + 0xc),0,ar6_00,ar7);
      if ((((iVar3 == 1) &&
           (iVar3 = get_field_178_035734(*(undefined4 *)(ar6 + 8),uVar2,ar6_00,ar7), iVar3 == 0)) &&
          (iVar3 = FUN_8c06288c(*(undefined4 *)(ar6 + 0xc),1,ar6_00,ar7), iVar3 == 0)) &&
         (iVar3 = *(int *)(ar4 + 0x40), iVar3 == 0)) {
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,ar6_00,ar7);
        *(undefined4 *)(ar4 + 0x38) = 1;
        uVar5 = 1;
        uVar2 = 1;
        FUN_8c062054(*(undefined4 *)(ar6 + 0xc),1,1,ar7);
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        iVar3 = get_field_ac_062880(*(undefined4 *)(ar6 + 0xc),uVar2,uVar5,ar7);
        if (iVar3 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x24;
          *(undefined4 *)(ar4 + 0x840) = 0x24;
          DAT_8c136908 = 0x24;
          *(undefined4 *)(ar4 + 0x844) = 0x22;
          DAT_8c13690c = 0x22;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          DAT_8c136910 = 0x36;
        }
        else if (iVar3 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0x28;
          *(undefined4 *)(ar4 + 0x840) = 0x28;
          DAT_8c136908 = 0x28;
          *(undefined4 *)(ar4 + 0x844) = 0x26;
          DAT_8c13690c = 0x26;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          DAT_8c136910 = 0x36;
        }
        else if (iVar3 == 2) {
          *(undefined4 *)(ar4 + 0x40) = 0x33;
          *(undefined4 *)(ar4 + 0x840) = 0x33;
          DAT_8c136908 = 0x33;
          *(undefined4 *)(ar4 + 0x844) = 0x35;
          DAT_8c13690c = 0x35;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          iVar3 = 0xa4;
          DAT_8c136910 = 0x36;
        }
      }
    }
  }
  return iVar3;
}

__asm__(".globl _FUN_8c0620d4\n.set _FUN_8c0620d4, _FUN_8c0620d4_def\n");
//@unit 8c062878
#include "../decls.h"
undefined4 get_field_4_062878_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_062878\n.set _get_field_4_062878, _get_field_4_062878_def\n");
//@unit 8c062880
#include "../decls.h"
undefined4 get_field_ac_062880_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xac + ar4);
}

__asm__(".globl _get_field_ac_062880\n.set _get_field_ac_062880, _get_field_ac_062880_def\n");
//@unit 8c06288c
#include "../decls.h"
undefined4 FUN_8c06288c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xa4 + ar4 + ar5 * 4);
}

__asm__(".globl _FUN_8c06288c\n.set _FUN_8c06288c, _FUN_8c06288c_def\n");
//@unit 8c0628a4
#include "../decls.h"
undefined4 * s_REACTION_TEMP_LACK_0628aa_def(int ar4,int *ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int a6;
  float fVar5;
  ulonglong in_dr0;
  float fVar6;
  char cVar7;
  char cVar8;
  
  cVar8 = '\0';
  cVar7 = '\0';
  a6 = ar6;
  if ((*(int *)(ar4 + 0x88c) == 0) &&
     (iVar1 = (**(code **)(*ar5 + 0x1ac))(ar5,0,ar6,ar7), *(int *)(ar4 + 0x884) != iVar1)) {
    uVar4 = 0;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,0,a6,ar7);
    *(undefined4 *)(ar4 + 0x884) = uVar2;
    if (*(int *)(ar4 + 0x884) == 0) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41980000,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x419f333341980000;
      }
      if (cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) {
        (**(code **)(*ar5 + 0x178))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          in_dr0 = CONCAT44(0x419f3333,(int)(in_dr0 >> 0x20));
        }
        else {
          in_dr0 = 0x8c02602c419f3333;
        }
        if ((cVar7 != '\0' || (float)in_dr0 <= (float)(in_dr0 >> 0x20)) &&
           (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7), 2 < (ushort)uVar2)) {
          ar7 = s_REACTION_TEMP_LACK_8c136ca2;
          a6 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_TEMP_LACK_8c136ca2);
          *(undefined4 *)(ar4 + 0x88c) = 1;
        }
      }
    }
  }
  if (*(int *)(ar4 + 0x890) == 0) {
    uVar2 = 0;
    iVar1 = (**(code **)(*ar5 + 0x1a4))(ar5,0,a6,ar7);
    if (iVar1 == 2) {
      (**(code **)(*ar5 + 0x178))(ar5,uVar2,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = CONCAT44(0x41c8cccd,(int)(in_dr0 >> 0x20));
      }
      else {
        in_dr0 = 0x32d41c8cccd;
      }
      if ((cVar7 != '\0' || (float)(in_dr0 >> 0x20) <= (float)in_dr0) &&
         (uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar2,a6,ar7), 2 < (ushort)uVar2)) {
        ar7 = s_REACTION_SWITCH_OFF_8c136cb5;
        a6 = 0;
        FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_SWITCH_OFF_8c136cb5);
        *(undefined4 *)(ar4 + 0x890) = 1;
      }
    }
  }
  puVar3 = *(undefined4 **)(ar4 + 0x894);
  if ((puVar3 == (undefined4 *)0x0) &&
     (puVar3 = (undefined4 *)(**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7),
     *(undefined4 **)(ar4 + 0x888) != puVar3)) {
    uVar4 = 1;
    uVar2 = (**(code **)(*ar5 + 0x1ac))(ar5,1,a6,ar7);
    *(undefined4 *)(ar4 + 0x888) = uVar2;
    puVar3 = *(undefined4 **)(ar4 + 0x888);
    if (puVar3 == (undefined4 *)0x0) {
      (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
      if (cVar8 == '\0') {
        in_dr0 = in_dr0 >> 0x20;
      }
      puVar3 = &DAT_8c062af8;
      if (cVar8 == '\0') {
        fVar5 = (float)in_dr0;
        fVar6 = 79.0;
      }
      else {
        fVar5 = 79.0;
        fVar6 = 79.9;
      }
      if (cVar7 != '\0' || fVar6 <= fVar5) {
        (**(code **)(*ar5 + 0x17c))(ar5,uVar4,a6,ar7);
        if (cVar8 == '\0') {
          fVar5 = fVar6;
        }
        puVar3 = (undefined4 *)&DAT_8c062afc;
        if (cVar8 == '\0') {
          fVar6 = 79.9;
        }
        else {
          fVar5 = 79.9;
          fVar6 = 1.16728e-42;
        }
        if (cVar7 != '\0' || fVar5 <= fVar6) {
          uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),uVar4,a6,ar7);
          puVar3 = (undefined4 *)0x3;
          if (2 < (ushort)uVar2) {
            FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_OXYGEN_LACK_8c136cc9);
            puVar3 = (undefined4 *)0x894;
            *(undefined4 *)(ar4 + 0x894) = 1;
          }
        }
      }
    }
  }
  return puVar3;
}

__asm__(".globl _s_REACTION_TEMP_LACK_0628aa\n.set _s_REACTION_TEMP_LACK_0628aa, _s_REACTION_TEMP_LACK_0628aa_def\n");
//@unit 8c062b04
#include "../decls.h"
undefined4 ret_const_0_062b04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_062b04\n.set _ret_const_0_062b04, _ret_const_0_062b04_def\n");
//@unit 8c062b0c
#include "../decls.h"
int s_REACTION_WAKED_TAP_062b14_def(int ar4,code *ar5,code *ar6,char *ar7)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int ar5_00;
  code *pcVar6;
  char *ar7_00;
  float fVar7;
  undefined8 in_dr0;
  float fVar8;
  char cVar9;
  char cVar10;
  undefined4 in_stack_fffffeb0;
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  cVar10 = '\0';
  cVar9 = '\0';
  pcVar5 = ar5;
  pcVar6 = ar6;
  if (((*(char *)(ar4 + 0x81) == '\x01') && (1 < *(int *)(ar4 + 0x104))) &&
     (*(int *)(ar4 + 4) != 0xd)) {
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
      if (iVar2 == 6) {
        uVar1 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),pcVar5,pcVar6,ar7);
        pcVar6 = (code *)0xd;
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        pcVar5 = (code *)0x3c;
        iVar2 = libgcc_divide_helper_010284(uVar1 & 0xffff,0x3c,0xd,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x40) = 0x11;
          *(undefined4 *)(ar4 + 0x840) = 0x11;
          DAT_8c136908 = 0x11;
          *(undefined4 *)(ar4 + 0x844) = 0x36;
          DAT_8c13690c = 0x36;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
        }
        else if (iVar2 == 1) {
          *(undefined4 *)(ar4 + 0x40) = 0xb;
          *(undefined4 *)(ar4 + 0x840) = 0xb;
          DAT_8c136908 = 0xb;
          *(undefined4 *)(ar4 + 0x844) = 0x2c;
          DAT_8c13690c = 0x2c;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
          pcVar5 = (code *)0x36;
        }
        else {
          Vec3_ctor_copy(auStack_44,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
          Vec3_assign_wrap_063818(ar4,auStack_44,pcVar6,ar7);
          Vec3_dtor(auStack_44,0xffffffff,pcVar6,ar7);
          Vec3_ctor_copy(auStack_54,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
          Vec3_assign_wrap_05f640(ar4,auStack_54,pcVar6,ar7);
          pcVar5 = (code *)0xffffffff;
          Vec3_dtor(auStack_54,0xffffffff,pcVar6,ar7);
          if (cVar10 == '\0') {
            *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            fVar7 = 1400.0;
            *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
          }
          else {
            *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
            fVar7 = 2.95954e-42;
            *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
          }
          *(undefined4 *)(ar4 + 0x40) = 0x12;
          *(undefined4 *)(ar4 + 0x840) = 0x12;
          DAT_8c136908 = 0x12;
          *(undefined4 *)(ar4 + 0x844) = 0x36;
          DAT_8c13690c = 0x36;
          *(undefined4 *)(ar4 + 0x848) = 0x36;
          DAT_8c136910 = 0x36;
        }
      }
      else if (iVar2 == 7) {
        pcVar5 = Vec3_ctor_copy;
        Vec3_ctor_copy(auStack_24,*(int *)(ar6 + 0x14) + 0x10,pcVar6,Vec3_ctor_copy);
        pcVar6 = (code *)auStack_24;
        Vec3_assign_wrap_063818(ar4,pcVar6,pcVar6,pcVar5);
        Vec3_dtor(auStack_24,0xffffffff,pcVar6,pcVar5);
        Vec3_ctor_copy(auStack_34,*(int *)(ar6 + 0x14) + 0x10,pcVar6,pcVar5);
        Vec3_assign_wrap_05f640(ar4,auStack_34,pcVar6,pcVar5);
        Vec3_dtor(auStack_34,0xffffffff,pcVar6,pcVar5);
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          fVar7 = 1400.0;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          fVar7 = 2.95954e-42;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x12;
        ar7 = (char *)0x12;
        *(undefined4 *)(ar4 + 0x840) = 0x12;
        DAT_8c136908 = 0x12;
        *(undefined4 *)(ar4 + 0x844) = 0x36;
        DAT_8c13690c = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x12;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7);
      if (iVar2 == 3) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,pcVar6,0xf8,in_stack_fffffeb0);
        ar7 = s_REACTION_WAKED_TAP_8c136cde;
        pcVar6 = (code *)0x0;
        pcVar5 = (code *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
      }
    }
  }
  else if (*(char *)(ar4 + 0x83) == '\x02') {
    pcVar5 = (code *)get_field_124_027930(*(undefined4 *)(ar6 + 8),ar5,ar6,ar7);
    if (pcVar5 == (code *)0x0) {
      iVar2 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),0,pcVar6,ar7);
      if (iVar2 == 6) {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0x11;
        *(undefined4 *)(ar4 + 0x840) = 0x11;
        DAT_8c136908 = 0x11;
        *(undefined4 *)(ar4 + 0x844) = 0x36;
        DAT_8c13690c = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x0;
        pcVar6 = (code *)0xd;
      }
      else if (iVar2 == 7) {
        Vec3_ctor_copy(auStack_64,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
        Vec3_assign_wrap_063818(ar4,auStack_64,pcVar6,ar7);
        Vec3_dtor(auStack_64,0xffffffff,pcVar6,ar7);
        Vec3_ctor_copy(auStack_74,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7);
        Vec3_assign_wrap_05f640(ar4,auStack_74,pcVar6,ar7);
        Vec3_dtor(auStack_74,0xffffffff,pcVar6,ar7);
        if (cVar10 == '\0') {
          *(undefined4 *)(ar4 + 0x30) = 0x44960000;
          fVar7 = 1400.0;
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x30) = 0x44af000044960000;
          fVar7 = 2.95954e-42;
          *(undefined8 *)(ar4 + 0x78) = 0x84044af0000;
        }
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x4b;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x40) = 0xb;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c136908 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0x2c;
        ar7 = &DAT_8c13686c;
        DAT_8c13690c = 0x2c;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        pcVar5 = (code *)0x2c;
      }
    }
    else {
      iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7);
      if (iVar2 == 3) {
        FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,pcVar6,ar7,in_stack_fffffeb0);
        ar7 = s_REACTION_WAKED_TAP_8c136cde;
        pcVar6 = (code *)0x0;
        pcVar5 = (code *)0x0;
        FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
      }
    }
  }
  if (*(char *)(ar4 + 0x81) == '\x01') {
    pcVar5 = get_field_124_027930;
    iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,pcVar6,ar7);
    if (iVar2 == 3) {
      FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,1,pcVar6,ar7,in_stack_fffffeb0);
      ar7 = s_REACTION_WAKED_TAP_8c136cde;
      pcVar6 = (code *)0x0;
      pcVar5 = (code *)0x0;
      FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
    }
  }
  if ((*(char *)(ar4 + 0x83) == '\x02') &&
     (iVar2 = get_field_124_027930(*(undefined4 *)(ar6 + 8),pcVar5,pcVar6,ar7), iVar2 == 3)) {
    FUN_8c063810(*(int *)(ar6 + 4) + 0xf8,2,pcVar6,ar7,in_stack_fffffeb0);
    ar7 = s_REACTION_WAKED_TAP_8c136cde;
    pcVar6 = (code *)0x0;
    pcVar5 = (code *)0x0;
    FUN_8c0306d4(ar4 + 0x9c,0,0,s_REACTION_WAKED_TAP_8c136cde);
  }
  *(undefined1 *)(ar4 + 0x81) = 0;
  uVar3 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
  if (((short)uVar3 == 3) &&
     (iVar2 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,pcVar5,pcVar6,ar7), iVar2 < 0x31)) {
    (**(code **)(*(int *)ar5 + 0x178))(ar5,pcVar5,pcVar6,ar7);
    if (cVar10 == '\0') {
      fVar8 = 20.0;
    }
    else {
      fVar7 = 20.0;
      fVar8 = 25.0;
    }
    if (cVar9 == '\0' && fVar8 < fVar7) {
      (**(code **)(*(int *)ar5 + 0x178))(ar5,pcVar5,pcVar6,ar7);
      if (cVar10 == '\0') {
        fVar7 = 25.0;
      }
      else {
        fVar8 = 25.0;
        fVar7 = 5.54914e-43;
      }
      if (((((cVar9 == '\0' && fVar8 < fVar7) &&
            (iVar2 = (**(code **)(*(int *)ar5 + 0x18c))(ar5,pcVar5,pcVar6,ar7), iVar2 == 0)) &&
           (uVar3 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7),
           (char)uVar3 == '\x02')) &&
          ((iVar2 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7), iVar2 == -1 &&
           (uVar3 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,pcVar5,pcVar6,ar7), (char)uVar3 != '\x01')
           ))) && (iVar2 = get_field_4_062878(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7),
                  iVar2 == 1)) {
        FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7);
        FUN_8c063800(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7,in_stack_fffffeb0);
        *(undefined4 *)(ar4 + 0x854) = 0xfffffff6;
        pcVar5 = (code *)0x0;
        *(undefined4 *)(ar4 + 0x86c) = 0;
      }
    }
  }
  uVar3 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),pcVar5,pcVar6,ar7);
  iVar2 = (int)(short)uVar3;
  if (iVar2 == 3) {
    ar5_00 = iVar2;
    iVar4 = (**(code **)(*(int *)ar5 + 0x18c))(ar5,3,pcVar6,ar7);
    iVar2 = 0x80;
    if (iVar4 == 0) {
      iVar4 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,pcVar6,ar7);
      iVar2 = 0x7c;
      if ((iVar4 == 0) && (iVar2 = *(int *)(ar4 + 0x854), iVar2 == -10)) {
        uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_00,pcVar6,ar7);
        if (((char)uVar3 == '\0') && (iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 != 1)) {
          if (*(int *)(ar4 + 900) == -1) {
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
            ar7 = s_REQUEST_ATTENTION_8c136cf1;
            FUN_8c0303b8(ar4 + 0x9c,10,0,s_REQUEST_ATTENTION_8c136cf1,&DAT_8c1369bf);
            *(undefined4 *)(ar4 + 0xfc) = 0;
            pcVar6 = (code *)(ar4 + 0x9c);
            uVar3 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7);
            *(undefined4 *)(ar4 + 900) = uVar3;
            *(undefined4 *)(ar4 + 0x14c) = 0;
            FUN_8c030870(ar4 + 0x9c,2,pcVar6,ar7);
          }
          pcVar5 = (code *)(*(int *)(ar4 + 0x86c) + 1);
          *(code **)(ar4 + 0x86c) = pcVar5;
        }
        else {
          pcVar5 = FUN_8c0637c8;
          uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),FUN_8c0637c8,pcVar6,ar7);
          if (((char)uVar3 == '\0') &&
             (pcVar5 = ar6, iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 == 1)) {
            pcVar5 = (code *)0x1;
            FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7);
          }
        }
        uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),pcVar5,pcVar6,ar7);
        if (((char)uVar3 == '\x01') && (iVar2 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7), iVar2 == 1)) {
          if (*(int *)(ar4 + 900) == -1) {
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7);
            ar7_00 = s_EVENT_GET_SPRINKLER_8c136d03;
            FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_GET_SPRINKLER_8c136d03,&DAT_8c1369bf);
            *(undefined4 *)(ar4 + 0xfc) = 0;
            pcVar6 = (code *)(ar4 + 0x9c);
            uVar3 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_00);
            *(undefined4 *)(ar4 + 900) = uVar3;
            *(undefined4 *)(ar4 + 0x14c) = 1;
          }
          if ((*(int *)(ar4 + 0x14c) != 0) && (*(int *)(ar4 + 900) != -1)) {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            *(undefined4 *)(ar4 + 0x840) = 0x12;
            DAT_8c136908 = 0x12;
            *(undefined4 *)(ar4 + 0x844) = 0xb;
            DAT_8c13690c = 0xb;
            *(undefined4 *)(ar4 + 0x848) = 0xc;
            DAT_8c136910 = 0xc;
            iVar2 = *(int *)(ar6 + 0x14) + 0x10;
            pcVar6 = (code *)auStack_84;
            Vec3_ctor_copy(pcVar6,iVar2,pcVar6,iVar2);
            Vec3_assign_wrap_063818(ar4,auStack_84,pcVar6,iVar2);
            Vec3_dtor(auStack_84,0xffffffff,pcVar6,iVar2);
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0xbc44960000;
            }
            Vec3_ctor_copy(auStack_94,*(int *)(ar6 + 0x14) + 0x10,pcVar6,iVar2);
            Vec3_assign_wrap_05f640(ar4,auStack_94,pcVar6,iVar2);
            Vec3_dtor(auStack_94,0xffffffff,pcVar6,iVar2);
            if (cVar10 == '\0') {
              *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
            }
            else {
              *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
            }
            *(undefined1 *)(ar4 + 0x80) = 0;
          }
        }
        iVar2 = 300;
        if (300 < *(int *)(ar4 + 0x86c)) {
          uVar3 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),*(undefined4 *)(ar6 + 0xc),pcVar6,
                               *(int *)(ar4 + 0x86c));
          iVar2 = (int)(char)uVar3;
          if (iVar2 == 0) {
            *(undefined4 *)(ar4 + 0x854) = 0;
            iVar2 = 0x86c;
            *(undefined4 *)(ar4 + 0x86c) = 0;
          }
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _s_REACTION_WAKED_TAP_062b14\n.set _s_REACTION_WAKED_TAP_062b14, _s_REACTION_WAKED_TAP_062b14_def\n");
//@unit 8c0637c0
#include "../decls.h"
undefined4 FUN_8c0637c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x44) = (undefined1)ar5;
  return 0x44;
}

__asm__(".globl _FUN_8c0637c0\n.set _FUN_8c0637c0, _FUN_8c0637c0_def\n");
//@unit 8c0637c8
#include "../decls.h"
int FUN_8c0637c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x44);
}

__asm__(".globl _FUN_8c0637c8\n.set _FUN_8c0637c8, _FUN_8c0637c8_def\n");
//@unit 8c0637d0
#include "../decls.h"
undefined4 FUN_8c0637d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c0637d0\n.set _FUN_8c0637d0, _FUN_8c0637d0_def\n");
//@unit 8c0637f8
#include "../decls.h"
undefined4 get_field_4_0637f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 4);
}

__asm__(".globl _get_field_4_0637f8\n.set _get_field_4_0637f8, _get_field_4_0637f8_def\n");
//@unit 8c063800
#include "../decls.h"
undefined4 FUN_8c063800_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 4) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c063800\n.set _FUN_8c063800, _FUN_8c063800_def\n");
//@unit 8c063808
#include "../decls.h"
undefined4 ret_const_0_063808_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_063808\n.set _ret_const_0_063808, _ret_const_0_063808_def\n");
//@unit 8c063810
#include "../decls.h"
undefined4 FUN_8c063810_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0x2c) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c063810\n.set _FUN_8c063810, _FUN_8c063810_def\n");
//@unit 8c063818
#include "../decls.h"
undefined4 Vec3_assign_wrap_063818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = Vec3_assign(ar4 + 0x28,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Vec3_assign_wrap_063818\n.set _Vec3_assign_wrap_063818, _Vec3_assign_wrap_063818_def\n");
//@unit 8c063838
#include "../decls.h"
undefined ** s_REQUEST_ATTENTION_063846_def(code *ar4,int *ar5,code *ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *ar7_00;
  int iVar2;
  undefined **ppuVar3;
  int *ar5_00;
  int iVar4;
  code *ar5_01;
  undefined4 uVar5;
  code *pcVar6;
  char *ar7_01;
  float fVar7;
  undefined8 in_dr0;
  float fVar8;
  code *pcVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffe84;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  uVar5 = *(undefined4 *)(ar6 + 0xc);
  ar5_00 = ar5;
  FUN_8c0637c8(uVar5,ar5,uVar5,ar7);
  FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_00,uVar5,ar7);
  FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,uVar5,ar7);
  get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),ar5_00,uVar5,ar7);
  uVar1 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),ar5_00,uVar5,ar7);
  iVar4 = (int)(short)uVar1;
  if (iVar4 < 4) {
    return (undefined **)(int)(short)uVar1;
  }
  ar7_00 = (code *)get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),iVar4,uVar5,
                                       *(undefined4 *)(ar6 + 0x18));
  pcVar6 = (code *)((uint)ar7_00 & 0xff);
  if (pcVar6 != (code *)0x2) {
    return (undefined **)pcVar6;
  }
  iVar2 = get_field_178_035734(*(undefined4 *)(ar6 + 8),iVar4,2,ar7_00);
  if (iVar2 != 0) {
    return (undefined **)iVar2;
  }
  uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),iVar4,pcVar6,ar7_00);
  ar5_01 = (code *)(int)(char)uVar1;
  if (ar5_01 == (code *)0x0) {
    uVar1 = (**(code **)(*ar5 + 0x148))(ar5,0,pcVar6,ar7_00);
    iVar4 = get_field_ac_062880(uVar1,ar5_01,pcVar6,ar7_00);
    if (iVar4 == 4) {
      ar5_01 = *(code **)(ar6 + 0x18);
      pcVar6 = (code *)FUN_8c0637d0(*(undefined4 *)(ar5_01 + 0x7cc),ar5_01,pcVar6,ar7_00);
      if (((pcVar6 == (code *)0x0) &&
          (ar5_01 = (code *)FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,0,ar7_00),
          ar5_01 == (code *)0xffffffff)) &&
         (iVar4 = get_field_124_027930(*(undefined4 *)(ar6 + 8),0xffffffff,pcVar6,ar7_00),
         iVar4 == 0)) {
        ar5_01 = *(code **)(ar6 + 0x18);
        uVar1 = get_field_a0_035724(ar5_01,ar5_01,pcVar6,ar7_00);
        if ((((char)uVar1 == '\x02') &&
            (uVar1 = FUN_8c035e8c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
            (char)uVar1 == '\x01')) &&
           ((ar4[0x879] == (code)0x0 &&
            ((iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             iVar4 == 0 &&
             (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             (char)uVar1 == '\x02')))))) {
          iVar4 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,ar5_01,pcVar6,ar7_00);
          uVar1 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          if (iVar4 < 0x2d) {
            (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
            if (cVar11 == '\0') {
              in_dr0 = CONCAT44(0x41a80000,uVar1);
            }
            else {
              in_dr0 = 0xfc41a80000;
            }
            if (cVar10 != '\0' || (float)((ulonglong)in_dr0 >> 0x20) <= (float)in_dr0) {
              (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
              if (cVar11 == '\0') {
                in_dr0 = CONCAT44(0x41c80000,(int)((ulonglong)in_dr0 >> 0x20));
              }
              else {
                in_dr0 = 0x18841c80000;
              }
              if (cVar10 == '\0' && (float)in_dr0 < (float)((ulonglong)in_dr0 >> 0x20)) {
                (**(code **)(*ar5 + 0x188))(ar5,ar5_01,pcVar6,ar7_00);
                if (cVar11 == '\0') {
                  in_dr0 = CONCAT44(0x42980000,(int)((ulonglong)in_dr0 >> 0x20));
                }
                else {
                  in_dr0 = 0x8c025f6842980000;
                }
                if (((cVar10 == '\0' && (float)((ulonglong)in_dr0 >> 0x20) < (float)in_dr0) &&
                    (uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5_01,pcVar6,ar7_00),
                    (char)uVar1 != '\x01')) &&
                   (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
                   iVar4 == 0)) {
                  FUN_8c035e84(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_00);
                  ar4[0x879] = (code)0x1;
                  *(undefined4 *)(ar4 + 0x86c) = 0;
                  ar5_01 = (code *)0x0;
                  FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7_00);
                  *(undefined4 *)(ar4 + 4) = 0xd;
                  *(undefined4 *)(ar4 + 8) = 0x5f;
                  *(undefined4 *)(ar4 + 0xc) = 0;
                  *(undefined4 *)(ar4 + 0x840) = 0x12;
                  ar7_00 = (code *)0x12;
                  DAT_8c136908 = 0x12;
                  *(undefined4 *)(ar4 + 0x844) = 0xb;
                  DAT_8c13690c = 0xb;
                  pcVar6 = (code *)0xc;
                  *(undefined4 *)(ar4 + 0x848) = 0xc;
                  DAT_8c136910 = 0xc;
                }
              }
            }
          }
        }
      }
    }
  }
  fVar7 = (float)((ulonglong)in_dr0 >> 0x20);
  iVar4 = FUN_8c0637d0(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_01,pcVar6,ar7_00);
  if (iVar4 == 0) {
    iVar4 = *ar5;
    uVar1 = (**(code **)(iVar4 + 0x148))(ar5,iVar4,pcVar6,ar7_00);
    ar7_00 = get_field_ac_062880;
    ar5_01 = (code *)get_field_ac_062880(uVar1,iVar4,pcVar6,get_field_ac_062880);
    pcVar6 = ar5_01;
    if ((ar5_01 == (code *)0x4) &&
       (uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),4,4,ar7_00), (char)uVar1 == '\0')) {
      pcVar6 = FUN_8c05eec4;
      uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,FUN_8c05eec4,ar7_00);
      if (((char)uVar1 == '\x02') &&
         (iVar4 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,pcVar6,ar7_00), iVar4 == -1)) {
        ar5_01 = get_field_124_027930;
        iVar4 = get_field_124_027930(*(undefined4 *)(ar6 + 8),get_field_124_027930,pcVar6,ar7_00);
        if ((((iVar4 == 0) &&
             (uVar1 = get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),ar5_01,pcVar6,ar7_00),
             (char)uVar1 == '\x02')) && (ar4[0x879] == (code)0x0)) &&
           (((ar5_01 = (code *)get_field_4_062878(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
             ar5_01 == (code *)0x1 &&
             (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_00), iVar4 == 0))
            && (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00),
               (char)uVar1 == '\x02')))) {
          iVar4 = FUN_8c02c340(*(int *)(ar6 + 4) + 0x90,FUN_8c02c340,pcVar6,ar7_00);
          ar5_01 = (code *)0x2d;
          if (iVar4 < 0x2d) {
            (**(code **)(*ar5 + 0x178))(ar5,0x2d,pcVar6,ar7_00);
            if (cVar11 == '\0') {
              fVar8 = 21.0;
            }
            else {
              fVar7 = 21.0;
              fVar8 = 2.85865e-43;
            }
            if (cVar10 != '\0' || fVar8 <= fVar7) {
              (**(code **)(*ar5 + 0x178))(ar5,ar5_01,pcVar6,ar7_00);
              if (cVar11 == '\0') {
                fVar7 = 25.0;
              }
              else {
                fVar8 = 25.0;
                fVar7 = 5.49309e-43;
              }
              if (cVar10 == '\0' && fVar8 < fVar7) {
                (**(code **)(*ar5 + 0x188))(ar5,ar5_01,pcVar6,ar7_00);
                if (cVar11 == '\0') {
                  pcVar9 = (code *)0x42980000;
                }
                else {
                  fVar7 = 76.0;
                  pcVar9 = FUN_8c025f68;
                }
                if (cVar10 == '\0' && (float)(uint)pcVar9 < fVar7) {
                  ar5_01 = *(code **)(ar6 + 4);
                  uVar1 = FUN_8c025f68(ar5_01 + 0x78,ar5_01,pcVar6,ar7_00);
                  if ((char)uVar1 != '\x01') {
                    if ((char)ar4[0x98] < '\x04') {
                      ar5_01 = (code *)0x5;
                      iVar4 = (**(code **)(*ar5 + 0x11c))(ar5,5,pcVar6,ar7_00);
                      if (iVar4 != 1) goto LAB_8c063f66;
                    }
                    iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_00);
                    if (iVar4 == 0) {
                      FUN_8c02ce10(*(int *)(ar6 + 4) + 0x90,0,pcVar6,ar7_00);
                      ar5_01 = (code *)0x0;
                      FUN_8c063800(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_00,in_stack_fffffe84);
                      ar4[0x879] = (code)0x1;
                      *(undefined4 *)(ar4 + 0x86c) = 0;
                      *(undefined4 *)(ar4 + 4) = 0xd;
                      *(undefined4 *)(ar4 + 8) = 0x5f;
                      *(undefined4 *)(ar4 + 0xc) = 0;
                      *(undefined4 *)(ar4 + 0x840) = 0x12;
                      DAT_8c136908 = 0x12;
                      *(undefined4 *)(ar4 + 0x844) = 0xb;
                      DAT_8c13690c = 0xb;
                      *(undefined4 *)(ar4 + 0x848) = 0xc;
                      DAT_8c136910 = 0xc;
                      pcVar6 = (code *)&DAT_8c13686c;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_8c063f66:
  ar7_01 = (char *)ar7_00;
  if (ar4[0x879] == (code)0x1) {
    if (*(int *)(ar4 + 900) == -1) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_00);
      ar7_01 = s_REQUEST_ATTENTION_8c136cf1;
      FUN_8c0303b8(ar4 + 0x9c,10,0,s_REQUEST_ATTENTION_8c136cf1,&DAT_8c1369bf);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      pcVar6 = ar4 + 0x9c;
      uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 900) = uVar1;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      FUN_8c030870(ar4 + 0x9c,2,pcVar6,ar7_01);
    }
    *(int *)(ar4 + 0x86c) = *(int *)(ar4 + 0x86c) + 1;
    pcVar6 = ar4;
    if ((300 < *(int *)(ar4 + 0x86c)) ||
       (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),get_field_40_03598c,ar4,ar7_01),
       iVar4 != 0)) {
      ar4[0x879] = (code)0x0;
      *(undefined4 *)(ar4 + 0x86c) = 0;
    }
    ar5_01 = ar6;
    iVar4 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01);
    if (((iVar4 == 1) &&
        (uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01), (char)uVar1 == '\0')
        ) && (iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01),
             iVar4 == 0)) {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      ar4[0x879] = (code)0x2;
      ar5_01 = (code *)0x2;
      FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),2,pcVar6,ar7_01);
    }
  }
  uVar1 = FUN_8c0637c8(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
  if ((char)uVar1 != 1) {
    return (undefined **)(int)(char)uVar1;
  }
  if ((char)ar4[0x879] != 2) {
    return (undefined **)(int)(char)ar4[0x879];
  }
  iVar4 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
  if (8 < iVar4) {
    return (undefined **)8;
  }
  if (iVar4 < 0) {
    return (undefined **)8;
  }
  ppuVar3 = &switchdata_8c0641a8_8c0641ac;
                    
  switch(iVar4) {
  case 1:
    if (*(int *)(ar4 + 0x40) == 0x1b) {
      ppuVar3 = (undefined **)0x1b;
    }
    else {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1b;
      *(undefined4 *)(ar4 + 0x840) = 0x1b;
      DAT_8c136908 = 0x1b;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 2:
    ppuVar3 = *(undefined ***)(ar4 + 900);
    if (ppuVar3 == (undefined **)0xffffffff) {
      if (*(int *)(ar4 + 4) == 0xd) {
        ppuVar3 = (undefined **)0xd;
      }
      else {
        iVar4 = FUN_8c02fcc4(ar4,ar6,pcVar6,ar7_01);
        if (iVar4 == 1) {
          ppuVar3 = (undefined **)0x1;
        }
        else {
          if (*(int *)(ar4 + 900) == -1) {
            uVar1 = 0;
            FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01);
            uVar1 = FUN_8c064bac(*(undefined4 *)(ar6 + 0xc),uVar1,pcVar6,ar7_01);
            if ((char)uVar1 == '\0') {
              ar7_01 = s_EVENT_JUMP1_8c136d17;
              FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_JUMP1_8c136d17,s_start_8c136a1c);
              *(undefined4 *)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
              *(undefined4 *)(ar4 + 900) = uVar1;
              *(undefined4 *)(ar4 + 0x14c) = 1;
            }
            else {
              ar7_01 = s_EVENT_JUMP3_8c136d23;
              FUN_8c0303b8(ar4 + 0x9c,0x2a,0,s_EVENT_JUMP3_8c136d23,&DAT_8c1369bf);
              *(undefined4 *)(ar4 + 0xfc) = 0;
              pcVar6 = ar4 + 0x9c;
              uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),pcVar6,ar7_01);
              *(undefined4 *)(ar4 + 900) = uVar1;
              *(undefined4 *)(ar4 + 0x14c) = 1;
            }
          }
          if (*(int *)(ar4 + 0x14c) == 0) {
            ppuVar3 = (undefined **)0x0;
          }
          else if (*(int *)(ar4 + 900) == -1) {
            ppuVar3 = (undefined **)0xffffffff;
          }
          else {
            *(undefined4 *)(ar4 + 4) = 0xd;
            *(undefined4 *)(ar4 + 8) = 0x5f;
            *(undefined4 *)(ar4 + 0xc) = 0;
            *(undefined4 *)(ar4 + 0x840) = 0x12;
            DAT_8c136908 = 0x12;
            *(undefined4 *)(ar4 + 0x844) = 0xb;
            DAT_8c13690c = 0xb;
            *(undefined4 *)(ar4 + 0x848) = 0xc;
            DAT_8c136910 = 0xc;
            Vec3_ctor_copy(auStack_30,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7_01);
            Vec3_assign_wrap_063818(ar4,auStack_30,pcVar6,ar7_01);
            Vec3_dtor(auStack_30,0xffffffff,pcVar6,ar7_01);
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x30) = 0x44960000;
            }
            else {
              *(undefined8 *)(ar4 + 0x30) = 0x13c44960000;
            }
            Vec3_ctor_copy(auStack_40,*(int *)(ar6 + 0x14) + 0x10,pcVar6,ar7_01);
            Vec3_assign_wrap_05f640(ar4,auStack_40,pcVar6,ar7_01);
            Vec3_dtor(auStack_40,0xffffffff,pcVar6,ar7_01);
            if (cVar11 == '\0') {
              *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
            }
            else {
              *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
            }
            ppuVar3 = (undefined **)0x80;
            ar4[0x80] = (code)0x0;
          }
        }
      }
    }
    break;
  case 3:
    ppuVar3 = *(undefined ***)(ar4 + 900);
    if (ppuVar3 == (undefined **)0xffffffff) {
      FUN_8c030870(ar4 + 0x9c,0,pcVar6,ar7_01);
      FUN_8c0303b8(ar4 + 0x9c,3,0,s_EVENT_JUMP2_8c136d2f,s_start_8c136a1c);
      *(undefined4 *)(ar4 + 0xfc) = 0;
      uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),ar4 + 0x9c,FUN_8c0f8320);
      uVar5 = 900;
      *(undefined4 *)(ar4 + 900) = uVar1;
      *(undefined4 *)(ar4 + 0x14c) = 0;
      if (*(int *)(ar4 + 900) == -1) {
        ppuVar3 = (undefined **)0xffffffff;
      }
      else {
        *(undefined4 *)(ar4 + 4) = 0xd;
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 0x840) = 0xb;
        DAT_8c136908 = 0xb;
        *(undefined4 *)(ar4 + 0x844) = 0xc;
        DAT_8c13690c = 0xc;
        uVar1 = 0x36;
        *(undefined4 *)(ar4 + 0x848) = 0x36;
        DAT_8c136910 = 0x36;
        Vec3_ctor_copy(auStack_50,*(int *)(ar6 + 0x14) + 0x10,0x36,900);
        Vec3_assign_wrap_05f640(ar4,auStack_50,uVar1,uVar5);
        Vec3_dtor(auStack_50,0xffffffff,uVar1,uVar5);
        if (cVar11 == '\0') {
          *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
        }
        ppuVar3 = (undefined **)0x80;
        ar4[0x80] = (code)0x0;
      }
    }
    break;
  case 4:
    if (*(int *)(ar4 + 0x40) == 0x1d) {
      return (undefined **)0x1d;
    }
    if (*(int *)(ar4 + 0x40) == 0x1c) {
      return (undefined **)0x1c;
    }
    if (*(int *)(ar4 + 0x10c) == 0) {
      return (undefined **)0;
    }
    uVar1 = FUN_8c064bac(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
    if (((((char)uVar1 < '\x02') ||
         (iVar4 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5_01,pcVar6,ar7_01), iVar4 != -1)) ||
        (uVar1 = FUN_8c05eec4(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01),
        (char)uVar1 != '\x02')) || (*(int *)(ar4 + 0x10c) != 4)) {
      if (*(int *)(ar4 + 0x10c) == 4) {
LAB_8c064842:
        FUN_8c064b84(*(undefined4 *)(ar6 + 0xc),ar5_01,pcVar6,ar7_01);
      }
      else {
        ar7_01 = (char *)0x10c;
        pcVar6 = *(code **)(ar4 + 0x10c);
        if (pcVar6 == (code *)0x6) goto LAB_8c064842;
      }
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      if (*(int *)(ar4 + 0x10c) == 4) {
        *(undefined4 *)(ar4 + 0x40) = 0x31;
        *(undefined4 *)(ar4 + 0x840) = 0x31;
        DAT_8c136908 = 0x31;
      }
      else {
        *(undefined4 *)(ar4 + 0x40) = 0x1c;
        ar7_01 = (char *)0x840;
        *(undefined4 *)(ar4 + 0x840) = 0x1c;
        DAT_8c136908 = 0x1c;
      }
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),0x24,0x1b,ar7_01);
    }
    else {
      FUN_8c064ba0(*(undefined4 *)(ar6 + 0x18),3,pcVar6,ar7_01);
      (**(code **)(*ar5 + 0xd8))(ar5,*(undefined4 *)ar6,pcVar6,ar7_01);
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x1d;
      *(undefined4 *)(ar4 + 0x840) = 0x1d;
      DAT_8c136908 = 0x1d;
      *(undefined4 *)(ar4 + 0x844) = 0x2c;
      DAT_8c13690c = 0x2c;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0fa6c8(0x8c35468c,0x2c,pcVar6,ar7_01);
    }
    ppuVar3 = (undefined **)0x10c;
    *(undefined4 *)(ar4 + 0x10c) = 0;
    break;
  case 5:
    iVar4 = (**(code **)(*ar5 + 0xf0))(ar5,ar5_01,pcVar6,ar7_01);
    if (iVar4 == 1) {
      FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),6,pcVar6,ar7_01);
      ppuVar3 = (undefined **)FUN_8c0b9ed4(*(undefined4 *)(ar6 + 0x18),0x25,0x1b,ar7_01);
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x2c;
      *(undefined4 *)(ar4 + 0x840) = 0x2c;
      DAT_8c136908 = 0x2c;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 6:
    ppuVar3 = (undefined **)FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),7,pcVar6,ar7_01);
    break;
  case 7:
    if (*(int *)(ar4 + 0x40) == 0x17) {
      ppuVar3 = (undefined **)0x17;
    }
    else {
      FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),1,pcVar6,ar7_01);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 99;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x17;
      *(undefined4 *)(ar4 + 0x840) = 0x17;
      DAT_8c136908 = 0x17;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      ppuVar3 = (undefined **)0xa4;
      DAT_8c136910 = 0x36;
    }
    break;
  case 8:
    ar4[0x879] = (code)0x0;
    pcVar6 = FUN_8c035e84;
    FUN_8c035e84(*(undefined4 *)(ar6 + 0xc),0,FUN_8c035e84,ar7_01);
    ar4[0x871] = (code)0x0;
    FUN_8c05f498(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_01);
    FUN_8c0637c0(*(undefined4 *)(ar6 + 0xc),0,pcVar6,ar7_01);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
    *(undefined4 *)(ar4 + 0x844) = 0x36;
    DAT_8c13690c = 0x36;
    *(undefined4 *)(ar4 + 0x848) = 0x36;
    DAT_8c136910 = 0x36;
    ppuVar3 = (undefined **)FUN_8c0c4e2c(0x36,0xa0,&DAT_8c13686c,0x36);
  }
  return ppuVar3;
}

__asm__(".globl _s_REQUEST_ATTENTION_063846\n.set _s_REQUEST_ATTENTION_063846, _s_REQUEST_ATTENTION_063846_def\n");
//@unit 8c064b7c
#include "../decls.h"
undefined4 ret_const_0_064b7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_064b7c\n.set _ret_const_0_064b7c, _ret_const_0_064b7c_def\n");
//@unit 8c064b84
#include "../decls.h"
undefined4 FUN_8c064b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(char *)(ar4 + 0x3b) = *(char *)(ar4 + 0x3b) + '\x01';
  return 0x3b;
}

__asm__(".globl _FUN_8c064b84\n.set _FUN_8c064b84, _FUN_8c064b84_def\n");
//@unit 8c064b9c
#include "../decls.h"
undefined4 noop_064b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_064b9c\n.set _noop_064b9c, _noop_064b9c_def\n");
//@unit 8c064ba0
#include "../decls.h"
int FUN_8c064ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xa1;
  *(undefined1 *)(0xa1 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c064ba0\n.set _FUN_8c064ba0, _FUN_8c064ba0_def\n");
//@unit 8c064bac
#include "../decls.h"
int FUN_8c064bac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return (int)*(char *)(ar4 + 0x3b);
}

__asm__(".globl _FUN_8c064bac\n.set _FUN_8c064bac, _FUN_8c064bac_def\n");
//@unit 8c064bb4
#include "../decls.h"
undefined4 s_REACTION_TITILLATE_064bb8_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *ar5_00;
  char cVar5;
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [36];
  
  cVar5 = '\0';
  ar5_00 = auStack_2c;
  puVar3 = &DAT_8c136968;
  iVar2 = 0x10;
  do {
    puVar4 = puVar3 + 1;
    *ar5_00 = *puVar3;
    puVar3 = puVar3 + 2;
    ar5_00[1] = *puVar4;
    ar5_00 = ar5_00 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  iVar2 = ar6;
  if (*(char *)(ar4 + 0x84) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x15) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (((*(int *)(ar4 + 0x40) == 0x15) &&
          ((*(undefined4 *)(ar4 + 0x40) = 0x15, *(int *)(ar4 + 0x874) == 6 ||
           (*(int *)(ar4 + 0x874) == 7)))) && (*(int *)(ar4 + 900) == -1)) {
        FUN_8c030870(ar4 + 0x9c,0,ar6,ar7);
        ar7 = s_REACTION_TITILLATE_8c136d3b;
        FUN_8c0303b8(ar4 + 0x9c,0x28,0,s_REACTION_TITILLATE_8c136d3b,&DAT_8c1369bf);
        *(undefined4 *)(ar4 + 0xfc) = 0;
        iVar2 = ar4 + 0x9c;
        uVar1 = FUN_8c0f8320(0x8c35468c,*(undefined4 *)(ar4 + 0x388),iVar2,ar7);
        *(undefined4 *)(ar4 + 900) = uVar1;
        *(undefined4 *)(ar4 + 0x14c) = 0;
        ar5_00 = (undefined1 *)0x2;
        FUN_8c030870(ar4 + 0x9c,2,iVar2,ar7);
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x15;
      *(undefined4 *)(ar4 + 0x840) = 0x15;
      DAT_8c136908 = 0x15;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      ar5_00 = (undefined1 *)0x1;
      FUN_8c0fdd68(ar4 + 0x9c,1,ar6,ar7);
    }
  }
  else if (*(int *)(ar4 + 0x40) == 0x15) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
  }
  if (*(char *)(ar4 + 0x85) == '\x01') {
    if (((*(int *)(ar4 + 0x40) == 0x16) || (*(int *)(ar4 + 0x40) != 0)) ||
       (*(int *)(ar4 + 4) == 0xd)) {
      if (*(int *)(ar4 + 0x40) == 0x16) {
        *(undefined4 *)(ar4 + 0x40) = 0x16;
      }
    }
    else {
      ar5_00 = (undefined1 *)0x1;
      FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x16;
      *(undefined4 *)(ar4 + 0x840) = 0x16;
      DAT_8c136908 = 0x16;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
    }
  }
  if (*(char *)(ar4 + 0x87) == '\x01') {
    if (*(int *)(ar4 + 0x40) == 0x14) {
      if (*(int *)(ar4 + 0x40) == 0x14) {
        *(undefined4 *)(ar4 + 0x40) = 0x14;
      }
    }
    else if (((*(int *)(ar4 + 0x40) == 0) || (*(int *)(ar4 + 0x40) == 0x12)) ||
            (*(int *)(ar4 + 0x40) == 0x10)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x14;
      *(undefined4 *)(ar4 + 0x840) = 0x14;
      DAT_8c136908 = 0x14;
      *(undefined4 *)(ar4 + 0x844) = 0x36;
      DAT_8c13690c = 0x36;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      FUN_8c0fdd68(ar4 + 0x9c,0xffffffff,iVar2,ar7);
      ar7 = s_REACTION_DEKOPIN_8c136d4e;
      iVar2 = 0;
      ar5_00 = (undefined1 *)0x27;
      FUN_8c0306d4(ar4 + 0x9c,0x27,0,s_REACTION_DEKOPIN_8c136d4e);
    }
  }
  if (((*(char *)(ar4 + 0x86) == '\x01') &&
      (uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5_00,iVar2,ar7), (char)uVar1 != '\x01')) &&
     (uVar1 = FUN_8c02bef8(*(undefined4 *)(ar6 + 4),ar5_00,iVar2,ar7), 2 < (short)uVar1)) {
    if ((*(int *)(ar4 + 4) == 0xd) || (*(int *)(ar4 + 0x40) != 0)) {
      if ((*(int *)(ar4 + 0x40) == 0x2a) || (*(int *)(ar4 + 0x40) == 0x2b)) {
        uVar1 = get_field_b8_101178(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),ar5_00,iVar2,ar7);
        if ((char)uVar1 == '\x01') {
          *(undefined4 *)(ar4 + 0x844) = 0x2a;
          DAT_8c13690c = 0x2a;
          *(undefined1 *)(ar4 + 0x91) = 1;
          FUN_8c0fdd68(ar4 + 0x9c,1,iVar2,ar7);
          *(int *)(ar4 + 0x860) = *(int *)(ar4 + 0x860) + 1;
        }
        uVar1 = get_field_b8_101178(*(undefined4 *)(*(int *)(ar6 + 0x18) + 0x7cc),
                                    get_field_b8_101178,iVar2,ar7);
        if ((char)uVar1 == '\x02') {
          *(undefined4 *)(ar4 + 0x40) = 0x2b;
          *(undefined4 *)(ar4 + 0x844) = 0x2b;
          DAT_8c13690c = 0x2b;
          *(undefined1 *)(ar4 + 0x91) = 1;
          *(int *)(ar4 + 0x860) = *(int *)(ar4 + 0x860) + 1;
        }
      }
    }
    else {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x4b;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x40) = 0x29;
      *(undefined4 *)(ar4 + 0x840) = 0x29;
      DAT_8c136908 = 0x29;
      *(undefined4 *)(ar4 + 0x844) = 0x2a;
      DAT_8c13690c = 0x2a;
      *(undefined4 *)(ar4 + 0x848) = 0x36;
      DAT_8c136910 = 0x36;
      Vec3_ctor_copy(auStack_3c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      Vec3_assign_wrap_063818(ar4,auStack_3c,iVar2,ar7);
      Vec3_dtor(auStack_3c,0xffffffff,iVar2,ar7);
      Vec3_ctor_copy(auStack_4c,*(int *)(ar6 + 0x14) + 0x10,iVar2,ar7);
      Vec3_assign_wrap_05f640(ar4,auStack_4c,iVar2,ar7);
      Vec3_dtor(auStack_4c,0xffffffff,iVar2,ar7);
      if (cVar5 == '\0') {
        *(undefined4 *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = 0x714061e344960000;
      }
    }
  }
  else if ((*(int *)(ar4 + 0x40) == 0x29) || (*(int *)(ar4 + 0x40) == 0x2a)) {
    if ((*(int *)(ar4 + 0x40) == 0x2a) && (0x1e < *(int *)(ar4 + 0x860))) {
      FUN_8c0306d4(ar4 + 0x9c,0x15,0,s_STATUS_AFTER_DANCE_8c136d5f);
      *(undefined4 *)(ar4 + 0x860) = 0;
    }
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 8) = 0x14;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0;
    DAT_8c136908 = 0;
  }
  *(undefined1 *)(ar4 + 0x84) = 0;
  *(undefined1 *)(ar4 + 0x85) = 0;
  *(undefined1 *)(ar4 + 0x87) = 0;
  return 0x87;
}

__asm__(".globl _s_REACTION_TITILLATE_064bb8\n.set _s_REACTION_TITILLATE_064bb8, _s_REACTION_TITILLATE_064bb8_def\n");
//@unit 8c065228
#include "../decls.h"
int s_GRATIFIC_RID_HOT_06522a_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c02bebc(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,7,0,(&DATA_8c136988) + 0x3ea,
                 (&DATA_8c136988) + 0x37);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,8,0,(&DATA_8c136988) + 0x3fb,
                 (&DATA_8c136988) + 0x37);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 3) {
      (*(code *)(&FUN_8c0303b8))
                (ar4 + 0x9c,0x1c,0,(&DATA_8c136988) + 0x40d,
                 (&DATA_8c136988) + 0x37);
      iVar1 = 0x118;
      *(undefined4 *)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl _s_GRATIFIC_RID_HOT_06522a\n.set _s_GRATIFIC_RID_HOT_06522a, _s_GRATIFIC_RID_HOT_06522a_def\n");
//@unit 8c0652f4
#include "../decls.h"
int FUN_8c0652f4_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  uint ar5_00;
  int ar6_00;
  char cVar3;
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar3 = '\0';
  ar6_00 = ar6;
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 == 0) {
    *(undefined4 *)(ar4 + 0x118) = 0;
    uVar2 = FUN_8c02c5ac(*(undefined4 *)(ar6 + 4),ar5,ar6_00,ar7);
    *(int *)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 1) {
    *(undefined4 *)(ar4 + 0x118) = 1;
    uVar2 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x18,ar5,ar6_00,ar7);
    *(int *)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 3) {
    *(undefined4 *)(ar4 + 0x118) = 3;
    uVar2 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x48,ar5,ar6_00,ar7);
    *(int *)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else if (iVar1 == 4) {
    *(undefined4 *)(ar4 + 0x118) = 4;
    uVar2 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x60,ar5,ar6_00,ar7);
    *(int *)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  else {
    *(undefined4 *)(ar4 + 0x118) = 7;
    *(undefined4 *)(ar4 + 0xfc) = 0;
    iVar1 = get_field_24_05eed0(*(int *)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7);
    if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x118) = 8;
    }
    if (*(int *)(ar4 + 0x40) == 3) {
      *(undefined4 *)(ar4 + 0x118) = 9;
    }
  }
  if ((*(int *)(ar4 + 0x40) == 0) &&
     (uVar2 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5,ar6_00,ar7), (char)uVar2 == '\x01')) {
    *(undefined4 *)(ar4 + 0x118) = 5;
    uVar2 = FUN_8c02c5ac(*(int *)(ar6 + 4) + 0x78,ar5,ar6_00,ar7);
    *(int *)(ar4 + 0xfc) = (int)(char)uVar2;
  }
  if ((*(int *)(ar4 + 0x40) == 0) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 3)) {
    iVar1 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5,ar6_00,ar7);
    if ((iVar1 == 0) &&
       ((((iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x34))(*(int **)(ar6 + 8),ar5,ar6_00,ar7),
          iVar1 != 1 &&
          (iVar1 = get_field_178_035734(*(undefined4 *)(ar6 + 8),ar5,ar6_00,ar7), iVar1 == 0)) &&
         (iVar1 = get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7), iVar1 == 0)) &&
        (*(int *)(ar4 + 900) == -1)))) {
      uVar2 = get_field_a0_035724(*(undefined4 *)(ar6 + 0x18),ar5,ar6_00,ar7);
      ar5_00 = (uint)((char)uVar2 == '\x03');
      iVar1 = s_JUNGLE_0309ca(ar4 + 0x9c,ar5_00,ar6_00,ar7);
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = FUN_8c025f68(iVar1 * 0x18 + *(int *)(ar6 + 4),ar5_00,ar6_00,ar7);
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        ar6_00 = ar4 + 0x9c;
        uVar2 = FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7);
        *(undefined4 *)(ar4 + 900) = uVar2;
      }
      if ((*(int *)(ar4 + 0x40) == 3) && (*(int *)(ar4 + 900) != -1)) {
        FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7);
      }
    }
    iVar1 = *(int *)(ar4 + 4);
    if (((iVar1 == 0) && (iVar1 = 0, *(int *)(ar4 + 0x14c) != 0)) &&
       (iVar1 = *(int *)(ar4 + 900), iVar1 != -1)) {
      *(undefined4 *)(ar4 + 4) = 0xd;
      *(undefined4 *)(ar4 + 8) = 0x5f;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 0x840) = 0x12;
      DAT_8c136908 = 0x12;
      *(undefined4 *)(ar4 + 0x844) = 0xb;
      DAT_8c13690c = 0xb;
      *(undefined4 *)(ar4 + 0x848) = 0xc;
      DAT_8c136910 = 0xc;
      Vec3_ctor_copy(auStack_24,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
      Vec3_assign_wrap_063818(ar4,auStack_24,ar6_00,ar7);
      Vec3_dtor(auStack_24,0xffffffff,ar6_00,ar7);
      if (cVar3 == '\0') {
        *(undefined4 *)(ar4 + 0x30) = 0x44960000;
      }
      else {
        *(undefined8 *)(ar4 + 0x30) = 0x8c05f64044960000;
      }
      Vec3_ctor_copy(auStack_34,*(int *)(ar6 + 0x14) + 0x10,ar6_00,ar7);
      Vec3_assign_wrap_05f640(ar4,auStack_34,ar6_00,ar7);
      Vec3_dtor(auStack_34,0xffffffff,ar6_00,ar7);
      if (cVar3 == '\0') {
        *(undefined4 *)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(ar4 + 0x78) = 0x8044af0000;
      }
      iVar1 = 0x80;
      *(undefined1 *)(ar4 + 0x80) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c0652f4\n.set _FUN_8c0652f4, _FUN_8c0652f4_def\n");
//@unit 8c0656d4
#include "../decls.h"
undefined4 s_EVENT_ENDING_0656da_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *ar5_00;
  char *ar5_01;
  undefined4 *ar6_00;
  undefined4 in_fr1;
  double dVar3;
  char cVar4;
  char cVar5;
  undefined4 in_stack_ffffff5c;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  cVar5 = '\0';
  cVar4 = '\0';
  ar5_00 = Vec3_ctor_zero;
  ar6_00 = ar6;
  Vec3_ctor_zero(&uStack_20,Vec3_ctor_zero,ar6,ar7);
  if (*(int *)(ar4 + 900) == -1) goto LAB_8c065be6;
  if ((*(int *)(ar4 + 4) == 0) && (*(int *)(ar4 + 0x14c) != 0)) {
    *(undefined4 *)(ar4 + 4) = 0xd;
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x840) = 0x12;
    DAT_8c136908 = 0x12;
    *(undefined4 *)(ar4 + 0x844) = 0xb;
    DAT_8c13690c = 0xb;
    *(undefined4 *)(ar4 + 0x848) = 0xc;
    DAT_8c136910 = 0xc;
    Vec3_ctor_copy(auStack_30,ar6[5] + 0x10,ar6_00,ar7);
    Vec3_assign_wrap_063818(ar4,auStack_30,ar6_00,ar7);
    Vec3_dtor(auStack_30,0xffffffff,ar6_00,ar7);
    if (cVar5 == '\0') {
      *(undefined4 *)(ar4 + 0x30) = 0x44960000;
    }
    else {
      in_fr1 = 0x44960000;
      *(undefined8 *)(ar4 + 0x30) = 0x8044960000;
    }
    *(undefined1 *)(ar4 + 0x80) = 0;
  }
  Vec3_ctor_copy(auStack_40,ar6[5] + 0x10,ar6_00,ar7);
  Vec3_assign_wrap_05f640(ar4,auStack_40,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_40,0xffffffff,ar6_00,ar7);
  FUN_8c02f670(*ar6,uVar2,ar6_00,ar7,auStack_50);
  Vec3_sub(auStack_50,ar6[5] + 0x10,ar6_00,ar7,auStack_60);
  Vec3_assign(&uStack_20,auStack_60,ar6_00,ar7);
  Vec3_dtor(auStack_60,0xffffffff,ar6_00,ar7);
  uVar2 = 0xffffffff;
  Vec3_dtor(auStack_50,0xffffffff,ar6_00,ar7);
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_18,in_fr1);
  }
  else {
    dVar3 = (double)CONCAT44(uStack_14,uStack_18);
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(ar4 + 0x158) = iVar1;
  if (cVar5 == '\0') {
    dVar3 = (double)CONCAT44(uStack_20,SUB84(dVar3,0));
  }
  else {
    dVar3 = (double)CONCAT44(uStack_1c,uStack_20);
  }
  if (cVar4 == '\0') {
    iVar1 = (int)(float)((ulonglong)dVar3 >> 0x20);
  }
  else {
    iVar1 = (int)dVar3;
  }
  *(int *)(ar4 + 0x15c) = iVar1;
  iVar1 = get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7);
  if ((iVar1 == 3) || (iVar1 = get_field_89130_0fa740(0x8c35468c,uVar2,ar6_00,ar7), iVar1 == 5)) {
    ar5_00 = (code *)0x1;
    FUN_8c065ca4(ar6[3],1,ar6_00,ar7);
  }
  else {
    ar5_00 = (code *)0x0;
    FUN_8c065ca4(ar6[3],0,ar6_00,ar7);
  }
  iVar1 = get_field_770_05eeb8(ar4 + 0x9c,ar5_00,ar6_00,ar7);
  if (iVar1 == 2) {
    *(undefined4 *)(ar4 + 0x14c) = 0;
  }
  iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7);
  if (iVar1 != 0) goto LAB_8c065be6;
  *(undefined4 *)(ar4 + 0x94) = 0;
  ar5_01 = (char *)0x3;
  FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
  if (*(int *)(ar4 + 0x40) == 0xc) {
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7);
  if ((((short)uVar2 == 3) &&
      (iVar1 = (**(code **)(*ar5 + 0x18c))(ar5,ar5_01,ar6_00,ar7), iVar1 == 0)) &&
     (*(int *)(ar4 + 0x10c) == 2)) {
    FUN_8c0637c0(ar6[3],1,ar6_00,ar7);
    ar6_00 = (undefined4 *)0x1b;
    FUN_8c0b9ed4(ar6[6],0x20,0x1b,ar7);
    FUN_8c065c9c(ar6[3],1,ar6_00,ar7);
    (**(code **)(*ar5 + 0x16c))(ar5,1,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)0x4;
    uVar2 = ar6[3];
    FUN_8c061180(uVar2,4,ar6_00,ar7,in_stack_ffffff5c);
    *(undefined4 *)(ar4 + 0x854) = 0;
    FUN_8c0c4e2c(uVar2,ar5_01,ar6_00,ar7);
  }
  uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7);
  if (((3 < (short)uVar2) && (uVar2 = FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7), (char)uVar2 == '\x01')
      ) && (*(int *)(ar4 + 0x10c) == 7)) {
    *(undefined4 *)(ar4 + 0x10c) = 0;
    ar5_01 = (char *)0x1;
    FUN_8c05f498(ar6[3],1,ar6_00,ar7);
  }
  if (((*(int *)(ar4 + 0x10c) == 6) || (*(int *)(ar4 + 0x10c) == 4)) &&
     ((uVar2 = FUN_8c02bef8(ar6[1],ar5_01,ar6_00,ar7), 3 < (short)uVar2 &&
      (uVar2 = FUN_8c0637c8(ar6[3],ar5_01,ar6_00,ar7), (char)uVar2 == '\x01')))) {
    if (*(int *)(ar4 + 0x10c) == 4) {
      *(undefined1 *)(ar4 + 0x871) = 1;
    }
    ar5_01 = (char *)0x4;
    FUN_8c05f498(ar6[3],4,ar6_00,ar7);
  }
  if (*(int *)(ar4 + 0x10c) == 5) {
LAB_8c065a4a:
    *(undefined4 *)(ar4 + 0x87c) = 1;
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  else {
    ar5_01 = s_EVENT_ENDING_8c136c95;
    iVar1 = FUN_8c05edfc(ar4 + 0xbc,s_EVENT_ENDING_8c136c95,ar6_00,ar7);
    if (iVar1 == 0) goto LAB_8c065a4a;
  }
  uVar2 = FUN_8c025f68(ar6[1] + 0x78,ar5_01,ar6_00,ar7);
  if (((char)uVar2 == '\x01') && (*(int *)(ar4 + 0x10c) == 3)) {
    FUN_8c02e438(ar6[1] + 0x78,ar5_01,ar6_00,ar7);
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  if (*(int *)(ar4 + 0x10c) == 0xf) {
    *(undefined4 *)(ar4 + 4) = 5;
    *(undefined4 *)(ar4 + 8) = 0x55;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 0x40) = 5;
    *(undefined4 *)(ar4 + 0x840) = 5;
    DAT_8c136908 = 5;
    *(undefined4 *)(ar4 + 0x844) = 0x36;
    DAT_8c13690c = 0x36;
    *(undefined4 *)(ar4 + 0x848) = 0x36;
    DAT_8c136910 = 0x36;
    *(undefined4 *)(ar4 + 0x10c) = 0;
  }
  if ((*(int *)(ar4 + 0x100) < 1) ||
     (iVar1 = get_field_b0_065c8c(ar6[3],ar5_01,ar6_00,ar7), *(int *)(ar4 + 0x100) < iVar1)) {
    ar5_00 = (code *)0x0;
    FUN_8c02af68(*ar6,0,ar6_00,ar7);
  }
  else {
    FUN_8c065c80(ar6[3],*(undefined4 *)(ar4 + 0x100),ar6_00,ar7);
    ar5_00 = (code *)0x1;
    FUN_8c02af68(*ar6,1,ar6_00,ar7);
  }
  s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6_00,ar7);
  *(undefined1 *)(ar4 + 0x80) = 1;
  *(undefined4 *)(ar4 + 900) = 0xffffffff;
  *(undefined4 *)(ar4 + 0xfc) = 0;
LAB_8c065be6:
  iVar1 = FUN_8c0fa2b8(0x8c35468c,ar5_00,ar6_00,ar7);
  if ((iVar1 == 0) && ((*(int *)(ar4 + 0x40) == 0xc || (*(int *)(ar4 + 0x40) == 0xb)))) {
    FUN_8c030870(ar4 + 0x9c,3,ar6_00,ar7);
    *(undefined4 *)(ar4 + 4) = 0;
    *(undefined4 *)(ar4 + 0x40) = 0;
    *(undefined4 *)(ar4 + 8) = 0;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined1 *)(ar4 + 0x80) = 1;
  }
  uVar2 = Vec3_dtor(&uStack_20,0xffffffff,ar6_00,ar7);
  return uVar2;
}

__asm__(".globl _s_EVENT_ENDING_0656da\n.set _s_EVENT_ENDING_0656da, _s_EVENT_ENDING_0656da_def\n");
//@unit 8c065c80
#include "../decls.h"
int FUN_8c065c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xb0;
  *(undefined4 *)(0xb0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c065c80\n.set _FUN_8c065c80, _FUN_8c065c80_def\n");
//@unit 8c065c8c
#include "../decls.h"
undefined4 get_field_b0_065c8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xb0 + ar4);
}

__asm__(".globl _get_field_b0_065c8c\n.set _get_field_b0_065c8c, _get_field_b0_065c8c_def\n");
//@unit 8c065c98
#include "../decls.h"
undefined4 noop_065c98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_065c98\n.set _noop_065c98, _noop_065c98_def\n");
//@unit 8c065c9c
#include "../decls.h"
undefined4 FUN_8c065c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(undefined1 *)(ar4 + 0x3d) = (undefined1)ar5;
  return 0x3d;
}

__asm__(".globl _FUN_8c065c9c\n.set _FUN_8c065c9c, _FUN_8c065c9c_def\n");
//@unit 8c065ca4
#include "../decls.h"
int FUN_8c065ca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xc8;
  *(undefined4 *)(0xc8 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c065ca4\n.set _FUN_8c065ca4, _FUN_8c065ca4_def\n");
//@unit 8c065cb0
#include "../decls.h"
int FUN_8c065cb0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(ar4 + 0x94) = *(undefined4 *)(ar4 + 0x154);
  if (*(int *)(ar4 + 900) != -1) goto LAB_8c065e2a;
  *(undefined4 *)(ar4 + 0x94) = 0;
  iVar3 = *(int *)(ar4 + 0x104);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(undefined4 *)(ar4 + 0x94) = 0x14;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x94) = 0x2d;
      break;
    case 4:
      *(undefined4 *)(ar4 + 0x94) = 0x1e;
    }
  }
  iVar3 = ar6;
  uVar1 = FUN_8c025f68(*(int *)(ar6 + 4) + 0x78,ar5,ar6,ar7);
  if ((char)uVar1 == '\x01') {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  iVar2 = *(int *)(ar4 + 0x40);
  if (iVar2 < 0xf) {
    if (0xd < iVar2) {
      *(undefined4 *)(ar4 + 0x94) = 0xf;
      goto LAB_8c065e2a;
    }
    if (5 < iVar2) {
      if (iVar2 == 9) {
        iVar3 = get_field_140_025f70(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
        if (iVar3 == 0) {
          *(undefined4 *)(ar4 + 0x94) = 0x19;
        }
        else {
          *(undefined4 *)(ar4 + 0x94) = 0x1e;
        }
      }
      goto LAB_8c065e2a;
    }
    if (iVar2 < 0) goto LAB_8c065e2a;
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(undefined4 *)(ar4 + 0x94) = 0x37;
      }
      else if (iVar2 == 5) {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
  }
  else {
    if (0x13 < iVar2) {
      if (iVar2 == 0x2f) {
        *(undefined4 *)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
    if (0x12 < iVar2) {
      *(undefined4 *)(ar4 + 0x94) = 0x23;
      goto LAB_8c065e2a;
    }
    if (iVar2 != 0x10) goto LAB_8c065e2a;
  }
  iVar3 = FUN_8c02c518(*(undefined4 *)(ar6 + 4),ar5,iVar3,ar7);
  if (iVar3 == 0) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 3) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 4) {
    *(undefined4 *)(ar4 + 0x94) = 0x14;
  }
LAB_8c065e2a:
  iVar3 = *(int *)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(undefined4 *)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(undefined4 *)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl _FUN_8c065cb0\n.set _FUN_8c065cb0, _FUN_8c065cb0_def\n");
//@unit 8c065e6c
#include "../decls.h"
undefined * s_IDLEACTION_SNEEZE_065e70_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = ar6;
  if ((((*(int *)(ar4 + 900) == -1) &&
       (iVar1 = get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5,ar6,ar7), iVar1 == 0)) &&
      (*(int *)(ar4 + 0x40) == 0x10)) &&
     (iVar1 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7),
     iVar1 == 5)) {
    ar7 = s_IDLEACTION_SNEEZE_8c136dab;
    iVar3 = 0;
    ar5 = 0x19;
    FUN_8c0306d4(ar4 + 0x9c,0x19,0,s_IDLEACTION_SNEEZE_8c136dab);
  }
  puVar2 = *(undefined **)(ar4 + 900);
  if (((puVar2 == (undefined *)0xffffffff) &&
      (puVar2 = (undefined *)get_field_40_03598c(*(undefined4 *)(ar6 + 0xc),ar5,iVar3,ar7),
      puVar2 == (undefined *)0x0)) &&
     (puVar2 = *(undefined **)(ar4 + 4), puVar2 == (undefined *)0x0)) {
    iVar3 = (**(code **)(**(int **)(ar6 + 8) + 0x30))(*(int **)(ar6 + 8),ar5,iVar3,ar7);
    puVar2 = (undefined *)0xe;
    if ((iVar3 < 0xf) && (puVar2 = (undefined *)0x2, 1 < iVar3)) {
      puVar2 = (&switchdata_8c065f22_8c065f28)[iVar3 + -2];
                    
      switch(iVar3) {
      case 2:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_YAWN_8c136b23,&DAT_8c1369bf);
        break;
      case 3:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_PURUPURU_8c136dbd,&DAT_8c1369bf);
        break;
      case 4:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_WHAT_8c136dd1,&DAT_8c1369bf);
        break;
      case 5:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_SNEEZE_8c136dab,&DAT_8c1369bf);
        break;
      case 6:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_STERN_SWING_8c136de1,&DAT_8c1369bf);
        break;
      case 9:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_WANT_FREE_8c136df8,&DAT_8c1369bf);
        break;
      case 0xb:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_PAW_8c136e1d,&DAT_8c1369bf);
        break;
      case 0xd:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_BITE_8c136e0d,&DAT_8c1369bf);
        break;
      case 0xe:
        puVar2 = (undefined *)
                 FUN_8c030568(ar4 + 0x9c,0x19,0,s_IDLEACTION_ACTION_JUMP_8c136e2c,&DAT_8c1369bf);
      }
    }
  }
  return puVar2;
}

__asm__(".globl _s_IDLEACTION_SNEEZE_065e70\n.set _s_IDLEACTION_SNEEZE_065e70, _s_IDLEACTION_SNEEZE_065e70_def\n");
//@unit 8c0660d4
#include "../decls.h"
int s_STATUS_SUCKED_0660da_def(int ar4,int *ar5,int *ar6,char *ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *a5;
  int *a6;
  char *ar7_00;
  undefined4 in_stack_ffffffbc;
  
  a5 = ar5;
  a6 = ar6;
  if (((*(int *)(ar4 + 0x6c) == 0) && (*(int *)(ar4 + 0x40) == 0)) && (*(int *)(ar4 + 0x874) == 7))
  {
    uVar1 = FUN_8c066834(ar4,ar5,ar6,ar7);
    *(undefined4 *)(ar4 + 0x6c) = uVar1;
    if ((*(int *)(ar4 + 0x6c) == 0) || (*(int *)(ar4 + 4) != 0)) {
      *(undefined4 *)(ar4 + 0x6c) = 0;
    }
    else {
      (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x74))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
      *(undefined4 *)(ar4 + 0x40) = 6;
      *(undefined4 *)(ar4 + 4) = 6;
      *(undefined4 *)(ar4 + 0xc) = 0;
      a5 = (int *)0x2bb;
      FUN_8c02f298(ar4,699,a6,ar7);
    }
  }
  iVar2 = (**(code **)(*(int *)(*ar6 + 8) + 0xb8))(*ar6,a5,a6,ar7);
  if ((iVar2 == 1) && (*(int *)(ar4 + 4) != 1)) {
    iVar2 = get_field_6c_02f46c(*ar6,a5,a6,ar7);
    if (iVar2 == 0) {
      iVar2 = get_field_70_05f490(*ar6,a5,a6,ar7);
      if (iVar2 != 0) goto LAB_8c0661e8;
      a6 = (int *)0x1b;
      FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7);
      *(undefined4 *)(ar4 + 0x38) = 2;
      *(undefined4 *)(ar4 + 4) = 1;
      *(undefined4 *)(ar4 + 0xc) = 0;
      *(undefined4 *)(ar4 + 8) = 99;
      a5 = (int *)0xc7;
      FUN_8c02f298(ar4,199,a6,ar7);
    }
    else {
LAB_8c0661e8:
      if (*(int *)(ar4 + 4) != 0xb) {
        *(undefined4 *)(ar4 + 0x38) = 2;
        *(undefined4 *)(ar4 + 4) = 0xb;
        *(undefined4 *)(ar4 + 8) = 99;
        *(undefined4 *)(ar4 + 0x40) = 0xe;
        a5 = (int *)0x4af;
        FUN_8c02f298(ar4,0x4af,a6,ar7);
        iVar2 = get_field_c8_061174(ar6[3],a5,a6,ar7);
        if ((iVar2 == 0) || (*(int *)(ar4 + 900) != -1)) {
          ar7 = s_STATUS_SUCKED_8c136e43;
          a6 = (int *)0x0;
          a5 = (int *)0x19;
          FUN_8c0306d4(ar4 + 0x9c,0x19,0,s_STATUS_SUCKED_8c136e43);
        }
        if (*(int *)(ar4 + 0x6c) != 0) {
          (**(code **)(*(int *)(*(int *)(ar4 + 0x6c) + 8) + 0x78))(*(int *)(ar4 + 0x6c),a5,a6,ar7);
          *(undefined4 *)(ar4 + 0x6c) = 0;
        }
      }
    }
    if ((*(char *)(ar4 + 0x878) == '\x01') && (*(int *)(ar4 + 4) == 0)) {
      *(undefined1 *)(ar4 + 0x878) = 0;
    }
  }
  uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
  if ((short)uVar1 != 1) {
    uVar1 = FUN_8c02bef8(ar6[1],a5,a6,ar7);
    in_stack_ffffffbc = CONCAT22((short)uVar1,(short)in_stack_ffffffbc);
    if ((short)uVar1 != 2) goto LAB_8c0662e6;
  }
  iVar2 = get_field_c_06645c(ar6[3],a5,a6,ar7);
  if (((iVar2 == 1) && (*(char *)(ar4 + 0x878) != '\x01')) && (*(int *)(ar4 + 4) != 0xd)) {
    *(undefined1 *)(ar4 + 0x878) = 1;
    FUN_8c02f298(ar4,0x2b9,a6,ar7);
    a5 = (int *)0x0;
    FUN_8c066454(ar6[3],0,a6,ar7,in_stack_ffffffbc);
    *(undefined4 *)(ar4 + 8) = 0x5f;
    *(undefined4 *)(ar4 + 0xc) = 0;
    *(undefined4 *)(ar4 + 4) = 6;
    *(undefined4 *)(ar4 + 0x38) = 2;
  }
LAB_8c0662e6:
  if (*(int *)(ar4 + 0x6c) == 0) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if ((iVar2 == 6) && (*(int *)(ar4 + 0x40) == 0)) {
      a5 = (int *)0xf;
      iVar2 = (**(code **)(*ar5 + 0x11c))(ar5,0xf,a6,ar7);
      if ((0 < iVar2) && ((*(int *)(ar4 + 4) != 0xd && (*(int *)(ar4 + 4) != 6)))) {
        a5 = (int *)0x2b9;
        FUN_8c02f298(ar4,0x2b9,a6,ar7);
        *(undefined4 *)(ar4 + 8) = 0x5f;
        *(undefined4 *)(ar4 + 0xc) = 0;
        *(undefined4 *)(ar4 + 4) = 6;
        *(undefined4 *)(ar4 + 0x38) = 2;
      }
    }
  }
  iVar2 = get_field_c4_066448(ar6[3],a5,a6,ar7);
  if (((iVar2 == 0) && (iVar2 = *(int *)(ar4 + 0x40), iVar2 == 0)) &&
     (iVar2 = *(int *)(ar4 + 900), iVar2 == -1)) {
    iVar2 = get_field_13c_028d9c(ar6[1],a5,a6,ar7);
    if (iVar2 == 7) {
      uVar1 = 10;
      iVar3 = (**(code **)(*ar5 + 0x11c))(ar5,10,a6,ar7);
      iVar2 = 1;
      if (0 < iVar3) {
        uVar1 = FUN_8c03584c(ar6[3],uVar1,a6,ar7);
        iVar2 = (int)(char)uVar1;
        if (iVar2 == 2) {
          ar7_00 = s_REACTION_FEED_FULL_8c136e51;
          uVar1 = 0;
          FUN_8c0306d4(ar4 + 0x9c,0x2c,0,s_REACTION_FEED_FULL_8c136e51);
          iVar2 = FUN_8c06643c(ar6[3],1,uVar1,ar7_00);
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl _s_STATUS_SUCKED_0660da\n.set _s_STATUS_SUCKED_0660da, _s_STATUS_SUCKED_0660da_def\n");
//@unit 8c06643c
#include "../decls.h"
int FUN_8c06643c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0xc4;
  *(undefined4 *)(0xc4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c06643c\n.set _FUN_8c06643c, _FUN_8c06643c_def\n");
//@unit 8c066448
#include "../decls.h"
undefined4 get_field_c4_066448_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0xc4 + ar4);
}

__asm__(".globl _get_field_c4_066448\n.set _get_field_c4_066448, _get_field_c4_066448_def\n");
//@unit 8c066454
#include "../decls.h"
undefined4 FUN_8c066454_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  *(undefined4 *)(ar4 + 0xc) = ar5;
  return in_r0;
}

__asm__(".globl _FUN_8c066454\n.set _FUN_8c066454, _FUN_8c066454_def\n");
//@unit 8c06645c
#include "../decls.h"
undefined4 get_field_c_06645c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 0xc);
}

__asm__(".globl _get_field_c_06645c\n.set _get_field_c_06645c, _get_field_c_06645c_def\n");
//@unit 8c066464
#include "../decls.h"
int s_STATUS_LASTONE_066468_def(int ar4,int *ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int ar5_00;
  undefined4 ar5_01;
  
  iVar3 = ar6;
  iVar1 = get_field_13c_028d9c(*(undefined4 *)(ar6 + 4),ar5,ar6,ar7);
  if (iVar1 == 7) {
    iVar1 = (**(code **)(0x11c + *ar5))(ar5,5,iVar3,ar7);
    if (iVar1 == 1) {
      ar5_00 = ar6;
      iVar1 = FUN_8c02fcc4(ar4,ar6,iVar3,ar7);
      if (iVar1 == 1) {
        iVar1 = (*(code *)(&get_field_40_03598c))
                          (*(undefined4 *)(ar6 + 0xc),ar5_00,iVar3,ar7);
        if (iVar1 == 0) {
          iVar1 = (*(code *)(&FUN_8c0637d0))
                            (*(undefined4 *)(0x7cc + *(int *)(ar6 + 0x18)),ar5_00,iVar3,ar7);
          if (((iVar1 == 0) && (iVar1 = *(int *)(0x384 + ar4), iVar1 == -1)) &&
             (iVar1 = 3, *(char *)(0x98 + ar4) < '\x04')) {
            uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5_00,iVar3,ar7);
            ar5_01 = 0x43;
            iVar1 = (*(code *)(&libgcc_divide_helper_01031c))
                              (uVar2 & 0xffff,0x43,iVar3,ar7);
            if (iVar1 == 2) {
              uVar2 = FUN_8c02602c(*(undefined4 *)(ar6 + 0x18),ar5_01,iVar3,ar7);
              iVar3 = (*(code *)(&libgcc_divide_helper_0101e4))
                                (uVar2 & 0xffff,0x3c,iVar3,ar7);
              iVar1 = 2;
              if ((2 < iVar3) && (iVar1 = *(int *)(0x868 + ar4), iVar1 == 0)) {
                *(undefined4 *)(0x868 + ar4) = 1;
                iVar1 = (*(code *)(&FUN_8c0303b8))
                                  (ar4 + 0x9c,0x16,0,
                                   (&DATA_8c136988) + 0x4dc,
                                   (&DATA_8c136988) + 0x37);
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

__asm__(".globl _s_STATUS_LASTONE_066468\n.set _s_STATUS_LASTONE_066468, _s_STATUS_LASTONE_066468_def\n");
//@unit 8c0665a0
#include "../decls.h"
undefined4 * FUN_8c0665a0_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_8c02c518(*(undefined4 *)(ar5 + 4),ar5,ar6,ar7);
  if ((iVar1 == 0) || (iVar1 != 1)) {
    if (*(int *)(ar4 + 4) == 2) {
      puVar2 = (undefined4 *)get_field_8_066620(ar4,ar5,ar6,ar7);
    }
    else {
      get_field_8_066620(ar4,ar5,ar6,ar7);
      puVar2 = &DAT_8c06661c;
    }
  }
  else {
    puVar2 = (undefined4 *)&DAT_8c066614;
  }
  return puVar2;
}

__asm__(".globl _FUN_8c0665a0\n.set _FUN_8c0665a0, _FUN_8c0665a0_def\n");
//@unit 8c066620
#include "../decls.h"
undefined4 get_field_8_066620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(ar4 + 8);
}

__asm__(".globl _get_field_8_066620\n.set _get_field_8_066620, _get_field_8_066620_def\n");
//@unit 8c066628
#include "../decls.h"
undefined4 FUN_8c066628_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  undefined1 auStack_28 [16];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  cVar2 = '\0';
  Vec3_ctor_zero(&uStack_18,ar5,ar6,ar7);
  a7 = auStack_44;
  a6 = auStack_40;
  a5 = auStack_3c;
  (**(code **)(*ar5 + 0x120))(ar5,a5,a6,a7);
  uVar1 = get_field_4_05eed8(ar4,a5,a6,a7);
  switch(uVar1) {
  case 6:
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7,auStack_38);
      uVar1 = Vec3_assign(&uStack_18,auStack_38,a6,a7);
      uVar1 = Vec3_assign(ar4 + 0x70,uVar1,a6,a7);
      Vec3_assign(ar4 + 0x28,uVar1,a6,a7);
      Vec3_dtor(auStack_38,0xffffffff,a6,a7);
      if (cVar2 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_18;
        *(undefined4 *)(ar4 + 0x70) = uStack_18;
        *(undefined4 *)(ar4 + 0x2c) = uStack_14;
        *(undefined4 *)(ar4 + 0x74) = uStack_14;
        *(undefined4 *)(ar4 + 0x30) = uStack_10;
        *(undefined4 *)(ar4 + 0x78) = uStack_10;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
        *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
      }
    }
    break;
  case 0xd:
    if (*(int *)(ar4 + 0x6c) != 0) {
      FUN_8c02f670(*(undefined4 *)(ar4 + 0x6c),a5,a6,a7,auStack_28);
      Vec3_assign(&uStack_18,auStack_28,a6,a7);
      Vec3_dtor(auStack_28,0xffffffff,a6,a7);
      if (cVar2 == '\0') {
        *(undefined4 *)(ar4 + 0x28) = uStack_18;
        *(undefined4 *)(ar4 + 0x70) = uStack_18;
        *(undefined4 *)(ar4 + 0x2c) = uStack_14;
        *(undefined4 *)(ar4 + 0x74) = uStack_14;
        *(undefined4 *)(ar4 + 0x30) = uStack_10;
        *(undefined4 *)(ar4 + 0x78) = uStack_10;
      }
      else {
        *(ulonglong *)(ar4 + 0x28) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x70) = CONCAT44(uStack_14,uStack_18);
        *(ulonglong *)(ar4 + 0x2c) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x74) = CONCAT44(uStack_10,uStack_14);
        *(ulonglong *)(ar4 + 0x30) = CONCAT44(uStack_c,uStack_10);
        *(ulonglong *)(ar4 + 0x78) = CONCAT44(uStack_c,uStack_10);
      }
    }
  }
  uVar1 = Vec3_dtor(&uStack_18,0xffffffff,a6,a7);
  return uVar1;
}

__asm__(".globl _FUN_8c066628\n.set _FUN_8c066628, _FUN_8c066628_def\n");
//@unit 8c066834
#include "../decls.h"
undefined4 FUN_8c066834_def(int ar4,int *ar5,undefined4 *ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *ar6_00;
  undefined1 *ar6_01;
  undefined1 *ar7_00;
  undefined1 *a6;
  undefined1 *puVar5;
  uint in_fr1;
  double dVar6;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined1 auStack_184 [4];
  undefined1 auStack_180 [4];
  undefined1 auStack_17c [4];
  undefined1 auStack_178 [16];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [16];
  undefined1 auStack_128 [12];
  undefined1 auStack_11c [16];
  undefined1 auStack_10c [12];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [12];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [12];
  undefined1 auStack_88 [12];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [16];
  uint auStack_2c [5];
  
  cVar9 = '\0';
  cVar8 = '\0';
  uVar2 = 0;
  ar6_00 = ar6;
  Vec3_ctor_zero(auStack_2c,0,ar6,ar7);
  if (cVar9 == '\0') {
    in_fr15 = 50.0;
  }
  Vec3_ctor_xyz(auStack_3c,uVar2,ar6_00,ar7);
  pcVar3 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_4c,Vec3_ctor_xyz,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_5c,pcVar3,ar6_00,ar7);
  Vec3_ctor_xyz(auStack_6c,pcVar3,ar6_00,ar7);
  Vec3_ctor_zero(auStack_7c,Vec3_ctor_zero,ar6_00,ar7);
  if (cVar9 == '\0') {
    auStack_2c[0] = 0;
  }
  else {
    auStack_2c[3] = 0;
    auStack_2c[0] = in_fr1;
  }
  dVar6 = (double)(ulonglong)in_fr1;
  auStack_2c[2] = 0;
  auStack_2c[1] = 0;
  if (*(int *)(ar4 + 0x6c) == 0) {
    ar7_00 = auStack_184;
    ar6_01 = auStack_180;
    puVar5 = auStack_17c;
    FUN_8c03f414(*ar6,puVar5,ar6_01,ar7_00);
    Vec3_set_xyz(auStack_88,puVar5,ar6_01,ar7_00);
    iVar1 = FUN_8c02c518(ar6[1],puVar5,ar6_01,ar7_00);
    if (iVar1 == 4) {
      uVar2 = FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00);
      if ((short)uVar2 < 3) {
        vec3_copy_8c02b5fc(auStack_b0,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_3c,auStack_b0,ar6_01,ar7_00,auStack_c0);
        Vec3_assign(auStack_7c,auStack_c0,ar6_01,ar7_00);
        Vec3_dtor(auStack_c0,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_b0,0xffffffff,ar6_01,ar7_00);
      }
      else {
        vec3_copy_8c02b5fc(auStack_94,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_5c,auStack_94,ar6_01,ar7_00,auStack_a4);
        Vec3_assign(auStack_7c,auStack_a4,ar6_01,ar7_00);
        Vec3_dtor(auStack_a4,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_94,0xffffffff,ar6_01,ar7_00);
      }
      a6 = (undefined1 *)0x0;
      while( true ) {
        puVar5 = (undefined1 *)0xa;
        iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6_01,ar7_00);
        if (iVar1 <= (int)a6) break;
        uVar4 = 10;
        ar6_01 = a6;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
        iVar1 = get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00);
        if (iVar1 != 0) {
          uVar2 = 10;
          ar6_01 = a6;
          iVar1 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
          iVar1 = (**(code **)(*(int *)(iVar1 + 8) + 0x114))(iVar1,uVar2,ar6_01,ar7_00);
          if (iVar1 == 0x13) {
            FUN_8c02f670(*ar6,uVar2,ar6_01,ar7_00,auStack_d0);
            Vec3_add(auStack_d0,auStack_7c,ar6_01,ar7_00,auStack_e0);
            uVar4 = 10;
            ar6_01 = a6;
            uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
            FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00,auStack_f0);
            Vec3_sub(auStack_e0,auStack_f0,ar6_01,ar7_00,auStack_100);
            Vec3_assign(auStack_2c,auStack_100,ar6_01,ar7_00);
            Vec3_dtor(auStack_100,0xffffffff,ar6_01,ar7_00);
            Vec3_dtor(auStack_f0,0xffffffff,ar6_01,ar7_00);
            Vec3_dtor(auStack_e0,0xffffffff,ar6_01,ar7_00);
            uVar2 = 0xffffffff;
            Vec3_dtor(auStack_d0,0xffffffff,ar6_01,ar7_00);
            Vec3_length_sq(auStack_2c,uVar2,ar6_01,ar7_00);
            if (cVar8 == '\0') {
              bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
            }
            else {
              bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
            }
            if (bVar7) {
              uVar2 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7_00);
              object_dtor_delete(auStack_88,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_7c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_6c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_5c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_4c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_3c,0xffffffff,a6,ar7_00);
              Vec3_dtor(auStack_2c,0xffffffff,a6,ar7_00);
              return uVar2;
            }
          }
        }
        a6 = a6 + 1;
      }
    }
    uVar2 = get_field_a0_035724(ar6[6],puVar5,ar6_01,ar7_00);
    if ((char)uVar2 == '\x02') {
      uVar2 = FUN_8c02bef8(ar6[1],puVar5,ar6_01,ar7_00);
      if ((short)uVar2 < 3) {
        vec3_copy_8c02b5fc(auStack_128,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_4c,auStack_128,ar6_01,ar7_00,auStack_138);
        Vec3_assign(auStack_7c,auStack_138,ar6_01,ar7_00);
        Vec3_dtor(auStack_138,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_128,0xffffffff,ar6_01,ar7_00);
      }
      else {
        vec3_copy_8c02b5fc(auStack_10c,auStack_88,ar6_01,ar7_00);
        FUN_8c023484(auStack_6c,auStack_10c,ar6_01,ar7_00,auStack_11c);
        Vec3_assign(auStack_7c,auStack_11c,ar6_01,ar7_00);
        Vec3_dtor(auStack_11c,0xffffffff,ar6_01,ar7_00);
        object_dtor_delete(auStack_10c,0xffffffff,ar6_01,ar7_00);
      }
      for (puVar5 = (undefined1 *)0x0; iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,0xd,ar6_01,ar7_00),
          (int)puVar5 < iVar1; puVar5 = puVar5 + 1) {
        uVar4 = 0xd;
        ar6_01 = puVar5;
        uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
        iVar1 = get_field_6c_02f46c(uVar2,uVar4,ar6_01,ar7_00);
        if (iVar1 != 0) {
          FUN_8c02f670(*ar6,uVar4,ar6_01,ar7_00,auStack_148);
          Vec3_add(auStack_148,auStack_7c,ar6_01,ar7_00,auStack_158);
          uVar4 = 0xd;
          ar6_01 = puVar5;
          uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
          FUN_8c02f670(uVar2,uVar4,ar6_01,ar7_00,auStack_168);
          Vec3_sub(auStack_158,auStack_168,ar6_01,ar7_00,auStack_178);
          Vec3_assign(auStack_2c,auStack_178,ar6_01,ar7_00);
          Vec3_dtor(auStack_178,0xffffffff,ar6_01,ar7_00);
          Vec3_dtor(auStack_168,0xffffffff,ar6_01,ar7_00);
          Vec3_dtor(auStack_158,0xffffffff,ar6_01,ar7_00);
          uVar2 = 0xffffffff;
          Vec3_dtor(auStack_148,0xffffffff,ar6_01,ar7_00);
          Vec3_length_sq(auStack_2c,uVar2,ar6_01,ar7_00);
          if (cVar8 == '\0') {
            bVar7 = (float)((ulonglong)dVar6 >> 0x20) < in_fr15;
          }
          else {
            bVar7 = dVar6 < (double)CONCAT44(in_fr14,in_fr15);
          }
          if (bVar7) {
            uVar2 = (**(code **)(*ar5 + 0x100))(ar5,0xd,puVar5,ar7_00);
            object_dtor_delete(auStack_88,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_7c,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_6c,0xffffffff,puVar5,ar7_00);
            Vec3_dtor(auStack_5c,0xffffffff,puVar5,ar7_00);
            pcVar3 = Vec3_dtor;
            Vec3_dtor(auStack_4c,0xffffffff,puVar5,Vec3_dtor);
            uVar4 = 0xffffffff;
            Vec3_dtor(auStack_3c,0xffffffff,0xffffffff,pcVar3);
            Vec3_dtor(auStack_2c,0xffffffff,uVar4,pcVar3);
            return uVar2;
          }
        }
      }
    }
    object_dtor_delete(auStack_88,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_7c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_6c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_01,ar7_00);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_01,ar7_00);
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(ar4 + 0x6c);
    Vec3_dtor(auStack_7c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_6c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_5c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_4c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_3c,0xffffffff,ar6_00,ar7);
    Vec3_dtor(auStack_2c,0xffffffff,ar6_00,ar7);
  }
  return uVar2;
}

__asm__(".globl _FUN_8c066834\n.set _FUN_8c066834, _FUN_8c066834_def\n");
//@unit 8c0670f0
#include "../decls.h"
uint Class_12a078_m6_0670f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = FUN_8c0fa2d8(0x8c35468c,ar5,ar6,ar7);
  return (uint)(iVar1 == 0);
}

__asm__(".globl _Class_12a078_m6_0670f0\n.set _Class_12a078_m6_0670f0, _Class_12a078_m6_0670f0_def\n");
//@unit 8c06711c
#include "../decls.h"
undefined4 FUN_8c06711c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0x87c + ar4) == 1) && (*(int *)(0x880 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl _FUN_8c06711c\n.set _FUN_8c06711c, _FUN_8c06711c_def\n");
//@unit 8c067140
#include "../decls.h"
undefined4 get_field_150_067140_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x150 + ar4);
}

__asm__(".globl _get_field_150_067140\n.set _get_field_150_067140, _get_field_150_067140_def\n");
//@unit 8c06714c
#include "../decls.h"
int FUN_8c06714c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x150;
  *(undefined4 *)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c06714c\n.set _FUN_8c06714c, _FUN_8c06714c_def\n");
//@unit 8c067158
#include "../decls.h"
int Class_12a078_m7_067158_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(0x868 + ar4) = *(undefined4 *)(ar5 + 4);
  *(undefined1 *)(0x98 + ar4) = *ar5;
  FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  iVar1 = 0x99;
  *(undefined1 *)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl _Class_12a078_m7_067158\n.set _Class_12a078_m7_067158, _Class_12a078_m7_067158_def\n");
//@unit 8c0671a8
#include "../decls.h"
undefined4 Class_12a078_m8_0671a8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar5 + 4) = *(undefined4 *)(0x868 + ar4);
  *ar5 = *(undefined1 *)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(0x99 + ar4);
  uVar1 = FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7);
  return uVar1;
}

__asm__(".globl _Class_12a078_m8_0671a8\n.set _Class_12a078_m8_0671a8, _Class_12a078_m8_0671a8_def\n");
//@unit 8c0671f4
#include "../decls.h"
int Class_12a078_m5_0671f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(int *)(0x384 + ar4);
  if (iVar1 != -1) {
    FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7);
    ar5_00 = 3;
    FUN_8c030870(ar4 + 0x9c,3,ar6,ar7);
    *(undefined1 *)(0x80 + ar4) = 1;
    *(undefined4 *)(0x384 + ar4) = 0xffffffff;
    *(undefined4 *)(0xfc + ar4) = 0;
    s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7);
    if ((*(int *)(ar4 + 0x40) == 0xb) || (iVar1 = *(int *)(ar4 + 0x40), iVar1 == 0xc)) {
      *(undefined4 *)(ar4 + 4) = 0;
      *(undefined4 *)(ar4 + 8) = 0x14;
      *(undefined4 *)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(undefined4 *)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl _Class_12a078_m5_0671f4\n.set _Class_12a078_m5_0671f4, _Class_12a078_m5_0671f4_def\n");
//@unit 8c067284
#include "../decls.h"
undefined * Class_12a078_m4_067284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)0x4;
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar1 = (&switchdata_8c0672a4_8c0672a8)[iVar2];
                    
    switch(iVar2) {
    case 1:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1d,0x1b,ar7);
      break;
    case 2:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1c,0x1b,ar7);
      break;
    case 3:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1e,0x1b,ar7);
      break;
    case 4:
      puVar1 = (undefined *)FUN_8c0b9ed4(ar5,0x1f,0x1b,ar7);
    }
  }
  return puVar1;
}

__asm__(".globl _Class_12a078_m4_067284\n.set _Class_12a078_m4_067284, _Class_12a078_m4_067284_def\n");
//@unit 8c067308
#include "../decls.h"
undefined4 get_field_100_067308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x100 + ar4);
}

__asm__(".globl _get_field_100_067308\n.set _get_field_100_067308, _get_field_100_067308_def\n");
//@unit 8c067314
#include "../decls.h"
undefined4 FUN_8c067314_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125db8,ar5,ar6,ar7);
  uVar3 = 0x8c280480;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280480,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125dc8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c28048c;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c28048c,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125dd8,pcVar2,uVar3,ar7);
  uVar3 = 0x8c280498;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c280498,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125de8,pcVar2,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c2804a4,ar7);
  if (cVar4 == '\0') {
    _DAT_8c125df8 = CONCAT44(_UNK_8c125dfc,0x800000);
                    
  }
  else {
    _DAT_8c125df8 = 0xffffffff00800000;
  }
  return 0x8c125864;
}

__asm__(".globl _FUN_8c067314\n.set _FUN_8c067314, _FUN_8c067314_def\n");
//@unit 8c0673cc
#include "../decls.h"
undefined4 * FUN_8c0673cc_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl _FUN_8c0673cc\n.set _FUN_8c0673cc, _FUN_8c0673cc_def\n");
//@unit 8c0673dc
#include "../decls.h"
int free_if_nonnull_wrap_0673dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_0673dc\n.set _free_if_nonnull_wrap_0673dc, _free_if_nonnull_wrap_0673dc_def\n");
//@unit 8c06740c
#include "../decls.h"
int FUN_8c06740c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0;
  ar5_00 = 0xe;
  FUN_8c0f4040(ar4,0xe,0,0,ar5);
  *(undefined **)(ar4 + 8) = (&DATA_8c12a0c4);
  FUN_8c016fcc(ar4 + 0x170,ar5_00,ar6_00,ar7_00);
  FUN_8c015ab8(ar4 + 0x204,ar5_00,ar6_00,ar7_00);
  FUN_8c015224(ar4 + 0x208,ar5_00,ar6_00,ar7_00);
  Vec3_ctor_zero(ar4 + 0x268,ar5_00,ar6_00,ar7_00);
  Vec3_set_zero(ar4 + 0x278,ar5_00,ar6_00,ar7_00);
  FUN_8c023dac(ar4 + 0x284,ar5_00,ar6_00,ar7_00);
  s_herb3_pvm_067598(ar4,ar5_00,ar6_00,ar7_00);
  return ar4;
}

__asm__(".globl _FUN_8c06740c\n.set _FUN_8c06740c, _FUN_8c06740c_def\n");
//@unit 8c0674c8
#include "../decls.h"
int Class_12a0c4_m0_0674c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(undefined **)(ar4 + 8) = &DAT_8c12a0c4;
    free_if_nonnull_wrap_016ac4(ar4 + 0x284,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x278,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x268,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_0153e4(ar4 + 0x208,0xffffffff,ar6,ar7);
    free_if_nonnull_wrap_016bfc(ar4 + 0x204,0xffffffff,ar6,ar7);
    Class_129938_m0_017084(ar4 + 0x170,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a0c4_m0_0674c8\n.set _Class_12a0c4_m0_0674c8, _Class_12a0c4_m0_0674c8_def\n");
//@unit 8c067594
#include "../decls.h"
undefined4 s_herb3_pvm_067598_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fr1;
  ulonglong uVar3;
  char cVar4;
  
  cVar4 = '\0';
  uVar1 = rand(ar4,ar5,ar6,ar7);
  uVar1 = libgcc_divide_helper_01031c(uVar1,4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x210) = uVar1;
  *(undefined4 *)(ar4 + 0x214) = 0x1ff;
  *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x218) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x220) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)in_fr1;
  }
  for (iVar2 = 0; iVar2 < 9; iVar2 = iVar2 + 1) {
    *(undefined1 *)(ar4 + iVar2 + 0x248) = 0;
  }
  *(undefined4 *)(ar4 + 0x230) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x234) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x234) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x238) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x238) = (ulonglong)in_fr1;
  }
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x23c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x23c) = (ulonglong)in_fr1;
  }
  *(undefined4 *)(ar4 + 0x290) = 0;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x254) = DAT_8c136f2c;
    *(undefined4 *)(ar4 + 600) = DAT_8c136f30;
    *(undefined4 *)(ar4 + 0x25c) = DAT_8c136f34;
    uVar3 = CONCAT44(DAT_8c136f38,in_fr1);
    *(undefined4 *)(ar4 + 0x260) = DAT_8c136f38;
  }
  else {
    *(undefined8 *)(ar4 + 0x254) = CONCAT44(DAT_8c136f30,DAT_8c136f2c);
    *(ulonglong *)(ar4 + 600) = CONCAT44(DAT_8c136f34,DAT_8c136f30);
    *(ulonglong *)(ar4 + 0x25c) = CONCAT44(DAT_8c136f38,DAT_8c136f34);
    uVar3 = CONCAT44((undefined4)DAT_8c136f3c,DAT_8c136f38);
    *(ulonglong *)(ar4 + 0x260) = uVar3;
  }
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  *(int *)(ar4 + 0x228) = iVar2 * 3 + 2;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x22c) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x22c) = uVar3 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x224) = 0x8c2804f0;
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  _DAT_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar2];
  iVar2 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
  _DAT_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar2];
  _DAT_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
  _DAT_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
  _DAT_8c280634 = PTR_s_herb3_pvm_8c136f78;
  _DAT_8c280648 = PTR_s_herb5_pvm_8c136f7c;
  _DAT_8c280638 = 0x12;
  _DAT_8c28064c = 0x16;
  _DAT_8c280644 = 0x8c280738;
  _DAT_8c280658 = 0x8c280810;
  uVar1 = FUN_8c0f532c(ar4,*(undefined4 *)(*(int *)(ar4 + 0x224) + 0xb4),ar4 + 0x170,ar7);
  return uVar1;
}

__asm__(".globl _s_herb3_pvm_067598\n.set _s_herb3_pvm_067598, _s_herb3_pvm_067598_def\n");
//@unit 8c0677dc
#include "../decls.h"
undefined4 Class_12a0c4_m2_0677dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  double dVar2;
  undefined8 in_xd0;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  if (*(int *)(ar4 + 0x220) == 0) {
    FUN_8c0679cc(ar4,ar5,ar7,ar7);
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),(undefined4)DAT_8c136f3c);
    }
    else {
      in_xd0 = CONCAT44((*(uint*)((uchar*)&DAT_8c136f3c+4)),(undefined4)DAT_8c136f3c);
      dVar2 = *(double *)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x254) = fVar1;
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),(*(uint*)((uchar*)&DAT_8c136f3c+4)));
    }
    else {
      *(undefined8 *)(ar4 + 0x254) = in_xd0;
      in_xd0 = CONCAT44(_DAT_8c136f44,(*(uint*)((uchar*)&DAT_8c136f3c+4)));
      dVar2 = *(double *)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 600) = fVar1;
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),_DAT_8c136f44);
    }
    else {
      *(undefined8 *)(ar4 + 600) = in_xd0;
      in_xd0 = CONCAT44(_DAT_8c136f48,_DAT_8c136f44);
      dVar2 = *(double *)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x25c) = fVar1;
      dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),_DAT_8c136f48);
    }
    else {
      *(undefined8 *)(ar4 + 0x25c) = in_xd0;
      in_xd0 = CONCAT44(PTR_s_GRAPHICS_HERBLINE_8c136f4c,_DAT_8c136f48);
      dVar2 = *(double *)(ar4 + 0x244);
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x260) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0x260) = in_xd0;
    }
  }
  else if (*(int *)(ar4 + 0x220) == 1) {
    if (*(int *)(ar4 + 0x210) < 4) {
      FUN_8c068e64(ar4,ar5,ar7,ar7);
    }
    else {
      FUN_8c068a4c(ar4,ar5,ar7,ar7);
    }
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(0xc3160000,*(undefined4 *)(ar4 + 0x244));
    }
    else {
      in_xd0 = *(undefined8 *)(ar4 + 0x244);
      dVar2 = 1.4411529281182106e+17;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 600) = fVar1;
      dVar2 = (double)CONCAT44(0xc3020000,*(undefined4 *)(ar4 + 0x244));
    }
    else {
      *(undefined8 *)(ar4 + 600) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x244);
      dVar2 = -52776583693312.0;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x25c) = fVar1;
      dVar2 = (double)CONCAT44(0xc2c80000,*(undefined4 *)(ar4 + 0x244));
    }
    else {
      *(undefined8 *)(ar4 + 0x25c) = in_xd0;
      in_xd0 = *(undefined8 *)(ar4 + 0x244);
      dVar2 = -4.193431188391697e-250;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) * (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 * dVar2,0);
    }
    if (cVar4 == '\0') {
      dVar2 = (double)CONCAT44(0x43800000,fVar1);
    }
    else {
      dVar2 = -633318839156736.0;
    }
    if (cVar3 == '\0') {
      fVar1 = SUB84(dVar2,0) / (float)((ulonglong)dVar2 >> 0x20);
    }
    else {
      fVar1 = SUB84(dVar2 / dVar2,0);
    }
    if (cVar4 == '\0') {
      *(float *)(ar4 + 0x260) = fVar1;
    }
    else {
      *(undefined8 *)(ar4 + 0x260) = in_xd0;
    }
  }
  _DAT_8c2804e0 = 1;
  return 1;
}

__asm__(".globl _Class_12a0c4_m2_0677dc\n.set _Class_12a0c4_m2_0677dc, _Class_12a0c4_m2_0677dc_def\n");
//@unit 8c067934
#include "../decls.h"
undefined4 Class_12a0c4_m3_067934_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  (**(code **)(*(int *)(ar4 + 8) + 0x10))(ar4,ar5,ar6,ar7);
  *(undefined4 *)0x8c2804e0 = 0;
  return 1;
}

__asm__(".globl _Class_12a0c4_m3_067934\n.set _Class_12a0c4_m3_067934, _Class_12a0c4_m3_067934_def\n");
//@unit 8c067964
#include "../decls.h"
undefined4 FUN_8c067964_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(ar4 + 8) + 0x1c))(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c067964\n.set _FUN_8c067964, _FUN_8c067964_def\n");
//@unit 8c06797c
#include "../decls.h"
undefined4 FUN_8c06797c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl _FUN_8c06797c\n.set _FUN_8c06797c, _FUN_8c06797c_def\n");
//@unit 8c0679cc
#include "../decls.h"
undefined4 FUN_8c0679cc_def(undefined **ar4,undefined **ar5,undefined **ar6,undefined *ar7)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *ar5_00;
  code *pcVar8;
  undefined **ppuVar9;
  uint in_fr1;
  undefined4 uVar10;
  float fVar11;
  ulonglong uVar12;
  float fVar14;
  double dVar13;
  undefined8 in_xd0;
  char cVar15;
  char cVar16;
  undefined1 auStack_3724 [1996];
  undefined1 auStack_2f58 [16];
  undefined1 auStack_2f48 [16];
  undefined1 auStack_2f38 [12];
  undefined1 auStack_2f2c [16];
  undefined1 auStack_2f1c [16];
  undefined1 auStack_2f0c [12];
  undefined1 auStack_2f00 [1996];
  undefined1 auStack_2734 [1996];
  undefined1 auStack_1f68 [1996];
  undefined1 auStack_179c [1996];
  undefined1 auStack_fd0 [1996];
  undefined1 auStack_804 [1996];
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [20];
  
  cVar16 = '\0';
  cVar15 = '\0';
  ppuVar7 = ar5;
  ppuVar9 = ar6;
  Vec3_ctor_zero(auStack_2c,ar5,ar6,ar7);
  Vec3_set_zero(auStack_38,ppuVar7,ppuVar9,ar7);
  if (0 < (int)ar4[0x8c]) {
    pcVar8 = FUN_8c06add8;
    ppuVar7 = ar6;
    FUN_8c06add8(ar4,ar6,FUN_8c06add8,ar7);
    ppuVar9 = (undefined **)pcVar8;
  }
  puVar6 = ar4[0x8c];
  if (((int)puVar6 < 8) && (-1 < (int)puVar6)) {
    ppuVar9 = &switchdata_8c067a30_8c067a50;
                    
    switch((uint)puVar6) {
    case 0x0:
      ar5_00 = &DAT_8c2809a8;
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      ppuVar7 = ar6;
      iVar4 = get_field_24_026024(ar6,&DAT_8c2809a8,&switchdata_8c067a30_8c067a50,ar7);
      if (iVar4 == 0) {
        ar4[0x86] = (undefined *)0x0;
        uVar5 = rand(rand,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,7,ppuVar9,ar7);
        iVar4 = 7;
        while( true ) {
          ar7 = (undefined *)((int)puVar6 * 8);
          ppuVar9 = (undefined **)0x8c2809b8;
          if ((*(int *)(ar7 + -0x73d7f648) != 1) || (iVar4 < 1)) break;
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (6 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f648) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f544);
        Vec3_assign(ar4 + 0xc,ar5_00,0x8c2809b8,ar7);
      }
      else if (iVar4 == 1) {
        ar4[0x86] = (undefined *)0x1;
        uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7);
        iVar4 = 6;
        while ((*(int *)((int)puVar6 * 8 + -0x73d7f604) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f604) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f48c);
        Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7);
      }
      else if (iVar4 == 2) {
        ar4[0x86] = (undefined *)0x2;
        uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
        puVar6 = (undefined *)libgcc_divide_helper_01031c(uVar5,6,ppuVar9,ar7);
        iVar4 = 6;
        while ((*(int *)((int)puVar6 * 8 + -0x73d7f5c8) == 1 && (0 < iVar4))) {
          puVar6 = puVar6 + 1;
          iVar4 = iVar4 + -1;
          if (5 < (int)puVar6) {
            puVar6 = (undefined *)0x0;
          }
        }
        if (0 < iVar4) {
          *(undefined4 *)((int)puVar6 * 8 + -0x73d7f5c8) = 1;
          ar4[0x87] = puVar6;
        }
        ar5_00 = (undefined1 *)((int)puVar6 * 0x10 + -0x73d7f3e4);
        Vec3_assign(ar4 + 0xc,ar5_00,ppuVar9,ar7);
      }
      ppuVar7 = ar4 + 0x14;
      uVar12 = (ulonglong)in_fr1;
      if (cVar16 == '\0') {
        *ppuVar7 = (undefined *)0x0;
      }
      else {
        *(ulonglong *)ppuVar7 = uVar12;
      }
      uVar5 = rand(ppuVar7,ar5_00,ppuVar9,ar7);
      uVar10 = (undefined4)uVar12;
      iVar4 = libgcc_divide_helper_01031c(uVar5,0x168,ppuVar9,ar7);
      if (cVar15 == '\0') {
        dVar13 = (double)CONCAT44((float)iVar4,uVar10);
      }
      else {
        dVar13 = (double)iVar4;
      }
      if (cVar16 == '\0') {
        ar4[0x15] = (undefined *)((ulonglong)dVar13 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x15) = dVar13;
      }
      uVar5 = SUB84(dVar13,0);
      if (cVar16 == '\0') {
        ar4[0x16] = (undefined *)0x0;
      }
      else {
        *(ulonglong *)(ar4 + 0x16) = (ulonglong)dVar13 & 0xffffffff;
      }
      if (cVar16 == '\0') {
        ar4[0x17] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x17) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x18] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x18) = CONCAT44(0x3f800000,uVar5);
      }
      if (cVar16 == '\0') {
        ar4[0x19] = (undefined *)0x3f800000;
      }
      else {
        *(ulonglong *)(ar4 + 0x19) = CONCAT44(0x3f800000,uVar5);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
    case 0x1:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        FUN_8c068890(auStack_804,ar5,ppuVar9,ar7);
        FUN_8c06af5c(ar4,auStack_804,ppuVar9,ar7);
        FUN_8c068818(auStack_804,0xffffffff,ppuVar9,ar7);
        if (_DAT_8c2804e0 == (undefined *)0x1) {
          ar7 = (undefined *)0xe;
          ppuVar9 = (undefined **)0x1;
          (**(code **)(*ar6 + 0xd0))(ar6,ar4 + 0xc,1,0xe);
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = -1.8982214199917473e+78;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x2:
      iVar4 = get_field_24_026024(ar6,ppuVar7,&switchdata_8c067a30_8c067a50,ar7);
      if ((iVar4 == 0) || (iVar2 = get_field_24_026024(ar6,iVar4,ppuVar9,ar7), iVar2 == 2)) {
        iVar4 = get_field_24_026024(ar6,iVar4,ppuVar9,ar7);
        if (iVar4 == 0) {
          if ((_DAT_8c280998 < 4) && (-1 < (int)ar4[0x87])) {
            _DAT_8c280998 = _DAT_8c280998 + 1;
            _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
            *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f644) = ar4;
            ar4[0x84] = ar4[0x84] + 4;
            ar4[0x8c] = ar4[0x8c] + 1;
            ppuVar9 = ar4;
          }
          else {
            FUN_8c068890(auStack_fd0,ar5,ppuVar9,ar7);
            uVar5 = FUN_8c06afb0(ar4,auStack_fd0,ppuVar9,ar7);
            FUN_8c068818(auStack_fd0,0xffffffff,ppuVar9,ar7);
            if (0x383f < (ushort)uVar5) {
              if (-1 < (int)ar4[0x87]) {
                *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f648) = 0;
                *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f644) = 0;
              }
              ar4[0x8c] = (undefined *)0x7;
            }
          }
        }
        else if ((_DAT_8c2809a4 < 3) && (-1 < (int)ar4[0x87])) {
          _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
          _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
          *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f5c4) = ar4;
          ar4[0x84] = ar4[0x84] + 4;
          ar4[0x8c] = ar4[0x8c] + 1;
          ppuVar9 = ar4;
        }
        else {
          FUN_8c068890(auStack_179c,ar5,ppuVar9,ar7);
          uVar5 = FUN_8c06afb0(ar4,auStack_179c,ppuVar9,ar7);
          FUN_8c068818(auStack_179c,0xffffffff,ppuVar9,ar7);
          if (0x383f < (ushort)uVar5) {
            if (-1 < (int)ar4[0x87]) {
              ar7 = ar4[0x87];
              ppuVar9 = (undefined **)((int)ar7 * 8);
              ppuVar9[-0x1cf5fd72] = (undefined *)0x0;
              *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f5c4) = 0;
            }
            ar4[0x8c] = (undefined *)0x7;
          }
        }
      }
      else if ((_DAT_8c28099c + _DAT_8c2809a0 < 2) && (-1 < (int)ar4[0x87])) {
        uVar5 = rand(0x21c,2,ppuVar9,ar7);
        iVar4 = libgcc_divide_helper_01031c(uVar5,100,ppuVar9,ar7);
        if ((iVar4 < 0x32) && (1 < _DAT_8c2809a0)) {
          ar4[0x84] = ar4[0x84] + 4;
          _DAT_8c28099c = _DAT_8c28099c + 1;
        }
        else {
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
        _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
        ar4[0x8c] = ar4[0x8c] + 1;
        *(undefined ***)((int)ar4[0x87] * 8 + -0x73d7f600) = ar4;
      }
      else {
        FUN_8c068890(auStack_1f68,ar5,ppuVar9,ar7);
        uVar5 = FUN_8c06afb0(ar4,auStack_1f68,ppuVar9,ar7);
        FUN_8c068818(auStack_1f68,0xffffffff,ppuVar9,ar7);
        if (0x383f < (ushort)uVar5) {
          if (-1 < (int)ar4[0x87]) {
            *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f604) = 0;
            *(undefined4 *)((int)ar4[0x87] * 8 + -0x73d7f600) = 0;
          }
          ar4[0x8c] = (undefined *)0x7;
        }
      }
      break;
    case 0x3:
      FUN_8c068890(auStack_2734,ar5,&switchdata_8c067a30_8c067a50,ar7);
      uVar3 = FUN_8c06afb0(ar4,auStack_2734,ppuVar9,ar7);
      fVar11 = (float)(uVar3 & 0xffff);
      if (cVar16 == '\0') {
        fVar14 = 600.0;
      }
      else {
        fVar11 = 600.0;
        fVar14 = 3.08286e-43;
      }
      bVar1 = cVar15 != '\0';
      FUN_8c068818(auStack_2734,0xffffffff,ppuVar9,ar7);
      if (bVar1 || fVar14 <= fVar11) {
        FUN_8c068890(auStack_2f00,ar5,ppuVar9,ar7);
        FUN_8c06af5c(ar4,auStack_2f00,ppuVar9,ar7);
        ar7 = auStack_2f00;
        pcVar8 = FUN_8c068818;
        FUN_8c068818(ar7,0xffffffff,FUN_8c068818,ar7);
        ar4[0x88] = ar4[0x88] + 1;
        ar4[0x8c] = (undefined *)0x0;
        ppuVar7 = ar4;
        iVar4 = get_field_24_026024(ar6,ar4,pcVar8,ar7);
        if (iVar4 == 0) {
          uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
          puVar6 = ar4[0x87];
          iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
          if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(0x41200000,
                                      (float)(*(int *)(&DAT_8c136fec + (int)puVar6 * 4) + iVar4));
          }
          else {
            dVar13 = 227873.6567993164;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(ar4 + 0x90) = in_xd0;
          }
        }
        else if (iVar4 == 1) {
          uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
          iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
          if (cVar16 == '\0') {
            dVar13 = (double)CONCAT44(0x41200000,(float)(iVar4 + 6));
          }
          else {
            dVar13 = 3.4765896880999207;
          }
          if (cVar15 == '\0') {
            puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
          }
          else {
            puVar6 = SUB84(dVar13 / dVar13,0);
          }
          ppuVar9 = (undefined **)pcVar8;
          if (cVar16 == '\0') {
            ar4[0x90] = puVar6;
          }
          else {
            *(undefined8 *)(ar4 + 0x90) = in_xd0;
          }
        }
        else {
          ppuVar9 = (undefined **)pcVar8;
          if (iVar4 == 2) {
            uVar5 = rand(ar6,ppuVar7,pcVar8,ar7);
            iVar4 = libgcc_divide_helper_01031c(uVar5,3,pcVar8,ar7);
            if (cVar16 == '\0') {
              dVar13 = (double)CONCAT44(0x41200000,(float)(iVar4 + 10));
            }
            else {
              dVar13 = 7.937828837308101e+110;
            }
            if (cVar15 == '\0') {
              puVar6 = (undefined *)(uint)(SUB84(dVar13,0) / (float)((ulonglong)dVar13 >> 0x20));
            }
            else {
              puVar6 = SUB84(dVar13 / dVar13,0);
            }
            ppuVar9 = (undefined **)pcVar8;
            if (cVar16 == '\0') {
              ar4[0x90] = puVar6;
            }
            else {
              *(undefined8 *)(ar4 + 0x90) = in_xd0;
            }
          }
        }
      }
      break;
    case 0x4:
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(0x3dcccccd,ar4[0x8b]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x8b);
        dVar13 = 4.89807854859436e-311;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x8b] = puVar6;
      }
      else {
        *(undefined8 *)(ar4 + 0x8b) = in_xd0;
      }
      ppuVar7 = ar4;
      FUN_8c06abb8(ar4,ar4 + 0x8b,ar4,ar7);
      vec3_copy_8c023d8c(ar4 + 0x14,auStack_2f0c,ppuVar7,ar7);
      uVar5 = 0xffffffff;
      object_dtor_delete(auStack_2f0c,0xffffffff,ppuVar7,ar7);
      if (cVar16 == '\0') {
        ar4[0x15] = ar4[0x9f];
      }
      else {
        *(undefined8 *)(ar4 + 0x15) = *(undefined8 *)(ar4 + 0x9f);
      }
      FUN_8c06aa04(ar4,uVar5,ppuVar7,ar7);
      Vec3_scale(auStack_2f1c,ar4 + 0x18,ppuVar7,ar7,auStack_2f2c);
      Vec3_set_xyz(auStack_2f38,Vec3_set_xyz,ppuVar7,ar7);
      FUN_8c023484(auStack_2f2c,auStack_2f38,ppuVar7,ar7,auStack_2f48);
      Vec3_add(ar4 + 0x9a,auStack_2f48,ppuVar7,ar7,auStack_2f58);
      Vec3_assign(ar4 + 0xc,auStack_2f58,ppuVar7,ar7);
      Vec3_dtor(auStack_2f58,0xffffffff,ppuVar7,ar7);
      Vec3_dtor(auStack_2f48,0xffffffff,ppuVar7,ar7);
      object_dtor_delete(auStack_2f38,0xffffffff,ppuVar7,ar7);
      Vec3_dtor(auStack_2f2c,0xffffffff,ppuVar7,ar7);
      ppuVar9 = (undefined **)0xffffffff;
      Vec3_dtor(auStack_2f1c,0xffffffff,0xffffffff,ar7);
      if (cVar16 == '\0') {
        puVar6 = ar4[0x8b];
        fVar11 = 45.0;
      }
      else {
        puVar6 = (undefined *)0x42340000;
        fVar11 = 7.84727e-43;
      }
      if (cVar15 != '\0' || fVar11 <= (float)(uint)puVar6) {
        ar4[0x8c] = ar4[0x8c] + 1;
        ppuVar9 = (undefined **)0x230;
      }
      break;
    case 0x5:
      if (((uint)ar4[0x1d] & 0x20) == 0x20) {
        ar4[0x8c] = ar4[0x8c] + 1;
        FUN_8c068890(auStack_3724,ar5,&switchdata_8c067a30_8c067a50,ar7);
        FUN_8c06af5c(ar4,auStack_3724,ppuVar9,ar7);
        FUN_8c068818(auStack_3724,0xffffffff,ppuVar9,ar7);
        ar7 = _DAT_8c2804e0;
        if (_DAT_8c2804e0 == (undefined *)0x1) {
          ar7 = (undefined *)0xe;
          ppuVar9 = (undefined **)0x1;
          (**(code **)(*ar6 + 0xd0))(ar6,ar4 + 0xc,1,0xe);
        }
      }
      else if (((uint)ar4[0x1d] & 0x40) == 0x40) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x41000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.062009702363989e+233;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      else if (((uint)ar4[0x1d] & 0x10) == 0x10) {
        if (cVar16 == '\0') {
          dVar13 = (double)CONCAT44(0x40000000,ar4[0xd]);
        }
        else {
          in_xd0 = *(undefined8 *)(ar4 + 0xd);
          dVar13 = 5.633522802342751e+86;
        }
        if (cVar15 == '\0') {
          puVar6 = (undefined *)(uint)(SUB84(dVar13,0) - (float)((ulonglong)dVar13 >> 0x20));
        }
        else {
          puVar6 = SUB84(dVar13 - dVar13,0);
        }
        if (cVar16 == '\0') {
          ar4[0xd] = puVar6;
        }
        else {
          *(undefined8 *)(ar4 + 0xd) = in_xd0;
        }
      }
      break;
    case 0x7:
      if (cVar16 == '\0') {
        dVar13 = (double)CONCAT44(0x3a83126f,ar4[0x91]);
      }
      else {
        in_xd0 = *(undefined8 *)(ar4 + 0x91);
        dVar13 = -4.1966905022930605e-250;
      }
      if (cVar15 == '\0') {
        puVar6 = (undefined *)(uint)(SUB84(dVar13,0) + (float)((ulonglong)dVar13 >> 0x20));
      }
      else {
        puVar6 = SUB84(dVar13 + dVar13,0);
      }
      if (cVar16 == '\0') {
        ar4[0x91] = puVar6;
        puVar6 = ar4[0x91];
      }
      else {
        *(undefined8 *)(ar4 + 0x91) = in_xd0;
      }
      if (cVar15 == '\0' && 1.0 < (float)(uint)puVar6) {
        _DAT_8c2809a8 = _DAT_8c2809a8 + -1;
        FUN_8c0f4d84(ar4,ar4,&switchdata_8c067a30_8c067a50,ar7);
      }
    }
  }
  object_dtor_delete(auStack_38,0xffffffff,ppuVar9,ar7);
  uVar5 = Vec3_dtor(auStack_2c,0xffffffff,ppuVar9,ar7);
  return uVar5;
}

__asm__(".globl _FUN_8c0679cc\n.set _FUN_8c0679cc, _FUN_8c0679cc_def\n");
//@unit 8c068818
#include "../decls.h"
int FUN_8c068818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar5_00;
  undefined4 in_stack_fffffff4;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    free_if_nonnull_wrap_068860(ar4 + 0xac,0xffffffff,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _FUN_8c068818\n.set _FUN_8c068818, _FUN_8c068818_def\n");
//@unit 8c068860
#include "../decls.h"
int free_if_nonnull_wrap_068860_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_stack_fffffff4;
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    free_if_nonnull(ar4,ar5,ar6,ar7,CONCAT22((short)((uint)in_stack_fffffff4 >> 0x10),(short)ar5));
  }
  return ar4;
}

__asm__(".globl _free_if_nonnull_wrap_068860\n.set _free_if_nonnull_wrap_068860, _free_if_nonnull_wrap_068860_def\n");
//@unit 8c068890
#include "../decls.h"
undefined4 * FUN_8c068890_def(undefined4 *ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  undefined2 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar5;
  
  *ar4 = *ar5;
  uVar1 = ar5[2];
  ar4[1] = ar5[1];
  ar4[2] = uVar1;
  uVar1 = ar5[4];
  ar4[3] = ar5[3];
  ar4[4] = uVar1;
  uVar1 = ar5[6];
  ar4[5] = ar5[5];
  ar4[6] = uVar1;
  uVar1 = ar5[8];
  ar4[7] = ar5[7];
  ar4[8] = uVar1;
  ar4[9] = ar5[9];
  *(undefined2 *)(ar4 + 10) = *(undefined2 *)(ar5 + 10);
  puVar8 = ar4 + 0xb;
  puVar4 = ar5 + 0xb;
  iVar2 = 0xb;
  do {
    puVar5 = puVar4 + 1;
    *puVar8 = *puVar4;
    puVar4 = puVar4 + 2;
    puVar8[1] = *puVar5;
    puVar8 = puVar8 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)(0x84 + (int)ar4) = *(undefined4 *)(0x84 + (int)ar5);
  *(undefined4 *)(0x88 + (int)ar4) = *(undefined4 *)(0x88 + (int)ar5);
  puVar6 = (undefined2 *)((int)ar4 + 0x8c);
  puVar3 = (undefined2 *)((int)ar5 + 0x8c);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  puVar6 = (undefined2 *)((int)ar4 + 0x96);
  puVar3 = (undefined2 *)((int)ar5 + 0x96);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  *(undefined1 *)(0xa0 + (int)ar4) = *(undefined1 *)(0xa0 + (int)ar5);
  *(undefined1 *)(0xa1 + (int)ar4) = *(undefined1 *)(0xa1 + (int)ar5);
  *(undefined2 *)(0xa2 + (int)ar4) = *(undefined2 *)(0xa2 + (int)ar5);
  *(undefined2 *)(0xa4 + (int)ar4) = *(undefined2 *)(0xa4 + (int)ar5);
  *(undefined4 *)(0xa8 + (int)ar4) = *(undefined4 *)(0xa8 + (int)ar5);
  FUN_8c068a2c((int)ar4 + 0xac,(int)ar5 + 0xac,ar6,ar7);
  *(undefined4 *)(0xb8 + (int)ar4) = *(undefined4 *)(0xb8 + (int)ar5);
  *(undefined4 *)(0xbc + (int)ar4) = *(undefined4 *)(0xbc + (int)ar5);
  *(undefined4 *)(0xc0 + (int)ar4) = *(undefined4 *)(0xc0 + (int)ar5);
  *(undefined4 *)(0xc4 + (int)ar4) = *(undefined4 *)(0xc4 + (int)ar5);
  *(undefined4 *)(0xc8 + (int)ar4) = *(undefined4 *)(0xc8 + (int)ar5);
  puVar7 = (undefined1 *)((int)ar4 + 0xcc);
  puVar9 = (undefined1 *)((int)ar5 + 0xcc);
  iVar2 = 0x37f;
  do {
    puVar10 = puVar9 + 1;
    *puVar7 = *puVar9;
    puVar9 = puVar9 + 2;
    puVar7[1] = *puVar10;
    puVar7 = puVar7 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return ar4;
}

__asm__(".globl _FUN_8c068890\n.set _FUN_8c068890, _FUN_8c068890_def\n");
//@unit 8c068a2c
#include "../decls.h"
undefined2 * FUN_8c068a2c_def(undefined2 *ar4,undefined2 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  *(undefined1 *)(ar4 + 4) = *(undefined1 *)(ar5 + 4);
  *(undefined1 *)((int)ar4 + 9) = *(undefined1 *)((int)ar5 + 9);
  return ar4;
}

__asm__(".globl _FUN_8c068a2c\n.set _FUN_8c068a2c, _FUN_8c068a2c_def\n");
//@unit 8c068a4c
#include "../decls.h"
undefined4 FUN_8c068a4c_def(int ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 ar5_00;
  int *a6;
  float fVar4;
  double in_dr0;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined1 auStack_1798 [1996];
  undefined1 auStack_fcc [1996];
  undefined1 auStack_800 [1996];
  uint auStack_34 [4];
  uint auStack_24 [5];
  
  cVar11 = '\0';
  cVar10 = '\0';
  auStack_34[0] = DAT_8c1370e0;
  auStack_34[1] = DAT_8c1370e4;
  auStack_34[2] = DAT_8c1370e8;
  auStack_34[3] = DAT_8c1370ec;
  auStack_24[0] = DAT_8c1370f0;
  auStack_24[1] = DAT_8c1370f4;
  auStack_24[2] = DAT_8c1370f8;
  auStack_24[3] = DAT_8c1370fc;
  iVar1 = *(int *)(ar4 + 0x230);
  if (iVar1 == 0) {
    FUN_8c068890(auStack_800,ar5,ar6,ar7);
    uVar3 = SUB84(in_dr0,0);
    uVar2 = FUN_8c06afb0(ar4,auStack_800,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
      dVar5 = (double)CONCAT44(0x44610000,uVar3);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
      dVar5 = -9.834358688611842e-251;
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                                 (float)(uVar2 & 0xffff));
    }
    else {
      dVar6 = (double)(uVar2 & 0xffff);
      in_dr14 = (in_dr14 / dVar5) * dVar6;
    }
    uVar3 = SUB84(dVar6,0);
    FUN_8c068818(auStack_800,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x240);
    }
    if (cVar10 == '\0') {
      bVar9 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar9 = in_dr0 < in_dr14;
    }
    if (bVar9) {
      if (cVar11 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x240);
      }
      *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
      iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
      *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_34[iVar1];
    }
    if (cVar11 == '\0') {
      *(int *)(ar4 + 0x234) = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x234) = in_xd14;
    }
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return iVar1;
      }
      a6 = ar6;
      iVar1 = get_field_24_026024(ar6,ar5,ar6,ar7);
      if (iVar1 != 1) {
        return iVar1;
      }
      (**(code **)(*ar6 + 0x188))(ar6,ar5,a6,ar7);
      dVar5 = in_dr0;
      if (cVar11 == '\0') {
        in_dr0 = (double)((ulonglong)in_dr0 >> 0x20);
        dVar5 = in_xd0;
      }
      if (cVar10 == '\0' && 0.0 < SUB84(in_dr0,0)) {
        uVar3 = rand(ar6,ar5,a6,ar7);
        iVar1 = libgcc_divide_helper_01031c(uVar3,5,a6,ar7);
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),in_fr3);
        }
        else {
          dVar6 = *(double *)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x41200000,(float)(iVar1 + 8));
        }
        else {
          dVar7 = 2.2974389978324538e-39;
        }
        if (cVar10 == '\0') {
          fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar7 / dVar7,0);
        }
        if (cVar11 == '\0') {
          dVar7 = (double)CONCAT44(0x37e90453,fVar4);
        }
        else {
          dVar7 = 1.18029310218391e-311;
        }
        if (cVar10 == '\0') {
          fVar8 = (float)((ulonglong)dVar7 >> 0x20);
          fVar4 = SUB84(dVar7,0) * fVar8;
          dVar7 = (double)CONCAT44(fVar8,fVar4);
          dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - fVar4,SUB84(dVar6,0));
        }
        else {
          dVar7 = dVar7 * dVar7;
          dVar6 = dVar6 - dVar7;
        }
        if (cVar11 == '\0') {
          *(int *)(ar4 + 0x244) = (int)((ulonglong)dVar6 >> 0x20);
          dVar7 = (double)(ulonglong)*(uint *)(ar4 + 0x244);
        }
        else {
          *(double *)(ar4 + 0x244) = dVar6;
          dVar5 = *(double *)(ar4 + 0x244);
        }
        fVar4 = SUB84(dVar7,0);
        if (cVar10 == '\0' && fVar4 < 0.0) {
          if (cVar11 == '\0') {
            *(undefined4 *)(ar4 + 0x244) = 0;
          }
          else {
            *(ulonglong *)(ar4 + 0x244) = (ulonglong)dVar7 & 0xffffffff;
          }
        }
        if (cVar11 == '\0') {
          fVar4 = *(float *)(ar4 + 0x244);
        }
        else {
          dVar5 = *(double *)(ar4 + 0x244);
        }
        if (cVar11 == '\0') {
          dVar6 = (double)CONCAT44(0x42b40000,fVar4);
        }
        else {
          dVar6 = 1.29532152133274e-310;
        }
        if (cVar10 == '\0') {
          fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
        }
        else {
          fVar4 = SUB84(dVar6 * dVar6,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 0x22c) = fVar4;
          return &DAT_8c068e5c;
        }
        *(double *)(ar4 + 0x22c) = dVar5;
        return &DAT_8c068e5c;
      }
      uVar3 = rand(ar6,ar5,a6,ar7);
      ar5_00 = 5;
      iVar1 = libgcc_divide_helper_01031c(uVar3,5,a6,ar7);
      if (cVar11 == '\0') {
        dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x244),in_fr3);
      }
      else {
        dVar6 = *(double *)(ar4 + 0x244);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar1 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar10 == '\0') {
        fVar4 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar4);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar10 == '\0') {
        dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) +
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7 * dVar7;
      }
      if (cVar11 == '\0') {
        *(int *)(ar4 + 0x244) = (int)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(0x42b40000,*(undefined4 *)(ar4 + 0x244));
      }
      else {
        *(double *)(ar4 + 0x244) = dVar6;
        dVar5 = *(double *)(ar4 + 0x244);
        dVar6 = 1.14643063239662e-311;
      }
      if (cVar10 == '\0') {
        fVar4 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
      }
      else {
        fVar4 = SUB84(dVar6 * dVar6,0);
      }
      if (cVar11 == '\0') {
        *(float *)(ar4 + 0x22c) = fVar4;
        fVar4 = *(float *)(ar4 + 0x244);
      }
      else {
        *(double *)(ar4 + 0x22c) = dVar5;
      }
      if (cVar10 == '\0' && fVar4 < 1.0) {
        return ar4 + 0x244;
      }
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = 0;
      FUN_8c0f4d84(ar4,ar5_00,a6,ar7);
      _DAT_8c28099c = _DAT_8c28099c + -1;
      return _DAT_8c28099c;
    }
    goto LAB_8c068bfc;
  }
  uVar3 = SUB84(in_dr0,0);
  FUN_8c068890(auStack_fcc,ar5,ar6,ar7);
  uVar2 = FUN_8c06afb0(ar4,auStack_fcc,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    dVar5 = (double)CONCAT44(0x44e10000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + 0x240);
    dVar5 = 1.20586454969464e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                               (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    in_dr14 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  FUN_8c068818(auStack_fcc,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr0 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
  }
  else {
    in_dr0 = *(double *)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
  }
  else {
    bVar9 = in_dr0 < in_dr14;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
    }
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
    iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6,ar7);
    *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_24[iVar1];
  }
  if (cVar11 == '\0') {
    *(int *)(ar4 + 0x238) = SUB84(in_dr14,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x238) = in_xd14;
  }
LAB_8c068bfc:
  uVar3 = SUB84(in_dr0,0);
  FUN_8c068890(auStack_1798,ar5,ar6,ar7);
  uVar2 = FUN_8c06afb0(ar4,auStack_1798,ar6,ar7);
  if (cVar11 == '\0') {
    in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),*(undefined4 *)(ar4 + 0x240));
    dVar5 = (double)CONCAT44(0x45610000,uVar3);
  }
  else {
    in_xd14 = *(undefined8 *)(ar4 + 0x240);
    dVar5 = 1.21435667738153e-311;
  }
  if (cVar10 == '\0') {
    dVar6 = (double)CONCAT44((float)(uVar2 & 0xffff),SUB84(dVar5,0));
    dVar5 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                             (SUB84(in_dr14,0) / (float)((ulonglong)dVar5 >> 0x20)) *
                             (float)(uVar2 & 0xffff));
  }
  else {
    dVar6 = (double)(uVar2 & 0xffff);
    dVar5 = (in_dr14 / dVar5) * dVar6;
  }
  uVar3 = SUB84(dVar6,0);
  FUN_8c068818(auStack_1798,0xffffffff,ar6,ar7);
  if (cVar11 == '\0') {
    dVar6 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x240),uVar3);
  }
  else {
    dVar6 = *(double *)(ar4 + 0x240);
  }
  if (cVar10 == '\0') {
    bVar9 = (float)((ulonglong)dVar6 >> 0x20) < SUB84(dVar5,0);
  }
  else {
    bVar9 = dVar6 < dVar5;
  }
  if (bVar9) {
    if (cVar11 == '\0') {
      dVar5 = (double)(ulonglong)*(uint *)(ar4 + 0x240);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x240);
    }
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
  }
  if (cVar11 == '\0') {
    *(int *)(ar4 + 0x23c) = SUB84(dVar5,0);
  }
  else {
    *(undefined8 *)(ar4 + 0x23c) = in_xd14;
  }
  return 0x23c;
}

__asm__(".globl _FUN_8c068a4c\n.set _FUN_8c068a4c, _FUN_8c068a4c_def\n");
//@unit 8c068e64
#include "../decls.h"
undefined4 FUN_8c068e64_def(int *ar4,undefined4 ar5,int *ar6,undefined4 ar7)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int *ar4_00;
  int *a5;
  undefined1 *ar5_00;
  double *pdVar4;
  code *ar6_00;
  int *piVar5;
  float fVar6;
  double in_dr0;
  double dVar7;
  float fVar10;
  double dVar8;
  ulonglong uVar9;
  undefined4 in_fr3;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd14;
  bool bVar11;
  char cVar12;
  char cVar13;
  ulonglong uStack_3050;
  undefined1 auStack_3048 [1996];
  undefined1 auStack_287c [16];
  undefined1 auStack_286c [16];
  undefined1 auStack_285c [12];
  undefined1 auStack_2850 [16];
  undefined1 auStack_2840 [16];
  undefined1 auStack_2830 [16];
  undefined1 auStack_2820 [16];
  undefined1 auStack_2810 [12];
  undefined1 auStack_2804 [16];
  undefined1 auStack_27f4 [16];
  undefined1 auStack_27e4 [16];
  undefined1 auStack_27d4 [16];
  undefined1 auStack_27c4 [12];
  undefined1 auStack_27b8 [16];
  undefined1 auStack_27a8 [16];
  undefined1 auStack_2798 [16];
  undefined1 auStack_2788 [16];
  undefined1 auStack_2778 [12];
  undefined1 auStack_276c [16];
  undefined1 auStack_275c [16];
  undefined1 auStack_274c [12];
  undefined1 auStack_2740 [1996];
  undefined1 auStack_1f74 [1996];
  undefined1 auStack_17a8 [1996];
  undefined1 auStack_fdc [1996];
  undefined1 auStack_810 [1996];
  uint auStack_44 [4];
  uint auStack_34 [4];
  undefined1 auStack_24 [20];
  
  cVar13 = '\0';
  cVar12 = '\0';
  piVar5 = ar6;
  Vec3_ctor_zero(auStack_24,ar5,ar6,ar7);
  auStack_44[0] = DAT_8c137100;
  auStack_44[1] = DAT_8c137104;
  auStack_44[2] = DAT_8c137108;
  auStack_44[3] = DAT_8c13710c;
  auStack_34[0] = DAT_8c137110;
  auStack_34[1] = DAT_8c137114;
  auStack_34[2] = DAT_8c137118;
  auStack_34[3] = DAT_8c13711c;
  iVar3 = ar4[0x8c];
  if ((5 < iVar3) || (iVar3 < 0)) goto switchD_8c068ec8_default;
                    
  switch(iVar3) {
  case 0:
    FUN_8c068890(auStack_810,ar5,piVar5,ar7);
    uVar2 = SUB84(in_dr0,0);
    uVar1 = FUN_8c06afb0(ar4,auStack_810,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x44610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = -9.834358688611842e-251;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_810,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x85] = ar4[0x85] & ~auStack_44[iVar3];
      piVar5 = ar4;
    }
    if (cVar13 == '\0') {
      ar4[0x8d] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8d) = in_xd14;
    }
  case 1:
    uVar2 = SUB84(in_dr0,0);
    FUN_8c068890(auStack_fdc,ar5,piVar5,ar7);
    uVar1 = FUN_8c06afb0(ar4,auStack_fdc,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x44e10000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = 1.20586454969464e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                                 (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      in_dr14 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_fdc,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr0 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      in_dr0 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)in_dr0 >> 0x20) < SUB84(in_dr14,0);
    }
    else {
      bVar11 = in_dr0 < in_dr14;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x85] = ar4[0x85] & ~auStack_34[iVar3];
    }
    if (cVar13 == '\0') {
      ar4[0x8e] = SUB84(in_dr14,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8e) = in_xd14;
    }
  case 2:
    uVar2 = SUB84(in_dr0,0);
    FUN_8c068890(auStack_17a8,ar5,piVar5,ar7);
    uVar1 = FUN_8c06afb0(ar4,auStack_17a8,piVar5,ar7);
    if (cVar13 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),ar4[0x90]);
      dVar8 = (double)CONCAT44(0x45610000,uVar2);
    }
    else {
      in_xd14 = *(undefined8 *)(ar4 + 0x90);
      dVar8 = 9.4222363968352e-311;
    }
    if (cVar12 == '\0') {
      dVar7 = (double)CONCAT44((float)(uVar1 & 0xffff),SUB84(dVar8,0));
      dVar8 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                               (SUB84(in_dr14,0) / (float)((ulonglong)dVar8 >> 0x20)) *
                               (float)(uVar1 & 0xffff));
    }
    else {
      dVar7 = (double)(uVar1 & 0xffff);
      dVar8 = (in_dr14 / dVar8) * dVar7;
    }
    uVar2 = SUB84(dVar7,0);
    FUN_8c068818(auStack_17a8,0xffffffff,piVar5,ar7);
    if (cVar13 == '\0') {
      dVar7 = (double)CONCAT44(ar4[0x90],uVar2);
    }
    else {
      dVar7 = *(double *)(ar4 + 0x90);
    }
    if (cVar12 == '\0') {
      bVar11 = (float)((ulonglong)dVar7 >> 0x20) < SUB84(dVar8,0);
    }
    else {
      bVar11 = dVar7 < dVar8;
    }
    if (bVar11) {
      if (cVar13 == '\0') {
        dVar8 = (double)(ulonglong)(uint)ar4[0x90];
      }
      else {
        in_xd14 = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0x8c] = ar4[0x8c] + 1;
      FUN_8c068890(auStack_1f74,ar5,piVar5,ar7);
      FUN_8c06af5c(ar4,auStack_1f74,piVar5,ar7);
      FUN_8c068818(auStack_1f74,0xffffffff,piVar5,ar7);
    }
    if (cVar13 == '\0') {
      ar4[0x8f] = SUB84(dVar8,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x8f) = in_xd14;
    }
    break;
  case 3:
    FUN_8c068890(auStack_2740,ar5,piVar5,ar7);
    uVar2 = FUN_8c06afb0(ar4,auStack_2740,piVar5,ar7);
    bVar11 = 0x707f < (ushort)uVar2;
    FUN_8c068818(auStack_2740,0xffffffff,piVar5,ar7);
    a5 = (int *)0x0;
    if ((bVar11) && (a5 = (int *)0x2, (int)_DAT_8c2809a8 < 2)) {
      _DAT_8c2809a8 = (double *)((int)_DAT_8c2809a8 + 1);
      ar4[0x8c] = ar4[0x8c] + 1;
      a5 = ar4;
    }
    ar4_00 = ar6;
    (**(code **)(*ar6 + 0x188))(ar6,a5,piVar5,ar7);
    dVar8 = in_dr0;
    if (cVar13 == '\0') {
      uStack_3050 = (ulonglong)CONCAT14(bVar11,(int)((ulonglong)in_dr0 >> 0x20));
      in_dr0 = (double)(uStack_3050 & 0xffffffff);
      dVar8 = in_xd0;
    }
    in_xd0 = dVar8;
    fVar6 = SUB84(in_dr0,0);
    if ((cVar12 == '\0' && 0.0 < fVar6) ||
       (ar4_00 = ar4, a5 = ar6, iVar3 = FUN_8c06d714(ar4,ar6,piVar5,ar7), iVar3 != 0)) {
      uVar2 = rand(ar4_00,a5,piVar5,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.18029310218391e-311;
      }
      if (cVar12 == '\0') {
        fVar10 = (float)((ulonglong)dVar7 >> 0x20);
        fVar6 = SUB84(dVar7,0) * fVar10;
        dVar7 = (double)CONCAT44(fVar10,fVar6);
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - fVar6,SUB84(dVar8,0));
      }
      else {
        dVar7 = dVar7 * dVar7;
        dVar8 = dVar8 - dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)((ulonglong)dVar8 >> 0x20);
        dVar7 = (double)(ulonglong)(uint)ar4[0x91];
      }
      else {
        *(double *)(ar4 + 0x91) = dVar8;
        in_xd0 = *(double *)(ar4 + 0x91);
      }
      if (cVar12 == '\0' && SUB84(dVar7,0) < 0.0) {
        if (cVar13 == '\0') {
          ar4[0x91] = 0;
        }
        else {
          *(ulonglong *)(ar4 + 0x91) = (ulonglong)dVar7 & 0xffffffff;
        }
      }
      if (cVar13 == '\0') {
        in_dr0 = (double)CONCAT44(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x91);
        in_dr0 = 1.18887054821592e-311;
      }
      if (cVar12 == '\0') {
        in_dr0 = (double)(ulonglong)(uint)(SUB84(in_dr0,0) * (float)((ulonglong)in_dr0 >> 0x20));
      }
      else {
        in_dr0 = in_dr0 * in_dr0;
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = SUB84(in_dr0,0);
      }
      else {
        *(double *)(ar4 + 0x8b) = in_xd0;
      }
    }
    else {
      pdVar4 = _DAT_8c2809a8;
      if ((int)_DAT_8c2809a8 < 2) {
        pdVar4 = (double *)(ar4 + 0x91);
        if (cVar13 == '\0') {
          fVar6 = *(float *)pdVar4;
        }
        else {
          in_xd0 = *pdVar4;
        }
        in_dr0 = (double)(ulonglong)(uint)fVar6;
        if (fVar6 == 0.0) {
          _DAT_8c2809a8 = (double *)((int)_DAT_8c2809a8 + 1);
          ar4[0x8c] = ar4[0x8c] + 1;
          piVar5 = ar4;
          goto LAB_8c06940e;
        }
      }
      uVar2 = rand(pdVar4,&DAT_8c2809a8,piVar5,ar7);
      iVar3 = libgcc_divide_helper_01031c(uVar2,5,piVar5,ar7);
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(ar4[0x91],in_fr3);
      }
      else {
        dVar8 = *(double *)(ar4 + 0x91);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x41200000,(float)(iVar3 + 8));
      }
      else {
        dVar7 = 2.2974389978324538e-39;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar7 / dVar7,0);
      }
      if (cVar13 == '\0') {
        dVar7 = (double)CONCAT44(0x37e90453,fVar6);
      }
      else {
        dVar7 = 1.12087722003689e-311;
      }
      if (cVar12 == '\0') {
        dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                                 SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar8,0));
      }
      else {
        dVar8 = dVar8 + dVar7 * dVar7;
      }
      if (cVar13 == '\0') {
        ar4[0x91] = (int)((ulonglong)dVar8 >> 0x20);
      }
      else {
        *(double *)(ar4 + 0x91) = dVar8;
      }
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
      ar4[0x8a] = iVar3 * 3;
      if (cVar13 == '\0') {
        dVar8 = (double)CONCAT44(0x42b40000,ar4[0x91]);
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x91);
        dVar8 = 1.14643063239662e-311;
      }
      if (cVar12 == '\0') {
        fVar6 = SUB84(dVar8,0) * (float)((ulonglong)dVar8 >> 0x20);
      }
      else {
        fVar6 = SUB84(dVar8 * dVar8,0);
      }
      if (cVar13 == '\0') {
        ar4[0x8b] = (int)fVar6;
        fVar6 = (float)ar4[0x91];
      }
      else {
        *(double *)(ar4 + 0x8b) = in_xd0;
        in_xd0 = *(double *)(ar4 + 0x91);
      }
      in_dr0 = (double)CONCAT44(0x3f800000,fVar6);
      if (cVar12 != '\0' || 1.0 <= fVar6) {
        *(undefined4 *)(ar4[0x87] * 8 + -0x73d7f604) = 0;
        *(undefined4 *)(ar4[0x87] * 8 + -0x73d7f600) = 0;
        ar5_00 = (undefined1 *)0x4;
        if (ar4[0x84] < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + -1;
        }
        else {
          ar5_00 = &DAT_8c28099c;
          _DAT_8c28099c = _DAT_8c28099c + -1;
        }
        FUN_8c0f4d84(ar4,ar5_00,piVar5,ar7);
      }
    }
LAB_8c06940e:
    if (ar4[0x8c] != 3) {
      in_dr0 = (double)((ulonglong)in_dr0 & 0xffffffff);
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(double *)(ar4 + 0x8b) = in_dr0;
      }
switchD_8c068ec8_caseD_4:
      uVar1 = SUB84(in_dr0,0);
      iVar3 = FUN_8c0d19dc(0xe,0x1b,piVar5,ar7);
      ar4[0xa4] = iVar3;
      *(undefined4 *)(ar4[0xa4] + 0x230) = 4;
      uVar2 = get_field_24_026024(ar6,0x230,piVar5,ar7);
      *(undefined4 *)(ar4[0xa4] + 0x218) = uVar2;
      *(undefined4 *)(ar4[0xa4] + 0x21c) = 0xffffffff;
      uVar9 = (ulonglong)uVar1;
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x22c) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x22c) = uVar9;
      }
      iVar3 = ar4[0xa4];
      (**(code **)(*ar6 + 0x4c))(ar6,iVar3,piVar5,ar7);
      fVar6 = (float)uVar9;
      FUN_8c06abb8(ar4,iVar3,piVar5,ar7);
      ar6_00 = vec3_copy_8c023d8c;
      vec3_copy_8c023d8c(ar4[0xa4] + 0x50,auStack_274c,vec3_copy_8c023d8c,ar7);
      object_dtor_delete(auStack_274c,0xffffffff,ar6_00,ar7);
      uVar2 = 4;
      iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,ar6_00,ar7);
      if (iVar3 == 0) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        iVar3 = ar4[0xa4];
        pdVar4 = (double *)(iVar3 + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x430d0000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014511006795e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        FUN_8c06aa04(ar4,iVar3,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_275c,piVar5,ar6_00,ar7,auStack_276c);
        if (cVar13 != '\0') {
          fVar6 = 141.0;
        }
        Vec3_set_xyz(auStack_2778,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_276c,auStack_2778,ar6_00,ar7,auStack_2788);
        Vec3_add(ar4 + 0xc,auStack_2788,ar6_00,ar7,auStack_2798);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_2798,ar6_00,ar7);
        Vec3_dtor(auStack_2798,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2788,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_2778,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_276c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_275c,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 1) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        pdVar4 = (double *)(ar4[0xa4] + 0x27c);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4286999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35014075831897e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_27a8,piVar5,ar6_00,ar7,auStack_27b8);
        if (cVar13 != '\0') {
          fVar6 = 67.3;
        }
        Vec3_set_xyz(auStack_27c4,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_27b8,auStack_27c4,ar6_00,ar7,auStack_27d4);
        Vec3_add(ar4 + 0xc,auStack_27d4,ar6_00,ar7,auStack_27e4);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_27e4,ar6_00,ar7);
        Vec3_dtor(auStack_27e4,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27d4,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_27c4,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27b8,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27a8,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 2) {
        pdVar4 = (double *)(ar4[0xa4] + 0x54);
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)pdVar4 = fVar6;
        }
        else {
          *pdVar4 = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x41680000,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.35013147847267e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 + dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        FUN_8c06aa04(ar4,pdVar4,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_27f4,piVar5,ar6_00,ar7,auStack_2804);
        if (cVar13 != '\0') {
          fVar6 = 14.5;
        }
        Vec3_set_xyz(auStack_2810,piVar5,ar6_00,ar7);
        ar6_00 = FUN_8c023484;
        FUN_8c023484(auStack_2804,auStack_2810,FUN_8c023484,ar7,auStack_2820);
        Vec3_add(ar4 + 0xc,auStack_2820,ar6_00,ar7,auStack_2830);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_2830,ar6_00,ar7);
        Vec3_dtor(auStack_2830,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2820,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_2810,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2804,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_27f4,0xffffffff,ar6_00,ar7);
      }
      else if (iVar3 == 3) {
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x54) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x54) = in_xd0;
        }
        if (cVar13 == '\0') {
          dVar8 = (double)CONCAT44(0x4299999a,ar4[0x15]);
        }
        else {
          in_xd0 = *(double *)(ar4 + 0x15);
          dVar8 = 1.3501413735216e-311;
        }
        if (cVar12 == '\0') {
          fVar6 = SUB84(dVar8,0) - (float)((ulonglong)dVar8 >> 0x20);
        }
        else {
          fVar6 = SUB84(dVar8 - dVar8,0);
        }
        if (cVar13 == '\0') {
          *(float *)(ar4[0xa4] + 0x27c) = fVar6;
        }
        else {
          *(double *)(ar4[0xa4] + 0x27c) = in_xd0;
        }
        FUN_8c06aa04(ar4,uVar2,ar6_00,ar7);
        piVar5 = ar4 + 0x90;
        Vec3_scale(auStack_2840,piVar5,ar6_00,ar7,auStack_2850);
        if (cVar13 != '\0') {
          fVar6 = 76.8;
        }
        Vec3_set_xyz(auStack_285c,piVar5,ar6_00,ar7);
        FUN_8c023484(auStack_2850,auStack_285c,ar6_00,ar7,auStack_286c);
        Vec3_add(ar4 + 0xc,auStack_286c,ar6_00,ar7,auStack_287c);
        Vec3_assign(ar4[0xa4] + 0x30,auStack_287c,ar6_00,ar7);
        Vec3_dtor(auStack_287c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_286c,0xffffffff,ar6_00,ar7);
        object_dtor_delete(auStack_285c,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2850,0xffffffff,ar6_00,ar7);
        Vec3_dtor(auStack_2840,0xffffffff,ar6_00,ar7);
      }
      Vec3_assign(ar4[0xa4] + 0x268,ar4 + 0xc,ar6_00,ar7);
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x278) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x278) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(undefined4 *)(ar4[0xa4] + 0x280) = 0;
      }
      else {
        *(ulonglong *)(ar4[0xa4] + 0x280) = (ulonglong)(uint)fVar6;
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 0x5c) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 0x5c) = *(undefined8 *)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 0x60) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 0x60) = *(undefined8 *)(ar4 + 0x90);
      }
      if (cVar13 == '\0') {
        *(int *)(ar4[0xa4] + 100) = ar4[0x90];
      }
      else {
        *(undefined8 *)(ar4[0xa4] + 100) = *(undefined8 *)(ar4 + 0x90);
      }
      ar4[0xa4] = 0;
      FUN_8c068890(auStack_3048,ar5,ar6_00,ar7);
      FUN_8c06af5c(ar4,auStack_3048,ar6_00,ar7);
      FUN_8c068818(auStack_3048,0xffffffff,ar6_00,ar7);
      piVar5 = (int *)(ar4[0x8c] + 1);
      ar4[0x8c] = (int)piVar5;
      goto switchD_8c068ec8_caseD_5;
    }
    break;
  case 4:
    goto switchD_8c068ec8_caseD_4;
  case 5:
switchD_8c068ec8_caseD_5:
    iVar3 = libgcc_divide_helper_01031c(ar4[0x84],4,piVar5,ar7);
    ar4[0x8a] = iVar3 * 3 + 1;
    if (cVar13 == '\0') {
      dVar8 = (double)CONCAT44(0x3dcccccd,ar4[0x8b]);
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x8b);
      dVar8 = 21990236605644.8;
    }
    if (cVar12 == '\0') {
      fVar6 = SUB84(dVar8,0) + (float)((ulonglong)dVar8 >> 0x20);
    }
    else {
      fVar6 = SUB84(dVar8 + dVar8,0);
    }
    if (cVar13 == '\0') {
      ar4[0x8b] = (int)fVar6;
      uVar9 = CONCAT44(0x42b40000,ar4[0x8b]);
    }
    else {
      *(double *)(ar4 + 0x8b) = in_xd0;
      uVar9 = 0x30a842b40000;
    }
    if (cVar12 != '\0' || (float)(uVar9 >> 0x20) <= (float)uVar9) {
      ar4[0x8c] = 3;
      if (cVar13 == '\0') {
        ar4[0x8b] = 0;
      }
      else {
        *(ulonglong *)(ar4 + 0x8b) = uVar9 & 0xffffffff;
      }
    }
  }
switchD_8c068ec8_default:
  uVar2 = Vec3_dtor(auStack_24,0xffffffff,piVar5,ar7);
  return uVar2;
}

__asm__(".globl _FUN_8c068e64\n.set _FUN_8c068e64, _FUN_8c068e64_def\n");
//@unit 8c069c24
#include "../decls.h"
undefined4 FUN_8c069c24_def(int *ar4,int ar5,int ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar5;
  int iVar6;
  int *ar5_00;
  int *ar6_00;
  int *ar7_00;
  undefined4 unaff_r8;
  int iVar7;
  int iVar8;
  int unaff_r14;
  float fVar9;
  ulonglong in_dr0;
  ulonglong uVar10;
  double dVar11;
  undefined8 in_xd0;
  char in_FPSCR_PR = 0;
  char in_FPSCR_SZ = 0;
  undefined8 uStack_1d8;
  int iStack_1d0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
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
  undefined4 *puVar4;
  
  iVar8 = -1;
  puVar1 = (undefined4 *)((int)&uStack_1d8 + 0x128);
  iVar5 = 0x12;
  puVar3 = (undefined4 *)(&DATA_8c137120);
  (*(uint*)((uchar*)&uStack_1d8+0)) = ar5;
  do {
    puVar4 = puVar3 + 1;
    *puVar1 = *puVar3;
    puVar3 = puVar3 + 2;
    puVar1[1] = *puVar4;
    puVar1 = puVar1 + 2;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  iVar5 = ar6;
  if ((int)uStack_1d8 == 0) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0x114) = uVar2;
    ar5 = 7;
    uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                      (*(undefined4 *)((int)&uStack_1d8 + 0x114),7,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xb0) = uVar2;
    unaff_r14 = *(int *)((int)&uStack_1d8 + 0xb0);
    iVar7 = 7;
    do {
      *(int *)((int)&uStack_1d8 + 0xac) = unaff_r14;
      if (*(int *)(*(int *)((int)&uStack_1d8 + 0xac) * 8 + 0x8c2809b8 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        *(int *)((int)&uStack_1d8 + 0xa8) = unaff_r14;
        (*(code *)(&FUN_8c06b410))
                  (*(undefined4 *)(*(int *)((int)&uStack_1d8 + 0xa8) * 8 + 0x8c2809b8 + 4)
                   ,ar5,iVar5,ar7);
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0x110) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0x110);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0x110) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0x110);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            *(int *)((int)&uStack_1d8 + 0xa4) = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0xa4) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x10c) = uVar2;
            *(int *)((int)&uStack_1d8 + 0xa0) = unaff_r14;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xa0) * 8 + 0x8c2809b8;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(iVar8 + 4),iVar8,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x108) = uVar2;
            *(int *)((int)&uStack_1d8 + 0x9c) = unaff_r14;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x10c),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x98) = uVar2;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x108),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x90) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + 0x94) =
                 *(undefined4 *)((int)&uStack_1d8 + 0x90);
            iVar5 = *(int *)((int)&uStack_1d8 + 0x94) * 2 + 3;
            ar5 = *(int *)((int)&uStack_1d8 + 0x98);
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x9c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x104) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0x104);
          }
          else {
            *(int *)((int)&uStack_1d8 + 0x8c) = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x8c) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x100) = uVar2;
            *(int *)((int)&uStack_1d8 + 0x88) = unaff_r14;
            uVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                              (*(undefined4 *)((int)&uStack_1d8 + 0x100),4,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0x80) = uVar2;
            *(undefined4 *)((int)&uStack_1d8 + 0x84) =
                 *(undefined4 *)((int)&uStack_1d8 + 0x80);
            ar5 = *(int *)((int)&uStack_1d8 + 0x84) * 2 + 3;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)
                                (*(int *)((int)&uStack_1d8 + 0x88) * 8 + 0x8c2809b8 + 4),
                               ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xfc) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xfc);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 1) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xf8) = uVar2;
    ar5 = 6;
    iStack_15c = (*(code *)(&libgcc_divide_helper_01031c))
                           (*(undefined4 *)((int)&uStack_1d8 + 0xf8),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_15c;
    do {
      iStack_160 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + 0x8c2809fc + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_164 = unaff_r14;
        FUN_8c06b410(*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0xf4) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0xf4);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0xf4) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0xf4);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_168 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xf0) = uVar2;
            iStack_16c = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xec) = uVar2;
            iStack_170 = unaff_r14;
            iStack_174 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xf0),4,iVar5,ar7);
            iStack_17c = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xec),4,iVar5,ar7);
            iVar5 = iStack_17c * 2 + 3;
            ar5 = iStack_174;
            iStack_178 = iStack_17c;
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)(iStack_170 * 8 + 0x8c2809fc + 4),iStack_174,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe8) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xe8);
          }
          else {
            iStack_180 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe4) = uVar2;
            iStack_184 = unaff_r14;
            iStack_18c = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xe4),4,iVar5,ar7);
            ar5 = iStack_18c * 2 + 3;
            iStack_188 = iStack_18c;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)(iStack_184 * 8 + 0x8c2809fc + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xe0) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xe0);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  else if ((int)uStack_1d8 == 2) {
    uVar2 = rand(0,ar5,ar6,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xdc) = uVar2;
    ar5 = 6;
    iStack_190 = (*(code *)(&libgcc_divide_helper_01031c))
                           (*(undefined4 *)((int)&uStack_1d8 + 0xdc),6,iVar5,ar7);
    iVar7 = 6;
    unaff_r14 = iStack_190;
    do {
      iStack_194 = unaff_r14;
      if (*(int *)(unaff_r14 * 8 + 0x8c280a38 + 4) == 0) {
        iVar7 = iVar7 + -1;
        unaff_r14 = unaff_r14 + 1;
      }
      else {
        iStack_198 = unaff_r14;
        FUN_8c06b410(*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7)
        ;
        if (in_FPSCR_SZ == '\0') {
          *(int *)((int)&uStack_1d8 + 0xd8) = (int)(in_dr0 >> 0x20);
          uVar10 = (ulonglong)*(uint *)((int)&uStack_1d8 + 0xd8);
        }
        else {
          *(ulonglong *)((int)&uStack_1d8 + 0xd8) = in_dr0;
          in_xd0 = *(undefined8 *)((int)&uStack_1d8 + 0xd8);
          uVar10 = in_dr0;
        }
        in_dr0 = uVar10 & 0xffffffff;
        if ((float)uVar10 == 0.0) {
          if (ar6 == 0) {
            iStack_19c = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xd4) = uVar2;
            iStack_1a0 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xd0) = uVar2;
            iStack_1a4 = unaff_r14;
            iStack_1a8 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xd4),4,iVar5,ar7);
            iStack_1b0 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xd0),4,iVar5,ar7);
            iVar5 = iStack_1b0 * 2 + 3;
            ar5 = iStack_1a8;
            iStack_1ac = iStack_1b0;
            uVar2 = (*(code *)(&FUN_8c06b29c))
                              (*(undefined4 *)(iStack_1a4 * 8 + 0x8c280a38 + 4),iStack_1a8,iVar5,
                               ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xcc) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xcc);
          }
          else {
            iStack_1b4 = unaff_r14;
            uVar2 = (*(code *)(&get_field_210_06b3f4))
                              (*(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xc8) = uVar2;
            iStack_1b8 = unaff_r14;
            iStack_1c0 = (*(code *)(&libgcc_divide_helper_01031c))
                                   (*(undefined4 *)((int)&uStack_1d8 + 0xc8),4,iVar5,ar7);
            ar5 = iStack_1c0 * 2 + 3;
            iStack_1bc = iStack_1c0;
            uVar2 = (*(code *)(&FUN_8c06b35c))
                              (*(undefined4 *)(iStack_1b8 * 8 + 0x8c280a38 + 4),ar5,iVar5,ar7);
            *(undefined4 *)((int)&uStack_1d8 + 0xc4) = uVar2;
            iVar8 = *(int *)((int)&uStack_1d8 + 0xc4);
          }
        }
        if (iVar8 == -1) {
          iVar7 = iVar7 + -1;
          unaff_r14 = unaff_r14 + 1;
        }
      }
      if (5 < unaff_r14) {
        unaff_r14 = 0;
      }
    } while ((-1 < iVar7) && (iVar8 == -1));
  }
  if (iVar8 == -1) {
    uVar2 = 0;
  }
  else {
    iVar7 = unaff_r14;
    if ((int)uStack_1d8 == 0) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c2809b8 + 4);
      ar5 = 0x8c2809b8;
      iStack_1c4 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 1) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c2809fc + 4);
      iVar7 = unaff_r14 + 7;
      iStack_1c8 = unaff_r14;
    }
    else if ((int)uStack_1d8 == 2) {
      unaff_r8 = *(undefined4 *)(unaff_r14 * 8 + 0x8c280a38 + 4);
      iVar7 = unaff_r14 + 0xd;
      iStack_1cc = unaff_r14;
    }
    uVar2 = FUN_8c06b420(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xc0) = uVar2;
    uVar2 = (*(code *)(&FUN_8c015bb8))
                      (*(undefined4 *)((int)&uStack_1d8 + 0xc0),ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xbc) = uVar2;
    iVar6 = *(int *)(*(int *)((int)&uStack_1d8 + 0xbc) + 0x2c);
    uVar2 = get_field_210_06b3f4(unaff_r8,ar5,iVar5,ar7);
    *(undefined4 *)((int)&uStack_1d8 + 0xb8) = uVar2;
    *ar4 = *(int *)((int)&uStack_1d8 + 0xb8);
    (*(code *)(&FUN_8c02f670))
              (unaff_r8,(int)&uStack_1d8 + 0x118,iVar5,ar7,(int)&uStack_1d8 + 0x118);
    Vec3_assign(ar4 + 4,(int)&uStack_1d8 + 0x118,iVar5,ar7);
    Vec3_dtor((int)&uStack_1d8 + 0x118,0xffffffff,iVar5,ar7);
    iStack_1d0 = *ar4;
    (*(uint*)((uchar*)&uStack_1d8+4)) = iVar8;
    ar4[1] = *(int *)((int)&uStack_1d8 + iVar8 * 4 + *ar4 * 0x24 + 0x128);
    ar4[2] = iVar7;
    ar4[3] = iVar8;
    ar7_00 = ar4 + 0xe;
    ar6_00 = ar4 + 0xd;
    FUN_8c03f414(unaff_r8,ar4 + 0xc,ar6_00,ar7_00);
    if ((iVar8 < 9) && (-1 < iVar8)) {
      uVar2 = (*(code *)((code **)&DATA_8c06a404)[iVar8])();
      return uVar2;
    }
    ar5_00 = (int *)(iVar6 + 8);
    if (in_FPSCR_SZ == '\0') {
      ar4[8] = *ar5_00;
      ar4[9] = *(int *)(iVar6 + 0xc);
      ar4[10] = *(int *)(iVar6 + 0x10);
    }
    else {
      *(undefined8 *)(ar4 + 8) = *(undefined8 *)ar5_00;
      *(undefined8 *)(ar4 + 9) = *(undefined8 *)(iVar6 + 0xc);
      *(undefined8 *)(ar4 + 10) = *(undefined8 *)(iVar6 + 0x10);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x14));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0xf] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0xf) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x18));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) / (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 / dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x10] = (int)fVar9;
    }
    else {
      *(undefined8 *)(ar4 + 0x10) = in_xd0;
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f4,(float)*(int *)(iVar6 + 0x1c));
    }
    else {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,DAT_8c06a4f4);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = SUB84(dVar11,0) * (float)((ulonglong)dVar11 >> 0x20);
    }
    else {
      fVar9 = SUB84(dVar11 * dVar11,0);
    }
    if (in_FPSCR_SZ == '\0') {
      dVar11 = (double)CONCAT44(DAT_8c06a4f8,fVar9);
    }
    else {
      dVar11 = (double)CONCAT44((&FUN_8c06b400),DAT_8c06a4f8);
    }
    if (in_FPSCR_PR == '\0') {
      fVar9 = (float)((ulonglong)dVar11 >> 0x20);
      dVar11 = (double)CONCAT44(fVar9,SUB84(dVar11,0) / fVar9);
    }
    else {
      dVar11 = dVar11 / dVar11;
    }
    if (in_FPSCR_SZ == '\0') {
      ar4[0x11] = SUB84(dVar11,0);
    }
    else {
      *(undefined8 *)(ar4 + 0x11) = in_xd0;
    }
    FUN_8c06b400(unaff_r8,ar5_00,ar6_00,ar7_00);
    if (in_FPSCR_SZ == '\0') {
      *(int *)((int)&uStack_1d8 + 0xb4) = (int)((ulonglong)dVar11 >> 0x20);
      ar4[0x12] = *(int *)((int)&uStack_1d8 + 0xb4);
    }
    else {
      *(double *)((int)&uStack_1d8 + 0xb4) = dVar11;
      *(undefined8 *)(ar4 + 0x12) = *(undefined8 *)((int)&uStack_1d8 + 0xb4);
    }
    uVar2 = 1;
  }
  return uVar2;
}

__asm__(".globl _FUN_8c069c24\n.set _FUN_8c069c24, _FUN_8c069c24_def\n");
//@unit 8c06a524
#include "../decls.h"
undefined4 FUN_8c06a524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)0x8c280998 = 0;
  *(undefined4 *)0x8c28099c = 0;
  *(undefined4 *)0x8c2809a0 = 0;
  *(undefined4 *)0x8c2809a4 = 0;
  *(undefined4 *)0x8c2809a8 = 0;
  for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c2809b8 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c2809b8 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c2809fc + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c2809fc + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(undefined4 *)(0x8c280a38 + iVar1 * 8) = 0;
    *(undefined4 *)(iVar1 * 8 + 0x8c280a38 + 4) = 0;
  }
  return 6;
}

__asm__(".globl _FUN_8c06a524\n.set _FUN_8c06a524, _FUN_8c06a524_def\n");
//@unit 8c06a5f0
#include "../decls.h"
ulonglong * FUN_8c06a5f0_def(int ar4,ulonglong *ar5,int ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  int iVar5;
  uint in_fr1;
  undefined4 uVar6;
  ulonglong uVar7;
  double dVar8;
  char cVar9;
  char cVar10;
  
  cVar10 = '\0';
  cVar9 = '\0';
  if (*(int *)(ar4 + 0x218) == -1) {
    _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
  }
  if (-1 < *(int *)(ar4 + 0x21c)) {
    iVar3 = *(int *)(ar4 + 0x218);
    if (iVar3 == 0) {
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 0;
      if (*(int *)(ar4 + 0x230) == 3) {
        _DAT_8c280998 = _DAT_8c280998 + -1;
        _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      }
    }
    else if (iVar3 == 1) {
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 0;
      if (*(int *)(ar4 + 0x230) == 3) {
        if (*(int *)(ar4 + 0x210) < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + -1;
        }
        else {
          _DAT_8c28099c = _DAT_8c28099c + -1;
        }
        _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      }
    }
    else if ((iVar3 == 2) &&
            (*(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 0,
            *(int *)(ar4 + 0x230) == 3)) {
      _DAT_8c2809a4 = _DAT_8c2809a4 + -1;
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
    }
    *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
  }
  iVar3 = ar6;
  if (ar6 == 0) {
    *(undefined4 *)(ar4 + 0x218) = 0;
    uVar1 = rand(ar4,ar5,0,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,7,iVar3,ar7);
    iVar5 = 7;
    while ((*(int *)(iVar2 * 8 + -0x73d7f648) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (6 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f648) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f544);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 1) {
    *(undefined4 *)(ar4 + 0x218) = 1;
    uVar1 = rand(ar4,ar5,1,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(iVar2 * 8 + -0x73d7f604) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f604) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f48c);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else if (ar6 == 2) {
    *(undefined4 *)(ar4 + 0x218) = 2;
    uVar1 = rand(ar4,ar5,2,ar7);
    iVar2 = libgcc_divide_helper_01031c(uVar1,6,iVar3,ar7);
    iVar5 = 6;
    while ((*(int *)(iVar2 * 8 + -0x73d7f5c8) == 1 && (0 < iVar5))) {
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + -1;
      if (5 < iVar2) {
        iVar2 = 0;
      }
    }
    if (0 < iVar5) {
      *(undefined4 *)(iVar2 * 8 + -0x73d7f5c8) = 1;
      *(int *)(ar4 + 0x21c) = iVar2;
    }
    puVar4 = (ulonglong *)(iVar2 * 0x10 + -0x73d7f3e4);
    iVar2 = ar4 + 0x30;
    Vec3_assign(iVar2,puVar4,iVar3,ar7);
  }
  else {
    iVar2 = ar4;
    puVar4 = ar5;
    if (ar6 == 3) {
      *(undefined4 *)(ar4 + 0x218) = 3;
      *(undefined4 *)(ar4 + 0x21c) = 0xffffffff;
    }
  }
  uVar7 = (ulonglong)in_fr1;
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x50) = uVar7;
  }
  uVar1 = rand(iVar2,puVar4,iVar3,ar7);
  uVar6 = (undefined4)uVar7;
  iVar3 = libgcc_divide_helper_01031c(uVar1,0x168,iVar3,ar7);
  if (cVar9 == '\0') {
    dVar8 = (double)CONCAT44((float)iVar3,uVar6);
  }
  else {
    dVar8 = (double)iVar3;
  }
  if (cVar10 == '\0') {
    *(int *)(ar4 + 0x54) = (int)((ulonglong)dVar8 >> 0x20);
  }
  else {
    *(double *)(ar4 + 0x54) = dVar8;
  }
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x58) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x58) = (ulonglong)dVar8 & 0xffffffff;
  }
  *(undefined4 *)(ar4 + 0x230) = 1;
  if (cVar10 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = 0;
  }
  else {
    *(ulonglong *)(ar4 + 0x244) = (ulonglong)dVar8 & 0xffffffff;
  }
  if (ar6 == 3) {
    if (cVar10 == '\0') {
      *(undefined4 *)ar5 = 0;
    }
    else {
      *ar5 = (ulonglong)dVar8 & 0xffffffff;
    }
    puVar4 = (ulonglong *)((int)ar5 + 4);
    if (cVar10 == '\0') {
      *(undefined4 *)puVar4 = 0;
    }
    else {
      *puVar4 = (ulonglong)dVar8 & 0xffffffff;
    }
    if (cVar10 == '\0') {
      *(undefined4 *)(ar5 + 1) = 0;
    }
    else {
      ar5[1] = (ulonglong)dVar8 & 0xffffffff;
    }
  }
  else {
    if (cVar10 == '\0') {
      *(undefined4 *)ar5 = *(undefined4 *)(ar4 + 0x30);
      *(undefined4 *)(ar5 + 1) = *(undefined4 *)(ar4 + 0x38);
      *(undefined4 *)((int)ar5 + 4) = *(undefined4 *)(ar4 + 0x34);
    }
    else {
      *ar5 = *(ulonglong *)(ar4 + 0x30);
      ar5[1] = *(ulonglong *)(ar4 + 0x38);
      *(undefined8 *)((int)ar5 + 4) = *(undefined8 *)(ar4 + 0x34);
    }
    puVar4 = (ulonglong *)(ar4 + 0x38);
  }
  return puVar4;
}

__asm__(".globl _FUN_8c06a5f0\n.set _FUN_8c06a5f0, _FUN_8c06a5f0_def\n");
//@unit 8c06a9e8
#include "../decls.h"
undefined4 * FUN_8c06a9e8_def(int ar4,undefined4 *ar5,undefined4 *ar6,undefined4 *ar7)

{
  *ar5 = *(undefined4 *)(ar4 + 0x30);
  *ar6 = *(undefined4 *)(ar4 + 0x34);
  *ar7 = *(undefined4 *)(ar4 + 0x38);
  return (undefined4 *)(ar4 + 0x34);
}

__asm__(".globl _FUN_8c06a9e8\n.set _FUN_8c06a9e8, _FUN_8c06a9e8_def\n");
//@unit 8c06aa04
#include "../decls.h"
undefined4 FUN_8c06aa04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  double dVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 in_fr4;
  undefined8 in_dr14;
  double dVar11;
  undefined8 in_xd0;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 in_xd14;
  bool bVar14;
  char cVar15;
  char cVar16;
  undefined4 in_stack_00000000;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  undefined4 uStack_18;
  
  cVar16 = '\0';
  cVar15 = '\0';
  dVar11 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  Vec3_ctor_zero(&fStack_24,ar5,ar6,ar7);
  puVar1 = (undefined4 *)deref_u32(0x8c280954,ar5,ar6,ar7);
  piVar2 = *(int **)*puVar1;
  while( true ) {
    fVar4 = (float)*piVar2;
    dVar6 = (double)(ulonglong)(uint)fVar4;
    if (cVar15 == '\0' && fVar4 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar4 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar4,SUB84(dVar6,0) + fVar4);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    fVar4 = SUB84(dVar11,0);
    if (cVar15 == '\0') {
      bVar14 = SUB84(dVar6,0) < fVar4;
    }
    else {
      bVar14 = dVar6 < dVar11;
    }
    if (!bVar14) break;
    piVar2 = piVar2 + 4;
  }
  fVar5 = (float)*piVar2;
  if (cVar15 == '\0' && fVar5 < 0.0) {
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(0x4f800000,fVar5);
    }
    else {
      dVar6 = -7.932371899434731e-251;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
  }
  if (fVar5 == fVar4) {
    if (cVar16 == '\0') {
      fStack_24 = (float)(uint)piVar2[1];
      fStack_20 = (float)(uint)piVar2[2];
      fStack_1c = (float)(uint)piVar2[3];
    }
    else {
      fStack_24 = (float)*(undefined8 *)(piVar2 + 1);
      fStack_20 = (float)*(undefined8 *)(piVar2 + 2);
      fStack_1c = (float)*(undefined8 *)(piVar2 + 3);
      uStack_18 = (undefined4)((ulonglong)*(undefined8 *)(piVar2 + 3) >> 0x20);
    }
  }
  else {
    piVar3 = piVar2 + -4;
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[1],in_fr3);
      dVar7 = (double)CONCAT44(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + 1);
      dVar7 = *(double *)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar7 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar5,SUB84(dVar7,0) + fVar5);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)((ulonglong)dVar6 >> 0x20) / SUB84(dVar7,0),SUB84(dVar6,0));
    }
    else {
      dVar6 = dVar6 / dVar7;
    }
    fStack_24 = SUB84(dVar6,0);
    if (cVar16 == '\0') {
      dVar8 = (double)CONCAT44(piVar2[2],fStack_24);
      dVar7 = (double)CONCAT44(piVar2[-2],SUB84(dVar7,0));
      fStack_24 = (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      dVar8 = *(double *)(piVar2 + 2);
      dVar7 = *(double *)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) / SUB84(dVar6,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 / dVar6;
    }
    fStack_20 = SUB84(dVar8,0);
    if (cVar16 == '\0') {
      dVar7 = (double)CONCAT44(piVar2[3],fStack_20);
      dVar6 = (double)CONCAT44(piVar2[-1],SUB84(dVar6,0));
      fStack_20 = (float)(int)((ulonglong)dVar8 >> 0x20);
    }
    else {
      dVar7 = *(double *)(piVar2 + 3);
      dVar6 = *(double *)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - (float)((ulonglong)dVar6 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar6;
    }
    fVar5 = (float)(*piVar2 - *piVar3);
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) / SUB84(dVar6,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 / dVar6;
    }
    uVar9 = (undefined4)((ulonglong)dVar7 >> 0x20);
    fStack_1c = (float)SUB84(dVar7,0);
    if (cVar16 == '\0') {
      fStack_1c = (float)uVar9;
      uVar9 = uStack_18;
    }
    uStack_18 = uVar9;
    if (cVar15 == '\0') {
      dVar7 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar7 = (double)*piVar3;
    }
    dVar8 = (double)((ulonglong)dVar6 & 0xffffffff);
    fVar5 = (float)((ulonglong)dVar7 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = fVar5 < 0.0;
    }
    else {
      bVar14 = dVar7 < dVar8;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar8 = (double)CONCAT44(0x4f800000,SUB84(dVar6,0));
      }
      else {
        dVar8 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar7 = (double)CONCAT44(fVar5 + (float)((ulonglong)dVar8 >> 0x20),SUB84(dVar7,0));
      }
      else {
        dVar7 = dVar7 + dVar8;
      }
    }
    uVar12 = in_xd14;
    if (cVar16 == '\0') {
      dVar8 = (double)CONCAT44((int)((ulonglong)dVar8 >> 0x20),fVar4);
      uVar12 = in_xd0;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar8,0) - (float)((ulonglong)dVar7 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar8 - dVar7,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_24,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_20,fStack_24);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-3],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + -3);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 + dVar6,0);
    }
    fStack_24 = fVar5;
    if (cVar16 != '\0') {
      fStack_24 = (float)uVar12;
      fStack_20 = (float)((ulonglong)uVar12 >> 0x20);
    }
    if (cVar15 == '\0') {
      dVar6 = (double)CONCAT44((float)*piVar3,SUB84(dVar7,0));
    }
    else {
      dVar6 = (double)*piVar3;
    }
    dVar7 = (double)(ulonglong)(uint)fVar5;
    fVar10 = (float)((ulonglong)dVar6 >> 0x20);
    if (cVar15 == '\0') {
      bVar14 = fVar10 < 0.0;
    }
    else {
      bVar14 = dVar6 < dVar7;
    }
    if (bVar14) {
      if (cVar16 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar7 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        dVar6 = (double)CONCAT44(fVar10 + (float)((ulonglong)dVar7 >> 0x20),SUB84(dVar6,0));
      }
      else {
        dVar6 = dVar6 + dVar7;
      }
    }
    uVar13 = in_xd14;
    if (cVar16 == '\0') {
      dVar7 = (double)CONCAT44((int)((ulonglong)dVar7 >> 0x20),fVar4);
      uVar13 = uVar12;
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar7,0) - (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar7 - dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_20,fVar5);
    }
    else {
      dVar6 = (double)CONCAT44(fStack_1c,fStack_20);
    }
    if (cVar15 == '\0') {
      fVar5 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar5 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-2],fVar5);
    }
    else {
      dVar6 = *(double *)(piVar2 + -2);
    }
    if (cVar15 == '\0') {
      fStack_20 = SUB84(dVar6,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_20 = SUB84(dVar6 + dVar6,0);
    }
    if (cVar16 != '\0') {
      fStack_20 = (float)uVar13;
      fStack_1c = (float)((ulonglong)uVar13 >> 0x20);
    }
    fVar5 = (float)*piVar3;
    dVar6 = (double)(ulonglong)(uint)fVar5;
    if (cVar15 == '\0' && fVar5 < 0.0) {
      if (cVar16 == '\0') {
        dVar6 = (double)CONCAT44(0x4f800000,fVar5);
      }
      else {
        dVar6 = -7.932371899434731e-251;
      }
      if (cVar15 == '\0') {
        fVar5 = (float)((ulonglong)dVar6 >> 0x20);
        dVar6 = (double)CONCAT44(fVar5,SUB84(dVar6,0) + fVar5);
      }
      else {
        dVar6 = dVar6 + dVar6;
      }
    }
    if (cVar15 == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),fVar4 - SUB84(dVar6,0));
    }
    else {
      dVar11 = dVar11 - dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(fStack_1c,SUB84(dVar6,0));
    }
    else {
      dVar6 = (double)CONCAT44(uStack_18,fStack_1c);
    }
    if (cVar15 == '\0') {
      dVar11 = (double)CONCAT44((int)((ulonglong)dVar11 >> 0x20),
                                SUB84(dVar11,0) * (float)((ulonglong)dVar6 >> 0x20));
    }
    else {
      dVar11 = dVar11 * dVar6;
    }
    if (cVar16 == '\0') {
      dVar6 = (double)CONCAT44(piVar2[-1],SUB84(dVar6,0));
    }
    else {
      dVar6 = *(double *)(piVar2 + -1);
    }
    if (cVar15 == '\0') {
      fStack_1c = SUB84(dVar11,0) + (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_1c = SUB84(dVar11 + dVar6,0);
    }
    if (cVar16 != '\0') {
      fStack_1c = (float)in_xd14;
      uStack_18 = (undefined4)((ulonglong)in_xd14 >> 0x20);
    }
  }
  Vec3_ctor_copy(in_stack_00000000,&fStack_24,ar6,ar7);
  Vec3_dtor(&fStack_24,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06aa04\n.set _FUN_8c06aa04, _FUN_8c06aa04_def\n");
//@unit 8c06abb8
#include "../decls.h"
undefined4 FUN_8c06abb8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 in_fr3;
  double dVar8;
  undefined4 in_fr4;
  undefined8 in_dr14;
  undefined8 in_xd0;
  double in_xd14;
  bool bVar9;
  float in_PR;
  char cVar10;
  char cVar11;
  undefined4 in_stack_00000000;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  cVar11 = '\0';
  cVar10 = '\0';
  dVar6 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),in_fr4);
  fStack_14 = in_PR;
  Vec3_set_zero(&fStack_20,ar5,ar6,ar7);
  piVar1 = (int *)deref_u32(0x8c280954,ar5,ar6,ar7);
  piVar1 = *(int **)(*piVar1 + 4);
  while( true ) {
    fVar3 = (float)*piVar1;
    dVar5 = (double)(ulonglong)(uint)fVar3;
    if (cVar10 == '\0' && fVar3 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar3);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar3 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar3,SUB84(dVar5,0) + fVar3);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    fVar3 = SUB84(dVar6,0);
    if (cVar10 == '\0') {
      bVar9 = SUB84(dVar5,0) < fVar3;
    }
    else {
      bVar9 = dVar5 < dVar6;
    }
    if (!bVar9) break;
    piVar1 = piVar1 + 4;
  }
  fVar4 = (float)*piVar1;
  if (cVar10 == '\0' && fVar4 < 0.0) {
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x4f800000,fVar4);
    }
    else {
      dVar5 = 1.4411522222084588e+18;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) + (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 + dVar5,0);
    }
  }
  if (fVar4 == fVar3) {
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[1]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    fStack_20 = (float)in_xd0;
    fVar4 = fStack_20;
    if (cVar11 == '\0') {
      fStack_20 = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[2]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 / dVar6,0);
    }
    fStack_1c = fVar4;
    if (cVar11 == '\0') {
      fStack_1c = fVar3;
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[3]);
    }
    else {
      dVar6 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar6,0) * (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar6 * dVar6,0);
    }
    if (cVar11 == '\0') {
      dVar6 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar6 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fStack_18 = SUB84(dVar6,0) / (float)((ulonglong)dVar6 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar6 / dVar6,0);
    }
    if (cVar11 != '\0') {
      fStack_14 = (float)((ulonglong)in_xd0 >> 0x20);
      fStack_18 = fVar4;
    }
  }
  else {
    piVar2 = piVar1 + -4;
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[1] - piVar1[-3]),in_fr3);
    }
    else {
      dVar5 = (double)(piVar1[1] - piVar1[-3]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,fVar4);
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fStack_20 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_20 = (float)((ulonglong)dVar5 >> 0x20);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[2] - piVar1[-2]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[2] - piVar1[-2]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fStack_1c = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_1c = (float)((ulonglong)dVar5 >> 0x20);
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)(piVar1[3] - piVar1[-1]),SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)(piVar1[3] - piVar1[-1]);
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x43b40000,SUB84(dVar7,0));
    }
    else {
      dVar7 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) * (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 * dVar7;
    }
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(0x47800000,SUB84(dVar7,0));
    }
    else {
      dVar7 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / (float)((ulonglong)dVar7 >> 0x20)
                               ,SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)(*piVar1 - *piVar2);
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    if (cVar10 == '\0') {
      dVar5 = (double)CONCAT44((float)((ulonglong)dVar5 >> 0x20) / SUB84(dVar7,0),SUB84(dVar5,0));
    }
    else {
      dVar5 = dVar5 / dVar7;
    }
    fVar4 = (float)((ulonglong)dVar5 >> 0x20);
    fStack_18 = SUB84(dVar5,0);
    if (cVar11 == '\0') {
      fStack_18 = fVar4;
      fVar4 = fStack_14;
    }
    fStack_14 = fVar4;
    fVar4 = (float)*piVar2;
    dVar7 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar7 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar7 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar7 >> 0x20);
        dVar7 = (double)CONCAT44(fVar4,SUB84(dVar7,0) + fVar4);
      }
      else {
        dVar7 = dVar7 + dVar7;
      }
    }
    dVar8 = in_xd14;
    if (cVar11 == '\0') {
      dVar8 = (double)CONCAT44(fVar3,SUB84(dVar5,0));
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) - SUB84(dVar7,0),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 - dVar7;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_20,SUB84(dVar7,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_1c,fStack_20);
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-3]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar8 = (double)CONCAT44((float)((ulonglong)dVar8 >> 0x20) +
                               SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar8,0));
    }
    else {
      dVar8 = dVar8 + dVar5 / dVar5;
    }
    fVar4 = (float)((ulonglong)dVar8 >> 0x20);
    fStack_20 = SUB84(dVar8,0);
    if (cVar11 == '\0') {
      fStack_20 = fVar4;
      fVar4 = fStack_1c;
    }
    fStack_1c = fVar4;
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    dVar7 = in_xd14;
    if (cVar11 == '\0') {
      dVar7 = (double)CONCAT44(fVar3,SUB84(dVar8,0));
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) - SUB84(dVar5,0),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_1c,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_18,fStack_1c);
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) * (float)((ulonglong)dVar5 >> 0x20)
                               ,SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-2]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar4 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar4 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar4);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      dVar7 = (double)CONCAT44((float)((ulonglong)dVar7 >> 0x20) +
                               SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20),SUB84(dVar7,0));
    }
    else {
      dVar7 = dVar7 + dVar5 / dVar5;
    }
    fVar4 = (float)((ulonglong)dVar7 >> 0x20);
    fStack_1c = fVar4;
    if (cVar11 != '\0') {
      fStack_1c = SUB84(dVar7,0);
      fStack_18 = fVar4;
    }
    fVar4 = (float)*piVar2;
    dVar5 = (double)(ulonglong)(uint)fVar4;
    if (cVar10 == '\0' && fVar4 < 0.0) {
      if (cVar11 == '\0') {
        dVar5 = (double)CONCAT44(0x4f800000,fVar4);
      }
      else {
        dVar5 = 1.4411522222084588e+18;
      }
      if (cVar10 == '\0') {
        fVar4 = (float)((ulonglong)dVar5 >> 0x20);
        dVar5 = (double)CONCAT44(fVar4,SUB84(dVar5,0) + fVar4);
      }
      else {
        dVar5 = dVar5 + dVar5;
      }
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),fVar3 - SUB84(dVar5,0));
    }
    else {
      dVar6 = dVar6 - dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(fStack_18,SUB84(dVar5,0));
    }
    else {
      dVar5 = (double)CONCAT44(fStack_14,fStack_18);
    }
    if (cVar10 == '\0') {
      dVar6 = (double)CONCAT44((int)((ulonglong)dVar6 >> 0x20),
                               SUB84(dVar6,0) * (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      dVar6 = dVar6 * dVar5;
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x43b40000,(float)(uint)piVar1[-1]);
    }
    else {
      dVar5 = 2.6584566620691055e+36;
    }
    if (cVar10 == '\0') {
      fVar3 = SUB84(dVar5,0) * (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fVar3 = SUB84(dVar5 * dVar5,0);
    }
    if (cVar11 == '\0') {
      dVar5 = (double)CONCAT44(0x47800000,fVar3);
    }
    else {
      dVar5 = -8.166723480339562e-251;
    }
    if (cVar10 == '\0') {
      fStack_18 = SUB84(dVar6,0) + SUB84(dVar5,0) / (float)((ulonglong)dVar5 >> 0x20);
    }
    else {
      fStack_18 = SUB84(dVar6 + dVar5 / dVar5,0);
    }
    if (cVar11 != '\0') {
      fStack_18 = SUB84(in_xd14,0);
      fStack_14 = (float)((ulonglong)in_xd14 >> 0x20);
    }
  }
  vec3_copy_8c02b5fc(in_stack_00000000,&fStack_20,ar6,ar7);
  object_dtor_delete(&fStack_20,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06abb8\n.set _FUN_8c06abb8, _FUN_8c06abb8_def\n");
//@unit 8c06add8
#include "../decls.h"
undefined4 FUN_8c06add8_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  float fVar1;
  undefined8 in_dr0;
  float fVar3;
  double dVar2;
  float in_fr15;
  undefined4 in_fr14;
  bool bVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  (**(code **)(*ar5 + 0x184))(ar5,ar5,ar6,ar7);
  fVar1 = (float)in_dr0;
  if (cVar6 == '\0') {
    in_fr15 = (float)((ulonglong)in_dr0 >> 0x20);
  }
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffbf;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffef;
  *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) & 0xffffffdf;
  if (cVar6 == '\0') {
    fVar3 = 1.1754944e-38;
  }
  else {
    fVar1 = 1.1754944e-38;
    fVar3 = -NAN;
  }
  if (in_fr15 == fVar3) {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,ar6,ar7);
    if (cVar6 == '\0') {
      fVar1 = *(float *)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
    else {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
    }
  }
  else {
    (**(code **)(*ar5 + 0x128))(ar5,ar4 + 0x30,ar6,ar7);
    if (cVar6 == '\0') {
      fVar1 = *(float *)(ar4 + 0x34);
    }
    if (cVar5 != '\0' || fVar1 <= fVar3) {
      *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x20;
    }
    else {
      if (cVar6 == '\0') {
        dVar2 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x34),fVar1);
      }
      else {
        dVar2 = *(double *)(ar4 + 0x34);
      }
      if (cVar5 == '\0') {
        bVar4 = in_fr15 < (float)((ulonglong)dVar2 >> 0x20);
      }
      else {
        bVar4 = (double)CONCAT44(in_fr14,in_fr15) < dVar2;
      }
      if (bVar4) {
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x40;
      }
      else {
        *(uint *)(ar4 + 0x74) = *(uint *)(ar4 + 0x74) | 0x10;
      }
    }
  }
  return 0x74;
}

__asm__(".globl _FUN_8c06add8\n.set _FUN_8c06add8, _FUN_8c06add8_def\n");
//@unit 8c06af1c
#include "../decls.h"
undefined4 FUN_8c06af1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 9; iVar1 = iVar1 + 1) {
    if ('\0' < *(char *)(0x248 + ar4 + iVar1)) {
      *(char *)(0x248 + ar4 + iVar1) = *(char *)(0x248 + ar4 + iVar1) + -1;
    }
  }
  return 9;
}

__asm__(".globl _FUN_8c06af1c\n.set _FUN_8c06af1c, _FUN_8c06af1c_def\n");
//@unit 8c06af5c
#include "../decls.h"
int FUN_8c06af5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = ar5;
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  *(short *)(0x264 + ar4) = (short)uVar1;
  uVar2 = FUN_8c02602c(ar5,uVar2,ar6,ar7);
  iVar3 = 0x266;
  *(short *)(0x266 + ar4) = (short)uVar2;
  return iVar3;
}

__asm__(".globl _FUN_8c06af5c\n.set _FUN_8c06af5c, _FUN_8c06af5c_def\n");
//@unit 8c06afb0
#include "../decls.h"
int FUN_8c06afb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  uVar1 = FUN_8c028ee4(ar5,ar5,ar6,ar7);
  if (*(short *)(0x264 + ar4) == (short)uVar1) {
    uVar2 = FUN_8c02602c(ar5,ar5_00,ar6,ar7);
    iVar4 = (uVar2 & 0xffff) - (int)*(short *)(0x266 + ar4);
  }
  else {
    uVar2 = FUN_8c02602c(ar5,ar5_00,ar6,ar7);
    uVar3 = FUN_8c028ee4(ar5,ar5_00,ar6,ar7);
    iVar4 = (0x3840 - *(short *)(0x266 + ar4)) +
            (((uVar3 & 0xffff) - (uint)*(ushort *)(0x264 + ar4)) + -1) * 0x3840 +
            (uVar2 & 0xffff);
  }
  return iVar4;
}

__asm__(".globl _FUN_8c06afb0\n.set _FUN_8c06afb0, _FUN_8c06afb0_def\n");
//@unit 8c06b054
#include "../decls.h"
undefined4 FUN_8c06b054_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  float extraout_fr1;
  float extraout_fr1_00;
  float extraout_fr1_01;
  float fVar2;
  float extraout_fr0;
  float extraout_fr0_00;
  float extraout_fr0_01;
  char cVar3;
  char cVar4;
  
  cVar4 = '\0';
  cVar3 = '\0';
  uVar1 = 1;
  if (ar4 < 7) {
    if (*(int *)(ar4 * 8 + -0x73d7f644) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c06b410(*(undefined4 *)(ar4 * 8 + -0x73d7f644),ar5,ar6,ar7);
      fVar2 = extraout_fr1;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (ar4 < 0xd) {
    if (*(int *)((ar4 + -7) * 8 + -0x73d7f600) == 0) {
      uVar1 = 0;
    }
    else {
      FUN_8c06b410(*(undefined4 *)((ar4 + -7) * 8 + -0x73d7f600),ar5,ar6,ar7);
      fVar2 = extraout_fr1_00;
      if (cVar4 == '\0') {
        fVar2 = extraout_fr0_00;
      }
      if (cVar3 == '\0' && 0.0 < fVar2) {
        uVar1 = 0;
      }
    }
  }
  else if (*(int *)((ar4 + -1) * 8 + -0x73d7f5c4) == 0) {
    uVar1 = 1;
  }
  else {
    FUN_8c06b410(*(undefined4 *)((ar4 + -1) * 8 + -0x73d7f5c4),ar5,ar6,ar7);
    fVar2 = extraout_fr1_01;
    if (cVar4 == '\0') {
      fVar2 = extraout_fr0_01;
    }
    if (cVar3 == '\0' && 0.0 < fVar2) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b054\n.set _FUN_8c06b054, _FUN_8c06b054_def\n");
//@unit 8c06b154
#include "../decls.h"
undefined4 FUN_8c06b154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = FUN_8c06b430(*(undefined4 *)(ar4 * 8 + 0x8c2809b8 + 4),ar5,ar6,ar7);
  }
  else if (ar4 < 0xd) {
    uVar1 = (*(code *)(&FUN_8c06b430))
                      (*(undefined4 *)((ar4 + -7) * 8 + 0x8c2809fc + 4),ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)(&FUN_8c06b430))
                      (*(undefined4 *)((ar4 + -1) * 8 + 0x8c280a38 + 4),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b154\n.set _FUN_8c06b154, _FUN_8c06b154_def\n");
//@unit 8c06b1d8
#include "../decls.h"
undefined4 FUN_8c06b1d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = FUN_8c06b278(*(undefined4 *)(ar4 * 8 + 0x8c2809b8 + 4),ar5,ar6,ar7);
  }
  else if (ar4 < 0xd) {
    uVar1 = (*(code *)(&FUN_8c06b278))
                      (*(undefined4 *)((ar4 + -7) * 8 + 0x8c2809fc + 4),ar5,ar6,ar7);
  }
  else {
    uVar1 = (*(code *)(&FUN_8c06b278))
                      (*(undefined4 *)((ar4 + -1) * 8 + 0x8c280a38 + 4),ar5,ar6,ar7);
  }
  return uVar1;
}

__asm__(".globl _FUN_8c06b1d8\n.set _FUN_8c06b1d8, _FUN_8c06b1d8_def\n");
//@unit 8c06b25c
#include "../decls.h"
int FUN_8c06b25c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  iVar1 = 0x214;
  *(uint *)(0x214 + ar4) = *(uint *)(0x214 + ar4) | ar5;
  return iVar1;
}

__asm__(".globl _FUN_8c06b25c\n.set _FUN_8c06b25c, _FUN_8c06b25c_def\n");
//@unit 8c06b278
#include "../decls.h"
int FUN_8c06b278_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  uint uVar1;
  int iVar2;
  
  if ((int)ar5 < 0) {
    uVar1 = 1 >> (~ar5 & 0x1f) + 1;
  }
  else {
    uVar1 = 1 << (ar5 & 0x1f);
  }
  iVar2 = 0x214;
  *(uint *)(0x214 + ar4) = *(uint *)(0x214 + ar4) & ~uVar1;
  return iVar2;
}

__asm__(".globl _FUN_8c06b278\n.set _FUN_8c06b278, _FUN_8c06b278_def\n");
//@unit 8c06b29c
#include "../decls.h"
int FUN_8c06b29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint ar5_00;
  uint auStack_2c [5];
  
  ar5_00 = 1;
  auStack_2c[0] = *(uint *)(&DATA_8c1371b0);
  auStack_2c[1] = *(undefined4 *)((&DATA_8c1371b0) + 4);
  auStack_2c[2] = *(undefined4 *)((&DATA_8c1371b0) + 8);
  auStack_2c[3] = *(undefined4 *)((&DATA_8c1371b0) + 0xc);
  iVar1 = -1;
  iVar2 = ar6;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*(uint *)(0x214 + ar4) | auStack_2c[ar5]) & ar5_00;
    if ((uVar3 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) {
      iVar2 = iVar2 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar3 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) && (0 < iVar2));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    FUN_8c06b25c(ar4,ar5_00,ar6,ar7);
    iVar2 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c06b29c\n.set _FUN_8c06b29c, _FUN_8c06b29c_def\n");
//@unit 8c06b35c
#include "../decls.h"
int FUN_8c06b35c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  uint ar5_00;
  
  ar5_00 = 1;
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = (*(uint *)(0x214 + ar4) | 0x1ab) & ar5_00;
    if ((uVar2 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) {
      ar5 = ar5 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar2 != 0) || (*(char *)(0x248 + ar4 + iVar1) == '\x02')) && (0 < ar5));
  if (ar5 < 1) {
    iVar1 = -1;
  }
  else {
    FUN_8c06b25c(ar4,ar5_00,ar6,ar7);
    iVar1 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06b35c\n.set _FUN_8c06b35c, _FUN_8c06b35c_def\n");
//@unit 8c06b3f4
#include "../decls.h"
undefined4 get_field_210_06b3f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return *(undefined4 *)(0x210 + ar4);
}

__asm__(".globl _get_field_210_06b3f4\n.set _get_field_210_06b3f4, _get_field_210_06b3f4_def\n");
//@unit 8c06b400
#include "../decls.h"
undefined4 FUN_8c06b400_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x240;
}

__asm__(".globl _FUN_8c06b400\n.set _FUN_8c06b400, _FUN_8c06b400_def\n");
//@unit 8c06b410
#include "../decls.h"
undefined4 FUN_8c06b410_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0x244;
}

__asm__(".globl _FUN_8c06b410\n.set _FUN_8c06b410, _FUN_8c06b410_def\n");
//@unit 8c06b420
#include "../decls.h"
int FUN_8c06b420_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return ar4 + 0x204;
}

__asm__(".globl _FUN_8c06b420\n.set _FUN_8c06b420, _FUN_8c06b420_def\n");
//@unit 8c06b430
#include "../decls.h"
int FUN_8c06b430_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x248;
  iVar2 = 2;
  if (*(char *)(0x248 + ar4 + ar5) < '\x02') {
    *(char *)(0x248 + ar4 + ar5) = *(char *)(0x248 + ar4 + ar5) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl _FUN_8c06b430\n.set _FUN_8c06b430, _FUN_8c06b430_def\n");
//@unit 8c06b460
#include "../decls.h"
undefined4 FUN_8c06b460_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined4 ar4_00;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined4 *ar5_00;
  undefined4 unaff_r13;
  float fVar6;
  double dVar7;
  int iVar8;
  int ar6_00;
  int iVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_fffffef4;
  
  cVar11 = '\0';
  cVar10 = '\0';
  FUN_8c233dac(ar4 + 0x254,ar5,ar6,ar7);
  FUN_8c256328(0,ar5,ar6,ar7,in_stack_fffffef4);
  FUN_8c25b5d0(0,ar5,ar6,ar7,in_stack_fffffef4);
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x58));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar8 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar8 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x54));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    ar6_00 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    ar6_00 = (int)(dVar7 / dVar7);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x47800000,*(undefined4 *)(ar4 + 0x50));
  }
  else {
    dVar7 = 1.4411521878487204e+18;
  }
  if (cVar10 == '\0') {
    fVar6 = SUB84(dVar7,0) * (float)((ulonglong)dVar7 >> 0x20);
  }
  else {
    fVar6 = SUB84(dVar7 * dVar7,0);
  }
  if (cVar11 == '\0') {
    dVar7 = (double)CONCAT44(0x43b40000,fVar6);
  }
  else {
    dVar7 = -3.739346301775294e-250;
  }
  if (cVar10 == '\0') {
    iVar9 = (int)(SUB84(dVar7,0) / (float)((ulonglong)dVar7 >> 0x20));
  }
  else {
    iVar9 = (int)(dVar7 / dVar7);
  }
  FUN_8c256b0c(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
  if (*(int *)(ar4 + 0x220) < 1) {
    iVar9 = ar4 + 100;
    FUN_8c256fec(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
    FUN_8c01538c(*(int *)(ar4 + 0x224) + *(int *)(ar4 + 0x220) * 0x124 + 0x78,iVar9,ar6_00,iVar8);
    uVar4 = FUN_8c015bb8(*(int *)(ar4 + 0x224) + *(int *)(ar4 + 0x220) * 0x124 + 0x70,iVar9,ar6_00,
                         iVar8);
    FUN_8c219a9a(uVar4,iVar9,ar6_00,iVar8);
  }
  else {
    FUN_8c256fec(0,iVar9,ar6_00,iVar8,in_stack_fffffef4);
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(iVar2 + 0x2c) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x234);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x234);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x238);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x20);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x24);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
    puVar5 = (undefined8 *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x28);
    if (cVar11 == '\0') {
      *(undefined4 *)puVar5 = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *puVar5 = *(undefined8 *)(ar4 + 0x23c);
    }
    if (*(int *)(ar4 + 0x210) < 4) {
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x25;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x24;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                      0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x37;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x30) = 0x35;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x37;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x30) =
           0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                          0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c);
      iVar9 = *(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x30) + 0x30);
      **(undefined4 **)(iVar9 + 0x2c) = 0x37;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x30) = 0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x37;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x35;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x37;
    }
    else {
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) = 0x2d;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c)
        + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x30) + 0x30) + 0x2c)
                          + 0x2c) + 0x2c) + 0x2c) = 0x2c;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) +
                                                                       0x30) + 0x30) + 0x2c) + 0x2c)
                                   + 0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar2 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 
                                                  0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) + 0x2c) +
                                   0x2c) + 0x2c) + 0x2c) + 0x2c) = 0x3f;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar8);
      ar5_00 = *(undefined4 **)
                (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30);
      *ar5_00 = 0x3d;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) + 0x2c) =
           0x3f;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,ar5_00,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar2 + 0x2c) + 0x2c) + 0x2c) + 0x2c)
                          + 0x2c) + 0x30) + 0x30) = 0x3d;
      iVar9 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(iVar9 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                 0x30) + 0x2c) = 0x3f;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar2,ar6_00,iVar8);
      iVar2 = *(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int
                                                                                                 *)(
                                                  *(int *)(iVar8 + 0x2c) + 0x30) + 0x30) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x30) +
                      0x30);
      **(undefined4 **)(iVar2 + 0x30) = 0x3d;
      iVar9 = ar4 + 0x204;
      iVar8 = FUN_8c015bb8(iVar9,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x2c) = 0x3f;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(iVar8 + 0x2c) + 0x30) + 0x30) +
                                                  0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                   0x30) + 0x30) + 0x30) + 0x30) = 0x3d;
      iVar8 = FUN_8c015bb8(ar4 + 0x204,iVar9,ar6_00,iVar2);
      **(undefined4 **)
        (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*
                                                  (int *)(*(int *)(*(int *)(iVar8 + 0x2c) + 0x30) +
                                                         0x30) + 0x2c) + 0x2c) + 0x2c) + 0x2c) +
                                                  0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) + 0x30) +
        0x2c) = 0x3f;
    }
    iVar8 = 0;
    while( true ) {
      uVar4 = 4;
      iVar9 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,iVar2);
      if (iVar9 * 2 + 3 <= iVar8) break;
      if ((iVar8 < 9) && (-1 < iVar8)) {
                    
        switch(iVar8) {
        case 0:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 4) + 4);
          break;
        case 1:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) + 4) + 4);
          break;
        case 2:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) + 4) + 4);
          break;
        case 3:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c) + 0x30) +
                                         0x30) + 4) + 4);
          break;
        case 4:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30) + 0x2c) +
                                         0x30) + 4) + 4);
          break;
        case 5:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x2c)
                                                           + 0x30) + 0x30) + 0x30) + 4) + 4);
          break;
        case 6:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c) + 0x30)
                                                           + 0x2c) + 0x30) + 0x30) + 4) + 4);
          break;
        case 7:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(iVar9 + 0x2c)
                                                                             + 0x2c) + 0x30) + 0x30)
                                                  + 0x30) + 0x30) + 4) + 4);
          break;
        case 8:
          iVar9 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
          unaff_r13 = *(undefined4 *)
                       (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(
                                                  iVar9 + 0x2c) + 0x2c) + 0x30) + 0x30) + 0x30) +
                                                  0x30) + 0x30) + 4) + 4);
        }
      }
      iVar9 = thunk_FUN_8c0151e8(unaff_r13,8,ar6_00,iVar2);
      if (iVar9 != 0) {
        uVar1 = *(ushort *)(iVar9 + 2);
        iVar3 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,iVar2);
        *(ushort *)(iVar9 + 2) =
             *(short *)(&DAT_8c137008 +
                       ((int)*(char *)(ar4 + iVar8 + 0x248) + iVar8 * 3) * 2 + iVar3 * 0x36) +
             (uVar1 & 0xe000);
      }
      iVar8 = iVar8 + 1;
    }
    FUN_8c01538c(ar4 + 0x208,uVar4,ar6_00,iVar2);
    ar4_00 = FUN_8c015bb8(ar4 + 0x204,uVar4,ar6_00,iVar2);
    iVar9 = deref_u32(*(int *)(*(int *)(ar4 + 0x224) + 0x1c4) + *(int *)(ar4 + 0x228) * 4,uVar4,
                      ar6_00,iVar2);
    ar6_00 = FUN_8c026d74(*(int *)(*(int *)(ar4 + 0x224) + 0x1cc) + *(int *)(ar4 + 0x228) * 4,uVar4,
                          ar6_00,iVar2);
    iVar8 = ar6_00;
    FUN_8c21bbb0(ar4_00,iVar9,ar6_00,ar6_00,in_stack_fffffef4);
  }
  FUN_8c256210(1,iVar9,ar6_00,iVar8);
  uVar4 = FUN_8c233dac(&DAT_8c136f2c,iVar9,ar6_00,iVar8);
  return uVar4;
}

__asm__(".globl _FUN_8c06b460\n.set _FUN_8c06b460, _FUN_8c06b460_def\n");
//@unit 8c06c04c
#include "../decls.h"
undefined4 FUN_8c06c04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)(&FUN_8c01538c))
            (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 + 0x78,ar5,
             ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c015bb8))
                    (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 +
                     0x70,ar5,ar6,ar7);
  uVar1 = FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06c04c\n.set _FUN_8c06c04c, _FUN_8c06c04c_def\n");
//@unit 8c06c0b8
#include "../decls.h"
undefined4 FUN_8c06c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  (*(code *)(&FUN_8c01538c))
            (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 + 0x78,ar5,
             ar6,ar7);
  uVar1 = (*(code *)(&FUN_8c015bb8))
                    (*(int *)(0x224 + ar4) + *(int *)(0x220 + ar4) * 0x124 +
                     0x70,ar5,ar6,ar7);
  uVar1 = FUN_8c219a9a(uVar1,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06c0b8\n.set _FUN_8c06c0b8, _FUN_8c06c0b8_def\n");
//@unit 8c06c124
#include "../decls.h"
undefined4 FUN_8c06c124_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xd4;
}

__asm__(".globl _FUN_8c06c124\n.set _FUN_8c06c124, _FUN_8c06c124_def\n");
//@unit 8c06c13c
#include "../decls.h"
undefined4 * FUN_8c06c13c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c06c144;
}

__asm__(".globl _FUN_8c06c13c\n.set _FUN_8c06c13c, _FUN_8c06c13c_def\n");
//@unit 8c06c148
#include "../decls.h"
undefined4 s_herb3_pvm_06c14c_def(code *ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  uint uVar2;
  code *ar6_00;
  uint uVar3;
  code *ar7_00;
  char cVar4;
  uint auStack_2c [4];
  uint auStack_1c [5];
  
  cVar4 = '\0';
  auStack_2c[0] = DAT_8c1371c0;
  auStack_2c[1] = DAT_8c1371c4;
  auStack_2c[2] = DAT_8c1371c8;
  auStack_2c[3] = DAT_8c1371cc;
  auStack_1c[0] = DAT_8c1371d0;
  auStack_1c[1] = DAT_8c1371d4;
  auStack_1c[2] = DAT_8c1371d8;
  auStack_1c[3] = DAT_8c1371dc;
  FUN_8c0f4e34(ar4,ar5,ar6,ar7);
  Vec3_assign(ar4 + 0x30,ar5 + 0x1c,ar6,ar7);
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x50) = *(undefined4 *)(ar5 + 0x2c);
    *(undefined4 *)(ar4 + 0x54) = *(undefined4 *)(ar5 + 0x30);
    *(undefined4 *)(ar4 + 0x58) = *(undefined4 *)(ar5 + 0x34);
    *(undefined4 *)(ar4 + 0x5c) = *(undefined4 *)(ar5 + 0x38);
    *(undefined4 *)(ar4 + 0x60) = *(undefined4 *)(ar5 + 0x38);
    *(undefined4 *)(ar4 + 100) = *(undefined4 *)(ar5 + 0x38);
  }
  else {
    *(undefined8 *)(ar4 + 0x50) = *(undefined8 *)(ar5 + 0x2c);
    *(undefined8 *)(ar4 + 0x54) = *(undefined8 *)(ar5 + 0x30);
    *(undefined8 *)(ar4 + 0x58) = *(undefined8 *)(ar5 + 0x34);
    *(undefined8 *)(ar4 + 0x5c) = *(undefined8 *)(ar5 + 0x38);
    *(undefined8 *)(ar4 + 0x60) = *(undefined8 *)(ar5 + 0x38);
    *(undefined8 *)(ar4 + 100) = *(undefined8 *)(ar5 + 0x38);
  }
  ar7_00 = Vec3_assign;
  Vec3_assign(ar4 + 0x268,ar5 + 0x4c,ar6,Vec3_assign);
  vec3_copy_8c023d8c(ar4 + 0x278,ar5 + 0x5c,vec3_copy_8c023d8c,ar7_00);
  *(int *)(ar4 + 0x210) = (int)*(char *)(ar5 + 0x68);
  *(int *)(ar4 + 0x218) = (int)*(char *)(ar5 + 0x69);
  *(int *)(ar4 + 0x21c) = (int)*(char *)(ar5 + 0x6a);
  *(int *)(ar4 + 0x220) = (int)*(char *)(ar5 + 0x6b);
  *(int *)(ar4 + 0x230) = (int)*(char *)(ar5 + 0x6c);
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x244) = *(undefined4 *)(ar5 + 0x70);
  }
  else {
    *(undefined8 *)(ar4 + 0x244) = *(undefined8 *)(ar5 + 0x70);
  }
  *(undefined2 *)(ar4 + 0x264) = *(undefined2 *)(ar5 + 0x74);
  *(undefined2 *)(ar4 + 0x266) = *(undefined2 *)(ar5 + 0x76);
  ar6_00 = (code *)0x240;
  if (cVar4 == '\0') {
    *(undefined4 *)(ar4 + 0x240) = *(undefined4 *)(ar5 + 0x78);
    *(undefined4 *)(ar4 + 0x234) = *(undefined4 *)(ar5 + 0x7c);
    *(undefined4 *)(ar4 + 0x238) = *(undefined4 *)(ar5 + 0x80);
    *(undefined4 *)(ar4 + 0x23c) = *(undefined4 *)(ar5 + 0x84);
  }
  else {
    *(undefined8 *)(ar4 + 0x240) = *(undefined8 *)(ar5 + 0x78);
    *(undefined8 *)(ar4 + 0x234) = *(undefined8 *)(ar5 + 0x7c);
    *(undefined8 *)(ar4 + 0x238) = *(undefined8 *)(ar5 + 0x80);
    *(undefined8 *)(ar4 + 0x23c) = *(undefined8 *)(ar5 + 0x84);
  }
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,0x240,ar7_00);
  *(int *)(ar4 + 0x228) = iVar1 * 3 + 2;
  if (*(int *)(ar4 + 0x220) == 0) {
    if (*(int *)(ar4 + 0x230) == 3) {
      iVar1 = *(int *)(ar4 + 0x218);
      if (iVar1 == 0) {
        _DAT_8c280998 = _DAT_8c280998 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        if (*(int *)(ar4 + 0x210) < 4) {
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
        else {
          _DAT_8c28099c = _DAT_8c28099c + 1;
        }
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    else {
      _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
      if ((*(int *)(ar4 + 0x230) == 1) || (*(int *)(ar4 + 0x230) == 2)) {
        iVar1 = *(int *)(ar4 + 0x218);
        if (iVar1 == 0) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        }
        else if (iVar1 == 1) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        }
        else if (iVar1 == 2) {
          *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        }
      }
    }
  }
  else {
    if (*(int *)(ar4 + 0x210) < 4) {
      iVar1 = *(int *)(ar4 + 0x230);
      if ((iVar1 < 6) && (-1 < iVar1)) {
                    
        switch(iVar1) {
        default:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
          break;
        case 4:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
          _DAT_8c2809a8 = _DAT_8c2809a8 + 1;
          break;
        case 5:
          _DAT_8c2809a0 = _DAT_8c2809a0 + 1;
        }
      }
      *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
      *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
    }
    else {
      iVar1 = *(int *)(ar4 + 0x218);
      if (iVar1 == 0) {
        _DAT_8c280998 = _DAT_8c280998 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f648) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f644) = ar4;
      }
      else if (iVar1 == 1) {
        _DAT_8c28099c = _DAT_8c28099c + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f604) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f600) = ar4;
      }
      else if (iVar1 == 2) {
        _DAT_8c2809a4 = _DAT_8c2809a4 + 1;
        *(undefined4 *)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c8) = 1;
        *(code **)(*(int *)(ar4 + 0x21c) * 8 + -0x73d7f5c4) = ar4;
      }
    }
    if (*(int *)(ar4 + 0x230) != 0) {
      if (*(int *)(ar4 + 0x230) == 1) {
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
        ar6_00 = (code *)(*(uint *)(ar4 + 0x214) & ~auStack_2c[iVar1]);
        *(code **)(ar4 + 0x214) = ar6_00;
        ar7_00 = ar4;
      }
      else {
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
        uVar3 = *(uint *)(ar4 + 0x214);
        uVar2 = auStack_2c[iVar1];
        *(uint *)(ar4 + 0x214) = uVar3 & ~uVar2;
        iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,uVar3 & ~uVar2,ar7_00);
        *(uint *)(ar4 + 0x214) = *(uint *)(ar4 + 0x214) & ~auStack_1c[iVar1];
        ar6_00 = ar4;
      }
    }
  }
  *(undefined4 *)(ar4 + 0x224) = 0x8c2804f0;
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
  _DAT_8c280620 = (&PTR_s_herb_3Leaves_home_njd_8c136f54)[iVar1];
  iVar1 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,ar6_00,ar7_00);
  _DAT_8c280628 = (&PTR_s_HERB_1_8c136f68)[iVar1];
  _DAT_8c280618 = &PTR_s_herb_3Leaves_die_njm_8c136f84;
  _DAT_8c28061c = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
  _DAT_8c280634 = PTR_s_herb3_pvm_8c136f78;
  _DAT_8c280648 = PTR_s_herb5_pvm_8c136f7c;
  _DAT_8c280638 = 0x12;
  _DAT_8c28064c = 0x16;
  _DAT_8c280644 = 0x8c280738;
  _DAT_8c280658 = 0x8c280810;
  return 0x168;
}

__asm__(".globl _s_herb3_pvm_06c14c\n.set _s_herb3_pvm_06c14c, _s_herb3_pvm_06c14c_def\n");
//@unit 8c06c89c
#include "../decls.h"
int FUN_8c06c89c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((*(int *)(ar4 + 0x220) != 0) || (iVar1 = *(int *)(ar4 + 0x230), iVar1 != 7)) {
    FUN_8c0f4f0c(ar4,ar5,ar6,ar7);
    Vec3_assign(ar5 + 0x4c,ar4 + 0x268,ar6,ar7);
    vec3_copy_8c023d8c(ar5 + 0x5c,ar4 + 0x278,ar6,ar7);
    *(char *)(ar5 + 0x68) = (char)*(undefined4 *)(ar4 + 0x210);
    *(char *)(ar5 + 0x69) = (char)*(undefined4 *)(ar4 + 0x218);
    *(char *)(ar5 + 0x6a) = (char)*(undefined4 *)(ar4 + 0x21c);
    *(char *)(ar5 + 0x6b) = (char)*(undefined4 *)(ar4 + 0x220);
    *(char *)(ar5 + 0x6c) = (char)*(undefined4 *)(ar4 + 0x230);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x70) = *(undefined4 *)(ar4 + 0x244);
    }
    else {
      *(undefined8 *)(ar5 + 0x70) = *(undefined8 *)(ar4 + 0x244);
    }
    *(undefined2 *)(ar5 + 0x74) = *(undefined2 *)(ar4 + 0x264);
    *(undefined2 *)(ar5 + 0x76) = *(undefined2 *)(ar4 + 0x266);
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x78) = *(undefined4 *)(ar4 + 0x240);
      *(undefined4 *)(ar5 + 0x7c) = *(undefined4 *)(ar4 + 0x234);
      *(undefined4 *)(ar5 + 0x80) = *(undefined4 *)(ar4 + 0x238);
    }
    else {
      *(undefined8 *)(ar5 + 0x78) = *(undefined8 *)(ar4 + 0x240);
      *(undefined8 *)(ar5 + 0x7c) = *(undefined8 *)(ar4 + 0x234);
      *(undefined8 *)(ar5 + 0x80) = *(undefined8 *)(ar4 + 0x238);
    }
    iVar1 = 0x23c;
    if (cVar2 == '\0') {
      *(undefined4 *)(ar5 + 0x84) = *(undefined4 *)(ar4 + 0x23c);
    }
    else {
      *(undefined8 *)(ar5 + 0x84) = *(undefined8 *)(ar4 + 0x23c);
    }
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06c89c\n.set _FUN_8c06c89c, _FUN_8c06c89c_def\n");
//@unit 8c06c9c8
#include "../decls.h"
int FUN_8c06c9c8_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined4 *)(ar4 + 0x24) = *ar5;
  vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7);
  FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7);
  *(undefined4 *)(ar4 + 0x74) = ar5[8];
  *(undefined4 *)(0x218 + ar4) = 3;
  *(undefined4 *)(0x21c + ar4) = 0xffffffff;
  iVar1 = *(undefined4 *)0x8c2809a8;
  *(undefined4 *)0x8c2809a8 = iVar1 + 1;
  return iVar1 + 1;
}

__asm__(".globl _FUN_8c06c9c8\n.set _FUN_8c06c9c8, _FUN_8c06c9c8_def\n");
//@unit 8c06ca34
#include "../decls.h"
undefined4 FUN_8c06ca34_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *ar5 = *(undefined4 *)(ar4 + 0x24);
  vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7);
  FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7);
  uVar1 = *(undefined4 *)(ar4 + 0x74);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl _FUN_8c06ca34\n.set _FUN_8c06ca34, _FUN_8c06ca34_def\n");
//@unit 8c06ca7c
#include "../decls.h"
int FUN_8c06ca7c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  *(undefined2 *)(ar4 + 0x266) = 0;
  iVar1 = *(int *)(ar4 + 0x220);
  if ((iVar1 == 0) && ((*(int *)(ar4 + 0x230) == 1 || (iVar1 = *(int *)(ar4 + 0x230), iVar1 == 5))))
  {
    iVar1 = *(int *)(ar4 + 0x218);
    if (iVar1 == 0) {
      *(undefined4 *)(ar4 + 0x34) = 0x43340000;
    }
    else if (iVar1 == 1) {
      *(undefined4 *)(ar4 + 0x34) = 0x42c80000;
    }
    else if (iVar1 == 2) {
      *(undefined4 *)(ar4 + 0x34) = 0x43340000;
    }
    iVar1 = 0x230;
    *(int *)(ar4 + 0x230) = *(int *)(ar4 + 0x230) + 1;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c06ca7c\n.set _FUN_8c06ca7c, _FUN_8c06ca7c_def\n");
//@unit 8c06cb08
#include "../decls.h"
undefined4 s_herb_seed_nj_06cb08_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb10) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined4 *)(&DAT_8c2805a4 + iVar1 * 0x124) = 0x8c280d68;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb00) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb0c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fb08) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7faf8) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa68) = 0;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0;
  }
  _DAT_8c2804fc = PTR_s_herb_seed_nj_8c136f50;
  _DAT_8c280504 = PTR_s_SEED_1_8c136f64;
  _DAT_8c2805ac = 0x3f800000;
  _DAT_8c2805bc = 0x3ca3d70a;
  _DAT_8c2805c0 = 0x3f4ccccd;
  _DAT_8c2805c4 = 0x43c80000;
  for (iVar1 = 1; iVar1 < 2; iVar1 = iVar1 + 1) {
    *(undefined ***)(iVar1 * 0x124 + -0x73d7fb0c) = &PTR_s_herb_3Leaves_die_njm_8c136f84;
    *(undefined ***)(iVar1 * 0x124 + -0x73d7fb08) = &PTR_s_herb_3Leaves_die_njs_8c136fb8;
    *(undefined **)(&DAT_8c2804fc + iVar1 * 0x124) = PTR_s_herb_3Leaves_home_njd_8c136f54;
    *(undefined **)(&DAT_8c280504 + iVar1 * 0x124) = PTR_s_HERB_1_8c136f68;
    *(undefined **)(iVar1 * 0x124 + -0x73d7faf8) = PTR_s_herb_motionpack_npd_8c136f80;
    *(undefined4 *)(&DAT_8c2805ac + iVar1 * 0x124) = 0x3f800000;
    *(undefined4 *)(&DAT_8c2805bc + iVar1 * 0x124) = 0x3ca3d70a;
    *(undefined4 *)(&DAT_8c2805c0 + iVar1 * 0x124) = 0x3f4ccccd;
    *(undefined4 *)(&DAT_8c2805c4 + iVar1 * 0x124) = 0x43c80000;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa70) = 0x8c280924;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa6c) = 0xd;
    *(undefined4 *)(iVar1 * 0x124 + -0x73d7fa68) = 0x8c280964;
    *(undefined2 *)(iVar1 * 0x124 + -0x73d7fa64) = 0xd;
  }
  return 2;
}

__asm__(".globl _s_herb_seed_nj_06cb08\n.set _s_herb_seed_nj_06cb08, _s_herb_seed_nj_06cb08_def\n");
//@unit 8c06ce04
#include "../decls.h"
undefined4 s_GRAPHICS_HERBLINE_06ce12_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined4 **ar7_00;
  int *a4;
  int a6;
  int in_stack_ffffff74;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 auStack_24 [2];
  
  auStack_24[0] = 0;
  puVar7 = (undefined4 *)0x0;
  puStack_28 = (undefined4 *)0x0;
  puVar6 = (undefined *)0x0;
  uStack_2c = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(int *)(ar4 + 0x224) + a6 * 0x124;
    if (*(int *)(iVar4 + 0x18) != 0) {
      puVar7 = (undefined4 *)(ar4 + a6);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c020ddc(ar5,*(undefined4 *)(iVar4 + 0x18),PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7
                          );
      if (iVar2 == 0) {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message
                  (*(undefined4 *)(iVar4 + 0x18),s_Failed_to_Load__CHerb__LoadGRWai_8c13741d,0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 4)) == '\0') {
        puVar7 = (undefined4 *)0x2;
        puVar6 = (undefined *)0x0;
        report_error_message(s_Attach_NULL___8c137452,s_CHerb__LoadGRWait___8c137460,0,2);
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020bec(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 4)),s_Read_NMDM_Failed___8c13743f,
                     0,2);
        }
      }
      FUN_8c015bb0(*(int *)(iVar4 + 0xa0) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    for (iVar2 = 0; iVar2 < *(short *)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
      if (**(char **)(iVar2 * 4 + *(int *)(iVar4 + 8)) == '\0') {
        auStack_24[0] = 0;
      }
      else {
        puVar7 = auStack_24;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar3 = FUN_8c020ce4(ar5,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),
                             PTR_s_GRAPHICS_HERBLINE_8c136f4c,puVar7);
        if (iVar3 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar2 * 4 + *(int *)(iVar4 + 8)),s_Read_NSSM_Failed___8c137474,
                     0,2);
        }
        FUN_8c015be4(*(int *)(*(int *)(ar4 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4,auStack_24[0],
                     puVar6,puVar7,in_stack_ffffff74);
      }
      FUN_8c015be4(*(int *)(iVar4 + 0xa8) + iVar2 * 4,auStack_24[0],puVar6,puVar7,in_stack_ffffff74)
      ;
    }
    ar7_00 = &puStack_28;
    puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
    iVar2 = FUN_8c0209fc(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,ar7_00);
    if (iVar2 == 0) {
      ar7_00 = (undefined4 **)0x2;
      puVar6 = (undefined *)0x0;
      report_error_message
                (*(undefined4 *)(iVar4 + 0xc),s_Read_NJCM_Failed___CHerb__LoadGR_8c137487,0,2);
    }
    FUN_8c015ad4(iVar4 + 0x70,puStack_28,puVar6,ar7_00,in_stack_ffffff74);
    in_stack_ffffff74 = libgcc_divide_helper_01031c(*(undefined4 *)(ar4 + 0x210),4,puVar6,ar7_00);
    if (in_stack_ffffff74 == 0) {
      if (*(int *)(iVar4 + 0x20) == 0) {
        puVar7 = &uStack_2c;
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                             puVar7);
        if (iVar2 == 0) {
          puVar7 = (undefined4 *)0x2;
          puVar6 = (undefined *)0x0;
          report_error_message
                    (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
        }
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),uStack_2c,puVar6,puVar7);
        iVar4 = a6;
        (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,puVar7);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,puVar7);
      }
      else {
        uVar1 = *(undefined4 *)(iVar4 + 0xc);
        s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x20,uVar1,ar7_00);
        iVar2 = iVar4 + 0x28;
        (**(code **)(*(int *)(iVar4 + 0x78) + 8))((int *)(iVar4 + 0x78),iVar2,uVar1,ar7_00);
        uVar1 = get_field_4_0253e4(iVar4 + 0x78,iVar2,uVar1,ar7_00);
        pcVar5 = *(char **)(iVar4 + 0x20);
        puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
        iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
        if (iVar2 == 0) {
          uVar1 = 2;
          puVar6 = (undefined *)0x0;
          pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
          report_error_message
                    (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                     s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
        }
        a5 = get_field_4_0253e4(iVar4 + 0x78,pcVar5,puVar6,uVar1);
        (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),a5,puVar6,uVar1);
      }
    }
    else if (*(int *)(iVar4 + 0x34) == 0) {
      iVar2 = FUN_8c020af4(ar5,*(undefined4 *)(iVar4 + 0xc),PTR_s_GRAPHICS_HERBLINE_8c136f4c,
                           &uStack_2c);
      if (iVar2 == 0) {
        report_error_message
                  (*(undefined4 *)(iVar4 + 0xc),s_Read_NJTL_Failed___CHerb__LoadGR_8c1374ed,0,2);
      }
      a4 = (int *)(iVar4 + 0x78);
      (**(code **)(*a4 + 8))(a4,uStack_2c,*(code **)(*a4 + 8),a4);
      iVar4 = a6;
      (**(code **)(*(int *)(ar4 + 8) + 0xe4))(ar4,ar5,a6,a4);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uStack_2c,iVar4,a4);
    }
    else {
      uVar1 = *(undefined4 *)(iVar4 + 0xc);
      s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x34,uVar1,ar7_00);
      iVar2 = iVar4 + 0x3c;
      (**(code **)(*(int *)(iVar4 + 0x80) + 8))((int *)(iVar4 + 0x80),iVar2,uVar1,ar7_00);
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,iVar2,uVar1,ar7_00);
      pcVar5 = *(char **)(iVar4 + 0x34);
      puVar6 = PTR_s_GRAPHICS_HERBLINE_8c136f4c;
      iVar2 = FUN_8c02100c(ar5,pcVar5,PTR_s_GRAPHICS_HERBLINE_8c136f4c,uVar1);
      if (iVar2 == 0) {
        uVar1 = 2;
        puVar6 = (undefined *)0x0;
        pcVar5 = s_CAnimal__LoadGResourceWait___8c1374d0;
        report_error_message
                  (s_Failed_to_load_body_pvm_textuer__8c1374ae,
                   s_CAnimal__LoadGResourceWait___8c1374d0,0,2);
      }
      uVar1 = get_field_4_0253e4(iVar4 + 0x80,pcVar5,puVar6,uVar1);
      (**(code **)(*(int *)(ar4 + 0x208) + 8))((int *)(ar4 + 0x208),uVar1,0x208,uVar1);
    }
    puVar6 = (undefined *)0x204;
    puVar7 = puStack_28;
    uVar1 = FUN_8c015ad4(ar4 + 0x204,puStack_28,0x204,puStack_28,in_stack_ffffff74);
  }
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06ce12\n.set _s_GRAPHICS_HERBLINE_06ce12, _s_GRAPHICS_HERBLINE_06ce12_def\n");
//@unit 8c06d3ec
#include "../decls.h"
int s_GRAPHICS_HERBLINE_06d3ee_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  undefined4 ar7_00;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(0x224 + ar4) + ar6 * 0x124;
  ar7_00 = get_field_4_0253e4(iVar2 + 0x78,ar5,ar6,ar7);
  iVar1 = (*(code *)(&FUN_8c020ef0))
                    (ar5,*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(&DATA_8c136f4c),ar7_00);
  if (iVar1 == 0) {
    iVar1 = (*(code *)(&report_error_message))
                      (*(undefined4 *)(iVar2 + 0x14),(&DATA_8c1371e0) + 0x334,0
                       ,2);
  }
  return iVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06d3ee\n.set _s_GRAPHICS_HERBLINE_06d3ee, _s_GRAPHICS_HERBLINE_06d3ee_def\n");
//@unit 8c06d474
#include "../decls.h"
undefined4 s_GRAPHICS_HERBLINE_06d482_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar3 = *(int *)(0x224 + ar4) + iVar2 * 0x124;
    for (iVar4 = 0; iVar4 < *(short *)(0xa4 + iVar3); iVar4 = iVar4 + 1) {
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 4)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)(&DATA_8c136f4c);
        FUN_8c020c60(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 4)),ar6,ar7);
      }
      if (**(char **)(iVar4 * 4 + *(int *)(iVar3 + 8)) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(undefined4 *)(&DATA_8c136f4c);
        FUN_8c020d58(ar5,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar3 + 8)),ar6,ar7);
      }
    }
    if (*(int *)(iVar3 + 0x18) != 0) {
      ar7 = ar4 + iVar2;
      ar6 = *(undefined4 *)(&DATA_8c136f4c);
      FUN_8c020e48(ar5,*(undefined4 *)(iVar3 + 0x18),ar6,ar7);
    }
  }
  iVar2 = (*(code *)(&libgcc_divide_helper_01031c))
                    (*(undefined4 *)(0x210 + ar4),4,ar6,ar7);
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)((&DATA_8c136f54) + iVar2 * 4),*(undefined4 *)(&DATA_8c136f4c),
             ar4 + 1);
  (*(code *)(&FUN_8c020a70))
            (ar5,*(undefined4 *)(&DATA_8c136f50),*(undefined4 *)(&DATA_8c136f4c),ar4);
  iVar2 = ar4;
  (*(code *)(&FUN_8c020b68))
            (ar5,*(undefined4 *)(&DATA_8c136f50),*(undefined4 *)(&DATA_8c136f4c),ar4);
  uVar1 = (**(code **)(0xf0 + *(int *)(ar4 + 8)))(ar4,ar5,0,iVar2);
  return uVar1;
}

__asm__(".globl _s_GRAPHICS_HERBLINE_06d482\n.set _s_GRAPHICS_HERBLINE_06d482, _s_GRAPHICS_HERBLINE_06d482_def\n");
//@unit 8c06d5e4
#include "../decls.h"
undefined4 FUN_8c06d5e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  s_Failed_s_015312(*(int *)(0x224 + ar4) + 0x78,ar5,ar6,ar7);
  uVar1 = s_Failed_s_015312(ar4 + 0x208,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06d5e4\n.set _FUN_8c06d5e4, _FUN_8c06d5e4_def\n");
//@unit 8c06d618
#include "../decls.h"
undefined1 *
s_CHerb_SetPVMTexture_s_06d61c_def(undefined4 ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  undefined1 *ar5_00;
  undefined1 auStack_10c [260];
  
  ar5_00 = ar5;
  if (*(int *)(ar5 + 0x10) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5,ar6,ar7,(&DATA_8c1371e0) + 0x35b);
    ar7 = 2;
    ar6 = 0;
    ar5_00 = auStack_10c;
    (*(code *)(&report_error_message))
              ((&DATA_8c1371e0) + 0x375,ar5_00,0,2);
  }
  if (*(int *)(ar5 + 4) == 0) {
    (*(code *)(&FUN_8c014334))
              (auStack_10c,ar5_00,ar6,ar7,(&DATA_8c1371e0) + 0x35b);
    (*(code *)(&report_error_message))
              ((&DATA_8c1371e0) + 0x390,auStack_10c,0,2);
  }
  (*(code *)(&FUN_8c239170))
            (ar5 + 8,*(undefined4 *)(ar5 + 0x10),0x8c4312a8,*(undefined4 *)(ar5 + 4));
  return ar5 + 8;
}

__asm__(".globl _s_CHerb_SetPVMTexture_s_06d61c\n.set _s_CHerb_SetPVMTexture_s_06d61c, _s_CHerb_SetPVMTexture_s_06d61c_def\n");
//@unit 8c06d6d8
#include "../decls.h"
undefined4 noop_06d6d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d6d8\n.set _noop_06d6d8, _noop_06d6d8_def\n");
//@unit 8c06d6dc
#include "../decls.h"
undefined4 noop_06d6dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d6dc\n.set _noop_06d6dc, _noop_06d6dc_def\n");
//@unit 8c06d6e0
#include "../decls.h"
undefined4 noop_06d6e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d6e0\n.set _noop_06d6e0, _noop_06d6e0_def\n");
//@unit 8c06d6e4
#include "../decls.h"
undefined4 ret_const_1_06d6e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_06d6e4\n.set _ret_const_1_06d6e4, _ret_const_1_06d6e4_def\n");
//@unit 8c06d6ec
#include "../decls.h"
undefined4 FUN_8c06d6ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  if ((*(int *)(0x220 + ar4) == 0) && (*(int *)(0x230 + ar4) == 7)) {
    return 1;
  }
  return *(undefined4 *)(0x220 + ar4);
}

__asm__(".globl _FUN_8c06d6ec\n.set _FUN_8c06d6ec, _FUN_8c06d6ec_def\n");
//@unit 8c06d714
#include "../decls.h"
int FUN_8c06d714_def(undefined4 ar4,int *ar5,float *ar6,undefined1 *ar7)

{
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  undefined1 *ar5_00;
  int iVar3;
  int a6;
  float fVar4;
  code *pcVar5;
  char cVar6;
  char cVar7;
  undefined1 auStack_28 [4];
  float fStack_24;
  undefined1 auStack_20 [12];
  
  cVar7 = '\0';
  cVar6 = '\0';
  iVar3 = 0;
  a6 = 0;
  Vec3_ctor_zero(auStack_28,ar5,ar6,ar7);
  iVar1 = (**(code **)(*ar5 + 0x11c))(ar5,10,ar6,ar7);
  while ((a6 < iVar1 && (iVar3 == 0))) {
    ar4_00 = (**(code **)(*ar5 + 0x100))(ar5,10,a6,ar7);
    ar7 = auStack_20;
    ar6 = &fStack_24;
    ar5_00 = auStack_28;
    FUN_8c0507a4(ar4_00,ar5_00,ar6,ar7);
    uVar2 = (**(code **)(*(int *)(ar4_00 + 8) + 0x148))(ar4_00,ar5_00,ar6,ar7);
    if ((short)uVar2 == 2) {
      if (cVar7 == '\0') {
        pcVar5 = (code *)0x42dc0000;
        fVar4 = fStack_24;
      }
      else {
        fVar4 = 110.0;
        pcVar5 = Vec3_dtor;
      }
      if (cVar6 != '\0' || (float)(uint)pcVar5 <= fVar4) {
        iVar3 = 1;
      }
    }
    a6 = a6 + 1;
  }
  Vec3_dtor(auStack_28,0xffffffff,ar6,ar7);
  return iVar3;
}

__asm__(".globl _FUN_8c06d714\n.set _FUN_8c06d714, _FUN_8c06d714_def\n");
//@unit 8c06d7e4
#include "../decls.h"
undefined4 ret_const_0_06d7e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d7e4\n.set _ret_const_0_06d7e4, _ret_const_0_06d7e4_def\n");
//@unit 8c06d7ec
#include "../decls.h"
undefined4 noop_06d7ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d7ec\n.set _noop_06d7ec, _noop_06d7ec_def\n");
//@unit 8c06d7f0
#include "../decls.h"
undefined4 noop_06d7f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d7f0\n.set _noop_06d7f0, _noop_06d7f0_def\n");
//@unit 8c06d7f4
#include "../decls.h"
undefined4 noop_06d7f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d7f4\n.set _noop_06d7f4, _noop_06d7f4_def\n");
//@unit 8c06d7f8
#include "../decls.h"
undefined4 noop_06d7f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d7f8\n.set _noop_06d7f8, _noop_06d7f8_def\n");
//@unit 8c06d7fc
#include "../decls.h"
undefined4 noop_06d7fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d7fc\n.set _noop_06d7fc, _noop_06d7fc_def\n");
//@unit 8c06d800
#include "../decls.h"
undefined4 noop_06d800_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d800\n.set _noop_06d800, _noop_06d800_def\n");
//@unit 8c06d804
#include "../decls.h"
undefined4 noop_06d804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d804\n.set _noop_06d804, _noop_06d804_def\n");
//@unit 8c06d808
#include "../decls.h"
undefined4 noop_06d808_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d808\n.set _noop_06d808, _noop_06d808_def\n");
//@unit 8c06d80c
#include "../decls.h"
undefined4 noop_06d80c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d80c\n.set _noop_06d80c, _noop_06d80c_def\n");
//@unit 8c06d810
#include "../decls.h"
undefined4 noop_06d810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d810\n.set _noop_06d810, _noop_06d810_def\n");
//@unit 8c06d814
#include "../decls.h"
undefined4 noop_06d814_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d814\n.set _noop_06d814, _noop_06d814_def\n");
//@unit 8c06d818
#include "../decls.h"
undefined4 ret_const_0_06d818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d818\n.set _ret_const_0_06d818, _ret_const_0_06d818_def\n");
//@unit 8c06d820
#include "../decls.h"
undefined4 ret_const_3f800000_06d820_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_3f800000_06d820\n.set _ret_const_3f800000_06d820, _ret_const_3f800000_06d820_def\n");
//@unit 8c06d828
#include "../decls.h"
undefined4 ret_const_3f800000_06d828_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_3f800000_06d828\n.set _ret_const_3f800000_06d828, _ret_const_3f800000_06d828_def\n");
//@unit 8c06d830
#include "../decls.h"
undefined4 ret_const_0_06d830_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_0_06d830\n.set _ret_const_0_06d830, _ret_const_0_06d830_def\n");
//@unit 8c06d838
#include "../decls.h"
undefined4 FUN_8c06d838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7,undefined4 s0)

{
  undefined1 auStack_10 [16];
  
  Vec3_set_zero(auStack_10,ar5,ar6,ar7);
  vec3_copy_8c02b5fc(s0,auStack_10,ar6,ar7);
  object_dtor_delete(auStack_10,0xffffffff,ar6,ar7);
  return 0;
}

__asm__(".globl _FUN_8c06d838\n.set _FUN_8c06d838, _FUN_8c06d838_def\n");
//@unit 8c06d870
#include "../decls.h"
undefined4 * FUN_8c06d870_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return &DAT_8c06d878;
}

__asm__(".globl _FUN_8c06d870\n.set _FUN_8c06d870, _FUN_8c06d870_def\n");
//@unit 8c06d87c
#include "../decls.h"
undefined4 ret_const_0_06d87c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d87c\n.set _ret_const_0_06d87c, _ret_const_0_06d87c_def\n");
//@unit 8c06d884
#include "../decls.h"
undefined4 ret_const_0_06d884_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_0_06d884\n.set _ret_const_0_06d884, _ret_const_0_06d884_def\n");
//@unit 8c06d88c
#include "../decls.h"
undefined4 FUN_8c06d88c_def(undefined4 ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  *ar5 = 0x43480000;
  return 0x8c06d8a0;
}

__asm__(".globl _FUN_8c06d88c\n.set _FUN_8c06d88c, _FUN_8c06d88c_def\n");
//@unit 8c06d8a4
#include "../decls.h"
undefined4 ret_const_0_06d8a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d8a4\n.set _ret_const_0_06d8a4, _ret_const_0_06d8a4_def\n");
//@unit 8c06d8ac
#include "../decls.h"
undefined4 ret_const_0_06d8ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d8ac\n.set _ret_const_0_06d8ac, _ret_const_0_06d8ac_def\n");
//@unit 8c06d8b4
#include "../decls.h"
undefined4 ret_const_0_06d8b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d8b4\n.set _ret_const_0_06d8b4, _ret_const_0_06d8b4_def\n");
//@unit 8c06d8bc
#include "../decls.h"
undefined4 ret_const_0_06d8bc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _ret_const_0_06d8bc\n.set _ret_const_0_06d8bc, _ret_const_0_06d8bc_def\n");
//@unit 8c06d8c4
#include "../decls.h"
undefined4 ret_const_ffffffff_06d8c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0xffffffff;
}

__asm__(".globl _ret_const_ffffffff_06d8c4\n.set _ret_const_ffffffff_06d8c4, _ret_const_ffffffff_06d8c4_def\n");
//@unit 8c06d8cc
#include "../decls.h"
undefined4 noop_06d8cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d8cc\n.set _noop_06d8cc, _noop_06d8cc_def\n");
//@unit 8c06d8d0
#include "../decls.h"
undefined4 noop_06d8d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 in_r0;
  
  return in_r0;
}

__asm__(".globl _noop_06d8d0\n.set _noop_06d8d0, _noop_06d8d0_def\n");
//@unit 8c06d8d4
#include "../decls.h"
undefined4 ret_const_0_06d8d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 0;
}

__asm__(".globl _ret_const_0_06d8d4\n.set _ret_const_0_06d8d4, _ret_const_0_06d8d4_def\n");
//@unit 8c06d8dc
#include "../decls.h"
undefined4 ret_const_1_06d8dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  return 1;
}

__asm__(".globl _ret_const_1_06d8dc\n.set _ret_const_1_06d8dc, _ret_const_1_06d8dc_def\n");
//@unit 8c06d8e4
#include "../decls.h"
undefined4 FUN_8c06d8e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  code *ar7_00;
  char cVar6;
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [16];
  undefined1 auStack_e4 [16];
  undefined1 auStack_d4 [16];
  undefined1 auStack_c4 [16];
  undefined1 auStack_b4 [16];
  undefined1 auStack_a4 [16];
  undefined1 auStack_94 [16];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [16];
  undefined1 auStack_14 [20];
  
  cVar6 = '\0';
  uVar1 = Vec3_ctor_xyz(&DAT_8c125e00,ar5,ar6,ar7);
  uVar3 = 0x8c2804b0;
  global_list_push(uVar1,Vec3_dtor,0x8c2804b0,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125e10,Vec3_ctor_xyz,uVar3,ar7);
  uVar3 = 0x8c2804bc;
  pcVar2 = Vec3_dtor;
  global_list_push(uVar1,Vec3_dtor,0x8c2804bc,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125e20,pcVar2,uVar3,ar7);
  uVar3 = 0x8c2804c8;
  global_list_push(uVar1,Vec3_dtor,0x8c2804c8,ar7);
  uVar1 = Vec3_ctor_xyz(&DAT_8c125e30,Vec3_ctor_xyz,uVar3,ar7);
  global_list_push(uVar1,Vec3_dtor,0x8c2804d4,ar7);
  if (cVar6 == '\0') {
    _DAT_8c125e40 = CONCAT44(_UNK_8c125e44,0x800000);
                    
  }
  else {
    _DAT_8c125e40 = 0xffffffff00800000;
  }
  uVar1 = 0x124;
  FUN_8c010120(0x8c2804f0,FUN_8c02452c,FUN_8c03a4ac,0x124,2);
  global_list_push(0,FUN_8c06e4c4,0x8c2804e4,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c280924,FUN_8c015b94,free_if_nonnull_wrap_0247b0,4,0xd);
  global_list_push(0,FUN_8c06e4a0,0x8c280918,uVar1);
  uVar1 = 4;
  FUN_8c010120(0x8c280964,FUN_8c015bc8,free_if_nonnull_wrap_03a3dc,4,0xd);
  global_list_push(0,FUN_8c06e47c,0x8c280958,uVar1);
  uVar1 = 8;
  FUN_8c010120(0x8c2809b8,FUN_8c0673cc,free_if_nonnull_wrap_0673dc,8,7);
  global_list_push(0,FUN_8c06e458,0x8c2809ac,uVar1);
  uVar1 = 8;
  FUN_8c010120(0x8c2809fc,FUN_8c0673cc,free_if_nonnull_wrap_0673dc,8,6);
  global_list_push(0,FUN_8c06e434,0x8c2809f0,uVar1);
  uVar4 = 8;
  FUN_8c010120(0x8c280a38,FUN_8c0673cc,free_if_nonnull_wrap_0673dc,8,6);
  uVar1 = 0x8c280a2c;
  global_list_push(0,FUN_8c06e410,0x8c280a2c,uVar4);
  Vec3_ctor_xyz(auStack_14,Vec3_ctor_xyz,uVar1,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280abc,auStack_14,uVar1,uVar4);
  uVar3 = 0x8c280a68;
  global_list_push(uVar1,Vec3_dtor,0x8c280a68,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_14,0xffffffff,uVar3,uVar4);
  pcVar2 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_24,uVar1,Vec3_ctor_xyz,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280acc,auStack_24,pcVar2,uVar4);
  uVar3 = 0x8c280a74;
  global_list_push(uVar1,Vec3_dtor,0x8c280a74,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_24,0xffffffff,uVar3,uVar4);
  Vec3_ctor_xyz(auStack_34,uVar1,uVar3,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280adc,auStack_34,uVar3,uVar4);
  uVar3 = 0x8c280a80;
  global_list_push(uVar1,Vec3_dtor,0x8c280a80,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_34,0xffffffff,uVar3,uVar4);
  Vec3_ctor_xyz(auStack_44,uVar1,uVar3,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280aec,auStack_44,uVar3,uVar4);
  uVar3 = 0x8c280a8c;
  global_list_push(uVar1,Vec3_dtor,0x8c280a8c,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_44,0xffffffff,uVar3,uVar4);
  Vec3_ctor_xyz(auStack_54,uVar1,uVar3,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280afc,auStack_54,uVar3,uVar4);
  uVar3 = 0x8c280a98;
  global_list_push(uVar1,Vec3_dtor,0x8c280a98,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_54,0xffffffff,uVar3,uVar4);
  Vec3_ctor_xyz(auStack_64,uVar1,uVar3,uVar4);
  uVar1 = Vec3_ctor_copy(0x8c280b0c,auStack_64,uVar3,uVar4);
  uVar3 = 0x8c280aa4;
  global_list_push(uVar1,Vec3_dtor,0x8c280aa4,uVar4);
  pcVar2 = Vec3_dtor;
  Vec3_dtor(auStack_64,0xffffffff,uVar3,Vec3_dtor);
  Vec3_ctor_xyz(auStack_74,Vec3_ctor_xyz,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280b1c,auStack_74,Vec3_ctor_copy,pcVar2);
  uVar3 = 0x8c280ab0;
  global_list_push(uVar1,Vec3_dtor,0x8c280ab0,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_74,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_84,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280b74,auStack_84,uVar3,pcVar2);
  uVar3 = 0x8c280b2c;
  global_list_push(uVar1,Vec3_dtor,0x8c280b2c,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_84,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_94,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280b84,auStack_94,uVar3,pcVar2);
  uVar3 = 0x8c280b38;
  global_list_push(uVar1,Vec3_dtor,0x8c280b38,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_94,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_a4,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280b94,auStack_a4,uVar3,pcVar2);
  uVar3 = 0x8c280b44;
  global_list_push(uVar1,Vec3_dtor,0x8c280b44,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_a4,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_b4,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280ba4,auStack_b4,uVar3,pcVar2);
  uVar3 = 0x8c280b50;
  global_list_push(uVar1,Vec3_dtor,0x8c280b50,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_b4,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_c4,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280bb4,auStack_c4,0x8c280b74,pcVar2);
  uVar3 = 0x8c280b5c;
  global_list_push(uVar1,Vec3_dtor,0x8c280b5c,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_c4,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_d4,uVar1,uVar3,pcVar2);
  uVar1 = Vec3_ctor_copy(0x8c280bc4,auStack_d4,0x8c280b74,pcVar2);
  uVar3 = 0x8c280b68;
  global_list_push(uVar1,Vec3_dtor,0x8c280b68,pcVar2);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_d4,0xffffffff,uVar3,pcVar2);
  Vec3_ctor_xyz(auStack_e4,uVar1,uVar3,pcVar2);
  uVar4 = 0x8c280c1c;
  uVar1 = Vec3_ctor_copy(0x8c280c1c,auStack_e4,Vec3_ctor_copy,0x8c280c1c);
  uVar3 = 0x8c280bd4;
  global_list_push(uVar1,Vec3_dtor,0x8c280bd4,uVar4);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_e4,0xffffffff,uVar3,uVar4);
  puVar5 = auStack_f4;
  Vec3_ctor_xyz(puVar5,uVar1,Vec3_ctor_xyz,puVar5);
  uVar1 = Vec3_ctor_copy(0x8c280c2c,auStack_f4,Vec3_ctor_copy,puVar5);
  ar7_00 = global_list_push;
  global_list_push(uVar1,Vec3_dtor,0x8c280be0,global_list_push);
  uVar1 = 0xffffffff;
  Vec3_dtor(auStack_f4,0xffffffff,0xffffffff,ar7_00);
  pcVar2 = Vec3_ctor_xyz;
  Vec3_ctor_xyz(auStack_104,uVar1,Vec3_ctor_xyz,ar7_00);
  uVar1 = Vec3_ctor_copy(0x8c280c3c,auStack_104,pcVar2,ar7_00);
  global_list_push(uVar1,Vec3_dtor,0x8c280bec,uVar1);
  uVar4 = 0xffffffff;
  uVar3 = 0xffffffff;
  Vec3_dtor(auStack_104,0xffffffff,0xffffffff,uVar1);
  Vec3_ctor_xyz(auStack_114,uVar3,uVar4,uVar1);
  puVar5 = auStack_114;
  uVar1 = Vec3_ctor_copy(0x8c280c4c,puVar5,0x8c280c1c,puVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c280bf8,puVar5);
  puVar5 = auStack_114;
  pcVar2 = Vec3_dtor;
  Vec3_dtor(puVar5,0xffffffff,Vec3_dtor,puVar5);
  Vec3_ctor_xyz(auStack_124,auStack_124,pcVar2,puVar5);
  uVar1 = Vec3_ctor_copy(0x8c280c5c,auStack_124,0x8c280c1c,puVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c280c04,puVar5);
  pcVar2 = Vec3_dtor;
  Vec3_dtor(auStack_124,0xffffffff,Vec3_dtor,puVar5);
  Vec3_ctor_xyz(auStack_134,auStack_134,pcVar2,puVar5);
  uVar1 = Vec3_ctor_copy(0x8c280c6c,auStack_134,pcVar2,puVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c280c10,puVar5);
  pcVar2 = Vec3_dtor;
  Vec3_dtor(auStack_134,0xffffffff,Vec3_dtor,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280c88,0x8c280c88,pcVar2,puVar5);
  uVar3 = 0x8c280c7c;
  global_list_push(uVar1,Vec3_dtor,0x8c280c7c,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280ca4,Vec3_ctor_xyz,uVar3,puVar5);
  uVar3 = 0x8c280c98;
  global_list_push(uVar1,Vec3_dtor,0x8c280c98,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280cc0,0x8c280cc0,uVar3,puVar5);
  uVar3 = 0x8c280cb4;
  global_list_push(uVar1,Vec3_dtor,0x8c280cb4,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280cdc,Vec3_ctor_xyz,uVar3,puVar5);
  uVar3 = 0x8c280cd0;
  global_list_push(uVar1,Vec3_dtor,0x8c280cd0,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280cf8,0x8c280cf8,uVar3,puVar5);
  uVar3 = 0x8c280cec;
  global_list_push(uVar1,Vec3_dtor,0x8c280cec,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280d14,Vec3_ctor_xyz,uVar3,puVar5);
  uVar3 = 0x8c280d08;
  global_list_push(uVar1,Vec3_dtor,0x8c280d08,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280d30,0x8c280d30,uVar3,puVar5);
  uVar3 = 0x8c280d24;
  global_list_push(uVar1,Vec3_dtor,0x8c280d24,puVar5);
  uVar1 = Vec3_ctor_xyz(0x8c280d4c,Vec3_ctor_xyz,uVar3,puVar5);
  global_list_push(uVar1,Vec3_dtor,0x8c280d40,puVar5);
  uVar3 = 0x8c280cc0;
  uVar1 = FUN_8c017010(0x8c280d68,0x8c280c88,0x8c280ca4,0x8c280cc0,0x8c280cdc,0x8c280cf8,0x8c280d14,
                       0x8c280d30,0x8c280d4c);
  uVar1 = global_list_push(uVar1,Class_129938_m0_017084,0x8c280d5c,uVar3);
  return uVar1;
}

__asm__(".globl _FUN_8c06d8e4\n.set _FUN_8c06d8e4, _FUN_8c06d8e4_def\n");
//@unit 8c06e410
#include "../decls.h"
undefined4 FUN_8c06e410_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280a38,free_if_nonnull_wrap_0673dc,8,6,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e410\n.set _FUN_8c06e410, _FUN_8c06e410_def\n");
//@unit 8c06e434
#include "../decls.h"
undefined4 FUN_8c06e434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2809fc,free_if_nonnull_wrap_0673dc,8,6,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e434\n.set _FUN_8c06e434, _FUN_8c06e434_def\n");
//@unit 8c06e458
#include "../decls.h"
undefined4 FUN_8c06e458_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2809b8,free_if_nonnull_wrap_0673dc,8,7,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e458\n.set _FUN_8c06e458, _FUN_8c06e458_def\n");
//@unit 8c06e47c
#include "../decls.h"
undefined4 FUN_8c06e47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280964,free_if_nonnull_wrap_03a3dc,4,0xd,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e47c\n.set _FUN_8c06e47c, _FUN_8c06e47c_def\n");
//@unit 8c06e4a0
#include "../decls.h"
undefined4 FUN_8c06e4a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c280924,free_if_nonnull_wrap_0247b0,4,0xd,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e4a0\n.set _FUN_8c06e4a0, _FUN_8c06e4a0_def\n");
//@unit 8c06e4c4
#include "../decls.h"
undefined4 FUN_8c06e4c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  undefined4 in_PR;
  
  uVar1 = vec_delete_array(0x8c2804f0,FUN_8c03a4ac,0x124,2,in_PR);
  return uVar1;
}

__asm__(".globl _FUN_8c06e4c4\n.set _FUN_8c06e4c4, _FUN_8c06e4c4_def\n");
//@unit 8c06e4ec
#include "../decls.h"
undefined4 * FUN_8c06e4ec_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  FUN_8c030fa0(ar4,ar5,ar6,ar7);
  *ar4 = (&DATA_8c12a25c);
  Vec3_set_zero((int)ar4 + 0x224,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x244,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x254,ar5,ar6,ar7);
  Vec3_set_zero((int)ar4 + 0x264,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x270,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x280,ar5,ar6,ar7);
  Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7);
  FUN_8c06e5a4(ar4,ar5,ar6,ar7);
  return ar4;
}

__asm__(".globl _FUN_8c06e4ec\n.set _FUN_8c06e4ec, _FUN_8c06e4ec_def\n");
//@unit 8c06e5a4
#include "../decls.h"
undefined4 FUN_8c06e5a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 uVar1;
  
  *(undefined4 *)(ar4 + 0x260) = 0;
  *(undefined4 *)(ar4 + 0x220) = 0;
  *(undefined4 *)(ar4 + 0x240) = 0;
  FUN_8c022d04(ar4 + 0x270,ar5,ar6,ar7);
  *(undefined ***)(ar4 + 0x1c8) = &PTR_s_Idle_8c13758c;
  *(undefined4 *)(ar4 + 0x1cc) = 0x22;
  *(undefined4 *)(ar4 + 100) = 0;
  *(undefined4 *)(ar4 + 0x290) = 0xffffffff;
  *(undefined4 *)(ar4 + 0x294) = 0;
  *(undefined4 *)(ar4 + 0x298) = 1;
  *(undefined4 *)(ar4 + 0x29c) = 0;
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x2a8) = 0;
  *(undefined4 *)(ar4 + 0x2ac) = 0;
  *(undefined4 *)(ar4 + 0x2a0) = 0;
  *(undefined4 *)(ar4 + 0x2b0) = 0;
  *(undefined4 *)(ar4 + 0x2b4) = 0;
  *(undefined4 *)(ar4 + 0x2d4) = 0;
  *(undefined4 *)(ar4 + 0x2d8) = 0;
  uVar1 = FUN_8c03c314(ar4,ar5,ar6,ar7);
  return uVar1;
}

__asm__(".globl _FUN_8c06e5a4\n.set _FUN_8c06e5a4, _FUN_8c06e5a4_def\n");
//@unit 8c06e69c
#include "../decls.h"
undefined4 * Class_12a25c_m6_06e69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  undefined4 ar6_00;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  
  *(undefined4 *)(ar4 + 0x128) = ar5;
  iVar12 = *(int *)(ar4 + 0x128);
  FUN_8c031b68(ar4,iVar12 * 0x18 + -0x73d7f14c,ar6,iVar12);
  uVar2 = DAT_8c13797c;
  uVar1 = DAT_8c137964;
  ar6_00 = DAT_8c137960;
  uVar8 = DAT_8c13794c;
  uVar9 = DAT_8c137934;
  uVar7 = DAT_8c13791c;
  uVar4 = DAT_8c137904;
  puVar3 = (undefined4 *)0x128;
  iVar6 = *(int *)(ar4 + 0x128);
  if ((iVar6 < 8) && (-1 < iVar6)) {
                    
    switch(iVar6) {
    case 0:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137900;
      *(undefined4 *)(ar4 + 0x2e0) = uVar4;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137908;
      uVar4 = DAT_8c137910;
      puVar3 = &DAT_8c13790c;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13790c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137914;
      break;
    case 1:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137918;
      *(undefined4 *)(ar4 + 0x2e0) = uVar7;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137920;
      uVar4 = DAT_8c137928;
      puVar3 = (undefined4 *)(ar4 + 0x2e8);
      *puVar3 = DAT_8c137924;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13792c;
      break;
    case 2:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137930;
      *(undefined4 *)(ar4 + 0x2e0) = uVar9;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137938;
      uVar4 = DAT_8c137940;
      puVar3 = &DAT_8c13793c;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13793c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137944;
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,&DAT_8c13793c,0xb0);
      piVar5 = (int *)deref_u32(uVar4,uVar7,puVar3,uVar9);
      if (*(int *)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = 9;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,puVar3,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar3,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137618;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137618,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137630;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137630,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137648;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137648,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137660,0);
      }
      break;
    default:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137948;
      *(undefined4 *)(ar4 + 0x2e0) = uVar8;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137950;
      uVar4 = DAT_8c137958;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c137954;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13795c;
      uVar7 = 9;
      pcVar11 = FUN_8c03c0f0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,FUN_8c03c0f0,iVar12);
      puVar3 = (undefined4 *)deref_u32(uVar4,uVar7,pcVar11,iVar12);
      puVar3 = (undefined4 *)*puVar3;
      if (puVar3[1] != 0) {
        uVar9 = 9;
        uVar7 = 9;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,9,iVar12);
        uVar4 = deref_u32(uVar4,uVar7,uVar9,iVar12);
        uVar9 = 0;
        puVar10 = &DAT_8c137678;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137678,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,deref_u32,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c137690;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137690,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1376a8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376a8,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376c0,0);
      }
      break;
    case 6:
      puVar3 = (undefined4 *)(ar4 + 0x2dc);
      *puVar3 = DAT_8c137960;
      *(undefined4 *)(ar4 + 0x2e0) = uVar1;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137968;
      uVar4 = DAT_8c137970;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c13796c;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c137974;
      uVar7 = 9;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,ar6_00,puVar3);
      pcVar11 = deref_u32;
      piVar5 = (int *)deref_u32(uVar4,uVar7,deref_u32,puVar3);
      if (*(int *)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,pcVar11,puVar3);
        uVar4 = deref_u32(uVar4,uVar7,pcVar11,puVar3);
        uVar9 = 0;
        puVar10 = &DAT_8c1377f8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377f8,0);
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,uVar9);
        *(undefined4 *)(*piVar5 + 4) = DAT_8c1377fc;
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,piVar5);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,piVar5);
        uVar4 = DAT_8c137808;
        *(undefined4 *)(*piVar5 + 0x10) = DAT_8c137808;
        uVar9 = 9;
        uVar8 = 0xb0;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,uVar4);
        uVar4 = deref_u32(uVar7,uVar9,uVar8,uVar4);
        uVar9 = 0;
        puVar10 = &DAT_8c1376d8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376d8,0);
        uVar7 = 10;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137708,0);
        uVar7 = 2;
        uVar9 = 0xb0;
        pcVar11 = FUN_8c03c0f0;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,FUN_8c03c0f0,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,pcVar11,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c137798;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137798,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1377c8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377c8,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c137828;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137828,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x19,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 1;
        puVar10 = &DAT_8c137738;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137738,1);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x1a,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 1;
        puVar10 = &DAT_8c137768;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137768,1);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,deref_u32,puVar10,uVar7);
        puVar3 = (undefined4 *)FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137858,0);
      }
      break;
    case 7:
      *(undefined4 *)(ar4 + 0x2dc) = DAT_8c137978;
      *(undefined4 *)(ar4 + 0x2e0) = uVar2;
      *(undefined **)(ar4 + 0x2e4) = PTR_FUN_8c137980;
      uVar4 = DAT_8c137988;
      *(undefined4 *)(ar4 + 0x2e8) = DAT_8c137984;
      *(undefined4 *)(ar4 + 0x2ec) = uVar4;
      *(undefined **)(ar4 + 0x2f0) = PTR_FUN_8c13798c;
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,iVar12);
      piVar5 = (int *)deref_u32(uVar4,uVar7,uVar9,iVar12);
      iVar12 = *piVar5;
      iVar6 = *(int *)(iVar12 + 4);
      if (iVar6 != 0) {
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,iVar6,iVar12);
        uVar4 = deref_u32(uVar4,uVar4,iVar6,iVar12);
        uVar9 = 0;
        puVar10 = &DAT_8c137810;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137810,0);
        uVar7 = 0x11;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9);
        piVar5 = (int *)deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar4 = DAT_8c137814;
        *(undefined4 *)(*piVar5 + 4) = DAT_8c137814;
        uVar9 = 0x11;
        uVar7 = FUN_8c03c0f0(ar4 + 0xb0,0x11,0x11,uVar4);
        piVar5 = (int *)deref_u32(uVar7,uVar7,uVar9,uVar4);
        *(undefined4 *)(*piVar5 + 0x10) = DAT_8c137820;
        uVar7 = 9;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = FUN_8c03c0f0(iVar6,9,iVar6,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,iVar6,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c1376f0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1376f0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar9 = 0;
        puVar10 = &DAT_8c137720;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137720,0);
        uVar7 = 2;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1377b0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377b0,0);
        uVar7 = 3;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar9 = 0;
        puVar10 = &DAT_8c1377e0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1377e0,0);
        uVar7 = 0x14;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar9);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137840,0);
        iVar6 = ar4 + 0xb0;
        pcVar11 = FUN_8c03c0f0;
        uVar4 = FUN_8c03c0f0(iVar6,0x19,FUN_8c03c0f0,iVar6);
        uVar4 = deref_u32(uVar4,uVar4,pcVar11,iVar6);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137750,1);
        uVar7 = 0x1a;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = FUN_8c03c0f0(iVar6,0x1a,iVar6,0xb0);
        uVar4 = deref_u32(uVar4,uVar7,iVar6,uVar9);
        puVar10 = &DAT_8c137780;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137780,1);
        uVar9 = 0x20;
        uVar7 = 0x20;
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,0x20);
        uVar4 = deref_u32(uVar4,uVar7,puVar10,uVar9);
        uVar7 = 0;
        puVar10 = &DAT_8c137870;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137870,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x27,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c137888;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c137888,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x28,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378a0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378a0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x21,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378b8;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378b8,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x22,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,uVar4,puVar10,uVar7);
        uVar7 = 0;
        puVar10 = &DAT_8c1378d0;
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378d0,0);
        uVar4 = FUN_8c03c0f0(ar4 + 0xb0,0x32,puVar10,uVar7);
        uVar4 = deref_u32(uVar4,deref_u32,puVar10,uVar7);
        FUN_8c034a70(ar4 + 0xb0,uVar4,&DAT_8c1378e8,0);
      }
      puVar3 = *(undefined4 **)(ar4 + 100);
      if (puVar3 == (undefined4 *)0x1) {
        puVar3 = (undefined4 *)s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0);
      }
    }
  }
  return puVar3;
}

__asm__(".globl _Class_12a25c_m6_06e69c\n.set _Class_12a25c_m6_06e69c, _Class_12a25c_m6_06e69c_def\n");
//@unit 8c06f3c4
#include "../decls.h"
undefined4 * Class_12a25c_m0_06f3c4_def(undefined4 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int *a4;
  undefined4 ar5_00;
  undefined4 in_stack_fffffff0;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)in_stack_fffffff0 >> 0x10),(undefined2)ar5);
  if (ar4 != (undefined4 *)0x0) {
    *ar4 = &DAT_8c12a25c;
    if ((ar4[0x6b] != 0) && (a4 = (int *)(uint)ar4[0x6b], a4 != (int *)0x0)) {
      (**(code **)(*a4 + 8))(a4,1,ar6,ar7);
    }
    Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x9c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x99,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x95,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x91,0xffffffff,ar6,ar7);
    Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7);
    object_dtor_delete(ar4 + 0x89,0xffffffff,ar6,ar7);
    ar5_00 = 0;
    Class_129cbc_m0_0312f4(ar4,0,ar6,ar7);
    if (0 < (short)ain0) {
      free_if_nonnull(ar4,ar5_00,ar6,ar7,ain0);
    }
  }
  return ar4;
}

__asm__(".globl _Class_12a25c_m0_06f3c4\n.set _Class_12a25c_m0_06f3c4, _Class_12a25c_m0_06f3c4_def\n");
//@unit 8c06f4c8
#include "../decls.h"
int FUN_8c06f4c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c032160(ar4,ar5,ar6,ar7);
  *(undefined4 *)(0x2ac + ar4) = 0;
  *(undefined4 *)(0x2b0 + ar4) = 0;
  *(undefined4 *)(0x2b4 + ar4) = 0;
  vec3_clear(ar4 + 0x244,ar5,ar6,ar7);
  vec3_clear(ar4 + 0x2bc,ar5,ar6,ar7);
  iVar1 = 0x2cc;
  *(undefined4 *)(0x2cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl _FUN_8c06f4c8\n.set _FUN_8c06f4c8, _FUN_8c06f4c8_def\n");
//@unit 8c06f530
#include "../decls.h"
undefined4 Class_12a25c_m1_06f530_def(int ar4,undefined4 *ar5,undefined4 ar6,undefined4 ar7)

{
  int ar5_00;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 in_fr1;
  float fVar3;
  code *pcVar6;
  double dVar4;
  double dVar5;
  float fVar7;
  double in_dr14;
  double in_xd0;
  double dVar8;
  bool bVar9;
  char cVar10;
  char cVar11;
  undefined4 in_stack_ffffff60;
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [16];
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [16];
  undefined1 auStack_24 [20];
  
  cVar11 = '\0';
  cVar10 = '\0';
  puVar1 = ar5;
  if ((((*(int *)(ar4 + 0x124) == 0x10) || (*(int *)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(ar4 + 0x124) == 0x12)) ||
     ((*(int *)(ar4 + 0x124) == 0x18 || (*(int *)(ar4 + 0x124) == 6)))) {
    *(undefined1 *)(ar4 + 0x210) = *(undefined1 *)(ar5 + 10);
  }
  else {
    Class_129cbc_m1_031598(ar4,ar5,ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x2a4) = 0;
  *(undefined4 *)(ar4 + 0x218) = 0;
  if (ar5[4] != 1) {
    if (cVar11 != '\0') {
      in_fr1 = 0x43800000;
    }
    FUN_8c03207c(ar4,puVar1,ar6,ar7);
    FUN_8c0324ac(ar4,puVar1,ar6,ar7);
  }
  ar5_00 = pure_virtual_stub(ar4,ar5,ar6,ar7);
  if ((*(int *)(ar4 + 0x178) == 1) && (ar5_00 != 1)) {
    *(undefined4 *)(ar4 + 0x178) = 0;
  }
  FUN_8c02f2c0(*ar5,ar5_00,ar6,ar7,in_stack_ffffff60);
  if ((((*(int *)(ar4 + 0x124) == 0x10) || (*(int *)(ar4 + 0x124) == 0x11)) ||
      (*(int *)(ar4 + 0x124) == 0x12)) || (*(int *)(ar4 + 0x124) == 0x18)) {
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_74);
    Vec3_add(auStack_74,ar4 + 0x90,ar6,ar7,auStack_84);
    Vec3_assign(ar4 + 4,auStack_84,ar6,ar7);
    Vec3_dtor(auStack_84,0xffffffff,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_74,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(uint)ar5[1] + 4));
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      fVar7 = 160.0;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      fVar7 = 9.80909e-43;
    }
    if ((cVar10 == '\0' && fVar7 < fVar3) && (ar5[4] != 3)) {
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
      dVar4 = (double)CONCAT44(fVar7,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < fVar7;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)((ulonglong)dVar4 >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(*(int *)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = dVar8;
        }
      }
    }
    vec3_clear(ar4 + 700,uVar2,ar6,ar7);
  }
  else {
    Vec3_scale(ar4 + 0x14,ar4 + 0x28,ar6,ar7,auStack_24);
    Vec3_add(auStack_24,ar4 + 0x90,ar6,ar7,auStack_34);
    Vec3_add(auStack_34,ar4 + 0x6c,ar6,ar7,auStack_44);
    Vec3_add(auStack_44,ar4 + 0x13c,ar6,ar7,auStack_54);
    Vec3_add(auStack_54,ar4 + 700,ar6,ar7,auStack_64);
    Vec3_assign(ar4 + 4,auStack_64,ar6,ar7);
    Vec3_dtor(auStack_64,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_54,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_44,0xffffffff,ar6,ar7);
    Vec3_dtor(auStack_34,0xffffffff,ar6,ar7);
    uVar2 = 0xffffffff;
    Vec3_dtor(auStack_24,0xffffffff,ar6,ar7);
    if (cVar11 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 *(undefined4 *)(*(int *)(uint)ar5[1] + 4));
      dVar5 = (double)CONCAT44(*(undefined4 *)(ar4 + 8),in_fr1);
    }
    else {
      dVar5 = *(double *)(ar4 + 8);
    }
    if (cVar10 == '\0') {
      in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                 SUB84(in_dr14,0) + (float)((ulonglong)dVar5 >> 0x20));
    }
    else {
      in_dr14 = in_dr14 + dVar5;
    }
    (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
    fVar3 = (float)((ulonglong)dVar5 >> 0x20);
    if (cVar11 == '\0') {
      pcVar6 = (code *)0x43200000;
      dVar5 = in_xd0;
    }
    else {
      fVar3 = 160.0;
      pcVar6 = vec3_clear;
    }
    if ((cVar10 == '\0' && (float)(uint)pcVar6 < fVar3) && (ar5[4] != 3)) {
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
      dVar4 = (double)CONCAT44(pcVar6,fVar3);
      if (cVar10 == '\0') {
        bVar9 = SUB84(in_dr14,0) < (float)(uint)pcVar6;
      }
      else {
        bVar9 = in_dr14 < dVar4;
      }
      if (!bVar9) {
        (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],uVar2,ar6,ar7);
        dVar8 = dVar4;
        if (cVar11 == '\0') {
          dVar4 = (double)((ulonglong)dVar4 >> 0x20);
          dVar8 = dVar5;
        }
        if (cVar11 == '\0') {
          dVar5 = (double)CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),SUB84(dVar4,0));
        }
        else {
          dVar5 = *(double *)(*(int *)(uint)ar5[1] + 4);
        }
        if (cVar10 == '\0') {
          fVar3 = SUB84(dVar5,0) - (float)((ulonglong)dVar5 >> 0x20);
        }
        else {
          fVar3 = SUB84(dVar5 - dVar5,0);
        }
        if (cVar11 == '\0') {
          *(float *)(ar4 + 8) = fVar3;
        }
        else {
          *(double *)(ar4 + 8) = dVar8;
        }
      }
    }
    vec3_clear(ar4 + 0x13c,uVar2,ar6,ar7);
    vec3_clear(ar4 + 700,uVar2,ar6,ar7);
  }
  if (*(int *)(ar4 + 0x124) != 2) {
    FUN_8c031ab4(ar4,*(undefined4 *)(ar5[1] + 4),ar6,ar7);
  }
  *(undefined4 *)(ar4 + 0x21c) = 0;
  *(undefined4 *)(ar4 + 0x1d4) = 0;
  return 0x1d4;
}

__asm__(".globl _Class_12a25c_m1_06f530\n.set _Class_12a25c_m1_06f530, _Class_12a25c_m1_06f530_def\n");
//@unit 8c06f918
#include "../decls.h"
int Class_12a25c_m7_06f918_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  int iVar1;
  
  FUN_8c031684(ar4,ar5,ar6,ar7);
  iVar1 = 0x298;
  *(undefined4 *)(0x298 + ar4) = 1;
  return iVar1;
}

__asm__(".globl _Class_12a25c_m7_06f918\n.set _Class_12a25c_m7_06f918, _Class_12a25c_m7_06f918_def\n");
//@unit 8c06f93c
#include "../decls.h"
code * FUN_8c06f93c_def(int ar4,undefined4 *ar5,undefined4 ar6,code *ar7)

{
  undefined4 uVar1;
  uint ar7_00;
  int iVar2;
  code *pcVar3;
  undefined4 *a5;
  undefined8 *ar5_00;
  int iVar4;
  undefined1 *puVar5;
  undefined8 *ar6_00;
  undefined4 uVar6;
  undefined8 *ar7_01;
  undefined4 ar7_02;
  code *pcVar7;
  undefined4 in_fr1;
  float fVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  double in_dr12;
  double in_dr14;
  double in_xd0;
  undefined8 in_xd12;
  double in_xd14;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined8 uStack_158;
  undefined1 auStack_144 [16];
  undefined1 auStack_134 [16];
  undefined1 auStack_124 [16];
  undefined1 auStack_114 [16];
  undefined1 auStack_104 [16];
  undefined1 auStack_f4 [12];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [12];
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [16];
  undefined1 auStack_7c [16];
  undefined1 auStack_6c [16];
  undefined1 auStack_5c [16];
  undefined1 auStack_4c [16];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_24;
  
  cVar14 = '\0';
  cVar13 = '\0';
  pcVar7 = (code *)0x1;
  puVar5 = auStack_5c;
  FUN_8c03f480(*ar5,ar5,puVar5,ar7,puVar5);
  Vec3_ctor_copy(auStack_30,auStack_5c,puVar5,ar7);
  Vec3_dtor(auStack_5c,0xffffffff,puVar5,ar7);
  pcVar3 = Vec3_set_zero;
  Vec3_set_zero(auStack_3c,Vec3_set_zero,puVar5,ar7);
  dVar9 = (double)CONCAT44(0x3f800000,in_fr1);
  dVar10 = dVar9;
  if (cVar14 == '\0') {
    uStack_158 = (double)CONCAT44((*(uint*)((uchar*)&uStack_158+4)),0x3f800000);
    dVar10 = uStack_158;
  }
  uStack_158 = dVar10;
  if (((ar5[4] == 3) || (pcVar3 = *(code **)(ar4 + 0x68), pcVar3 != (code *)0x0)) &&
     (*(int *)(ar4 + 0x298) == 1)) {
    if (((*(int *)(ar4 + 0x124) == 4) && (*(int *)(ar4 + 300) == 2)) &&
       (iVar2 = get_field_6c_028cc4(*ar5,get_field_6c_028cc4,puVar5,ar7), iVar2 != 0)) {
      Vec3_scale(ar4 + 0x80,ar4 + 0x48,0x80,ar7,auStack_6c);
      pcVar7 = Vec3_scale;
      Vec3_scale(auStack_6c,*(int *)(ar5[1] + 8) + 4,Vec3_scale,ar7,auStack_7c);
      Vec3_add(auStack_7c,*(undefined4 *)(uint)ar5[1],pcVar7,ar7,auStack_8c);
      Vec3_ctor_copy(auStack_4c,auStack_8c,pcVar7,ar7);
      Vec3_dtor(auStack_8c,0xffffffff,0xffffffff,ar7);
      uVar6 = 0xffffffff;
      pcVar7 = Vec3_dtor;
      Vec3_dtor(auStack_7c,0xffffffff,Vec3_dtor,0xffffffff);
      Vec3_dtor(auStack_6c,0xffffffff,pcVar7,uVar6);
      uVar1 = get_field_6c_028cc4(*ar5,get_field_6c_028cc4,pcVar7,uVar6);
      FUN_8c036988(uVar1,FUN_8c036988,uVar1,uVar6);
      Vec3_dtor(auStack_4c,0xffffffff,uVar1,uVar6);
    }
    uVar1 = ar5[4];
    FUN_8c07a68c(ar4,*(undefined4 *)(uint)ar5[1],uVar1,ar5[3]);
    uVar6 = 0x80;
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,uVar1,0x80);
    object_dtor_delete(auStack_3c,0xffffffff,uVar1,uVar6);
    Vec3_dtor(auStack_30,0xffffffff,uVar1,uVar6);
    return (code *)1;
  }
  iVar2 = *(int *)(ar4 + 0x124);
  if ((0x1f < iVar2) || (iVar2 < 0)) goto override_jmp_8c06fb96_case_5;
                    
  switch(iVar2) {
  case 0:
  case 0xe:
  case 0xf:
    FUN_8c030eb8(ar4 + 0x1fc,0x1fc,puVar5,ar7);
    ar7 = (code *)(uint)ar5[3];
    pcVar7 = (code *)FUN_8c078fd0(ar4,*(undefined4 *)(uint)ar5[1],*(undefined4 *)(ar5[1] + 4),ar7);
    break;
  case 1:
    ar7 = (code *)pure_virtual_stub(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    pcVar7 = ar7;
    break;
  case 2:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)FUN_8c07af10(ar4,*(undefined4 *)(uint)ar5[1],ar5[4],ar7);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 3:
    pcVar7 = (code *)FUN_8c07f76c(ar4,*(undefined4 *)(uint)ar5[1],ar5[6],ar7);
    break;
  case 4:
    ar7 = (code *)*ar5;
    pcVar7 = (code *)FUN_8c077a38(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    break;
  case 6:
    pcVar7 = (code *)FUN_8c07edac(ar4,*(undefined4 *)(uint)ar5[1],ar5[6],ar7);
    break;
  case 7:
    FUN_8c031b58(ar4 + 0xb0,0xb0,puVar5,ar7);
    uVar1 = 0xb0;
    ar7 = CAnimBody_AdvanceFrame_wrapper;
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,0xb0,puVar5,CAnimBody_AdvanceFrame_wrapper);
    if (iVar2 == 1) {
      FUN_8c03c314(ar4,uVar1,1,ar7);
      pcVar7 = (code *)0x0;
    }
    break;
  case 8:
  case 9:
    uVar6 = 0xfffffffb;
    *(byte *)(ar4 + 0x1fc) = *(byte *)(ar4 + 0x1fc) & 0xfb;
    uVar1 = 300;
    if (*(int *)(ar4 + 300) == 0) {
      if (*(int *)(ar4 + 0x124) == 9) {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(uint)ar5[1];
        uVar1 = 8;
        FUN_8c033474(ar4,8,uVar6,ar7);
      }
      else {
        ar7 = (code *)(uint)ar5[6];
        uVar6 = *(undefined4 *)(uint)ar5[1];
        uVar1 = 7;
        FUN_8c033474(ar4,7,uVar6,ar7);
      }
    }
    Vec3_ctor_xyz(auStack_144,uVar1,uVar6,ar7);
    pcVar7 = (code *)FUN_8c07b7d0(ar4,*(undefined4 *)(uint)ar5[1],auStack_144,ar5[3],ar5[6]);
    ar7 = (code *)0xffffffff;
    Vec3_dtor(auStack_144,0xffffffff,auStack_144,0xffffffff);
    break;
  case 10:
    if (*(int *)(ar4 + 0x128) < 3) {
      pcVar7 = (code *)FUN_8c076750(ar4,*ar5,0,ar7);
    }
    else {
      a5 = ar5;
      pcVar7 = (code *)FUN_8c076994(ar4,ar5,puVar5,ar7);
      (**(code **)(*(int *)(uint)ar5[6] + 0x184))((int *)(uint)ar5[6],a5,puVar5,ar7);
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),(int)((ulonglong)dVar9 >> 0x20));
      }
      else {
        dVar10 = *(double *)(ar4 + 0x48);
        in_xd0 = dVar9;
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar10,0) - (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar10 - dVar10,0);
      }
      if (cVar14 == '\0') {
        uVar11 = CONCAT44(*(undefined4 *)(*(int *)(uint)ar5[1] + 4),fVar8);
      }
      else {
        uVar11 = *(undefined8 *)(*(int *)(uint)ar5[1] + 4);
      }
      if (cVar13 == '\0' && (float)uVar11 < (float)((ulonglong)uVar11 >> 0x20)) {
        ar7 = FUN_8c03c314;
        FUN_8c03c314(ar4,a5,puVar5,FUN_8c03c314);
      }
      else {
        FUN_8c031748(ar4,a5,puVar5,ar7);
      }
    }
    if (cVar14 == '\0') {
      dVar9 = (double)CONCAT44(0x3f666666,*(undefined4 *)(ar4 + 0x28));
    }
    else {
      in_xd0 = *(double *)(ar4 + 0x28);
      dVar9 = 2.651015428457012e+77;
    }
    if (cVar13 == '\0') {
      fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
    }
    else {
      fVar8 = SUB84(dVar9 * dVar9,0);
    }
    if (cVar14 == '\0') {
      *(float *)(ar4 + 0x28) = fVar8;
    }
    else {
      *(double *)(ar4 + 0x28) = in_xd0;
    }
    break;
  case 0xb:
    if (*(int *)(ar4 + 0x128) < 2) {
      pcVar7 = (code *)FUN_8c075ef4(ar4,*(int *)(ar4 + 0x128),puVar5,ar7);
    }
    else {
      Vec3_ctor_copy(auStack_9c,&DAT_8c125e68,puVar5,ar7);
      uVar1 = 0;
      pcVar7 = (code *)FUN_8c0811b4(ar4,auStack_9c,0,ar7);
      Vec3_dtor(auStack_9c,0xffffffff,uVar1,ar7);
    }
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0xc:
    iVar2 = get_field_6c_028cc4(*ar5,pcVar3,puVar5,ar7);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 0;
      object_dtor_delete(auStack_3c,0xffffffff,puVar5,ar7);
      Vec3_dtor(auStack_30,0xffffffff,puVar5,ar7);
      return (code *)2;
    }
    FUN_8c0507a4(iVar2,auStack_30,&fStack_2c,&fStack_28);
    FUN_8c03f414(iVar2,auStack_3c,auStack_38,auStack_34);
    ar7_01 = &uStack_158;
    ar6_00 = &uStack_158;
    ar5_00 = &uStack_158;
    FUN_8c03f3f8(iVar2,ar5_00,ar6_00,ar7_01);
    if (*(int *)(ar4 + 0x128) == 1) {
      Vec3_ctor_xyz(auStack_ac,Vec3_ctor_xyz,ar6_00,ar7_01);
      puVar5 = auStack_b8;
      vec3_copy_8c02b5fc(puVar5,auStack_3c,puVar5,ar7_01);
      FUN_8c023484(auStack_ac,auStack_b8,puVar5,ar7_01,auStack_c8);
      pcVar3 = Vec3_scale;
      Vec3_scale(auStack_c8,&uStack_158,Vec3_scale,ar7_01,auStack_d8);
      ar7 = FUN_8c023aa0;
      FUN_8c023aa0(auStack_30,auStack_d8,pcVar3,FUN_8c023aa0);
      puVar5 = auStack_d8;
      Vec3_dtor(puVar5,0xffffffff,puVar5,ar7);
      Vec3_dtor(auStack_c8,0xffffffff,puVar5,ar7);
      pcVar3 = object_dtor_delete;
      object_dtor_delete(auStack_b8,0xffffffff,object_dtor_delete,ar7);
      Vec3_dtor(auStack_ac,0xffffffff,pcVar3,ar7);
    }
    else {
      if (*(int *)(ar4 + 0x128) != 2) {
        uVar1 = 0;
        *(undefined4 *)(ar4 + 0x178) = 0;
        object_dtor_delete(auStack_3c,0xffffffff,0,ar7_01);
        Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7_01);
        return (code *)2;
      }
      puVar5 = auStack_e8;
      pcVar3 = Vec3_ctor_xyz;
      Vec3_ctor_xyz(puVar5,ar5_00,Vec3_ctor_xyz,puVar5);
      vec3_copy_8c02b5fc(auStack_f4,auStack_3c,pcVar3,puVar5);
      puVar5 = auStack_f4;
      FUN_8c023484(auStack_e8,puVar5,pcVar3,puVar5,auStack_104);
      Vec3_scale(auStack_104,&uStack_158,pcVar3,puVar5,auStack_114);
      FUN_8c023aa0(auStack_30,auStack_114,pcVar3,puVar5);
      Vec3_dtor(auStack_114,0xffffffff,pcVar3,puVar5);
      Vec3_dtor(auStack_104,0xffffffff,pcVar3,puVar5);
      object_dtor_delete(auStack_f4,0xffffffff,pcVar3,puVar5);
      ar7 = Vec3_dtor;
      Vec3_dtor(auStack_e8,0xffffffff,pcVar3,Vec3_dtor);
    }
    iVar2 = *(int *)(ar4 + 0x134);
    if (iVar2 == 0) {
      *(undefined4 *)(ar4 + 0x178) = 1;
      *(undefined4 *)(ar4 + 0x40) = 5;
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    else if (iVar2 != 1) {
      if (iVar2 == 2) {
        ar7 = (code *)*ar5;
        iVar2 = FUN_8c07cce0(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
        if (iVar2 == 0) {
          *(undefined4 *)(ar4 + 0x134) = 0;
          *(undefined4 *)(ar4 + 0x178) = 0;
          pcVar7 = (code *)0x0;
        }
      }
      break;
    }
    ar7 = (code *)(*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f138);
    puVar5 = auStack_30;
    uVar1 = *(undefined4 *)(uint)ar5[1];
    iVar2 = pure_virtual_stub(ar4,uVar1,puVar5,ar7);
    if (iVar2 == 0) {
      FUN_8c03f3e8(*ar5,uVar1,puVar5,ar7);
      *(int *)(ar4 + 0x134) = *(int *)(ar4 + 0x134) + 1;
    }
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,puVar5,ar7);
    break;
  case 0xd:
    *(undefined4 *)(ar4 + 0x214) = 0;
    ar7_00 = *(byte *)(ar4 + 0x1fc) & 0xfffffffb;
    *(char *)(ar4 + 0x1fc) = (char)ar7_00;
    if (*(int *)(ar4 + 0x128) == 1) {
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x10,0xffffffff,0);
      FUN_8c03f3ac(ar4 + 0xb0,0xb0,uVar1,ar7);
    }
    else {
      if (*(int *)(ar4 + 0x128) != 2) {
        uVar1 = 0xffffffff;
        object_dtor_delete(auStack_3c,0xffffffff,0xffffffff,ar7_00);
        Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7_00);
        return (code *)2;
      }
      ar7 = (code *)0x0;
      uVar1 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x16,0xffffffff,0);
      FUN_8c03f3ac(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7);
    }
    if (*(int *)(ar4 + 300) == 0) {
      iVar4 = ar4 + 0x48;
      iVar2 = ar4 + 0x48;
      FUN_8c032ab0(ar4,iVar2,iVar4,ar7);
      uVar1 = SUB84(dVar9,0);
      FUN_8c032ab0(ar4,iVar2,iVar4,ar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x40000000,uVar1);
      }
      else {
        dVar9 = 5.52249404598712e-312;
      }
      iVar2 = ar4 + 0x48;
      Vec3_ctor_xyz(auStack_124,auStack_124,iVar2,ar7);
      Vec3_add(*(undefined4 *)(uint)ar5[1],auStack_124,iVar2,ar7,auStack_134);
      Vec3_assign(ar4 + 0x54,auStack_134,iVar2,ar7);
      Vec3_dtor(auStack_134,0xffffffff,iVar2,ar7);
      Vec3_dtor(auStack_124,0xffffffff,iVar2,ar7);
      ar7 = (code *)(uint)ar5[6];
      iVar2 = FUN_8c0329ac(ar4,ar4 + 0x54,ar5[3],ar7);
      if (iVar2 == 0) {
        *(undefined4 *)(ar4 + 300) = 2;
      }
      else {
        ar7 = (code *)0x12c;
        *(undefined4 *)(ar4 + 300) = 1;
        *(undefined4 *)(ar4 + 0x40) = 3;
      }
    }
    if (*(int *)(ar4 + 300) == 1) {
      pcVar3 = *(code **)ar5[1];
      iVar4 = ar4 + 0x54;
      ar7 = pcVar3;
      iVar2 = FUN_8c031764(ar4,iVar4,pcVar3,pcVar3);
      if (iVar2 == 0) {
        pcVar3 = (code *)0x12c;
        *(undefined4 *)(ar4 + 300) = 0;
      }
      FUN_8c032ab0(ar4,iVar4,pcVar3,ar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44((int)((ulonglong)dVar9 >> 0x20),*(undefined4 *)(ar4 + 0x24));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x24);
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x28) = fVar8;
      }
      else {
        *(double *)(ar4 + 0x28) = in_xd0;
      }
    }
    else {
      FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    }
    break;
  case 0x14:
    if (*(int *)(ar4 + 0x21c) == 1) {
      iVar2 = *(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c;
      FUN_8c031b68(ar4,iVar2,puVar5,0x21c);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(0x3f000000,*(undefined4 *)(ar4 + 0x38));
      }
      else {
        in_xd0 = *(double *)(ar4 + 0x38);
        dVar9 = 3.73993469111571e-312;
      }
      if (cVar13 == '\0') {
        fVar8 = SUB84(dVar9,0) * (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fVar8 = SUB84(dVar9 * dVar9,0);
      }
      if (cVar14 == '\0') {
        *(float *)(ar4 + 0x38) = fVar8;
      }
      else {
        *(double *)(ar4 + 0x38) = in_xd0;
      }
      ar7 = CAnimBody_AdvanceFrame_wrapper;
      iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar2,puVar5,CAnimBody_AdvanceFrame_wrapper)
      ;
      if (iVar2 == 1) {
        ar7 = (code *)0x0;
        s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
      }
      uVar1 = *(undefined4 *)(uint)ar5[1];
      FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
      if (*(int *)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x8c280eb4;
        FUN_8c031b68(ar4,*(int *)(ar4 + 0x128) * 0x18 + -0x73d7f14c,uVar1,0x8c280eb4);
        *(undefined4 *)(ar4 + 300) = 0;
        *(undefined4 *)(ar4 + 0x2a0) = 2;
        pcVar7 = (code *)0x0;
      }
    }
    else {
      if (cVar14 == '\0') {
        in_dr12 = (double)CONCAT44((int)((ulonglong)in_dr12 >> 0x20),*(undefined4 *)(ar5[3] + 8));
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),in_fr1);
      }
      else {
        in_xd12 = *(undefined8 *)(ar5[3] + 8);
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        fStack_28 = SUB84(in_dr12,0) - (float)((ulonglong)dVar9 >> 0x20);
      }
      else {
        fStack_28 = SUB84(in_dr12 - dVar9,0);
      }
      if (cVar14 != '\0') {
        fStack_28 = (float)in_xd12;
        uStack_24 = (undefined4)((ulonglong)in_xd12 >> 0x20);
      }
      iVar2 = *(int *)(uint)ar5[6];
      pcVar7 = *(code **)(iVar2 + 0x184);
      (*pcVar7)((int *)(uint)ar5[6],pcVar3,iVar2,pcVar7);
      if (cVar14 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),(int)((ulonglong)dVar9 >> 0x20)
                                  );
        dVar10 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(dVar9,0));
        dVar9 = in_xd14;
      }
      else {
        dVar10 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        in_dr14 = (double)CONCAT44((int)((ulonglong)in_dr14 >> 0x20),
                                   SUB84(in_dr14,0) - (float)((ulonglong)dVar10 >> 0x20));
      }
      else {
        in_dr14 = in_dr14 - dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(fStack_2c,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      if (cVar13 == '\0') {
        bVar12 = SUB84(in_dr14,0) < (float)((ulonglong)dVar10 >> 0x20);
      }
      else {
        bVar12 = in_dr14 < dVar10;
      }
      if ((bVar12) && (fStack_2c = SUB84(in_dr14,0), cVar14 != '\0')) {
        fStack_2c = SUB84(dVar9,0);
        fStack_28 = (float)((ulonglong)dVar9 >> 0x20);
      }
      (**(code **)(*(int *)(uint)ar5[6] + 0x128))((int *)(uint)ar5[6],auStack_30,iVar2,pcVar7);
      if (cVar14 == '\0') {
        dVar9 = (double)CONCAT44(*(undefined4 *)(ar4 + 0x48),SUB84(in_dr14,0));
      }
      else {
        dVar9 = *(double *)(ar4 + 0x48);
      }
      if (cVar13 == '\0') {
        dVar9 = (double)CONCAT44((float)((ulonglong)dVar9 >> 0x20) +
                                 (float)((ulonglong)dVar10 >> 0x20),SUB84(dVar9,0));
      }
      else {
        dVar9 = dVar9 + dVar10;
      }
      if (cVar14 == '\0') {
        dVar10 = (double)CONCAT44(fStack_2c,SUB84(dVar10,0));
      }
      else {
        dVar10 = (double)CONCAT44(fStack_28,fStack_2c);
      }
      fVar8 = (float)((ulonglong)dVar9 >> 0x20);
      if (cVar13 == '\0') {
        bVar12 = (float)((ulonglong)dVar10 >> 0x20) < fVar8;
      }
      else {
        bVar12 = dVar10 < dVar9;
      }
      if ((bVar12) && (fStack_2c = fVar8, cVar14 != '\0')) {
        fStack_2c = SUB84(dVar9,0);
        fStack_28 = fVar8;
      }
      ar7 = (code *)(uint)ar5[3];
      pcVar7 = (code *)FUN_8c07baa0(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7);
    }
    break;
  case 0x15:
    Vec3_ctor_xyz((int)&uStack_158 + 4,pcVar3,puVar5,ar7);
    ar7 = (code *)(uint)ar5[3];
    iVar2 = (int)&uStack_158 + 4;
    pcVar7 = (code *)FUN_8c07b7d0(ar4,*(undefined4 *)(uint)ar5[1],iVar2,ar7,ar5[6]);
    Vec3_dtor((int)&uStack_158 + 4,0xffffffff,iVar2,ar7);
    break;
  case 0x16:
    ar7 = (code *)0x0;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    pcVar7 = (code *)0x0;
    break;
  case 0x19:
    *(undefined4 *)(ar4 + 0x214) = 0;
    iVar2 = *(int *)(ar4 + 300);
    if (iVar2 == 0) {
      ar7_02 = ar5[6];
      uVar1 = *(undefined4 *)(uint)ar5[1];
      uVar6 = 0x1e;
      FUN_8c033474(ar4,0x1e,uVar1,ar7_02);
      FUN_8c031748(ar4,uVar6,uVar1,ar7_02);
      ar7 = (code *)0x0;
      uVar6 = 0xffffffff;
      s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
      uVar1 = FUN_8c023334(ar4 + 0x14,&DAT_8c125e68,uVar6,ar7);
      *(undefined4 *)(ar4 + 0x220) = uVar1;
      if (*(int *)(ar4 + 0x220) == 3) {
        ar7 = s_CAnimBody_SetFrame_033e6e;
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,uVar6,s_CAnimBody_SetFrame_033e6e);
      }
      else {
        s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,0xb0,uVar6,ar7);
      }
      *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
LAB_8c070b94:
      if (*(int *)(ar4 + 0x40) == 0) {
        ar7 = (code *)0x12c;
        *(int *)(ar4 + 300) = *(int *)(ar4 + 300) + 1;
      }
    }
    else {
      if (iVar2 == 1) goto LAB_8c070b94;
      if (iVar2 == 2) {
        if (*(int *)(ar4 + 0x220) == 3) {
          ar7 = (code *)(ar4 + 0xb0);
          iVar2 = s_CAnimBody_AdvanceFrame_033ba0(ar7,pcVar3,s_CAnimBody_AdvanceFrame_033ba0,ar7);
          if (iVar2 == 1) {
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
        else {
          uVar1 = 0xb0;
          s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,0xb0,puVar5,ar7);
          ar7 = CAnimBody_GetCurFrame;
          CAnimBody_GetCurFrame(ar4 + 0xb0,uVar1,puVar5,CAnimBody_GetCurFrame);
          if (cVar14 == '\0') {
            dVar9 = (double)((ulonglong)dVar9 >> 0x20);
          }
          if (cVar13 != '\0' || SUB84(dVar9,0) <= 0.0) {
            s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,ar4 + 0xb0,puVar5,ar7);
            *(undefined4 *)(ar4 + 0x214) = 1;
            pcVar7 = (code *)0x0;
            *(undefined4 *)(ar4 + 300) = 0;
          }
        }
      }
    }
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0x1a:
    FUN_8c031748(ar4,pcVar3,puVar5,ar7);
    ar7 = (code *)0x0;
    uVar6 = 0xffffffff;
    uVar1 = 8;
    s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,8,0xffffffff,0);
    FUN_8c032ab0(ar4,uVar1,uVar6,ar7);
    s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,ar4 + 0xb0,uVar6,ar7);
    FUN_8c031c74(ar4,auStack_30,*(undefined4 *)(uint)ar5[1],ar7);
    break;
  case 0x1b:
    uVar1 = *(undefined4 *)(uint)ar5[1];
    FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
    pcVar7 = (code *)FUN_8c07d904(ar4,*ar5,uVar1,ar7);
    break;
  case 0x1c:
    pcVar7 = (code *)FUN_8c031de8(ar4,0x10,puVar5,ar7);
    break;
  case 0x1e:
    uVar1 = *(undefined4 *)(uint)ar5[1];
    FUN_8c031c74(ar4,auStack_30,uVar1,ar7);
    iVar2 = CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar4 + 0xb0,uVar1,ar7);
    if (iVar2 == 1) {
      pcVar7 = (code *)0x0;
    }
    break;
  case 0x1f:
    ar7 = (code *)(uint)ar5[6];
    pcVar7 = (code *)FUN_8c07f56c(ar4,*(undefined4 *)(uint)ar5[1],auStack_30,ar7,ar5[3]);
  }
override_jmp_8c06fb96_case_5:
  uVar1 = 0x124;
  if (*(int *)(ar4 + 0x124) != 0xc) {
    Vec3_assign(ar4 + 0x80,ar4 + 0x14,0x124,ar7);
  }
  object_dtor_delete(auStack_3c,0xffffffff,uVar1,ar7);
  Vec3_dtor(auStack_30,0xffffffff,uVar1,ar7);
  return pcVar7;
}

__asm__(".globl _FUN_8c06f93c\n.set _FUN_8c06f93c, _FUN_8c06f93c_def\n");
