//@unit 8c060044
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
undefined4 FUN_8c060044_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c060044");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  
  if ((*(le<int>* )(unsigned)(ar4 + 0x38) == 2) && (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0)) {
    iVar2 = *(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8);
    (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((iVar2 + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),ar5,ar6,iVar2));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  uVar1 = 0x10;
  if ((iVar2 < 0x11) && (uVar1 = 1, 0 < iVar2)) {
                    
                    
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((le<code*>* )&(*(undefined1 *)(unsigned)0x8c0600fc))[iVar2 + -1])))(vr4,vr5,vr6,vr7));
    return uVar1;
  }
  return uVar1;
}

__asm__(".globl FUN_8c060044\n.set FUN_8c060044, FUN_8c060044_def\n");

}
//@unit 8c06115c
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
undefined4 FUN_8c06115c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06115c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x51) = (undefined1)ar7;
  return 0x51;
}

__asm__(".globl FUN_8c06115c\n.set FUN_8c06115c, FUN_8c06115c_def\n");

}
//@unit 8c061174
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
undefined4 get_field_c8_061174_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c8_061174");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc8 + ar4);
}

__asm__(".globl get_field_c8_061174\n.set get_field_c8_061174, get_field_c8_061174_def\n");

}
//@unit 8c061180
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
undefined4 FUN_8c061180_def(undefined1 *ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c061180");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *ar4 = (undefined1)ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c061180\n.set FUN_8c061180, FUN_8c061180_def\n");

}
//@unit 8c061188
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
int FUN_8c061188_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c061188");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x38);
}

__asm__(".globl FUN_8c061188\n.set FUN_8c061188, FUN_8c061188_def\n");

}
//@unit 8c061190
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
undefined4 ret_const_0_061190_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_061190");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_061190\n.set ret_const_0_061190, ret_const_0_061190_def\n");

}
//@unit 8c061198
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
undefined4 get_field_2c_061198_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_2c_061198");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x2c);
}

__asm__(".globl get_field_2c_061198\n.set get_field_2c_061198, get_field_2c_061198_def\n");

}
//@unit 8c0611a0
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
undefined4 get_field_34_0611a0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_34_0611a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0x34);
}

__asm__(".globl get_field_34_0611a0\n.set get_field_34_0611a0, get_field_34_0611a0_def\n");

}
//@unit 8c0611a8
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
undefined4 FUN_8c0611a8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0611a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(ar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c0293f8(ar4 + 0xf8,0x5f,ar6,ar7); });
  return uVar1;
}

__asm__(".globl FUN_8c0611a8\n.set FUN_8c0611a8, FUN_8c0611a8_def\n");

}
//@unit 8c0611cc
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
//@unit 8c062048
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
int FUN_8c062048_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c062048");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xac;
  *(le<undefined4>* )(unsigned)(0xac + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c062048\n.set FUN_8c062048, FUN_8c062048_def\n");

}
//@unit 8c062054
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
int FUN_8c062054_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c062054");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xa4;
  *(le<undefined4>* )(unsigned)(0xa4 + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c062054\n.set FUN_8c062054, FUN_8c062054_def\n");

}
//@unit 8c06206c
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
undefined4 FUN_8c06206c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06206c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x9c + ar4 + ar5 * 4);
}

__asm__(".globl FUN_8c06206c\n.set FUN_8c06206c, FUN_8c06206c_def\n");

}
//@unit 8c062084
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
int FUN_8c062084_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c062084");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x9c;
  *(le<undefined4>* )(unsigned)(0x9c + ar4 + ar5 * 4) = ar6;
  return iVar1;
}

__asm__(".globl FUN_8c062084\n.set FUN_8c062084, FUN_8c062084_def\n");

}
//@unit 8c06209c
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
undefined4 FUN_8c06209c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06209c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 4) = (char)ar5;
  return ar5;
}

__asm__(".globl FUN_8c06209c\n.set FUN_8c06209c, FUN_8c06209c_def\n");

}
//@unit 8c0620a4
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
int FUN_8c0620a4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0620a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75);
}

__asm__(".globl FUN_8c0620a4\n.set FUN_8c0620a4, FUN_8c0620a4_def\n");

}
//@unit 8c0620bc
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
undefined4 FUN_8c0620bc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0620bc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + (short)ar5 * 2 + (int)(short)ar6 + 0x75) = (undefined1)ar7;
  return 0x75;
}

__asm__(".globl FUN_8c0620bc\n.set FUN_8c0620bc, FUN_8c0620bc_def\n");

}
//@unit 8c0620d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0620d4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0620d4");
  return (unsigned)sh4_interp(0x8c0620d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0620d4\n.set FUN_8c0620d4, FUN_8c0620d4_def\n");
}
//@unit 8c062878
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
undefined4 get_field_4_062878_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_4_062878");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_062878\n.set get_field_4_062878, get_field_4_062878_def\n");

}
//@unit 8c062880
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
undefined4 get_field_ac_062880_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_ac_062880");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xac + ar4);
}

__asm__(".globl get_field_ac_062880\n.set get_field_ac_062880, get_field_ac_062880_def\n");

}
//@unit 8c06288c
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
undefined4 FUN_8c06288c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06288c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xa4 + ar4 + ar5 * 4);
}

__asm__(".globl FUN_8c06288c\n.set FUN_8c06288c, FUN_8c06288c_def\n");

}
//@unit 8c0628a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_TEMP_LACK_0628aa_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_TEMP_LACK_0628aa");
  return (unsigned)sh4_interp(0x8c0628a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_TEMP_LACK_0628aa\n.set s_REACTION_TEMP_LACK_0628aa, s_REACTION_TEMP_LACK_0628aa_def\n");
}
//@unit 8c062b04
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
undefined4 ret_const_0_062b04_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_062b04");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_062b04\n.set ret_const_0_062b04, ret_const_0_062b04_def\n");

}
//@unit 8c062b0c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_WAKED_TAP_062b14_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_WAKED_TAP_062b14");
  return (unsigned)sh4_interp(0x8c062b0c, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_WAKED_TAP_062b14\n.set s_REACTION_WAKED_TAP_062b14, s_REACTION_WAKED_TAP_062b14_def\n");
}
//@unit 8c0637c0
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
undefined4 FUN_8c0637c0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0637c0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x44) = (undefined1)ar5;
  return 0x44;
}

__asm__(".globl FUN_8c0637c0\n.set FUN_8c0637c0, FUN_8c0637c0_def\n");

}
//@unit 8c0637c8
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
int FUN_8c0637c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0637c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x44);
}

__asm__(".globl FUN_8c0637c8\n.set FUN_8c0637c8, FUN_8c0637c8_def\n");

}
//@unit 8c0637d0
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
undefined4 FUN_8c0637d0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0637d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0637f8(ar4 + 0xd8,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c0637d0\n.set FUN_8c0637d0, FUN_8c0637d0_def\n");

}
//@unit 8c0637f8
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
undefined4 get_field_4_0637f8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_4_0637f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 4);
}

__asm__(".globl get_field_4_0637f8\n.set get_field_4_0637f8, get_field_4_0637f8_def\n");

}
//@unit 8c063800
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
undefined4 FUN_8c063800_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c063800");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 4) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c063800\n.set FUN_8c063800, FUN_8c063800_def\n");

}
//@unit 8c063808
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
undefined4 ret_const_0_063808_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_063808");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_063808\n.set ret_const_0_063808, ret_const_0_063808_def\n");

}
//@unit 8c063810
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
undefined4 FUN_8c063810_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c063810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c063810\n.set FUN_8c063810, FUN_8c063810_def\n");

}
//@unit 8c063818
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
undefined4 Vec3_assign_wrap_063818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Vec3_assign_wrap_063818");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), Vec3_assign(ar4 + 0x28,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl Vec3_assign_wrap_063818\n.set Vec3_assign_wrap_063818, Vec3_assign_wrap_063818_def\n");

}
//@unit 8c063838
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REQUEST_ATTENTION_063846_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REQUEST_ATTENTION_063846");
  return (unsigned)sh4_interp(0x8c063838, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REQUEST_ATTENTION_063846\n.set s_REQUEST_ATTENTION_063846, s_REQUEST_ATTENTION_063846_def\n");
}
//@unit 8c064b7c
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
undefined4 ret_const_0_064b7c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_064b7c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_064b7c\n.set ret_const_0_064b7c, ret_const_0_064b7c_def\n");

}
//@unit 8c064b84
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
undefined4 FUN_8c064b84_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c064b84");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(char *)(unsigned)(ar4 + 0x3b) = *(char *)(unsigned)(ar4 + 0x3b) + '\x01';
  return 0x3b;
}

__asm__(".globl FUN_8c064b84\n.set FUN_8c064b84, FUN_8c064b84_def\n");

}
//@unit 8c064b9c
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
undefined4 noop_064b9c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_064b9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_064b9c\n.set noop_064b9c, noop_064b9c_def\n");

}
//@unit 8c064ba0
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
int FUN_8c064ba0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c064ba0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xa1;
  *(undefined1 *)(unsigned)(0xa1 + ar4) = (undefined1)ar5;
  return iVar1;
}

__asm__(".globl FUN_8c064ba0\n.set FUN_8c064ba0, FUN_8c064ba0_def\n");

}
//@unit 8c064bac
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
int FUN_8c064bac_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c064bac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return (int)*(char *)(unsigned)(ar4 + 0x3b);
}

__asm__(".globl FUN_8c064bac\n.set FUN_8c064bac, FUN_8c064bac_def\n");

}
//@unit 8c064bb4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_REACTION_TITILLATE_064bb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_REACTION_TITILLATE_064bb8");
  return (unsigned)sh4_interp(0x8c064bb4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_REACTION_TITILLATE_064bb8\n.set s_REACTION_TITILLATE_064bb8, s_REACTION_TITILLATE_064bb8_def\n");
}
//@unit 8c065228
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
int s_GRATIFIC_RID_HOT_06522a_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRATIFIC_RID_HOT_06522a");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02bebc(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 != -1) {
    if (iVar1 == 0) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x37); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,7,0,(&(*(undefined1 *)(unsigned)0x8c136988)) + 0x3ea); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 1) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x37); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,8,0,(&(*(undefined1 *)(unsigned)0x8c136988)) + 0x3fb); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
    else if (iVar1 == 3) {
      ({ unsigned long t0_ = (unsigned long)(
                 (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x37); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                (ar4 + 0x9c,0x1c,0,(&(*(undefined1 *)(unsigned)0x8c136988)) + 0x40d); });
      iVar1 = 0x118;
      *(le<undefined4>* )(unsigned)(0x118 + ar4) = 7;
    }
  }
  return iVar1;
}

__asm__(".globl s_GRATIFIC_RID_HOT_06522a\n.set s_GRATIFIC_RID_HOT_06522a, s_GRATIFIC_RID_HOT_06522a_def\n");

}
//@unit 8c0652f4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0652f4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0652f4");
  return (unsigned)sh4_interp(0x8c0652f4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0652f4\n.set FUN_8c0652f4, FUN_8c0652f4_def\n");
}
//@unit 8c0656d4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_EVENT_ENDING_0656da_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_EVENT_ENDING_0656da");
  return (unsigned)sh4_interp(0x8c0656d4, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_EVENT_ENDING_0656da\n.set s_EVENT_ENDING_0656da, s_EVENT_ENDING_0656da_def\n");
}
//@unit 8c065c80
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
int FUN_8c065c80_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c065c80");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xb0;
  *(le<undefined4>* )(unsigned)(0xb0 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c065c80\n.set FUN_8c065c80, FUN_8c065c80_def\n");

}
//@unit 8c065c8c
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
undefined4 get_field_b0_065c8c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_b0_065c8c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xb0 + ar4);
}

__asm__(".globl get_field_b0_065c8c\n.set get_field_b0_065c8c, get_field_b0_065c8c_def\n");

}
//@unit 8c065c98
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
undefined4 noop_065c98_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_065c98");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_065c98\n.set noop_065c98, noop_065c98_def\n");

}
//@unit 8c065c9c
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
undefined4 FUN_8c065c9c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c065c9c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *(undefined1 *)(unsigned)(ar4 + 0x3d) = (undefined1)ar5;
  return 0x3d;
}

__asm__(".globl FUN_8c065c9c\n.set FUN_8c065c9c, FUN_8c065c9c_def\n");

}
//@unit 8c065ca4
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
int FUN_8c065ca4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c065ca4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xc8;
  *(le<undefined4>* )(unsigned)(0xc8 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c065ca4\n.set FUN_8c065ca4, FUN_8c065ca4_def\n");

}
//@unit 8c065cb0
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
int FUN_8c065cb0_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c065cb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = *(le<undefined4>* )(unsigned)(ar4 + 0x154);
  if (*(le<int>* )(unsigned)(ar4 + 900) != -1) goto LAB_8c065e2a;
  *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0;
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x104);
  if ((iVar3 < 5) && (-1 < iVar3)) {
                    
    switch(iVar3) {
    case 0:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      break;
    case 1:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x2d;
      break;
    case 4:
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
    }
  }
  iVar3 = ar6;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c025f68(*(le<int>* )(unsigned)(ar6 + 4) + 0x78,ar5,ar6,ar7));
  if ((char)uVar1 == '\x01') {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar2 < 0xf) {
    if (0xd < iVar2) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0xf;
      goto LAB_8c065e2a;
    }
    if (5 < iVar2) {
      if (iVar2 == 9) {
        iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_140_025f70(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
        if (iVar3 == 0) {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x19;
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x1e;
        }
      }
      goto LAB_8c065e2a;
    }
    if (iVar2 < 0) goto LAB_8c065e2a;
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x37;
      }
      else if (iVar2 == 5) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
  }
  else {
    if (0x13 < iVar2) {
      if (iVar2 == 0x2f) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
      }
      goto LAB_8c065e2a;
    }
    if (0x12 < iVar2) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x23;
      goto LAB_8c065e2a;
    }
    if (iVar2 != 0x10) goto LAB_8c065e2a;
  }
  iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02c518(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,iVar3,ar7));
  if (iVar3 == 0) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 3) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
  else if (iVar3 == 4) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x14;
  }
LAB_8c065e2a:
  iVar3 = *(le<int>* )(unsigned)(ar4 + 0x88);
  if (iVar3 == 1) {
    *(le<undefined4>* )(unsigned)(ar4 + 0x94) = 0x47;
    iVar3 = 0x88;
    *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
  }
  return iVar3;
}

__asm__(".globl FUN_8c065cb0\n.set FUN_8c065cb0, FUN_8c065cb0_def\n");

}
//@unit 8c065e6c
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
undefined * s_IDLEACTION_SNEEZE_065e70_def(int ar4,undefined4 ar5,int ar6,char *ar7)

{
  TRACE_ENTER("s_IDLEACTION_SNEEZE_065e70");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = ar6;
  if ((((*(le<int>* )(unsigned)(ar4 + 900) == -1) &&
       (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), get_field_40_03598c(*(le<undefined4>* )(unsigned)(ar6 + 0xc),ar5,ar6,ar7)), iVar1 == 0)) &&
      (*(le<int>* )(unsigned)(ar4 + 0x40) == 0x10)) &&
     (iVar1 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)),ar5,iVar3,ar7)),
     iVar1 == 5)) {
    ar7 = ((undefined1 *)(unsigned)0x8c136dab);
    iVar3 = 0;
    ar5 = 0x19;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dab)));
  }
  puVar2 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 900));
  if (((puVar2 == (undefined *)(unsigned)0xffffffff) &&
      (puVar2 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), get_field_40_03598c(*(le<undefined4>* )(unsigned)(ar6 + 0xc),ar5,iVar3,ar7)),
      puVar2 == (undefined *)(unsigned)0x0)) &&
     (puVar2 = ((undefined *)(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 4)), puVar2 == (undefined *)(unsigned)0x0)) {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 4)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)) + 0x30))))(((le<int>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar6 + 8)),ar5,iVar3,ar7));
    puVar2 = (undefined *)(unsigned)0xe;
    if ((iVar3 < 0xf) && (puVar2 = (undefined *)(unsigned)0x2, 1 < iVar3)) {
      puVar2 = (&(*(undefined1 *)(unsigned)0x8c065f28))[iVar3 + -2];
                    
      switch(iVar3) {
      case 2:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136b23)); });
        break;
      case 3:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dbd)); });
        break;
      case 4:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dd1)); });
        break;
      case 5:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136dab)); });
        break;
      case 6:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136de1)); });
        break;
      case 9:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136df8)); });
        break;
      case 0xb:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e1d)); });
        break;
      case 0xd:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e0d)); });
        break;
      case 0xe:
        puVar2 = (undefined *)(unsigned)
                 ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 4)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 4)) - 8); FUN_8c030568(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e2c)); });
      }
    }
  }
  return puVar2;
}

__asm__(".globl s_IDLEACTION_SNEEZE_065e70\n.set s_IDLEACTION_SNEEZE_065e70, s_IDLEACTION_SNEEZE_065e70_def\n");

}
//@unit 8c0660d4
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
int s_STATUS_SUCKED_0660da_def(int ar4,le<int>* ar5,le<int>* ar6,char *ar7)

{
  TRACE_ENTER("s_STATUS_SUCKED_0660da");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  le<int>* a5;
  le<int>* a6;
  char *ar7_00;
  
  a5 = ar5;
  a6 = ar6;
  if (((*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) && (*(le<int>* )(unsigned)(ar4 + 0x40) == 0)) && (*(le<int>* )(unsigned)(ar4 + 0x874) == 7))
  {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c066834(ar4,ar5,ar6,ar7));
    *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = uVar1;
    if ((*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) || (*(le<int>* )(unsigned)(ar4 + 4) != 0)) {
      *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
    }
    else {
      (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x74))))(*(le<int>* )(unsigned)(ar4 + 0x6c),a5,a6,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 6;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      a5 = (le<int>* )(unsigned)0x2bb;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02f298(ar4,699,a6,ar7));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*ar6 + 8) + 0xb8))))(*ar6,a5,a6,ar7));
  if ((iVar2 == 1) && (*(le<int>* )(unsigned)(ar4 + 4) != 1)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_6c_02f46c(*ar6,a5,a6,ar7));
    if (iVar2 == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_70_05f490(*ar6,a5,a6,ar7));
      if (iVar2 != 0) goto LAB_8c0661e8;
      a6 = (le<int>* )(unsigned)0x1b;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0b9ed4(ar6[6],0x1b,0x1b,ar7));
      *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 1;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 99;
      a5 = (le<int>* )(unsigned)0xc7;
      (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02f298(ar4,199,a6,ar7));
    }
    else {
LAB_8c0661e8:
      if (*(le<int>* )(unsigned)(ar4 + 4) != 0xb) {
        *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 0xb;
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 99;
        *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0xe;
        a5 = (le<int>* )(unsigned)0x4af;
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02f298(ar4,0x4af,a6,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_c8_061174(ar6[3],a5,a6,ar7));
        if ((iVar2 == 0) || (*(le<int>* )(unsigned)(ar4 + 900) != -1)) {
          ar7 = ((undefined1 *)(unsigned)0x8c136e43);
          a6 = (le<int>* )(unsigned)0x0;
          a5 = (le<int>* )(unsigned)0x19;
          (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0306d4(ar4 + 0x9c,0x19,0,((undefined1 *)(unsigned)0x8c136e43)));
        }
        if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
          (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))(*(le<int>* )(unsigned)(ar4 + 0x6c),a5,a6,ar7));
          *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
        }
      }
    }
    if ((*(char *)(unsigned)(ar4 + 0x878) == '\x01') && (*(le<int>* )(unsigned)(ar4 + 4) == 0)) {
      *(undefined1 *)(unsigned)(ar4 + 0x878) = 0;
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar6[1],a5,a6,ar7));
  if ((short)uVar1 != 1) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02bef8(ar6[1],a5,a6,ar7));
    (*(le<undefined4>* )(fr0_ - 0x44)) = CONCAT22((short)uVar1,(short)(*(le<undefined4>* )(fr0_ - 0x44)));
    if ((short)uVar1 != 2) goto LAB_8c0662e6;
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_c_06645c(ar6[3],a5,a6,ar7));
  if (((iVar2 == 1) && (*(char *)(unsigned)(ar4 + 0x878) != '\x01')) && (*(le<int>* )(unsigned)(ar4 + 4) != 0xd)) {
    *(undefined1 *)(unsigned)(ar4 + 0x878) = 1;
    (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02f298(ar4,0x2b9,a6,ar7));
    a5 = (le<int>* )(unsigned)0x0;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x44))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 68)); FUN_8c066454(ar6[3],0,a6,ar7); });
    *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x5f;
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
    *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
  }
LAB_8c0662e6:
  if (*(le<int>* )(unsigned)(ar4 + 0x6c) == 0) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_13c_028d9c(ar6[1],a5,a6,ar7));
    if ((iVar2 == 6) && (*(le<int>* )(unsigned)(ar4 + 0x40) == 0)) {
      a5 = (le<int>* )(unsigned)0xf;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,0xf,a6,ar7));
      if ((0 < iVar2) && ((*(le<int>* )(unsigned)(ar4 + 4) != 0xd && (*(le<int>* )(unsigned)(ar4 + 4) != 6)))) {
        a5 = (le<int>* )(unsigned)0x2b9;
        (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c02f298(ar4,0x2b9,a6,ar7));
        *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x5f;
        *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
        *(le<undefined4>* )(unsigned)(ar4 + 4) = 6;
        *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
      }
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_c4_066448(ar6[3],a5,a6,ar7));
  if (((iVar2 == 0) && (iVar2 = *(le<int>* )(unsigned)(ar4 + 0x40), iVar2 == 0)) &&
     (iVar2 = *(le<int>* )(unsigned)(ar4 + 900), iVar2 == -1)) {
    iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), get_field_13c_028d9c(ar6[1],a5,a6,ar7));
    if (iVar2 == 7) {
      uVar1 = 10;
      iVar3 = (vsp = ((unsigned long)(fr0_ - 68)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x11c))))(ar5,10,a6,ar7));
      iVar2 = 1;
      if (0 < iVar3) {
        uVar1 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c03584c(ar6[3],uVar1,a6,ar7));
        iVar2 = (int)(char)uVar1;
        if (iVar2 == 2) {
          ar7_00 = ((undefined1 *)(unsigned)0x8c136e51);
          uVar1 = 0;
          (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136e51)));
          iVar2 = (vsp = ((unsigned long)(fr0_ - 68)), FUN_8c06643c(ar6[3],1,uVar1,ar7_00));
        }
      }
    }
  }
  return iVar2;
}

__asm__(".globl s_STATUS_SUCKED_0660da\n.set s_STATUS_SUCKED_0660da, s_STATUS_SUCKED_0660da_def\n");

}
//@unit 8c06643c
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
int FUN_8c06643c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06643c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0xc4;
  *(le<undefined4>* )(unsigned)(0xc4 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c06643c\n.set FUN_8c06643c, FUN_8c06643c_def\n");

}
//@unit 8c066448
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
undefined4 get_field_c4_066448_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c4_066448");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0xc4 + ar4);
}

__asm__(".globl get_field_c4_066448\n.set get_field_c4_066448, get_field_c4_066448_def\n");

}
//@unit 8c066454
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
undefined4 FUN_8c066454_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c066454");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0xc) = ar5;
  return in_r0 = 0;
}

__asm__(".globl FUN_8c066454\n.set FUN_8c066454, FUN_8c066454_def\n");

}
//@unit 8c06645c
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
undefined4 get_field_c_06645c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_c_06645c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 0xc);
}

__asm__(".globl get_field_c_06645c\n.set get_field_c_06645c, get_field_c_06645c_def\n");

}
//@unit 8c066464
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
int s_STATUS_LASTONE_066468_def(int ar4,le<int>* ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_STATUS_LASTONE_066468");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  int iVar3;
  int ar5_00;
  undefined4 ar5_01;
  
  iVar3 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_13c_028d9c(*(le<undefined4>* )(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if (iVar1 == 7) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0x11c + *ar5))))(ar5,5,iVar3,ar7));
    if (iVar1 == 1) {
      ar5_00 = ar6;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02fcc4(ar4,ar6,iVar3,ar7));
      if (iVar1 == 1) {
        iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c03598c))))
                          (*(le<undefined4>* )(unsigned)(ar6 + 0xc),ar5_00,iVar3,ar7));
        if (iVar1 == 0) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0637d0))))
                            (*(le<undefined4>* )(unsigned)(0x7cc + *(le<int>* )(unsigned)(ar6 + 0x18)),ar5_00,iVar3,ar7));
          if (((iVar1 == 0) && (iVar1 = *(le<int>* )(unsigned)(0x384 + ar4), iVar1 == -1)) &&
             (iVar1 = 3, *(char *)(unsigned)(0x98 + ar4) < '\x04')) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(le<undefined4>* )(unsigned)(ar6 + 0x18),ar5_00,iVar3,ar7));
            ar5_01 = 0x43;
            iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                              (uVar2 & 0xffff,0x43,iVar3,ar7));
            if (iVar1 == 2) {
              uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(*(le<undefined4>* )(unsigned)(ar6 + 0x18),ar5_01,iVar3,ar7));
              iVar3 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0101e4))))
                                (uVar2 & 0xffff,0x3c,iVar3,ar7));
              iVar1 = 2;
              if ((2 < iVar3) && (iVar1 = *(le<int>* )(unsigned)(0x868 + ar4), iVar1 == 0)) {
                *(le<undefined4>* )(unsigned)(0x868 + ar4) = 1;
                iVar1 = ({ unsigned long t0_ = (unsigned long)(
                                   (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x37); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c0303b8))))
                                  (ar4 + 0x9c,0x16,0,
                                   (&(*(undefined1 *)(unsigned)0x8c136988)) + 0x4dc); });
              }
            }
          }
        }
      }
    }
  }
  return iVar1;
}

__asm__(".globl s_STATUS_LASTONE_066468\n.set s_STATUS_LASTONE_066468, s_STATUS_LASTONE_066468_def\n");

}
//@unit 8c0665a0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0665a0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0665a0");
  return (unsigned)sh4_interp(0x8c0665a0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0665a0\n.set FUN_8c0665a0, FUN_8c0665a0_def\n");
}
//@unit 8c066620
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
undefined4 get_field_8_066620_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_8_066620");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(ar4 + 8);
}

__asm__(".globl get_field_8_066620\n.set get_field_8_066620, get_field_8_066620_def\n");

}
//@unit 8c066628
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
undefined4 FUN_8c066628_def(int ar4,le<int>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c066628");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 72; for (int i_ = 0; i_ < 72; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined1 *a5;
  undefined1 *a6;
  undefined1 *a7;
  char cVar2;
  
  cVar2 = '\0';
  (vsp = ((unsigned long)(fr0_ - 72)), Vec3_ctor_zero(&(*(le<undefined4>* )(fr0_ - 0x18)),ar5,ar6,ar7));
  a7 = ((undefined1 *)(fr0_ - 0x44));
  a6 = ((undefined1 *)(fr0_ - 0x40));
  a5 = ((undefined1 *)(fr0_ - 0x3c));
  (vsp = ((unsigned long)(fr0_ - 72)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*ar5 + 0x120))))(ar5,a5,a6,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), get_field_4_05eed8(ar4,a5,a6,a7));
  switch(uVar1) {
  case 6:
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
      uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x38)),a6,a7));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x70,uVar1,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(ar4 + 0x28,uVar1,a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,a6,a7));
      if (cVar2 == '\0') {
        *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
        *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
      }
      else {
        *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      }
    }
    break;
  case 0xd:
    if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x28))); *(le<unsigned>* )((((unsigned long)(fr0_ - 72)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 72)) - 8); FUN_8c02f670(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),a5,a6,a7); });
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_assign(&(*(le<undefined4>* )(fr0_ - 0x18)),((undefined1 *)(fr0_ - 0x28)),a6,a7));
      (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,a6,a7));
      if (cVar2 == '\0') {
        *(le<undefined4>* )(unsigned)(ar4 + 0x28) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x70) = (*(le<undefined4>* )(fr0_ - 0x18));
        *(le<undefined4>* )(unsigned)(ar4 + 0x2c) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x74) = (*(le<undefined4>* )(fr0_ - 0x14));
        *(le<undefined4>* )(unsigned)(ar4 + 0x30) = (*(le<undefined4>* )(fr0_ - 0x10));
        *(le<undefined4>* )(unsigned)(ar4 + 0x78) = (*(le<undefined4>* )(fr0_ - 0x10));
      }
      else {
        *(le<ulonglong>* )(unsigned)(ar4 + 0x28) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x70) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x14)),(*(le<undefined4>* )(fr0_ - 0x18)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x2c) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x74) = CONCAT44((*(le<undefined4>* )(fr0_ - 0x10)),(*(le<undefined4>* )(fr0_ - 0x14)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x30) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
        *(le<ulonglong>* )(unsigned)(ar4 + 0x78) = CONCAT44((*(le<undefined4>* )(fr0_ - 0xc)),(*(le<undefined4>* )(fr0_ - 0x10)));
      }
    }
  }
  uVar1 = (vsp = ((unsigned long)(fr0_ - 72)), Vec3_dtor(&(*(le<undefined4>* )(fr0_ - 0x18)),0xffffffff,a6,a7));
  return uVar1;
}

__asm__(".globl FUN_8c066628\n.set FUN_8c066628, FUN_8c066628_def\n");

}
//@unit 8c066834
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c066834_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c066834");
  return (unsigned)sh4_interp(0x8c066834, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c066834\n.set FUN_8c066834, FUN_8c066834_def\n");
}
//@unit 8c0670f0
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
uint Class_12a078_m6_0670f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m6_0670f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0fa2d8(0x8c35468c,ar5,ar6,ar7));
  return (uint)(iVar1 == 0);
}

__asm__(".globl Class_12a078_m6_0670f0\n.set Class_12a078_m6_0670f0, Class_12a078_m6_0670f0_def\n");

}
//@unit 8c06711c
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
undefined4 FUN_8c06711c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06711c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<int>* )(unsigned)(0x87c + ar4) == 1) && (*(le<int>* )(unsigned)(0x880 + ar4) == 1)) {
    return 1;
  }
  return 0;
}

__asm__(".globl FUN_8c06711c\n.set FUN_8c06711c, FUN_8c06711c_def\n");

}
//@unit 8c067140
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
undefined4 get_field_150_067140_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_150_067140");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x150 + ar4);
}

__asm__(".globl get_field_150_067140\n.set get_field_150_067140, get_field_150_067140_def\n");

}
//@unit 8c06714c
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
int FUN_8c06714c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06714c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x150;
  *(le<undefined4>* )(unsigned)(0x150 + ar4) = ar5;
  return iVar1;
}

__asm__(".globl FUN_8c06714c\n.set FUN_8c06714c, FUN_8c06714c_def\n");

}
//@unit 8c067158
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
int Class_12a078_m7_067158_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m7_067158");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(0x868 + ar4) = *(le<undefined4>* )(unsigned)(ar5 + 4);
  *(undefined1 *)(unsigned)(0x98 + ar4) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d10(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  iVar1 = 0x99;
  *(undefined1 *)(unsigned)(0x99 + ar4) = ar5[1];
  return iVar1;
}

__asm__(".globl Class_12a078_m7_067158\n.set Class_12a078_m7_067158, Class_12a078_m7_067158_def\n");

}
//@unit 8c0671a8
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
undefined4 Class_12a078_m8_0671a8_def(int ar4,undefined1 *ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m8_0671a8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *(le<undefined4>* )(unsigned)(ar5 + 4) = *(le<undefined4>* )(unsigned)(0x868 + ar4);
  *ar5 = *(undefined1 *)(unsigned)(0x98 + ar4);
  ar5[1] = *(undefined1 *)(unsigned)(0x99 + ar4);
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030d2c(ar4 + 0x9c,ar5 + 8,ar6,ar7));
  return uVar1;
}

__asm__(".globl Class_12a078_m8_0671a8\n.set Class_12a078_m8_0671a8, Class_12a078_m8_0671a8_def\n");

}
//@unit 8c0671f4
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
int Class_12a078_m5_0671f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m5_0671f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar5_00;
  
  iVar1 = *(le<int>* )(unsigned)(0x384 + ar4);
  if (iVar1 != -1) {
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c0f8214(0x8c35468c,ar5,ar6,ar7));
    ar5_00 = 3;
    (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c030870(ar4 + 0x9c,3,ar6,ar7));
    *(undefined1 *)(unsigned)(0x80 + ar4) = 1;
    *(le<undefined4>* )(unsigned)(0x384 + ar4) = 0xffffffff;
    *(le<undefined4>* )(unsigned)(0xfc + ar4) = 0;
    (vsp = ((unsigned long)(fr0_ - 4)), s_STATUS_FORMAT_030306(ar4 + 0x9c,ar5_00,ar6,ar7));
    if ((*(le<int>* )(unsigned)(ar4 + 0x40) == 0xb) || (iVar1 = *(le<int>* )(unsigned)(ar4 + 0x40), iVar1 == 0xc)) {
      *(le<undefined4>* )(unsigned)(ar4 + 4) = 0;
      *(le<undefined4>* )(unsigned)(ar4 + 8) = 0x14;
      *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
      iVar1 = 0x40;
      *(le<undefined4>* )(unsigned)(ar4 + 0x40) = 0;
    }
  }
  return iVar1;
}

__asm__(".globl Class_12a078_m5_0671f4\n.set Class_12a078_m5_0671f4, Class_12a078_m5_0671f4_def\n");

}
//@unit 8c067284
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
undefined * Class_12a078_m4_067284_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a078_m4_067284");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (int)(char)ar6;
  puVar1 = (undefined *)(unsigned)0x4;
  if ((iVar2 < 5) && (-1 < iVar2)) {
    puVar1 = (&(*(undefined1 *)(unsigned)0x8c0672a8))[iVar2];
                    
    switch(iVar2) {
    case 1:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1d,0x1b,ar7));
      break;
    case 2:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1c,0x1b,ar7));
      break;
    case 3:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1e,0x1b,ar7));
      break;
    case 4:
      puVar1 = (undefined *)(unsigned)(vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0b9ed4(ar5,0x1f,0x1b,ar7));
    }
  }
  return puVar1;
}

__asm__(".globl Class_12a078_m4_067284\n.set Class_12a078_m4_067284, Class_12a078_m4_067284_def\n");

}
//@unit 8c067308
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
undefined4 get_field_100_067308_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_100_067308");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x100 + ar4);
}

__asm__(".globl get_field_100_067308\n.set get_field_100_067308, get_field_100_067308_def\n");

}
//@unit 8c067314
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c067314_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c067314");
  return (unsigned)sh4_interp(0x8c067314, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c067314\n.set FUN_8c067314, FUN_8c067314_def\n");
}
//@unit 8c0673cc
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
le<undefined4>*  FUN_8c0673cc_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c0673cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = 0;
  ar4[1] = 0;
  return ar4;
}

__asm__(".globl FUN_8c0673cc\n.set FUN_8c0673cc, FUN_8c0673cc_def\n");

}
//@unit 8c0673dc
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
int free_if_nonnull_wrap_0673dc_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_0673dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_0673dc\n.set free_if_nonnull_wrap_0673dc, free_if_nonnull_wrap_0673dc_def\n");

}
//@unit 8c06740c
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
int FUN_8c06740c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06740c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ar6_00;
  undefined4 ar7_00;
  
  ar7_00 = 0;
  ar6_00 = 0;
  ar5_00 = 0xe;
  ({ unsigned long t0_ = (unsigned long)(ar5); *(le<unsigned>* )((((unsigned long)(fr0_ - 0)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 0)) - 8); FUN_8c0f4040(ar4,0xe,0,0); });
  *(le<unsigned>* )(unsigned)(ar4 + 8) = (&(*(undefined1 *)(unsigned)0x8c12a0c4));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016fcc(ar4 + 0x170,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015ab8(ar4 + 0x204,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c015224(ar4 + 0x208,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero(ar4 + 0x268,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero(ar4 + 0x278,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023dac(ar4 + 0x284,ar5_00,ar6_00,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), s_herb3_pvm_067598(ar4,ar5_00,ar6_00,ar7_00));
  return ar4;
}

__asm__(".globl FUN_8c06740c\n.set FUN_8c06740c, FUN_8c06740c_def\n");

}
//@unit 8c0674c8
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
int Class_12a0c4_m0_0674c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a0c4_m0_0674c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    *(le<unsigned>* )(unsigned)(ar4 + 8) = ((undefined1 *)(unsigned)0x8c12a0c4);
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016ac4(ar4 + 0x284,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), object_dtor_delete(ar4 + 0x278,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Vec3_dtor(ar4 + 0x268,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_0153e4(ar4 + 0x208,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_016bfc(ar4 + 0x204,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 16)), Class_129938_m0_017084(ar4 + 0x170,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 16)), Class_12c1f0_m0_0f4108(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12a0c4_m0_0674c8\n.set Class_12a0c4_m0_0674c8, Class_12a0c4_m0_0674c8_def\n");

}
//@unit 8c067594
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_herb3_pvm_067598_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_herb3_pvm_067598");
  return (unsigned)sh4_interp(0x8c067594, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_herb3_pvm_067598\n.set s_herb3_pvm_067598, s_herb3_pvm_067598_def\n");
}
//@unit 8c0677dc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a0c4_m2_0677dc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a0c4_m2_0677dc");
  return (unsigned)sh4_interp(0x8c0677dc, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a0c4_m2_0677dc\n.set Class_12a0c4_m2_0677dc, Class_12a0c4_m2_0677dc_def\n");
}
//@unit 8c067934
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
undefined4 Class_12a0c4_m3_067934_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a0c4_m3_067934");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x10))))(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)0x8c2804e0 = 0;
  return 1;
}

__asm__(".globl Class_12a0c4_m3_067934\n.set Class_12a0c4_m3_067934, Class_12a0c4_m3_067934_def\n");

}
//@unit 8c067964
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
undefined4 FUN_8c067964_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c067964");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0x1c))))(ar4,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c067964\n.set FUN_8c067964, FUN_8c067964_def\n");

}
//@unit 8c06797c
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
undefined4 FUN_8c06797c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06797c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 68; for (int i_ = 0; i_ < 68; i_++) z_[i_] = 0; }
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffbf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffef;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) & 0xffffffdf;
  *(le<uint>* )(unsigned)(ar4 + 0x74) = *(le<uint>* )(unsigned)(ar4 + 0x74) | 0x40;
  return 0x74;
}

__asm__(".globl FUN_8c06797c\n.set FUN_8c06797c, FUN_8c06797c_def\n");

}
//@unit 8c0679cc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c0679cc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c0679cc");
  return (unsigned)sh4_interp(0x8c0679cc, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c0679cc\n.set FUN_8c0679cc, FUN_8c0679cc_def\n");
}
//@unit 8c068818
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
int FUN_8c068818_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c068818");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 16; for (int i_ = 0; i_ < 16; i_++) z_[i_] = 0; }
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(undefined2)ar5);
  if (ar4 != 0) {
    ar5_00 = 0xffffffff;
    (vsp = ((unsigned long)(fr0_ - 16)), free_if_nonnull_wrap_068860(ar4 + 0xac,0xffffffff,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 16)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl FUN_8c068818\n.set FUN_8c068818, FUN_8c068818_def\n");

}
//@unit 8c068860
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
int free_if_nonnull_wrap_068860_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("free_if_nonnull_wrap_068860");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 12; for (int i_ = 0; i_ < 12; i_++) z_[i_] = 0; }
  
  if ((ar4 != 0) && (0 < (short)ar5)) {
    ({ unsigned long ri0_ = (unsigned long)(CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0xc)) >> 0x10),(short)ar5)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 12)); free_if_nonnull(ar4,ar5,ar6,ar7); });
  }
  return ar4;
}

__asm__(".globl free_if_nonnull_wrap_068860\n.set free_if_nonnull_wrap_068860, free_if_nonnull_wrap_068860_def\n");

}
//@unit 8c068890
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
le<undefined4>*  FUN_8c068890_def(le<undefined4>* ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c068890");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  le<undefined2>* puVar3;
  le<undefined4>* puVar4;
  le<undefined2>* puVar6;
  undefined1 *puVar7;
  le<undefined4>* puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  le<undefined4>* puVar5;
  
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
  *(le<undefined2>* )(unsigned)(ar4 + 10) = *(le<undefined2>* )(unsigned)(ar5 + 10);
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
  *(le<undefined4>* )(unsigned)(0x84 + (int)ar4) = *(le<undefined4>* )(unsigned)(0x84 + (int)ar5);
  *(le<undefined4>* )(unsigned)(0x88 + (int)ar4) = *(le<undefined4>* )(unsigned)(0x88 + (int)ar5);
  puVar6 = (le<undefined2>* )(unsigned)((int)ar4 + 0x8c);
  puVar3 = (le<undefined2>* )(unsigned)((int)ar5 + 0x8c);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  puVar6 = (le<undefined2>* )(unsigned)((int)ar4 + 0x96);
  puVar3 = (le<undefined2>* )(unsigned)((int)ar5 + 0x96);
  *puVar6 = *puVar3;
  puVar6[1] = puVar3[1];
  puVar6[2] = puVar3[2];
  puVar6[3] = puVar3[3];
  puVar6[4] = puVar3[4];
  *(undefined1 *)(unsigned)(0xa0 + (int)ar4) = *(undefined1 *)(unsigned)(0xa0 + (int)ar5);
  *(undefined1 *)(unsigned)(0xa1 + (int)ar4) = *(undefined1 *)(unsigned)(0xa1 + (int)ar5);
  *(le<undefined2>* )(unsigned)(0xa2 + (int)ar4) = *(le<undefined2>* )(unsigned)(0xa2 + (int)ar5);
  *(le<undefined2>* )(unsigned)(0xa4 + (int)ar4) = *(le<undefined2>* )(unsigned)(0xa4 + (int)ar5);
  *(le<undefined4>* )(unsigned)(0xa8 + (int)ar4) = *(le<undefined4>* )(unsigned)(0xa8 + (int)ar5);
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c068a2c((int)ar4 + 0xac,(int)ar5 + 0xac,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0xb8 + (int)ar4) = *(le<undefined4>* )(unsigned)(0xb8 + (int)ar5);
  *(le<undefined4>* )(unsigned)(0xbc + (int)ar4) = *(le<undefined4>* )(unsigned)(0xbc + (int)ar5);
  *(le<undefined4>* )(unsigned)(0xc0 + (int)ar4) = *(le<undefined4>* )(unsigned)(0xc0 + (int)ar5);
  *(le<undefined4>* )(unsigned)(0xc4 + (int)ar4) = *(le<undefined4>* )(unsigned)(0xc4 + (int)ar5);
  *(le<undefined4>* )(unsigned)(0xc8 + (int)ar4) = *(le<undefined4>* )(unsigned)(0xc8 + (int)ar5);
  puVar7 = (undefined1 *)(unsigned)((int)ar4 + 0xcc);
  puVar9 = (undefined1 *)(unsigned)((int)ar5 + 0xcc);
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

__asm__(".globl FUN_8c068890\n.set FUN_8c068890, FUN_8c068890_def\n");

}
//@unit 8c068a2c
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
le<undefined2>*  FUN_8c068a2c_def(le<undefined2>* ar4,le<undefined2>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c068a2c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  *ar4 = *ar5;
  ar4[1] = ar5[1];
  ar4[2] = ar5[2];
  ar4[3] = ar5[3];
  *(undefined1 *)(unsigned)(ar4 + 4) = *(undefined1 *)(unsigned)(ar5 + 4);
  *(undefined1 *)(unsigned)((int)ar4 + 9) = *(undefined1 *)(unsigned)((int)ar5 + 9);
  return ar4;
}

__asm__(".globl FUN_8c068a2c\n.set FUN_8c068a2c, FUN_8c068a2c_def\n");

}
//@unit 8c068a4c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c068a4c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c068a4c");
  return (unsigned)sh4_interp(0x8c068a4c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c068a4c\n.set FUN_8c068a4c, FUN_8c068a4c_def\n");
}
//@unit 8c068e64
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c068e64_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c068e64");
  return (unsigned)sh4_interp(0x8c068e64, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c068e64\n.set FUN_8c068e64, FUN_8c068e64_def\n");
}
//@unit 8c069c24
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c069c24_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c069c24");
  return (unsigned)sh4_interp(0x8c069c24, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c069c24\n.set FUN_8c069c24, FUN_8c069c24_def\n");
}
//@unit 8c06a524
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
undefined4 FUN_8c06a524_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06a524");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)0x8c280998 = 0;
  *(le<undefined4>* )(unsigned)0x8c28099c = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a0 = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a4 = 0;
  *(le<undefined4>* )(unsigned)0x8c2809a8 = 0;
  for (iVar1 = 0; iVar1 < 7; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c2809b8 + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c2809b8 + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c2809fc + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c2809fc + 4) = 0;
  }
  for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
    *(le<undefined4>* )(unsigned)(0x8c280a38 + iVar1 * 8) = 0;
    *(le<undefined4>* )(unsigned)(iVar1 * 8 + 0x8c280a38 + 4) = 0;
  }
  return 6;
}

__asm__(".globl FUN_8c06a524\n.set FUN_8c06a524, FUN_8c06a524_def\n");

}
//@unit 8c06a5f0
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06a5f0_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06a5f0");
  return (unsigned)sh4_interp(0x8c06a5f0, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06a5f0\n.set FUN_8c06a5f0, FUN_8c06a5f0_def\n");
}
//@unit 8c06a9e8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06a9e8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06a9e8");
  return (unsigned)sh4_interp(0x8c06a9e8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06a9e8\n.set FUN_8c06a9e8, FUN_8c06a9e8_def\n");
}
//@unit 8c06aa04
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06aa04_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06aa04");
  return (unsigned)sh4_interp(0x8c06aa04, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06aa04\n.set FUN_8c06aa04, FUN_8c06aa04_def\n");
}
//@unit 8c06abb8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06abb8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06abb8");
  return (unsigned)sh4_interp(0x8c06abb8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06abb8\n.set FUN_8c06abb8, FUN_8c06abb8_def\n");
}
//@unit 8c06add8
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06add8_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06add8");
  return (unsigned)sh4_interp(0x8c06add8, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06add8\n.set FUN_8c06add8, FUN_8c06add8_def\n");
}
//@unit 8c06af1c
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
undefined4 FUN_8c06af1c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06af1c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  for (iVar1 = 0; iVar1 < 9; iVar1 = iVar1 + 1) {
    if ('\0' < *(char *)(unsigned)(0x248 + ar4 + iVar1)) {
      *(char *)(unsigned)(0x248 + ar4 + iVar1) = *(char *)(unsigned)(0x248 + ar4 + iVar1) + -1;
    }
  }
  return 9;
}

__asm__(".globl FUN_8c06af1c\n.set FUN_8c06af1c, FUN_8c06af1c_def\n");

}
//@unit 8c06af5c
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
int FUN_8c06af5c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06af5c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  *(le<short>* )(unsigned)(0x264 + ar4) = (short)uVar1;
  uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,uVar2,ar6,ar7));
  iVar3 = 0x266;
  *(le<short>* )(unsigned)(0x266 + ar4) = (short)uVar2;
  return iVar3;
}

__asm__(".globl FUN_8c06af5c\n.set FUN_8c06af5c, FUN_8c06af5c_def\n");

}
//@unit 8c06afb0
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
int FUN_8c06afb0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06afb0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 ar5_00;
  int iVar4;
  
  ar5_00 = ar5;
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5,ar6,ar7));
  if (*(le<short>* )(unsigned)(0x264 + ar4) == (short)uVar1) {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5_00,ar6,ar7));
    iVar4 = (uVar2 & 0xffff) - (int)*(le<short>* )(unsigned)(0x266 + ar4);
  }
  else {
    uVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02602c(ar5,ar5_00,ar6,ar7));
    uVar3 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c028ee4(ar5,ar5_00,ar6,ar7));
    iVar4 = (0x3840 - *(le<short>* )(unsigned)(0x266 + ar4)) +
            (((uVar3 & 0xffff) - (uint)*(le<ushort>* )(unsigned)(0x264 + ar4)) + -1) * 0x3840 +
            (uVar2 & 0xffff);
  }
  return iVar4;
}

__asm__(".globl FUN_8c06afb0\n.set FUN_8c06afb0, FUN_8c06afb0_def\n");

}
//@unit 8c06b054
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06b054_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06b054");
  return (unsigned)sh4_interp(0x8c06b054, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06b054\n.set FUN_8c06b054, FUN_8c06b054_def\n");
}
//@unit 8c06b154
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
undefined4 FUN_8c06b154_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b154");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b430(*(le<undefined4>* )(unsigned)(ar4 * 8 + 0x8c2809b8 + 4),ar5,ar6,ar7));
  }
  else if (ar4 < 0xd) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b430))))
                      (*(le<undefined4>* )(unsigned)((ar4 + -7) * 8 + 0x8c2809fc + 4),ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b430))))
                      (*(le<undefined4>* )(unsigned)((ar4 + -1) * 8 + 0x8c280a38 + 4),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c06b154\n.set FUN_8c06b154, FUN_8c06b154_def\n");

}
//@unit 8c06b1d8
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
undefined4 FUN_8c06b1d8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b1d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  if (ar4 < 7) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b278(*(le<undefined4>* )(unsigned)(ar4 * 8 + 0x8c2809b8 + 4),ar5,ar6,ar7));
  }
  else if (ar4 < 0xd) {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b278))))
                      (*(le<undefined4>* )(unsigned)((ar4 + -7) * 8 + 0x8c2809fc + 4),ar5,ar6,ar7));
  }
  else {
    uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c06b278))))
                      (*(le<undefined4>* )(unsigned)((ar4 + -1) * 8 + 0x8c280a38 + 4),ar5,ar6,ar7));
  }
  return uVar1;
}

__asm__(".globl FUN_8c06b1d8\n.set FUN_8c06b1d8, FUN_8c06b1d8_def\n");

}
//@unit 8c06b25c
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
int FUN_8c06b25c_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b25c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  iVar1 = 0x214;
  *(le<uint>* )(unsigned)(0x214 + ar4) = *(le<uint>* )(unsigned)(0x214 + ar4) | ar5;
  return iVar1;
}

__asm__(".globl FUN_8c06b25c\n.set FUN_8c06b25c, FUN_8c06b25c_def\n");

}
//@unit 8c06b278
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
int FUN_8c06b278_def(int ar4,uint ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b278");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  
  if ((int)ar5 < 0) {
    uVar1 = 1 >> (~ar5 & 0x1f) + 1;
  }
  else {
    uVar1 = 1 << (ar5 & 0x1f);
  }
  iVar2 = 0x214;
  *(le<uint>* )(unsigned)(0x214 + ar4) = *(le<uint>* )(unsigned)(0x214 + ar4) & ~uVar1;
  return iVar2;
}

__asm__(".globl FUN_8c06b278\n.set FUN_8c06b278, FUN_8c06b278_def\n");

}
//@unit 8c06b29c
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
int FUN_8c06b29c_def(int ar4,int ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b29c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 44; for (int i_ = 0; i_ < 44; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  uint uVar3;
  uint ar5_00;
  
  ar5_00 = 1;
  ((le<uint>* )(fr0_ - 0x2c))[0] = *(le<uint>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c1371b0));
  ((le<uint>* )(fr0_ - 0x2c))[1] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 4);
  ((le<uint>* )(fr0_ - 0x2c))[2] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 8);
  ((le<uint>* )(fr0_ - 0x2c))[3] = *(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c1371b0)) + 0xc);
  iVar1 = -1;
  iVar2 = ar6;
  do {
    iVar1 = iVar1 + 1;
    uVar3 = (*(le<uint>* )(unsigned)(0x214 + ar4) | ((le<uint>* )(fr0_ - 0x2c))[ar5]) & ar5_00;
    if ((uVar3 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) {
      iVar2 = iVar2 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar3 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) && (0 < iVar2));
  if (iVar2 < 1) {
    iVar2 = -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 44)), FUN_8c06b25c(ar4,ar5_00,ar6,ar7));
    iVar2 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = iVar2 + -1;
  }
  return iVar2;
}

__asm__(".globl FUN_8c06b29c\n.set FUN_8c06b29c, FUN_8c06b29c_def\n");

}
//@unit 8c06b35c
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
int FUN_8c06b35c_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b35c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  uint uVar2;
  uint ar5_00;
  
  ar5_00 = 1;
  iVar1 = -1;
  do {
    iVar1 = iVar1 + 1;
    uVar2 = (*(le<uint>* )(unsigned)(0x214 + ar4) | 0x1ab) & ar5_00;
    if ((uVar2 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) {
      ar5 = ar5 + -1;
      ar5_00 = ar5_00 << 1;
    }
  } while (((uVar2 != 0) || (*(char *)(unsigned)(0x248 + ar4 + iVar1) == '\x02')) && (0 < ar5));
  if (ar5 < 1) {
    iVar1 = -1;
  }
  else {
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06b25c(ar4,ar5_00,ar6,ar7));
    iVar1 = 0;
    for (; ar5_00 != 0; ar5_00 = (int)ar5_00 >> 1) {
      iVar1 = iVar1 + 1;
    }
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}

__asm__(".globl FUN_8c06b35c\n.set FUN_8c06b35c, FUN_8c06b35c_def\n");

}
//@unit 8c06b3f4
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
undefined4 get_field_210_06b3f4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("get_field_210_06b3f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return *(le<undefined4>* )(unsigned)(0x210 + ar4);
}

__asm__(".globl get_field_210_06b3f4\n.set get_field_210_06b3f4, get_field_210_06b3f4_def\n");

}
//@unit 8c06b400
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06b400_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06b400");
  return (unsigned)sh4_interp(0x8c06b400, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06b400\n.set FUN_8c06b400, FUN_8c06b400_def\n");
}
//@unit 8c06b410
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06b410_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06b410");
  return (unsigned)sh4_interp(0x8c06b410, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06b410\n.set FUN_8c06b410, FUN_8c06b410_def\n");
}
//@unit 8c06b420
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
int FUN_8c06b420_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b420");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return ar4 + 0x204;
}

__asm__(".globl FUN_8c06b420\n.set FUN_8c06b420, FUN_8c06b420_def\n");

}
//@unit 8c06b430
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
int FUN_8c06b430_def(int ar4,int ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06b430");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  int iVar2;
  
  iVar1 = 0x248;
  iVar2 = 2;
  if (*(char *)(unsigned)(0x248 + ar4 + ar5) < '\x02') {
    *(char *)(unsigned)(0x248 + ar4 + ar5) = *(char *)(unsigned)(0x248 + ar4 + ar5) + '\x01';
    iVar2 = iVar1;
  }
  return iVar2;
}

__asm__(".globl FUN_8c06b430\n.set FUN_8c06b430, FUN_8c06b430_def\n");

}
//@unit 8c06b460
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06b460_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06b460");
  return (unsigned)sh4_interp(0x8c06b460, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06b460\n.set FUN_8c06b460, FUN_8c06b460_def\n");
}
//@unit 8c06c04c
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
undefined4 FUN_8c06c04c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06c04c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01538c))))
            (*(le<int>* )(unsigned)(0x224 + ar4) + *(le<int>* )(unsigned)(0x220 + ar4) * 0x124 + 0x78,ar5,
             ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015bb8))))
                    (*(le<int>* )(unsigned)(0x224 + ar4) + *(le<int>* )(unsigned)(0x220 + ar4) * 0x124 +
                     0x70,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c06c04c\n.set FUN_8c06c04c, FUN_8c06c04c_def\n");

}
//@unit 8c06c0b8
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
undefined4 FUN_8c06c0b8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06c0b8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01538c))))
            (*(le<int>* )(unsigned)(0x224 + ar4) + *(le<int>* )(unsigned)(0x220 + ar4) * 0x124 + 0x78,ar5,
             ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c015bb8))))
                    (*(le<int>* )(unsigned)(0x224 + ar4) + *(le<int>* )(unsigned)(0x220 + ar4) * 0x124 +
                     0x70,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c219a9a(uVar1,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c06c0b8\n.set FUN_8c06c0b8, FUN_8c06c0b8_def\n");

}
//@unit 8c06c124
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06c124_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06c124");
  return (unsigned)sh4_interp(0x8c06c124, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06c124\n.set FUN_8c06c124, FUN_8c06c124_def\n");
}
//@unit 8c06c13c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06c13c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06c13c");
  return (unsigned)sh4_interp(0x8c06c13c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06c13c\n.set FUN_8c06c13c, FUN_8c06c13c_def\n");
}
//@unit 8c06c148
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_herb3_pvm_06c14c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_herb3_pvm_06c14c");
  return (unsigned)sh4_interp(0x8c06c148, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_herb3_pvm_06c14c\n.set s_herb3_pvm_06c14c, s_herb3_pvm_06c14c_def\n");
}
//@unit 8c06c89c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06c89c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06c89c");
  return (unsigned)sh4_interp(0x8c06c89c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06c89c\n.set FUN_8c06c89c, FUN_8c06c89c_def\n");
}
//@unit 8c06c9c8
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
int FUN_8c06c9c8_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06c9c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  int iVar1;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x24) = *ar5;
  (vsp = ((unsigned long)(fr0_ - 4)), vec3_copy_8c023d8c(ar4 + 0x50,ar5 + 1,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c023e04(ar4 + 0x5c,ar5 + 4,ar6,ar7));
  *(le<undefined4>* )(unsigned)(ar4 + 0x74) = ar5[8];
  *(le<undefined4>* )(unsigned)(0x218 + ar4) = 3;
  *(le<undefined4>* )(unsigned)(0x21c + ar4) = 0xffffffff;
  iVar1 = *(le<undefined4>* )(unsigned)0x8c2809a8;
  *(le<undefined4>* )(unsigned)0x8c2809a8 = iVar1 + 1;
  return iVar1 + 1;
}

__asm__(".globl FUN_8c06c9c8\n.set FUN_8c06c9c8, FUN_8c06c9c8_def\n");

}
//@unit 8c06ca34
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
undefined4 FUN_8c06ca34_def(int ar4,le<undefined4>* ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06ca34");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  *ar5 = *(le<undefined4>* )(unsigned)(ar4 + 0x24);
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_copy_8c023d8c(ar5 + 1,ar4 + 0x50,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c023e04(ar5 + 4,ar4 + 0x5c,ar6,ar7));
  uVar1 = *(le<undefined4>* )(unsigned)(ar4 + 0x74);
  ar5[8] = uVar1;
  return uVar1;
}

__asm__(".globl FUN_8c06ca34\n.set FUN_8c06ca34, FUN_8c06ca34_def\n");

}
//@unit 8c06ca7c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06ca7c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06ca7c");
  return (unsigned)sh4_interp(0x8c06ca7c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06ca7c\n.set FUN_8c06ca7c, FUN_8c06ca7c_def\n");
}
//@unit 8c06cb08
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_herb_seed_nj_06cb08_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_herb_seed_nj_06cb08");
  return (unsigned)sh4_interp(0x8c06cb08, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_herb_seed_nj_06cb08\n.set s_herb_seed_nj_06cb08, s_herb_seed_nj_06cb08_def\n");
}
//@unit 8c06ce04
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
undefined4 s_GRAPHICS_HERBLINE_06ce12_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_HERBLINE_06ce12");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 140; for (int i_ = 0; i_ < 140; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 a5;
  int iVar4;
  char *pcVar5;
  undefined *puVar6;
  le<undefined4>* puVar7;
  le<le<undefined4>*>* ar7_00;
  le<int>* a4;
  int a6;
  
  ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
  puVar7 = (le<undefined4>* )(unsigned)0x0;
  (*(le<unsigned>* )(fr0_ - 0x28) = (unsigned)(unsigned long)((le<undefined4>* )(unsigned)0x0));
  puVar6 = (undefined *)(unsigned)0x0;
  (*(le<undefined4>* )(fr0_ - 0x2c)) = 0;
  uVar1 = 0;
  for (a6 = 0; a6 < 2; a6 = a6 + 1) {
    iVar4 = *(le<int>* )(unsigned)(ar4 + 0x224) + a6 * 0x124;
    if (*(le<int>* )(unsigned)(iVar4 + 0x18) != 0) {
      puVar7 = (le<undefined4>* )(unsigned)(ar4 + a6);
      puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020ddc(ar5,*(le<undefined4>* )(unsigned)(iVar4 + 0x18),(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),puVar7
                          ));
      if (iVar2 == 0) {
        puVar7 = (le<undefined4>* )(unsigned)0x2;
        puVar6 = (undefined *)(unsigned)0x0;
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar4 + 0x18),((undefined1 *)(unsigned)0x8c13741d),0,2);
      }
    }
    for (iVar2 = 0; iVar2 < *(le<short>* )(unsigned)(iVar4 + 0xa4); iVar2 = iVar2 + 1) {
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 4))) == '\0') {
        puVar7 = (le<undefined4>* )(unsigned)0x2;
        puVar6 = (undefined *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 140)), report_error_message(((undefined1 *)(unsigned)0x8c137452),((undefined1 *)(unsigned)0x8c137460),0,2));
        ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
      }
      else {
        puVar7 = ((le<undefined4>* )(fr0_ - 0x24));
        puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020bec(ar5,*(le<undefined4>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 4)),
                             (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),puVar7));
        if (iVar3 == 0) {
          puVar7 = (le<undefined4>* )(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 4)),((undefined1 *)(unsigned)0x8c13743f),
                     0,2);
        }
      }
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015bb0(*(le<int>* )(unsigned)(iVar4 + 0xa0) + iVar2 * 4,((le<undefined4>* )(fr0_ - 0x24))[0],puVar6,puVar7); })
      ;
    }
    for (iVar2 = 0; iVar2 < *(le<short>* )(unsigned)(iVar4 + 0xac); iVar2 = iVar2 + 1) {
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 8))) == '\0') {
        ((le<undefined4>* )(fr0_ - 0x24))[0] = 0;
      }
      else {
        puVar7 = ((le<undefined4>* )(fr0_ - 0x24));
        puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
        iVar3 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020ce4(ar5,*(le<undefined4>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 8)),
                             (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),puVar7));
        if (iVar3 == 0) {
          puVar7 = (le<undefined4>* )(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar2 * 4 + *(le<int>* )(unsigned)(iVar4 + 8)),((undefined1 *)(unsigned)0x8c137474),
                     0,2);
        }
        ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015be4(*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x224) + a6 * 0x124 + 0xa8) + iVar2 * 4,((le<undefined4>* )(fr0_ - 0x24))[0],
                     puVar6,puVar7); });
      }
      ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015be4(*(le<int>* )(unsigned)(iVar4 + 0xa8) + iVar2 * 4,((le<undefined4>* )(fr0_ - 0x24))[0],puVar6,puVar7); })
      ;
    }
    ar7_00 = (le<le<unsigned int>*>*)(((le<undefined4>*  *)(fr0_ - 0x28)));
    puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
    iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c0209fc(ar5,*(le<undefined4>* )(unsigned)(iVar4 + 0xc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),ar7_00));
    if (iVar2 == 0) {
      ar7_00 = (le<le<undefined4>*>* )(unsigned)0x2;
      puVar6 = (undefined *)(unsigned)0x0;
      report_error_message
                (*(le<undefined4>* )(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c137487),0,2);
    }
    ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015ad4(iVar4 + 0x70,((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28)),puVar6,ar7_00); });
    (*(le<int>* )(fr0_ - 0x8c)) = (vsp = ((unsigned long)(fr0_ - 140)), libgcc_divide_helper_01031c(*(le<undefined4>* )(unsigned)(ar4 + 0x210),4,puVar6,ar7_00));
    if ((*(le<int>* )(fr0_ - 0x8c)) == 0) {
      if (*(le<int>* )(unsigned)(iVar4 + 0x20) == 0) {
        puVar7 = &(*(le<undefined4>* )(fr0_ - 0x2c));
        puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020af4(ar5,*(le<undefined4>* )(unsigned)(iVar4 + 0xc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),
                             puVar7));
        if (iVar2 == 0) {
          puVar7 = (le<undefined4>* )(unsigned)0x2;
          puVar6 = (undefined *)(unsigned)0x0;
          report_error_message
                    (*(le<undefined4>* )(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c1374ed),0,2);
        }
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar4 + 0x78) + 8))))((le<int>* )(unsigned)(iVar4 + 0x78),(*(le<undefined4>* )(fr0_ - 0x2c)),puVar6,puVar7));
        iVar4 = a6;
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0xe4))))(ar4,ar5,a6,puVar7));
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x208) + 8))))((le<int>* )(unsigned)(ar4 + 0x208),(*(le<undefined4>* )(fr0_ - 0x2c)),iVar4,puVar7));
      }
      else {
        uVar1 = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
        (vsp = ((unsigned long)(fr0_ - 140)), s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x20,uVar1,ar7_00));
        iVar2 = iVar4 + 0x28;
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar4 + 0x78) + 8))))((le<int>* )(unsigned)(iVar4 + 0x78),iVar2,uVar1,ar7_00));
        uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x78,iVar2,uVar1,ar7_00));
        pcVar5 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 + 0x20));
        puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
        iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c02100c(ar5,pcVar5,(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),uVar1));
        if (iVar2 == 0) {
          uVar1 = 2;
          puVar6 = (undefined *)(unsigned)0x0;
          pcVar5 = ((undefined1 *)(unsigned)0x8c1374d0);
          report_error_message
                    (((undefined1 *)(unsigned)0x8c1374ae),
                     ((undefined1 *)(unsigned)0x8c1374d0),0,2);
        }
        a5 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x78,pcVar5,puVar6,uVar1));
        (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x208) + 8))))((le<int>* )(unsigned)(ar4 + 0x208),a5,puVar6,uVar1));
      }
    }
    else if (*(le<int>* )(unsigned)(iVar4 + 0x34) == 0) {
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c020af4(ar5,*(le<undefined4>* )(unsigned)(iVar4 + 0xc),(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),
                           &(*(le<undefined4>* )(fr0_ - 0x2c))));
      if (iVar2 == 0) {
        report_error_message
                  (*(le<undefined4>* )(unsigned)(iVar4 + 0xc),((undefined1 *)(unsigned)0x8c1374ed),0,2);
      }
      a4 = (le<int>* )(unsigned)(iVar4 + 0x78);
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 8))))(a4,(*(le<undefined4>* )(fr0_ - 0x2c)),((code *)(unsigned long)*(le<unsigned>* )(unsigned)(*a4 + 8)),a4));
      iVar4 = a6;
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 8) + 0xe4))))(ar4,ar5,a6,a4));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x208) + 8))))((le<int>* )(unsigned)(ar4 + 0x208),(*(le<undefined4>* )(fr0_ - 0x2c)),iVar4,a4));
    }
    else {
      uVar1 = *(le<undefined4>* )(unsigned)(iVar4 + 0xc);
      (vsp = ((unsigned long)(fr0_ - 140)), s_CHerb_SetPVMTexture_s_06d61c(ar4,iVar4 + 0x34,uVar1,ar7_00));
      iVar2 = iVar4 + 0x3c;
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(iVar4 + 0x80) + 8))))((le<int>* )(unsigned)(iVar4 + 0x80),iVar2,uVar1,ar7_00));
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x80,iVar2,uVar1,ar7_00));
      pcVar5 = ((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 + 0x34));
      puVar6 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 140)), FUN_8c02100c(ar5,pcVar5,(*(le<undefined4>* )(unsigned)(unsigned)0x8c136f4c),uVar1));
      if (iVar2 == 0) {
        uVar1 = 2;
        puVar6 = (undefined *)(unsigned)0x0;
        pcVar5 = ((undefined1 *)(unsigned)0x8c1374d0);
        report_error_message
                  (((undefined1 *)(unsigned)0x8c1374ae),
                   ((undefined1 *)(unsigned)0x8c1374d0),0,2);
      }
      uVar1 = (vsp = ((unsigned long)(fr0_ - 140)), get_field_4_0253e4(iVar4 + 0x80,pcVar5,puVar6,uVar1));
      (vsp = ((unsigned long)(fr0_ - 140)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(ar4 + 0x208) + 8))))((le<int>* )(unsigned)(ar4 + 0x208),uVar1,0x208,uVar1));
    }
    puVar6 = (undefined *)(unsigned)0x204;
    puVar7 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28));
    uVar1 = ({ unsigned long ri0_ = (unsigned long)((*(le<int>* )(fr0_ - 0x8c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 140)); FUN_8c015ad4(ar4 + 0x204,((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28)),0x204,((le<undefined4>* )(unsigned long)*(le<unsigned>* )(fr0_ - 0x28))); });
  }
  return uVar1;
}

__asm__(".globl s_GRAPHICS_HERBLINE_06ce12\n.set s_GRAPHICS_HERBLINE_06ce12, s_GRAPHICS_HERBLINE_06ce12_def\n");

}
//@unit 8c06d3ec
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
int s_GRAPHICS_HERBLINE_06d3ee_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  TRACE_ENTER("s_GRAPHICS_HERBLINE_06d3ee");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 ar7_00;
  int iVar1;
  int iVar2;
  
  iVar2 = *(le<int>* )(unsigned)(0x224 + ar4) + ar6 * 0x124;
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(iVar2 + 0x78,ar5,ar6,ar7));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020ef0))))
                    (ar5,*(le<undefined4>* )(unsigned)(iVar2 + 0x14),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar7_00));
  if (iVar1 == 0) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c102828))))
                      (*(le<undefined4>* )(unsigned)(iVar2 + 0x14),(&(*(undefined1 *)(unsigned)0x8c1371e0)) + 0x334,0
                       ,2));
  }
  return iVar1;
}

__asm__(".globl s_GRAPHICS_HERBLINE_06d3ee\n.set s_GRAPHICS_HERBLINE_06d3ee, s_GRAPHICS_HERBLINE_06d3ee_def\n");

}
//@unit 8c06d474
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
undefined4 s_GRAPHICS_HERBLINE_06d482_def(int ar4,undefined4 ar5,undefined4 ar6,int ar7)

{
  TRACE_ENTER("s_GRAPHICS_HERBLINE_06d482");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  for (iVar2 = 0; iVar2 < 2; iVar2 = iVar2 + 1) {
    iVar3 = *(le<int>* )(unsigned)(0x224 + ar4) + iVar2 * 0x124;
    for (iVar4 = 0; iVar4 < *(le<short>* )(unsigned)(0xa4 + iVar3); iVar4 = iVar4 + 1) {
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 4))) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020c60(ar5,*(le<undefined4>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 4)),ar6,ar7));
      }
      if (*((char *)(unsigned long)*(le<unsigned>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 8))) != '\0') {
        ar7 = ar4 + iVar2;
        ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
        (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020d58(ar5,*(le<undefined4>* )(unsigned)(iVar4 * 4 + *(le<int>* )(unsigned)(iVar3 + 8)),ar6,ar7));
      }
    }
    if (*(le<int>* )(unsigned)(iVar3 + 0x18) != 0) {
      ar7 = ar4 + iVar2;
      ar6 = *(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c));
      (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020e48(ar5,*(le<undefined4>* )(unsigned)(iVar3 + 0x18),ar6,ar7));
    }
  }
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c01031c))))
                    (*(le<undefined4>* )(unsigned)(0x210 + ar4),4,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(le<undefined4>* )(unsigned)((&(*(undefined1 *)(unsigned)0x8c136f54)) + iVar2 * 4),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),
             ar4 + 1));
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020a70))))
            (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f50)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar4));
  iVar2 = ar4;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)(((void *)(unsigned)0x8c020b68))))
            (ar5,*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f50)),*(le<undefined4>* )(unsigned)(&(*(undefined1 *)(unsigned)0x8c136f4c)),ar4));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((0xf0 + *(le<int>* )(unsigned)(ar4 + 8)))))(ar4,ar5,0,iVar2));
  return uVar1;
}

__asm__(".globl s_GRAPHICS_HERBLINE_06d482\n.set s_GRAPHICS_HERBLINE_06d482, s_GRAPHICS_HERBLINE_06d482_def\n");

}
//@unit 8c06d5e4
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
undefined4 FUN_8c06d5e4_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06d5e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(*(le<int>* )(unsigned)(0x224 + ar4) + 0x78,ar5,ar6,ar7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), s_Failed_s_015312(ar4 + 0x208,ar5,ar6,ar7));
  return uVar1;
}

__asm__(".globl FUN_8c06d5e4\n.set FUN_8c06d5e4, FUN_8c06d5e4_def\n");

}
//@unit 8c06d618
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned s_CHerb_SetPVMTexture_s_06d61c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("s_CHerb_SetPVMTexture_s_06d61c");
  return (unsigned)sh4_interp(0x8c06d618, ar4, ar5, ar6, ar7);
}
__asm__(".globl s_CHerb_SetPVMTexture_s_06d61c\n.set s_CHerb_SetPVMTexture_s_06d61c, s_CHerb_SetPVMTexture_s_06d61c_def\n");
}
//@unit 8c06d6d8
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
undefined4 noop_06d6d8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d6d8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d6d8\n.set noop_06d6d8, noop_06d6d8_def\n");

}
//@unit 8c06d6dc
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
undefined4 noop_06d6dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d6dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d6dc\n.set noop_06d6dc, noop_06d6dc_def\n");

}
//@unit 8c06d6e0
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
undefined4 noop_06d6e0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d6e0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d6e0\n.set noop_06d6e0, noop_06d6e0_def\n");

}
//@unit 8c06d6e4
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
undefined4 ret_const_1_06d6e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_06d6e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_06d6e4\n.set ret_const_1_06d6e4, ret_const_1_06d6e4_def\n");

}
//@unit 8c06d6ec
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
undefined4 FUN_8c06d6ec_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06d6ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  if ((*(le<int>* )(unsigned)(0x220 + ar4) == 0) && (*(le<int>* )(unsigned)(0x230 + ar4) == 7)) {
    return 1;
  }
  return *(le<undefined4>* )(unsigned)(0x220 + ar4);
}

__asm__(".globl FUN_8c06d6ec\n.set FUN_8c06d6ec, FUN_8c06d6ec_def\n");

}
//@unit 8c06d714
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06d714_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06d714");
  return (unsigned)sh4_interp(0x8c06d714, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06d714\n.set FUN_8c06d714, FUN_8c06d714_def\n");
}
//@unit 8c06d7e4
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
undefined4 ret_const_0_06d7e4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d7e4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d7e4\n.set ret_const_0_06d7e4, ret_const_0_06d7e4_def\n");

}
//@unit 8c06d7ec
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
undefined4 noop_06d7ec_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d7ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d7ec\n.set noop_06d7ec, noop_06d7ec_def\n");

}
//@unit 8c06d7f0
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
undefined4 noop_06d7f0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d7f0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d7f0\n.set noop_06d7f0, noop_06d7f0_def\n");

}
//@unit 8c06d7f4
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
undefined4 noop_06d7f4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d7f4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d7f4\n.set noop_06d7f4, noop_06d7f4_def\n");

}
//@unit 8c06d7f8
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
undefined4 noop_06d7f8_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d7f8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d7f8\n.set noop_06d7f8, noop_06d7f8_def\n");

}
//@unit 8c06d7fc
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
undefined4 noop_06d7fc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d7fc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d7fc\n.set noop_06d7fc, noop_06d7fc_def\n");

}
//@unit 8c06d800
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
undefined4 noop_06d800_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d800");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d800\n.set noop_06d800, noop_06d800_def\n");

}
//@unit 8c06d804
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
undefined4 noop_06d804_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d804");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d804\n.set noop_06d804, noop_06d804_def\n");

}
//@unit 8c06d808
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
undefined4 noop_06d808_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d808");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d808\n.set noop_06d808, noop_06d808_def\n");

}
//@unit 8c06d80c
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
undefined4 noop_06d80c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d80c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d80c\n.set noop_06d80c, noop_06d80c_def\n");

}
//@unit 8c06d810
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
undefined4 noop_06d810_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d810");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d810\n.set noop_06d810, noop_06d810_def\n");

}
//@unit 8c06d814
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
undefined4 noop_06d814_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d814");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d814\n.set noop_06d814, noop_06d814_def\n");

}
//@unit 8c06d818
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
undefined4 ret_const_0_06d818_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d818");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d818\n.set ret_const_0_06d818, ret_const_0_06d818_def\n");

}
//@unit 8c06d820
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_3f800000_06d820_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_3f800000_06d820");
  return (unsigned)sh4_interp(0x8c06d820, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_3f800000_06d820\n.set ret_const_3f800000_06d820, ret_const_3f800000_06d820_def\n");
}
//@unit 8c06d828
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_3f800000_06d828_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_3f800000_06d828");
  return (unsigned)sh4_interp(0x8c06d828, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_3f800000_06d828\n.set ret_const_3f800000_06d828, ret_const_3f800000_06d828_def\n");
}
//@unit 8c06d830
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_06d830_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_06d830");
  return (unsigned)sh4_interp(0x8c06d830, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_06d830\n.set ret_const_0_06d830, ret_const_0_06d830_def\n");
}
//@unit 8c06d838
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
undefined4 FUN_8c06d838_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06d838");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;
  undefined4 s0 = *(le<undefined4>* )(vsp + 0);

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  
  (vsp = ((unsigned long)(fr0_ - 20)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x10)),ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), vec3_copy_8c02b5fc(s0,((undefined1 *)(fr0_ - 0x10)),ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 20)), object_dtor_delete(((undefined1 *)(fr0_ - 0x10)),0xffffffff,ar6,ar7));
  return 0;
}

__asm__(".globl FUN_8c06d838\n.set FUN_8c06d838, FUN_8c06d838_def\n");

}
//@unit 8c06d870
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06d870_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06d870");
  return (unsigned)sh4_interp(0x8c06d870, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06d870\n.set FUN_8c06d870, FUN_8c06d870_def\n");
}
//@unit 8c06d87c
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
undefined4 ret_const_0_06d87c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d87c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d87c\n.set ret_const_0_06d87c, ret_const_0_06d87c_def\n");

}
//@unit 8c06d884
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_06d884_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_06d884");
  return (unsigned)sh4_interp(0x8c06d884, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_06d884\n.set ret_const_0_06d884, ret_const_0_06d884_def\n");
}
//@unit 8c06d88c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06d88c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06d88c");
  return (unsigned)sh4_interp(0x8c06d88c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06d88c\n.set FUN_8c06d88c, FUN_8c06d88c_def\n");
}
//@unit 8c06d8a4
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
undefined4 ret_const_0_06d8a4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d8a4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d8a4\n.set ret_const_0_06d8a4, ret_const_0_06d8a4_def\n");

}
//@unit 8c06d8ac
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
undefined4 ret_const_0_06d8ac_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d8ac");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d8ac\n.set ret_const_0_06d8ac, ret_const_0_06d8ac_def\n");

}
//@unit 8c06d8b4
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
undefined4 ret_const_0_06d8b4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d8b4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d8b4\n.set ret_const_0_06d8b4, ret_const_0_06d8b4_def\n");

}
//@unit 8c06d8bc
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned ret_const_0_06d8bc_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("ret_const_0_06d8bc");
  return (unsigned)sh4_interp(0x8c06d8bc, ar4, ar5, ar6, ar7);
}
__asm__(".globl ret_const_0_06d8bc\n.set ret_const_0_06d8bc, ret_const_0_06d8bc_def\n");
}
//@unit 8c06d8c4
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
undefined4 ret_const_ffffffff_06d8c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_ffffffff_06d8c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  return 0xffffffff;
}

__asm__(".globl ret_const_ffffffff_06d8c4\n.set ret_const_ffffffff_06d8c4, ret_const_ffffffff_06d8c4_def\n");

}
//@unit 8c06d8cc
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
undefined4 noop_06d8cc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d8cc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d8cc\n.set noop_06d8cc, noop_06d8cc_def\n");

}
//@unit 8c06d8d0
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
undefined4 noop_06d8d0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("noop_06d8d0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 in_r0 = (undefined4)(unsigned long)vin0;
  
  return in_r0 = 0;
}

__asm__(".globl noop_06d8d0\n.set noop_06d8d0, noop_06d8d0_def\n");

}
//@unit 8c06d8d4
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
undefined4 ret_const_0_06d8d4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_0_06d8d4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 0;
}

__asm__(".globl ret_const_0_06d8d4\n.set ret_const_0_06d8d4, ret_const_0_06d8d4_def\n");

}
//@unit 8c06d8dc
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
undefined4 ret_const_1_06d8dc_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("ret_const_1_06d8dc");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  return 1;
}

__asm__(".globl ret_const_1_06d8dc\n.set ret_const_1_06d8dc, ret_const_1_06d8dc_def\n");

}
//@unit 8c06d8e4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06d8e4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06d8e4");
  return (unsigned)sh4_interp(0x8c06d8e4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06d8e4\n.set FUN_8c06d8e4, FUN_8c06d8e4_def\n");
}
//@unit 8c06e410
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
undefined4 FUN_8c06e410_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e410");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c280a38,((void *)0x8c0673dc),8,6); });
  return uVar1;
}

__asm__(".globl FUN_8c06e410\n.set FUN_8c06e410, FUN_8c06e410_def\n");

}
//@unit 8c06e434
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
undefined4 FUN_8c06e434_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e434");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2809fc,((void *)0x8c0673dc),8,6); });
  return uVar1;
}

__asm__(".globl FUN_8c06e434\n.set FUN_8c06e434, FUN_8c06e434_def\n");

}
//@unit 8c06e458
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
undefined4 FUN_8c06e458_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e458");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2809b8,((void *)0x8c0673dc),8,7); });
  return uVar1;
}

__asm__(".globl FUN_8c06e458\n.set FUN_8c06e458, FUN_8c06e458_def\n");

}
//@unit 8c06e47c
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
undefined4 FUN_8c06e47c_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e47c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c280964,((void *)0x8c03a3dc),4,0xd); });
  return uVar1;
}

__asm__(".globl FUN_8c06e47c\n.set FUN_8c06e47c, FUN_8c06e47c_def\n");

}
//@unit 8c06e4a0
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
undefined4 FUN_8c06e4a0_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e4a0");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c280924,((void *)0x8c0247b0),4,0xd); });
  return uVar1;
}

__asm__(".globl FUN_8c06e4a0\n.set FUN_8c06e4a0, FUN_8c06e4a0_def\n");

}
//@unit 8c06e4c4
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
undefined4 FUN_8c06e4c4_def(undefined4 ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e4c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined4 uVar1;
  undefined4 in_PR = 0;
  
  uVar1 = ({ unsigned long ri0_ = (unsigned long)(in_PR); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); vec_delete_array(0x8c2804f0,((void *)0x8c03a4ac),0x124,2); });
  return uVar1;
}

__asm__(".globl FUN_8c06e4c4\n.set FUN_8c06e4c4, FUN_8c06e4c4_def\n");

}
//@unit 8c06e4ec
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
le<undefined4>*  FUN_8c06e4ec_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06e4ec");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c030fa0(ar4,ar5,ar6,ar7));
  *ar4 = (&(*(undefined1 *)(unsigned)0x8c12a25c));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x224,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x230,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x244,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x254,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_set_zero((int)ar4 + 0x264,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x270,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x280,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), Vec3_ctor_zero((int)ar4 + 0x2bc,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c06e5a4(ar4,ar5,ar6,ar7));
  return ar4;
}

__asm__(".globl FUN_8c06e4ec\n.set FUN_8c06e4ec, FUN_8c06e4ec_def\n");

}
//@unit 8c06e5a4
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06e5a4_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06e5a4");
  return (unsigned)sh4_interp(0x8c06e5a4, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06e5a4\n.set FUN_8c06e5a4, FUN_8c06e5a4_def\n");
}
//@unit 8c06e69c
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
le<undefined4>*  Class_12a25c_m6_06e69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a25c_m6_06e69c");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
  undefined4 ar6_00;
  undefined4 uVar1;
  undefined4 uVar2;
  le<undefined4>* puVar3;
  undefined4 uVar4;
  le<int>* piVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined *puVar10;
  code *pcVar11;
  int iVar12;
  
  *(le<undefined4>* )(unsigned)(ar4 + 0x128) = ar5;
  iVar12 = *(le<int>* )(unsigned)(ar4 + 0x128);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,iVar12 * 0x18 + -0x73d7f14c,ar6,iVar12));
  uVar2 = (*(undefined1 *)(unsigned)0x8c13797c);
  uVar1 = (*(undefined1 *)(unsigned)0x8c137964);
  ar6_00 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137960);
  uVar8 = (*(undefined1 *)(unsigned)0x8c13794c);
  uVar9 = (*(undefined1 *)(unsigned)0x8c137934);
  uVar7 = (*(undefined1 *)(unsigned)0x8c13791c);
  uVar4 = (*(undefined1 *)(unsigned)0x8c137904);
  puVar3 = (le<undefined4>* )(unsigned)0x128;
  iVar6 = *(le<int>* )(unsigned)(ar4 + 0x128);
  if ((iVar6 < 8) && (-1 < iVar6)) {
                    
    switch(iVar6) {
    case 0:
      *(le<undefined4>* )(unsigned)(ar4 + 0x2dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137900);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137908);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137910);
      puVar3 = ((le<undefined4>* )(unsigned)0x8c13790c);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13790c);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137914);
      break;
    case 1:
      *(le<undefined4>* )(unsigned)(ar4 + 0x2dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137918);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar7;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137920);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137928);
      puVar3 = (le<undefined4>* )(unsigned)(ar4 + 0x2e8);
      *puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137924);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13792c);
      break;
    case 2:
      *(le<undefined4>* )(unsigned)(ar4 + 0x2dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137930);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar9;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137938);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137940);
      puVar3 = ((le<undefined4>* )(unsigned)0x8c13793c);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13793c);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137944);
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,((le<undefined4>* )(unsigned)0x8c13793c),0xb0));
      piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar3,uVar9));
      if (*(le<int>* )(unsigned)(*piVar5 + 4) == 0) {
        puVar3 = (le<undefined4>* )(unsigned)0x0;
      }
      else {
        uVar7 = 9;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,puVar3,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar3,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137618);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137618),0));
        uVar7 = 10;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137630);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137630),0));
        uVar7 = 2;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137648);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137648),0));
        uVar7 = 3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137660),0));
      }
      break;
    default:
      *(le<undefined4>* )(unsigned)(ar4 + 0x2dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137948);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar8;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137950);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137958);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137954);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13795c);
      uVar7 = 9;
      pcVar11 = ((void *)0x8c03c0f0);
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,((void *)0x8c03c0f0),iVar12));
      puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,pcVar11,iVar12));
      puVar3 = (le<undefined4>* )(unsigned)*puVar3;
      if (puVar3[1] != 0) {
        uVar9 = 9;
        uVar7 = 9;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,9,iVar12));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,uVar9,iVar12));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137678);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137678),0));
        uVar7 = 10;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,((void *)0x8c015b4c),uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137690);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137690),0));
        uVar7 = 2;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1376a8);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1376a8),0));
        uVar7 = 3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1376c0),0));
      }
      break;
    case 6:
      puVar3 = (le<undefined4>* )(unsigned)(ar4 + 0x2dc);
      *puVar3 = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137960);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar1;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137968);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137970);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13796c);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137974);
      uVar7 = 9;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,ar6_00,puVar3));
      pcVar11 = ((void *)0x8c015b4c);
      piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,((void *)0x8c015b4c),puVar3));
      if (*(le<int>* )(unsigned)(*piVar5 + 4) == 0) {
        puVar3 = (le<undefined4>* )(unsigned)0x0;
      }
      else {
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,pcVar11,puVar3));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,pcVar11,puVar3));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1377f8);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1377f8),0));
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9));
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        *(le<undefined4>* )(unsigned)(*piVar5 + 4) = (*(undefined1 *)(unsigned)0x8c1377fc);
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,piVar5));
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,piVar5));
        uVar4 = (*(undefined1 *)(unsigned)0x8c137808);
        *(le<undefined4>* )(unsigned)(*piVar5 + 0x10) = (*(undefined1 *)(unsigned)0x8c137808);
        uVar9 = 9;
        uVar8 = 0xb0;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,uVar4));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar7,uVar9,uVar8,uVar4));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1376d8);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1376d8),0));
        uVar7 = 10;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137708),0));
        uVar7 = 2;
        uVar9 = 0xb0;
        pcVar11 = ((void *)0x8c03c0f0);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,2,((void *)0x8c03c0f0),0xb0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,pcVar11,uVar9));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137798);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137798),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1377c8);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1377c8),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137828);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137828),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x19,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c137738);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137738),1));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x1a,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 1;
        puVar10 = ((undefined1 *)(unsigned)0x8c137768);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137768),1));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,((void *)0x8c015b4c),puVar10,uVar7));
        puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137858),0));
      }
      break;
    case 7:
      *(le<undefined4>* )(unsigned)(ar4 + 0x2dc) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137978);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e0) = uVar2;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2e4) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137980);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137988);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2e8) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c137984);
      *(le<undefined4>* )(unsigned)(ar4 + 0x2ec) = uVar4;
      *(le<unsigned>* )(unsigned)(ar4 + 0x2f0) = (*(le<undefined4>* )(unsigned)(unsigned)0x8c13798c);
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,iVar12));
      piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,uVar9,iVar12));
      iVar12 = *piVar5;
      iVar6 = *(le<int>* )(unsigned)(iVar12 + 4);
      if (iVar6 != 0) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,iVar6,iVar12));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,iVar6,iVar12));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137810);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137810),0));
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9));
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar4 = (*(undefined1 *)(unsigned)0x8c137814);
        *(le<undefined4>* )(unsigned)(*piVar5 + 4) = (*(undefined1 *)(unsigned)0x8c137814);
        uVar9 = 0x11;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,0x11,uVar4));
        piVar5 = (le<int>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar7,uVar7,uVar9,uVar4));
        *(le<undefined4>* )(unsigned)(*piVar5 + 0x10) = (*(undefined1 *)(unsigned)0x8c137820);
        uVar7 = 9;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(iVar6,9,iVar6,0xb0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,iVar6,uVar9));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1376f0);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1376f0),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,10,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137720);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137720),0));
        uVar7 = 2;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,2,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1377b0);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1377b0),0));
        uVar7 = 3;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,3,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1377e0);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1377e0),0));
        uVar7 = 0x14;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x14,puVar10,uVar9));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137840),0));
        iVar6 = ar4 + 0xb0;
        pcVar11 = ((void *)0x8c03c0f0);
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(iVar6,0x19,((void *)0x8c03c0f0),iVar6));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,pcVar11,iVar6));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137750),1));
        uVar7 = 0x1a;
        uVar9 = 0xb0;
        iVar6 = ar4 + 0xb0;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(iVar6,0x1a,iVar6,0xb0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,iVar6,uVar9));
        puVar10 = ((undefined1 *)(unsigned)0x8c137780);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137780),1));
        uVar9 = 0x20;
        uVar7 = 0x20;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x20,puVar10,0x20));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137870);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137870),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x27,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137888);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137888),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x28,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1378a0);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1378a0),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x21,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1378b8);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1378b8),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x22,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,puVar10,uVar7));
        uVar7 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c1378d0);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1378d0),0));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x32,puVar10,uVar7));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,((void *)0x8c015b4c),puVar10,uVar7));
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1378e8),0));
      }
      puVar3 = ((le<undefined4>* )(unsigned long)*(le<unsigned>* )(unsigned)(ar4 + 100));
      if (puVar3 == (le<undefined4>* )(unsigned)0x1) {
        puVar3 = (le<undefined4>* )(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      }
    }
  }
  return puVar3;
}

__asm__(".globl Class_12a25c_m6_06e69c\n.set Class_12a25c_m6_06e69c, Class_12a25c_m6_06e69c_def\n");

}
//@unit 8c06f3c4
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
le<undefined4>*  Class_12a25c_m0_06f3c4_def(le<undefined4>* ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a25c_m0_06f3c4");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 20; for (int i_ = 0; i_ < 20; i_++) z_[i_] = 0; }
  le<int>* a4;
  undefined4 ar5_00;
  undefined4 ain0;
  
  ain0 = CONCAT22((short)((uint)(*(le<undefined4>* )(fr0_ - 0x10)) >> 0x10),(undefined2)ar5);
  if (ar4 != (le<undefined4>* )(unsigned)0x0) {
    *ar4 = ((undefined1 *)(unsigned)0x8c12a25c);
    if ((ar4[0x6b] != 0) && (a4 = (le<int>* )(unsigned)(uint)ar4[0x6b], a4 != (le<int>* )(unsigned)0x0)) {
      (vsp = ((unsigned long)(fr0_ - 20)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*a4 + 8))))(a4,1,ar6,ar7));
    }
    (vsp = ((unsigned long)(fr0_ - 20)), Vec3_dtor(ar4 + 0xaf,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), Vec3_dtor(ar4 + 0xa0,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), Vec3_dtor(ar4 + 0x9c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), object_dtor_delete(ar4 + 0x99,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), object_dtor_delete(ar4 + 0x95,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), Vec3_dtor(ar4 + 0x91,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), Vec3_dtor(ar4 + 0x8c,0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 20)), object_dtor_delete(ar4 + 0x89,0xffffffff,ar6,ar7));
    ar5_00 = 0;
    (vsp = ((unsigned long)(fr0_ - 20)), Class_129cbc_m0_0312f4(ar4,0,ar6,ar7));
    if (0 < (short)ain0) {
      ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 20)); free_if_nonnull(ar4,ar5_00,ar6,ar7); });
    }
  }
  return ar4;
}

__asm__(".globl Class_12a25c_m0_06f3c4\n.set Class_12a25c_m0_06f3c4, Class_12a25c_m0_06f3c4_def\n");

}
//@unit 8c06f4c8
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
int FUN_8c06f4c8_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("FUN_8c06f4c8");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c032160(ar4,ar5,ar6,ar7));
  *(le<undefined4>* )(unsigned)(0x2ac + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2b0 + ar4) = 0;
  *(le<undefined4>* )(unsigned)(0x2b4 + ar4) = 0;
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x244,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 0)), vec3_clear(ar4 + 0x2bc,ar5,ar6,ar7));
  iVar1 = 0x2cc;
  *(le<undefined4>* )(unsigned)(0x2cc + ar4) = 0;
  return iVar1;
}

__asm__(".globl FUN_8c06f4c8\n.set FUN_8c06f4c8, FUN_8c06f4c8_def\n");

}
//@unit 8c06f530
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned Class_12a25c_m1_06f530_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("Class_12a25c_m1_06f530");
  return (unsigned)sh4_interp(0x8c06f530, ar4, ar5, ar6, ar7);
}
__asm__(".globl Class_12a25c_m1_06f530\n.set Class_12a25c_m1_06f530, Class_12a25c_m1_06f530_def\n");
}
//@unit 8c06f918
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
int Class_12a25c_m7_06f918_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  TRACE_ENTER("Class_12a25c_m7_06f918");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c031684(ar4,ar5,ar6,ar7));
  iVar1 = 0x298;
  *(le<undefined4>* )(unsigned)(0x298 + ar4) = 1;
  return iVar1;
}

__asm__(".globl Class_12a25c_m7_06f918\n.set Class_12a25c_m7_06f918, Class_12a25c_m7_06f918_def\n");

}
//@unit 8c06f93c
#include "../decls.h"
extern "C" {
#include "../trace.h"
unsigned long sh4_interp(unsigned, unsigned long, unsigned long, unsigned long, unsigned long);
extern unsigned vin1; float sh4_fpu_fr0(void);
unsigned FUN_8c06f93c_def(unsigned ar4, unsigned ar5, unsigned ar6, unsigned ar7)
{
  TRACE_ENTER("FUN_8c06f93c");
  return (unsigned)sh4_interp(0x8c06f93c, ar4, ar5, ar6, ar7);
}
__asm__(".globl FUN_8c06f93c\n.set FUN_8c06f93c, FUN_8c06f93c_def\n");
}
