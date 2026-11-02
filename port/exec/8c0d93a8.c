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
undefined4 s_GRAPHICS_ENV_0d93b0_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_GRAPHICS_ENV_0d93b0";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 80; for (int i_ = 0; i_ < 80; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 ar7_00;
  char *ar5_00;
  char *pcVar2;
  undefined4 *puVar3;
  int **ar7_01;
  uint uVar4;
  
  ((undefined4 *)(fr0_ - 0x18))[0] = 0;
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((int *)(unsigned)0x0));
  (*(undefined4 *)(fr0_ - 0x20)) = 0;
  puVar3 = ((undefined4 *)(fr0_ - 0x18));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c0209fc(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),puVar3));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fc81),0,2));
  }
  else {
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x50))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015ad4(ar4 + 0x28,((undefined4 *)(fr0_ - 0x18))[0],pcVar2,puVar3); });
  }
  ar7_01 = ((int * *)(fr0_ - 0x1c));
  pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020af4(ar5,((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13f8cb),ar7_01));
  if (iVar1 == 0) {
    ar7_01 = (int **)(unsigned)0x2;
    pcVar2 = (char *)(unsigned)0x0;
    ar5_00 = ((undefined1 *)(unsigned)0x8c13fcac);
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fc74),((undefined1 *)(unsigned)0x8c13fcac),0,2));
  }
  else {
    ar5_00 = (char *)(unsigned)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
    (vsp = ((unsigned long)(fr0_ - 80)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x20) + 8))))((int *)(unsigned)(ar4 + 0x20),((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c)),pcVar2,ar7_01));
  }
  (*(unsigned *)(fr0_ - 0x1c) = (unsigned)(unsigned long)((int *)(unsigned)(vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01))));
  for (uVar4 = 0; uVar4 < (uint)((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c))[1]; uVar4 = uVar4 + 1) {
    iVar1 = uVar4 * 0xc + *((int *)(unsigned long)*(unsigned *)(fr0_ - 0x1c));
    *(uint *)(unsigned)(iVar1 + 4) = *(uint *)(unsigned)(iVar1 + 4) | 0x80000000;
  }
  ar7_00 = (vsp = ((unsigned long)(fr0_ - 80)), get_field_4_0253e4(ar4 + 0x20,ar5_00,pcVar2,ar7_01));
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ef0(ar5,((undefined1 *)(unsigned)0x8c13fcd7),((undefined1 *)(unsigned)0x8c13f8cb),ar7_00));
  if (iVar1 == 0) {
    report_error_message
              (((undefined1 *)(unsigned)0x8c13fcdc),((undefined1 *)(unsigned)0x8c13fcfa),0,2);
  }
  iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020ddc(ar5,((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13f8cb),ar4));
  if (iVar1 == 0) {
    (vsp = ((unsigned long)(fr0_ - 80)), report_error_message(((undefined1 *)(unsigned)0x8c13fd11),((undefined1 *)(unsigned)0x8c13fd20),0,2));
  }
  for (uVar4 = 0; uVar4 < 7; uVar4 = uVar4 + 1) {
    puVar3 = &(*(undefined4 *)(fr0_ - 0x20));
    pcVar2 = ((undefined1 *)(unsigned)0x8c13f8cb);
    iVar1 = (vsp = ((unsigned long)(fr0_ - 80)), FUN_8c020bec(ar5,(&(*(undefined4 *)(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13f8cb),puVar3))
    ;
    if (iVar1 == 0) {
      report_error_message
                ((&(*(undefined4 *)(unsigned)(unsigned)0x8c13f394))[uVar4],((undefined1 *)(unsigned)0x8c13fd54),0,2);
    }
    else {
      ({ unsigned long ri0_ = (unsigned long)(uVar4); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 80)); FUN_8c015bb0(ar4 + uVar4 * 4 + 0x2c,(*(undefined4 *)(fr0_ - 0x20)),pcVar2,puVar3); });
    }
  }
  return 7;
}

__asm__(".globl _s_GRAPHICS_ENV_0d93b0\n.set _s_GRAPHICS_ENV_0d93b0, _s_GRAPHICS_ENV_0d93b0_def\n");
