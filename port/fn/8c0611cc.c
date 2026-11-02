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
