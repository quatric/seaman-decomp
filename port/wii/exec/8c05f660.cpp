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
undefined4 s_STATUS_SNORE_05f668_def(int ar4,undefined4 ar5,le<int>* ar6,int ar7)

{
  TRACE_ENTER("s_STATUS_SNORE_05f668");
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 112; for (int i_ = 0; i_ < 112; i_++) z_[i_] = 0; }
  uint uVar1;
  undefined *ar5_00;
  int a5;
  undefined4 uVar2;
  le<int>* piVar3;
  int iVar4;
  char *ar7_00;
  char cVar5;
  
  cVar5 = '\0';
  piVar3 = ar6;
  if (*(le<int>* )(unsigned)(ar4 + 0x38) == 2) {
    *(le<undefined4>* )(unsigned)(ar4 + 0xc) = 0;
    iVar4 = 0x40;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) =
         *(le<undefined4>* )(unsigned)(((undefined1 *)(unsigned)0x8c13686c) + *(le<int>* )(unsigned)(ar4 + 0xc) * 4 + ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c060044(ar4,ar5,ar6,0x40));
    ar5_00 = (undefined *)(unsigned)0x1;
    ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,1,piVar3,iVar4); });
    ar7 = iVar4;
  }
  else {
    ar5_00 = ((undefined1 *)(unsigned)0x8c13686c) + ar7 * 0xc;
    *(le<undefined4>* )(unsigned)(ar4 + 0x40) = *(le<undefined4>* )(unsigned)(ar5_00 + *(le<int>* )(unsigned)(ar4 + 0xc) * 4);
  }
  iVar4 = *(le<int>* )(unsigned)(ar4 + 0x40);
  if (iVar4 < 0x28) {
    if (-1 < iVar4) {
                    
      switch(iVar4) {
      case 0:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        break;
      case 1:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,((void *)0x8c02f414),piVar3,ar7));
        if (iVar4 == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,piVar3,ar7));
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
          *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
        }
        (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fdd8(ar4,ar5,piVar3,ar7));
        break;
      case 2:
        a5 = *(le<int>* )(unsigned)(*ar6 + 8);
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((a5 + 0xb4))))(*ar6,a5,piVar3,ar7));
        if (iVar4 == 1) {
          iVar4 = *ar6;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c027954(iVar4,a5,piVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0c4e2c(iVar4,a5,piVar3,ar7));
        }
        break;
      case 3:
        uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7));
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,((void *)0x8c01031c),ar7));
        if (iVar4 == 0xe) {
          ar7_00 = ((undefined1 *)(unsigned)0x8c136a31);
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x11,0,((undefined1 *)(unsigned)0x8c136a31)));
          ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,((void *)0x8c02f404),ar7_00); });
        }
        break;
      case 4:
        ({ unsigned long ri0_ = (unsigned long)((*(le<undefined4>* )(fr0_ - 0x6c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 112)); FUN_8c02f404(ar4,3,piVar3,ar7); });
        break;
      case 6:
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,ar5_00,piVar3,ar7));
        if (iVar4 == 1) {
          if (*(le<int>* )(unsigned)(ar4 + 0x88) == 1) {
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_6c_02f46c(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),ar5_00,piVar3,ar7));
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),uVar2,piVar3,ar7));
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05fec4(ar6[1],uVar2,piVar3,ar7));
            if (*(le<int>* )(unsigned)(ar4 + 0x6c) != 0) {
              (vsp = ((unsigned long)(fr0_ - 112)), (*(code *)xlat((unsigned long)*(le<unsigned>* )(unsigned)((*(le<int>* )(unsigned)(*(le<int>* )(unsigned)(ar4 + 0x6c) + 8) + 0x78))))
                        (*(le<int>* )(unsigned)(ar4 + 0x6c),uVar2,piVar3,ar7));
              ar7 = 0;
              *(le<undefined4>* )(unsigned)(ar4 + 0x6c) = 0;
            }
          }
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,((void *)0x8c066628),ar7));
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
        }
        break;
      case 9:
        uVar1 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02602c(ar6[6],ar5_00,piVar3,ar7));
        uVar2 = 10;
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar3,ar7));
        if (((iVar4 == 5) && (*(char *)(unsigned)(ar4 + 0x870) == '\0')) &&
           (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), get_field_140_025f70(ar6[1],uVar2,piVar3,ar7)), iVar4 == 0)) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(unsigned)(ar4 + 0x870),piVar3,ar7));
          iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fcc4(ar4,ar6,piVar3,ar7));
          if (iVar4 == 0) {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,10,0,((undefined1 *)(unsigned)0x8c136a60)));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,10,0,((undefined1 *)(unsigned)0x8c136a50)));
          }
          *(undefined1 *)(unsigned)(ar4 + 0x870) = 1;
        }
        break;
      case 0xc:
      case 0x12:
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x24)),ar6[5] + 0x10,piVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x24)),piVar3,ar7));
        (vsp = ((unsigned long)(fr0_ - 112)), Vec3_dtor(((undefined1 *)(fr0_ - 0x24)),0xffffffff,piVar3,ar7));
        if (cVar5 == '\0') {
          *(le<undefined4>* )(unsigned)(ar4 + 0x78) = 0x44af0000;
        }
        else {
          *(le<undefined8>* )(unsigned)(ar4 + 0x78) = 0x64e3e50344af0000;
        }
        break;
      case 0xf:
        iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02f414(ar4,ar5_00,piVar3,ar7));
        if (iVar4 == 1) {
          if (*(le<int>* )(unsigned)(ar4 + 0x88) == 1) {
            (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05feec(*(le<undefined4>* )(unsigned)(ar4 + 0x6c),1,piVar3,ar7));
            *(le<undefined4>* )(unsigned)(ar4 + 0x88) = 0;
          }
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c066628(ar4,ar5,piVar3,ar7));
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02fdd8(ar4,ar5,piVar3,ar7));
        }
        else {
          *(le<undefined4>* )(unsigned)(ar4 + 0x38) = 2;
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c05febc(ar6[3],0,piVar3,ar7));
        }
        break;
      case 0x10:
        if (((*(le<int>* )(unsigned)(ar4 + 4) != 0xd) &&
            (iVar4 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c518(ar6[1],ar5_00,piVar3,ar7)), iVar4 < 6)) && (-1 < iVar4)) {
                    
          switch(iVar4) {
          case 0:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1],ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,4,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a74)); });
            break;
          case 1:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x18,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,5,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a80)); });
            break;
          case 3:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x48,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x10,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a9c)); })
            ;
            break;
          case 4:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x60,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0xd,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c136a8d)); });
            break;
          case 5:
            uVar2 = (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c02c5ac(ar6[1] + 0x78,ar5_00,piVar3,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1369bf)); *(le<unsigned>* )((((unsigned long)(fr0_ - 112)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 112)) - 8); FUN_8c0303b8(ar4 + 0x9c,0x12,(int)(char)uVar2,((undefined1 *)(unsigned)0x8c1369c1)); });
          }
        }
        break;
      case 0x16:
        if (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,((undefined1 *)(unsigned)0x8c136a3e)));
          *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x22:
        if (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ac1)));
          *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x23:
        if (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136aad)));
          *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x26:
        if (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ae8)));
          *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
        }
        break;
      case 0x27:
        if (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1) {
          (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136ad4)));
          *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
        }
      }
    }
  }
  else if ((iVar4 == 0x34) && (*(le<int>* )(unsigned)(ar4 + 0x8c) == 1)) {
    (vsp = ((unsigned long)(fr0_ - 112)), FUN_8c0306d4(ar4 + 0x9c,0x2c,0,((undefined1 *)(unsigned)0x8c136afb)));
    *(le<undefined4>* )(unsigned)(ar4 + 0x8c) = 0;
  }
  return 1;
}

__asm__(".globl s_STATUS_SNORE_05f668\n.set s_STATUS_SNORE_05f668, s_STATUS_SNORE_05f668_def\n");

}
