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
int s_GRAPHICS_MESSAGE_0c5a08_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_MESSAGE_0c5a08";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 0; for (int i_ = 0; i_ < 0; i_++) z_[i_] = 0; }
  undefined1 *ar6_00;
  undefined4 uVar1;
  undefined4 a7;
  int iVar2;
  undefined4 in_fr1 = 0;
  char cVar3;
  
  cVar3 = '\0';
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369d8) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369d4) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369d0) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369cc) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369e8) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369e4) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369e0) = 0xff000000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369dc) = 0xff000000;
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c016318(0x8c436938,0x8c43698c,((undefined1 *)(unsigned)0x8c4369cc),4); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c016318(0x8c436958,0x8c4369ac,((undefined1 *)(unsigned)0x8c4369dc),4); });
  if (cVar3 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4369ec) = 0;
    uVar1 = in_fr1;
  }
  else {
    uVar1 = 0x43f00000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4369ec) = in_fr1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369f0) = 0x43f00000;
  if (cVar3 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c4369f8) = 0;
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a00) = uVar1;
  }
  else {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a00) = 0x44200000;
    (*(undefined4 *)(unsigned)(unsigned)0x8c4369f8) = uVar1;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369fc) = 0x44200000;
  if (cVar3 == '\0') {
    (*(undefined4 *)(unsigned)(unsigned)0x8c436a00) = 0;
  }
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a08) = 0x43f00000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a04) = 0x44200000;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a18) = 0xffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a14) = 0xffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a10) = 0xffffff;
  (*(undefined4 *)(unsigned)(unsigned)0x8c436a0c) = 0xffffff;
  uVar1 = 4;
  ar6_00 = ((undefined1 *)(unsigned)0x8c436a0c);
  (*(undefined4 *)(unsigned)(unsigned)0x8c4369f4) = (*(undefined4 *)(unsigned)(unsigned)0x8c4369f8);
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c016318(0x8c436978,((undefined1 *)(unsigned)0x8c4369ec),((undefined1 *)(unsigned)0x8c436a0c),4); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015198(0x8c436938,0x20,ar6_00,uVar1); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015198(0x8c436958,0x20,ar6_00,uVar1); });
  ({ unsigned long ri0_ = (unsigned long)(ar5); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 0)); FUN_8c015198(0x8c436978,0x60,ar6_00,uVar1); });
  for (iVar2 = 0; iVar2 < 4; iVar2 = iVar2 + 1) {
    *(undefined4 *)(unsigned)(iVar2 * 0xc + ar4 + 0x2d3c0) = 0;
  }
  a7 = 4;
  uVar1 = 0x8c4312a8;
  (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c239170(ar4 + 0x2d3ec,ar4 + 0x2d3bc,0x8c4312a8,4));
  iVar2 = ar4 + 0x2d3ec;
  (vsp = ((unsigned long)(fr0_ - 0)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x2d3f4) + 8))))((int *)(unsigned)(ar4 + 0x2d3f4),iVar2,uVar1,a7));
  uVar1 = (vsp = ((unsigned long)(fr0_ - 0)), get_field_4_0253e4(ar4 + 0x2d3f4,iVar2,uVar1,a7));
  iVar2 = (vsp = ((unsigned long)(fr0_ - 0)), FUN_8c02100c(ar5,((undefined1 *)(unsigned)0x8c13d014),((undefined1 *)(unsigned)0x8c13d01d),uVar1));
  if (iVar2 == -1) {
    iVar2 = report_error_message
                      (((undefined1 *)(unsigned)0x8c13d02e),((undefined1 *)(unsigned)0x8c13d054),0,2);
  }
  return iVar2;
}

__asm__(".globl _s_GRAPHICS_MESSAGE_0c5a08\n.set _s_GRAPHICS_MESSAGE_0c5a08, _s_GRAPHICS_MESSAGE_0c5a08_def\n");
