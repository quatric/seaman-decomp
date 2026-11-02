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
undefined4 FUN_8c0e7a78_def(int ar4,undefined4 ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c0e7a78";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 180; for (int i_ = 0; i_ < 180; i_++) z_[i_] = 0; }
  int iVar1;
  int ar4_00;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int ain0;
  
  (vsp = ((unsigned long)(fr0_ - 180)), Vec3_set_zero(((undefined1 *)(fr0_ - 0x30)),ar5,ar6,ar7));
  (*(undefined4 *)(fr0_ - 0x50)) = (*(undefined4 *)(unsigned)(unsigned)0x8c13f764);
  (*(undefined4 *)(fr0_ - 0x4c)) = (*(undefined1 *)(unsigned)0x8c13f768);
  (*(undefined4 *)(fr0_ - 0x48)) = (*(undefined1 *)(unsigned)0x8c13f76c);
  (*(undefined4 *)(fr0_ - 0x44)) = (*(undefined1 *)(unsigned)0x8c13f770);
  (*(undefined4 *)(fr0_ - 0x40)) = (*(undefined1 *)(unsigned)0x8c13f774);
  (*(undefined4 *)(fr0_ - 0x3c)) = (*(undefined1 *)(unsigned)0x8c13f778);
  (*(undefined4 *)(fr0_ - 0x38)) = (*(undefined1 *)(unsigned)0x8c13f77c);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c13f780);
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0162f8(((undefined1 *)(fr0_ - 0x74)),ar5,ar6,ar7));
  iVar1 = ar4 + 0x228;
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0194c0(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c219038(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c21907e(iVar1,ar5,ar6,ar7));
  (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(ar4 + 0x414) + 0x14))))((int *)(unsigned)(ar4 + 0x414),ar5,ar6,ar7));
  if (*(int *)(unsigned)(ar4 + 0x410) == 0) {
    (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  else {
    if ((*(short *)(unsigned)(ar4 + 0x224) != -1) && (*(short *)(unsigned)(ar4 + 0x226) != -1)) {
      piVar4 = (int *)(unsigned)(ar4 + *(short *)(unsigned)(ar4 + 0x226) * 0x80 + *(short *)(unsigned)(ar4 + 0x224) * 0x20 + 0xa4)
      ;
      uVar2 = 0;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c256328(0,ar5,ar6,ar7); });
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019058(uVar2,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c016524(ar4 + 0x444,ar5,ar6,ar7));
      (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c256210(1,ar5,ar6,ar7));
      if (*piVar4 != 0) {
        ar7 = 4;
        ar6 = 0x8c437c48;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c016318(((undefined1 *)(fr0_ - 0x74)),&(*(undefined4 *)(fr0_ - 0x50)),0x8c437c48,4); });
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c016324(((undefined1 *)(fr0_ - 0x74)),&(*(undefined2 *)(fr0_ - 0x60)),ar6,ar7));
        uVar2 = 0x80000060;
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0xb0))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c015198(((undefined1 *)(fr0_ - 0x74)),0x80000060,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c01538c(ar4 + 0x488,uVar2,ar6,ar7));
        ar5 = 1;
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c014a94(ar4 + 0x488,1,ar6,ar7));
        iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), get_field_24_05c284(*piVar4,ar5,ar6,ar7));
        if (iVar1 == 0) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x1f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x1f;
        }
        else if (iVar1 == 10) {
          iVar1 = (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x114))))(*piVar4,ar5,ar6,ar7));
          if (iVar1 == 0x11) {
            (*(undefined2 *)(fr0_ - 0x60)) = 0;
            (*(undefined2 *)(fr0_ - 0x5e)) = 0x3f;
            (*(undefined2 *)(fr0_ - 0x5c)) = 0;
            (*(undefined2 *)(fr0_ - 0x5a)) = 0x20;
            (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x56)) = 0x20;
            (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x52)) = 0x3f;
          }
          else {
            (*(undefined2 *)(fr0_ - 0x60)) = 0;
            (*(undefined2 *)(fr0_ - 0x5e)) = 0x9f;
            (*(undefined2 *)(fr0_ - 0x5c)) = 0;
            (*(undefined2 *)(fr0_ - 0x5a)) = 0x80;
            (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x56)) = 0x80;
            (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
            (*(undefined2 *)(fr0_ - 0x52)) = 0x9f;
          }
        }
        else if (iVar1 == 0xe) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x7f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0x60;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0x60;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x7f;
        }
        else if (iVar1 == 0xf) {
          (*(undefined2 *)(fr0_ - 0x60)) = 0;
          (*(undefined2 *)(fr0_ - 0x5e)) = 0x5f;
          (*(undefined2 *)(fr0_ - 0x5c)) = 0;
          (*(undefined2 *)(fr0_ - 0x5a)) = 0x40;
          (*(undefined2 *)(fr0_ - 0x58)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x56)) = 0x40;
          (*(undefined2 *)(fr0_ - 0x54)) = 0xff;
          (*(undefined2 *)(fr0_ - 0x52)) = 0x5f;
        }
        (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c01636c(((undefined1 *)(fr0_ - 0x74)),ar5,ar6,ar7));
      }
    }
    for (iVar1 = 0; iVar1 < 3; iVar1 = iVar1 + 1) {
      for (iVar3 = 0; iVar3 < 4; iVar3 = iVar3 + 1) {
        if (*(int *)(unsigned)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4) != 0) {
          piVar4 = (int *)(unsigned)(ar4 + iVar1 * 0x80 + iVar3 * 0x20 + 0xa4);
          ain0 = iVar3;
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x124))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x128))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 300))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), vec3_copy_8c023d8c(((undefined1 *)(fr0_ - 0x30)),((undefined1 *)(fr0_ - 0x80)),ar6,ar7));
          ar5 = 0xffffffff;
          (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
          ar4_00 = *piVar4;
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0f4b44(ar4_00,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c219070(ar4_00,ar5,ar6,ar7));
          uVar2 = 0;
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 180)); FUN_8c256328(0,ar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019058(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019128(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c0190f0(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019160(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c019198(uVar2,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)(*piVar4 + 8) + 0x3c))))(*piVar4,ar5,ar6,ar7));
          (vsp = ((unsigned long)(fr0_ - 180)), FUN_8c256210(1,ar5,ar6,ar7));
        }
      }
    }
    (vsp = ((unsigned long)(fr0_ - 180)), free_if_nonnull_wrap_0151a0(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6,ar7));
    (vsp = ((unsigned long)(fr0_ - 180)), object_dtor_delete(((undefined1 *)(fr0_ - 0x30)),0xffffffff,ar6,ar7));
  }
  return 1;
}

__asm__(".globl _FUN_8c0e7a78\n.set _FUN_8c0e7a78, _FUN_8c0e7a78_def\n");
