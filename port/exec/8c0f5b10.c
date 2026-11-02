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
int s_Failed_to_load_textuer_FOOD_0f5b18_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Failed_to_load_textuer_FOOD_0f5b18";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  int iVar1;
  undefined *ar5_00;
  undefined1 *ar5_01;
  undefined **ar5_02;
  undefined *ar6_00;
  undefined4 ar6_01;
  undefined4 ar7_00;
  uint uVar2;
  float fVar3;
  double dVar4;
  char cVar5;
  char cVar6;
  
  cVar6 = '\0';
  cVar5 = '\0';
  ar7_00 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c1401b4);
  ar5_00 = ((undefined1 *)(unsigned)0x8c140184);
  iVar1 = ar4 + 0x170;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c016464(iVar1,((undefined1 *)(unsigned)0x8c140184),((undefined1 *)(unsigned)0x8c1401b4),4));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), rand(iVar1,ar5_00,ar6_00,ar7_00));
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x47000000,(float)iVar1);
  }
  else {
    dVar4 = 512.0001354217529;
  }
  if (cVar5 == '\0') {
    fVar3 = F32LO(dVar4) / F32HI(dVar4);
  }
  else {
    fVar3 = SUB84(dVar4 / dVar4,0);
  }
  if (cVar6 == '\0') {
    dVar4 = CONCAT44D(0x40800000,fVar3);
  }
  else {
    dVar4 = -1.3757563587465766e-249;
  }
  if (cVar5 == '\0') {
    iVar1 = (int)(F32LO(dVar4) * F32HI(dVar4));
  }
  else {
    iVar1 = (int)(dVar4 * dVar4);
  }
  if ((((iVar1 == 0) || (iVar1 == 1)) || (iVar1 == 2)) || (iVar1 == 3)) {
    ar6_01 = 4;
    ar5_01 = ((undefined1 *)(unsigned)0x8c43b338) + iVar1 * 0x10;
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0164c8(ar4 + 0x170,ar5_01,4,ar7_00));
  }
  else {
    ar6_01 = 4;
    ar5_01 = ((undefined1 *)(unsigned)0x8c43b368);
    (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c0164c8(ar4 + 0x170,((undefined1 *)(unsigned)0x8c43b368),4,ar7_00));
  }
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014790(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014764(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c014a64(ar4 + 0x170,ar5_01,ar6_01,ar7_00));
  ar5_02 = &(*(undefined4 *)(unsigned)(unsigned)0x8c1401d0);
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x1b4) + 8))))((int *)(unsigned)(ar4 + 0x1b4),&(*(undefined4 *)(unsigned)(unsigned)0x8c1401d0),ar6_01,ar7_00));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x1b4,ar5_02,ar6_01,ar7_00));
  for (uVar2 = 0; uVar2 < *(uint *)(unsigned)(iVar1 + 4); uVar2 = uVar2 + 1) {
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c14026d),((undefined1 *)(unsigned)0x8c1401e2) + 2,iVar1));
  if (iVar1 == -1) {
    iVar1 = (vsp = ((unsigned long)(fr0_ - 0)), report_error_message(((undefined1 *)(unsigned)0x8c140272),((undefined1 *)(unsigned)0x8c140291),0,2));
  }
  return iVar1;
}

__asm__(".globl _s_Failed_to_load_textuer_FOOD_0f5b18\n.set _s_Failed_to_load_textuer_FOOD_0f5b18, _s_Failed_to_load_textuer_FOOD_0f5b18_def\n");
