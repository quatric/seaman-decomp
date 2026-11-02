#include "../decls.h"
#ifndef INFINITY
#define INFINITY __builtin_inff()
#endif
#ifndef NAN
#define NAN __builtin_nanf("")
#endif
typedef int int3; typedef unsigned undefined3; typedef unsigned short wchar16; typedef unsigned uint3;
unsigned long xlat(unsigned long);
extern const char *ring[256]; extern unsigned rp, vr4, vr5, vr6, vr7, vin0, vin1; extern unsigned long vsp;
undefined4 * Class_12a25c_m6_06e69c_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "Class_12a25c_m6_06e69c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 4; for (int i_ = 0; i_ < 4; i_++) z_[i_] = 0; }
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
  
  *(undefined4 *)(unsigned)(ar4 + 0x128) = ar5;
  iVar12 = *(int *)(unsigned)(ar4 + 0x128);
  (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c031b68(ar4,iVar12 * 0x18 + -0x73d7f14c,ar6,iVar12));
  uVar2 = (*(undefined1 *)(unsigned)0x8c13797c);
  uVar1 = (*(undefined1 *)(unsigned)0x8c137964);
  ar6_00 = (*(undefined4 *)(unsigned)(unsigned)0x8c137960);
  uVar8 = (*(undefined1 *)(unsigned)0x8c13794c);
  uVar9 = (*(undefined1 *)(unsigned)0x8c137934);
  uVar7 = (*(undefined1 *)(unsigned)0x8c13791c);
  uVar4 = (*(undefined1 *)(unsigned)0x8c137904);
  puVar3 = (undefined4 *)(unsigned)0x128;
  iVar6 = *(int *)(unsigned)(ar4 + 0x128);
  if ((iVar6 < 8) && (-1 < iVar6)) {
                    
    switch(iVar6) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x2dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137900);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137908);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137910);
      puVar3 = ((undefined4 *)(unsigned)0x8c13790c);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13790c);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137914);
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x2dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137918);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar7;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137920);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137928);
      puVar3 = (undefined4 *)(unsigned)(ar4 + 0x2e8);
      *puVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c137924);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13792c);
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x2dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137930);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar9;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137938);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137940);
      puVar3 = ((undefined4 *)(unsigned)0x8c13793c);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13793c);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137944);
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,((undefined4 *)(unsigned)0x8c13793c),0xb0));
      piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar3,uVar9));
      if (*(int *)(unsigned)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)(unsigned)0x0;
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
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137660),0));
      }
      break;
    default:
      *(undefined4 *)(unsigned)(ar4 + 0x2dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137948);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar8;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137950);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137958);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137954);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13795c);
      uVar7 = 9;
      pcVar11 = ((void *)0x8c03c0f0);
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,((void *)0x8c03c0f0),iVar12));
      puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,pcVar11,iVar12));
      puVar3 = (undefined4 *)(unsigned)*puVar3;
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
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c1376c0),0));
      }
      break;
    case 6:
      puVar3 = (undefined4 *)(unsigned)(ar4 + 0x2dc);
      *puVar3 = (*(undefined4 *)(unsigned)(unsigned)0x8c137960);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar1;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137968);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137970);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c13796c);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c137974);
      uVar7 = 9;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,ar6_00,puVar3));
      pcVar11 = ((void *)0x8c015b4c);
      piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,((void *)0x8c015b4c),puVar3));
      if (*(int *)(unsigned)(*piVar5 + 4) == 0) {
        puVar3 = (undefined4 *)(unsigned)0x0;
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
        piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        *(undefined4 *)(unsigned)(*piVar5 + 4) = (*(undefined1 *)(unsigned)0x8c1377fc);
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,piVar5));
        piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,piVar5));
        uVar4 = (*(undefined1 *)(unsigned)0x8c137808);
        *(undefined4 *)(unsigned)(*piVar5 + 0x10) = (*(undefined1 *)(unsigned)0x8c137808);
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
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137858),0));
      }
      break;
    case 7:
      *(undefined4 *)(unsigned)(ar4 + 0x2dc) = (*(undefined4 *)(unsigned)(unsigned)0x8c137978);
      *(undefined4 *)(unsigned)(ar4 + 0x2e0) = uVar2;
      *(unsigned *)(unsigned)(ar4 + 0x2e4) = (*(undefined4 *)(unsigned)(unsigned)0x8c137980);
      uVar4 = (*(undefined1 *)(unsigned)0x8c137988);
      *(undefined4 *)(unsigned)(ar4 + 0x2e8) = (*(undefined4 *)(unsigned)(unsigned)0x8c137984);
      *(undefined4 *)(unsigned)(ar4 + 0x2ec) = uVar4;
      *(unsigned *)(unsigned)(ar4 + 0x2f0) = (*(undefined4 *)(unsigned)(unsigned)0x8c13798c);
      uVar7 = 9;
      uVar9 = 0xb0;
      uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,9,0xb0,iVar12));
      piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,uVar9,iVar12));
      iVar12 = *piVar5;
      iVar6 = *(int *)(unsigned)(iVar12 + 4);
      if (iVar6 != 0) {
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,iVar6,iVar12));
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar4,iVar6,iVar12));
        uVar9 = 0;
        puVar10 = ((undefined1 *)(unsigned)0x8c137810);
        (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c034a70(ar4 + 0xb0,uVar4,((undefined1 *)(unsigned)0x8c137810),0));
        uVar7 = 0x11;
        uVar4 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,puVar10,uVar9));
        piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar4,uVar7,puVar10,uVar9));
        uVar4 = (*(undefined1 *)(unsigned)0x8c137814);
        *(undefined4 *)(unsigned)(*piVar5 + 4) = (*(undefined1 *)(unsigned)0x8c137814);
        uVar9 = 0x11;
        uVar7 = (vsp = ((unsigned long)(fr0_ - 4)), FUN_8c03c0f0(ar4 + 0xb0,0x11,0x11,uVar4));
        piVar5 = (int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), deref_u32(uVar7,uVar7,uVar9,uVar4));
        *(undefined4 *)(unsigned)(*piVar5 + 0x10) = (*(undefined1 *)(unsigned)0x8c137820);
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
      puVar3 = ((undefined4 *)(unsigned long)*(unsigned *)(unsigned)(ar4 + 100));
      if (puVar3 == (undefined4 *)(unsigned)0x1) {
        puVar3 = (undefined4 *)(unsigned)(vsp = ((unsigned long)(fr0_ - 4)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0xffffffff,0));
      }
    }
  }
  return puVar3;
}

__asm__(".globl _Class_12a25c_m6_06e69c\n.set _Class_12a25c_m6_06e69c, _Class_12a25c_m6_06e69c_def\n");
