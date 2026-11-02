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
undefined4 FUN_8c053f24_def(int ar4,int *ar5,undefined4 ar6,undefined4 ar7)

{
  ring[rp++ & 255] = "FUN_8c053f24";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 396; for (int i_ = 0; i_ < 396; i_++) z_[i_] = 0; }
  ulonglong uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *ar5_00;
  undefined4 uVar6;
  code *ar5_01;
  code *ar6_00;
  undefined4 *ar7_00;
  undefined4 uVar7;
  float fVar8;
  undefined8 in_dr0 = 0;
  undefined8 uVar9;
  double dVar10;
  float in_fr15 = 0;
  undefined4 in_fr14 = 0;
  bool bVar11;
  char cVar12;
  char cVar13;
  undefined4 ain0;
  
  cVar13 = '\0';
  cVar12 = '\0';
  uVar7 = 1;
  ar7_00 = ((undefined4 *)(fr0_ - 0x44));
  ar6_00 = (code *)((undefined4 *)(unsigned)0x8c1365b0);
  ((undefined4 *)(fr0_ - 0x44))[0] = (*(undefined4 *)(unsigned)(unsigned)0x8c1365b0);
  ((undefined4 *)(fr0_ - 0x44))[1] = (*(undefined1 *)(unsigned)0x8c1365b4);
  ((undefined4 *)(fr0_ - 0x44))[2] = (*(undefined1 *)(unsigned)0x8c1365b8);
  ((undefined4 *)(fr0_ - 0x44))[3] = (*(undefined1 *)(unsigned)0x8c1365bc);
  (*(undefined4 *)(fr0_ - 0x34)) = (*(undefined1 *)(unsigned)0x8c1365c0);
  (*(undefined4 *)(fr0_ - 0x30)) = (*(undefined1 *)(unsigned)0x8c1365c4);
  (*(undefined4 *)(fr0_ - 0x2c)) = (*(undefined1 *)(unsigned)0x8c1365c8);
  (*(undefined4 *)(fr0_ - 0x28)) = (*(undefined1 *)(unsigned)0x8c1365cc);
  (*(undefined4 *)(fr0_ - 0x24)) = (*(undefined1 *)(unsigned)0x8c1365d0);
  uVar6 = (*(undefined1 *)(unsigned)0x8c1365cc);
  (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x54)),(*(undefined1 *)(unsigned)0x8c1365cc),((undefined4 *)(unsigned)0x8c1365b0),ar7_00));
  (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x90,uVar6,ar6_00,ar7_00));
  uVar2 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c053724(ar5,uVar6,ar6_00,ar7_00));
  ain0 = CONCAT31((int3)((uint)(*(undefined4 *)(fr0_ - 0x188)) >> 8),(char)uVar2);
  if ((char)uVar2 == '\0') {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar6,ar6_00,ar7_00));
    if (iVar5 != 0) {
      uVar6 = (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x34))))(ar5,uVar6,ar6_00,ar7_00));
      uVar2 = (undefined4)((ulonglong)in_dr0 >> 0x20);
      *(undefined4 *)(unsigned)(ar4 + 0x348) = uVar6;
      ar5_00 = ((undefined1 *)(unsigned)0x8c125d48);
      (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(unsigned)0x8c125d48),ar6_00,ar7_00));
      if (*(int *)(unsigned)(ar4 + 0x348) == 3) {
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x64)),((void *)0x8c022ce8),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x64)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x64)),0xffffffff,ar6_00,ar7_00));
      }
      else if (*(int *)(unsigned)(ar4 + 0x348) == 4) {
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x74)),ar5_00,ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x74)),ar6_00,ar7_00));
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x74)),0xffffffff,ar6_00,ar7_00));
      }
      else {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x84))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6_00,ar7_00); });
      (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x84)),((undefined1 *)(fr0_ - 0x54)),ar6_00,ar7_00));
      if (cVar13 == '\0') {
        in_dr0 = CONCAT44(0x41200000,uVar2);
      }
      else {
        in_dr0 = 0x8841200000;
      }
      bVar11 = cVar12 == '\0';
      fVar8 = (float)in_dr0;
      uVar1 = (ulonglong)in_dr0 >> 0x20;
      (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x84)),0xffffffff,ar6_00,ar7_00));
      if (bVar11 && fVar8 < (float)uVar1) {
        *(undefined4 *)(unsigned)(ar4 + 0x348) = 0;
      }
      uVar6 = 0;
      (vsp = ((unsigned long)(fr0_ - 396)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*ar5 + 0x38))))(ar5,0,ar6_00,ar7_00));
      if ((*(int *)(unsigned)(ar4 + 0x348) != *(int *)(unsigned)(ar4 + 0x344)) && (*(int *)(unsigned)(ar4 + 0x344) == 0)) {
        *(undefined4 *)(unsigned)(ar4 + 0x344) = *(undefined4 *)(unsigned)(ar4 + 0x348);
        uVar6 = 0;
        *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
        *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      }
    }
    if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
    }
    iVar5 = *(int *)(unsigned)(ar4 + 0x344);
    if (iVar5 == 0) {
      iVar5 = *(int *)(unsigned)(ar4 + 300);
      if ((iVar5 < 5) && (-1 < iVar5)) {
                    
        switch(iVar5) {
        case 0:
          (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        case 1:
          if (*(int *)(unsigned)(ar4 + 0x324) == 1) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          ar6_00 = (code *)0x64;
          iVar5 = 0;
          iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,0,100,ar7_00));
          if (iVar4 < 0x33) {
            iVar4 = 0;
          }
          else {
            ar6_00 = (code *)0x9;
            uVar6 = 1;
            iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,1,9,ar7_00));
            uVar6 = (vsp = ((unsigned long)(fr0_ - 396)), get_field_94_02aaa4(ar5,uVar6,ar6_00,ar7_00));
            iVar5 = 5;
            iVar3 = (vsp = ((unsigned long)(fr0_ - 396)), libgcc_divide_helper_0101e4(uVar6,5,ar6_00,ar7_00));
            if (iVar3 == 1) {
              iVar4 = 7;
            }
            else if (iVar3 == 4) {
              iVar4 = 7;
            }
          }
          if (*(int *)(unsigned)(ar4 + 0x128) == 3) {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022d04(ar4 + 0x248,iVar5,ar6_00,ar7_00));
          }
          iVar3 = *(int *)(unsigned)(ar4 + 0x27c);
          if (iVar3 == 0) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x38;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          else if (iVar3 == 3) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x26;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          else if (iVar3 == 4) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            iVar5 = iVar4 + 0x2f;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,iVar5,0xffffffff,0));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 3;
          *(undefined4 *)(unsigned)(ar4 + 0x280) = ((undefined4 *)(fr0_ - 0x44))[iVar4];
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
          if (cVar13 == '\0') {
            *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)in_dr0 >> 0x20);
          }
          else {
            *(undefined8 *)(unsigned)(ar4 + 0x248) = in_dr0;
          }
        case 2:
          uVar6 = (undefined4)((ulonglong)in_dr0 >> 0x20);
          ({ unsigned long ri0_ = (unsigned long)(ain0); vin0 = (unsigned)ri0_; vsp = ((unsigned long)(fr0_ - 396)); CAnimBody_GetCurFrame(ar4 + 0xb0,iVar5,ar6_00,ar7_00); });
          if (cVar13 == '\0') {
            uVar9 = CONCAT44(*(undefined4 *)(unsigned)(ar4 + 0x24c),uVar6);
          }
          else {
            uVar9 = *(undefined8 *)(unsigned)(ar4 + 0x24c);
          }
          if (cVar12 != '\0' || F32HI(uVar9) <= (float)uVar9) {
            if (*(int *)(unsigned)(ar4 + 0x324) == 0) {
              iVar4 = (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033d90(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
              if (iVar4 == 7) {
                (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
                if (cVar13 == '\0') {
                  *(int *)(unsigned)(ar4 + 0x248) = (int)((ulonglong)uVar9 >> 0x20);
                }
                else {
                  *(undefined8 *)(unsigned)(ar4 + 0x248) = uVar9;
                }
                iVar5 = *(int *)(unsigned)(ar4 + 0x280) + -1;
                *(int *)(unsigned)(ar4 + 0x280) = iVar5;
                if (iVar5 < 0) {
                  ar6_00 = (code *)0x64;
                  iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), rand_range(ar4,0,100,ar7_00));
                  if (iVar5 < 5) {
                    *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
                  }
                  else {
                    *(undefined4 *)(unsigned)(ar4 + 300) = 1;
                  }
                  *(undefined4 *)(unsigned)(ar4 + 0x280) = 0;
                }
              }
            }
            else {
              iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
              if (iVar5 == 1) {
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
                (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
                return 0;
              }
            }
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_AdvanceFrame_033ba0(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          }
          break;
        case 3:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          if (iVar5 == 1) {
            ar7_00 = (undefined4 *)(unsigned)0x0;
            ar6_00 = (code *)0xffffffff;
            uVar6 = 2;
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,2,0xffffffff,0));
            (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          }
          break;
        case 4:
          iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,iVar5,ar6_00,ar7_00));
          if (iVar5 == 1) {
            *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          }
        }
      }
    }
    else if ((iVar5 == 3) || (iVar5 == 4)) {
      iVar5 = *(int *)(unsigned)(ar4 + 300);
      if (iVar5 == 0) {
        iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
        if (iVar5 == 1) {
          iVar5 = *(int *)(unsigned)(ar4 + 0x344);
          if (iVar5 == 3) {
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,3,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,iVar5,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0x94)),iVar5,ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0x94)),ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xa4)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa4)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x94)),0xffffffff,ar6_00,ar7_00));
          }
          else {
            ar5_01 = ((void *)0x8c032ab0);
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,((void *)0x8c032ab0),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c032ab0(ar4,ar5_01,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_ctor_xyz(((undefined1 *)(fr0_ - 0xb4)),((void *)0x8c022ce8),ar6_00,ar7_00));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xc4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_add(ar7,((undefined1 *)(fr0_ - 0xb4)),ar6_00,ar7_00); });
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0xc4)),ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xc4)),0xffffffff,ar6_00,ar7_00));
            (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xb4)),0xffffffff,ar6_00,ar7_00));
          }
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
      }
      else if (iVar5 == 1) {
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar6,ar6_00,ar7_00); });
        uVar6 = ar7;
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); Vec3_sub(ar4 + 0x54,ar7,ar6_00,ar7_00); });
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf4))); *(unsigned *)((((unsigned long)(fr0_ - 396)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 396)) - 8); FUN_8c0230f0(((undefined1 *)(fr0_ - 0xe4)),uVar6,ar6_00,ar7_00); });
        (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xd4)),((undefined1 *)(fr0_ - 0xf4)),ar6_00,ar7_00));
        if (cVar13 == '\0') {
          in_fr15 = F32HI(in_dr0);
        }
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf4)),0xffffffff,ar6_00,ar7_00));
        uVar2 = (undefined4)in_dr0;
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe4)),0xffffffff,ar6_00,ar7_00));
        uVar6 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd4)),0xffffffff,ar6_00,ar7_00));
        if (cVar13 == '\0') {
          dVar10 = CONCAT44D(0x41200000,uVar2);
        }
        else {
          dVar10 = -9.376284372703036e-251;
        }
        if (cVar12 == '\0') {
          bVar11 = F32HI(dVar10) < in_fr15;
        }
        else {
          bVar11 = dVar10 < CONCAT44D(in_fr14,in_fr15);
        }
        if (bVar11) {
          ar6_00 = (code *)(ar4 + 0x54);
          (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c057b6c(ar4,ar7,ar6_00,ar7_00));
          uVar6 = 300;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          if (*(int *)(unsigned)(ar4 + 0x344) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x27c) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x344) = 0;
        }
        (vsp = ((unsigned long)(fr0_ - 396)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
      }
      else if (iVar5 == 2) {
        ar6_00 = ((void *)0x8c057e58);
        iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), FUN_8c057e58(ar4,uVar6,((void *)0x8c057e58),ar7_00));
        if (iVar5 == 0) {
          ar6_00 = (code *)0x12c;
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + -1;
        }
      }
    }
  }
  else {
    iVar5 = (vsp = ((unsigned long)(fr0_ - 396)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,uVar6,ar6_00,ar7_00));
    if (iVar5 == 1) {
      *(undefined4 *)(unsigned)(ar4 + 300) = 0;
      uVar7 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b8) = 2;
      *(undefined4 *)(unsigned)(ar4 + 0x284) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 396)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6_00,ar7_00));
  return uVar7;
}

__asm__(".globl _FUN_8c053f24\n.set _FUN_8c053f24, _FUN_8c053f24_def\n");
