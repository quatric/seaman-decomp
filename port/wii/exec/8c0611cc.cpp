#include "../decls.h"
extern "C" {
#include "../trace.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
le<undefined*>*  s_GRATIFIC_EAT_0611d6_def(le<undefined*>* ar4,le<int>* ar5,code *ar6,char *ar7)

{
  TRACE_ENTER("s_GRATIFIC_EAT_0611d6");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 272; for (int i_ = 0; i_ < 272; i_++) z_[i_] = 0; }
  int iVar1;
  le<undefined*>* ppuVar2;
  undefined4 uVar3;
  le<undefined*>* ppuVar4;
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
  
  cVar14 = '\0';
  iVar13 = 0;
  iVar1 = *(le<int>* )(unsigned)(ar6 + 8);
  pcVar11 = ar6;
  ppuVar2 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), get_field_124_027930(iVar1,ar5,ar6,ar7));
  puVar6 = (undefined *)(unsigned)0x35;
  ppuVar4 = ppuVar2;
  if (((int)ppuVar2 < 0x36) && (-1 < (int)ppuVar2)) {
    ppuVar4 = (le<unsigned char*>*)(&(*(undefined1 *)(unsigned)0x8c061220));
                    
    switch((uint)ppuVar2) {
    case 0x0:
      if (((*(char *)(unsigned)((int)ar4 + 0x879) == '\x02') &&
          (puVar6 = ar4[0x21f], puVar6 == (undefined *)(unsigned)0x1)) &&
         ((ar4[0x220] == (undefined *)(unsigned)0x0 &&
          (uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_a0_035724(*(le<int>* )(unsigned)(ar6 + 0x18),1,pcVar11,ar7)), (char)uVar3 == '\x02')))
         ) {
        pcVar11 = (code *)0x880;
        ar4[0x220] = (undefined *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0fa688(0x8c35468c,puVar6,0x880,ar7));
      }
      uVar5 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_a0_035724(*(le<int>* )(unsigned)(ar6 + 0x18),puVar6,pcVar11,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)(uVar5 & 0xff);
      if ((le<undefined*>* )(unsigned)(uVar5 & 0xff) == (le<undefined*>* )(unsigned)0x3) {
        ar4[3] = ar4[3] + -1;
        ppuVar4 = ar4;
      }
      break;
    case 0x3:
      ar4[3] = ar4[3] + -1;
      ar4[2] = (undefined *)(unsigned)0x32;
      ppuVar4 = ar4;
      break;
    case 0x5:
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02ce10(*(le<int>* )(unsigned)(ar6 + 4) + 0x90,0,pcVar11,ar7));
      break;
    case 0x6:
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02f414(ar4,0x35,pcVar11,ar7));
      if (ppuVar4 == (le<undefined*>* )(unsigned)0x1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_6c_02f46c(ar4[0x1b],puVar6,pcVar11,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05feec(ar4[0x1b],uVar3,pcVar11,ar7));
        pcVar11 = ((void *)0x8c05fec4);
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05fec4(*(le<int>* )(unsigned)(ar6 + 4),uVar3,((void *)0x8c05fec4),ar7));
        puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02ea00(ar4 + 0x207,0x81c,pcVar11,ar7));
        ppuVar4 = (le<undefined*>* )(unsigned)0x850;
        ar4[0x214] = puVar6;
      }
      if (ar4[0x1b] != (undefined *)(unsigned)0x0) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4[0x1b] + 8) + 0x114))))(ar4[0x1b],ar4 + 0x1b,pcVar11,ar7));
        if (iVar1 == 0x18) {
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 272)); FUN_8c02c330(*(le<int>* )(unsigned)(ar6 + 4) + 0x78,1,pcVar11,ar7); });
          pcVar7 = ((undefined1 *)(unsigned)0x8c136c23);
          uVar8 = 0;
          uVar3 = 2;
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0306d4(ar4 + 0x27,2,0,((undefined1 *)(unsigned)0x8c136c23)));
        }
        else {
          pcVar7 = ((undefined1 *)(unsigned)0x8c136c16);
          uVar8 = 0;
          uVar3 = 2;
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0306d4(ar4 + 0x27,2,0,((undefined1 *)(unsigned)0x8c136c16)));
        }
        (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],uVar3,uVar8,pcVar7));
        ar4[0x1b] = (undefined *)(unsigned)0x0;
        ppuVar4 = (le<undefined*>* )(unsigned)0x6c;
      }
      break;
    case 0x8:
      (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)ar6 + 8) + 0xbc))))(*(le<int>* )(unsigned)ar6,0x35,pcVar11,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,puVar6,pcVar11,ar7));
      uVar8 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02bfd8(*(le<int>* )(unsigned)(ar6 + 4),puVar6,pcVar11,ar7));
      uVar9 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),puVar6,pcVar11,ar7));
      uVar10 = 1;
      iVar1 = (int)(short)uVar8;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0620bc(uVar3,iVar1,uVar9,1));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,iVar1,uVar9,uVar10));
      uVar8 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02bfd8(*(le<int>* )(unsigned)(ar6 + 4),((void *)0x8c02bfd8),uVar9,uVar10));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),((void *)0x8c025f70),uVar9,uVar10));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0620a4(uVar3,(int)(short)uVar8,1 - iVar1,uVar10));
      if ((char)uVar3 == '\x01') {
        ppuVar4 = (le<undefined*>* )(unsigned)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        iVar1 = *ar5;
        ppuVar4 = ar4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar1 + 0x148))))(ar5,iVar1,ar4,uVar10));
        uVar8 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02bfd8(*(le<int>* )(unsigned)(ar6 + 4),iVar1,ppuVar4,uVar10));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),iVar1,ppuVar4,uVar10));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02c310(uVar3,(int)(short)uVar8,1 - iVar1,uVar10));
        if ((char)uVar3 == '\x01') {
          ar4[0x216] = (undefined *)(unsigned)0x0;
        }
        ppuVar4 = (le<undefined*>* )(unsigned)ar4[0x216];
        if (0x708 < (int)ar4[0x216]) {
          uVar9 = 0;
          ar4[0x216] = (undefined *)(unsigned)0x0;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,*ar5,0,uVar10));
          pcVar11 = ((void *)0x8c02bfd8);
          uVar8 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02bfd8(*(le<int>* )(unsigned)(ar6 + 4),((void *)0x8c02bfd8),uVar9,uVar10));
          uVar9 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),pcVar11,uVar9,uVar10));
          uVar10 = 0;
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0620bc(uVar3,(int)(short)uVar8,uVar9,0));
          ar4[0x10] = (undefined *)(unsigned)0x0;
          ar4[1] = (undefined *)(unsigned)0x0;
          ar4[2] = (undefined *)(unsigned)0x5;
          ar4[3] = (undefined *)(unsigned)0x0;
          ar4[0x10] = (undefined *)(unsigned)0x0;
          *(undefined1 *)(unsigned)(ar4 + 0x26) = 4;
          ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02cb74(*(le<int>* )(unsigned)(ar6 + 4) + 0xa8,1,uVar9,uVar10));
        }
      }
      break;
    case 0x9:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),0x35,pcVar11,ar7));
      if (iVar1 == 1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 4;
        puVar6 = (undefined *)(unsigned)0x1;
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02cb74(*(le<int>* )(unsigned)(ar6 + 4) + 0xa8,1,pcVar11,ar7));
        (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)ar6 + 8) + 0xc0))))(*(le<int>* )(unsigned)ar6,puVar6,pcVar11,ar7));
      }
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_140_025f70(*(le<int>* )(unsigned)(ar6 + 4),puVar6,pcVar11,ar7));
      if (iVar1 == 0) {
        ar7 = ((undefined1 *)(unsigned)0x8c136c54);
        pcVar11 = (code *)0x0;
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0306d4(ar4 + 0x27,9,0,((undefined1 *)(unsigned)0x8c136c54)));
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 4;
      }
      uVar3 = 1;
      iVar1 = *(le<int>* )(unsigned)(ar6 + 4) + 0xa8;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c06209c(iVar1,1,pcVar11,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0c4e2c(iVar1,uVar3,pcVar11,ar7));
      break;
    case 0xb:
      if (ar4[0xe1] == (undefined *)(unsigned)0xffffffff) {
        ppuVar4 = (le<undefined*>* )(unsigned)0xffffffff;
      }
      else {
        ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c030870(ar4 + 0x27,2,ar4[0xe1],ar7));
      }
      break;
    case 0xf:
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02f414(ar4,0x35,pcVar11,ar7));
      if (iVar1 == 1) {
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_6c_02f46c(ar4[0x1b],puVar6,pcVar11,ar7));
        uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05feec(ar4[0x1b],uVar3,pcVar11,ar7));
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05fec4(*(le<int>* )(unsigned)(ar6 + 4),uVar3,pcVar11,ar7));
        (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4[0x1b] + 8) + 0x78))))(ar4[0x1b],uVar3,pcVar11,ar7));
        pcVar11 = (code *)0x0;
        ar4[0x1b] = (undefined *)(unsigned)0x0;
      }
      for (pcVar12 = (code *)0x0; iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,5,pcVar11,ar7)),
          (int)pcVar12 < iVar1; pcVar12 = pcVar12 + 1) {
        uVar3 = 5;
        iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,5,pcVar12,ar7));
        pcVar11 = ((code *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 8));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((pcVar11 + 0x114))))(iVar1,uVar3,pcVar11,ar7));
        if (iVar1 == 6) {
          uVar3 = 5;
          pcVar11 = pcVar12;
          iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,5,pcVar12,ar7));
          iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0xb4))))(iVar1,uVar3,pcVar11,ar7));
          if (iVar1 == 1) {
            uVar3 = 5;
            pcVar11 = pcVar12;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x100))))(ar5,5,pcVar12,ar7));
            iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar1 + 8) + 0xb8))))(iVar1,uVar3,pcVar11,ar7));
            if (iVar1 == 0) {
              iVar13 = iVar13 + 1;
            }
          }
        }
      }
      if (iVar13 == 2) {
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 272)); FUN_8c061180(*(le<int>* )(unsigned)(ar6 + 0xc),3,pcVar11,ar7); });
      }
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05febc(*(le<int>* )(unsigned)(ar6 + 0xc),0,pcVar11,ar7));
      break;
    case 0x13:
      *(undefined1 *)(unsigned)(ar4 + 0x26) = 7;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), get_field_13c_028d9c(*(le<int>* )(unsigned)(ar6 + 4),0x35,pcVar11,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0b9ed4(*(le<int>* )(unsigned)(ar6 + 0x18),0x22,uVar3,ar7));
      break;
    case 0x14:
      ppuVar4 = (le<undefined*>* )(unsigned)
                (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0306d4(ar4 + 0x27,0x1f,ar4[0x41],((undefined1 *)(unsigned)0x8c136c3d)));
      break;
    case 0x17:
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02ce10(*(le<int>* )(unsigned)(ar6 + 4) + 0x90,1,pcVar11,ar7));
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c02cbbc(*(le<int>* )(unsigned)(ar6 + 4) + 0x90,1,pcVar11,ar7));
      ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x10c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 272)); FUN_8c02c330(*(le<int>* )(unsigned)(ar6 + 4) + 0x60,0,pcVar11,ar7); });
      if (ar4[0x21f] == (undefined *)(unsigned)0x1) {
        *(undefined1 *)(unsigned)(ar4 + 0x26) = 9;
      }
      if (((ar4[0xe1] == (undefined *)(unsigned)0xffffffff) && (ar4[0x21f] != (undefined *)(unsigned)0x1)) &&
         (*(char *)(unsigned)((int)ar4 + 0x879) == '\x02')) {
        (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c030870(ar4 + 0x27,0,pcVar11,ar7));
        pcVar7 = ((undefined1 *)(unsigned)0x8c136c95);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c136a1c)); *(le<unsigned>* )((((unsigned long)(fr0_ - 272)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 272)) - 8); FUN_8c0303b8(ar4 + 0x27,0x2a,0,((undefined1 *)(unsigned)0x8c136c95)); });
        ar4[0x3f] = (undefined *)(unsigned)0x0;
        puVar6 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0f8320(0x8c35468c,ar4[0xe2],ar4 + 0x27,pcVar7));
        ar4[0xe1] = puVar6;
        ar4[0x53] = (undefined *)(unsigned)0x1;
      }
      if ((*(char *)(unsigned)((int)ar4 + 0x879) == '\x02') && (ar4[0xe1] != (undefined *)(unsigned)0xffffffff)) {
        ar4[1] = (undefined *)(unsigned)0xd;
        ar4[2] = (undefined *)(unsigned)0x5f;
        ar4[3] = (undefined *)(unsigned)0x0;
        ar4[0x210] = (undefined *)(unsigned)0x30;
        (*(undefined1 *)(unsigned)0x8c136908) = 0x30;
        ar4[0x211] = (undefined *)(unsigned)0x36;
        (*(undefined1 *)(unsigned)0x8c13690c) = 0x36;
        ar4[0x212] = (undefined *)(unsigned)0x36;
        (*(undefined1 *)(unsigned)0x8c136910) = 0x36;
        pcVar12 = ((void *)0x8c022c88);
        (vsp = ((unsigned long)(fr0_ - 272)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),*(le<int>* )(unsigned)(ar6 + 0x14) + 0x10,*(le<int>* )(unsigned)(ar6 + 0x14),((void *)0x8c022c88)));
        pcVar11 = ((void *)0x8c05f640);
        (vsp = ((unsigned long)(fr0_ - 272)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x28)),((void *)0x8c05f640),pcVar12));
        (vsp = ((unsigned long)(fr0_ - 272)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,pcVar11,pcVar12));
        ppuVar4 = ar4 + 0x1e;
        if (cVar14 == '\0') {
          *ppuVar4 = (undefined *)(unsigned)0x44af0000;
        }
        else {
          ppuVar4[0] = (undefined *)(unsigned)0x44af0000;
          ppuVar4[1] = (undefined *)(unsigned)0x80;
        }
        *(undefined1 *)(unsigned)(ar4 + 0x20) = 0;
      }
      *(undefined1 *)(unsigned)(ar4 + 0x26) = 8;
      ppuVar4 = (le<undefined*>* )(unsigned)0x98;
      break;
    case 0x18:
      *(undefined1 *)(unsigned)(ar4 + 0x26) = 2;
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c0c4e2c(iVar1,0x35,pcVar11,ar7));
      break;
    case 0x1b:
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05f498(*(le<int>* )(unsigned)(ar6 + 0xc),3,*(le<int>* )(unsigned)(ar6 + 0xc),ar7));
      break;
    case 0x1c:
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05f498(*(le<int>* )(unsigned)(ar6 + 0xc),8,pcVar11,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 272)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 272)) - 8); FUN_8c030568(ar4 + 0x27,0x1f,0,((undefined1 *)(unsigned)0x8c136c6d)); });
      break;
    case 0x1d:
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05f498(*(le<int>* )(unsigned)(ar6 + 0xc),5,pcVar11,ar7));
      break;
    case 0x21:
    case 0x25:
      ar4[0x216] = (undefined *)(unsigned)0x0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x35,pcVar11,ar7));
      uVar9 = 0;
      uVar8 = 0;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,0,0,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,uVar8,uVar9,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062054(uVar3,0,0,ar7));
      break;
    case 0x22:
    case 0x26:
      ar4[0x216] = (undefined *)(unsigned)0x0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x35,pcVar11,ar7));
      uVar9 = 0;
      uVar8 = 1;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,1,0,uVar3));
      uVar8 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,uVar8,uVar9,uVar3));
      uVar9 = 0;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062054(uVar8,1,0,uVar3));
      ppuVar4 = (le<undefined*>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062048(*(le<int>* )(unsigned)(ar6 + 0xc),4,uVar9,uVar3));
      break;
    case 0x23:
    case 0x27:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x35,pcVar11,ar7));
      pcVar11 = ((void *)0x8c062084);
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,0,1,((void *)0x8c062084)));
      iVar1 = *ar5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar1 + 0x148))))(ar5,((code *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar1 + 0x148)),iVar1,pcVar11));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c06206c(uVar3,1,iVar1,pcVar11));
      if (iVar1 == 1) {
        ppuVar4 = (le<undefined*>* )(unsigned)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        ppuVar4 = (le<undefined*>* )(unsigned)0x858;
        if (0x708 < (int)ar4[0x216]) {
          ar4[0x216] = (undefined *)(unsigned)0x0;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x858,ar4,0x858));
          uVar8 = 0;
          pcVar11 = ((void *)0x8c062084);
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,0,0,((void *)0x8c062084)));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,uVar8,((code *)(unsigned long)*(le<unsigned>* )(unsigned)(*ar5 + 0x148)),pcVar11));
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062054(uVar3,0,0,pcVar11));
          ar4[0x10] = (undefined *)(unsigned)0x0;
          ar4[1] = (undefined *)(unsigned)0x0;
          ar4[2] = (undefined *)(unsigned)0x5;
          ar4[3] = (undefined *)(unsigned)0x0;
          ar4[0x10] = (undefined *)(unsigned)0x0;
          ppuVar4 = (le<undefined*>* )(unsigned)0x40;
        }
      }
      break;
    case 0x24:
    case 0x28:
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x35,pcVar11,ar7));
      uVar8 = 1;
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,1,1,ar7));
      uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,*ar5,uVar8,ar7));
      iVar1 = (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c06206c(uVar3,0,uVar8,ar7));
      if (iVar1 == 1) {
        ppuVar4 = (le<undefined*>* )(unsigned)0x1;
      }
      else {
        ar4[3] = ar4[3] + -1;
        ar4[0x216] = ar4[0x216] + 1;
        ppuVar4 = (le<undefined*>* )(unsigned)0x858;
        if (0x708 < (int)ar4[0x216]) {
          ar4[0x216] = (undefined *)(unsigned)0x0;
          uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,0x708,uVar8,ar7));
          uVar9 = 0;
          uVar8 = 1;
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062084(uVar3,1,0,ar7));
          uVar3 = (vsp = ((unsigned long)(fr0_ - 272)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x148))))(ar5,uVar8,uVar9,ar7));
          (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c062054(uVar3,1,0,ar7));
          ar4[0x10] = (undefined *)(unsigned)0x0;
          ar4[1] = (undefined *)(unsigned)0x0;
          ar4[2] = (undefined *)(unsigned)0x5;
          ar4[3] = (undefined *)(unsigned)0x0;
          ar4[0x10] = (undefined *)(unsigned)0x0;
          ppuVar4 = (le<undefined*>* )(unsigned)0x40;
        }
      }
      break;
    case 0x29:
      ppuVar4 = (le<undefined*>* )(unsigned)
                (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c101148(*(le<undefined4>* )(unsigned)(*(le<int>* )(unsigned)(ar6 + 0x18) + 0x7cc),1,pcVar11,ar7));
      break;
    case 0x30:
      ppuVar4 = (le<undefined*>* )(unsigned)ar4[3];
      ar4[3] = (undefined *)(unsigned)((int)ppuVar4 + -1);
      break;
    case 0x31:
      (vsp = ((unsigned long)(fr0_ - 272)), FUN_8c05f498(*(le<int>* )(unsigned)(ar6 + 0xc),8,pcVar11,ar7));
      ppuVar4 = (le<undefined*>* )(unsigned)
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 272)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 272)) - 8); FUN_8c030568(ar4 + 0x27,0x1f,0,((undefined1 *)(unsigned)0x8c136c7d)); });
    }
  }
  return ppuVar4;
}

__asm__(".globl s_GRATIFIC_EAT_0611d6\n.set s_GRATIFIC_EAT_0611d6, s_GRATIFIC_EAT_0611d6_def\n");

}
