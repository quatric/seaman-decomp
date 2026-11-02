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
undefined4 s_STATUS_SNORE_10485e_def(int ar4,undefined4 ar5,int *ar6,char *ar7)

{
  ring[rp++ & 255] = "s_STATUS_SNORE_10485e";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 128; for (int i_ = 0; i_ < 128; i_++) z_[i_] = 0; }
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int a5;
  undefined4 ar5_00;
  int *piVar4;
  code *pcVar5;
  char *pcVar6;
  char cVar7;
  char cVar8;
  undefined4 ain0;
  
  cVar8 = '\0';
  cVar7 = '\0';
  piVar4 = ar6;
  if (*(int *)(unsigned)(ar4 + 0x38) == 2) {
    *(undefined4 *)(unsigned)(ar4 + 0xc) = 0;
    *(undefined4 *)(unsigned)(ar4 + 0x40) =
         *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c105094(ar4,ar5,ar6,ar7));
    uVar3 = 1;
    ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,1,piVar4,ar7); });
  }
  else {
    uVar3 = *(undefined4 *)(unsigned)(((undefined1 *)(unsigned)0x8c1eed94) + *(int *)(unsigned)(ar4 + 0xc) * 4 + (int)ar7 * 0xc);
    *(undefined4 *)(unsigned)(ar4 + 0x40) = uVar3;
  }
  iVar2 = *(int *)(unsigned)(ar4 + 0x40);
  if ((iVar2 < 0x22) && (-1 < iVar2)) {
                    
    switch(iVar2) {
    case 0:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      break;
    case 1:
      uVar3 = 3;
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
      (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02fdd8(ar4,ar5,piVar4,ar7));
      break;
    case 2:
      a5 = *(int *)(unsigned)(*ar6 + 8);
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((a5 + 0xb4))))(*ar6,a5,piVar4,ar7));
      if (iVar2 == 1) {
        iVar2 = *ar6;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c027954(iVar2,a5,piVar4,ar7));
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c4e2c(iVar2,a5,piVar4,((void *)0x8c0c4e2c)));
      }
      break;
    case 4:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),1,piVar4,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
      }
      break;
    case 6:
      pcVar5 = ((void *)0x8c02602c);
      uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02602c(ar6[6],uVar3,piVar4,((void *)0x8c02602c)));
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_01031c(uVar1 & 0xffff,0x25,piVar4,pcVar5));
      if (iVar2 == 0xe) {
        pcVar6 = "STATUS_SNORE";
        uVar3 = 0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x11,0,"STATUS_SNORE"));
        ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,uVar3,pcVar6); });
      }
      break;
    case 7:
      ({ unsigned long ri0_ = (unsigned long)((*(undefined4 *)(fr0_ - 0x7c))); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02f404(ar4,3,piVar4,ar7); });
      break;
    case 10:
    case 0x14:
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x28)),ar6[5] + 0x10,piVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_assign_wrap_05f640(ar4,((undefined1 *)(fr0_ - 0x28)),piVar4,ar7));
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,piVar4,ar7));
      if (cVar8 == '\0') {
        *(undefined4 *)(unsigned)(ar4 + 0x78) = 0x44af0000;
      }
      else {
        *(undefined8 *)(unsigned)(ar4 + 0x78) = 0x6513e10344af0000;
      }
      break;
    case 0xc:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        if (*(int *)(unsigned)(ar4 + 0x88) == 1) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05feec(*(undefined4 *)(unsigned)(ar4 + 0x6c),1,piVar4,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x88) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,piVar4,ar7));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c05febc(ar6[3],0,piVar4,ar7));
      }
      break;
    case 0x11:
      uVar1 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02602c(ar6[6],uVar3,piVar4,ar7));
      uVar3 = 10;
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), libgcc_divide_helper_01031c(uVar1 & 0xffff,10,piVar4,ar7));
      if (((iVar2 == 5) && (*(char *)(unsigned)(ar4 + 0x855) == '\0')) &&
         (iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), get_field_140_025f70(ar6[1],uVar3,piVar4,ar7)), iVar2 == 0)) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0fa5bc(0x8c35468c,(int)*(char *)(unsigned)(ar4 + 0x855),piVar4,ar7));
        iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02fcc4(ar4,ar6,piVar4,ar7));
        if (iVar2 == 0) {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_UNCONSIDERED"));
        }
        else {
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,10,0,"STATUS_COUPLING"));
        }
        *(undefined1 *)(unsigned)(ar4 + 0x855) = 1;
      }
      break;
    case 0x18:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c104f44(ar6[3],uVar3,piVar4,ar7));
        ar5_00 = 0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0637c0(ar6[3],0,piVar4,ar7));
        *(char *)(unsigned)(ar4 + 0x87c) = *(char *)(unsigned)(ar4 + 0x87c) + '\x01';
        *(undefined4 *)(unsigned)(ar4 + 0x878) = 0xb4;
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
        ain0 = CONCAT13((char)((uint)(*(undefined4 *)(fr0_ - 0x7c)) >> 0x18),
                        CONCAT12((char)uVar3,(short)(*(undefined4 *)(fr0_ - 0x7c))));
        if ((char)uVar3 < '\x04') {
          uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
          ain0 = CONCAT22((short)((uint)ain0 >> 0x10),CONCAT11((char)uVar3,(char)ain0));
          if ((char)uVar3 == '\x01') {
            ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02cb84(ar6[1] + 0xa8,0,piVar4,ar7); });
          }
          piVar4 = (int *)(unsigned)0x1b;
          ar5_00 = 0x17;
          iVar2 = ar6[6];
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0b9ed4(iVar2,0x17,0x1b,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0c4e2c(iVar2,ar5_00,piVar4,ar7));
        }
        uVar3 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0e98f0(ar6[3],ar5_00,piVar4,ar7));
        if ((char)uVar3 == '\x04') {
          *(undefined1 *)(unsigned)(ar4 + 0x98) = 7;
          ({ unsigned long ri0_ = (unsigned long)(CONCAT31((int3)((uint)ain0 >> 8),(char)uVar3)); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 128)); FUN_8c02cb84(ar6[1] + 0xa8,1,piVar4,ar7); });
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c064ba0(ar6[6],2,piVar4,ar7));
          (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0b9ed4(ar6[6],0x18,0x1b,ar7));
        }
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x1f,0,"EVENT_ROCK_PUSH"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1b:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"REACTION_GURUGURU"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      break;
    case 0x1d:
      if (*(int *)(unsigned)(ar4 + 0x8c) == 1) {
        ar7 = "EVENT_LANDING";
        piVar4 = (int *)(unsigned)0x0;
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x2a,0,"EVENT_LANDING"));
        *(undefined4 *)(unsigned)(ar4 + 0x8c) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x38))); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c02f670(*ar6,*ar6,piVar4,ar7); });
      if (cVar8 == '\0') {
        pcVar5 = (code *)0x432a0000;
      }
      else {
        (*(float *)(fr0_ - 0x34)) = 170.0;
        pcVar5 = ((void *)0x8c022cb0);
      }
      (vsp = ((unsigned long)(fr0_ - 128)), Vec3_dtor(((undefined1 *)(fr0_ - 0x38)),0xffffffff,piVar4,ar7));
      if (cVar7 != '\0' || (float)(uint)pcVar5 <= (*(float *)(fr0_ - 0x34))) {
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c0306d4(ar4 + 0x9c,0x14,0,"STATUS_GROAN"));
      }
      break;
    case 0x1f:
      iVar2 = (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c02f414(ar4,uVar3,piVar4,ar7));
      if (iVar2 == 1) {
        pcVar6 = "REACTION_INSPIDER";
        uVar3 = 0;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(unsigned)0x8c1eeec3)); *(unsigned *)((((unsigned long)(fr0_ - 128)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 128)) - 8); FUN_8c030568(ar4 + 0x9c,0x26,0,"REACTION_INSPIDER"); });
        (vsp = ((unsigned long)(fr0_ - 128)), FUN_8c109b98(ar4,ar5,uVar3,pcVar6));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x38) = 2;
        if (*(int *)(unsigned)(ar4 + 0x6c) != 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x6c) = 0;
        }
      }
    }
  }
  return 1;
}

__asm__(".globl _s_STATUS_SNORE_10485e\n.set _s_STATUS_SNORE_10485e, _s_STATUS_SNORE_10485e_def\n");
