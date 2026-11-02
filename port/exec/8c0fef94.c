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
int s_Shell_0fef9c_def(undefined4 ar4,char *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "s_Shell_0fef9c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 204; for (int i_ = 0; i_ < 204; i_++) z_[i_] = 0; }
  char *a5;
  int a4;
  undefined8 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 extraout_fr1 = 0;
  char cVar4;
  
  cVar4 = '\0';
  puVar2 = (undefined4 *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
  if (((int)ar5 < 0x11) && (-1 < (int)ar5)) {
                    
    switch((uint)ar5) {
    case 0x0:
      (*(int *)(fr0_ - 0x88)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x9d8,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x50)) = (*(int *)(fr0_ - 0x88));
      (*(int *)(fr0_ - 0x18)) = (*(int *)(fr0_ - 0x88));
      if ((*(int *)(fr0_ - 0x88)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MUSHROOMERLINE_09b8e8((*(int *)(fr0_ - 0x88)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x18));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x18)) + 8) + 0x54))))((*(int *)(fr0_ - 0x18)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0x1:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0xfd4,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x8c)) = a4;
      (*(int *)(fr0_ - 0x54)) = a4;
      (*(int *)(fr0_ - 0x1c)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MUSHROOMERLINE_09d9c2(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x1c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x2:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x1718,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x90)) = a4;
      (*(int *)(fr0_ - 0x58)) = a4;
      (*(int *)(fr0_ - 0x20)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_SQUIDLINE_0ac6a4(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x20));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x3:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x10dc,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xac)) = a4;
      (*(int *)(fr0_ - 0x74)) = a4;
      (*(int *)(fr0_ - 0x3c)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_HIGYOLINE_0851fa(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x3c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x4:
      (*(int *)(fr0_ - 0x94)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7e4,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x5c)) = (*(int *)(fr0_ - 0x94));
      (*(int *)(fr0_ - 0x24)) = (*(int *)(fr0_ - 0x94));
      if ((*(int *)(fr0_ - 0x94)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_HIGYOLINE_087ed2((*(int *)(fr0_ - 0x94)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x24));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x24)) + 8) + 0x54))))((*(int *)(fr0_ - 0x24)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0x5:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x1150,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xb0)) = a4;
      (*(int *)(fr0_ - 0x78)) = a4;
      (*(int *)(fr0_ - 0x40)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_FROGMANLINE_036266(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x40));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x6:
      (*(int *)(fr0_ - 0x98)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7e4,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x60)) = (*(int *)(fr0_ - 0x98));
      (*(int *)(fr0_ - 0x28)) = (*(int *)(fr0_ - 0x98));
      if ((*(int *)(fr0_ - 0x98)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_FROGMANLINE_0384fa((*(int *)(fr0_ - 0x98)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x28));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x28)) + 8) + 0x54))))((*(int *)(fr0_ - 0x28)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    default:
      goto switchD_8c0fefc4_caseD_7;
    case 0xa:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x92c,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xb4)) = a4;
      (*(int *)(fr0_ - 0x7c)) = a4;
      (*(int *)(fr0_ - 0x44)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_08a182(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x44));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xb:
      (*(int *)(fr0_ - 0x9c)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7ec,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x64)) = (*(int *)(fr0_ - 0x9c));
      (*(int *)(fr0_ - 0x2c)) = (*(int *)(fr0_ - 0x9c));
      if ((*(int *)(fr0_ - 0x9c)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_099e76((*(int *)(fr0_ - 0x9c)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x2c));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x2c)) + 8) + 0x54))))((*(int *)(fr0_ - 0x2c)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0xc:
      (*(int *)(fr0_ - 0xa0)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x7ec,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x68)) = (*(int *)(fr0_ - 0xa0));
      (*(int *)(fr0_ - 0x30)) = (*(int *)(fr0_ - 0xa0));
      if ((*(int *)(fr0_ - 0xa0)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_MOTHLINE_0a4dea((*(int *)(fr0_ - 0xa0)),0,ar6,ar7));
      }
      a4 = (*(int *)(fr0_ - 0x30));
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)((*(int *)(fr0_ - 0x30)) + 8) + 0x54))))((*(int *)(fr0_ - 0x30)),ar4,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      break;
    case 0xd:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x2790,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xa4)) = a4;
      (*(int *)(fr0_ - 0x6c)) = a4;
      (*(int *)(fr0_ - 0x34)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), s_GRAPHICS_SPIDERLINE_0a4592(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x34));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xe:
      a4 = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x294,ar5,ar6,ar7));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0xa8)) = a4;
      (*(int *)(fr0_ - 0x70)) = a4;
      (*(int *)(fr0_ - 0x38)) = a4;
      if (a4 != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c06740c(a4,0,ar6,ar7));
        a4 = (*(int *)(fr0_ - 0x38));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0xf:
      (*(int *)(fr0_ - 0xbc)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x270,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x4c)) = (*(int *)(fr0_ - 0xbc));
      a4 = (*(int *)(fr0_ - 0x4c));
      piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      (*(int *)(fr0_ - 0x84)) = (*(int *)(fr0_ - 0xbc));
      if ((*(int *)(fr0_ - 0xbc)) != 0) {
        (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c0f58a4((*(int *)(fr0_ - 0xbc)),0,0,ar7));
        a4 = (*(int *)(fr0_ - 0x4c));
        piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
      }
      break;
    case 0x10:
      a5 = ar5;
      (*(int *)(fr0_ - 0xb8)) = (vsp = ((unsigned long)(fr0_ - 204)), FUN_8c014028(0x210,ar5,ar6,ar7));
      (*(int *)(fr0_ - 0x48)) = (*(int *)(fr0_ - 0xb8));
      (*(int *)(fr0_ - 0x80)) = (*(int *)(fr0_ - 0xb8));
      if ((*(int *)(fr0_ - 0xb8)) != 0) {
        if (cVar4 == '\0') {
          puVar1 = (undefined8 *)(unsigned)((int)&(*(undefined8 *)(fr0_ - 0xcc)) + 4);
          (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(0x3f800000,(undefined4)(*(undefined8 *)(fr0_ - 0xcc)));
        }
        else {
          puVar1 = &(*(undefined8 *)(fr0_ - 0xcc));
          (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(0x3f800000,extraout_fr1);
        }
        ar6 = 0x10;
        a5 = ((undefined1 *)(unsigned)0x8c14212e);
        ({ unsigned long t0_ = (unsigned long)(
                     *(undefined4 *)(unsigned)puVar1); unsigned long t1_ = (unsigned long)(*(undefined4 *)(unsigned)((int)puVar1 + 4)); *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 0) = (unsigned)t0_; *(unsigned *)((((unsigned long)(fr0_ - 204)) - 8) + 4) = (unsigned)t1_; vsp = (((unsigned long)(fr0_ - 204)) - 8); FUN_8c0f54ec(*(undefined4 *)(unsigned)((int)puVar1 + 0x80),((undefined1 *)(unsigned)0x8c14212e),0x10,ar7); });
        puVar2 = (undefined4 *)(unsigned)((int)puVar1 + 4);
      }
      a4 = *(int *)(unsigned)((int)puVar2 + 0x7c);
      (vsp = ((unsigned long)(fr0_ - 204)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(a4 + 8) + 0xf8))))(a4,a5,ar6,ar7));
      piVar3 = puVar2;
    }
  }
  else {
switchD_8c0fefc4_caseD_7:
    (*(undefined8 *)(fr0_ - 0xcc)) = CONCAT44(5,(undefined4)(*(undefined8 *)(fr0_ - 0xcc)));
    (vsp = ((unsigned long)(fr0_ - 204)), report_error_message(((undefined1 *)(unsigned)0x8c142134),((undefined1 *)(unsigned)0x8c142144),1,2));
    a4 = 0;
    piVar3 = (int *)(unsigned)((undefined1 *)(fr0_ - 0xc4));
  }
  if (a4 == 0) {
    piVar3[-1] = 5;
    (vsp = ((unsigned long)(fr0_ - 204)), report_error_message(((undefined1 *)(unsigned)0x8c14215e),((undefined1 *)(unsigned)0x8c14216f),1,2));
  }
  *piVar3 = (int)ar5;
  piVar3[1] = *piVar3 * 4 + -0x73bbecb8;
  *(int *)(unsigned)piVar3[1] = *(int *)(unsigned)piVar3[1] + 1;
  return a4;
}

__asm__(".globl _s_Shell_0fef9c\n.set _s_Shell_0fef9c, _s_Shell_0fef9c_def\n");
