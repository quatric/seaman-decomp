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
int FUN_8c10862c_def(int ar4,undefined4 ar5,int ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c10862c";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 56; for (int i_ = 0; i_ < 56; i_++) z_[i_] = 0; }
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int ar6_00;
  char cVar4;
  
  cVar4 = '\0';
  ar6_00 = ar6;
  iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c518(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6,ar7));
  if ((iVar1 < 6) && (-1 < iVar1)) {
                    
    switch(iVar1) {
    case 0:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 0;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(undefined4 *)(unsigned)(ar6 + 4),ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 1:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 1;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x18,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 2:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 2;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x30,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 3:
      goto switchD_8c108664_caseD_3;
    case 4:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 4;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x60,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
      break;
    case 5:
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 5;
      uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02c5ac(*(int *)(unsigned)(ar6 + 4) + 0x78,ar5,ar6_00,ar7));
      *(int *)(unsigned)(ar4 + 0xfc) = (int)(char)uVar3;
    }
  }
  else {
switchD_8c108664_caseD_3:
    *(undefined4 *)(unsigned)(ar4 + 0x118) = 7;
    *(undefined4 *)(unsigned)(ar4 + 0xfc) = 0;
    if (*(int *)(unsigned)(ar4 + 0x40) == 6) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 9;
    }
    iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_24_05eed0(*(int *)(unsigned)(ar6 + 4) + 0xf8,ar5,ar6_00,ar7));
    if (iVar1 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 0x118) = 8;
    }
  }
  if ((*(int *)(unsigned)(ar4 + 0x40) == 0) || (*(int *)(unsigned)(ar4 + 0x40) == 6)) {
    if ((*(int *)(unsigned)(ar4 + 900) == -1) &&
       ((iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_178_035734(*(undefined4 *)(unsigned)(ar6 + 8),ar5,ar6_00,ar7)), iVar1 == 0 &&
        (iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), get_field_770_05eeb8(ar4 + 0x9c,ar5,ar6_00,ar7)), iVar1 == 0)))) {
      uVar3 = 0;
      iVar1 = (vsp = ((unsigned long)(fr0_ - 56)), s_JUNGLE_0309ca(ar4 + 0x9c,0,ar6_00,ar7));
      if (iVar1 != 0) {
        for (iVar1 = 0; iVar1 < 6; iVar1 = iVar1 + 1) {
          uVar2 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c025f68(iVar1 * 0x18 + *(int *)(unsigned)(ar6 + 4),uVar3,ar6_00,ar7));
          if ((char)uVar2 == '\x01') {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 1;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + iVar1 * 4 + 0x11c) = 0;
          }
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c02d1c8(*(int *)(unsigned)(ar6 + 4) + 0xa8,uVar3,ar6_00,ar7));
        if ((char)uVar3 == '\x01') {
          *(undefined4 *)(unsigned)(ar4 + 0x148) = 1;
        }
        ar6_00 = ar4 + 0x9c;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c0f8320(0x8c35468c,1,ar6_00,ar7));
        *(undefined4 *)(unsigned)(ar4 + 900) = uVar3;
      }
    }
    if ((*(int *)(unsigned)(ar4 + 0x40) == 6) && (*(int *)(unsigned)(ar4 + 900) != -1)) {
      (vsp = ((unsigned long)(fr0_ - 56)), FUN_8c030870(ar4 + 0x9c,1,ar6_00,ar7));
    }
  }
  iVar1 = *(int *)(unsigned)(ar4 + 4);
  if (((iVar1 == 0) && (iVar1 = 0, *(int *)(unsigned)(ar4 + 0x14c) != 0)) &&
     (iVar1 = *(int *)(unsigned)(ar4 + 900), iVar1 != -1)) {
    *(undefined4 *)(unsigned)(ar4 + 4) = 0xd;
    *(undefined4 *)(unsigned)(ar4 + 8) = 0x5f;
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x840) = 0x14;
    (*(undefined1 *)(unsigned)0x8c1eee30) = 0x14;
    *(undefined4 *)(unsigned)(ar4 + 0x844) = 0xb;
    (*(undefined1 *)(unsigned)0x8c1eee34) = 0xb;
    *(undefined4 *)(unsigned)(ar4 + 0x848) = 10;
    (*(undefined1 *)(unsigned)0x8c1eee38) = 10;
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_063818(ar4,((undefined1 *)(fr0_ - 0x24)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,ar6_00,ar7));
    if (cVar4 == '\0') {
      *(undefined4 *)(unsigned)(ar4 + 0x30) = 0x44960000;
    }
    else {
      *(undefined8 *)(unsigned)(ar4 + 0x30) = 0x8c05f64044960000;
    }
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x34)),*(int *)(unsigned)(ar6 + 0x14) + 0x10,ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x34)),ar6_00,ar7));
    (vsp = ((unsigned long)(fr0_ - 56)), Vec3_dtor(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6_00,ar7));
    iVar1 = 0x80;
    *(undefined1 *)(unsigned)(ar4 + 0x80) = 0;
  }
  return iVar1;
}

__asm__(".globl _FUN_8c10862c\n.set _FUN_8c10862c, _FUN_8c10862c_def\n");
