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
