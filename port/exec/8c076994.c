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
undefined4 FUN_8c076994_def(int ar4,undefined4 *ar5,code *ar6,undefined *ar7)

{
  ring[rp++ & 255] = "FUN_8c076994";
  vr4 = (unsigned)(long long)ar4; vr5 = (unsigned)(long long)ar5; vr6 = (unsigned)(long long)ar6; vr7 = (unsigned)(long long)ar7;

  unsigned char *fr0_ = (unsigned char *)(unsigned long)vsp;
  { unsigned char *z_ = fr0_ - 388; for (int i_ = 0; i_ < 388; i_++) z_[i_] = 0; }
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int ar5_00;
  undefined *puVar5;
  undefined4 ar7_00;
  undefined4 uVar6;
  int iVar7;
  float fVar8;
  undefined8 in_dr0 = 0;
  float fVar9;
  bool bVar10;
  char cVar11;
  char cVar12;
  
  fVar8 = F32HI(in_dr0);
  cVar12 = '\0';
  cVar11 = '\0';
  uVar6 = 1;
  iVar7 = 0;
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_zero(((undefined1 *)(fr0_ - 0x28)),ar5,ar6,ar7));
  pcVar4 = ((void *)0x8c053724);
  uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c053724(*ar5,((void *)0x8c053724),ar6,ar7));
  if ((char)uVar2 == '\0') {
    iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,pcVar4,ar6,ar7));
    if (iVar3 != 0) {
      *(undefined4 *)(unsigned)(ar4 + 0x294) = 0;
      uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x34))))((int *)(unsigned)*ar5,pcVar4,ar6,ar7));
      *(undefined4 *)(unsigned)(ar4 + 0x2d8) = uVar2;
      (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
      if (*(int *)(unsigned)(ar4 + 0x2d8) == 3) {
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x34)),0x2d8,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x44))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x34)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x44)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x44)),0xffffffff,ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x34)),0xffffffff,ar6,ar7));
        ar6 = (code *)((undefined1 *)(fr0_ - 0x54));
        ({ unsigned long t0_ = (unsigned long)(ar6); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x54)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.69049e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x54)),0xffffffff,ar6,ar7));
        if (bVar1 || bVar10) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
        }
      }
      else if (*(int *)(unsigned)(ar4 + 0x2d8) == 4) {
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x60)),0x2d8,ar6,ar7));
        ar7 = ((undefined1 *)(unsigned)0x8c125e68);
        ar6 = ((void *)0x8c023484);
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x70))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x60)),((void *)0x8c023484),((undefined1 *)(unsigned)0x8c125e68)); });
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0x70)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x70)),0xffffffff,ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x60)),0xffffffff,ar6,ar7));
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x80))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x80)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
        if (cVar12 == '\0') {
          fVar9 = 15.0;
        }
        else {
          fVar8 = 15.0;
          fVar9 = 2.63444e-43;
        }
        bVar1 = cVar11 != '\0';
        bVar10 = fVar9 <= fVar8;
        fVar8 = fVar9;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x80)),0xffffffff,ar6,ar7));
        if (bVar1 || bVar10) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        else {
          *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
        }
      }
      else if ((((*(int *)(unsigned)(ar4 + 0x2d8) != 8) && (*(int *)(unsigned)(ar4 + 0x2d8) != 5)) &&
               (*(int *)(unsigned)(ar4 + 0x2d8) != 7)) && (*(int *)(unsigned)(ar4 + 0x2d8) != 6)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d8) = 0;
      }
      (vsp = ((unsigned long)(fr0_ - 388)), (*(code *)xlat((unsigned long)*(unsigned *)(unsigned)((*(int *)(unsigned)*ar5 + 0x38))))((int *)(unsigned)*ar5,0,ar6,ar7));
      if (((*(int *)(unsigned)(ar4 + 0x2d8) != *(int *)(unsigned)(ar4 + 0x2d4)) && (*(int *)(unsigned)(ar4 + 0x2d4) != 8)) &&
         (*(int *)(unsigned)(ar4 + 0x2d4) != 7)) {
        *(undefined4 *)(unsigned)(ar4 + 0x2d4) = *(undefined4 *)(unsigned)(ar4 + 0x2d8);
      }
    }
    iVar3 = *(int *)(unsigned)(ar4 + 0x2d4);
    if ((iVar3 < 9) && (-1 < iVar3)) {
                    
      switch(iVar3) {
      case 0:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x90))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,(&(*(undefined1 *)(unsigned)0x8c076ce0))[iVar3],ar6,ar7); })
        ;
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0x90)),ar6,ar7));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x90)),0xffffffff,ar6,ar7));
        iVar3 = *(int *)(unsigned)(ar4 + 300);
        if ((iVar3 < 5) && (-1 < iVar3)) {
          ar5_00 = iVar3 * 4;
                    
          switch(iVar3) {
          case 0:
            (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,ar7));
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          case 1:
            iVar7 = *(int *)(unsigned)(ar4 + 0x260);
            if (iVar7 == 0) {
              uVar2 = 0;
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0,0xffffffff,0));
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,((void *)0x8c033e68),ar6,uVar2));
            }
            else if (iVar7 == 3) {
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,5,0xffffffff,0));
            }
            else if (iVar7 == 4) {
              ar6 = (code *)0xffffffff;
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,6,0xffffffff,0));
            }
            *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            break;
          case 2:
            iVar3 = *(int *)(unsigned)(ar4 + 0x260);
            if (iVar3 == 0) {
              iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xa0))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,ar5_00,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xa0)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 45.0;
              }
              else {
                fVar8 = 45.0;
                fVar9 = 2.57839e-43;
              }
              (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xa0)),0xffffffff,ar6,ar7));
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
                if (iVar3 == 3) {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
            else if ((iVar3 == 3) || (iVar3 == 4)) {
              iVar3 = *(int *)(unsigned)(ar4 + 0x128);
              if ((iVar3 < 8) && (-1 < iVar3)) {
                    
                switch(iVar3) {
                case 0:
                case 1:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                case 2:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                default:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                  break;
                case 6:
                  iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03f3ac(ar4 + 0xb0,ar5_00,ar6,ar7));
                }
              }
              if (*(int *)(unsigned)(ar4 + 0x260) == 3) {
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xac)),((void *)0x8c023d68),ar6,ar7));
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xbc))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0xac)),ar6,ar7); });
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xbc)),ar6,ar7));
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xbc)),0xffffffff,ar6,ar7));
                uVar2 = 0xffffffff;
                (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0xac)),0xffffffff,ar6,ar7));
              }
              else {
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0xc8)),ar5_00,ar6,ar7));
                ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xd8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0xc8)),ar6,ar7); });
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(((undefined1 *)(fr0_ - 0x28)),((undefined1 *)(fr0_ - 0xd8)),ar6,ar7));
                (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xd8)),0xffffffff,ar6,ar7));
                uVar2 = 0xffffffff;
                (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0xc8)),0xffffffff,ar6,ar7));
              }
              ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xe8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,uVar2,ar6,ar7); });
              (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0xe8)),((undefined1 *)(fr0_ - 0x28)),ar6,ar7));
              if (cVar12 == '\0') {
                fVar9 = 35.0;
              }
              else {
                fVar8 = 35.0;
                fVar9 = 2.52234e-43;
              }
              (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xe8)),0xffffffff,ar6,ar7));
              if (cVar11 == '\0' && fVar9 < fVar8) {
                iVar3 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
                if (iVar3 == 3) {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 3;
                }
                else {
                  *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 4;
                }
                *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
                *(undefined4 *)(unsigned)(ar4 + 300) = 0;
              }
            }
            if ((iVar7 == 7) || (iVar7 == 1)) {
              ar6 = (code *)0x64;
              iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), rand_range(ar4,0,100,ar7));
              if (iVar7 < 2) {
                *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
              }
              else {
                *(undefined4 *)(unsigned)(ar4 + 300) = 1;
              }
            }
            break;
          case 3:
            iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
            if (iVar7 == 1) {
              if (*(int *)(unsigned)(ar4 + 0x128) == 6) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x25;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x25,0,0));
              }
              else if (*(int *)(unsigned)(ar4 + 0x128) == 7) {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x2f;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x2f,0,0));
              }
              else {
                ar7_00 = 0;
                ar6 = (code *)0x0;
                uVar2 = 0x13;
                (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetAnimation_033a94(ar4 + 0xb0,0x13,0,0));
              }
              (vsp = ((unsigned long)(fr0_ - 388)), s_CAnimBody_SetFrame_033e6e(ar4 + 0xb0,uVar2,ar6,ar7_00));
              *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
            }
            break;
          case 4:
            iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,ar5_00,ar6,ar7));
            if (iVar7 == 1) {
              *(undefined4 *)(unsigned)(ar4 + 300) = 1;
            }
          }
        }
        break;
      case 3:
      case 4:
        ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0xf8))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7); });
        (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c082378(ar4,((undefined1 *)(fr0_ - 0xf8)),ar6,ar7));
        uVar2 = 0xffffffff;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0xf8)),0xffffffff,ar6,ar7));
        if (*(int *)(unsigned)(ar4 + 300) == 0) {
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c032ab0(ar4,uVar2,ar6,ar7));
          if (*(int *)(unsigned)(ar4 + 0x2d4) == 3) {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x104)),uVar2,ar6,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x114))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x104)),ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x114)),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x114)),0xffffffff,ar6,ar7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x104)),0xffffffff,ar6,ar7));
          }
          else {
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_set_xyz(((undefined1 *)(fr0_ - 0x120)),uVar2,ar6,ar7));
            ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x130))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c023484(((undefined1 *)(unsigned)0x8c125e68),((undefined1 *)(fr0_ - 0x120)),ar6,ar7); });
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_assign(ar4 + 0x54,((undefined1 *)(fr0_ - 0x130)),ar6,ar7));
            (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x130)),0xffffffff,ar6,ar7));
            uVar2 = 0xffffffff;
            (vsp = ((unsigned long)(fr0_ - 388)), object_dtor_delete(((undefined1 *)(fr0_ - 0x120)),0xffffffff,ar6,ar7));
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_length(ar4 + 0x54,uVar2,ar6,ar7));
          *(int *)(unsigned)(ar4 + 300) = *(int *)(unsigned)(ar4 + 300) + 1;
          ar7 = (undefined *)(unsigned)(ar4 + 0xb0);
          ar6 = ((void *)0x8c026dd8);
          iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), get_field_1c_026dd8(ar7,300,((void *)0x8c026dd8),ar7));
          if (iVar7 == 0) {
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 1;
          }
          else {
            ar7 = (undefined *)(unsigned)0x2b0;
            ar6 = (code *)0x0;
            *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
        }
        else if (*(int *)(unsigned)(ar4 + 300) != 1) break;
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_ctor_copy(((undefined1 *)(fr0_ - 0x140)),ar4 + 0x54,ar6,ar7));
        ar6 = (code *)0x1;
        pcVar4 = ((void *)0x8c0811b4);
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0811b4(ar4,((undefined1 *)(fr0_ - 0x140)),1,((void *)0x8c0811b4)));
        (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x140)),0xffffffff,ar6,pcVar4));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b0) = 0;
          *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
          if (*(int *)(unsigned)(ar4 + 0x2d4) == 3) {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 4;
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 4;
          }
          else {
            *(undefined4 *)(unsigned)(ar4 + 0x220) = 3;
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 3;
          }
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
        }
        break;
      case 5:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0839c0(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x150))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x150)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.41023e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x150)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 6:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c083780(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x160))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x160)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.35418e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x160)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
        }
        break;
      case 7:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c0845f4(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          puVar5 = ((undefined1 *)(unsigned)0x8c125e68);
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x170))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,puVar5,ar6,ar7); });
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x170)),((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.29813e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x170)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
        break;
      case 8:
        iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c083d8c(ar4,ar5,ar6,ar7));
        if (iVar7 == 0) {
          *(undefined4 *)(unsigned)(ar4 + 0x2d4) = 0;
          uVar2 = (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c023334(ar4 + 0x14,((undefined1 *)(unsigned)0x8c125e68),ar6,ar7));
          *(undefined4 *)(unsigned)(ar4 + 0x260) = uVar2;
          ({ unsigned long t0_ = (unsigned long)(((undefined1 *)(fr0_ - 0x180))); *(unsigned *)((((unsigned long)(fr0_ - 388)) - 8) + 0) = (unsigned)t0_; vsp = (((unsigned long)(fr0_ - 388)) - 8); FUN_8c0230f0(ar4 + 0x14,((void *)0x8c0230f0),ar6,ar7); });
          ar6 = ((void *)0x8c022dac);
          (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c022dac(((undefined1 *)(fr0_ - 0x180)),((undefined1 *)(unsigned)0x8c125e68),((void *)0x8c022dac),ar7));
          if (cVar12 == '\0') {
            fVar9 = 20.0;
          }
          else {
            fVar8 = 20.0;
            fVar9 = 2.24208e-43;
          }
          (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x180)),0xffffffff,ar6,ar7));
          if (cVar11 == '\0' && fVar8 < fVar9) {
            *(undefined4 *)(unsigned)(ar4 + 0x260) = 0;
          }
          *(undefined4 *)(unsigned)(ar4 + 300) = 0;
        }
      }
    }
  }
  else {
    iVar7 = (vsp = ((unsigned long)(fr0_ - 388)), CAnimBody_AdvanceFrame_wrapper(ar4 + 0xb0,pcVar4,ar6,ar7));
    if (iVar7 == 1) {
      (vsp = ((unsigned long)(fr0_ - 388)), FUN_8c03c314(ar4,pcVar4,ar6,ar7));
      uVar6 = 0;
      *(undefined4 *)(unsigned)(ar4 + 0x2b4) = 0;
    }
  }
  (vsp = ((unsigned long)(fr0_ - 388)), Vec3_dtor(((undefined1 *)(fr0_ - 0x28)),0xffffffff,ar6,((void *)0x8c022cb0)));
  return uVar6;
}

__asm__(".globl _FUN_8c076994\n.set _FUN_8c076994, _FUN_8c076994_def\n");
